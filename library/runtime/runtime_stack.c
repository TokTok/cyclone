/* This file is part of the Cyclone Library.
   Copyright (C) 2001 Greg Morrisett, AT&T

   This library is free software; you can redistribute it and/or it
   under the terms of the GNU Lesser General Public License as
   published by the Free Software Foundation; either version 2.1 of
   the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with this library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place, Suite
   330, Boston, MA 02111-1307 USA. */

// This is implements the stack used by exceptions and lexical regions.

#include <stdio.h>
#include <stdlib.h>

#include "runtime_internal.h"

static __thread struct _RuntimeStack *_current_frame = NULL;

void _init_stack() {}

struct _RuntimeStack *get_current_frame() { return _current_frame; }

void set_current_frame(struct _RuntimeStack *frame) { _current_frame = frame; }

void _push_frame(struct _RuntimeStack *frame) {
  frame->next = get_current_frame();
  set_current_frame(frame);
}

// set _current_frame to its n+1'th tail (i.e. pop n+1 frames)
// Invariant: result is non-null
void _npop_frame(unsigned int n) {
  unsigned int i;
  for (i = n; i <= n; i--) {
    struct _RuntimeStack *current_frame = get_current_frame();
    if (current_frame == NULL) {
      fprintf(stderr, "internal error: empty frame stack\n");
      exit(1);
    }
    if (current_frame->cleanup != NULL)
      current_frame->cleanup(current_frame);
    current_frame = current_frame->next;
    set_current_frame(current_frame);
  }
}

struct _RuntimeStack *_top_frame() { return get_current_frame(); }

struct _RuntimeStack *_frame_until(int tag, int do_pop) {
  struct _RuntimeStack *current_frame = get_current_frame();
  while (current_frame != NULL && current_frame->tag != tag) {
    if (do_pop && current_frame->cleanup != NULL)
      current_frame->cleanup(current_frame);
    current_frame = current_frame->next;
  }
  if (do_pop)
    set_current_frame(current_frame);
  return current_frame;
}

// set _current_frame to the first frame with the given tag.
// If no such frame is found, _current_frame is set to NULL.
struct _RuntimeStack *_pop_frame_until(int tag) { return _frame_until(tag, 1); }
