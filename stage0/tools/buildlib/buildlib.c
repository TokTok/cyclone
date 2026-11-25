#include <cyc_include.h>
 struct Cyc_Core_Opt{void*v;};extern char Cyc_Core_Invalid_argument[17U];struct Cyc_Core_Invalid_argument_exn_struct{char*tag;struct _fat_ptr f1;};extern char Cyc_Core_Failure[8U];struct Cyc_Core_Failure_exn_struct{char*tag;struct _fat_ptr f1;};extern char Cyc_Core_Impossible[11U];struct Cyc_Core_Impossible_exn_struct{char*tag;struct _fat_ptr f1;};extern char Cyc_Core_Not_found[10U];struct Cyc_Core_Not_found_exn_struct{char*tag;};
# 166 "./cyclone/library/std/core.h"
extern struct _RegionHandle*Cyc_Core_heap_region;
# 312 "./cyclone/library/std/core.h"
void Cyc_Core_rethrow(void*);
# 38 "./cyclone/library/std/cycboot.h"
extern int Cyc_open(const char*,int,struct _fat_ptr);struct Cyc___cycFILE;
# 51
extern struct Cyc___cycFILE*Cyc_stdout;
# 53
extern struct Cyc___cycFILE*Cyc_stderr;struct Cyc_String_pa_PrintArg_struct{int tag;struct _fat_ptr f1;};struct Cyc_Int_pa_PrintArg_struct{int tag;unsigned long f1;};
# 75
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
# 79
extern int Cyc_fclose(struct Cyc___cycFILE*);
# 88
extern int Cyc_fflush(struct Cyc___cycFILE*);
# 98
extern struct Cyc___cycFILE*Cyc_fopen(const char*,const char*);
# 100
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 104
extern int Cyc_fputc(int,struct Cyc___cycFILE*);
# 106
extern int Cyc_fputs(const char*,struct Cyc___cycFILE*);
# 223
extern int Cyc_vfprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 298
extern int isspace(int);
# 308
extern int toupper(int);
# 316
extern int system(const char*);
extern void exit(int);
# 328
extern int mkdir(const char*,unsigned short);
# 331
extern int close(int);
# 333
extern struct _fat_ptr Cyc_getcwd(struct _fat_ptr,unsigned long);struct Cyc_List_List{void*hd;struct Cyc_List_List*tl;};
# 57 "./cyclone/library/std/list.h"
extern struct Cyc_List_List*Cyc_List_list(struct _fat_ptr);
# 79
extern struct Cyc_List_List*Cyc_List_map(void*(*)(void*),struct Cyc_List_List*);
# 173
extern struct Cyc_List_List*Cyc_List_rev(struct Cyc_List_List*);
# 179
extern struct Cyc_List_List*Cyc_List_imp_rev(struct Cyc_List_List*);
# 185
extern struct Cyc_List_List*Cyc_List_append(struct Cyc_List_List*,struct Cyc_List_List*);struct _tuple0{struct Cyc_List_List*f0;struct Cyc_List_List*f1;};
# 291
extern struct _tuple0 Cyc_List_split(struct Cyc_List_List*);
# 317
extern long Cyc_List_mem(int(*)(void*,void*),struct Cyc_List_List*,void*);
# 40 "./cyclone/library/std/string.h"
extern unsigned long Cyc_strlen(struct _fat_ptr);
# 51
extern int Cyc_strcmp(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_strptrcmp(struct _fat_ptr*,struct _fat_ptr*);
extern int Cyc_strncmp(struct _fat_ptr,struct _fat_ptr,unsigned long);
# 64
extern struct _fat_ptr Cyc_strconcat(struct _fat_ptr,struct _fat_ptr);
# 66
extern struct _fat_ptr Cyc_strconcat_l(struct Cyc_List_List*);
# 68
extern struct _fat_ptr Cyc_str_sepstr(struct Cyc_List_List*,struct _fat_ptr);
# 107
extern struct _fat_ptr Cyc_strdup(struct _fat_ptr);
# 112
extern struct _fat_ptr Cyc_substring(struct _fat_ptr,int,unsigned long);struct Cyc_AssnDef_ExistAssnFn;struct _union_Nmspace_Abs_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_Rel_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_C_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_Loc_n{int tag;int val;};union Cyc_Absyn_Nmspace{struct _union_Nmspace_Abs_n Abs_n;struct _union_Nmspace_Rel_n Rel_n;struct _union_Nmspace_C_n C_n;struct _union_Nmspace_Loc_n Loc_n;};struct _tuple1{union Cyc_Absyn_Nmspace f0;struct _fat_ptr*f1;};
# 148 "./cyclone/library/compiler/absyn.h"
enum Cyc_Absyn_Scope{Cyc_Absyn_Static =0U,Cyc_Absyn_Abstract =1U,Cyc_Absyn_Public =2U,Cyc_Absyn_Extern =3U,Cyc_Absyn_ExternC =4U,Cyc_Absyn_Register =5U,Cyc_Absyn_Noreturn =6U};struct Cyc_Absyn_Tqual{long print_const: 1;long q_volatile: 1;long q_restrict: 1;long real_const: 1;unsigned loc;};
# 186
enum Cyc_Absyn_AggrKind{Cyc_Absyn_StructA =0U,Cyc_Absyn_UnionA =1U};struct Cyc_Absyn_PtrLoc{unsigned ptr_loc;unsigned rgn_loc;unsigned zt_loc;};struct Cyc_Absyn_PtrAtts{void*eff;void*nullable;void*bounds;void*zero_term;struct Cyc_Absyn_PtrLoc*ptrloc;void*autoreleased;void*aqual;};struct Cyc_Absyn_PtrInfo{void*elt_type;struct Cyc_Absyn_Tqual elt_tq;struct Cyc_Absyn_PtrAtts ptr_atts;};struct Cyc_Absyn_VarargInfo{struct _fat_ptr*name;struct Cyc_Absyn_Tqual tq;void*type;long inject;};struct Cyc_Absyn_FnInfo{struct Cyc_List_List*tvars;void*effect;struct Cyc_Absyn_Tqual ret_tqual;void*ret_type;struct Cyc_List_List*args;long c_varargs;struct Cyc_Absyn_VarargInfo*cyc_varargs;struct Cyc_List_List*qual_bnd;struct Cyc_List_List*attributes;struct Cyc_Absyn_Exp*checks_clause;struct Cyc_AssnDef_ExistAssnFn*checks_assn;struct Cyc_Absyn_Exp*requires_clause;struct Cyc_AssnDef_ExistAssnFn*requires_assn;struct Cyc_Absyn_Exp*ensures_clause;struct Cyc_AssnDef_ExistAssnFn*ensures_assn;struct Cyc_Absyn_Exp*throws_clause;struct Cyc_AssnDef_ExistAssnFn*throws_assn;struct Cyc_Absyn_Vardecl*return_value;struct Cyc_List_List*arg_vardecls;struct Cyc_List_List*effconstr;};struct _tuple3{enum Cyc_Absyn_AggrKind f0;struct _tuple1*f1;struct Cyc_Core_Opt*f2;};struct _union_AggrInfo_UnknownAggr{int tag;struct _tuple3 val;};struct _union_AggrInfo_KnownAggr{int tag;struct Cyc_Absyn_Aggrdecl**val;};union Cyc_Absyn_AggrInfo{struct _union_AggrInfo_UnknownAggr UnknownAggr;struct _union_AggrInfo_KnownAggr KnownAggr;};struct Cyc_Absyn_ArrayInfo{void*elt_type;struct Cyc_Absyn_Tqual tq;struct Cyc_Absyn_Exp*num_elts;void*zero_term;unsigned zt_loc;};struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct{int tag;struct Cyc_Absyn_Aggrdecl*f1;};struct Cyc_Absyn_Enum_td_Absyn_Raw_typedecl_struct{int tag;struct Cyc_Absyn_Enumdecl*f1;};struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct{int tag;struct Cyc_Absyn_Datatypedecl*f1;};struct Cyc_Absyn_TypeDecl{void*r;unsigned loc;};struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct{int tag;struct _tuple1*f1;struct Cyc_Absyn_Enumdecl*f2;};struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct{int tag;union Cyc_Absyn_AggrInfo f1;};struct Cyc_Absyn_AppType_Absyn_Type_struct{int tag;void*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_PointerType_Absyn_Type_struct{int tag;struct Cyc_Absyn_PtrInfo f1;};struct Cyc_Absyn_ArrayType_Absyn_Type_struct{int tag;struct Cyc_Absyn_ArrayInfo f1;};struct Cyc_Absyn_FnType_Absyn_Type_struct{int tag;struct Cyc_Absyn_FnInfo f1;};struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct{int tag;enum Cyc_Absyn_AggrKind f1;long f2;struct Cyc_List_List*f3;};struct Cyc_Absyn_TypedefType_Absyn_Type_struct{int tag;struct _tuple1*f1;struct Cyc_List_List*f2;struct Cyc_Absyn_Typedefdecl*f3;void*f4;};struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct{int tag;struct Cyc_Absyn_TypeDecl*f1;void**f2;};struct Cyc_Absyn_TypeofType_Absyn_Type_struct{int tag;struct Cyc_Absyn_Exp*f1;};
# 600 "./cyclone/library/compiler/absyn.h"
enum Cyc_Absyn_Primop{Cyc_Absyn_Plus =0U,Cyc_Absyn_Times =1U,Cyc_Absyn_Minus =2U,Cyc_Absyn_Div =3U,Cyc_Absyn_Mod =4U,Cyc_Absyn_Eq =5U,Cyc_Absyn_Neq =6U,Cyc_Absyn_Gt =7U,Cyc_Absyn_Lt =8U,Cyc_Absyn_Gte =9U,Cyc_Absyn_Lte =10U,Cyc_Absyn_Not =11U,Cyc_Absyn_Bitnot =12U,Cyc_Absyn_Bitand =13U,Cyc_Absyn_Bitor =14U,Cyc_Absyn_Bitxor =15U,Cyc_Absyn_Bitlshift =16U,Cyc_Absyn_Bitlrshift =17U,Cyc_Absyn_Numelts =18U,Cyc_Absyn_Tagof =19U,Cyc_Absyn_UDiv =20U,Cyc_Absyn_UMod =21U,Cyc_Absyn_UGt =22U,Cyc_Absyn_ULt =23U,Cyc_Absyn_UGte =24U,Cyc_Absyn_ULte =25U};struct Cyc_Absyn_PrimopOpt{enum Cyc_Absyn_Primop v;};
# 635
enum Cyc_Absyn_Incrementor{Cyc_Absyn_PreInc =0U,Cyc_Absyn_PostInc =1U,Cyc_Absyn_PreDec =2U,Cyc_Absyn_PostDec =3U};struct Cyc_Absyn_VarargCallInfo{int num_varargs;struct Cyc_List_List*injectors;struct Cyc_Absyn_VarargInfo*vai;};struct Cyc_Absyn_StructField_Absyn_OffsetofField_struct{int tag;struct _fat_ptr*f1;};
# 660
enum Cyc_Absyn_Coercion{Cyc_Absyn_Unknown_coercion =0U,Cyc_Absyn_No_coercion =1U,Cyc_Absyn_Null_to_NonNull =2U,Cyc_Absyn_Subset_coercion =3U,Cyc_Absyn_Other_coercion =4U};
# 675
enum Cyc_Absyn_MallocKind{Cyc_Absyn_Malloc =0U,Cyc_Absyn_Calloc =1U,Cyc_Absyn_Vmalloc =2U};struct Cyc_Absyn_MallocInfo{enum Cyc_Absyn_MallocKind mknd;struct Cyc_Absyn_Exp*rgn;struct Cyc_Absyn_Exp*aqual;void**elt_type;struct Cyc_Absyn_Exp*num_elts;long fat_result;long inline_call;};struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct{int tag;void*f1;};struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct{int tag;enum Cyc_Absyn_Primop f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_PrimopOpt*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;enum Cyc_Absyn_Incrementor f2;};struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_List_List*f2;struct Cyc_Absyn_VarargCallInfo*f3;long f4;};struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct{int tag;void*f1;struct Cyc_Absyn_Exp*f2;long f3;enum Cyc_Absyn_Coercion f4;};struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct{int tag;void*f1;};struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct{int tag;void*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _fat_ptr*f2;long f3;long f4;};struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _fat_ptr*f2;long f3;long f4;};struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct _tuple9{struct _fat_ptr*f0;struct Cyc_Absyn_Tqual f1;void*f2;};struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_MallocInfo f1;};struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Core_Opt*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _fat_ptr*f2;};struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct{int tag;void*f1;};struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Exp{void*topt;void*r;unsigned loc;void*annot;};struct Cyc_Absyn_Stmt{void*r;unsigned loc;void*annot;};struct Cyc_Absyn_Vardecl{enum Cyc_Absyn_Scope sc;struct _tuple1*name;unsigned varloc;struct Cyc_Absyn_Tqual tq;void*type;struct Cyc_Absyn_Exp*initializer;void*rgn;struct Cyc_List_List*attributes;long escapes;long is_proto;struct Cyc_Absyn_Exp*rename;};struct Cyc_Absyn_Fndecl{enum Cyc_Absyn_Scope sc;long is_inline;struct _tuple1*name;struct Cyc_Absyn_Stmt*body;struct Cyc_Absyn_FnInfo i;void*cached_type;struct Cyc_Core_Opt*param_vardecls;struct Cyc_Absyn_Vardecl*fn_vardecl;enum Cyc_Absyn_Scope orig_scope;long escapes;};struct Cyc_Absyn_Aggrfield{struct _fat_ptr*name;struct Cyc_Absyn_Tqual tq;void*type;struct Cyc_Absyn_Exp*width;struct Cyc_List_List*attributes;struct Cyc_Absyn_Exp*requires_clause;};struct Cyc_Absyn_AggrdeclImpl{struct Cyc_List_List*exist_vars;struct Cyc_List_List*qual_bnd;struct Cyc_List_List*fields;long tagged;struct Cyc_List_List*effconstr;};struct Cyc_Absyn_Aggrdecl{enum Cyc_Absyn_AggrKind kind;enum Cyc_Absyn_Scope sc;struct _tuple1*name;struct Cyc_List_List*tvs;struct Cyc_Absyn_AggrdeclImpl*impl;struct Cyc_List_List*attributes;long expected_mem_kind;};struct Cyc_Absyn_Datatypedecl{enum Cyc_Absyn_Scope sc;struct _tuple1*name;struct Cyc_List_List*tvs;struct Cyc_Core_Opt*fields;long is_extensible;};struct Cyc_Absyn_Enumfield{struct _tuple1*name;struct Cyc_Absyn_Exp*tag;unsigned loc;};struct Cyc_Absyn_Enumdecl{enum Cyc_Absyn_Scope sc;struct _tuple1*name;struct Cyc_Core_Opt*fields;};struct Cyc_Absyn_Typedefdecl{struct _tuple1*name;struct Cyc_Absyn_Tqual tq;struct Cyc_List_List*tvs;struct Cyc_Core_Opt*kind;void*defn;struct Cyc_List_List*atts;long extern_c;};struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Fndecl*f1;};struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Aggrdecl*f1;};struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Enumdecl*f1;};struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Typedefdecl*f1;};struct Cyc_Absyn_Decl{void*r;unsigned loc;};
# 1288
struct Cyc_Absyn_Decl*Cyc_Absyn_new_decl(void*,unsigned);
# 1339
struct Cyc_Absyn_Decl*Cyc_Absyn_lookup_decl(struct Cyc_List_List*,struct _fat_ptr*);struct _tuple12{enum Cyc_Absyn_AggrKind f0;struct _tuple1*f1;};
# 1345
struct _tuple12 Cyc_Absyn_aggr_kinded_name(union Cyc_Absyn_AggrInfo);
# 1353
struct _tuple1*Cyc_Absyn_binding2qvar(void*);struct Cyc_Absynpp_Params{long expand_typedefs;long qvar_to_Cids;long add_cyc_prefix;long decls_first;long rewrite_temp_tvars;long print_all_tvars;long print_all_kinds;long print_all_effects;long print_using_stmts;long print_externC_stmts;long print_full_evars;long print_zeroterm;long generate_line_directives;long use_curr_namespace;struct Cyc_List_List*curr_namespace;long gen_clean_cyclone;};
# 54 "./cyclone/library/compiler/absynpp.h"
void Cyc_Absynpp_set_params(struct Cyc_Absynpp_Params*);
# 56
extern struct Cyc_Absynpp_Params Cyc_Absynpp_cyc_params_r;
# 58
void Cyc_Absynpp_decllist2file(struct Cyc_List_List*,struct Cyc___cycFILE*);
# 63
struct _fat_ptr Cyc_Absynpp_typ2string(void*);struct Cyc_Iter_Iter{void*env;long(*next)(void*,void*);};
# 37 "./cyclone/library/std/iter.h"
long Cyc_Iter_next(struct Cyc_Iter_Iter,void*);struct Cyc_Dict_T;struct Cyc_Dict_Dict{int(*rel)(void*,void*);struct _RegionHandle*r;const struct Cyc_Dict_T*t;};extern char Cyc_Dict_Absent[7U];struct Cyc_Dict_Absent_exn_struct{char*tag;};
# 31 "./cyclone/library/compiler/binding.h"
void Cyc_Binding_resolve_all(struct Cyc_List_List*);struct Cyc_Tcenv_Genv{struct Cyc_Dict_Dict aggrdecls;struct Cyc_Dict_Dict datatypedecls;struct Cyc_Dict_Dict enumdecls;struct Cyc_Dict_Dict typedefs;struct Cyc_Dict_Dict ordinaries;};struct Cyc_Tcenv_Fenv;struct Cyc_Tcenv_Tenv{struct Cyc_List_List*ns;struct Cyc_Tcenv_Genv*ae;struct Cyc_Tcenv_Fenv*le;long allow_valueof: 1;long in_extern_c_include: 1;long in_tempest: 1;long tempest_generalize: 1;long in_extern_c_inc_repeat: 1;};
# 68 "./cyclone/library/compiler/tcenv.h"
struct Cyc_Tcenv_Tenv*Cyc_Tcenv_tc_init (void);struct Cyc_Hashtable_Table;
# 42 "./cyclone/library/std/hashtable.h"
extern struct Cyc_Hashtable_Table*Cyc_Hashtable_create(int,int(*)(void*,void*),int(*)(void*));
# 53
extern void Cyc_Hashtable_insert(struct Cyc_Hashtable_Table*,void*,void*);
# 55
extern void*Cyc_Hashtable_lookup(struct Cyc_Hashtable_Table*,void*);
# 88
extern int Cyc_Hashtable_hash_stringptr(struct _fat_ptr*);struct Cyc_Set_Set;
# 50 "./cyclone/library/std/set.h"
extern struct Cyc_Set_Set*Cyc_Set_empty(int(*)(void*,void*));
# 64
extern struct Cyc_Set_Set*Cyc_Set_insert(struct Cyc_Set_Set*,void*);
# 76
extern struct Cyc_Set_Set*Cyc_Set_union_two(struct Cyc_Set_Set*,struct Cyc_Set_Set*);
# 83
extern struct Cyc_Set_Set*Cyc_Set_diff(struct Cyc_Set_Set*,struct Cyc_Set_Set*);
# 86
extern struct Cyc_Set_Set*Cyc_Set_delete(struct Cyc_Set_Set*,void*);
# 95
extern int Cyc_Set_cardinality(struct Cyc_Set_Set*);
# 98
extern long Cyc_Set_is_empty(struct Cyc_Set_Set*);
# 101
extern long Cyc_Set_member(struct Cyc_Set_Set*,void*);
# 138
extern void*Cyc_Set_choose(struct Cyc_Set_Set*);
# 142
extern struct Cyc_Iter_Iter Cyc_Set_make_iter(struct _RegionHandle*,struct Cyc_Set_Set*);struct Cyc_Tc_TcContext{long debug;struct _fat_ptr tc_msg;};
# 35 "./cyclone/library/compiler/tc.h"
struct Cyc_Tc_TcContext*Cyc_Tc_tc_init (void);
# 37
void Cyc_Tc_tc(struct Cyc_Tc_TcContext*,struct Cyc_Tcenv_Tenv*,long,struct Cyc_List_List*);struct Cyc___cycFILE;
# 96 "bazel-out/k8-fastbuild/bin/cyclone/library/std/libc/stdio.h"
extern struct Cyc___cycFILE*Cyc_stdout;
# 98
extern struct Cyc___cycFILE*Cyc_stderr;
# 127
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
# 136
extern int Cyc_fclose(struct Cyc___cycFILE*);
# 145
extern int Cyc_fflush(struct Cyc___cycFILE*);
# 159
extern struct Cyc___cycFILE*Cyc_fopen(const char*,const char*);
# 161
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 165
extern int Cyc_fputc(int,struct Cyc___cycFILE*);
# 167
extern int Cyc_fputs(const char*,struct Cyc___cycFILE*);
# 308
extern int Cyc_vfprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 25 "./cyclone/library/compiler/parse.h"
struct Cyc_List_List*Cyc_Parse_parse_file(struct Cyc___cycFILE*);
# 29 "./cyclone/library/compiler/warn.h"
extern void Cyc_Warn_reset(struct _fat_ptr);
extern int Cyc_Warn_print_warnings;struct Cyc_Arg_Set_spec_Arg_Spec_struct{int tag;long*f1;};struct Cyc_Arg_String_spec_Arg_Spec_struct{int tag;void(*f1)(struct _fat_ptr);};
# 66 "./cyclone/library/std/arg.h"
extern void Cyc_Arg_usage(struct Cyc_List_List*,struct _fat_ptr);
# 69
extern int Cyc_Arg_current;
# 71
extern void Cyc_Arg_parse(struct Cyc_List_List*,void(*)(struct _fat_ptr),long(*)(struct _fat_ptr),struct _fat_ptr,struct _fat_ptr);struct Cyc_Buffer_t;
# 49 "./cyclone/library/std/buffer.h"
extern struct Cyc_Buffer_t*Cyc_Buffer_create(unsigned);
# 57
extern struct _fat_ptr Cyc_Buffer_contents(struct Cyc_Buffer_t*);
# 80
extern void Cyc_Buffer_add_char(struct Cyc_Buffer_t*,char);
# 91
extern void Cyc_Buffer_add_string(struct Cyc_Buffer_t*,struct _fat_ptr);
# 29 "./cyclone/library/std/filename.h"
extern struct _fat_ptr Cyc_Filename_concat(struct _fat_ptr,struct _fat_ptr);
# 33
extern struct _fat_ptr Cyc_Filename_chop_extension(struct _fat_ptr);
# 39
extern struct _fat_ptr Cyc_Filename_dirname(struct _fat_ptr);
# 42
extern struct _fat_ptr Cyc_Filename_basename(struct _fat_ptr);extern char Cyc_Lexing_Error[6U];struct Cyc_Lexing_Error_exn_struct{char*tag;struct _fat_ptr f1;};struct Cyc_Lexing_lexbuf{void(*refill_buff)(struct Cyc_Lexing_lexbuf*);void*refill_state;struct _fat_ptr lex_buffer;int lex_buffer_len;int lex_abs_pos;int lex_start_pos;int lex_curr_pos;int lex_last_pos;int lex_last_action;long lex_eof_reached;};
# 78 "./cyclone/library/std/lexing.h"
extern struct Cyc_Lexing_lexbuf*Cyc_Lexing_from_file(struct Cyc___cycFILE*);
# 82
extern struct _fat_ptr Cyc_Lexing_lexeme(struct Cyc_Lexing_lexbuf*);
extern char Cyc_Lexing_lexeme_char(struct Cyc_Lexing_lexbuf*,int);
extern int Cyc_Lexing_lexeme_start(struct Cyc_Lexing_lexbuf*);
extern int Cyc_Lexing_lexeme_end(struct Cyc_Lexing_lexbuf*);
# 78 "cyclone/tools/buildlib/buildlib.cyl"
extern void Cyc_Lex_lex_init(long);
# 86
enum Cyc_name_kind{Cyc_NK_Tag =0U,Cyc_NK_Ident =1U};
# 91
static struct _fat_ptr Cyc_nk2str(enum Cyc_name_kind kind){enum Cyc_name_kind _T0;int _T1;struct _fat_ptr _T2;struct _fat_ptr _T3;struct _fat_ptr _T4;_T0= kind;_T1= (int)_T0;switch(_T1){case Cyc_NK_Tag: _T2= 
# 94
_tag_fat("tag",sizeof(char),4U);return _T2;case Cyc_NK_Ident: _T3= 
# 96
_tag_fat("",sizeof(char),1U);return _T3;default: _T4= 
# 98
_tag_fat("<invalid>",sizeof(char),10U);return _T4;};}static char _TmpG0[4U]="gcc";
# 102
static struct _fat_ptr Cyc_cyclone_cc={(unsigned char*)_TmpG0,(unsigned char*)_TmpG0,(unsigned char*)_TmpG0 + 4U};
# 104
static long Cyc_do_setjmp=0;
static long Cyc_verbose=0;
# 107
struct Cyc___cycFILE*Cyc_log_file=0;
struct Cyc___cycFILE*Cyc_cstubs_file=0;
struct Cyc___cycFILE*Cyc_cycstubs_file=0;
# 111
int Cyc_log(struct _fat_ptr fmt,struct _fat_ptr ap){struct Cyc___cycFILE*_T0;struct _fat_ptr _T1;struct _fat_ptr _T2;struct Cyc___cycFILE*_T3;int _T4;
# 114
if(Cyc_log_file!=0)goto _TL1;_T0= Cyc_stderr;_T1= 
_tag_fat("Internal error: log file is NULL\n",sizeof(char),34U);_T2= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T0,_T1,_T2);
exit(1);goto _TL2;_TL1: _TL2: {
# 118
int x=Cyc_vfprintf(Cyc_log_file,fmt,ap);_T3= 
_check_null(Cyc_log_file);Cyc_fflush(_T3);_T4= x;
return _T4;}}
# 123
static struct _fat_ptr*Cyc_current_source=0;
static struct Cyc_List_List*Cyc_current_args=0;
static struct Cyc_Set_Set**Cyc_current_targets=0;
static void Cyc_add_target(struct _fat_ptr*sptr){struct Cyc_Set_Set**_T0;struct Cyc_Set_Set*(*_T1)(struct Cyc_Set_Set*,struct _fat_ptr*);struct Cyc_Set_Set*(*_T2)(struct Cyc_Set_Set*,void*);struct Cyc_Set_Set**_T3;struct Cyc_Set_Set*_T4;struct _fat_ptr*_T5;{struct Cyc_Set_Set**_T6=_cycalloc(sizeof(struct Cyc_Set_Set*));_T2= Cyc_Set_insert;{
struct Cyc_Set_Set*(*_T7)(struct Cyc_Set_Set*,struct _fat_ptr*)=(struct Cyc_Set_Set*(*)(struct Cyc_Set_Set*,struct _fat_ptr*))_T2;_T1= _T7;}_T3= _check_null(Cyc_current_targets);_T4= *_T3;_T5= sptr;({__typeof__(_T1(_T4,_T5))_T7=_T1(_T4,_T5);*_T6= _T7;});_T0= (struct Cyc_Set_Set**)_T6;}Cyc_current_targets= _T0;}
# 129
static struct Cyc_Set_Set**Cyc_headers_to_do=0;struct _tuple15{struct _fat_ptr*f0;struct Cyc_Set_Set*f1;};
# 133
struct _tuple15*Cyc_line(struct Cyc_Lexing_lexbuf*);
int Cyc_macroname(struct Cyc_Lexing_lexbuf*);
int Cyc_args(struct Cyc_Lexing_lexbuf*);
int Cyc_token(struct Cyc_Lexing_lexbuf*);
int Cyc_string(struct Cyc_Lexing_lexbuf*);
# 139
struct Cyc___cycFILE*Cyc_slurp_out=0;
# 141
int Cyc_slurp_string(struct Cyc_Lexing_lexbuf*);
# 143
int Cyc_asm_string(struct Cyc_Lexing_lexbuf*);
int Cyc_asm_comment(struct Cyc_Lexing_lexbuf*);struct _tuple16{struct _fat_ptr f0;struct _fat_ptr*f1;};
# 147
struct _tuple16*Cyc_suck_line(struct Cyc_Lexing_lexbuf*);
int Cyc_suck_macroname(struct Cyc_Lexing_lexbuf*);
int Cyc_suck_restofline(struct Cyc_Lexing_lexbuf*);
struct _fat_ptr Cyc_current_line={(void*)0,(void*)0,(void*)(0 + 0)};struct _tuple17{struct _fat_ptr f0;struct _fat_ptr f1;};struct _tuple18{struct _fat_ptr*f0;struct _fat_ptr*f1;};struct _tuple19{struct _fat_ptr f0;struct Cyc_List_List*f1;struct Cyc_List_List*f2;struct Cyc_List_List*f3;struct Cyc_List_List*f4;struct Cyc_List_List*f5;struct Cyc_List_List*f6;struct Cyc_List_List*f7;};
# 163
struct _tuple19*Cyc_spec(struct Cyc_Lexing_lexbuf*);
int Cyc_commands(struct Cyc_Lexing_lexbuf*);
int Cyc_snarfsymbols(struct Cyc_Lexing_lexbuf*);
int Cyc_block(struct Cyc_Lexing_lexbuf*);
int Cyc_block_string(struct Cyc_Lexing_lexbuf*);
int Cyc_block_comment(struct Cyc_Lexing_lexbuf*);
struct _fat_ptr Cyc_current_headerfile={(void*)0,(void*)0,(void*)(0 + 0)};
struct Cyc_List_List*Cyc_snarfed_symbols=0;
struct Cyc_List_List*Cyc_current_symbols=0;
struct Cyc_List_List*Cyc_current_user_defs=0;
struct Cyc_List_List*Cyc_current_cstubs=0;
struct Cyc_List_List*Cyc_current_cycstubs=0;
struct Cyc_List_List*Cyc_current_hstubs=0;
struct Cyc_List_List*Cyc_current_omit_symbols=0;
struct Cyc_List_List*Cyc_current_cpp=0;
struct Cyc_Buffer_t*Cyc_specbuf=0;
struct _fat_ptr Cyc_current_symbol={(void*)0,(void*)0,(void*)(0 + 0)};
long Cyc_rename_current_symbol=0;
int Cyc_braces_to_match=0;
int Cyc_parens_to_match=0;
# 184
int Cyc_numdef=0;
# 186
static struct Cyc_List_List*Cyc_cppargs=0;static char _TmpG1[14U]="BUILDLIB_sym_";
# 188
struct _fat_ptr Cyc_user_prefix={(unsigned char*)_TmpG1,(unsigned char*)_TmpG1,(unsigned char*)_TmpG1 + 14U};
static struct _fat_ptr*Cyc_add_user_prefix(struct _fat_ptr*symbol){struct _fat_ptr _T0;struct _fat_ptr*_T1;struct _fat_ptr _T2;struct _fat_ptr _T3;struct _fat_ptr*_T4;_T0= Cyc_user_prefix;_T1= symbol;_T2= *_T1;_T3= 
Cyc_strconcat(_T0,_T2);{struct _fat_ptr s=_T3;{struct _fat_ptr*_T5=_cycalloc(sizeof(struct _fat_ptr));
*_T5= s;_T4= (struct _fat_ptr*)_T5;}return _T4;}}
# 193
static struct _fat_ptr Cyc_remove_user_prefix(struct _fat_ptr symbol){int _T0;struct Cyc_String_pa_PrintArg_struct _T1;struct Cyc___cycFILE*_T2;struct _fat_ptr _T3;struct _fat_ptr _T4;struct _fat_ptr _T5;struct _fat_ptr _T6;unsigned _T7;int _T8;unsigned long _T9;unsigned _TA;unsigned long _TB;struct _fat_ptr _TC;struct _fat_ptr _TD;
unsigned prefix_len=Cyc_strlen(Cyc_user_prefix);_T0= 
Cyc_strncmp(symbol,Cyc_user_prefix,prefix_len);if(_T0==0)goto _TL3;{struct Cyc_String_pa_PrintArg_struct _TE;_TE.tag= 0;
_TE.f1= symbol;_T1= _TE;}{struct Cyc_String_pa_PrintArg_struct _TE=_T1;void*_TF[1];_TF[0]= & _TE;_T2= Cyc_stderr;_T3= _tag_fat("Internal error: bad user type name %s\n",sizeof(char),39U);_T4= _tag_fat(_TF,sizeof(void*),1);Cyc_fprintf(_T2,_T3,_T4);}_T5= symbol;
return _T5;_TL3: _T6= symbol;_T7= prefix_len;_T8= (int)_T7;_T9= 
# 199
Cyc_strlen(symbol);_TA= prefix_len;_TB= _T9 - _TA;_TC= Cyc_substring(_T6,_T8,_TB);_TD= _TC;return _TD;}
# 202
static void Cyc_rename_decl(struct Cyc_Absyn_Decl*d){struct Cyc_Absyn_Decl*_T0;int*_T1;unsigned _T2;struct Cyc_Absyn_Aggrdecl*_T3;struct _tuple1*_T4;struct _fat_ptr*_T5;struct Cyc_Absyn_Aggrdecl*_T6;struct _tuple1*_T7;struct _tuple1 _T8;struct _fat_ptr*_T9;struct _fat_ptr _TA;struct Cyc_Absyn_Enumdecl*_TB;struct _tuple1*_TC;struct _fat_ptr*_TD;struct Cyc_Absyn_Enumdecl*_TE;struct _tuple1*_TF;struct _tuple1 _T10;struct _fat_ptr*_T11;struct _fat_ptr _T12;struct Cyc_Absyn_Typedefdecl*_T13;struct _tuple1*_T14;struct _fat_ptr*_T15;struct Cyc_Absyn_Typedefdecl*_T16;struct _tuple1*_T17;struct _tuple1 _T18;struct _fat_ptr*_T19;struct _fat_ptr _T1A;struct Cyc___cycFILE*_T1B;struct _fat_ptr _T1C;struct _fat_ptr _T1D;_T0= d;{
void*_T1E=_T0->r;struct Cyc_Absyn_Typedefdecl*_T1F;struct Cyc_Absyn_Enumdecl*_T20;struct Cyc_Absyn_Aggrdecl*_T21;_T1= (int*)_T1E;_T2= *_T1;switch(_T2){case 5:{struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T22=(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*)_T1E;_T21= _T22->f1;}{struct Cyc_Absyn_Aggrdecl*ad=_T21;_T3= ad;_T4= _T3->name;{struct _fat_ptr*_T22=_cycalloc(sizeof(struct _fat_ptr));_T6= ad;_T7= _T6->name;_T8= *_T7;_T9= _T8.f1;_TA= *_T9;
# 205
({__typeof__(Cyc_remove_user_prefix(_TA))_T23=Cyc_remove_user_prefix(_TA);*_T22= _T23;});_T5= (struct _fat_ptr*)_T22;}(*_T4).f1= _T5;goto _LL0;}case 7:{struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*_T22=(struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*)_T1E;_T20= _T22->f1;}{struct Cyc_Absyn_Enumdecl*ed=_T20;_TB= ed;_TC= _TB->name;{struct _fat_ptr*_T22=_cycalloc(sizeof(struct _fat_ptr));_TE= ed;_TF= _TE->name;_T10= *_TF;_T11= _T10.f1;_T12= *_T11;
# 208
({__typeof__(Cyc_remove_user_prefix(_T12))_T23=Cyc_remove_user_prefix(_T12);*_T22= _T23;});_TD= (struct _fat_ptr*)_T22;}(*_TC).f1= _TD;goto _LL0;}case 8:{struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct*_T22=(struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct*)_T1E;_T1F= _T22->f1;}{struct Cyc_Absyn_Typedefdecl*td=_T1F;_T13= td;_T14= _T13->name;{struct _fat_ptr*_T22=_cycalloc(sizeof(struct _fat_ptr));_T16= td;_T17= _T16->name;_T18= *_T17;_T19= _T18.f1;_T1A= *_T19;
# 211
({__typeof__(Cyc_remove_user_prefix(_T1A))_T23=Cyc_remove_user_prefix(_T1A);*_T22= _T23;});_T15= (struct _fat_ptr*)_T22;}(*_T14).f1= _T15;goto _LL0;}default: _T1B= Cyc_stderr;_T1C= 
# 214
_tag_fat("Error in .cys file: bad user-defined type definition\n",sizeof(char),54U);_T1D= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T1B,_T1C,_T1D);
exit(1);}_LL0:;}}
# 221
const int Cyc_lex_base[365U]={0,0,75,192,305,310,311,166,312,91,27,384,28,523,637,715,829,325,92,- 3,0,- 1,- 2,- 8,- 3,1,- 2,323,- 4,2,166,- 5,605,907,312,- 6,- 8,- 4,16,945,- 3,1021,29,11,12,1135,- 3,- 4,13,1250,81,223,- 14,317,13,- 2,219,20,27,29,34,50,49,71,55,66,101,101,100,108,95,319,112,104,105,123,126,386,112,134,190,397,1365,1480,399,205,225,244,235,237,237,257,414,1595,- 9,1710,525,- 10,239,259,654,1825,- 7,1940,684,720,- 11,434,370,379,2018,2095,2172,2253,465,467,381,2328,258,267,267,265,271,281,0,14,4,2409,5,462,2417,2482,475,- 4,- 3,351,550,6,2443,7,491,2505,2543,499,- 13,746,1162,1,263,273,285,287,299,299,667,678,319,313,308,308,324,309,15,42,37,669,744,24,320,319,348,360,458,458,462,699,- 12,584,404,401,430,441,442,445,457,465,449,487,486,470,471,470,486,504,500,511,506,509,554,556,543,570,571,705,697,709,1277,571,586,588,589,590,589,601,605,609,608,621,1137,614,618,616,633,1142,1282,637,638,631,632,632,645,1256,638,641,640,661,1370,- 7,- 8,8,837,2575,9,930,2599,2637,1108,855,- 49,840,- 2,700,- 4,714,800,1139,747,798,812,1446,748,2664,2707,753,830,781,792,2777,783,797,- 36,- 42,- 37,2852,- 28,787,- 40,- 25,795,- 27,- 45,- 39,- 48,2927,2956,1465,803,960,1561,2966,2996,1580,1676,3029,3060,3098,995,1005,3168,3206,997,1007,1079,1089,1081,1119,- 6,- 34,0,3138,- 47,- 30,- 32,- 46,- 29,- 31,- 33,5,3246,821,823,1695,827,828,831,836,883,884,886,927,928,3319,3403,- 23,- 17,- 16,- 15,- 18,- 21,- 22,1797,929,- 19,- 20,- 24,- 41,- 38,- 35,- 26,1261,3485,1,923,924,945,3568,946,15,888,888,888,886,882,902,2};
const int Cyc_lex_backtrk[365U]={- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,0,- 1,- 1,- 1,- 1,- 1,- 1,- 1,2,- 1,- 1,- 1,- 1,2,- 1,8,- 1,3,5,- 1,- 1,6,5,- 1,- 1,- 1,7,6,- 1,6,5,2,5,0,- 1,- 1,- 1,0,- 1,2,- 1,12,13,- 1,13,13,13,13,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,11,12,2,4,4,- 1,0,0,0,2,0,- 1,- 1,- 1,- 1,- 1,- 1,- 1,2,2,8,3,5,- 1,6,5,- 1,- 1,6,5,2,8,3,5,- 1,6,5,- 1,12,12,12,12,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,9,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,6,1,9,2,4,- 1,5,4,- 1,- 1,2,- 1,48,- 1,48,48,48,48,48,48,48,48,5,7,48,48,48,48,0,48,48,- 1,- 1,- 1,0,- 1,43,- 1,- 1,42,- 1,- 1,- 1,- 1,9,7,- 1,7,7,- 1,8,9,- 1,- 1,9,5,6,5,5,- 1,4,4,4,6,6,5,5,- 1,- 1,- 1,9,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,2,- 1,1,- 1,- 1,- 1,2,1,1,- 1,- 1,- 1,- 1,- 1,- 1,- 1};
const int Cyc_lex_default[365U]={- 1,- 1,- 1,248,237,144,23,102,23,19,- 1,- 1,12,31,52,35,36,23,19,0,- 1,0,0,0,0,- 1,0,- 1,0,- 1,- 1,0,- 1,- 1,- 1,0,0,0,- 1,- 1,0,- 1,42,- 1,- 1,- 1,0,0,- 1,- 1,50,- 1,0,- 1,- 1,0,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,0,- 1,- 1,0,- 1,- 1,- 1,- 1,0,- 1,- 1,- 1,0,107,- 1,- 1,- 1,- 1,- 1,114,114,114,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,0,0,- 1,136,- 1,- 1,- 1,- 1,- 1,- 1,- 1,0,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,0,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,205,205,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,0,0,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,0,- 1,0,- 1,0,- 1,- 1,317,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,0,0,0,- 1,0,- 1,0,0,- 1,0,0,0,0,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,0,0,- 1,- 1,0,0,0,0,0,0,0,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,0,0,0,0,0,0,0,- 1,- 1,0,0,0,0,0,0,0,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1};
const int Cyc_lex_trans[3825U]={0,0,0,0,0,0,0,0,0,0,22,19,28,357,19,28,19,28,36,19,51,51,48,48,51,22,48,0,0,0,0,0,21,21,21,358,0,22,- 1,- 1,22,- 1,- 1,51,344,48,310,22,355,355,355,355,355,355,355,355,355,355,31,50,107,22,118,42,163,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,19,164,165,168,355,177,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,350,350,350,350,350,350,350,350,350,350,125,20,78,22,72,60,61,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,62,63,64,65,350,66,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,67,68,133,249,250,249,249,250,134,22,69,70,71,73,74,135,34,34,34,34,34,34,34,34,75,76,249,251,252,77,79,253,254,255,51,51,256,257,51,258,259,260,261,262,262,262,262,262,262,262,262,262,263,80,264,265,266,51,19,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,19,- 1,- 1,268,267,81,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,238,269,105,239,145,145,24,24,145,137,126,108,108,71,71,108,85,71,28,86,24,29,- 1,25,240,87,98,145,88,22,26,26,21,21,108,89,71,146,90,91,92,99,100,119,26,35,35,35,35,35,35,35,35,120,121,122,30,30,30,30,30,30,30,30,108,108,123,124,108,149,150,151,152,116,116,116,116,116,31,116,77,77,241,136,77,153,154,108,138,127,147,82,82,84,84,82,116,84,116,157,158,159,27,77,160,31,161,21,93,93,162,148,93,169,82,170,84,117,117,117,117,117,117,117,117,117,117,28,32,- 1,171,93,- 1,22,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,- 1,172,- 1,- 1,117,- 1,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,173,174,19,132,132,132,132,132,132,132,132,175,200,31,191,35,35,35,35,35,35,35,35,35,181,109,109,96,96,109,94,96,143,143,143,143,143,143,143,143,35,35,35,35,35,35,35,35,109,182,96,183,184,- 1,94,185,- 1,186,187,21,21,21,110,111,110,110,110,110,110,110,110,110,110,110,21,188,189,190,106,192,193,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,194,195,196,197,110,198,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,53,53,97,199,53,36,201,33,33,33,33,33,33,33,33,33,33,101,101,202,203,101,219,53,33,33,33,33,33,33,155,155,166,166,155,178,166,214,54,179,101,155,155,210,- 1,155,211,104,104,212,55,104,180,155,213,166,33,33,33,33,33,33,175,175,155,102,175,215,203,203,104,216,203,217,218,- 1,220,- 1,43,43,221,222,43,105,105,175,223,105,232,227,56,203,- 1,228,229,57,58,230,231,204,233,43,59,234,94,235,105,166,166,224,224,166,176,224,236,348,44,45,45,45,45,45,45,45,45,45,45,156,46,347,166,102,224,28,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,- 1,36,316,307,45,282,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,345,167,47,314,277,106,272,225,247,247,276,349,247,349,349,274,275,226,281,311,270,315,343,346,342,37,247,247,338,337,247,247,106,21,349,312,313,176,38,39,39,39,39,39,39,39,39,39,39,247,36,21,278,279,280,21,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,36,271,144,52,39,336,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,40,- 1,22,33,33,33,33,33,33,33,33,33,33,- 1,335,334,339,353,354,31,33,33,33,33,33,33,246,246,246,246,246,246,246,246,28,21,359,360,361,362,363,41,41,41,41,41,41,41,41,41,41,364,33,33,33,33,33,33,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,36,0,0,0,41,0,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,36,41,41,41,41,41,41,41,41,41,41,0,35,35,31,31,0,21,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,35,35,31,31,41,0,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,48,48,218,218,48,- 1,218,223,223,0,0,223,31,31,31,31,31,31,31,31,102,102,306,48,0,218,0,206,206,0,223,206,0,19,- 1,0,0,0,31,49,49,49,49,49,49,49,49,49,49,0,206,306,102,102,306,0,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,0,306,0,0,49,318,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,22,48,48,207,0,48,0,231,231,0,0,231,349,208,349,349,0,0,209,0,0,0,0,0,48,0,0,0,206,206,231,0,206,224,224,349,0,224,28,0,49,49,49,49,49,49,49,49,49,49,0,206,0,0,0,0,224,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,0,0,0,0,49,0,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,22,82,82,207,0,82,236,236,225,0,236,0,0,208,0,0,0,0,226,0,0,0,- 1,0,82,0,0,0,0,236,0,0,0,0,0,0,0,35,0,0,83,83,83,83,83,83,83,83,83,83,0,0,0,0,0,0,0,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,0,0,0,0,83,0,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,31,84,84,0,308,84,309,309,309,309,309,309,309,309,309,309,0,0,0,0,288,0,288,0,84,289,289,289,289,289,289,289,289,289,289,0,0,0,0,0,83,83,83,83,83,83,83,83,83,83,0,0,0,0,0,0,0,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,0,0,0,0,83,0,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,35,93,93,0,0,93,289,289,289,289,289,289,289,289,289,289,0,0,0,0,292,0,292,0,93,293,293,293,293,293,293,293,293,293,293,0,0,0,0,0,95,95,95,95,95,95,95,95,95,95,0,0,0,0,0,0,0,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,0,0,0,0,95,0,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,94,96,96,0,0,96,293,293,293,293,293,293,293,293,293,293,339,0,0,0,0,0,0,0,96,340,340,340,340,340,340,340,340,0,0,0,0,0,0,0,95,95,95,95,95,95,95,95,95,95,0,0,0,0,0,0,0,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,0,0,0,0,95,0,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,97,101,101,339,0,101,0,0,0,0,0,0,341,341,341,341,341,341,341,341,0,0,0,0,101,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,103,103,103,103,103,103,103,103,103,103,0,0,0,0,0,0,0,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,0,0,0,0,103,0,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,102,104,104,0,0,104,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,104,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,103,103,103,103,103,103,103,103,103,103,0,0,0,0,0,0,0,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,0,0,0,0,103,0,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,36,112,112,112,112,112,112,112,112,112,112,112,112,22,0,0,0,0,0,0,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,0,0,0,0,112,0,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,113,112,112,112,112,112,112,112,112,112,112,22,0,0,0,0,0,0,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,0,0,0,0,112,0,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,22,0,0,0,0,0,0,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,- 1,0,0,- 1,112,0,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,0,0,0,0,113,113,113,113,113,113,113,113,113,113,113,113,115,0,0,0,0,0,0,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,0,0,0,0,113,0,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,117,117,117,117,117,117,117,117,117,117,0,0,0,0,0,0,0,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,28,0,0,128,117,0,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,0,0,28,0,0,139,129,129,129,129,129,129,129,129,131,131,131,131,131,131,131,131,131,131,0,0,0,0,0,0,0,131,131,131,131,131,131,0,0,0,140,140,140,140,140,140,140,140,0,0,0,0,0,0,0,31,0,0,- 1,0,0,0,0,131,131,131,131,131,131,0,0,0,0,0,0,0,0,0,130,131,131,131,131,131,131,131,131,131,131,31,0,0,0,0,0,0,131,131,131,131,131,131,142,142,142,142,142,142,142,142,142,142,141,0,0,0,0,0,0,142,142,142,142,142,142,0,0,0,131,131,131,131,131,131,19,0,0,242,0,0,142,142,142,142,142,142,142,142,142,142,0,142,142,142,142,142,142,142,142,142,142,142,142,0,0,0,0,0,0,0,0,0,243,243,243,243,243,243,243,243,0,0,0,0,0,0,0,0,0,142,142,142,142,142,142,0,245,245,245,245,245,245,245,245,245,245,0,0,0,0,0,0,0,245,245,245,245,245,245,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,245,245,245,245,245,245,245,245,245,245,244,245,245,245,245,245,245,245,245,245,245,245,245,0,0,283,0,294,294,294,294,294,294,294,294,295,295,0,0,0,0,0,0,0,0,0,0,0,285,245,245,245,245,245,245,296,0,0,0,0,0,0,0,0,297,0,0,298,283,0,284,284,284,284,284,284,284,284,284,284,285,0,0,0,0,0,0,296,0,0,0,285,0,0,0,0,297,0,286,298,0,0,0,0,0,0,0,287,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,285,0,0,0,0,0,0,286,0,0,0,0,0,0,0,0,287,273,273,273,273,273,273,273,273,273,273,0,0,0,0,0,0,0,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,0,0,0,0,273,0,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,0,0,0,0,0,0,0,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,0,0,0,0,273,0,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,290,290,290,290,290,290,290,290,290,290,0,0,0,0,0,0,0,0,0,0,0,291,97,0,0,0,0,283,97,284,284,284,284,284,284,284,284,284,284,289,289,289,289,289,289,289,289,289,289,0,285,0,0,291,97,0,0,286,0,0,97,94,0,0,0,0,287,94,0,290,290,290,290,290,290,290,290,290,290,0,0,0,285,0,0,0,0,0,0,286,291,97,0,94,0,0,0,97,287,94,0,0,293,293,293,293,293,293,293,293,293,293,0,0,0,0,0,0,0,0,0,0,291,97,97,0,0,0,0,97,97,283,0,294,294,294,294,294,294,294,294,295,295,0,0,0,0,0,0,0,0,0,0,0,285,0,97,0,0,0,0,304,97,0,0,0,0,0,0,283,305,295,295,295,295,295,295,295,295,295,295,0,0,0,0,0,285,0,0,0,0,0,285,304,0,0,0,0,0,302,0,0,305,0,0,0,0,0,303,0,0,309,309,309,309,309,309,309,309,309,309,0,0,0,285,0,0,0,0,0,0,302,291,97,0,0,0,0,0,97,303,299,299,299,299,299,299,299,299,299,299,0,0,0,0,0,0,0,299,299,299,299,299,299,291,97,0,0,0,0,0,97,0,0,0,0,0,0,0,299,299,299,299,299,299,299,299,299,299,0,299,299,299,299,299,299,299,299,299,299,299,299,0,0,0,319,0,300,0,0,320,0,0,0,0,0,301,0,0,321,321,321,321,321,321,321,321,0,299,299,299,299,299,299,322,0,0,0,0,300,0,0,0,0,0,0,0,0,301,0,0,0,0,0,0,0,0,0,0,0,0,0,0,323,0,0,0,0,324,325,0,0,0,326,0,0,0,0,0,0,0,327,0,0,0,328,0,329,0,330,0,331,332,332,332,332,332,332,332,332,332,332,0,0,0,0,0,0,0,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,0,0,0,0,0,0,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,333,0,0,0,0,0,0,0,0,332,332,332,332,332,332,332,332,332,332,0,0,0,0,0,0,0,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,0,0,0,0,0,0,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,19,0,0,351,0,352,0,350,350,350,350,350,350,350,350,350,350,0,0,0,0,0,0,0,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,0,0,0,0,350,0,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,356,0,0,0,0,0,0,0,355,355,355,355,355,355,355,355,355,355,0,0,0,0,0,0,0,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,0,0,0,0,355,0,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const int Cyc_lex_check[3825U]={- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,0,25,29,0,126,128,137,139,239,242,43,43,48,48,43,357,48,- 1,- 1,- 1,- 1,- 1,124,351,364,0,- 1,10,12,42,10,12,42,43,317,48,308,20,1,1,1,1,1,1,1,1,1,1,38,44,54,125,10,38,162,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,50,163,164,167,1,147,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,9,18,57,48,58,59,60,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,61,62,63,64,2,65,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,66,67,7,3,3,3,3,3,7,7,68,69,70,72,73,7,30,30,30,30,30,30,30,30,74,75,3,3,3,76,78,3,3,3,51,51,3,3,51,3,3,3,3,3,3,3,3,3,3,3,3,3,3,79,3,3,3,51,0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,10,12,42,3,3,80,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,4,3,85,4,5,5,6,8,5,6,8,53,53,71,71,53,56,71,27,56,17,27,50,17,4,56,86,5,87,5,6,8,9,18,53,88,71,5,89,90,91,98,99,118,17,34,34,34,34,34,34,34,34,119,120,121,27,27,27,27,27,27,27,27,108,108,122,123,108,148,149,150,151,109,109,116,116,109,135,116,77,77,4,135,77,152,153,108,6,8,5,81,81,84,84,81,109,84,116,156,157,158,17,77,159,27,160,7,92,92,161,5,92,168,81,169,84,11,11,11,11,11,11,11,11,11,11,71,27,107,170,92,107,3,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,114,171,115,114,11,115,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,172,173,77,129,129,129,129,129,129,129,129,174,178,81,179,84,132,132,132,132,132,132,132,132,180,13,13,96,96,13,92,96,140,140,140,140,140,140,140,140,143,143,143,143,143,143,143,143,13,181,96,182,183,136,4,184,136,185,186,5,6,8,13,13,13,13,13,13,13,13,13,13,13,13,17,187,188,189,190,191,192,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,193,194,195,196,13,197,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,14,14,96,198,14,199,200,32,32,32,32,32,32,32,32,32,32,100,100,201,202,100,207,14,32,32,32,32,32,32,154,154,165,165,154,177,165,208,14,177,100,155,155,209,107,155,210,104,104,211,14,104,177,154,212,165,32,32,32,32,32,32,175,175,155,213,175,214,203,203,104,215,203,216,217,114,219,115,15,15,220,221,15,105,105,175,222,105,225,226,14,203,204,227,228,14,14,229,230,203,232,15,14,233,205,234,105,166,166,145,145,166,175,145,235,251,15,15,15,15,15,15,15,15,15,15,15,155,15,253,166,100,145,13,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,136,104,256,260,15,263,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,254,166,15,257,265,105,268,145,240,240,275,249,240,249,249,266,266,145,278,258,269,257,319,254,320,16,247,247,322,323,247,240,324,240,249,258,258,325,16,16,16,16,16,16,16,16,16,16,16,247,286,247,264,264,264,14,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,286,269,326,327,16,328,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,204,16,33,33,33,33,33,33,33,33,33,33,205,329,330,341,352,353,15,33,33,33,33,33,33,243,243,243,243,243,243,243,243,354,356,358,359,360,361,362,39,39,39,39,39,39,39,39,39,39,363,33,33,33,33,33,33,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,287,- 1,- 1,- 1,39,- 1,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,287,41,41,41,41,41,41,41,41,41,41,- 1,296,297,300,301,- 1,16,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,296,297,300,301,41,- 1,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,45,45,218,218,45,255,218,223,223,- 1,- 1,223,246,246,246,246,246,246,246,246,302,303,304,45,- 1,218,- 1,146,146,- 1,223,146,- 1,218,255,- 1,- 1,- 1,223,45,45,45,45,45,45,45,45,45,45,- 1,146,305,302,303,304,- 1,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,- 1,305,- 1,- 1,45,255,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,45,49,49,146,- 1,49,- 1,231,231,- 1,- 1,231,349,146,349,349,- 1,- 1,146,- 1,- 1,- 1,- 1,- 1,49,- 1,- 1,- 1,206,206,231,- 1,206,224,224,349,- 1,224,231,- 1,49,49,49,49,49,49,49,49,49,49,- 1,206,- 1,- 1,- 1,- 1,224,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,- 1,- 1,- 1,- 1,49,- 1,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,82,82,206,- 1,82,236,236,224,- 1,236,- 1,- 1,206,- 1,- 1,- 1,- 1,224,- 1,- 1,- 1,255,- 1,82,- 1,- 1,- 1,- 1,236,- 1,- 1,- 1,- 1,- 1,- 1,- 1,236,- 1,- 1,82,82,82,82,82,82,82,82,82,82,- 1,- 1,- 1,- 1,- 1,- 1,- 1,82,82,82,82,82,82,82,82,82,82,82,82,82,82,82,82,82,82,82,82,82,82,82,82,82,82,- 1,- 1,- 1,- 1,82,- 1,82,82,82,82,82,82,82,82,82,82,82,82,82,82,82,82,82,82,82,82,82,82,82,82,82,82,82,83,83,- 1,259,83,259,259,259,259,259,259,259,259,259,259,- 1,- 1,- 1,- 1,285,- 1,285,- 1,83,285,285,285,285,285,285,285,285,285,285,- 1,- 1,- 1,- 1,- 1,83,83,83,83,83,83,83,83,83,83,- 1,- 1,- 1,- 1,- 1,- 1,- 1,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,- 1,- 1,- 1,- 1,83,- 1,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,83,93,93,- 1,- 1,93,288,288,288,288,288,288,288,288,288,288,- 1,- 1,- 1,- 1,291,- 1,291,- 1,93,291,291,291,291,291,291,291,291,291,291,- 1,- 1,- 1,- 1,- 1,93,93,93,93,93,93,93,93,93,93,- 1,- 1,- 1,- 1,- 1,- 1,- 1,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,- 1,- 1,- 1,- 1,93,- 1,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,95,95,- 1,- 1,95,292,292,292,292,292,292,292,292,292,292,321,- 1,- 1,- 1,- 1,- 1,- 1,- 1,95,321,321,321,321,321,321,321,321,- 1,- 1,- 1,- 1,- 1,- 1,- 1,95,95,95,95,95,95,95,95,95,95,- 1,- 1,- 1,- 1,- 1,- 1,- 1,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,- 1,- 1,- 1,- 1,95,- 1,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,101,101,340,- 1,101,- 1,- 1,- 1,- 1,- 1,- 1,340,340,340,340,340,340,340,340,- 1,- 1,- 1,- 1,101,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,101,101,101,101,101,101,101,101,101,101,- 1,- 1,- 1,- 1,- 1,- 1,- 1,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,- 1,- 1,- 1,- 1,101,- 1,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,103,103,- 1,- 1,103,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,103,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,103,103,103,103,103,103,103,103,103,103,- 1,- 1,- 1,- 1,- 1,- 1,- 1,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,- 1,- 1,- 1,- 1,103,- 1,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,110,110,110,110,110,110,110,110,110,110,110,110,110,- 1,- 1,- 1,- 1,- 1,- 1,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,- 1,- 1,- 1,- 1,110,- 1,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,110,111,111,111,111,111,111,111,111,111,111,111,111,111,- 1,- 1,- 1,- 1,- 1,- 1,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,- 1,- 1,- 1,- 1,111,- 1,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,112,112,112,112,112,112,112,112,112,112,112,112,112,- 1,- 1,- 1,- 1,- 1,- 1,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,113,- 1,- 1,113,112,- 1,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,- 1,- 1,- 1,- 1,113,113,113,113,113,113,113,113,113,113,113,113,113,- 1,- 1,- 1,- 1,- 1,- 1,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,- 1,- 1,- 1,- 1,113,- 1,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,117,117,117,117,117,117,117,117,117,117,- 1,- 1,- 1,- 1,- 1,- 1,- 1,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,127,- 1,- 1,127,117,- 1,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,117,- 1,- 1,138,- 1,- 1,138,127,127,127,127,127,127,127,127,130,130,130,130,130,130,130,130,130,130,- 1,- 1,- 1,- 1,- 1,- 1,- 1,130,130,130,130,130,130,- 1,- 1,- 1,138,138,138,138,138,138,138,138,- 1,- 1,- 1,- 1,- 1,- 1,- 1,127,- 1,- 1,113,- 1,- 1,- 1,- 1,130,130,130,130,130,130,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,127,131,131,131,131,131,131,131,131,131,131,138,- 1,- 1,- 1,- 1,- 1,- 1,131,131,131,131,131,131,141,141,141,141,141,141,141,141,141,141,138,- 1,- 1,- 1,- 1,- 1,- 1,141,141,141,141,141,141,- 1,- 1,- 1,131,131,131,131,131,131,241,- 1,- 1,241,- 1,- 1,142,142,142,142,142,142,142,142,142,142,- 1,141,141,141,141,141,141,142,142,142,142,142,142,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,241,241,241,241,241,241,241,241,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,142,142,142,142,142,142,- 1,244,244,244,244,244,244,244,244,244,244,- 1,- 1,- 1,- 1,- 1,- 1,- 1,244,244,244,244,244,244,- 1,- 1,241,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,245,245,245,245,245,245,245,245,245,245,241,244,244,244,244,244,244,245,245,245,245,245,245,- 1,- 1,261,- 1,261,261,261,261,261,261,261,261,261,261,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,261,245,245,245,245,245,245,261,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,261,- 1,- 1,261,262,- 1,262,262,262,262,262,262,262,262,262,262,261,- 1,- 1,- 1,- 1,- 1,- 1,261,- 1,- 1,- 1,262,- 1,- 1,- 1,- 1,261,- 1,262,261,- 1,- 1,- 1,- 1,- 1,- 1,- 1,262,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,262,- 1,- 1,- 1,- 1,- 1,- 1,262,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,262,267,267,267,267,267,267,267,267,267,267,- 1,- 1,- 1,- 1,- 1,- 1,- 1,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,- 1,- 1,- 1,- 1,267,- 1,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,267,273,273,273,273,273,273,273,273,273,273,- 1,- 1,- 1,- 1,- 1,- 1,- 1,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,- 1,- 1,- 1,- 1,273,- 1,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,273,283,283,283,283,283,283,283,283,283,283,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,283,283,- 1,- 1,- 1,- 1,284,283,284,284,284,284,284,284,284,284,284,284,289,289,289,289,289,289,289,289,289,289,- 1,284,- 1,- 1,283,283,- 1,- 1,284,- 1,- 1,283,289,- 1,- 1,- 1,- 1,284,289,- 1,290,290,290,290,290,290,290,290,290,290,- 1,- 1,- 1,284,- 1,- 1,- 1,- 1,- 1,- 1,284,290,290,- 1,289,- 1,- 1,- 1,290,284,289,- 1,- 1,293,293,293,293,293,293,293,293,293,293,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,290,290,293,- 1,- 1,- 1,- 1,290,293,294,- 1,294,294,294,294,294,294,294,294,294,294,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,294,- 1,293,- 1,- 1,- 1,- 1,294,293,- 1,- 1,- 1,- 1,- 1,- 1,295,294,295,295,295,295,295,295,295,295,295,295,- 1,- 1,- 1,- 1,- 1,294,- 1,- 1,- 1,- 1,- 1,295,294,- 1,- 1,- 1,- 1,- 1,295,- 1,- 1,294,- 1,- 1,- 1,- 1,- 1,295,- 1,- 1,309,309,309,309,309,309,309,309,309,309,- 1,- 1,- 1,295,- 1,- 1,- 1,- 1,- 1,- 1,295,309,309,- 1,- 1,- 1,- 1,- 1,309,295,298,298,298,298,298,298,298,298,298,298,- 1,- 1,- 1,- 1,- 1,- 1,- 1,298,298,298,298,298,298,309,309,- 1,- 1,- 1,- 1,- 1,309,- 1,- 1,- 1,- 1,- 1,- 1,- 1,299,299,299,299,299,299,299,299,299,299,- 1,298,298,298,298,298,298,299,299,299,299,299,299,- 1,- 1,- 1,318,- 1,299,- 1,- 1,318,- 1,- 1,- 1,- 1,- 1,299,- 1,- 1,318,318,318,318,318,318,318,318,- 1,299,299,299,299,299,299,318,- 1,- 1,- 1,- 1,299,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,299,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,318,- 1,- 1,- 1,- 1,318,318,- 1,- 1,- 1,318,- 1,- 1,- 1,- 1,- 1,- 1,- 1,318,- 1,- 1,- 1,318,- 1,318,- 1,318,- 1,318,331,331,331,331,331,331,331,331,331,331,- 1,- 1,- 1,- 1,- 1,- 1,- 1,331,331,331,331,331,331,331,331,331,331,331,331,331,331,331,331,331,331,331,331,331,331,331,331,331,331,- 1,- 1,- 1,- 1,- 1,- 1,331,331,331,331,331,331,331,331,331,331,331,331,331,331,331,331,331,331,331,331,331,331,331,331,331,331,332,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,332,332,332,332,332,332,332,332,332,332,- 1,- 1,- 1,- 1,- 1,- 1,- 1,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,- 1,- 1,- 1,- 1,- 1,- 1,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,332,350,- 1,- 1,350,- 1,350,- 1,350,350,350,350,350,350,350,350,350,350,- 1,- 1,- 1,- 1,- 1,- 1,- 1,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,- 1,- 1,- 1,- 1,350,- 1,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,350,355,- 1,- 1,- 1,- 1,- 1,- 1,- 1,355,355,355,355,355,355,355,355,355,355,- 1,- 1,- 1,- 1,- 1,- 1,- 1,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,- 1,- 1,- 1,- 1,355,- 1,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1,- 1};
int Cyc_lex_engine(int start_state,struct Cyc_Lexing_lexbuf*lbuf){struct Cyc_Lexing_lexbuf*_T0;struct Cyc_Lexing_lexbuf*_T1;struct Cyc_Lexing_lexbuf*_T2;struct Cyc_Lexing_lexbuf*_T3;int _T4;const int*_T5;int _T6;const char*_T7;const int*_T8;int _T9;int _TA;const int*_TB;int _TC;struct Cyc_Lexing_lexbuf*_TD;struct Cyc_Lexing_lexbuf*_TE;struct Cyc_Lexing_lexbuf*_TF;struct Cyc_Lexing_lexbuf*_T10;int _T11;struct Cyc_Lexing_lexbuf*_T12;int _T13;struct Cyc_Lexing_lexbuf*_T14;long _T15;int _T16;int _T17;struct Cyc_Lexing_lexbuf*_T18;struct _fat_ptr _T19;struct Cyc_Lexing_lexbuf*_T1A;int _T1B;int _T1C;unsigned char*_T1D;char*_T1E;char _T1F;int _T20;int _T21;const int*_T22;int _T23;const char*_T24;const int*_T25;int _T26;int _T27;const int*_T28;int _T29;const int*_T2A;int _T2B;struct Cyc_Lexing_lexbuf*_T2C;struct Cyc_Lexing_lexbuf*_T2D;struct Cyc_Lexing_lexbuf*_T2E;int _T2F;int _T30;struct Cyc_Lexing_Error_exn_struct*_T31;void*_T32;struct Cyc_Lexing_lexbuf*_T33;int _T34;struct Cyc_Lexing_lexbuf*_T35;
# 228
int state;int base;int backtrk;
int c;
state= start_state;
# 232
if(state < 0)goto _TL6;_T0= lbuf;_T1= lbuf;_T2= lbuf;
# 234
_T1->lex_start_pos= _T2->lex_curr_pos;_T0->lex_last_pos= _T1->lex_start_pos;_T3= lbuf;
_T3->lex_last_action= - 1;goto _TL7;
# 238
_TL6: _T4= - state;state= _T4 - 1;_TL7:
# 240
 _TL8: if(1)goto _TL9;else{goto _TLA;}
_TL9: _T5= Cyc_lex_base;_T6= state;_T7= _check_known_subscript_notnull(_T5,365U,sizeof(int),_T6);_T8= (const int*)_T7;base= *_T8;
if(base >= 0)goto _TLB;_T9= - base;_TA= _T9 - 1;return _TA;_TLB: _TB= Cyc_lex_backtrk;_TC= state;
# 244
backtrk= _TB[_TC];
if(backtrk < 0)goto _TLD;_TD= lbuf;_TE= lbuf;
_TD->lex_last_pos= _TE->lex_curr_pos;_TF= lbuf;
_TF->lex_last_action= backtrk;goto _TLE;_TLD: _TLE: _T10= lbuf;_T11= _T10->lex_curr_pos;_T12= lbuf;_T13= _T12->lex_buffer_len;
# 250
if(_T11 < _T13)goto _TLF;_T14= lbuf;_T15= _T14->lex_eof_reached;
if(_T15)goto _TL11;else{goto _TL13;}
_TL13: _T16= - state;_T17= _T16 - 1;return _T17;
# 254
_TL11: c= 256;goto _TL10;
# 257
_TLF: _T18= lbuf;_T19= _T18->lex_buffer;_T1A= lbuf;_T1B= _T1A->lex_curr_pos;_T1A->lex_curr_pos= _T1B + 1;_T1C= _T1B;_T1D= _check_fat_subscript(_T19,sizeof(char),_T1C);_T1E= (char*)_T1D;_T1F= *_T1E;c= (int)_T1F;_T20= c;_T21= - 1;
if(_T20!=_T21)goto _TL14;c= 256;goto _TL15;
# 260
_TL14: if(c >= 0)goto _TL16;c= 256 + c;goto _TL17;_TL16: _TL17: _TL15: _TL10: _T22= Cyc_lex_check;_T23= base + c;_T24= _check_known_subscript_notnull(_T22,3825U,sizeof(int),_T23);_T25= (const int*)_T24;_T26= *_T25;_T27= state;
# 263
if(_T26!=_T27)goto _TL18;_T28= Cyc_lex_trans;_T29= base + c;
state= _T28[_T29];goto _TL19;
# 266
_TL18: _T2A= Cyc_lex_default;_T2B= state;state= _T2A[_T2B];_TL19:
# 268
 if(state >= 0)goto _TL1A;_T2C= lbuf;_T2D= lbuf;
_T2C->lex_curr_pos= _T2D->lex_last_pos;_T2E= lbuf;_T2F= _T2E->lex_last_action;_T30= - 1;
if(_T2F!=_T30)goto _TL1C;{struct Cyc_Lexing_Error_exn_struct*_T36=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_T36->tag= Cyc_Lexing_Error;
({__typeof__(_tag_fat("empty token",sizeof(char),12U))_T37=_tag_fat("empty token",sizeof(char),12U);_T36->f1= _T37;});_T31= (struct Cyc_Lexing_Error_exn_struct*)_T36;}_T32= (void*)_T31;_rethrow(_T32);goto _TL1D;
# 273
_TL1C: _T33= lbuf;_T34= _T33->lex_last_action;return _T34;_TL1D: goto _TL1B;
# 278
_TL1A: if(c!=256)goto _TL1E;_T35= lbuf;_T35->lex_eof_reached= 0;goto _TL1F;_TL1E: _TL1F: _TL1B: goto _TL8;_TLA:;}
# 282
struct _tuple15*Cyc_line_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;struct Cyc_Set_Set**_T2;struct Cyc_Set_Set*(*_T3)(struct Cyc_Set_Set*,struct _fat_ptr*);struct Cyc_Set_Set*(*_T4)(struct Cyc_Set_Set*,void*);struct Cyc_Set_Set**_T5;struct Cyc_Set_Set*_T6;struct Cyc_List_List*_T7;void*_T8;struct _fat_ptr*_T9;struct Cyc_List_List*_TA;struct _tuple15*_TB;struct Cyc_Set_Set**_TC;struct _tuple15*_TD;struct Cyc_Lexing_lexbuf*_TE;void(*_TF)(struct Cyc_Lexing_lexbuf*);struct _tuple15*_T10;struct Cyc_Lexing_Error_exn_struct*_T11;void*_T12;
lexstate= Cyc_lex_engine(lexstate,lexbuf);_T0= lexstate;_T1= (int)_T0;switch(_T1){case 0:
# 230 "cyclone/tools/buildlib/buildlib.cyl"
 Cyc_macroname(lexbuf);
_TL24: if(Cyc_current_args!=0)goto _TL22;else{goto _TL23;}
_TL22:{struct Cyc_Set_Set**_T13=_cycalloc(sizeof(struct Cyc_Set_Set*));_T4= Cyc_Set_delete;{struct Cyc_Set_Set*(*_T14)(struct Cyc_Set_Set*,struct _fat_ptr*)=(struct Cyc_Set_Set*(*)(struct Cyc_Set_Set*,struct _fat_ptr*))_T4;_T3= _T14;}_T5= _check_null(Cyc_current_targets);_T6= *_T5;_T7= Cyc_current_args;_T8= _T7->hd;_T9= (struct _fat_ptr*)_T8;({__typeof__(_T3(_T6,_T9))_T14=_T3(_T6,_T9);*_T13= _T14;});_T2= (struct Cyc_Set_Set**)_T13;}Cyc_current_targets= _T2;_TA= 
# 231
_check_null(Cyc_current_args);Cyc_current_args= _TA->tl;goto _TL24;_TL23:{struct _tuple15*_T13=_cycalloc(sizeof(struct _tuple15));
# 235
({__typeof__(_check_null(Cyc_current_source))_T14=_check_null(Cyc_current_source);_T13->f0= _T14;});_TC= _check_null(Cyc_current_targets);_T13->f1= *_TC;_TB= (struct _tuple15*)_T13;}return _TB;case 1: _TD= 
# 238 "cyclone/tools/buildlib/buildlib.cyl"
Cyc_line(lexbuf);return _TD;case 2:
# 240
 return 0;default: _TE= lexbuf;_TF= _TE->refill_buff;
_TF(lexbuf);_T10= 
Cyc_line_rec(lexbuf,lexstate);return _T10;}{struct Cyc_Lexing_Error_exn_struct*_T13=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_T13->tag= Cyc_Lexing_Error;
# 244
({__typeof__(_tag_fat("some action didn't return!",sizeof(char),27U))_T14=_tag_fat("some action didn't return!",sizeof(char),27U);_T13->f1= _T14;});_T11= (struct Cyc_Lexing_Error_exn_struct*)_T13;}_T12= (void*)_T11;_rethrow(_T12);}
# 246
struct _tuple15*Cyc_line(struct Cyc_Lexing_lexbuf*lexbuf){struct _tuple15*_T0;_T0= Cyc_line_rec(lexbuf,0);return _T0;}
int Cyc_macroname_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;struct _fat_ptr*_T2;struct _fat_ptr _T3;int _T4;int _T5;int _T6;int _T7;unsigned long _T8;struct _fat_ptr _T9;struct Cyc_Set_Set**_TA;struct Cyc_Set_Set*(*_TB)(int(*)(struct _fat_ptr*,struct _fat_ptr*));struct Cyc_Set_Set*(*_TC)(int(*)(void*,void*));int(*_TD)(struct _fat_ptr*,struct _fat_ptr*);struct _fat_ptr*_TE;struct _fat_ptr _TF;int _T10;int _T11;int _T12;int _T13;unsigned long _T14;struct _fat_ptr _T15;struct Cyc_Set_Set**_T16;struct Cyc_Set_Set*(*_T17)(int(*)(struct _fat_ptr*,struct _fat_ptr*));struct Cyc_Set_Set*(*_T18)(int(*)(void*,void*));int(*_T19)(struct _fat_ptr*,struct _fat_ptr*);struct _fat_ptr*_T1A;struct _fat_ptr _T1B;struct Cyc_Set_Set**_T1C;struct Cyc_Set_Set*(*_T1D)(int(*)(struct _fat_ptr*,struct _fat_ptr*));struct Cyc_Set_Set*(*_T1E)(int(*)(void*,void*));int(*_T1F)(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_Lexing_lexbuf*_T20;void(*_T21)(struct Cyc_Lexing_lexbuf*);int _T22;struct Cyc_Lexing_Error_exn_struct*_T23;void*_T24;
lexstate= Cyc_lex_engine(lexstate,lexbuf);_T0= lexstate;_T1= (int)_T0;switch(_T1){case 0:{struct _fat_ptr*_T25=_cycalloc(sizeof(struct _fat_ptr));_T3= 
# 244 "cyclone/tools/buildlib/buildlib.cyl"
Cyc_Lexing_lexeme(lexbuf);_T4= 
Cyc_Lexing_lexeme_end(lexbuf);_T5= Cyc_Lexing_lexeme_start(lexbuf);_T6= _T4 - _T5;_T7= _T6 - 2;_T8= (unsigned long)_T7;_T9= 
# 244
Cyc_substring(_T3,0,_T8);*_T25= _T9;_T2= (struct _fat_ptr*)_T25;}Cyc_current_source= _T2;
# 246
Cyc_current_args= 0;{struct Cyc_Set_Set**_T25=_cycalloc(sizeof(struct Cyc_Set_Set*));_TC= Cyc_Set_empty;{
struct Cyc_Set_Set*(*_T26)(int(*)(struct _fat_ptr*,struct _fat_ptr*))=(struct Cyc_Set_Set*(*)(int(*)(struct _fat_ptr*,struct _fat_ptr*)))_TC;_TB= _T26;}_TD= Cyc_strptrcmp;({__typeof__(_TB(_TD))_T26=_TB(_TD);*_T25= _T26;});_TA= (struct Cyc_Set_Set**)_T25;}Cyc_current_targets= _TA;
Cyc_token(lexbuf);
return 0;case 1:{struct _fat_ptr*_T25=_cycalloc(sizeof(struct _fat_ptr));_TF= 
# 252
Cyc_Lexing_lexeme(lexbuf);_T10= 
Cyc_Lexing_lexeme_end(lexbuf);_T11= Cyc_Lexing_lexeme_start(lexbuf);_T12= _T10 - _T11;_T13= _T12 - 1;_T14= (unsigned long)_T13;_T15= 
# 252
Cyc_substring(_TF,0,_T14);*_T25= _T15;_TE= (struct _fat_ptr*)_T25;}Cyc_current_source= _TE;
# 254
Cyc_current_args= 0;{struct Cyc_Set_Set**_T25=_cycalloc(sizeof(struct Cyc_Set_Set*));_T18= Cyc_Set_empty;{
struct Cyc_Set_Set*(*_T26)(int(*)(struct _fat_ptr*,struct _fat_ptr*))=(struct Cyc_Set_Set*(*)(int(*)(struct _fat_ptr*,struct _fat_ptr*)))_T18;_T17= _T26;}_T19= Cyc_strptrcmp;({__typeof__(_T17(_T19))_T26=_T17(_T19);*_T25= _T26;});_T16= (struct Cyc_Set_Set**)_T25;}Cyc_current_targets= _T16;
Cyc_args(lexbuf);
return 0;case 2:{struct _fat_ptr*_T25=_cycalloc(sizeof(struct _fat_ptr));_T1B= 
# 260
Cyc_Lexing_lexeme(lexbuf);*_T25= _T1B;_T1A= (struct _fat_ptr*)_T25;}Cyc_current_source= _T1A;
Cyc_current_args= 0;{struct Cyc_Set_Set**_T25=_cycalloc(sizeof(struct Cyc_Set_Set*));_T1E= Cyc_Set_empty;{
struct Cyc_Set_Set*(*_T26)(int(*)(struct _fat_ptr*,struct _fat_ptr*))=(struct Cyc_Set_Set*(*)(int(*)(struct _fat_ptr*,struct _fat_ptr*)))_T1E;_T1D= _T26;}_T1F= Cyc_strptrcmp;({__typeof__(_T1D(_T1F))_T26=_T1D(_T1F);*_T25= _T26;});_T1C= (struct Cyc_Set_Set**)_T25;}Cyc_current_targets= _T1C;
Cyc_token(lexbuf);
return 0;default: _T20= lexbuf;_T21= _T20->refill_buff;
# 266
_T21(lexbuf);_T22= 
Cyc_macroname_rec(lexbuf,lexstate);return _T22;}{struct Cyc_Lexing_Error_exn_struct*_T25=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_T25->tag= Cyc_Lexing_Error;
# 269
({__typeof__(_tag_fat("some action didn't return!",sizeof(char),27U))_T26=_tag_fat("some action didn't return!",sizeof(char),27U);_T25->f1= _T26;});_T23= (struct Cyc_Lexing_Error_exn_struct*)_T25;}_T24= (void*)_T23;_rethrow(_T24);}
# 271
int Cyc_macroname(struct Cyc_Lexing_lexbuf*lexbuf){int _T0;_T0= Cyc_macroname_rec(lexbuf,1);return _T0;}
int Cyc_args_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;struct _fat_ptr*_T2;struct _fat_ptr _T3;int _T4;int _T5;int _T6;int _T7;unsigned long _T8;struct _fat_ptr _T9;struct Cyc_List_List*_TA;int _TB;struct _fat_ptr*_TC;struct _fat_ptr _TD;int _TE;int _TF;int _T10;int _T11;unsigned long _T12;struct _fat_ptr _T13;struct Cyc_List_List*_T14;int _T15;struct _fat_ptr*_T16;struct _fat_ptr _T17;int _T18;int _T19;int _T1A;int _T1B;unsigned long _T1C;struct _fat_ptr _T1D;struct Cyc_List_List*_T1E;int _T1F;struct _fat_ptr*_T20;struct _fat_ptr _T21;int _T22;int _T23;int _T24;int _T25;unsigned long _T26;struct _fat_ptr _T27;struct Cyc_List_List*_T28;int _T29;struct Cyc_Lexing_lexbuf*_T2A;void(*_T2B)(struct Cyc_Lexing_lexbuf*);int _T2C;struct Cyc_Lexing_Error_exn_struct*_T2D;void*_T2E;
lexstate= Cyc_lex_engine(lexstate,lexbuf);_T0= lexstate;_T1= (int)_T0;switch(_T1){case 0:  {
# 269 "cyclone/tools/buildlib/buildlib.cyl"
struct _fat_ptr*a;a= _cycalloc(sizeof(struct _fat_ptr));_T2= a;_T3= Cyc_Lexing_lexeme(lexbuf);_T4= 
Cyc_Lexing_lexeme_end(lexbuf);_T5= Cyc_Lexing_lexeme_start(lexbuf);_T6= _T4 - _T5;_T7= _T6 - 2;_T8= (unsigned long)_T7;_T9= 
# 269
Cyc_substring(_T3,0,_T8);*_T2= _T9;{struct Cyc_List_List*_T2F=_cycalloc(sizeof(struct Cyc_List_List));
# 271
_T2F->hd= a;_T2F->tl= Cyc_current_args;_TA= (struct Cyc_List_List*)_T2F;}Cyc_current_args= _TA;_TB= 
Cyc_args(lexbuf);return _TB;}case 1:  {
# 275
struct _fat_ptr*a;a= _cycalloc(sizeof(struct _fat_ptr));_TC= a;_TD= Cyc_Lexing_lexeme(lexbuf);_TE= 
Cyc_Lexing_lexeme_end(lexbuf);_TF= Cyc_Lexing_lexeme_start(lexbuf);_T10= _TE - _TF;_T11= _T10 - 1;_T12= (unsigned long)_T11;_T13= 
# 275
Cyc_substring(_TD,0,_T12);*_TC= _T13;{struct Cyc_List_List*_T2F=_cycalloc(sizeof(struct Cyc_List_List));
# 277
_T2F->hd= a;_T2F->tl= Cyc_current_args;_T14= (struct Cyc_List_List*)_T2F;}Cyc_current_args= _T14;_T15= 
Cyc_args(lexbuf);return _T15;}case 2:  {
# 281
struct _fat_ptr*a;a= _cycalloc(sizeof(struct _fat_ptr));_T16= a;_T17= Cyc_Lexing_lexeme(lexbuf);_T18= 
Cyc_Lexing_lexeme_end(lexbuf);_T19= Cyc_Lexing_lexeme_start(lexbuf);_T1A= _T18 - _T19;_T1B= _T1A - 1;_T1C= (unsigned long)_T1B;_T1D= 
# 281
Cyc_substring(_T17,0,_T1C);*_T16= _T1D;{struct Cyc_List_List*_T2F=_cycalloc(sizeof(struct Cyc_List_List));
# 283
_T2F->hd= a;_T2F->tl= Cyc_current_args;_T1E= (struct Cyc_List_List*)_T2F;}Cyc_current_args= _T1E;_T1F= 
Cyc_token(lexbuf);return _T1F;}case 3:  {
# 287
struct _fat_ptr*a;a= _cycalloc(sizeof(struct _fat_ptr));_T20= a;_T21= Cyc_Lexing_lexeme(lexbuf);_T22= 
Cyc_Lexing_lexeme_end(lexbuf);_T23= Cyc_Lexing_lexeme_start(lexbuf);_T24= _T22 - _T23;_T25= _T24 - 4;_T26= (unsigned long)_T25;_T27= 
# 287
Cyc_substring(_T21,0,_T26);*_T20= _T27;{struct Cyc_List_List*_T2F=_cycalloc(sizeof(struct Cyc_List_List));
# 289
_T2F->hd= a;_T2F->tl= Cyc_current_args;_T28= (struct Cyc_List_List*)_T2F;}Cyc_current_args= _T28;_T29= 
Cyc_token(lexbuf);return _T29;}default: _T2A= lexbuf;_T2B= _T2A->refill_buff;
# 292
_T2B(lexbuf);_T2C= 
Cyc_args_rec(lexbuf,lexstate);return _T2C;}{struct Cyc_Lexing_Error_exn_struct*_T2F=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_T2F->tag= Cyc_Lexing_Error;
# 295
({__typeof__(_tag_fat("some action didn't return!",sizeof(char),27U))_T30=_tag_fat("some action didn't return!",sizeof(char),27U);_T2F->f1= _T30;});_T2D= (struct Cyc_Lexing_Error_exn_struct*)_T2F;}_T2E= (void*)_T2D;_rethrow(_T2E);}
# 297
int Cyc_args(struct Cyc_Lexing_lexbuf*lexbuf){int _T0;_T0= Cyc_args_rec(lexbuf,2);return _T0;}
int Cyc_token_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;struct _fat_ptr*_T2;struct _fat_ptr _T3;int _T4;int _T5;int _T6;int _T7;int _T8;int _T9;int _TA;int _TB;int _TC;int _TD;int _TE;int _TF;int _T10;int _T11;int _T12;int _T13;int _T14;int _T15;int _T16;int _T17;int _T18;int _T19;int _T1A;int _T1B;int _T1C;int _T1D;int _T1E;int _T1F;int _T20;int _T21;int _T22;int _T23;int _T24;int _T25;int _T26;int _T27;int _T28;int _T29;int _T2A;int _T2B;int _T2C;int _T2D;int _T2E;int _T2F;int _T30;int _T31;int _T32;int _T33;struct Cyc_Lexing_lexbuf*_T34;void(*_T35)(struct Cyc_Lexing_lexbuf*);int _T36;struct Cyc_Lexing_Error_exn_struct*_T37;void*_T38;
lexstate= Cyc_lex_engine(lexstate,lexbuf);_T0= lexstate;_T1= (int)_T0;switch(_T1){case 0:{struct _fat_ptr*_T39=_cycalloc(sizeof(struct _fat_ptr));_T3= 
# 296 "cyclone/tools/buildlib/buildlib.cyl"
Cyc_Lexing_lexeme(lexbuf);*_T39= _T3;_T2= (struct _fat_ptr*)_T39;}Cyc_add_target(_T2);_T4= Cyc_token(lexbuf);return _T4;case 1:
# 299 "cyclone/tools/buildlib/buildlib.cyl"
 return 0;case 2: _T5= 
# 302 "cyclone/tools/buildlib/buildlib.cyl"
Cyc_token(lexbuf);return _T5;case 3:
# 305 "cyclone/tools/buildlib/buildlib.cyl"
 Cyc_string(lexbuf);_T6= Cyc_token(lexbuf);return _T6;case 4: _T7= 
# 308 "cyclone/tools/buildlib/buildlib.cyl"
Cyc_token(lexbuf);return _T7;case 5: _T8= 
# 310
Cyc_token(lexbuf);return _T8;case 6: _T9= 
# 312
Cyc_token(lexbuf);return _T9;case 7: _TA= 
# 314
Cyc_token(lexbuf);return _TA;case 8: _TB= 
# 317 "cyclone/tools/buildlib/buildlib.cyl"
Cyc_token(lexbuf);return _TB;case 9: _TC= 
# 320 "cyclone/tools/buildlib/buildlib.cyl"
Cyc_token(lexbuf);return _TC;case 10: _TD= 
# 323 "cyclone/tools/buildlib/buildlib.cyl"
Cyc_token(lexbuf);return _TD;case 11: _TE= 
# 325
Cyc_token(lexbuf);return _TE;case 12: _TF= 
# 327
Cyc_token(lexbuf);return _TF;case 13: _T10= 
# 329
Cyc_token(lexbuf);return _T10;case 14: _T11= 
# 331
Cyc_token(lexbuf);return _T11;case 15: _T12= 
# 333
Cyc_token(lexbuf);return _T12;case 16: _T13= 
# 335
Cyc_token(lexbuf);return _T13;case 17: _T14= 
# 337
Cyc_token(lexbuf);return _T14;case 18: _T15= 
# 339
Cyc_token(lexbuf);return _T15;case 19: _T16= 
# 341
Cyc_token(lexbuf);return _T16;case 20: _T17= 
# 343
Cyc_token(lexbuf);return _T17;case 21: _T18= 
# 345
Cyc_token(lexbuf);return _T18;case 22: _T19= 
# 347
Cyc_token(lexbuf);return _T19;case 23: _T1A= 
# 349
Cyc_token(lexbuf);return _T1A;case 24: _T1B= 
# 352 "cyclone/tools/buildlib/buildlib.cyl"
Cyc_token(lexbuf);return _T1B;case 25: _T1C= 
# 354
Cyc_token(lexbuf);return _T1C;case 26: _T1D= 
# 356
Cyc_token(lexbuf);return _T1D;case 27: _T1E= 
# 358
Cyc_token(lexbuf);return _T1E;case 28: _T1F= 
# 360
Cyc_token(lexbuf);return _T1F;case 29: _T20= 
# 362
Cyc_token(lexbuf);return _T20;case 30: _T21= 
# 364
Cyc_token(lexbuf);return _T21;case 31: _T22= 
# 366
Cyc_token(lexbuf);return _T22;case 32: _T23= 
# 368
Cyc_token(lexbuf);return _T23;case 33: _T24= 
# 370
Cyc_token(lexbuf);return _T24;case 34: _T25= 
# 372
Cyc_token(lexbuf);return _T25;case 35: _T26= 
# 374
Cyc_token(lexbuf);return _T26;case 36: _T27= 
# 376
Cyc_token(lexbuf);return _T27;case 37: _T28= 
# 378
Cyc_token(lexbuf);return _T28;case 38: _T29= 
# 380
Cyc_token(lexbuf);return _T29;case 39: _T2A= 
# 382
Cyc_token(lexbuf);return _T2A;case 40: _T2B= 
# 384
Cyc_token(lexbuf);return _T2B;case 41: _T2C= 
# 386
Cyc_token(lexbuf);return _T2C;case 42: _T2D= 
# 388
Cyc_token(lexbuf);return _T2D;case 43: _T2E= 
# 390
Cyc_token(lexbuf);return _T2E;case 44: _T2F= 
# 392
Cyc_token(lexbuf);return _T2F;case 45: _T30= 
# 394
Cyc_token(lexbuf);return _T30;case 46: _T31= 
# 396
Cyc_token(lexbuf);return _T31;case 47: _T32= 
# 398
Cyc_token(lexbuf);return _T32;case 48: _T33= 
# 401 "cyclone/tools/buildlib/buildlib.cyl"
Cyc_token(lexbuf);return _T33;default: _T34= lexbuf;_T35= _T34->refill_buff;
_T35(lexbuf);_T36= 
Cyc_token_rec(lexbuf,lexstate);return _T36;}{struct Cyc_Lexing_Error_exn_struct*_T39=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_T39->tag= Cyc_Lexing_Error;
# 405
({__typeof__(_tag_fat("some action didn't return!",sizeof(char),27U))_T3A=_tag_fat("some action didn't return!",sizeof(char),27U);_T39->f1= _T3A;});_T37= (struct Cyc_Lexing_Error_exn_struct*)_T39;}_T38= (void*)_T37;_rethrow(_T38);}
# 407
int Cyc_token(struct Cyc_Lexing_lexbuf*lexbuf){int _T0;_T0= Cyc_token_rec(lexbuf,3);return _T0;}
int Cyc_string_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;int _T2;int _T3;int _T4;int _T5;int _T6;int _T7;int _T8;struct Cyc_Lexing_lexbuf*_T9;void(*_TA)(struct Cyc_Lexing_lexbuf*);int _TB;struct Cyc_Lexing_Error_exn_struct*_TC;void*_TD;
lexstate= Cyc_lex_engine(lexstate,lexbuf);_T0= lexstate;_T1= (int)_T0;switch(_T1){case 0: _T2= 
# 406 "cyclone/tools/buildlib/buildlib.cyl"
Cyc_string(lexbuf);return _T2;case 1:
# 407 "cyclone/tools/buildlib/buildlib.cyl"
 return 0;case 2: _T3= 
# 408 "cyclone/tools/buildlib/buildlib.cyl"
Cyc_string(lexbuf);return _T3;case 3: _T4= 
# 409 "cyclone/tools/buildlib/buildlib.cyl"
Cyc_string(lexbuf);return _T4;case 4: _T5= 
# 412 "cyclone/tools/buildlib/buildlib.cyl"
Cyc_string(lexbuf);return _T5;case 5: _T6= 
# 415 "cyclone/tools/buildlib/buildlib.cyl"
Cyc_string(lexbuf);return _T6;case 6: _T7= 
# 417
Cyc_string(lexbuf);return _T7;case 7:
# 418 "cyclone/tools/buildlib/buildlib.cyl"
 return 0;case 8:
# 419 "cyclone/tools/buildlib/buildlib.cyl"
 return 0;case 9: _T8= 
# 420 "cyclone/tools/buildlib/buildlib.cyl"
Cyc_string(lexbuf);return _T8;default: _T9= lexbuf;_TA= _T9->refill_buff;
_TA(lexbuf);_TB= 
Cyc_string_rec(lexbuf,lexstate);return _TB;}{struct Cyc_Lexing_Error_exn_struct*_TE=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_TE->tag= Cyc_Lexing_Error;
# 424
({__typeof__(_tag_fat("some action didn't return!",sizeof(char),27U))_TF=_tag_fat("some action didn't return!",sizeof(char),27U);_TE->f1= _TF;});_TC= (struct Cyc_Lexing_Error_exn_struct*)_TE;}_TD= (void*)_TC;_rethrow(_TD);}
# 426
int Cyc_string(struct Cyc_Lexing_lexbuf*lexbuf){int _T0;_T0= Cyc_string_rec(lexbuf,4);return _T0;}
int Cyc_slurp_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;struct Cyc___cycFILE*_T2;int _T3;struct Cyc___cycFILE*_T4;struct _fat_ptr _T5;struct _fat_ptr _T6;struct Cyc___cycFILE*_T7;struct _fat_ptr _T8;struct _fat_ptr _T9;struct Cyc___cycFILE*_TA;struct _fat_ptr _TB;struct _fat_ptr _TC;struct Cyc___cycFILE*_TD;struct _fat_ptr _TE;struct _fat_ptr _TF;struct Cyc___cycFILE*_T10;struct _fat_ptr _T11;struct _fat_ptr _T12;struct _fat_ptr _T13;struct _fat_ptr _T14;struct _fat_ptr _T15;struct _fat_ptr _T16;struct _fat_ptr _T17;struct _fat_ptr _T18;char _T19;int _T1A;struct Cyc___cycFILE*_T1B;struct Cyc_Lexing_lexbuf*_T1C;void(*_T1D)(struct Cyc_Lexing_lexbuf*);int _T1E;struct Cyc_Lexing_Error_exn_struct*_T1F;void*_T20;
lexstate= Cyc_lex_engine(lexstate,lexbuf);_T0= lexstate;_T1= (int)_T0;switch(_T1){case 0:
# 429 "cyclone/tools/buildlib/buildlib.cyl"
 return 0;case 1: _T2= 
# 431
_check_null(Cyc_slurp_out);Cyc_fputc(34,_T2);
_TL2A: _T3= Cyc_slurp_string(lexbuf);if(_T3)goto _TL2B;else{goto _TL2C;}_TL2B: goto _TL2A;_TL2C:
 return 1;case 2: _T4= 
# 438 "cyclone/tools/buildlib/buildlib.cyl"
_check_null(Cyc_slurp_out);Cyc_fputs("*__IGNORE_FOR_CYCLONE_MALLOC(",_T4);_T5= 
_tag_fat("Warning: declaration of malloc sidestepped\n",sizeof(char),44U);_T6= _tag_fat(0U,sizeof(void*),0);Cyc_log(_T5,_T6);
return 1;case 3: _T7= 
# 444 "cyclone/tools/buildlib/buildlib.cyl"
_check_null(Cyc_slurp_out);Cyc_fputs(" __IGNORE_FOR_CYCLONE_MALLOC(",_T7);_T8= 
_tag_fat("Warning: declaration of malloc sidestepped\n",sizeof(char),44U);_T9= _tag_fat(0U,sizeof(void*),0);Cyc_log(_T8,_T9);
return 1;case 4: _TA= 
# 450 "cyclone/tools/buildlib/buildlib.cyl"
_check_null(Cyc_slurp_out);Cyc_fputs("*__IGNORE_FOR_CYCLONE_CALLOC(",_TA);_TB= 
_tag_fat("Warning: declaration of calloc sidestepped\n",sizeof(char),44U);_TC= _tag_fat(0U,sizeof(void*),0);Cyc_log(_TB,_TC);
return 1;case 5: _TD= 
# 456 "cyclone/tools/buildlib/buildlib.cyl"
_check_null(Cyc_slurp_out);Cyc_fputs(" __IGNORE_FOR_CYCLONE_CALLOC(",_TD);_TE= 
_tag_fat("Warning: declaration of calloc sidestepped\n",sizeof(char),44U);_TF= _tag_fat(0U,sizeof(void*),0);Cyc_log(_TE,_TF);
return 1;case 6: _T10= 
# 460
_check_null(Cyc_slurp_out);Cyc_fputs("__region",_T10);_T11= 
_tag_fat("Warning: use of region sidestepped\n",sizeof(char),36U);_T12= _tag_fat(0U,sizeof(void*),0);Cyc_log(_T11,_T12);
return 1;case 7: _T13= 
# 464
_tag_fat("Warning: use of __extension__ deleted\n",sizeof(char),39U);_T14= _tag_fat(0U,sizeof(void*),0);Cyc_log(_T13,_T14);
return 1;case 8: _T15= 
# 468 "cyclone/tools/buildlib/buildlib.cyl"
_tag_fat("Warning: use of __asm__ on declaration deleted\n",sizeof(char),48U);_T16= _tag_fat(0U,sizeof(void*),0);Cyc_log(_T15,_T16);
return 1;case 9:
# 471
 return 1;case 10:
# 473
 return 1;case 11: _T17= 
# 475
_tag_fat("Warning: typedef __float128 _Float128 deleted\n",sizeof(char),47U);_T18= _tag_fat(0U,sizeof(void*),0);Cyc_log(_T17,_T18);
return 1;case 12: _T19= 
# 477 "cyclone/tools/buildlib/buildlib.cyl"
Cyc_Lexing_lexeme_char(lexbuf,0);_T1A= (int)_T19;_T1B= _check_null(Cyc_slurp_out);Cyc_fputc(_T1A,_T1B);return 1;default: _T1C= lexbuf;_T1D= _T1C->refill_buff;
_T1D(lexbuf);_T1E= 
Cyc_slurp_rec(lexbuf,lexstate);return _T1E;}{struct Cyc_Lexing_Error_exn_struct*_T21=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_T21->tag= Cyc_Lexing_Error;
# 481
({__typeof__(_tag_fat("some action didn't return!",sizeof(char),27U))_T22=_tag_fat("some action didn't return!",sizeof(char),27U);_T21->f1= _T22;});_T1F= (struct Cyc_Lexing_Error_exn_struct*)_T21;}_T20= (void*)_T1F;_rethrow(_T20);}
# 483
int Cyc_slurp(struct Cyc_Lexing_lexbuf*lexbuf){int _T0;_T0= Cyc_slurp_rec(lexbuf,5);return _T0;}
int Cyc_slurp_string_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;struct Cyc___cycFILE*_T2;struct _fat_ptr _T3;struct _fat_ptr _T4;struct Cyc_String_pa_PrintArg_struct _T5;struct Cyc___cycFILE*_T6;struct _fat_ptr _T7;struct _fat_ptr _T8;struct Cyc_String_pa_PrintArg_struct _T9;struct Cyc___cycFILE*_TA;struct _fat_ptr _TB;struct _fat_ptr _TC;struct Cyc_String_pa_PrintArg_struct _TD;struct Cyc___cycFILE*_TE;struct _fat_ptr _TF;struct _fat_ptr _T10;struct Cyc_String_pa_PrintArg_struct _T11;struct Cyc___cycFILE*_T12;struct _fat_ptr _T13;struct _fat_ptr _T14;struct Cyc_String_pa_PrintArg_struct _T15;struct Cyc___cycFILE*_T16;struct _fat_ptr _T17;struct _fat_ptr _T18;struct Cyc_String_pa_PrintArg_struct _T19;struct Cyc___cycFILE*_T1A;struct _fat_ptr _T1B;struct _fat_ptr _T1C;struct Cyc_String_pa_PrintArg_struct _T1D;struct Cyc___cycFILE*_T1E;struct _fat_ptr _T1F;struct _fat_ptr _T20;struct Cyc_Lexing_lexbuf*_T21;void(*_T22)(struct Cyc_Lexing_lexbuf*);int _T23;struct Cyc_Lexing_Error_exn_struct*_T24;void*_T25;
lexstate= Cyc_lex_engine(lexstate,lexbuf);_T0= lexstate;_T1= (int)_T0;switch(_T1){case 0:
# 481 "cyclone/tools/buildlib/buildlib.cyl"
 return 0;case 1: _T2= 
# 483
_check_null(Cyc_slurp_out);Cyc_fputc(34,_T2);return 0;case 2: _T3= 
# 485
_tag_fat("Warning: unclosed string\n",sizeof(char),26U);_T4= _tag_fat(0U,sizeof(void*),0);Cyc_log(_T3,_T4);{struct Cyc_String_pa_PrintArg_struct _T26;_T26.tag= 0;
({__typeof__(Cyc_Lexing_lexeme(lexbuf))_T27=Cyc_Lexing_lexeme(lexbuf);_T26.f1= _T27;});_T5= _T26;}{struct Cyc_String_pa_PrintArg_struct _T26=_T5;void*_T27[1];_T27[0]= & _T26;_T6= _check_null(Cyc_slurp_out);_T7= _tag_fat("%s",sizeof(char),3U);_T8= _tag_fat(_T27,sizeof(void*),1);Cyc_fprintf(_T6,_T7,_T8);}return 1;case 3:{struct Cyc_String_pa_PrintArg_struct _T26;_T26.tag= 0;
# 488
({__typeof__(Cyc_Lexing_lexeme(lexbuf))_T27=Cyc_Lexing_lexeme(lexbuf);_T26.f1= _T27;});_T9= _T26;}{struct Cyc_String_pa_PrintArg_struct _T26=_T9;void*_T27[1];_T27[0]= & _T26;_TA= _check_null(Cyc_slurp_out);_TB= _tag_fat("%s",sizeof(char),3U);_TC= _tag_fat(_T27,sizeof(void*),1);Cyc_fprintf(_TA,_TB,_TC);}return 1;case 4:{struct Cyc_String_pa_PrintArg_struct _T26;_T26.tag= 0;
# 490
({__typeof__(Cyc_Lexing_lexeme(lexbuf))_T27=Cyc_Lexing_lexeme(lexbuf);_T26.f1= _T27;});_TD= _T26;}{struct Cyc_String_pa_PrintArg_struct _T26=_TD;void*_T27[1];_T27[0]= & _T26;_TE= _check_null(Cyc_slurp_out);_TF= _tag_fat("%s",sizeof(char),3U);_T10= _tag_fat(_T27,sizeof(void*),1);Cyc_fprintf(_TE,_TF,_T10);}return 1;case 5:{struct Cyc_String_pa_PrintArg_struct _T26;_T26.tag= 0;
# 492
({__typeof__(Cyc_Lexing_lexeme(lexbuf))_T27=Cyc_Lexing_lexeme(lexbuf);_T26.f1= _T27;});_T11= _T26;}{struct Cyc_String_pa_PrintArg_struct _T26=_T11;void*_T27[1];_T27[0]= & _T26;_T12= _check_null(Cyc_slurp_out);_T13= _tag_fat("%s",sizeof(char),3U);_T14= _tag_fat(_T27,sizeof(void*),1);Cyc_fprintf(_T12,_T13,_T14);}return 1;case 6:{struct Cyc_String_pa_PrintArg_struct _T26;_T26.tag= 0;
# 494
({__typeof__(Cyc_Lexing_lexeme(lexbuf))_T27=Cyc_Lexing_lexeme(lexbuf);_T26.f1= _T27;});_T15= _T26;}{struct Cyc_String_pa_PrintArg_struct _T26=_T15;void*_T27[1];_T27[0]= & _T26;_T16= _check_null(Cyc_slurp_out);_T17= _tag_fat("%s",sizeof(char),3U);_T18= _tag_fat(_T27,sizeof(void*),1);Cyc_fprintf(_T16,_T17,_T18);}return 1;case 7:{struct Cyc_String_pa_PrintArg_struct _T26;_T26.tag= 0;
# 496
({__typeof__(Cyc_Lexing_lexeme(lexbuf))_T27=Cyc_Lexing_lexeme(lexbuf);_T26.f1= _T27;});_T19= _T26;}{struct Cyc_String_pa_PrintArg_struct _T26=_T19;void*_T27[1];_T27[0]= & _T26;_T1A= _check_null(Cyc_slurp_out);_T1B= _tag_fat("%s",sizeof(char),3U);_T1C= _tag_fat(_T27,sizeof(void*),1);Cyc_fprintf(_T1A,_T1B,_T1C);}return 1;case 8:{struct Cyc_String_pa_PrintArg_struct _T26;_T26.tag= 0;
# 498
({__typeof__(Cyc_Lexing_lexeme(lexbuf))_T27=Cyc_Lexing_lexeme(lexbuf);_T26.f1= _T27;});_T1D= _T26;}{struct Cyc_String_pa_PrintArg_struct _T26=_T1D;void*_T27[1];_T27[0]= & _T26;_T1E= _check_null(Cyc_slurp_out);_T1F= _tag_fat("%s",sizeof(char),3U);_T20= _tag_fat(_T27,sizeof(void*),1);Cyc_fprintf(_T1E,_T1F,_T20);}return 1;default: _T21= lexbuf;_T22= _T21->refill_buff;
_T22(lexbuf);_T23= 
Cyc_slurp_string_rec(lexbuf,lexstate);return _T23;}{struct Cyc_Lexing_Error_exn_struct*_T26=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_T26->tag= Cyc_Lexing_Error;
# 502
({__typeof__(_tag_fat("some action didn't return!",sizeof(char),27U))_T27=_tag_fat("some action didn't return!",sizeof(char),27U);_T26->f1= _T27;});_T24= (struct Cyc_Lexing_Error_exn_struct*)_T26;}_T25= (void*)_T24;_rethrow(_T25);}
# 504
int Cyc_slurp_string(struct Cyc_Lexing_lexbuf*lexbuf){int _T0;_T0= Cyc_slurp_string_rec(lexbuf,6);return _T0;}
int Cyc_asmtok_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;int _T2;int _T3;struct Cyc_Lexing_lexbuf*_T4;void(*_T5)(struct Cyc_Lexing_lexbuf*);int _T6;struct Cyc_Lexing_Error_exn_struct*_T7;void*_T8;
lexstate= Cyc_lex_engine(lexstate,lexbuf);_T0= lexstate;_T1= (int)_T0;switch(_T1){case 0:
# 508 "cyclone/tools/buildlib/buildlib.cyl"
 return 0;case 1:
# 510
 if(Cyc_parens_to_match!=1)goto _TL2F;return 0;_TL2F:
 Cyc_parens_to_match= Cyc_parens_to_match + -1;
return 1;case 2:
# 514
 Cyc_parens_to_match= Cyc_parens_to_match + 1;
return 1;case 3:
# 517
 _TL31: _T2= Cyc_asm_string(lexbuf);if(_T2)goto _TL32;else{goto _TL33;}_TL32: goto _TL31;_TL33:
 return 1;case 4:
# 520
 _TL34: _T3= Cyc_asm_comment(lexbuf);if(_T3)goto _TL35;else{goto _TL36;}_TL35: goto _TL34;_TL36:
 return 1;case 5:
# 523
 return 1;case 6:
# 525
 return 1;default: _T4= lexbuf;_T5= _T4->refill_buff;
_T5(lexbuf);_T6= 
Cyc_asmtok_rec(lexbuf,lexstate);return _T6;}{struct Cyc_Lexing_Error_exn_struct*_T9=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_T9->tag= Cyc_Lexing_Error;
# 529
({__typeof__(_tag_fat("some action didn't return!",sizeof(char),27U))_TA=_tag_fat("some action didn't return!",sizeof(char),27U);_T9->f1= _TA;});_T7= (struct Cyc_Lexing_Error_exn_struct*)_T9;}_T8= (void*)_T7;_rethrow(_T8);}
# 531
int Cyc_asmtok(struct Cyc_Lexing_lexbuf*lexbuf){int _T0;_T0= Cyc_asmtok_rec(lexbuf,7);return _T0;}
int Cyc_asm_string_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;struct _fat_ptr _T2;struct _fat_ptr _T3;struct _fat_ptr _T4;struct _fat_ptr _T5;struct Cyc_Lexing_lexbuf*_T6;void(*_T7)(struct Cyc_Lexing_lexbuf*);int _T8;struct Cyc_Lexing_Error_exn_struct*_T9;void*_TA;
lexstate= Cyc_lex_engine(lexstate,lexbuf);_T0= lexstate;_T1= (int)_T0;switch(_T1){case 0: _T2= 
# 529 "cyclone/tools/buildlib/buildlib.cyl"
_tag_fat("Warning: unclosed string\n",sizeof(char),26U);_T3= _tag_fat(0U,sizeof(void*),0);Cyc_log(_T2,_T3);return 0;case 1:
# 531
 return 0;case 2: _T4= 
# 533
_tag_fat("Warning: unclosed string\n",sizeof(char),26U);_T5= _tag_fat(0U,sizeof(void*),0);Cyc_log(_T4,_T5);return 1;case 3:
# 535
 return 1;case 4:
# 537
 return 1;case 5:
# 539
 return 1;case 6:
# 541
 return 1;case 7:
# 543
 return 1;case 8:
# 545
 return 1;default: _T6= lexbuf;_T7= _T6->refill_buff;
_T7(lexbuf);_T8= 
Cyc_asm_string_rec(lexbuf,lexstate);return _T8;}{struct Cyc_Lexing_Error_exn_struct*_TB=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_TB->tag= Cyc_Lexing_Error;
# 549
({__typeof__(_tag_fat("some action didn't return!",sizeof(char),27U))_TC=_tag_fat("some action didn't return!",sizeof(char),27U);_TB->f1= _TC;});_T9= (struct Cyc_Lexing_Error_exn_struct*)_TB;}_TA= (void*)_T9;_rethrow(_TA);}
# 551
int Cyc_asm_string(struct Cyc_Lexing_lexbuf*lexbuf){int _T0;_T0= Cyc_asm_string_rec(lexbuf,8);return _T0;}
int Cyc_asm_comment_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;struct _fat_ptr _T2;struct _fat_ptr _T3;struct Cyc_Lexing_lexbuf*_T4;void(*_T5)(struct Cyc_Lexing_lexbuf*);int _T6;struct Cyc_Lexing_Error_exn_struct*_T7;void*_T8;
lexstate= Cyc_lex_engine(lexstate,lexbuf);_T0= lexstate;_T1= (int)_T0;switch(_T1){case 0: _T2= 
# 549 "cyclone/tools/buildlib/buildlib.cyl"
_tag_fat("Warning: unclosed comment\n",sizeof(char),27U);_T3= _tag_fat(0U,sizeof(void*),0);Cyc_log(_T2,_T3);return 0;case 1:
# 551
 return 0;case 2:
# 553
 return 1;default: _T4= lexbuf;_T5= _T4->refill_buff;
_T5(lexbuf);_T6= 
Cyc_asm_comment_rec(lexbuf,lexstate);return _T6;}{struct Cyc_Lexing_Error_exn_struct*_T9=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_T9->tag= Cyc_Lexing_Error;
# 557
({__typeof__(_tag_fat("some action didn't return!",sizeof(char),27U))_TA=_tag_fat("some action didn't return!",sizeof(char),27U);_T9->f1= _TA;});_T7= (struct Cyc_Lexing_Error_exn_struct*)_T9;}_T8= (void*)_T7;_rethrow(_T8);}
# 559
int Cyc_asm_comment(struct Cyc_Lexing_lexbuf*lexbuf){int _T0;_T0= Cyc_asm_comment_rec(lexbuf,9);return _T0;}
struct _tuple16*Cyc_suck_line_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;struct _tuple16*_T2;struct _tuple16*_T3;struct Cyc_Lexing_lexbuf*_T4;void(*_T5)(struct Cyc_Lexing_lexbuf*);struct _tuple16*_T6;struct Cyc_Lexing_Error_exn_struct*_T7;void*_T8;
lexstate= Cyc_lex_engine(lexstate,lexbuf);_T0= lexstate;_T1= (int)_T0;switch(_T1){case 0:
# 561 "cyclone/tools/buildlib/buildlib.cyl"
 Cyc_current_line= _tag_fat("#define ",sizeof(char),9U);
Cyc_suck_macroname(lexbuf);{struct _tuple16*_T9=_cycalloc(sizeof(struct _tuple16));
_T9->f0= Cyc_current_line;({__typeof__(_check_null(Cyc_current_source))_TA=_check_null(Cyc_current_source);_T9->f1= _TA;});_T2= (struct _tuple16*)_T9;}return _T2;case 1: _T3= 
# 565
Cyc_suck_line(lexbuf);return _T3;case 2:
# 567
 return 0;default: _T4= lexbuf;_T5= _T4->refill_buff;
_T5(lexbuf);_T6= 
Cyc_suck_line_rec(lexbuf,lexstate);return _T6;}{struct Cyc_Lexing_Error_exn_struct*_T9=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_T9->tag= Cyc_Lexing_Error;
# 571
({__typeof__(_tag_fat("some action didn't return!",sizeof(char),27U))_TA=_tag_fat("some action didn't return!",sizeof(char),27U);_T9->f1= _TA;});_T7= (struct Cyc_Lexing_Error_exn_struct*)_T9;}_T8= (void*)_T7;_rethrow(_T8);}
# 573
struct _tuple16*Cyc_suck_line(struct Cyc_Lexing_lexbuf*lexbuf){struct _tuple16*_T0;_T0= Cyc_suck_line_rec(lexbuf,10);return _T0;}
int Cyc_suck_macroname_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){struct _fat_ptr*_T0;struct _fat_ptr _T1;struct _fat_ptr _T2;struct _fat_ptr*_T3;struct _fat_ptr _T4;int _T5;struct Cyc_Lexing_lexbuf*_T6;void(*_T7)(struct Cyc_Lexing_lexbuf*);int _T8;struct Cyc_Lexing_Error_exn_struct*_T9;void*_TA;
lexstate= Cyc_lex_engine(lexstate,lexbuf);if(lexstate!=0)goto _TL3A;{struct _fat_ptr*_TB=_cycalloc(sizeof(struct _fat_ptr));_T1= 
# 571 "cyclone/tools/buildlib/buildlib.cyl"
Cyc_Lexing_lexeme(lexbuf);*_TB= _T1;_T0= (struct _fat_ptr*)_TB;}Cyc_current_source= _T0;_T2= Cyc_current_line;_T3= Cyc_current_source;_T4= *_T3;
Cyc_current_line= Cyc_strconcat(_T2,_T4);_T5= 
Cyc_suck_restofline(lexbuf);return _T5;_TL3A: _T6= lexbuf;_T7= _T6->refill_buff;
# 575
_T7(lexbuf);_T8= 
Cyc_suck_macroname_rec(lexbuf,lexstate);return _T8;{struct Cyc_Lexing_Error_exn_struct*_TB=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_TB->tag= Cyc_Lexing_Error;
# 578
({__typeof__(_tag_fat("some action didn't return!",sizeof(char),27U))_TC=_tag_fat("some action didn't return!",sizeof(char),27U);_TB->f1= _TC;});_T9= (struct Cyc_Lexing_Error_exn_struct*)_TB;}_TA= (void*)_T9;_rethrow(_TA);}
# 580
int Cyc_suck_macroname(struct Cyc_Lexing_lexbuf*lexbuf){int _T0;_T0= Cyc_suck_macroname_rec(lexbuf,11);return _T0;}
int Cyc_suck_restofline_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){struct _fat_ptr _T0;struct _fat_ptr _T1;struct Cyc_Lexing_lexbuf*_T2;void(*_T3)(struct Cyc_Lexing_lexbuf*);int _T4;struct Cyc_Lexing_Error_exn_struct*_T5;void*_T6;
lexstate= Cyc_lex_engine(lexstate,lexbuf);if(lexstate!=0)goto _TL3C;_T0= Cyc_current_line;_T1= 
# 578 "cyclone/tools/buildlib/buildlib.cyl"
Cyc_Lexing_lexeme(lexbuf);Cyc_current_line= Cyc_strconcat(_T0,_T1);return 0;_TL3C: _T2= lexbuf;_T3= _T2->refill_buff;
_T3(lexbuf);_T4= 
Cyc_suck_restofline_rec(lexbuf,lexstate);return _T4;{struct Cyc_Lexing_Error_exn_struct*_T7=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_T7->tag= Cyc_Lexing_Error;
# 582
({__typeof__(_tag_fat("some action didn't return!",sizeof(char),27U))_T8=_tag_fat("some action didn't return!",sizeof(char),27U);_T7->f1= _T8;});_T5= (struct Cyc_Lexing_Error_exn_struct*)_T7;}_T6= (void*)_T5;_rethrow(_T6);}
# 584
int Cyc_suck_restofline(struct Cyc_Lexing_lexbuf*lexbuf){int _T0;_T0= Cyc_suck_restofline_rec(lexbuf,12);return _T0;}
struct _tuple19*Cyc_spec_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;struct _tuple19*_T2;struct _fat_ptr _T3;int _T4;int _T5;int _T6;int _T7;unsigned long _T8;struct _fat_ptr _T9;int _TA;struct _tuple19*_TB;struct _tuple19*_TC;struct Cyc_Int_pa_PrintArg_struct _TD;char _TE;int _TF;struct Cyc___cycFILE*_T10;struct _fat_ptr _T11;struct _fat_ptr _T12;struct Cyc_Lexing_lexbuf*_T13;void(*_T14)(struct Cyc_Lexing_lexbuf*);struct _tuple19*_T15;struct Cyc_Lexing_Error_exn_struct*_T16;void*_T17;
lexstate= Cyc_lex_engine(lexstate,lexbuf);_T0= lexstate;_T1= (int)_T0;switch(_T1){case 0: _T2= 
# 585 "cyclone/tools/buildlib/buildlib.cyl"
Cyc_spec(lexbuf);return _T2;case 1: _T3= 
# 588
Cyc_Lexing_lexeme(lexbuf);_T4= 
Cyc_Lexing_lexeme_end(lexbuf);_T5= Cyc_Lexing_lexeme_start(lexbuf);_T6= _T4 - _T5;_T7= _T6 - 1;_T8= (unsigned long)_T7;_T9= 
# 588
Cyc_substring(_T3,0,_T8);
# 587
Cyc_current_headerfile= _T9;
# 590
Cyc_current_symbols= 0;
Cyc_current_user_defs= 0;
Cyc_current_omit_symbols= 0;
Cyc_current_cstubs= 0;
Cyc_current_cycstubs= 0;
Cyc_current_hstubs= 0;
Cyc_current_cpp= 0;
_TL3F: _TA= Cyc_commands(lexbuf);if(_TA)goto _TL40;else{goto _TL41;}_TL40: goto _TL3F;_TL41:
 Cyc_current_hstubs= Cyc_List_imp_rev(Cyc_current_hstubs);
Cyc_current_cstubs= Cyc_List_imp_rev(Cyc_current_cstubs);
Cyc_current_cycstubs= Cyc_List_imp_rev(Cyc_current_cycstubs);
Cyc_current_cpp= Cyc_List_imp_rev(Cyc_current_cpp);{struct _tuple19*_T18=_cycalloc(sizeof(struct _tuple19));
_T18->f0= Cyc_current_headerfile;
_T18->f1= Cyc_current_symbols;
_T18->f2= Cyc_current_user_defs;
_T18->f3= Cyc_current_omit_symbols;
_T18->f4= Cyc_current_hstubs;
_T18->f5= Cyc_current_cstubs;
_T18->f6= Cyc_current_cycstubs;
_T18->f7= Cyc_current_cpp;_TB= (struct _tuple19*)_T18;}
# 602
return _TB;case 2: _TC= 
# 612
Cyc_spec(lexbuf);return _TC;case 3:
# 614
 return 0;case 4:{struct Cyc_Int_pa_PrintArg_struct _T18;_T18.tag= 1;_TE= 
# 618
Cyc_Lexing_lexeme_char(lexbuf,0);_TF= (int)_TE;_T18.f1= (unsigned long)_TF;_TD= _T18;}{struct Cyc_Int_pa_PrintArg_struct _T18=_TD;void*_T19[1];_T19[0]= & _T18;_T10= Cyc_stderr;_T11= 
# 617
_tag_fat("Error in .cys file: expected header file name, found '%c' instead\n",sizeof(char),67U);_T12= _tag_fat(_T19,sizeof(void*),1);Cyc_fprintf(_T10,_T11,_T12);}
# 619
return 0;default: _T13= lexbuf;_T14= _T13->refill_buff;
_T14(lexbuf);_T15= 
Cyc_spec_rec(lexbuf,lexstate);return _T15;}{struct Cyc_Lexing_Error_exn_struct*_T18=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_T18->tag= Cyc_Lexing_Error;
# 623
({__typeof__(_tag_fat("some action didn't return!",sizeof(char),27U))_T19=_tag_fat("some action didn't return!",sizeof(char),27U);_T18->f1= _T19;});_T16= (struct Cyc_Lexing_Error_exn_struct*)_T18;}_T17= (void*)_T16;_rethrow(_T17);}
# 625
struct _tuple19*Cyc_spec(struct Cyc_Lexing_lexbuf*lexbuf){struct _tuple19*_T0;_T0= Cyc_spec_rec(lexbuf,13);return _T0;}
int Cyc_commands_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;int _T2;int _T3;struct Cyc___cycFILE*_T4;struct _fat_ptr _T5;struct _fat_ptr _T6;int _T7;struct _tuple17*_T8;struct _fat_ptr _T9;struct _tuple17*_TA;struct Cyc_Buffer_t*_TB;struct _fat_ptr _TC;struct Cyc_List_List*_TD;struct _fat_ptr*_TE;struct _fat_ptr _TF;unsigned long _T10;int _T11;struct _fat_ptr _T12;unsigned char*_T13;char*_T14;char _T15;int _T16;int _T17;struct _fat_ptr*_T18;struct _fat_ptr _T19;unsigned char*_T1A;char*_T1B;char _T1C;int _T1D;int _T1E;struct _fat_ptr*_T1F;struct _fat_ptr _T20;struct _fat_ptr _T21;unsigned char*_T22;struct _fat_ptr _T23;unsigned char*_T24;int _T25;int _T26;unsigned long _T27;int _T28;struct _tuple17*_T29;struct _fat_ptr _T2A;struct _tuple17*_T2B;struct Cyc_Buffer_t*_T2C;struct _fat_ptr _T2D;struct Cyc_List_List*_T2E;int _T2F;struct _tuple17*_T30;struct _fat_ptr _T31;struct _tuple17*_T32;struct Cyc_Buffer_t*_T33;struct _fat_ptr _T34;struct Cyc_List_List*_T35;struct _fat_ptr*_T36;struct _fat_ptr _T37;unsigned long _T38;int _T39;struct _fat_ptr _T3A;unsigned char*_T3B;char*_T3C;char _T3D;int _T3E;int _T3F;struct _fat_ptr*_T40;struct _fat_ptr _T41;unsigned char*_T42;char*_T43;char _T44;int _T45;int _T46;struct _fat_ptr*_T47;struct _fat_ptr _T48;struct _fat_ptr _T49;unsigned char*_T4A;struct _fat_ptr _T4B;unsigned char*_T4C;int _T4D;int _T4E;unsigned long _T4F;int _T50;struct _tuple17*_T51;struct _fat_ptr _T52;struct _tuple17*_T53;struct Cyc_Buffer_t*_T54;struct _fat_ptr _T55;struct Cyc_List_List*_T56;int _T57;struct _tuple17*_T58;struct _fat_ptr _T59;struct _tuple17*_T5A;struct Cyc_Buffer_t*_T5B;struct _fat_ptr _T5C;struct Cyc_List_List*_T5D;struct _fat_ptr*_T5E;struct _fat_ptr _T5F;unsigned long _T60;int _T61;struct _fat_ptr _T62;unsigned char*_T63;char*_T64;char _T65;int _T66;int _T67;struct _fat_ptr*_T68;struct _fat_ptr _T69;unsigned char*_T6A;char*_T6B;char _T6C;int _T6D;int _T6E;struct _fat_ptr*_T6F;struct _fat_ptr _T70;struct _fat_ptr _T71;unsigned char*_T72;struct _fat_ptr _T73;unsigned char*_T74;int _T75;int _T76;unsigned long _T77;int _T78;struct _tuple17*_T79;struct _fat_ptr _T7A;struct _tuple17*_T7B;struct Cyc_Buffer_t*_T7C;struct _fat_ptr _T7D;struct Cyc_List_List*_T7E;int _T7F;struct _fat_ptr*_T80;struct Cyc_Buffer_t*_T81;struct _fat_ptr _T82;struct Cyc_List_List*_T83;struct Cyc_Int_pa_PrintArg_struct _T84;char _T85;int _T86;struct Cyc___cycFILE*_T87;struct _fat_ptr _T88;struct _fat_ptr _T89;struct Cyc_Lexing_lexbuf*_T8A;void(*_T8B)(struct Cyc_Lexing_lexbuf*);int _T8C;struct Cyc_Lexing_Error_exn_struct*_T8D;void*_T8E;
lexstate= Cyc_lex_engine(lexstate,lexbuf);_T0= lexstate;_T1= (int)_T0;switch(_T1){case 0:
# 623 "cyclone/tools/buildlib/buildlib.cyl"
 return 0;case 1:
# 625
 return 0;case 2:
# 627
 Cyc_snarfed_symbols= 0;
_TL43: _T2= Cyc_snarfsymbols(lexbuf);if(_T2)goto _TL44;else{goto _TL45;}_TL44: goto _TL43;_TL45:
 Cyc_current_symbols= Cyc_List_append(Cyc_snarfed_symbols,Cyc_current_symbols);
return 1;case 3:
# 632
 Cyc_snarfed_symbols= 0;{
struct Cyc_List_List*tmp_user_defs=Cyc_current_user_defs;
_TL46: _T3= Cyc_snarfsymbols(lexbuf);if(_T3)goto _TL47;else{goto _TL48;}_TL47: goto _TL46;_TL48:
 if(tmp_user_defs==Cyc_current_user_defs)goto _TL49;_T4= Cyc_stderr;_T5= 
# 637
_tag_fat("Error in .cys file: got optional definition in omitsymbols\n",sizeof(char),60U);_T6= _tag_fat(0U,sizeof(void*),0);
# 636
Cyc_fprintf(_T4,_T5,_T6);
# 638
return 0;_TL49:
# 640
 Cyc_current_omit_symbols= Cyc_List_append(Cyc_snarfed_symbols,Cyc_current_omit_symbols);
return 1;}case 4:
# 643
 Cyc_braces_to_match= 1;
Cyc_specbuf= Cyc_Buffer_create(255U);
_TL4B: _T7= Cyc_block(lexbuf);if(_T7)goto _TL4C;else{goto _TL4D;}_TL4C: goto _TL4B;_TL4D: {
struct _tuple17*x;x= _cycalloc(sizeof(struct _tuple17));_T8= x;_T9= _tag_fat(0,0,0);_T8->f0= _T9;_TA= x;_TB= 
_check_null(Cyc_specbuf);_TC= Cyc_Buffer_contents(_TB);_TA->f1= _TC;{struct Cyc_List_List*_T8F=_cycalloc(sizeof(struct Cyc_List_List));
_T8F->hd= x;_T8F->tl= Cyc_current_hstubs;_TD= (struct Cyc_List_List*)_T8F;}Cyc_current_hstubs= _TD;
return 1;}case 5:  {
# 651
struct _fat_ptr s=Cyc_Lexing_lexeme(lexbuf);_TE= & s;_TF= 
_tag_fat("hstub",sizeof(char),6U);_T10= Cyc_strlen(_TF);_T11= (int)_T10;_fat_ptr_inplace_plus(_TE,sizeof(char),_T11);
_TL4E: _T12= s;_T13= _check_fat_subscript(_T12,sizeof(char),0U);_T14= (char*)_T13;_T15= *_T14;_T16= (int)_T15;_T17= isspace(_T16);if(_T17)goto _TL4F;else{goto _TL50;}_TL4F: _T18= & s;_fat_ptr_inplace_plus(_T18,sizeof(char),1);goto _TL4E;_TL50: {
struct _fat_ptr t=s;
_TL51: _T19= t;_T1A= _check_fat_subscript(_T19,sizeof(char),0U);_T1B= (char*)_T1A;_T1C= *_T1B;_T1D= (int)_T1C;_T1E= isspace(_T1D);if(_T1E)goto _TL53;else{goto _TL52;}_TL52: _T1F= & t;_fat_ptr_inplace_plus(_T1F,sizeof(char),1);goto _TL51;_TL53: _T20= s;_T21= t;_T22= _T21.curr;_T23= s;_T24= _T23.curr;_T25= _T22 - _T24;_T26= _T25 / sizeof(char);_T27= (unsigned long)_T26;{
struct _fat_ptr symbol=Cyc_substring(_T20,0,_T27);
Cyc_braces_to_match= 1;
Cyc_specbuf= Cyc_Buffer_create(255U);
_TL54: _T28= Cyc_block(lexbuf);if(_T28)goto _TL55;else{goto _TL56;}_TL55: goto _TL54;_TL56: {
struct _tuple17*x;x= _cycalloc(sizeof(struct _tuple17));_T29= x;_T2A= symbol;_T29->f0= _T2A;_T2B= x;_T2C= 
_check_null(Cyc_specbuf);_T2D= Cyc_Buffer_contents(_T2C);_T2B->f1= _T2D;{struct Cyc_List_List*_T8F=_cycalloc(sizeof(struct Cyc_List_List));
_T8F->hd= x;_T8F->tl= Cyc_current_hstubs;_T2E= (struct Cyc_List_List*)_T8F;}Cyc_current_hstubs= _T2E;
return 1;}}}}case 6:
# 665
 Cyc_braces_to_match= 1;
Cyc_specbuf= Cyc_Buffer_create(255U);
_TL57: _T2F= Cyc_block(lexbuf);if(_T2F)goto _TL58;else{goto _TL59;}_TL58: goto _TL57;_TL59: {
struct _tuple17*x;x= _cycalloc(sizeof(struct _tuple17));_T30= x;_T31= _tag_fat(0,0,0);_T30->f0= _T31;_T32= x;_T33= 
_check_null(Cyc_specbuf);_T34= Cyc_Buffer_contents(_T33);_T32->f1= _T34;{struct Cyc_List_List*_T8F=_cycalloc(sizeof(struct Cyc_List_List));
_T8F->hd= x;_T8F->tl= Cyc_current_cstubs;_T35= (struct Cyc_List_List*)_T8F;}Cyc_current_cstubs= _T35;
return 1;}case 7:  {
# 673
struct _fat_ptr s=Cyc_Lexing_lexeme(lexbuf);_T36= & s;_T37= 
_tag_fat("cstub",sizeof(char),6U);_T38= Cyc_strlen(_T37);_T39= (int)_T38;_fat_ptr_inplace_plus(_T36,sizeof(char),_T39);
_TL5A: _T3A= s;_T3B= _check_fat_subscript(_T3A,sizeof(char),0U);_T3C= (char*)_T3B;_T3D= *_T3C;_T3E= (int)_T3D;_T3F= isspace(_T3E);if(_T3F)goto _TL5B;else{goto _TL5C;}_TL5B: _T40= & s;_fat_ptr_inplace_plus(_T40,sizeof(char),1);goto _TL5A;_TL5C: {
struct _fat_ptr t=s;
_TL5D: _T41= t;_T42= _check_fat_subscript(_T41,sizeof(char),0U);_T43= (char*)_T42;_T44= *_T43;_T45= (int)_T44;_T46= isspace(_T45);if(_T46)goto _TL5F;else{goto _TL5E;}_TL5E: _T47= & t;_fat_ptr_inplace_plus(_T47,sizeof(char),1);goto _TL5D;_TL5F: _T48= s;_T49= t;_T4A= _T49.curr;_T4B= s;_T4C= _T4B.curr;_T4D= _T4A - _T4C;_T4E= _T4D / sizeof(char);_T4F= (unsigned long)_T4E;{
struct _fat_ptr symbol=Cyc_substring(_T48,0,_T4F);
Cyc_braces_to_match= 1;
Cyc_specbuf= Cyc_Buffer_create(255U);
_TL60: _T50= Cyc_block(lexbuf);if(_T50)goto _TL61;else{goto _TL62;}_TL61: goto _TL60;_TL62: {
struct _tuple17*x;x= _cycalloc(sizeof(struct _tuple17));_T51= x;_T52= symbol;_T51->f0= _T52;_T53= x;_T54= 
_check_null(Cyc_specbuf);_T55= Cyc_Buffer_contents(_T54);_T53->f1= _T55;{struct Cyc_List_List*_T8F=_cycalloc(sizeof(struct Cyc_List_List));
_T8F->hd= x;_T8F->tl= Cyc_current_cstubs;_T56= (struct Cyc_List_List*)_T8F;}Cyc_current_cstubs= _T56;
return 1;}}}}case 8:
# 687
 Cyc_braces_to_match= 1;
Cyc_specbuf= Cyc_Buffer_create(255U);
_TL63: _T57= Cyc_block(lexbuf);if(_T57)goto _TL64;else{goto _TL65;}_TL64: goto _TL63;_TL65: {
struct _tuple17*x;x= _cycalloc(sizeof(struct _tuple17));_T58= x;_T59= _tag_fat(0,0,0);_T58->f0= _T59;_T5A= x;_T5B= 
_check_null(Cyc_specbuf);_T5C= Cyc_Buffer_contents(_T5B);_T5A->f1= _T5C;{struct Cyc_List_List*_T8F=_cycalloc(sizeof(struct Cyc_List_List));
_T8F->hd= x;_T8F->tl= Cyc_current_cycstubs;_T5D= (struct Cyc_List_List*)_T8F;}Cyc_current_cycstubs= _T5D;
return 1;}case 9:  {
# 695
struct _fat_ptr s=Cyc_Lexing_lexeme(lexbuf);_T5E= & s;_T5F= 
_tag_fat("cycstub",sizeof(char),8U);_T60= Cyc_strlen(_T5F);_T61= (int)_T60;_fat_ptr_inplace_plus(_T5E,sizeof(char),_T61);
_TL66: _T62= s;_T63= _check_fat_subscript(_T62,sizeof(char),0U);_T64= (char*)_T63;_T65= *_T64;_T66= (int)_T65;_T67= isspace(_T66);if(_T67)goto _TL67;else{goto _TL68;}_TL67: _T68= & s;_fat_ptr_inplace_plus(_T68,sizeof(char),1);goto _TL66;_TL68: {
struct _fat_ptr t=s;
_TL69: _T69= t;_T6A= _check_fat_subscript(_T69,sizeof(char),0U);_T6B= (char*)_T6A;_T6C= *_T6B;_T6D= (int)_T6C;_T6E= isspace(_T6D);if(_T6E)goto _TL6B;else{goto _TL6A;}_TL6A: _T6F= & t;_fat_ptr_inplace_plus(_T6F,sizeof(char),1);goto _TL69;_TL6B: _T70= s;_T71= t;_T72= _T71.curr;_T73= s;_T74= _T73.curr;_T75= _T72 - _T74;_T76= _T75 / sizeof(char);_T77= (unsigned long)_T76;{
struct _fat_ptr symbol=Cyc_substring(_T70,0,_T77);
Cyc_braces_to_match= 1;
Cyc_specbuf= Cyc_Buffer_create(255U);
_TL6C: _T78= Cyc_block(lexbuf);if(_T78)goto _TL6D;else{goto _TL6E;}_TL6D: goto _TL6C;_TL6E: {
struct _tuple17*x;x= _cycalloc(sizeof(struct _tuple17));_T79= x;_T7A= symbol;_T79->f0= _T7A;_T7B= x;_T7C= 
_check_null(Cyc_specbuf);_T7D= Cyc_Buffer_contents(_T7C);_T7B->f1= _T7D;{struct Cyc_List_List*_T8F=_cycalloc(sizeof(struct Cyc_List_List));
_T8F->hd= x;_T8F->tl= Cyc_current_cycstubs;_T7E= (struct Cyc_List_List*)_T8F;}Cyc_current_cycstubs= _T7E;
return 1;}}}}case 10:
# 709
 Cyc_braces_to_match= 1;
Cyc_specbuf= Cyc_Buffer_create(255U);
_TL6F: _T7F= Cyc_block(lexbuf);if(_T7F)goto _TL70;else{goto _TL71;}_TL70: goto _TL6F;_TL71: {
struct _fat_ptr*x;x= _cycalloc(sizeof(struct _fat_ptr));_T80= x;_T81= _check_null(Cyc_specbuf);_T82= Cyc_Buffer_contents(_T81);*_T80= _T82;{struct Cyc_List_List*_T8F=_cycalloc(sizeof(struct Cyc_List_List));
_T8F->hd= x;_T8F->tl= Cyc_current_cpp;_T83= (struct Cyc_List_List*)_T8F;}Cyc_current_cpp= _T83;
return 1;}case 11:
# 716
 return 1;case 12:
# 718
 return 1;case 13:{struct Cyc_Int_pa_PrintArg_struct _T8F;_T8F.tag= 1;_T85= 
# 722
Cyc_Lexing_lexeme_char(lexbuf,0);_T86= (int)_T85;_T8F.f1= (unsigned long)_T86;_T84= _T8F;}{struct Cyc_Int_pa_PrintArg_struct _T8F=_T84;void*_T90[1];_T90[0]= & _T8F;_T87= Cyc_stderr;_T88= 
# 721
_tag_fat("Error in .cys file: expected command, found '%c' instead\n",sizeof(char),58U);_T89= _tag_fat(_T90,sizeof(void*),1);Cyc_fprintf(_T87,_T88,_T89);}
# 723
return 0;default: _T8A= lexbuf;_T8B= _T8A->refill_buff;
_T8B(lexbuf);_T8C= 
Cyc_commands_rec(lexbuf,lexstate);return _T8C;}{struct Cyc_Lexing_Error_exn_struct*_T8F=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_T8F->tag= Cyc_Lexing_Error;
# 727
({__typeof__(_tag_fat("some action didn't return!",sizeof(char),27U))_T90=_tag_fat("some action didn't return!",sizeof(char),27U);_T8F->f1= _T90;});_T8D= (struct Cyc_Lexing_Error_exn_struct*)_T8F;}_T8E= (void*)_T8D;_rethrow(_T8E);}
# 729
int Cyc_commands(struct Cyc_Lexing_lexbuf*lexbuf){int _T0;_T0= Cyc_commands_rec(lexbuf,14);return _T0;}
int Cyc_snarfsymbols_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;struct Cyc_List_List*_T2;struct _fat_ptr*_T3;struct _fat_ptr _T4;struct _fat_ptr _T5;unsigned char*_T6;char*_T7;char _T8;int _T9;int _TA;struct _fat_ptr*_TB;struct _fat_ptr _TC;struct _fat_ptr _TD;unsigned char*_TE;struct _fat_ptr _TF;unsigned char*_T10;int _T11;int _T12;unsigned long _T13;int _T14;struct _tuple18*_T15;struct _fat_ptr*_T16;struct _tuple18*_T17;struct _fat_ptr*_T18;struct Cyc_Buffer_t*_T19;struct _fat_ptr _T1A;struct Cyc_List_List*_T1B;struct _fat_ptr*_T1C;struct _fat_ptr _T1D;struct Cyc_List_List*_T1E;struct Cyc___cycFILE*_T1F;struct _fat_ptr _T20;struct _fat_ptr _T21;struct Cyc_Int_pa_PrintArg_struct _T22;char _T23;int _T24;struct Cyc___cycFILE*_T25;struct _fat_ptr _T26;struct _fat_ptr _T27;struct Cyc_Lexing_lexbuf*_T28;void(*_T29)(struct Cyc_Lexing_lexbuf*);int _T2A;struct Cyc_Lexing_Error_exn_struct*_T2B;void*_T2C;
lexstate= Cyc_lex_engine(lexstate,lexbuf);_T0= lexstate;_T1= (int)_T0;switch(_T1){case 0:{struct Cyc_List_List*_T2D=_cycalloc(sizeof(struct Cyc_List_List));{struct _fat_ptr*_T2E=_cycalloc(sizeof(struct _fat_ptr));_T4= 
# 733 "cyclone/tools/buildlib/buildlib.cyl"
Cyc_Lexing_lexeme(lexbuf);*_T2E= _T4;_T3= (struct _fat_ptr*)_T2E;}_T2D->hd= _T3;_T2D->tl= Cyc_snarfed_symbols;_T2= (struct Cyc_List_List*)_T2D;}Cyc_snarfed_symbols= _T2;
return 1;case 1:  {
# 736
struct _fat_ptr s=Cyc_Lexing_lexeme(lexbuf);
struct _fat_ptr t=s;
_TL73: _T5= t;_T6= _check_fat_subscript(_T5,sizeof(char),0U);_T7= (char*)_T6;_T8= *_T7;_T9= (int)_T8;_TA= isspace(_T9);if(_TA)goto _TL75;else{goto _TL74;}_TL74: _TB= & t;_fat_ptr_inplace_plus(_TB,sizeof(char),1);goto _TL73;_TL75: _TC= s;_TD= t;_TE= _TD.curr;_TF= s;_T10= _TF.curr;_T11= _TE - _T10;_T12= _T11 / sizeof(char);_T13= (unsigned long)_T12;
Cyc_current_symbol= Cyc_substring(_TC,0,_T13);
Cyc_rename_current_symbol= 1;
Cyc_braces_to_match= 1;
Cyc_specbuf= Cyc_Buffer_create(255U);
_TL76: _T14= Cyc_block(lexbuf);if(_T14)goto _TL77;else{goto _TL78;}_TL77: goto _TL76;_TL78:
# 745
 Cyc_rename_current_symbol= 0;{
struct _tuple18*user_def;user_def= _cycalloc(sizeof(struct _tuple18));_T15= user_def;{struct _fat_ptr*_T2D=_cycalloc(sizeof(struct _fat_ptr));*_T2D= Cyc_current_symbol;_T16= (struct _fat_ptr*)_T2D;}_T15->f0= _T16;_T17= user_def;{struct _fat_ptr*_T2D=_cycalloc(sizeof(struct _fat_ptr));_T19= 
_check_null(Cyc_specbuf);_T1A= Cyc_Buffer_contents(_T19);*_T2D= _T1A;_T18= (struct _fat_ptr*)_T2D;}_T17->f1= _T18;{struct Cyc_List_List*_T2D=_cycalloc(sizeof(struct Cyc_List_List));{struct _fat_ptr*_T2E=_cycalloc(sizeof(struct _fat_ptr));_T1D= Cyc_current_symbol;
*_T2E= _T1D;_T1C= (struct _fat_ptr*)_T2E;}_T2D->hd= _T1C;_T2D->tl= Cyc_snarfed_symbols;_T1B= (struct Cyc_List_List*)_T2D;}Cyc_snarfed_symbols= _T1B;{struct Cyc_List_List*_T2D=_cycalloc(sizeof(struct Cyc_List_List));
_T2D->hd= user_def;_T2D->tl= Cyc_current_user_defs;_T1E= (struct Cyc_List_List*)_T2D;}Cyc_current_user_defs= _T1E;
return 1;}}case 2:
# 754 "cyclone/tools/buildlib/buildlib.cyl"
 return 1;case 3:
# 756
 return 0;case 4: _T1F= Cyc_stderr;_T20= 
# 759
_tag_fat("Error in .cys file: unexpected end-of-file\n",sizeof(char),44U);_T21= _tag_fat(0U,sizeof(void*),0);
# 758
Cyc_fprintf(_T1F,_T20,_T21);
# 760
return 0;case 5:{struct Cyc_Int_pa_PrintArg_struct _T2D;_T2D.tag= 1;_T23= 
# 764
Cyc_Lexing_lexeme_char(lexbuf,0);_T24= (int)_T23;_T2D.f1= (unsigned long)_T24;_T22= _T2D;}{struct Cyc_Int_pa_PrintArg_struct _T2D=_T22;void*_T2E[1];_T2E[0]= & _T2D;_T25= Cyc_stderr;_T26= 
# 763
_tag_fat("Error in .cys file: expected symbol, found '%c' instead\n",sizeof(char),57U);_T27= _tag_fat(_T2E,sizeof(void*),1);Cyc_fprintf(_T25,_T26,_T27);}
# 765
return 0;default: _T28= lexbuf;_T29= _T28->refill_buff;
_T29(lexbuf);_T2A= 
Cyc_snarfsymbols_rec(lexbuf,lexstate);return _T2A;}{struct Cyc_Lexing_Error_exn_struct*_T2D=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_T2D->tag= Cyc_Lexing_Error;
# 769
({__typeof__(_tag_fat("some action didn't return!",sizeof(char),27U))_T2E=_tag_fat("some action didn't return!",sizeof(char),27U);_T2D->f1= _T2E;});_T2B= (struct Cyc_Lexing_Error_exn_struct*)_T2D;}_T2C= (void*)_T2B;_rethrow(_T2C);}
# 771
int Cyc_snarfsymbols(struct Cyc_Lexing_lexbuf*lexbuf){int _T0;_T0= Cyc_snarfsymbols_rec(lexbuf,15);return _T0;}
int Cyc_block_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;struct _fat_ptr _T2;struct _fat_ptr _T3;struct Cyc_Buffer_t*_T4;struct Cyc_Buffer_t*_T5;struct Cyc_Buffer_t*_T6;int _T7;struct Cyc_Buffer_t*_T8;struct _fat_ptr _T9;int _TA;struct Cyc_Buffer_t*_TB;struct _fat_ptr _TC;struct _fat_ptr _TD;long _TE;int _TF;struct Cyc_Buffer_t*_T10;struct _fat_ptr*_T11;struct _fat_ptr*_T12;struct _fat_ptr _T13;struct Cyc_Buffer_t*_T14;struct _fat_ptr _T15;struct Cyc_Buffer_t*_T16;char _T17;struct Cyc_Lexing_lexbuf*_T18;void(*_T19)(struct Cyc_Lexing_lexbuf*);int _T1A;struct Cyc_Lexing_Error_exn_struct*_T1B;void*_T1C;
lexstate= Cyc_lex_engine(lexstate,lexbuf);_T0= lexstate;_T1= (int)_T0;switch(_T1){case 0: _T2= 
# 775 "cyclone/tools/buildlib/buildlib.cyl"
_tag_fat("Warning: unclosed brace\n",sizeof(char),25U);_T3= _tag_fat(0U,sizeof(void*),0);Cyc_log(_T2,_T3);return 0;case 1:
# 777
 if(Cyc_braces_to_match!=1)goto _TL7A;return 0;_TL7A:
 Cyc_braces_to_match= Cyc_braces_to_match + -1;_T4= 
_check_null(Cyc_specbuf);Cyc_Buffer_add_char(_T4,'}');
return 1;case 2:
# 782
 Cyc_braces_to_match= Cyc_braces_to_match + 1;_T5= 
_check_null(Cyc_specbuf);Cyc_Buffer_add_char(_T5,'{');
return 1;case 3: _T6= 
# 786
_check_null(Cyc_specbuf);Cyc_Buffer_add_char(_T6,'"');
_TL7C: _T7= Cyc_block_string(lexbuf);if(_T7)goto _TL7D;else{goto _TL7E;}_TL7D: goto _TL7C;_TL7E:
 return 1;case 4: _T8= 
# 790
_check_null(Cyc_specbuf);_T9= _tag_fat("/*",sizeof(char),3U);Cyc_Buffer_add_string(_T8,_T9);
_TL7F: _TA= Cyc_block_comment(lexbuf);if(_TA)goto _TL80;else{goto _TL81;}_TL80: goto _TL7F;_TL81:
 return 1;case 5: _TB= 
# 794
_check_null(Cyc_specbuf);_TC= Cyc_Lexing_lexeme(lexbuf);Cyc_Buffer_add_string(_TB,_TC);
return 1;case 6: _TD= 
# 797
Cyc_Lexing_lexeme(lexbuf);{struct _fat_ptr symbol=_TD;_TE= Cyc_rename_current_symbol;
if(!_TE)goto _TL82;_TF= Cyc_strcmp(symbol,Cyc_current_symbol);if(_TF)goto _TL82;else{goto _TL84;}
_TL84: _T10= _check_null(Cyc_specbuf);{struct _fat_ptr*_T1D=_cycalloc(sizeof(struct _fat_ptr));*_T1D= symbol;_T11= (struct _fat_ptr*)_T1D;}_T12= Cyc_add_user_prefix(_T11);_T13= *_T12;Cyc_Buffer_add_string(_T10,_T13);goto _TL83;
# 801
_TL82: _T14= _check_null(Cyc_specbuf);_T15= symbol;Cyc_Buffer_add_string(_T14,_T15);_TL83:
 return 1;}case 7: _T16= 
# 804
_check_null(Cyc_specbuf);_T17= Cyc_Lexing_lexeme_char(lexbuf,0);Cyc_Buffer_add_char(_T16,_T17);
return 1;default: _T18= lexbuf;_T19= _T18->refill_buff;
_T19(lexbuf);_T1A= 
Cyc_block_rec(lexbuf,lexstate);return _T1A;}{struct Cyc_Lexing_Error_exn_struct*_T1D=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_T1D->tag= Cyc_Lexing_Error;
# 809
({__typeof__(_tag_fat("some action didn't return!",sizeof(char),27U))_T1E=_tag_fat("some action didn't return!",sizeof(char),27U);_T1D->f1= _T1E;});_T1B= (struct Cyc_Lexing_Error_exn_struct*)_T1D;}_T1C= (void*)_T1B;_rethrow(_T1C);}
# 811
int Cyc_block(struct Cyc_Lexing_lexbuf*lexbuf){int _T0;_T0= Cyc_block_rec(lexbuf,16);return _T0;}
int Cyc_block_string_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;struct _fat_ptr _T2;struct _fat_ptr _T3;struct Cyc_Buffer_t*_T4;struct _fat_ptr _T5;struct _fat_ptr _T6;struct Cyc_Buffer_t*_T7;struct _fat_ptr _T8;struct Cyc_Buffer_t*_T9;struct _fat_ptr _TA;struct Cyc_Buffer_t*_TB;struct _fat_ptr _TC;struct Cyc_Buffer_t*_TD;struct _fat_ptr _TE;struct Cyc_Buffer_t*_TF;struct _fat_ptr _T10;struct Cyc_Buffer_t*_T11;struct _fat_ptr _T12;struct Cyc_Buffer_t*_T13;struct _fat_ptr _T14;struct Cyc_Lexing_lexbuf*_T15;void(*_T16)(struct Cyc_Lexing_lexbuf*);int _T17;struct Cyc_Lexing_Error_exn_struct*_T18;void*_T19;
lexstate= Cyc_lex_engine(lexstate,lexbuf);_T0= lexstate;_T1= (int)_T0;switch(_T1){case 0: _T2= 
# 809 "cyclone/tools/buildlib/buildlib.cyl"
_tag_fat("Warning: unclosed string\n",sizeof(char),26U);_T3= _tag_fat(0U,sizeof(void*),0);Cyc_log(_T2,_T3);return 0;case 1: _T4= 
# 811
_check_null(Cyc_specbuf);Cyc_Buffer_add_char(_T4,'"');return 0;case 2: _T5= 
# 813
_tag_fat("Warning: unclosed string\n",sizeof(char),26U);_T6= _tag_fat(0U,sizeof(void*),0);Cyc_log(_T5,_T6);_T7= 
_check_null(Cyc_specbuf);_T8= Cyc_Lexing_lexeme(lexbuf);Cyc_Buffer_add_string(_T7,_T8);
return 1;case 3: _T9= 
# 817
_check_null(Cyc_specbuf);_TA= Cyc_Lexing_lexeme(lexbuf);Cyc_Buffer_add_string(_T9,_TA);
return 1;case 4: _TB= 
# 820
_check_null(Cyc_specbuf);_TC= Cyc_Lexing_lexeme(lexbuf);Cyc_Buffer_add_string(_TB,_TC);
return 1;case 5: _TD= 
# 823
_check_null(Cyc_specbuf);_TE= Cyc_Lexing_lexeme(lexbuf);Cyc_Buffer_add_string(_TD,_TE);
return 1;case 6: _TF= 
# 826
_check_null(Cyc_specbuf);_T10= Cyc_Lexing_lexeme(lexbuf);Cyc_Buffer_add_string(_TF,_T10);
return 1;case 7: _T11= 
# 829
_check_null(Cyc_specbuf);_T12= Cyc_Lexing_lexeme(lexbuf);Cyc_Buffer_add_string(_T11,_T12);
return 1;case 8: _T13= 
# 832
_check_null(Cyc_specbuf);_T14= Cyc_Lexing_lexeme(lexbuf);Cyc_Buffer_add_string(_T13,_T14);
return 1;default: _T15= lexbuf;_T16= _T15->refill_buff;
_T16(lexbuf);_T17= 
Cyc_block_string_rec(lexbuf,lexstate);return _T17;}{struct Cyc_Lexing_Error_exn_struct*_T1A=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_T1A->tag= Cyc_Lexing_Error;
# 837
({__typeof__(_tag_fat("some action didn't return!",sizeof(char),27U))_T1B=_tag_fat("some action didn't return!",sizeof(char),27U);_T1A->f1= _T1B;});_T18= (struct Cyc_Lexing_Error_exn_struct*)_T1A;}_T19= (void*)_T18;_rethrow(_T19);}
# 839
int Cyc_block_string(struct Cyc_Lexing_lexbuf*lexbuf){int _T0;_T0= Cyc_block_string_rec(lexbuf,17);return _T0;}
int Cyc_block_comment_rec(struct Cyc_Lexing_lexbuf*lexbuf,int lexstate){int _T0;int _T1;struct _fat_ptr _T2;struct _fat_ptr _T3;struct Cyc_Buffer_t*_T4;struct _fat_ptr _T5;struct Cyc_Buffer_t*_T6;struct _fat_ptr _T7;struct Cyc_Lexing_lexbuf*_T8;void(*_T9)(struct Cyc_Lexing_lexbuf*);int _TA;struct Cyc_Lexing_Error_exn_struct*_TB;void*_TC;
lexstate= Cyc_lex_engine(lexstate,lexbuf);_T0= lexstate;_T1= (int)_T0;switch(_T1){case 0: _T2= 
# 837 "cyclone/tools/buildlib/buildlib.cyl"
_tag_fat("Warning: unclosed comment\n",sizeof(char),27U);_T3= _tag_fat(0U,sizeof(void*),0);Cyc_log(_T2,_T3);return 0;case 1: _T4= 
# 839
_check_null(Cyc_specbuf);_T5= _tag_fat("*/",sizeof(char),3U);Cyc_Buffer_add_string(_T4,_T5);return 0;case 2: _T6= 
# 841
_check_null(Cyc_specbuf);_T7= Cyc_Lexing_lexeme(lexbuf);Cyc_Buffer_add_string(_T6,_T7);
return 1;default: _T8= lexbuf;_T9= _T8->refill_buff;
_T9(lexbuf);_TA= 
Cyc_block_comment_rec(lexbuf,lexstate);return _TA;}{struct Cyc_Lexing_Error_exn_struct*_TD=_cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));_TD->tag= Cyc_Lexing_Error;
# 846
({__typeof__(_tag_fat("some action didn't return!",sizeof(char),27U))_TE=_tag_fat("some action didn't return!",sizeof(char),27U);_TD->f1= _TE;});_TB= (struct Cyc_Lexing_Error_exn_struct*)_TD;}_TC= (void*)_TB;_rethrow(_TC);}
# 848
int Cyc_block_comment(struct Cyc_Lexing_lexbuf*lexbuf){int _T0;_T0= Cyc_block_comment_rec(lexbuf,18);return _T0;}
# 848 "cyclone/tools/buildlib/buildlib.cyl"
void Cyc_scan_type(void*,struct Cyc_Hashtable_Table*);struct _tuple20{struct Cyc_List_List*f0;struct Cyc_Absyn_Exp*f1;};
void Cyc_scan_exp(struct Cyc_Absyn_Exp*e,struct Cyc_Hashtable_Table*dep){struct Cyc_Absyn_Exp*_T0;int*_T1;unsigned _T2;void*_T3;struct _tuple1*_T4;struct _tuple1 _T5;struct Cyc_List_List*_T6;void*_T7;struct Cyc_Absyn_Exp*_T8;struct Cyc_Hashtable_Table*_T9;struct Cyc_List_List*_TA;struct Cyc_List_List*_TB;void*_TC;struct Cyc_Absyn_Exp*_TD;struct Cyc_Hashtable_Table*_TE;struct Cyc_List_List*_TF;void*_T10;struct Cyc_Absyn_MallocInfo _T11;struct Cyc_Absyn_MallocInfo _T12;struct Cyc_Absyn_MallocInfo _T13;struct Cyc_Absyn_MallocInfo _T14;struct Cyc_Absyn_MallocInfo _T15;void**_T16;void*_T17;struct Cyc_Hashtable_Table*_T18;void*_T19;void*_T1A;void*_T1B;struct Cyc_List_List*_T1C;struct Cyc_List_List*_T1D;void*_T1E;struct Cyc_List_List*_T1F;struct Cyc___cycFILE*_T20;struct _fat_ptr _T21;struct _fat_ptr _T22;struct Cyc___cycFILE*_T23;struct _fat_ptr _T24;struct _fat_ptr _T25;struct Cyc___cycFILE*_T26;struct _fat_ptr _T27;struct _fat_ptr _T28;struct Cyc___cycFILE*_T29;struct _fat_ptr _T2A;struct _fat_ptr _T2B;struct Cyc___cycFILE*_T2C;struct _fat_ptr _T2D;struct _fat_ptr _T2E;struct Cyc___cycFILE*_T2F;struct _fat_ptr _T30;struct _fat_ptr _T31;struct Cyc___cycFILE*_T32;struct _fat_ptr _T33;struct _fat_ptr _T34;struct Cyc___cycFILE*_T35;struct _fat_ptr _T36;struct _fat_ptr _T37;struct Cyc___cycFILE*_T38;struct _fat_ptr _T39;struct _fat_ptr _T3A;struct Cyc___cycFILE*_T3B;struct _fat_ptr _T3C;struct _fat_ptr _T3D;struct Cyc___cycFILE*_T3E;struct _fat_ptr _T3F;struct _fat_ptr _T40;struct Cyc___cycFILE*_T41;struct _fat_ptr _T42;struct _fat_ptr _T43;struct Cyc___cycFILE*_T44;struct _fat_ptr _T45;struct _fat_ptr _T46;struct Cyc___cycFILE*_T47;struct _fat_ptr _T48;struct _fat_ptr _T49;struct Cyc___cycFILE*_T4A;struct _fat_ptr _T4B;struct _fat_ptr _T4C;struct Cyc___cycFILE*_T4D;struct _fat_ptr _T4E;struct _fat_ptr _T4F;struct Cyc___cycFILE*_T50;struct _fat_ptr _T51;struct _fat_ptr _T52;struct Cyc___cycFILE*_T53;struct _fat_ptr _T54;struct _fat_ptr _T55;_T0= 
_check_null(e);{void*_T56=_T0->r;struct _fat_ptr*_T57;void**_T58;enum Cyc_Absyn_MallocKind _T59;struct Cyc_List_List*_T5A;struct Cyc_Absyn_Exp*_T5B;struct Cyc_Absyn_Exp*_T5C;void*_T5D;_T1= (int*)_T56;_T2= *_T1;switch(_T2){case 1:{struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T56;_T3= _T5E->f1;_T5D= (void*)_T3;}{void*b=_T5D;_T4= 
# 852
Cyc_Absyn_binding2qvar(b);_T5= *_T4;{struct _fat_ptr*v=_T5.f1;
Cyc_add_target(v);
return;}}case 3:{struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*)_T56;_T5D= _T5E->f2;}{struct Cyc_List_List*x=_T5D;
# 856
_TL8B: if(x!=0)goto _TL89;else{goto _TL8A;}
_TL89: _T6= x;_T7= _T6->hd;_T8= (struct Cyc_Absyn_Exp*)_T7;_T9= dep;Cyc_scan_exp(_T8,_T9);_TA= x;
# 856
x= _TA->tl;goto _TL8B;_TL8A:
# 859
 return;}case 23:{struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*)_T56;_T5D= _T5E->f1;_T5C= _T5E->f2;}{struct Cyc_Absyn_Exp*e1=_T5D;struct Cyc_Absyn_Exp*e2=_T5C;_T5D= e1;_T5C= e2;goto _LL8;}case 9:{struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct*)_T56;_T5D= _T5E->f1;_T5C= _T5E->f2;}_LL8: {struct Cyc_Absyn_Exp*e1=_T5D;struct Cyc_Absyn_Exp*e2=_T5C;_T5D= e1;_T5C= e2;goto _LLA;}case 4:{struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct*)_T56;_T5D= _T5E->f1;_T5C= _T5E->f3;}_LLA: {struct Cyc_Absyn_Exp*e1=_T5D;struct Cyc_Absyn_Exp*e2=_T5C;
# 865
Cyc_scan_exp(e1,dep);
Cyc_scan_exp(e2,dep);
return;}case 40:{struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct*)_T56;_T5D= _T5E->f1;}{struct Cyc_Absyn_Exp*e1=_T5D;_T5D= e1;goto _LLE;}case 20:{struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*)_T56;_T5D= _T5E->f1;}_LLE: {struct Cyc_Absyn_Exp*e1=_T5D;_T5D= e1;goto _LL10;}case 18:{struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct*)_T56;_T5D= _T5E->f1;}_LL10: {struct Cyc_Absyn_Exp*e1=_T5D;_T5D= e1;goto _LL12;}case 15:{struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct*)_T56;_T5D= _T5E->f1;}_LL12: {struct Cyc_Absyn_Exp*e1=_T5D;_T5D= e1;goto _LL14;}case 5:{struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*)_T56;_T5D= _T5E->f1;}_LL14: {struct Cyc_Absyn_Exp*e1=_T5D;
# 877
Cyc_scan_exp(e1,dep);
return;}case 6:{struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct*)_T56;_T5D= _T5E->f1;_T5C= _T5E->f2;_T5B= _T5E->f3;}{struct Cyc_Absyn_Exp*e1=_T5D;struct Cyc_Absyn_Exp*e2=_T5C;struct Cyc_Absyn_Exp*e3=_T5B;
# 880
Cyc_scan_exp(e1,dep);
Cyc_scan_exp(e2,dep);
Cyc_scan_exp(e3,dep);
return;}case 7:{struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*)_T56;_T5D= _T5E->f1;_T5C= _T5E->f2;}{struct Cyc_Absyn_Exp*e1=_T5D;struct Cyc_Absyn_Exp*e2=_T5C;_T5D= e1;_T5C= e2;goto _LL1A;}case 8:{struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*)_T56;_T5D= _T5E->f1;_T5C= _T5E->f2;}_LL1A: {struct Cyc_Absyn_Exp*e1=_T5D;struct Cyc_Absyn_Exp*e2=_T5C;
# 887
Cyc_scan_exp(e1,dep);
Cyc_scan_exp(e2,dep);
return;}case 10:{struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*)_T56;_T5D= _T5E->f1;_T5A= _T5E->f2;}{struct Cyc_Absyn_Exp*e1=_T5D;struct Cyc_List_List*x=_T5A;
# 891
Cyc_scan_exp(e1,dep);
_TL8F: if(x!=0)goto _TL8D;else{goto _TL8E;}
_TL8D: _TB= x;_TC= _TB->hd;_TD= (struct Cyc_Absyn_Exp*)_TC;_TE= dep;Cyc_scan_exp(_TD,_TE);_TF= x;
# 892
x= _TF->tl;goto _TL8F;_TL8E:
# 895
 return;}case 14:{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T56;_T10= _T5E->f1;_T5D= (void*)_T10;_T5C= _T5E->f2;}{void*t1=_T5D;struct Cyc_Absyn_Exp*e1=_T5C;
# 897
Cyc_scan_type(t1,dep);
Cyc_scan_exp(e1,dep);
return;}case 33:{struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct*)_T56;_T11= _T5E->f1;_T59= _T11.mknd;_T12= _T5E->f1;_T5D= _T12.rgn;_T13= _T5E->f1;_T5C= _T13.aqual;_T14= _T5E->f1;_T58= _T14.elt_type;_T15= _T5E->f1;_T5B= _T15.num_elts;}{enum Cyc_Absyn_MallocKind mknd=_T59;struct Cyc_Absyn_Exp*ropt=_T5D;struct Cyc_Absyn_Exp*aqopt=_T5C;void**topt=_T58;struct Cyc_Absyn_Exp*e=_T5B;
# 901
if(ropt==0)goto _TL90;
Cyc_scan_exp(ropt,dep);goto _TL91;_TL90: _TL91:
 if(aqopt==0)goto _TL92;
Cyc_scan_exp(aqopt,dep);goto _TL93;_TL92: _TL93:
 if(topt==0)goto _TL94;_T16= topt;_T17= *_T16;_T18= dep;
Cyc_scan_type(_T17,_T18);goto _TL95;_TL94: _TL95:
 Cyc_scan_exp(e,dep);
return;}case 37:{struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct*)_T56;_T5D= _T5E->f1;}{struct Cyc_Absyn_Exp*e=_T5D;
# 910
Cyc_scan_exp(e,dep);
return;}case 38:{struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct*)_T56;_T19= _T5E->f1;_T5D= (void*)_T19;}{void*t1=_T5D;_T5D= t1;goto _LL26;}case 17:{struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct*)_T56;_T1A= _T5E->f1;_T5D= (void*)_T1A;}_LL26: {void*t1=_T5D;
# 915
Cyc_scan_type(t1,dep);
return;}case 21:{struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*)_T56;_T5D= _T5E->f1;_T57= _T5E->f2;}{struct Cyc_Absyn_Exp*e1=_T5D;struct _fat_ptr*fn=_T57;_T5D= e1;_T57= fn;goto _LL2A;}case 22:{struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*)_T56;_T5D= _T5E->f1;_T57= _T5E->f2;}_LL2A: {struct Cyc_Absyn_Exp*e1=_T5D;struct _fat_ptr*fn=_T57;
# 920
Cyc_scan_exp(e1,dep);
Cyc_add_target(fn);
return;}case 19:{struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct*)_T56;_T1B= _T5E->f1;_T5D= (void*)_T1B;_T5A= _T5E->f2;}{void*t1=_T5D;struct Cyc_List_List*f=_T5A;
# 924
Cyc_scan_type(t1,dep);_T1C= 
# 926
_check_null(f);{void*_T5E=_T1C->hd;struct _fat_ptr*_T5F;{struct Cyc_Absyn_StructField_Absyn_OffsetofField_struct*_T60=(struct Cyc_Absyn_StructField_Absyn_OffsetofField_struct*)_T5E;_T5F= _T60->f1;}{struct _fat_ptr*fn=_T5F;
# 928
Cyc_add_target(fn);goto _LL57;}_LL57:;}
# 931
return;}case 0:
# 933
 return;case 35:{struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct*_T5E=(struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct*)_T56;_T5A= _T5E->f2;}{struct Cyc_List_List*x=_T5A;
# 935
_TL99: if(x!=0)goto _TL97;else{goto _TL98;}
_TL97: _T1D= x;_T1E= _T1D->hd;{struct _tuple20*_T5E=(struct _tuple20*)_T1E;struct Cyc_Absyn_Exp*_T5F;{struct _tuple20 _T60=*_T5E;_T5F= _T60.f1;}{struct Cyc_Absyn_Exp*e1=_T5F;
Cyc_scan_exp(e1,dep);}}_T1F= x;
# 935
x= _T1F->tl;goto _TL99;_TL98:
# 939
 return;}case 39:
# 941
 return;case 2: _T20= Cyc_stderr;_T21= 
# 943
_tag_fat("Error: unexpected Pragma_e\n",sizeof(char),28U);_T22= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T20,_T21,_T22);
exit(1);
return;case 34: _T23= Cyc_stderr;_T24= 
# 947
_tag_fat("Error: unexpected Swap_e\n",sizeof(char),26U);_T25= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T23,_T24,_T25);
exit(1);
return;case 36: _T26= Cyc_stderr;_T27= 
# 951
_tag_fat("Error: unexpected Stmt_e\n",sizeof(char),26U);_T28= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T26,_T27,_T28);
exit(1);
return;case 41: _T29= Cyc_stderr;_T2A= 
# 955
_tag_fat("Error: unexpected Assert_e\n",sizeof(char),28U);_T2B= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T29,_T2A,_T2B);
exit(1);
return;case 42: _T2C= Cyc_stderr;_T2D= 
# 959
_tag_fat("Error: unexpected Assert_false_e\n",sizeof(char),34U);_T2E= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T2C,_T2D,_T2E);
exit(1);
return;case 11: _T2F= Cyc_stderr;_T30= 
# 963
_tag_fat("Error: unexpected Throw_e\n",sizeof(char),27U);_T31= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T2F,_T30,_T31);
exit(1);
return;case 12: _T32= Cyc_stderr;_T33= 
# 967
_tag_fat("Error: unexpected NoInstantiate_e\n",sizeof(char),35U);_T34= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T32,_T33,_T34);
exit(1);
return;case 13: _T35= Cyc_stderr;_T36= 
# 971
_tag_fat("Error: unexpected Instantiate_e\n",sizeof(char),33U);_T37= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T35,_T36,_T37);
exit(1);
return;case 16: _T38= Cyc_stderr;_T39= 
# 975
_tag_fat("Error: unexpected New_e\n",sizeof(char),25U);_T3A= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T38,_T39,_T3A);
exit(1);
return;case 24: _T3B= Cyc_stderr;_T3C= 
# 979
_tag_fat("Error: unexpected CompoundLit_e\n",sizeof(char),33U);_T3D= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T3B,_T3C,_T3D);
exit(1);
return;case 25: _T3E= Cyc_stderr;_T3F= 
# 983
_tag_fat("Error: unexpected Array_e\n",sizeof(char),27U);_T40= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T3E,_T3F,_T40);
exit(1);
return;case 26: _T41= Cyc_stderr;_T42= 
# 987
_tag_fat("Error: unexpected Comprehension_e\n",sizeof(char),35U);_T43= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T41,_T42,_T43);
exit(1);
return;case 27: _T44= Cyc_stderr;_T45= 
# 991
_tag_fat("Error: unexpected ComprehensionNoinit_e\n",sizeof(char),41U);_T46= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T44,_T45,_T46);
exit(1);
return;case 28: _T47= Cyc_stderr;_T48= 
# 995
_tag_fat("Error: unexpected Aggregate_e\n",sizeof(char),31U);_T49= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T47,_T48,_T49);
exit(1);
return;case 29: _T4A= Cyc_stderr;_T4B= 
# 999
_tag_fat("Error: unexpected AnonStruct_e\n",sizeof(char),32U);_T4C= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T4A,_T4B,_T4C);
exit(1);
return;case 30: _T4D= Cyc_stderr;_T4E= 
# 1003
_tag_fat("Error: unexpected Datatype_e\n",sizeof(char),30U);_T4F= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T4D,_T4E,_T4F);
exit(1);
return;case 31: _T50= Cyc_stderr;_T51= 
# 1007
_tag_fat("Error: unexpected Enum_e\n",sizeof(char),26U);_T52= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T50,_T51,_T52);
exit(1);
return;default: _T53= Cyc_stderr;_T54= 
# 1011
_tag_fat("Error: unexpected AnonEnum_e\n",sizeof(char),30U);_T55= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T53,_T54,_T55);
exit(1);
return;};}}
# 1017
void Cyc_scan_exp_opt(struct Cyc_Absyn_Exp*eo,struct Cyc_Hashtable_Table*dep){struct Cyc_Absyn_Exp*_T0;unsigned _T1;_T0= eo;_T1= (unsigned)_T0;
if(!_T1)goto _TL9A;
Cyc_scan_exp(eo,dep);goto _TL9B;_TL9A: _TL9B:
 return;}
# 1023
void Cyc_scan_decl(struct Cyc_Absyn_Decl*,struct Cyc_Hashtable_Table*);
void Cyc_scan_type(void*t,struct Cyc_Hashtable_Table*dep){void*_T0;int*_T1;unsigned _T2;void*_T3;void*_T4;void*_T5;int*_T6;unsigned _T7;void*_T8;struct _tuple1*_T9;void*_TA;struct _tuple1*_TB;struct Cyc_String_pa_PrintArg_struct _TC;struct Cyc___cycFILE*_TD;struct _fat_ptr _TE;struct _fat_ptr _TF;void*_T10;struct Cyc_Absyn_PtrInfo _T11;void*_T12;struct Cyc_Hashtable_Table*_T13;void*_T14;struct Cyc_Absyn_ArrayInfo _T15;struct Cyc_Absyn_ArrayInfo _T16;struct Cyc_Absyn_ArrayInfo _T17;void*_T18;void*_T19;struct Cyc_Absyn_FnInfo _T1A;void*_T1B;struct Cyc_Hashtable_Table*_T1C;struct Cyc_Absyn_FnInfo _T1D;struct Cyc_List_List*_T1E;void*_T1F;struct Cyc_List_List*_T20;struct Cyc_Absyn_FnInfo _T21;struct Cyc_Absyn_VarargInfo*_T22;struct Cyc_Absyn_FnInfo _T23;struct Cyc_Absyn_VarargInfo*_T24;void*_T25;struct Cyc_Hashtable_Table*_T26;void*_T27;struct Cyc_List_List*_T28;void*_T29;struct Cyc_Absyn_Aggrfield*_T2A;void*_T2B;struct Cyc_Hashtable_Table*_T2C;struct Cyc_List_List*_T2D;void*_T2E;struct Cyc_Absyn_Aggrfield*_T2F;struct Cyc_Absyn_Exp*_T30;struct Cyc_Hashtable_Table*_T31;struct Cyc_List_List*_T32;void*_T33;struct _tuple1*_T34;void*_T35;struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*_T36;struct Cyc_Absyn_TypeDecl*_T37;struct Cyc_Absyn_TypeDecl*_T38;void*_T39;int*_T3A;unsigned _T3B;void*_T3C;struct Cyc_Absyn_TypeDecl*_T3D;void*_T3E;struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T3F;void*_T40;struct Cyc_Absyn_Decl*_T41;struct Cyc_Hashtable_Table*_T42;struct Cyc_Absyn_Aggrdecl*_T43;void*_T44;struct Cyc_Absyn_TypeDecl*_T45;void*_T46;struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*_T47;void*_T48;struct Cyc_Absyn_Decl*_T49;struct Cyc_Hashtable_Table*_T4A;struct Cyc_Absyn_Enumdecl*_T4B;void*_T4C;struct Cyc_Absyn_TypeDecl*_T4D;void*_T4E;struct Cyc___cycFILE*_T4F;struct _fat_ptr _T50;struct _fat_ptr _T51;struct Cyc___cycFILE*_T52;struct _fat_ptr _T53;struct _fat_ptr _T54;struct Cyc___cycFILE*_T55;struct _fat_ptr _T56;struct _fat_ptr _T57;struct Cyc___cycFILE*_T58;struct _fat_ptr _T59;struct _fat_ptr _T5A;struct Cyc___cycFILE*_T5B;struct _fat_ptr _T5C;struct _fat_ptr _T5D;struct Cyc___cycFILE*_T5E;struct _fat_ptr _T5F;struct _fat_ptr _T60;struct Cyc_Absyn_Datatypedecl*_T61;struct Cyc_Absyn_Enumdecl*_T62;struct Cyc_Absyn_Aggrdecl*_T63;struct _fat_ptr*_T64;struct Cyc_List_List*_T65;struct Cyc_Absyn_FnInfo _T66;struct Cyc_Absyn_Exp*_T67;struct Cyc_Absyn_PtrInfo _T68;void*_T69;void*_T6A;_T0= t;_T1= (int*)_T0;_T2= *_T1;switch(_T2){case 0: _T3= t;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T6B=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3;_T4= _T6B->f1;_T6A= (void*)_T4;_T69= _T6B->f2;}{void*c=_T6A;struct Cyc_List_List*ts=_T69;struct _fat_ptr*_T6B;union Cyc_Absyn_AggrInfo _T6C;_T5= c;_T6= (int*)_T5;_T7= *_T6;switch(_T7){case 0: goto _LL23;case 1: _LL23: goto _LL25;case 21: _LL25: goto _LL27;case 2: _LL27: goto _LL29;case 3: _LL29: goto _LL2B;case 20: _LL2B:
# 1034
 return;case 24: _T8= c;{struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_T6D=(struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*)_T8;_T6C= _T6D->f1;}{union Cyc_Absyn_AggrInfo info=_T6C;
# 1036
struct _tuple12 _T6D=Cyc_Absyn_aggr_kinded_name(info);struct _fat_ptr*_T6E;_T9= _T6D.f1;{struct _tuple1 _T6F=*_T9;_T6E= _T6F.f1;}{struct _fat_ptr*v=_T6E;_T6B= v;goto _LL2F;}}case 19: _TA= c;{struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct*_T6D=(struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct*)_TA;_TB= _T6D->f1;{struct _tuple1 _T6E=*_TB;_T6B= _T6E.f1;}}_LL2F: {struct _fat_ptr*v=_T6B;
# 1039
Cyc_add_target(v);
return;}case 22: goto _LL33;case 23: _LL33: goto _LL35;case 4: _LL35: goto _LL37;case 6: _LL37: goto _LL39;case 7: _LL39: goto _LL3B;case 8: _LL3B: goto _LL3D;case 9: _LL3D: goto _LL3F;case 10: _LL3F: goto _LL41;case 5: _LL41: goto _LL43;case 11: _LL43: goto _LL45;case 12: _LL45: goto _LL47;case 13: _LL47: goto _LL49;case 14: _LL49: goto _LL4B;case 15: _LL4B: goto _LL4D;case 16: _LL4D: goto _LL4F;case 18: _LL4F: goto _LL51;default: _LL51:{struct Cyc_String_pa_PrintArg_struct _T6D;_T6D.tag= 0;
# 1058
({__typeof__(Cyc_Absynpp_typ2string(t))_T6E=Cyc_Absynpp_typ2string(t);_T6D.f1= _T6E;});_TC= _T6D;}{struct Cyc_String_pa_PrintArg_struct _T6D=_TC;void*_T6E[1];_T6E[0]= & _T6D;_TD= Cyc_stderr;_TE= _tag_fat("Error: unexpected %s\n",sizeof(char),22U);_TF= _tag_fat(_T6E,sizeof(void*),1);Cyc_fprintf(_TD,_TE,_TF);}
exit(1);
return;};}case 4: _T10= t;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T6B=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T10;_T68= _T6B->f1;}{struct Cyc_Absyn_PtrInfo x=_T68;_T11= x;_T12= _T11.elt_type;_T13= dep;
# 1064
Cyc_scan_type(_T12,_T13);
return;}case 5: _T14= t;{struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T6B=(struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_T14;_T15= _T6B->f1;_T6A= _T15.elt_type;_T16= _T6B->f1;_T67= _T16.num_elts;_T17= _T6B->f1;_T69= _T17.zero_term;}{void*t=_T6A;struct Cyc_Absyn_Exp*sz=_T67;void*zt=_T69;
# 1067
Cyc_scan_type(t,dep);
Cyc_scan_exp_opt(sz,dep);
return;}case 11: _T18= t;{struct Cyc_Absyn_TypeofType_Absyn_Type_struct*_T6B=(struct Cyc_Absyn_TypeofType_Absyn_Type_struct*)_T18;_T67= _T6B->f1;}{struct Cyc_Absyn_Exp*e=_T67;
# 1071
Cyc_scan_exp(e,dep);
return;}case 6: _T19= t;{struct Cyc_Absyn_FnType_Absyn_Type_struct*_T6B=(struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T19;_T66= _T6B->f1;}{struct Cyc_Absyn_FnInfo x=_T66;_T1A= x;_T1B= _T1A.ret_type;_T1C= dep;
# 1074
Cyc_scan_type(_T1B,_T1C);_T1D= x;{
struct Cyc_List_List*a=_T1D.args;_TLA1: if(a!=0)goto _TL9F;else{goto _TLA0;}
_TL9F: _T1E= a;_T1F= _T1E->hd;{struct _tuple9*_T6B=(struct _tuple9*)_T1F;void*_T6C;{struct _tuple9 _T6D=*_T6B;_T6C= _T6D.f2;}{void*argt=_T6C;
Cyc_scan_type(argt,dep);}}_T20= a;
# 1075
a= _T20->tl;goto _TLA1;_TLA0:;}_T21= x;_T22= _T21.cyc_varargs;
# 1079
if(_T22==0)goto _TLA2;_T23= x;_T24= _T23.cyc_varargs;_T25= _T24->type;_T26= dep;
Cyc_scan_type(_T25,_T26);goto _TLA3;_TLA2: _TLA3:
 return;}case 7: _T27= t;{struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*_T6B=(struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*)_T27;_T65= _T6B->f3;}{struct Cyc_List_List*sfs=_T65;
# 1083
_TLA7: if(sfs!=0)goto _TLA5;else{goto _TLA6;}
_TLA5: _T28= sfs;_T29= _T28->hd;_T2A= (struct Cyc_Absyn_Aggrfield*)_T29;_T2B= _T2A->type;_T2C= dep;Cyc_scan_type(_T2B,_T2C);_T2D= sfs;_T2E= _T2D->hd;_T2F= (struct Cyc_Absyn_Aggrfield*)_T2E;_T30= _T2F->width;_T31= dep;
Cyc_scan_exp_opt(_T30,_T31);_T32= sfs;
# 1083
sfs= _T32->tl;goto _TLA7;_TLA6:
# 1087
 return;}case 8: _T33= t;{struct Cyc_Absyn_TypedefType_Absyn_Type_struct*_T6B=(struct Cyc_Absyn_TypedefType_Absyn_Type_struct*)_T33;_T34= _T6B->f1;{struct _tuple1 _T6C=*_T34;_T64= _T6C.f1;}}{struct _fat_ptr*v=_T64;
# 1089
Cyc_add_target(v);
return;}case 10: _T35= t;_T36= (struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*)_T35;_T37= _T36->f1;_T38= (struct Cyc_Absyn_TypeDecl*)_T37;_T39= _T38->r;_T3A= (int*)_T39;_T3B= *_T3A;switch(_T3B){case 0: _T3C= t;{struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*_T6B=(struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*)_T3C;_T3D= _T6B->f1;{struct Cyc_Absyn_TypeDecl _T6C=*_T3D;_T3E= _T6C.r;{struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct*_T6D=(struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct*)_T3E;_T63= _T6D->f1;}}}{struct Cyc_Absyn_Aggrdecl*x=_T63;{struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T6B=_cycalloc(sizeof(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct));_T6B->tag= 5;
# 1093
_T6B->f1= x;_T3F= (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*)_T6B;}_T40= (void*)_T3F;_T41= Cyc_Absyn_new_decl(_T40,0U);_T42= dep;Cyc_scan_decl(_T41,_T42);_T43= x;{
struct _tuple1*_T6B=_T43->name;struct _fat_ptr*_T6C;{struct _tuple1 _T6D=*_T6B;_T6C= _T6D.f1;}{struct _fat_ptr*n=_T6C;
Cyc_add_target(n);
return;}}}case 1: _T44= t;{struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*_T6B=(struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*)_T44;_T45= _T6B->f1;{struct Cyc_Absyn_TypeDecl _T6C=*_T45;_T46= _T6C.r;{struct Cyc_Absyn_Enum_td_Absyn_Raw_typedecl_struct*_T6D=(struct Cyc_Absyn_Enum_td_Absyn_Raw_typedecl_struct*)_T46;_T62= _T6D->f1;}}}{struct Cyc_Absyn_Enumdecl*x=_T62;{struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*_T6B=_cycalloc(sizeof(struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct));_T6B->tag= 7;
# 1099
_T6B->f1= x;_T47= (struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*)_T6B;}_T48= (void*)_T47;_T49= Cyc_Absyn_new_decl(_T48,0U);_T4A= dep;Cyc_scan_decl(_T49,_T4A);_T4B= x;{
struct _tuple1*_T6B=_T4B->name;struct _fat_ptr*_T6C;{struct _tuple1 _T6D=*_T6B;_T6C= _T6D.f1;}{struct _fat_ptr*n=_T6C;
Cyc_add_target(n);
return;}}}default: _T4C= t;{struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*_T6B=(struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*)_T4C;_T4D= _T6B->f1;{struct Cyc_Absyn_TypeDecl _T6C=*_T4D;_T4E= _T6C.r;{struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct*_T6D=(struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct*)_T4E;_T61= _T6D->f1;}}}{struct Cyc_Absyn_Datatypedecl*dd=_T61;_T4F= Cyc_stderr;_T50= 
# 1105
_tag_fat("Error: unexpected Datatype declaration\n",sizeof(char),40U);_T51= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T4F,_T50,_T51);
exit(1);
return;}};case 12: _T52= Cyc_stderr;_T53= 
# 1109
_tag_fat("Error: unexpected @subset type\n",sizeof(char),32U);_T54= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T52,_T53,_T54);
exit(1);
return;case 3: _T55= Cyc_stderr;_T56= 
# 1113
_tag_fat("Error: unexpected Cvar\n",sizeof(char),24U);_T57= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T55,_T56,_T57);
exit(1);
return;case 1: _T58= Cyc_stderr;_T59= 
# 1117
_tag_fat("Error: unexpected Evar\n",sizeof(char),24U);_T5A= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T58,_T59,_T5A);
exit(1);
return;case 2: _T5B= Cyc_stderr;_T5C= 
# 1121
_tag_fat("Error: unexpected VarType\n",sizeof(char),27U);_T5D= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T5B,_T5C,_T5D);
exit(1);
return;default: _T5E= Cyc_stderr;_T5F= 
# 1125
_tag_fat("Error: unexpected valueof_t\n",sizeof(char),29U);_T60= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T5E,_T5F,_T60);
exit(1);
return;};}
# 1131
void Cyc_scan_decl(struct Cyc_Absyn_Decl*d,struct Cyc_Hashtable_Table*dep){struct Cyc_Set_Set**_T0;struct Cyc_Set_Set*(*_T1)(int(*)(struct _fat_ptr*,struct _fat_ptr*));struct Cyc_Set_Set*(*_T2)(int(*)(void*,void*));int(*_T3)(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_Absyn_Decl*_T4;int*_T5;unsigned _T6;struct Cyc_Absyn_Vardecl*_T7;struct Cyc_Absyn_Vardecl*_T8;void*_T9;struct Cyc_Hashtable_Table*_TA;struct Cyc_Absyn_Vardecl*_TB;struct Cyc_Absyn_Exp*_TC;struct Cyc_Hashtable_Table*_TD;struct Cyc_Absyn_Fndecl*_TE;struct Cyc_Absyn_Fndecl*_TF;struct Cyc_Absyn_FnInfo _T10;void*_T11;struct Cyc_Hashtable_Table*_T12;struct Cyc_Absyn_Fndecl*_T13;struct Cyc_Absyn_FnInfo _T14;struct Cyc_List_List*_T15;void*_T16;struct Cyc_List_List*_T17;struct Cyc_Absyn_Fndecl*_T18;struct Cyc_Absyn_FnInfo _T19;struct Cyc_Absyn_VarargInfo*_T1A;struct Cyc_Absyn_Fndecl*_T1B;struct Cyc_Absyn_FnInfo _T1C;struct Cyc_Absyn_VarargInfo*_T1D;void*_T1E;struct Cyc_Hashtable_Table*_T1F;struct Cyc_Absyn_Fndecl*_T20;long _T21;struct Cyc_String_pa_PrintArg_struct _T22;struct _fat_ptr*_T23;struct _fat_ptr _T24;struct _fat_ptr _T25;struct Cyc_Absyn_Aggrdecl*_T26;struct Cyc_Absyn_Aggrdecl*_T27;struct Cyc_Absyn_AggrdeclImpl*_T28;unsigned _T29;struct Cyc_Absyn_Aggrdecl*_T2A;struct Cyc_Absyn_AggrdeclImpl*_T2B;struct Cyc_List_List*_T2C;void*_T2D;struct Cyc_Absyn_Aggrfield*_T2E;void*_T2F;struct Cyc_Hashtable_Table*_T30;struct Cyc_Absyn_Aggrfield*_T31;struct Cyc_Absyn_Exp*_T32;struct Cyc_Hashtable_Table*_T33;struct Cyc_List_List*_T34;struct Cyc_Absyn_Aggrdecl*_T35;struct Cyc_Absyn_AggrdeclImpl*_T36;struct Cyc_Absyn_AggrdeclImpl*_T37;struct Cyc_List_List*_T38;struct Cyc_Absyn_Enumdecl*_T39;struct Cyc_Absyn_Enumdecl*_T3A;struct Cyc_Core_Opt*_T3B;unsigned _T3C;struct Cyc_Absyn_Enumdecl*_T3D;struct Cyc_Core_Opt*_T3E;void*_T3F;struct Cyc_List_List*_T40;void*_T41;struct Cyc_Absyn_Enumfield*_T42;struct Cyc_Absyn_Exp*_T43;struct Cyc_Hashtable_Table*_T44;struct Cyc_List_List*_T45;struct Cyc_Absyn_Enumdecl*_T46;struct Cyc_Core_Opt*_T47;struct Cyc_Core_Opt*_T48;void*_T49;struct Cyc_List_List*_T4A;struct Cyc_Absyn_Typedefdecl*_T4B;struct Cyc_Absyn_Typedefdecl*_T4C;void*_T4D;unsigned _T4E;struct Cyc_Absyn_Typedefdecl*_T4F;void*_T50;struct Cyc_Hashtable_Table*_T51;struct Cyc___cycFILE*_T52;struct _fat_ptr _T53;struct _fat_ptr _T54;struct Cyc___cycFILE*_T55;struct _fat_ptr _T56;struct _fat_ptr _T57;struct Cyc___cycFILE*_T58;struct _fat_ptr _T59;struct _fat_ptr _T5A;struct Cyc___cycFILE*_T5B;struct _fat_ptr _T5C;struct _fat_ptr _T5D;struct Cyc___cycFILE*_T5E;struct _fat_ptr _T5F;struct _fat_ptr _T60;struct Cyc___cycFILE*_T61;struct _fat_ptr _T62;struct _fat_ptr _T63;struct Cyc___cycFILE*_T64;struct _fat_ptr _T65;struct _fat_ptr _T66;struct Cyc___cycFILE*_T67;struct _fat_ptr _T68;struct _fat_ptr _T69;struct Cyc___cycFILE*_T6A;struct _fat_ptr _T6B;struct _fat_ptr _T6C;struct Cyc___cycFILE*_T6D;struct _fat_ptr _T6E;struct _fat_ptr _T6F;struct Cyc___cycFILE*_T70;struct _fat_ptr _T71;struct _fat_ptr _T72;struct Cyc___cycFILE*_T73;struct _fat_ptr _T74;struct _fat_ptr _T75;struct _handler_cons*_T76;int _T77;struct Cyc_Set_Set*(*_T78)(struct Cyc_Hashtable_Table*,struct _fat_ptr*);void*(*_T79)(struct Cyc_Hashtable_Table*,void*);void*_T7A;struct Cyc_Core_Not_found_exn_struct*_T7B;char*_T7C;char*_T7D;struct Cyc_Set_Set*(*_T7E)(int(*)(struct _fat_ptr*,struct _fat_ptr*));struct Cyc_Set_Set*(*_T7F)(int(*)(void*,void*));int(*_T80)(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_Set_Set**_T81;struct Cyc_Set_Set*_T82;struct Cyc_Set_Set*_T83;void(*_T84)(struct Cyc_Hashtable_Table*,struct _fat_ptr*,struct Cyc_Set_Set*);void(*_T85)(struct Cyc_Hashtable_Table*,void*,void*);
struct Cyc_Set_Set**saved_targets=Cyc_current_targets;
struct _fat_ptr*saved_source=Cyc_current_source;{struct Cyc_Set_Set**_T86=_cycalloc(sizeof(struct Cyc_Set_Set*));_T2= Cyc_Set_empty;{
struct Cyc_Set_Set*(*_T87)(int(*)(struct _fat_ptr*,struct _fat_ptr*))=(struct Cyc_Set_Set*(*)(int(*)(struct _fat_ptr*,struct _fat_ptr*)))_T2;_T1= _T87;}_T3= Cyc_strptrcmp;({__typeof__(_T1(_T3))_T87=_T1(_T3);*_T86= _T87;});_T0= (struct Cyc_Set_Set**)_T86;}Cyc_current_targets= _T0;_T4= d;{
void*_T86=_T4->r;struct Cyc_Absyn_Typedefdecl*_T87;struct Cyc_Absyn_Enumdecl*_T88;struct Cyc_Absyn_Aggrdecl*_T89;struct Cyc_Absyn_Fndecl*_T8A;struct Cyc_Absyn_Vardecl*_T8B;_T5= (int*)_T86;_T6= *_T5;switch(_T6){case 0:{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T8C=(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T86;_T8B= _T8C->f1;}{struct Cyc_Absyn_Vardecl*x=_T8B;_T7= x;{
# 1137
struct _tuple1*_T8C=_T7->name;struct _fat_ptr*_T8D;{struct _tuple1 _T8E=*_T8C;_T8D= _T8E.f1;}{struct _fat_ptr*v=_T8D;
Cyc_current_source= v;_T8= x;_T9= _T8->type;_TA= dep;
Cyc_scan_type(_T9,_TA);_TB= x;_TC= _TB->initializer;_TD= dep;
Cyc_scan_exp_opt(_TC,_TD);goto _LL0;}}}case 1:{struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*_T8C=(struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*)_T86;_T8A= _T8C->f1;}{struct Cyc_Absyn_Fndecl*x=_T8A;_TE= x;{
# 1143
struct _tuple1*_T8C=_TE->name;struct _fat_ptr*_T8D;{struct _tuple1 _T8E=*_T8C;_T8D= _T8E.f1;}{struct _fat_ptr*v=_T8D;
Cyc_current_source= v;_TF= x;_T10= _TF->i;_T11= _T10.ret_type;_T12= dep;
Cyc_scan_type(_T11,_T12);_T13= x;_T14= _T13->i;{
struct Cyc_List_List*a=_T14.args;_TLAD: if(a!=0)goto _TLAB;else{goto _TLAC;}
_TLAB: _T15= a;_T16= _T15->hd;{struct _tuple9*_T8E=(struct _tuple9*)_T16;void*_T8F;{struct _tuple9 _T90=*_T8E;_T8F= _T90.f2;}{void*t1=_T8F;
Cyc_scan_type(t1,dep);}}_T17= a;
# 1146
a= _T17->tl;goto _TLAD;_TLAC:;}_T18= x;_T19= _T18->i;_T1A= _T19.cyc_varargs;
# 1150
if(_T1A==0)goto _TLAE;_T1B= x;_T1C= _T1B->i;_T1D= _T1C.cyc_varargs;_T1E= _T1D->type;_T1F= dep;
Cyc_scan_type(_T1E,_T1F);goto _TLAF;_TLAE: _TLAF: _T20= x;_T21= _T20->is_inline;
if(!_T21)goto _TLB0;{struct Cyc_String_pa_PrintArg_struct _T8E;_T8E.tag= 0;_T23= v;
_T8E.f1= *_T23;_T22= _T8E;}{struct Cyc_String_pa_PrintArg_struct _T8E=_T22;void*_T8F[1];_T8F[0]= & _T8E;_T24= _tag_fat("Warning: ignoring inline function %s\n",sizeof(char),38U);_T25= _tag_fat(_T8F,sizeof(void*),1);Cyc_log(_T24,_T25);}goto _TLB1;_TLB0: _TLB1: goto _LL0;}}}case 5:{struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T8C=(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*)_T86;_T89= _T8C->f1;}{struct Cyc_Absyn_Aggrdecl*x=_T89;_T26= x;{
# 1156
struct _tuple1*_T8C=_T26->name;struct _fat_ptr*_T8D;{struct _tuple1 _T8E=*_T8C;_T8D= _T8E.f1;}{struct _fat_ptr*v=_T8D;
Cyc_current_source= v;_T27= x;_T28= _T27->impl;_T29= (unsigned)_T28;
if(!_T29)goto _TLB2;_T2A= x;_T2B= _T2A->impl;{
struct Cyc_List_List*fs=_T2B->fields;_TLB7: if(fs!=0)goto _TLB5;else{goto _TLB6;}
_TLB5: _T2C= fs;_T2D= _T2C->hd;{struct Cyc_Absyn_Aggrfield*f=(struct Cyc_Absyn_Aggrfield*)_T2D;_T2E= f;_T2F= _T2E->type;_T30= dep;
Cyc_scan_type(_T2F,_T30);_T31= f;_T32= _T31->width;_T33= dep;
Cyc_scan_exp_opt(_T32,_T33);}_T34= fs;
# 1159
fs= _T34->tl;goto _TLB7;_TLB6:;}_T35= x;_T36= _T35->impl;_T37= 
# 1166
_check_null(_T36);{struct Cyc_List_List*fs=_T37->fields;_TLBB: if(fs!=0)goto _TLB9;else{goto _TLBA;}_TLB9: _T38= fs;fs= _T38->tl;goto _TLBB;_TLBA:;}goto _TLB3;_TLB2: _TLB3: goto _LL0;}}}case 7:{struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*_T8C=(struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*)_T86;_T88= _T8C->f1;}{struct Cyc_Absyn_Enumdecl*x=_T88;_T39= x;{
# 1172
struct _tuple1*_T8C=_T39->name;struct _fat_ptr*_T8D;{struct _tuple1 _T8E=*_T8C;_T8D= _T8E.f1;}{struct _fat_ptr*v=_T8D;
Cyc_current_source= v;_T3A= x;_T3B= _T3A->fields;_T3C= (unsigned)_T3B;
if(!_T3C)goto _TLBC;_T3D= x;_T3E= _T3D->fields;_T3F= _T3E->v;{
struct Cyc_List_List*fs=(struct Cyc_List_List*)_T3F;_TLC1: if(fs!=0)goto _TLBF;else{goto _TLC0;}
_TLBF: _T40= fs;_T41= _T40->hd;{struct Cyc_Absyn_Enumfield*f=(struct Cyc_Absyn_Enumfield*)_T41;_T42= f;_T43= _T42->tag;_T44= dep;
Cyc_scan_exp_opt(_T43,_T44);}_T45= fs;
# 1175
fs= _T45->tl;goto _TLC1;_TLC0:;}_T46= x;_T47= _T46->fields;_T48= 
# 1181
_check_null(_T47);_T49= _T48->v;{struct Cyc_List_List*fs=(struct Cyc_List_List*)_T49;_TLC5: if(fs!=0)goto _TLC3;else{goto _TLC4;}_TLC3: _T4A= fs;fs= _T4A->tl;goto _TLC5;_TLC4:;}goto _TLBD;_TLBC: _TLBD: goto _LL0;}}}case 8:{struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct*_T8C=(struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct*)_T86;_T87= _T8C->f1;}{struct Cyc_Absyn_Typedefdecl*x=_T87;_T4B= x;{
# 1187
struct _tuple1*_T8C=_T4B->name;struct _fat_ptr*_T8D;{struct _tuple1 _T8E=*_T8C;_T8D= _T8E.f1;}{struct _fat_ptr*v=_T8D;
Cyc_current_source= v;_T4C= x;_T4D= _T4C->defn;_T4E= (unsigned)_T4D;
if(!_T4E)goto _TLC6;_T4F= x;_T50= _T4F->defn;_T51= dep;
Cyc_scan_type(_T50,_T51);goto _TLC7;_TLC6: _TLC7: goto _LL0;}}}case 4: _T52= Cyc_stderr;_T53= 
# 1193
_tag_fat("Error: unexpected region declaration",sizeof(char),37U);_T54= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T52,_T53,_T54);
exit(1);case 13: _T55= Cyc_stderr;_T56= 
# 1196
_tag_fat("Error: unexpected __cyclone_port_on__",sizeof(char),38U);_T57= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T55,_T56,_T57);
exit(1);case 14: _T58= Cyc_stderr;_T59= 
# 1199
_tag_fat("Error: unexpected __cyclone_port_off__",sizeof(char),39U);_T5A= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T58,_T59,_T5A);
exit(1);case 15: _T5B= Cyc_stderr;_T5C= 
# 1202
_tag_fat("Error: unexpected __tempest_on__",sizeof(char),33U);_T5D= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T5B,_T5C,_T5D);
exit(1);case 16: _T5E= Cyc_stderr;_T5F= 
# 1205
_tag_fat("Error: unexpected __tempest_off__",sizeof(char),34U);_T60= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T5E,_T5F,_T60);
exit(1);case 2: _T61= Cyc_stderr;_T62= 
# 1208
_tag_fat("Error: unexpected let declaration\n",sizeof(char),35U);_T63= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T61,_T62,_T63);
exit(1);case 6: _T64= Cyc_stderr;_T65= 
# 1211
_tag_fat("Error: unexpected datatype declaration\n",sizeof(char),40U);_T66= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T64,_T65,_T66);
exit(1);case 3: _T67= Cyc_stderr;_T68= 
# 1214
_tag_fat("Error: unexpected let declaration\n",sizeof(char),35U);_T69= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T67,_T68,_T69);
exit(1);case 9: _T6A= Cyc_stderr;_T6B= 
# 1217
_tag_fat("Error: unexpected namespace declaration\n",sizeof(char),41U);_T6C= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T6A,_T6B,_T6C);
exit(1);case 10: _T6D= Cyc_stderr;_T6E= 
# 1220
_tag_fat("Error: unexpected using declaration\n",sizeof(char),37U);_T6F= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T6D,_T6E,_T6F);
exit(1);case 11: _T70= Cyc_stderr;_T71= 
# 1223
_tag_fat("Error: unexpected extern \"C\" declaration\n",sizeof(char),42U);_T72= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T70,_T71,_T72);
exit(1);default: _T73= Cyc_stderr;_T74= 
# 1226
_tag_fat("Error: unexpected extern \"C include\" declaration\n",sizeof(char),50U);_T75= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T73,_T74,_T75);
exit(1);}_LL0:;}{
# 1234
struct Cyc_Set_Set*old;
struct _fat_ptr*name=_check_null(Cyc_current_source);{struct _handler_cons _T86;_T76= & _T86;_push_handler(_T76);{int _T87=0;_T77= setjmp(_T86.handler);if(!_T77)goto _TLC8;_T87= 1;goto _TLC9;_TLC8: _TLC9: if(_T87)goto _TLCA;else{goto _TLCC;}_TLCC: _T79= Cyc_Hashtable_lookup;{
struct Cyc_Set_Set*(*_T88)(struct Cyc_Hashtable_Table*,struct _fat_ptr*)=(struct Cyc_Set_Set*(*)(struct Cyc_Hashtable_Table*,struct _fat_ptr*))_T79;_T78= _T88;}old= _T78(dep,name);_pop_handler();goto _TLCB;_TLCA: _T7A= Cyc_Core_get_exn_thrown();{void*_T88=(void*)_T7A;void*_T89;_T7B= (struct Cyc_Core_Not_found_exn_struct*)_T88;_T7C= _T7B->tag;_T7D= Cyc_Core_Not_found;if(_T7C!=_T7D)goto _TLCD;_T7F= Cyc_Set_empty;{
# 1239
struct Cyc_Set_Set*(*_T8A)(int(*)(struct _fat_ptr*,struct _fat_ptr*))=(struct Cyc_Set_Set*(*)(int(*)(struct _fat_ptr*,struct _fat_ptr*)))_T7F;_T7E= _T8A;}_T80= Cyc_strptrcmp;old= _T7E(_T80);goto _LL35;_TLCD: _T89= _T88;{void*exn=_T89;_rethrow(exn);}_LL35:;}_TLCB:;}}_T81= 
# 1242
_check_null(Cyc_current_targets);_T82= *_T81;_T83= old;{struct Cyc_Set_Set*targets=Cyc_Set_union_two(_T82,_T83);_T85= Cyc_Hashtable_insert;{
void(*_T86)(struct Cyc_Hashtable_Table*,struct _fat_ptr*,struct Cyc_Set_Set*)=(void(*)(struct Cyc_Hashtable_Table*,struct _fat_ptr*,struct Cyc_Set_Set*))_T85;_T84= _T86;}_T84(dep,name,targets);
# 1245
Cyc_current_targets= saved_targets;
Cyc_current_source= saved_source;}}}
# 1249
struct Cyc_Hashtable_Table*Cyc_new_deps (void){struct Cyc_Hashtable_Table*(*_T0)(int,int(*)(struct _fat_ptr*,struct _fat_ptr*),int(*)(struct _fat_ptr*));struct Cyc_Hashtable_Table*(*_T1)(int,int(*)(void*,void*),int(*)(void*));int(*_T2)(struct _fat_ptr*,struct _fat_ptr*);int(*_T3)(struct _fat_ptr*);struct Cyc_Hashtable_Table*_T4;_T1= Cyc_Hashtable_create;{struct Cyc_Hashtable_Table*(*_T5)(int,int(*)(struct _fat_ptr*,struct _fat_ptr*),int(*)(struct _fat_ptr*))=(struct Cyc_Hashtable_Table*(*)(int,int(*)(struct _fat_ptr*,struct _fat_ptr*),int(*)(struct _fat_ptr*)))_T1;_T0= _T5;}_T2= Cyc_strptrcmp;_T3= Cyc_Hashtable_hash_stringptr;_T4= _T0(107,_T2,_T3);return _T4;}
# 1251
struct Cyc_Set_Set*Cyc_find(struct Cyc_Hashtable_Table*t,struct _fat_ptr*x){struct _handler_cons*_T0;int _T1;struct Cyc_Set_Set*(*_T2)(struct Cyc_Hashtable_Table*,struct _fat_ptr*);void*(*_T3)(struct Cyc_Hashtable_Table*,void*);void*_T4;struct Cyc_Core_Not_found_exn_struct*_T5;char*_T6;char*_T7;struct Cyc_Set_Set*(*_T8)(int(*)(struct _fat_ptr*,struct _fat_ptr*));struct Cyc_Set_Set*(*_T9)(int(*)(void*,void*));int(*_TA)(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_Set_Set*_TB;struct _handler_cons _TC;_T0= & _TC;_push_handler(_T0);{int _TD=0;_T1= setjmp(_TC.handler);if(!_T1)goto _TLCF;_TD= 1;goto _TLD0;_TLCF: _TLD0: if(_TD)goto _TLD1;else{goto _TLD3;}_TLD3: _T3= Cyc_Hashtable_lookup;{
struct Cyc_Set_Set*(*_TE)(struct Cyc_Hashtable_Table*,struct _fat_ptr*)=(struct Cyc_Set_Set*(*)(struct Cyc_Hashtable_Table*,struct _fat_ptr*))_T3;_T2= _TE;}{struct Cyc_Set_Set*_TE=_T2(t,x);_npop_handler(0);return _TE;}_pop_handler();goto _TLD2;_TLD1: _T4= Cyc_Core_get_exn_thrown();{void*_TE=(void*)_T4;void*_TF;_T5= (struct Cyc_Core_Not_found_exn_struct*)_TE;_T6= _T5->tag;_T7= Cyc_Core_Not_found;if(_T6!=_T7)goto _TLD4;_T9= Cyc_Set_empty;{
# 1255
struct Cyc_Set_Set*(*_T10)(int(*)(struct _fat_ptr*,struct _fat_ptr*))=(struct Cyc_Set_Set*(*)(int(*)(struct _fat_ptr*,struct _fat_ptr*)))_T9;_T8= _T10;}_TA= Cyc_strptrcmp;_TB= _T8(_TA);return _TB;_TLD4: _TF= _TE;{void*exn=_TF;_rethrow(exn);};}_TLD2:;}}
# 1259
struct Cyc_Set_Set*Cyc_reachable(struct Cyc_List_List*init,struct Cyc_Hashtable_Table*t){struct Cyc_Set_Set*(*_T0)(int(*)(struct _fat_ptr*,struct _fat_ptr*));struct Cyc_Set_Set*(*_T1)(int(*)(void*,void*));int(*_T2)(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_Set_Set*(*_T3)(struct Cyc_Set_Set*,struct _fat_ptr*);struct Cyc_Set_Set*(*_T4)(struct Cyc_Set_Set*,void*);struct Cyc_Set_Set*_T5;struct Cyc_List_List*_T6;void*_T7;struct _fat_ptr*_T8;struct Cyc_List_List*_T9;struct _fat_ptr*_TA;int _TB;long(*_TC)(struct Cyc_Iter_Iter,struct _fat_ptr**);long(*_TD)(struct Cyc_Iter_Iter,void*);struct Cyc_Iter_Iter _TE;struct _fat_ptr**_TF;long _T10;struct Cyc_Set_Set*_T11;struct Cyc_Set_Set*_T12;struct Cyc_Set_Set*_T13;_T1= Cyc_Set_empty;{
# 1269
struct Cyc_Set_Set*(*_T14)(int(*)(struct _fat_ptr*,struct _fat_ptr*))=(struct Cyc_Set_Set*(*)(int(*)(struct _fat_ptr*,struct _fat_ptr*)))_T1;_T0= _T14;}_T2= Cyc_strptrcmp;{struct Cyc_Set_Set*emptyset=_T0(_T2);
struct Cyc_Set_Set*curr;
curr= emptyset;_TLD9: if(init!=0)goto _TLD7;else{goto _TLD8;}
_TLD7: _T4= Cyc_Set_insert;{struct Cyc_Set_Set*(*_T14)(struct Cyc_Set_Set*,struct _fat_ptr*)=(struct Cyc_Set_Set*(*)(struct Cyc_Set_Set*,struct _fat_ptr*))_T4;_T3= _T14;}_T5= curr;_T6= init;_T7= _T6->hd;_T8= (struct _fat_ptr*)_T7;curr= _T3(_T5,_T8);_T9= init;
# 1271
init= _T9->tl;goto _TLD9;_TLD8: {
# 1274
struct Cyc_Set_Set*delta=curr;
# 1276
struct _fat_ptr*sptr;sptr= _cycalloc(sizeof(struct _fat_ptr));_TA= sptr;({__typeof__(_tag_fat("",sizeof(char),1U))_T14=_tag_fat("",sizeof(char),1U);*_TA= _T14;});
_TLDA: _TB= Cyc_Set_cardinality(delta);if(_TB > 0)goto _TLDB;else{goto _TLDC;}
_TLDB:{struct Cyc_Set_Set*next=emptyset;
struct Cyc_Iter_Iter iter=Cyc_Set_make_iter(Cyc_Core_heap_region,delta);
_TLDD: _TD= Cyc_Iter_next;{long(*_T14)(struct Cyc_Iter_Iter,struct _fat_ptr**)=(long(*)(struct Cyc_Iter_Iter,struct _fat_ptr**))_TD;_TC= _T14;}_TE= iter;_TF= & sptr;_T10= _TC(_TE,_TF);if(_T10)goto _TLDE;else{goto _TLDF;}
_TLDE: _T11= next;_T12= Cyc_find(t,sptr);next= Cyc_Set_union_two(_T11,_T12);goto _TLDD;_TLDF:
 delta= Cyc_Set_diff(next,curr);
curr= Cyc_Set_union_two(curr,delta);}goto _TLDA;_TLDC: _T13= curr;
# 1285
return _T13;}}}
# 1288
int Cyc_force_directory(struct _fat_ptr d){struct _fat_ptr _T0;unsigned char*_T1;const char*_T2;struct _fat_ptr _T3;int _T4;int _T5;struct _fat_ptr _T6;unsigned char*_T7;unsigned char*_T8;const char*_T9;int _TA;int _TB;struct Cyc_String_pa_PrintArg_struct _TC;struct Cyc___cycFILE*_TD;struct _fat_ptr _TE;struct _fat_ptr _TF;_T0= d;_T1= _untag_fat_ptr_check_bound(_T0,sizeof(char),1U);_T2= (const char*)_T1;_T3= _tag_fat(0U,sizeof(unsigned short),0);{
# 1291
int fd=Cyc_open(_T2,0,_T3);_T4= fd;_T5= - 1;
if(_T4!=_T5)goto _TLE0;_T6= d;_T7= _untag_fat_ptr(_T6,sizeof(char),1U);_T8= _check_null(_T7);_T9= (const char*)_T8;_TA= 
mkdir(_T9,448);_TB= - 1;if(_TA!=_TB)goto _TLE2;{struct Cyc_String_pa_PrintArg_struct _T10;_T10.tag= 0;
_T10.f1= d;_TC= _T10;}{struct Cyc_String_pa_PrintArg_struct _T10=_TC;void*_T11[1];_T11[0]= & _T10;_TD= Cyc_stderr;_TE= _tag_fat("Error: could not create directory %s\n",sizeof(char),38U);_TF= _tag_fat(_T11,sizeof(void*),1);Cyc_fprintf(_TD,_TE,_TF);}
return 1;_TLE2: goto _TLE1;
# 1298
_TLE0: close(fd);_TLE1:
# 1300
 return 0;}}
# 1303
int Cyc_force_directory_prefixes(struct _fat_ptr file){unsigned long _T0;struct Cyc_List_List*_T1;struct _fat_ptr*_T2;struct _fat_ptr _T3;struct Cyc_List_List*_T4;void*_T5;struct _fat_ptr*_T6;struct _fat_ptr _T7;int _T8;struct Cyc_List_List*_T9;
# 1307
struct _fat_ptr curr=Cyc_strdup(file);
# 1309
struct Cyc_List_List*x=0;
_TLE4: if(1)goto _TLE5;else{goto _TLE6;}
_TLE5: curr= Cyc_Filename_dirname(curr);_T0= 
Cyc_strlen(curr);if(_T0!=0U)goto _TLE7;goto _TLE6;_TLE7:{struct Cyc_List_List*_TA=_cycalloc(sizeof(struct Cyc_List_List));{struct _fat_ptr*_TB=_cycalloc(sizeof(struct _fat_ptr));_T3= curr;
# 1314
*_TB= _T3;_T2= (struct _fat_ptr*)_TB;}_TA->hd= _T2;_TA->tl= x;_T1= (struct Cyc_List_List*)_TA;}x= _T1;goto _TLE4;_TLE6:
# 1317
 _TLEC: if(x!=0)goto _TLEA;else{goto _TLEB;}
_TLEA: _T4= x;_T5= _T4->hd;_T6= (struct _fat_ptr*)_T5;_T7= *_T6;_T8= Cyc_force_directory(_T7);if(!_T8)goto _TLED;
return 1;_TLED: _T9= x;
# 1317
x= _T9->tl;goto _TLEC;_TLEB:
# 1321
 return 0;}char Cyc_NO_SUPPORT[11U]="NO_SUPPORT";struct Cyc_NO_SUPPORT_exn_struct{char*tag;struct _fat_ptr f1;};
# 1328
static long Cyc_is_other_special(char c){char _T0;int _T1;_T0= c;_T1= (int)_T0;switch(_T1){case 92: goto _LL4;case 34: _LL4: goto _LL6;case 59: _LL6: goto _LL8;case 38: _LL8: goto _LLA;case 40: _LLA: goto _LLC;case 41: _LLC: goto _LLE;case 124: _LLE: goto _LL10;case 94: _LL10: goto _LL12;case 60: _LL12: goto _LL14;case 62: _LL14: goto _LL16;case 10: _LL16: goto _LL18;case 9: _LL18:
# 1345
 return 1;default:
# 1347
 return 0;};}
# 1351
static struct _fat_ptr Cyc_sh_escape_string(struct _fat_ptr s){int _T0;unsigned long _T1;unsigned long _T2;struct _fat_ptr _T3;unsigned char*_T4;const char*_T5;const char*_T6;int _T7;char _T8;int _T9;long _TA;struct _fat_ptr _TB;struct Cyc_List_List*_TC;struct _fat_ptr*_TD;struct _fat_ptr*_TE;struct _fat_ptr _TF;struct _fat_ptr*_T10;struct _fat_ptr _T11;struct _fat_ptr _T12;unsigned long _T13;int _T14;unsigned long _T15;unsigned long _T16;int _T17;unsigned long _T18;struct _fat_ptr _T19;unsigned long _T1A;char*_T1B;unsigned _T1C;unsigned _T1D;int _T1E;unsigned long _T1F;unsigned long _T20;struct _fat_ptr _T21;unsigned char*_T22;const char*_T23;const char*_T24;int _T25;char _T26;int _T27;long _T28;struct _fat_ptr _T29;int _T2A;int _T2B;unsigned char*_T2C;char*_T2D;unsigned _T2E;unsigned char*_T2F;char*_T30;struct _fat_ptr _T31;int _T32;int _T33;unsigned char*_T34;char*_T35;unsigned _T36;unsigned char*_T37;char*_T38;struct _fat_ptr _T39;
unsigned long len=Cyc_strlen(s);
# 1355
int single_quotes=0;
int other_special=0;{
int i=0;_TLF3: _T0= i;_T1= (unsigned long)_T0;_T2= len;if(_T1 < _T2)goto _TLF1;else{goto _TLF2;}
_TLF1: _T3= s;_T4= _T3.curr;_T5= (const char*)_T4;_T6= _check_null(_T5);_T7= i;{char c=_T6[_T7];_T8= c;_T9= (int)_T8;
if(_T9!=39)goto _TLF4;
single_quotes= single_quotes + 1;goto _TLF5;
_TLF4: _TA= Cyc_is_other_special(c);if(!_TA)goto _TLF6;
other_special= other_special + 1;goto _TLF7;_TLF6: _TLF7: _TLF5:;}
# 1357
i= i + 1;goto _TLF3;_TLF2:;}
# 1366
if(single_quotes!=0)goto _TLF8;if(other_special!=0)goto _TLF8;_TB= s;
return _TB;_TLF8:
# 1370
 if(single_quotes!=0)goto _TLFA;{struct _fat_ptr*_T3A[3];{struct _fat_ptr*_T3B=_cycalloc(sizeof(struct _fat_ptr));
({__typeof__(_tag_fat("'",sizeof(char),2U))_T3C=_tag_fat("'",sizeof(char),2U);*_T3B= _T3C;});_TD= (struct _fat_ptr*)_T3B;}_T3A[0]= _TD;{struct _fat_ptr*_T3B=_cycalloc(sizeof(struct _fat_ptr));_TF= s;*_T3B= _TF;_TE= (struct _fat_ptr*)_T3B;}_T3A[1]= _TE;{struct _fat_ptr*_T3B=_cycalloc(sizeof(struct _fat_ptr));({__typeof__(_tag_fat("'",sizeof(char),2U))_T3C=_tag_fat("'",sizeof(char),2U);*_T3B= _T3C;});_T10= (struct _fat_ptr*)_T3B;}_T3A[2]= _T10;_T11= _tag_fat(_T3A,sizeof(struct _fat_ptr*),3);_TC= Cyc_List_list(_T11);}_T12= Cyc_strconcat_l(_TC);return _T12;_TLFA: _T13= len;_T14= single_quotes;_T15= (unsigned long)_T14;_T16= _T13 + _T15;_T17= other_special;_T18= (unsigned long)_T17;{
# 1374
unsigned long len2=_T16 + _T18;_T1A= len2 + 1U;{unsigned _T3A=_T1A + 1U;_T1C= _check_times(_T3A,sizeof(char));{char*_T3B=_cycalloc_atomic(_T1C);{unsigned _T3C=_T3A;unsigned i;i= 0;_TLFF: if(i < _T3C)goto _TLFD;else{goto _TLFE;}_TLFD: _T1D= i;
# 1376
_T3B[_T1D]= '\000';i= i + 1;goto _TLFF;_TLFE: _T3B[_T3C]= 0;}_T1B= (char*)_T3B;}_T19= 
# 1375
_tag_fat(_T1B,sizeof(char),_T3A);}{struct _fat_ptr s2=_T19;
# 1378
int i=0;
int j=0;
_TL103: _T1E= i;_T1F= (unsigned long)_T1E;_T20= len;if(_T1F < _T20)goto _TL101;else{goto _TL102;}
_TL101: _T21= s;_T22= _T21.curr;_T23= (const char*)_T22;_T24= _check_null(_T23);_T25= i;{char c=_T24[_T25];_T26= c;_T27= (int)_T26;
if(_T27==39)goto _TL106;else{goto _TL107;}_TL107: _T28= Cyc_is_other_special(c);if(_T28)goto _TL106;else{goto _TL104;}
_TL106: _T29= s2;_T2A= j;j= _T2A + 1;_T2B= _T2A;{struct _fat_ptr _T3A=_fat_ptr_plus(_T29,sizeof(char),_T2B);_T2C= _check_fat_subscript(_T3A,sizeof(char),0U);_T2D= (char*)_T2C;{char _T3B=*_T2D;char _T3C='\\';_T2E= _get_fat_size(_T3A,sizeof(char));if(_T2E!=1U)goto _TL108;if(_T3B!=0)goto _TL108;if(_T3C==0)goto _TL108;_throw_arraybounds();goto _TL109;_TL108: _TL109: _T2F= _T3A.curr;_T30= (char*)_T2F;*_T30= _T3C;}}goto _TL105;_TL104: _TL105: _T31= s2;_T32= j;
j= _T32 + 1;_T33= _T32;{struct _fat_ptr _T3A=_fat_ptr_plus(_T31,sizeof(char),_T33);_T34= _check_fat_subscript(_T3A,sizeof(char),0U);_T35= (char*)_T34;{char _T3B=*_T35;char _T3C=c;_T36= _get_fat_size(_T3A,sizeof(char));if(_T36!=1U)goto _TL10A;if(_T3B!=0)goto _TL10A;if(_T3C==0)goto _TL10A;_throw_arraybounds();goto _TL10B;_TL10A: _TL10B: _T37= _T3A.curr;_T38= (char*)_T37;*_T38= _T3C;}}}
# 1380
i= i + 1;goto _TL103;_TL102: _T39= s2;
# 1386
return _T39;}}}
# 1388
static struct _fat_ptr*Cyc_sh_escape_stringptr(struct _fat_ptr*sp){struct _fat_ptr*_T0;struct _fat_ptr*_T1;struct _fat_ptr _T2;{struct _fat_ptr*_T3=_cycalloc(sizeof(struct _fat_ptr));_T1= sp;_T2= *_T1;({__typeof__(Cyc_sh_escape_string(_T2))_T4=Cyc_sh_escape_string(_T2);*_T3= _T4;});_T0= (struct _fat_ptr*)_T3;}return _T0;}
# 1391
int Cyc_process_file(const char*output_prefix,const char*filename,struct Cyc_List_List*start_symbols,struct Cyc_List_List*user_defs,struct Cyc_List_List*omit_symbols,struct Cyc_List_List*hstubs,struct Cyc_List_List*cstubs,struct Cyc_List_List*cycstubs,struct Cyc_List_List*cpp_insert){struct Cyc_Set_Set**_T0;unsigned _T1;long(*_T2)(struct Cyc_Set_Set*,struct _fat_ptr*);long(*_T3)(struct Cyc_Set_Set*,void*);struct Cyc_Set_Set**_T4;struct Cyc_Set_Set*_T5;struct _fat_ptr*_T6;struct _fat_ptr _T7;void*_T8;void*_T9;unsigned _TA;long _TB;struct Cyc_String_pa_PrintArg_struct _TC;struct _fat_ptr _TD;void*_TE;void*_TF;unsigned _T10;struct Cyc___cycFILE*_T11;struct _fat_ptr _T12;struct _fat_ptr _T13;struct Cyc_String_pa_PrintArg_struct _T14;struct _fat_ptr _T15;void*_T16;void*_T17;unsigned _T18;struct _fat_ptr _T19;struct _fat_ptr _T1A;struct _fat_ptr _T1B;void*_T1C;void*_T1D;unsigned _T1E;struct _fat_ptr _T1F;void*_T20;void*_T21;unsigned _T22;struct _fat_ptr _T23;void*_T24;void*_T25;unsigned _T26;struct _fat_ptr _T27;struct _fat_ptr _T28;void*_T29;void*_T2A;unsigned _T2B;struct _fat_ptr _T2C;struct _fat_ptr _T2D;struct _fat_ptr _T2E;struct _fat_ptr _T2F;unsigned char*_T30;unsigned char*_T31;struct _fat_ptr _T32;struct _fat_ptr _T33;unsigned _T34;struct _fat_ptr _T35;struct Cyc_String_pa_PrintArg_struct _T36;struct _fat_ptr _T37;struct _fat_ptr _T38;struct _fat_ptr _T39;struct _fat_ptr _T3A;struct Cyc_String_pa_PrintArg_struct _T3B;struct _fat_ptr _T3C;struct _fat_ptr _T3D;unsigned char*_T3E;unsigned char*_T3F;struct _fat_ptr _T40;struct _fat_ptr _T41;unsigned _T42;struct _fat_ptr _T43;struct Cyc_String_pa_PrintArg_struct _T44;struct _fat_ptr _T45;struct _fat_ptr _T46;struct _fat_ptr _T47;struct _fat_ptr _T48;struct Cyc_String_pa_PrintArg_struct _T49;struct _fat_ptr _T4A;struct _fat_ptr _T4B;unsigned char*_T4C;unsigned char*_T4D;struct _fat_ptr _T4E;struct _fat_ptr _T4F;unsigned _T50;struct _fat_ptr _T51;struct Cyc_String_pa_PrintArg_struct _T52;struct _fat_ptr _T53;struct _fat_ptr _T54;struct _fat_ptr _T55;struct _fat_ptr _T56;struct Cyc_String_pa_PrintArg_struct _T57;struct _fat_ptr _T58;struct _fat_ptr _T59;unsigned char*_T5A;unsigned char*_T5B;struct _fat_ptr _T5C;void*_T5D;void*_T5E;unsigned _T5F;struct _fat_ptr _T60;void*_T61;void*_T62;unsigned _T63;struct _handler_cons*_T64;int _T65;int _T66;struct Cyc___cycFILE*_T67;unsigned _T68;struct Cyc_String_pa_PrintArg_struct _T69;struct _fat_ptr _T6A;void*_T6B;void*_T6C;unsigned _T6D;struct Cyc___cycFILE*_T6E;struct _fat_ptr _T6F;struct _fat_ptr _T70;long _T71;struct Cyc_String_pa_PrintArg_struct _T72;struct _fat_ptr _T73;void*_T74;void*_T75;unsigned _T76;struct Cyc___cycFILE*_T77;struct _fat_ptr _T78;struct _fat_ptr _T79;struct Cyc_List_List*_T7A;void*_T7B;struct _fat_ptr*_T7C;struct _fat_ptr _T7D;unsigned char*_T7E;unsigned char*_T7F;const char*_T80;struct Cyc___cycFILE*_T81;struct Cyc_List_List*_T82;struct Cyc_String_pa_PrintArg_struct _T83;struct _fat_ptr _T84;void*_T85;void*_T86;unsigned _T87;struct Cyc___cycFILE*_T88;struct _fat_ptr _T89;struct _fat_ptr _T8A;struct Cyc_List_List*_T8B;struct _fat_ptr*_T8C;struct _fat_ptr _T8D;struct Cyc_List_List*(*_T8E)(struct _fat_ptr*(*)(struct _fat_ptr*),struct Cyc_List_List*);struct Cyc_List_List*(*_T8F)(void*(*)(void*),struct Cyc_List_List*);struct Cyc_List_List*_T90;struct _fat_ptr _T91;struct _fat_ptr _T92;struct Cyc_String_pa_PrintArg_struct _T93;struct Cyc_String_pa_PrintArg_struct _T94;struct Cyc_String_pa_PrintArg_struct _T95;struct _fat_ptr _T96;void*_T97;void*_T98;unsigned _T99;struct Cyc_String_pa_PrintArg_struct _T9A;struct _fat_ptr _T9B;void*_T9C;void*_T9D;unsigned _T9E;struct Cyc_String_pa_PrintArg_struct _T9F;long _TA0;struct _fat_ptr _TA1;struct _fat_ptr _TA2;unsigned char*_TA3;unsigned char*_TA4;struct Cyc_String_pa_PrintArg_struct _TA5;struct _fat_ptr _TA6;void*_TA7;void*_TA8;unsigned _TA9;struct Cyc___cycFILE*_TAA;struct _fat_ptr _TAB;struct _fat_ptr _TAC;int _TAD;struct _fat_ptr _TAE;struct Cyc_String_pa_PrintArg_struct _TAF;struct Cyc_String_pa_PrintArg_struct _TB0;struct Cyc_String_pa_PrintArg_struct _TB1;struct _fat_ptr _TB2;void*_TB3;void*_TB4;unsigned _TB5;struct Cyc_String_pa_PrintArg_struct _TB6;struct _fat_ptr _TB7;void*_TB8;void*_TB9;unsigned _TBA;struct Cyc_String_pa_PrintArg_struct _TBB;long _TBC;struct _fat_ptr _TBD;struct _fat_ptr _TBE;unsigned char*_TBF;unsigned char*_TC0;struct Cyc_String_pa_PrintArg_struct _TC1;struct _fat_ptr _TC2;void*_TC3;void*_TC4;unsigned _TC5;struct Cyc___cycFILE*_TC6;struct _fat_ptr _TC7;struct _fat_ptr _TC8;struct Cyc___cycFILE*_TC9;unsigned _TCA;struct Cyc_NO_SUPPORT_exn_struct*_TCB;struct _fat_ptr _TCC;struct Cyc_String_pa_PrintArg_struct _TCD;struct _fat_ptr _TCE;void*_TCF;void*_TD0;unsigned _TD1;struct _fat_ptr _TD2;struct _fat_ptr _TD3;void*_TD4;long _TD5;struct Cyc___cycFILE*_TD6;struct _fat_ptr _TD7;struct _fat_ptr _TD8;struct _tuple15*_TD9;void(*_TDA)(struct Cyc_Hashtable_Table*,struct _fat_ptr*,struct Cyc_Set_Set*);void(*_TDB)(struct Cyc_Hashtable_Table*,void*,void*);long _TDC;struct Cyc___cycFILE*_TDD;struct _fat_ptr _TDE;struct _fat_ptr _TDF;struct Cyc___cycFILE*_TE0;unsigned _TE1;struct Cyc_NO_SUPPORT_exn_struct*_TE2;struct _fat_ptr _TE3;struct Cyc_String_pa_PrintArg_struct _TE4;struct _fat_ptr _TE5;void*_TE6;void*_TE7;unsigned _TE8;struct _fat_ptr _TE9;struct _fat_ptr _TEA;void*_TEB;long _TEC;struct Cyc___cycFILE*_TED;struct _fat_ptr _TEE;struct _fat_ptr _TEF;struct Cyc___cycFILE*_TF0;unsigned _TF1;int _TF2;long _TF3;struct Cyc___cycFILE*_TF4;struct _fat_ptr _TF5;struct _fat_ptr _TF6;struct Cyc_List_List*_TF7;void*_TF8;struct Cyc_String_pa_PrintArg_struct _TF9;struct _fat_ptr*_TFA;struct Cyc___cycFILE*_TFB;struct _fat_ptr _TFC;struct _fat_ptr _TFD;struct Cyc_List_List*_TFE;struct Cyc___cycFILE*_TFF;struct Cyc___cycFILE*_T100;unsigned _T101;long _T102;struct Cyc___cycFILE*_T103;struct _fat_ptr _T104;struct _fat_ptr _T105;struct _fat_ptr _T106;void*_T107;void*_T108;unsigned _T109;struct _handler_cons*_T10A;int _T10B;long _T10C;struct Cyc___cycFILE*_T10D;struct _fat_ptr _T10E;struct _fat_ptr _T10F;void*_T110;long _T111;struct Cyc___cycFILE*_T112;struct _fat_ptr _T113;struct _fat_ptr _T114;struct Cyc_List_List*_T115;void*_T116;struct Cyc_Absyn_Decl*_T117;struct Cyc_Hashtable_Table*_T118;struct Cyc_List_List*_T119;struct Cyc_List_List*(*_T11A)(struct _fat_ptr*(*)(struct _fat_ptr*),struct Cyc_List_List*);struct Cyc_List_List*(*_T11B)(void*(*)(void*),struct Cyc_List_List*);struct _tuple0 _T11C;struct Cyc_List_List*_T11D;struct Cyc_List_List*_T11E;struct Cyc_Hashtable_Table*_T11F;struct Cyc_Set_Set*(*_T120)(int(*)(struct _fat_ptr*,struct _fat_ptr*));struct Cyc_Set_Set*(*_T121)(int(*)(void*,void*));int(*_T122)(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_List_List*_T123;void*_T124;struct Cyc_Absyn_Decl*_T125;int*_T126;unsigned _T127;struct Cyc_Absyn_Vardecl*_T128;struct Cyc_Set_Set*(*_T129)(struct Cyc_Set_Set*,struct _fat_ptr*);struct Cyc_Set_Set*(*_T12A)(struct Cyc_Set_Set*,void*);long(*_T12B)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*);long(*_T12C)(int(*)(void*,void*),struct Cyc_List_List*,void*);int(*_T12D)(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_List_List*_T12E;struct _fat_ptr*_T12F;long _T130;struct Cyc_Absyn_Fndecl*_T131;struct Cyc_Set_Set*(*_T132)(struct Cyc_Set_Set*,struct _fat_ptr*);struct Cyc_Set_Set*(*_T133)(struct Cyc_Set_Set*,void*);long(*_T134)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*);long(*_T135)(int(*)(void*,void*),struct Cyc_List_List*,void*);int(*_T136)(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_List_List*_T137;struct _fat_ptr*_T138;long _T139;struct Cyc_Absyn_Aggrdecl*_T13A;struct Cyc_Absyn_Enumdecl*_T13B;long(*_T13C)(struct Cyc_Set_Set*,struct _fat_ptr*);long(*_T13D)(struct Cyc_Set_Set*,void*);long _T13E;struct Cyc_List_List*_T13F;struct Cyc_Absyn_Enumdecl*_T140;struct Cyc_Core_Opt*_T141;unsigned _T142;struct Cyc_Absyn_Enumdecl*_T143;struct Cyc_Core_Opt*_T144;void*_T145;struct Cyc_List_List*_T146;void*_T147;struct Cyc_Absyn_Enumfield*_T148;long(*_T149)(struct Cyc_Set_Set*,struct _fat_ptr*);long(*_T14A)(struct Cyc_Set_Set*,void*);long _T14B;struct Cyc_List_List*_T14C;struct Cyc_List_List*_T14D;struct Cyc_Absyn_Typedefdecl*_T14E;long(*_T14F)(struct Cyc_Set_Set*,struct _fat_ptr*);long(*_T150)(struct Cyc_Set_Set*,void*);long _T151;struct _fat_ptr*_T152;struct _fat_ptr _T153;struct _fat_ptr _T154;unsigned long _T155;int _T156;struct Cyc_List_List*_T157;struct Cyc_List_List*_T158;struct Cyc_List_List*_T159;long _T15A;struct _fat_ptr _T15B;unsigned char*_T15C;unsigned char*_T15D;const char*_T15E;struct Cyc___cycFILE*_T15F;unsigned _T160;struct _fat_ptr _T161;struct Cyc_String_pa_PrintArg_struct _T162;struct _fat_ptr _T163;void*_T164;void*_T165;unsigned _T166;struct _fat_ptr _T167;struct _fat_ptr _T168;int _T169;unsigned _T16A;struct _fat_ptr _T16B;unsigned _T16C;struct _fat_ptr _T16D;unsigned char*_T16E;char*_T16F;char*_T170;int _T171;char _T172;int _T173;struct _fat_ptr _T174;unsigned char*_T175;char*_T176;int _T177;char _T178;int _T179;struct _fat_ptr _T17A;int _T17B;unsigned char*_T17C;char*_T17D;unsigned _T17E;unsigned char*_T17F;char*_T180;struct _fat_ptr _T181;unsigned char*_T182;char*_T183;int _T184;char _T185;int _T186;struct _fat_ptr _T187;unsigned char*_T188;char*_T189;int _T18A;char _T18B;int _T18C;struct _fat_ptr _T18D;int _T18E;unsigned char*_T18F;char*_T190;struct _fat_ptr _T191;unsigned char*_T192;char*_T193;int _T194;char _T195;int _T196;int _T197;unsigned _T198;unsigned char*_T199;char*_T19A;long _T19B;struct Cyc___cycFILE*_T19C;struct _fat_ptr _T19D;struct _fat_ptr _T19E;struct Cyc_String_pa_PrintArg_struct _T19F;struct Cyc_String_pa_PrintArg_struct _T1A0;struct Cyc___cycFILE*_T1A1;struct _fat_ptr _T1A2;struct _fat_ptr _T1A3;struct Cyc_List_List*_T1A4;void*_T1A5;struct Cyc_Absyn_Decl*_T1A6;int*_T1A7;unsigned _T1A8;struct Cyc_Absyn_Vardecl*_T1A9;struct Cyc_Absyn_Fndecl*_T1AA;long _T1AB;struct Cyc_Absyn_Fndecl*_T1AC;struct Cyc_Absyn_Aggrdecl*_T1AD;struct Cyc_Absyn_Enumdecl*_T1AE;struct Cyc_Absyn_Typedefdecl*_T1AF;struct _fat_ptr*_T1B0;unsigned _T1B1;long _T1B2;long(*_T1B3)(struct Cyc_Set_Set*,struct _fat_ptr*);long(*_T1B4)(struct Cyc_Set_Set*,void*);struct Cyc_Set_Set*_T1B5;struct _fat_ptr*_T1B6;long _T1B7;struct Cyc_Core_Impossible_exn_struct*_T1B8;void*_T1B9;struct Cyc_Absyn_Decl*_T1BA;int*_T1BB;unsigned _T1BC;struct Cyc_NO_SUPPORT_exn_struct*_T1BD;void*_T1BE;struct Cyc_List_List*_T1BF;struct Cyc_List_List*_T1C0;struct Cyc_List_List*_T1C1;struct Cyc_List_List*_T1C2;struct _handler_cons*_T1C3;int _T1C4;struct Cyc_Tc_TcContext*_T1C5;struct Cyc_Tcenv_Tenv*_T1C6;struct Cyc_List_List*_T1C7;void*_T1C8;struct Cyc_NO_SUPPORT_exn_struct*_T1C9;void*_T1CA;struct _tuple0 _T1CB;struct Cyc_List_List*_T1CC;void*_T1CD;struct Cyc_List_List*_T1CE;void*_T1CF;struct _fat_ptr*_T1D0;unsigned _T1D1;struct Cyc_Absynpp_Params*_T1D2;struct Cyc_Absynpp_Params*_T1D3;struct _fat_ptr*_T1D4;unsigned _T1D5;struct Cyc_Absyn_Decl*_T1D6;int*_T1D7;unsigned _T1D8;struct _fat_ptr _T1D9;struct Cyc_String_pa_PrintArg_struct _T1DA;struct _fat_ptr*_T1DB;struct Cyc_String_pa_PrintArg_struct _T1DC;struct _fat_ptr _T1DD;struct _fat_ptr _T1DE;struct Cyc_String_pa_PrintArg_struct _T1DF;struct Cyc___cycFILE*_T1E0;struct _fat_ptr _T1E1;struct _fat_ptr _T1E2;struct Cyc_String_pa_PrintArg_struct _T1E3;struct Cyc___cycFILE*_T1E4;struct _fat_ptr _T1E5;struct _fat_ptr _T1E6;struct Cyc_List_List*_T1E7;struct _fat_ptr _T1E8;struct Cyc___cycFILE*_T1E9;struct Cyc___cycFILE*_T1EA;struct _fat_ptr _T1EB;struct _fat_ptr _T1EC;struct Cyc_List_List*_T1ED;struct _fat_ptr _T1EE;struct Cyc___cycFILE*_T1EF;struct Cyc_List_List*_T1F0;struct Cyc_List_List*_T1F1;struct Cyc___cycFILE*_T1F2;unsigned _T1F3;struct Cyc_NO_SUPPORT_exn_struct*_T1F4;struct _fat_ptr _T1F5;struct Cyc_String_pa_PrintArg_struct _T1F6;struct _fat_ptr _T1F7;void*_T1F8;void*_T1F9;unsigned _T1FA;struct _fat_ptr _T1FB;struct _fat_ptr _T1FC;void*_T1FD;struct _tuple16*_T1FE;long(*_T1FF)(struct Cyc_Set_Set*,struct _fat_ptr*);long(*_T200)(struct Cyc_Set_Set*,void*);long _T201;struct Cyc_String_pa_PrintArg_struct _T202;struct _fat_ptr*_T203;struct Cyc___cycFILE*_T204;struct _fat_ptr _T205;struct _fat_ptr _T206;struct Cyc_String_pa_PrintArg_struct _T207;struct Cyc___cycFILE*_T208;struct _fat_ptr _T209;struct _fat_ptr _T20A;struct Cyc___cycFILE*_T20B;struct _fat_ptr _T20C;struct _fat_ptr _T20D;struct Cyc_List_List*_T20E;void*_T20F;struct _fat_ptr _T210;unsigned char*_T211;char*_T212;struct _fat_ptr _T213;unsigned char*_T214;char*_T215;struct _fat_ptr _T216;unsigned char*_T217;const char*_T218;struct Cyc___cycFILE*_T219;long(*_T21A)(struct Cyc_Set_Set*,struct _fat_ptr*);long(*_T21B)(struct Cyc_Set_Set*,void*);struct Cyc_Set_Set*_T21C;struct _fat_ptr*_T21D;long _T21E;struct _fat_ptr _T21F;unsigned char*_T220;const char*_T221;struct Cyc___cycFILE*_T222;struct Cyc_String_pa_PrintArg_struct _T223;struct _fat_ptr _T224;struct _fat_ptr _T225;long _T226;struct _fat_ptr*(*_T227)(struct Cyc_Set_Set*);void*(*_T228)(struct Cyc_Set_Set*);struct Cyc_Set_Set*(*_T229)(struct Cyc_Set_Set*,struct _fat_ptr*);struct Cyc_Set_Set*(*_T22A)(struct Cyc_Set_Set*,void*);struct Cyc_String_pa_PrintArg_struct _T22B;struct _fat_ptr*_T22C;struct _fat_ptr _T22D;struct _fat_ptr _T22E;struct _fat_ptr _T22F;struct _fat_ptr _T230;struct Cyc_String_pa_PrintArg_struct _T231;struct _fat_ptr _T232;struct _fat_ptr _T233;struct Cyc_List_List*_T234;struct Cyc___cycFILE*_T235;struct _fat_ptr _T236;struct _fat_ptr _T237;long _T238;struct Cyc___cycFILE*_T239;struct _fat_ptr _T23A;struct _fat_ptr _T23B;long _T23C;struct Cyc_List_List*_T23D;void*_T23E;struct _fat_ptr _T23F;unsigned char*_T240;char*_T241;struct _fat_ptr _T242;unsigned char*_T243;char*_T244;long(*_T245)(struct Cyc_Set_Set*,struct _fat_ptr*);long(*_T246)(struct Cyc_Set_Set*,void*);struct Cyc_Set_Set*_T247;struct _fat_ptr*_T248;long _T249;struct _fat_ptr _T24A;unsigned char*_T24B;const char*_T24C;struct Cyc___cycFILE*_T24D;struct Cyc_List_List*_T24E;struct Cyc_String_pa_PrintArg_struct _T24F;struct _fat_ptr _T250;void*_T251;void*_T252;unsigned _T253;struct Cyc___cycFILE*_T254;struct _fat_ptr _T255;struct _fat_ptr _T256;struct Cyc_List_List*_T257;void*_T258;struct _fat_ptr _T259;unsigned char*_T25A;char*_T25B;struct _fat_ptr _T25C;unsigned char*_T25D;char*_T25E;long(*_T25F)(struct Cyc_Set_Set*,struct _fat_ptr*);long(*_T260)(struct Cyc_Set_Set*,void*);struct Cyc_Set_Set*_T261;struct _fat_ptr*_T262;long _T263;struct _fat_ptr _T264;unsigned char*_T265;const char*_T266;struct Cyc___cycFILE*_T267;struct Cyc_List_List*_T268;struct Cyc___cycFILE*_T269;struct _fat_ptr _T26A;struct _fat_ptr _T26B;void*_T26C;struct Cyc_Core_Impossible_exn_struct*_T26D;char*_T26E;char*_T26F;struct Cyc_String_pa_PrintArg_struct _T270;struct _fat_ptr _T271;struct _fat_ptr _T272;struct Cyc_Dict_Absent_exn_struct*_T273;char*_T274;char*_T275;struct _fat_ptr _T276;struct _fat_ptr _T277;struct Cyc_Core_Failure_exn_struct*_T278;char*_T279;char*_T27A;struct Cyc_String_pa_PrintArg_struct _T27B;struct _fat_ptr _T27C;struct _fat_ptr _T27D;struct Cyc_Core_Invalid_argument_exn_struct*_T27E;char*_T27F;char*_T280;struct Cyc_String_pa_PrintArg_struct _T281;struct _fat_ptr _T282;struct _fat_ptr _T283;struct Cyc_Core_Not_found_exn_struct*_T284;char*_T285;char*_T286;struct _fat_ptr _T287;struct _fat_ptr _T288;struct Cyc_NO_SUPPORT_exn_struct*_T289;char*_T28A;char*_T28B;struct Cyc_String_pa_PrintArg_struct _T28C;struct _fat_ptr _T28D;struct _fat_ptr _T28E;struct Cyc_Lexing_Error_exn_struct*_T28F;char*_T290;char*_T291;struct Cyc_String_pa_PrintArg_struct _T292;struct _fat_ptr _T293;struct _fat_ptr _T294;struct _fat_ptr _T295;struct _fat_ptr _T296;struct _fat_ptr _T297;unsigned char*_T298;unsigned char*_T299;const char*_T29A;struct Cyc___cycFILE*_T29B;unsigned _T29C;struct Cyc_String_pa_PrintArg_struct _T29D;struct Cyc___cycFILE*_T29E;struct _fat_ptr _T29F;struct _fat_ptr _T2A0;struct Cyc_String_pa_PrintArg_struct _T2A1;struct _fat_ptr _T2A2;void*_T2A3;void*_T2A4;unsigned _T2A5;struct Cyc___cycFILE*_T2A6;struct _fat_ptr _T2A7;struct _fat_ptr _T2A8;struct _fat_ptr _T2A9;struct _fat_ptr _T2AA;
# 1395
struct Cyc___cycFILE*maybe;
struct Cyc___cycFILE*in_file;
struct Cyc___cycFILE*out_file;
int errorcode=0;_T0= Cyc_headers_to_do;_T1= (unsigned)_T0;
# 1400
if(!_T1)goto _TL10C;_T3= Cyc_Set_member;{long(*_T2AB)(struct Cyc_Set_Set*,struct _fat_ptr*)=(long(*)(struct Cyc_Set_Set*,struct _fat_ptr*))_T3;_T2= _T2AB;}_T4= Cyc_headers_to_do;_T5= *_T4;{struct _fat_ptr*_T2AB=_cycalloc(sizeof(struct _fat_ptr));{const char*_T2AC=filename;_T8= (void*)_T2AC;_T9= (void*)_T2AC;_TA= _get_zero_arr_size_char(_T9,1U);_T7= _tag_fat(_T8,sizeof(char),_TA);}*_T2AB= _T7;_T6= (struct _fat_ptr*)_T2AB;}_TB= _T2(_T5,_T6);if(_TB)goto _TL10C;else{goto _TL10E;}
_TL10E: return 0;_TL10C:{struct Cyc_String_pa_PrintArg_struct _T2AB;_T2AB.tag= 0;{const char*_T2AC=filename;_TE= (void*)_T2AC;_TF= (void*)_T2AC;_T10= _get_zero_arr_size_char(_TF,1U);_TD= _tag_fat(_TE,sizeof(char),_T10);}
# 1403
_T2AB.f1= _TD;_TC= _T2AB;}{struct Cyc_String_pa_PrintArg_struct _T2AB=_TC;void*_T2AC[1];_T2AC[0]= & _T2AB;_T11= Cyc_stderr;_T12= _tag_fat("********************************* %s...\n",sizeof(char),41U);_T13= _tag_fat(_T2AC,sizeof(void*),1);Cyc_fprintf(_T11,_T12,_T13);}{struct Cyc_String_pa_PrintArg_struct _T2AB;_T2AB.tag= 0;{const char*_T2AC=filename;_T16= (void*)_T2AC;_T17= (void*)_T2AC;_T18= _get_zero_arr_size_char(_T17,1U);_T15= _tag_fat(_T16,sizeof(char),_T18);}
# 1405
_T2AB.f1= _T15;_T14= _T2AB;}{struct Cyc_String_pa_PrintArg_struct _T2AB=_T14;void*_T2AC[1];_T2AC[0]= & _T2AB;_T19= _tag_fat("\n%s:\n",sizeof(char),6U);_T1A= _tag_fat(_T2AC,sizeof(void*),1);Cyc_log(_T19,_T1A);}{const char*_T2AB=filename;_T1C= (void*)_T2AB;_T1D= (void*)_T2AB;_T1E= _get_zero_arr_size_char(_T1D,1U);_T1B= _tag_fat(_T1C,sizeof(char),_T1E);}{
# 1417
struct _fat_ptr basename=Cyc_Filename_basename(_T1B);{const char*_T2AB=filename;_T20= (void*)_T2AB;_T21= (void*)_T2AB;_T22= _get_zero_arr_size_char(_T21,1U);_T1F= _tag_fat(_T20,sizeof(char),_T22);}{
struct _fat_ptr raw_dirname=Cyc_Filename_dirname(_T1F);{const char*_T2AB=output_prefix;_T24= (void*)_T2AB;_T25= (void*)_T2AB;_T26= _get_zero_arr_size_char(_T25,1U);_T23= _tag_fat(_T24,sizeof(char),_T26);}_T27= raw_dirname;{
struct _fat_ptr dirname=Cyc_Filename_concat(_T23,_T27);
struct _fat_ptr choppedname=Cyc_Filename_chop_extension(basename);{const char*_T2AB=output_prefix;_T29= (void*)_T2AB;_T2A= (void*)_T2AB;_T2B= _get_zero_arr_size_char(_T2A,1U);_T28= _tag_fat(_T29,sizeof(char),_T2B);}_T2C= choppedname;_T2D= 
_tag_fat(".iA",sizeof(char),4U);_T2E= Cyc_strconcat(_T2C,_T2D);_T2F= Cyc_Filename_concat(_T28,_T2E);_T30= _untag_fat_ptr_check_bound(_T2F,sizeof(char),1U);_T31= _check_null(_T30);{const char*cppinfile=(const char*)_T31;_T33= dirname;_T34= 
# 1423
_get_fat_size(_T33,sizeof(char));if(_T34!=0U)goto _TL10F;{struct Cyc_String_pa_PrintArg_struct _T2AB;_T2AB.tag= 0;
_T2AB.f1= choppedname;_T36= _T2AB;}{struct Cyc_String_pa_PrintArg_struct _T2AB=_T36;void*_T2AC[1];_T2AC[0]= & _T2AB;_T37= _tag_fat("%s.iB",sizeof(char),6U);_T38= _tag_fat(_T2AC,sizeof(void*),1);_T35= Cyc_aprintf(_T37,_T38);}_T32= _T35;goto _TL110;_TL10F: _T39= dirname;{struct Cyc_String_pa_PrintArg_struct _T2AB;_T2AB.tag= 0;
_T2AB.f1= choppedname;_T3B= _T2AB;}{struct Cyc_String_pa_PrintArg_struct _T2AB=_T3B;void*_T2AC[1];_T2AC[0]= & _T2AB;_T3C= _tag_fat("%s.iB",sizeof(char),6U);_T3D= _tag_fat(_T2AC,sizeof(void*),1);_T3A= Cyc_aprintf(_T3C,_T3D);}_T32= Cyc_Filename_concat(_T39,_T3A);_TL110: _T3E= _untag_fat_ptr_check_bound(_T32,sizeof(char),1U);_T3F= _check_null(_T3E);{
# 1423
const char*macrosfile=(const char*)_T3F;_T41= dirname;_T42= 
# 1427
_get_fat_size(_T41,sizeof(char));if(_T42!=0U)goto _TL111;{struct Cyc_String_pa_PrintArg_struct _T2AB;_T2AB.tag= 0;
_T2AB.f1= choppedname;_T44= _T2AB;}{struct Cyc_String_pa_PrintArg_struct _T2AB=_T44;void*_T2AC[1];_T2AC[0]= & _T2AB;_T45= _tag_fat("%s.iC",sizeof(char),6U);_T46= _tag_fat(_T2AC,sizeof(void*),1);_T43= Cyc_aprintf(_T45,_T46);}_T40= _T43;goto _TL112;_TL111: _T47= dirname;{struct Cyc_String_pa_PrintArg_struct _T2AB;_T2AB.tag= 0;
_T2AB.f1= choppedname;_T49= _T2AB;}{struct Cyc_String_pa_PrintArg_struct _T2AB=_T49;void*_T2AC[1];_T2AC[0]= & _T2AB;_T4A= _tag_fat("%s.iC",sizeof(char),6U);_T4B= _tag_fat(_T2AC,sizeof(void*),1);_T48= Cyc_aprintf(_T4A,_T4B);}_T40= Cyc_Filename_concat(_T47,_T48);_TL112: _T4C= _untag_fat_ptr_check_bound(_T40,sizeof(char),1U);_T4D= _check_null(_T4C);{
# 1427
const char*declsfile=(const char*)_T4D;_T4F= dirname;_T50= 
# 1432
_get_fat_size(_T4F,sizeof(char));if(_T50!=0U)goto _TL113;{struct Cyc_String_pa_PrintArg_struct _T2AB;_T2AB.tag= 0;_T2AB.f1= choppedname;_T52= _T2AB;}{struct Cyc_String_pa_PrintArg_struct _T2AB=_T52;void*_T2AC[1];_T2AC[0]= & _T2AB;_T53= _tag_fat("%s.iD",sizeof(char),6U);_T54= _tag_fat(_T2AC,sizeof(void*),1);_T51= Cyc_aprintf(_T53,_T54);}_T4E= _T51;goto _TL114;_TL113: _T55= dirname;{struct Cyc_String_pa_PrintArg_struct _T2AB;_T2AB.tag= 0;
_T2AB.f1= choppedname;_T57= _T2AB;}{struct Cyc_String_pa_PrintArg_struct _T2AB=_T57;void*_T2AC[1];_T2AC[0]= & _T2AB;_T58= _tag_fat("%s.iD",sizeof(char),6U);_T59= _tag_fat(_T2AC,sizeof(void*),1);_T56= Cyc_aprintf(_T58,_T59);}_T4E= Cyc_Filename_concat(_T55,_T56);_TL114: _T5A= _untag_fat_ptr_check_bound(_T4E,sizeof(char),1U);_T5B= _check_null(_T5A);{
# 1431
const char*filtereddeclsfile=(const char*)_T5B;{const char*_T2AB=output_prefix;_T5D= (void*)_T2AB;_T5E= (void*)_T2AB;_T5F= _get_zero_arr_size_char(_T5E,1U);_T5C= _tag_fat(_T5D,sizeof(char),_T5F);}{const char*_T2AB=filename;_T61= (void*)_T2AB;_T62= (void*)_T2AB;_T63= _get_zero_arr_size_char(_T62,1U);_T60= _tag_fat(_T61,sizeof(char),_T63);}{
# 1435
struct _fat_ptr full_filename=Cyc_Filename_concat(_T5C,_T60);{struct _handler_cons _T2AB;_T64= & _T2AB;_push_handler(_T64);{int _T2AC=0;_T65= setjmp(_T2AB.handler);if(!_T65)goto _TL115;_T2AC= 1;goto _TL116;_TL115: _TL116: if(_T2AC)goto _TL117;else{goto _TL119;}_TL119: _T66= 
# 1439
Cyc_force_directory_prefixes(full_filename);if(!_T66)goto _TL11A;{int _T2AD=1;_npop_handler(0);return _T2AD;}_TL11A:
# 1444
 maybe= Cyc_fopen(cppinfile,"w");_T67= maybe;_T68= (unsigned)_T67;
if(_T68)goto _TL11C;else{goto _TL11E;}
_TL11E:{struct Cyc_String_pa_PrintArg_struct _T2AD;_T2AD.tag= 0;{const char*_T2AE=cppinfile;_T6B= (void*)_T2AE;_T6C= (void*)_T2AE;_T6D= _get_zero_arr_size_char(_T6C,1U);_T6A= _tag_fat(_T6B,sizeof(char),_T6D);}_T2AD.f1= _T6A;_T69= _T2AD;}{struct Cyc_String_pa_PrintArg_struct _T2AD=_T69;void*_T2AE[1];_T2AE[0]= & _T2AD;_T6E= Cyc_stderr;_T6F= _tag_fat("Error: could not create file %s\n",sizeof(char),33U);_T70= _tag_fat(_T2AE,sizeof(void*),1);Cyc_fprintf(_T6E,_T6F,_T70);}{int _T2AD=1;_npop_handler(0);return _T2AD;}_TL11C: _T71= Cyc_verbose;
# 1449
if(!_T71)goto _TL11F;{struct Cyc_String_pa_PrintArg_struct _T2AD;_T2AD.tag= 0;{const char*_T2AE=cppinfile;_T74= (void*)_T2AE;_T75= (void*)_T2AE;_T76= _get_zero_arr_size_char(_T75,1U);_T73= _tag_fat(_T74,sizeof(char),_T76);}
_T2AD.f1= _T73;_T72= _T2AD;}{struct Cyc_String_pa_PrintArg_struct _T2AD=_T72;void*_T2AE[1];_T2AE[0]= & _T2AD;_T77= Cyc_stderr;_T78= _tag_fat("Creating %s\n",sizeof(char),13U);_T79= _tag_fat(_T2AE,sizeof(void*),1);Cyc_fprintf(_T77,_T78,_T79);}goto _TL120;_TL11F: _TL120:
 out_file= maybe;{
struct Cyc_List_List*l=cpp_insert;_TL124: if(l!=0)goto _TL122;else{goto _TL123;}
_TL122: _T7A= l;_T7B= _T7A->hd;_T7C= (struct _fat_ptr*)_T7B;_T7D= *_T7C;_T7E= _untag_fat_ptr_check_bound(_T7D,sizeof(char),1U);_T7F= _check_null(_T7E);_T80= (const char*)_T7F;_T81= out_file;Cyc_fputs(_T80,_T81);_T82= l;
# 1452
l= _T82->tl;goto _TL124;_TL123:;}{struct Cyc_String_pa_PrintArg_struct _T2AD;_T2AD.tag= 0;{const char*_T2AE=filename;_T85= (void*)_T2AE;_T86= (void*)_T2AE;_T87= _get_zero_arr_size_char(_T86,1U);_T84= _tag_fat(_T85,sizeof(char),_T87);}
# 1455
_T2AD.f1= _T84;_T83= _T2AD;}{struct Cyc_String_pa_PrintArg_struct _T2AD=_T83;void*_T2AE[1];_T2AE[0]= & _T2AD;_T88= out_file;_T89= _tag_fat("#include <%s>\n",sizeof(char),15U);_T8A= _tag_fat(_T2AE,sizeof(void*),1);Cyc_fprintf(_T88,_T89,_T8A);}
Cyc_fclose(out_file);{struct Cyc_List_List*_T2AD=_cycalloc(sizeof(struct Cyc_List_List));{struct _fat_ptr*_T2AE=_cycalloc(sizeof(struct _fat_ptr));_T8D= 
# 1458
_tag_fat("",sizeof(char),1U);*_T2AE= _T8D;_T8C= (struct _fat_ptr*)_T2AE;}_T2AD->hd= _T8C;_T8F= Cyc_List_map;{struct Cyc_List_List*(*_T2AE)(struct _fat_ptr*(*)(struct _fat_ptr*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr*(*)(struct _fat_ptr*),struct Cyc_List_List*))_T8F;_T8E= _T2AE;}_T90= Cyc_List_rev(Cyc_cppargs);({__typeof__(_T8E(Cyc_sh_escape_stringptr,_T90))_T2AE=_T8E(Cyc_sh_escape_stringptr,_T90);_T2AD->tl= _T2AE;});_T8B= (struct Cyc_List_List*)_T2AD;}_T91= _tag_fat(" ",sizeof(char),2U);{
# 1457
struct _fat_ptr cppargs_string=
Cyc_str_sepstr(_T8B,_T91);{struct Cyc_String_pa_PrintArg_struct _T2AD;_T2AD.tag= 0;
# 1460
_T2AD.f1= Cyc_cyclone_cc;_T93= _T2AD;}{struct Cyc_String_pa_PrintArg_struct _T2AD=_T93;{struct Cyc_String_pa_PrintArg_struct _T2AE;_T2AE.tag= 0;
_T2AE.f1= cppargs_string;_T94= _T2AE;}{struct Cyc_String_pa_PrintArg_struct _T2AE=_T94;{struct Cyc_String_pa_PrintArg_struct _T2AF;_T2AF.tag= 0;{const char*_T2B0=macrosfile;_T97= (void*)_T2B0;_T98= (void*)_T2B0;_T99= _get_zero_arr_size_char(_T98,1U);_T96= _tag_fat(_T97,sizeof(char),_T99);}_T2AF.f1= _T96;_T95= _T2AF;}{struct Cyc_String_pa_PrintArg_struct _T2AF=_T95;{struct Cyc_String_pa_PrintArg_struct _T2B0;_T2B0.tag= 0;{const char*_T2B1=cppinfile;_T9C= (void*)_T2B1;_T9D= (void*)_T2B1;_T9E= _get_zero_arr_size_char(_T9D,1U);_T9B= _tag_fat(_T9C,sizeof(char),_T9E);}_T2B0.f1= _T9B;_T9A= _T2B0;}{struct Cyc_String_pa_PrintArg_struct _T2B0=_T9A;{struct Cyc_String_pa_PrintArg_struct _T2B1;_T2B1.tag= 0;_TA0= Cyc_verbose;if(!_TA0)goto _TL125;({__typeof__(_tag_fat("",sizeof(char),1U))_T2B2=_tag_fat("",sizeof(char),1U);_T2B1.f1= _T2B2;});goto _TL126;_TL125:({__typeof__(_tag_fat("-w",sizeof(char),3U))_T2B2=_tag_fat("-w",sizeof(char),3U);_T2B1.f1= _T2B2;});_TL126: _T9F= _T2B1;}{struct Cyc_String_pa_PrintArg_struct _T2B1=_T9F;void*_T2B2[5];_T2B2[0]= & _T2AD;_T2B2[1]= & _T2AE;_T2B2[2]= & _T2AF;_T2B2[3]= & _T2B0;_T2B2[4]= & _T2B1;_TA1= 
# 1460
_tag_fat("%s %s -E -dM -o %s -x c %s %s",sizeof(char),30U);_TA2= _tag_fat(_T2B2,sizeof(void*),5);_T92= Cyc_aprintf(_TA1,_TA2);}}}}}_TA3= _untag_fat_ptr_check_bound(_T92,sizeof(char),1U);_TA4= _check_null(_TA3);{char*cmd=(char*)_TA4;{struct Cyc_String_pa_PrintArg_struct _T2AD;_T2AD.tag= 0;{char*_T2AE=cmd;_TA7= (void*)_T2AE;_TA8= (void*)_T2AE;_TA9= _get_zero_arr_size_char(_TA8,1U);_TA6= _tag_fat(_TA7,sizeof(char),_TA9);}
# 1462
_T2AD.f1= _TA6;_TA5= _T2AD;}{struct Cyc_String_pa_PrintArg_struct _T2AD=_TA5;void*_T2AE[1];_T2AE[0]= & _T2AD;_TAA= Cyc_stderr;_TAB= _tag_fat("%s\n",sizeof(char),4U);_TAC= _tag_fat(_T2AE,sizeof(void*),1);Cyc_fprintf(_TAA,_TAB,_TAC);}_TAD= 
system(cmd);if(_TAD)goto _TL127;else{goto _TL129;}
# 1466
_TL129:{struct Cyc_String_pa_PrintArg_struct _T2AD;_T2AD.tag= 0;_T2AD.f1= Cyc_cyclone_cc;_TAF= _T2AD;}{struct Cyc_String_pa_PrintArg_struct _T2AD=_TAF;{struct Cyc_String_pa_PrintArg_struct _T2AE;_T2AE.tag= 0;
_T2AE.f1= cppargs_string;_TB0= _T2AE;}{struct Cyc_String_pa_PrintArg_struct _T2AE=_TB0;{struct Cyc_String_pa_PrintArg_struct _T2AF;_T2AF.tag= 0;{const char*_T2B0=declsfile;_TB3= (void*)_T2B0;_TB4= (void*)_T2B0;_TB5= _get_zero_arr_size_char(_TB4,1U);_TB2= _tag_fat(_TB3,sizeof(char),_TB5);}_T2AF.f1= _TB2;_TB1= _T2AF;}{struct Cyc_String_pa_PrintArg_struct _T2AF=_TB1;{struct Cyc_String_pa_PrintArg_struct _T2B0;_T2B0.tag= 0;{const char*_T2B1=cppinfile;_TB8= (void*)_T2B1;_TB9= (void*)_T2B1;_TBA= _get_zero_arr_size_char(_TB9,1U);_TB7= _tag_fat(_TB8,sizeof(char),_TBA);}_T2B0.f1= _TB7;_TB6= _T2B0;}{struct Cyc_String_pa_PrintArg_struct _T2B0=_TB6;{struct Cyc_String_pa_PrintArg_struct _T2B1;_T2B1.tag= 0;_TBC= Cyc_verbose;if(!_TBC)goto _TL12A;({__typeof__(_tag_fat("",sizeof(char),1U))_T2B2=_tag_fat("",sizeof(char),1U);_T2B1.f1= _T2B2;});goto _TL12B;_TL12A:({__typeof__(_tag_fat("-w",sizeof(char),3U))_T2B2=_tag_fat("-w",sizeof(char),3U);_T2B1.f1= _T2B2;});_TL12B: _TBB= _T2B1;}{struct Cyc_String_pa_PrintArg_struct _T2B1=_TBB;void*_T2B2[5];_T2B2[0]= & _T2AD;_T2B2[1]= & _T2AE;_T2B2[2]= & _T2AF;_T2B2[3]= & _T2B0;_T2B2[4]= & _T2B1;_TBD= 
# 1466
_tag_fat("%s %s -E -o %s -x c %s %s",sizeof(char),26U);_TBE= _tag_fat(_T2B2,sizeof(void*),5);_TAE= Cyc_aprintf(_TBD,_TBE);}}}}}_TBF= _untag_fat_ptr_check_bound(_TAE,sizeof(char),1U);_TC0= _check_null(_TBF);cmd= (char*)_TC0;{struct Cyc_String_pa_PrintArg_struct _T2AD;_T2AD.tag= 0;{char*_T2AE=cmd;_TC3= (void*)_T2AE;_TC4= (void*)_T2AE;_TC5= _get_zero_arr_size_char(_TC4,1U);_TC2= _tag_fat(_TC3,sizeof(char),_TC5);}
# 1468
_T2AD.f1= _TC2;_TC1= _T2AD;}{struct Cyc_String_pa_PrintArg_struct _T2AD=_TC1;void*_T2AE[1];_T2AE[0]= & _T2AD;_TC6= Cyc_stderr;_TC7= _tag_fat("%s\n",sizeof(char),4U);_TC8= _tag_fat(_T2AE,sizeof(void*),1);Cyc_fprintf(_TC6,_TC7,_TC8);}
system(cmd);goto _TL128;_TL127: _TL128: {
# 1474
struct Cyc_Hashtable_Table*t=Cyc_new_deps();
maybe= Cyc_fopen(macrosfile,"r");_TC9= maybe;_TCA= (unsigned)_TC9;
if(_TCA)goto _TL12C;else{goto _TL12E;}
_TL12E:{struct Cyc_NO_SUPPORT_exn_struct*_T2AD=_cycalloc(sizeof(struct Cyc_NO_SUPPORT_exn_struct));_T2AD->tag= Cyc_NO_SUPPORT;{struct Cyc_String_pa_PrintArg_struct _T2AE;_T2AE.tag= 0;{const char*_T2AF=macrosfile;_TCF= (void*)_T2AF;_TD0= (void*)_T2AF;_TD1= _get_zero_arr_size_char(_TD0,1U);_TCE= _tag_fat(_TCF,sizeof(char),_TD1);}_T2AE.f1= _TCE;_TCD= _T2AE;}{struct Cyc_String_pa_PrintArg_struct _T2AE=_TCD;void*_T2AF[1];_T2AF[0]= & _T2AE;_TD2= _tag_fat("can't open macrosfile %s",sizeof(char),25U);_TD3= _tag_fat(_T2AF,sizeof(void*),1);_TCC= Cyc_aprintf(_TD2,_TD3);}_T2AD->f1= _TCC;_TCB= (struct Cyc_NO_SUPPORT_exn_struct*)_T2AD;}_TD4= (void*)_TCB;_rethrow(_TD4);goto _TL12D;_TL12C: _TL12D: _TD5= Cyc_verbose;
# 1479
if(!_TD5)goto _TL12F;_TD6= Cyc_stderr;_TD7= 
_tag_fat("Getting macros...",sizeof(char),18U);_TD8= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_TD6,_TD7,_TD8);goto _TL130;_TL12F: _TL130:
 in_file= maybe;{
struct Cyc_Lexing_lexbuf*l=Cyc_Lexing_from_file(in_file);
struct _tuple15*entry;
int i=0;
_TL131: entry= Cyc_line(l);_TD9= entry;if(_TD9!=0)goto _TL132;else{goto _TL133;}
_TL132:{struct _tuple15*_T2AD=entry;struct Cyc_Set_Set*_T2AE;struct _fat_ptr*_T2AF;{struct _tuple15 _T2B0=*_T2AD;_T2AF= _T2B0.f0;_T2AE= _T2B0.f1;}{struct _fat_ptr*name=_T2AF;struct Cyc_Set_Set*uses=_T2AE;_TDB= Cyc_Hashtable_insert;{
void(*_T2B0)(struct Cyc_Hashtable_Table*,struct _fat_ptr*,struct Cyc_Set_Set*)=(void(*)(struct Cyc_Hashtable_Table*,struct _fat_ptr*,struct Cyc_Set_Set*))_TDB;_TDA= _T2B0;}_TDA(t,name,uses);}}goto _TL131;_TL133:
# 1491
 Cyc_fclose(in_file);_TDC= Cyc_verbose;
if(!_TDC)goto _TL134;_TDD= Cyc_stderr;_TDE= 
_tag_fat("done.\n",sizeof(char),7U);_TDF= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_TDD,_TDE,_TDF);goto _TL135;_TL134: _TL135:
# 1496
 maybe= Cyc_fopen(declsfile,"r");_TE0= maybe;_TE1= (unsigned)_TE0;
if(_TE1)goto _TL136;else{goto _TL138;}
_TL138:{struct Cyc_NO_SUPPORT_exn_struct*_T2AD=_cycalloc(sizeof(struct Cyc_NO_SUPPORT_exn_struct));_T2AD->tag= Cyc_NO_SUPPORT;{struct Cyc_String_pa_PrintArg_struct _T2AE;_T2AE.tag= 0;{const char*_T2AF=declsfile;_TE6= (void*)_T2AF;_TE7= (void*)_T2AF;_TE8= _get_zero_arr_size_char(_TE7,1U);_TE5= _tag_fat(_TE6,sizeof(char),_TE8);}_T2AE.f1= _TE5;_TE4= _T2AE;}{struct Cyc_String_pa_PrintArg_struct _T2AE=_TE4;void*_T2AF[1];_T2AF[0]= & _T2AE;_TE9= _tag_fat("can't open declsfile %s",sizeof(char),24U);_TEA= _tag_fat(_T2AF,sizeof(void*),1);_TE3= Cyc_aprintf(_TE9,_TEA);}_T2AD->f1= _TE3;_TE2= (struct Cyc_NO_SUPPORT_exn_struct*)_T2AD;}_TEB= (void*)_TE2;_rethrow(_TEB);goto _TL137;_TL136: _TL137: _TEC= Cyc_verbose;
# 1500
if(!_TEC)goto _TL139;_TED= Cyc_stderr;_TEE= 
_tag_fat("Extracting declarations...",sizeof(char),27U);_TEF= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_TED,_TEE,_TEF);goto _TL13A;_TL139: _TL13A:
 in_file= maybe;
l= Cyc_Lexing_from_file(in_file);
Cyc_slurp_out= Cyc_fopen(filtereddeclsfile,"w");_TF0= Cyc_slurp_out;_TF1= (unsigned)_TF0;
if(_TF1)goto _TL13B;else{goto _TL13D;}
_TL13D:{int _T2AD=1;_npop_handler(0);return _T2AD;}_TL13B:
 _TL13E: _TF2= Cyc_slurp(l);if(_TF2)goto _TL13F;else{goto _TL140;}
_TL13F: goto _TL13E;_TL140: _TF3= Cyc_verbose;
if(!_TF3)goto _TL141;_TF4= Cyc_stderr;_TF5= 
_tag_fat("done.\n",sizeof(char),7U);_TF6= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_TF4,_TF5,_TF6);goto _TL142;_TL141: _TL142: {
# 1512
struct Cyc_List_List*x=user_defs;
_TL143: if(x!=0)goto _TL144;else{goto _TL145;}
_TL144: _TF7= x;_TF8= _TF7->hd;{struct _tuple18*_T2AD=(struct _tuple18*)_TF8;struct _fat_ptr*_T2AE;{struct _tuple18 _T2AF=*_T2AD;_T2AE= _T2AF.f1;}{struct _fat_ptr*s=_T2AE;{struct Cyc_String_pa_PrintArg_struct _T2AF;_T2AF.tag= 0;_TFA= s;
_T2AF.f1= *_TFA;_TF9= _T2AF;}{struct Cyc_String_pa_PrintArg_struct _T2AF=_TF9;void*_T2B0[1];_T2B0[0]= & _T2AF;_TFB= _check_null(Cyc_slurp_out);_TFC= _tag_fat("%s",sizeof(char),3U);_TFD= _tag_fat(_T2B0,sizeof(void*),1);Cyc_fprintf(_TFB,_TFC,_TFD);}_TFE= x;
x= _TFE->tl;}}goto _TL143;_TL145:
# 1518
 Cyc_fclose(in_file);_TFF= 
_check_null(Cyc_slurp_out);Cyc_fclose(_TFF);
# 1521
maybe= Cyc_fopen(filtereddeclsfile,"r");_T100= maybe;_T101= (unsigned)_T100;
if(_T101)goto _TL146;else{goto _TL148;}
_TL148:{int _T2AD=1;_npop_handler(0);return _T2AD;}_TL146: _T102= Cyc_verbose;
if(!_T102)goto _TL149;_T103= Cyc_stderr;_T104= 
_tag_fat("Parsing declarations...",sizeof(char),24U);_T105= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T103,_T104,_T105);goto _TL14A;_TL149: _TL14A:
 in_file= maybe;{const char*_T2AD=filtereddeclsfile;_T107= (void*)_T2AD;_T108= (void*)_T2AD;_T109= _get_zero_arr_size_char(_T108,1U);_T106= _tag_fat(_T107,sizeof(char),_T109);}
Cyc_Warn_reset(_T106);
Cyc_Lex_lex_init(0);
Cyc_Warn_print_warnings= Cyc_verbose;{
struct Cyc_List_List*decls=0;{struct _handler_cons _T2AD;_T10A= & _T2AD;_push_handler(_T10A);{int _T2AE=0;_T10B= setjmp(_T2AD.handler);if(!_T10B)goto _TL14B;_T2AE= 1;goto _TL14C;_TL14B: _TL14C: if(_T2AE)goto _TL14D;else{goto _TL14F;}_TL14F:
# 1532
 decls= Cyc_Parse_parse_file(in_file);
Cyc_Warn_print_warnings= 1;
Cyc_Lex_lex_init(0);
Cyc_fclose(in_file);_T10C= Cyc_verbose;
if(!_T10C)goto _TL150;_T10D= Cyc_stderr;_T10E= 
_tag_fat("done.\n",sizeof(char),7U);_T10F= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T10D,_T10E,_T10F);goto _TL151;_TL150: _TL151: _pop_handler();goto _TL14E;_TL14D: _T110= Cyc_Core_get_exn_thrown();{void*_T2AF=(void*)_T110;void*_T2B0;_T2B0= _T2AF;{void*x=_T2B0;
# 1541
Cyc_Warn_print_warnings= 1;
Cyc_Lex_lex_init(0);
Cyc_fclose(in_file);_T111= Cyc_verbose;
if(!_T111)goto _TL152;_T112= Cyc_stderr;_T113= 
_tag_fat("exception thrown.\n",sizeof(char),19U);_T114= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T112,_T113,_T114);goto _TL153;_TL152: _TL153:
 Cyc_Core_rethrow(x);goto _LL6;}_LL6:;}_TL14E:;}}{
# 1550
struct Cyc_List_List*d=decls;_TL157: if(d!=0)goto _TL155;else{goto _TL156;}
_TL155: _T115= d;_T116= _T115->hd;_T117= (struct Cyc_Absyn_Decl*)_T116;_T118= t;Cyc_scan_decl(_T117,_T118);_T119= d;
# 1550
d= _T119->tl;goto _TL157;_TL156:;}_T11B= Cyc_List_map;{
# 1554
struct Cyc_List_List*(*_T2AD)(struct _fat_ptr*(*)(struct _fat_ptr*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr*(*)(struct _fat_ptr*),struct Cyc_List_List*))_T11B;_T11A= _T2AD;}_T11C= Cyc_List_split(user_defs);_T11D= _T11C.f0;{struct Cyc_List_List*user_symbols=_T11A(Cyc_add_user_prefix,_T11D);_T11E= 
Cyc_List_append(start_symbols,user_symbols);_T11F= t;{struct Cyc_Set_Set*reachable_set=Cyc_reachable(_T11E,_T11F);
# 1558
struct Cyc_List_List*reachable_decls=0;
struct Cyc_List_List*user_decls=0;_T121= Cyc_Set_empty;{
struct Cyc_Set_Set*(*_T2AD)(int(*)(struct _fat_ptr*,struct _fat_ptr*))=(struct Cyc_Set_Set*(*)(int(*)(struct _fat_ptr*,struct _fat_ptr*)))_T121;_T120= _T2AD;}_T122= Cyc_strptrcmp;{struct Cyc_Set_Set*defined_symbols=_T120(_T122);{
struct Cyc_List_List*d=decls;_TL15B: if(d!=0)goto _TL159;else{goto _TL15A;}
_TL159: _T123= d;_T124= _T123->hd;{struct Cyc_Absyn_Decl*decl=(struct Cyc_Absyn_Decl*)_T124;
struct _fat_ptr*name;_T125= decl;{
void*_T2AD=_T125->r;struct Cyc_Absyn_Typedefdecl*_T2AE;struct Cyc_Absyn_Enumdecl*_T2AF;struct Cyc_Absyn_Aggrdecl*_T2B0;struct Cyc_Absyn_Fndecl*_T2B1;struct Cyc_Absyn_Vardecl*_T2B2;_T126= (int*)_T2AD;_T127= *_T126;switch(_T127){case 0:{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T2B3=(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T2AD;_T2B2= _T2B3->f1;}{struct Cyc_Absyn_Vardecl*x=_T2B2;_T128= x;{
# 1566
struct _tuple1*_T2B3=_T128->name;struct _fat_ptr*_T2B4;{struct _tuple1 _T2B5=*_T2B3;_T2B4= _T2B5.f1;}{struct _fat_ptr*v=_T2B4;_T12A= Cyc_Set_insert;{
struct Cyc_Set_Set*(*_T2B5)(struct Cyc_Set_Set*,struct _fat_ptr*)=(struct Cyc_Set_Set*(*)(struct Cyc_Set_Set*,struct _fat_ptr*))_T12A;_T129= _T2B5;}defined_symbols= _T129(defined_symbols,v);_T12C= Cyc_List_mem;{
long(*_T2B5)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*)=(long(*)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*))_T12C;_T12B= _T2B5;}_T12D= Cyc_strptrcmp;_T12E= omit_symbols;_T12F= v;_T130= _T12B(_T12D,_T12E,_T12F);if(!_T130)goto _TL15D;
name= 0;goto _TL15E;
# 1571
_TL15D: name= v;_TL15E: goto _LL9;}}}case 1:{struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*_T2B3=(struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*)_T2AD;_T2B1= _T2B3->f1;}{struct Cyc_Absyn_Fndecl*x=_T2B1;_T131= x;{
# 1574
struct _tuple1*_T2B3=_T131->name;struct _fat_ptr*_T2B4;{struct _tuple1 _T2B5=*_T2B3;_T2B4= _T2B5.f1;}{struct _fat_ptr*v=_T2B4;_T133= Cyc_Set_insert;{
struct Cyc_Set_Set*(*_T2B5)(struct Cyc_Set_Set*,struct _fat_ptr*)=(struct Cyc_Set_Set*(*)(struct Cyc_Set_Set*,struct _fat_ptr*))_T133;_T132= _T2B5;}defined_symbols= _T132(defined_symbols,v);_T135= Cyc_List_mem;{
long(*_T2B5)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*)=(long(*)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*))_T135;_T134= _T2B5;}_T136= Cyc_strptrcmp;_T137= omit_symbols;_T138= v;_T139= _T134(_T136,_T137,_T138);if(!_T139)goto _TL15F;
name= 0;goto _TL160;
# 1579
_TL15F: name= v;_TL160: goto _LL9;}}}case 5:{struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T2B3=(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*)_T2AD;_T2B0= _T2B3->f1;}{struct Cyc_Absyn_Aggrdecl*x=_T2B0;_T13A= x;{
# 1582
struct _tuple1*_T2B3=_T13A->name;struct _fat_ptr*_T2B4;{struct _tuple1 _T2B5=*_T2B3;_T2B4= _T2B5.f1;}{struct _fat_ptr*v=_T2B4;
name= v;goto _LL9;}}}case 7:{struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*_T2B3=(struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*)_T2AD;_T2AF= _T2B3->f1;}{struct Cyc_Absyn_Enumdecl*x=_T2AF;_T13B= x;{
# 1586
struct _tuple1*_T2B3=_T13B->name;struct _fat_ptr*_T2B4;{struct _tuple1 _T2B5=*_T2B3;_T2B4= _T2B5.f1;}{struct _fat_ptr*v=_T2B4;
name= v;
# 1590
if(name==0)goto _TL161;_T13D= Cyc_Set_member;{long(*_T2B5)(struct Cyc_Set_Set*,struct _fat_ptr*)=(long(*)(struct Cyc_Set_Set*,struct _fat_ptr*))_T13D;_T13C= _T2B5;}_T13E= _T13C(reachable_set,name);if(!_T13E)goto _TL161;{struct Cyc_List_List*_T2B5=_cycalloc(sizeof(struct Cyc_List_List));
_T2B5->hd= decl;_T2B5->tl= reachable_decls;_T13F= (struct Cyc_List_List*)_T2B5;}reachable_decls= _T13F;goto _TL162;
_TL161: _T140= x;_T141= _T140->fields;_T142= (unsigned)_T141;if(!_T142)goto _TL163;_T143= x;_T144= _T143->fields;_T145= _T144->v;{
struct Cyc_List_List*fs=(struct Cyc_List_List*)_T145;_TL168: if(fs!=0)goto _TL166;else{goto _TL167;}
_TL166: _T146= fs;_T147= _T146->hd;{struct Cyc_Absyn_Enumfield*f=(struct Cyc_Absyn_Enumfield*)_T147;_T148= f;{
struct _tuple1*_T2B5=_T148->name;struct _fat_ptr*_T2B6;{struct _tuple1 _T2B7=*_T2B5;_T2B6= _T2B7.f1;}{struct _fat_ptr*v=_T2B6;_T14A= Cyc_Set_member;{
long(*_T2B7)(struct Cyc_Set_Set*,struct _fat_ptr*)=(long(*)(struct Cyc_Set_Set*,struct _fat_ptr*))_T14A;_T149= _T2B7;}_T14B= _T149(reachable_set,v);if(!_T14B)goto _TL169;{struct Cyc_List_List*_T2B7=_cycalloc(sizeof(struct Cyc_List_List));
_T2B7->hd= decl;_T2B7->tl= reachable_decls;_T14C= (struct Cyc_List_List*)_T2B7;}reachable_decls= _T14C;goto _TL167;_TL169:;}}}_T14D= fs;
# 1593
fs= _T14D->tl;goto _TL168;_TL167:;}goto _TL164;_TL163: _TL164: _TL162:
# 1602
 name= 0;goto _LL9;}}}case 8:{struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct*_T2B3=(struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct*)_T2AD;_T2AE= _T2B3->f1;}{struct Cyc_Absyn_Typedefdecl*x=_T2AE;_T14E= x;{
# 1605
struct _tuple1*_T2B3=_T14E->name;struct _fat_ptr*_T2B4;{struct _tuple1 _T2B5=*_T2B3;_T2B4= _T2B5.f1;}{struct _fat_ptr*v=_T2B4;
name= v;goto _LL9;}}}case 13: goto _LL17;case 14: _LL17: goto _LL19;case 15: _LL19: goto _LL1B;case 16: _LL1B: goto _LL1D;case 2: _LL1D: goto _LL1F;case 6: _LL1F: goto _LL21;case 3: _LL21: goto _LL23;case 9: _LL23: goto _LL25;case 10: _LL25: goto _LL27;case 11: _LL27: goto _LL29;case 12: _LL29: goto _LL2B;default: _LL2B:
# 1620
 name= 0;goto _LL9;}_LL9:;}
# 1624
if(name==0)goto _TL16B;_T150= Cyc_Set_member;{long(*_T2AD)(struct Cyc_Set_Set*,struct _fat_ptr*)=(long(*)(struct Cyc_Set_Set*,struct _fat_ptr*))_T150;_T14F= _T2AD;}_T151= _T14F(reachable_set,name);if(!_T151)goto _TL16B;_T152= name;_T153= *_T152;_T154= Cyc_user_prefix;_T155= 
Cyc_strlen(Cyc_user_prefix);_T156= Cyc_strncmp(_T153,_T154,_T155);if(_T156==0)goto _TL16D;{struct Cyc_List_List*_T2AD=_cycalloc(sizeof(struct Cyc_List_List));
_T2AD->hd= decl;_T2AD->tl= reachable_decls;_T157= (struct Cyc_List_List*)_T2AD;}reachable_decls= _T157;goto _TL16E;
# 1628
_TL16D: Cyc_rename_decl(decl);{struct Cyc_List_List*_T2AD=_cycalloc(sizeof(struct Cyc_List_List));
_T2AD->hd= decl;_T2AD->tl= user_decls;_T158= (struct Cyc_List_List*)_T2AD;}user_decls= _T158;_TL16E: goto _TL16C;_TL16B: _TL16C:;}_T159= d;
# 1561
d= _T159->tl;goto _TL15B;_TL15A:;}_T15A= Cyc_do_setjmp;
# 1635
if(_T15A)goto _TL16F;else{goto _TL171;}
_TL171: _T15B= full_filename;_T15C= _untag_fat_ptr_check_bound(_T15B,sizeof(char),1U);_T15D= _check_null(_T15C);_T15E= (const char*)_T15D;maybe= Cyc_fopen(_T15E,"w");_T15F= maybe;_T160= (unsigned)_T15F;
if(_T160)goto _TL172;else{goto _TL174;}
_TL174:{int _T2AD=1;_npop_handler(0);return _T2AD;}_TL172:
 out_file= maybe;goto _TL170;
# 1641
_TL16F: out_file= Cyc_stdout;_TL170:{struct Cyc_String_pa_PrintArg_struct _T2AD;_T2AD.tag= 0;{const char*_T2AE=filename;_T164= (void*)_T2AE;_T165= (void*)_T2AE;_T166= _get_zero_arr_size_char(_T165,1U);_T163= _tag_fat(_T164,sizeof(char),_T166);}
_T2AD.f1= _T163;_T162= _T2AD;}{struct Cyc_String_pa_PrintArg_struct _T2AD=_T162;void*_T2AE[1];_T2AE[0]= & _T2AD;_T167= _tag_fat("_%s_",sizeof(char),5U);_T168= _tag_fat(_T2AE,sizeof(void*),1);_T161= Cyc_aprintf(_T167,_T168);}{struct _fat_ptr ifdefmacro=_T161;{
int j=0;_TL178: _T169= j;_T16A= (unsigned)_T169;_T16B= ifdefmacro;_T16C= _get_fat_size(_T16B,sizeof(char));if(_T16A < _T16C)goto _TL176;else{goto _TL177;}
_TL176: _T16D= ifdefmacro;_T16E= _T16D.curr;_T16F= (char*)_T16E;_T170= _check_null(_T16F);_T171= j;_T172= _T170[_T171];_T173= (int)_T172;if(_T173==46)goto _TL17B;else{goto _TL17C;}_TL17C: _T174= ifdefmacro;_T175= _T174.curr;_T176= (char*)_T175;_T177= j;_T178= _T176[_T177];_T179= (int)_T178;if(_T179==47)goto _TL17B;else{goto _TL179;}
_TL17B: _T17A= ifdefmacro;_T17B= j;{struct _fat_ptr _T2AD=_fat_ptr_plus(_T17A,sizeof(char),_T17B);_T17C= _T2AD.curr;_T17D= (char*)_T17C;{char _T2AE=*_T17D;char _T2AF='_';_T17E= _get_fat_size(_T2AD,sizeof(char));if(_T17E!=1U)goto _TL17D;if(_T2AE!=0)goto _TL17D;if(_T2AF==0)goto _TL17D;_throw_arraybounds();goto _TL17E;_TL17D: _TL17E: _T17F= _T2AD.curr;_T180= (char*)_T17F;*_T180= _T2AF;}}goto _TL17A;
_TL179: _T181= ifdefmacro;_T182= _T181.curr;_T183= (char*)_T182;_T184= j;_T185= _T183[_T184];_T186= (int)_T185;if(_T186==95)goto _TL17F;_T187= ifdefmacro;_T188= _T187.curr;_T189= (char*)_T188;_T18A= j;_T18B= _T189[_T18A];_T18C= (int)_T18B;if(_T18C==47)goto _TL17F;_T18D= ifdefmacro;_T18E= j;{struct _fat_ptr _T2AD=_fat_ptr_plus(_T18D,sizeof(char),_T18E);_T18F= _T2AD.curr;_T190= (char*)_T18F;{char _T2AE=*_T190;_T191= ifdefmacro;_T192= _T191.curr;_T193= (char*)_T192;_T194= j;_T195= _T193[_T194];_T196= (int)_T195;_T197= 
toupper(_T196);{char _T2AF=(char)_T197;_T198= _get_fat_size(_T2AD,sizeof(char));if(_T198!=1U)goto _TL181;if(_T2AE!=0)goto _TL181;if(_T2AF==0)goto _TL181;_throw_arraybounds();goto _TL182;_TL181: _TL182: _T199= _T2AD.curr;_T19A= (char*)_T199;*_T19A= _T2AF;}}}goto _TL180;_TL17F: _TL180: _TL17A:
# 1643
 j= j + 1;goto _TL178;_TL177:;}_T19B= Cyc_do_setjmp;
# 1649
if(_T19B)goto _TL183;else{goto _TL185;}
_TL185: _T19C= out_file;_T19D= _tag_fat("__noinference__{\n",sizeof(char),18U);_T19E= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T19C,_T19D,_T19E);goto _TL184;_TL183: _TL184:{struct Cyc_String_pa_PrintArg_struct _T2AD;_T2AD.tag= 0;
# 1654
_T2AD.f1= ifdefmacro;_T19F= _T2AD;}{struct Cyc_String_pa_PrintArg_struct _T2AD=_T19F;{struct Cyc_String_pa_PrintArg_struct _T2AE;_T2AE.tag= 0;_T2AE.f1= ifdefmacro;_T1A0= _T2AE;}{struct Cyc_String_pa_PrintArg_struct _T2AE=_T1A0;void*_T2AF[2];_T2AF[0]= & _T2AD;_T2AF[1]= & _T2AE;_T1A1= out_file;_T1A2= 
# 1653
_tag_fat("#ifndef %s\n#define %s\n",sizeof(char),23U);_T1A3= _tag_fat(_T2AF,sizeof(void*),2);Cyc_fprintf(_T1A1,_T1A2,_T1A3);}}{
# 1657
struct Cyc_List_List*print_decls=0;
struct Cyc_List_List*names=0;{
struct Cyc_List_List*d=reachable_decls;_TL189: if(d!=0)goto _TL187;else{goto _TL188;}
_TL187: _T1A4= d;_T1A5= _T1A4->hd;{struct Cyc_Absyn_Decl*decl=(struct Cyc_Absyn_Decl*)_T1A5;
long anon_enum=0;
struct _fat_ptr*name;_T1A6= decl;{
void*_T2AD=_T1A6->r;struct Cyc_Absyn_Typedefdecl*_T2AE;struct Cyc_Absyn_Enumdecl*_T2AF;struct Cyc_Absyn_Aggrdecl*_T2B0;struct Cyc_Absyn_Fndecl*_T2B1;struct Cyc_Absyn_Vardecl*_T2B2;_T1A7= (int*)_T2AD;_T1A8= *_T1A7;switch(_T1A8){case 0:{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T2B3=(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T2AD;_T2B2= _T2B3->f1;}{struct Cyc_Absyn_Vardecl*x=_T2B2;_T1A9= x;{
# 1665
struct _tuple1*_T2B3=_T1A9->name;struct _fat_ptr*_T2B4;{struct _tuple1 _T2B5=*_T2B3;_T2B4= _T2B5.f1;}{struct _fat_ptr*v=_T2B4;
name= v;goto _LL3E;}}}case 1:{struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*_T2B3=(struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*)_T2AD;_T2B1= _T2B3->f1;}{struct Cyc_Absyn_Fndecl*x=_T2B1;_T1AA= x;_T1AB= _T1AA->is_inline;
# 1669
if(!_T1AB)goto _TL18B;
name= 0;goto _LL3E;_TL18B: _T1AC= x;{
# 1673
struct _tuple1*_T2B3=_T1AC->name;struct _fat_ptr*_T2B4;{struct _tuple1 _T2B5=*_T2B3;_T2B4= _T2B5.f1;}{struct _fat_ptr*v=_T2B4;
name= v;goto _LL3E;}}}case 5:{struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T2B3=(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*)_T2AD;_T2B0= _T2B3->f1;}{struct Cyc_Absyn_Aggrdecl*x=_T2B0;_T1AD= x;{
# 1677
struct _tuple1*_T2B3=_T1AD->name;struct _fat_ptr*_T2B4;{struct _tuple1 _T2B5=*_T2B3;_T2B4= _T2B5.f1;}{struct _fat_ptr*v=_T2B4;
name= v;goto _LL3E;}}}case 7:{struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*_T2B3=(struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*)_T2AD;_T2AF= _T2B3->f1;}{struct Cyc_Absyn_Enumdecl*x=_T2AF;_T1AE= x;{
# 1681
struct _tuple1*_T2B3=_T1AE->name;struct _fat_ptr*_T2B4;{struct _tuple1 _T2B5=*_T2B3;_T2B4= _T2B5.f1;}{struct _fat_ptr*v=_T2B4;
name= v;goto _LL3E;}}}case 8:{struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct*_T2B3=(struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct*)_T2AD;_T2AE= _T2B3->f1;}{struct Cyc_Absyn_Typedefdecl*x=_T2AE;_T1AF= x;{
# 1685
struct _tuple1*_T2B3=_T1AF->name;struct _fat_ptr*_T2B4;{struct _tuple1 _T2B5=*_T2B3;_T2B4= _T2B5.f1;}{struct _fat_ptr*v=_T2B4;
name= v;goto _LL3E;}}}case 4: goto _LL4C;case 13: _LL4C: goto _LL4E;case 14: _LL4E: goto _LL50;case 15: _LL50: goto _LL52;case 16: _LL52: goto _LL54;case 2: _LL54: goto _LL56;case 6: _LL56: goto _LL58;case 3: _LL58: goto _LL5A;case 9: _LL5A: goto _LL5C;case 10: _LL5C: goto _LL5E;case 11: _LL5E: goto _LL60;default: _LL60:
# 1700
 name= 0;goto _LL3E;}_LL3E:;}_T1B0= name;_T1B1= (unsigned)_T1B0;
# 1703
if(_T1B1)goto _TL18D;else{goto _TL18F;}_TL18F: _T1B2= anon_enum;if(_T1B2)goto _TL18D;else{goto _TL190;}
_TL190: goto _TL186;_TL18D: _T1B4= Cyc_Set_member;{
# 1709
long(*_T2AD)(struct Cyc_Set_Set*,struct _fat_ptr*)=(long(*)(struct Cyc_Set_Set*,struct _fat_ptr*))_T1B4;_T1B3= _T2AD;}_T1B5= reachable_set;_T1B6= Cyc_add_user_prefix(name);_T1B7= _T1B3(_T1B5,_T1B6);if(!_T1B7)goto _TL191;{
struct Cyc_Absyn_Decl*user_decl=Cyc_Absyn_lookup_decl(user_decls,name);
if(user_decl!=0)goto _TL193;{struct Cyc_Core_Impossible_exn_struct*_T2AD=_cycalloc(sizeof(struct Cyc_Core_Impossible_exn_struct));_T2AD->tag= Cyc_Core_Impossible;
({__typeof__(_tag_fat("Internal Error: bad user-def name",sizeof(char),34U))_T2AE=_tag_fat("Internal Error: bad user-def name",sizeof(char),34U);_T2AD->f1= _T2AE;});_T1B8= (struct Cyc_Core_Impossible_exn_struct*)_T2AD;}_T1B9= (void*)_T1B8;_rethrow(_T1B9);goto _TL194;
# 1714
_TL193: _T1BA= user_decl;{void*_T2AD=_T1BA->r;_T1BB= (int*)_T2AD;_T1BC= *_T1BB;switch(_T1BC){case 0: goto _LL74;case 1: _LL74:{struct Cyc_NO_SUPPORT_exn_struct*_T2AE=_cycalloc(sizeof(struct Cyc_NO_SUPPORT_exn_struct));_T2AE->tag= Cyc_NO_SUPPORT;
# 1717
({__typeof__(_tag_fat("user defintions for function or variable decls",sizeof(char),47U))_T2AF=_tag_fat("user defintions for function or variable decls",sizeof(char),47U);_T2AE->f1= _T2AF;});_T1BD= (struct Cyc_NO_SUPPORT_exn_struct*)_T2AE;}_T1BE= (void*)_T1BD;_rethrow(_T1BE);default: goto _LL70;}_LL70:;}_TL194:{struct Cyc_List_List*_T2AD=_cycalloc(sizeof(struct Cyc_List_List));
# 1724
_T2AD->hd= decl;_T2AD->tl= print_decls;_T1BF= (struct Cyc_List_List*)_T2AD;}print_decls= _T1BF;}goto _TL192;
# 1726
_TL191:{struct Cyc_List_List*_T2AD=_cycalloc(sizeof(struct Cyc_List_List));_T2AD->hd= decl;_T2AD->tl= print_decls;_T1C0= (struct Cyc_List_List*)_T2AD;}print_decls= _T1C0;_TL192:{struct Cyc_List_List*_T2AD=_cycalloc(sizeof(struct Cyc_List_List));
_T2AD->hd= name;_T2AD->tl= names;_T1C1= (struct Cyc_List_List*)_T2AD;}names= _T1C1;}_TL186: _T1C2= d;
# 1659
d= _T1C2->tl;goto _TL189;_TL188:;}{struct _handler_cons _T2AD;_T1C3= & _T2AD;_push_handler(_T1C3);{int _T2AE=0;_T1C4= setjmp(_T2AD.handler);if(!_T1C4)goto _TL196;_T2AE= 1;goto _TL197;_TL196: _TL197: if(_T2AE)goto _TL198;else{goto _TL19A;}_TL19A:
# 1732
 Cyc_Binding_resolve_all(print_decls);{
struct Cyc_Tc_TcContext*ctx=Cyc_Tc_tc_init();_T1C5= ctx;_T1C6= 
Cyc_Tcenv_tc_init();_T1C7= print_decls;Cyc_Tc_tc(_T1C5,_T1C6,1,_T1C7);}_pop_handler();goto _TL199;_TL198: _T1C8= Cyc_Core_get_exn_thrown();{void*_T2AF=(void*)_T1C8;{struct Cyc_NO_SUPPORT_exn_struct*_T2B0=_cycalloc(sizeof(struct Cyc_NO_SUPPORT_exn_struct));_T2B0->tag= Cyc_NO_SUPPORT;
# 1737
({__typeof__(_tag_fat("can't typecheck acquired declarations",sizeof(char),38U))_T2B1=_tag_fat("can't typecheck acquired declarations",sizeof(char),38U);_T2B0->f1= _T2B1;});_T1C9= (struct Cyc_NO_SUPPORT_exn_struct*)_T2B0;}_T1CA= (void*)_T1C9;_rethrow(_T1CA);;}_TL199:;}}{struct _tuple0 _T2AD;
# 1741
_T2AD.f0= print_decls;_T2AD.f1= names;_T1CB= _T2AD;}{struct _tuple0 _T2AD=_T1CB;struct Cyc_List_List*_T2AE;struct Cyc_List_List*_T2AF;_T2AF= _T2AD.f0;_T2AE= _T2AD.f1;{struct Cyc_List_List*d=_T2AF;struct Cyc_List_List*n=_T2AE;_TL19E: if(d!=0)goto _TL19F;else{goto _TL19D;}_TL19F: if(n!=0)goto _TL19C;else{goto _TL19D;}
_TL19C: _T1CC= d;_T1CD= _T1CC->hd;{struct Cyc_Absyn_Decl*decl=(struct Cyc_Absyn_Decl*)_T1CD;_T1CE= n;_T1CF= _T1CE->hd;{
struct _fat_ptr*name=(struct _fat_ptr*)_T1CF;
long anon_enum=0;_T1D0= name;_T1D1= (unsigned)_T1D0;
if(_T1D1)goto _TL1A0;else{goto _TL1A2;}
_TL1A2: anon_enum= 1;goto _TL1A1;_TL1A0: _TL1A1: _T1D2= & Cyc_Absynpp_cyc_params_r;_T1D3= (struct Cyc_Absynpp_Params*)_T1D2;
# 1749
Cyc_Absynpp_set_params(_T1D3);_T1D4= name;_T1D5= (unsigned)_T1D4;
if(!_T1D5)goto _TL1A3;{
enum Cyc_name_kind kind;_T1D6= decl;{
void*_T2B0=_T1D6->r;_T1D7= (int*)_T2B0;_T1D8= *_T1D7;switch(_T1D8){case 5: goto _LL81;case 6: _LL81: goto _LL83;case 7: _LL83:
# 1756
 kind= 0U;goto _LL7D;default:
# 1759
 kind= 1U;goto _LL7D;}_LL7D:;}{struct Cyc_String_pa_PrintArg_struct _T2B0;_T2B0.tag= 0;_T1DB= name;
# 1763
_T2B0.f1= *_T1DB;_T1DA= _T2B0;}{struct Cyc_String_pa_PrintArg_struct _T2B0=_T1DA;{struct Cyc_String_pa_PrintArg_struct _T2B1;_T2B1.tag= 0;({__typeof__(Cyc_nk2str(kind))_T2B2=Cyc_nk2str(kind);_T2B1.f1= _T2B2;});_T1DC= _T2B1;}{struct Cyc_String_pa_PrintArg_struct _T2B1=_T1DC;void*_T2B2[2];_T2B2[0]= & _T2B0;_T2B2[1]= & _T2B1;_T1DD= _tag_fat("_%s_%sdef_",sizeof(char),11U);_T1DE= _tag_fat(_T2B2,sizeof(void*),2);_T1D9= Cyc_aprintf(_T1DD,_T1DE);}}ifdefmacro= _T1D9;{struct Cyc_String_pa_PrintArg_struct _T2B0;_T2B0.tag= 0;
_T2B0.f1= ifdefmacro;_T1DF= _T2B0;}{struct Cyc_String_pa_PrintArg_struct _T2B0=_T1DF;void*_T2B1[1];_T2B1[0]= & _T2B0;_T1E0= out_file;_T1E1= _tag_fat("#ifndef %s\n",sizeof(char),12U);_T1E2= _tag_fat(_T2B1,sizeof(void*),1);Cyc_fprintf(_T1E0,_T1E1,_T1E2);}{struct Cyc_String_pa_PrintArg_struct _T2B0;_T2B0.tag= 0;
_T2B0.f1= ifdefmacro;_T1E3= _T2B0;}{struct Cyc_String_pa_PrintArg_struct _T2B0=_T1E3;void*_T2B1[1];_T2B1[0]= & _T2B0;_T1E4= out_file;_T1E5= _tag_fat("#define %s\n",sizeof(char),12U);_T1E6= _tag_fat(_T2B1,sizeof(void*),1);Cyc_fprintf(_T1E4,_T1E5,_T1E6);}{struct Cyc_Absyn_Decl*_T2B0[1];_T2B0[0]= decl;_T1E8= _tag_fat(_T2B0,sizeof(struct Cyc_Absyn_Decl*),1);_T1E7= Cyc_List_list(_T1E8);}_T1E9= out_file;
# 1767
Cyc_Absynpp_decllist2file(_T1E7,_T1E9);_T1EA= out_file;_T1EB= 
_tag_fat("#endif\n",sizeof(char),8U);_T1EC= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T1EA,_T1EB,_T1EC);}goto _TL1A4;
# 1771
_TL1A3:{struct Cyc_Absyn_Decl*_T2B0[1];_T2B0[0]= decl;_T1EE= _tag_fat(_T2B0,sizeof(struct Cyc_Absyn_Decl*),1);_T1ED= Cyc_List_list(_T1EE);}_T1EF= out_file;Cyc_Absynpp_decllist2file(_T1ED,_T1EF);_TL1A4:;}}_T1F0= d;
# 1741
d= _T1F0->tl;_T1F1= n;n= _T1F1->tl;goto _TL19E;_TL19D:;}}
# 1776
maybe= Cyc_fopen(macrosfile,"r");_T1F2= maybe;_T1F3= (unsigned)_T1F2;
if(_T1F3)goto _TL1A6;else{goto _TL1A8;}
_TL1A8:{struct Cyc_NO_SUPPORT_exn_struct*_T2AD=_cycalloc(sizeof(struct Cyc_NO_SUPPORT_exn_struct));_T2AD->tag= Cyc_NO_SUPPORT;{struct Cyc_String_pa_PrintArg_struct _T2AE;_T2AE.tag= 0;{const char*_T2AF=macrosfile;_T1F8= (void*)_T2AF;_T1F9= (void*)_T2AF;_T1FA= _get_zero_arr_size_char(_T1F9,1U);_T1F7= _tag_fat(_T1F8,sizeof(char),_T1FA);}_T2AE.f1= _T1F7;_T1F6= _T2AE;}{struct Cyc_String_pa_PrintArg_struct _T2AE=_T1F6;void*_T2AF[1];_T2AF[0]= & _T2AE;_T1FB= _tag_fat("can't open macrosfile %s",sizeof(char),25U);_T1FC= _tag_fat(_T2AF,sizeof(void*),1);_T1F5= Cyc_aprintf(_T1FB,_T1FC);}_T2AD->f1= _T1F5;_T1F4= (struct Cyc_NO_SUPPORT_exn_struct*)_T2AD;}_T1FD= (void*)_T1F4;_rethrow(_T1FD);goto _TL1A7;_TL1A6: _TL1A7:
 in_file= maybe;
l= Cyc_Lexing_from_file(in_file);{
struct _tuple16*entry2;
_TL1A9: entry2= Cyc_suck_line(l);_T1FE= entry2;if(_T1FE!=0)goto _TL1AA;else{goto _TL1AB;}
_TL1AA:{struct _tuple16*_T2AD=entry2;struct _fat_ptr*_T2AE;struct _fat_ptr _T2AF;{struct _tuple16 _T2B0=*_T2AD;_T2AF= _T2B0.f0;_T2AE= _T2B0.f1;}{struct _fat_ptr line=_T2AF;struct _fat_ptr*name=_T2AE;_T200= Cyc_Set_member;{
long(*_T2B0)(struct Cyc_Set_Set*,struct _fat_ptr*)=(long(*)(struct Cyc_Set_Set*,struct _fat_ptr*))_T200;_T1FF= _T2B0;}_T201= _T1FF(reachable_set,name);if(!_T201)goto _TL1AC;{struct Cyc_String_pa_PrintArg_struct _T2B0;_T2B0.tag= 0;_T203= name;
_T2B0.f1= *_T203;_T202= _T2B0;}{struct Cyc_String_pa_PrintArg_struct _T2B0=_T202;void*_T2B1[1];_T2B1[0]= & _T2B0;_T204= out_file;_T205= _tag_fat("#ifndef %s\n",sizeof(char),12U);_T206= _tag_fat(_T2B1,sizeof(void*),1);Cyc_fprintf(_T204,_T205,_T206);}{struct Cyc_String_pa_PrintArg_struct _T2B0;_T2B0.tag= 0;
_T2B0.f1= line;_T207= _T2B0;}{struct Cyc_String_pa_PrintArg_struct _T2B0=_T207;void*_T2B1[1];_T2B1[0]= & _T2B0;_T208= out_file;_T209= _tag_fat("%s\n",sizeof(char),4U);_T20A= _tag_fat(_T2B1,sizeof(void*),1);Cyc_fprintf(_T208,_T209,_T20A);}_T20B= out_file;_T20C= 
_tag_fat("#endif\n",sizeof(char),8U);_T20D= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T20B,_T20C,_T20D);goto _TL1AD;_TL1AC: _TL1AD:;}}goto _TL1A9;_TL1AB:
# 1790
 Cyc_fclose(in_file);
# 1792
if(hstubs==0)goto _TL1AE;{
struct Cyc_List_List*x=hstubs;_TL1B3: if(x!=0)goto _TL1B1;else{goto _TL1B2;}
_TL1B1: _T20E= x;_T20F= _T20E->hd;{struct _tuple17*_T2AD=(struct _tuple17*)_T20F;struct _fat_ptr _T2AE;struct _fat_ptr _T2AF;{struct _tuple17 _T2B0=*_T2AD;_T2AF= _T2B0.f0;_T2AE= _T2B0.f1;}{struct _fat_ptr symbol=_T2AF;struct _fat_ptr text=_T2AE;_T210= text;_T211= _T210.curr;_T212= (char*)_T211;
if(_T212==0)goto _TL1B4;_T213= symbol;_T214= _T213.curr;_T215= (char*)_T214;
if(_T215!=0)goto _TL1B6;_T216= text;_T217= _untag_fat_ptr_check_bound(_T216,sizeof(char),1U);_T218= (const char*)_T217;_T219= out_file;
# 1798
Cyc_fputs(_T218,_T219);goto _TL1B7;
_TL1B6: _T21B= Cyc_Set_member;{long(*_T2B0)(struct Cyc_Set_Set*,struct _fat_ptr*)=(long(*)(struct Cyc_Set_Set*,struct _fat_ptr*))_T21B;_T21A= _T2B0;}_T21C= defined_symbols;{struct _fat_ptr*_T2B0=_cycalloc(sizeof(struct _fat_ptr));*_T2B0= symbol;_T21D= (struct _fat_ptr*)_T2B0;}_T21E= _T21A(_T21C,_T21D);if(!_T21E)goto _TL1B8;_T21F= text;_T220= _untag_fat_ptr_check_bound(_T21F,sizeof(char),1U);_T221= (const char*)_T220;_T222= out_file;
Cyc_fputs(_T221,_T222);goto _TL1B9;
# 1802
_TL1B8:{struct Cyc_String_pa_PrintArg_struct _T2B0;_T2B0.tag= 0;_T2B0.f1= symbol;_T223= _T2B0;}{struct Cyc_String_pa_PrintArg_struct _T2B0=_T223;void*_T2B1[1];_T2B1[0]= & _T2B0;_T224= _tag_fat("%s is not supported on this platform\n",sizeof(char),38U);_T225= _tag_fat(_T2B1,sizeof(void*),1);Cyc_log(_T224,_T225);}{
struct Cyc_Set_Set*x=defined_symbols;_TL1BD: _T226= Cyc_Set_is_empty(x);if(_T226)goto _TL1BC;else{goto _TL1BB;}
_TL1BB: _T228= Cyc_Set_choose;{struct _fat_ptr*(*_T2B0)(struct Cyc_Set_Set*)=(struct _fat_ptr*(*)(struct Cyc_Set_Set*))_T228;_T227= _T2B0;}{struct _fat_ptr*y=_T227(x);_T22A= Cyc_Set_delete;{
struct Cyc_Set_Set*(*_T2B0)(struct Cyc_Set_Set*,struct _fat_ptr*)=(struct Cyc_Set_Set*(*)(struct Cyc_Set_Set*,struct _fat_ptr*))_T22A;_T229= _T2B0;}x= _T229(x,y);{struct Cyc_String_pa_PrintArg_struct _T2B0;_T2B0.tag= 0;_T22C= y;
_T2B0.f1= *_T22C;_T22B= _T2B0;}{struct Cyc_String_pa_PrintArg_struct _T2B0=_T22B;void*_T2B1[1];_T2B1[0]= & _T2B0;_T22D= _tag_fat("+%s",sizeof(char),4U);_T22E= _tag_fat(_T2B1,sizeof(void*),1);Cyc_log(_T22D,_T22E);}_T22F= 
_tag_fat("\n",sizeof(char),2U);_T230= _tag_fat(0U,sizeof(void*),0);Cyc_log(_T22F,_T230);}goto _TL1BD;_TL1BC:;}_TL1B9: _TL1B7: goto _TL1B5;
# 1812
_TL1B4:{struct Cyc_String_pa_PrintArg_struct _T2B0;_T2B0.tag= 0;_T2B0.f1= symbol;_T231= _T2B0;}{struct Cyc_String_pa_PrintArg_struct _T2B0=_T231;void*_T2B1[1];_T2B1[0]= & _T2B0;_T232= _tag_fat("Null text for %s, will not be supported on this platform\n",sizeof(char),58U);_T233= _tag_fat(_T2B1,sizeof(void*),1);Cyc_log(_T232,_T233);}_TL1B5:;}}_T234= x;
# 1793
x= _T234->tl;goto _TL1B3;_TL1B2:;}goto _TL1AF;_TL1AE: _TL1AF: _T235= out_file;_T236= 
# 1815
_tag_fat("#endif\n",sizeof(char),8U);_T237= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T235,_T236,_T237);_T238= Cyc_do_setjmp;
if(_T238)goto _TL1BE;else{goto _TL1C0;}
_TL1C0: _T239= out_file;_T23A= _tag_fat("}\n",sizeof(char),3U);_T23B= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T239,_T23A,_T23B);goto _TL1BF;_TL1BE: _TL1BF: _T23C= Cyc_do_setjmp;
if(!_T23C)goto _TL1C1;{int _T2AD=0;_npop_handler(0);return _T2AD;}
# 1821
_TL1C1: Cyc_fclose(out_file);
# 1824
if(cstubs==0)goto _TL1C3;
out_file= _check_null(Cyc_cstubs_file);{
struct Cyc_List_List*x=cstubs;_TL1C8: if(x!=0)goto _TL1C6;else{goto _TL1C7;}
_TL1C6: _T23D= x;_T23E= _T23D->hd;{struct _tuple17*_T2AD=(struct _tuple17*)_T23E;struct _fat_ptr _T2AE;struct _fat_ptr _T2AF;{struct _tuple17 _T2B0=*_T2AD;_T2AF= _T2B0.f0;_T2AE= _T2B0.f1;}{struct _fat_ptr symbol=_T2AF;struct _fat_ptr text=_T2AE;_T23F= text;_T240= _T23F.curr;_T241= (char*)_T240;
if(_T241==0)goto _TL1C9;_T242= symbol;_T243= _T242.curr;_T244= (char*)_T243;if(_T244==0)goto _TL1CB;else{goto _TL1CC;}_TL1CC: _T246= Cyc_Set_member;{long(*_T2B0)(struct Cyc_Set_Set*,struct _fat_ptr*)=(long(*)(struct Cyc_Set_Set*,struct _fat_ptr*))_T246;_T245= _T2B0;}_T247= defined_symbols;{struct _fat_ptr*_T2B0=_cycalloc(sizeof(struct _fat_ptr));*_T2B0= symbol;_T248= (struct _fat_ptr*)_T2B0;}_T249= _T245(_T247,_T248);if(_T249)goto _TL1CB;else{goto _TL1C9;}
_TL1CB: _T24A= text;_T24B= _untag_fat_ptr_check_bound(_T24A,sizeof(char),1U);_T24C= (const char*)_T24B;_T24D= out_file;Cyc_fputs(_T24C,_T24D);goto _TL1CA;_TL1C9: _TL1CA:;}}_T24E= x;
# 1826
x= _T24E->tl;goto _TL1C8;_TL1C7:;}goto _TL1C4;_TL1C3: _TL1C4:
# 1834
 out_file= _check_null(Cyc_cycstubs_file);
if(cycstubs==0)goto _TL1CD;{struct Cyc_String_pa_PrintArg_struct _T2AD;_T2AD.tag= 0;{const char*_T2AE=filename;_T251= (void*)_T2AE;_T252= (void*)_T2AE;_T253= _get_zero_arr_size_char(_T252,1U);_T250= _tag_fat(_T251,sizeof(char),_T253);}
# 1839
_T2AD.f1= _T250;_T24F= _T2AD;}{struct Cyc_String_pa_PrintArg_struct _T2AD=_T24F;void*_T2AE[1];_T2AE[0]= & _T2AD;_T254= out_file;_T255= _tag_fat("#include \"%s\"\n\n",sizeof(char),16U);_T256= _tag_fat(_T2AE,sizeof(void*),1);Cyc_fprintf(_T254,_T255,_T256);}
out_file= _check_null(Cyc_cycstubs_file);{
struct Cyc_List_List*x=cycstubs;_TL1D2: if(x!=0)goto _TL1D0;else{goto _TL1D1;}
_TL1D0: _T257= x;_T258= _T257->hd;{struct _tuple17*_T2AD=(struct _tuple17*)_T258;struct _fat_ptr _T2AE;struct _fat_ptr _T2AF;{struct _tuple17 _T2B0=*_T2AD;_T2AF= _T2B0.f0;_T2AE= _T2B0.f1;}{struct _fat_ptr symbol=_T2AF;struct _fat_ptr text=_T2AE;_T259= text;_T25A= _T259.curr;_T25B= (char*)_T25A;
if(_T25B==0)goto _TL1D3;_T25C= symbol;_T25D= _T25C.curr;_T25E= (char*)_T25D;if(_T25E==0)goto _TL1D5;else{goto _TL1D6;}_TL1D6: _T260= Cyc_Set_member;{long(*_T2B0)(struct Cyc_Set_Set*,struct _fat_ptr*)=(long(*)(struct Cyc_Set_Set*,struct _fat_ptr*))_T260;_T25F= _T2B0;}_T261= defined_symbols;{struct _fat_ptr*_T2B0=_cycalloc(sizeof(struct _fat_ptr));*_T2B0= symbol;_T262= (struct _fat_ptr*)_T2B0;}_T263= _T25F(_T261,_T262);if(_T263)goto _TL1D5;else{goto _TL1D3;}
_TL1D5: _T264= text;_T265= _untag_fat_ptr_check_bound(_T264,sizeof(char),1U);_T266= (const char*)_T265;_T267= out_file;Cyc_fputs(_T266,_T267);goto _TL1D4;_TL1D3: _TL1D4:;}}_T268= x;
# 1841
x= _T268->tl;goto _TL1D2;_TL1D1:;}_T269= out_file;_T26A= 
# 1846
_tag_fat("\n",sizeof(char),2U);_T26B= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T269,_T26A,_T26B);goto _TL1CE;_TL1CD: _TL1CE: {int _T2AD=0;_npop_handler(0);return _T2AD;}}}}}}}}}}}}}_pop_handler();goto _TL118;_TL117: _T26C= Cyc_Core_get_exn_thrown();{void*_T2AD=(void*)_T26C;void*_T2AE;struct _fat_ptr _T2AF;_T26D= (struct Cyc_Core_Impossible_exn_struct*)_T2AD;_T26E= _T26D->tag;_T26F= Cyc_Core_Impossible;if(_T26E!=_T26F)goto _TL1D7;{struct Cyc_Core_Impossible_exn_struct*_T2B0=(struct Cyc_Core_Impossible_exn_struct*)_T2AD;_T2AF= _T2B0->f1;}{struct _fat_ptr s=_T2AF;{struct Cyc_String_pa_PrintArg_struct _T2B0;_T2B0.tag= 0;
# 1853
_T2B0.f1= s;_T270= _T2B0;}{struct Cyc_String_pa_PrintArg_struct _T2B0=_T270;void*_T2B1[1];_T2B1[0]= & _T2B0;_T271= _tag_fat("Got Core::Impossible(%s)\n",sizeof(char),26U);_T272= _tag_fat(_T2B1,sizeof(void*),1);Cyc_log(_T271,_T272);}goto _LL92;}_TL1D7: _T273= (struct Cyc_Dict_Absent_exn_struct*)_T2AD;_T274= _T273->tag;_T275= Cyc_Dict_Absent;if(_T274!=_T275)goto _TL1D9;_T276= 
# 1856
_tag_fat("Got Dict::Absent\n",sizeof(char),18U);_T277= _tag_fat(0U,sizeof(void*),0);Cyc_log(_T276,_T277);goto _LL92;_TL1D9: _T278= (struct Cyc_Core_Failure_exn_struct*)_T2AD;_T279= _T278->tag;_T27A= Cyc_Core_Failure;if(_T279!=_T27A)goto _TL1DB;{struct Cyc_Core_Failure_exn_struct*_T2B0=(struct Cyc_Core_Failure_exn_struct*)_T2AD;_T2AF= _T2B0->f1;}{struct _fat_ptr s=_T2AF;{struct Cyc_String_pa_PrintArg_struct _T2B0;_T2B0.tag= 0;
# 1859
_T2B0.f1= s;_T27B= _T2B0;}{struct Cyc_String_pa_PrintArg_struct _T2B0=_T27B;void*_T2B1[1];_T2B1[0]= & _T2B0;_T27C= _tag_fat("Got Core::Failure(%s)\n",sizeof(char),23U);_T27D= _tag_fat(_T2B1,sizeof(void*),1);Cyc_log(_T27C,_T27D);}goto _LL92;}_TL1DB: _T27E= (struct Cyc_Core_Invalid_argument_exn_struct*)_T2AD;_T27F= _T27E->tag;_T280= Cyc_Core_Invalid_argument;if(_T27F!=_T280)goto _TL1DD;{struct Cyc_Core_Invalid_argument_exn_struct*_T2B0=(struct Cyc_Core_Invalid_argument_exn_struct*)_T2AD;_T2AF= _T2B0->f1;}{struct _fat_ptr s=_T2AF;{struct Cyc_String_pa_PrintArg_struct _T2B0;_T2B0.tag= 0;
# 1862
_T2B0.f1= s;_T281= _T2B0;}{struct Cyc_String_pa_PrintArg_struct _T2B0=_T281;void*_T2B1[1];_T2B1[0]= & _T2B0;_T282= _tag_fat("Got Invalid_argument(%s)\n",sizeof(char),26U);_T283= _tag_fat(_T2B1,sizeof(void*),1);Cyc_log(_T282,_T283);}goto _LL92;}_TL1DD: _T284= (struct Cyc_Core_Not_found_exn_struct*)_T2AD;_T285= _T284->tag;_T286= Cyc_Core_Not_found;if(_T285!=_T286)goto _TL1DF;_T287= 
# 1865
_tag_fat("Got Not_found\n",sizeof(char),15U);_T288= _tag_fat(0U,sizeof(void*),0);Cyc_log(_T287,_T288);goto _LL92;_TL1DF: _T289= (struct Cyc_NO_SUPPORT_exn_struct*)_T2AD;_T28A= _T289->tag;_T28B= Cyc_NO_SUPPORT;if(_T28A!=_T28B)goto _TL1E1;{struct Cyc_NO_SUPPORT_exn_struct*_T2B0=(struct Cyc_NO_SUPPORT_exn_struct*)_T2AD;_T2AF= _T2B0->f1;}{struct _fat_ptr s=_T2AF;{struct Cyc_String_pa_PrintArg_struct _T2B0;_T2B0.tag= 0;
# 1868
_T2B0.f1= s;_T28C= _T2B0;}{struct Cyc_String_pa_PrintArg_struct _T2B0=_T28C;void*_T2B1[1];_T2B1[0]= & _T2B0;_T28D= _tag_fat("No support because %s\n",sizeof(char),23U);_T28E= _tag_fat(_T2B1,sizeof(void*),1);Cyc_log(_T28D,_T28E);}goto _LL92;}_TL1E1: _T28F= (struct Cyc_Lexing_Error_exn_struct*)_T2AD;_T290= _T28F->tag;_T291= Cyc_Lexing_Error;if(_T290!=_T291)goto _TL1E3;{struct Cyc_Lexing_Error_exn_struct*_T2B0=(struct Cyc_Lexing_Error_exn_struct*)_T2AD;_T2AF= _T2B0->f1;}{struct _fat_ptr s=_T2AF;{struct Cyc_String_pa_PrintArg_struct _T2B0;_T2B0.tag= 0;
# 1871
_T2B0.f1= s;_T292= _T2B0;}{struct Cyc_String_pa_PrintArg_struct _T2B0=_T292;void*_T2B1[1];_T2B1[0]= & _T2B0;_T293= _tag_fat("Got a lexing error %s\n",sizeof(char),23U);_T294= _tag_fat(_T2B1,sizeof(void*),1);Cyc_log(_T293,_T294);}goto _LL92;}_TL1E3: _T2AE= _T2AD;{void*x=_T2AE;_T295= 
# 1874
_tag_fat("Got unknown exception\n",sizeof(char),23U);_T296= _tag_fat(0U,sizeof(void*),0);Cyc_log(_T295,_T296);
Cyc_Core_rethrow(x);}_LL92:;}_TL118:;}}_T297= full_filename;_T298= _untag_fat_ptr_check_bound(_T297,sizeof(char),1U);_T299= _check_null(_T298);_T29A= (const char*)_T299;
# 1880
maybe= Cyc_fopen(_T29A,"w");_T29B= maybe;_T29C= (unsigned)_T29B;
if(_T29C)goto _TL1E5;else{goto _TL1E7;}
_TL1E7:{struct Cyc_String_pa_PrintArg_struct _T2AB;_T2AB.tag= 0;_T2AB.f1= full_filename;_T29D= _T2AB;}{struct Cyc_String_pa_PrintArg_struct _T2AB=_T29D;void*_T2AC[1];_T2AC[0]= & _T2AB;_T29E= Cyc_stderr;_T29F= _tag_fat("Error: could not create file %s\n",sizeof(char),33U);_T2A0= _tag_fat(_T2AC,sizeof(void*),1);Cyc_fprintf(_T29E,_T29F,_T2A0);}
return 1;_TL1E5:
# 1885
 out_file= maybe;{struct Cyc_String_pa_PrintArg_struct _T2AB;_T2AB.tag= 0;{const char*_T2AC=filename;_T2A3= (void*)_T2AC;_T2A4= (void*)_T2AC;_T2A5= _get_zero_arr_size_char(_T2A4,1U);_T2A2= _tag_fat(_T2A3,sizeof(char),_T2A5);}
_T2AB.f1= _T2A2;_T2A1= _T2AB;}{struct Cyc_String_pa_PrintArg_struct _T2AB=_T2A1;void*_T2AC[1];_T2AC[0]= & _T2AB;_T2A6= out_file;_T2A7= _tag_fat("#error -- %s is not supported on this platform\n",sizeof(char),48U);_T2A8= _tag_fat(_T2AC,sizeof(void*),1);Cyc_fprintf(_T2A6,_T2A7,_T2A8);}
Cyc_fclose(out_file);_T2A9= 
# 1890
_tag_fat("Not supported on this platform\n",sizeof(char),32U);_T2AA= _tag_fat(0U,sizeof(void*),0);Cyc_log(_T2A9,_T2AA);
# 1897
return 1;}}}}}}}}}
# 1901
int Cyc_process_specfile(const char*file,const char*dir){long _T0;struct Cyc_String_pa_PrintArg_struct _T1;struct _fat_ptr _T2;void*_T3;void*_T4;unsigned _T5;struct Cyc___cycFILE*_T6;struct _fat_ptr _T7;struct _fat_ptr _T8;struct Cyc___cycFILE*_T9;unsigned _TA;struct Cyc_String_pa_PrintArg_struct _TB;struct _fat_ptr _TC;void*_TD;void*_TE;unsigned _TF;struct Cyc___cycFILE*_T10;struct _fat_ptr _T11;struct _fat_ptr _T12;struct _tuple19*_T13;const char*_T14;struct _fat_ptr _T15;unsigned char*_T16;unsigned char*_T17;const char*_T18;struct Cyc_List_List*_T19;struct Cyc_List_List*_T1A;struct Cyc_List_List*_T1B;struct Cyc_List_List*_T1C;struct Cyc_List_List*_T1D;struct Cyc_List_List*_T1E;struct Cyc_List_List*_T1F;int _T20;struct Cyc_String_pa_PrintArg_struct _T21;struct Cyc___cycFILE*_T22;struct _fat_ptr _T23;struct _fat_ptr _T24;_T0= Cyc_verbose;
if(!_T0)goto _TL1E8;{struct Cyc_String_pa_PrintArg_struct _T25;_T25.tag= 0;{const char*_T26=file;_T3= (void*)_T26;_T4= (void*)_T26;_T5= _get_zero_arr_size_char(_T4,1U);_T2= _tag_fat(_T3,sizeof(char),_T5);}
_T25.f1= _T2;_T1= _T25;}{struct Cyc_String_pa_PrintArg_struct _T25=_T1;void*_T26[1];_T26[0]= & _T25;_T6= Cyc_stderr;_T7= _tag_fat("Processing %s\n",sizeof(char),15U);_T8= _tag_fat(_T26,sizeof(void*),1);Cyc_fprintf(_T6,_T7,_T8);}goto _TL1E9;_TL1E8: _TL1E9: {
struct Cyc___cycFILE*maybe=Cyc_fopen(file,"r");_T9= maybe;_TA= (unsigned)_T9;
if(_TA)goto _TL1EA;else{goto _TL1EC;}
_TL1EC:{struct Cyc_String_pa_PrintArg_struct _T25;_T25.tag= 0;{const char*_T26=file;_TD= (void*)_T26;_TE= (void*)_T26;_TF= _get_zero_arr_size_char(_TE,1U);_TC= _tag_fat(_TD,sizeof(char),_TF);}_T25.f1= _TC;_TB= _T25;}{struct Cyc_String_pa_PrintArg_struct _T25=_TB;void*_T26[1];_T26[0]= & _T25;_T10= Cyc_stderr;_T11= _tag_fat("Error: could not open %s\n",sizeof(char),26U);_T12= _tag_fat(_T26,sizeof(void*),1);Cyc_fprintf(_T10,_T11,_T12);}
return 1;_TL1EA: {
# 1909
struct Cyc___cycFILE*in_file=maybe;
# 1911
struct Cyc_Lexing_lexbuf*l=Cyc_Lexing_from_file(in_file);
struct _tuple19*entry;
_TL1ED: entry= Cyc_spec(l);_T13= entry;if(_T13!=0)goto _TL1EE;else{goto _TL1EF;}
_TL1EE:{struct _tuple19*_T25=entry;struct Cyc_List_List*_T26;struct Cyc_List_List*_T27;struct Cyc_List_List*_T28;struct Cyc_List_List*_T29;struct Cyc_List_List*_T2A;struct Cyc_List_List*_T2B;struct Cyc_List_List*_T2C;struct _fat_ptr _T2D;{struct _tuple19 _T2E=*_T25;_T2D= _T2E.f0;_T2C= _T2E.f1;_T2B= _T2E.f2;_T2A= _T2E.f3;_T29= _T2E.f4;_T28= _T2E.f5;_T27= _T2E.f6;_T26= _T2E.f7;}{struct _fat_ptr headerfile=_T2D;struct Cyc_List_List*start_symbols=_T2C;struct Cyc_List_List*user_defs=_T2B;struct Cyc_List_List*omit_symbols=_T2A;struct Cyc_List_List*hstubs=_T29;struct Cyc_List_List*cstubs=_T28;struct Cyc_List_List*cycstubs=_T27;struct Cyc_List_List*cpp_insert=_T26;_T14= dir;_T15= headerfile;_T16= _untag_fat_ptr_check_bound(_T15,sizeof(char),1U);_T17= _check_null(_T16);_T18= (const char*)_T17;_T19= start_symbols;_T1A= user_defs;_T1B= omit_symbols;_T1C= hstubs;_T1D= cstubs;_T1E= cycstubs;_T1F= cpp_insert;_T20= 
# 1916
Cyc_process_file(_T14,_T18,_T19,_T1A,_T1B,_T1C,_T1D,_T1E,_T1F);if(!_T20)goto _TL1F0;{struct Cyc_String_pa_PrintArg_struct _T2E;_T2E.tag= 0;
# 1918
_T2E.f1= headerfile;_T21= _T2E;}{struct Cyc_String_pa_PrintArg_struct _T2E=_T21;void*_T2F[1];_T2F[0]= & _T2E;_T22= Cyc_stderr;_T23= _tag_fat("process_file failed for %s\n",sizeof(char),28U);_T24= _tag_fat(_T2F,sizeof(void*),1);Cyc_fprintf(_T22,_T23,_T24);}
return 1;_TL1F0:;}}goto _TL1ED;_TL1EF:
# 1922
 Cyc_fclose(in_file);
# 1924
return 0;}}}
# 1928
int Cyc_process_setjmp(const char*dir){const char*_T0;struct Cyc_List_List*_T1;struct _fat_ptr*_T2;struct _fat_ptr _T3;struct Cyc_List_List*_T4;struct _tuple17*_T5;struct _fat_ptr _T6;int _T7;_T0= dir;{struct _fat_ptr*_T8[1];{struct _fat_ptr*_T9=_cycalloc(sizeof(struct _fat_ptr));
({__typeof__(_tag_fat("jmp_buf",sizeof(char),8U))_TA=_tag_fat("jmp_buf",sizeof(char),8U);*_T9= _TA;});_T2= (struct _fat_ptr*)_T9;}_T8[0]= _T2;_T3= _tag_fat(_T8,sizeof(struct _fat_ptr*),1);_T1= Cyc_List_list(_T3);}{struct _tuple17*_T8[1];{struct _tuple17*_T9=_cycalloc(sizeof(struct _tuple17));
({__typeof__(_tag_fat("setjmp",sizeof(char),7U))_TA=_tag_fat("setjmp",sizeof(char),7U);_T9->f0= _TA;});({__typeof__(_tag_fat("extern int setjmp(jmp_buf);\n",sizeof(char),29U))_TA=_tag_fat("extern int setjmp(jmp_buf);\n",sizeof(char),29U);_T9->f1= _TA;});_T5= (struct _tuple17*)_T9;}_T8[0]= _T5;_T6= _tag_fat(_T8,sizeof(struct _tuple17*),1);_T4= Cyc_List_list(_T6);}_T7= 
# 1929
Cyc_process_file(_T0,"setjmp.h",_T1,0,0,_T4,0,0,0);if(!_T7)goto _TL1F2;
# 1931
return 1;_TL1F2:
 return 0;}static char _TmpG2[13U]="BUILDLIB.OUT";
# 1936
static struct _fat_ptr Cyc_output_dir={(unsigned char*)_TmpG2,(unsigned char*)_TmpG2,(unsigned char*)_TmpG2 + 13U};
static void Cyc_set_output_dir(struct _fat_ptr s){Cyc_output_dir= s;}
static void Cyc_set_compiler(struct _fat_ptr s){Cyc_cyclone_cc= s;}
static struct _fat_ptr Cyc_log_file_name={(void*)0,(void*)0,(void*)(0 + 0)};
static void Cyc_set_log_file(struct _fat_ptr s){Cyc_log_file_name= s;}
static struct _fat_ptr Cyc_cstubs_file_name={(void*)0,(void*)0,(void*)(0 + 0)};
static void Cyc_set_cstubs_file(struct _fat_ptr s){Cyc_cstubs_file_name= s;}
static struct _fat_ptr Cyc_cycstubs_file_name={(void*)0,(void*)0,(void*)(0 + 0)};
static void Cyc_set_cycstubs_file(struct _fat_ptr s){Cyc_cycstubs_file_name= s;}
static struct Cyc_List_List*Cyc_spec_files=0;
static void Cyc_add_spec_file(struct _fat_ptr s){struct Cyc_List_List*_T0;struct _fat_ptr _T1;unsigned char*_T2;unsigned char*_T3;{struct Cyc_List_List*_T4=_cycalloc(sizeof(struct Cyc_List_List));_T1= s;_T2= _untag_fat_ptr_check_bound(_T1,sizeof(char),1U);_T3= _check_null(_T2);_T4->hd= (const char*)_T3;_T4->tl= Cyc_spec_files;_T0= (struct Cyc_List_List*)_T4;}Cyc_spec_files= _T0;}
static long Cyc_no_other(struct _fat_ptr s){return 0;}
static void Cyc_add_cpparg(struct _fat_ptr s){struct Cyc_List_List*_T0;struct _fat_ptr*_T1;{struct Cyc_List_List*_T2=_cycalloc(sizeof(struct Cyc_List_List));{struct _fat_ptr*_T3=_cycalloc(sizeof(struct _fat_ptr));*_T3= s;_T1= (struct _fat_ptr*)_T3;}_T2->hd= _T1;_T2->tl= Cyc_cppargs;_T0= (struct Cyc_List_List*)_T2;}Cyc_cppargs= _T0;}
static long Cyc_handle_unknown_flag(struct _fat_ptr s){
Cyc_add_cpparg(s);
return 1;}
# 1953
static long Cyc_badparse=0;
static void Cyc_unsupported_option(struct _fat_ptr s){struct Cyc_String_pa_PrintArg_struct _T0;struct Cyc___cycFILE*_T1;struct _fat_ptr _T2;struct _fat_ptr _T3;{struct Cyc_String_pa_PrintArg_struct _T4;_T4.tag= 0;
_T4.f1= s;_T0= _T4;}{struct Cyc_String_pa_PrintArg_struct _T4=_T0;void*_T5[1];_T5[0]= & _T4;_T1= Cyc_stderr;_T2= _tag_fat("Unsupported option %s\n",sizeof(char),23U);_T3= _tag_fat(_T5,sizeof(void*),1);Cyc_fprintf(_T1,_T2,_T3);}
Cyc_badparse= 1;}
# 1958
static void Cyc_set_header(struct _fat_ptr s){struct Cyc_Set_Set**_T0;unsigned _T1;struct Cyc_Set_Set**_T2;struct Cyc_Set_Set*(*_T3)(int(*)(struct _fat_ptr*,struct _fat_ptr*));struct Cyc_Set_Set*(*_T4)(int(*)(void*,void*));int(*_T5)(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_Set_Set**_T6;struct Cyc_Set_Set*(*_T7)(struct Cyc_Set_Set*,struct _fat_ptr*);struct Cyc_Set_Set*(*_T8)(struct Cyc_Set_Set*,void*);struct Cyc_Set_Set**_T9;struct Cyc_Set_Set*_TA;struct _fat_ptr*_TB;_T0= Cyc_headers_to_do;_T1= (unsigned)_T0;
if(_T1)goto _TL1F4;else{goto _TL1F6;}
_TL1F6:{struct Cyc_Set_Set**_TC=_cycalloc(sizeof(struct Cyc_Set_Set*));_T4= Cyc_Set_empty;{struct Cyc_Set_Set*(*_TD)(int(*)(struct _fat_ptr*,struct _fat_ptr*))=(struct Cyc_Set_Set*(*)(int(*)(struct _fat_ptr*,struct _fat_ptr*)))_T4;_T3= _TD;}_T5= Cyc_strptrcmp;({__typeof__(_T3(_T5))_TD=_T3(_T5);*_TC= _TD;});_T2= (struct Cyc_Set_Set**)_TC;}Cyc_headers_to_do= _T2;goto _TL1F5;_TL1F4: _TL1F5: _T6= 
_check_null(Cyc_headers_to_do);_T8= Cyc_Set_insert;{struct Cyc_Set_Set*(*_TC)(struct Cyc_Set_Set*,struct _fat_ptr*)=(struct Cyc_Set_Set*(*)(struct Cyc_Set_Set*,struct _fat_ptr*))_T8;_T7= _TC;}_T9= Cyc_headers_to_do;_TA= *_T9;{struct _fat_ptr*_TC=_cycalloc(sizeof(struct _fat_ptr));*_TC= s;_TB= (struct _fat_ptr*)_TC;}({__typeof__(_T7(_TA,_TB))_TC=_T7(_TA,_TB);*_T6= _TC;});}struct _tuple21{struct _fat_ptr f0;long f1;struct _fat_ptr f2;void*f3;struct _fat_ptr f4;};
# 1967
int Cyc_main(int argc,struct _fat_ptr argv){struct Cyc_Int_pa_PrintArg_struct _T0;int _T1;struct Cyc___cycFILE*_T2;struct _fat_ptr _T3;struct _fat_ptr _T4;struct Cyc_Int_pa_PrintArg_struct _T5;int _T6;struct Cyc_String_pa_PrintArg_struct _T7;struct _fat_ptr _T8;int _T9;unsigned char*_TA;struct _fat_ptr*_TB;struct Cyc___cycFILE*_TC;struct _fat_ptr _TD;struct _fat_ptr _TE;struct Cyc_List_List*_TF;struct _tuple21*_T10;struct Cyc_Arg_String_spec_Arg_Spec_struct*_T11;struct _tuple21*_T12;struct Cyc_Arg_String_spec_Arg_Spec_struct*_T13;struct _tuple21*_T14;struct Cyc_Arg_String_spec_Arg_Spec_struct*_T15;struct _tuple21*_T16;struct Cyc_Arg_String_spec_Arg_Spec_struct*_T17;struct _tuple21*_T18;struct Cyc_Arg_String_spec_Arg_Spec_struct*_T19;void(*_T1A)(struct _fat_ptr);struct _tuple21*_T1B;struct Cyc_Arg_Set_spec_Arg_Spec_struct*_T1C;struct _tuple21*_T1D;struct Cyc_Arg_String_spec_Arg_Spec_struct*_T1E;struct _tuple21*_T1F;struct Cyc_Arg_Set_spec_Arg_Spec_struct*_T20;struct _fat_ptr _T21;struct Cyc_String_pa_PrintArg_struct _T22;struct Cyc_List_List*_T23;void*_T24;struct _tuple21*_T25;struct _tuple21 _T26;struct Cyc___cycFILE*_T27;struct _fat_ptr _T28;struct _fat_ptr _T29;struct Cyc___cycFILE*_T2A;struct _fat_ptr _T2B;struct _fat_ptr _T2C;struct Cyc_List_List*_T2D;struct _fat_ptr _T2E;struct _fat_ptr _T2F;unsigned long _T30;struct _fat_ptr _T31;int _T32;unsigned char*_T33;const char*_T34;char _T35;int _T36;long _T37;struct _fat_ptr _T38;unsigned char*_T39;const char*_T3A;char _T3B;int _T3C;char*_T3D;char*_T3E;unsigned _T3F;unsigned _T40;struct _fat_ptr _T41;struct _fat_ptr _T42;unsigned _T43;long _T44;long _T45;long _T46;struct Cyc_List_List*_T47;struct _fat_ptr _T48;int _T49;int _T4A;struct Cyc_String_pa_PrintArg_struct _T4B;struct Cyc___cycFILE*_T4C;struct _fat_ptr _T4D;struct _fat_ptr _T4E;long _T4F;struct Cyc_String_pa_PrintArg_struct _T50;struct Cyc___cycFILE*_T51;struct _fat_ptr _T52;struct _fat_ptr _T53;struct _fat_ptr _T54;unsigned char*_T55;char*_T56;struct _fat_ptr _T57;unsigned char*_T58;const char*_T59;struct _fat_ptr _T5A;struct _fat_ptr _T5B;struct _fat_ptr _T5C;unsigned char*_T5D;const char*_T5E;struct Cyc___cycFILE*_T5F;unsigned _T60;struct Cyc___cycFILE*_T61;struct _fat_ptr _T62;struct _fat_ptr _T63;long _T64;struct _fat_ptr _T65;unsigned char*_T66;char*_T67;struct _fat_ptr _T68;unsigned char*_T69;const char*_T6A;struct _fat_ptr _T6B;struct _fat_ptr _T6C;struct _fat_ptr _T6D;unsigned char*_T6E;const char*_T6F;struct Cyc___cycFILE*_T70;unsigned _T71;struct Cyc___cycFILE*_T72;struct _fat_ptr _T73;struct _fat_ptr _T74;struct _fat_ptr _T75;unsigned char*_T76;char*_T77;struct _fat_ptr _T78;unsigned char*_T79;const char*_T7A;struct _fat_ptr _T7B;struct _fat_ptr _T7C;struct _fat_ptr _T7D;unsigned char*_T7E;const char*_T7F;struct Cyc___cycFILE*_T80;unsigned _T81;struct Cyc___cycFILE*_T82;struct _fat_ptr _T83;struct _fat_ptr _T84;struct Cyc___cycFILE*_T85;struct _fat_ptr _T86;struct _fat_ptr _T87;struct _fat_ptr _T88;unsigned char*_T89;long _T8A;int _T8B;struct Cyc_List_List*_T8C;void*_T8D;const char*_T8E;const char*_T8F;int _T90;struct Cyc___cycFILE*_T91;struct _fat_ptr _T92;struct _fat_ptr _T93;struct Cyc_List_List*_T94;long _T95;{struct Cyc_Int_pa_PrintArg_struct _T96;_T96.tag= 1;_T1= argc;
_T96.f1= (unsigned long)_T1;_T0= _T96;}{struct Cyc_Int_pa_PrintArg_struct _T96=_T0;void*_T97[1];_T97[0]= & _T96;_T2= Cyc_stderr;_T3= _tag_fat("DEBUG: argc = %d\n",sizeof(char),18U);_T4= _tag_fat(_T97,sizeof(void*),1);Cyc_fprintf(_T2,_T3,_T4);}{
int i=0;_TL1FA: if(i < argc)goto _TL1F8;else{goto _TL1F9;}
_TL1F8:{struct Cyc_Int_pa_PrintArg_struct _T96;_T96.tag= 1;_T6= i;_T96.f1= (unsigned long)_T6;_T5= _T96;}{struct Cyc_Int_pa_PrintArg_struct _T96=_T5;{struct Cyc_String_pa_PrintArg_struct _T97;_T97.tag= 0;_T8= argv;_T9= i;_TA= _check_fat_subscript(_T8,sizeof(struct _fat_ptr),_T9);_TB= (struct _fat_ptr*)_TA;_T97.f1= *_TB;_T7= _T97;}{struct Cyc_String_pa_PrintArg_struct _T97=_T7;void*_T98[2];_T98[0]= & _T96;_T98[1]= & _T97;_TC= Cyc_stderr;_TD= _tag_fat("DEBUG: argv[%d] = %s\n",sizeof(char),22U);_TE= _tag_fat(_T98,sizeof(void*),2);Cyc_fprintf(_TC,_TD,_TE);}}
# 1969
i= i + 1;goto _TL1FA;_TL1F9:;}{struct _tuple21*_T96[8];{struct _tuple21*_T97=_cycalloc(sizeof(struct _tuple21));
# 1974
({__typeof__(_tag_fat("-d",sizeof(char),3U))_T98=_tag_fat("-d",sizeof(char),3U);_T97->f0= _T98;});_T97->f1= 0;({__typeof__(_tag_fat(" <file>",sizeof(char),8U))_T98=_tag_fat(" <file>",sizeof(char),8U);_T97->f2= _T98;});{struct Cyc_Arg_String_spec_Arg_Spec_struct*_T98=_cycalloc(sizeof(struct Cyc_Arg_String_spec_Arg_Spec_struct));_T98->tag= 5;_T98->f1= Cyc_set_output_dir;_T11= (struct Cyc_Arg_String_spec_Arg_Spec_struct*)_T98;}_T97->f3= (void*)_T11;
({__typeof__(_tag_fat("Set the output directory to <file>",sizeof(char),35U))_T98=_tag_fat("Set the output directory to <file>",sizeof(char),35U);_T97->f4= _T98;});_T10= (struct _tuple21*)_T97;}
# 1974
_T96[0]= _T10;{struct _tuple21*_T97=_cycalloc(sizeof(struct _tuple21));
# 1976
({__typeof__(_tag_fat("-log",sizeof(char),5U))_T98=_tag_fat("-log",sizeof(char),5U);_T97->f0= _T98;});_T97->f1= 0;({__typeof__(_tag_fat(" <file>",sizeof(char),8U))_T98=_tag_fat(" <file>",sizeof(char),8U);_T97->f2= _T98;});{struct Cyc_Arg_String_spec_Arg_Spec_struct*_T98=_cycalloc(sizeof(struct Cyc_Arg_String_spec_Arg_Spec_struct));_T98->tag= 5;_T98->f1= Cyc_set_log_file;_T13= (struct Cyc_Arg_String_spec_Arg_Spec_struct*)_T98;}_T97->f3= (void*)_T13;
({__typeof__(_tag_fat("Log to <file>",sizeof(char),14U))_T98=_tag_fat("Log to <file>",sizeof(char),14U);_T97->f4= _T98;});_T12= (struct _tuple21*)_T97;}
# 1976
_T96[1]= _T12;{struct _tuple21*_T97=_cycalloc(sizeof(struct _tuple21));
# 1978
({__typeof__(_tag_fat("-cstubs",sizeof(char),8U))_T98=_tag_fat("-cstubs",sizeof(char),8U);_T97->f0= _T98;});_T97->f1= 0;({__typeof__(_tag_fat(" <file>",sizeof(char),8U))_T98=_tag_fat(" <file>",sizeof(char),8U);_T97->f2= _T98;});{struct Cyc_Arg_String_spec_Arg_Spec_struct*_T98=_cycalloc(sizeof(struct Cyc_Arg_String_spec_Arg_Spec_struct));_T98->tag= 5;_T98->f1= Cyc_set_cstubs_file;_T15= (struct Cyc_Arg_String_spec_Arg_Spec_struct*)_T98;}_T97->f3= (void*)_T15;
({__typeof__(_tag_fat("Write cstubs to <file>",sizeof(char),23U))_T98=_tag_fat("Write cstubs to <file>",sizeof(char),23U);_T97->f4= _T98;});_T14= (struct _tuple21*)_T97;}
# 1978
_T96[2]= _T14;{struct _tuple21*_T97=_cycalloc(sizeof(struct _tuple21));
# 1980
({__typeof__(_tag_fat("-cycstubs",sizeof(char),10U))_T98=_tag_fat("-cycstubs",sizeof(char),10U);_T97->f0= _T98;});_T97->f1= 0;({__typeof__(_tag_fat(" <file>",sizeof(char),8U))_T98=_tag_fat(" <file>",sizeof(char),8U);_T97->f2= _T98;});{struct Cyc_Arg_String_spec_Arg_Spec_struct*_T98=_cycalloc(sizeof(struct Cyc_Arg_String_spec_Arg_Spec_struct));_T98->tag= 5;_T98->f1= Cyc_set_cycstubs_file;_T17= (struct Cyc_Arg_String_spec_Arg_Spec_struct*)_T98;}_T97->f3= (void*)_T17;
({__typeof__(_tag_fat("Write cycstubs to <file>",sizeof(char),25U))_T98=_tag_fat("Write cycstubs to <file>",sizeof(char),25U);_T97->f4= _T98;});_T16= (struct _tuple21*)_T97;}
# 1980
_T96[3]= _T16;{struct _tuple21*_T97=_cycalloc(sizeof(struct _tuple21));
# 1982
({__typeof__(_tag_fat("-cc",sizeof(char),4U))_T98=_tag_fat("-cc",sizeof(char),4U);_T97->f0= _T98;});_T97->f1= 0;({__typeof__(_tag_fat(" <compiler>",sizeof(char),12U))_T98=_tag_fat(" <compiler>",sizeof(char),12U);_T97->f2= _T98;});{struct Cyc_Arg_String_spec_Arg_Spec_struct*_T98=_cycalloc(sizeof(struct Cyc_Arg_String_spec_Arg_Spec_struct));_T98->tag= 5;_T1A= & Cyc_set_compiler;_T98->f1= (void(*)(struct _fat_ptr))_T1A;_T19= (struct Cyc_Arg_String_spec_Arg_Spec_struct*)_T98;}_T97->f3= (void*)_T19;
({__typeof__(_tag_fat("Use this compiler instead of 'gcc'.",sizeof(char),36U))_T98=_tag_fat("Use this compiler instead of 'gcc'.",sizeof(char),36U);_T97->f4= _T98;});_T18= (struct _tuple21*)_T97;}
# 1982
_T96[4]= _T18;{struct _tuple21*_T97=_cycalloc(sizeof(struct _tuple21));
# 1984
({__typeof__(_tag_fat("-setjmp",sizeof(char),8U))_T98=_tag_fat("-setjmp",sizeof(char),8U);_T97->f0= _T98;});_T97->f1= 0;({__typeof__(_tag_fat("",sizeof(char),1U))_T98=_tag_fat("",sizeof(char),1U);_T97->f2= _T98;});{struct Cyc_Arg_Set_spec_Arg_Spec_struct*_T98=_cycalloc(sizeof(struct Cyc_Arg_Set_spec_Arg_Spec_struct));_T98->tag= 3;_T98->f1= & Cyc_do_setjmp;_T1C= (struct Cyc_Arg_Set_spec_Arg_Spec_struct*)_T98;}_T97->f3= (void*)_T1C;
# 1988
({__typeof__(_tag_fat("Produce the jmp_buf and setjmp declarations on the standard output, for use by the Cyclone compiler special file cyc_setjmp.h.  Cannot be used with specfiles.",sizeof(char),159U))_T98=_tag_fat("Produce the jmp_buf and setjmp declarations on the standard output, for use by the Cyclone compiler special file cyc_setjmp.h.  Cannot be used with specfiles.",sizeof(char),159U);_T97->f4= _T98;});_T1B= (struct _tuple21*)_T97;}
# 1984
_T96[5]= _T1B;{struct _tuple21*_T97=_cycalloc(sizeof(struct _tuple21));
# 1989
({__typeof__(_tag_fat("-h",sizeof(char),3U))_T98=_tag_fat("-h",sizeof(char),3U);_T97->f0= _T98;});_T97->f1= 0;({__typeof__(_tag_fat(" <header>",sizeof(char),10U))_T98=_tag_fat(" <header>",sizeof(char),10U);_T97->f2= _T98;});{struct Cyc_Arg_String_spec_Arg_Spec_struct*_T98=_cycalloc(sizeof(struct Cyc_Arg_String_spec_Arg_Spec_struct));_T98->tag= 5;_T98->f1= Cyc_set_header;_T1E= (struct Cyc_Arg_String_spec_Arg_Spec_struct*)_T98;}_T97->f3= (void*)_T1E;
({__typeof__(_tag_fat("Produce this header, and other -h headers only",sizeof(char),47U))_T98=_tag_fat("Produce this header, and other -h headers only",sizeof(char),47U);_T97->f4= _T98;});_T1D= (struct _tuple21*)_T97;}
# 1989
_T96[6]= _T1D;{struct _tuple21*_T97=_cycalloc(sizeof(struct _tuple21));
# 1991
({__typeof__(_tag_fat("-v",sizeof(char),3U))_T98=_tag_fat("-v",sizeof(char),3U);_T97->f0= _T98;});_T97->f1= 0;({__typeof__(_tag_fat("",sizeof(char),1U))_T98=_tag_fat("",sizeof(char),1U);_T97->f2= _T98;});{struct Cyc_Arg_Set_spec_Arg_Spec_struct*_T98=_cycalloc(sizeof(struct Cyc_Arg_Set_spec_Arg_Spec_struct));_T98->tag= 3;_T98->f1= & Cyc_verbose;_T20= (struct Cyc_Arg_Set_spec_Arg_Spec_struct*)_T98;}_T97->f3= (void*)_T20;({__typeof__(_tag_fat("Verbose operation",sizeof(char),18U))_T98=_tag_fat("Verbose operation",sizeof(char),18U);_T97->f4= _T98;});_T1F= (struct _tuple21*)_T97;}_T96[7]= _T1F;_T21= _tag_fat(_T96,sizeof(struct _tuple21*),8);_TF= Cyc_List_list(_T21);}{
# 1973
struct Cyc_List_List*options=_TF;
# 1993
if(options==0)goto _TL1FB;{struct Cyc_String_pa_PrintArg_struct _T96;_T96.tag= 0;_T23= options;_T24= _T23->hd;_T25= (struct _tuple21*)_T24;_T26= *_T25;
_T96.f1= _T26.f0;_T22= _T96;}{struct Cyc_String_pa_PrintArg_struct _T96=_T22;void*_T97[1];_T97[0]= & _T96;_T27= Cyc_stderr;_T28= _tag_fat("DEBUG: First option flag: %s\n",sizeof(char),30U);_T29= _tag_fat(_T97,sizeof(void*),1);Cyc_fprintf(_T27,_T28,_T29);}goto _TL1FC;
# 1996
_TL1FB: _T2A= Cyc_stderr;_T2B= _tag_fat("DEBUG: Options list is NULL!\n",sizeof(char),30U);_T2C= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T2A,_T2B,_T2C);_TL1FC:
# 2000
 Cyc_Arg_current= 0;_T2D= options;_T2E= 
_tag_fat("Options:",sizeof(char),9U);_T2F= argv;Cyc_Arg_parse(_T2D,Cyc_add_spec_file,Cyc_handle_unknown_flag,_T2E,_T2F);{
# 2005
long has_slash=0;_T30= 
Cyc_strlen(Cyc_cyclone_cc);{int len=(int)_T30;{
int i=0;_TL200: if(i < len)goto _TL1FE;else{goto _TL1FF;}
_TL1FE: _T31= Cyc_cyclone_cc;_T32= i;_T33= _check_fat_subscript(_T31,sizeof(char),_T32);_T34= (const char*)_T33;_T35= *_T34;_T36= (int)_T35;if(_T36!=47)goto _TL201;
has_slash= 1;goto _TL1FF;_TL201:
# 2007
 i= i + 1;goto _TL200;_TL1FF:;}_T37= has_slash;
# 2013
if(!_T37)goto _TL203;_T38= Cyc_cyclone_cc;_T39= _T38.curr;_T3A= (const char*)_T39;_T3B= _T3A[0];_T3C= (int)_T3B;if(_T3C==47)goto _TL203;{unsigned _T96=1024U + 1U;_T3F= _check_times(_T96,sizeof(char));{char*_T97=_cycalloc_atomic(_T3F);{unsigned _T98=_T96;unsigned i;i= 0;_TL208: if(i < _T98)goto _TL206;else{goto _TL207;}_TL206: _T40= i;
_T97[_T40]= '\000';i= i + 1;goto _TL208;_TL207: _T97[_T98]= 0;}_T3E= (char*)_T97;}_T3D= _T3E;}{struct _fat_ptr buf=_tag_fat(_T3D,sizeof(char),1025U);_T41= buf;_T42= buf;_T43= 
_get_fat_size(_T42,sizeof(char));{struct _fat_ptr cwd=Cyc_getcwd(_T41,_T43);
Cyc_cyclone_cc= Cyc_Filename_concat(cwd,Cyc_cyclone_cc);}}goto _TL204;_TL203: _TL204:;}}_T44= Cyc_badparse;
# 2020
if(_T44)goto _TL20B;else{goto _TL20D;}_TL20D: _T45= Cyc_do_setjmp;if(_T45)goto _TL20C;else{goto _TL20E;}_TL20E: if(Cyc_spec_files==0)goto _TL20B;else{goto _TL20C;}_TL20C: _T46= Cyc_do_setjmp;if(_T46)goto _TL20F;else{goto _TL209;}_TL20F: if(Cyc_spec_files!=0)goto _TL20B;else{goto _TL209;}
_TL20B: _T47= options;_T48= 
# 2023
_tag_fat("Usage: buildlib [options] specfile1 specfile2 ...\nOptions:",sizeof(char),59U);
# 2021
Cyc_Arg_usage(_T47,_T48);
# 2024
return 1;_TL209: _T49= 
# 2028
Cyc_force_directory_prefixes(Cyc_output_dir);if(_T49)goto _TL212;else{goto _TL213;}_TL213: _T4A= Cyc_force_directory(Cyc_output_dir);if(_T4A)goto _TL212;else{goto _TL210;}
_TL212:{struct Cyc_String_pa_PrintArg_struct _T96;_T96.tag= 0;_T96.f1= Cyc_output_dir;_T4B= _T96;}{struct Cyc_String_pa_PrintArg_struct _T96=_T4B;void*_T97[1];_T97[0]= & _T96;_T4C= Cyc_stderr;_T4D= _tag_fat("Error: could not create directory %s\n",sizeof(char),38U);_T4E= _tag_fat(_T97,sizeof(void*),1);Cyc_fprintf(_T4C,_T4D,_T4E);}
return 1;_TL210: _T4F= Cyc_verbose;
# 2032
if(!_T4F)goto _TL214;{struct Cyc_String_pa_PrintArg_struct _T96;_T96.tag= 0;
_T96.f1= Cyc_output_dir;_T50= _T96;}{struct Cyc_String_pa_PrintArg_struct _T96=_T50;void*_T97[1];_T97[0]= & _T96;_T51= Cyc_stderr;_T52= _tag_fat("Output directory is %s\n",sizeof(char),24U);_T53= _tag_fat(_T97,sizeof(void*),1);Cyc_fprintf(_T51,_T52,_T53);}goto _TL215;_TL214: _TL215: _T54= Cyc_log_file_name;_T55= _T54.curr;_T56= (char*)_T55;
# 2037
if(_T56==0)goto _TL216;_T57= Cyc_log_file_name;_T58= _untag_fat_ptr_check_bound(_T57,sizeof(char),1U);_T59= (const char*)_T58;
Cyc_log_file= Cyc_fopen(_T59,"w");goto _TL217;
# 2040
_TL216: _T5A= Cyc_output_dir;_T5B= _tag_fat("BUILDLIB.LOG",sizeof(char),13U);_T5C= Cyc_Filename_concat(_T5A,_T5B);_T5D= _untag_fat_ptr_check_bound(_T5C,sizeof(char),1U);_T5E= (const char*)_T5D;Cyc_log_file= Cyc_fopen(_T5E,"w");_TL217: _T5F= Cyc_log_file;_T60= (unsigned)_T5F;
if(_T60)goto _TL218;else{goto _TL21A;}
_TL21A: _T61= Cyc_stderr;_T62= _tag_fat("Error: could not create log file\n",sizeof(char),34U);_T63= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T61,_T62,_T63);
return 1;_TL218: _T64= Cyc_do_setjmp;
# 2046
if(_T64)goto _TL21B;else{goto _TL21D;}
# 2048
_TL21D: _T65= Cyc_cstubs_file_name;_T66= _T65.curr;_T67= (char*)_T66;if(_T67==0)goto _TL21E;_T68= Cyc_cstubs_file_name;_T69= _untag_fat_ptr_check_bound(_T68,sizeof(char),1U);_T6A= (const char*)_T69;
Cyc_cstubs_file= Cyc_fopen(_T6A,"w");goto _TL21F;
# 2051
_TL21E: _T6B= Cyc_output_dir;_T6C= _tag_fat("cstubs.c",sizeof(char),9U);_T6D= Cyc_Filename_concat(_T6B,_T6C);_T6E= _untag_fat_ptr_check_bound(_T6D,sizeof(char),1U);_T6F= (const char*)_T6E;Cyc_cstubs_file= Cyc_fopen(_T6F,"w");_TL21F: _T70= Cyc_cstubs_file;_T71= (unsigned)_T70;
if(_T71)goto _TL220;else{goto _TL222;}
_TL222: _T72= Cyc_stderr;_T73= _tag_fat("Error: could not create cstubs.c\n",sizeof(char),34U);_T74= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T72,_T73,_T74);
return 1;_TL220: _T75= Cyc_cycstubs_file_name;_T76= _T75.curr;_T77= (char*)_T76;
# 2058
if(_T77==0)goto _TL223;_T78= Cyc_cycstubs_file_name;_T79= _untag_fat_ptr_check_bound(_T78,sizeof(char),1U);_T7A= (const char*)_T79;
Cyc_cycstubs_file= Cyc_fopen(_T7A,"w");goto _TL224;
# 2061
_TL223: _T7B= Cyc_output_dir;_T7C= _tag_fat("cycstubs.cyc",sizeof(char),13U);_T7D= Cyc_Filename_concat(_T7B,_T7C);_T7E= _untag_fat_ptr_check_bound(_T7D,sizeof(char),1U);_T7F= (const char*)_T7E;Cyc_cycstubs_file= Cyc_fopen(_T7F,"w");_TL224: _T80= Cyc_cycstubs_file;_T81= (unsigned)_T80;
if(_T81)goto _TL225;else{goto _TL227;}
_TL227: _T82= Cyc_stderr;_T83= _tag_fat("Error: could not create cycstubs.cyc\n",sizeof(char),38U);_T84= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T82,_T83,_T84);
return 1;_TL225: _T85= Cyc_cycstubs_file;_T86= 
# 2068
_tag_fat("#include \"cyclone/library/std/core.h\"\nusing Core;\n\n",sizeof(char),52U);_T87= _tag_fat(0U,sizeof(void*),0);
# 2066
Cyc_fprintf(_T85,_T86,_T87);goto _TL21C;_TL21B: _TL21C: _T88= Cyc_output_dir;_T89= _untag_fat_ptr_check_bound(_T88,sizeof(char),1U);{
# 2071
const char*outdir=(const char*)_T89;_T8A= Cyc_do_setjmp;
if(!_T8A)goto _TL228;_T8B= Cyc_process_setjmp(outdir);if(!_T8B)goto _TL228;
return 1;
# 2076
_TL228: _TL22D: if(Cyc_spec_files!=0)goto _TL22B;else{goto _TL22C;}
_TL22B: _T8C= Cyc_spec_files;_T8D= _T8C->hd;_T8E= (const char*)_T8D;_T8F= outdir;_T90= Cyc_process_specfile(_T8E,_T8F);if(!_T90)goto _TL22E;_T91= Cyc_stderr;_T92= 
_tag_fat("FATAL ERROR -- QUIT!\n",sizeof(char),22U);_T93= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T91,_T92,_T93);
exit(1);goto _TL22F;_TL22E: _TL22F: _T94= Cyc_spec_files;
# 2076
Cyc_spec_files= _T94->tl;goto _TL22D;_TL22C:
# 2084
 Cyc_fclose(Cyc_log_file);_T95= Cyc_do_setjmp;
if(_T95)goto _TL230;else{goto _TL232;}
_TL232: Cyc_fclose(Cyc_cstubs_file);
Cyc_fclose(Cyc_cycstubs_file);goto _TL231;_TL230: _TL231:
# 2090
 return 0;}}}
