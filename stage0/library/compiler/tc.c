#include <cyc_include.h>
 struct Cyc_Core_Opt{void*v;};struct _tuple0{void*f0;void*f1;};
# 106 "./cyclone/library/std/core.h"
void*Cyc_Core_fst(struct _tuple0*);
# 166
extern struct _RegionHandle*Cyc_Core_heap_region;struct Cyc_Core_DynamicRegion;struct Cyc___cycFILE;
# 53 "./cyclone/library/std/cycboot.h"
extern struct Cyc___cycFILE*Cyc_stderr;struct Cyc_String_pa_PrintArg_struct{int tag;struct _fat_ptr f1;};
# 100
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);struct Cyc_List_List{void*hd;struct Cyc_List_List*tl;};
# 64 "./cyclone/library/std/list.h"
extern int Cyc_List_length(struct Cyc_List_List*);
# 79
extern struct Cyc_List_List*Cyc_List_map(void*(*)(void*),struct Cyc_List_List*);
# 86
extern struct Cyc_List_List*Cyc_List_map_c(void*(*)(void*,void*),void*,struct Cyc_List_List*);
# 185
extern struct Cyc_List_List*Cyc_List_append(struct Cyc_List_List*,struct Cyc_List_List*);
# 317
extern long Cyc_List_mem(int(*)(void*,void*),struct Cyc_List_List*,void*);
# 389
extern struct Cyc_List_List*Cyc_List_filter_c(long(*)(void*,void*),void*,struct Cyc_List_List*);
# 40 "./cyclone/library/std/string.h"
extern unsigned long Cyc_strlen(struct _fat_ptr);
# 51
extern int Cyc_strcmp(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_strptrcmp(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_AssnDef_ExistAssnFn;struct _union_Nmspace_Abs_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_Rel_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_C_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_Loc_n{int tag;int val;};union Cyc_Absyn_Nmspace{struct _union_Nmspace_Abs_n Abs_n;struct _union_Nmspace_Rel_n Rel_n;struct _union_Nmspace_C_n C_n;struct _union_Nmspace_Loc_n Loc_n;};struct _tuple1{union Cyc_Absyn_Nmspace f0;struct _fat_ptr*f1;};
# 148 "cyclone/library/compiler/absyn.h"
enum Cyc_Absyn_Scope{Cyc_Absyn_Static =0U,Cyc_Absyn_Abstract =1U,Cyc_Absyn_Public =2U,Cyc_Absyn_Extern =3U,Cyc_Absyn_ExternC =4U,Cyc_Absyn_Register =5U,Cyc_Absyn_Noreturn =6U};struct Cyc_Absyn_Tqual{long print_const: 1;long q_volatile: 1;long q_restrict: 1;long real_const: 1;unsigned loc;};
# 170
enum Cyc_Absyn_Size_of{Cyc_Absyn_Char_sz =0U,Cyc_Absyn_Short_sz =1U,Cyc_Absyn_Int_sz =2U,Cyc_Absyn_Long_sz =3U,Cyc_Absyn_LongLong_sz =4U,Cyc_Absyn_Int128_sz =5U};
# 180
enum Cyc_Absyn_Sign{Cyc_Absyn_Signed =0U,Cyc_Absyn_Unsigned =1U,Cyc_Absyn_None =2U};
# 186
enum Cyc_Absyn_AggrKind{Cyc_Absyn_StructA =0U,Cyc_Absyn_UnionA =1U};
# 210 "cyclone/library/compiler/absyn.h"
enum Cyc_Absyn_AliasHint{Cyc_Absyn_UniqueHint =0U,Cyc_Absyn_RefcntHint =1U,Cyc_Absyn_RestrictedHint =2U,Cyc_Absyn_NoHint =3U};
# 217
enum Cyc_Absyn_KindQual{Cyc_Absyn_AnyKind =0U,Cyc_Absyn_MemKind =1U,Cyc_Absyn_BoxKind =2U,Cyc_Absyn_EffKind =3U,Cyc_Absyn_IntKind =4U,Cyc_Absyn_BoolKind =5U,Cyc_Absyn_PtrBndKind =6U,Cyc_Absyn_AqualKind =7U};struct Cyc_Absyn_Kind{enum Cyc_Absyn_KindQual kind;enum Cyc_Absyn_AliasHint aliashint;};struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct{int tag;struct Cyc_Absyn_Kind*f1;};struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct{int tag;struct Cyc_Core_Opt*f1;};struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct{int tag;struct Cyc_Core_Opt*f1;struct Cyc_Absyn_Kind*f2;};struct Cyc_Absyn_Tvar{struct _fat_ptr*name;int identity;void*kind;void*aquals_bound;};struct Cyc_Absyn_VarargInfo{struct _fat_ptr*name;struct Cyc_Absyn_Tqual tq;void*type;long inject;};struct Cyc_Absyn_FnInfo{struct Cyc_List_List*tvars;void*effect;struct Cyc_Absyn_Tqual ret_tqual;void*ret_type;struct Cyc_List_List*args;long c_varargs;struct Cyc_Absyn_VarargInfo*cyc_varargs;struct Cyc_List_List*qual_bnd;struct Cyc_List_List*attributes;struct Cyc_Absyn_Exp*checks_clause;struct Cyc_AssnDef_ExistAssnFn*checks_assn;struct Cyc_Absyn_Exp*requires_clause;struct Cyc_AssnDef_ExistAssnFn*requires_assn;struct Cyc_Absyn_Exp*ensures_clause;struct Cyc_AssnDef_ExistAssnFn*ensures_assn;struct Cyc_Absyn_Exp*throws_clause;struct Cyc_AssnDef_ExistAssnFn*throws_assn;struct Cyc_Absyn_Vardecl*return_value;struct Cyc_List_List*arg_vardecls;struct Cyc_List_List*effconstr;};struct Cyc_Absyn_ArrayInfo{void*elt_type;struct Cyc_Absyn_Tqual tq;struct Cyc_Absyn_Exp*num_elts;void*zero_term;unsigned zt_loc;};struct Cyc_Absyn_IntCon_Absyn_TyCon_struct{int tag;enum Cyc_Absyn_Sign f1;enum Cyc_Absyn_Size_of f2;};struct Cyc_Absyn_SingleConstraint_Absyn_EffConstraint_struct{int tag;void*f1;};struct Cyc_Absyn_DisjointConstraint_Absyn_EffConstraint_struct{int tag;void*f1;void*f2;};struct Cyc_Absyn_SubsetConstraint_Absyn_EffConstraint_struct{int tag;void*f1;void*f2;};struct Cyc_Absyn_AppType_Absyn_Type_struct{int tag;void*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_ArrayType_Absyn_Type_struct{int tag;struct Cyc_Absyn_ArrayInfo f1;};struct Cyc_Absyn_ValueofType_Absyn_Type_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_No_throw_att_Absyn_Attribute_struct{int tag;};struct _union_Cnst_Null_c{int tag;int val;};struct _tuple4{enum Cyc_Absyn_Sign f0;char f1;};struct _union_Cnst_Char_c{int tag;struct _tuple4 val;};struct _union_Cnst_Wchar_c{int tag;struct _fat_ptr val;};struct _tuple5{enum Cyc_Absyn_Sign f0;short f1;};struct _union_Cnst_Short_c{int tag;struct _tuple5 val;};struct _tuple6{enum Cyc_Absyn_Sign f0;int f1;};struct _union_Cnst_Int_c{int tag;struct _tuple6 val;};struct _tuple7{enum Cyc_Absyn_Sign f0;long long f1;};struct _union_Cnst_LongLong_c{int tag;struct _tuple7 val;};struct _union_Cnst_Int128_c{int tag;struct _tuple7 val;};struct _tuple8{struct _fat_ptr f0;int f1;};struct _union_Cnst_Float_c{int tag;struct _tuple8 val;};struct _union_Cnst_String_c{int tag;struct _fat_ptr val;};struct _union_Cnst_Wstring_c{int tag;struct _fat_ptr val;};union Cyc_Absyn_Cnst{struct _union_Cnst_Null_c Null_c;struct _union_Cnst_Char_c Char_c;struct _union_Cnst_Wchar_c Wchar_c;struct _union_Cnst_Short_c Short_c;struct _union_Cnst_Int_c Int_c;struct _union_Cnst_LongLong_c LongLong_c;struct _union_Cnst_Int128_c Int128_c;struct _union_Cnst_Float_c Float_c;struct _union_Cnst_String_c String_c;struct _union_Cnst_Wstring_c Wstring_c;};struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct{int tag;union Cyc_Absyn_Cnst f1;};struct _tuple9{struct _fat_ptr*f0;struct Cyc_Absyn_Tqual f1;void*f2;};struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct{int tag;struct Cyc_List_List*f1;};struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Vardecl*f1;struct Cyc_Absyn_Exp*f2;struct Cyc_Absyn_Exp*f3;long f4;};struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;void*f2;long f3;};struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Core_Opt*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Exp{void*topt;void*r;unsigned loc;void*annot;};struct Cyc_Absyn_Stmt{void*r;unsigned loc;void*annot;};struct Cyc_Absyn_Global_b_Absyn_Binding_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};struct Cyc_Absyn_Funname_b_Absyn_Binding_struct{int tag;struct Cyc_Absyn_Fndecl*f1;};struct Cyc_Absyn_Vardecl{enum Cyc_Absyn_Scope sc;struct _tuple1*name;unsigned varloc;struct Cyc_Absyn_Tqual tq;void*type;struct Cyc_Absyn_Exp*initializer;void*rgn;struct Cyc_List_List*attributes;long escapes;long is_proto;struct Cyc_Absyn_Exp*rename;};struct Cyc_Absyn_Fndecl{enum Cyc_Absyn_Scope sc;long is_inline;struct _tuple1*name;struct Cyc_Absyn_Stmt*body;struct Cyc_Absyn_FnInfo i;void*cached_type;struct Cyc_Core_Opt*param_vardecls;struct Cyc_Absyn_Vardecl*fn_vardecl;enum Cyc_Absyn_Scope orig_scope;long escapes;};struct Cyc_Absyn_Aggrfield{struct _fat_ptr*name;struct Cyc_Absyn_Tqual tq;void*type;struct Cyc_Absyn_Exp*width;struct Cyc_List_List*attributes;struct Cyc_Absyn_Exp*requires_clause;};struct Cyc_Absyn_AggrdeclImpl{struct Cyc_List_List*exist_vars;struct Cyc_List_List*qual_bnd;struct Cyc_List_List*fields;long tagged;struct Cyc_List_List*effconstr;};struct Cyc_Absyn_Aggrdecl{enum Cyc_Absyn_AggrKind kind;enum Cyc_Absyn_Scope sc;struct _tuple1*name;struct Cyc_List_List*tvs;struct Cyc_Absyn_AggrdeclImpl*impl;struct Cyc_List_List*attributes;long expected_mem_kind;};struct Cyc_Absyn_Datatypefield{struct _tuple1*name;struct Cyc_List_List*typs;unsigned loc;enum Cyc_Absyn_Scope sc;};struct Cyc_Absyn_Datatypedecl{enum Cyc_Absyn_Scope sc;struct _tuple1*name;struct Cyc_List_List*tvs;struct Cyc_Core_Opt*fields;long is_extensible;};struct Cyc_Absyn_Enumfield{struct _tuple1*name;struct Cyc_Absyn_Exp*tag;unsigned loc;};struct Cyc_Absyn_Enumdecl{enum Cyc_Absyn_Scope sc;struct _tuple1*name;struct Cyc_Core_Opt*fields;};struct Cyc_Absyn_Typedefdecl{struct _tuple1*name;struct Cyc_Absyn_Tqual tq;struct Cyc_List_List*tvs;struct Cyc_Core_Opt*kind;void*defn;struct Cyc_List_List*atts;long extern_c;};struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Fndecl*f1;};struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Aggrdecl*f1;};struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Datatypedecl*f1;};struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Enumdecl*f1;};struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Typedefdecl*f1;};struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct{int tag;struct _fat_ptr*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct{int tag;struct _tuple1*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct{int tag;struct Cyc_List_List*f1;};struct _tuple11{unsigned f0;struct Cyc_List_List*f1;};struct Cyc_Absyn_ExternCinclude_d_Absyn_Raw_decl_struct{int tag;struct Cyc_List_List*f1;struct Cyc_List_List*f2;struct Cyc_List_List*f3;struct _tuple11*f4;};struct Cyc_Absyn_Decl{void*r;unsigned loc;};
# 1049
int Cyc_Absyn_qvar_cmp(struct _tuple1*,struct _tuple1*);
# 1060
union Cyc_Absyn_Nmspace Cyc_Absyn_Abs_n(struct Cyc_List_List*,long);
# 1063
struct Cyc_Absyn_Tqual Cyc_Absyn_const_tqual(unsigned);
struct Cyc_Absyn_Tqual Cyc_Absyn_empty_tqual(unsigned);
# 1070
void*Cyc_Absyn_compress(void*);
# 1083
void*Cyc_Absyn_new_evar(struct Cyc_Core_Opt*,struct Cyc_Core_Opt*);
# 1099
extern void*Cyc_Absyn_al_qual_type;
# 1103
extern void*Cyc_Absyn_false_type;
# 1126
void*Cyc_Absyn_string_type(void*,void*);
void*Cyc_Absyn_const_string_type(void*,void*);
# 1153
void*Cyc_Absyn_fatptr_type(void*,void*,void*,struct Cyc_Absyn_Tqual,void*,void*);
# 1161
void*Cyc_Absyn_array_type(void*,struct Cyc_Absyn_Tqual,struct Cyc_Absyn_Exp*,void*,unsigned);
# 1192
struct Cyc_Absyn_Exp*Cyc_Absyn_uint_exp(unsigned,unsigned);
# 1255
struct _tuple1*Cyc_Absyn_uniqueaqual_qvar (void);struct Cyc_Absynpp_Params{long expand_typedefs;long qvar_to_Cids;long add_cyc_prefix;long decls_first;long rewrite_temp_tvars;long print_all_tvars;long print_all_kinds;long print_all_effects;long print_using_stmts;long print_externC_stmts;long print_full_evars;long print_zeroterm;long generate_line_directives;long use_curr_namespace;struct Cyc_List_List*curr_namespace;long gen_clean_cyclone;};
# 54 "cyclone/library/compiler/absynpp.h"
void Cyc_Absynpp_set_params(struct Cyc_Absynpp_Params*);
# 56
extern struct Cyc_Absynpp_Params Cyc_Absynpp_tc_params_r;
# 63
struct _fat_ptr Cyc_Absynpp_typ2string(void*);
# 71
struct _fat_ptr Cyc_Absynpp_qvar2string(struct _tuple1*);struct Cyc_Dict_T;struct Cyc_Dict_Dict{int(*rel)(void*,void*);struct _RegionHandle*r;const struct Cyc_Dict_T*t;};extern char Cyc_Dict_Absent[7U];struct Cyc_Dict_Absent_exn_struct{char*tag;};
# 87 "./cyclone/library/std/dict.h"
extern struct Cyc_Dict_Dict Cyc_Dict_insert(struct Cyc_Dict_Dict,void*,void*);
# 108
extern void*Cyc_Dict_lookup(struct Cyc_Dict_Dict,void*);
# 120
extern void**Cyc_Dict_lookup_opt(struct Cyc_Dict_Dict,void*);
# 257
extern struct Cyc_Dict_Dict Cyc_Dict_delete(struct Cyc_Dict_Dict,void*);struct Cyc_Hashtable_Table;struct Cyc_Set_Set;struct Cyc_AssnDef_False_AssnDef_Assn_struct{int tag;};
# 242 "cyclone/library/compiler/assndef.h"
extern struct _fat_ptr Cyc_AssnDef_assn2string(void*);
# 244
extern struct Cyc_AssnDef_False_AssnDef_Assn_struct Cyc_AssnDef_false_assn;
# 248
extern void*Cyc_AssnDef_not(void*);struct Cyc_AssnDef_AssnFn{struct Cyc_List_List*actuals;void*assn;};struct Cyc_AssnDef_ExistAssnFn{struct Cyc_AssnDef_AssnFn*af;struct Cyc_Set_Set*existvars;};struct Cyc_AssnDef_AssnMap{void*assn;struct Cyc_Dict_Dict map;};
# 46 "cyclone/library/compiler/attributes.h"
extern struct Cyc_Absyn_No_throw_att_Absyn_Attribute_struct Cyc_Atts_No_throw_att_val;
# 76
struct Cyc_List_List*Cyc_Atts_transfer_fn_type_atts(void*,struct Cyc_List_List*);
# 84
void Cyc_Atts_check_fndecl_atts(unsigned,struct Cyc_List_List*,long);
void Cyc_Atts_check_variable_atts(unsigned,struct Cyc_Absyn_Vardecl*,struct Cyc_List_List*);
void Cyc_Atts_check_field_atts(unsigned,struct _fat_ptr*,struct Cyc_List_List*);
# 88
void Cyc_Atts_fnTypeAttsOK(unsigned,void*);
# 93
int Cyc_Atts_attribute_cmp(void*,void*);struct Cyc___cycFILE;
# 98 "bazel-out/k8-fastbuild/bin/cyclone/library/std/libc/stdio.h"
extern struct Cyc___cycFILE*Cyc_stderr;
# 161
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);extern char Cyc_Tcenv_Env_error[10U];struct Cyc_Tcenv_Env_error_exn_struct{char*tag;};struct Cyc_Tcenv_Genv{struct Cyc_Dict_Dict aggrdecls;struct Cyc_Dict_Dict datatypedecls;struct Cyc_Dict_Dict enumdecls;struct Cyc_Dict_Dict typedefs;struct Cyc_Dict_Dict ordinaries;};struct Cyc_Tcenv_Fenv;struct Cyc_Tcenv_Tenv{struct Cyc_List_List*ns;struct Cyc_Tcenv_Genv*ae;struct Cyc_Tcenv_Fenv*le;long allow_valueof: 1;long in_extern_c_include: 1;long in_tempest: 1;long tempest_generalize: 1;long in_extern_c_inc_repeat: 1;};
# 69 "cyclone/library/compiler/tcenv.h"
struct Cyc_Tcenv_Fenv*Cyc_Tcenv_new_fenv(unsigned,struct Cyc_Absyn_Fndecl*);
# 78
struct Cyc_Absyn_Datatypedecl***Cyc_Tcenv_lookup_xdatatypedecl(struct _RegionHandle*,struct Cyc_Tcenv_Tenv*,unsigned,struct _tuple1*);
# 82
struct Cyc_Tcenv_Tenv*Cyc_Tcenv_allow_valueof(struct Cyc_Tcenv_Tenv*);
struct Cyc_Tcenv_Tenv*Cyc_Tcenv_enter_extern_c_include(struct Cyc_Tcenv_Tenv*);
struct Cyc_Tcenv_Tenv*Cyc_Tcenv_enter_tempest(struct Cyc_Tcenv_Tenv*);
struct Cyc_Tcenv_Tenv*Cyc_Tcenv_clear_tempest(struct Cyc_Tcenv_Tenv*);
# 141
struct Cyc_List_List*Cyc_Tcenv_curr_aquals_bounds(struct Cyc_Tcenv_Tenv*);
# 152
void Cyc_Tcenv_check_delayed_effects(struct Cyc_Tcenv_Tenv*);
void Cyc_Tcenv_check_delayed_constraints(struct Cyc_Tcenv_Tenv*);
struct Cyc_Tcenv_Tenv*Cyc_Tcenv_copy_tenv_dicts(struct Cyc_Tcenv_Tenv*);struct Cyc_Xarray_Xarray{struct _fat_ptr elmts;int num_elmts;};struct Cyc_Toc_TocState{struct Cyc_List_List**tuple_types;struct Cyc_List_List**anon_aggr_types;struct Cyc_Dict_Dict*aggrs_so_far;struct Cyc_List_List**abs_struct_types;struct Cyc_Set_Set**datatypes_so_far;struct Cyc_Dict_Dict*xdatatypes_so_far;struct Cyc_Dict_Dict*qvar_tags;struct Cyc_Xarray_Xarray*temp_labels;};struct Cyc_Toc_TocStateWrap{struct Cyc_Core_DynamicRegion*dyn;struct Cyc_Toc_TocState*state;};struct Cyc_Toc_TocContext{struct Cyc_List_List*result_decls;struct Cyc_Hashtable_Table**pop_tables;struct Cyc_Hashtable_Table**fn_pop_table;int tuple_type_counter;int temp_var_counter;int fresh_label_counter;struct Cyc_Toc_TocStateWrap*toc_state;struct Cyc_List_List*tagged_union_cache;void*void_star_type_cache;void*fat_ptr_type_cache;void*rgn_type_cache;void*aqualt_type_cache;struct Cyc_Absyn_Exp*aliasable_qual_exp_cache;struct Cyc_Absyn_Exp*get_exn_thrown_exp_cache;struct _fat_ptr globals;};
# 128 "cyclone/library/compiler/toc.h"
struct Cyc_Toc_TocContext*Cyc_Toc_Toc_Ctx_create (void);
void Cyc_Toc_Toc_Ctx_destroy(struct Cyc_Toc_TocContext*);struct Cyc_Tc_TcContext{long debug;struct _fat_ptr tc_msg;};
# 36 "cyclone/library/compiler/cifc.h"
void Cyc_Cifc_user_overrides(struct Cyc_Tc_TcContext*,struct Cyc_Toc_TocContext*,unsigned,struct Cyc_Tcenv_Tenv*,struct Cyc_List_List**,struct Cyc_List_List*);struct _tuple14{unsigned f0;long f1;};
# 29 "cyclone/library/compiler/evexp.h"
extern struct _tuple14 Cyc_Evexp_eval_const_uint_exp(struct Cyc_Absyn_Exp*);
# 55 "cyclone/library/compiler/flags.h"
extern long Cyc_Flags_tc_aggressive_warn;
# 31 "cyclone/library/compiler/kinds.h"
extern struct Cyc_Absyn_Kind Cyc_Kinds_ak;
extern struct Cyc_Absyn_Kind Cyc_Kinds_bk;
extern struct Cyc_Absyn_Kind Cyc_Kinds_mk;
extern struct Cyc_Absyn_Kind Cyc_Kinds_ek;
extern struct Cyc_Absyn_Kind Cyc_Kinds_ik;
# 85 "cyclone/library/compiler/kinds.h"
void*Cyc_Kinds_kind_to_bound(struct Cyc_Absyn_Kind*);
# 97
void*Cyc_Kinds_compress_kb(void*);
# 7 "cyclone/library/compiler/pratt_prover.h"
long Cyc_PrattProver_constraint_prove(void*,void*);
# 54 "cyclone/library/compiler/tcdecl.h"
struct Cyc_Absyn_Aggrdecl*Cyc_Tcdecl_merge_aggrdecl(struct Cyc_Absyn_Aggrdecl*,struct Cyc_Absyn_Aggrdecl*,unsigned,struct _fat_ptr*);
# 56
struct Cyc_Absyn_Datatypedecl*Cyc_Tcdecl_merge_datatypedecl(struct Cyc_Absyn_Datatypedecl*,struct Cyc_Absyn_Datatypedecl*,unsigned,struct _fat_ptr*);
struct Cyc_Absyn_Enumdecl*Cyc_Tcdecl_merge_enumdecl(struct Cyc_Absyn_Enumdecl*,struct Cyc_Absyn_Enumdecl*,unsigned,struct _fat_ptr*);
# 59
struct Cyc_Absyn_Typedefdecl*Cyc_Tcdecl_merge_typedefdecl(struct Cyc_Absyn_Typedefdecl*,struct Cyc_Absyn_Typedefdecl*,unsigned,struct _fat_ptr*);
# 61
void*Cyc_Tcdecl_merge_binding(void*,void*,unsigned,struct _fat_ptr*);
# 68
struct Cyc_List_List*Cyc_Tcdecl_sort_xdatatype_fields(struct Cyc_List_List*,long*,struct _fat_ptr*,unsigned,struct _fat_ptr*);
# 27 "cyclone/library/compiler/tcexp.h"
void*Cyc_Tcexp_tcExp(struct Cyc_Tc_TcContext*,struct Cyc_Tcenv_Tenv*,void**,struct Cyc_Absyn_Exp*);
void*Cyc_Tcexp_tcExpInitializer(struct Cyc_Tc_TcContext*,struct Cyc_Tcenv_Tenv*,void**,struct Cyc_Absyn_Exp*);
# 30 "cyclone/library/compiler/tcstmt.h"
void Cyc_Tcstmt_tcStmt(struct Cyc_Tc_TcContext*,struct Cyc_Tcenv_Tenv*,struct Cyc_Absyn_Stmt*,long);
# 32
long Cyc_Tcstmt_ensure_no_throw_stmt(struct Cyc_Absyn_Stmt*);
# 35 "cyclone/library/compiler/tctyp.h"
void Cyc_Tctyp_check_valid_toplevel_type(struct Cyc_Tc_TcContext*,unsigned,struct Cyc_Tcenv_Tenv*,void*);
void Cyc_Tctyp_check_fndecl_valid_type(struct Cyc_Tc_TcContext*,unsigned,struct Cyc_Tcenv_Tenv*,struct Cyc_Absyn_Fndecl*);
# 48
void Cyc_Tctyp_check_type(struct Cyc_Tc_TcContext*,unsigned,struct Cyc_Tcenv_Tenv*,struct Cyc_List_List*,struct Cyc_Absyn_Kind*,long,long,void*);
# 51
void Cyc_Tctyp_check_type_with_bounds(struct Cyc_Tc_TcContext*,unsigned,struct Cyc_Tcenv_Tenv*,struct Cyc_List_List*,struct Cyc_List_List**,struct Cyc_Absyn_Kind*,long,long,void*);
# 39 "cyclone/library/compiler/tcutil.h"
long Cyc_Tcutil_is_function_type(void*);
# 42
long Cyc_Tcutil_is_array_type(void*);
# 54
long Cyc_Tcutil_is_bits_only_type(void*);
# 85
long Cyc_Tcutil_is_integral(struct Cyc_Absyn_Exp*);
# 106
long Cyc_Tcutil_coerce_assign(struct Cyc_List_List*,struct Cyc_Absyn_Exp*,void*);
# 155
void*Cyc_Tcutil_fndecl2type(struct Cyc_Absyn_Fndecl*);
# 164
void Cyc_Tcutil_check_bitfield(unsigned,void*,struct Cyc_Absyn_Exp*,struct _fat_ptr*);
# 167
void Cyc_Tcutil_check_unique_tvars(unsigned,struct Cyc_List_List*);
# 198
long Cyc_Tcutil_is_noalias_pointer_or_aggr(struct Cyc_List_List*,void*);
# 213
void Cyc_Tcutil_add_tvar_identities(struct Cyc_List_List*);
# 219
long Cyc_Tcutil_is_const_exp(struct Cyc_Absyn_Exp*);
# 225
long Cyc_Tcutil_extract_const_from_typedef(unsigned,long,void*);
# 242
long Cyc_Tcutil_zeroable_type(void*);
# 249
void*Cyc_Tcutil_any_bool(struct Cyc_List_List*);struct _tuple15{struct Cyc_Absyn_Tvar*f0;long f1;};
# 266
struct _tuple15*Cyc_Tcutil_tvar_bool_pair(long,struct Cyc_Absyn_Tvar*);
# 276
long Cyc_Tcutil_is_main(struct _tuple1*);
# 27 "cyclone/library/compiler/unify.h"
void Cyc_Unify_explain_failure (void);
# 29
long Cyc_Unify_unify(void*,void*);
# 40 "cyclone/library/compiler/vcgen.h"
extern struct Cyc_AssnDef_AssnMap Cyc_Vcgen_clause2assn(struct Cyc_Absyn_Exp*);
# 46 "cyclone/library/compiler/warn.h"
void Cyc_Warn_err(unsigned,struct _fat_ptr,struct _fat_ptr);struct Cyc_Warn_String_Warn_Warg_struct{int tag;struct _fat_ptr f1;};struct Cyc_Warn_Qvar_Warn_Warg_struct{int tag;struct _tuple1*f1;};struct Cyc_Warn_Typ_Warn_Warg_struct{int tag;void*f1;};struct Cyc_Warn_Tvar_Warn_Warg_struct{int tag;struct Cyc_Absyn_Tvar*f1;};struct Cyc_Warn_Kind_Warn_Warg_struct{int tag;struct Cyc_Absyn_Kind*f1;};struct Cyc_Warn_Vardecl_Warn_Warg_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};
# 79
void Cyc_Warn_err2(unsigned,struct _fat_ptr);
void Cyc_Warn_warn2(unsigned,struct _fat_ptr);
# 48 "cyclone/library/compiler/tc.cyc"
struct Cyc_Tc_TcContext*Cyc_Tc_tc_init (void){void*_T0;struct Cyc_Tc_TcContext*_T1;struct Cyc_Tc_TcContext*_T2;struct Cyc_Tc_TcContext*_T3;_T0= _cycalloc(sizeof(struct Cyc_Tc_TcContext));{
struct Cyc_Tc_TcContext*ctx=(struct Cyc_Tc_TcContext*)_T0;_T1= ctx;
_T1->debug= 0;_T2= ctx;
({__typeof__(_tag_fat("",sizeof(char),1U))_T4=_tag_fat("",sizeof(char),1U);_T2->tc_msg= _T4;});_T3= ctx;
return _T3;}}struct _tuple16{unsigned f0;struct _tuple1*f1;long f2;};
# 55
static long Cyc_Tc_export_member(struct _tuple1*x,struct Cyc_List_List*exports){struct Cyc_List_List*_T0;void*_T1;struct _tuple1*_T2;struct _tuple16*_T3;struct _tuple16 _T4;struct _tuple1*_T5;int _T6;struct _tuple16*_T7;struct Cyc_List_List*_T8;
_TL3: if(exports!=0)goto _TL1;else{goto _TL2;}
_TL1: _T0= exports;_T1= _T0->hd;{struct _tuple16*p=(struct _tuple16*)_T1;_T2= x;_T3= p;_T4= *_T3;_T5= _T4.f1;_T6= 
Cyc_Absyn_qvar_cmp(_T2,_T5);if(_T6==0)goto _TL4;goto _TL0;_TL4: _T7= p;
# 62
(*_T7).f2= 1;
return 1;}_TL0: _T8= exports;
# 56
exports= _T8->tl;goto _TL3;_TL2:
# 65
 return 0;}struct _tuple17{void*f0;long f1;};
