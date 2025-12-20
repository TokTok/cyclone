#include <cyc_include.h>
 struct Cyc_Core_Opt{void*v;};struct _tuple0{void*f0;void*f1;};
# 106 "./cyclone/library/std/core.h"
void*Cyc_Core_fst(struct _tuple0*);
# 166
extern struct _RegionHandle*Cyc_Core_heap_region;struct Cyc___cycFILE;
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
# 1045
int Cyc_Absyn_qvar_cmp(struct _tuple1*,struct _tuple1*);
# 1056
union Cyc_Absyn_Nmspace Cyc_Absyn_Abs_n(struct Cyc_List_List*,long);
# 1059
struct Cyc_Absyn_Tqual Cyc_Absyn_const_tqual(unsigned);
struct Cyc_Absyn_Tqual Cyc_Absyn_empty_tqual(unsigned);
# 1066
void*Cyc_Absyn_compress(void*);
# 1079
void*Cyc_Absyn_new_evar(struct Cyc_Core_Opt*,struct Cyc_Core_Opt*);
# 1095
extern void*Cyc_Absyn_al_qual_type;
# 1099
extern void*Cyc_Absyn_false_type;
# 1122
void*Cyc_Absyn_string_type(void*,void*);
void*Cyc_Absyn_const_string_type(void*,void*);
# 1149
void*Cyc_Absyn_fatptr_type(void*,void*,void*,struct Cyc_Absyn_Tqual,void*,void*);
# 1157
void*Cyc_Absyn_array_type(void*,struct Cyc_Absyn_Tqual,struct Cyc_Absyn_Exp*,void*,unsigned);
# 1188
struct Cyc_Absyn_Exp*Cyc_Absyn_uint_exp(unsigned,unsigned);
# 1251
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
extern struct Cyc_Dict_Dict Cyc_Dict_delete(struct Cyc_Dict_Dict,void*);struct Cyc_Set_Set;struct Cyc_AssnDef_False_AssnDef_Assn_struct{int tag;};
# 242 "cyclone/library/compiler/assndef.h"
extern struct _fat_ptr Cyc_AssnDef_assn2string(void*);
# 244
extern struct Cyc_AssnDef_False_AssnDef_Assn_struct Cyc_AssnDef_false_assn;
# 248
extern void*Cyc_AssnDef_not(void*);struct Cyc_AssnDef_AssnFn{struct Cyc_List_List*actuals;void*assn;};struct Cyc_AssnDef_ExistAssnFn{struct Cyc_AssnDef_AssnFn*af;struct Cyc_Set_Set*existvars;};struct Cyc_AssnDef_AssnMap{void*assn;struct Cyc_Dict_Dict map;};
# 46 "cyclone/library/compiler/attributes.h"
extern struct Cyc_Absyn_No_throw_att_Absyn_Attribute_struct Cyc_Atts_No_throw_att_val;
# 72
struct Cyc_List_List*Cyc_Atts_transfer_fn_type_atts(void*,struct Cyc_List_List*);
# 80
void Cyc_Atts_check_fndecl_atts(unsigned,struct Cyc_List_List*,long);
void Cyc_Atts_check_variable_atts(unsigned,struct Cyc_Absyn_Vardecl*,struct Cyc_List_List*);
void Cyc_Atts_check_field_atts(unsigned,struct _fat_ptr*,struct Cyc_List_List*);
# 84
void Cyc_Atts_fnTypeAttsOK(unsigned,void*);
# 89
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
struct Cyc_Tcenv_Tenv*Cyc_Tcenv_copy_tenv_dicts(struct Cyc_Tcenv_Tenv*);
# 34 "cyclone/library/compiler/cifc.h"
void Cyc_Cifc_user_overrides(unsigned,struct Cyc_Tcenv_Tenv*,struct Cyc_List_List**,struct Cyc_List_List*);struct _tuple14{unsigned f0;long f1;};
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
# 29 "cyclone/library/compiler/tc.h"
extern long Cyc_Tc_debug;
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
# 26 "cyclone/library/compiler/tcexp.h"
void*Cyc_Tcexp_tcExp(struct Cyc_Tcenv_Tenv*,void**,struct Cyc_Absyn_Exp*);
void*Cyc_Tcexp_tcExpInitializer(struct Cyc_Tcenv_Tenv*,void**,struct Cyc_Absyn_Exp*);
# 26 "cyclone/library/compiler/tcstmt.h"
void Cyc_Tcstmt_tcStmt(struct Cyc_Tcenv_Tenv*,struct Cyc_Absyn_Stmt*,long);
long Cyc_Tcstmt_ensure_no_throw_stmt(struct Cyc_Absyn_Stmt*);
# 34 "cyclone/library/compiler/tctyp.h"
void Cyc_Tctyp_check_valid_toplevel_type(unsigned,struct Cyc_Tcenv_Tenv*,void*);
void Cyc_Tctyp_check_fndecl_valid_type(unsigned,struct Cyc_Tcenv_Tenv*,struct Cyc_Absyn_Fndecl*);
# 47
void Cyc_Tctyp_check_type(unsigned,struct Cyc_Tcenv_Tenv*,struct Cyc_List_List*,struct Cyc_Absyn_Kind*,long,long,void*);
# 50
void Cyc_Tctyp_check_type_with_bounds(unsigned,struct Cyc_Tcenv_Tenv*,struct Cyc_List_List*,struct Cyc_List_List**,struct Cyc_Absyn_Kind*,long,long,void*);
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
# 44 "cyclone/library/compiler/toc.h"
void Cyc_Toc_init (void);
void Cyc_Toc_finish (void);
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
long Cyc_Tc_debug=0;static char _TmpG0[1U]="";
# 51
static struct _fat_ptr Cyc_Tc_tc_msg_c={(unsigned char*)_TmpG0,(unsigned char*)_TmpG0,(unsigned char*)_TmpG0 + 1U};
static struct _fat_ptr*Cyc_Tc_tc_msg=(struct _fat_ptr*)& Cyc_Tc_tc_msg_c;struct _tuple16{unsigned f0;struct _tuple1*f1;long f2;};
# 54
static long Cyc_Tc_export_member(struct _tuple1*x,struct Cyc_List_List*exports){struct Cyc_List_List*_T0;void*_T1;struct _tuple1*_T2;struct _tuple16*_T3;struct _tuple16 _T4;struct _tuple1*_T5;int _T6;struct _tuple16*_T7;struct Cyc_List_List*_T8;
_TL3: if(exports!=0)goto _TL1;else{goto _TL2;}
_TL1: _T0= exports;_T1= _T0->hd;{struct _tuple16*p=(struct _tuple16*)_T1;_T2= x;_T3= p;_T4= *_T3;_T5= _T4.f1;_T6= 
Cyc_Absyn_qvar_cmp(_T2,_T5);if(_T6==0)goto _TL4;goto _TL0;_TL4: _T7= p;
# 61
(*_T7).f2= 1;
return 1;}_TL0: _T8= exports;
# 55
exports= _T8->tl;goto _TL3;_TL2:
# 64
 return 0;}struct _tuple17{void*f0;long f1;};
