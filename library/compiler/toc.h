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
#include "cyclone/library/std/dict.h"
#include "cyclone/library/std/set.h"
#include "cyclone/library/std/xarray.h"

namespace Toc {
  using Absyn;
  using List;

  typedef Hashtable::table_t<`a,`b> table_t<`a,`b>;

  struct TocState<`d> {
    // tuple types seen so far and the struct they map to
    list_t<$(type_t, list_t<type_t,`d>) @`d,`d> @`d tuple_types;
    // anonymous aggr types seen so far and the struct they map to (rare)
    // FIX: would be nice to share more code with tuple translation
    list_t<$(type_t, aggr_kind_t, list_t<aggrfield_t>) @`d,`d> @`d anon_aggr_types;
    // (non-tagged) aggregates seen so far, their declaration, and C type
    Dict::dict_t<qvar_t, $(aggrdecl_t, type_t) @`d,`d> @`d aggrs_so_far;
    // instantiations of abstract structs generated
    list_t<$(qvar_t, list_t<type_t>, type_t) @`d,`d> @`d abs_struct_types;
    // datatypes seen so far
    Set::set_t<qvar_t,`d> @`d datatypes_so_far;
    // xdatatypes seen so far -- bool is false if seen but not initialized
    // (extern)
    Dict::dict_t<qvar_t, bool,`d> @`d xdatatypes_so_far;
    // generated identifiers from combining other identifiers -- used when
    // collapsing datatype members with the datatype itself.
    Dict::dict_t<$(qvar_t, qvar_t) @`d, qvar_t,`d> @`d qvar_tags;
    // generated labels -- get re-used across functions
    Xarray::xarray_t<var_t,`d> temp_labels;
  };

  struct TocStateWrap {
    <`d::E>
        //  Core::real_rcregion_key_t<`d> dyn;
        Core::rcregion_key_t<`d> dyn;
    struct TocState<`d> @`d state;
  };
  typedef struct TocStateWrap *`U toc_state_t;

  // Context for the translation pass
  struct TocContext {
    list_t<decl_t> result_decls;
    table_t<fndecl_t, table_t<stmt_t, int>> *pop_tables;
    table_t<stmt_t, int> *fn_pop_table;

    // Global state moved from toc.cyc
    int tuple_type_counter;
    int temp_var_counter;
    int fresh_label_counter;
    
    // Internal state (opaque pointer to TocStateWrap)
    toc_state_t toc_state;
    
    // Memoization caches
    list_t<$(var_t, field_name_t, type_t) @> tagged_union_cache;
    type_opt_t void_star_type_cache;
    type_opt_t fat_ptr_type_cache;
    type_opt_t rgn_type_cache;
    type_opt_t aqualt_type_cache;
    exp_opt_t aliasable_qual_exp_cache;
    exp_opt_t get_exn_thrown_exp_cache;

    // Globals list
    stringptr_t ? globals;
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
  list_t<decl_t> toc(toc_context_t ctxt, table_t<fndecl_t, table_t<stmt_t, int>> pop_tables, list_t<decl_t>);

  // translate a Cyclone type to a C type (functionally)
  type_t typ_to_c(toc_context_t, type_t);
  
  env_t<`r> empty_env(region_t<`r> r, toc_context_t ctxt);
  void exp_to_c(env_t, exp_t);
  void stmt_to_c(env_t, stmt_t);

  // this is just for other translation files
  qvar_t temp_var(toc_context_t);
  // for passing New_e destinations to RemoveAggrs
  @extensible datatype Absyn::AbsynAnnot {
    extern NewInfo(exp_t, type_t);
  };
  
  toc_context_t Toc_Ctx_create();
  void Toc_Ctx_destroy(toc_context_t);
}  // namespace Toc
#endif