# 68
static void Cyc_Tc_tcVardecl(struct Cyc_Tc_TcContext*ctx,struct Cyc_Tcenv_Tenv*te,unsigned loc,struct Cyc_Absyn_Vardecl*vd,long check_var_init,long in_cinclude,struct Cyc_List_List**exports){struct Cyc_Absyn_Vardecl*_T0;struct Cyc_Absyn_Vardecl*_T1;long*_T2;struct Cyc_Tc_TcContext*_T3;long _T4;struct Cyc_String_pa_PrintArg_struct _T5;struct _tuple1*_T6;struct _tuple1 _T7;struct _fat_ptr*_T8;struct Cyc_String_pa_PrintArg_struct _T9;struct Cyc_Absyn_Vardecl*_TA;void*_TB;struct Cyc___cycFILE*_TC;struct _fat_ptr _TD;struct _fat_ptr _TE;int*_TF;int _T10;struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T11;struct Cyc_Absyn_ArrayInfo _T12;struct Cyc_Absyn_Exp*_T13;struct Cyc_Absyn_ArrayInfo _T14;struct Cyc_Absyn_ArrayInfo _T15;struct Cyc_Absyn_ArrayInfo _T16;struct Cyc_Absyn_ArrayInfo _T17;struct Cyc_Absyn_Exp*_T18;int*_T19;unsigned _T1A;struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T1B;union Cyc_Absyn_Cnst _T1C;struct _union_Cnst_Wstring_c _T1D;unsigned _T1E;union Cyc_Absyn_Cnst _T1F;struct _union_Cnst_String_c _T20;struct Cyc_Absyn_Vardecl*_T21;void*_T22;struct Cyc_Absyn_Tqual _T23;struct _fat_ptr _T24;unsigned _T25;struct Cyc_Absyn_Exp*_T26;void*_T27;unsigned _T28;union Cyc_Absyn_Cnst _T29;struct _union_Cnst_Wstring_c _T2A;struct Cyc_Absyn_Vardecl*_T2B;void*_T2C;struct Cyc_Absyn_Tqual _T2D;struct Cyc_Absyn_Exp*_T2E;void*_T2F;unsigned _T30;struct Cyc_Absyn_Vardecl*_T31;struct Cyc_Absyn_Vardecl*_T32;void*_T33;struct Cyc_Absyn_Tqual _T34;int _T35;unsigned _T36;struct Cyc_Absyn_Exp*_T37;void*_T38;unsigned _T39;struct Cyc_Absyn_Vardecl*_T3A;unsigned _T3B;struct Cyc_Absyn_Vardecl*_T3C;struct Cyc_Absyn_Tqual _T3D;long _T3E;void*_T3F;struct Cyc_Absyn_Vardecl*_T40;long _T41;long _T42;long*_T43;enum Cyc_Absyn_Scope _T44;int _T45;enum Cyc_Absyn_Scope _T46;int _T47;long _T48;struct Cyc_Warn_String_Warn_Warg_struct _T49;unsigned _T4A;struct _fat_ptr _T4B;long _T4C;long _T4D;long _T4E;long _T4F;long _T50;struct Cyc_Warn_String_Warn_Warg_struct _T51;struct Cyc_Warn_Vardecl_Warn_Warg_struct _T52;struct Cyc_Warn_String_Warn_Warg_struct _T53;struct Cyc_Warn_Typ_Warn_Warg_struct _T54;unsigned _T55;struct _fat_ptr _T56;struct _handler_cons*_T57;int _T58;struct Cyc_Tc_TcContext*_T59;struct Cyc_Tcenv_Tenv*_T5A;void**_T5B;struct Cyc_Absyn_Exp*_T5C;struct Cyc_List_List*_T5D;struct Cyc_Absyn_Exp*_T5E;void*_T5F;long _T60;struct Cyc_Absyn_Vardecl*_T61;struct _tuple1*_T62;unsigned long _T63;const char*_T64;struct _fat_ptr _T65;unsigned long _T66;unsigned long _T67;unsigned long _T68;unsigned long _T69;const char*_T6A;struct _fat_ptr _T6B;unsigned long _T6C;unsigned long _T6D;unsigned long _T6E;unsigned long _T6F;struct Cyc_String_pa_PrintArg_struct _T70;struct Cyc_String_pa_PrintArg_struct _T71;const char*_T72;struct Cyc_String_pa_PrintArg_struct _T73;struct Cyc_String_pa_PrintArg_struct _T74;const char*_T75;struct Cyc_String_pa_PrintArg_struct _T76;unsigned _T77;struct _fat_ptr _T78;struct _fat_ptr _T79;struct Cyc_String_pa_PrintArg_struct _T7A;struct Cyc_String_pa_PrintArg_struct _T7B;const char*_T7C;struct Cyc_String_pa_PrintArg_struct _T7D;struct Cyc_String_pa_PrintArg_struct _T7E;const char*_T7F;struct Cyc_String_pa_PrintArg_struct _T80;unsigned _T81;struct _fat_ptr _T82;struct _fat_ptr _T83;long _T84;struct Cyc_Warn_String_Warn_Warg_struct _T85;unsigned _T86;struct _fat_ptr _T87;void*_T88;struct Cyc_Tcenv_Env_error_exn_struct*_T89;char*_T8A;char*_T8B;struct Cyc_Warn_String_Warn_Warg_struct _T8C;unsigned _T8D;struct _fat_ptr _T8E;struct _handler_cons*_T8F;int _T90;struct _tuple17*(*_T91)(struct Cyc_Dict_Dict,struct _tuple1*);void*(*_T92)(struct Cyc_Dict_Dict,void*);struct Cyc_Tcenv_Tenv*_T93;struct Cyc_Tcenv_Genv*_T94;struct Cyc_Dict_Dict _T95;struct _tuple1*_T96;struct _tuple17*_T97;struct _tuple17 _T98;struct Cyc_Absyn_Global_b_Absyn_Binding_struct*_T99;struct Cyc_Absyn_Global_b_Absyn_Binding_struct*_T9A;void*_T9B;struct Cyc_Absyn_Global_b_Absyn_Binding_struct*_T9C;void*_T9D;unsigned _T9E;struct Cyc_Tc_TcContext*_T9F;struct _fat_ptr*_TA0;struct _fat_ptr*_TA1;struct Cyc_Absyn_Vardecl*_TA2;struct _tuple1*_TA3;struct Cyc_List_List**_TA4;struct Cyc_List_List*_TA5;long _TA6;struct _tuple17*_TA7;struct _tuple17 _TA8;long _TA9;struct Cyc_Tcenv_Tenv*_TAA;struct Cyc_Tcenv_Genv*_TAB;struct Cyc_Dict_Dict(*_TAC)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple17*);struct Cyc_Dict_Dict(*_TAD)(struct Cyc_Dict_Dict,void*,void*);struct Cyc_Tcenv_Tenv*_TAE;struct Cyc_Tcenv_Genv*_TAF;struct Cyc_Dict_Dict _TB0;struct _tuple1*_TB1;struct _tuple17*_TB2;struct _tuple17*_TB3;struct _tuple17 _TB4;void*_TB5;struct Cyc_Dict_Absent_exn_struct*_TB6;char*_TB7;char*_TB8;struct Cyc_Absyn_Vardecl*_TB9;struct _tuple1*_TBA;struct Cyc_List_List**_TBB;struct Cyc_List_List*_TBC;long _TBD;struct Cyc_Tcenv_Tenv*_TBE;struct Cyc_Tcenv_Genv*_TBF;struct Cyc_Dict_Dict(*_TC0)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple17*);struct Cyc_Dict_Dict(*_TC1)(struct Cyc_Dict_Dict,void*,void*);struct Cyc_Tcenv_Tenv*_TC2;struct Cyc_Tcenv_Genv*_TC3;struct Cyc_Dict_Dict _TC4;struct _tuple1*_TC5;struct _tuple17*_TC6;struct Cyc_Absyn_Global_b_Absyn_Binding_struct*_TC7;void*_TC8;struct Cyc_List_List*_TC9;struct Cyc_Absyn_Exp*_TCA;void*_TCB;struct _tuple1*_TCC;enum Cyc_Absyn_Scope _TCD;_T0= vd;{struct Cyc_Absyn_Vardecl _TCE=*_T0;_TCD= _TCE.sc;_TCC= _TCE.name;_TCB= _TCE.type;_TCA= _TCE.initializer;_TC9= _TCE.attributes;_T1= vd;_T2= & _T1->is_proto;_TC8= (long*)_T2;}{enum Cyc_Absyn_Scope sc=_TCD;struct _tuple1*q=_TCC;void*t=_TCB;struct Cyc_Absyn_Exp*initializer=_TCA;struct Cyc_List_List*atts=_TC9;long*is_proto=(long*)_TC8;_T3= 
# 71
_check_null(ctx);_T4= _T3->debug;if(!_T4)goto _TL6;{struct Cyc_String_pa_PrintArg_struct _TCE;_TCE.tag= 0;_T6= q;_T7= *_T6;_T8= _T7.f1;
_TCE.f1= *_T8;_T5= _TCE;}{struct Cyc_String_pa_PrintArg_struct _TCE=_T5;{struct Cyc_String_pa_PrintArg_struct _TCF;_TCF.tag= 0;_TA= vd;_TB= _TA->type;
({__typeof__(Cyc_Absynpp_typ2string(_TB))_TD0=Cyc_Absynpp_typ2string(_TB);_TCF.f1= _TD0;});_T9= _TCF;}{struct Cyc_String_pa_PrintArg_struct _TCF=_T9;void*_TD0[2];_TD0[0]= & _TCE;_TD0[1]= & _TCF;_TC= Cyc_stderr;_TD= 
# 72
_tag_fat("type-checking vardecl_t %s, type %s\n",sizeof(char),37U);_TE= _tag_fat(_TD0,sizeof(void*),2);Cyc_fprintf(_TC,_TD,_TE);}}goto _TL7;_TL6: _TL7:{
# 77
void*_TCE=Cyc_Absyn_compress(t);unsigned _TCF;void*_TD0;struct Cyc_Absyn_Tqual _TD1;void*_TD2;_TF= (int*)_TCE;_T10= *_TF;if(_T10!=5)goto _TL8;_T11= (struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_TCE;_T12= _T11->f1;_T13= _T12.num_elts;if(_T13!=0)goto _TLA;{struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_TD3=(struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_TCE;_T14= _TD3->f1;_TD2= _T14.elt_type;_T15= _TD3->f1;_TD1= _T15.tq;_T16= _TD3->f1;_TD0= _T16.zero_term;_T17= _TD3->f1;_TCF= _T17.zt_loc;}if(initializer==0)goto _TLC;{void*telt=_TD2;struct Cyc_Absyn_Tqual tq=_TD1;void*zt=_TD0;unsigned ztl=_TCF;_T18= initializer;{
# 79
void*_TD3=_T18->r;struct Cyc_List_List*_TD4;struct Cyc_Absyn_Exp*_TD5;struct _fat_ptr _TD6;_T19= (int*)_TD3;_T1A= *_T19;switch(_T1A){case 0: _T1B= (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_TD3;_T1C= _T1B->f1;_T1D= _T1C.Wstring_c;_T1E= _T1D.tag;switch(_T1E){case 9:{struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_TD7=(struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_TD3;_T1F= _TD7->f1;_T20= _T1F.String_c;_TD6= _T20.val;}{struct _fat_ptr s=_TD6;_T21= vd;_T22= telt;_T23= tq;_T24= s;_T25= 
# 81
_get_fat_size(_T24,sizeof(char));_T26= Cyc_Absyn_uint_exp(_T25,0U);_T27= zt;_T28= ztl;({__typeof__(Cyc_Absyn_array_type(_T22,_T23,_T26,_T27,_T28))_TD7=Cyc_Absyn_array_type(_T22,_T23,_T26,_T27,_T28);_T21->type= _TD7;});t= _T21->type;goto _LL8;}case 10:{struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_TD7=(struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_TD3;_T29= _TD7->f1;_T2A= _T29.Wstring_c;_TD6= _T2A.val;}{struct _fat_ptr s=_TD6;_T2B= vd;_T2C= telt;_T2D= tq;_T2E= 
# 84
Cyc_Absyn_uint_exp(1U,0U);_T2F= zt;_T30= ztl;({__typeof__(Cyc_Absyn_array_type(_T2C,_T2D,_T2E,_T2F,_T30))_TD7=Cyc_Absyn_array_type(_T2C,_T2D,_T2E,_T2F,_T30);_T2B->type= _TD7;});t= _T2B->type;goto _LL8;}default: goto _LL15;};case 26:{struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct*_TD7=(struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct*)_TD3;_TD5= _TD7->f2;}{struct Cyc_Absyn_Exp*e=_TD5;_TD5= e;goto _LL10;}case 27:{struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct*_TD7=(struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct*)_TD3;_TD5= _TD7->f1;}_LL10: {struct Cyc_Absyn_Exp*e=_TD5;_T31= vd;
# 89
({__typeof__(Cyc_Absyn_array_type(telt,tq,e,zt,ztl))_TD7=Cyc_Absyn_array_type(telt,tq,e,zt,ztl);_T31->type= _TD7;});t= _T31->type;goto _LL8;}case 35:{struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct*_TD7=(struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct*)_TD3;_TD4= _TD7->f2;}{struct Cyc_List_List*es=_TD4;_TD4= es;goto _LL14;}case 25:{struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*_TD7=(struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*)_TD3;_TD4= _TD7->f1;}_LL14: {struct Cyc_List_List*es=_TD4;_T32= vd;_T33= telt;_T34= tq;_T35= 
# 94
Cyc_List_length(es);_T36= (unsigned)_T35;_T37= Cyc_Absyn_uint_exp(_T36,0U);_T38= zt;_T39= ztl;({__typeof__(Cyc_Absyn_array_type(_T33,_T34,_T37,_T38,_T39))_TD7=Cyc_Absyn_array_type(_T33,_T34,_T37,_T38,_T39);_T32->type= _TD7;});t= _T32->type;goto _LL8;}default: _LL15: goto _LL8;}_LL8:;}goto _LL3;}_TLC: goto _LL6;_TLA: goto _LL6;_TL8: _LL6: goto _LL3;_LL3:;}
# 104
Cyc_Tctyp_check_valid_toplevel_type(ctx,loc,te,t);_T3A= vd;_T3B= loc;_T3C= vd;_T3D= _T3C->tq;_T3E= _T3D.print_const;_T3F= t;
# 106
({__typeof__(Cyc_Tcutil_extract_const_from_typedef(_T3B,_T3E,_T3F))_TCE=Cyc_Tcutil_extract_const_from_typedef(_T3B,_T3E,_T3F);_T3A->tq.real_const= _TCE;});_T40= vd;_T41= 
# 109
Cyc_Tcutil_is_array_type(t);_T40->escapes= !_T41;_T42= 
# 111
Cyc_Tcutil_is_function_type(t);if(!_T42)goto _TL10;_T43= is_proto;
*_T43= 0;
# 114
atts= Cyc_Atts_transfer_fn_type_atts(t,atts);
Cyc_Atts_fnTypeAttsOK(loc,t);goto _TL11;_TL10: _TL11: _T44= sc;_T45= (int)_T44;
# 118
if(_T45==3)goto _TL14;else{goto _TL15;}_TL15: _T46= sc;_T47= (int)_T46;if(_T47==4)goto _TL14;else{goto _TL12;}
_TL14: if(initializer==0)goto _TL16;_T48= in_cinclude;if(_T48)goto _TL16;else{goto _TL18;}
_TL18:{struct Cyc_Warn_String_Warn_Warg_struct _TCE;_TCE.tag= 0;({__typeof__(_tag_fat("extern declaration should not have initializer",sizeof(char),47U))_TCF=_tag_fat("extern declaration should not have initializer",sizeof(char),47U);_TCE.f1= _TCF;});_T49= _TCE;}{struct Cyc_Warn_String_Warn_Warg_struct _TCE=_T49;void*_TCF[1];_TCF[0]= & _TCE;_T4A= loc;_T4B= _tag_fat(_TCF,sizeof(void*),1);Cyc_Warn_err2(_T4A,_T4B);}goto _TL17;_TL16: _TL17: goto _TL13;
_TL12: _T4C= Cyc_Tcutil_is_function_type(t);if(_T4C)goto _TL19;else{goto _TL1B;}
# 125
_TL1B: Cyc_Atts_check_variable_atts(loc,vd,atts);
if(initializer==0)goto _TL1E;else{goto _TL1F;}_TL1F: _T4D= in_cinclude;if(_T4D)goto _TL1E;else{goto _TL1C;}
_TL1E: _T4E= check_var_init;if(!_T4E)goto _TL20;_T4F= in_cinclude;if(_T4F)goto _TL20;else{goto _TL22;}_TL22: _T50= Cyc_Tcutil_zeroable_type(t);if(_T50)goto _TL20;else{goto _TL23;}
_TL23:{struct Cyc_Warn_String_Warn_Warg_struct _TCE;_TCE.tag= 0;({__typeof__(_tag_fat("initializer required for variable ",sizeof(char),35U))_TCF=_tag_fat("initializer required for variable ",sizeof(char),35U);_TCE.f1= _TCF;});_T51= _TCE;}{struct Cyc_Warn_String_Warn_Warg_struct _TCE=_T51;{struct Cyc_Warn_Vardecl_Warn_Warg_struct _TCF;_TCF.tag= 11;_TCF.f1= vd;_T52= _TCF;}{struct Cyc_Warn_Vardecl_Warn_Warg_struct _TCF=_T52;{struct Cyc_Warn_String_Warn_Warg_struct _TD0;_TD0.tag= 0;({__typeof__(_tag_fat(" of type ",sizeof(char),10U))_TD1=_tag_fat(" of type ",sizeof(char),10U);_TD0.f1= _TD1;});_T53= _TD0;}{struct Cyc_Warn_String_Warn_Warg_struct _TD0=_T53;{struct Cyc_Warn_Typ_Warn_Warg_struct _TD1;_TD1.tag= 2;_TD1.f1= t;_T54= _TD1;}{struct Cyc_Warn_Typ_Warn_Warg_struct _TD1=_T54;void*_TD2[4];_TD2[0]= & _TCE;_TD2[1]= & _TCF;_TD2[2]= & _TD0;_TD2[3]= & _TD1;_T55= loc;_T56= _tag_fat(_TD2,sizeof(void*),4);Cyc_Warn_err2(_T55,_T56);}}}}goto _TL21;_TL20: _TL21: goto _TL1D;
# 133
_TL1C:{struct _handler_cons _TCE;_T57= & _TCE;_push_handler(_T57);{int _TCF=0;_T58= setjmp(_TCE.handler);if(!_T58)goto _TL24;_TCF= 1;goto _TL25;_TL24: _TL25: if(_TCF)goto _TL26;else{goto _TL28;}_TL28: _T59= ctx;_T5A= te;_T5B= & t;_T5C= initializer;{
void*t2=Cyc_Tcexp_tcExpInitializer(_T59,_T5A,_T5B,_T5C);_T5D= 
Cyc_Tcenv_curr_aquals_bounds(te);_T5E= initializer;_T5F= t;_T60= Cyc_Tcutil_coerce_assign(_T5D,_T5E,_T5F);if(_T60)goto _TL29;else{goto _TL2B;}
_TL2B: _T61= vd;_T62= _T61->name;{struct _fat_ptr s0=Cyc_Absynpp_qvar2string(_T62);
const char*s1=" declared with type ";
struct _fat_ptr s2=Cyc_Absynpp_typ2string(t);
const char*s3=" but initialized with type ";
struct _fat_ptr s4=Cyc_Absynpp_typ2string(t2);_T63= 
Cyc_strlen(s0);_T64= s1;_T65= _tag_fat(_T64,sizeof(char),21U);_T66= Cyc_strlen(_T65);_T67= _T63 + _T66;_T68= Cyc_strlen(s2);_T69= _T67 + _T68;_T6A= s3;_T6B= _tag_fat(_T6A,sizeof(char),28U);_T6C= Cyc_strlen(_T6B);_T6D= _T69 + _T6C;_T6E= Cyc_strlen(s4);_T6F= _T6D + _T6E;if(_T6F <= 70U)goto _TL2C;{struct Cyc_String_pa_PrintArg_struct _TD0;_TD0.tag= 0;
_TD0.f1= s0;_T70= _TD0;}{struct Cyc_String_pa_PrintArg_struct _TD0=_T70;{struct Cyc_String_pa_PrintArg_struct _TD1;_TD1.tag= 0;_T72= s1;({__typeof__(_tag_fat(_T72,sizeof(char),21U))_TD2=_tag_fat(_T72,sizeof(char),21U);_TD1.f1= _TD2;});_T71= _TD1;}{struct Cyc_String_pa_PrintArg_struct _TD1=_T71;{struct Cyc_String_pa_PrintArg_struct _TD2;_TD2.tag= 0;_TD2.f1= s2;_T73= _TD2;}{struct Cyc_String_pa_PrintArg_struct _TD2=_T73;{struct Cyc_String_pa_PrintArg_struct _TD3;_TD3.tag= 0;_T75= s3;({__typeof__(_tag_fat(_T75,sizeof(char),28U))_TD4=_tag_fat(_T75,sizeof(char),28U);_TD3.f1= _TD4;});_T74= _TD3;}{struct Cyc_String_pa_PrintArg_struct _TD3=_T74;{struct Cyc_String_pa_PrintArg_struct _TD4;_TD4.tag= 0;_TD4.f1= s4;_T76= _TD4;}{struct Cyc_String_pa_PrintArg_struct _TD4=_T76;void*_TD5[5];_TD5[0]= & _TD0;_TD5[1]= & _TD1;_TD5[2]= & _TD2;_TD5[3]= & _TD3;_TD5[4]= & _TD4;_T77= loc;_T78= _tag_fat("%s%s\n\t%s\n%s\n\t%s",sizeof(char),16U);_T79= _tag_fat(_TD5,sizeof(void*),5);Cyc_Warn_err(_T77,_T78,_T79);}}}}}goto _TL2D;
# 144
_TL2C:{struct Cyc_String_pa_PrintArg_struct _TD0;_TD0.tag= 0;_TD0.f1= s0;_T7A= _TD0;}{struct Cyc_String_pa_PrintArg_struct _TD0=_T7A;{struct Cyc_String_pa_PrintArg_struct _TD1;_TD1.tag= 0;_T7C= s1;({__typeof__(_tag_fat(_T7C,sizeof(char),21U))_TD2=_tag_fat(_T7C,sizeof(char),21U);_TD1.f1= _TD2;});_T7B= _TD1;}{struct Cyc_String_pa_PrintArg_struct _TD1=_T7B;{struct Cyc_String_pa_PrintArg_struct _TD2;_TD2.tag= 0;_TD2.f1= s2;_T7D= _TD2;}{struct Cyc_String_pa_PrintArg_struct _TD2=_T7D;{struct Cyc_String_pa_PrintArg_struct _TD3;_TD3.tag= 0;_T7F= s3;({__typeof__(_tag_fat(_T7F,sizeof(char),28U))_TD4=_tag_fat(_T7F,sizeof(char),28U);_TD3.f1= _TD4;});_T7E= _TD3;}{struct Cyc_String_pa_PrintArg_struct _TD3=_T7E;{struct Cyc_String_pa_PrintArg_struct _TD4;_TD4.tag= 0;_TD4.f1= s4;_T80= _TD4;}{struct Cyc_String_pa_PrintArg_struct _TD4=_T80;void*_TD5[5];_TD5[0]= & _TD0;_TD5[1]= & _TD1;_TD5[2]= & _TD2;_TD5[3]= & _TD3;_TD5[4]= & _TD4;_T81= loc;_T82= _tag_fat("%s%s%s%s%s",sizeof(char),11U);_T83= _tag_fat(_TD5,sizeof(void*),5);Cyc_Warn_err(_T81,_T82,_T83);}}}}}_TL2D:
 Cyc_Unify_explain_failure();}goto _TL2A;_TL29: _TL2A: _T84= 
# 148
Cyc_Tcutil_is_const_exp(initializer);if(_T84)goto _TL2E;else{goto _TL30;}
_TL30:{struct Cyc_Warn_String_Warn_Warg_struct _TD0;_TD0.tag= 0;({__typeof__(_tag_fat("initializer is not a constant expression",sizeof(char),41U))_TD1=_tag_fat("initializer is not a constant expression",sizeof(char),41U);_TD0.f1= _TD1;});_T85= _TD0;}{struct Cyc_Warn_String_Warn_Warg_struct _TD0=_T85;void*_TD1[1];_TD1[0]= & _TD0;_T86= loc;_T87= _tag_fat(_TD1,sizeof(void*),1);Cyc_Warn_err2(_T86,_T87);}goto _TL2F;_TL2E: _TL2F:;}_pop_handler();goto _TL27;_TL26: _T88= Cyc_Core_get_exn_thrown();{void*_TD0=(void*)_T88;void*_TD1;_T89= (struct Cyc_Tcenv_Env_error_exn_struct*)_TD0;_T8A= _T89->tag;_T8B= Cyc_Tcenv_Env_error;if(_T8A!=_T8B)goto _TL31;{struct Cyc_Warn_String_Warn_Warg_struct _TD2;_TD2.tag= 0;
# 152
({__typeof__(_tag_fat("initializer is not a constant expression",sizeof(char),41U))_TD3=_tag_fat("initializer is not a constant expression",sizeof(char),41U);_TD2.f1= _TD3;});_T8C= _TD2;}{struct Cyc_Warn_String_Warn_Warg_struct _TD2=_T8C;void*_TD3[1];_TD3[0]= & _TD2;_T8D= loc;_T8E= _tag_fat(_TD3,sizeof(void*),1);Cyc_Warn_err2(_T8D,_T8E);}goto _LL17;_TL31: _TD1= _TD0;{void*exn=_TD1;_rethrow(exn);}_LL17:;}_TL27:;}}_TL1D: goto _TL1A;
# 157
_TL19: Cyc_Atts_check_fndecl_atts(loc,atts,0);_TL1A: _TL13:{struct _handler_cons _TCE;_T8F= & _TCE;_push_handler(_T8F);{int _TCF=0;_T90= setjmp(_TCE.handler);if(!_T90)goto _TL33;_TCF= 1;goto _TL34;_TL33: _TL34: if(_TCF)goto _TL35;else{goto _TL37;}_TL37: _T92= Cyc_Dict_lookup;{
# 161
struct _tuple17*(*_TD0)(struct Cyc_Dict_Dict,struct _tuple1*)=(struct _tuple17*(*)(struct Cyc_Dict_Dict,struct _tuple1*))_T92;_T91= _TD0;}_T93= te;_T94= _T93->ae;_T95= _T94->ordinaries;_T96= q;{struct _tuple17*ans=_T91(_T95,_T96);_T97= ans;_T98= *_T97;{
void*b0=_T98.f0;
struct Cyc_Absyn_Global_b_Absyn_Binding_struct*b1;b1= _cycalloc(sizeof(struct Cyc_Absyn_Global_b_Absyn_Binding_struct));_T99= b1;_T99->tag= 1;_T9A= b1;_T9A->f1= vd;_T9B= b0;_T9C= b1;_T9D= (void*)_T9C;_T9E= loc;_T9F= ctx;_TA0= & _T9F->tc_msg;_TA1= (struct _fat_ptr*)_TA0;{
void*b=Cyc_Tcdecl_merge_binding(_T9B,_T9D,_T9E,_TA1);
if(b!=0)goto _TL38;_npop_handler(0);return;_TL38:
# 168
 if(exports==0)goto _TL3C;else{goto _TL3D;}_TL3D: _TA2= vd;_TA3= _TA2->name;_TA4= exports;_TA5= *_TA4;_TA6= Cyc_Tc_export_member(_TA3,_TA5);if(_TA6)goto _TL3C;else{goto _TL3A;}
_TL3C: if(b!=b0)goto _TL40;else{goto _TL41;}_TL41: _TA7= ans;_TA8= *_TA7;_TA9= _TA8.f1;if(_TA9)goto _TL40;else{goto _TL3E;}
# 171
_TL40: _TAA= te;_TAB= _TAA->ae;_TAD= Cyc_Dict_insert;{struct Cyc_Dict_Dict(*_TD0)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple17*)=(struct Cyc_Dict_Dict(*)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple17*))_TAD;_TAC= _TD0;}_TAE= te;_TAF= _TAE->ae;_TB0= _TAF->ordinaries;_TB1= q;{struct _tuple17*_TD0=_cycalloc(sizeof(struct _tuple17));_TD0->f0= b;_TB3= ans;_TB4= *_TB3;_TD0->f1= _TB4.f1;_TB2= (struct _tuple17*)_TD0;}({__typeof__(_TAC(_TB0,_TB1,_TB2))_TD0=_TAC(_TB0,_TB1,_TB2);_TAB->ordinaries= _TD0;});goto _TL3F;_TL3E: _TL3F: goto _TL3B;_TL3A: _TL3B: _npop_handler(0);return;}}}_pop_handler();goto _TL36;_TL35: _TB5= Cyc_Core_get_exn_thrown();{void*_TD0=(void*)_TB5;void*_TD1;_TB6= (struct Cyc_Dict_Absent_exn_struct*)_TD0;_TB7= _TB6->tag;_TB8= Cyc_Dict_Absent;if(_TB7!=_TB8)goto _TL42;goto _LL1C;_TL42: _TD1= _TD0;{void*exn=_TD1;_rethrow(exn);}_LL1C:;}_TL36:;}}
# 177
if(exports==0)goto _TL46;else{goto _TL47;}_TL47: _TB9= vd;_TBA= _TB9->name;_TBB= exports;_TBC= *_TBB;_TBD= Cyc_Tc_export_member(_TBA,_TBC);if(_TBD)goto _TL46;else{goto _TL44;}
_TL46: _TBE= te;_TBF= _TBE->ae;_TC1= Cyc_Dict_insert;{struct Cyc_Dict_Dict(*_TCE)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple17*)=(struct Cyc_Dict_Dict(*)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple17*))_TC1;_TC0= _TCE;}_TC2= te;_TC3= _TC2->ae;_TC4= _TC3->ordinaries;_TC5= q;{struct _tuple17*_TCE=_cycalloc(sizeof(struct _tuple17));{struct Cyc_Absyn_Global_b_Absyn_Binding_struct*_TCF=_cycalloc(sizeof(struct Cyc_Absyn_Global_b_Absyn_Binding_struct));_TCF->tag= 1;_TCF->f1= vd;_TC7= (struct Cyc_Absyn_Global_b_Absyn_Binding_struct*)_TCF;}_TCE->f0= (void*)_TC7;_TCE->f1= 0;_TC6= (struct _tuple17*)_TCE;}({__typeof__(_TC0(_TC4,_TC5,_TC6))_TCE=_TC0(_TC4,_TC5,_TC6);_TBF->ordinaries= _TCE;});goto _TL45;_TL44: _TL45:;}}
# 181
static void Cyc_Tc_tcFndecl(struct Cyc_Tc_TcContext*ctx,struct Cyc_Tcenv_Tenv*te,unsigned loc,struct Cyc_Absyn_Fndecl*fd,struct Cyc_List_List**exports){struct Cyc_Absyn_Fndecl*_T0;struct Cyc_Tc_TcContext*_T1;long _T2;struct Cyc_String_pa_PrintArg_struct _T3;struct _tuple1*_T4;struct _tuple1 _T5;struct _fat_ptr*_T6;struct Cyc___cycFILE*_T7;struct _fat_ptr _T8;struct _fat_ptr _T9;struct Cyc_Absyn_Fndecl*_TA;enum Cyc_Absyn_Scope _TB;int _TC;struct Cyc_Tcenv_Tenv*_TD;long _TE;struct Cyc_Warn_String_Warn_Warg_struct _TF;unsigned _T10;struct _fat_ptr _T11;unsigned _T12;struct Cyc_Absyn_Fndecl*_T13;struct Cyc_Absyn_FnInfo _T14;struct Cyc_List_List*_T15;struct Cyc_Tcenv_Tenv*_T16;long _T17;struct Cyc_Absyn_Fndecl*_T18;int(*_T19)(void*,void*);struct Cyc_Absyn_Fndecl*_T1A;struct Cyc_Absyn_FnInfo _T1B;struct Cyc_List_List*_T1C;struct Cyc_Absyn_No_throw_att_Absyn_Attribute_struct*_T1D;struct Cyc_Absyn_No_throw_att_Absyn_Attribute_struct*_T1E;void*_T1F;struct Cyc_Absyn_Fndecl*_T20;void*_T21;struct Cyc_Absyn_Fndecl*_T22;struct Cyc_Absyn_FnInfo _T23;struct Cyc_List_List*_T24;struct _handler_cons*_T25;int _T26;struct _tuple17*(*_T27)(struct Cyc_Dict_Dict,struct _tuple1*);void*(*_T28)(struct Cyc_Dict_Dict,void*);struct Cyc_Tcenv_Tenv*_T29;struct Cyc_Tcenv_Genv*_T2A;struct Cyc_Dict_Dict _T2B;struct _tuple1*_T2C;struct _tuple17*_T2D;struct _tuple17 _T2E;struct Cyc_Absyn_Funname_b_Absyn_Binding_struct*_T2F;struct Cyc_Absyn_Funname_b_Absyn_Binding_struct*_T30;void*_T31;struct Cyc_Absyn_Funname_b_Absyn_Binding_struct*_T32;void*_T33;unsigned _T34;struct Cyc_Tc_TcContext*_T35;struct _fat_ptr*_T36;struct _fat_ptr*_T37;struct _tuple1*_T38;struct Cyc_List_List**_T39;struct Cyc_List_List*_T3A;long _T3B;struct _tuple17*_T3C;struct _tuple17 _T3D;long _T3E;struct Cyc_Tcenv_Tenv*_T3F;struct Cyc_Tcenv_Genv*_T40;struct Cyc_Dict_Dict(*_T41)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple17*);struct Cyc_Dict_Dict(*_T42)(struct Cyc_Dict_Dict,void*,void*);struct Cyc_Tcenv_Tenv*_T43;struct Cyc_Tcenv_Genv*_T44;struct Cyc_Dict_Dict _T45;struct _tuple1*_T46;struct _tuple17*_T47;struct _tuple17*_T48;struct _tuple17 _T49;void*_T4A;struct Cyc_Dict_Absent_exn_struct*_T4B;char*_T4C;char*_T4D;struct Cyc_Absyn_Fndecl*_T4E;struct _tuple1*_T4F;struct Cyc_List_List**_T50;struct Cyc_List_List*_T51;long _T52;struct Cyc_Tcenv_Tenv*_T53;struct Cyc_Tcenv_Genv*_T54;struct Cyc_Dict_Dict(*_T55)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple17*);struct Cyc_Dict_Dict(*_T56)(struct Cyc_Dict_Dict,void*,void*);struct Cyc_Tcenv_Tenv*_T57;struct Cyc_Tcenv_Genv*_T58;struct Cyc_Dict_Dict _T59;struct _tuple1*_T5A;struct _tuple17*_T5B;struct Cyc_Absyn_Funname_b_Absyn_Binding_struct*_T5C;struct Cyc_Tcenv_Tenv*_T5D;long _T5E;struct Cyc_Tcenv_Tenv*_T5F;struct Cyc_Tcenv_Tenv*_T60;struct Cyc_Tcenv_Tenv*_T61;struct Cyc_Tcenv_Tenv*_T62;struct Cyc_Tc_TcContext*_T63;struct Cyc_Tcenv_Tenv*_T64;struct Cyc_Absyn_Fndecl*_T65;struct Cyc_Absyn_Stmt*_T66;struct Cyc_Tcenv_Tenv*_T67;long _T68;struct Cyc_Tcenv_Tenv*_T69;struct Cyc_Tcenv_Tenv*_T6A;long _T6B;struct Cyc_Absyn_Fndecl*_T6C;struct Cyc_Absyn_Stmt*_T6D;long _T6E;struct Cyc_Warn_String_Warn_Warg_struct _T6F;struct Cyc_Warn_Qvar_Warn_Warg_struct _T70;struct Cyc_Absyn_Fndecl*_T71;struct Cyc_Warn_String_Warn_Warg_struct _T72;unsigned _T73;struct _fat_ptr _T74;long _T75;struct Cyc_Absyn_Fndecl*_T76;struct Cyc_Absyn_FnInfo _T77;struct Cyc_Absyn_Exp*_T78;struct Cyc_Warn_String_Warn_Warg_struct _T79;unsigned _T7A;struct _fat_ptr _T7B;struct Cyc_Absyn_Fndecl*_T7C;struct Cyc_Absyn_FnInfo _T7D;struct Cyc_Absyn_Exp*_T7E;struct Cyc_Warn_String_Warn_Warg_struct _T7F;unsigned _T80;struct _fat_ptr _T81;struct Cyc_Absyn_Fndecl*_T82;struct Cyc_Absyn_FnInfo _T83;void*_T84;int*_T85;int _T86;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T87;void*_T88;int*_T89;unsigned _T8A;struct Cyc_Warn_String_Warn_Warg_struct _T8B;unsigned _T8C;struct _fat_ptr _T8D;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T8E;void*_T8F;struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*_T90;enum Cyc_Absyn_Size_of _T91;int _T92;struct Cyc_Warn_String_Warn_Warg_struct _T93;struct Cyc_Warn_Typ_Warn_Warg_struct _T94;struct Cyc_Absyn_Fndecl*_T95;struct Cyc_Absyn_FnInfo _T96;struct Cyc_Warn_String_Warn_Warg_struct _T97;unsigned _T98;struct _fat_ptr _T99;struct Cyc_Absyn_Fndecl*_T9A;struct Cyc_Absyn_FnInfo _T9B;long _T9C;struct Cyc_Absyn_Fndecl*_T9D;struct Cyc_Absyn_FnInfo _T9E;struct Cyc_Absyn_VarargInfo*_T9F;struct Cyc_Warn_String_Warn_Warg_struct _TA0;unsigned _TA1;struct _fat_ptr _TA2;struct Cyc_Absyn_Fndecl*_TA3;struct Cyc_Absyn_FnInfo _TA4;struct Cyc_List_List*_TA5;void*_TA6;int*_TA7;int _TA8;struct Cyc_Absyn_AppType_Absyn_Type_struct*_TA9;void*_TAA;int*_TAB;int _TAC;struct Cyc_Absyn_AppType_Absyn_Type_struct*_TAD;void*_TAE;struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*_TAF;enum Cyc_Absyn_Size_of _TB0;int _TB1;struct Cyc_Warn_String_Warn_Warg_struct _TB2;struct Cyc_Warn_Typ_Warn_Warg_struct _TB3;struct Cyc_Warn_String_Warn_Warg_struct _TB4;unsigned _TB5;struct _fat_ptr _TB6;struct Cyc_List_List*_TB7;struct Cyc_List_List*_TB8;void*_TB9;struct Cyc_List_List*_TBA;struct Cyc_Warn_String_Warn_Warg_struct _TBB;unsigned _TBC;struct _fat_ptr _TBD;struct Cyc_Core_Opt*_TBE;struct Cyc_Absyn_Fndecl*_TBF;struct Cyc_Absyn_FnInfo _TC0;void*_TC1;struct Cyc_Core_Opt*_TC2;struct Cyc_Absyn_Kind*_TC3;struct Cyc_Core_Opt*_TC4;void*_TC5;void*_TC6;void*_TC7;struct Cyc_Core_Opt*_TC8;struct Cyc_Absyn_Kind*_TC9;struct Cyc_Core_Opt*_TCA;void*_TCB;void*_TCC;struct Cyc_Absyn_Tqual _TCD;struct Cyc_Core_Opt*_TCE;void*_TCF;struct Cyc_List_List*_TD0;void*_TD1;void*_TD2;void*_TD3;long _TD4;void*_TD5;struct Cyc_Core_Opt*_TD6;struct Cyc_Absyn_Kind*_TD7;struct Cyc_Core_Opt*_TD8;void*_TD9;void*_TDA;void*_TDB;struct Cyc_Core_Opt*_TDC;struct Cyc_Absyn_Kind*_TDD;struct Cyc_Core_Opt*_TDE;void*_TDF;void*_TE0;struct Cyc_Absyn_Tqual _TE1;struct Cyc_Core_Opt*_TE2;void*_TE3;struct Cyc_List_List*_TE4;void*_TE5;void*_TE6;void*_TE7;long _TE8;void*_TE9;struct Cyc_Core_Opt*_TEA;struct Cyc_Absyn_Kind*_TEB;struct Cyc_Core_Opt*_TEC;void*_TED;void*_TEE;void*_TEF;struct Cyc_Core_Opt*_TF0;struct Cyc_Absyn_Kind*_TF1;struct Cyc_Core_Opt*_TF2;void*_TF3;void*_TF4;struct Cyc_Absyn_Tqual _TF5;struct Cyc_Core_Opt*_TF6;void*_TF7;struct Cyc_List_List*_TF8;void*_TF9;void*_TFA;void*_TFB;long _TFC;void*_TFD;struct Cyc_Core_Opt*_TFE;struct Cyc_Absyn_Kind*_TFF;struct Cyc_Core_Opt*_T100;void*_T101;void*_T102;void*_T103;struct Cyc_Core_Opt*_T104;struct Cyc_Absyn_Kind*_T105;struct Cyc_Core_Opt*_T106;void*_T107;void*_T108;struct Cyc_Absyn_Tqual _T109;struct Cyc_Core_Opt*_T10A;void*_T10B;struct Cyc_List_List*_T10C;void*_T10D;void*_T10E;void*_T10F;long _T110;struct Cyc_Warn_String_Warn_Warg_struct _T111;struct Cyc_Warn_Typ_Warn_Warg_struct _T112;struct Cyc_Warn_String_Warn_Warg_struct _T113;unsigned _T114;struct _fat_ptr _T115;_T0= fd;{
struct _tuple1*q=_T0->name;_T1= 
_check_null(ctx);_T2= _T1->debug;if(!_T2)goto _TL48;{struct Cyc_String_pa_PrintArg_struct _T116;_T116.tag= 0;_T4= q;_T5= *_T4;_T6= _T5.f1;
_T116.f1= *_T6;_T3= _T116;}{struct Cyc_String_pa_PrintArg_struct _T116=_T3;void*_T117[1];_T117[0]= & _T116;_T7= Cyc_stderr;_T8= _tag_fat("type-checking fndecl %s\n",sizeof(char),25U);_T9= _tag_fat(_T117,sizeof(void*),1);Cyc_fprintf(_T7,_T8,_T9);}goto _TL49;_TL48: _TL49: _TA= fd;_TB= _TA->sc;_TC= (int)_TB;
# 186
if(_TC!=4)goto _TL4A;_TD= te;_TE= _TD->in_extern_c_include;if(_TE)goto _TL4A;else{goto _TL4C;}
_TL4C:{struct Cyc_Warn_String_Warn_Warg_struct _T116;_T116.tag= 0;({__typeof__(_tag_fat("extern \"C\" functions cannot be implemented in Cyclone",sizeof(char),54U))_T117=_tag_fat("extern \"C\" functions cannot be implemented in Cyclone",sizeof(char),54U);_T116.f1= _T117;});_TF= _T116;}{struct Cyc_Warn_String_Warn_Warg_struct _T116=_TF;void*_T117[1];_T117[0]= & _T116;_T10= loc;_T11= _tag_fat(_T117,sizeof(void*),1);Cyc_Warn_err2(_T10,_T11);}goto _TL4B;_TL4A: _TL4B: _T12= loc;_T13= fd;_T14= _T13->i;_T15= _T14.attributes;
# 190
Cyc_Atts_check_fndecl_atts(_T12,_T15,1);_T16= te;_T17= _T16->in_extern_c_inc_repeat;
# 193
if(!_T17)goto _TL4D;_T18= fd;
_T18->cached_type= 0;goto _TL4E;_TL4D: _TL4E:
 Cyc_Tctyp_check_fndecl_valid_type(ctx,loc,te,fd);{
void*t=Cyc_Tcutil_fndecl2type(fd);_T19= Cyc_Atts_attribute_cmp;_T1A= fd;_T1B= _T1A->i;_T1C= _T1B.attributes;_T1D= & Cyc_Atts_No_throw_att_val;_T1E= (struct Cyc_Absyn_No_throw_att_Absyn_Attribute_struct*)_T1D;_T1F= (void*)_T1E;{
# 198
long nothrow=Cyc_List_mem(_T19,_T1C,_T1F);_T20= fd;_T21= t;_T22= fd;_T23= _T22->i;_T24= _T23.attributes;
({__typeof__(Cyc_Atts_transfer_fn_type_atts(_T21,_T24))_T116=Cyc_Atts_transfer_fn_type_atts(_T21,_T24);_T20->i.attributes= _T116;});
Cyc_Atts_fnTypeAttsOK(loc,t);{struct _handler_cons _T116;_T25= & _T116;_push_handler(_T25);{int _T117=0;_T26= setjmp(_T116.handler);if(!_T26)goto _TL4F;_T117= 1;goto _TL50;_TL4F: _TL50: if(_T117)goto _TL51;else{goto _TL53;}_TL53: _T28= Cyc_Dict_lookup;{
# 204
struct _tuple17*(*_T118)(struct Cyc_Dict_Dict,struct _tuple1*)=(struct _tuple17*(*)(struct Cyc_Dict_Dict,struct _tuple1*))_T28;_T27= _T118;}_T29= te;_T2A= _T29->ae;_T2B= _T2A->ordinaries;_T2C= q;{struct _tuple17*ans=_T27(_T2B,_T2C);_T2D= ans;_T2E= *_T2D;{
void*b0=_T2E.f0;
struct Cyc_Absyn_Funname_b_Absyn_Binding_struct*b1;b1= _cycalloc(sizeof(struct Cyc_Absyn_Funname_b_Absyn_Binding_struct));_T2F= b1;_T2F->tag= 2;_T30= b1;_T30->f1= fd;_T31= b0;_T32= b1;_T33= (void*)_T32;_T34= loc;_T35= ctx;_T36= & _T35->tc_msg;_T37= (struct _fat_ptr*)_T36;{
void*b=Cyc_Tcdecl_merge_binding(_T31,_T33,_T34,_T37);
if(b==0)goto _TL54;
# 210
if(exports==0)goto _TL58;else{goto _TL59;}_TL59: _T38= q;_T39= exports;_T3A= *_T39;_T3B= Cyc_Tc_export_member(_T38,_T3A);if(_T3B)goto _TL58;else{goto _TL56;}
_TL58: if(b==b0)goto _TL5D;else{goto _TL5C;}_TL5D: _T3C= ans;_T3D= *_T3C;_T3E= _T3D.f1;if(_T3E)goto _TL5A;else{goto _TL5C;}
_TL5C: _T3F= te;_T40= _T3F->ae;_T42= Cyc_Dict_insert;{struct Cyc_Dict_Dict(*_T118)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple17*)=(struct Cyc_Dict_Dict(*)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple17*))_T42;_T41= _T118;}_T43= te;_T44= _T43->ae;_T45= _T44->ordinaries;_T46= q;{struct _tuple17*_T118=_cycalloc(sizeof(struct _tuple17));_T118->f0= b;_T48= ans;_T49= *_T48;_T118->f1= _T49.f1;_T47= (struct _tuple17*)_T118;}({__typeof__(_T41(_T45,_T46,_T47))_T118=_T41(_T45,_T46,_T47);_T40->ordinaries= _T118;});goto _TL5B;_TL5A: _TL5B: goto _TL57;_TL56: _TL57: goto _TL55;_TL54: _TL55:;}}}_pop_handler();goto _TL52;_TL51: _T4A= Cyc_Core_get_exn_thrown();{void*_T118=(void*)_T4A;void*_T119;_T4B= (struct Cyc_Dict_Absent_exn_struct*)_T118;_T4C= _T4B->tag;_T4D= Cyc_Dict_Absent;if(_T4C!=_T4D)goto _TL5E;
# 215
if(exports==0)goto _TL62;else{goto _TL63;}_TL63: _T4E= fd;_T4F= _T4E->name;_T50= exports;_T51= *_T50;_T52= Cyc_Tc_export_member(_T4F,_T51);if(_T52)goto _TL62;else{goto _TL60;}
_TL62: _T53= te;_T54= _T53->ae;_T56= Cyc_Dict_insert;{struct Cyc_Dict_Dict(*_T11A)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple17*)=(struct Cyc_Dict_Dict(*)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple17*))_T56;_T55= _T11A;}_T57= te;_T58= _T57->ae;_T59= _T58->ordinaries;_T5A= q;{struct _tuple17*_T11A=_cycalloc(sizeof(struct _tuple17));{struct Cyc_Absyn_Funname_b_Absyn_Binding_struct*_T11B=_cycalloc(sizeof(struct Cyc_Absyn_Funname_b_Absyn_Binding_struct));_T11B->tag= 2;_T11B->f1= fd;_T5C= (struct Cyc_Absyn_Funname_b_Absyn_Binding_struct*)_T11B;}_T11A->f0= (void*)_T5C;_T11A->f1= 0;_T5B= (struct _tuple17*)_T11A;}({__typeof__(_T55(_T59,_T5A,_T5B))_T11A=_T55(_T59,_T5A,_T5B);_T54->ordinaries= _T11A;});goto _TL61;_TL60: _TL61: goto _LL0;_TL5E: _T119= _T118;{void*exn=_T119;_rethrow(exn);}_LL0:;}_TL52:;}}_T5D= te;_T5E= _T5D->in_extern_c_include;
# 221
if(!_T5E)goto _TL64;
return;_TL64: {
# 227
struct Cyc_Tcenv_Fenv*fenv=Cyc_Tcenv_new_fenv(loc,fd);
struct Cyc_Tcenv_Tenv*_T116;_T116= _cycalloc(sizeof(struct Cyc_Tcenv_Tenv));_T5F= te;
_T116->ns= _T5F->ns;_T60= te;_T116->ae= _T60->ae;_T116->le= fenv;_T116->allow_valueof= 0;_T116->in_extern_c_include= 0;_T61= te;_T116->in_tempest= _T61->in_tempest;_T62= te;_T116->tempest_generalize= _T62->tempest_generalize;_T116->in_extern_c_inc_repeat= 0;{
# 228
struct Cyc_Tcenv_Tenv*te=_T116;_T63= ctx;_T64= te;_T65= fd;_T66= _T65->body;
# 231
Cyc_Tcstmt_tcStmt(_T63,_T64,_T66,0);
# 234
Cyc_Tcenv_check_delayed_effects(te);
Cyc_Tcenv_check_delayed_constraints(te);_T67= te;_T68= _T67->in_tempest;
# 237
if(!_T68)goto _TL66;_T69= te;
_T69->tempest_generalize= 1;
Cyc_Tctyp_check_fndecl_valid_type(ctx,loc,te,fd);_T6A= te;
_T6A->tempest_generalize= 0;goto _TL67;_TL66: _TL67: _T6B= nothrow;
# 242
if(!_T6B)goto _TL68;_T6C= fd;_T6D= _T6C->body;_T6E= Cyc_Tcstmt_ensure_no_throw_stmt(_T6D);if(_T6E)goto _TL68;else{goto _TL6A;}
_TL6A:{struct Cyc_Warn_String_Warn_Warg_struct _T117;_T117.tag= 0;({__typeof__(_tag_fat("Function ",sizeof(char),10U))_T118=_tag_fat("Function ",sizeof(char),10U);_T117.f1= _T118;});_T6F= _T117;}{struct Cyc_Warn_String_Warn_Warg_struct _T117=_T6F;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T118;_T118.tag= 1;_T71= fd;_T118.f1= _T71->name;_T70= _T118;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T118=_T70;{struct Cyc_Warn_String_Warn_Warg_struct _T119;_T119.tag= 0;({__typeof__(_tag_fat(" has attribute no_throw but may throw an exception",sizeof(char),51U))_T11A=_tag_fat(" has attribute no_throw but may throw an exception",sizeof(char),51U);_T119.f1= _T11A;});_T72= _T119;}{struct Cyc_Warn_String_Warn_Warg_struct _T119=_T72;void*_T11A[3];_T11A[0]= & _T117;_T11A[1]= & _T118;_T11A[2]= & _T119;_T73= loc;_T74= _tag_fat(_T11A,sizeof(void*),3);Cyc_Warn_err2(_T73,_T74);}}}goto _TL69;_TL68: _TL69: _T75= 
# 245
Cyc_Tcutil_is_main(q);if(!_T75)goto _TL6B;_T76= fd;_T77= _T76->i;_T78= _T77.checks_clause;
# 247
if(_T78==0)goto _TL6D;{struct Cyc_Warn_String_Warn_Warg_struct _T117;_T117.tag= 0;
({__typeof__(_tag_fat("main declared with a @check clause",sizeof(char),35U))_T118=_tag_fat("main declared with a @check clause",sizeof(char),35U);_T117.f1= _T118;});_T79= _T117;}{struct Cyc_Warn_String_Warn_Warg_struct _T117=_T79;void*_T118[1];_T118[0]= & _T117;_T7A= loc;_T7B= _tag_fat(_T118,sizeof(void*),1);Cyc_Warn_err2(_T7A,_T7B);}goto _TL6E;_TL6D: _TL6E: _T7C= fd;_T7D= _T7C->i;_T7E= _T7D.requires_clause;
if(_T7E==0)goto _TL6F;{struct Cyc_Warn_String_Warn_Warg_struct _T117;_T117.tag= 0;
({__typeof__(_tag_fat("main declared with a @requires clause",sizeof(char),38U))_T118=_tag_fat("main declared with a @requires clause",sizeof(char),38U);_T117.f1= _T118;});_T7F= _T117;}{struct Cyc_Warn_String_Warn_Warg_struct _T117=_T7F;void*_T118[1];_T118[0]= & _T117;_T80= loc;_T81= _tag_fat(_T118,sizeof(void*),1);Cyc_Warn_err2(_T80,_T81);}goto _TL70;_TL6F: _TL70: _T82= fd;_T83= _T82->i;_T84= _T83.ret_type;{
# 252
void*_T117=Cyc_Absyn_compress(_T84);_T85= (int*)_T117;_T86= *_T85;if(_T86!=0)goto _TL71;_T87= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T117;_T88= _T87->f1;_T89= (int*)_T88;_T8A= *_T89;switch(_T8A){case 0:{struct Cyc_Warn_String_Warn_Warg_struct _T118;_T118.tag= 0;
# 254
({__typeof__(_tag_fat("main declared with return type void",sizeof(char),36U))_T119=_tag_fat("main declared with return type void",sizeof(char),36U);_T118.f1= _T119;});_T8B= _T118;}{struct Cyc_Warn_String_Warn_Warg_struct _T118=_T8B;void*_T119[1];_T119[0]= & _T118;_T8C= loc;_T8D= _tag_fat(_T119,sizeof(void*),1);Cyc_Warn_warn2(_T8C,_T8D);}goto _LL5;case 1: _T8E= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T117;_T8F= _T8E->f1;_T90= (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*)_T8F;_T91= _T90->f2;_T92= (int)_T91;switch(_T92){case Cyc_Absyn_Int_sz: goto _LLB;case Cyc_Absyn_Long_sz: _LLB: goto _LL5;default: goto _LLC;};default: goto _LLC;}goto _TL72;_TL71: _LLC:{struct Cyc_Warn_String_Warn_Warg_struct _T118;_T118.tag= 0;
# 260
({__typeof__(_tag_fat("main declared with return type ",sizeof(char),32U))_T119=_tag_fat("main declared with return type ",sizeof(char),32U);_T118.f1= _T119;});_T93= _T118;}{struct Cyc_Warn_String_Warn_Warg_struct _T118=_T93;{struct Cyc_Warn_Typ_Warn_Warg_struct _T119;_T119.tag= 2;_T95= fd;_T96= _T95->i;_T119.f1= _T96.ret_type;_T94= _T119;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T119=_T94;{struct Cyc_Warn_String_Warn_Warg_struct _T11A;_T11A.tag= 0;
({__typeof__(_tag_fat(" instead of int or void",sizeof(char),24U))_T11B=_tag_fat(" instead of int or void",sizeof(char),24U);_T11A.f1= _T11B;});_T97= _T11A;}{struct Cyc_Warn_String_Warn_Warg_struct _T11A=_T97;void*_T11B[3];_T11B[0]= & _T118;_T11B[1]= & _T119;_T11B[2]= & _T11A;_T98= loc;_T99= _tag_fat(_T11B,sizeof(void*),3);Cyc_Warn_err2(_T98,_T99);}}}_TL72: _LL5:;}_T9A= fd;_T9B= _T9A->i;_T9C= _T9B.c_varargs;
# 263
if(_T9C)goto _TL77;else{goto _TL78;}_TL78: _T9D= fd;_T9E= _T9D->i;_T9F= _T9E.cyc_varargs;if(_T9F!=0)goto _TL77;else{goto _TL75;}
_TL77:{struct Cyc_Warn_String_Warn_Warg_struct _T117;_T117.tag= 0;({__typeof__(_tag_fat("main declared with varargs",sizeof(char),27U))_T118=_tag_fat("main declared with varargs",sizeof(char),27U);_T117.f1= _T118;});_TA0= _T117;}{struct Cyc_Warn_String_Warn_Warg_struct _T117=_TA0;void*_T118[1];_T118[0]= & _T117;_TA1= loc;_TA2= _tag_fat(_T118,sizeof(void*),1);Cyc_Warn_err2(_TA1,_TA2);}goto _TL76;_TL75: _TL76: _TA3= fd;_TA4= _TA3->i;{
struct Cyc_List_List*args=_TA4.args;
if(args==0)goto _TL79;_TA5= args;_TA6= _TA5->hd;{
struct _tuple9*_T117=(struct _tuple9*)_TA6;void*_T118;{struct _tuple9 _T119=*_T117;_T118= _T119.f2;}{void*t1=_T118;{
void*_T119=Cyc_Absyn_compress(t1);_TA7= (int*)_T119;_TA8= *_TA7;if(_TA8!=0)goto _TL7B;_TA9= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T119;_TAA= _TA9->f1;_TAB= (int*)_TAA;_TAC= *_TAB;if(_TAC!=1)goto _TL7D;_TAD= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T119;_TAE= _TAD->f1;_TAF= (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*)_TAE;_TB0= _TAF->f2;_TB1= (int)_TB0;switch(_TB1){case Cyc_Absyn_Int_sz: goto _LL15;case Cyc_Absyn_Long_sz: _LL15: goto _LL11;default: goto _LL16;}goto _TL7E;_TL7D: goto _LL16;_TL7E: goto _TL7C;_TL7B: _LL16:{struct Cyc_Warn_String_Warn_Warg_struct _T11A;_T11A.tag= 0;
# 273
({__typeof__(_tag_fat("main declared with first argument of type ",sizeof(char),43U))_T11B=_tag_fat("main declared with first argument of type ",sizeof(char),43U);_T11A.f1= _T11B;});_TB2= _T11A;}{struct Cyc_Warn_String_Warn_Warg_struct _T11A=_TB2;{struct Cyc_Warn_Typ_Warn_Warg_struct _T11B;_T11B.tag= 2;_T11B.f1= t1;_TB3= _T11B;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T11B=_TB3;{struct Cyc_Warn_String_Warn_Warg_struct _T11C;_T11C.tag= 0;({__typeof__(_tag_fat(" instead of int",sizeof(char),16U))_T11D=_tag_fat(" instead of int",sizeof(char),16U);_T11C.f1= _T11D;});_TB4= _T11C;}{struct Cyc_Warn_String_Warn_Warg_struct _T11C=_TB4;void*_T11D[3];_T11D[0]= & _T11A;_T11D[1]= & _T11B;_T11D[2]= & _T11C;_TB5= loc;_TB6= _tag_fat(_T11D,sizeof(void*),3);Cyc_Warn_err2(_TB5,_TB6);}}}_TL7C: _LL11:;}_TB7= args;
# 275
args= _TB7->tl;
if(args==0)goto _TL80;_TB8= args;_TB9= _TB8->hd;{
struct _tuple9*_T119=(struct _tuple9*)_TB9;void*_T11A;{struct _tuple9 _T11B=*_T119;_T11A= _T11B.f2;}{void*t2=_T11A;_TBA= args;
args= _TBA->tl;
if(args==0)goto _TL82;{struct Cyc_Warn_String_Warn_Warg_struct _T11B;_T11B.tag= 0;
({__typeof__(_tag_fat("main declared with too many arguments",sizeof(char),38U))_T11C=_tag_fat("main declared with too many arguments",sizeof(char),38U);_T11B.f1= _T11C;});_TBB= _T11B;}{struct Cyc_Warn_String_Warn_Warg_struct _T11B=_TBB;void*_T11C[1];_T11C[0]= & _T11B;_TBC= loc;_TBD= _tag_fat(_T11C,sizeof(void*),1);Cyc_Warn_err2(_TBC,_TBD);}goto _TL83;_TL82: _TL83: {
struct Cyc_Core_Opt*tvs;tvs= _cycalloc(sizeof(struct Cyc_Core_Opt));_TBE= tvs;_TBF= fd;_TC0= _TBF->i;_TBE->v= _TC0.tvars;_TC1= t2;{struct Cyc_Core_Opt*_T11B=_cycalloc(sizeof(struct Cyc_Core_Opt));_TC3= & Cyc_Kinds_ek;
# 283
_T11B->v= (struct Cyc_Absyn_Kind*)_TC3;_TC2= (struct Cyc_Core_Opt*)_T11B;}_TC4= tvs;_TC5= Cyc_Absyn_new_evar(_TC2,_TC4);_TC6= Cyc_Absyn_al_qual_type;_TC7= Cyc_Absyn_string_type(_TC5,_TC6);{struct Cyc_Core_Opt*_T11B=_cycalloc(sizeof(struct Cyc_Core_Opt));_TC9= & Cyc_Kinds_ek;
_T11B->v= (struct Cyc_Absyn_Kind*)_TC9;_TC8= (struct Cyc_Core_Opt*)_T11B;}_TCA= tvs;_TCB= Cyc_Absyn_new_evar(_TC8,_TCA);_TCC= Cyc_Absyn_al_qual_type;_TCD= Cyc_Absyn_empty_tqual(0U);_TCE= tvs;_TCF= _TCE->v;_TD0= (struct Cyc_List_List*)_TCF;_TD1= 
Cyc_Tcutil_any_bool(_TD0);_TD2= Cyc_Absyn_false_type;_TD3= 
# 283
Cyc_Absyn_fatptr_type(_TC7,_TCB,_TCC,_TCD,_TD1,_TD2);_TD4= 
# 282
Cyc_Unify_unify(_TC1,_TD3);if(_TD4)goto _TL84;else{goto _TL86;}_TL86: _TD5= t2;{struct Cyc_Core_Opt*_T11B=_cycalloc(sizeof(struct Cyc_Core_Opt));_TD7= & Cyc_Kinds_ek;
# 287
_T11B->v= (struct Cyc_Absyn_Kind*)_TD7;_TD6= (struct Cyc_Core_Opt*)_T11B;}_TD8= tvs;_TD9= Cyc_Absyn_new_evar(_TD6,_TD8);_TDA= Cyc_Absyn_al_qual_type;_TDB= Cyc_Absyn_const_string_type(_TD9,_TDA);{struct Cyc_Core_Opt*_T11B=_cycalloc(sizeof(struct Cyc_Core_Opt));_TDD= & Cyc_Kinds_ek;
_T11B->v= (struct Cyc_Absyn_Kind*)_TDD;_TDC= (struct Cyc_Core_Opt*)_T11B;}_TDE= tvs;_TDF= Cyc_Absyn_new_evar(_TDC,_TDE);_TE0= Cyc_Absyn_al_qual_type;_TE1= Cyc_Absyn_empty_tqual(0U);_TE2= tvs;_TE3= _TE2->v;_TE4= (struct Cyc_List_List*)_TE3;_TE5= 
Cyc_Tcutil_any_bool(_TE4);_TE6= Cyc_Absyn_false_type;_TE7= 
# 287
Cyc_Absyn_fatptr_type(_TDB,_TDF,_TE0,_TE1,_TE5,_TE6);_TE8= 
# 286
Cyc_Unify_unify(_TD5,_TE7);
# 282
if(_TE8)goto _TL84;else{goto _TL87;}_TL87: _TE9= t2;{struct Cyc_Core_Opt*_T11B=_cycalloc(sizeof(struct Cyc_Core_Opt));_TEB= & Cyc_Kinds_ek;
# 291
_T11B->v= (struct Cyc_Absyn_Kind*)_TEB;_TEA= (struct Cyc_Core_Opt*)_T11B;}_TEC= tvs;_TED= Cyc_Absyn_new_evar(_TEA,_TEC);_TEE= Cyc_Absyn_al_qual_type;_TEF= Cyc_Absyn_string_type(_TED,_TEE);{struct Cyc_Core_Opt*_T11B=_cycalloc(sizeof(struct Cyc_Core_Opt));_TF1= & Cyc_Kinds_ek;
_T11B->v= (struct Cyc_Absyn_Kind*)_TF1;_TF0= (struct Cyc_Core_Opt*)_T11B;}_TF2= tvs;_TF3= Cyc_Absyn_new_evar(_TF0,_TF2);_TF4= Cyc_Absyn_al_qual_type;_TF5= Cyc_Absyn_const_tqual(0U);_TF6= tvs;_TF7= _TF6->v;_TF8= (struct Cyc_List_List*)_TF7;_TF9= 
Cyc_Tcutil_any_bool(_TF8);_TFA= Cyc_Absyn_false_type;_TFB= 
# 291
Cyc_Absyn_fatptr_type(_TEF,_TF3,_TF4,_TF5,_TF9,_TFA);_TFC= 
# 290
Cyc_Unify_unify(_TE9,_TFB);
# 282
if(_TFC)goto _TL84;else{goto _TL88;}_TL88: _TFD= t2;{struct Cyc_Core_Opt*_T11B=_cycalloc(sizeof(struct Cyc_Core_Opt));_TFF= & Cyc_Kinds_ek;
# 295
_T11B->v= (struct Cyc_Absyn_Kind*)_TFF;_TFE= (struct Cyc_Core_Opt*)_T11B;}_T100= tvs;_T101= Cyc_Absyn_new_evar(_TFE,_T100);_T102= Cyc_Absyn_al_qual_type;_T103= Cyc_Absyn_const_string_type(_T101,_T102);{struct Cyc_Core_Opt*_T11B=_cycalloc(sizeof(struct Cyc_Core_Opt));_T105= & Cyc_Kinds_ek;
_T11B->v= (struct Cyc_Absyn_Kind*)_T105;_T104= (struct Cyc_Core_Opt*)_T11B;}_T106= tvs;_T107= Cyc_Absyn_new_evar(_T104,_T106);_T108= Cyc_Absyn_al_qual_type;_T109= Cyc_Absyn_const_tqual(0U);_T10A= tvs;_T10B= _T10A->v;_T10C= (struct Cyc_List_List*)_T10B;_T10D= 
Cyc_Tcutil_any_bool(_T10C);_T10E= Cyc_Absyn_false_type;_T10F= 
# 295
Cyc_Absyn_fatptr_type(_T103,_T107,_T108,_T109,_T10D,_T10E);_T110= 
# 294
Cyc_Unify_unify(_TFD,_T10F);
# 282
if(_T110)goto _TL84;else{goto _TL89;}
# 298
_TL89:{struct Cyc_Warn_String_Warn_Warg_struct _T11B;_T11B.tag= 0;({__typeof__(_tag_fat("second argument of main has type ",sizeof(char),34U))_T11C=_tag_fat("second argument of main has type ",sizeof(char),34U);_T11B.f1= _T11C;});_T111= _T11B;}{struct Cyc_Warn_String_Warn_Warg_struct _T11B=_T111;{struct Cyc_Warn_Typ_Warn_Warg_struct _T11C;_T11C.tag= 2;_T11C.f1= t2;_T112= _T11C;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T11C=_T112;{struct Cyc_Warn_String_Warn_Warg_struct _T11D;_T11D.tag= 0;({__typeof__(_tag_fat(" instead of char??",sizeof(char),19U))_T11E=_tag_fat(" instead of char??",sizeof(char),19U);_T11D.f1= _T11E;});_T113= _T11D;}{struct Cyc_Warn_String_Warn_Warg_struct _T11D=_T113;void*_T11E[3];_T11E[0]= & _T11B;_T11E[1]= & _T11C;_T11E[2]= & _T11D;_T114= loc;_T115= _tag_fat(_T11E,sizeof(void*),3);Cyc_Warn_err2(_T114,_T115);}}}goto _TL85;_TL84: _TL85:;}}}goto _TL81;_TL80: _TL81:;}}goto _TL7A;_TL79: _TL7A:;}goto _TL6C;_TL6B: _TL6C:;}}}}}}
# 306
static void Cyc_Tc_tcOneTypedef(struct Cyc_Tc_TcContext*ctx,struct Cyc_Tcenv_Tenv*te,unsigned loc,struct Cyc_Absyn_Typedefdecl*td){unsigned _T0;struct Cyc_Absyn_Typedefdecl*_T1;struct Cyc_List_List*_T2;struct Cyc_Absyn_Typedefdecl*_T3;struct Cyc_List_List*_T4;struct Cyc_Absyn_Typedefdecl*_T5;void*_T6;struct Cyc_Tc_TcContext*_T7;unsigned _T8;struct Cyc_Tcenv_Tenv*_T9;struct Cyc_Absyn_Typedefdecl*_TA;struct Cyc_List_List*_TB;struct Cyc_Absyn_Kind*_TC;struct Cyc_Absyn_Kind*_TD;struct Cyc_Absyn_Typedefdecl*_TE;void*_TF;struct Cyc_Absyn_Typedefdecl*_T10;unsigned _T11;struct Cyc_Absyn_Typedefdecl*_T12;struct Cyc_Absyn_Tqual _T13;long _T14;struct Cyc_Absyn_Typedefdecl*_T15;void*_T16;void*_T17;struct Cyc_Absyn_Typedefdecl*_T18;struct Cyc_List_List*_T19;void*_T1A;struct Cyc_Absyn_Tvar*_T1B;void*_T1C;int*_T1D;unsigned _T1E;struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*_T1F;struct Cyc_Core_Opt**_T20;struct Cyc_Absyn_Typedefdecl*_T21;void*_T22;struct Cyc_Warn_String_Warn_Warg_struct _T23;struct Cyc_Warn_Tvar_Warn_Warg_struct _T24;struct Cyc_List_List*_T25;void*_T26;struct Cyc_Warn_String_Warn_Warg_struct _T27;unsigned _T28;struct _fat_ptr _T29;struct Cyc_Core_Opt**_T2A;struct Cyc_Core_Opt*_T2B;struct Cyc_Absyn_Kind*_T2C;struct Cyc_Absyn_Kind*_T2D;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T2E;struct Cyc_Core_Opt**_T2F;struct Cyc_Core_Opt**_T30;struct Cyc_Core_Opt*_T31;struct Cyc_List_List*_T32;_T0= loc;_T1= td;_T2= _T1->tvs;
Cyc_Tcutil_check_unique_tvars(_T0,_T2);_T3= td;_T4= _T3->tvs;
Cyc_Tcutil_add_tvar_identities(_T4);_T5= td;_T6= _T5->defn;
if(_T6==0)goto _TL8A;_T7= ctx;_T8= loc;_T9= te;_TA= td;_TB= _TA->tvs;_TC= & Cyc_Kinds_ak;_TD= (struct Cyc_Absyn_Kind*)_TC;_TE= td;_TF= _TE->defn;
Cyc_Tctyp_check_type(_T7,_T8,_T9,_TB,_TD,0,1,_TF);_T10= td;_T11= loc;_T12= td;_T13= _T12->tq;_T14= _T13.print_const;_T15= td;_T16= _T15->defn;_T17= 
_check_null(_T16);({__typeof__(Cyc_Tcutil_extract_const_from_typedef(_T11,_T14,_T17))_T33=Cyc_Tcutil_extract_const_from_typedef(_T11,_T14,_T17);_T10->tq.real_const= _T33;});goto _TL8B;_TL8A: _TL8B: _T18= td;{
# 315
struct Cyc_List_List*tvs=_T18->tvs;_TL8F: if(tvs!=0)goto _TL8D;else{goto _TL8E;}
_TL8D: _T19= tvs;_T1A= _T19->hd;_T1B= (struct Cyc_Absyn_Tvar*)_T1A;_T1C= _T1B->kind;{void*_T33=Cyc_Kinds_compress_kb(_T1C);struct Cyc_Absyn_Kind*_T34;void*_T35;_T1D= (int*)_T33;_T1E= *_T1D;switch(_T1E){case 1:{struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*_T36=(struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*)_T33;_T1F= (struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*)_T33;_T20= & _T1F->f1;_T35= (struct Cyc_Core_Opt**)_T20;}{struct Cyc_Core_Opt**f=_T35;_T21= td;_T22= _T21->defn;
# 318
if(_T22==0)goto _TL91;{struct Cyc_Warn_String_Warn_Warg_struct _T36;_T36.tag= 0;
({__typeof__(_tag_fat("type variable ",sizeof(char),15U))_T37=_tag_fat("type variable ",sizeof(char),15U);_T36.f1= _T37;});_T23= _T36;}{struct Cyc_Warn_String_Warn_Warg_struct _T36=_T23;{struct Cyc_Warn_Tvar_Warn_Warg_struct _T37;_T37.tag= 7;_T25= tvs;_T26= _T25->hd;_T37.f1= (struct Cyc_Absyn_Tvar*)_T26;_T24= _T37;}{struct Cyc_Warn_Tvar_Warn_Warg_struct _T37=_T24;{struct Cyc_Warn_String_Warn_Warg_struct _T38;_T38.tag= 0;({__typeof__(_tag_fat(" is not used in typedef",sizeof(char),24U))_T39=_tag_fat(" is not used in typedef",sizeof(char),24U);_T38.f1= _T39;});_T27= _T38;}{struct Cyc_Warn_String_Warn_Warg_struct _T38=_T27;void*_T39[3];_T39[0]= & _T36;_T39[1]= & _T37;_T39[2]= & _T38;_T28= loc;_T29= _tag_fat(_T39,sizeof(void*),3);Cyc_Warn_warn2(_T28,_T29);}}}goto _TL92;_TL91: _TL92: _T2A= f;{struct Cyc_Core_Opt*_T36=_cycalloc(sizeof(struct Cyc_Core_Opt));_T2C= & Cyc_Kinds_bk;_T2D= (struct Cyc_Absyn_Kind*)_T2C;
({__typeof__(Cyc_Kinds_kind_to_bound(_T2D))_T37=Cyc_Kinds_kind_to_bound(_T2D);_T36->v= _T37;});_T2B= (struct Cyc_Core_Opt*)_T36;}*_T2A= _T2B;goto _LL0;}case 2:{struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T36=(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T33;_T2E= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T33;_T2F= & _T2E->f1;_T35= (struct Cyc_Core_Opt**)_T2F;_T34= _T36->f2;}{struct Cyc_Core_Opt**f=(struct Cyc_Core_Opt**)_T35;struct Cyc_Absyn_Kind*k=_T34;_T30= f;{struct Cyc_Core_Opt*_T36=_cycalloc(sizeof(struct Cyc_Core_Opt));
# 323
({__typeof__(Cyc_Kinds_kind_to_bound(k))_T37=Cyc_Kinds_kind_to_bound(k);_T36->v= _T37;});_T31= (struct Cyc_Core_Opt*)_T36;}*_T30= _T31;goto _LL0;}default: goto _TL8C;}_LL0:;}_TL8C: _T32= tvs;
# 315
tvs= _T32->tl;goto _TL8F;_TL8E:;}}
# 376
static void Cyc_Tc_tcTypedefdecl(struct Cyc_Tc_TcContext*ctx,struct Cyc_Tcenv_Tenv*te,unsigned loc,struct Cyc_Absyn_Typedefdecl*td){struct Cyc_Absyn_Typedefdecl*_T0;struct Cyc_Tc_TcContext*_T1;long _T2;struct Cyc_String_pa_PrintArg_struct _T3;struct _tuple1*_T4;struct _tuple1 _T5;struct _fat_ptr*_T6;struct Cyc___cycFILE*_T7;struct _fat_ptr _T8;struct _fat_ptr _T9;struct Cyc_Absyn_Typedefdecl**(*_TA)(struct Cyc_Dict_Dict,struct _tuple1*);void**(*_TB)(struct Cyc_Dict_Dict,void*);struct Cyc_Tcenv_Tenv*_TC;struct Cyc_Tcenv_Genv*_TD;struct Cyc_Dict_Dict _TE;struct _tuple1*_TF;struct Cyc_Tcenv_Tenv*_T10;struct Cyc_Tcenv_Genv*_T11;struct Cyc_Dict_Dict(*_T12)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Typedefdecl*);struct Cyc_Dict_Dict(*_T13)(struct Cyc_Dict_Dict,void*,void*);struct Cyc_Tcenv_Tenv*_T14;struct Cyc_Tcenv_Genv*_T15;struct Cyc_Dict_Dict _T16;struct _tuple1*_T17;struct Cyc_Absyn_Typedefdecl*_T18;struct Cyc_Tcenv_Tenv*_T19;struct Cyc_Tcenv_Genv*_T1A;struct Cyc_Dict_Dict(*_T1B)(struct Cyc_Dict_Dict,struct _tuple1*);struct Cyc_Dict_Dict(*_T1C)(struct Cyc_Dict_Dict,void*);struct Cyc_Tcenv_Tenv*_T1D;struct Cyc_Tcenv_Genv*_T1E;struct Cyc_Dict_Dict _T1F;struct _tuple1*_T20;struct Cyc_Absyn_Typedefdecl*_T21;struct Cyc_Absyn_Typedefdecl**_T22;struct Cyc_Absyn_Typedefdecl*_T23;unsigned _T24;struct _fat_ptr*_T25;struct _fat_ptr*_T26;struct Cyc_Absyn_Typedefdecl*_T27;unsigned _T28;struct Cyc_Tcenv_Tenv*_T29;struct Cyc_Tcenv_Genv*_T2A;struct Cyc_Dict_Dict(*_T2B)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Typedefdecl*);struct Cyc_Dict_Dict(*_T2C)(struct Cyc_Dict_Dict,void*,void*);struct Cyc_Tcenv_Tenv*_T2D;struct Cyc_Tcenv_Genv*_T2E;struct Cyc_Dict_Dict _T2F;struct _tuple1*_T30;struct Cyc_Absyn_Typedefdecl*_T31;_T0= td;{
struct _tuple1*q=_T0->name;_T1= 
_check_null(ctx);_T2= _T1->debug;if(!_T2)goto _TL93;{struct Cyc_String_pa_PrintArg_struct _T32;_T32.tag= 0;_T4= q;_T5= *_T4;_T6= _T5.f1;
_T32.f1= *_T6;_T3= _T32;}{struct Cyc_String_pa_PrintArg_struct _T32=_T3;void*_T33[1];_T33[0]= & _T32;_T7= Cyc_stderr;_T8= _tag_fat("type-checking typedefdecl %s",sizeof(char),29U);_T9= _tag_fat(_T33,sizeof(void*),1);Cyc_fprintf(_T7,_T8,_T9);}goto _TL94;_TL93: _TL94: _TB= Cyc_Dict_lookup_opt;{
# 383
struct Cyc_Absyn_Typedefdecl**(*_T32)(struct Cyc_Dict_Dict,struct _tuple1*)=(struct Cyc_Absyn_Typedefdecl**(*)(struct Cyc_Dict_Dict,struct _tuple1*))_TB;_TA= _T32;}_TC= te;_TD= _TC->ae;_TE= _TD->typedefs;_TF= q;{struct Cyc_Absyn_Typedefdecl**_T32=_TA(_TE,_TF);struct Cyc_Absyn_Typedefdecl**_T33;if(_T32!=0)goto _TL95;
# 386
Cyc_Tc_tcOneTypedef(ctx,te,loc,td);_T10= te;_T11= _T10->ae;_T13= Cyc_Dict_insert;{
# 388
struct Cyc_Dict_Dict(*_T34)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Typedefdecl*)=(struct Cyc_Dict_Dict(*)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Typedefdecl*))_T13;_T12= _T34;}_T14= te;_T15= _T14->ae;_T16= _T15->typedefs;_T17= q;_T18= td;({__typeof__(_T12(_T16,_T17,_T18))_T34=_T12(_T16,_T17,_T18);_T11->typedefs= _T34;});goto _LL0;_TL95: _T33= _T32;{struct Cyc_Absyn_Typedefdecl**tdold=_T33;_T19= te;_T1A= _T19->ae;_T1C= Cyc_Dict_delete;{
# 391
struct Cyc_Dict_Dict(*_T34)(struct Cyc_Dict_Dict,struct _tuple1*)=(struct Cyc_Dict_Dict(*)(struct Cyc_Dict_Dict,struct _tuple1*))_T1C;_T1B= _T34;}_T1D= te;_T1E= _T1D->ae;_T1F= _T1E->typedefs;_T20= q;({__typeof__(_T1B(_T1F,_T20))_T34=_T1B(_T1F,_T20);_T1A->typedefs= _T34;});
Cyc_Tc_tcOneTypedef(ctx,te,loc,td);{
struct _fat_ptr msg=_tag_fat("Typedef redeclaration",sizeof(char),22U);_T21= td;_T22= tdold;_T23= *_T22;_T24= loc;_T25= & msg;_T26= (struct _fat_ptr*)_T25;{
struct Cyc_Absyn_Typedefdecl*td2=Cyc_Tcdecl_merge_typedefdecl(_T21,_T23,_T24,_T26);_T27= td2;_T28= (unsigned)_T27;
if(!_T28)goto _TL97;_T29= te;_T2A= _T29->ae;_T2C= Cyc_Dict_insert;{
struct Cyc_Dict_Dict(*_T34)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Typedefdecl*)=(struct Cyc_Dict_Dict(*)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Typedefdecl*))_T2C;_T2B= _T34;}_T2D= te;_T2E= _T2D->ae;_T2F= _T2E->typedefs;_T30= q;_T31= td2;({__typeof__(_T2B(_T2F,_T30,_T31))_T34=_T2B(_T2F,_T30,_T31);_T2A->typedefs= _T34;});goto _TL98;_TL97: _TL98: goto _LL0;}}}_LL0:;}}}
# 402
static void Cyc_Tc_tcAggrImpl(struct Cyc_Tc_TcContext*ctx,struct Cyc_Tcenv_Tenv*te,unsigned loc,enum Cyc_Absyn_AggrKind str_or_union,struct Cyc_List_List*flagged_tvs,struct Cyc_List_List*effc,struct Cyc_List_List**qb,struct Cyc_List_List*fields){struct Cyc_List_List*(*_T0)(struct Cyc_Absyn_Tvar*(*)(struct _tuple15*),struct Cyc_List_List*);struct Cyc_List_List*(*_T1)(void*(*)(void*),struct Cyc_List_List*);struct Cyc_Absyn_Tvar*(*_T2)(struct _tuple15*);void*(*_T3)(struct _tuple0*);struct Cyc_List_List*_T4;struct Cyc_List_List*_T5;int*_T6;unsigned _T7;void*_T8;void*_T9;void*_TA;void*_TB;struct Cyc_Tc_TcContext*_TC;unsigned _TD;struct Cyc_Tcenv_Tenv*_TE;struct Cyc_List_List*_TF;struct Cyc_Absyn_Kind*_T10;struct Cyc_Absyn_Kind*_T11;void*_T12;struct Cyc_Tc_TcContext*_T13;unsigned _T14;struct Cyc_Tcenv_Tenv*_T15;struct Cyc_List_List*_T16;struct Cyc_Absyn_Kind*_T17;struct Cyc_Absyn_Kind*_T18;void*_T19;void*_T1A;struct Cyc_Tc_TcContext*_T1B;unsigned _T1C;struct Cyc_Tcenv_Tenv*_T1D;struct Cyc_List_List*_T1E;struct Cyc_Absyn_Kind*_T1F;struct Cyc_Absyn_Kind*_T20;void*_T21;struct Cyc_List_List*_T22;struct Cyc_List_List*_T23;void*_T24;long(*_T25)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*);long(*_T26)(int(*)(void*,void*),struct Cyc_List_List*,void*);int(*_T27)(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_List_List*_T28;struct _fat_ptr*_T29;long _T2A;struct Cyc_Warn_String_Warn_Warg_struct _T2B;struct Cyc_Warn_String_Warn_Warg_struct _T2C;struct _fat_ptr*_T2D;unsigned _T2E;struct _fat_ptr _T2F;struct _fat_ptr*_T30;struct _fat_ptr _T31;struct _fat_ptr _T32;int _T33;struct Cyc_List_List*_T34;struct _RegionHandle*_T35;struct Cyc_Absyn_Kind*_T36;enum Cyc_Absyn_AggrKind _T37;int _T38;struct Cyc_List_List*_T39;struct Cyc_List_List*_T3A;enum Cyc_Absyn_AggrKind _T3B;int _T3C;struct Cyc_Absyn_Kind*_T3D;struct Cyc_List_List*_T3E;void*_T3F;struct Cyc_Absyn_Aggrfield*_T40;unsigned _T41;struct Cyc_List_List*_T42;void*_T43;struct Cyc_Absyn_Aggrfield*_T44;struct Cyc_Absyn_Tqual _T45;long _T46;void*_T47;struct Cyc_Absyn_Exp*_T48;unsigned _T49;enum Cyc_Absyn_AggrKind _T4A;int _T4B;struct Cyc_Warn_String_Warn_Warg_struct _T4C;unsigned _T4D;struct _fat_ptr _T4E;long _T4F;struct Cyc_Warn_String_Warn_Warg_struct _T50;struct Cyc_Warn_Typ_Warn_Warg_struct _T51;struct Cyc_Absyn_Exp*_T52;void*_T53;struct Cyc_Warn_String_Warn_Warg_struct _T54;struct Cyc_Absyn_Exp*_T55;unsigned _T56;struct _fat_ptr _T57;struct Cyc_Tc_TcContext*_T58;struct Cyc_Absyn_Exp*_T59;unsigned _T5A;struct Cyc_Tcenv_Tenv*_T5B;struct Cyc_List_List*_T5C;struct Cyc_List_List**_T5D;struct Cyc_Absyn_Kind*_T5E;struct Cyc_Absyn_Kind*_T5F;struct Cyc_Absyn_ValueofType_Absyn_Type_struct*_T60;void*_T61;struct Cyc_AssnDef_AssnMap _T62;void*_T63;struct Cyc_AssnDef_False_AssnDef_Assn_struct*_T64;struct Cyc_AssnDef_False_AssnDef_Assn_struct*_T65;void*_T66;long _T67;struct Cyc_Warn_String_Warn_Warg_struct _T68;struct Cyc_Absyn_Exp*_T69;unsigned _T6A;struct _fat_ptr _T6B;void*_T6C;struct Cyc_List_List*_T6D;void*_T6E;void*_T6F;long _T70;struct Cyc_Warn_String_Warn_Warg_struct _T71;struct Cyc_Warn_String_Warn_Warg_struct _T72;struct Cyc_Warn_String_Warn_Warg_struct _T73;struct Cyc_Warn_String_Warn_Warg_struct _T74;struct Cyc_List_List*_T75;void*_T76;struct Cyc_Absyn_Exp*_T77;unsigned _T78;struct _fat_ptr _T79;struct Cyc_List_List*_T7A;struct Cyc_List_List*_T7B;struct _RegionHandle*_T7C;struct Cyc_Warn_String_Warn_Warg_struct _T7D;unsigned _T7E;struct _fat_ptr _T7F;struct Cyc_List_List*_T80;struct _RegionHandle _T81=_new_region(0U,"uprev_rgn");struct _RegionHandle*uprev_rgn=& _T81;_push_region(uprev_rgn);_T1= Cyc_List_map;{
# 408
struct Cyc_List_List*(*_T82)(struct Cyc_Absyn_Tvar*(*)(struct _tuple15*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct Cyc_Absyn_Tvar*(*)(struct _tuple15*),struct Cyc_List_List*))_T1;_T0= _T82;}_T3= Cyc_Core_fst;{struct Cyc_Absyn_Tvar*(*_T82)(struct _tuple15*)=(struct Cyc_Absyn_Tvar*(*)(struct _tuple15*))_T3;_T2= _T82;}_T4= flagged_tvs;{struct Cyc_List_List*tvs=_T0(_T2,_T4);
_TL9C: if(effc!=0)goto _TL9A;else{goto _TL9B;}
_TL9A: _T5= effc;{void*_T82=_T5->hd;void*_T83;void*_T84;_T6= (int*)_T82;_T7= *_T6;switch(_T7){case 1:{struct Cyc_Absyn_DisjointConstraint_Absyn_EffConstraint_struct*_T85=(struct Cyc_Absyn_DisjointConstraint_Absyn_EffConstraint_struct*)_T82;_T8= _T85->f1;_T84= (void*)_T8;_T9= _T85->f2;_T83= (void*)_T9;}{void*e1=_T84;void*e2=_T83;_T84= e1;_T83= e2;goto _LL4;}case 2:{struct Cyc_Absyn_SubsetConstraint_Absyn_EffConstraint_struct*_T85=(struct Cyc_Absyn_SubsetConstraint_Absyn_EffConstraint_struct*)_T82;_TA= _T85->f1;_T84= (void*)_TA;_TB= _T85->f2;_T83= (void*)_TB;}_LL4: {void*e1=_T84;void*e2=_T83;_TC= ctx;_TD= loc;_TE= te;_TF= tvs;_T10= & Cyc_Kinds_ek;_T11= (struct Cyc_Absyn_Kind*)_T10;_T12= e1;
# 414
Cyc_Tctyp_check_type(_TC,_TD,_TE,_TF,_T11,0,0,_T12);_T13= ctx;_T14= loc;_T15= te;_T16= tvs;_T17= & Cyc_Kinds_ek;_T18= (struct Cyc_Absyn_Kind*)_T17;_T19= e2;
Cyc_Tctyp_check_type(_T13,_T14,_T15,_T16,_T18,0,0,_T19);goto _LL0;}default:{struct Cyc_Absyn_SingleConstraint_Absyn_EffConstraint_struct*_T85=(struct Cyc_Absyn_SingleConstraint_Absyn_EffConstraint_struct*)_T82;_T1A= _T85->f1;_T84= (void*)_T1A;}{void*e1=_T84;_T1B= ctx;_T1C= loc;_T1D= te;_T1E= tvs;_T1F= & Cyc_Kinds_ek;_T20= (struct Cyc_Absyn_Kind*)_T1F;_T21= e1;
# 418
Cyc_Tctyp_check_type(_T1B,_T1C,_T1D,_T1E,_T20,0,0,_T21);goto _LL0;}}_LL0:;}_T22= effc;
# 409
effc= _T22->tl;goto _TL9C;_TL9B: {
# 423
struct Cyc_List_List*prev_fields=0;
struct Cyc_List_List*prev_requires=0;
struct Cyc_List_List*fs=fields;_TLA1: if(fs!=0)goto _TL9F;else{goto _TLA0;}
_TL9F: _T23= fs;_T24= _T23->hd;{struct Cyc_Absyn_Aggrfield*_T82=(struct Cyc_Absyn_Aggrfield*)_T24;struct Cyc_Absyn_Exp*_T83;struct Cyc_List_List*_T84;struct Cyc_Absyn_Exp*_T85;void*_T86;struct Cyc_Absyn_Tqual _T87;struct _fat_ptr*_T88;{struct Cyc_Absyn_Aggrfield _T89=*_T82;_T88= _T89.name;_T87= _T89.tq;_T86= _T89.type;_T85= _T89.width;_T84= _T89.attributes;_T83= _T89.requires_clause;}{struct _fat_ptr*fn=_T88;struct Cyc_Absyn_Tqual tq=_T87;void*t=_T86;struct Cyc_Absyn_Exp*width=_T85;struct Cyc_List_List*atts=_T84;struct Cyc_Absyn_Exp*requires_clause=_T83;_T26= Cyc_List_mem;{
# 428
long(*_T89)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*)=(long(*)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*))_T26;_T25= _T89;}_T27= Cyc_strptrcmp;_T28= prev_fields;_T29= fn;_T2A= _T25(_T27,_T28,_T29);if(!_T2A)goto _TLA2;{struct Cyc_Warn_String_Warn_Warg_struct _T89;_T89.tag= 0;
({__typeof__(_tag_fat("duplicate member ",sizeof(char),18U))_T8A=_tag_fat("duplicate member ",sizeof(char),18U);_T89.f1= _T8A;});_T2B= _T89;}{struct Cyc_Warn_String_Warn_Warg_struct _T89=_T2B;{struct Cyc_Warn_String_Warn_Warg_struct _T8A;_T8A.tag= 0;_T2D= fn;_T8A.f1= *_T2D;_T2C= _T8A;}{struct Cyc_Warn_String_Warn_Warg_struct _T8A=_T2C;void*_T8B[2];_T8B[0]= & _T89;_T8B[1]= & _T8A;_T2E= loc;_T2F= _tag_fat(_T8B,sizeof(void*),2);Cyc_Warn_err2(_T2E,_T2F);}}goto _TLA3;_TLA2: _TLA3: _T30= fn;_T31= *_T30;_T32= 
# 432
_tag_fat("",sizeof(char),1U);_T33= Cyc_strcmp(_T31,_T32);if(_T33==0)goto _TLA4;_T35= uprev_rgn;{struct Cyc_List_List*_T89=_region_malloc(_T35,0U,sizeof(struct Cyc_List_List));
_T89->hd= fn;_T89->tl= prev_fields;_T34= (struct Cyc_List_List*)_T89;}prev_fields= _T34;goto _TLA5;_TLA4: _TLA5: _T36= & Cyc_Kinds_mk;{
# 435
struct Cyc_Absyn_Kind*field_kind=(struct Cyc_Absyn_Kind*)_T36;_T37= str_or_union;_T38= (int)_T37;
# 439
if(_T38==1)goto _TLA8;else{goto _TLA9;}_TLA9: _T39= fs;_T3A= _T39->tl;if(_T3A==0)goto _TLAA;else{goto _TLA6;}_TLAA: _T3B= str_or_union;_T3C= (int)_T3B;if(_T3C==0)goto _TLA8;else{goto _TLA6;}
_TLA8: _T3D= & Cyc_Kinds_ak;field_kind= (struct Cyc_Absyn_Kind*)_T3D;goto _TLA7;_TLA6: _TLA7:
 Cyc_Tctyp_check_type_with_bounds(ctx,loc,te,flagged_tvs,qb,field_kind,0,0,t);_T3E= fs;_T3F= _T3E->hd;_T40= (struct Cyc_Absyn_Aggrfield*)_T3F;_T41= loc;_T42= fs;_T43= _T42->hd;_T44= (struct Cyc_Absyn_Aggrfield*)_T43;_T45= _T44->tq;_T46= _T45.print_const;_T47= t;
# 443
({__typeof__(Cyc_Tcutil_extract_const_from_typedef(_T41,_T46,_T47))_T89=Cyc_Tcutil_extract_const_from_typedef(_T41,_T46,_T47);_T40->tq.real_const= _T89;});
# 446
Cyc_Tcutil_check_bitfield(loc,t,width,fn);_T48= requires_clause;_T49= (unsigned)_T48;
# 448
if(!_T49)goto _TLAB;_T4A= str_or_union;_T4B= (int)_T4A;
if(_T4B==1)goto _TLAD;{struct Cyc_Warn_String_Warn_Warg_struct _T89;_T89.tag= 0;
({__typeof__(_tag_fat("@requires clauses are allowed only on union members",sizeof(char),52U))_T8A=_tag_fat("@requires clauses are allowed only on union members",sizeof(char),52U);_T89.f1= _T8A;});_T4C= _T89;}{struct Cyc_Warn_String_Warn_Warg_struct _T89=_T4C;void*_T8A[1];_T8A[0]= & _T89;_T4D= loc;_T4E= _tag_fat(_T8A,sizeof(void*),1);Cyc_Warn_err2(_T4D,_T4E);}goto _TLAE;_TLAD: _TLAE:{
struct Cyc_Tcenv_Tenv*te2=Cyc_Tcenv_allow_valueof(te);
Cyc_Tcexp_tcExp(ctx,te2,0,requires_clause);_T4F= 
Cyc_Tcutil_is_integral(requires_clause);if(_T4F)goto _TLAF;else{goto _TLB1;}
_TLB1:{struct Cyc_Warn_String_Warn_Warg_struct _T89;_T89.tag= 0;({__typeof__(_tag_fat("@requires clause has type ",sizeof(char),27U))_T8A=_tag_fat("@requires clause has type ",sizeof(char),27U);_T89.f1= _T8A;});_T50= _T89;}{struct Cyc_Warn_String_Warn_Warg_struct _T89=_T50;{struct Cyc_Warn_Typ_Warn_Warg_struct _T8A;_T8A.tag= 2;_T52= requires_clause;_T53= _T52->topt;
({__typeof__(_check_null(_T53))_T8B=_check_null(_T53);_T8A.f1= _T8B;});_T51= _T8A;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T8A=_T51;{struct Cyc_Warn_String_Warn_Warg_struct _T8B;_T8B.tag= 0;({__typeof__(_tag_fat(" instead of integral type",sizeof(char),26U))_T8C=_tag_fat(" instead of integral type",sizeof(char),26U);_T8B.f1= _T8C;});_T54= _T8B;}{struct Cyc_Warn_String_Warn_Warg_struct _T8B=_T54;void*_T8C[3];_T8C[0]= & _T89;_T8C[1]= & _T8A;_T8C[2]= & _T8B;_T55= requires_clause;_T56= _T55->loc;_T57= _tag_fat(_T8C,sizeof(void*),3);Cyc_Warn_err2(_T56,_T57);}}}goto _TLB0;
# 457
_TLAF: _T58= ctx;_T59= requires_clause;_T5A= _T59->loc;_T5B= te;_T5C= flagged_tvs;_T5D= qb;_T5E= & Cyc_Kinds_ik;_T5F= (struct Cyc_Absyn_Kind*)_T5E;{struct Cyc_Absyn_ValueofType_Absyn_Type_struct*_T89=_cycalloc(sizeof(struct Cyc_Absyn_ValueofType_Absyn_Type_struct));_T89->tag= 9;
_T89->f1= requires_clause;_T60= (struct Cyc_Absyn_ValueofType_Absyn_Type_struct*)_T89;}_T61= (void*)_T60;
# 457
Cyc_Tctyp_check_type_with_bounds(_T58,_T5A,_T5B,_T5C,_T5D,_T5F,0,0,_T61);{
# 460
struct Cyc_AssnDef_AssnMap assnmap=Cyc_Vcgen_clause2assn(requires_clause);_T62= assnmap;{
void*req_assn=_T62.assn;_T63= req_assn;_T64= & Cyc_AssnDef_false_assn;_T65= (struct Cyc_AssnDef_False_AssnDef_Assn_struct*)_T64;_T66= (void*)_T65;_T67= 
# 463
Cyc_PrattProver_constraint_prove(_T63,_T66);if(!_T67)goto _TLB2;{struct Cyc_Warn_String_Warn_Warg_struct _T89;_T89.tag= 0;
({__typeof__(_tag_fat("@requires clause may be unsatisfiable",sizeof(char),38U))_T8A=_tag_fat("@requires clause may be unsatisfiable",sizeof(char),38U);_T89.f1= _T8A;});_T68= _T89;}{struct Cyc_Warn_String_Warn_Warg_struct _T89=_T68;void*_T8A[1];_T8A[0]= & _T89;_T69= requires_clause;_T6A= _T69->loc;_T6B= _tag_fat(_T8A,sizeof(void*),1);Cyc_Warn_err2(_T6A,_T6B);}goto _TLB3;_TLB2: _TLB3:{
# 469
struct Cyc_List_List*p=prev_requires;_TLB7: if(p!=0)goto _TLB5;else{goto _TLB6;}
_TLB5: _T6C= req_assn;_T6D= p;_T6E= _T6D->hd;_T6F= Cyc_AssnDef_not(_T6E);_T70= Cyc_PrattProver_constraint_prove(_T6C,_T6F);if(_T70)goto _TLB8;else{goto _TLBA;}
_TLBA:{struct Cyc_Warn_String_Warn_Warg_struct _T89;_T89.tag= 0;({__typeof__(_tag_fat("@requires clause ",sizeof(char),18U))_T8A=_tag_fat("@requires clause ",sizeof(char),18U);_T89.f1= _T8A;});_T71= _T89;}{struct Cyc_Warn_String_Warn_Warg_struct _T89=_T71;{struct Cyc_Warn_String_Warn_Warg_struct _T8A;_T8A.tag= 0;({__typeof__(Cyc_AssnDef_assn2string(req_assn))_T8B=Cyc_AssnDef_assn2string(req_assn);_T8A.f1= _T8B;});_T72= _T8A;}{struct Cyc_Warn_String_Warn_Warg_struct _T8A=_T72;{struct Cyc_Warn_String_Warn_Warg_struct _T8B;_T8B.tag= 0;
({__typeof__(_tag_fat(" may overlap with previous clauses ",sizeof(char),36U))_T8C=_tag_fat(" may overlap with previous clauses ",sizeof(char),36U);_T8B.f1= _T8C;});_T73= _T8B;}{struct Cyc_Warn_String_Warn_Warg_struct _T8B=_T73;{struct Cyc_Warn_String_Warn_Warg_struct _T8C;_T8C.tag= 0;_T75= p;_T76= _T75->hd;({__typeof__(Cyc_AssnDef_assn2string(_T76))_T8D=Cyc_AssnDef_assn2string(_T76);_T8C.f1= _T8D;});_T74= _T8C;}{struct Cyc_Warn_String_Warn_Warg_struct _T8C=_T74;void*_T8D[4];_T8D[0]= & _T89;_T8D[1]= & _T8A;_T8D[2]= & _T8B;_T8D[3]= & _T8C;_T77= requires_clause;_T78= _T77->loc;_T79= _tag_fat(_T8D,sizeof(void*),4);Cyc_Warn_err2(_T78,_T79);}}}}goto _TLB9;_TLB8: _TLB9: _T7A= p;
# 469
p= _T7A->tl;goto _TLB7;_TLB6:;}_T7C= uprev_rgn;{struct Cyc_List_List*_T89=_region_malloc(_T7C,0U,sizeof(struct Cyc_List_List));
# 474
_T89->hd= req_assn;_T89->tl= prev_requires;_T7B= (struct Cyc_List_List*)_T89;}prev_requires= _T7B;}}_TLB0:;}goto _TLAC;
# 477
_TLAB: if(prev_requires==0)goto _TLBB;{struct Cyc_Warn_String_Warn_Warg_struct _T89;_T89.tag= 0;
({__typeof__(_tag_fat("if one field has a @requires clause, they all must",sizeof(char),51U))_T8A=_tag_fat("if one field has a @requires clause, they all must",sizeof(char),51U);_T89.f1= _T8A;});_T7D= _T89;}{struct Cyc_Warn_String_Warn_Warg_struct _T89=_T7D;void*_T8A[1];_T8A[0]= & _T89;_T7E= loc;_T7F= _tag_fat(_T8A,sizeof(void*),1);Cyc_Warn_err2(_T7E,_T7F);}goto _TLBC;_TLBB: _TLBC: _TLAC:;}}}_T80= fs;
# 425
fs= _T80->tl;goto _TLA1;_TLA0:;}}_pop_region();}
# 482
static void Cyc_Tc_rule_out_memkind(unsigned loc,struct _tuple1*n,struct Cyc_List_List*tvs){struct Cyc_List_List*_T0;void*_T1;struct Cyc_Absyn_Tvar*_T2;void*_T3;int*_T4;unsigned _T5;struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*_T6;struct Cyc_Core_Opt**_T7;struct Cyc_Core_Opt**_T8;struct Cyc_Core_Opt*_T9;struct Cyc_Absyn_Kind*_TA;struct Cyc_Absyn_Kind*_TB;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_TC;struct Cyc_Absyn_Kind*_TD;struct Cyc_Absyn_Kind*_TE;enum Cyc_Absyn_KindQual _TF;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T10;struct Cyc_Core_Opt**_T11;struct Cyc_Absyn_Kind*_T12;struct Cyc_Core_Opt**_T13;struct Cyc_Core_Opt*_T14;struct Cyc_Absyn_Kind*_T15;struct Cyc_Absyn_Kind*_T16;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T17;struct Cyc_Core_Opt**_T18;struct Cyc_Core_Opt**_T19;struct Cyc_Core_Opt*_T1A;struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*_T1B;struct Cyc_Absyn_Kind*_T1C;struct Cyc_Absyn_Kind*_T1D;enum Cyc_Absyn_KindQual _T1E;struct Cyc_Absyn_Kind*_T1F;struct Cyc_Warn_String_Warn_Warg_struct _T20;struct Cyc_Warn_Qvar_Warn_Warg_struct _T21;struct Cyc_Warn_String_Warn_Warg_struct _T22;struct Cyc_Warn_Tvar_Warn_Warg_struct _T23;struct Cyc_List_List*_T24;void*_T25;struct Cyc_Warn_String_Warn_Warg_struct _T26;struct Cyc_Warn_Kind_Warn_Warg_struct _T27;struct Cyc_Absyn_Kind*_T28;unsigned _T29;struct _fat_ptr _T2A;struct Cyc_List_List*_T2B;
struct Cyc_List_List*tvs2=tvs;_TLC0: if(tvs2!=0)goto _TLBE;else{goto _TLBF;}
_TLBE: _T0= tvs2;_T1= _T0->hd;_T2= (struct Cyc_Absyn_Tvar*)_T1;_T3= _T2->kind;{void*_T2C=Cyc_Kinds_compress_kb(_T3);struct Cyc_Absyn_Kind*_T2D;enum Cyc_Absyn_AliasHint _T2E;void*_T2F;_T4= (int*)_T2C;_T5= *_T4;switch(_T5){case 1:{struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*_T30=(struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*)_T2C;_T6= (struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*)_T2C;_T7= & _T6->f1;_T2F= (struct Cyc_Core_Opt**)_T7;}{struct Cyc_Core_Opt**f=_T2F;_T8= f;{struct Cyc_Core_Opt*_T30=_cycalloc(sizeof(struct Cyc_Core_Opt));_TA= & Cyc_Kinds_bk;_TB= (struct Cyc_Absyn_Kind*)_TA;
# 486
({__typeof__(Cyc_Kinds_kind_to_bound(_TB))_T31=Cyc_Kinds_kind_to_bound(_TB);_T30->v= _T31;});_T9= (struct Cyc_Core_Opt*)_T30;}*_T8= _T9;goto _TLBD;}case 2: _TC= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T2C;_TD= _TC->f2;_TE= (struct Cyc_Absyn_Kind*)_TD;_TF= _TE->kind;if(_TF!=Cyc_Absyn_MemKind)goto _TLC2;{struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T30=(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T2C;_T10= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T2C;_T11= & _T10->f1;_T2F= (struct Cyc_Core_Opt**)_T11;_T12= _T30->f2;{struct Cyc_Absyn_Kind _T31=*_T12;_T2E= _T31.aliashint;}}{struct Cyc_Core_Opt**f=_T2F;enum Cyc_Absyn_AliasHint a=_T2E;_T13= f;{struct Cyc_Core_Opt*_T30=_cycalloc(sizeof(struct Cyc_Core_Opt));_T15= & Cyc_Kinds_bk;_T16= (struct Cyc_Absyn_Kind*)_T15;
# 493
({__typeof__(Cyc_Kinds_kind_to_bound(_T16))_T31=Cyc_Kinds_kind_to_bound(_T16);_T30->v= _T31;});_T14= (struct Cyc_Core_Opt*)_T30;}*_T13= _T14;goto _TLBD;}_TLC2:{struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T30=(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T2C;_T17= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T2C;_T18= & _T17->f1;_T2F= (struct Cyc_Core_Opt**)_T18;_T2D= _T30->f2;}{struct Cyc_Core_Opt**f=(struct Cyc_Core_Opt**)_T2F;struct Cyc_Absyn_Kind*k=_T2D;_T19= f;{struct Cyc_Core_Opt*_T30=_cycalloc(sizeof(struct Cyc_Core_Opt));
# 500
({__typeof__(Cyc_Kinds_kind_to_bound(k))_T31=Cyc_Kinds_kind_to_bound(k);_T30->v= _T31;});_T1A= (struct Cyc_Core_Opt*)_T30;}*_T19= _T1A;goto _TLBD;}default: _T1B= (struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*)_T2C;_T1C= _T1B->f1;_T1D= (struct Cyc_Absyn_Kind*)_T1C;_T1E= _T1D->kind;if(_T1E!=Cyc_Absyn_MemKind)goto _TLC4;{struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*_T30=(struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*)_T2C;_T1F= _T30->f1;{struct Cyc_Absyn_Kind _T31=*_T1F;_T2E= _T31.aliashint;}}{enum Cyc_Absyn_AliasHint a=_T2E;{struct Cyc_Warn_String_Warn_Warg_struct _T30;_T30.tag= 0;
# 503
({__typeof__(_tag_fat("type ",sizeof(char),6U))_T31=_tag_fat("type ",sizeof(char),6U);_T30.f1= _T31;});_T20= _T30;}{struct Cyc_Warn_String_Warn_Warg_struct _T30=_T20;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T31;_T31.tag= 1;_T31.f1= n;_T21= _T31;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T31=_T21;{struct Cyc_Warn_String_Warn_Warg_struct _T32;_T32.tag= 0;({__typeof__(_tag_fat(" attempts to abstract type variable ",sizeof(char),37U))_T33=_tag_fat(" attempts to abstract type variable ",sizeof(char),37U);_T32.f1= _T33;});_T22= _T32;}{struct Cyc_Warn_String_Warn_Warg_struct _T32=_T22;{struct Cyc_Warn_Tvar_Warn_Warg_struct _T33;_T33.tag= 7;_T24= tvs2;_T25= _T24->hd;_T33.f1= (struct Cyc_Absyn_Tvar*)_T25;_T23= _T33;}{struct Cyc_Warn_Tvar_Warn_Warg_struct _T33=_T23;{struct Cyc_Warn_String_Warn_Warg_struct _T34;_T34.tag= 0;({__typeof__(_tag_fat(" of kind ",sizeof(char),10U))_T35=_tag_fat(" of kind ",sizeof(char),10U);_T34.f1= _T35;});_T26= _T34;}{struct Cyc_Warn_String_Warn_Warg_struct _T34=_T26;{struct Cyc_Warn_Kind_Warn_Warg_struct _T35;_T35.tag= 9;{struct Cyc_Absyn_Kind*_T36=_cycalloc(sizeof(struct Cyc_Absyn_Kind));
_T36->kind= 1U;_T36->aliashint= a;_T28= (struct Cyc_Absyn_Kind*)_T36;}_T35.f1= _T28;_T27= _T35;}{struct Cyc_Warn_Kind_Warn_Warg_struct _T35=_T27;void*_T36[6];_T36[0]= & _T30;_T36[1]= & _T31;_T36[2]= & _T32;_T36[3]= & _T33;_T36[4]= & _T34;_T36[5]= & _T35;_T29= loc;_T2A= _tag_fat(_T36,sizeof(void*),6);Cyc_Warn_err2(_T29,_T2A);}}}}}}goto _TLBD;}_TLC4: goto _TLBD;};}_TLBD: _T2B= tvs2;
# 483
tvs2= _T2B->tl;goto _TLC0;_TLBF:;}
# 511
static void Cyc_Tc_rule_out_mem_and_qual(unsigned loc,struct _tuple1*q,struct Cyc_List_List*tvs){struct Cyc_List_List*_T0;void*_T1;struct Cyc_Absyn_Tvar*_T2;void*_T3;int*_T4;unsigned _T5;struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*_T6;struct Cyc_Core_Opt**_T7;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T8;struct Cyc_Absyn_Kind*_T9;struct Cyc_Absyn_Kind*_TA;enum Cyc_Absyn_KindQual _TB;int _TC;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_TD;struct Cyc_Core_Opt**_TE;struct Cyc_Core_Opt**_TF;struct Cyc_Core_Opt*_T10;struct Cyc_Absyn_Kind*_T11;struct Cyc_Absyn_Kind*_T12;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T13;struct Cyc_Core_Opt**_T14;struct Cyc_Core_Opt**_T15;struct Cyc_Core_Opt*_T16;struct Cyc_Absyn_Kind*_T17;struct Cyc_Absyn_Kind*_T18;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T19;struct Cyc_Core_Opt**_T1A;struct Cyc_Core_Opt**_T1B;struct Cyc_Core_Opt*_T1C;struct Cyc_Absyn_Kind*_T1D;struct Cyc_Absyn_Kind*_T1E;struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*_T1F;struct Cyc_Absyn_Kind*_T20;struct Cyc_Absyn_Kind*_T21;enum Cyc_Absyn_KindQual _T22;int _T23;struct Cyc_Warn_String_Warn_Warg_struct _T24;struct Cyc_Warn_Qvar_Warn_Warg_struct _T25;struct Cyc_Warn_String_Warn_Warg_struct _T26;struct Cyc_Warn_Tvar_Warn_Warg_struct _T27;struct Cyc_List_List*_T28;void*_T29;struct Cyc_Warn_String_Warn_Warg_struct _T2A;unsigned _T2B;struct _fat_ptr _T2C;struct Cyc_Absyn_Kind*_T2D;struct Cyc_Warn_String_Warn_Warg_struct _T2E;struct Cyc_Warn_Qvar_Warn_Warg_struct _T2F;struct Cyc_Warn_String_Warn_Warg_struct _T30;struct Cyc_Warn_Tvar_Warn_Warg_struct _T31;struct Cyc_List_List*_T32;void*_T33;struct Cyc_Warn_String_Warn_Warg_struct _T34;struct Cyc_Warn_Kind_Warn_Warg_struct _T35;struct Cyc_Absyn_Kind*_T36;unsigned _T37;struct _fat_ptr _T38;struct Cyc_List_List*_T39;
struct Cyc_List_List*tvs2=tvs;_TLC9: if(tvs2!=0)goto _TLC7;else{goto _TLC8;}
_TLC7: _T0= tvs2;_T1= _T0->hd;_T2= (struct Cyc_Absyn_Tvar*)_T1;_T3= _T2->kind;{void*_T3A=Cyc_Kinds_compress_kb(_T3);enum Cyc_Absyn_AliasHint _T3B;void*_T3C;_T4= (int*)_T3A;_T5= *_T4;switch(_T5){case 1:{struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*_T3D=(struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*)_T3A;_T6= (struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*)_T3A;_T7= & _T6->f1;_T3C= (struct Cyc_Core_Opt**)_T7;}{struct Cyc_Core_Opt**f=_T3C;_T3C= f;goto _LL4;}case 2: _T8= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3A;_T9= _T8->f2;_TA= (struct Cyc_Absyn_Kind*)_T9;_TB= _TA->kind;_TC= (int)_TB;switch(_TC){case Cyc_Absyn_MemKind:{struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T3D=(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3A;_TD= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3A;_TE= & _TD->f1;_T3C= (struct Cyc_Core_Opt**)_TE;}_LL4: {struct Cyc_Core_Opt**f=_T3C;_TF= f;{struct Cyc_Core_Opt*_T3D=_cycalloc(sizeof(struct Cyc_Core_Opt));_T11= & Cyc_Kinds_bk;_T12= (struct Cyc_Absyn_Kind*)_T11;
# 518
({__typeof__(Cyc_Kinds_kind_to_bound(_T12))_T3E=Cyc_Kinds_kind_to_bound(_T12);_T3D->v= _T3E;});_T10= (struct Cyc_Core_Opt*)_T3D;}*_TF= _T10;goto _LL0;}case Cyc_Absyn_AnyKind:{struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T3D=(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3A;_T13= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3A;_T14= & _T13->f1;_T3C= (struct Cyc_Core_Opt**)_T14;}{struct Cyc_Core_Opt**f=_T3C;_T15= f;{struct Cyc_Core_Opt*_T3D=_cycalloc(sizeof(struct Cyc_Core_Opt));_T17= & Cyc_Kinds_ak;_T18= (struct Cyc_Absyn_Kind*)_T17;
# 521
({__typeof__(Cyc_Kinds_kind_to_bound(_T18))_T3E=Cyc_Kinds_kind_to_bound(_T18);_T3D->v= _T3E;});_T16= (struct Cyc_Core_Opt*)_T3D;}*_T15= _T16;goto _LL0;}case Cyc_Absyn_EffKind:{struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T3D=(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3A;_T19= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3A;_T1A= & _T19->f1;_T3C= (struct Cyc_Core_Opt**)_T1A;}{struct Cyc_Core_Opt**f=(struct Cyc_Core_Opt**)_T3C;_T1B= f;{struct Cyc_Core_Opt*_T3D=_cycalloc(sizeof(struct Cyc_Core_Opt));_T1D= & Cyc_Kinds_ek;_T1E= (struct Cyc_Absyn_Kind*)_T1D;
# 524
({__typeof__(Cyc_Kinds_kind_to_bound(_T1E))_T3E=Cyc_Kinds_kind_to_bound(_T1E);_T3D->v= _T3E;});_T1C= (struct Cyc_Core_Opt*)_T3D;}*_T1B= _T1C;goto _LL0;}default: goto _LLD;};default: _T1F= (struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*)_T3A;_T20= _T1F->f1;_T21= (struct Cyc_Absyn_Kind*)_T20;_T22= _T21->kind;_T23= (int)_T22;switch(_T23){case Cyc_Absyn_AqualKind:{struct Cyc_Warn_String_Warn_Warg_struct _T3D;_T3D.tag= 0;
# 527
({__typeof__(_tag_fat("type ",sizeof(char),6U))_T3E=_tag_fat("type ",sizeof(char),6U);_T3D.f1= _T3E;});_T24= _T3D;}{struct Cyc_Warn_String_Warn_Warg_struct _T3D=_T24;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T3E;_T3E.tag= 1;_T3E.f1= q;_T25= _T3E;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T3E=_T25;{struct Cyc_Warn_String_Warn_Warg_struct _T3F;_T3F.tag= 0;({__typeof__(_tag_fat(" attempts to abstract type variable ",sizeof(char),37U))_T40=_tag_fat(" attempts to abstract type variable ",sizeof(char),37U);_T3F.f1= _T40;});_T26= _T3F;}{struct Cyc_Warn_String_Warn_Warg_struct _T3F=_T26;{struct Cyc_Warn_Tvar_Warn_Warg_struct _T40;_T40.tag= 7;_T28= tvs2;_T29= _T28->hd;_T40.f1= (struct Cyc_Absyn_Tvar*)_T29;_T27= _T40;}{struct Cyc_Warn_Tvar_Warn_Warg_struct _T40=_T27;{struct Cyc_Warn_String_Warn_Warg_struct _T41;_T41.tag= 0;({__typeof__(_tag_fat(" of kind Q",sizeof(char),11U))_T42=_tag_fat(" of kind Q",sizeof(char),11U);_T41.f1= _T42;});_T2A= _T41;}{struct Cyc_Warn_String_Warn_Warg_struct _T41=_T2A;void*_T42[5];_T42[0]= & _T3D;_T42[1]= & _T3E;_T42[2]= & _T3F;_T42[3]= & _T40;_T42[4]= & _T41;_T2B= loc;_T2C= _tag_fat(_T42,sizeof(void*),5);Cyc_Warn_err2(_T2B,_T2C);}}}}}goto _LL0;case Cyc_Absyn_MemKind:{struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*_T3D=(struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*)_T3A;_T2D= _T3D->f1;{struct Cyc_Absyn_Kind _T3E=*_T2D;_T3B= _T3E.aliashint;}}{enum Cyc_Absyn_AliasHint a=_T3B;{struct Cyc_Warn_String_Warn_Warg_struct _T3D;_T3D.tag= 0;
# 530
({__typeof__(_tag_fat("type ",sizeof(char),6U))_T3E=_tag_fat("type ",sizeof(char),6U);_T3D.f1= _T3E;});_T2E= _T3D;}{struct Cyc_Warn_String_Warn_Warg_struct _T3D=_T2E;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T3E;_T3E.tag= 1;_T3E.f1= q;_T2F= _T3E;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T3E=_T2F;{struct Cyc_Warn_String_Warn_Warg_struct _T3F;_T3F.tag= 0;({__typeof__(_tag_fat(" attempts to abstract type variable ",sizeof(char),37U))_T40=_tag_fat(" attempts to abstract type variable ",sizeof(char),37U);_T3F.f1= _T40;});_T30= _T3F;}{struct Cyc_Warn_String_Warn_Warg_struct _T3F=_T30;{struct Cyc_Warn_Tvar_Warn_Warg_struct _T40;_T40.tag= 7;_T32= tvs2;_T33= _T32->hd;_T40.f1= (struct Cyc_Absyn_Tvar*)_T33;_T31= _T40;}{struct Cyc_Warn_Tvar_Warn_Warg_struct _T40=_T31;{struct Cyc_Warn_String_Warn_Warg_struct _T41;_T41.tag= 0;({__typeof__(_tag_fat(" of kind ",sizeof(char),10U))_T42=_tag_fat(" of kind ",sizeof(char),10U);_T41.f1= _T42;});_T34= _T41;}{struct Cyc_Warn_String_Warn_Warg_struct _T41=_T34;{struct Cyc_Warn_Kind_Warn_Warg_struct _T42;_T42.tag= 9;{struct Cyc_Absyn_Kind*_T43=_cycalloc(sizeof(struct Cyc_Absyn_Kind));
_T43->kind= 1U;_T43->aliashint= a;_T36= (struct Cyc_Absyn_Kind*)_T43;}_T42.f1= _T36;_T35= _T42;}{struct Cyc_Warn_Kind_Warn_Warg_struct _T42=_T35;void*_T43[6];_T43[0]= & _T3D;_T43[1]= & _T3E;_T43[2]= & _T3F;_T43[3]= & _T40;_T43[4]= & _T41;_T43[5]= & _T42;_T37= loc;_T38= _tag_fat(_T43,sizeof(void*),6);Cyc_Warn_err2(_T37,_T38);}}}}}}goto _LL0;}default: _LLD: goto _LL0;};}_LL0:;}_T39= tvs2;
# 512
tvs2= _T39->tl;goto _TLC9;_TLC8:;}struct _tuple18{struct Cyc_Absyn_AggrdeclImpl*f0;struct Cyc_Absyn_Aggrdecl***f1;};
# 539
void Cyc_Tc_tcAggrdecl(struct Cyc_Tc_TcContext*ctx,struct Cyc_Tcenv_Tenv*te,unsigned loc,struct Cyc_Absyn_Aggrdecl*ad){struct Cyc_Absyn_Aggrdecl*_T0;struct Cyc_Tc_TcContext*_T1;long _T2;struct Cyc_String_pa_PrintArg_struct _T3;struct _tuple1*_T4;struct _tuple1 _T5;struct _fat_ptr*_T6;struct Cyc___cycFILE*_T7;struct _fat_ptr _T8;struct _fat_ptr _T9;unsigned _TA;struct _tuple1*_TB;struct _tuple1 _TC;struct _fat_ptr*_TD;struct Cyc_Absyn_Aggrdecl*_TE;struct Cyc_List_List*_TF;struct Cyc_Absyn_Aggrdecl*_T10;unsigned _T11;struct Cyc_Absyn_Aggrdecl*_T12;struct Cyc_List_List*_T13;struct Cyc_Absyn_Aggrdecl*_T14;struct Cyc_List_List*_T15;struct _tuple18 _T16;struct Cyc_Absyn_Aggrdecl*_T17;struct Cyc_Absyn_Aggrdecl***(*_T18)(struct Cyc_Dict_Dict,struct _tuple1*);void**(*_T19)(struct Cyc_Dict_Dict,void*);struct Cyc_Tcenv_Tenv*_T1A;struct Cyc_Tcenv_Genv*_T1B;struct Cyc_Dict_Dict _T1C;struct _tuple1*_T1D;struct Cyc_Absyn_AggrdeclImpl*_T1E;struct Cyc_Absyn_Aggrdecl***_T1F;struct Cyc_Tcenv_Tenv*_T20;struct Cyc_Tcenv_Genv*_T21;struct Cyc_Dict_Dict(*_T22)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Aggrdecl**);struct Cyc_Dict_Dict(*_T23)(struct Cyc_Dict_Dict,void*,void*);struct Cyc_Tcenv_Tenv*_T24;struct Cyc_Tcenv_Genv*_T25;struct Cyc_Dict_Dict _T26;struct _tuple1*_T27;struct Cyc_Absyn_Aggrdecl**_T28;struct Cyc_Absyn_Aggrdecl***_T29;struct Cyc_Absyn_Aggrdecl**_T2A;struct Cyc_Absyn_Aggrdecl*_T2B;struct Cyc_Absyn_Aggrdecl*_T2C;unsigned _T2D;struct Cyc_Tc_TcContext*_T2E;struct _fat_ptr*_T2F;struct _fat_ptr*_T30;struct Cyc_Absyn_Aggrdecl**_T31;struct Cyc_Absyn_Aggrdecl***_T32;struct Cyc_Absyn_AggrdeclImpl*_T33;struct Cyc_Absyn_AggrdeclImpl*_T34;struct Cyc_List_List**_T35;struct Cyc_Absyn_Aggrdecl**_T36;struct Cyc_Absyn_Aggrdecl*_T37;struct Cyc_Absyn_Aggrdecl*_T38;struct Cyc_Absyn_Aggrdecl*_T39;struct Cyc_Absyn_Aggrdecl*_T3A;struct Cyc_Tcenv_Tenv*_T3B;struct Cyc_Tcenv_Genv*_T3C;struct Cyc_Dict_Dict(*_T3D)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Aggrdecl**);struct Cyc_Dict_Dict(*_T3E)(struct Cyc_Dict_Dict,void*,void*);struct Cyc_Tcenv_Tenv*_T3F;struct Cyc_Tcenv_Genv*_T40;struct Cyc_Dict_Dict _T41;struct _tuple1*_T42;struct Cyc_Absyn_Aggrdecl**_T43;long _T44;struct Cyc_Absyn_Aggrdecl*_T45;enum Cyc_Absyn_AggrKind _T46;int _T47;struct Cyc_Warn_String_Warn_Warg_struct _T48;unsigned _T49;struct _fat_ptr _T4A;struct Cyc_List_List*(*_T4B)(struct _tuple15*(*)(long,struct Cyc_Absyn_Tvar*),long,struct Cyc_List_List*);struct Cyc_List_List*(*_T4C)(void*(*)(void*,void*),void*,struct Cyc_List_List*);struct _tuple15*(*_T4D)(long,struct Cyc_Absyn_Tvar*);struct Cyc_List_List*_T4E;struct Cyc_List_List*_T4F;struct Cyc_List_List*(*_T50)(struct _tuple15*(*)(long,struct Cyc_Absyn_Tvar*),long,struct Cyc_List_List*);struct Cyc_List_List*(*_T51)(void*(*)(void*,void*),void*,struct Cyc_List_List*);struct _tuple15*(*_T52)(long,struct Cyc_Absyn_Tvar*);struct Cyc_List_List*_T53;struct Cyc_List_List*_T54;struct Cyc_Tc_TcContext*_T55;struct Cyc_Tcenv_Tenv*_T56;unsigned _T57;struct Cyc_Absyn_Aggrdecl*_T58;enum Cyc_Absyn_AggrKind _T59;struct Cyc_List_List*_T5A;struct Cyc_List_List*_T5B;struct Cyc_List_List**_T5C;struct Cyc_List_List*_T5D;struct Cyc_Absyn_Aggrdecl*_T5E;enum Cyc_Absyn_AggrKind _T5F;int _T60;long _T61;long _T62;struct Cyc_List_List*_T63;void*_T64;struct Cyc_Absyn_Aggrfield*_T65;void*_T66;long _T67;struct Cyc_List_List*_T68;void*_T69;struct Cyc_Absyn_Aggrfield*_T6A;struct Cyc_Absyn_Exp*_T6B;struct Cyc_Warn_String_Warn_Warg_struct _T6C;struct Cyc_Warn_String_Warn_Warg_struct _T6D;struct Cyc_List_List*_T6E;void*_T6F;struct Cyc_Absyn_Aggrfield*_T70;struct _fat_ptr*_T71;struct Cyc_Warn_String_Warn_Warg_struct _T72;struct Cyc_Warn_Qvar_Warn_Warg_struct _T73;struct Cyc_Warn_String_Warn_Warg_struct _T74;struct Cyc_Warn_Typ_Warn_Warg_struct _T75;struct Cyc_List_List*_T76;void*_T77;struct Cyc_Absyn_Aggrfield*_T78;struct Cyc_Warn_String_Warn_Warg_struct _T79;unsigned _T7A;struct _fat_ptr _T7B;struct Cyc_List_List*_T7C;struct Cyc_Absyn_Aggrdecl**_T7D;struct Cyc_Absyn_AggrdeclImpl*_T7E;struct Cyc_Absyn_AggrdeclImpl*_T7F;struct Cyc_List_List**_T80;struct Cyc_Absyn_Aggrdecl***_T81;struct Cyc_Absyn_Aggrdecl*_T82;enum Cyc_Absyn_AggrKind _T83;int _T84;struct Cyc_Absyn_Aggrdecl**_T85;struct Cyc_Absyn_Aggrdecl*_T86;enum Cyc_Absyn_AggrKind _T87;int _T88;struct Cyc_Warn_String_Warn_Warg_struct _T89;unsigned _T8A;struct _fat_ptr _T8B;struct Cyc_Absyn_Aggrdecl**_T8C;struct Cyc_Absyn_Aggrdecl**_T8D;struct Cyc_Absyn_Aggrdecl*_T8E;struct Cyc_Absyn_Aggrdecl*_T8F;struct Cyc_Absyn_Aggrdecl*_T90;struct Cyc_Absyn_Aggrdecl*_T91;long _T92;struct Cyc_Absyn_Aggrdecl*_T93;enum Cyc_Absyn_AggrKind _T94;int _T95;struct Cyc_Warn_String_Warn_Warg_struct _T96;unsigned _T97;struct _fat_ptr _T98;struct Cyc_List_List*(*_T99)(struct _tuple15*(*)(long,struct Cyc_Absyn_Tvar*),long,struct Cyc_List_List*);struct Cyc_List_List*(*_T9A)(void*(*)(void*,void*),void*,struct Cyc_List_List*);struct _tuple15*(*_T9B)(long,struct Cyc_Absyn_Tvar*);struct Cyc_List_List*_T9C;struct Cyc_List_List*_T9D;struct Cyc_List_List*(*_T9E)(struct _tuple15*(*)(long,struct Cyc_Absyn_Tvar*),long,struct Cyc_List_List*);struct Cyc_List_List*(*_T9F)(void*(*)(void*,void*),void*,struct Cyc_List_List*);struct _tuple15*(*_TA0)(long,struct Cyc_Absyn_Tvar*);struct Cyc_List_List*_TA1;struct Cyc_List_List*_TA2;struct Cyc_Tc_TcContext*_TA3;struct Cyc_Tcenv_Tenv*_TA4;unsigned _TA5;struct Cyc_Absyn_Aggrdecl*_TA6;enum Cyc_Absyn_AggrKind _TA7;struct Cyc_List_List*_TA8;struct Cyc_List_List*_TA9;struct Cyc_List_List**_TAA;struct Cyc_List_List*_TAB;struct Cyc_Absyn_Aggrdecl**_TAC;_T0= ad;{
struct _tuple1*q=_T0->name;_T1= 
_check_null(ctx);_T2= _T1->debug;if(!_T2)goto _TLCD;{struct Cyc_String_pa_PrintArg_struct _TAD;_TAD.tag= 0;_T4= q;_T5= *_T4;_T6= _T5.f1;
_TAD.f1= *_T6;_T3= _TAD;}{struct Cyc_String_pa_PrintArg_struct _TAD=_T3;void*_TAE[1];_TAE[0]= & _TAD;_T7= Cyc_stderr;_T8= _tag_fat("type-checking type decl %s\n",sizeof(char),28U);_T9= _tag_fat(_TAE,sizeof(void*),1);Cyc_fprintf(_T7,_T8,_T9);}goto _TLCE;_TLCD: _TLCE: _TA= loc;_TB= q;_TC= *_TB;_TD= _TC.f1;_TE= ad;_TF= _TE->attributes;
# 545
Cyc_Atts_check_field_atts(_TA,_TD,_TF);_T10= ad;{
# 547
struct Cyc_List_List*tvs=_T10->tvs;_T11= loc;_T12= ad;_T13= _T12->tvs;
# 550
Cyc_Tcutil_check_unique_tvars(_T11,_T13);_T14= ad;_T15= _T14->tvs;
Cyc_Tcutil_add_tvar_identities(_T15);{struct _tuple18 _TAD;_T17= ad;
# 555
_TAD.f0= _T17->impl;_T19= Cyc_Dict_lookup_opt;{struct Cyc_Absyn_Aggrdecl***(*_TAE)(struct Cyc_Dict_Dict,struct _tuple1*)=(struct Cyc_Absyn_Aggrdecl***(*)(struct Cyc_Dict_Dict,struct _tuple1*))_T19;_T18= _TAE;}_T1A= te;_T1B= _T1A->ae;_T1C= _T1B->aggrdecls;_T1D= q;({__typeof__(_T18(_T1C,_T1D))_TAE=_T18(_T1C,_T1D);_TAD.f1= _TAE;});_T16= _TAD;}{struct _tuple18 _TAD=_T16;struct Cyc_Absyn_Aggrdecl**_TAE;struct Cyc_List_List*_TAF;long _TB0;struct Cyc_List_List*_TB1;struct Cyc_List_List*_TB2;void*_TB3;_T1E= _TAD.f0;if(_T1E!=0)goto _TLCF;_T1F= _TAD.f1;if(_T1F!=0)goto _TLD1;
# 558
Cyc_Tc_rule_out_memkind(loc,q,tvs);_T20= te;_T21= _T20->ae;_T23= Cyc_Dict_insert;{
# 560
struct Cyc_Dict_Dict(*_TB4)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Aggrdecl**)=(struct Cyc_Dict_Dict(*)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Aggrdecl**))_T23;_T22= _TB4;}_T24= te;_T25= _T24->ae;_T26= _T25->aggrdecls;_T27= q;{struct Cyc_Absyn_Aggrdecl**_TB4=_cycalloc(sizeof(struct Cyc_Absyn_Aggrdecl*));*_TB4= ad;_T28= (struct Cyc_Absyn_Aggrdecl**)_TB4;}({__typeof__(_T22(_T26,_T27,_T28))_TB4=_T22(_T26,_T27,_T28);_T21->aggrdecls= _TB4;});goto _LL0;_TLD1: _T29= _TAD.f1;{struct Cyc_Absyn_Aggrdecl**_TB4=*_T29;_TB3= _TB4;}_LL8:{struct Cyc_Absyn_Aggrdecl**adp=_TB3;_T2A= adp;_T2B= *_T2A;_T2C= ad;_T2D= loc;_T2E= ctx;_T2F= & _T2E->tc_msg;_T30= (struct _fat_ptr*)_T2F;{
# 625
struct Cyc_Absyn_Aggrdecl*ad2=Cyc_Tcdecl_merge_aggrdecl(_T2B,_T2C,_T2D,_T30);
if(ad2!=0)goto _TLD3;
return;_TLD3:
 Cyc_Tc_rule_out_memkind(loc,q,tvs);_T31= adp;
# 633
*_T31= ad2;}}goto _TLD0;_TLCF: _T32= _TAD.f1;if(_T32!=0)goto _TLD5;_T33= _TAD.f0;{struct Cyc_Absyn_AggrdeclImpl _TB4=*_T33;_TB2= _TB4.exist_vars;_T34= _TAD.f0;_T35= & _T34->qual_bnd;_TB3= (struct Cyc_List_List**)_T35;_TB1= _TB4.fields;_TB0= _TB4.tagged;_TAF= _TB4.effconstr;}{struct Cyc_List_List*exist_vars=_TB2;struct Cyc_List_List**qb=_TB3;struct Cyc_List_List*fs=_TB1;long tagged=_TB0;struct Cyc_List_List*effconstr=_TAF;
# 567
struct Cyc_Absyn_Aggrdecl**adp;adp= _cycalloc(sizeof(struct Cyc_Absyn_Aggrdecl*));_T36= adp;{struct Cyc_Absyn_Aggrdecl*_TB4=_cycalloc(sizeof(struct Cyc_Absyn_Aggrdecl));_T38= ad;_TB4->kind= _T38->kind;_TB4->sc= 3U;_T39= ad;_TB4->name= _T39->name;_TB4->tvs= tvs;_TB4->impl= 0;_T3A= ad;_TB4->attributes= _T3A->attributes;_TB4->expected_mem_kind= 0;_T37= (struct Cyc_Absyn_Aggrdecl*)_TB4;}*_T36= _T37;_T3B= te;_T3C= _T3B->ae;_T3E= Cyc_Dict_insert;{
struct Cyc_Dict_Dict(*_TB4)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Aggrdecl**)=(struct Cyc_Dict_Dict(*)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Aggrdecl**))_T3E;_T3D= _TB4;}_T3F= te;_T40= _T3F->ae;_T41= _T40->aggrdecls;_T42= q;_T43= adp;({__typeof__(_T3D(_T41,_T42,_T43))_TB4=_T3D(_T41,_T42,_T43);_T3C->aggrdecls= _TB4;});
# 573
Cyc_Tcutil_check_unique_tvars(loc,exist_vars);
Cyc_Tcutil_add_tvar_identities(exist_vars);_T44= tagged;
# 577
if(!_T44)goto _TLD7;_T45= ad;_T46= _T45->kind;_T47= (int)_T46;if(_T47!=0)goto _TLD7;{struct Cyc_Warn_String_Warn_Warg_struct _TB4;_TB4.tag= 0;
({__typeof__(_tag_fat("@tagged is allowed only on union declarations",sizeof(char),46U))_TB5=_tag_fat("@tagged is allowed only on union declarations",sizeof(char),46U);_TB4.f1= _TB5;});_T48= _TB4;}{struct Cyc_Warn_String_Warn_Warg_struct _TB4=_T48;void*_TB5[1];_TB5[0]= & _TB4;_T49= loc;_T4A= _tag_fat(_TB5,sizeof(void*),1);Cyc_Warn_err2(_T49,_T4A);}goto _TLD8;_TLD7: _TLD8: _T4C= Cyc_List_map_c;{
struct Cyc_List_List*(*_TB4)(struct _tuple15*(*)(long,struct Cyc_Absyn_Tvar*),long,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _tuple15*(*)(long,struct Cyc_Absyn_Tvar*),long,struct Cyc_List_List*))_T4C;_T4B= _TB4;}_T4D= Cyc_Tcutil_tvar_bool_pair;_T4E= tvs;_T4F= _T4B(_T4D,0,_T4E);_T51= Cyc_List_map_c;{
struct Cyc_List_List*(*_TB4)(struct _tuple15*(*)(long,struct Cyc_Absyn_Tvar*),long,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _tuple15*(*)(long,struct Cyc_Absyn_Tvar*),long,struct Cyc_List_List*))_T51;_T50= _TB4;}_T52= Cyc_Tcutil_tvar_bool_pair;_T53= exist_vars;_T54= _T50(_T52,1,_T53);{
# 579
struct Cyc_List_List*btvs=Cyc_List_append(_T4F,_T54);_T55= ctx;_T56= te;_T57= loc;_T58= ad;_T59= _T58->kind;_T5A= btvs;_T5B= effconstr;_T5C= qb;_T5D= fs;
# 581
Cyc_Tc_tcAggrImpl(_T55,_T56,_T57,_T59,_T5A,_T5B,_T5C,_T5D);
# 583
Cyc_Tc_rule_out_memkind(loc,q,tvs);
# 586
Cyc_Tc_rule_out_memkind(loc,q,exist_vars);_T5E= ad;_T5F= _T5E->kind;_T60= (int)_T5F;
# 589
if(_T60!=1)goto _TLD9;_T61= tagged;if(_T61)goto _TLD9;else{goto _TLDB;}
# 592
_TLDB:{struct Cyc_List_List*f=fs;_TLDF: if(f!=0)goto _TLDD;else{goto _TLDE;}
_TLDD: _T62= Cyc_Flags_tc_aggressive_warn;if(!_T62)goto _TLE0;_T63= f;_T64= _T63->hd;_T65= (struct Cyc_Absyn_Aggrfield*)_T64;_T66= _T65->type;_T67= Cyc_Tcutil_is_bits_only_type(_T66);if(_T67)goto _TLE0;else{goto _TLE2;}_TLE2: _T68= f;_T69= _T68->hd;_T6A= (struct Cyc_Absyn_Aggrfield*)_T69;_T6B= _T6A->requires_clause;if(_T6B!=0)goto _TLE0;{struct Cyc_Warn_String_Warn_Warg_struct _TB4;_TB4.tag= 0;
# 595
({__typeof__(_tag_fat("member ",sizeof(char),8U))_TB5=_tag_fat("member ",sizeof(char),8U);_TB4.f1= _TB5;});_T6C= _TB4;}{struct Cyc_Warn_String_Warn_Warg_struct _TB4=_T6C;{struct Cyc_Warn_String_Warn_Warg_struct _TB5;_TB5.tag= 0;_T6E= f;_T6F= _T6E->hd;_T70= (struct Cyc_Absyn_Aggrfield*)_T6F;_T71= _T70->name;_TB5.f1= *_T71;_T6D= _TB5;}{struct Cyc_Warn_String_Warn_Warg_struct _TB5=_T6D;{struct Cyc_Warn_String_Warn_Warg_struct _TB6;_TB6.tag= 0;({__typeof__(_tag_fat(" of union ",sizeof(char),11U))_TB7=_tag_fat(" of union ",sizeof(char),11U);_TB6.f1= _TB7;});_T72= _TB6;}{struct Cyc_Warn_String_Warn_Warg_struct _TB6=_T72;{struct Cyc_Warn_Qvar_Warn_Warg_struct _TB7;_TB7.tag= 1;_TB7.f1= q;_T73= _TB7;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _TB7=_T73;{struct Cyc_Warn_String_Warn_Warg_struct _TB8;_TB8.tag= 0;({__typeof__(_tag_fat(" has type ",sizeof(char),11U))_TB9=_tag_fat(" has type ",sizeof(char),11U);_TB8.f1= _TB9;});_T74= _TB8;}{struct Cyc_Warn_String_Warn_Warg_struct _TB8=_T74;{struct Cyc_Warn_Typ_Warn_Warg_struct _TB9;_TB9.tag= 2;_T76= f;_T77= _T76->hd;_T78= (struct Cyc_Absyn_Aggrfield*)_T77;_TB9.f1= _T78->type;_T75= _TB9;}{struct Cyc_Warn_Typ_Warn_Warg_struct _TB9=_T75;{struct Cyc_Warn_String_Warn_Warg_struct _TBA;_TBA.tag= 0;
({__typeof__(_tag_fat(" so it can only be written and not read",sizeof(char),40U))_TBB=_tag_fat(" so it can only be written and not read",sizeof(char),40U);_TBA.f1= _TBB;});_T79= _TBA;}{struct Cyc_Warn_String_Warn_Warg_struct _TBA=_T79;void*_TBB[7];_TBB[0]= & _TB4;_TBB[1]= & _TB5;_TBB[2]= & _TB6;_TBB[3]= & _TB7;_TBB[4]= & _TB8;_TBB[5]= & _TB9;_TBB[6]= & _TBA;_T7A= loc;_T7B= _tag_fat(_TBB,sizeof(void*),7);Cyc_Warn_warn2(_T7A,_T7B);}}}}}}}goto _TLE1;_TLE0: _TLE1: _T7C= f;
# 592
f= _T7C->tl;goto _TLDF;_TLDE:;}goto _TLDA;_TLD9: _TLDA: _T7D= adp;
# 597
*_T7D= ad;goto _LL0;}}_TLD5: _T7E= _TAD.f0;{struct Cyc_Absyn_AggrdeclImpl _TB4=*_T7E;_TB2= _TB4.exist_vars;_T7F= _TAD.f0;_T80= & _T7F->qual_bnd;_TB3= (struct Cyc_List_List**)_T80;_TB1= _TB4.fields;_TB0= _TB4.tagged;_TAF= _TB4.effconstr;}_T81= _TAD.f1;{struct Cyc_Absyn_Aggrdecl**_TB4=*_T81;_TAE= _TB4;}{struct Cyc_List_List*exist_vars=_TB2;struct Cyc_List_List**qb=(struct Cyc_List_List**)_TB3;struct Cyc_List_List*fs=_TB1;long tagged=_TB0;struct Cyc_List_List*effconstr=_TAF;struct Cyc_Absyn_Aggrdecl**adp=_TAE;_T82= ad;_T83= _T82->kind;_T84= (int)_T83;_T85= adp;_T86= *_T85;_T87= _T86->kind;_T88= (int)_T87;
# 601
if(_T84==_T88)goto _TLE3;{struct Cyc_Warn_String_Warn_Warg_struct _TB4;_TB4.tag= 0;
({__typeof__(_tag_fat("cannot reuse struct names for unions and vice-versa",sizeof(char),52U))_TB5=_tag_fat("cannot reuse struct names for unions and vice-versa",sizeof(char),52U);_TB4.f1= _TB5;});_T89= _TB4;}{struct Cyc_Warn_String_Warn_Warg_struct _TB4=_T89;void*_TB5[1];_TB5[0]= & _TB4;_T8A= loc;_T8B= _tag_fat(_TB5,sizeof(void*),1);Cyc_Warn_err2(_T8A,_T8B);}goto _TLE4;_TLE3: _TLE4: _T8C= adp;{
# 604
struct Cyc_Absyn_Aggrdecl*ad0=*_T8C;_T8D= adp;{struct Cyc_Absyn_Aggrdecl*_TB4=_cycalloc(sizeof(struct Cyc_Absyn_Aggrdecl));_T8F= ad;
# 606
_TB4->kind= _T8F->kind;_TB4->sc= 3U;_T90= ad;_TB4->name= _T90->name;_TB4->tvs= tvs;_TB4->impl= 0;_T91= ad;_TB4->attributes= _T91->attributes;_TB4->expected_mem_kind= 0;_T8E= (struct Cyc_Absyn_Aggrdecl*)_TB4;}*_T8D= _T8E;
# 611
Cyc_Tcutil_check_unique_tvars(loc,exist_vars);
Cyc_Tcutil_add_tvar_identities(exist_vars);_T92= tagged;
# 614
if(!_T92)goto _TLE5;_T93= ad;_T94= _T93->kind;_T95= (int)_T94;if(_T95!=0)goto _TLE5;{struct Cyc_Warn_String_Warn_Warg_struct _TB4;_TB4.tag= 0;
({__typeof__(_tag_fat("@tagged is allowed only on union declarations",sizeof(char),46U))_TB5=_tag_fat("@tagged is allowed only on union declarations",sizeof(char),46U);_TB4.f1= _TB5;});_T96= _TB4;}{struct Cyc_Warn_String_Warn_Warg_struct _TB4=_T96;void*_TB5[1];_TB5[0]= & _TB4;_T97= loc;_T98= _tag_fat(_TB5,sizeof(void*),1);Cyc_Warn_err2(_T97,_T98);}goto _TLE6;_TLE5: _TLE6: _T9A= Cyc_List_map_c;{
struct Cyc_List_List*(*_TB4)(struct _tuple15*(*)(long,struct Cyc_Absyn_Tvar*),long,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _tuple15*(*)(long,struct Cyc_Absyn_Tvar*),long,struct Cyc_List_List*))_T9A;_T99= _TB4;}_T9B= Cyc_Tcutil_tvar_bool_pair;_T9C= tvs;_T9D= _T99(_T9B,0,_T9C);_T9F= Cyc_List_map_c;{
struct Cyc_List_List*(*_TB4)(struct _tuple15*(*)(long,struct Cyc_Absyn_Tvar*),long,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _tuple15*(*)(long,struct Cyc_Absyn_Tvar*),long,struct Cyc_List_List*))_T9F;_T9E= _TB4;}_TA0= Cyc_Tcutil_tvar_bool_pair;_TA1= exist_vars;_TA2= _T9E(_TA0,1,_TA1);{
# 616
struct Cyc_List_List*btvs=Cyc_List_append(_T9D,_TA2);_TA3= ctx;_TA4= te;_TA5= loc;_TA6= ad;_TA7= _TA6->kind;_TA8= btvs;_TA9= effconstr;_TAA= qb;_TAB= fs;
# 618
Cyc_Tc_tcAggrImpl(_TA3,_TA4,_TA5,_TA7,_TA8,_TA9,_TAA,_TAB);_TAC= adp;
# 620
*_TAC= ad0;_TB3= adp;goto _LL8;}}}_TLD0: _LL0:;}}}}struct _tuple19{struct Cyc_Absyn_Tqual f0;void*f1;};
# 637
static struct Cyc_List_List*Cyc_Tc_tcDatatypeFields(struct Cyc_Tc_TcContext*ctx,struct Cyc_Tcenv_Tenv*te,unsigned loc,struct _fat_ptr obj,long is_extensible,struct _tuple1*name,struct Cyc_List_List*fields,struct Cyc_List_List*tvs,struct Cyc_Absyn_Datatypedecl*tudres){struct Cyc_List_List*_T0;void*_T1;struct Cyc_Absyn_Datatypefield*_T2;struct Cyc_Tc_TcContext*_T3;struct Cyc_Absyn_Datatypefield*_T4;unsigned _T5;struct Cyc_Tcenv_Tenv*_T6;struct Cyc_List_List*_T7;struct Cyc_Absyn_Kind*_T8;struct Cyc_Absyn_Kind*_T9;struct Cyc_List_List*_TA;void*_TB;struct _tuple19*_TC;struct _tuple19 _TD;void*_TE;struct Cyc_List_List*_TF;struct Cyc_List_List*_T10;void*_T11;struct _tuple19*_T12;struct _tuple19 _T13;void*_T14;long _T15;struct Cyc_Warn_String_Warn_Warg_struct _T16;struct Cyc_Warn_Qvar_Warn_Warg_struct _T17;struct Cyc_Absyn_Datatypefield*_T18;struct Cyc_Absyn_Datatypefield*_T19;unsigned _T1A;struct _fat_ptr _T1B;struct Cyc_List_List*_T1C;void*_T1D;struct _tuple19*_T1E;struct Cyc_Absyn_Datatypefield*_T1F;unsigned _T20;struct Cyc_List_List*_T21;void*_T22;struct _tuple19*_T23;struct _tuple19 _T24;struct Cyc_Absyn_Tqual _T25;long _T26;struct Cyc_List_List*_T27;void*_T28;struct _tuple19*_T29;struct _tuple19 _T2A;void*_T2B;struct Cyc_List_List*_T2C;struct Cyc_List_List*_T2D;long _T2E;struct Cyc_List_List*_T2F;long*_T30;struct _tuple1*_T31;struct _tuple1 _T32;struct _fat_ptr*_T33;unsigned _T34;struct Cyc_Tc_TcContext*_T35;struct _fat_ptr*_T36;struct _fat_ptr*_T37;struct Cyc_List_List*_T38;long _T39;struct Cyc_List_List*_T3A;void*_T3B;long(*_T3C)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*);long(*_T3D)(int(*)(void*,void*),struct Cyc_List_List*,void*);int(*_T3E)(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_List_List*_T3F;struct Cyc_Absyn_Datatypefield*_T40;struct _tuple1*_T41;struct _tuple1 _T42;struct _fat_ptr*_T43;long _T44;struct Cyc_Warn_String_Warn_Warg_struct _T45;struct Cyc_Warn_Qvar_Warn_Warg_struct _T46;struct Cyc_Absyn_Datatypefield*_T47;struct Cyc_Warn_String_Warn_Warg_struct _T48;struct Cyc_Warn_String_Warn_Warg_struct _T49;struct Cyc_Absyn_Datatypefield*_T4A;unsigned _T4B;struct _fat_ptr _T4C;struct Cyc_List_List*_T4D;struct _RegionHandle*_T4E;struct Cyc_Absyn_Datatypefield*_T4F;struct _tuple1*_T50;struct _tuple1 _T51;struct Cyc_Absyn_Datatypefield*_T52;enum Cyc_Absyn_Scope _T53;int _T54;struct Cyc_Warn_String_Warn_Warg_struct _T55;struct Cyc_Warn_Qvar_Warn_Warg_struct _T56;struct Cyc_Absyn_Datatypefield*_T57;unsigned _T58;struct _fat_ptr _T59;struct Cyc_Absyn_Datatypefield*_T5A;struct Cyc_List_List*_T5B;{
# 642
struct Cyc_List_List*fs=fields;_TLEA: if(fs!=0)goto _TLE8;else{goto _TLE9;}
_TLE8: _T0= fs;_T1= _T0->hd;{struct Cyc_Absyn_Datatypefield*f=(struct Cyc_Absyn_Datatypefield*)_T1;_T2= f;{
struct Cyc_List_List*typs=_T2->typs;_TLEE: if(typs!=0)goto _TLEC;else{goto _TLED;}
_TLEC: _T3= ctx;_T4= f;_T5= _T4->loc;_T6= te;_T7= tvs;_T8= & Cyc_Kinds_mk;_T9= (struct Cyc_Absyn_Kind*)_T8;_TA= typs;_TB= _TA->hd;_TC= (struct _tuple19*)_TB;_TD= *_TC;_TE= _TD.f1;Cyc_Tctyp_check_type(_T3,_T5,_T6,_T7,_T9,0,0,_TE);_TF= 
# 647
Cyc_Tcenv_curr_aquals_bounds(te);_T10= typs;_T11= _T10->hd;_T12= (struct _tuple19*)_T11;_T13= *_T12;_T14= _T13.f1;_T15= Cyc_Tcutil_is_noalias_pointer_or_aggr(_TF,_T14);if(!_T15)goto _TLEF;{struct Cyc_Warn_String_Warn_Warg_struct _T5C;_T5C.tag= 0;
({__typeof__(_tag_fat("noalias pointers in datatypes are not allowed: ",sizeof(char),48U))_T5D=_tag_fat("noalias pointers in datatypes are not allowed: ",sizeof(char),48U);_T5C.f1= _T5D;});_T16= _T5C;}{struct Cyc_Warn_String_Warn_Warg_struct _T5C=_T16;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T5D;_T5D.tag= 1;_T18= f;
_T5D.f1= _T18->name;_T17= _T5D;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T5D=_T17;void*_T5E[2];_T5E[0]= & _T5C;_T5E[1]= & _T5D;_T19= f;_T1A= _T19->loc;_T1B= _tag_fat(_T5E,sizeof(void*),2);Cyc_Warn_err2(_T1A,_T1B);}}goto _TLF0;_TLEF: _TLF0: _T1C= typs;_T1D= _T1C->hd;_T1E= (struct _tuple19*)_T1D;_T1F= f;_T20= _T1F->loc;_T21= typs;_T22= _T21->hd;_T23= (struct _tuple19*)_T22;_T24= *_T23;_T25= _T24.f0;_T26= _T25.print_const;_T27= typs;_T28= _T27->hd;_T29= (struct _tuple19*)_T28;_T2A= *_T29;_T2B= _T2A.f1;
({__typeof__(
Cyc_Tcutil_extract_const_from_typedef(_T20,_T26,_T2B))_T5C=Cyc_Tcutil_extract_const_from_typedef(_T20,_T26,_T2B);
# 650
(*_T1E).f0.real_const= _T5C;});_T2C= typs;
# 644
typs= _T2C->tl;goto _TLEE;_TLED:;}}_T2D= fs;
# 642
fs= _T2D->tl;goto _TLEA;_TLE9:;}_T2E= is_extensible;
# 655
if(!_T2E)goto _TLF1;{
# 657
long res=1;_T2F= fields;_T30= & res;_T31= name;_T32= *_T31;_T33= _T32.f1;_T34= loc;_T35= 
_check_null(ctx);_T36= & _T35->tc_msg;_T37= (struct _fat_ptr*)_T36;{struct Cyc_List_List*fs=Cyc_Tcdecl_sort_xdatatype_fields(_T2F,_T30,_T33,_T34,_T37);_T39= res;
if(!_T39)goto _TLF3;_T38= fs;goto _TLF4;_TLF3: _T38= 0;_TLF4: return _T38;}}_TLF1: {struct _RegionHandle _T5C=_new_region(0U,"uprev_rgn");struct _RegionHandle*uprev_rgn=& _T5C;_push_region(uprev_rgn);{
# 663
struct Cyc_List_List*prev_fields=0;{
struct Cyc_List_List*fs=fields;_TLF8: if(fs!=0)goto _TLF6;else{goto _TLF7;}
_TLF6: _T3A= fs;_T3B= _T3A->hd;{struct Cyc_Absyn_Datatypefield*f=(struct Cyc_Absyn_Datatypefield*)_T3B;_T3D= Cyc_List_mem;{
long(*_T5D)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*)=(long(*)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*))_T3D;_T3C= _T5D;}_T3E= Cyc_strptrcmp;_T3F= prev_fields;_T40= f;_T41= _T40->name;_T42= *_T41;_T43= _T42.f1;_T44= _T3C(_T3E,_T3F,_T43);if(!_T44)goto _TLF9;{struct Cyc_Warn_String_Warn_Warg_struct _T5D;_T5D.tag= 0;
({__typeof__(_tag_fat("duplicate field ",sizeof(char),17U))_T5E=_tag_fat("duplicate field ",sizeof(char),17U);_T5D.f1= _T5E;});_T45= _T5D;}{struct Cyc_Warn_String_Warn_Warg_struct _T5D=_T45;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T5E;_T5E.tag= 1;_T47= f;_T5E.f1= _T47->name;_T46= _T5E;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T5E=_T46;{struct Cyc_Warn_String_Warn_Warg_struct _T5F;_T5F.tag= 0;({__typeof__(_tag_fat(" in ",sizeof(char),5U))_T60=_tag_fat(" in ",sizeof(char),5U);_T5F.f1= _T60;});_T48= _T5F;}{struct Cyc_Warn_String_Warn_Warg_struct _T5F=_T48;{struct Cyc_Warn_String_Warn_Warg_struct _T60;_T60.tag= 0;_T60.f1= obj;_T49= _T60;}{struct Cyc_Warn_String_Warn_Warg_struct _T60=_T49;void*_T61[4];_T61[0]= & _T5D;_T61[1]= & _T5E;_T61[2]= & _T5F;_T61[3]= & _T60;_T4A= f;_T4B= _T4A->loc;_T4C= _tag_fat(_T61,sizeof(void*),4);Cyc_Warn_err2(_T4B,_T4C);}}}}goto _TLFA;
# 669
_TLF9: _T4E= uprev_rgn;{struct Cyc_List_List*_T5D=_region_malloc(_T4E,0U,sizeof(struct Cyc_List_List));_T4F= f;_T50= _T4F->name;_T51= *_T50;_T5D->hd= _T51.f1;_T5D->tl= prev_fields;_T4D= (struct Cyc_List_List*)_T5D;}prev_fields= _T4D;_TLFA: _T52= f;_T53= _T52->sc;_T54= (int)_T53;
# 671
if(_T54==2)goto _TLFB;{struct Cyc_Warn_String_Warn_Warg_struct _T5D;_T5D.tag= 0;
({__typeof__(_tag_fat("ignoring scope of field ",sizeof(char),25U))_T5E=_tag_fat("ignoring scope of field ",sizeof(char),25U);_T5D.f1= _T5E;});_T55= _T5D;}{struct Cyc_Warn_String_Warn_Warg_struct _T5D=_T55;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T5E;_T5E.tag= 1;_T57= f;_T5E.f1= _T57->name;_T56= _T5E;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T5E=_T56;void*_T5F[2];_T5F[0]= & _T5D;_T5F[1]= & _T5E;_T58= loc;_T59= _tag_fat(_T5F,sizeof(void*),2);Cyc_Warn_warn2(_T58,_T59);}}_T5A= f;
_T5A->sc= 2U;goto _TLFC;_TLFB: _TLFC:;}_T5B= fs;
# 664
fs= _T5B->tl;goto _TLF8;_TLF7:;}{struct Cyc_List_List*_T5D=fields;_npop_handler(0);return _T5D;}}_pop_region();}}struct _tuple20{struct Cyc_Core_Opt*f0;struct Cyc_Absyn_Datatypedecl***f1;};
# 679
void Cyc_Tc_tcDatatypedecl(struct Cyc_Tc_TcContext*ctx,struct Cyc_Tcenv_Tenv*te,unsigned loc,struct Cyc_Absyn_Datatypedecl*tud){struct Cyc_Absyn_Datatypedecl*_T0;struct _fat_ptr _T1;struct Cyc_Absyn_Datatypedecl*_T2;long _T3;struct Cyc_Tc_TcContext*_T4;long _T5;struct Cyc_String_pa_PrintArg_struct _T6;struct Cyc_String_pa_PrintArg_struct _T7;struct _tuple1*_T8;struct _tuple1 _T9;struct _fat_ptr*_TA;struct Cyc___cycFILE*_TB;struct _fat_ptr _TC;struct _fat_ptr _TD;struct Cyc_Absyn_Datatypedecl*_TE;struct _handler_cons*_TF;int _T10;struct _RegionHandle*_T11;struct Cyc_Tcenv_Tenv*_T12;unsigned _T13;struct Cyc_Absyn_Datatypedecl*_T14;struct _tuple1*_T15;struct Cyc_Absyn_Datatypedecl*_T16;long _T17;struct Cyc_Dict_Absent_exn_struct*_T18;void*_T19;struct Cyc_Absyn_Datatypedecl*_T1A;struct Cyc_Absyn_Datatypedecl***_T1B;struct Cyc_Absyn_Datatypedecl**_T1C;struct Cyc_Absyn_Datatypedecl*_T1D;struct Cyc_Absyn_Datatypedecl*_T1E;struct _tuple1*_T1F;struct Cyc_Tcenv_Tenv*_T20;struct Cyc_List_List*_T21;void*_T22;struct Cyc_Dict_Absent_exn_struct*_T23;char*_T24;char*_T25;struct Cyc_Absyn_Datatypedecl***(*_T26)(struct Cyc_Dict_Dict,struct _tuple1*);void**(*_T27)(struct Cyc_Dict_Dict,void*);struct Cyc_Tcenv_Tenv*_T28;struct Cyc_Tcenv_Genv*_T29;struct Cyc_Dict_Dict _T2A;struct _tuple1*_T2B;struct Cyc_Absyn_Datatypedecl***_T2C;struct Cyc_Absyn_Datatypedecl***_T2D;unsigned _T2E;struct Cyc_Absyn_Datatypedecl***_T2F;struct Cyc_Absyn_Datatypedecl***_T30;struct _tuple20 _T31;struct Cyc_Absyn_Datatypedecl*_T32;struct Cyc_Core_Opt*_T33;struct Cyc_Absyn_Datatypedecl***_T34;struct Cyc_Tcenv_Tenv*_T35;struct Cyc_Tcenv_Genv*_T36;struct Cyc_Dict_Dict(*_T37)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Datatypedecl**);struct Cyc_Dict_Dict(*_T38)(struct Cyc_Dict_Dict,void*,void*);struct Cyc_Tcenv_Tenv*_T39;struct Cyc_Tcenv_Genv*_T3A;struct Cyc_Dict_Dict _T3B;struct _tuple1*_T3C;struct Cyc_Absyn_Datatypedecl**_T3D;struct Cyc_Absyn_Datatypedecl***_T3E;struct Cyc_Absyn_Datatypedecl**_T3F;struct Cyc_Absyn_Datatypedecl*_T40;struct Cyc_Absyn_Datatypedecl*_T41;unsigned _T42;struct Cyc_Tc_TcContext*_T43;struct _fat_ptr*_T44;struct _fat_ptr*_T45;struct Cyc_Absyn_Datatypedecl**_T46;struct Cyc_Absyn_Datatypedecl***_T47;struct Cyc_Core_Opt*_T48;struct Cyc_Core_Opt*_T49;void**_T4A;struct Cyc_Absyn_Datatypedecl**_T4B;struct Cyc_Absyn_Datatypedecl*_T4C;struct Cyc_Absyn_Datatypedecl*_T4D;struct Cyc_Absyn_Datatypedecl*_T4E;struct Cyc_Tcenv_Tenv*_T4F;struct Cyc_Tcenv_Genv*_T50;struct Cyc_Dict_Dict(*_T51)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Datatypedecl**);struct Cyc_Dict_Dict(*_T52)(struct Cyc_Dict_Dict,void*,void*);struct Cyc_Tcenv_Tenv*_T53;struct Cyc_Tcenv_Genv*_T54;struct Cyc_Dict_Dict _T55;struct _tuple1*_T56;struct Cyc_Absyn_Datatypedecl**_T57;struct Cyc_List_List**_T58;struct Cyc_Tc_TcContext*_T59;struct Cyc_Tcenv_Tenv*_T5A;unsigned _T5B;struct _fat_ptr _T5C;struct Cyc_Absyn_Datatypedecl*_T5D;long _T5E;struct Cyc_Absyn_Datatypedecl*_T5F;struct _tuple1*_T60;struct Cyc_List_List**_T61;struct Cyc_List_List*_T62;struct Cyc_List_List*_T63;struct Cyc_Absyn_Datatypedecl*_T64;struct Cyc_Absyn_Datatypedecl**_T65;struct Cyc_Core_Opt*_T66;struct Cyc_Core_Opt*_T67;void**_T68;struct Cyc_Absyn_Datatypedecl***_T69;struct Cyc_Absyn_Datatypedecl**_T6A;struct Cyc_Absyn_Datatypedecl*_T6B;long _T6C;struct Cyc_Absyn_Datatypedecl*_T6D;unsigned _T6E;struct Cyc_Absyn_Datatypedecl*_T6F;long _T70;struct Cyc_Absyn_Datatypedecl*_T71;struct Cyc_Absyn_Datatypedecl**_T72;struct Cyc_Absyn_Datatypedecl*_T73;struct Cyc_Absyn_Datatypedecl*_T74;struct Cyc_Absyn_Datatypedecl*_T75;struct Cyc_List_List**_T76;struct Cyc_Tc_TcContext*_T77;struct Cyc_Tcenv_Tenv*_T78;unsigned _T79;struct _fat_ptr _T7A;struct Cyc_Absyn_Datatypedecl*_T7B;long _T7C;struct Cyc_Absyn_Datatypedecl*_T7D;struct _tuple1*_T7E;struct Cyc_List_List**_T7F;struct Cyc_List_List*_T80;struct Cyc_List_List*_T81;struct Cyc_Absyn_Datatypedecl*_T82;struct Cyc_Absyn_Datatypedecl**_T83;_T0= tud;{
struct _tuple1*q=_T0->name;_T2= tud;_T3= _T2->is_extensible;
if(!_T3)goto _TLFD;_T1= _tag_fat("@extensible datatype",sizeof(char),21U);goto _TLFE;_TLFD: _T1= _tag_fat("datatype",sizeof(char),9U);_TLFE: {struct _fat_ptr obj=_T1;_T4= 
_check_null(ctx);_T5= _T4->debug;if(!_T5)goto _TLFF;{struct Cyc_String_pa_PrintArg_struct _T84;_T84.tag= 0;
_T84.f1= obj;_T6= _T84;}{struct Cyc_String_pa_PrintArg_struct _T84=_T6;{struct Cyc_String_pa_PrintArg_struct _T85;_T85.tag= 0;_T8= q;_T9= *_T8;_TA= _T9.f1;_T85.f1= *_TA;_T7= _T85;}{struct Cyc_String_pa_PrintArg_struct _T85=_T7;void*_T86[2];_T86[0]= & _T84;_T86[1]= & _T85;_TB= Cyc_stderr;_TC= _tag_fat("type-checking %sdecl %s\n",sizeof(char),25U);_TD= _tag_fat(_T86,sizeof(void*),2);Cyc_fprintf(_TB,_TC,_TD);}}goto _TL100;_TLFF: _TL100: _TE= tud;{
# 685
struct Cyc_List_List*tvs=_TE->tvs;
# 688
Cyc_Tcutil_check_unique_tvars(loc,tvs);
Cyc_Tcutil_add_tvar_identities(tvs);{
# 694
struct Cyc_Absyn_Datatypedecl***tud_opt;{struct _handler_cons _T84;_TF= & _T84;_push_handler(_TF);{int _T85=0;_T10= setjmp(_T84.handler);if(!_T10)goto _TL101;_T85= 1;goto _TL102;_TL101: _TL102: if(_T85)goto _TL103;else{goto _TL105;}_TL105: _T11= Cyc_Core_heap_region;_T12= te;_T13= loc;_T14= tud;_T15= _T14->name;
# 705
tud_opt= Cyc_Tcenv_lookup_xdatatypedecl(_T11,_T12,_T13,_T15);
if(tud_opt!=0)goto _TL106;_T16= tud;_T17= _T16->is_extensible;if(_T17)goto _TL106;else{goto _TL108;}
_TL108:{struct Cyc_Dict_Absent_exn_struct*_T86=_cycalloc(sizeof(struct Cyc_Dict_Absent_exn_struct));_T86->tag= Cyc_Dict_Absent;_T18= (struct Cyc_Dict_Absent_exn_struct*)_T86;}_T19= (void*)_T18;_rethrow(_T19);goto _TL107;_TL106: _TL107:
 if(tud_opt==0)goto _TL109;_T1A= tud;_T1B= tud_opt;_T1C= *_T1B;_T1D= *_T1C;
_T1A->name= _T1D->name;goto _TL10A;
# 711
_TL109: _T1E= tud;_T1F= _T1E->name;_T20= te;_T21= _T20->ns;({__typeof__(Cyc_Absyn_Abs_n(_T21,0))_T86=Cyc_Absyn_Abs_n(_T21,0);(*_T1F).f0= _T86;});_TL10A: _pop_handler();goto _TL104;_TL103: _T22= Cyc_Core_get_exn_thrown();{void*_T86=(void*)_T22;void*_T87;_T23= (struct Cyc_Dict_Absent_exn_struct*)_T86;_T24= _T23->tag;_T25= Cyc_Dict_Absent;if(_T24!=_T25)goto _TL10B;_T27= Cyc_Dict_lookup_opt;{
# 714
struct Cyc_Absyn_Datatypedecl***(*_T88)(struct Cyc_Dict_Dict,struct _tuple1*)=(struct Cyc_Absyn_Datatypedecl***(*)(struct Cyc_Dict_Dict,struct _tuple1*))_T27;_T26= _T88;}_T28= te;_T29= _T28->ae;_T2A= _T29->datatypedecls;_T2B= q;{struct Cyc_Absyn_Datatypedecl***tdopt=_T26(_T2A,_T2B);_T2D= tdopt;_T2E= (unsigned)_T2D;
if(!_T2E)goto _TL10D;{struct Cyc_Absyn_Datatypedecl***_T88=_cycalloc(sizeof(struct Cyc_Absyn_Datatypedecl**));_T30= tdopt;*_T88= *_T30;_T2F= (struct Cyc_Absyn_Datatypedecl***)_T88;}_T2C= _T2F;goto _TL10E;_TL10D: _T2C= 0;_TL10E: tud_opt= _T2C;goto _LL0;}_TL10B: _T87= _T86;{void*exn=_T87;_rethrow(exn);}_LL0:;}_TL104:;}}{struct _tuple20 _T84;_T32= tud;
# 721
_T84.f0= _T32->fields;_T84.f1= tud_opt;_T31= _T84;}{struct _tuple20 _T84=_T31;struct Cyc_Absyn_Datatypedecl**_T85;void*_T86;_T33= _T84.f0;if(_T33!=0)goto _TL10F;_T34= _T84.f1;if(_T34!=0)goto _TL111;
# 725
Cyc_Tc_rule_out_mem_and_qual(loc,q,tvs);_T35= te;_T36= _T35->ae;_T38= Cyc_Dict_insert;{
struct Cyc_Dict_Dict(*_T87)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Datatypedecl**)=(struct Cyc_Dict_Dict(*)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Datatypedecl**))_T38;_T37= _T87;}_T39= te;_T3A= _T39->ae;_T3B= _T3A->datatypedecls;_T3C= q;{struct Cyc_Absyn_Datatypedecl**_T87=_cycalloc(sizeof(struct Cyc_Absyn_Datatypedecl*));*_T87= tud;_T3D= (struct Cyc_Absyn_Datatypedecl**)_T87;}({__typeof__(_T37(_T3B,_T3C,_T3D))_T87=_T37(_T3B,_T3C,_T3D);_T36->datatypedecls= _T87;});goto _LL5;_TL111: _T3E= _T84.f1;{struct Cyc_Absyn_Datatypedecl**_T87=*_T3E;_T86= _T87;}_LLD:{struct Cyc_Absyn_Datatypedecl**tudp=_T86;_T3F= tudp;_T40= *_T3F;_T41= tud;_T42= loc;_T43= ctx;_T44= & _T43->tc_msg;_T45= (struct _fat_ptr*)_T44;{
# 755
struct Cyc_Absyn_Datatypedecl*tud2=Cyc_Tcdecl_merge_datatypedecl(_T40,_T41,_T42,_T45);
Cyc_Tc_rule_out_mem_and_qual(loc,q,tvs);
if(tud2==0)goto _TL113;_T46= tudp;
*_T46= tud2;goto _TL114;_TL113: _TL114: goto _LL5;}}_TL10F: _T47= _T84.f1;if(_T47!=0)goto _TL115;_T48= _T84.f0;{struct Cyc_Core_Opt _T87=*_T48;_T49= _T84.f0;_T4A= & _T49->v;_T86= (struct Cyc_List_List**)_T4A;}{struct Cyc_List_List**fs=_T86;
# 730
struct Cyc_Absyn_Datatypedecl**tudp;tudp= _cycalloc(sizeof(struct Cyc_Absyn_Datatypedecl*));_T4B= tudp;{struct Cyc_Absyn_Datatypedecl*_T87=_cycalloc(sizeof(struct Cyc_Absyn_Datatypedecl));_T87->sc= 3U;_T4D= tud;_T87->name= _T4D->name;_T87->tvs= tvs;_T87->fields= 0;_T4E= tud;_T87->is_extensible= _T4E->is_extensible;_T4C= (struct Cyc_Absyn_Datatypedecl*)_T87;}*_T4B= _T4C;_T4F= te;_T50= _T4F->ae;_T52= Cyc_Dict_insert;{
struct Cyc_Dict_Dict(*_T87)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Datatypedecl**)=(struct Cyc_Dict_Dict(*)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Datatypedecl**))_T52;_T51= _T87;}_T53= te;_T54= _T53->ae;_T55= _T54->datatypedecls;_T56= q;_T57= tudp;({__typeof__(_T51(_T55,_T56,_T57))_T87=_T51(_T55,_T56,_T57);_T50->datatypedecls= _T87;});_T58= fs;_T59= ctx;_T5A= te;_T5B= loc;_T5C= obj;_T5D= tud;_T5E= _T5D->is_extensible;_T5F= tud;_T60= _T5F->name;_T61= fs;_T62= *_T61;_T63= tvs;_T64= tud;
# 734
({__typeof__(Cyc_Tc_tcDatatypeFields(_T59,_T5A,_T5B,_T5C,_T5E,_T60,_T62,_T63,_T64))_T87=Cyc_Tc_tcDatatypeFields(_T59,_T5A,_T5B,_T5C,_T5E,_T60,_T62,_T63,_T64);*_T58= _T87;});
Cyc_Tc_rule_out_mem_and_qual(loc,q,tvs);_T65= tudp;
*_T65= tud;goto _LL5;}_TL115: _T66= _T84.f0;{struct Cyc_Core_Opt _T87=*_T66;_T67= _T84.f0;_T68= & _T67->v;_T86= (struct Cyc_List_List**)_T68;}_T69= _T84.f1;{struct Cyc_Absyn_Datatypedecl**_T87=*_T69;_T85= _T87;}{struct Cyc_List_List**fs=(struct Cyc_List_List**)_T86;struct Cyc_Absyn_Datatypedecl**tudp=_T85;_T6A= tudp;{
# 739
struct Cyc_Absyn_Datatypedecl*tud0=*_T6A;_T6B= tud;_T6C= _T6B->is_extensible;
# 742
if(_T6C)goto _TL117;else{goto _TL119;}_TL119: _T6D= tud0;_T6E= (unsigned)_T6D;if(!_T6E)goto _TL117;_T6F= tud0;_T70= _T6F->is_extensible;if(!_T70)goto _TL117;_T71= tud;
_T71->is_extensible= 1;goto _TL118;_TL117: _TL118: _T72= tudp;{struct Cyc_Absyn_Datatypedecl*_T87=_cycalloc(sizeof(struct Cyc_Absyn_Datatypedecl));
# 745
_T87->sc= 3U;_T74= tud;_T87->name= _T74->name;_T87->tvs= tvs;_T87->fields= 0;_T75= tud;_T87->is_extensible= _T75->is_extensible;_T73= (struct Cyc_Absyn_Datatypedecl*)_T87;}*_T72= _T73;_T76= fs;_T77= ctx;_T78= te;_T79= loc;_T7A= obj;_T7B= tud;_T7C= _T7B->is_extensible;_T7D= tud;_T7E= _T7D->name;_T7F= fs;_T80= *_T7F;_T81= tvs;_T82= tud;
# 748
({__typeof__(Cyc_Tc_tcDatatypeFields(_T77,_T78,_T79,_T7A,_T7C,_T7E,_T80,_T81,_T82))_T87=Cyc_Tc_tcDatatypeFields(_T77,_T78,_T79,_T7A,_T7C,_T7E,_T80,_T81,_T82);*_T76= _T87;});_T83= tudp;
# 750
*_T83= tud0;_T86= tudp;goto _LLD;}}_LL5:;}}}}}}
# 763
void Cyc_Tc_tcEnumdecl(struct Cyc_Tc_TcContext*ctx,struct Cyc_Tcenv_Tenv*te,unsigned loc,struct Cyc_Absyn_Enumdecl*ed){struct Cyc_Absyn_Enumdecl*_T0;struct Cyc_Tc_TcContext*_T1;long _T2;struct Cyc_String_pa_PrintArg_struct _T3;struct _tuple1*_T4;struct _tuple1 _T5;struct _fat_ptr*_T6;struct Cyc___cycFILE*_T7;struct _fat_ptr _T8;struct _fat_ptr _T9;struct Cyc_Absyn_Enumdecl*_TA;struct Cyc_Core_Opt*_TB;struct Cyc_Absyn_Enumdecl*_TC;struct Cyc_Core_Opt*_TD;void*_TE;struct Cyc_List_List*_TF;void*_T10;long(*_T11)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*);long(*_T12)(int(*)(void*,void*),struct Cyc_List_List*,void*);int(*_T13)(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_List_List*_T14;struct Cyc_Absyn_Enumfield*_T15;struct _tuple1*_T16;struct _tuple1 _T17;struct _fat_ptr*_T18;long _T19;struct Cyc_Warn_String_Warn_Warg_struct _T1A;struct Cyc_Warn_Qvar_Warn_Warg_struct _T1B;struct Cyc_Absyn_Enumfield*_T1C;struct Cyc_Absyn_Enumfield*_T1D;unsigned _T1E;struct _fat_ptr _T1F;struct Cyc_List_List*_T20;struct _RegionHandle*_T21;struct Cyc_Absyn_Enumfield*_T22;struct _tuple1*_T23;struct _tuple1 _T24;struct _tuple17**(*_T25)(struct Cyc_Dict_Dict,struct _tuple1*);void**(*_T26)(struct Cyc_Dict_Dict,void*);struct Cyc_Tcenv_Tenv*_T27;struct Cyc_Tcenv_Genv*_T28;struct Cyc_Dict_Dict _T29;struct Cyc_Absyn_Enumfield*_T2A;struct _tuple1*_T2B;struct _tuple17**_T2C;struct Cyc_Warn_String_Warn_Warg_struct _T2D;struct Cyc_Warn_Qvar_Warn_Warg_struct _T2E;struct Cyc_Absyn_Enumfield*_T2F;struct Cyc_Warn_String_Warn_Warg_struct _T30;struct Cyc_Absyn_Enumfield*_T31;unsigned _T32;struct _fat_ptr _T33;struct Cyc_Absyn_Enumfield*_T34;struct Cyc_Absyn_Exp*_T35;struct Cyc_Absyn_Enumfield*_T36;unsigned _T37;unsigned _T38;struct Cyc_Absyn_Enumfield*_T39;unsigned _T3A;struct Cyc_Absyn_Enumfield*_T3B;struct Cyc_Absyn_Exp*_T3C;long _T3D;struct Cyc_Absyn_Enumfield*_T3E;struct Cyc_Absyn_Exp*_T3F;struct Cyc_Absyn_Exp*_T40;long _T41;struct Cyc_List_List*_T42;struct _handler_cons*_T43;int _T44;struct Cyc_Absyn_Enumdecl**(*_T45)(struct Cyc_Dict_Dict,struct _tuple1*);void*(*_T46)(struct Cyc_Dict_Dict,void*);struct Cyc_Tcenv_Tenv*_T47;struct Cyc_Tcenv_Genv*_T48;struct Cyc_Dict_Dict _T49;struct _tuple1*_T4A;struct Cyc_Absyn_Enumdecl**_T4B;struct Cyc_Absyn_Enumdecl*_T4C;struct Cyc_Absyn_Enumdecl*_T4D;unsigned _T4E;struct Cyc_Tc_TcContext*_T4F;struct _fat_ptr*_T50;struct _fat_ptr*_T51;struct Cyc_Absyn_Enumdecl**_T52;void*_T53;struct Cyc_Dict_Absent_exn_struct*_T54;char*_T55;char*_T56;struct Cyc_Absyn_Enumdecl**_T57;struct Cyc_Tcenv_Tenv*_T58;struct Cyc_Tcenv_Genv*_T59;struct Cyc_Dict_Dict(*_T5A)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Enumdecl**);struct Cyc_Dict_Dict(*_T5B)(struct Cyc_Dict_Dict,void*,void*);struct Cyc_Tcenv_Tenv*_T5C;struct Cyc_Tcenv_Genv*_T5D;struct Cyc_Dict_Dict _T5E;struct _tuple1*_T5F;struct Cyc_Absyn_Enumdecl**_T60;struct Cyc_Absyn_Enumdecl*_T61;struct Cyc_Core_Opt*_T62;struct Cyc_Absyn_Enumdecl*_T63;struct Cyc_Core_Opt*_T64;void*_T65;struct Cyc_List_List*_T66;void*_T67;struct Cyc_Tc_TcContext*_T68;struct Cyc_Tcenv_Tenv*_T69;struct Cyc_Absyn_Enumfield*_T6A;struct Cyc_Absyn_Exp*_T6B;struct Cyc_Absyn_Exp*_T6C;struct Cyc_Absyn_Enumfield*_T6D;struct Cyc_Absyn_Exp*_T6E;struct Cyc_Absyn_Exp*_T6F;long _T70;struct Cyc_Warn_String_Warn_Warg_struct _T71;struct Cyc_Warn_Qvar_Warn_Warg_struct _T72;struct Cyc_Warn_String_Warn_Warg_struct _T73;struct Cyc_Warn_Qvar_Warn_Warg_struct _T74;struct Cyc_Absyn_Enumfield*_T75;struct Cyc_Warn_String_Warn_Warg_struct _T76;unsigned _T77;struct _fat_ptr _T78;struct Cyc_List_List*_T79;_T0= ed;{
struct _tuple1*q=_T0->name;_T1= 
_check_null(ctx);_T2= _T1->debug;if(!_T2)goto _TL11A;{struct Cyc_String_pa_PrintArg_struct _T7A;_T7A.tag= 0;_T4= q;_T5= *_T4;_T6= _T5.f1;
_T7A.f1= *_T6;_T3= _T7A;}{struct Cyc_String_pa_PrintArg_struct _T7A=_T3;void*_T7B[1];_T7B[0]= & _T7A;_T7= Cyc_stderr;_T8= _tag_fat("type-checking enumdecl %s",sizeof(char),26U);_T9= _tag_fat(_T7B,sizeof(void*),1);Cyc_fprintf(_T7,_T8,_T9);}goto _TL11B;_TL11A: _TL11B: _TA= ed;_TB= _TA->fields;
# 769
if(_TB==0)goto _TL11C;{struct _RegionHandle _T7A=_new_region(0U,"uprev_rgn");struct _RegionHandle*uprev_rgn=& _T7A;_push_region(uprev_rgn);{
# 771
struct Cyc_List_List*prev_fields=0;
unsigned tag_count=0U;_TC= ed;_TD= _TC->fields;_TE= _TD->v;{
struct Cyc_List_List*fs=(struct Cyc_List_List*)_TE;_TL121: if(fs!=0)goto _TL11F;else{goto _TL120;}
_TL11F: _TF= fs;_T10= _TF->hd;{struct Cyc_Absyn_Enumfield*f=(struct Cyc_Absyn_Enumfield*)_T10;_T12= Cyc_List_mem;{
# 776
long(*_T7B)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*)=(long(*)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*))_T12;_T11= _T7B;}_T13= Cyc_strptrcmp;_T14= prev_fields;_T15= f;_T16= _T15->name;_T17= *_T16;_T18= _T17.f1;_T19= _T11(_T13,_T14,_T18);if(!_T19)goto _TL122;{struct Cyc_Warn_String_Warn_Warg_struct _T7B;_T7B.tag= 0;
({__typeof__(_tag_fat("duplicate enum constructor ",sizeof(char),28U))_T7C=_tag_fat("duplicate enum constructor ",sizeof(char),28U);_T7B.f1= _T7C;});_T1A= _T7B;}{struct Cyc_Warn_String_Warn_Warg_struct _T7B=_T1A;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T7C;_T7C.tag= 1;_T1C= f;_T7C.f1= _T1C->name;_T1B= _T7C;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T7C=_T1B;void*_T7D[2];_T7D[0]= & _T7B;_T7D[1]= & _T7C;_T1D= f;_T1E= _T1D->loc;_T1F= _tag_fat(_T7D,sizeof(void*),2);Cyc_Warn_err2(_T1E,_T1F);}}goto _TL123;
# 779
_TL122: _T21= uprev_rgn;{struct Cyc_List_List*_T7B=_region_malloc(_T21,0U,sizeof(struct Cyc_List_List));_T22= f;_T23= _T22->name;_T24= *_T23;_T7B->hd= _T24.f1;_T7B->tl= prev_fields;_T20= (struct Cyc_List_List*)_T7B;}prev_fields= _T20;_TL123: _T26= Cyc_Dict_lookup_opt;{
# 781
struct _tuple17**(*_T7B)(struct Cyc_Dict_Dict,struct _tuple1*)=(struct _tuple17**(*)(struct Cyc_Dict_Dict,struct _tuple1*))_T26;_T25= _T7B;}_T27= te;_T28= _T27->ae;_T29= _T28->ordinaries;_T2A= f;_T2B= _T2A->name;_T2C= _T25(_T29,_T2B);if(_T2C==0)goto _TL124;{struct Cyc_Warn_String_Warn_Warg_struct _T7B;_T7B.tag= 0;
({__typeof__(_tag_fat("enum field name ",sizeof(char),17U))_T7C=_tag_fat("enum field name ",sizeof(char),17U);_T7B.f1= _T7C;});_T2D= _T7B;}{struct Cyc_Warn_String_Warn_Warg_struct _T7B=_T2D;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T7C;_T7C.tag= 1;_T2F= f;_T7C.f1= _T2F->name;_T2E= _T7C;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T7C=_T2E;{struct Cyc_Warn_String_Warn_Warg_struct _T7D;_T7D.tag= 0;({__typeof__(_tag_fat(" shadows global name",sizeof(char),21U))_T7E=_tag_fat(" shadows global name",sizeof(char),21U);_T7D.f1= _T7E;});_T30= _T7D;}{struct Cyc_Warn_String_Warn_Warg_struct _T7D=_T30;void*_T7E[3];_T7E[0]= & _T7B;_T7E[1]= & _T7C;_T7E[2]= & _T7D;_T31= f;_T32= _T31->loc;_T33= _tag_fat(_T7E,sizeof(void*),3);Cyc_Warn_err2(_T32,_T33);}}}goto _TL125;_TL124: _TL125: _T34= f;_T35= _T34->tag;
if(_T35!=0)goto _TL126;_T36= f;_T37= tag_count;
tag_count= _T37 + 1;_T38= _T37;_T39= f;_T3A= _T39->loc;({__typeof__(Cyc_Absyn_uint_exp(_T38,_T3A))_T7B=Cyc_Absyn_uint_exp(_T38,_T3A);_T36->tag= _T7B;});goto _TL127;
# 786
_TL126: _T3B= f;_T3C= _T3B->tag;_T3D= Cyc_Tcutil_is_const_exp(_T3C);if(!_T3D)goto _TL128;_T3E= f;_T3F= _T3E->tag;_T40= 
_check_null(_T3F);{struct _tuple14 _T7B=Cyc_Evexp_eval_const_uint_exp(_T40);long _T7C;unsigned _T7D;_T7D= _T7B.f0;_T7C= _T7B.f1;{unsigned t1=_T7D;long known=_T7C;_T41= known;
if(!_T41)goto _TL12A;
tag_count= t1 + 1U;goto _TL12B;_TL12A: _TL12B:;}}goto _TL129;_TL128: _TL129: _TL127:;}_T42= fs;
# 773
fs= _T42->tl;goto _TL121;_TL120:;}}_pop_region();}goto _TL11D;_TL11C: _TL11D:{struct _handler_cons _T7A;_T43= & _T7A;_push_handler(_T43);{int _T7B=0;_T44= setjmp(_T7A.handler);if(!_T44)goto _TL12C;_T7B= 1;goto _TL12D;_TL12C: _TL12D: if(_T7B)goto _TL12E;else{goto _TL130;}_TL130: _T46= Cyc_Dict_lookup;{
# 796
struct Cyc_Absyn_Enumdecl**(*_T7C)(struct Cyc_Dict_Dict,struct _tuple1*)=(struct Cyc_Absyn_Enumdecl**(*)(struct Cyc_Dict_Dict,struct _tuple1*))_T46;_T45= _T7C;}_T47= te;_T48= _T47->ae;_T49= _T48->enumdecls;_T4A= q;{struct Cyc_Absyn_Enumdecl**edp=_T45(_T49,_T4A);_T4B= edp;_T4C= *_T4B;_T4D= ed;_T4E= loc;_T4F= ctx;_T50= & _T4F->tc_msg;_T51= (struct _fat_ptr*)_T50;{
struct Cyc_Absyn_Enumdecl*ed2=Cyc_Tcdecl_merge_enumdecl(_T4C,_T4D,_T4E,_T51);
if(ed2!=0)goto _TL131;_npop_handler(0);return;_TL131: _T52= edp;
# 800
*_T52= ed2;}}_pop_handler();goto _TL12F;_TL12E: _T53= Cyc_Core_get_exn_thrown();{void*_T7C=(void*)_T53;void*_T7D;_T54= (struct Cyc_Dict_Absent_exn_struct*)_T7C;_T55= _T54->tag;_T56= Cyc_Dict_Absent;if(_T55!=_T56)goto _TL133;{
# 803
struct Cyc_Absyn_Enumdecl**edp;edp= _cycalloc(sizeof(struct Cyc_Absyn_Enumdecl*));_T57= edp;*_T57= ed;_T58= te;_T59= _T58->ae;_T5B= Cyc_Dict_insert;{
struct Cyc_Dict_Dict(*_T7E)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Enumdecl**)=(struct Cyc_Dict_Dict(*)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Enumdecl**))_T5B;_T5A= _T7E;}_T5C= te;_T5D= _T5C->ae;_T5E= _T5D->enumdecls;_T5F= q;_T60= edp;({__typeof__(_T5A(_T5E,_T5F,_T60))_T7E=_T5A(_T5E,_T5F,_T60);_T59->enumdecls= _T7E;});goto _LL3;}_TL133: _T7D= _T7C;{void*exn=_T7D;_rethrow(exn);}_LL3:;}_TL12F:;}}_T61= ed;_T62= _T61->fields;
# 809
if(_T62==0)goto _TL135;_T63= ed;_T64= _T63->fields;_T65= _T64->v;{
struct Cyc_List_List*fs=(struct Cyc_List_List*)_T65;_TL13A: if(fs!=0)goto _TL138;else{goto _TL139;}
_TL138: _T66= fs;_T67= _T66->hd;{struct Cyc_Absyn_Enumfield*f=(struct Cyc_Absyn_Enumfield*)_T67;_T68= ctx;_T69= te;_T6A= f;_T6B= _T6A->tag;_T6C= 
_check_null(_T6B);Cyc_Tcexp_tcExp(_T68,_T69,0,_T6C);_T6D= f;_T6E= _T6D->tag;_T6F= 
_check_null(_T6E);_T70= Cyc_Tcutil_is_const_exp(_T6F);if(_T70)goto _TL13B;else{goto _TL13D;}
_TL13D:{struct Cyc_Warn_String_Warn_Warg_struct _T7A;_T7A.tag= 0;({__typeof__(_tag_fat("enum ",sizeof(char),6U))_T7B=_tag_fat("enum ",sizeof(char),6U);_T7A.f1= _T7B;});_T71= _T7A;}{struct Cyc_Warn_String_Warn_Warg_struct _T7A=_T71;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T7B;_T7B.tag= 1;_T7B.f1= q;_T72= _T7B;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T7B=_T72;{struct Cyc_Warn_String_Warn_Warg_struct _T7C;_T7C.tag= 0;({__typeof__(_tag_fat(", field ",sizeof(char),9U))_T7D=_tag_fat(", field ",sizeof(char),9U);_T7C.f1= _T7D;});_T73= _T7C;}{struct Cyc_Warn_String_Warn_Warg_struct _T7C=_T73;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T7D;_T7D.tag= 1;_T75= f;_T7D.f1= _T75->name;_T74= _T7D;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T7D=_T74;{struct Cyc_Warn_String_Warn_Warg_struct _T7E;_T7E.tag= 0;({__typeof__(_tag_fat(": expression is not constant",sizeof(char),29U))_T7F=_tag_fat(": expression is not constant",sizeof(char),29U);_T7E.f1= _T7F;});_T76= _T7E;}{struct Cyc_Warn_String_Warn_Warg_struct _T7E=_T76;void*_T7F[5];_T7F[0]= & _T7A;_T7F[1]= & _T7B;_T7F[2]= & _T7C;_T7F[3]= & _T7D;_T7F[4]= & _T7E;_T77= loc;_T78= _tag_fat(_T7F,sizeof(void*),5);Cyc_Warn_err2(_T77,_T78);}}}}}goto _TL13C;_TL13B: _TL13C:;}_T79= fs;
# 810
fs= _T79->tl;goto _TL13A;_TL139:;}goto _TL136;_TL135: _TL136:;}}
# 818
static long Cyc_Tc_okay_externC(unsigned loc,enum Cyc_Absyn_Scope sc,long in_include,long in_inc_rep){enum Cyc_Absyn_Scope _T0;int _T1;long _T2;struct Cyc_Warn_String_Warn_Warg_struct _T3;unsigned _T4;struct _fat_ptr _T5;struct Cyc_Warn_String_Warn_Warg_struct _T6;unsigned _T7;struct _fat_ptr _T8;long _T9;struct Cyc_Warn_String_Warn_Warg_struct _TA;unsigned _TB;struct _fat_ptr _TC;_T0= sc;_T1= (int)_T0;switch(_T1){case Cyc_Absyn_Static: _T2= in_include;
# 821
if(_T2)goto _TL13F;else{goto _TL141;}
_TL141:{struct Cyc_Warn_String_Warn_Warg_struct _TD;_TD.tag= 0;({__typeof__(_tag_fat("static declaration within extern \"C\"",sizeof(char),37U))_TE=_tag_fat("static declaration within extern \"C\"",sizeof(char),37U);_TD.f1= _TE;});_T3= _TD;}{struct Cyc_Warn_String_Warn_Warg_struct _TD=_T3;void*_TE[1];_TE[0]= & _TD;_T4= loc;_T5= _tag_fat(_TE,sizeof(void*),1);Cyc_Warn_warn2(_T4,_T5);}goto _TL140;_TL13F: _TL140:
 return 0;case Cyc_Absyn_Abstract:{struct Cyc_Warn_String_Warn_Warg_struct _TD;_TD.tag= 0;
# 825
({__typeof__(_tag_fat("abstract declaration within extern \"C\"",sizeof(char),39U))_TE=_tag_fat("abstract declaration within extern \"C\"",sizeof(char),39U);_TD.f1= _TE;});_T6= _TD;}{struct Cyc_Warn_String_Warn_Warg_struct _TD=_T6;void*_TE[1];_TE[0]= & _TD;_T7= loc;_T8= _tag_fat(_TE,sizeof(void*),1);Cyc_Warn_warn2(_T7,_T8);}
return 0;case Cyc_Absyn_Public: goto _LL8;case Cyc_Absyn_Register: _LL8: goto _LLA;case Cyc_Absyn_Extern: _LLA:
# 830
 return 1;case Cyc_Absyn_ExternC: goto _LLE;default: _LLE: _T9= in_inc_rep;
# 833
if(_T9)goto _TL142;else{goto _TL144;}
_TL144:{struct Cyc_Warn_String_Warn_Warg_struct _TD;_TD.tag= 0;({__typeof__(_tag_fat("nested extern \"C\" declaration",sizeof(char),30U))_TE=_tag_fat("nested extern \"C\" declaration",sizeof(char),30U);_TD.f1= _TE;});_TA= _TD;}{struct Cyc_Warn_String_Warn_Warg_struct _TD=_TA;void*_TE[1];_TE[0]= & _TD;_TB= loc;_TC= _tag_fat(_TE,sizeof(void*),1);Cyc_Warn_warn2(_TB,_TC);}goto _TL143;_TL142: _TL143:
 return 1;};}