# 67
static void Cyc_Tc_tcVardecl(struct Cyc_Tcenv_Tenv*te,unsigned loc,struct Cyc_Absyn_Vardecl*vd,long check_var_init,long in_cinclude,struct Cyc_List_List**exports){struct Cyc_Absyn_Vardecl*_T0;struct Cyc_Absyn_Vardecl*_T1;long*_T2;long _T3;struct Cyc_String_pa_PrintArg_struct _T4;struct _tuple1*_T5;struct _tuple1 _T6;struct _fat_ptr*_T7;struct Cyc_String_pa_PrintArg_struct _T8;struct Cyc_Absyn_Vardecl*_T9;void*_TA;struct Cyc___cycFILE*_TB;struct _fat_ptr _TC;struct _fat_ptr _TD;int*_TE;int _TF;struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T10;struct Cyc_Absyn_ArrayInfo _T11;struct Cyc_Absyn_Exp*_T12;struct Cyc_Absyn_ArrayInfo _T13;struct Cyc_Absyn_ArrayInfo _T14;struct Cyc_Absyn_ArrayInfo _T15;struct Cyc_Absyn_ArrayInfo _T16;struct Cyc_Absyn_Exp*_T17;int*_T18;unsigned _T19;struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T1A;union Cyc_Absyn_Cnst _T1B;struct _union_Cnst_Wstring_c _T1C;unsigned _T1D;union Cyc_Absyn_Cnst _T1E;struct _union_Cnst_String_c _T1F;struct Cyc_Absyn_Vardecl*_T20;void*_T21;struct Cyc_Absyn_Tqual _T22;struct _fat_ptr _T23;unsigned _T24;struct Cyc_Absyn_Exp*_T25;void*_T26;unsigned _T27;union Cyc_Absyn_Cnst _T28;struct _union_Cnst_Wstring_c _T29;struct Cyc_Absyn_Vardecl*_T2A;void*_T2B;struct Cyc_Absyn_Tqual _T2C;struct Cyc_Absyn_Exp*_T2D;void*_T2E;unsigned _T2F;struct Cyc_Absyn_Vardecl*_T30;struct Cyc_Absyn_Vardecl*_T31;void*_T32;struct Cyc_Absyn_Tqual _T33;int _T34;unsigned _T35;struct Cyc_Absyn_Exp*_T36;void*_T37;unsigned _T38;struct Cyc_Absyn_Vardecl*_T39;unsigned _T3A;struct Cyc_Absyn_Vardecl*_T3B;struct Cyc_Absyn_Tqual _T3C;long _T3D;void*_T3E;struct Cyc_Absyn_Vardecl*_T3F;long _T40;long _T41;long*_T42;enum Cyc_Absyn_Scope _T43;int _T44;enum Cyc_Absyn_Scope _T45;int _T46;long _T47;struct Cyc_Warn_String_Warn_Warg_struct _T48;unsigned _T49;struct _fat_ptr _T4A;long _T4B;long _T4C;long _T4D;long _T4E;long _T4F;struct Cyc_Warn_String_Warn_Warg_struct _T50;struct Cyc_Warn_Vardecl_Warn_Warg_struct _T51;struct Cyc_Warn_String_Warn_Warg_struct _T52;struct Cyc_Warn_Typ_Warn_Warg_struct _T53;unsigned _T54;struct _fat_ptr _T55;struct _handler_cons*_T56;int _T57;struct Cyc_Tcenv_Tenv*_T58;void**_T59;struct Cyc_Absyn_Exp*_T5A;struct Cyc_List_List*_T5B;struct Cyc_Absyn_Exp*_T5C;void*_T5D;long _T5E;struct Cyc_Absyn_Vardecl*_T5F;struct _tuple1*_T60;unsigned long _T61;const char*_T62;struct _fat_ptr _T63;unsigned long _T64;unsigned long _T65;unsigned long _T66;unsigned long _T67;const char*_T68;struct _fat_ptr _T69;unsigned long _T6A;unsigned long _T6B;unsigned long _T6C;unsigned long _T6D;struct Cyc_String_pa_PrintArg_struct _T6E;struct Cyc_String_pa_PrintArg_struct _T6F;const char*_T70;struct Cyc_String_pa_PrintArg_struct _T71;struct Cyc_String_pa_PrintArg_struct _T72;const char*_T73;struct Cyc_String_pa_PrintArg_struct _T74;unsigned _T75;struct _fat_ptr _T76;struct _fat_ptr _T77;struct Cyc_String_pa_PrintArg_struct _T78;struct Cyc_String_pa_PrintArg_struct _T79;const char*_T7A;struct Cyc_String_pa_PrintArg_struct _T7B;struct Cyc_String_pa_PrintArg_struct _T7C;const char*_T7D;struct Cyc_String_pa_PrintArg_struct _T7E;unsigned _T7F;struct _fat_ptr _T80;struct _fat_ptr _T81;long _T82;struct Cyc_Warn_String_Warn_Warg_struct _T83;unsigned _T84;struct _fat_ptr _T85;void*_T86;struct Cyc_Tcenv_Env_error_exn_struct*_T87;char*_T88;char*_T89;struct Cyc_Warn_String_Warn_Warg_struct _T8A;unsigned _T8B;struct _fat_ptr _T8C;struct _handler_cons*_T8D;int _T8E;struct _tuple17*(*_T8F)(struct Cyc_Dict_Dict,struct _tuple1*);void*(*_T90)(struct Cyc_Dict_Dict,void*);struct Cyc_Tcenv_Tenv*_T91;struct Cyc_Tcenv_Genv*_T92;struct Cyc_Dict_Dict _T93;struct _tuple1*_T94;struct _tuple17*_T95;struct _tuple17 _T96;struct Cyc_Absyn_Global_b_Absyn_Binding_struct*_T97;struct Cyc_Absyn_Global_b_Absyn_Binding_struct*_T98;void*_T99;struct Cyc_Absyn_Global_b_Absyn_Binding_struct*_T9A;void*_T9B;unsigned _T9C;struct _fat_ptr*_T9D;struct Cyc_Absyn_Vardecl*_T9E;struct _tuple1*_T9F;struct Cyc_List_List**_TA0;struct Cyc_List_List*_TA1;long _TA2;struct _tuple17*_TA3;struct _tuple17 _TA4;long _TA5;struct Cyc_Tcenv_Tenv*_TA6;struct Cyc_Tcenv_Genv*_TA7;struct Cyc_Dict_Dict(*_TA8)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple17*);struct Cyc_Dict_Dict(*_TA9)(struct Cyc_Dict_Dict,void*,void*);struct Cyc_Tcenv_Tenv*_TAA;struct Cyc_Tcenv_Genv*_TAB;struct Cyc_Dict_Dict _TAC;struct _tuple1*_TAD;struct _tuple17*_TAE;struct _tuple17*_TAF;struct _tuple17 _TB0;void*_TB1;struct Cyc_Dict_Absent_exn_struct*_TB2;char*_TB3;char*_TB4;struct Cyc_Absyn_Vardecl*_TB5;struct _tuple1*_TB6;struct Cyc_List_List**_TB7;struct Cyc_List_List*_TB8;long _TB9;struct Cyc_Tcenv_Tenv*_TBA;struct Cyc_Tcenv_Genv*_TBB;struct Cyc_Dict_Dict(*_TBC)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple17*);struct Cyc_Dict_Dict(*_TBD)(struct Cyc_Dict_Dict,void*,void*);struct Cyc_Tcenv_Tenv*_TBE;struct Cyc_Tcenv_Genv*_TBF;struct Cyc_Dict_Dict _TC0;struct _tuple1*_TC1;struct _tuple17*_TC2;struct Cyc_Absyn_Global_b_Absyn_Binding_struct*_TC3;void*_TC4;struct Cyc_List_List*_TC5;struct Cyc_Absyn_Exp*_TC6;void*_TC7;struct _tuple1*_TC8;enum Cyc_Absyn_Scope _TC9;_T0= vd;{struct Cyc_Absyn_Vardecl _TCA=*_T0;_TC9= _TCA.sc;_TC8= _TCA.name;_TC7= _TCA.type;_TC6= _TCA.initializer;_TC5= _TCA.attributes;_T1= vd;_T2= & _T1->is_proto;_TC4= (long*)_T2;}{enum Cyc_Absyn_Scope sc=_TC9;struct _tuple1*q=_TC8;void*t=_TC7;struct Cyc_Absyn_Exp*initializer=_TC6;struct Cyc_List_List*atts=_TC5;long*is_proto=(long*)_TC4;_T3= Cyc_Tc_debug;
# 70
if(!_T3)goto _TL6;{struct Cyc_String_pa_PrintArg_struct _TCA;_TCA.tag= 0;_T5= q;_T6= *_T5;_T7= _T6.f1;
_TCA.f1= *_T7;_T4= _TCA;}{struct Cyc_String_pa_PrintArg_struct _TCA=_T4;{struct Cyc_String_pa_PrintArg_struct _TCB;_TCB.tag= 0;_T9= vd;_TA= _T9->type;
({__typeof__(Cyc_Absynpp_typ2string(_TA))_TCC=Cyc_Absynpp_typ2string(_TA);_TCB.f1= _TCC;});_T8= _TCB;}{struct Cyc_String_pa_PrintArg_struct _TCB=_T8;void*_TCC[2];_TCC[0]= & _TCA;_TCC[1]= & _TCB;_TB= Cyc_stderr;_TC= 
# 71
_tag_fat("type-checking vardecl_t %s, type %s\n",sizeof(char),37U);_TD= _tag_fat(_TCC,sizeof(void*),2);Cyc_fprintf(_TB,_TC,_TD);}}goto _TL7;_TL6: _TL7:{
# 76
void*_TCA=Cyc_Absyn_compress(t);unsigned _TCB;void*_TCC;struct Cyc_Absyn_Tqual _TCD;void*_TCE;_TE= (int*)_TCA;_TF= *_TE;if(_TF!=5)goto _TL8;_T10= (struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_TCA;_T11= _T10->f1;_T12= _T11.num_elts;if(_T12!=0)goto _TLA;{struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_TCF=(struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_TCA;_T13= _TCF->f1;_TCE= _T13.elt_type;_T14= _TCF->f1;_TCD= _T14.tq;_T15= _TCF->f1;_TCC= _T15.zero_term;_T16= _TCF->f1;_TCB= _T16.zt_loc;}if(initializer==0)goto _TLC;{void*telt=_TCE;struct Cyc_Absyn_Tqual tq=_TCD;void*zt=_TCC;unsigned ztl=_TCB;_T17= initializer;{
# 78
void*_TCF=_T17->r;struct Cyc_List_List*_TD0;struct Cyc_Absyn_Exp*_TD1;struct _fat_ptr _TD2;_T18= (int*)_TCF;_T19= *_T18;switch(_T19){case 0: _T1A= (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_TCF;_T1B= _T1A->f1;_T1C= _T1B.Wstring_c;_T1D= _T1C.tag;switch(_T1D){case 9:{struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_TD3=(struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_TCF;_T1E= _TD3->f1;_T1F= _T1E.String_c;_TD2= _T1F.val;}{struct _fat_ptr s=_TD2;_T20= vd;_T21= telt;_T22= tq;_T23= s;_T24= 
# 80
_get_fat_size(_T23,sizeof(char));_T25= Cyc_Absyn_uint_exp(_T24,0U);_T26= zt;_T27= ztl;({__typeof__(Cyc_Absyn_array_type(_T21,_T22,_T25,_T26,_T27))_TD3=Cyc_Absyn_array_type(_T21,_T22,_T25,_T26,_T27);_T20->type= _TD3;});t= _T20->type;goto _LL8;}case 10:{struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_TD3=(struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_TCF;_T28= _TD3->f1;_T29= _T28.Wstring_c;_TD2= _T29.val;}{struct _fat_ptr s=_TD2;_T2A= vd;_T2B= telt;_T2C= tq;_T2D= 
# 83
Cyc_Absyn_uint_exp(1U,0U);_T2E= zt;_T2F= ztl;({__typeof__(Cyc_Absyn_array_type(_T2B,_T2C,_T2D,_T2E,_T2F))_TD3=Cyc_Absyn_array_type(_T2B,_T2C,_T2D,_T2E,_T2F);_T2A->type= _TD3;});t= _T2A->type;goto _LL8;}default: goto _LL15;};case 26:{struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct*_TD3=(struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct*)_TCF;_TD1= _TD3->f2;}{struct Cyc_Absyn_Exp*e=_TD1;_TD1= e;goto _LL10;}case 27:{struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct*_TD3=(struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct*)_TCF;_TD1= _TD3->f1;}_LL10: {struct Cyc_Absyn_Exp*e=_TD1;_T30= vd;
# 88
({__typeof__(Cyc_Absyn_array_type(telt,tq,e,zt,ztl))_TD3=Cyc_Absyn_array_type(telt,tq,e,zt,ztl);_T30->type= _TD3;});t= _T30->type;goto _LL8;}case 35:{struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct*_TD3=(struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct*)_TCF;_TD0= _TD3->f2;}{struct Cyc_List_List*es=_TD0;_TD0= es;goto _LL14;}case 25:{struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*_TD3=(struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*)_TCF;_TD0= _TD3->f1;}_LL14: {struct Cyc_List_List*es=_TD0;_T31= vd;_T32= telt;_T33= tq;_T34= 
# 93
Cyc_List_length(es);_T35= (unsigned)_T34;_T36= Cyc_Absyn_uint_exp(_T35,0U);_T37= zt;_T38= ztl;({__typeof__(Cyc_Absyn_array_type(_T32,_T33,_T36,_T37,_T38))_TD3=Cyc_Absyn_array_type(_T32,_T33,_T36,_T37,_T38);_T31->type= _TD3;});t= _T31->type;goto _LL8;}default: _LL15: goto _LL8;}_LL8:;}goto _LL3;}_TLC: goto _LL6;_TLA: goto _LL6;_TL8: _LL6: goto _LL3;_LL3:;}
# 103
Cyc_Tctyp_check_valid_toplevel_type(loc,te,t);_T39= vd;_T3A= loc;_T3B= vd;_T3C= _T3B->tq;_T3D= _T3C.print_const;_T3E= t;
# 105
({__typeof__(Cyc_Tcutil_extract_const_from_typedef(_T3A,_T3D,_T3E))_TCA=Cyc_Tcutil_extract_const_from_typedef(_T3A,_T3D,_T3E);_T39->tq.real_const= _TCA;});_T3F= vd;_T40= 
# 108
Cyc_Tcutil_is_array_type(t);_T3F->escapes= !_T40;_T41= 
# 110
Cyc_Tcutil_is_function_type(t);if(!_T41)goto _TL10;_T42= is_proto;
*_T42= 0;
# 113
atts= Cyc_Atts_transfer_fn_type_atts(t,atts);
Cyc_Atts_fnTypeAttsOK(loc,t);goto _TL11;_TL10: _TL11: _T43= sc;_T44= (int)_T43;
# 117
if(_T44==3)goto _TL14;else{goto _TL15;}_TL15: _T45= sc;_T46= (int)_T45;if(_T46==4)goto _TL14;else{goto _TL12;}
_TL14: if(initializer==0)goto _TL16;_T47= in_cinclude;if(_T47)goto _TL16;else{goto _TL18;}
_TL18:{struct Cyc_Warn_String_Warn_Warg_struct _TCA;_TCA.tag= 0;({__typeof__(_tag_fat("extern declaration should not have initializer",sizeof(char),47U))_TCB=_tag_fat("extern declaration should not have initializer",sizeof(char),47U);_TCA.f1= _TCB;});_T48= _TCA;}{struct Cyc_Warn_String_Warn_Warg_struct _TCA=_T48;void*_TCB[1];_TCB[0]= & _TCA;_T49= loc;_T4A= _tag_fat(_TCB,sizeof(void*),1);Cyc_Warn_err2(_T49,_T4A);}goto _TL17;_TL16: _TL17: goto _TL13;
_TL12: _T4B= Cyc_Tcutil_is_function_type(t);if(_T4B)goto _TL19;else{goto _TL1B;}
# 124
_TL1B: Cyc_Atts_check_variable_atts(loc,vd,atts);
if(initializer==0)goto _TL1E;else{goto _TL1F;}_TL1F: _T4C= in_cinclude;if(_T4C)goto _TL1E;else{goto _TL1C;}
_TL1E: _T4D= check_var_init;if(!_T4D)goto _TL20;_T4E= in_cinclude;if(_T4E)goto _TL20;else{goto _TL22;}_TL22: _T4F= Cyc_Tcutil_zeroable_type(t);if(_T4F)goto _TL20;else{goto _TL23;}
_TL23:{struct Cyc_Warn_String_Warn_Warg_struct _TCA;_TCA.tag= 0;({__typeof__(_tag_fat("initializer required for variable ",sizeof(char),35U))_TCB=_tag_fat("initializer required for variable ",sizeof(char),35U);_TCA.f1= _TCB;});_T50= _TCA;}{struct Cyc_Warn_String_Warn_Warg_struct _TCA=_T50;{struct Cyc_Warn_Vardecl_Warn_Warg_struct _TCB;_TCB.tag= 11;_TCB.f1= vd;_T51= _TCB;}{struct Cyc_Warn_Vardecl_Warn_Warg_struct _TCB=_T51;{struct Cyc_Warn_String_Warn_Warg_struct _TCC;_TCC.tag= 0;({__typeof__(_tag_fat(" of type ",sizeof(char),10U))_TCD=_tag_fat(" of type ",sizeof(char),10U);_TCC.f1= _TCD;});_T52= _TCC;}{struct Cyc_Warn_String_Warn_Warg_struct _TCC=_T52;{struct Cyc_Warn_Typ_Warn_Warg_struct _TCD;_TCD.tag= 2;_TCD.f1= t;_T53= _TCD;}{struct Cyc_Warn_Typ_Warn_Warg_struct _TCD=_T53;void*_TCE[4];_TCE[0]= & _TCA;_TCE[1]= & _TCB;_TCE[2]= & _TCC;_TCE[3]= & _TCD;_T54= loc;_T55= _tag_fat(_TCE,sizeof(void*),4);Cyc_Warn_err2(_T54,_T55);}}}}goto _TL21;_TL20: _TL21: goto _TL1D;
# 132
_TL1C:{struct _handler_cons _TCA;_T56= & _TCA;_push_handler(_T56);{int _TCB=0;_T57= setjmp(_TCA.handler);if(!_T57)goto _TL24;_TCB= 1;goto _TL25;_TL24: _TL25: if(_TCB)goto _TL26;else{goto _TL28;}_TL28: _T58= te;_T59= & t;_T5A= initializer;{
void*t2=Cyc_Tcexp_tcExpInitializer(_T58,_T59,_T5A);_T5B= 
Cyc_Tcenv_curr_aquals_bounds(te);_T5C= initializer;_T5D= t;_T5E= Cyc_Tcutil_coerce_assign(_T5B,_T5C,_T5D);if(_T5E)goto _TL29;else{goto _TL2B;}
_TL2B: _T5F= vd;_T60= _T5F->name;{struct _fat_ptr s0=Cyc_Absynpp_qvar2string(_T60);
const char*s1=" declared with type ";
struct _fat_ptr s2=Cyc_Absynpp_typ2string(t);
const char*s3=" but initialized with type ";
struct _fat_ptr s4=Cyc_Absynpp_typ2string(t2);_T61= 
Cyc_strlen(s0);_T62= s1;_T63= _tag_fat(_T62,sizeof(char),21U);_T64= Cyc_strlen(_T63);_T65= _T61 + _T64;_T66= Cyc_strlen(s2);_T67= _T65 + _T66;_T68= s3;_T69= _tag_fat(_T68,sizeof(char),28U);_T6A= Cyc_strlen(_T69);_T6B= _T67 + _T6A;_T6C= Cyc_strlen(s4);_T6D= _T6B + _T6C;if(_T6D <= 70U)goto _TL2C;{struct Cyc_String_pa_PrintArg_struct _TCC;_TCC.tag= 0;
_TCC.f1= s0;_T6E= _TCC;}{struct Cyc_String_pa_PrintArg_struct _TCC=_T6E;{struct Cyc_String_pa_PrintArg_struct _TCD;_TCD.tag= 0;_T70= s1;({__typeof__(_tag_fat(_T70,sizeof(char),21U))_TCE=_tag_fat(_T70,sizeof(char),21U);_TCD.f1= _TCE;});_T6F= _TCD;}{struct Cyc_String_pa_PrintArg_struct _TCD=_T6F;{struct Cyc_String_pa_PrintArg_struct _TCE;_TCE.tag= 0;_TCE.f1= s2;_T71= _TCE;}{struct Cyc_String_pa_PrintArg_struct _TCE=_T71;{struct Cyc_String_pa_PrintArg_struct _TCF;_TCF.tag= 0;_T73= s3;({__typeof__(_tag_fat(_T73,sizeof(char),28U))_TD0=_tag_fat(_T73,sizeof(char),28U);_TCF.f1= _TD0;});_T72= _TCF;}{struct Cyc_String_pa_PrintArg_struct _TCF=_T72;{struct Cyc_String_pa_PrintArg_struct _TD0;_TD0.tag= 0;_TD0.f1= s4;_T74= _TD0;}{struct Cyc_String_pa_PrintArg_struct _TD0=_T74;void*_TD1[5];_TD1[0]= & _TCC;_TD1[1]= & _TCD;_TD1[2]= & _TCE;_TD1[3]= & _TCF;_TD1[4]= & _TD0;_T75= loc;_T76= _tag_fat("%s%s\n\t%s\n%s\n\t%s",sizeof(char),16U);_T77= _tag_fat(_TD1,sizeof(void*),5);Cyc_Warn_err(_T75,_T76,_T77);}}}}}goto _TL2D;
# 143
_TL2C:{struct Cyc_String_pa_PrintArg_struct _TCC;_TCC.tag= 0;_TCC.f1= s0;_T78= _TCC;}{struct Cyc_String_pa_PrintArg_struct _TCC=_T78;{struct Cyc_String_pa_PrintArg_struct _TCD;_TCD.tag= 0;_T7A= s1;({__typeof__(_tag_fat(_T7A,sizeof(char),21U))_TCE=_tag_fat(_T7A,sizeof(char),21U);_TCD.f1= _TCE;});_T79= _TCD;}{struct Cyc_String_pa_PrintArg_struct _TCD=_T79;{struct Cyc_String_pa_PrintArg_struct _TCE;_TCE.tag= 0;_TCE.f1= s2;_T7B= _TCE;}{struct Cyc_String_pa_PrintArg_struct _TCE=_T7B;{struct Cyc_String_pa_PrintArg_struct _TCF;_TCF.tag= 0;_T7D= s3;({__typeof__(_tag_fat(_T7D,sizeof(char),28U))_TD0=_tag_fat(_T7D,sizeof(char),28U);_TCF.f1= _TD0;});_T7C= _TCF;}{struct Cyc_String_pa_PrintArg_struct _TCF=_T7C;{struct Cyc_String_pa_PrintArg_struct _TD0;_TD0.tag= 0;_TD0.f1= s4;_T7E= _TD0;}{struct Cyc_String_pa_PrintArg_struct _TD0=_T7E;void*_TD1[5];_TD1[0]= & _TCC;_TD1[1]= & _TCD;_TD1[2]= & _TCE;_TD1[3]= & _TCF;_TD1[4]= & _TD0;_T7F= loc;_T80= _tag_fat("%s%s%s%s%s",sizeof(char),11U);_T81= _tag_fat(_TD1,sizeof(void*),5);Cyc_Warn_err(_T7F,_T80,_T81);}}}}}_TL2D:
 Cyc_Unify_explain_failure();}goto _TL2A;_TL29: _TL2A: _T82= 
# 147
Cyc_Tcutil_is_const_exp(initializer);if(_T82)goto _TL2E;else{goto _TL30;}
_TL30:{struct Cyc_Warn_String_Warn_Warg_struct _TCC;_TCC.tag= 0;({__typeof__(_tag_fat("initializer is not a constant expression",sizeof(char),41U))_TCD=_tag_fat("initializer is not a constant expression",sizeof(char),41U);_TCC.f1= _TCD;});_T83= _TCC;}{struct Cyc_Warn_String_Warn_Warg_struct _TCC=_T83;void*_TCD[1];_TCD[0]= & _TCC;_T84= loc;_T85= _tag_fat(_TCD,sizeof(void*),1);Cyc_Warn_err2(_T84,_T85);}goto _TL2F;_TL2E: _TL2F:;}_pop_handler();goto _TL27;_TL26: _T86= Cyc_Core_get_exn_thrown();{void*_TCC=(void*)_T86;void*_TCD;_T87= (struct Cyc_Tcenv_Env_error_exn_struct*)_TCC;_T88= _T87->tag;_T89= Cyc_Tcenv_Env_error;if(_T88!=_T89)goto _TL31;{struct Cyc_Warn_String_Warn_Warg_struct _TCE;_TCE.tag= 0;
# 151
({__typeof__(_tag_fat("initializer is not a constant expression",sizeof(char),41U))_TCF=_tag_fat("initializer is not a constant expression",sizeof(char),41U);_TCE.f1= _TCF;});_T8A= _TCE;}{struct Cyc_Warn_String_Warn_Warg_struct _TCE=_T8A;void*_TCF[1];_TCF[0]= & _TCE;_T8B= loc;_T8C= _tag_fat(_TCF,sizeof(void*),1);Cyc_Warn_err2(_T8B,_T8C);}goto _LL17;_TL31: _TCD= _TCC;{void*exn=_TCD;_rethrow(exn);}_LL17:;}_TL27:;}}_TL1D: goto _TL1A;
# 156
_TL19: Cyc_Atts_check_fndecl_atts(loc,atts,0);_TL1A: _TL13:{struct _handler_cons _TCA;_T8D= & _TCA;_push_handler(_T8D);{int _TCB=0;_T8E= setjmp(_TCA.handler);if(!_T8E)goto _TL33;_TCB= 1;goto _TL34;_TL33: _TL34: if(_TCB)goto _TL35;else{goto _TL37;}_TL37: _T90= Cyc_Dict_lookup;{
# 160
struct _tuple17*(*_TCC)(struct Cyc_Dict_Dict,struct _tuple1*)=(struct _tuple17*(*)(struct Cyc_Dict_Dict,struct _tuple1*))_T90;_T8F= _TCC;}_T91= te;_T92= _T91->ae;_T93= _T92->ordinaries;_T94= q;{struct _tuple17*ans=_T8F(_T93,_T94);_T95= ans;_T96= *_T95;{
void*b0=_T96.f0;
struct Cyc_Absyn_Global_b_Absyn_Binding_struct*b1;b1= _cycalloc(sizeof(struct Cyc_Absyn_Global_b_Absyn_Binding_struct));_T97= b1;_T97->tag= 1;_T98= b1;_T98->f1= vd;_T99= b0;_T9A= b1;_T9B= (void*)_T9A;_T9C= loc;_T9D= Cyc_Tc_tc_msg;{
void*b=Cyc_Tcdecl_merge_binding(_T99,_T9B,_T9C,_T9D);
if(b!=0)goto _TL38;_npop_handler(0);return;_TL38:
# 167
 if(exports==0)goto _TL3C;else{goto _TL3D;}_TL3D: _T9E= vd;_T9F= _T9E->name;_TA0= exports;_TA1= *_TA0;_TA2= Cyc_Tc_export_member(_T9F,_TA1);if(_TA2)goto _TL3C;else{goto _TL3A;}
_TL3C: if(b!=b0)goto _TL40;else{goto _TL41;}_TL41: _TA3= ans;_TA4= *_TA3;_TA5= _TA4.f1;if(_TA5)goto _TL40;else{goto _TL3E;}
# 170
_TL40: _TA6= te;_TA7= _TA6->ae;_TA9= Cyc_Dict_insert;{struct Cyc_Dict_Dict(*_TCC)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple17*)=(struct Cyc_Dict_Dict(*)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple17*))_TA9;_TA8= _TCC;}_TAA= te;_TAB= _TAA->ae;_TAC= _TAB->ordinaries;_TAD= q;{struct _tuple17*_TCC=_cycalloc(sizeof(struct _tuple17));_TCC->f0= b;_TAF= ans;_TB0= *_TAF;_TCC->f1= _TB0.f1;_TAE= (struct _tuple17*)_TCC;}({__typeof__(_TA8(_TAC,_TAD,_TAE))_TCC=_TA8(_TAC,_TAD,_TAE);_TA7->ordinaries= _TCC;});goto _TL3F;_TL3E: _TL3F: goto _TL3B;_TL3A: _TL3B: _npop_handler(0);return;}}}_pop_handler();goto _TL36;_TL35: _TB1= Cyc_Core_get_exn_thrown();{void*_TCC=(void*)_TB1;void*_TCD;_TB2= (struct Cyc_Dict_Absent_exn_struct*)_TCC;_TB3= _TB2->tag;_TB4= Cyc_Dict_Absent;if(_TB3!=_TB4)goto _TL42;goto _LL1C;_TL42: _TCD= _TCC;{void*exn=_TCD;_rethrow(exn);}_LL1C:;}_TL36:;}}
# 176
if(exports==0)goto _TL46;else{goto _TL47;}_TL47: _TB5= vd;_TB6= _TB5->name;_TB7= exports;_TB8= *_TB7;_TB9= Cyc_Tc_export_member(_TB6,_TB8);if(_TB9)goto _TL46;else{goto _TL44;}
_TL46: _TBA= te;_TBB= _TBA->ae;_TBD= Cyc_Dict_insert;{struct Cyc_Dict_Dict(*_TCA)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple17*)=(struct Cyc_Dict_Dict(*)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple17*))_TBD;_TBC= _TCA;}_TBE= te;_TBF= _TBE->ae;_TC0= _TBF->ordinaries;_TC1= q;{struct _tuple17*_TCA=_cycalloc(sizeof(struct _tuple17));{struct Cyc_Absyn_Global_b_Absyn_Binding_struct*_TCB=_cycalloc(sizeof(struct Cyc_Absyn_Global_b_Absyn_Binding_struct));_TCB->tag= 1;_TCB->f1= vd;_TC3= (struct Cyc_Absyn_Global_b_Absyn_Binding_struct*)_TCB;}_TCA->f0= (void*)_TC3;_TCA->f1= 0;_TC2= (struct _tuple17*)_TCA;}({__typeof__(_TBC(_TC0,_TC1,_TC2))_TCA=_TBC(_TC0,_TC1,_TC2);_TBB->ordinaries= _TCA;});goto _TL45;_TL44: _TL45:;}}
# 180
static void Cyc_Tc_tcFndecl(struct Cyc_Tcenv_Tenv*te,unsigned loc,struct Cyc_Absyn_Fndecl*fd,struct Cyc_List_List**exports){struct Cyc_Absyn_Fndecl*_T0;long _T1;struct Cyc_String_pa_PrintArg_struct _T2;struct _tuple1*_T3;struct _tuple1 _T4;struct _fat_ptr*_T5;struct Cyc___cycFILE*_T6;struct _fat_ptr _T7;struct _fat_ptr _T8;struct Cyc_Absyn_Fndecl*_T9;enum Cyc_Absyn_Scope _TA;int _TB;struct Cyc_Tcenv_Tenv*_TC;long _TD;struct Cyc_Warn_String_Warn_Warg_struct _TE;unsigned _TF;struct _fat_ptr _T10;unsigned _T11;struct Cyc_Absyn_Fndecl*_T12;struct Cyc_Absyn_FnInfo _T13;struct Cyc_List_List*_T14;struct Cyc_Tcenv_Tenv*_T15;long _T16;struct Cyc_Absyn_Fndecl*_T17;int(*_T18)(void*,void*);struct Cyc_Absyn_Fndecl*_T19;struct Cyc_Absyn_FnInfo _T1A;struct Cyc_List_List*_T1B;struct Cyc_Absyn_No_throw_att_Absyn_Attribute_struct*_T1C;struct Cyc_Absyn_No_throw_att_Absyn_Attribute_struct*_T1D;void*_T1E;struct Cyc_Absyn_Fndecl*_T1F;void*_T20;struct Cyc_Absyn_Fndecl*_T21;struct Cyc_Absyn_FnInfo _T22;struct Cyc_List_List*_T23;struct _handler_cons*_T24;int _T25;struct _tuple17*(*_T26)(struct Cyc_Dict_Dict,struct _tuple1*);void*(*_T27)(struct Cyc_Dict_Dict,void*);struct Cyc_Tcenv_Tenv*_T28;struct Cyc_Tcenv_Genv*_T29;struct Cyc_Dict_Dict _T2A;struct _tuple1*_T2B;struct _tuple17*_T2C;struct _tuple17 _T2D;struct Cyc_Absyn_Funname_b_Absyn_Binding_struct*_T2E;struct Cyc_Absyn_Funname_b_Absyn_Binding_struct*_T2F;void*_T30;struct Cyc_Absyn_Funname_b_Absyn_Binding_struct*_T31;void*_T32;unsigned _T33;struct _fat_ptr*_T34;struct _tuple1*_T35;struct Cyc_List_List**_T36;struct Cyc_List_List*_T37;long _T38;struct _tuple17*_T39;struct _tuple17 _T3A;long _T3B;struct Cyc_Tcenv_Tenv*_T3C;struct Cyc_Tcenv_Genv*_T3D;struct Cyc_Dict_Dict(*_T3E)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple17*);struct Cyc_Dict_Dict(*_T3F)(struct Cyc_Dict_Dict,void*,void*);struct Cyc_Tcenv_Tenv*_T40;struct Cyc_Tcenv_Genv*_T41;struct Cyc_Dict_Dict _T42;struct _tuple1*_T43;struct _tuple17*_T44;struct _tuple17*_T45;struct _tuple17 _T46;void*_T47;struct Cyc_Dict_Absent_exn_struct*_T48;char*_T49;char*_T4A;struct Cyc_Absyn_Fndecl*_T4B;struct _tuple1*_T4C;struct Cyc_List_List**_T4D;struct Cyc_List_List*_T4E;long _T4F;struct Cyc_Tcenv_Tenv*_T50;struct Cyc_Tcenv_Genv*_T51;struct Cyc_Dict_Dict(*_T52)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple17*);struct Cyc_Dict_Dict(*_T53)(struct Cyc_Dict_Dict,void*,void*);struct Cyc_Tcenv_Tenv*_T54;struct Cyc_Tcenv_Genv*_T55;struct Cyc_Dict_Dict _T56;struct _tuple1*_T57;struct _tuple17*_T58;struct Cyc_Absyn_Funname_b_Absyn_Binding_struct*_T59;struct Cyc_Tcenv_Tenv*_T5A;long _T5B;struct Cyc_Tcenv_Tenv*_T5C;struct Cyc_Tcenv_Tenv*_T5D;struct Cyc_Tcenv_Tenv*_T5E;struct Cyc_Tcenv_Tenv*_T5F;struct Cyc_Tcenv_Tenv*_T60;struct Cyc_Absyn_Fndecl*_T61;struct Cyc_Absyn_Stmt*_T62;struct Cyc_Tcenv_Tenv*_T63;long _T64;struct Cyc_Tcenv_Tenv*_T65;struct Cyc_Tcenv_Tenv*_T66;long _T67;struct Cyc_Absyn_Fndecl*_T68;struct Cyc_Absyn_Stmt*_T69;long _T6A;struct Cyc_Warn_String_Warn_Warg_struct _T6B;struct Cyc_Warn_Qvar_Warn_Warg_struct _T6C;struct Cyc_Absyn_Fndecl*_T6D;struct Cyc_Warn_String_Warn_Warg_struct _T6E;unsigned _T6F;struct _fat_ptr _T70;long _T71;struct Cyc_Absyn_Fndecl*_T72;struct Cyc_Absyn_FnInfo _T73;struct Cyc_Absyn_Exp*_T74;struct Cyc_Warn_String_Warn_Warg_struct _T75;unsigned _T76;struct _fat_ptr _T77;struct Cyc_Absyn_Fndecl*_T78;struct Cyc_Absyn_FnInfo _T79;struct Cyc_Absyn_Exp*_T7A;struct Cyc_Warn_String_Warn_Warg_struct _T7B;unsigned _T7C;struct _fat_ptr _T7D;struct Cyc_Absyn_Fndecl*_T7E;struct Cyc_Absyn_FnInfo _T7F;void*_T80;int*_T81;int _T82;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T83;void*_T84;int*_T85;unsigned _T86;struct Cyc_Warn_String_Warn_Warg_struct _T87;unsigned _T88;struct _fat_ptr _T89;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T8A;void*_T8B;struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*_T8C;enum Cyc_Absyn_Size_of _T8D;int _T8E;struct Cyc_Warn_String_Warn_Warg_struct _T8F;struct Cyc_Warn_Typ_Warn_Warg_struct _T90;struct Cyc_Absyn_Fndecl*_T91;struct Cyc_Absyn_FnInfo _T92;struct Cyc_Warn_String_Warn_Warg_struct _T93;unsigned _T94;struct _fat_ptr _T95;struct Cyc_Absyn_Fndecl*_T96;struct Cyc_Absyn_FnInfo _T97;long _T98;struct Cyc_Absyn_Fndecl*_T99;struct Cyc_Absyn_FnInfo _T9A;struct Cyc_Absyn_VarargInfo*_T9B;struct Cyc_Warn_String_Warn_Warg_struct _T9C;unsigned _T9D;struct _fat_ptr _T9E;struct Cyc_Absyn_Fndecl*_T9F;struct Cyc_Absyn_FnInfo _TA0;struct Cyc_List_List*_TA1;void*_TA2;int*_TA3;int _TA4;struct Cyc_Absyn_AppType_Absyn_Type_struct*_TA5;void*_TA6;int*_TA7;int _TA8;struct Cyc_Absyn_AppType_Absyn_Type_struct*_TA9;void*_TAA;struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*_TAB;enum Cyc_Absyn_Size_of _TAC;int _TAD;struct Cyc_Warn_String_Warn_Warg_struct _TAE;struct Cyc_Warn_Typ_Warn_Warg_struct _TAF;struct Cyc_Warn_String_Warn_Warg_struct _TB0;unsigned _TB1;struct _fat_ptr _TB2;struct Cyc_List_List*_TB3;struct Cyc_List_List*_TB4;void*_TB5;struct Cyc_List_List*_TB6;struct Cyc_Warn_String_Warn_Warg_struct _TB7;unsigned _TB8;struct _fat_ptr _TB9;struct Cyc_Core_Opt*_TBA;struct Cyc_Absyn_Fndecl*_TBB;struct Cyc_Absyn_FnInfo _TBC;void*_TBD;struct Cyc_Core_Opt*_TBE;struct Cyc_Absyn_Kind*_TBF;struct Cyc_Core_Opt*_TC0;void*_TC1;void*_TC2;void*_TC3;struct Cyc_Core_Opt*_TC4;struct Cyc_Absyn_Kind*_TC5;struct Cyc_Core_Opt*_TC6;void*_TC7;void*_TC8;struct Cyc_Absyn_Tqual _TC9;struct Cyc_Core_Opt*_TCA;void*_TCB;struct Cyc_List_List*_TCC;void*_TCD;void*_TCE;void*_TCF;long _TD0;void*_TD1;struct Cyc_Core_Opt*_TD2;struct Cyc_Absyn_Kind*_TD3;struct Cyc_Core_Opt*_TD4;void*_TD5;void*_TD6;void*_TD7;struct Cyc_Core_Opt*_TD8;struct Cyc_Absyn_Kind*_TD9;struct Cyc_Core_Opt*_TDA;void*_TDB;void*_TDC;struct Cyc_Absyn_Tqual _TDD;struct Cyc_Core_Opt*_TDE;void*_TDF;struct Cyc_List_List*_TE0;void*_TE1;void*_TE2;void*_TE3;long _TE4;void*_TE5;struct Cyc_Core_Opt*_TE6;struct Cyc_Absyn_Kind*_TE7;struct Cyc_Core_Opt*_TE8;void*_TE9;void*_TEA;void*_TEB;struct Cyc_Core_Opt*_TEC;struct Cyc_Absyn_Kind*_TED;struct Cyc_Core_Opt*_TEE;void*_TEF;void*_TF0;struct Cyc_Absyn_Tqual _TF1;struct Cyc_Core_Opt*_TF2;void*_TF3;struct Cyc_List_List*_TF4;void*_TF5;void*_TF6;void*_TF7;long _TF8;void*_TF9;struct Cyc_Core_Opt*_TFA;struct Cyc_Absyn_Kind*_TFB;struct Cyc_Core_Opt*_TFC;void*_TFD;void*_TFE;void*_TFF;struct Cyc_Core_Opt*_T100;struct Cyc_Absyn_Kind*_T101;struct Cyc_Core_Opt*_T102;void*_T103;void*_T104;struct Cyc_Absyn_Tqual _T105;struct Cyc_Core_Opt*_T106;void*_T107;struct Cyc_List_List*_T108;void*_T109;void*_T10A;void*_T10B;long _T10C;struct Cyc_Warn_String_Warn_Warg_struct _T10D;struct Cyc_Warn_Typ_Warn_Warg_struct _T10E;struct Cyc_Warn_String_Warn_Warg_struct _T10F;unsigned _T110;struct _fat_ptr _T111;_T0= fd;{
struct _tuple1*q=_T0->name;_T1= Cyc_Tc_debug;
if(!_T1)goto _TL48;{struct Cyc_String_pa_PrintArg_struct _T112;_T112.tag= 0;_T3= q;_T4= *_T3;_T5= _T4.f1;
_T112.f1= *_T5;_T2= _T112;}{struct Cyc_String_pa_PrintArg_struct _T112=_T2;void*_T113[1];_T113[0]= & _T112;_T6= Cyc_stderr;_T7= _tag_fat("type-checking fndecl %s\n",sizeof(char),25U);_T8= _tag_fat(_T113,sizeof(void*),1);Cyc_fprintf(_T6,_T7,_T8);}goto _TL49;_TL48: _TL49: _T9= fd;_TA= _T9->sc;_TB= (int)_TA;
# 185
if(_TB!=4)goto _TL4A;_TC= te;_TD= _TC->in_extern_c_include;if(_TD)goto _TL4A;else{goto _TL4C;}
_TL4C:{struct Cyc_Warn_String_Warn_Warg_struct _T112;_T112.tag= 0;({__typeof__(_tag_fat("extern \"C\" functions cannot be implemented in Cyclone",sizeof(char),54U))_T113=_tag_fat("extern \"C\" functions cannot be implemented in Cyclone",sizeof(char),54U);_T112.f1= _T113;});_TE= _T112;}{struct Cyc_Warn_String_Warn_Warg_struct _T112=_TE;void*_T113[1];_T113[0]= & _T112;_TF= loc;_T10= _tag_fat(_T113,sizeof(void*),1);Cyc_Warn_err2(_TF,_T10);}goto _TL4B;_TL4A: _TL4B: _T11= loc;_T12= fd;_T13= _T12->i;_T14= _T13.attributes;
# 189
Cyc_Atts_check_fndecl_atts(_T11,_T14,1);_T15= te;_T16= _T15->in_extern_c_inc_repeat;
# 192
if(!_T16)goto _TL4D;_T17= fd;
_T17->cached_type= 0;goto _TL4E;_TL4D: _TL4E:
 Cyc_Tctyp_check_fndecl_valid_type(loc,te,fd);{
void*t=Cyc_Tcutil_fndecl2type(fd);_T18= Cyc_Atts_attribute_cmp;_T19= fd;_T1A= _T19->i;_T1B= _T1A.attributes;_T1C= & Cyc_Atts_No_throw_att_val;_T1D= (struct Cyc_Absyn_No_throw_att_Absyn_Attribute_struct*)_T1C;_T1E= (void*)_T1D;{
# 197
long nothrow=Cyc_List_mem(_T18,_T1B,_T1E);_T1F= fd;_T20= t;_T21= fd;_T22= _T21->i;_T23= _T22.attributes;
({__typeof__(Cyc_Atts_transfer_fn_type_atts(_T20,_T23))_T112=Cyc_Atts_transfer_fn_type_atts(_T20,_T23);_T1F->i.attributes= _T112;});
Cyc_Atts_fnTypeAttsOK(loc,t);{struct _handler_cons _T112;_T24= & _T112;_push_handler(_T24);{int _T113=0;_T25= setjmp(_T112.handler);if(!_T25)goto _TL4F;_T113= 1;goto _TL50;_TL4F: _TL50: if(_T113)goto _TL51;else{goto _TL53;}_TL53: _T27= Cyc_Dict_lookup;{
# 203
struct _tuple17*(*_T114)(struct Cyc_Dict_Dict,struct _tuple1*)=(struct _tuple17*(*)(struct Cyc_Dict_Dict,struct _tuple1*))_T27;_T26= _T114;}_T28= te;_T29= _T28->ae;_T2A= _T29->ordinaries;_T2B= q;{struct _tuple17*ans=_T26(_T2A,_T2B);_T2C= ans;_T2D= *_T2C;{
void*b0=_T2D.f0;
struct Cyc_Absyn_Funname_b_Absyn_Binding_struct*b1;b1= _cycalloc(sizeof(struct Cyc_Absyn_Funname_b_Absyn_Binding_struct));_T2E= b1;_T2E->tag= 2;_T2F= b1;_T2F->f1= fd;_T30= b0;_T31= b1;_T32= (void*)_T31;_T33= loc;_T34= Cyc_Tc_tc_msg;{
void*b=Cyc_Tcdecl_merge_binding(_T30,_T32,_T33,_T34);
if(b==0)goto _TL54;
# 209
if(exports==0)goto _TL58;else{goto _TL59;}_TL59: _T35= q;_T36= exports;_T37= *_T36;_T38= Cyc_Tc_export_member(_T35,_T37);if(_T38)goto _TL58;else{goto _TL56;}
_TL58: if(b==b0)goto _TL5D;else{goto _TL5C;}_TL5D: _T39= ans;_T3A= *_T39;_T3B= _T3A.f1;if(_T3B)goto _TL5A;else{goto _TL5C;}
_TL5C: _T3C= te;_T3D= _T3C->ae;_T3F= Cyc_Dict_insert;{struct Cyc_Dict_Dict(*_T114)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple17*)=(struct Cyc_Dict_Dict(*)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple17*))_T3F;_T3E= _T114;}_T40= te;_T41= _T40->ae;_T42= _T41->ordinaries;_T43= q;{struct _tuple17*_T114=_cycalloc(sizeof(struct _tuple17));_T114->f0= b;_T45= ans;_T46= *_T45;_T114->f1= _T46.f1;_T44= (struct _tuple17*)_T114;}({__typeof__(_T3E(_T42,_T43,_T44))_T114=_T3E(_T42,_T43,_T44);_T3D->ordinaries= _T114;});goto _TL5B;_TL5A: _TL5B: goto _TL57;_TL56: _TL57: goto _TL55;_TL54: _TL55:;}}}_pop_handler();goto _TL52;_TL51: _T47= Cyc_Core_get_exn_thrown();{void*_T114=(void*)_T47;void*_T115;_T48= (struct Cyc_Dict_Absent_exn_struct*)_T114;_T49= _T48->tag;_T4A= Cyc_Dict_Absent;if(_T49!=_T4A)goto _TL5E;
# 214
if(exports==0)goto _TL62;else{goto _TL63;}_TL63: _T4B= fd;_T4C= _T4B->name;_T4D= exports;_T4E= *_T4D;_T4F= Cyc_Tc_export_member(_T4C,_T4E);if(_T4F)goto _TL62;else{goto _TL60;}
_TL62: _T50= te;_T51= _T50->ae;_T53= Cyc_Dict_insert;{struct Cyc_Dict_Dict(*_T116)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple17*)=(struct Cyc_Dict_Dict(*)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple17*))_T53;_T52= _T116;}_T54= te;_T55= _T54->ae;_T56= _T55->ordinaries;_T57= q;{struct _tuple17*_T116=_cycalloc(sizeof(struct _tuple17));{struct Cyc_Absyn_Funname_b_Absyn_Binding_struct*_T117=_cycalloc(sizeof(struct Cyc_Absyn_Funname_b_Absyn_Binding_struct));_T117->tag= 2;_T117->f1= fd;_T59= (struct Cyc_Absyn_Funname_b_Absyn_Binding_struct*)_T117;}_T116->f0= (void*)_T59;_T116->f1= 0;_T58= (struct _tuple17*)_T116;}({__typeof__(_T52(_T56,_T57,_T58))_T116=_T52(_T56,_T57,_T58);_T51->ordinaries= _T116;});goto _TL61;_TL60: _TL61: goto _LL0;_TL5E: _T115= _T114;{void*exn=_T115;_rethrow(exn);}_LL0:;}_TL52:;}}_T5A= te;_T5B= _T5A->in_extern_c_include;
# 220
if(!_T5B)goto _TL64;
return;_TL64: {
# 226
struct Cyc_Tcenv_Fenv*fenv=Cyc_Tcenv_new_fenv(loc,fd);
struct Cyc_Tcenv_Tenv*_T112;_T112= _cycalloc(sizeof(struct Cyc_Tcenv_Tenv));_T5C= te;
_T112->ns= _T5C->ns;_T5D= te;_T112->ae= _T5D->ae;_T112->le= fenv;_T112->allow_valueof= 0;_T112->in_extern_c_include= 0;_T5E= te;_T112->in_tempest= _T5E->in_tempest;_T5F= te;_T112->tempest_generalize= _T5F->tempest_generalize;_T112->in_extern_c_inc_repeat= 0;{
# 227
struct Cyc_Tcenv_Tenv*te=_T112;_T60= te;_T61= fd;_T62= _T61->body;
# 230
Cyc_Tcstmt_tcStmt(_T60,_T62,0);
# 233
Cyc_Tcenv_check_delayed_effects(te);
Cyc_Tcenv_check_delayed_constraints(te);_T63= te;_T64= _T63->in_tempest;
# 236
if(!_T64)goto _TL66;_T65= te;
_T65->tempest_generalize= 1;
Cyc_Tctyp_check_fndecl_valid_type(loc,te,fd);_T66= te;
_T66->tempest_generalize= 0;goto _TL67;_TL66: _TL67: _T67= nothrow;
# 241
if(!_T67)goto _TL68;_T68= fd;_T69= _T68->body;_T6A= Cyc_Tcstmt_ensure_no_throw_stmt(_T69);if(_T6A)goto _TL68;else{goto _TL6A;}
_TL6A:{struct Cyc_Warn_String_Warn_Warg_struct _T113;_T113.tag= 0;({__typeof__(_tag_fat("Function ",sizeof(char),10U))_T114=_tag_fat("Function ",sizeof(char),10U);_T113.f1= _T114;});_T6B= _T113;}{struct Cyc_Warn_String_Warn_Warg_struct _T113=_T6B;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T114;_T114.tag= 1;_T6D= fd;_T114.f1= _T6D->name;_T6C= _T114;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T114=_T6C;{struct Cyc_Warn_String_Warn_Warg_struct _T115;_T115.tag= 0;({__typeof__(_tag_fat(" has attribute no_throw but may throw an exception",sizeof(char),51U))_T116=_tag_fat(" has attribute no_throw but may throw an exception",sizeof(char),51U);_T115.f1= _T116;});_T6E= _T115;}{struct Cyc_Warn_String_Warn_Warg_struct _T115=_T6E;void*_T116[3];_T116[0]= & _T113;_T116[1]= & _T114;_T116[2]= & _T115;_T6F= loc;_T70= _tag_fat(_T116,sizeof(void*),3);Cyc_Warn_err2(_T6F,_T70);}}}goto _TL69;_TL68: _TL69: _T71= 
# 244
Cyc_Tcutil_is_main(q);if(!_T71)goto _TL6B;_T72= fd;_T73= _T72->i;_T74= _T73.checks_clause;
# 246
if(_T74==0)goto _TL6D;{struct Cyc_Warn_String_Warn_Warg_struct _T113;_T113.tag= 0;
({__typeof__(_tag_fat("main declared with a @check clause",sizeof(char),35U))_T114=_tag_fat("main declared with a @check clause",sizeof(char),35U);_T113.f1= _T114;});_T75= _T113;}{struct Cyc_Warn_String_Warn_Warg_struct _T113=_T75;void*_T114[1];_T114[0]= & _T113;_T76= loc;_T77= _tag_fat(_T114,sizeof(void*),1);Cyc_Warn_err2(_T76,_T77);}goto _TL6E;_TL6D: _TL6E: _T78= fd;_T79= _T78->i;_T7A= _T79.requires_clause;
if(_T7A==0)goto _TL6F;{struct Cyc_Warn_String_Warn_Warg_struct _T113;_T113.tag= 0;
({__typeof__(_tag_fat("main declared with a @requires clause",sizeof(char),38U))_T114=_tag_fat("main declared with a @requires clause",sizeof(char),38U);_T113.f1= _T114;});_T7B= _T113;}{struct Cyc_Warn_String_Warn_Warg_struct _T113=_T7B;void*_T114[1];_T114[0]= & _T113;_T7C= loc;_T7D= _tag_fat(_T114,sizeof(void*),1);Cyc_Warn_err2(_T7C,_T7D);}goto _TL70;_TL6F: _TL70: _T7E= fd;_T7F= _T7E->i;_T80= _T7F.ret_type;{
# 251
void*_T113=Cyc_Absyn_compress(_T80);_T81= (int*)_T113;_T82= *_T81;if(_T82!=0)goto _TL71;_T83= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T113;_T84= _T83->f1;_T85= (int*)_T84;_T86= *_T85;switch(_T86){case 0:{struct Cyc_Warn_String_Warn_Warg_struct _T114;_T114.tag= 0;
# 253
({__typeof__(_tag_fat("main declared with return type void",sizeof(char),36U))_T115=_tag_fat("main declared with return type void",sizeof(char),36U);_T114.f1= _T115;});_T87= _T114;}{struct Cyc_Warn_String_Warn_Warg_struct _T114=_T87;void*_T115[1];_T115[0]= & _T114;_T88= loc;_T89= _tag_fat(_T115,sizeof(void*),1);Cyc_Warn_warn2(_T88,_T89);}goto _LL5;case 1: _T8A= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T113;_T8B= _T8A->f1;_T8C= (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*)_T8B;_T8D= _T8C->f2;_T8E= (int)_T8D;switch(_T8E){case Cyc_Absyn_Int_sz: goto _LLB;case Cyc_Absyn_Long_sz: _LLB: goto _LL5;default: goto _LLC;};default: goto _LLC;}goto _TL72;_TL71: _LLC:{struct Cyc_Warn_String_Warn_Warg_struct _T114;_T114.tag= 0;
# 259
({__typeof__(_tag_fat("main declared with return type ",sizeof(char),32U))_T115=_tag_fat("main declared with return type ",sizeof(char),32U);_T114.f1= _T115;});_T8F= _T114;}{struct Cyc_Warn_String_Warn_Warg_struct _T114=_T8F;{struct Cyc_Warn_Typ_Warn_Warg_struct _T115;_T115.tag= 2;_T91= fd;_T92= _T91->i;_T115.f1= _T92.ret_type;_T90= _T115;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T115=_T90;{struct Cyc_Warn_String_Warn_Warg_struct _T116;_T116.tag= 0;
({__typeof__(_tag_fat(" instead of int or void",sizeof(char),24U))_T117=_tag_fat(" instead of int or void",sizeof(char),24U);_T116.f1= _T117;});_T93= _T116;}{struct Cyc_Warn_String_Warn_Warg_struct _T116=_T93;void*_T117[3];_T117[0]= & _T114;_T117[1]= & _T115;_T117[2]= & _T116;_T94= loc;_T95= _tag_fat(_T117,sizeof(void*),3);Cyc_Warn_err2(_T94,_T95);}}}_TL72: _LL5:;}_T96= fd;_T97= _T96->i;_T98= _T97.c_varargs;
# 262
if(_T98)goto _TL77;else{goto _TL78;}_TL78: _T99= fd;_T9A= _T99->i;_T9B= _T9A.cyc_varargs;if(_T9B!=0)goto _TL77;else{goto _TL75;}
_TL77:{struct Cyc_Warn_String_Warn_Warg_struct _T113;_T113.tag= 0;({__typeof__(_tag_fat("main declared with varargs",sizeof(char),27U))_T114=_tag_fat("main declared with varargs",sizeof(char),27U);_T113.f1= _T114;});_T9C= _T113;}{struct Cyc_Warn_String_Warn_Warg_struct _T113=_T9C;void*_T114[1];_T114[0]= & _T113;_T9D= loc;_T9E= _tag_fat(_T114,sizeof(void*),1);Cyc_Warn_err2(_T9D,_T9E);}goto _TL76;_TL75: _TL76: _T9F= fd;_TA0= _T9F->i;{
struct Cyc_List_List*args=_TA0.args;
if(args==0)goto _TL79;_TA1= args;_TA2= _TA1->hd;{
struct _tuple9*_T113=(struct _tuple9*)_TA2;void*_T114;{struct _tuple9 _T115=*_T113;_T114= _T115.f2;}{void*t1=_T114;{
void*_T115=Cyc_Absyn_compress(t1);_TA3= (int*)_T115;_TA4= *_TA3;if(_TA4!=0)goto _TL7B;_TA5= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T115;_TA6= _TA5->f1;_TA7= (int*)_TA6;_TA8= *_TA7;if(_TA8!=1)goto _TL7D;_TA9= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T115;_TAA= _TA9->f1;_TAB= (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*)_TAA;_TAC= _TAB->f2;_TAD= (int)_TAC;switch(_TAD){case Cyc_Absyn_Int_sz: goto _LL15;case Cyc_Absyn_Long_sz: _LL15: goto _LL11;default: goto _LL16;}goto _TL7E;_TL7D: goto _LL16;_TL7E: goto _TL7C;_TL7B: _LL16:{struct Cyc_Warn_String_Warn_Warg_struct _T116;_T116.tag= 0;
# 272
({__typeof__(_tag_fat("main declared with first argument of type ",sizeof(char),43U))_T117=_tag_fat("main declared with first argument of type ",sizeof(char),43U);_T116.f1= _T117;});_TAE= _T116;}{struct Cyc_Warn_String_Warn_Warg_struct _T116=_TAE;{struct Cyc_Warn_Typ_Warn_Warg_struct _T117;_T117.tag= 2;_T117.f1= t1;_TAF= _T117;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T117=_TAF;{struct Cyc_Warn_String_Warn_Warg_struct _T118;_T118.tag= 0;({__typeof__(_tag_fat(" instead of int",sizeof(char),16U))_T119=_tag_fat(" instead of int",sizeof(char),16U);_T118.f1= _T119;});_TB0= _T118;}{struct Cyc_Warn_String_Warn_Warg_struct _T118=_TB0;void*_T119[3];_T119[0]= & _T116;_T119[1]= & _T117;_T119[2]= & _T118;_TB1= loc;_TB2= _tag_fat(_T119,sizeof(void*),3);Cyc_Warn_err2(_TB1,_TB2);}}}_TL7C: _LL11:;}_TB3= args;
# 274
args= _TB3->tl;
if(args==0)goto _TL80;_TB4= args;_TB5= _TB4->hd;{
struct _tuple9*_T115=(struct _tuple9*)_TB5;void*_T116;{struct _tuple9 _T117=*_T115;_T116= _T117.f2;}{void*t2=_T116;_TB6= args;
args= _TB6->tl;
if(args==0)goto _TL82;{struct Cyc_Warn_String_Warn_Warg_struct _T117;_T117.tag= 0;
({__typeof__(_tag_fat("main declared with too many arguments",sizeof(char),38U))_T118=_tag_fat("main declared with too many arguments",sizeof(char),38U);_T117.f1= _T118;});_TB7= _T117;}{struct Cyc_Warn_String_Warn_Warg_struct _T117=_TB7;void*_T118[1];_T118[0]= & _T117;_TB8= loc;_TB9= _tag_fat(_T118,sizeof(void*),1);Cyc_Warn_err2(_TB8,_TB9);}goto _TL83;_TL82: _TL83: {
struct Cyc_Core_Opt*tvs;tvs= _cycalloc(sizeof(struct Cyc_Core_Opt));_TBA= tvs;_TBB= fd;_TBC= _TBB->i;_TBA->v= _TBC.tvars;_TBD= t2;{struct Cyc_Core_Opt*_T117=_cycalloc(sizeof(struct Cyc_Core_Opt));_TBF= & Cyc_Kinds_ek;
# 282
_T117->v= (struct Cyc_Absyn_Kind*)_TBF;_TBE= (struct Cyc_Core_Opt*)_T117;}_TC0= tvs;_TC1= Cyc_Absyn_new_evar(_TBE,_TC0);_TC2= Cyc_Absyn_al_qual_type;_TC3= Cyc_Absyn_string_type(_TC1,_TC2);{struct Cyc_Core_Opt*_T117=_cycalloc(sizeof(struct Cyc_Core_Opt));_TC5= & Cyc_Kinds_ek;
_T117->v= (struct Cyc_Absyn_Kind*)_TC5;_TC4= (struct Cyc_Core_Opt*)_T117;}_TC6= tvs;_TC7= Cyc_Absyn_new_evar(_TC4,_TC6);_TC8= Cyc_Absyn_al_qual_type;_TC9= Cyc_Absyn_empty_tqual(0U);_TCA= tvs;_TCB= _TCA->v;_TCC= (struct Cyc_List_List*)_TCB;_TCD= 
Cyc_Tcutil_any_bool(_TCC);_TCE= Cyc_Absyn_false_type;_TCF= 
# 282
Cyc_Absyn_fatptr_type(_TC3,_TC7,_TC8,_TC9,_TCD,_TCE);_TD0= 
# 281
Cyc_Unify_unify(_TBD,_TCF);if(_TD0)goto _TL84;else{goto _TL86;}_TL86: _TD1= t2;{struct Cyc_Core_Opt*_T117=_cycalloc(sizeof(struct Cyc_Core_Opt));_TD3= & Cyc_Kinds_ek;
# 286
_T117->v= (struct Cyc_Absyn_Kind*)_TD3;_TD2= (struct Cyc_Core_Opt*)_T117;}_TD4= tvs;_TD5= Cyc_Absyn_new_evar(_TD2,_TD4);_TD6= Cyc_Absyn_al_qual_type;_TD7= Cyc_Absyn_const_string_type(_TD5,_TD6);{struct Cyc_Core_Opt*_T117=_cycalloc(sizeof(struct Cyc_Core_Opt));_TD9= & Cyc_Kinds_ek;
_T117->v= (struct Cyc_Absyn_Kind*)_TD9;_TD8= (struct Cyc_Core_Opt*)_T117;}_TDA= tvs;_TDB= Cyc_Absyn_new_evar(_TD8,_TDA);_TDC= Cyc_Absyn_al_qual_type;_TDD= Cyc_Absyn_empty_tqual(0U);_TDE= tvs;_TDF= _TDE->v;_TE0= (struct Cyc_List_List*)_TDF;_TE1= 
Cyc_Tcutil_any_bool(_TE0);_TE2= Cyc_Absyn_false_type;_TE3= 
# 286
Cyc_Absyn_fatptr_type(_TD7,_TDB,_TDC,_TDD,_TE1,_TE2);_TE4= 
# 285
Cyc_Unify_unify(_TD1,_TE3);
# 281
if(_TE4)goto _TL84;else{goto _TL87;}_TL87: _TE5= t2;{struct Cyc_Core_Opt*_T117=_cycalloc(sizeof(struct Cyc_Core_Opt));_TE7= & Cyc_Kinds_ek;
# 290
_T117->v= (struct Cyc_Absyn_Kind*)_TE7;_TE6= (struct Cyc_Core_Opt*)_T117;}_TE8= tvs;_TE9= Cyc_Absyn_new_evar(_TE6,_TE8);_TEA= Cyc_Absyn_al_qual_type;_TEB= Cyc_Absyn_string_type(_TE9,_TEA);{struct Cyc_Core_Opt*_T117=_cycalloc(sizeof(struct Cyc_Core_Opt));_TED= & Cyc_Kinds_ek;
_T117->v= (struct Cyc_Absyn_Kind*)_TED;_TEC= (struct Cyc_Core_Opt*)_T117;}_TEE= tvs;_TEF= Cyc_Absyn_new_evar(_TEC,_TEE);_TF0= Cyc_Absyn_al_qual_type;_TF1= Cyc_Absyn_const_tqual(0U);_TF2= tvs;_TF3= _TF2->v;_TF4= (struct Cyc_List_List*)_TF3;_TF5= 
Cyc_Tcutil_any_bool(_TF4);_TF6= Cyc_Absyn_false_type;_TF7= 
# 290
Cyc_Absyn_fatptr_type(_TEB,_TEF,_TF0,_TF1,_TF5,_TF6);_TF8= 
# 289
Cyc_Unify_unify(_TE5,_TF7);
# 281
if(_TF8)goto _TL84;else{goto _TL88;}_TL88: _TF9= t2;{struct Cyc_Core_Opt*_T117=_cycalloc(sizeof(struct Cyc_Core_Opt));_TFB= & Cyc_Kinds_ek;
# 294
_T117->v= (struct Cyc_Absyn_Kind*)_TFB;_TFA= (struct Cyc_Core_Opt*)_T117;}_TFC= tvs;_TFD= Cyc_Absyn_new_evar(_TFA,_TFC);_TFE= Cyc_Absyn_al_qual_type;_TFF= Cyc_Absyn_const_string_type(_TFD,_TFE);{struct Cyc_Core_Opt*_T117=_cycalloc(sizeof(struct Cyc_Core_Opt));_T101= & Cyc_Kinds_ek;
_T117->v= (struct Cyc_Absyn_Kind*)_T101;_T100= (struct Cyc_Core_Opt*)_T117;}_T102= tvs;_T103= Cyc_Absyn_new_evar(_T100,_T102);_T104= Cyc_Absyn_al_qual_type;_T105= Cyc_Absyn_const_tqual(0U);_T106= tvs;_T107= _T106->v;_T108= (struct Cyc_List_List*)_T107;_T109= 
Cyc_Tcutil_any_bool(_T108);_T10A= Cyc_Absyn_false_type;_T10B= 
# 294
Cyc_Absyn_fatptr_type(_TFF,_T103,_T104,_T105,_T109,_T10A);_T10C= 
# 293
Cyc_Unify_unify(_TF9,_T10B);
# 281
if(_T10C)goto _TL84;else{goto _TL89;}
# 297
_TL89:{struct Cyc_Warn_String_Warn_Warg_struct _T117;_T117.tag= 0;({__typeof__(_tag_fat("second argument of main has type ",sizeof(char),34U))_T118=_tag_fat("second argument of main has type ",sizeof(char),34U);_T117.f1= _T118;});_T10D= _T117;}{struct Cyc_Warn_String_Warn_Warg_struct _T117=_T10D;{struct Cyc_Warn_Typ_Warn_Warg_struct _T118;_T118.tag= 2;_T118.f1= t2;_T10E= _T118;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T118=_T10E;{struct Cyc_Warn_String_Warn_Warg_struct _T119;_T119.tag= 0;({__typeof__(_tag_fat(" instead of char??",sizeof(char),19U))_T11A=_tag_fat(" instead of char??",sizeof(char),19U);_T119.f1= _T11A;});_T10F= _T119;}{struct Cyc_Warn_String_Warn_Warg_struct _T119=_T10F;void*_T11A[3];_T11A[0]= & _T117;_T11A[1]= & _T118;_T11A[2]= & _T119;_T110= loc;_T111= _tag_fat(_T11A,sizeof(void*),3);Cyc_Warn_err2(_T110,_T111);}}}goto _TL85;_TL84: _TL85:;}}}goto _TL81;_TL80: _TL81:;}}goto _TL7A;_TL79: _TL7A:;}goto _TL6C;_TL6B: _TL6C:;}}}}}}
# 305
static void Cyc_Tc_tcOneTypedef(struct Cyc_Tcenv_Tenv*te,unsigned loc,struct Cyc_Absyn_Typedefdecl*td){unsigned _T0;struct Cyc_Absyn_Typedefdecl*_T1;struct Cyc_List_List*_T2;struct Cyc_Absyn_Typedefdecl*_T3;struct Cyc_List_List*_T4;struct Cyc_Absyn_Typedefdecl*_T5;void*_T6;unsigned _T7;struct Cyc_Tcenv_Tenv*_T8;struct Cyc_Absyn_Typedefdecl*_T9;struct Cyc_List_List*_TA;struct Cyc_Absyn_Kind*_TB;struct Cyc_Absyn_Kind*_TC;struct Cyc_Absyn_Typedefdecl*_TD;void*_TE;struct Cyc_Absyn_Typedefdecl*_TF;unsigned _T10;struct Cyc_Absyn_Typedefdecl*_T11;struct Cyc_Absyn_Tqual _T12;long _T13;struct Cyc_Absyn_Typedefdecl*_T14;void*_T15;void*_T16;struct Cyc_Absyn_Typedefdecl*_T17;struct Cyc_List_List*_T18;void*_T19;struct Cyc_Absyn_Tvar*_T1A;void*_T1B;int*_T1C;unsigned _T1D;struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*_T1E;struct Cyc_Core_Opt**_T1F;struct Cyc_Absyn_Typedefdecl*_T20;void*_T21;struct Cyc_Warn_String_Warn_Warg_struct _T22;struct Cyc_Warn_Tvar_Warn_Warg_struct _T23;struct Cyc_List_List*_T24;void*_T25;struct Cyc_Warn_String_Warn_Warg_struct _T26;unsigned _T27;struct _fat_ptr _T28;struct Cyc_Core_Opt**_T29;struct Cyc_Core_Opt*_T2A;struct Cyc_Absyn_Kind*_T2B;struct Cyc_Absyn_Kind*_T2C;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T2D;struct Cyc_Core_Opt**_T2E;struct Cyc_Core_Opt**_T2F;struct Cyc_Core_Opt*_T30;struct Cyc_List_List*_T31;_T0= loc;_T1= td;_T2= _T1->tvs;
Cyc_Tcutil_check_unique_tvars(_T0,_T2);_T3= td;_T4= _T3->tvs;
Cyc_Tcutil_add_tvar_identities(_T4);_T5= td;_T6= _T5->defn;
if(_T6==0)goto _TL8A;_T7= loc;_T8= te;_T9= td;_TA= _T9->tvs;_TB= & Cyc_Kinds_ak;_TC= (struct Cyc_Absyn_Kind*)_TB;_TD= td;_TE= _TD->defn;
Cyc_Tctyp_check_type(_T7,_T8,_TA,_TC,0,1,_TE);_TF= td;_T10= loc;_T11= td;_T12= _T11->tq;_T13= _T12.print_const;_T14= td;_T15= _T14->defn;_T16= 
_check_null(_T15);({__typeof__(Cyc_Tcutil_extract_const_from_typedef(_T10,_T13,_T16))_T32=Cyc_Tcutil_extract_const_from_typedef(_T10,_T13,_T16);_TF->tq.real_const= _T32;});goto _TL8B;_TL8A: _TL8B: _T17= td;{
# 314
struct Cyc_List_List*tvs=_T17->tvs;_TL8F: if(tvs!=0)goto _TL8D;else{goto _TL8E;}
_TL8D: _T18= tvs;_T19= _T18->hd;_T1A= (struct Cyc_Absyn_Tvar*)_T19;_T1B= _T1A->kind;{void*_T32=Cyc_Kinds_compress_kb(_T1B);struct Cyc_Absyn_Kind*_T33;void*_T34;_T1C= (int*)_T32;_T1D= *_T1C;switch(_T1D){case 1:{struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*_T35=(struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*)_T32;_T1E= (struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*)_T32;_T1F= & _T1E->f1;_T34= (struct Cyc_Core_Opt**)_T1F;}{struct Cyc_Core_Opt**f=_T34;_T20= td;_T21= _T20->defn;
# 317
if(_T21==0)goto _TL91;{struct Cyc_Warn_String_Warn_Warg_struct _T35;_T35.tag= 0;
({__typeof__(_tag_fat("type variable ",sizeof(char),15U))_T36=_tag_fat("type variable ",sizeof(char),15U);_T35.f1= _T36;});_T22= _T35;}{struct Cyc_Warn_String_Warn_Warg_struct _T35=_T22;{struct Cyc_Warn_Tvar_Warn_Warg_struct _T36;_T36.tag= 7;_T24= tvs;_T25= _T24->hd;_T36.f1= (struct Cyc_Absyn_Tvar*)_T25;_T23= _T36;}{struct Cyc_Warn_Tvar_Warn_Warg_struct _T36=_T23;{struct Cyc_Warn_String_Warn_Warg_struct _T37;_T37.tag= 0;({__typeof__(_tag_fat(" is not used in typedef",sizeof(char),24U))_T38=_tag_fat(" is not used in typedef",sizeof(char),24U);_T37.f1= _T38;});_T26= _T37;}{struct Cyc_Warn_String_Warn_Warg_struct _T37=_T26;void*_T38[3];_T38[0]= & _T35;_T38[1]= & _T36;_T38[2]= & _T37;_T27= loc;_T28= _tag_fat(_T38,sizeof(void*),3);Cyc_Warn_warn2(_T27,_T28);}}}goto _TL92;_TL91: _TL92: _T29= f;{struct Cyc_Core_Opt*_T35=_cycalloc(sizeof(struct Cyc_Core_Opt));_T2B= & Cyc_Kinds_bk;_T2C= (struct Cyc_Absyn_Kind*)_T2B;
({__typeof__(Cyc_Kinds_kind_to_bound(_T2C))_T36=Cyc_Kinds_kind_to_bound(_T2C);_T35->v= _T36;});_T2A= (struct Cyc_Core_Opt*)_T35;}*_T29= _T2A;goto _LL0;}case 2:{struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T35=(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T32;_T2D= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T32;_T2E= & _T2D->f1;_T34= (struct Cyc_Core_Opt**)_T2E;_T33= _T35->f2;}{struct Cyc_Core_Opt**f=(struct Cyc_Core_Opt**)_T34;struct Cyc_Absyn_Kind*k=_T33;_T2F= f;{struct Cyc_Core_Opt*_T35=_cycalloc(sizeof(struct Cyc_Core_Opt));
# 322
({__typeof__(Cyc_Kinds_kind_to_bound(k))_T36=Cyc_Kinds_kind_to_bound(k);_T35->v= _T36;});_T30= (struct Cyc_Core_Opt*)_T35;}*_T2F= _T30;goto _LL0;}default: goto _TL8C;}_LL0:;}_TL8C: _T31= tvs;
# 314
tvs= _T31->tl;goto _TL8F;_TL8E:;}}
# 375
static void Cyc_Tc_tcTypedefdecl(struct Cyc_Tcenv_Tenv*te,unsigned loc,struct Cyc_Absyn_Typedefdecl*td){struct Cyc_Absyn_Typedefdecl*_T0;long _T1;struct Cyc_String_pa_PrintArg_struct _T2;struct _tuple1*_T3;struct _tuple1 _T4;struct _fat_ptr*_T5;struct Cyc___cycFILE*_T6;struct _fat_ptr _T7;struct _fat_ptr _T8;struct Cyc_Absyn_Typedefdecl**(*_T9)(struct Cyc_Dict_Dict,struct _tuple1*);void**(*_TA)(struct Cyc_Dict_Dict,void*);struct Cyc_Tcenv_Tenv*_TB;struct Cyc_Tcenv_Genv*_TC;struct Cyc_Dict_Dict _TD;struct _tuple1*_TE;struct Cyc_Tcenv_Tenv*_TF;struct Cyc_Tcenv_Genv*_T10;struct Cyc_Dict_Dict(*_T11)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Typedefdecl*);struct Cyc_Dict_Dict(*_T12)(struct Cyc_Dict_Dict,void*,void*);struct Cyc_Tcenv_Tenv*_T13;struct Cyc_Tcenv_Genv*_T14;struct Cyc_Dict_Dict _T15;struct _tuple1*_T16;struct Cyc_Absyn_Typedefdecl*_T17;struct Cyc_Tcenv_Tenv*_T18;struct Cyc_Tcenv_Genv*_T19;struct Cyc_Dict_Dict(*_T1A)(struct Cyc_Dict_Dict,struct _tuple1*);struct Cyc_Dict_Dict(*_T1B)(struct Cyc_Dict_Dict,void*);struct Cyc_Tcenv_Tenv*_T1C;struct Cyc_Tcenv_Genv*_T1D;struct Cyc_Dict_Dict _T1E;struct _tuple1*_T1F;struct Cyc_Absyn_Typedefdecl*_T20;struct Cyc_Absyn_Typedefdecl**_T21;struct Cyc_Absyn_Typedefdecl*_T22;unsigned _T23;struct _fat_ptr*_T24;struct _fat_ptr*_T25;struct Cyc_Absyn_Typedefdecl*_T26;unsigned _T27;struct Cyc_Tcenv_Tenv*_T28;struct Cyc_Tcenv_Genv*_T29;struct Cyc_Dict_Dict(*_T2A)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Typedefdecl*);struct Cyc_Dict_Dict(*_T2B)(struct Cyc_Dict_Dict,void*,void*);struct Cyc_Tcenv_Tenv*_T2C;struct Cyc_Tcenv_Genv*_T2D;struct Cyc_Dict_Dict _T2E;struct _tuple1*_T2F;struct Cyc_Absyn_Typedefdecl*_T30;_T0= td;{
struct _tuple1*q=_T0->name;_T1= Cyc_Tc_debug;
if(!_T1)goto _TL93;{struct Cyc_String_pa_PrintArg_struct _T31;_T31.tag= 0;_T3= q;_T4= *_T3;_T5= _T4.f1;
_T31.f1= *_T5;_T2= _T31;}{struct Cyc_String_pa_PrintArg_struct _T31=_T2;void*_T32[1];_T32[0]= & _T31;_T6= Cyc_stderr;_T7= _tag_fat("type-checking typedefdecl %s",sizeof(char),29U);_T8= _tag_fat(_T32,sizeof(void*),1);Cyc_fprintf(_T6,_T7,_T8);}goto _TL94;_TL93: _TL94: _TA= Cyc_Dict_lookup_opt;{
# 382
struct Cyc_Absyn_Typedefdecl**(*_T31)(struct Cyc_Dict_Dict,struct _tuple1*)=(struct Cyc_Absyn_Typedefdecl**(*)(struct Cyc_Dict_Dict,struct _tuple1*))_TA;_T9= _T31;}_TB= te;_TC= _TB->ae;_TD= _TC->typedefs;_TE= q;{struct Cyc_Absyn_Typedefdecl**_T31=_T9(_TD,_TE);struct Cyc_Absyn_Typedefdecl**_T32;if(_T31!=0)goto _TL95;
# 385
Cyc_Tc_tcOneTypedef(te,loc,td);_TF= te;_T10= _TF->ae;_T12= Cyc_Dict_insert;{
# 387
struct Cyc_Dict_Dict(*_T33)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Typedefdecl*)=(struct Cyc_Dict_Dict(*)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Typedefdecl*))_T12;_T11= _T33;}_T13= te;_T14= _T13->ae;_T15= _T14->typedefs;_T16= q;_T17= td;({__typeof__(_T11(_T15,_T16,_T17))_T33=_T11(_T15,_T16,_T17);_T10->typedefs= _T33;});goto _LL0;_TL95: _T32= _T31;{struct Cyc_Absyn_Typedefdecl**tdold=_T32;_T18= te;_T19= _T18->ae;_T1B= Cyc_Dict_delete;{
# 390
struct Cyc_Dict_Dict(*_T33)(struct Cyc_Dict_Dict,struct _tuple1*)=(struct Cyc_Dict_Dict(*)(struct Cyc_Dict_Dict,struct _tuple1*))_T1B;_T1A= _T33;}_T1C= te;_T1D= _T1C->ae;_T1E= _T1D->typedefs;_T1F= q;({__typeof__(_T1A(_T1E,_T1F))_T33=_T1A(_T1E,_T1F);_T19->typedefs= _T33;});
Cyc_Tc_tcOneTypedef(te,loc,td);{
struct _fat_ptr msg=_tag_fat("Typedef redeclaration",sizeof(char),22U);_T20= td;_T21= tdold;_T22= *_T21;_T23= loc;_T24= & msg;_T25= (struct _fat_ptr*)_T24;{
struct Cyc_Absyn_Typedefdecl*td2=Cyc_Tcdecl_merge_typedefdecl(_T20,_T22,_T23,_T25);_T26= td2;_T27= (unsigned)_T26;
if(!_T27)goto _TL97;_T28= te;_T29= _T28->ae;_T2B= Cyc_Dict_insert;{
struct Cyc_Dict_Dict(*_T33)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Typedefdecl*)=(struct Cyc_Dict_Dict(*)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Typedefdecl*))_T2B;_T2A= _T33;}_T2C= te;_T2D= _T2C->ae;_T2E= _T2D->typedefs;_T2F= q;_T30= td2;({__typeof__(_T2A(_T2E,_T2F,_T30))_T33=_T2A(_T2E,_T2F,_T30);_T29->typedefs= _T33;});goto _TL98;_TL97: _TL98: goto _LL0;}}}_LL0:;}}}
# 401
static void Cyc_Tc_tcAggrImpl(struct Cyc_Tcenv_Tenv*te,unsigned loc,enum Cyc_Absyn_AggrKind str_or_union,struct Cyc_List_List*flagged_tvs,struct Cyc_List_List*effc,struct Cyc_List_List**qb,struct Cyc_List_List*fields){struct Cyc_List_List*(*_T0)(struct Cyc_Absyn_Tvar*(*)(struct _tuple15*),struct Cyc_List_List*);struct Cyc_List_List*(*_T1)(void*(*)(void*),struct Cyc_List_List*);struct Cyc_Absyn_Tvar*(*_T2)(struct _tuple15*);void*(*_T3)(struct _tuple0*);struct Cyc_List_List*_T4;struct Cyc_List_List*_T5;int*_T6;unsigned _T7;void*_T8;void*_T9;void*_TA;void*_TB;unsigned _TC;struct Cyc_Tcenv_Tenv*_TD;struct Cyc_List_List*_TE;struct Cyc_Absyn_Kind*_TF;struct Cyc_Absyn_Kind*_T10;void*_T11;unsigned _T12;struct Cyc_Tcenv_Tenv*_T13;struct Cyc_List_List*_T14;struct Cyc_Absyn_Kind*_T15;struct Cyc_Absyn_Kind*_T16;void*_T17;void*_T18;unsigned _T19;struct Cyc_Tcenv_Tenv*_T1A;struct Cyc_List_List*_T1B;struct Cyc_Absyn_Kind*_T1C;struct Cyc_Absyn_Kind*_T1D;void*_T1E;struct Cyc_List_List*_T1F;struct Cyc_List_List*_T20;void*_T21;long(*_T22)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*);long(*_T23)(int(*)(void*,void*),struct Cyc_List_List*,void*);int(*_T24)(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_List_List*_T25;struct _fat_ptr*_T26;long _T27;struct Cyc_Warn_String_Warn_Warg_struct _T28;struct Cyc_Warn_String_Warn_Warg_struct _T29;struct _fat_ptr*_T2A;unsigned _T2B;struct _fat_ptr _T2C;struct _fat_ptr*_T2D;struct _fat_ptr _T2E;struct _fat_ptr _T2F;int _T30;struct Cyc_List_List*_T31;struct _RegionHandle*_T32;struct Cyc_Absyn_Kind*_T33;enum Cyc_Absyn_AggrKind _T34;int _T35;struct Cyc_List_List*_T36;struct Cyc_List_List*_T37;enum Cyc_Absyn_AggrKind _T38;int _T39;struct Cyc_Absyn_Kind*_T3A;struct Cyc_List_List*_T3B;void*_T3C;struct Cyc_Absyn_Aggrfield*_T3D;unsigned _T3E;struct Cyc_List_List*_T3F;void*_T40;struct Cyc_Absyn_Aggrfield*_T41;struct Cyc_Absyn_Tqual _T42;long _T43;void*_T44;struct Cyc_Absyn_Exp*_T45;unsigned _T46;enum Cyc_Absyn_AggrKind _T47;int _T48;struct Cyc_Warn_String_Warn_Warg_struct _T49;unsigned _T4A;struct _fat_ptr _T4B;long _T4C;struct Cyc_Warn_String_Warn_Warg_struct _T4D;struct Cyc_Warn_Typ_Warn_Warg_struct _T4E;struct Cyc_Absyn_Exp*_T4F;void*_T50;struct Cyc_Warn_String_Warn_Warg_struct _T51;struct Cyc_Absyn_Exp*_T52;unsigned _T53;struct _fat_ptr _T54;struct Cyc_Absyn_Exp*_T55;unsigned _T56;struct Cyc_Tcenv_Tenv*_T57;struct Cyc_List_List*_T58;struct Cyc_List_List**_T59;struct Cyc_Absyn_Kind*_T5A;struct Cyc_Absyn_Kind*_T5B;struct Cyc_Absyn_ValueofType_Absyn_Type_struct*_T5C;void*_T5D;struct Cyc_AssnDef_AssnMap _T5E;void*_T5F;struct Cyc_AssnDef_False_AssnDef_Assn_struct*_T60;struct Cyc_AssnDef_False_AssnDef_Assn_struct*_T61;void*_T62;long _T63;struct Cyc_Warn_String_Warn_Warg_struct _T64;struct Cyc_Absyn_Exp*_T65;unsigned _T66;struct _fat_ptr _T67;void*_T68;struct Cyc_List_List*_T69;void*_T6A;void*_T6B;long _T6C;struct Cyc_Warn_String_Warn_Warg_struct _T6D;struct Cyc_Warn_String_Warn_Warg_struct _T6E;struct Cyc_Warn_String_Warn_Warg_struct _T6F;struct Cyc_Warn_String_Warn_Warg_struct _T70;struct Cyc_List_List*_T71;void*_T72;struct Cyc_Absyn_Exp*_T73;unsigned _T74;struct _fat_ptr _T75;struct Cyc_List_List*_T76;struct Cyc_List_List*_T77;struct _RegionHandle*_T78;struct Cyc_Warn_String_Warn_Warg_struct _T79;unsigned _T7A;struct _fat_ptr _T7B;struct Cyc_List_List*_T7C;struct _RegionHandle _T7D=_new_region(0U,"uprev_rgn");struct _RegionHandle*uprev_rgn=& _T7D;_push_region(uprev_rgn);_T1= Cyc_List_map;{
# 407
struct Cyc_List_List*(*_T7E)(struct Cyc_Absyn_Tvar*(*)(struct _tuple15*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct Cyc_Absyn_Tvar*(*)(struct _tuple15*),struct Cyc_List_List*))_T1;_T0= _T7E;}_T3= Cyc_Core_fst;{struct Cyc_Absyn_Tvar*(*_T7E)(struct _tuple15*)=(struct Cyc_Absyn_Tvar*(*)(struct _tuple15*))_T3;_T2= _T7E;}_T4= flagged_tvs;{struct Cyc_List_List*tvs=_T0(_T2,_T4);
_TL9C: if(effc!=0)goto _TL9A;else{goto _TL9B;}
_TL9A: _T5= effc;{void*_T7E=_T5->hd;void*_T7F;void*_T80;_T6= (int*)_T7E;_T7= *_T6;switch(_T7){case 1:{struct Cyc_Absyn_DisjointConstraint_Absyn_EffConstraint_struct*_T81=(struct Cyc_Absyn_DisjointConstraint_Absyn_EffConstraint_struct*)_T7E;_T8= _T81->f1;_T80= (void*)_T8;_T9= _T81->f2;_T7F= (void*)_T9;}{void*e1=_T80;void*e2=_T7F;_T80= e1;_T7F= e2;goto _LL4;}case 2:{struct Cyc_Absyn_SubsetConstraint_Absyn_EffConstraint_struct*_T81=(struct Cyc_Absyn_SubsetConstraint_Absyn_EffConstraint_struct*)_T7E;_TA= _T81->f1;_T80= (void*)_TA;_TB= _T81->f2;_T7F= (void*)_TB;}_LL4: {void*e1=_T80;void*e2=_T7F;_TC= loc;_TD= te;_TE= tvs;_TF= & Cyc_Kinds_ek;_T10= (struct Cyc_Absyn_Kind*)_TF;_T11= e1;
# 413
Cyc_Tctyp_check_type(_TC,_TD,_TE,_T10,0,0,_T11);_T12= loc;_T13= te;_T14= tvs;_T15= & Cyc_Kinds_ek;_T16= (struct Cyc_Absyn_Kind*)_T15;_T17= e2;
Cyc_Tctyp_check_type(_T12,_T13,_T14,_T16,0,0,_T17);goto _LL0;}default:{struct Cyc_Absyn_SingleConstraint_Absyn_EffConstraint_struct*_T81=(struct Cyc_Absyn_SingleConstraint_Absyn_EffConstraint_struct*)_T7E;_T18= _T81->f1;_T80= (void*)_T18;}{void*e1=_T80;_T19= loc;_T1A= te;_T1B= tvs;_T1C= & Cyc_Kinds_ek;_T1D= (struct Cyc_Absyn_Kind*)_T1C;_T1E= e1;
# 417
Cyc_Tctyp_check_type(_T19,_T1A,_T1B,_T1D,0,0,_T1E);goto _LL0;}}_LL0:;}_T1F= effc;
# 408
effc= _T1F->tl;goto _TL9C;_TL9B: {
# 422
struct Cyc_List_List*prev_fields=0;
struct Cyc_List_List*prev_requires=0;
struct Cyc_List_List*fs=fields;_TLA1: if(fs!=0)goto _TL9F;else{goto _TLA0;}
_TL9F: _T20= fs;_T21= _T20->hd;{struct Cyc_Absyn_Aggrfield*_T7E=(struct Cyc_Absyn_Aggrfield*)_T21;struct Cyc_Absyn_Exp*_T7F;struct Cyc_List_List*_T80;struct Cyc_Absyn_Exp*_T81;void*_T82;struct Cyc_Absyn_Tqual _T83;struct _fat_ptr*_T84;{struct Cyc_Absyn_Aggrfield _T85=*_T7E;_T84= _T85.name;_T83= _T85.tq;_T82= _T85.type;_T81= _T85.width;_T80= _T85.attributes;_T7F= _T85.requires_clause;}{struct _fat_ptr*fn=_T84;struct Cyc_Absyn_Tqual tq=_T83;void*t=_T82;struct Cyc_Absyn_Exp*width=_T81;struct Cyc_List_List*atts=_T80;struct Cyc_Absyn_Exp*requires_clause=_T7F;_T23= Cyc_List_mem;{
# 427
long(*_T85)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*)=(long(*)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*))_T23;_T22= _T85;}_T24= Cyc_strptrcmp;_T25= prev_fields;_T26= fn;_T27= _T22(_T24,_T25,_T26);if(!_T27)goto _TLA2;{struct Cyc_Warn_String_Warn_Warg_struct _T85;_T85.tag= 0;
({__typeof__(_tag_fat("duplicate member ",sizeof(char),18U))_T86=_tag_fat("duplicate member ",sizeof(char),18U);_T85.f1= _T86;});_T28= _T85;}{struct Cyc_Warn_String_Warn_Warg_struct _T85=_T28;{struct Cyc_Warn_String_Warn_Warg_struct _T86;_T86.tag= 0;_T2A= fn;_T86.f1= *_T2A;_T29= _T86;}{struct Cyc_Warn_String_Warn_Warg_struct _T86=_T29;void*_T87[2];_T87[0]= & _T85;_T87[1]= & _T86;_T2B= loc;_T2C= _tag_fat(_T87,sizeof(void*),2);Cyc_Warn_err2(_T2B,_T2C);}}goto _TLA3;_TLA2: _TLA3: _T2D= fn;_T2E= *_T2D;_T2F= 
# 431
_tag_fat("",sizeof(char),1U);_T30= Cyc_strcmp(_T2E,_T2F);if(_T30==0)goto _TLA4;_T32= uprev_rgn;{struct Cyc_List_List*_T85=_region_malloc(_T32,0U,sizeof(struct Cyc_List_List));
_T85->hd= fn;_T85->tl= prev_fields;_T31= (struct Cyc_List_List*)_T85;}prev_fields= _T31;goto _TLA5;_TLA4: _TLA5: _T33= & Cyc_Kinds_mk;{
# 434
struct Cyc_Absyn_Kind*field_kind=(struct Cyc_Absyn_Kind*)_T33;_T34= str_or_union;_T35= (int)_T34;
# 438
if(_T35==1)goto _TLA8;else{goto _TLA9;}_TLA9: _T36= fs;_T37= _T36->tl;if(_T37==0)goto _TLAA;else{goto _TLA6;}_TLAA: _T38= str_or_union;_T39= (int)_T38;if(_T39==0)goto _TLA8;else{goto _TLA6;}
_TLA8: _T3A= & Cyc_Kinds_ak;field_kind= (struct Cyc_Absyn_Kind*)_T3A;goto _TLA7;_TLA6: _TLA7:
 Cyc_Tctyp_check_type_with_bounds(loc,te,flagged_tvs,qb,field_kind,0,0,t);_T3B= fs;_T3C= _T3B->hd;_T3D= (struct Cyc_Absyn_Aggrfield*)_T3C;_T3E= loc;_T3F= fs;_T40= _T3F->hd;_T41= (struct Cyc_Absyn_Aggrfield*)_T40;_T42= _T41->tq;_T43= _T42.print_const;_T44= t;
# 442
({__typeof__(Cyc_Tcutil_extract_const_from_typedef(_T3E,_T43,_T44))_T85=Cyc_Tcutil_extract_const_from_typedef(_T3E,_T43,_T44);_T3D->tq.real_const= _T85;});
# 445
Cyc_Tcutil_check_bitfield(loc,t,width,fn);_T45= requires_clause;_T46= (unsigned)_T45;
# 447
if(!_T46)goto _TLAB;_T47= str_or_union;_T48= (int)_T47;
if(_T48==1)goto _TLAD;{struct Cyc_Warn_String_Warn_Warg_struct _T85;_T85.tag= 0;
({__typeof__(_tag_fat("@requires clauses are allowed only on union members",sizeof(char),52U))_T86=_tag_fat("@requires clauses are allowed only on union members",sizeof(char),52U);_T85.f1= _T86;});_T49= _T85;}{struct Cyc_Warn_String_Warn_Warg_struct _T85=_T49;void*_T86[1];_T86[0]= & _T85;_T4A= loc;_T4B= _tag_fat(_T86,sizeof(void*),1);Cyc_Warn_err2(_T4A,_T4B);}goto _TLAE;_TLAD: _TLAE:{
struct Cyc_Tcenv_Tenv*te2=Cyc_Tcenv_allow_valueof(te);
Cyc_Tcexp_tcExp(te2,0,requires_clause);_T4C= 
Cyc_Tcutil_is_integral(requires_clause);if(_T4C)goto _TLAF;else{goto _TLB1;}
_TLB1:{struct Cyc_Warn_String_Warn_Warg_struct _T85;_T85.tag= 0;({__typeof__(_tag_fat("@requires clause has type ",sizeof(char),27U))_T86=_tag_fat("@requires clause has type ",sizeof(char),27U);_T85.f1= _T86;});_T4D= _T85;}{struct Cyc_Warn_String_Warn_Warg_struct _T85=_T4D;{struct Cyc_Warn_Typ_Warn_Warg_struct _T86;_T86.tag= 2;_T4F= requires_clause;_T50= _T4F->topt;
({__typeof__(_check_null(_T50))_T87=_check_null(_T50);_T86.f1= _T87;});_T4E= _T86;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T86=_T4E;{struct Cyc_Warn_String_Warn_Warg_struct _T87;_T87.tag= 0;({__typeof__(_tag_fat(" instead of integral type",sizeof(char),26U))_T88=_tag_fat(" instead of integral type",sizeof(char),26U);_T87.f1= _T88;});_T51= _T87;}{struct Cyc_Warn_String_Warn_Warg_struct _T87=_T51;void*_T88[3];_T88[0]= & _T85;_T88[1]= & _T86;_T88[2]= & _T87;_T52= requires_clause;_T53= _T52->loc;_T54= _tag_fat(_T88,sizeof(void*),3);Cyc_Warn_err2(_T53,_T54);}}}goto _TLB0;
# 456
_TLAF: _T55= requires_clause;_T56= _T55->loc;_T57= te;_T58= flagged_tvs;_T59= qb;_T5A= & Cyc_Kinds_ik;_T5B= (struct Cyc_Absyn_Kind*)_T5A;{struct Cyc_Absyn_ValueofType_Absyn_Type_struct*_T85=_cycalloc(sizeof(struct Cyc_Absyn_ValueofType_Absyn_Type_struct));_T85->tag= 9;
_T85->f1= requires_clause;_T5C= (struct Cyc_Absyn_ValueofType_Absyn_Type_struct*)_T85;}_T5D= (void*)_T5C;
# 456
Cyc_Tctyp_check_type_with_bounds(_T56,_T57,_T58,_T59,_T5B,0,0,_T5D);{
# 459
struct Cyc_AssnDef_AssnMap assnmap=Cyc_Vcgen_clause2assn(requires_clause);_T5E= assnmap;{
void*req_assn=_T5E.assn;_T5F= req_assn;_T60= & Cyc_AssnDef_false_assn;_T61= (struct Cyc_AssnDef_False_AssnDef_Assn_struct*)_T60;_T62= (void*)_T61;_T63= 
# 462
Cyc_PrattProver_constraint_prove(_T5F,_T62);if(!_T63)goto _TLB2;{struct Cyc_Warn_String_Warn_Warg_struct _T85;_T85.tag= 0;
({__typeof__(_tag_fat("@requires clause may be unsatisfiable",sizeof(char),38U))_T86=_tag_fat("@requires clause may be unsatisfiable",sizeof(char),38U);_T85.f1= _T86;});_T64= _T85;}{struct Cyc_Warn_String_Warn_Warg_struct _T85=_T64;void*_T86[1];_T86[0]= & _T85;_T65= requires_clause;_T66= _T65->loc;_T67= _tag_fat(_T86,sizeof(void*),1);Cyc_Warn_err2(_T66,_T67);}goto _TLB3;_TLB2: _TLB3:{
# 468
struct Cyc_List_List*p=prev_requires;_TLB7: if(p!=0)goto _TLB5;else{goto _TLB6;}
_TLB5: _T68= req_assn;_T69= p;_T6A= _T69->hd;_T6B= Cyc_AssnDef_not(_T6A);_T6C= Cyc_PrattProver_constraint_prove(_T68,_T6B);if(_T6C)goto _TLB8;else{goto _TLBA;}
_TLBA:{struct Cyc_Warn_String_Warn_Warg_struct _T85;_T85.tag= 0;({__typeof__(_tag_fat("@requires clause ",sizeof(char),18U))_T86=_tag_fat("@requires clause ",sizeof(char),18U);_T85.f1= _T86;});_T6D= _T85;}{struct Cyc_Warn_String_Warn_Warg_struct _T85=_T6D;{struct Cyc_Warn_String_Warn_Warg_struct _T86;_T86.tag= 0;({__typeof__(Cyc_AssnDef_assn2string(req_assn))_T87=Cyc_AssnDef_assn2string(req_assn);_T86.f1= _T87;});_T6E= _T86;}{struct Cyc_Warn_String_Warn_Warg_struct _T86=_T6E;{struct Cyc_Warn_String_Warn_Warg_struct _T87;_T87.tag= 0;
({__typeof__(_tag_fat(" may overlap with previous clauses ",sizeof(char),36U))_T88=_tag_fat(" may overlap with previous clauses ",sizeof(char),36U);_T87.f1= _T88;});_T6F= _T87;}{struct Cyc_Warn_String_Warn_Warg_struct _T87=_T6F;{struct Cyc_Warn_String_Warn_Warg_struct _T88;_T88.tag= 0;_T71= p;_T72= _T71->hd;({__typeof__(Cyc_AssnDef_assn2string(_T72))_T89=Cyc_AssnDef_assn2string(_T72);_T88.f1= _T89;});_T70= _T88;}{struct Cyc_Warn_String_Warn_Warg_struct _T88=_T70;void*_T89[4];_T89[0]= & _T85;_T89[1]= & _T86;_T89[2]= & _T87;_T89[3]= & _T88;_T73= requires_clause;_T74= _T73->loc;_T75= _tag_fat(_T89,sizeof(void*),4);Cyc_Warn_err2(_T74,_T75);}}}}goto _TLB9;_TLB8: _TLB9: _T76= p;
# 468
p= _T76->tl;goto _TLB7;_TLB6:;}_T78= uprev_rgn;{struct Cyc_List_List*_T85=_region_malloc(_T78,0U,sizeof(struct Cyc_List_List));
# 473
_T85->hd= req_assn;_T85->tl= prev_requires;_T77= (struct Cyc_List_List*)_T85;}prev_requires= _T77;}}_TLB0:;}goto _TLAC;
# 476
_TLAB: if(prev_requires==0)goto _TLBB;{struct Cyc_Warn_String_Warn_Warg_struct _T85;_T85.tag= 0;
({__typeof__(_tag_fat("if one field has a @requires clause, they all must",sizeof(char),51U))_T86=_tag_fat("if one field has a @requires clause, they all must",sizeof(char),51U);_T85.f1= _T86;});_T79= _T85;}{struct Cyc_Warn_String_Warn_Warg_struct _T85=_T79;void*_T86[1];_T86[0]= & _T85;_T7A= loc;_T7B= _tag_fat(_T86,sizeof(void*),1);Cyc_Warn_err2(_T7A,_T7B);}goto _TLBC;_TLBB: _TLBC: _TLAC:;}}}_T7C= fs;
# 424
fs= _T7C->tl;goto _TLA1;_TLA0:;}}_pop_region();}
# 481
static void Cyc_Tc_rule_out_memkind(unsigned loc,struct _tuple1*n,struct Cyc_List_List*tvs){struct Cyc_List_List*_T0;void*_T1;struct Cyc_Absyn_Tvar*_T2;void*_T3;int*_T4;unsigned _T5;struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*_T6;struct Cyc_Core_Opt**_T7;struct Cyc_Core_Opt**_T8;struct Cyc_Core_Opt*_T9;struct Cyc_Absyn_Kind*_TA;struct Cyc_Absyn_Kind*_TB;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_TC;struct Cyc_Absyn_Kind*_TD;struct Cyc_Absyn_Kind*_TE;enum Cyc_Absyn_KindQual _TF;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T10;struct Cyc_Core_Opt**_T11;struct Cyc_Absyn_Kind*_T12;struct Cyc_Core_Opt**_T13;struct Cyc_Core_Opt*_T14;struct Cyc_Absyn_Kind*_T15;struct Cyc_Absyn_Kind*_T16;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T17;struct Cyc_Core_Opt**_T18;struct Cyc_Core_Opt**_T19;struct Cyc_Core_Opt*_T1A;struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*_T1B;struct Cyc_Absyn_Kind*_T1C;struct Cyc_Absyn_Kind*_T1D;enum Cyc_Absyn_KindQual _T1E;struct Cyc_Absyn_Kind*_T1F;struct Cyc_Warn_String_Warn_Warg_struct _T20;struct Cyc_Warn_Qvar_Warn_Warg_struct _T21;struct Cyc_Warn_String_Warn_Warg_struct _T22;struct Cyc_Warn_Tvar_Warn_Warg_struct _T23;struct Cyc_List_List*_T24;void*_T25;struct Cyc_Warn_String_Warn_Warg_struct _T26;struct Cyc_Warn_Kind_Warn_Warg_struct _T27;struct Cyc_Absyn_Kind*_T28;unsigned _T29;struct _fat_ptr _T2A;struct Cyc_List_List*_T2B;
struct Cyc_List_List*tvs2=tvs;_TLC0: if(tvs2!=0)goto _TLBE;else{goto _TLBF;}
_TLBE: _T0= tvs2;_T1= _T0->hd;_T2= (struct Cyc_Absyn_Tvar*)_T1;_T3= _T2->kind;{void*_T2C=Cyc_Kinds_compress_kb(_T3);struct Cyc_Absyn_Kind*_T2D;enum Cyc_Absyn_AliasHint _T2E;void*_T2F;_T4= (int*)_T2C;_T5= *_T4;switch(_T5){case 1:{struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*_T30=(struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*)_T2C;_T6= (struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*)_T2C;_T7= & _T6->f1;_T2F= (struct Cyc_Core_Opt**)_T7;}{struct Cyc_Core_Opt**f=_T2F;_T8= f;{struct Cyc_Core_Opt*_T30=_cycalloc(sizeof(struct Cyc_Core_Opt));_TA= & Cyc_Kinds_bk;_TB= (struct Cyc_Absyn_Kind*)_TA;
# 485
({__typeof__(Cyc_Kinds_kind_to_bound(_TB))_T31=Cyc_Kinds_kind_to_bound(_TB);_T30->v= _T31;});_T9= (struct Cyc_Core_Opt*)_T30;}*_T8= _T9;goto _TLBD;}case 2: _TC= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T2C;_TD= _TC->f2;_TE= (struct Cyc_Absyn_Kind*)_TD;_TF= _TE->kind;if(_TF!=Cyc_Absyn_MemKind)goto _TLC2;{struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T30=(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T2C;_T10= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T2C;_T11= & _T10->f1;_T2F= (struct Cyc_Core_Opt**)_T11;_T12= _T30->f2;{struct Cyc_Absyn_Kind _T31=*_T12;_T2E= _T31.aliashint;}}{struct Cyc_Core_Opt**f=_T2F;enum Cyc_Absyn_AliasHint a=_T2E;_T13= f;{struct Cyc_Core_Opt*_T30=_cycalloc(sizeof(struct Cyc_Core_Opt));_T15= & Cyc_Kinds_bk;_T16= (struct Cyc_Absyn_Kind*)_T15;
# 492
({__typeof__(Cyc_Kinds_kind_to_bound(_T16))_T31=Cyc_Kinds_kind_to_bound(_T16);_T30->v= _T31;});_T14= (struct Cyc_Core_Opt*)_T30;}*_T13= _T14;goto _TLBD;}_TLC2:{struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T30=(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T2C;_T17= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T2C;_T18= & _T17->f1;_T2F= (struct Cyc_Core_Opt**)_T18;_T2D= _T30->f2;}{struct Cyc_Core_Opt**f=(struct Cyc_Core_Opt**)_T2F;struct Cyc_Absyn_Kind*k=_T2D;_T19= f;{struct Cyc_Core_Opt*_T30=_cycalloc(sizeof(struct Cyc_Core_Opt));
# 499
({__typeof__(Cyc_Kinds_kind_to_bound(k))_T31=Cyc_Kinds_kind_to_bound(k);_T30->v= _T31;});_T1A= (struct Cyc_Core_Opt*)_T30;}*_T19= _T1A;goto _TLBD;}default: _T1B= (struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*)_T2C;_T1C= _T1B->f1;_T1D= (struct Cyc_Absyn_Kind*)_T1C;_T1E= _T1D->kind;if(_T1E!=Cyc_Absyn_MemKind)goto _TLC4;{struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*_T30=(struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*)_T2C;_T1F= _T30->f1;{struct Cyc_Absyn_Kind _T31=*_T1F;_T2E= _T31.aliashint;}}{enum Cyc_Absyn_AliasHint a=_T2E;{struct Cyc_Warn_String_Warn_Warg_struct _T30;_T30.tag= 0;
# 502
({__typeof__(_tag_fat("type ",sizeof(char),6U))_T31=_tag_fat("type ",sizeof(char),6U);_T30.f1= _T31;});_T20= _T30;}{struct Cyc_Warn_String_Warn_Warg_struct _T30=_T20;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T31;_T31.tag= 1;_T31.f1= n;_T21= _T31;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T31=_T21;{struct Cyc_Warn_String_Warn_Warg_struct _T32;_T32.tag= 0;({__typeof__(_tag_fat(" attempts to abstract type variable ",sizeof(char),37U))_T33=_tag_fat(" attempts to abstract type variable ",sizeof(char),37U);_T32.f1= _T33;});_T22= _T32;}{struct Cyc_Warn_String_Warn_Warg_struct _T32=_T22;{struct Cyc_Warn_Tvar_Warn_Warg_struct _T33;_T33.tag= 7;_T24= tvs2;_T25= _T24->hd;_T33.f1= (struct Cyc_Absyn_Tvar*)_T25;_T23= _T33;}{struct Cyc_Warn_Tvar_Warn_Warg_struct _T33=_T23;{struct Cyc_Warn_String_Warn_Warg_struct _T34;_T34.tag= 0;({__typeof__(_tag_fat(" of kind ",sizeof(char),10U))_T35=_tag_fat(" of kind ",sizeof(char),10U);_T34.f1= _T35;});_T26= _T34;}{struct Cyc_Warn_String_Warn_Warg_struct _T34=_T26;{struct Cyc_Warn_Kind_Warn_Warg_struct _T35;_T35.tag= 9;{struct Cyc_Absyn_Kind*_T36=_cycalloc(sizeof(struct Cyc_Absyn_Kind));
_T36->kind= 1U;_T36->aliashint= a;_T28= (struct Cyc_Absyn_Kind*)_T36;}_T35.f1= _T28;_T27= _T35;}{struct Cyc_Warn_Kind_Warn_Warg_struct _T35=_T27;void*_T36[6];_T36[0]= & _T30;_T36[1]= & _T31;_T36[2]= & _T32;_T36[3]= & _T33;_T36[4]= & _T34;_T36[5]= & _T35;_T29= loc;_T2A= _tag_fat(_T36,sizeof(void*),6);Cyc_Warn_err2(_T29,_T2A);}}}}}}goto _TLBD;}_TLC4: goto _TLBD;};}_TLBD: _T2B= tvs2;
# 482
tvs2= _T2B->tl;goto _TLC0;_TLBF:;}
# 510
static void Cyc_Tc_rule_out_mem_and_qual(unsigned loc,struct _tuple1*q,struct Cyc_List_List*tvs){struct Cyc_List_List*_T0;void*_T1;struct Cyc_Absyn_Tvar*_T2;void*_T3;int*_T4;unsigned _T5;struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*_T6;struct Cyc_Core_Opt**_T7;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T8;struct Cyc_Absyn_Kind*_T9;struct Cyc_Absyn_Kind*_TA;enum Cyc_Absyn_KindQual _TB;int _TC;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_TD;struct Cyc_Core_Opt**_TE;struct Cyc_Core_Opt**_TF;struct Cyc_Core_Opt*_T10;struct Cyc_Absyn_Kind*_T11;struct Cyc_Absyn_Kind*_T12;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T13;struct Cyc_Core_Opt**_T14;struct Cyc_Core_Opt**_T15;struct Cyc_Core_Opt*_T16;struct Cyc_Absyn_Kind*_T17;struct Cyc_Absyn_Kind*_T18;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T19;struct Cyc_Core_Opt**_T1A;struct Cyc_Core_Opt**_T1B;struct Cyc_Core_Opt*_T1C;struct Cyc_Absyn_Kind*_T1D;struct Cyc_Absyn_Kind*_T1E;struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*_T1F;struct Cyc_Absyn_Kind*_T20;struct Cyc_Absyn_Kind*_T21;enum Cyc_Absyn_KindQual _T22;int _T23;struct Cyc_Warn_String_Warn_Warg_struct _T24;struct Cyc_Warn_Qvar_Warn_Warg_struct _T25;struct Cyc_Warn_String_Warn_Warg_struct _T26;struct Cyc_Warn_Tvar_Warn_Warg_struct _T27;struct Cyc_List_List*_T28;void*_T29;struct Cyc_Warn_String_Warn_Warg_struct _T2A;unsigned _T2B;struct _fat_ptr _T2C;struct Cyc_Absyn_Kind*_T2D;struct Cyc_Warn_String_Warn_Warg_struct _T2E;struct Cyc_Warn_Qvar_Warn_Warg_struct _T2F;struct Cyc_Warn_String_Warn_Warg_struct _T30;struct Cyc_Warn_Tvar_Warn_Warg_struct _T31;struct Cyc_List_List*_T32;void*_T33;struct Cyc_Warn_String_Warn_Warg_struct _T34;struct Cyc_Warn_Kind_Warn_Warg_struct _T35;struct Cyc_Absyn_Kind*_T36;unsigned _T37;struct _fat_ptr _T38;struct Cyc_List_List*_T39;
struct Cyc_List_List*tvs2=tvs;_TLC9: if(tvs2!=0)goto _TLC7;else{goto _TLC8;}
_TLC7: _T0= tvs2;_T1= _T0->hd;_T2= (struct Cyc_Absyn_Tvar*)_T1;_T3= _T2->kind;{void*_T3A=Cyc_Kinds_compress_kb(_T3);enum Cyc_Absyn_AliasHint _T3B;void*_T3C;_T4= (int*)_T3A;_T5= *_T4;switch(_T5){case 1:{struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*_T3D=(struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*)_T3A;_T6= (struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*)_T3A;_T7= & _T6->f1;_T3C= (struct Cyc_Core_Opt**)_T7;}{struct Cyc_Core_Opt**f=_T3C;_T3C= f;goto _LL4;}case 2: _T8= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3A;_T9= _T8->f2;_TA= (struct Cyc_Absyn_Kind*)_T9;_TB= _TA->kind;_TC= (int)_TB;switch(_TC){case Cyc_Absyn_MemKind:{struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T3D=(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3A;_TD= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3A;_TE= & _TD->f1;_T3C= (struct Cyc_Core_Opt**)_TE;}_LL4: {struct Cyc_Core_Opt**f=_T3C;_TF= f;{struct Cyc_Core_Opt*_T3D=_cycalloc(sizeof(struct Cyc_Core_Opt));_T11= & Cyc_Kinds_bk;_T12= (struct Cyc_Absyn_Kind*)_T11;
# 517
({__typeof__(Cyc_Kinds_kind_to_bound(_T12))_T3E=Cyc_Kinds_kind_to_bound(_T12);_T3D->v= _T3E;});_T10= (struct Cyc_Core_Opt*)_T3D;}*_TF= _T10;goto _LL0;}case Cyc_Absyn_AnyKind:{struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T3D=(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3A;_T13= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3A;_T14= & _T13->f1;_T3C= (struct Cyc_Core_Opt**)_T14;}{struct Cyc_Core_Opt**f=_T3C;_T15= f;{struct Cyc_Core_Opt*_T3D=_cycalloc(sizeof(struct Cyc_Core_Opt));_T17= & Cyc_Kinds_ak;_T18= (struct Cyc_Absyn_Kind*)_T17;
# 520
({__typeof__(Cyc_Kinds_kind_to_bound(_T18))_T3E=Cyc_Kinds_kind_to_bound(_T18);_T3D->v= _T3E;});_T16= (struct Cyc_Core_Opt*)_T3D;}*_T15= _T16;goto _LL0;}case Cyc_Absyn_EffKind:{struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T3D=(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3A;_T19= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3A;_T1A= & _T19->f1;_T3C= (struct Cyc_Core_Opt**)_T1A;}{struct Cyc_Core_Opt**f=(struct Cyc_Core_Opt**)_T3C;_T1B= f;{struct Cyc_Core_Opt*_T3D=_cycalloc(sizeof(struct Cyc_Core_Opt));_T1D= & Cyc_Kinds_ek;_T1E= (struct Cyc_Absyn_Kind*)_T1D;
# 523
({__typeof__(Cyc_Kinds_kind_to_bound(_T1E))_T3E=Cyc_Kinds_kind_to_bound(_T1E);_T3D->v= _T3E;});_T1C= (struct Cyc_Core_Opt*)_T3D;}*_T1B= _T1C;goto _LL0;}default: goto _LLD;};default: _T1F= (struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*)_T3A;_T20= _T1F->f1;_T21= (struct Cyc_Absyn_Kind*)_T20;_T22= _T21->kind;_T23= (int)_T22;switch(_T23){case Cyc_Absyn_AqualKind:{struct Cyc_Warn_String_Warn_Warg_struct _T3D;_T3D.tag= 0;
# 526
({__typeof__(_tag_fat("type ",sizeof(char),6U))_T3E=_tag_fat("type ",sizeof(char),6U);_T3D.f1= _T3E;});_T24= _T3D;}{struct Cyc_Warn_String_Warn_Warg_struct _T3D=_T24;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T3E;_T3E.tag= 1;_T3E.f1= q;_T25= _T3E;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T3E=_T25;{struct Cyc_Warn_String_Warn_Warg_struct _T3F;_T3F.tag= 0;({__typeof__(_tag_fat(" attempts to abstract type variable ",sizeof(char),37U))_T40=_tag_fat(" attempts to abstract type variable ",sizeof(char),37U);_T3F.f1= _T40;});_T26= _T3F;}{struct Cyc_Warn_String_Warn_Warg_struct _T3F=_T26;{struct Cyc_Warn_Tvar_Warn_Warg_struct _T40;_T40.tag= 7;_T28= tvs2;_T29= _T28->hd;_T40.f1= (struct Cyc_Absyn_Tvar*)_T29;_T27= _T40;}{struct Cyc_Warn_Tvar_Warn_Warg_struct _T40=_T27;{struct Cyc_Warn_String_Warn_Warg_struct _T41;_T41.tag= 0;({__typeof__(_tag_fat(" of kind Q",sizeof(char),11U))_T42=_tag_fat(" of kind Q",sizeof(char),11U);_T41.f1= _T42;});_T2A= _T41;}{struct Cyc_Warn_String_Warn_Warg_struct _T41=_T2A;void*_T42[5];_T42[0]= & _T3D;_T42[1]= & _T3E;_T42[2]= & _T3F;_T42[3]= & _T40;_T42[4]= & _T41;_T2B= loc;_T2C= _tag_fat(_T42,sizeof(void*),5);Cyc_Warn_err2(_T2B,_T2C);}}}}}goto _LL0;case Cyc_Absyn_MemKind:{struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*_T3D=(struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*)_T3A;_T2D= _T3D->f1;{struct Cyc_Absyn_Kind _T3E=*_T2D;_T3B= _T3E.aliashint;}}{enum Cyc_Absyn_AliasHint a=_T3B;{struct Cyc_Warn_String_Warn_Warg_struct _T3D;_T3D.tag= 0;
# 529
({__typeof__(_tag_fat("type ",sizeof(char),6U))_T3E=_tag_fat("type ",sizeof(char),6U);_T3D.f1= _T3E;});_T2E= _T3D;}{struct Cyc_Warn_String_Warn_Warg_struct _T3D=_T2E;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T3E;_T3E.tag= 1;_T3E.f1= q;_T2F= _T3E;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T3E=_T2F;{struct Cyc_Warn_String_Warn_Warg_struct _T3F;_T3F.tag= 0;({__typeof__(_tag_fat(" attempts to abstract type variable ",sizeof(char),37U))_T40=_tag_fat(" attempts to abstract type variable ",sizeof(char),37U);_T3F.f1= _T40;});_T30= _T3F;}{struct Cyc_Warn_String_Warn_Warg_struct _T3F=_T30;{struct Cyc_Warn_Tvar_Warn_Warg_struct _T40;_T40.tag= 7;_T32= tvs2;_T33= _T32->hd;_T40.f1= (struct Cyc_Absyn_Tvar*)_T33;_T31= _T40;}{struct Cyc_Warn_Tvar_Warn_Warg_struct _T40=_T31;{struct Cyc_Warn_String_Warn_Warg_struct _T41;_T41.tag= 0;({__typeof__(_tag_fat(" of kind ",sizeof(char),10U))_T42=_tag_fat(" of kind ",sizeof(char),10U);_T41.f1= _T42;});_T34= _T41;}{struct Cyc_Warn_String_Warn_Warg_struct _T41=_T34;{struct Cyc_Warn_Kind_Warn_Warg_struct _T42;_T42.tag= 9;{struct Cyc_Absyn_Kind*_T43=_cycalloc(sizeof(struct Cyc_Absyn_Kind));
_T43->kind= 1U;_T43->aliashint= a;_T36= (struct Cyc_Absyn_Kind*)_T43;}_T42.f1= _T36;_T35= _T42;}{struct Cyc_Warn_Kind_Warn_Warg_struct _T42=_T35;void*_T43[6];_T43[0]= & _T3D;_T43[1]= & _T3E;_T43[2]= & _T3F;_T43[3]= & _T40;_T43[4]= & _T41;_T43[5]= & _T42;_T37= loc;_T38= _tag_fat(_T43,sizeof(void*),6);Cyc_Warn_err2(_T37,_T38);}}}}}}goto _LL0;}default: _LLD: goto _LL0;};}_LL0:;}_T39= tvs2;
# 511
tvs2= _T39->tl;goto _TLC9;_TLC8:;}struct _tuple18{struct Cyc_Absyn_AggrdeclImpl*f0;struct Cyc_Absyn_Aggrdecl***f1;};
# 538
void Cyc_Tc_tcAggrdecl(struct Cyc_Tcenv_Tenv*te,unsigned loc,struct Cyc_Absyn_Aggrdecl*ad){struct Cyc_Absyn_Aggrdecl*_T0;long _T1;struct Cyc_String_pa_PrintArg_struct _T2;struct _tuple1*_T3;struct _tuple1 _T4;struct _fat_ptr*_T5;struct Cyc___cycFILE*_T6;struct _fat_ptr _T7;struct _fat_ptr _T8;unsigned _T9;struct _tuple1*_TA;struct _tuple1 _TB;struct _fat_ptr*_TC;struct Cyc_Absyn_Aggrdecl*_TD;struct Cyc_List_List*_TE;struct Cyc_Absyn_Aggrdecl*_TF;unsigned _T10;struct Cyc_Absyn_Aggrdecl*_T11;struct Cyc_List_List*_T12;struct Cyc_Absyn_Aggrdecl*_T13;struct Cyc_List_List*_T14;struct _tuple18 _T15;struct Cyc_Absyn_Aggrdecl*_T16;struct Cyc_Absyn_Aggrdecl***(*_T17)(struct Cyc_Dict_Dict,struct _tuple1*);void**(*_T18)(struct Cyc_Dict_Dict,void*);struct Cyc_Tcenv_Tenv*_T19;struct Cyc_Tcenv_Genv*_T1A;struct Cyc_Dict_Dict _T1B;struct _tuple1*_T1C;struct Cyc_Absyn_AggrdeclImpl*_T1D;struct Cyc_Absyn_Aggrdecl***_T1E;struct Cyc_Tcenv_Tenv*_T1F;struct Cyc_Tcenv_Genv*_T20;struct Cyc_Dict_Dict(*_T21)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Aggrdecl**);struct Cyc_Dict_Dict(*_T22)(struct Cyc_Dict_Dict,void*,void*);struct Cyc_Tcenv_Tenv*_T23;struct Cyc_Tcenv_Genv*_T24;struct Cyc_Dict_Dict _T25;struct _tuple1*_T26;struct Cyc_Absyn_Aggrdecl**_T27;struct Cyc_Absyn_Aggrdecl***_T28;struct Cyc_Absyn_Aggrdecl**_T29;struct Cyc_Absyn_Aggrdecl*_T2A;struct Cyc_Absyn_Aggrdecl*_T2B;unsigned _T2C;struct _fat_ptr*_T2D;struct Cyc_Absyn_Aggrdecl**_T2E;struct Cyc_Absyn_Aggrdecl***_T2F;struct Cyc_Absyn_AggrdeclImpl*_T30;struct Cyc_Absyn_AggrdeclImpl*_T31;struct Cyc_List_List**_T32;struct Cyc_Absyn_Aggrdecl**_T33;struct Cyc_Absyn_Aggrdecl*_T34;struct Cyc_Absyn_Aggrdecl*_T35;struct Cyc_Absyn_Aggrdecl*_T36;struct Cyc_Absyn_Aggrdecl*_T37;struct Cyc_Tcenv_Tenv*_T38;struct Cyc_Tcenv_Genv*_T39;struct Cyc_Dict_Dict(*_T3A)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Aggrdecl**);struct Cyc_Dict_Dict(*_T3B)(struct Cyc_Dict_Dict,void*,void*);struct Cyc_Tcenv_Tenv*_T3C;struct Cyc_Tcenv_Genv*_T3D;struct Cyc_Dict_Dict _T3E;struct _tuple1*_T3F;struct Cyc_Absyn_Aggrdecl**_T40;long _T41;struct Cyc_Absyn_Aggrdecl*_T42;enum Cyc_Absyn_AggrKind _T43;int _T44;struct Cyc_Warn_String_Warn_Warg_struct _T45;unsigned _T46;struct _fat_ptr _T47;struct Cyc_List_List*(*_T48)(struct _tuple15*(*)(long,struct Cyc_Absyn_Tvar*),long,struct Cyc_List_List*);struct Cyc_List_List*(*_T49)(void*(*)(void*,void*),void*,struct Cyc_List_List*);struct _tuple15*(*_T4A)(long,struct Cyc_Absyn_Tvar*);struct Cyc_List_List*_T4B;struct Cyc_List_List*_T4C;struct Cyc_List_List*(*_T4D)(struct _tuple15*(*)(long,struct Cyc_Absyn_Tvar*),long,struct Cyc_List_List*);struct Cyc_List_List*(*_T4E)(void*(*)(void*,void*),void*,struct Cyc_List_List*);struct _tuple15*(*_T4F)(long,struct Cyc_Absyn_Tvar*);struct Cyc_List_List*_T50;struct Cyc_List_List*_T51;struct Cyc_Tcenv_Tenv*_T52;unsigned _T53;struct Cyc_Absyn_Aggrdecl*_T54;enum Cyc_Absyn_AggrKind _T55;struct Cyc_List_List*_T56;struct Cyc_List_List*_T57;struct Cyc_List_List**_T58;struct Cyc_List_List*_T59;struct Cyc_Absyn_Aggrdecl*_T5A;enum Cyc_Absyn_AggrKind _T5B;int _T5C;long _T5D;long _T5E;struct Cyc_List_List*_T5F;void*_T60;struct Cyc_Absyn_Aggrfield*_T61;void*_T62;long _T63;struct Cyc_List_List*_T64;void*_T65;struct Cyc_Absyn_Aggrfield*_T66;struct Cyc_Absyn_Exp*_T67;struct Cyc_Warn_String_Warn_Warg_struct _T68;struct Cyc_Warn_String_Warn_Warg_struct _T69;struct Cyc_List_List*_T6A;void*_T6B;struct Cyc_Absyn_Aggrfield*_T6C;struct _fat_ptr*_T6D;struct Cyc_Warn_String_Warn_Warg_struct _T6E;struct Cyc_Warn_Qvar_Warn_Warg_struct _T6F;struct Cyc_Warn_String_Warn_Warg_struct _T70;struct Cyc_Warn_Typ_Warn_Warg_struct _T71;struct Cyc_List_List*_T72;void*_T73;struct Cyc_Absyn_Aggrfield*_T74;struct Cyc_Warn_String_Warn_Warg_struct _T75;unsigned _T76;struct _fat_ptr _T77;struct Cyc_List_List*_T78;struct Cyc_Absyn_Aggrdecl**_T79;struct Cyc_Absyn_AggrdeclImpl*_T7A;struct Cyc_Absyn_AggrdeclImpl*_T7B;struct Cyc_List_List**_T7C;struct Cyc_Absyn_Aggrdecl***_T7D;struct Cyc_Absyn_Aggrdecl*_T7E;enum Cyc_Absyn_AggrKind _T7F;int _T80;struct Cyc_Absyn_Aggrdecl**_T81;struct Cyc_Absyn_Aggrdecl*_T82;enum Cyc_Absyn_AggrKind _T83;int _T84;struct Cyc_Warn_String_Warn_Warg_struct _T85;unsigned _T86;struct _fat_ptr _T87;struct Cyc_Absyn_Aggrdecl**_T88;struct Cyc_Absyn_Aggrdecl**_T89;struct Cyc_Absyn_Aggrdecl*_T8A;struct Cyc_Absyn_Aggrdecl*_T8B;struct Cyc_Absyn_Aggrdecl*_T8C;struct Cyc_Absyn_Aggrdecl*_T8D;long _T8E;struct Cyc_Absyn_Aggrdecl*_T8F;enum Cyc_Absyn_AggrKind _T90;int _T91;struct Cyc_Warn_String_Warn_Warg_struct _T92;unsigned _T93;struct _fat_ptr _T94;struct Cyc_List_List*(*_T95)(struct _tuple15*(*)(long,struct Cyc_Absyn_Tvar*),long,struct Cyc_List_List*);struct Cyc_List_List*(*_T96)(void*(*)(void*,void*),void*,struct Cyc_List_List*);struct _tuple15*(*_T97)(long,struct Cyc_Absyn_Tvar*);struct Cyc_List_List*_T98;struct Cyc_List_List*_T99;struct Cyc_List_List*(*_T9A)(struct _tuple15*(*)(long,struct Cyc_Absyn_Tvar*),long,struct Cyc_List_List*);struct Cyc_List_List*(*_T9B)(void*(*)(void*,void*),void*,struct Cyc_List_List*);struct _tuple15*(*_T9C)(long,struct Cyc_Absyn_Tvar*);struct Cyc_List_List*_T9D;struct Cyc_List_List*_T9E;struct Cyc_Tcenv_Tenv*_T9F;unsigned _TA0;struct Cyc_Absyn_Aggrdecl*_TA1;enum Cyc_Absyn_AggrKind _TA2;struct Cyc_List_List*_TA3;struct Cyc_List_List*_TA4;struct Cyc_List_List**_TA5;struct Cyc_List_List*_TA6;struct Cyc_Absyn_Aggrdecl**_TA7;_T0= ad;{
struct _tuple1*q=_T0->name;_T1= Cyc_Tc_debug;
if(!_T1)goto _TLCD;{struct Cyc_String_pa_PrintArg_struct _TA8;_TA8.tag= 0;_T3= q;_T4= *_T3;_T5= _T4.f1;
_TA8.f1= *_T5;_T2= _TA8;}{struct Cyc_String_pa_PrintArg_struct _TA8=_T2;void*_TA9[1];_TA9[0]= & _TA8;_T6= Cyc_stderr;_T7= _tag_fat("type-checking type decl %s\n",sizeof(char),28U);_T8= _tag_fat(_TA9,sizeof(void*),1);Cyc_fprintf(_T6,_T7,_T8);}goto _TLCE;_TLCD: _TLCE: _T9= loc;_TA= q;_TB= *_TA;_TC= _TB.f1;_TD= ad;_TE= _TD->attributes;
# 544
Cyc_Atts_check_field_atts(_T9,_TC,_TE);_TF= ad;{
# 546
struct Cyc_List_List*tvs=_TF->tvs;_T10= loc;_T11= ad;_T12= _T11->tvs;
# 549
Cyc_Tcutil_check_unique_tvars(_T10,_T12);_T13= ad;_T14= _T13->tvs;
Cyc_Tcutil_add_tvar_identities(_T14);{struct _tuple18 _TA8;_T16= ad;
# 554
_TA8.f0= _T16->impl;_T18= Cyc_Dict_lookup_opt;{struct Cyc_Absyn_Aggrdecl***(*_TA9)(struct Cyc_Dict_Dict,struct _tuple1*)=(struct Cyc_Absyn_Aggrdecl***(*)(struct Cyc_Dict_Dict,struct _tuple1*))_T18;_T17= _TA9;}_T19= te;_T1A= _T19->ae;_T1B= _T1A->aggrdecls;_T1C= q;({__typeof__(_T17(_T1B,_T1C))_TA9=_T17(_T1B,_T1C);_TA8.f1= _TA9;});_T15= _TA8;}{struct _tuple18 _TA8=_T15;struct Cyc_Absyn_Aggrdecl**_TA9;struct Cyc_List_List*_TAA;long _TAB;struct Cyc_List_List*_TAC;struct Cyc_List_List*_TAD;void*_TAE;_T1D= _TA8.f0;if(_T1D!=0)goto _TLCF;_T1E= _TA8.f1;if(_T1E!=0)goto _TLD1;
# 557
Cyc_Tc_rule_out_memkind(loc,q,tvs);_T1F= te;_T20= _T1F->ae;_T22= Cyc_Dict_insert;{
# 559
struct Cyc_Dict_Dict(*_TAF)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Aggrdecl**)=(struct Cyc_Dict_Dict(*)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Aggrdecl**))_T22;_T21= _TAF;}_T23= te;_T24= _T23->ae;_T25= _T24->aggrdecls;_T26= q;{struct Cyc_Absyn_Aggrdecl**_TAF=_cycalloc(sizeof(struct Cyc_Absyn_Aggrdecl*));*_TAF= ad;_T27= (struct Cyc_Absyn_Aggrdecl**)_TAF;}({__typeof__(_T21(_T25,_T26,_T27))_TAF=_T21(_T25,_T26,_T27);_T20->aggrdecls= _TAF;});goto _LL0;_TLD1: _T28= _TA8.f1;{struct Cyc_Absyn_Aggrdecl**_TAF=*_T28;_TAE= _TAF;}_LL8:{struct Cyc_Absyn_Aggrdecl**adp=_TAE;_T29= adp;_T2A= *_T29;_T2B= ad;_T2C= loc;_T2D= Cyc_Tc_tc_msg;{
# 624
struct Cyc_Absyn_Aggrdecl*ad2=Cyc_Tcdecl_merge_aggrdecl(_T2A,_T2B,_T2C,_T2D);
if(ad2!=0)goto _TLD3;
return;_TLD3:
 Cyc_Tc_rule_out_memkind(loc,q,tvs);_T2E= adp;
# 632
*_T2E= ad2;}}goto _TLD0;_TLCF: _T2F= _TA8.f1;if(_T2F!=0)goto _TLD5;_T30= _TA8.f0;{struct Cyc_Absyn_AggrdeclImpl _TAF=*_T30;_TAD= _TAF.exist_vars;_T31= _TA8.f0;_T32= & _T31->qual_bnd;_TAE= (struct Cyc_List_List**)_T32;_TAC= _TAF.fields;_TAB= _TAF.tagged;_TAA= _TAF.effconstr;}{struct Cyc_List_List*exist_vars=_TAD;struct Cyc_List_List**qb=_TAE;struct Cyc_List_List*fs=_TAC;long tagged=_TAB;struct Cyc_List_List*effconstr=_TAA;
# 566
struct Cyc_Absyn_Aggrdecl**adp;adp= _cycalloc(sizeof(struct Cyc_Absyn_Aggrdecl*));_T33= adp;{struct Cyc_Absyn_Aggrdecl*_TAF=_cycalloc(sizeof(struct Cyc_Absyn_Aggrdecl));_T35= ad;_TAF->kind= _T35->kind;_TAF->sc= 3U;_T36= ad;_TAF->name= _T36->name;_TAF->tvs= tvs;_TAF->impl= 0;_T37= ad;_TAF->attributes= _T37->attributes;_TAF->expected_mem_kind= 0;_T34= (struct Cyc_Absyn_Aggrdecl*)_TAF;}*_T33= _T34;_T38= te;_T39= _T38->ae;_T3B= Cyc_Dict_insert;{
struct Cyc_Dict_Dict(*_TAF)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Aggrdecl**)=(struct Cyc_Dict_Dict(*)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Aggrdecl**))_T3B;_T3A= _TAF;}_T3C= te;_T3D= _T3C->ae;_T3E= _T3D->aggrdecls;_T3F= q;_T40= adp;({__typeof__(_T3A(_T3E,_T3F,_T40))_TAF=_T3A(_T3E,_T3F,_T40);_T39->aggrdecls= _TAF;});
# 572
Cyc_Tcutil_check_unique_tvars(loc,exist_vars);
Cyc_Tcutil_add_tvar_identities(exist_vars);_T41= tagged;
# 576
if(!_T41)goto _TLD7;_T42= ad;_T43= _T42->kind;_T44= (int)_T43;if(_T44!=0)goto _TLD7;{struct Cyc_Warn_String_Warn_Warg_struct _TAF;_TAF.tag= 0;
({__typeof__(_tag_fat("@tagged is allowed only on union declarations",sizeof(char),46U))_TB0=_tag_fat("@tagged is allowed only on union declarations",sizeof(char),46U);_TAF.f1= _TB0;});_T45= _TAF;}{struct Cyc_Warn_String_Warn_Warg_struct _TAF=_T45;void*_TB0[1];_TB0[0]= & _TAF;_T46= loc;_T47= _tag_fat(_TB0,sizeof(void*),1);Cyc_Warn_err2(_T46,_T47);}goto _TLD8;_TLD7: _TLD8: _T49= Cyc_List_map_c;{
struct Cyc_List_List*(*_TAF)(struct _tuple15*(*)(long,struct Cyc_Absyn_Tvar*),long,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _tuple15*(*)(long,struct Cyc_Absyn_Tvar*),long,struct Cyc_List_List*))_T49;_T48= _TAF;}_T4A= Cyc_Tcutil_tvar_bool_pair;_T4B= tvs;_T4C= _T48(_T4A,0,_T4B);_T4E= Cyc_List_map_c;{
struct Cyc_List_List*(*_TAF)(struct _tuple15*(*)(long,struct Cyc_Absyn_Tvar*),long,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _tuple15*(*)(long,struct Cyc_Absyn_Tvar*),long,struct Cyc_List_List*))_T4E;_T4D= _TAF;}_T4F= Cyc_Tcutil_tvar_bool_pair;_T50= exist_vars;_T51= _T4D(_T4F,1,_T50);{
# 578
struct Cyc_List_List*btvs=Cyc_List_append(_T4C,_T51);_T52= te;_T53= loc;_T54= ad;_T55= _T54->kind;_T56= btvs;_T57= effconstr;_T58= qb;_T59= fs;
# 580
Cyc_Tc_tcAggrImpl(_T52,_T53,_T55,_T56,_T57,_T58,_T59);
# 582
Cyc_Tc_rule_out_memkind(loc,q,tvs);
# 585
Cyc_Tc_rule_out_memkind(loc,q,exist_vars);_T5A= ad;_T5B= _T5A->kind;_T5C= (int)_T5B;
# 588
if(_T5C!=1)goto _TLD9;_T5D= tagged;if(_T5D)goto _TLD9;else{goto _TLDB;}
# 591
_TLDB:{struct Cyc_List_List*f=fs;_TLDF: if(f!=0)goto _TLDD;else{goto _TLDE;}
_TLDD: _T5E= Cyc_Flags_tc_aggressive_warn;if(!_T5E)goto _TLE0;_T5F= f;_T60= _T5F->hd;_T61= (struct Cyc_Absyn_Aggrfield*)_T60;_T62= _T61->type;_T63= Cyc_Tcutil_is_bits_only_type(_T62);if(_T63)goto _TLE0;else{goto _TLE2;}_TLE2: _T64= f;_T65= _T64->hd;_T66= (struct Cyc_Absyn_Aggrfield*)_T65;_T67= _T66->requires_clause;if(_T67!=0)goto _TLE0;{struct Cyc_Warn_String_Warn_Warg_struct _TAF;_TAF.tag= 0;
# 594
({__typeof__(_tag_fat("member ",sizeof(char),8U))_TB0=_tag_fat("member ",sizeof(char),8U);_TAF.f1= _TB0;});_T68= _TAF;}{struct Cyc_Warn_String_Warn_Warg_struct _TAF=_T68;{struct Cyc_Warn_String_Warn_Warg_struct _TB0;_TB0.tag= 0;_T6A= f;_T6B= _T6A->hd;_T6C= (struct Cyc_Absyn_Aggrfield*)_T6B;_T6D= _T6C->name;_TB0.f1= *_T6D;_T69= _TB0;}{struct Cyc_Warn_String_Warn_Warg_struct _TB0=_T69;{struct Cyc_Warn_String_Warn_Warg_struct _TB1;_TB1.tag= 0;({__typeof__(_tag_fat(" of union ",sizeof(char),11U))_TB2=_tag_fat(" of union ",sizeof(char),11U);_TB1.f1= _TB2;});_T6E= _TB1;}{struct Cyc_Warn_String_Warn_Warg_struct _TB1=_T6E;{struct Cyc_Warn_Qvar_Warn_Warg_struct _TB2;_TB2.tag= 1;_TB2.f1= q;_T6F= _TB2;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _TB2=_T6F;{struct Cyc_Warn_String_Warn_Warg_struct _TB3;_TB3.tag= 0;({__typeof__(_tag_fat(" has type ",sizeof(char),11U))_TB4=_tag_fat(" has type ",sizeof(char),11U);_TB3.f1= _TB4;});_T70= _TB3;}{struct Cyc_Warn_String_Warn_Warg_struct _TB3=_T70;{struct Cyc_Warn_Typ_Warn_Warg_struct _TB4;_TB4.tag= 2;_T72= f;_T73= _T72->hd;_T74= (struct Cyc_Absyn_Aggrfield*)_T73;_TB4.f1= _T74->type;_T71= _TB4;}{struct Cyc_Warn_Typ_Warn_Warg_struct _TB4=_T71;{struct Cyc_Warn_String_Warn_Warg_struct _TB5;_TB5.tag= 0;
({__typeof__(_tag_fat(" so it can only be written and not read",sizeof(char),40U))_TB6=_tag_fat(" so it can only be written and not read",sizeof(char),40U);_TB5.f1= _TB6;});_T75= _TB5;}{struct Cyc_Warn_String_Warn_Warg_struct _TB5=_T75;void*_TB6[7];_TB6[0]= & _TAF;_TB6[1]= & _TB0;_TB6[2]= & _TB1;_TB6[3]= & _TB2;_TB6[4]= & _TB3;_TB6[5]= & _TB4;_TB6[6]= & _TB5;_T76= loc;_T77= _tag_fat(_TB6,sizeof(void*),7);Cyc_Warn_warn2(_T76,_T77);}}}}}}}goto _TLE1;_TLE0: _TLE1: _T78= f;
# 591
f= _T78->tl;goto _TLDF;_TLDE:;}goto _TLDA;_TLD9: _TLDA: _T79= adp;
# 596
*_T79= ad;goto _LL0;}}_TLD5: _T7A= _TA8.f0;{struct Cyc_Absyn_AggrdeclImpl _TAF=*_T7A;_TAD= _TAF.exist_vars;_T7B= _TA8.f0;_T7C= & _T7B->qual_bnd;_TAE= (struct Cyc_List_List**)_T7C;_TAC= _TAF.fields;_TAB= _TAF.tagged;_TAA= _TAF.effconstr;}_T7D= _TA8.f1;{struct Cyc_Absyn_Aggrdecl**_TAF=*_T7D;_TA9= _TAF;}{struct Cyc_List_List*exist_vars=_TAD;struct Cyc_List_List**qb=(struct Cyc_List_List**)_TAE;struct Cyc_List_List*fs=_TAC;long tagged=_TAB;struct Cyc_List_List*effconstr=_TAA;struct Cyc_Absyn_Aggrdecl**adp=_TA9;_T7E= ad;_T7F= _T7E->kind;_T80= (int)_T7F;_T81= adp;_T82= *_T81;_T83= _T82->kind;_T84= (int)_T83;
# 600
if(_T80==_T84)goto _TLE3;{struct Cyc_Warn_String_Warn_Warg_struct _TAF;_TAF.tag= 0;
({__typeof__(_tag_fat("cannot reuse struct names for unions and vice-versa",sizeof(char),52U))_TB0=_tag_fat("cannot reuse struct names for unions and vice-versa",sizeof(char),52U);_TAF.f1= _TB0;});_T85= _TAF;}{struct Cyc_Warn_String_Warn_Warg_struct _TAF=_T85;void*_TB0[1];_TB0[0]= & _TAF;_T86= loc;_T87= _tag_fat(_TB0,sizeof(void*),1);Cyc_Warn_err2(_T86,_T87);}goto _TLE4;_TLE3: _TLE4: _T88= adp;{
# 603
struct Cyc_Absyn_Aggrdecl*ad0=*_T88;_T89= adp;{struct Cyc_Absyn_Aggrdecl*_TAF=_cycalloc(sizeof(struct Cyc_Absyn_Aggrdecl));_T8B= ad;
# 605
_TAF->kind= _T8B->kind;_TAF->sc= 3U;_T8C= ad;_TAF->name= _T8C->name;_TAF->tvs= tvs;_TAF->impl= 0;_T8D= ad;_TAF->attributes= _T8D->attributes;_TAF->expected_mem_kind= 0;_T8A= (struct Cyc_Absyn_Aggrdecl*)_TAF;}*_T89= _T8A;
# 610
Cyc_Tcutil_check_unique_tvars(loc,exist_vars);
Cyc_Tcutil_add_tvar_identities(exist_vars);_T8E= tagged;
# 613
if(!_T8E)goto _TLE5;_T8F= ad;_T90= _T8F->kind;_T91= (int)_T90;if(_T91!=0)goto _TLE5;{struct Cyc_Warn_String_Warn_Warg_struct _TAF;_TAF.tag= 0;
({__typeof__(_tag_fat("@tagged is allowed only on union declarations",sizeof(char),46U))_TB0=_tag_fat("@tagged is allowed only on union declarations",sizeof(char),46U);_TAF.f1= _TB0;});_T92= _TAF;}{struct Cyc_Warn_String_Warn_Warg_struct _TAF=_T92;void*_TB0[1];_TB0[0]= & _TAF;_T93= loc;_T94= _tag_fat(_TB0,sizeof(void*),1);Cyc_Warn_err2(_T93,_T94);}goto _TLE6;_TLE5: _TLE6: _T96= Cyc_List_map_c;{
struct Cyc_List_List*(*_TAF)(struct _tuple15*(*)(long,struct Cyc_Absyn_Tvar*),long,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _tuple15*(*)(long,struct Cyc_Absyn_Tvar*),long,struct Cyc_List_List*))_T96;_T95= _TAF;}_T97= Cyc_Tcutil_tvar_bool_pair;_T98= tvs;_T99= _T95(_T97,0,_T98);_T9B= Cyc_List_map_c;{
struct Cyc_List_List*(*_TAF)(struct _tuple15*(*)(long,struct Cyc_Absyn_Tvar*),long,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _tuple15*(*)(long,struct Cyc_Absyn_Tvar*),long,struct Cyc_List_List*))_T9B;_T9A= _TAF;}_T9C= Cyc_Tcutil_tvar_bool_pair;_T9D= exist_vars;_T9E= _T9A(_T9C,1,_T9D);{
# 615
struct Cyc_List_List*btvs=Cyc_List_append(_T99,_T9E);_T9F= te;_TA0= loc;_TA1= ad;_TA2= _TA1->kind;_TA3= btvs;_TA4= effconstr;_TA5= qb;_TA6= fs;
# 617
Cyc_Tc_tcAggrImpl(_T9F,_TA0,_TA2,_TA3,_TA4,_TA5,_TA6);_TA7= adp;
# 619
*_TA7= ad0;_TAE= adp;goto _LL8;}}}_TLD0: _LL0:;}}}}struct _tuple19{struct Cyc_Absyn_Tqual f0;void*f1;};
# 636
static struct Cyc_List_List*Cyc_Tc_tcDatatypeFields(struct Cyc_Tcenv_Tenv*te,unsigned loc,struct _fat_ptr obj,long is_extensible,struct _tuple1*name,struct Cyc_List_List*fields,struct Cyc_List_List*tvs,struct Cyc_Absyn_Datatypedecl*tudres){struct Cyc_List_List*_T0;void*_T1;struct Cyc_Absyn_Datatypefield*_T2;struct Cyc_Absyn_Datatypefield*_T3;unsigned _T4;struct Cyc_Tcenv_Tenv*_T5;struct Cyc_List_List*_T6;struct Cyc_Absyn_Kind*_T7;struct Cyc_Absyn_Kind*_T8;struct Cyc_List_List*_T9;void*_TA;struct _tuple19*_TB;struct _tuple19 _TC;void*_TD;struct Cyc_List_List*_TE;struct Cyc_List_List*_TF;void*_T10;struct _tuple19*_T11;struct _tuple19 _T12;void*_T13;long _T14;struct Cyc_Warn_String_Warn_Warg_struct _T15;struct Cyc_Warn_Qvar_Warn_Warg_struct _T16;struct Cyc_Absyn_Datatypefield*_T17;struct Cyc_Absyn_Datatypefield*_T18;unsigned _T19;struct _fat_ptr _T1A;struct Cyc_List_List*_T1B;void*_T1C;struct _tuple19*_T1D;struct Cyc_Absyn_Datatypefield*_T1E;unsigned _T1F;struct Cyc_List_List*_T20;void*_T21;struct _tuple19*_T22;struct _tuple19 _T23;struct Cyc_Absyn_Tqual _T24;long _T25;struct Cyc_List_List*_T26;void*_T27;struct _tuple19*_T28;struct _tuple19 _T29;void*_T2A;struct Cyc_List_List*_T2B;struct Cyc_List_List*_T2C;long _T2D;struct Cyc_List_List*_T2E;long*_T2F;struct _tuple1*_T30;struct _tuple1 _T31;struct _fat_ptr*_T32;unsigned _T33;struct _fat_ptr*_T34;struct Cyc_List_List*_T35;long _T36;struct Cyc_List_List*_T37;void*_T38;long(*_T39)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*);long(*_T3A)(int(*)(void*,void*),struct Cyc_List_List*,void*);int(*_T3B)(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_List_List*_T3C;struct Cyc_Absyn_Datatypefield*_T3D;struct _tuple1*_T3E;struct _tuple1 _T3F;struct _fat_ptr*_T40;long _T41;struct Cyc_Warn_String_Warn_Warg_struct _T42;struct Cyc_Warn_Qvar_Warn_Warg_struct _T43;struct Cyc_Absyn_Datatypefield*_T44;struct Cyc_Warn_String_Warn_Warg_struct _T45;struct Cyc_Warn_String_Warn_Warg_struct _T46;struct Cyc_Absyn_Datatypefield*_T47;unsigned _T48;struct _fat_ptr _T49;struct Cyc_List_List*_T4A;struct _RegionHandle*_T4B;struct Cyc_Absyn_Datatypefield*_T4C;struct _tuple1*_T4D;struct _tuple1 _T4E;struct Cyc_Absyn_Datatypefield*_T4F;enum Cyc_Absyn_Scope _T50;int _T51;struct Cyc_Warn_String_Warn_Warg_struct _T52;struct Cyc_Warn_Qvar_Warn_Warg_struct _T53;struct Cyc_Absyn_Datatypefield*_T54;unsigned _T55;struct _fat_ptr _T56;struct Cyc_Absyn_Datatypefield*_T57;struct Cyc_List_List*_T58;{
# 641
struct Cyc_List_List*fs=fields;_TLEA: if(fs!=0)goto _TLE8;else{goto _TLE9;}
_TLE8: _T0= fs;_T1= _T0->hd;{struct Cyc_Absyn_Datatypefield*f=(struct Cyc_Absyn_Datatypefield*)_T1;_T2= f;{
struct Cyc_List_List*typs=_T2->typs;_TLEE: if(typs!=0)goto _TLEC;else{goto _TLED;}
_TLEC: _T3= f;_T4= _T3->loc;_T5= te;_T6= tvs;_T7= & Cyc_Kinds_mk;_T8= (struct Cyc_Absyn_Kind*)_T7;_T9= typs;_TA= _T9->hd;_TB= (struct _tuple19*)_TA;_TC= *_TB;_TD= _TC.f1;Cyc_Tctyp_check_type(_T4,_T5,_T6,_T8,0,0,_TD);_TE= 
# 646
Cyc_Tcenv_curr_aquals_bounds(te);_TF= typs;_T10= _TF->hd;_T11= (struct _tuple19*)_T10;_T12= *_T11;_T13= _T12.f1;_T14= Cyc_Tcutil_is_noalias_pointer_or_aggr(_TE,_T13);if(!_T14)goto _TLEF;{struct Cyc_Warn_String_Warn_Warg_struct _T59;_T59.tag= 0;
({__typeof__(_tag_fat("noalias pointers in datatypes are not allowed: ",sizeof(char),48U))_T5A=_tag_fat("noalias pointers in datatypes are not allowed: ",sizeof(char),48U);_T59.f1= _T5A;});_T15= _T59;}{struct Cyc_Warn_String_Warn_Warg_struct _T59=_T15;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T5A;_T5A.tag= 1;_T17= f;
_T5A.f1= _T17->name;_T16= _T5A;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T5A=_T16;void*_T5B[2];_T5B[0]= & _T59;_T5B[1]= & _T5A;_T18= f;_T19= _T18->loc;_T1A= _tag_fat(_T5B,sizeof(void*),2);Cyc_Warn_err2(_T19,_T1A);}}goto _TLF0;_TLEF: _TLF0: _T1B= typs;_T1C= _T1B->hd;_T1D= (struct _tuple19*)_T1C;_T1E= f;_T1F= _T1E->loc;_T20= typs;_T21= _T20->hd;_T22= (struct _tuple19*)_T21;_T23= *_T22;_T24= _T23.f0;_T25= _T24.print_const;_T26= typs;_T27= _T26->hd;_T28= (struct _tuple19*)_T27;_T29= *_T28;_T2A= _T29.f1;
({__typeof__(
Cyc_Tcutil_extract_const_from_typedef(_T1F,_T25,_T2A))_T59=Cyc_Tcutil_extract_const_from_typedef(_T1F,_T25,_T2A);
# 649
(*_T1D).f0.real_const= _T59;});_T2B= typs;
# 643
typs= _T2B->tl;goto _TLEE;_TLED:;}}_T2C= fs;
# 641
fs= _T2C->tl;goto _TLEA;_TLE9:;}_T2D= is_extensible;
# 654
if(!_T2D)goto _TLF1;{
# 656
long res=1;_T2E= fields;_T2F= & res;_T30= name;_T31= *_T30;_T32= _T31.f1;_T33= loc;_T34= Cyc_Tc_tc_msg;{
struct Cyc_List_List*fs=Cyc_Tcdecl_sort_xdatatype_fields(_T2E,_T2F,_T32,_T33,_T34);_T36= res;
if(!_T36)goto _TLF3;_T35= fs;goto _TLF4;_TLF3: _T35= 0;_TLF4: return _T35;}}_TLF1: {struct _RegionHandle _T59=_new_region(0U,"uprev_rgn");struct _RegionHandle*uprev_rgn=& _T59;_push_region(uprev_rgn);{
# 662
struct Cyc_List_List*prev_fields=0;{
struct Cyc_List_List*fs=fields;_TLF8: if(fs!=0)goto _TLF6;else{goto _TLF7;}
_TLF6: _T37= fs;_T38= _T37->hd;{struct Cyc_Absyn_Datatypefield*f=(struct Cyc_Absyn_Datatypefield*)_T38;_T3A= Cyc_List_mem;{
long(*_T5A)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*)=(long(*)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*))_T3A;_T39= _T5A;}_T3B= Cyc_strptrcmp;_T3C= prev_fields;_T3D= f;_T3E= _T3D->name;_T3F= *_T3E;_T40= _T3F.f1;_T41= _T39(_T3B,_T3C,_T40);if(!_T41)goto _TLF9;{struct Cyc_Warn_String_Warn_Warg_struct _T5A;_T5A.tag= 0;
({__typeof__(_tag_fat("duplicate field ",sizeof(char),17U))_T5B=_tag_fat("duplicate field ",sizeof(char),17U);_T5A.f1= _T5B;});_T42= _T5A;}{struct Cyc_Warn_String_Warn_Warg_struct _T5A=_T42;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T5B;_T5B.tag= 1;_T44= f;_T5B.f1= _T44->name;_T43= _T5B;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T5B=_T43;{struct Cyc_Warn_String_Warn_Warg_struct _T5C;_T5C.tag= 0;({__typeof__(_tag_fat(" in ",sizeof(char),5U))_T5D=_tag_fat(" in ",sizeof(char),5U);_T5C.f1= _T5D;});_T45= _T5C;}{struct Cyc_Warn_String_Warn_Warg_struct _T5C=_T45;{struct Cyc_Warn_String_Warn_Warg_struct _T5D;_T5D.tag= 0;_T5D.f1= obj;_T46= _T5D;}{struct Cyc_Warn_String_Warn_Warg_struct _T5D=_T46;void*_T5E[4];_T5E[0]= & _T5A;_T5E[1]= & _T5B;_T5E[2]= & _T5C;_T5E[3]= & _T5D;_T47= f;_T48= _T47->loc;_T49= _tag_fat(_T5E,sizeof(void*),4);Cyc_Warn_err2(_T48,_T49);}}}}goto _TLFA;
# 668
_TLF9: _T4B= uprev_rgn;{struct Cyc_List_List*_T5A=_region_malloc(_T4B,0U,sizeof(struct Cyc_List_List));_T4C= f;_T4D= _T4C->name;_T4E= *_T4D;_T5A->hd= _T4E.f1;_T5A->tl= prev_fields;_T4A= (struct Cyc_List_List*)_T5A;}prev_fields= _T4A;_TLFA: _T4F= f;_T50= _T4F->sc;_T51= (int)_T50;
# 670
if(_T51==2)goto _TLFB;{struct Cyc_Warn_String_Warn_Warg_struct _T5A;_T5A.tag= 0;
({__typeof__(_tag_fat("ignoring scope of field ",sizeof(char),25U))_T5B=_tag_fat("ignoring scope of field ",sizeof(char),25U);_T5A.f1= _T5B;});_T52= _T5A;}{struct Cyc_Warn_String_Warn_Warg_struct _T5A=_T52;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T5B;_T5B.tag= 1;_T54= f;_T5B.f1= _T54->name;_T53= _T5B;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T5B=_T53;void*_T5C[2];_T5C[0]= & _T5A;_T5C[1]= & _T5B;_T55= loc;_T56= _tag_fat(_T5C,sizeof(void*),2);Cyc_Warn_warn2(_T55,_T56);}}_T57= f;
_T57->sc= 2U;goto _TLFC;_TLFB: _TLFC:;}_T58= fs;
# 663
fs= _T58->tl;goto _TLF8;_TLF7:;}{struct Cyc_List_List*_T5A=fields;_npop_handler(0);return _T5A;}}_pop_region();}}struct _tuple20{struct Cyc_Core_Opt*f0;struct Cyc_Absyn_Datatypedecl***f1;};
# 678
void Cyc_Tc_tcDatatypedecl(struct Cyc_Tcenv_Tenv*te,unsigned loc,struct Cyc_Absyn_Datatypedecl*tud){struct Cyc_Absyn_Datatypedecl*_T0;struct _fat_ptr _T1;struct Cyc_Absyn_Datatypedecl*_T2;long _T3;long _T4;struct Cyc_String_pa_PrintArg_struct _T5;struct Cyc_String_pa_PrintArg_struct _T6;struct _tuple1*_T7;struct _tuple1 _T8;struct _fat_ptr*_T9;struct Cyc___cycFILE*_TA;struct _fat_ptr _TB;struct _fat_ptr _TC;struct Cyc_Absyn_Datatypedecl*_TD;struct _handler_cons*_TE;int _TF;struct _RegionHandle*_T10;struct Cyc_Tcenv_Tenv*_T11;unsigned _T12;struct Cyc_Absyn_Datatypedecl*_T13;struct _tuple1*_T14;struct Cyc_Absyn_Datatypedecl*_T15;long _T16;struct Cyc_Dict_Absent_exn_struct*_T17;void*_T18;struct Cyc_Absyn_Datatypedecl*_T19;struct Cyc_Absyn_Datatypedecl***_T1A;struct Cyc_Absyn_Datatypedecl**_T1B;struct Cyc_Absyn_Datatypedecl*_T1C;struct Cyc_Absyn_Datatypedecl*_T1D;struct _tuple1*_T1E;struct Cyc_Tcenv_Tenv*_T1F;struct Cyc_List_List*_T20;void*_T21;struct Cyc_Dict_Absent_exn_struct*_T22;char*_T23;char*_T24;struct Cyc_Absyn_Datatypedecl***(*_T25)(struct Cyc_Dict_Dict,struct _tuple1*);void**(*_T26)(struct Cyc_Dict_Dict,void*);struct Cyc_Tcenv_Tenv*_T27;struct Cyc_Tcenv_Genv*_T28;struct Cyc_Dict_Dict _T29;struct _tuple1*_T2A;struct Cyc_Absyn_Datatypedecl***_T2B;struct Cyc_Absyn_Datatypedecl***_T2C;unsigned _T2D;struct Cyc_Absyn_Datatypedecl***_T2E;struct Cyc_Absyn_Datatypedecl***_T2F;struct _tuple20 _T30;struct Cyc_Absyn_Datatypedecl*_T31;struct Cyc_Core_Opt*_T32;struct Cyc_Absyn_Datatypedecl***_T33;struct Cyc_Tcenv_Tenv*_T34;struct Cyc_Tcenv_Genv*_T35;struct Cyc_Dict_Dict(*_T36)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Datatypedecl**);struct Cyc_Dict_Dict(*_T37)(struct Cyc_Dict_Dict,void*,void*);struct Cyc_Tcenv_Tenv*_T38;struct Cyc_Tcenv_Genv*_T39;struct Cyc_Dict_Dict _T3A;struct _tuple1*_T3B;struct Cyc_Absyn_Datatypedecl**_T3C;struct Cyc_Absyn_Datatypedecl***_T3D;struct Cyc_Absyn_Datatypedecl**_T3E;struct Cyc_Absyn_Datatypedecl*_T3F;struct Cyc_Absyn_Datatypedecl*_T40;unsigned _T41;struct _fat_ptr*_T42;struct Cyc_Absyn_Datatypedecl**_T43;struct Cyc_Absyn_Datatypedecl***_T44;struct Cyc_Core_Opt*_T45;struct Cyc_Core_Opt*_T46;void**_T47;struct Cyc_Absyn_Datatypedecl**_T48;struct Cyc_Absyn_Datatypedecl*_T49;struct Cyc_Absyn_Datatypedecl*_T4A;struct Cyc_Absyn_Datatypedecl*_T4B;struct Cyc_Tcenv_Tenv*_T4C;struct Cyc_Tcenv_Genv*_T4D;struct Cyc_Dict_Dict(*_T4E)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Datatypedecl**);struct Cyc_Dict_Dict(*_T4F)(struct Cyc_Dict_Dict,void*,void*);struct Cyc_Tcenv_Tenv*_T50;struct Cyc_Tcenv_Genv*_T51;struct Cyc_Dict_Dict _T52;struct _tuple1*_T53;struct Cyc_Absyn_Datatypedecl**_T54;struct Cyc_List_List**_T55;struct Cyc_Tcenv_Tenv*_T56;unsigned _T57;struct _fat_ptr _T58;struct Cyc_Absyn_Datatypedecl*_T59;long _T5A;struct Cyc_Absyn_Datatypedecl*_T5B;struct _tuple1*_T5C;struct Cyc_List_List**_T5D;struct Cyc_List_List*_T5E;struct Cyc_List_List*_T5F;struct Cyc_Absyn_Datatypedecl*_T60;struct Cyc_Absyn_Datatypedecl**_T61;struct Cyc_Core_Opt*_T62;struct Cyc_Core_Opt*_T63;void**_T64;struct Cyc_Absyn_Datatypedecl***_T65;struct Cyc_Absyn_Datatypedecl**_T66;struct Cyc_Absyn_Datatypedecl*_T67;long _T68;struct Cyc_Absyn_Datatypedecl*_T69;unsigned _T6A;struct Cyc_Absyn_Datatypedecl*_T6B;long _T6C;struct Cyc_Absyn_Datatypedecl*_T6D;struct Cyc_Absyn_Datatypedecl**_T6E;struct Cyc_Absyn_Datatypedecl*_T6F;struct Cyc_Absyn_Datatypedecl*_T70;struct Cyc_Absyn_Datatypedecl*_T71;struct Cyc_List_List**_T72;struct Cyc_Tcenv_Tenv*_T73;unsigned _T74;struct _fat_ptr _T75;struct Cyc_Absyn_Datatypedecl*_T76;long _T77;struct Cyc_Absyn_Datatypedecl*_T78;struct _tuple1*_T79;struct Cyc_List_List**_T7A;struct Cyc_List_List*_T7B;struct Cyc_List_List*_T7C;struct Cyc_Absyn_Datatypedecl*_T7D;struct Cyc_Absyn_Datatypedecl**_T7E;_T0= tud;{
struct _tuple1*q=_T0->name;_T2= tud;_T3= _T2->is_extensible;
if(!_T3)goto _TLFD;_T1= _tag_fat("@extensible datatype",sizeof(char),21U);goto _TLFE;_TLFD: _T1= _tag_fat("datatype",sizeof(char),9U);_TLFE: {struct _fat_ptr obj=_T1;_T4= Cyc_Tc_debug;
if(!_T4)goto _TLFF;{struct Cyc_String_pa_PrintArg_struct _T7F;_T7F.tag= 0;
_T7F.f1= obj;_T5= _T7F;}{struct Cyc_String_pa_PrintArg_struct _T7F=_T5;{struct Cyc_String_pa_PrintArg_struct _T80;_T80.tag= 0;_T7= q;_T8= *_T7;_T9= _T8.f1;_T80.f1= *_T9;_T6= _T80;}{struct Cyc_String_pa_PrintArg_struct _T80=_T6;void*_T81[2];_T81[0]= & _T7F;_T81[1]= & _T80;_TA= Cyc_stderr;_TB= _tag_fat("type-checking %sdecl %s\n",sizeof(char),25U);_TC= _tag_fat(_T81,sizeof(void*),2);Cyc_fprintf(_TA,_TB,_TC);}}goto _TL100;_TLFF: _TL100: _TD= tud;{
# 684
struct Cyc_List_List*tvs=_TD->tvs;
# 687
Cyc_Tcutil_check_unique_tvars(loc,tvs);
Cyc_Tcutil_add_tvar_identities(tvs);{
# 693
struct Cyc_Absyn_Datatypedecl***tud_opt;{struct _handler_cons _T7F;_TE= & _T7F;_push_handler(_TE);{int _T80=0;_TF= setjmp(_T7F.handler);if(!_TF)goto _TL101;_T80= 1;goto _TL102;_TL101: _TL102: if(_T80)goto _TL103;else{goto _TL105;}_TL105: _T10= Cyc_Core_heap_region;_T11= te;_T12= loc;_T13= tud;_T14= _T13->name;
# 704
tud_opt= Cyc_Tcenv_lookup_xdatatypedecl(_T10,_T11,_T12,_T14);
if(tud_opt!=0)goto _TL106;_T15= tud;_T16= _T15->is_extensible;if(_T16)goto _TL106;else{goto _TL108;}
_TL108:{struct Cyc_Dict_Absent_exn_struct*_T81=_cycalloc(sizeof(struct Cyc_Dict_Absent_exn_struct));_T81->tag= Cyc_Dict_Absent;_T17= (struct Cyc_Dict_Absent_exn_struct*)_T81;}_T18= (void*)_T17;_throw(_T18);goto _TL107;_TL106: _TL107:
 if(tud_opt==0)goto _TL109;_T19= tud;_T1A= tud_opt;_T1B= *_T1A;_T1C= *_T1B;
_T19->name= _T1C->name;goto _TL10A;
# 710
_TL109: _T1D= tud;_T1E= _T1D->name;_T1F= te;_T20= _T1F->ns;({__typeof__(Cyc_Absyn_Abs_n(_T20,0))_T81=Cyc_Absyn_Abs_n(_T20,0);(*_T1E).f0= _T81;});_TL10A: _pop_handler();goto _TL104;_TL103: _T21= Cyc_Core_get_exn_thrown();{void*_T81=(void*)_T21;void*_T82;_T22= (struct Cyc_Dict_Absent_exn_struct*)_T81;_T23= _T22->tag;_T24= Cyc_Dict_Absent;if(_T23!=_T24)goto _TL10B;_T26= Cyc_Dict_lookup_opt;{
# 713
struct Cyc_Absyn_Datatypedecl***(*_T83)(struct Cyc_Dict_Dict,struct _tuple1*)=(struct Cyc_Absyn_Datatypedecl***(*)(struct Cyc_Dict_Dict,struct _tuple1*))_T26;_T25= _T83;}_T27= te;_T28= _T27->ae;_T29= _T28->datatypedecls;_T2A= q;{struct Cyc_Absyn_Datatypedecl***tdopt=_T25(_T29,_T2A);_T2C= tdopt;_T2D= (unsigned)_T2C;
if(!_T2D)goto _TL10D;{struct Cyc_Absyn_Datatypedecl***_T83=_cycalloc(sizeof(struct Cyc_Absyn_Datatypedecl**));_T2F= tdopt;*_T83= *_T2F;_T2E= (struct Cyc_Absyn_Datatypedecl***)_T83;}_T2B= _T2E;goto _TL10E;_TL10D: _T2B= 0;_TL10E: tud_opt= _T2B;goto _LL0;}_TL10B: _T82= _T81;{void*exn=_T82;_rethrow(exn);}_LL0:;}_TL104:;}}{struct _tuple20 _T7F;_T31= tud;
# 720
_T7F.f0= _T31->fields;_T7F.f1= tud_opt;_T30= _T7F;}{struct _tuple20 _T7F=_T30;struct Cyc_Absyn_Datatypedecl**_T80;void*_T81;_T32= _T7F.f0;if(_T32!=0)goto _TL10F;_T33= _T7F.f1;if(_T33!=0)goto _TL111;
# 724
Cyc_Tc_rule_out_mem_and_qual(loc,q,tvs);_T34= te;_T35= _T34->ae;_T37= Cyc_Dict_insert;{
struct Cyc_Dict_Dict(*_T82)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Datatypedecl**)=(struct Cyc_Dict_Dict(*)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Datatypedecl**))_T37;_T36= _T82;}_T38= te;_T39= _T38->ae;_T3A= _T39->datatypedecls;_T3B= q;{struct Cyc_Absyn_Datatypedecl**_T82=_cycalloc(sizeof(struct Cyc_Absyn_Datatypedecl*));*_T82= tud;_T3C= (struct Cyc_Absyn_Datatypedecl**)_T82;}({__typeof__(_T36(_T3A,_T3B,_T3C))_T82=_T36(_T3A,_T3B,_T3C);_T35->datatypedecls= _T82;});goto _LL5;_TL111: _T3D= _T7F.f1;{struct Cyc_Absyn_Datatypedecl**_T82=*_T3D;_T81= _T82;}_LLD:{struct Cyc_Absyn_Datatypedecl**tudp=_T81;_T3E= tudp;_T3F= *_T3E;_T40= tud;_T41= loc;_T42= Cyc_Tc_tc_msg;{
# 754
struct Cyc_Absyn_Datatypedecl*tud2=Cyc_Tcdecl_merge_datatypedecl(_T3F,_T40,_T41,_T42);
Cyc_Tc_rule_out_mem_and_qual(loc,q,tvs);
if(tud2==0)goto _TL113;_T43= tudp;
*_T43= tud2;goto _TL114;_TL113: _TL114: goto _LL5;}}_TL10F: _T44= _T7F.f1;if(_T44!=0)goto _TL115;_T45= _T7F.f0;{struct Cyc_Core_Opt _T82=*_T45;_T46= _T7F.f0;_T47= & _T46->v;_T81= (struct Cyc_List_List**)_T47;}{struct Cyc_List_List**fs=_T81;
# 729
struct Cyc_Absyn_Datatypedecl**tudp;tudp= _cycalloc(sizeof(struct Cyc_Absyn_Datatypedecl*));_T48= tudp;{struct Cyc_Absyn_Datatypedecl*_T82=_cycalloc(sizeof(struct Cyc_Absyn_Datatypedecl));_T82->sc= 3U;_T4A= tud;_T82->name= _T4A->name;_T82->tvs= tvs;_T82->fields= 0;_T4B= tud;_T82->is_extensible= _T4B->is_extensible;_T49= (struct Cyc_Absyn_Datatypedecl*)_T82;}*_T48= _T49;_T4C= te;_T4D= _T4C->ae;_T4F= Cyc_Dict_insert;{
struct Cyc_Dict_Dict(*_T82)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Datatypedecl**)=(struct Cyc_Dict_Dict(*)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Datatypedecl**))_T4F;_T4E= _T82;}_T50= te;_T51= _T50->ae;_T52= _T51->datatypedecls;_T53= q;_T54= tudp;({__typeof__(_T4E(_T52,_T53,_T54))_T82=_T4E(_T52,_T53,_T54);_T4D->datatypedecls= _T82;});_T55= fs;_T56= te;_T57= loc;_T58= obj;_T59= tud;_T5A= _T59->is_extensible;_T5B= tud;_T5C= _T5B->name;_T5D= fs;_T5E= *_T5D;_T5F= tvs;_T60= tud;
# 733
({__typeof__(Cyc_Tc_tcDatatypeFields(_T56,_T57,_T58,_T5A,_T5C,_T5E,_T5F,_T60))_T82=Cyc_Tc_tcDatatypeFields(_T56,_T57,_T58,_T5A,_T5C,_T5E,_T5F,_T60);*_T55= _T82;});
Cyc_Tc_rule_out_mem_and_qual(loc,q,tvs);_T61= tudp;
*_T61= tud;goto _LL5;}_TL115: _T62= _T7F.f0;{struct Cyc_Core_Opt _T82=*_T62;_T63= _T7F.f0;_T64= & _T63->v;_T81= (struct Cyc_List_List**)_T64;}_T65= _T7F.f1;{struct Cyc_Absyn_Datatypedecl**_T82=*_T65;_T80= _T82;}{struct Cyc_List_List**fs=(struct Cyc_List_List**)_T81;struct Cyc_Absyn_Datatypedecl**tudp=_T80;_T66= tudp;{
# 738
struct Cyc_Absyn_Datatypedecl*tud0=*_T66;_T67= tud;_T68= _T67->is_extensible;
# 741
if(_T68)goto _TL117;else{goto _TL119;}_TL119: _T69= tud0;_T6A= (unsigned)_T69;if(!_T6A)goto _TL117;_T6B= tud0;_T6C= _T6B->is_extensible;if(!_T6C)goto _TL117;_T6D= tud;
_T6D->is_extensible= 1;goto _TL118;_TL117: _TL118: _T6E= tudp;{struct Cyc_Absyn_Datatypedecl*_T82=_cycalloc(sizeof(struct Cyc_Absyn_Datatypedecl));
# 744
_T82->sc= 3U;_T70= tud;_T82->name= _T70->name;_T82->tvs= tvs;_T82->fields= 0;_T71= tud;_T82->is_extensible= _T71->is_extensible;_T6F= (struct Cyc_Absyn_Datatypedecl*)_T82;}*_T6E= _T6F;_T72= fs;_T73= te;_T74= loc;_T75= obj;_T76= tud;_T77= _T76->is_extensible;_T78= tud;_T79= _T78->name;_T7A= fs;_T7B= *_T7A;_T7C= tvs;_T7D= tud;
# 747
({__typeof__(Cyc_Tc_tcDatatypeFields(_T73,_T74,_T75,_T77,_T79,_T7B,_T7C,_T7D))_T82=Cyc_Tc_tcDatatypeFields(_T73,_T74,_T75,_T77,_T79,_T7B,_T7C,_T7D);*_T72= _T82;});_T7E= tudp;
# 749
*_T7E= tud0;_T81= tudp;goto _LLD;}}_LL5:;}}}}}}
# 762
void Cyc_Tc_tcEnumdecl(struct Cyc_Tcenv_Tenv*te,unsigned loc,struct Cyc_Absyn_Enumdecl*ed){struct Cyc_Absyn_Enumdecl*_T0;long _T1;struct Cyc_String_pa_PrintArg_struct _T2;struct _tuple1*_T3;struct _tuple1 _T4;struct _fat_ptr*_T5;struct Cyc___cycFILE*_T6;struct _fat_ptr _T7;struct _fat_ptr _T8;struct Cyc_Absyn_Enumdecl*_T9;struct Cyc_Core_Opt*_TA;struct Cyc_Absyn_Enumdecl*_TB;struct Cyc_Core_Opt*_TC;void*_TD;struct Cyc_List_List*_TE;void*_TF;long(*_T10)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*);long(*_T11)(int(*)(void*,void*),struct Cyc_List_List*,void*);int(*_T12)(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_List_List*_T13;struct Cyc_Absyn_Enumfield*_T14;struct _tuple1*_T15;struct _tuple1 _T16;struct _fat_ptr*_T17;long _T18;struct Cyc_Warn_String_Warn_Warg_struct _T19;struct Cyc_Warn_Qvar_Warn_Warg_struct _T1A;struct Cyc_Absyn_Enumfield*_T1B;struct Cyc_Absyn_Enumfield*_T1C;unsigned _T1D;struct _fat_ptr _T1E;struct Cyc_List_List*_T1F;struct _RegionHandle*_T20;struct Cyc_Absyn_Enumfield*_T21;struct _tuple1*_T22;struct _tuple1 _T23;struct _tuple17**(*_T24)(struct Cyc_Dict_Dict,struct _tuple1*);void**(*_T25)(struct Cyc_Dict_Dict,void*);struct Cyc_Tcenv_Tenv*_T26;struct Cyc_Tcenv_Genv*_T27;struct Cyc_Dict_Dict _T28;struct Cyc_Absyn_Enumfield*_T29;struct _tuple1*_T2A;struct _tuple17**_T2B;struct Cyc_Warn_String_Warn_Warg_struct _T2C;struct Cyc_Warn_Qvar_Warn_Warg_struct _T2D;struct Cyc_Absyn_Enumfield*_T2E;struct Cyc_Warn_String_Warn_Warg_struct _T2F;struct Cyc_Absyn_Enumfield*_T30;unsigned _T31;struct _fat_ptr _T32;struct Cyc_Absyn_Enumfield*_T33;struct Cyc_Absyn_Exp*_T34;struct Cyc_Absyn_Enumfield*_T35;unsigned _T36;unsigned _T37;struct Cyc_Absyn_Enumfield*_T38;unsigned _T39;struct Cyc_Absyn_Enumfield*_T3A;struct Cyc_Absyn_Exp*_T3B;long _T3C;struct Cyc_Absyn_Enumfield*_T3D;struct Cyc_Absyn_Exp*_T3E;struct Cyc_Absyn_Exp*_T3F;long _T40;struct Cyc_List_List*_T41;struct _handler_cons*_T42;int _T43;struct Cyc_Absyn_Enumdecl**(*_T44)(struct Cyc_Dict_Dict,struct _tuple1*);void*(*_T45)(struct Cyc_Dict_Dict,void*);struct Cyc_Tcenv_Tenv*_T46;struct Cyc_Tcenv_Genv*_T47;struct Cyc_Dict_Dict _T48;struct _tuple1*_T49;struct Cyc_Absyn_Enumdecl**_T4A;struct Cyc_Absyn_Enumdecl*_T4B;struct Cyc_Absyn_Enumdecl*_T4C;unsigned _T4D;struct _fat_ptr*_T4E;struct Cyc_Absyn_Enumdecl**_T4F;void*_T50;struct Cyc_Dict_Absent_exn_struct*_T51;char*_T52;char*_T53;struct Cyc_Absyn_Enumdecl**_T54;struct Cyc_Tcenv_Tenv*_T55;struct Cyc_Tcenv_Genv*_T56;struct Cyc_Dict_Dict(*_T57)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Enumdecl**);struct Cyc_Dict_Dict(*_T58)(struct Cyc_Dict_Dict,void*,void*);struct Cyc_Tcenv_Tenv*_T59;struct Cyc_Tcenv_Genv*_T5A;struct Cyc_Dict_Dict _T5B;struct _tuple1*_T5C;struct Cyc_Absyn_Enumdecl**_T5D;struct Cyc_Absyn_Enumdecl*_T5E;struct Cyc_Core_Opt*_T5F;struct Cyc_Absyn_Enumdecl*_T60;struct Cyc_Core_Opt*_T61;void*_T62;struct Cyc_List_List*_T63;void*_T64;struct Cyc_Tcenv_Tenv*_T65;struct Cyc_Absyn_Enumfield*_T66;struct Cyc_Absyn_Exp*_T67;struct Cyc_Absyn_Exp*_T68;struct Cyc_Absyn_Enumfield*_T69;struct Cyc_Absyn_Exp*_T6A;struct Cyc_Absyn_Exp*_T6B;long _T6C;struct Cyc_Warn_String_Warn_Warg_struct _T6D;struct Cyc_Warn_Qvar_Warn_Warg_struct _T6E;struct Cyc_Warn_String_Warn_Warg_struct _T6F;struct Cyc_Warn_Qvar_Warn_Warg_struct _T70;struct Cyc_Absyn_Enumfield*_T71;struct Cyc_Warn_String_Warn_Warg_struct _T72;unsigned _T73;struct _fat_ptr _T74;struct Cyc_List_List*_T75;_T0= ed;{
struct _tuple1*q=_T0->name;_T1= Cyc_Tc_debug;
if(!_T1)goto _TL11A;{struct Cyc_String_pa_PrintArg_struct _T76;_T76.tag= 0;_T3= q;_T4= *_T3;_T5= _T4.f1;
_T76.f1= *_T5;_T2= _T76;}{struct Cyc_String_pa_PrintArg_struct _T76=_T2;void*_T77[1];_T77[0]= & _T76;_T6= Cyc_stderr;_T7= _tag_fat("type-checking enumdecl %s",sizeof(char),26U);_T8= _tag_fat(_T77,sizeof(void*),1);Cyc_fprintf(_T6,_T7,_T8);}goto _TL11B;_TL11A: _TL11B: _T9= ed;_TA= _T9->fields;
# 768
if(_TA==0)goto _TL11C;{struct _RegionHandle _T76=_new_region(0U,"uprev_rgn");struct _RegionHandle*uprev_rgn=& _T76;_push_region(uprev_rgn);{
# 770
struct Cyc_List_List*prev_fields=0;
unsigned tag_count=0U;_TB= ed;_TC= _TB->fields;_TD= _TC->v;{
struct Cyc_List_List*fs=(struct Cyc_List_List*)_TD;_TL121: if(fs!=0)goto _TL11F;else{goto _TL120;}
_TL11F: _TE= fs;_TF= _TE->hd;{struct Cyc_Absyn_Enumfield*f=(struct Cyc_Absyn_Enumfield*)_TF;_T11= Cyc_List_mem;{
# 775
long(*_T77)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*)=(long(*)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*))_T11;_T10= _T77;}_T12= Cyc_strptrcmp;_T13= prev_fields;_T14= f;_T15= _T14->name;_T16= *_T15;_T17= _T16.f1;_T18= _T10(_T12,_T13,_T17);if(!_T18)goto _TL122;{struct Cyc_Warn_String_Warn_Warg_struct _T77;_T77.tag= 0;
({__typeof__(_tag_fat("duplicate enum constructor ",sizeof(char),28U))_T78=_tag_fat("duplicate enum constructor ",sizeof(char),28U);_T77.f1= _T78;});_T19= _T77;}{struct Cyc_Warn_String_Warn_Warg_struct _T77=_T19;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T78;_T78.tag= 1;_T1B= f;_T78.f1= _T1B->name;_T1A= _T78;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T78=_T1A;void*_T79[2];_T79[0]= & _T77;_T79[1]= & _T78;_T1C= f;_T1D= _T1C->loc;_T1E= _tag_fat(_T79,sizeof(void*),2);Cyc_Warn_err2(_T1D,_T1E);}}goto _TL123;
# 778
_TL122: _T20= uprev_rgn;{struct Cyc_List_List*_T77=_region_malloc(_T20,0U,sizeof(struct Cyc_List_List));_T21= f;_T22= _T21->name;_T23= *_T22;_T77->hd= _T23.f1;_T77->tl= prev_fields;_T1F= (struct Cyc_List_List*)_T77;}prev_fields= _T1F;_TL123: _T25= Cyc_Dict_lookup_opt;{
# 780
struct _tuple17**(*_T77)(struct Cyc_Dict_Dict,struct _tuple1*)=(struct _tuple17**(*)(struct Cyc_Dict_Dict,struct _tuple1*))_T25;_T24= _T77;}_T26= te;_T27= _T26->ae;_T28= _T27->ordinaries;_T29= f;_T2A= _T29->name;_T2B= _T24(_T28,_T2A);if(_T2B==0)goto _TL124;{struct Cyc_Warn_String_Warn_Warg_struct _T77;_T77.tag= 0;
({__typeof__(_tag_fat("enum field name ",sizeof(char),17U))_T78=_tag_fat("enum field name ",sizeof(char),17U);_T77.f1= _T78;});_T2C= _T77;}{struct Cyc_Warn_String_Warn_Warg_struct _T77=_T2C;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T78;_T78.tag= 1;_T2E= f;_T78.f1= _T2E->name;_T2D= _T78;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T78=_T2D;{struct Cyc_Warn_String_Warn_Warg_struct _T79;_T79.tag= 0;({__typeof__(_tag_fat(" shadows global name",sizeof(char),21U))_T7A=_tag_fat(" shadows global name",sizeof(char),21U);_T79.f1= _T7A;});_T2F= _T79;}{struct Cyc_Warn_String_Warn_Warg_struct _T79=_T2F;void*_T7A[3];_T7A[0]= & _T77;_T7A[1]= & _T78;_T7A[2]= & _T79;_T30= f;_T31= _T30->loc;_T32= _tag_fat(_T7A,sizeof(void*),3);Cyc_Warn_err2(_T31,_T32);}}}goto _TL125;_TL124: _TL125: _T33= f;_T34= _T33->tag;
if(_T34!=0)goto _TL126;_T35= f;_T36= tag_count;
tag_count= _T36 + 1;_T37= _T36;_T38= f;_T39= _T38->loc;({__typeof__(Cyc_Absyn_uint_exp(_T37,_T39))_T77=Cyc_Absyn_uint_exp(_T37,_T39);_T35->tag= _T77;});goto _TL127;
# 785
_TL126: _T3A= f;_T3B= _T3A->tag;_T3C= Cyc_Tcutil_is_const_exp(_T3B);if(!_T3C)goto _TL128;_T3D= f;_T3E= _T3D->tag;_T3F= 
_check_null(_T3E);{struct _tuple14 _T77=Cyc_Evexp_eval_const_uint_exp(_T3F);long _T78;unsigned _T79;_T79= _T77.f0;_T78= _T77.f1;{unsigned t1=_T79;long known=_T78;_T40= known;
if(!_T40)goto _TL12A;
tag_count= t1 + 1U;goto _TL12B;_TL12A: _TL12B:;}}goto _TL129;_TL128: _TL129: _TL127:;}_T41= fs;
# 772
fs= _T41->tl;goto _TL121;_TL120:;}}_pop_region();}goto _TL11D;_TL11C: _TL11D:{struct _handler_cons _T76;_T42= & _T76;_push_handler(_T42);{int _T77=0;_T43= setjmp(_T76.handler);if(!_T43)goto _TL12C;_T77= 1;goto _TL12D;_TL12C: _TL12D: if(_T77)goto _TL12E;else{goto _TL130;}_TL130: _T45= Cyc_Dict_lookup;{
# 795
struct Cyc_Absyn_Enumdecl**(*_T78)(struct Cyc_Dict_Dict,struct _tuple1*)=(struct Cyc_Absyn_Enumdecl**(*)(struct Cyc_Dict_Dict,struct _tuple1*))_T45;_T44= _T78;}_T46= te;_T47= _T46->ae;_T48= _T47->enumdecls;_T49= q;{struct Cyc_Absyn_Enumdecl**edp=_T44(_T48,_T49);_T4A= edp;_T4B= *_T4A;_T4C= ed;_T4D= loc;_T4E= Cyc_Tc_tc_msg;{
struct Cyc_Absyn_Enumdecl*ed2=Cyc_Tcdecl_merge_enumdecl(_T4B,_T4C,_T4D,_T4E);
if(ed2!=0)goto _TL131;_npop_handler(0);return;_TL131: _T4F= edp;
# 799
*_T4F= ed2;}}_pop_handler();goto _TL12F;_TL12E: _T50= Cyc_Core_get_exn_thrown();{void*_T78=(void*)_T50;void*_T79;_T51= (struct Cyc_Dict_Absent_exn_struct*)_T78;_T52= _T51->tag;_T53= Cyc_Dict_Absent;if(_T52!=_T53)goto _TL133;{
# 802
struct Cyc_Absyn_Enumdecl**edp;edp= _cycalloc(sizeof(struct Cyc_Absyn_Enumdecl*));_T54= edp;*_T54= ed;_T55= te;_T56= _T55->ae;_T58= Cyc_Dict_insert;{
struct Cyc_Dict_Dict(*_T7A)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Enumdecl**)=(struct Cyc_Dict_Dict(*)(struct Cyc_Dict_Dict,struct _tuple1*,struct Cyc_Absyn_Enumdecl**))_T58;_T57= _T7A;}_T59= te;_T5A= _T59->ae;_T5B= _T5A->enumdecls;_T5C= q;_T5D= edp;({__typeof__(_T57(_T5B,_T5C,_T5D))_T7A=_T57(_T5B,_T5C,_T5D);_T56->enumdecls= _T7A;});goto _LL3;}_TL133: _T79= _T78;{void*exn=_T79;_rethrow(exn);}_LL3:;}_TL12F:;}}_T5E= ed;_T5F= _T5E->fields;
# 808
if(_T5F==0)goto _TL135;_T60= ed;_T61= _T60->fields;_T62= _T61->v;{
struct Cyc_List_List*fs=(struct Cyc_List_List*)_T62;_TL13A: if(fs!=0)goto _TL138;else{goto _TL139;}
_TL138: _T63= fs;_T64= _T63->hd;{struct Cyc_Absyn_Enumfield*f=(struct Cyc_Absyn_Enumfield*)_T64;_T65= te;_T66= f;_T67= _T66->tag;_T68= 
_check_null(_T67);Cyc_Tcexp_tcExp(_T65,0,_T68);_T69= f;_T6A= _T69->tag;_T6B= 
_check_null(_T6A);_T6C= Cyc_Tcutil_is_const_exp(_T6B);if(_T6C)goto _TL13B;else{goto _TL13D;}
_TL13D:{struct Cyc_Warn_String_Warn_Warg_struct _T76;_T76.tag= 0;({__typeof__(_tag_fat("enum ",sizeof(char),6U))_T77=_tag_fat("enum ",sizeof(char),6U);_T76.f1= _T77;});_T6D= _T76;}{struct Cyc_Warn_String_Warn_Warg_struct _T76=_T6D;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T77;_T77.tag= 1;_T77.f1= q;_T6E= _T77;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T77=_T6E;{struct Cyc_Warn_String_Warn_Warg_struct _T78;_T78.tag= 0;({__typeof__(_tag_fat(", field ",sizeof(char),9U))_T79=_tag_fat(", field ",sizeof(char),9U);_T78.f1= _T79;});_T6F= _T78;}{struct Cyc_Warn_String_Warn_Warg_struct _T78=_T6F;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T79;_T79.tag= 1;_T71= f;_T79.f1= _T71->name;_T70= _T79;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T79=_T70;{struct Cyc_Warn_String_Warn_Warg_struct _T7A;_T7A.tag= 0;({__typeof__(_tag_fat(": expression is not constant",sizeof(char),29U))_T7B=_tag_fat(": expression is not constant",sizeof(char),29U);_T7A.f1= _T7B;});_T72= _T7A;}{struct Cyc_Warn_String_Warn_Warg_struct _T7A=_T72;void*_T7B[5];_T7B[0]= & _T76;_T7B[1]= & _T77;_T7B[2]= & _T78;_T7B[3]= & _T79;_T7B[4]= & _T7A;_T73= loc;_T74= _tag_fat(_T7B,sizeof(void*),5);Cyc_Warn_err2(_T73,_T74);}}}}}goto _TL13C;_TL13B: _TL13C:;}_T75= fs;
# 809
fs= _T75->tl;goto _TL13A;_TL139:;}goto _TL136;_TL135: _TL136:;}}
# 817
static long Cyc_Tc_okay_externC(unsigned loc,enum Cyc_Absyn_Scope sc,long in_include,long in_inc_rep){enum Cyc_Absyn_Scope _T0;int _T1;long _T2;struct Cyc_Warn_String_Warn_Warg_struct _T3;unsigned _T4;struct _fat_ptr _T5;struct Cyc_Warn_String_Warn_Warg_struct _T6;unsigned _T7;struct _fat_ptr _T8;long _T9;struct Cyc_Warn_String_Warn_Warg_struct _TA;unsigned _TB;struct _fat_ptr _TC;_T0= sc;_T1= (int)_T0;switch(_T1){case Cyc_Absyn_Static: _T2= in_include;
# 820
if(_T2)goto _TL13F;else{goto _TL141;}
_TL141:{struct Cyc_Warn_String_Warn_Warg_struct _TD;_TD.tag= 0;({__typeof__(_tag_fat("static declaration within extern \"C\"",sizeof(char),37U))_TE=_tag_fat("static declaration within extern \"C\"",sizeof(char),37U);_TD.f1= _TE;});_T3= _TD;}{struct Cyc_Warn_String_Warn_Warg_struct _TD=_T3;void*_TE[1];_TE[0]= & _TD;_T4= loc;_T5= _tag_fat(_TE,sizeof(void*),1);Cyc_Warn_warn2(_T4,_T5);}goto _TL140;_TL13F: _TL140:
 return 0;case Cyc_Absyn_Abstract:{struct Cyc_Warn_String_Warn_Warg_struct _TD;_TD.tag= 0;
# 824
({__typeof__(_tag_fat("abstract declaration within extern \"C\"",sizeof(char),39U))_TE=_tag_fat("abstract declaration within extern \"C\"",sizeof(char),39U);_TD.f1= _TE;});_T6= _TD;}{struct Cyc_Warn_String_Warn_Warg_struct _TD=_T6;void*_TE[1];_TE[0]= & _TD;_T7= loc;_T8= _tag_fat(_TE,sizeof(void*),1);Cyc_Warn_warn2(_T7,_T8);}
return 0;case Cyc_Absyn_Public: goto _LL8;case Cyc_Absyn_Register: _LL8: goto _LLA;case Cyc_Absyn_Extern: _LLA:
# 829
 return 1;case Cyc_Absyn_ExternC: goto _LLE;default: _LLE: _T9= in_inc_rep;
# 832
if(_T9)goto _TL142;else{goto _TL144;}
_TL144:{struct Cyc_Warn_String_Warn_Warg_struct _TD;_TD.tag= 0;({__typeof__(_tag_fat("nested extern \"C\" declaration",sizeof(char),30U))_TE=_tag_fat("nested extern \"C\" declaration",sizeof(char),30U);_TD.f1= _TE;});_TA= _TD;}{struct Cyc_Warn_String_Warn_Warg_struct _TD=_TA;void*_TE[1];_TE[0]= & _TD;_TB= loc;_TC= _tag_fat(_TE,sizeof(void*),1);Cyc_Warn_warn2(_TB,_TC);}goto _TL143;_TL142: _TL143:
 return 1;};}
