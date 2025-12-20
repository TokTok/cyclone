/* Translate Cyclone abstract syntax to C abstract syntax.
   Copyright (C) 2001 Greg Morrisett
   This file is part of the Cyclone compiler.

   The Cyclone compiler is free software; you can redistribute it
   and/or modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation; either version 2 of
   the License, or (at your option) any later version.

   The Cyclone compiler is distributed in the hope that it will be
   useful, but WITHOUT ANY WARRANTY; without even the implied warranty
   of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with the Cyclone compiler; see the file COPYING. If not,
   write to the Free Software Foundation, Inc., 59 Temple Place -
   Suite 330, Boston, MA 02111-1307, USA. */

#ifndef _TOC_H_
#define _TOC_H_

#include "absyn.h"
#include "cyclone/library/std/hashtable.h"

namespace Toc {
  using Absyn;
  using List;

  typedef Hashtable::table_t<`a,`b> table_t<`a,`b>;

  // Context for the translation pass
  struct TocContext {
    list_t<decl_t> result_decls;
    table_t<fndecl_t, table_t<stmt_t, int>> *pop_tables;
    table_t<stmt_t, int> *fn_pop_table;
  };
  typedef struct TocContext *toc_context_t;

  // We can alpha-convert just by mutating a vd->name.  When we hoist
  // a declaration (in pattern-compilation), we must alpha-convert.
  struct FallthruInfo {
    var_t label;
    list_t<vardecl_t> binders;
  };

  struct Env<`r> {
    toc_context_t ctxt;
    var_t *`r break_lab;
    var_t *`r continue_lab;
    struct FallthruInfo *`r fallthru_info;
    bool toplevel;
    bool @`r in_lhs;
    region_t<`r> rgn;
  };
  typedef struct Env<`r> @`r env_t<`r>;

  // translate the declarations to C
  list_t<decl_t> toc(table_t<fndecl_t, table_t<stmt_t, int>> pop_tables, list_t<decl_t>);

  // translate a Cyclone type to a C type (functionally)
  type_t typ_to_c(type_t);
  
  env_t<`r> empty_env(region_t<`r> r, toc_context_t ctxt);
  void exp_to_c(env_t, exp_t);
  void stmt_to_c(env_t, stmt_t);

  // this is just for other translation files
  qvar_t temp_var();
  extern stringptr_t ? globals;
  // for passing New_e destinations to RemoveAggrs
  @extensible datatype Absyn::AbsynAnnot {
    extern NewInfo(exp_t, type_t);
  };
  void init();
  void finish();  // call this when done with a batch of typ_to_c calls
}  // namespace Toc
#endif