# 839
static void Cyc_Tc_set_scopes(struct Cyc_List_List*ovrs,enum Cyc_Absyn_Scope sc){struct Cyc_List_List*_T0;void*_T1;struct Cyc_Absyn_Decl*_T2;int*_T3;unsigned _T4;struct Cyc_Absyn_Vardecl*_T5;struct Cyc_Absyn_Fndecl*_T6;struct Cyc_Absyn_Aggrdecl*_T7;struct Cyc_Absyn_Datatypedecl*_T8;struct Cyc_Absyn_Enumdecl*_T9;struct Cyc_List_List*_TA;
_TL148: if(ovrs!=0)goto _TL146;else{goto _TL147;}
_TL146: _T0= ovrs;_T1= _T0->hd;_T2= (struct Cyc_Absyn_Decl*)_T1;{void*_TB=_T2->r;struct Cyc_Absyn_Enumdecl*_TC;struct Cyc_Absyn_Datatypedecl*_TD;struct Cyc_Absyn_Aggrdecl*_TE;struct Cyc_Absyn_Fndecl*_TF;struct Cyc_Absyn_Vardecl*_T10;_T3= (int*)_TB;_T4= *_T3;switch(_T4){case 0:{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T11=(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_TB;_T10= _T11->f1;}{struct Cyc_Absyn_Vardecl*vd=_T10;_T5= vd;
# 843
_T5->sc= sc;goto _LL0;}case 1:{struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*_T11=(struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*)_TB;_TF= _T11->f1;}{struct Cyc_Absyn_Fndecl*fd=_TF;_T6= fd;
# 846
_T6->sc= sc;goto _LL0;}case 5:{struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T11=(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*)_TB;_TE= _T11->f1;}{struct Cyc_Absyn_Aggrdecl*ad=_TE;_T7= ad;
# 849
_T7->sc= sc;goto _LL0;}case 6:{struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct*_T11=(struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct*)_TB;_TD= _T11->f1;}{struct Cyc_Absyn_Datatypedecl*tud=_TD;_T8= tud;
# 852
_T8->sc= sc;goto _LL0;}case 7:{struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*_T11=(struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*)_TB;_TC= _T11->f1;}{struct Cyc_Absyn_Enumdecl*ed=_TC;_T9= ed;
# 855
_T9->sc= sc;goto _LL0;}default: goto _LL0;}_LL0:;}_TA= ovrs;
# 840
ovrs= _TA->tl;goto _TL148;_TL147:;}
# 867
static void Cyc_Tc_tc_decls(struct Cyc_Tc_TcContext*ctx,struct Cyc_Tcenv_Tenv*te,struct Cyc_List_List*ds0,long in_externC,long check_var_init,struct Cyc_List_List**exports){struct Cyc_List_List*_T0;void*_T1;struct Cyc_Absyn_Decl*_T2;struct Cyc_Absyn_Decl*_T3;int*_T4;unsigned _T5;struct Cyc_Warn_String_Warn_Warg_struct _T6;unsigned _T7;struct _fat_ptr _T8;struct Cyc_Warn_String_Warn_Warg_struct _T9;unsigned _TA;struct _fat_ptr _TB;long _TC;struct Cyc_Absyn_Decl*_TD;unsigned _TE;struct Cyc_Absyn_Vardecl*_TF;enum Cyc_Absyn_Scope _T10;struct Cyc_Tcenv_Tenv*_T11;long _T12;struct Cyc_Tcenv_Tenv*_T13;long _T14;long _T15;struct Cyc_Absyn_Vardecl*_T16;struct Cyc_Tc_TcContext*_T17;struct Cyc_Tcenv_Tenv*_T18;unsigned _T19;struct Cyc_Absyn_Vardecl*_T1A;long _T1B;struct Cyc_Tcenv_Tenv*_T1C;long _T1D;struct Cyc_List_List**_T1E;long _T1F;struct Cyc_Absyn_Decl*_T20;unsigned _T21;struct Cyc_Absyn_Fndecl*_T22;enum Cyc_Absyn_Scope _T23;struct Cyc_Tcenv_Tenv*_T24;long _T25;struct Cyc_Tcenv_Tenv*_T26;long _T27;long _T28;struct Cyc_Absyn_Fndecl*_T29;struct Cyc_Tcenv_Tenv*_T2A;long _T2B;struct Cyc_Absyn_Fndecl*_T2C;struct Cyc_Absyn_Typedefdecl*_T2D;struct Cyc_Tcenv_Tenv*_T2E;long _T2F;struct Cyc_Absyn_Decl*_T30;unsigned _T31;struct Cyc_Absyn_Aggrdecl*_T32;enum Cyc_Absyn_Scope _T33;struct Cyc_Tcenv_Tenv*_T34;long _T35;struct Cyc_Tcenv_Tenv*_T36;long _T37;long _T38;struct Cyc_Absyn_Aggrdecl*_T39;long _T3A;struct Cyc_Absyn_Decl*_T3B;unsigned _T3C;struct Cyc_Absyn_Datatypedecl*_T3D;enum Cyc_Absyn_Scope _T3E;struct Cyc_Tcenv_Tenv*_T3F;long _T40;struct Cyc_Tcenv_Tenv*_T41;long _T42;long _T43;struct Cyc_Absyn_Datatypedecl*_T44;long _T45;struct Cyc_Absyn_Decl*_T46;unsigned _T47;struct Cyc_Absyn_Enumdecl*_T48;enum Cyc_Absyn_Scope _T49;struct Cyc_Tcenv_Tenv*_T4A;long _T4B;struct Cyc_Tcenv_Tenv*_T4C;long _T4D;long _T4E;struct Cyc_Absyn_Enumdecl*_T4F;struct Cyc_Warn_String_Warn_Warg_struct _T50;struct Cyc_Absyn_Decl*_T51;unsigned _T52;struct _fat_ptr _T53;struct Cyc_Tcenv_Tenv*_T54;struct Cyc_Tcenv_Tenv*_T55;struct Cyc_List_List*_T56;struct Cyc_List_List*_T57;struct Cyc_Tcenv_Tenv*_T58;struct Cyc_Absyn_ExternCinclude_d_Absyn_Raw_decl_struct*_T59;struct Cyc_List_List**_T5A;struct Cyc_List_List*_T5B;unsigned _T5C;struct Cyc_Tcenv_Tenv*_T5D;struct Cyc_Tc_TcContext*_T5E;struct Cyc_Tcenv_Tenv*_T5F;struct Cyc_List_List**_T60;struct Cyc_List_List*_T61;long _T62;struct Cyc_Tc_TcContext*_T63;struct Cyc_Toc_TocContext*_T64;struct Cyc_Absyn_Decl*_T65;unsigned _T66;struct Cyc_Tcenv_Tenv*_T67;struct Cyc_List_List**_T68;struct Cyc_List_List*_T69;struct Cyc_List_List*_T6A;struct Cyc_List_List*_T6B;struct Cyc_List_List**_T6C;unsigned _T6D;struct Cyc_List_List**_T6E;struct Cyc_Tcenv_Tenv*_T6F;struct Cyc_Tc_TcContext*_T70;struct Cyc_Tcenv_Tenv*_T71;struct Cyc_List_List**_T72;struct Cyc_List_List*_T73;long _T74;struct Cyc_List_List**_T75;struct Cyc_List_List*_T76;void*_T77;struct _tuple16*_T78;struct _tuple16 _T79;long _T7A;struct Cyc_Warn_Qvar_Warn_Warg_struct _T7B;struct _tuple16*_T7C;struct _tuple16 _T7D;struct Cyc_Warn_String_Warn_Warg_struct _T7E;struct _tuple16*_T7F;struct _tuple16 _T80;unsigned _T81;struct _fat_ptr _T82;struct Cyc_List_List*_T83;struct Cyc_List_List*_T84;
# 869
struct Cyc_List_List*ds=ds0;_TL14D: if(ds!=0)goto _TL14B;else{goto _TL14C;}
_TL14B: _T0= ds;_T1= _T0->hd;{struct Cyc_Absyn_Decl*d=(struct Cyc_Absyn_Decl*)_T1;_T2= d;{
unsigned loc=_T2->loc;_T3= d;{
void*_T85=_T3->r;struct _tuple11*_T86;struct Cyc_List_List*_T87;struct Cyc_List_List*_T88;void*_T89;_T4= (int*)_T85;_T5= *_T4;switch(_T5){case 2: goto _LL4;case 3: _LL4:{struct Cyc_Warn_String_Warn_Warg_struct _T8A;_T8A.tag= 0;
# 875
({__typeof__(_tag_fat("top level let-declarations are not implemented",sizeof(char),47U))_T8B=_tag_fat("top level let-declarations are not implemented",sizeof(char),47U);_T8A.f1= _T8B;});_T6= _T8A;}{struct Cyc_Warn_String_Warn_Warg_struct _T8A=_T6;void*_T8B[1];_T8B[0]= & _T8A;_T7= loc;_T8= _tag_fat(_T8B,sizeof(void*),1);Cyc_Warn_err2(_T7,_T8);}goto _LL0;case 4:{struct Cyc_Warn_String_Warn_Warg_struct _T8A;_T8A.tag= 0;
# 878
({__typeof__(_tag_fat("top level region declarations are not implemented",sizeof(char),50U))_T8B=_tag_fat("top level region declarations are not implemented",sizeof(char),50U);_T8A.f1= _T8B;});_T9= _T8A;}{struct Cyc_Warn_String_Warn_Warg_struct _T8A=_T9;void*_T8B[1];_T8B[0]= & _T8A;_TA= loc;_TB= _tag_fat(_T8B,sizeof(void*),1);Cyc_Warn_err2(_TA,_TB);}goto _LL0;case 0:{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T8A=(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T85;_T89= _T8A->f1;}{struct Cyc_Absyn_Vardecl*vd=_T89;_TC= in_externC;
# 881
if(!_TC)goto _TL14F;_TD= d;_TE= _TD->loc;_TF= vd;_T10= _TF->sc;_T11= te;_T12= _T11->in_extern_c_include;_T13= te;_T14= _T13->in_extern_c_inc_repeat;_T15= 
Cyc_Tc_okay_externC(_TE,_T10,_T12,_T14);
# 881
if(!_T15)goto _TL14F;_T16= vd;
# 883
_T16->sc= 4U;goto _TL150;_TL14F: _TL150: _T17= ctx;_T18= te;_T19= loc;_T1A= vd;_T1B= check_var_init;_T1C= te;_T1D= _T1C->in_extern_c_include;_T1E= exports;
Cyc_Tc_tcVardecl(_T17,_T18,_T19,_T1A,_T1B,_T1D,_T1E);goto _LL0;}case 1:{struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*_T8A=(struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*)_T85;_T89= _T8A->f1;}{struct Cyc_Absyn_Fndecl*fd=_T89;_T1F= in_externC;
# 887
if(!_T1F)goto _TL151;_T20= d;_T21= _T20->loc;_T22= fd;_T23= _T22->sc;_T24= te;_T25= _T24->in_extern_c_include;_T26= te;_T27= _T26->in_extern_c_inc_repeat;_T28= 
Cyc_Tc_okay_externC(_T21,_T23,_T25,_T27);
# 887
if(!_T28)goto _TL151;_T29= fd;
# 889
_T29->sc= 4U;goto _TL152;_TL151: _TL152: _T2A= te;_T2B= _T2A->in_extern_c_include;
if(!_T2B)goto _TL153;_T2C= fd;
_T2C->orig_scope= 4U;goto _TL154;_TL153: _TL154:
 Cyc_Tc_tcFndecl(ctx,te,loc,fd,exports);goto _LL0;}case 8:{struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct*_T8A=(struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct*)_T85;_T89= _T8A->f1;}{struct Cyc_Absyn_Typedefdecl*td=_T89;_T2D= td;_T2E= te;
# 895
_T2D->extern_c= _T2E->in_extern_c_include;
# 899
Cyc_Tc_tcTypedefdecl(ctx,te,loc,td);goto _LL0;}case 5:{struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T8A=(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*)_T85;_T89= _T8A->f1;}{struct Cyc_Absyn_Aggrdecl*ad=_T89;_T2F= in_externC;
# 902
if(!_T2F)goto _TL155;_T30= d;_T31= _T30->loc;_T32= ad;_T33= _T32->sc;_T34= te;_T35= _T34->in_extern_c_include;_T36= te;_T37= _T36->in_extern_c_inc_repeat;_T38= 
Cyc_Tc_okay_externC(_T31,_T33,_T35,_T37);
# 902
if(!_T38)goto _TL155;_T39= ad;
# 904
_T39->sc= 4U;goto _TL156;_TL155: _TL156:
 Cyc_Tc_tcAggrdecl(ctx,te,loc,ad);goto _LL0;}case 6:{struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct*_T8A=(struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct*)_T85;_T89= _T8A->f1;}{struct Cyc_Absyn_Datatypedecl*tud=_T89;_T3A= in_externC;
# 908
if(!_T3A)goto _TL157;_T3B= d;_T3C= _T3B->loc;_T3D= tud;_T3E= _T3D->sc;_T3F= te;_T40= _T3F->in_extern_c_include;_T41= te;_T42= _T41->in_extern_c_inc_repeat;_T43= 
Cyc_Tc_okay_externC(_T3C,_T3E,_T40,_T42);
# 908
if(!_T43)goto _TL157;_T44= tud;
# 910
_T44->sc= 4U;goto _TL158;_TL157: _TL158:
 Cyc_Tc_tcDatatypedecl(ctx,te,loc,tud);goto _LL0;}case 7:{struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*_T8A=(struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*)_T85;_T89= _T8A->f1;}{struct Cyc_Absyn_Enumdecl*ed=_T89;_T45= in_externC;
# 914
if(!_T45)goto _TL159;_T46= d;_T47= _T46->loc;_T48= ed;_T49= _T48->sc;_T4A= te;_T4B= _T4A->in_extern_c_include;_T4C= te;_T4D= _T4C->in_extern_c_inc_repeat;_T4E= 
Cyc_Tc_okay_externC(_T47,_T49,_T4B,_T4D);
# 914
if(!_T4E)goto _TL159;_T4F= ed;
# 916
_T4F->sc= 4U;goto _TL15A;_TL159: _TL15A:
 Cyc_Tc_tcEnumdecl(ctx,te,loc,ed);goto _LL0;}case 13:{struct Cyc_Warn_String_Warn_Warg_struct _T8A;_T8A.tag= 0;
# 920
({__typeof__(_tag_fat("spurious __cyclone_port_on__",sizeof(char),29U))_T8B=_tag_fat("spurious __cyclone_port_on__",sizeof(char),29U);_T8A.f1= _T8B;});_T50= _T8A;}{struct Cyc_Warn_String_Warn_Warg_struct _T8A=_T50;void*_T8B[1];_T8B[0]= & _T8A;_T51= d;_T52= _T51->loc;_T53= _tag_fat(_T8B,sizeof(void*),1);Cyc_Warn_warn2(_T52,_T53);}goto _LL0;case 14: goto _LL0;case 15:
# 925
 te= Cyc_Tcenv_enter_tempest(te);goto _LL0;case 16:
# 928
 te= Cyc_Tcenv_clear_tempest(te);goto _LL0;case 9:{struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct*_T8A=(struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct*)_T85;_T89= _T8A->f1;_T88= _T8A->f2;}{struct _fat_ptr*v=_T89;struct Cyc_List_List*ds2=_T88;_T54= te;{
# 932
struct Cyc_List_List*ns=_T54->ns;_T55= te;_T56= ns;{struct Cyc_List_List*_T8A=_cycalloc(sizeof(struct Cyc_List_List));
_T8A->hd= v;_T8A->tl= 0;_T57= (struct Cyc_List_List*)_T8A;}({__typeof__(Cyc_List_append(_T56,_T57))_T8A=Cyc_List_append(_T56,_T57);_T55->ns= _T8A;});
Cyc_Tc_tc_decls(ctx,te,ds2,in_externC,check_var_init,exports);_T58= te;
_T58->ns= ns;goto _LL0;}}case 10:{struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct*_T8A=(struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct*)_T85;_T89= _T8A->f2;}{struct Cyc_List_List*ds2=_T89;
# 939
Cyc_Tc_tc_decls(ctx,te,ds2,in_externC,check_var_init,exports);goto _LL0;}case 11:{struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct*_T8A=(struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct*)_T85;_T89= _T8A->f1;}{struct Cyc_List_List*ds2=_T89;
# 943
Cyc_Tc_tc_decls(ctx,te,ds2,1,check_var_init,exports);goto _LL0;}default:{struct Cyc_Absyn_ExternCinclude_d_Absyn_Raw_decl_struct*_T8A=(struct Cyc_Absyn_ExternCinclude_d_Absyn_Raw_decl_struct*)_T85;_T59= (struct Cyc_Absyn_ExternCinclude_d_Absyn_Raw_decl_struct*)_T85;_T5A= & _T59->f1;_T89= (struct Cyc_List_List**)_T5A;_T88= _T8A->f2;_T87= _T8A->f3;_T86= _T8A->f4;}{struct Cyc_List_List**ds2=(struct Cyc_List_List**)_T89;struct Cyc_List_List*ovrs=_T88;struct Cyc_List_List*exports2=_T87;struct _tuple11*wc=_T86;_T5B= ovrs;_T5C= (unsigned)_T5B;
# 949
if(!_T5C)goto _TL15B;{
struct Cyc_Tcenv_Tenv*tecpy=Cyc_Tcenv_copy_tenv_dicts(te);_T5D= tecpy;
_T5D->in_extern_c_include= 1;_T5E= ctx;_T5F= tecpy;_T60= ds2;_T61= *_T60;_T62= check_var_init;
Cyc_Tc_tc_decls(_T5E,_T5F,_T61,1,_T62,0);{
struct Cyc_Toc_TocContext*toc_ctxt=Cyc_Toc_Toc_Ctx_create();
Cyc_Tc_set_scopes(ovrs,4U);_T63= ctx;_T64= toc_ctxt;_T65= d;_T66= _T65->loc;_T67= tecpy;_T68= ds2;_T69= ovrs;
# 956
Cyc_Cifc_user_overrides(_T63,_T64,_T66,_T67,_T68,_T69);
Cyc_Toc_Toc_Ctx_destroy(toc_ctxt);}}goto _TL15C;_TL15B: _TL15C: _T6A= exports2;_T6C= exports;_T6D= (unsigned)_T6C;
# 959
if(!_T6D)goto _TL15D;_T6E= exports;_T6B= *_T6E;goto _TL15E;_TL15D: _T6B= 0;_TL15E: {struct Cyc_List_List*newexs=Cyc_List_append(_T6A,_T6B);struct Cyc_Tcenv_Tenv*te2=Cyc_Tcenv_enter_extern_c_include(te);_T6F= te2;
_T6F->in_extern_c_inc_repeat= ovrs!=0;_T70= ctx;_T71= te2;_T72= ds2;_T73= *_T72;_T74= check_var_init;_T75= & newexs;
Cyc_Tc_tc_decls(_T70,_T71,_T73,1,_T74,_T75);
# 964
_TL162: if(exports2!=0)goto _TL160;else{goto _TL161;}
_TL160: _T76= exports2;_T77= _T76->hd;{struct _tuple16*exp=(struct _tuple16*)_T77;_T78= exp;_T79= *_T78;_T7A= _T79.f2;
if(_T7A)goto _TL163;else{goto _TL165;}
_TL165:{struct Cyc_Warn_Qvar_Warn_Warg_struct _T8A;_T8A.tag= 1;_T7C= exp;_T7D= *_T7C;_T8A.f1= _T7D.f1;_T7B= _T8A;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T8A=_T7B;{struct Cyc_Warn_String_Warn_Warg_struct _T8B;_T8B.tag= 0;({__typeof__(_tag_fat(" is exported but not defined",sizeof(char),29U))_T8C=_tag_fat(" is exported but not defined",sizeof(char),29U);_T8B.f1= _T8C;});_T7E= _T8B;}{struct Cyc_Warn_String_Warn_Warg_struct _T8B=_T7E;void*_T8C[2];_T8C[0]= & _T8A;_T8C[1]= & _T8B;_T7F= exp;_T80= *_T7F;_T81= _T80.f0;_T82= _tag_fat(_T8C,sizeof(void*),2);Cyc_Warn_warn2(_T81,_T82);}}goto _TL164;_TL163: _TL164:;}_T83= exports2;
# 964
exports2= _T83->tl;goto _TL162;_TL161: goto _LL0;}}}_LL0:;}}}_T84= ds;
# 869
ds= _T84->tl;goto _TL14D;_TL14C:;}
# 974
void Cyc_Tc_tc(struct Cyc_Tc_TcContext*ctx,struct Cyc_Tcenv_Tenv*te,long check_var_init,struct Cyc_List_List*ds){struct Cyc_Absynpp_Params*_T0;struct Cyc_Absynpp_Params*_T1;_T0= & Cyc_Absynpp_tc_params_r;_T1= (struct Cyc_Absynpp_Params*)_T0;
Cyc_Absynpp_set_params(_T1);
Cyc_Tc_tc_decls(ctx,te,ds,0,check_var_init,0);}struct Cyc_Tc_TreeshakeEnv{long in_cinclude;struct Cyc_Dict_Dict ordinaries;};
# 997
static long Cyc_Tc_vardecl_needed(struct Cyc_Tc_TreeshakeEnv*,struct Cyc_Absyn_Decl*);
# 999
static struct Cyc_List_List*Cyc_Tc_treeshake_f(struct Cyc_Tc_TreeshakeEnv*env,struct Cyc_List_List*ds){struct Cyc_List_List*(*_T0)(long(*)(struct Cyc_Tc_TreeshakeEnv*,struct Cyc_Absyn_Decl*),struct Cyc_Tc_TreeshakeEnv*,struct Cyc_List_List*);struct Cyc_List_List*(*_T1)(long(*)(void*,void*),void*,struct Cyc_List_List*);long(*_T2)(struct Cyc_Tc_TreeshakeEnv*,struct Cyc_Absyn_Decl*);struct Cyc_Tc_TreeshakeEnv*_T3;struct Cyc_List_List*_T4;struct Cyc_List_List*_T5;_T1= Cyc_List_filter_c;{
struct Cyc_List_List*(*_T6)(long(*)(struct Cyc_Tc_TreeshakeEnv*,struct Cyc_Absyn_Decl*),struct Cyc_Tc_TreeshakeEnv*,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(long(*)(struct Cyc_Tc_TreeshakeEnv*,struct Cyc_Absyn_Decl*),struct Cyc_Tc_TreeshakeEnv*,struct Cyc_List_List*))_T1;_T0= _T6;}_T2= Cyc_Tc_vardecl_needed;_T3= env;_T4= ds;_T5= _T0(_T2,_T3,_T4);return _T5;}
# 1003
static long Cyc_Tc_is_extern(struct Cyc_Absyn_Vardecl*vd){struct Cyc_Absyn_Vardecl*_T0;enum Cyc_Absyn_Scope _T1;int _T2;struct Cyc_Absyn_Vardecl*_T3;enum Cyc_Absyn_Scope _T4;int _T5;struct Cyc_Absyn_Vardecl*_T6;void*_T7;int*_T8;int _T9;_T0= vd;_T1= _T0->sc;_T2= (int)_T1;
if(_T2==3)goto _TL168;else{goto _TL169;}_TL169: _T3= vd;_T4= _T3->sc;_T5= (int)_T4;if(_T5==4)goto _TL168;else{goto _TL166;}
_TL168: return 1;_TL166: _T6= vd;_T7= _T6->type;{
void*_TA=Cyc_Absyn_compress(_T7);_T8= (int*)_TA;_T9= *_T8;if(_T9!=6)goto _TL16A;
# 1008
return 1;_TL16A:
# 1010
 return 0;;}}
# 1014
static long Cyc_Tc_vardecl_needed(struct Cyc_Tc_TreeshakeEnv*env,struct Cyc_Absyn_Decl*d){struct Cyc_Absyn_Decl*_T0;int*_T1;unsigned _T2;struct Cyc_Tc_TreeshakeEnv*_T3;long _T4;long _T5;struct Cyc_Absyn_Vardecl*_T6;struct _tuple1*_T7;struct _tuple1*_T8;int _T9;struct _tuple17*(*_TA)(struct Cyc_Dict_Dict,struct _tuple1*);void*(*_TB)(struct Cyc_Dict_Dict,void*);struct Cyc_Tc_TreeshakeEnv*_TC;struct Cyc_Dict_Dict _TD;struct Cyc_Absyn_Vardecl*_TE;struct _tuple1*_TF;struct _tuple17*_T10;struct _tuple17 _T11;long _T12;struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct*_T13;struct Cyc_List_List**_T14;struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct*_T15;struct Cyc_List_List**_T16;struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct*_T17;struct Cyc_List_List**_T18;struct Cyc_List_List**_T19;struct Cyc_Tc_TreeshakeEnv*_T1A;struct Cyc_List_List**_T1B;struct Cyc_List_List*_T1C;struct Cyc_Absyn_ExternCinclude_d_Absyn_Raw_decl_struct*_T1D;struct Cyc_List_List**_T1E;struct Cyc_Tc_TreeshakeEnv*_T1F;struct Cyc_Tc_TreeshakeEnv*_T20;struct Cyc_List_List**_T21;struct Cyc_Tc_TreeshakeEnv*_T22;struct Cyc_List_List**_T23;struct Cyc_List_List*_T24;struct Cyc_Tc_TreeshakeEnv*_T25;_T0= d;{
void*_T26=_T0->r;void*_T27;_T1= (int*)_T26;_T2= *_T1;switch(_T2){case 0:{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T28=(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T26;_T27= _T28->f1;}{struct Cyc_Absyn_Vardecl*vd=_T27;_T3= env;_T4= _T3->in_cinclude;
# 1018
if(_T4)goto _TL16F;else{goto _TL171;}_TL171: _T5= Cyc_Tc_is_extern(vd);if(_T5)goto _TL170;else{goto _TL16F;}_TL170: _T6= vd;_T7= _T6->name;_T8= Cyc_Absyn_uniqueaqual_qvar();_T9= Cyc_Absyn_qvar_cmp(_T7,_T8);if(_T9)goto _TL16D;else{goto _TL16F;}
_TL16F: return 1;_TL16D: _TB= Cyc_Dict_lookup;{
struct _tuple17*(*_T28)(struct Cyc_Dict_Dict,struct _tuple1*)=(struct _tuple17*(*)(struct Cyc_Dict_Dict,struct _tuple1*))_TB;_TA= _T28;}_TC= env;_TD= _TC->ordinaries;_TE= vd;_TF= _TE->name;_T10= _TA(_TD,_TF);_T11= *_T10;_T12= _T11.f1;return _T12;}case 11:{struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct*_T28=(struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct*)_T26;_T13= (struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct*)_T26;_T14= & _T13->f1;_T27= (struct Cyc_List_List**)_T14;}{struct Cyc_List_List**ds2p=_T27;_T27= ds2p;goto _LL6;}case 10:{struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct*_T28=(struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct*)_T26;_T15= (struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct*)_T26;_T16= & _T15->f2;_T27= (struct Cyc_List_List**)_T16;}_LL6: {struct Cyc_List_List**ds2p=_T27;_T27= ds2p;goto _LL8;}case 9:{struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct*_T28=(struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct*)_T26;_T17= (struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct*)_T26;_T18= & _T17->f2;_T27= (struct Cyc_List_List**)_T18;}_LL8: {struct Cyc_List_List**ds2p=_T27;_T19= ds2p;_T1A= env;_T1B= ds2p;_T1C= *_T1B;
# 1026
({__typeof__(Cyc_Tc_treeshake_f(_T1A,_T1C))_T28=Cyc_Tc_treeshake_f(_T1A,_T1C);*_T19= _T28;});
return 1;}case 12:{struct Cyc_Absyn_ExternCinclude_d_Absyn_Raw_decl_struct*_T28=(struct Cyc_Absyn_ExternCinclude_d_Absyn_Raw_decl_struct*)_T26;_T1D= (struct Cyc_Absyn_ExternCinclude_d_Absyn_Raw_decl_struct*)_T26;_T1E= & _T1D->f1;_T27= (struct Cyc_List_List**)_T1E;}{struct Cyc_List_List**ds2p=(struct Cyc_List_List**)_T27;_T1F= env;{
# 1029
long in_cinclude=_T1F->in_cinclude;_T20= env;
_T20->in_cinclude= 1;_T21= ds2p;_T22= env;_T23= ds2p;_T24= *_T23;
({__typeof__(Cyc_Tc_treeshake_f(_T22,_T24))_T28=Cyc_Tc_treeshake_f(_T22,_T24);*_T21= _T28;});_T25= env;
_T25->in_cinclude= in_cinclude;
return 1;}}default:
# 1035
 return 1;};}}
# 1039
struct Cyc_List_List*Cyc_Tc_treeshake(struct Cyc_Tcenv_Tenv*te,struct Cyc_List_List*ds){struct Cyc_Tc_TreeshakeEnv _T0;struct Cyc_Tcenv_Tenv*_T1;struct Cyc_Tcenv_Genv*_T2;struct Cyc_Tc_TreeshakeEnv*_T3;struct Cyc_Tc_TreeshakeEnv*_T4;struct Cyc_List_List*_T5;struct Cyc_List_List*_T6;{struct Cyc_Tc_TreeshakeEnv _T7;
_T7.in_cinclude= 0;_T1= te;_T2= _T1->ae;_T7.ordinaries= _T2->ordinaries;_T0= _T7;}{struct Cyc_Tc_TreeshakeEnv env=_T0;_T3= & env;_T4= (struct Cyc_Tc_TreeshakeEnv*)_T3;_T5= ds;_T6= 
Cyc_Tc_treeshake_f(_T4,_T5);return _T6;}}