# 838
static void Cyc_Tc_set_scopes(struct Cyc_List_List*ovrs,enum Cyc_Absyn_Scope sc){struct Cyc_List_List*_T0;void*_T1;struct Cyc_Absyn_Decl*_T2;int*_T3;unsigned _T4;struct Cyc_Absyn_Vardecl*_T5;struct Cyc_Absyn_Fndecl*_T6;struct Cyc_Absyn_Aggrdecl*_T7;struct Cyc_Absyn_Datatypedecl*_T8;struct Cyc_Absyn_Enumdecl*_T9;struct Cyc_List_List*_TA;
_TL148: if(ovrs!=0)goto _TL146;else{goto _TL147;}
_TL146: _T0= ovrs;_T1= _T0->hd;_T2= (struct Cyc_Absyn_Decl*)_T1;{void*_TB=_T2->r;struct Cyc_Absyn_Enumdecl*_TC;struct Cyc_Absyn_Datatypedecl*_TD;struct Cyc_Absyn_Aggrdecl*_TE;struct Cyc_Absyn_Fndecl*_TF;struct Cyc_Absyn_Vardecl*_T10;_T3= (int*)_TB;_T4= *_T3;switch(_T4){case 0:{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T11=(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_TB;_T10= _T11->f1;}{struct Cyc_Absyn_Vardecl*vd=_T10;_T5= vd;
# 842
_T5->sc= sc;goto _LL0;}case 1:{struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*_T11=(struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*)_TB;_TF= _T11->f1;}{struct Cyc_Absyn_Fndecl*fd=_TF;_T6= fd;
# 845
_T6->sc= sc;goto _LL0;}case 5:{struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T11=(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*)_TB;_TE= _T11->f1;}{struct Cyc_Absyn_Aggrdecl*ad=_TE;_T7= ad;
# 848
_T7->sc= sc;goto _LL0;}case 6:{struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct*_T11=(struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct*)_TB;_TD= _T11->f1;}{struct Cyc_Absyn_Datatypedecl*tud=_TD;_T8= tud;
# 851
_T8->sc= sc;goto _LL0;}case 7:{struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*_T11=(struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*)_TB;_TC= _T11->f1;}{struct Cyc_Absyn_Enumdecl*ed=_TC;_T9= ed;
# 854
_T9->sc= sc;goto _LL0;}default: goto _LL0;}_LL0:;}_TA= ovrs;
# 839
ovrs= _TA->tl;goto _TL148;_TL147:;}
# 866
static void Cyc_Tc_tc_decls(struct Cyc_Tcenv_Tenv*te,struct Cyc_List_List*ds0,long in_externC,long check_var_init,struct Cyc_List_List**exports){struct Cyc_List_List*_T0;void*_T1;struct Cyc_Absyn_Decl*_T2;struct Cyc_Absyn_Decl*_T3;int*_T4;unsigned _T5;struct Cyc_Warn_String_Warn_Warg_struct _T6;unsigned _T7;struct _fat_ptr _T8;struct Cyc_Warn_String_Warn_Warg_struct _T9;unsigned _TA;struct _fat_ptr _TB;long _TC;struct Cyc_Absyn_Decl*_TD;unsigned _TE;struct Cyc_Absyn_Vardecl*_TF;enum Cyc_Absyn_Scope _T10;struct Cyc_Tcenv_Tenv*_T11;long _T12;struct Cyc_Tcenv_Tenv*_T13;long _T14;long _T15;struct Cyc_Absyn_Vardecl*_T16;struct Cyc_Tcenv_Tenv*_T17;unsigned _T18;struct Cyc_Absyn_Vardecl*_T19;long _T1A;struct Cyc_Tcenv_Tenv*_T1B;long _T1C;struct Cyc_List_List**_T1D;long _T1E;struct Cyc_Absyn_Decl*_T1F;unsigned _T20;struct Cyc_Absyn_Fndecl*_T21;enum Cyc_Absyn_Scope _T22;struct Cyc_Tcenv_Tenv*_T23;long _T24;struct Cyc_Tcenv_Tenv*_T25;long _T26;long _T27;struct Cyc_Absyn_Fndecl*_T28;struct Cyc_Tcenv_Tenv*_T29;long _T2A;struct Cyc_Absyn_Fndecl*_T2B;struct Cyc_Absyn_Typedefdecl*_T2C;struct Cyc_Tcenv_Tenv*_T2D;long _T2E;struct Cyc_Absyn_Decl*_T2F;unsigned _T30;struct Cyc_Absyn_Aggrdecl*_T31;enum Cyc_Absyn_Scope _T32;struct Cyc_Tcenv_Tenv*_T33;long _T34;struct Cyc_Tcenv_Tenv*_T35;long _T36;long _T37;struct Cyc_Absyn_Aggrdecl*_T38;long _T39;struct Cyc_Absyn_Decl*_T3A;unsigned _T3B;struct Cyc_Absyn_Datatypedecl*_T3C;enum Cyc_Absyn_Scope _T3D;struct Cyc_Tcenv_Tenv*_T3E;long _T3F;struct Cyc_Tcenv_Tenv*_T40;long _T41;long _T42;struct Cyc_Absyn_Datatypedecl*_T43;long _T44;struct Cyc_Absyn_Decl*_T45;unsigned _T46;struct Cyc_Absyn_Enumdecl*_T47;enum Cyc_Absyn_Scope _T48;struct Cyc_Tcenv_Tenv*_T49;long _T4A;struct Cyc_Tcenv_Tenv*_T4B;long _T4C;long _T4D;struct Cyc_Absyn_Enumdecl*_T4E;struct Cyc_Warn_String_Warn_Warg_struct _T4F;struct Cyc_Absyn_Decl*_T50;unsigned _T51;struct _fat_ptr _T52;struct Cyc_Tcenv_Tenv*_T53;struct Cyc_Tcenv_Tenv*_T54;struct Cyc_List_List*_T55;struct Cyc_List_List*_T56;struct Cyc_Tcenv_Tenv*_T57;struct Cyc_Absyn_ExternCinclude_d_Absyn_Raw_decl_struct*_T58;struct Cyc_List_List**_T59;struct Cyc_List_List*_T5A;unsigned _T5B;struct Cyc_Tcenv_Tenv*_T5C;struct Cyc_Tcenv_Tenv*_T5D;struct Cyc_List_List**_T5E;struct Cyc_List_List*_T5F;long _T60;struct Cyc_Absyn_Decl*_T61;unsigned _T62;struct Cyc_Tcenv_Tenv*_T63;struct Cyc_List_List**_T64;struct Cyc_List_List*_T65;struct Cyc_List_List*_T66;struct Cyc_List_List*_T67;struct Cyc_List_List**_T68;unsigned _T69;struct Cyc_List_List**_T6A;struct Cyc_Tcenv_Tenv*_T6B;struct Cyc_Tcenv_Tenv*_T6C;struct Cyc_List_List**_T6D;struct Cyc_List_List*_T6E;long _T6F;struct Cyc_List_List**_T70;struct Cyc_List_List*_T71;void*_T72;struct _tuple16*_T73;struct _tuple16 _T74;long _T75;struct Cyc_Warn_Qvar_Warn_Warg_struct _T76;struct _tuple16*_T77;struct _tuple16 _T78;struct Cyc_Warn_String_Warn_Warg_struct _T79;struct _tuple16*_T7A;struct _tuple16 _T7B;unsigned _T7C;struct _fat_ptr _T7D;struct Cyc_List_List*_T7E;struct Cyc_List_List*_T7F;
# 868
struct Cyc_List_List*ds=ds0;_TL14D: if(ds!=0)goto _TL14B;else{goto _TL14C;}
_TL14B: _T0= ds;_T1= _T0->hd;{struct Cyc_Absyn_Decl*d=(struct Cyc_Absyn_Decl*)_T1;_T2= d;{
unsigned loc=_T2->loc;_T3= d;{
void*_T80=_T3->r;struct _tuple11*_T81;struct Cyc_List_List*_T82;struct Cyc_List_List*_T83;void*_T84;_T4= (int*)_T80;_T5= *_T4;switch(_T5){case 2: goto _LL4;case 3: _LL4:{struct Cyc_Warn_String_Warn_Warg_struct _T85;_T85.tag= 0;
# 874
({__typeof__(_tag_fat("top level let-declarations are not implemented",sizeof(char),47U))_T86=_tag_fat("top level let-declarations are not implemented",sizeof(char),47U);_T85.f1= _T86;});_T6= _T85;}{struct Cyc_Warn_String_Warn_Warg_struct _T85=_T6;void*_T86[1];_T86[0]= & _T85;_T7= loc;_T8= _tag_fat(_T86,sizeof(void*),1);Cyc_Warn_err2(_T7,_T8);}goto _LL0;case 4:{struct Cyc_Warn_String_Warn_Warg_struct _T85;_T85.tag= 0;
# 877
({__typeof__(_tag_fat("top level region declarations are not implemented",sizeof(char),50U))_T86=_tag_fat("top level region declarations are not implemented",sizeof(char),50U);_T85.f1= _T86;});_T9= _T85;}{struct Cyc_Warn_String_Warn_Warg_struct _T85=_T9;void*_T86[1];_T86[0]= & _T85;_TA= loc;_TB= _tag_fat(_T86,sizeof(void*),1);Cyc_Warn_err2(_TA,_TB);}goto _LL0;case 0:{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T85=(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T80;_T84= _T85->f1;}{struct Cyc_Absyn_Vardecl*vd=_T84;_TC= in_externC;
# 880
if(!_TC)goto _TL14F;_TD= d;_TE= _TD->loc;_TF= vd;_T10= _TF->sc;_T11= te;_T12= _T11->in_extern_c_include;_T13= te;_T14= _T13->in_extern_c_inc_repeat;_T15= 
Cyc_Tc_okay_externC(_TE,_T10,_T12,_T14);
# 880
if(!_T15)goto _TL14F;_T16= vd;
# 882
_T16->sc= 4U;goto _TL150;_TL14F: _TL150: _T17= te;_T18= loc;_T19= vd;_T1A= check_var_init;_T1B= te;_T1C= _T1B->in_extern_c_include;_T1D= exports;
Cyc_Tc_tcVardecl(_T17,_T18,_T19,_T1A,_T1C,_T1D);goto _LL0;}case 1:{struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*_T85=(struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*)_T80;_T84= _T85->f1;}{struct Cyc_Absyn_Fndecl*fd=_T84;_T1E= in_externC;
# 886
if(!_T1E)goto _TL151;_T1F= d;_T20= _T1F->loc;_T21= fd;_T22= _T21->sc;_T23= te;_T24= _T23->in_extern_c_include;_T25= te;_T26= _T25->in_extern_c_inc_repeat;_T27= 
Cyc_Tc_okay_externC(_T20,_T22,_T24,_T26);
# 886
if(!_T27)goto _TL151;_T28= fd;
# 888
_T28->sc= 4U;goto _TL152;_TL151: _TL152: _T29= te;_T2A= _T29->in_extern_c_include;
if(!_T2A)goto _TL153;_T2B= fd;
_T2B->orig_scope= 4U;goto _TL154;_TL153: _TL154:
 Cyc_Tc_tcFndecl(te,loc,fd,exports);goto _LL0;}case 8:{struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct*_T85=(struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct*)_T80;_T84= _T85->f1;}{struct Cyc_Absyn_Typedefdecl*td=_T84;_T2C= td;_T2D= te;
# 894
_T2C->extern_c= _T2D->in_extern_c_include;
# 898
Cyc_Tc_tcTypedefdecl(te,loc,td);goto _LL0;}case 5:{struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T85=(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*)_T80;_T84= _T85->f1;}{struct Cyc_Absyn_Aggrdecl*ad=_T84;_T2E= in_externC;
# 901
if(!_T2E)goto _TL155;_T2F= d;_T30= _T2F->loc;_T31= ad;_T32= _T31->sc;_T33= te;_T34= _T33->in_extern_c_include;_T35= te;_T36= _T35->in_extern_c_inc_repeat;_T37= 
Cyc_Tc_okay_externC(_T30,_T32,_T34,_T36);
# 901
if(!_T37)goto _TL155;_T38= ad;
# 903
_T38->sc= 4U;goto _TL156;_TL155: _TL156:
 Cyc_Tc_tcAggrdecl(te,loc,ad);goto _LL0;}case 6:{struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct*_T85=(struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct*)_T80;_T84= _T85->f1;}{struct Cyc_Absyn_Datatypedecl*tud=_T84;_T39= in_externC;
# 907
if(!_T39)goto _TL157;_T3A= d;_T3B= _T3A->loc;_T3C= tud;_T3D= _T3C->sc;_T3E= te;_T3F= _T3E->in_extern_c_include;_T40= te;_T41= _T40->in_extern_c_inc_repeat;_T42= 
Cyc_Tc_okay_externC(_T3B,_T3D,_T3F,_T41);
# 907
if(!_T42)goto _TL157;_T43= tud;
# 909
_T43->sc= 4U;goto _TL158;_TL157: _TL158:
 Cyc_Tc_tcDatatypedecl(te,loc,tud);goto _LL0;}case 7:{struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*_T85=(struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*)_T80;_T84= _T85->f1;}{struct Cyc_Absyn_Enumdecl*ed=_T84;_T44= in_externC;
# 913
if(!_T44)goto _TL159;_T45= d;_T46= _T45->loc;_T47= ed;_T48= _T47->sc;_T49= te;_T4A= _T49->in_extern_c_include;_T4B= te;_T4C= _T4B->in_extern_c_inc_repeat;_T4D= 
Cyc_Tc_okay_externC(_T46,_T48,_T4A,_T4C);
# 913
if(!_T4D)goto _TL159;_T4E= ed;
# 915
_T4E->sc= 4U;goto _TL15A;_TL159: _TL15A:
 Cyc_Tc_tcEnumdecl(te,loc,ed);goto _LL0;}case 13:{struct Cyc_Warn_String_Warn_Warg_struct _T85;_T85.tag= 0;
# 919
({__typeof__(_tag_fat("spurious __cyclone_port_on__",sizeof(char),29U))_T86=_tag_fat("spurious __cyclone_port_on__",sizeof(char),29U);_T85.f1= _T86;});_T4F= _T85;}{struct Cyc_Warn_String_Warn_Warg_struct _T85=_T4F;void*_T86[1];_T86[0]= & _T85;_T50= d;_T51= _T50->loc;_T52= _tag_fat(_T86,sizeof(void*),1);Cyc_Warn_warn2(_T51,_T52);}goto _LL0;case 14: goto _LL0;case 15:
# 924
 te= Cyc_Tcenv_enter_tempest(te);goto _LL0;case 16:
# 927
 te= Cyc_Tcenv_clear_tempest(te);goto _LL0;case 9:{struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct*_T85=(struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct*)_T80;_T84= _T85->f1;_T83= _T85->f2;}{struct _fat_ptr*v=_T84;struct Cyc_List_List*ds2=_T83;_T53= te;{
# 931
struct Cyc_List_List*ns=_T53->ns;_T54= te;_T55= ns;{struct Cyc_List_List*_T85=_cycalloc(sizeof(struct Cyc_List_List));
_T85->hd= v;_T85->tl= 0;_T56= (struct Cyc_List_List*)_T85;}({__typeof__(Cyc_List_append(_T55,_T56))_T85=Cyc_List_append(_T55,_T56);_T54->ns= _T85;});
Cyc_Tc_tc_decls(te,ds2,in_externC,check_var_init,exports);_T57= te;
_T57->ns= ns;goto _LL0;}}case 10:{struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct*_T85=(struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct*)_T80;_T84= _T85->f2;}{struct Cyc_List_List*ds2=_T84;
# 938
Cyc_Tc_tc_decls(te,ds2,in_externC,check_var_init,exports);goto _LL0;}case 11:{struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct*_T85=(struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct*)_T80;_T84= _T85->f1;}{struct Cyc_List_List*ds2=_T84;
# 942
Cyc_Tc_tc_decls(te,ds2,1,check_var_init,exports);goto _LL0;}default:{struct Cyc_Absyn_ExternCinclude_d_Absyn_Raw_decl_struct*_T85=(struct Cyc_Absyn_ExternCinclude_d_Absyn_Raw_decl_struct*)_T80;_T58= (struct Cyc_Absyn_ExternCinclude_d_Absyn_Raw_decl_struct*)_T80;_T59= & _T58->f1;_T84= (struct Cyc_List_List**)_T59;_T83= _T85->f2;_T82= _T85->f3;_T81= _T85->f4;}{struct Cyc_List_List**ds2=(struct Cyc_List_List**)_T84;struct Cyc_List_List*ovrs=_T83;struct Cyc_List_List*exports2=_T82;struct _tuple11*wc=_T81;_T5A= ovrs;_T5B= (unsigned)_T5A;
# 948
if(!_T5B)goto _TL15B;{
struct Cyc_Tcenv_Tenv*tecpy=Cyc_Tcenv_copy_tenv_dicts(te);_T5C= tecpy;
_T5C->in_extern_c_include= 1;_T5D= tecpy;_T5E= ds2;_T5F= *_T5E;_T60= check_var_init;
Cyc_Tc_tc_decls(_T5D,_T5F,1,_T60,0);
Cyc_Toc_init();
Cyc_Tc_set_scopes(ovrs,4U);_T61= d;_T62= _T61->loc;_T63= tecpy;_T64= ds2;_T65= ovrs;
# 955
Cyc_Cifc_user_overrides(_T62,_T63,_T64,_T65);
Cyc_Toc_finish();}goto _TL15C;_TL15B: _TL15C: _T66= exports2;_T68= exports;_T69= (unsigned)_T68;
# 958
if(!_T69)goto _TL15D;_T6A= exports;_T67= *_T6A;goto _TL15E;_TL15D: _T67= 0;_TL15E: {struct Cyc_List_List*newexs=Cyc_List_append(_T66,_T67);
struct Cyc_Tcenv_Tenv*te2=Cyc_Tcenv_enter_extern_c_include(te);_T6B= te2;
_T6B->in_extern_c_inc_repeat= ovrs!=0;_T6C= te2;_T6D= ds2;_T6E= *_T6D;_T6F= check_var_init;_T70= & newexs;
Cyc_Tc_tc_decls(_T6C,_T6E,1,_T6F,_T70);
# 964
_TL162: if(exports2!=0)goto _TL160;else{goto _TL161;}
_TL160: _T71= exports2;_T72= _T71->hd;{struct _tuple16*exp=(struct _tuple16*)_T72;_T73= exp;_T74= *_T73;_T75= _T74.f2;
if(_T75)goto _TL163;else{goto _TL165;}
_TL165:{struct Cyc_Warn_Qvar_Warn_Warg_struct _T85;_T85.tag= 1;_T77= exp;_T78= *_T77;_T85.f1= _T78.f1;_T76= _T85;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T85=_T76;{struct Cyc_Warn_String_Warn_Warg_struct _T86;_T86.tag= 0;({__typeof__(_tag_fat(" is exported but not defined",sizeof(char),29U))_T87=_tag_fat(" is exported but not defined",sizeof(char),29U);_T86.f1= _T87;});_T79= _T86;}{struct Cyc_Warn_String_Warn_Warg_struct _T86=_T79;void*_T87[2];_T87[0]= & _T85;_T87[1]= & _T86;_T7A= exp;_T7B= *_T7A;_T7C= _T7B.f0;_T7D= _tag_fat(_T87,sizeof(void*),2);Cyc_Warn_warn2(_T7C,_T7D);}}goto _TL164;_TL163: _TL164:;}_T7E= exports2;
# 964
exports2= _T7E->tl;goto _TL162;_TL161: goto _LL0;}}}_LL0:;}}}_T7F= ds;
# 868
ds= _T7F->tl;goto _TL14D;_TL14C:;}
# 974
void Cyc_Tc_tc(struct Cyc_Tcenv_Tenv*te,long check_var_init,struct Cyc_List_List*ds){struct Cyc_Absynpp_Params*_T0;struct Cyc_Absynpp_Params*_T1;_T0= & Cyc_Absynpp_tc_params_r;_T1= (struct Cyc_Absynpp_Params*)_T0;
Cyc_Absynpp_set_params(_T1);
Cyc_Tc_tc_decls(te,ds,0,check_var_init,0);}struct Cyc_Tc_TreeshakeEnv{long in_cinclude;struct Cyc_Dict_Dict ordinaries;};
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
