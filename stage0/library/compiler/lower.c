#include <cyc_include.h>
 struct Cyc_Core_Opt{void*v;};struct Cyc_Core_DynamicRegion;struct Cyc_List_List{void*hd;struct Cyc_List_List*tl;};
# 173 "./cyclone/library/std/list.h"
extern struct Cyc_List_List*Cyc_List_rev(struct Cyc_List_List*);
# 179
extern struct Cyc_List_List*Cyc_List_imp_rev(struct Cyc_List_List*);struct Cyc_AssnDef_ExistAssnFn;struct _union_Nmspace_Abs_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_Rel_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_C_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_Loc_n{int tag;int val;};union Cyc_Absyn_Nmspace{struct _union_Nmspace_Abs_n Abs_n;struct _union_Nmspace_Rel_n Rel_n;struct _union_Nmspace_C_n C_n;struct _union_Nmspace_Loc_n Loc_n;};struct _tuple0{union Cyc_Absyn_Nmspace f0;struct _fat_ptr*f1;};
# 148 "cyclone/library/compiler/absyn.h"
enum Cyc_Absyn_Scope{Cyc_Absyn_Static =0U,Cyc_Absyn_Abstract =1U,Cyc_Absyn_Public =2U,Cyc_Absyn_Extern =3U,Cyc_Absyn_ExternC =4U,Cyc_Absyn_Register =5U,Cyc_Absyn_Noreturn =6U};struct Cyc_Absyn_Tqual{long print_const: 1;long q_volatile: 1;long q_restrict: 1;long real_const: 1;unsigned loc;};
# 186
enum Cyc_Absyn_AggrKind{Cyc_Absyn_StructA =0U,Cyc_Absyn_UnionA =1U};struct Cyc_Absyn_VarargInfo{struct _fat_ptr*name;struct Cyc_Absyn_Tqual tq;void*type;long inject;};struct Cyc_Absyn_FnInfo{struct Cyc_List_List*tvars;void*effect;struct Cyc_Absyn_Tqual ret_tqual;void*ret_type;struct Cyc_List_List*args;long c_varargs;struct Cyc_Absyn_VarargInfo*cyc_varargs;struct Cyc_List_List*qual_bnd;struct Cyc_List_List*attributes;struct Cyc_Absyn_Exp*checks_clause;struct Cyc_AssnDef_ExistAssnFn*checks_assn;struct Cyc_Absyn_Exp*requires_clause;struct Cyc_AssnDef_ExistAssnFn*requires_assn;struct Cyc_Absyn_Exp*ensures_clause;struct Cyc_AssnDef_ExistAssnFn*ensures_assn;struct Cyc_Absyn_Exp*throws_clause;struct Cyc_AssnDef_ExistAssnFn*throws_assn;struct Cyc_Absyn_Vardecl*return_value;struct Cyc_List_List*arg_vardecls;struct Cyc_List_List*effconstr;};struct Cyc_Absyn_ArrayInfo{void*elt_type;struct Cyc_Absyn_Tqual tq;struct Cyc_Absyn_Exp*num_elts;void*zero_term;unsigned zt_loc;};struct Cyc_Absyn_ArrayType_Absyn_Type_struct{int tag;struct Cyc_Absyn_ArrayInfo f1;};
# 600 "cyclone/library/compiler/absyn.h"
enum Cyc_Absyn_Primop{Cyc_Absyn_Plus =0U,Cyc_Absyn_Times =1U,Cyc_Absyn_Minus =2U,Cyc_Absyn_Div =3U,Cyc_Absyn_Mod =4U,Cyc_Absyn_Eq =5U,Cyc_Absyn_Neq =6U,Cyc_Absyn_Gt =7U,Cyc_Absyn_Lt =8U,Cyc_Absyn_Gte =9U,Cyc_Absyn_Lte =10U,Cyc_Absyn_Not =11U,Cyc_Absyn_Bitnot =12U,Cyc_Absyn_Bitand =13U,Cyc_Absyn_Bitor =14U,Cyc_Absyn_Bitxor =15U,Cyc_Absyn_Bitlshift =16U,Cyc_Absyn_Bitlrshift =17U,Cyc_Absyn_Numelts =18U,Cyc_Absyn_Tagof =19U,Cyc_Absyn_UDiv =20U,Cyc_Absyn_UMod =21U,Cyc_Absyn_UGt =22U,Cyc_Absyn_ULt =23U,Cyc_Absyn_UGte =24U,Cyc_Absyn_ULte =25U};struct Cyc_Absyn_PrimopOpt{enum Cyc_Absyn_Primop v;};
# 635
enum Cyc_Absyn_Incrementor{Cyc_Absyn_PreInc =0U,Cyc_Absyn_PostInc =1U,Cyc_Absyn_PreDec =2U,Cyc_Absyn_PostDec =3U};struct Cyc_Absyn_VarargCallInfo{int num_varargs;struct Cyc_List_List*injectors;struct Cyc_Absyn_VarargInfo*vai;};
# 660
enum Cyc_Absyn_Coercion{Cyc_Absyn_Unknown_coercion =0U,Cyc_Absyn_No_coercion =1U,Cyc_Absyn_Null_to_NonNull =2U,Cyc_Absyn_Subset_coercion =3U,Cyc_Absyn_Other_coercion =4U};struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct{int tag;void*f1;};struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct{int tag;enum Cyc_Absyn_Primop f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_PrimopOpt*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;enum Cyc_Absyn_Incrementor f2;};struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_List_List*f2;struct Cyc_Absyn_VarargCallInfo*f3;long f4;};struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct{int tag;void*f1;struct Cyc_Absyn_Exp*f2;long f3;enum Cyc_Absyn_Coercion f4;};struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct{int tag;void*f1;};struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct{int tag;void*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _fat_ptr*f2;long f3;long f4;};struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _fat_ptr*f2;long f3;long f4;};struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct{int tag;struct Cyc_List_List*f1;};struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct{int tag;struct _tuple0*f1;struct Cyc_List_List*f2;struct Cyc_List_List*f3;struct Cyc_Absyn_Aggrdecl*f4;};struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct{int tag;void*f1;long f2;struct Cyc_List_List*f3;};struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Enumdecl*f1;struct Cyc_Absyn_Enumfield*f2;};struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct{int tag;void*f1;struct Cyc_Absyn_Enumfield*f2;};struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Core_Opt*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Stmt*f1;};struct Cyc_Absyn_Exp{void*topt;void*r;unsigned loc;void*annot;};struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Stmt*f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Stmt*f2;struct Cyc_Absyn_Stmt*f3;};struct _tuple9{struct Cyc_Absyn_Exp*f0;struct Cyc_Absyn_Stmt*f1;};struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct{int tag;struct _tuple9 f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_Goto_s_Absyn_Raw_stmt_struct{int tag;struct _fat_ptr*f1;};struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _tuple9 f2;struct _tuple9 f3;struct Cyc_Absyn_Stmt*f4;};struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_List_List*f2;void*f3;};struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Decl*f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct{int tag;struct _fat_ptr*f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Stmt*f1;struct _tuple9 f2;};struct Cyc_Absyn_Stmt{void*r;unsigned loc;void*annot;};struct Cyc_Absyn_Pat{void*r;void*topt;unsigned loc;};struct Cyc_Absyn_Switch_clause{struct Cyc_Absyn_Pat*pattern;struct Cyc_Core_Opt*pat_vars;struct Cyc_Absyn_Exp*where_clause;struct Cyc_Absyn_Stmt*body;unsigned loc;};struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct{int tag;struct _tuple0*f1;};struct Cyc_Absyn_Global_b_Absyn_Binding_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};struct Cyc_Absyn_Param_b_Absyn_Binding_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};struct Cyc_Absyn_Local_b_Absyn_Binding_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};struct Cyc_Absyn_Pat_b_Absyn_Binding_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};struct Cyc_Absyn_Vardecl{enum Cyc_Absyn_Scope sc;struct _tuple0*name;unsigned varloc;struct Cyc_Absyn_Tqual tq;void*type;struct Cyc_Absyn_Exp*initializer;void*rgn;struct Cyc_List_List*attributes;long escapes;long is_proto;struct Cyc_Absyn_Exp*rename;};struct Cyc_Absyn_Fndecl{enum Cyc_Absyn_Scope sc;long is_inline;struct _tuple0*name;struct Cyc_Absyn_Stmt*body;struct Cyc_Absyn_FnInfo i;void*cached_type;struct Cyc_Core_Opt*param_vardecls;struct Cyc_Absyn_Vardecl*fn_vardecl;enum Cyc_Absyn_Scope orig_scope;long escapes;};struct Cyc_Absyn_AggrdeclImpl{struct Cyc_List_List*exist_vars;struct Cyc_List_List*qual_bnd;struct Cyc_List_List*fields;long tagged;struct Cyc_List_List*effconstr;};struct Cyc_Absyn_Aggrdecl{enum Cyc_Absyn_AggrKind kind;enum Cyc_Absyn_Scope sc;struct _tuple0*name;struct Cyc_List_List*tvs;struct Cyc_Absyn_AggrdeclImpl*impl;struct Cyc_List_List*attributes;long expected_mem_kind;};struct Cyc_Absyn_Enumfield{struct _tuple0*name;struct Cyc_Absyn_Exp*tag;unsigned loc;};struct Cyc_Absyn_Enumdecl{enum Cyc_Absyn_Scope sc;struct _tuple0*name;struct Cyc_Core_Opt*fields;};struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Fndecl*f1;};struct Cyc_Absyn_Decl{void*r;unsigned loc;};
# 1070
void*Cyc_Absyn_compress(void*);
# 1097
extern void*Cyc_Absyn_heap_rgn_type;
# 1099
extern void*Cyc_Absyn_al_qual_type;
# 1103
extern void*Cyc_Absyn_false_type;
# 1105
extern void*Cyc_Absyn_void_type;extern void*Cyc_Absyn_typeof_type(struct Cyc_Absyn_Exp*);
# 1147
void*Cyc_Absyn_star_type(void*,void*,void*,struct Cyc_Absyn_Tqual,void*,void*);
# 1188
struct Cyc_Absyn_Exp*Cyc_Absyn_true_exp(unsigned);
struct Cyc_Absyn_Exp*Cyc_Absyn_false_exp(unsigned);
# 1191
struct Cyc_Absyn_Exp*Cyc_Absyn_signed_int_exp(int,unsigned);
struct Cyc_Absyn_Exp*Cyc_Absyn_uint_exp(unsigned,unsigned);
# 1198
struct Cyc_Absyn_Exp*Cyc_Absyn_var_exp(struct _tuple0*,unsigned);
# 1203
struct Cyc_Absyn_Exp*Cyc_Absyn_primop_exp(enum Cyc_Absyn_Primop,struct Cyc_List_List*,unsigned);
struct Cyc_Absyn_Exp*Cyc_Absyn_prim1_exp(enum Cyc_Absyn_Primop,struct Cyc_Absyn_Exp*,unsigned);
struct Cyc_Absyn_Exp*Cyc_Absyn_prim2_exp(enum Cyc_Absyn_Primop,struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*,unsigned);
# 1207
struct Cyc_Absyn_Exp*Cyc_Absyn_add_exp(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*,unsigned);
# 1222
struct Cyc_Absyn_Exp*Cyc_Absyn_assign_exp(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*,unsigned);
# 1229
struct Cyc_Absyn_Exp*Cyc_Absyn_fncall_exp(struct Cyc_Absyn_Exp*,struct Cyc_List_List*,unsigned);
# 1234
struct Cyc_Absyn_Exp*Cyc_Absyn_cast_exp(void*,struct Cyc_Absyn_Exp*,long,enum Cyc_Absyn_Coercion,unsigned);
struct Cyc_Absyn_Exp*Cyc_Absyn_address_exp(struct Cyc_Absyn_Exp*,unsigned);
# 1239
struct Cyc_Absyn_Exp*Cyc_Absyn_deref_exp(struct Cyc_Absyn_Exp*,unsigned);
struct Cyc_Absyn_Exp*Cyc_Absyn_aggrmember_exp(struct Cyc_Absyn_Exp*,struct _fat_ptr*,unsigned);
struct Cyc_Absyn_Exp*Cyc_Absyn_aggrarrow_exp(struct Cyc_Absyn_Exp*,struct _fat_ptr*,unsigned);
struct Cyc_Absyn_Exp*Cyc_Absyn_subscript_exp(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*,unsigned);
# 1252
struct Cyc_Absyn_Exp*Cyc_Absyn_unresolvedmem_exp(struct Cyc_Core_Opt*,struct Cyc_List_List*,unsigned);
# 1263
struct Cyc_Absyn_Stmt*Cyc_Absyn_skip_stmt(unsigned);
struct Cyc_Absyn_Stmt*Cyc_Absyn_exp_stmt(struct Cyc_Absyn_Exp*,unsigned);
struct Cyc_Absyn_Stmt*Cyc_Absyn_seq_stmt(struct Cyc_Absyn_Stmt*,struct Cyc_Absyn_Stmt*,unsigned);
# 1267
struct Cyc_Absyn_Stmt*Cyc_Absyn_return_stmt(struct Cyc_Absyn_Exp*,unsigned);
struct Cyc_Absyn_Stmt*Cyc_Absyn_ifthenelse_stmt(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Stmt*,struct Cyc_Absyn_Stmt*,unsigned);
# 1273
struct Cyc_Absyn_Stmt*Cyc_Absyn_switch_stmt(struct Cyc_Absyn_Exp*,struct Cyc_List_List*,unsigned);
# 1275
struct Cyc_Absyn_Stmt*Cyc_Absyn_decl_stmt(struct Cyc_Absyn_Decl*,struct Cyc_Absyn_Stmt*,unsigned);
# 1277
struct Cyc_Absyn_Stmt*Cyc_Absyn_label_stmt(struct _fat_ptr*,struct Cyc_Absyn_Stmt*,unsigned);
# 1279
struct Cyc_Absyn_Stmt*Cyc_Absyn_goto_stmt(struct _fat_ptr*,unsigned);
# 1293
struct Cyc_Absyn_Vardecl*Cyc_Absyn_new_vardecl(unsigned,struct _tuple0*,void*,struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*);
# 1353
struct _tuple0*Cyc_Absyn_binding2qvar(void*);struct Cyc_Hashtable_Table;struct Cyc___cycFILE;
# 53 "./cyclone/library/std/cycboot.h"
extern struct Cyc___cycFILE*Cyc_stderr;struct Cyc_String_pa_PrintArg_struct{int tag;struct _fat_ptr f1;};struct Cyc_Int_pa_PrintArg_struct{int tag;unsigned long f1;};
# 75
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
# 100
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);struct Cyc_Dict_T;struct Cyc_Dict_Dict{int(*rel)(void*,void*);struct _RegionHandle*r;const struct Cyc_Dict_T*t;};struct Cyc_Set_Set;struct Cyc_Xarray_Xarray{struct _fat_ptr elmts;int num_elmts;};struct Cyc_Toc_TocState{struct Cyc_List_List**tuple_types;struct Cyc_List_List**anon_aggr_types;struct Cyc_Dict_Dict*aggrs_so_far;struct Cyc_List_List**abs_struct_types;struct Cyc_Set_Set**datatypes_so_far;struct Cyc_Dict_Dict*xdatatypes_so_far;struct Cyc_Dict_Dict*qvar_tags;struct Cyc_Xarray_Xarray*temp_labels;};struct Cyc_Toc_TocStateWrap{struct Cyc_Core_DynamicRegion*dyn;struct Cyc_Toc_TocState*state;};struct Cyc_Toc_TocContext{struct Cyc_List_List*result_decls;struct Cyc_Hashtable_Table**pop_tables;struct Cyc_Hashtable_Table**fn_pop_table;int tuple_type_counter;int temp_var_counter;int fresh_label_counter;struct Cyc_Toc_TocStateWrap*toc_state;struct Cyc_List_List*tagged_union_cache;void*void_star_type_cache;void*fat_ptr_type_cache;void*rgn_type_cache;void*aqualt_type_cache;struct Cyc_Absyn_Exp*aliasable_qual_exp_cache;struct Cyc_Absyn_Exp*get_exn_thrown_exp_cache;struct _fat_ptr globals;};
# 122 "cyclone/library/compiler/toc.h"
struct _tuple0*Cyc_Toc_temp_var(struct Cyc_Toc_TocContext*);
# 63 "cyclone/library/compiler/absynpp.h"
struct _fat_ptr Cyc_Absynpp_typ2string(void*);
# 69
struct _fat_ptr Cyc_Absynpp_exp2string(struct Cyc_Absyn_Exp*);
struct _fat_ptr Cyc_Absynpp_stmt2string(struct Cyc_Absyn_Stmt*);
# 95 "cyclone/library/compiler/tcutil.h"
struct Cyc_Absyn_Exp*Cyc_Tcutil_deep_copy_exp(long,struct Cyc_Absyn_Exp*);
# 29 "cyclone/library/compiler/unify.h"
long Cyc_Unify_unify(void*,void*);struct Cyc___cycFILE;
# 98 "bazel-out/k8-fastbuild/bin/cyclone/library/std/libc/stdio.h"
extern struct Cyc___cycFILE*Cyc_stderr;
# 127
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
# 161
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 41 "cyclone/library/compiler/warn.h"
void Cyc_Warn_warn(unsigned,struct _fat_ptr,struct _fat_ptr);
# 51
void*Cyc_Warn_impos(struct _fat_ptr,struct _fat_ptr);
# 51 "./cyclone/library/std/string.h"
extern int Cyc_strcmp(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_strptrcmp(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_Lower_Env{struct Cyc_List_List*stmts;struct Cyc_List_List*temps;struct Cyc_Absyn_Exp*assign_last_exp;struct _fat_ptr*break_label;struct _fat_ptr*continue_label;};
# 60 "cyclone/library/compiler/lower.cyc"
static struct Cyc_Lower_Env*Cyc_Lower_new_env (void){struct Cyc_Lower_Env*_T0;{struct Cyc_Lower_Env*_T1=_cycalloc(sizeof(struct Cyc_Lower_Env));
_T1->stmts= 0;
_T1->temps= 0;
_T1->assign_last_exp= 0;
_T1->break_label= 0;
_T1->continue_label= 0;_T0= (struct Cyc_Lower_Env*)_T1;}
# 61
return _T0;}
# 68
static struct Cyc_Absyn_Stmt*Cyc_Lower_rev_seq_stmts(struct Cyc_List_List*ss){struct Cyc_Absyn_Stmt*_T0;struct Cyc_List_List*_T1;void*_T2;struct Cyc_List_List*_T3;struct Cyc_List_List*_T4;void*_T5;struct Cyc_Absyn_Stmt*_T6;int*_T7;unsigned _T8;struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct*_T9;struct Cyc_Absyn_Stmt*_TA;struct Cyc_Absyn_Stmt*_TB;void*_TC;int*_TD;int _TE;struct _fat_ptr*_TF;struct Cyc_Absyn_Stmt*_T10;struct Cyc_Absyn_Stmt*_T11;unsigned _T12;struct Cyc_Absyn_Stmt*_T13;struct Cyc_Absyn_Stmt*_T14;struct Cyc_Absyn_Stmt*_T15;unsigned _T16;struct Cyc_List_List*_T17;struct Cyc_Absyn_Stmt*_T18;
if(ss!=0)goto _TL0;_T0= 
Cyc_Absyn_skip_stmt(0U);return _T0;_TL0: _T1= ss;_T2= _T1->hd;{
struct Cyc_Absyn_Stmt*res=(struct Cyc_Absyn_Stmt*)_T2;_T3= ss;
ss= _T3->tl;_TL5: if(ss!=0)goto _TL3;else{goto _TL4;}
_TL3: _T4= ss;_T5= _T4->hd;{struct Cyc_Absyn_Stmt*s=(struct Cyc_Absyn_Stmt*)_T5;_T6= s;{
void*_T19=_T6->r;struct _fat_ptr*_T1A;_T7= (int*)_T19;_T8= *_T7;switch(_T8){case 0: goto _TL2;case 13: _T9= (struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct*)_T19;_TA= _T9->f2;_TB= (struct Cyc_Absyn_Stmt*)_TA;_TC= _TB->r;_TD= (int*)_TC;_TE= *_TD;if(_TE!=0)goto _TL7;{struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct*_T1B=(struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct*)_T19;_T1A= _T1B->f1;}{struct _fat_ptr*x=_T1A;_TF= x;_T10= res;_T11= s;_T12= _T11->loc;
# 78
res= Cyc_Absyn_label_stmt(_TF,_T10,_T12);goto _TL2;}_TL7: goto _LL5;default: _LL5: _T13= s;_T14= res;_T15= s;_T16= _T15->loc;
# 81
res= Cyc_Absyn_seq_stmt(_T13,_T14,_T16);};}}_TL2: _T17= ss;
# 72
ss= _T17->tl;goto _TL5;_TL4: _T18= res;
# 84
return _T18;}}
# 87
static struct Cyc_Absyn_Exp*Cyc_Lower_deep_copy(struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;_T0= Cyc_Tcutil_deep_copy_exp(1,e);return _T0;}
# 90
static void Cyc_Lower_print_env(struct Cyc_Lower_Env*env){struct Cyc___cycFILE*_T0;struct _fat_ptr _T1;struct _fat_ptr _T2;struct Cyc_Lower_Env*_T3;struct Cyc_List_List*_T4;struct Cyc_String_pa_PrintArg_struct _T5;struct Cyc_List_List*_T6;void*_T7;struct Cyc_Absyn_Stmt*_T8;struct Cyc___cycFILE*_T9;struct _fat_ptr _TA;struct _fat_ptr _TB;struct Cyc_List_List*_TC;struct Cyc___cycFILE*_TD;struct _fat_ptr _TE;struct _fat_ptr _TF;_T0= Cyc_stderr;_T1= 
_tag_fat("env->stmts:\n",sizeof(char),13U);_T2= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T0,_T1,_T2);_T3= env;_T4= _T3->stmts;{
struct Cyc_List_List*ss=Cyc_List_rev(_T4);_TLC: if(ss!=0)goto _TLA;else{goto _TLB;}
_TLA:{struct Cyc_String_pa_PrintArg_struct _T10;_T10.tag= 0;_T6= ss;_T7= _T6->hd;_T8= (struct Cyc_Absyn_Stmt*)_T7;({__typeof__(Cyc_Absynpp_stmt2string(_T8))_T11=Cyc_Absynpp_stmt2string(_T8);_T10.f1= _T11;});_T5= _T10;}{struct Cyc_String_pa_PrintArg_struct _T10=_T5;void*_T11[1];_T11[0]= & _T10;_T9= Cyc_stderr;_TA= _tag_fat("%s\n",sizeof(char),4U);_TB= _tag_fat(_T11,sizeof(void*),1);Cyc_fprintf(_T9,_TA,_TB);}_TC= ss;
# 92
ss= _TC->tl;goto _TLC;_TLB:;}_TD= Cyc_stderr;_TE= 
# 94
_tag_fat("-------------\n\n",sizeof(char),16U);_TF= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_TD,_TE,_TF);}
# 98
static struct Cyc_Absyn_Stmt*Cyc_Lower_assign_it(struct Cyc_Absyn_Exp*e1,struct Cyc_Absyn_Exp*e2,unsigned loc){struct Cyc_Absyn_Exp*_T0;struct Cyc_Absyn_Exp*_T1;struct Cyc_Absyn_Stmt*_T2;
struct Cyc_Absyn_Exp*e=Cyc_Absyn_assign_exp(e1,e2,loc);_T0= e;_T1= e1;
# 101
_T0->topt= _T1->topt;_T2= 
Cyc_Absyn_exp_stmt(e,loc);return _T2;}
# 105
static struct Cyc_Absyn_Exp*Cyc_Lower_get_assign_last_exp(struct Cyc_Lower_Env*env){struct Cyc_Lower_Env*_T0;struct Cyc_Absyn_Exp*_T1;_T0= env;_T1= _T0->assign_last_exp;return _T1;}
# 107
static void Cyc_Lower_set_assign_last_exp(struct Cyc_Lower_Env*env,struct Cyc_Absyn_Exp*e){struct Cyc_Lower_Env*_T0;_T0= env;_T0->assign_last_exp= e;}
# 109
static struct _fat_ptr*Cyc_Lower_get_break_label(struct Cyc_Lower_Env*env){struct Cyc_Lower_Env*_T0;struct _fat_ptr*_T1;_T0= env;_T1= _T0->break_label;return _T1;}
# 111
static struct _fat_ptr*Cyc_Lower_get_continue_label(struct Cyc_Lower_Env*env){struct Cyc_Lower_Env*_T0;struct _fat_ptr*_T1;_T0= env;_T1= _T0->continue_label;return _T1;}struct _tuple13{struct _fat_ptr*f0;struct _fat_ptr*f1;};
# 113
static struct _tuple13 Cyc_Lower_get_loop_labels(struct Cyc_Lower_Env*env){struct _tuple13 _T0;struct Cyc_Lower_Env*_T1;struct Cyc_Lower_Env*_T2;{struct _tuple13 _T3;_T1= env;
_T3.f0= _T1->continue_label;_T2= env;_T3.f1= _T2->break_label;_T0= _T3;}return _T0;}
# 117
static struct Cyc_Lower_Env*Cyc_Lower_set_loop_labels(struct Cyc_Lower_Env*env,struct _fat_ptr*continue_lab,struct _fat_ptr*break_lab){struct Cyc_Lower_Env*_T0;struct Cyc_Lower_Env*_T1;struct Cyc_Lower_Env*_T2;_T0= env;
_T0->continue_label= continue_lab;_T1= env;
_T1->break_label= break_lab;_T2= env;
return _T2;}
# 123
static struct Cyc_List_List*Cyc_Lower_prev_stmts(struct Cyc_Lower_Env*env){struct Cyc_Lower_Env*_T0;struct Cyc_List_List*_T1;_T0= env;_T1= _T0->stmts;return _T1;}
# 125
static void Cyc_Lower_set_prev_stmts(struct Cyc_Lower_Env*env,struct Cyc_List_List*ss){struct Cyc_Lower_Env*_T0;_T0= env;_T0->stmts= ss;}
# 128
static struct _fat_ptr*Cyc_Lower_new_label(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Lower_Env*env){unsigned _T0;struct _fat_ptr*_T1;struct _fat_ptr _T2;struct Cyc_Int_pa_PrintArg_struct _T3;struct _fat_ptr _T4;struct _fat_ptr _T5;
static unsigned counter=0U;_T0= counter;
counter= _T0 + 1;{unsigned c=_T0;{struct _fat_ptr*_T6=_cycalloc(sizeof(struct _fat_ptr));{struct Cyc_Int_pa_PrintArg_struct _T7;_T7.tag= 1;
# 132
_T7.f1= c;_T3= _T7;}{struct Cyc_Int_pa_PrintArg_struct _T7=_T3;void*_T8[1];_T8[0]= & _T7;_T4= _tag_fat("_TL%X",sizeof(char),6U);_T5= _tag_fat(_T8,sizeof(void*),1);_T2= Cyc_aprintf(_T4,_T5);}*_T6= _T2;_T1= (struct _fat_ptr*)_T6;}return _T1;}}
# 138
static long Cyc_Lower_is_macro(struct Cyc_Toc_TocContext*ctxt,struct _tuple0*x){struct _tuple0*_T0;struct _tuple0*_T1;union Cyc_Absyn_Nmspace _T2;struct _union_Nmspace_Loc_n _T3;unsigned _T4;struct _tuple0*_T5;struct Cyc_Toc_TocContext*_T6;struct _fat_ptr _T7;int _T8;unsigned _T9;unsigned _TA;struct _fat_ptr*_TB;struct Cyc_Toc_TocContext*_TC;struct _fat_ptr _TD;int _TE;unsigned char*_TF;struct _fat_ptr**_T10;struct _fat_ptr*_T11;int _T12;{struct _fat_ptr*_T13;_T0= x;_T1= (struct _tuple0*)_T0;_T2= _T1->f0;_T3= _T2.Loc_n;_T4= _T3.tag;if(_T4!=4)goto _TLD;_T5= x;{struct _tuple0 _T14=*_T5;_T13= _T14.f1;}{struct _fat_ptr*v=_T13;_T6= 
# 141
_check_null(ctxt);_T7= _T6->globals;{unsigned n=_get_fat_size(_T7,sizeof(struct _fat_ptr*));{
int i=0;_TL12: _T8= i;_T9= (unsigned)_T8;_TA= n;if(_T9 < _TA)goto _TL10;else{goto _TL11;}
_TL10: _TB= v;_TC= ctxt;_TD= _TC->globals;_TE= i;_TF= _check_fat_subscript(_TD,sizeof(struct _fat_ptr*),_TE);_T10= (struct _fat_ptr**)_TF;_T11= *_T10;_T12= Cyc_strptrcmp(_TB,_T11);if(_T12!=0)goto _TL13;
return 1;_TL13:
# 142
 i= i + 1;goto _TL12;_TL11:;}goto _LL0;}}_TLD: goto _LL0;_LL0:;}
# 149
return 0;}struct _tuple14{struct Cyc_Absyn_Vardecl*f0;struct Cyc_Absyn_Exp*f1;};
# 155
static struct _tuple14 Cyc_Lower_fresh_var(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Lower_Env*env,struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;void*_T1;struct Cyc_Absyn_Exp*_T2;int*_T3;unsigned _T4;void*_T5;struct Cyc_Toc_TocContext*_T6;struct _tuple0*_T7;long _T8;void*_T9;int*_TA;unsigned _TB;void*_TC;void*_TD;void*_TE;void*_TF;struct Cyc_Absyn_Exp*_T10;struct Cyc_Absyn_Vardecl*_T11;long _T12;struct Cyc_String_pa_PrintArg_struct _T13;struct Cyc_Absyn_Exp*_T14;unsigned _T15;struct _fat_ptr _T16;struct _fat_ptr _T17;struct Cyc_Absyn_Exp*_T18;int*_T19;unsigned _T1A;struct Cyc_Absyn_ArrayInfo _T1B;struct Cyc_Absyn_ArrayInfo _T1C;struct Cyc_Absyn_Tqual _T1D;struct Cyc_Absyn_Exp*_T1E;struct Cyc_Lower_Env*_T1F;struct Cyc_List_List*_T20;struct Cyc_Lower_Env*_T21;struct _tuple14 _T22;
void*t;
# 158
LOOP: _T0= e;_T1= _T0->topt;
if(_T1!=0)goto _TL15;{
long ism=0;_T2= e;{
void*_T23=_T2->r;void*_T24;_T3= (int*)_T23;_T4= *_T3;switch(_T4){case 1:{struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T25=(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T23;_T5= _T25->f1;_T24= (void*)_T5;}{void*b=_T24;_T6= ctxt;_T7= 
# 163
Cyc_Absyn_binding2qvar(b);_T8= Cyc_Lower_is_macro(_T6,_T7);if(!_T8)goto _TL18;
ism= 1;goto _TL19;_TL18: _TL19: goto _LL0;{struct Cyc_Absyn_Vardecl*_T25;_T9= b;_TA= (int*)_T9;_TB= *_TA;switch(_TB){case 1: _TC= b;{struct Cyc_Absyn_Global_b_Absyn_Binding_struct*_T26=(struct Cyc_Absyn_Global_b_Absyn_Binding_struct*)_TC;_T25= _T26->f1;}{struct Cyc_Absyn_Vardecl*vd=_T25;_T25= vd;goto _LL11;}case 3: _TD= b;{struct Cyc_Absyn_Param_b_Absyn_Binding_struct*_T26=(struct Cyc_Absyn_Param_b_Absyn_Binding_struct*)_TD;_T25= _T26->f1;}_LL11: {struct Cyc_Absyn_Vardecl*vd=_T25;_T25= vd;goto _LL13;}case 4: _TE= b;{struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T26=(struct Cyc_Absyn_Local_b_Absyn_Binding_struct*)_TE;_T25= _T26->f1;}_LL13: {struct Cyc_Absyn_Vardecl*vd=_T25;_T25= vd;goto _LL15;}case 5: _TF= b;{struct Cyc_Absyn_Pat_b_Absyn_Binding_struct*_T26=(struct Cyc_Absyn_Pat_b_Absyn_Binding_struct*)_TF;_T25= _T26->f1;}_LL15: {struct Cyc_Absyn_Vardecl*vd=_T25;_T10= e;_T11= vd;
# 174
_T10->topt= _T11->type;goto LOOP;}default: goto _LLD;}_LLD:;}goto _LL0;}case 17:
# 181
 ism= 1;goto _LL0;case 0:
# 184
 ism= 1;goto _LL0;case 2:
# 187
 ism= 1;goto _LL0;case 13:
# 190
 ism= 1;goto _LL0;default: goto _LL0;}_LL0:;}_T12= ism;
# 195
if(_T12)goto _TL1B;else{goto _TL1D;}
_TL1D:{struct Cyc_String_pa_PrintArg_struct _T23;_T23.tag= 0;({__typeof__(Cyc_Absynpp_exp2string(e))_T24=Cyc_Absynpp_exp2string(e);_T23.f1= _T24;});_T13= _T23;}{struct Cyc_String_pa_PrintArg_struct _T23=_T13;void*_T24[1];_T24[0]= & _T23;_T14= e;_T15= _T14->loc;_T16= _tag_fat("expression missing type: %s",sizeof(char),28U);_T17= _tag_fat(_T24,sizeof(void*),1);Cyc_Warn_warn(_T15,_T16,_T17);}goto _TL1C;_TL1B: _TL1C:
 t= Cyc_Absyn_typeof_type(e);}goto _TL16;
# 199
_TL15: _T18= e;t= _T18->topt;_TL16:{
# 201
void*_T23=Cyc_Absyn_compress(t);struct Cyc_Absyn_Tqual _T24;void*_T25;_T19= (int*)_T23;_T1A= *_T19;switch(_T1A){case 5:{struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T26=(struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_T23;_T1B= _T26->f1;_T25= _T1B.elt_type;_T1C= _T26->f1;_T24= _T1C.tq;}{void*t2=_T25;struct Cyc_Absyn_Tqual tq=_T24;
# 203
t= Cyc_Absyn_star_type(t2,Cyc_Absyn_heap_rgn_type,Cyc_Absyn_al_qual_type,tq,Cyc_Absyn_false_type,Cyc_Absyn_false_type);goto _LL18;}case 6:{struct Cyc_Absyn_Tqual _T26;
# 206
_T26.print_const= 0;_T26.q_volatile= 0;_T26.q_restrict= 0;_T26.real_const= 0;_T26.loc= 0U;_T1D= _T26;}{struct Cyc_Absyn_Tqual tq=_T1D;
t= Cyc_Absyn_star_type(t,Cyc_Absyn_heap_rgn_type,Cyc_Absyn_al_qual_type,tq,Cyc_Absyn_false_type,Cyc_Absyn_false_type);goto _LL18;}default: goto _LL18;}_LL18:;}{
# 212
struct _tuple0*v=Cyc_Toc_temp_var(ctxt);
struct Cyc_Absyn_Vardecl*vd=Cyc_Absyn_new_vardecl(0U,v,t,0,0);
struct Cyc_Absyn_Exp*e=Cyc_Absyn_var_exp(v,0U);_T1E= e;
_T1E->topt= t;_T1F= env;{struct Cyc_List_List*_T23=_cycalloc(sizeof(struct Cyc_List_List));
_T23->hd= vd;_T21= env;_T23->tl= _T21->temps;_T20= (struct Cyc_List_List*)_T23;}_T1F->temps= _T20;{struct _tuple14 _T23;
_T23.f0= vd;_T23.f1= e;_T22= _T23;}return _T22;}}
# 221
static void Cyc_Lower_emit_stmt(struct Cyc_Lower_Env*env,struct Cyc_Absyn_Stmt*s){struct Cyc_Lower_Env*_T0;struct Cyc_List_List*_T1;struct Cyc_Lower_Env*_T2;_T0= env;{struct Cyc_List_List*_T3=_cycalloc(sizeof(struct Cyc_List_List));_T3->hd= s;_T2= env;_T3->tl= _T2->stmts;_T1= (struct Cyc_List_List*)_T3;}_T0->stmts= _T1;}
# 223
static void Cyc_Lower_emit_assign(struct Cyc_Lower_Env*env,struct Cyc_Absyn_Exp*lhs,struct Cyc_Absyn_Exp*rhs,unsigned loc){struct Cyc_Lower_Env*_T0;struct Cyc_Absyn_Stmt*_T1;_T0= env;_T1= 
Cyc_Lower_assign_it(lhs,rhs,loc);Cyc_Lower_emit_stmt(_T0,_T1);}
# 227
static void Cyc_Lower_emit_label(struct Cyc_Lower_Env*env,struct _fat_ptr*label,unsigned loc){struct Cyc_Lower_Env*_T0;struct _fat_ptr*_T1;struct Cyc_Absyn_Stmt*_T2;unsigned _T3;struct Cyc_Absyn_Stmt*_T4;_T0= env;_T1= label;_T2= 
Cyc_Absyn_skip_stmt(0U);_T3= loc;_T4= Cyc_Absyn_label_stmt(_T1,_T2,_T3);Cyc_Lower_emit_stmt(_T0,_T4);}
# 232
static struct Cyc_Absyn_Exp*Cyc_Lower_lower_rhs(struct Cyc_Toc_TocContext*,struct Cyc_Lower_Env*,long,long,struct Cyc_Absyn_Exp*);
static struct Cyc_Absyn_Exp*Cyc_Lower_lower_rhs_subs(struct Cyc_Toc_TocContext*,struct Cyc_Lower_Env*,struct Cyc_Absyn_Exp*);
static struct Cyc_Absyn_Exp*Cyc_Lower_lower_lhs(struct Cyc_Toc_TocContext*,struct Cyc_Lower_Env*,struct Cyc_Absyn_Exp*);
# 236
static void Cyc_Lower_lower_cond(struct Cyc_Toc_TocContext*,struct Cyc_Lower_Env*,struct Cyc_Absyn_Exp*,struct _fat_ptr*,struct _fat_ptr*,unsigned);
static struct _fat_ptr*Cyc_Lower_lower_true(struct Cyc_Toc_TocContext*,struct Cyc_Lower_Env*,struct Cyc_Absyn_Exp*,struct _fat_ptr*,unsigned);
static struct Cyc_Absyn_Fndecl*Cyc_Lower_lower_fn(struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Fndecl*);struct _tuple15{struct _fat_ptr*f0;struct _fat_ptr*f1;struct _fat_ptr*f2;};
# 245
static long Cyc_Lower_lower_stmt(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Lower_Env*env,struct Cyc_Absyn_Stmt*s){struct Cyc_Absyn_Stmt*_T0;int*_T1;unsigned _T2;struct Cyc_Lower_Env*_T3;struct Cyc_Absyn_Exp*_T4;struct Cyc_Absyn_Exp*_T5;struct Cyc_Lower_Env*_T6;struct Cyc_Absyn_Exp*_T7;struct Cyc_Absyn_Stmt*_T8;unsigned _T9;struct Cyc_Absyn_Stmt*_TA;struct Cyc_Lower_Env*_TB;struct Cyc_Absyn_Stmt*_TC;unsigned _TD;struct Cyc_Absyn_Stmt*_TE;struct _tuple13 _TF;struct Cyc_Toc_TocContext*_T10;struct Cyc_Lower_Env*_T11;struct Cyc_Absyn_Exp*_T12;struct _fat_ptr*_T13;struct Cyc_Absyn_Stmt*_T14;unsigned _T15;struct Cyc_Lower_Env*_T16;struct _fat_ptr*_T17;struct Cyc_Absyn_Stmt*_T18;unsigned _T19;long _T1A;struct Cyc_Lower_Env*_T1B;struct Cyc_Absyn_Stmt*_T1C;struct Cyc_Lower_Env*_T1D;struct _fat_ptr*_T1E;struct Cyc_Absyn_Stmt*_T1F;unsigned _T20;long _T21;long _T22;struct _tuple9 _T23;struct _tuple15 _T24;struct Cyc_Lower_Env*_T25;struct _fat_ptr*_T26;struct Cyc_Absyn_Exp*_T27;unsigned _T28;struct Cyc_Toc_TocContext*_T29;struct Cyc_Lower_Env*_T2A;struct Cyc_Absyn_Exp*_T2B;struct _fat_ptr*_T2C;struct _fat_ptr*_T2D;struct Cyc_Absyn_Stmt*_T2E;unsigned _T2F;struct Cyc_Lower_Env*_T30;struct _fat_ptr*_T31;struct Cyc_Absyn_Stmt*_T32;unsigned _T33;struct Cyc_Toc_TocContext*_T34;struct Cyc_Lower_Env*_T35;struct Cyc_Absyn_Stmt*_T36;struct Cyc_Absyn_Stmt*_T37;struct Cyc_Absyn_Stmt*_T38;struct Cyc_Lower_Env*_T39;struct _fat_ptr*_T3A;struct _fat_ptr*_T3B;struct Cyc_Absyn_Stmt*_T3C;struct Cyc_Lower_Env*_T3D;struct _fat_ptr*_T3E;struct _fat_ptr*_T3F;struct Cyc_Absyn_Stmt*_T40;struct Cyc_Lower_Env*_T41;struct Cyc_Absyn_Stmt*_T42;struct _tuple9 _T43;struct _tuple9 _T44;struct _tuple15 _T45;struct Cyc_Lower_Env*_T46;struct _fat_ptr*_T47;struct Cyc_Absyn_Exp*_T48;unsigned _T49;struct Cyc_Toc_TocContext*_T4A;struct Cyc_Lower_Env*_T4B;struct Cyc_Absyn_Exp*_T4C;struct _fat_ptr*_T4D;struct _fat_ptr*_T4E;struct Cyc_Absyn_Stmt*_T4F;unsigned _T50;struct Cyc_Lower_Env*_T51;struct _fat_ptr*_T52;struct Cyc_Absyn_Stmt*_T53;unsigned _T54;struct Cyc_Toc_TocContext*_T55;struct Cyc_Lower_Env*_T56;struct Cyc_Absyn_Stmt*_T57;struct _fat_ptr*_T58;struct Cyc_Absyn_Exp*_T59;struct Cyc_Absyn_Exp*_T5A;unsigned _T5B;struct Cyc_Absyn_Stmt*_T5C;struct Cyc_Absyn_Stmt*_T5D;struct Cyc_Absyn_Stmt*_T5E;struct Cyc_Absyn_Stmt*_T5F;struct Cyc_Absyn_Stmt*_T60;struct Cyc_List_List*_T61;void*_T62;struct Cyc_List_List*_T63;struct Cyc_Absyn_Switch_clause*_T64;struct Cyc_Absyn_Switch_clause*_T65;struct Cyc_Absyn_Switch_clause*_T66;struct Cyc_Absyn_Switch_clause*_T67;struct Cyc_Absyn_Switch_clause*_T68;struct Cyc_List_List*_T69;struct Cyc_List_List*_T6A;struct Cyc_Lower_Env*_T6B;struct Cyc_Absyn_Exp*_T6C;struct Cyc_List_List*_T6D;struct Cyc_Absyn_Stmt*_T6E;unsigned _T6F;struct Cyc_Absyn_Stmt*_T70;struct Cyc_Absyn_Decl*_T71;int*_T72;unsigned _T73;struct Cyc_Absyn_Vardecl*_T74;struct Cyc_Absyn_Vardecl*_T75;struct Cyc_Absyn_Vardecl*_T76;enum Cyc_Absyn_Scope _T77;int _T78;struct Cyc_Absyn_Vardecl*_T79;struct Cyc_Absyn_Exp*_T7A;struct Cyc_Absyn_Vardecl*_T7B;struct Cyc_Absyn_Vardecl*_T7C;struct Cyc_List_List*_T7D;struct Cyc_Lower_Env*_T7E;struct Cyc_Absyn_Decl*_T7F;struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T80;struct Cyc_Absyn_Decl*_T81;struct Cyc_Absyn_Stmt*_T82;struct Cyc_Absyn_Stmt*_T83;long _T84;struct Cyc_Absyn_Decl*_T85;struct Cyc_Absyn_Fndecl*_T86;enum Cyc_Absyn_Scope _T87;int _T88;struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*_T89;struct Cyc_List_List*_T8A;struct Cyc_Lower_Env*_T8B;struct Cyc_Absyn_Decl*_T8C;struct Cyc_Absyn_Decl*_T8D;struct Cyc_Absyn_Decl*_T8E;struct Cyc_Absyn_Stmt*_T8F;struct Cyc_Absyn_Stmt*_T90;long _T91;int(*_T92)(struct _fat_ptr,struct _fat_ptr);void*(*_T93)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T94;struct _fat_ptr _T95;int(*_T96)(struct _fat_ptr,struct _fat_ptr);void*(*_T97)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T98;struct _fat_ptr _T99;int(*_T9A)(struct _fat_ptr,struct _fat_ptr);void*(*_T9B)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T9C;struct _fat_ptr _T9D;int(*_T9E)(struct _fat_ptr,struct _fat_ptr);void*(*_T9F)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _TA0;struct _fat_ptr _TA1;int(*_TA2)(struct _fat_ptr,struct _fat_ptr);void*(*_TA3)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _TA4;struct _fat_ptr _TA5;int(*_TA6)(struct _fat_ptr,struct _fat_ptr);void*(*_TA7)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _TA8;struct _fat_ptr _TA9;int(*_TAA)(struct _fat_ptr,struct _fat_ptr);void*(*_TAB)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _TAC;struct _fat_ptr _TAD;int(*_TAE)(struct _fat_ptr,struct _fat_ptr);void*(*_TAF)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _TB0;struct _fat_ptr _TB1;int(*_TB2)(struct _fat_ptr,struct _fat_ptr);void*(*_TB3)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _TB4;struct _fat_ptr _TB5;int(*_TB6)(struct _fat_ptr,struct _fat_ptr);void*(*_TB7)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _TB8;struct _fat_ptr _TB9;int(*_TBA)(struct _fat_ptr,struct _fat_ptr);void*(*_TBB)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _TBC;struct _fat_ptr _TBD;int(*_TBE)(struct _fat_ptr,struct _fat_ptr);void*(*_TBF)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _TC0;struct _fat_ptr _TC1;int(*_TC2)(struct _fat_ptr,struct _fat_ptr);void*(*_TC3)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _TC4;struct _fat_ptr _TC5;int(*_TC6)(struct _fat_ptr,struct _fat_ptr);void*(*_TC7)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _TC8;struct _fat_ptr _TC9;int(*_TCA)(struct _fat_ptr,struct _fat_ptr);void*(*_TCB)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _TCC;struct _fat_ptr _TCD;struct Cyc_Lower_Env*_TCE;struct _fat_ptr*_TCF;struct Cyc_Absyn_Stmt*_TD0;unsigned _TD1;long _TD2;struct _tuple9 _TD3;struct _tuple13 _TD4;struct Cyc_Lower_Env*_TD5;struct _fat_ptr*_TD6;struct Cyc_Absyn_Stmt*_TD7;unsigned _TD8;struct Cyc_Toc_TocContext*_TD9;struct Cyc_Lower_Env*_TDA;struct Cyc_Absyn_Stmt*_TDB;struct Cyc_Toc_TocContext*_TDC;struct Cyc_Lower_Env*_TDD;struct Cyc_Absyn_Exp*_TDE;struct _fat_ptr*_TDF;struct _fat_ptr*_TE0;struct Cyc_Absyn_Stmt*_TE1;unsigned _TE2;int(*_TE3)(struct _fat_ptr,struct _fat_ptr);void*(*_TE4)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _TE5;struct _fat_ptr _TE6;int(*_TE7)(struct _fat_ptr,struct _fat_ptr);void*(*_TE8)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _TE9;struct _fat_ptr _TEA;
# 250
LOOP: _T0= s;{
void*_TEB=_T0->r;struct Cyc_Absyn_Decl*_TEC;struct Cyc_List_List*_TED;struct Cyc_Absyn_Exp*_TEE;struct Cyc_Absyn_Exp*_TEF;struct _fat_ptr*_TF0;struct Cyc_Absyn_Stmt*_TF1;struct Cyc_Absyn_Stmt*_TF2;struct Cyc_Absyn_Exp*_TF3;_T1= (int*)_TEB;_T2= *_T1;switch(_T2){case 0:
# 253
 return 1;case 1:{struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct*_TF4=(struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct*)_TEB;_TF3= _TF4->f1;}{struct Cyc_Absyn_Exp*e=_TF3;{
# 255
struct Cyc_Absyn_Exp*_TF4=Cyc_Lower_get_assign_last_exp(env);struct Cyc_Absyn_Exp*_TF5;if(_TF4!=0)goto _TL20;
# 257
Cyc_Lower_lower_rhs(ctxt,env,1,0,e);goto _LL21;_TL20: _TF5= _TF4;{struct Cyc_Absyn_Exp*v=_TF5;
# 260
Cyc_Lower_set_assign_last_exp(env,0);_T3= env;_T4= v;_T5= 
Cyc_Lower_lower_rhs(ctxt,env,0,1,e);Cyc_Lower_emit_assign(_T3,_T4,_T5,0U);goto _LL21;}_LL21:;}
# 264
return 1;}case 2:{struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*_TF4=(struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*)_TEB;_TF2= _TF4->f1;_TF1= _TF4->f2;}{struct Cyc_Absyn_Stmt*s1=_TF2;struct Cyc_Absyn_Stmt*s2=_TF1;
# 266
struct Cyc_Absyn_Exp*eopt=Cyc_Lower_get_assign_last_exp(env);
Cyc_Lower_set_assign_last_exp(env,0);
Cyc_Lower_lower_stmt(ctxt,env,s1);
Cyc_Lower_set_assign_last_exp(env,eopt);
s= s2;goto LOOP;}case 3:{struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct*_TF4=(struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct*)_TEB;_TF3= _TF4->f1;}{struct Cyc_Absyn_Exp*e=_TF3;
# 273
if(e==0)goto _TL22;{
struct Cyc_Absyn_Exp*v=Cyc_Lower_lower_rhs(ctxt,env,0,0,e);_T6= env;_T7= v;_T8= s;_T9= _T8->loc;_TA= 
Cyc_Absyn_return_stmt(_T7,_T9);Cyc_Lower_emit_stmt(_T6,_TA);}goto _TL23;
# 277
_TL22: _TB= env;_TC= s;_TD= _TC->loc;_TE= Cyc_Absyn_return_stmt(0,_TD);Cyc_Lower_emit_stmt(_TB,_TE);_TL23:
 return 0;}case 4:{struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct*_TF4=(struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct*)_TEB;_TF3= _TF4->f1;_TF2= _TF4->f2;_TF1= _TF4->f3;}{struct Cyc_Absyn_Exp*e=_TF3;struct Cyc_Absyn_Stmt*s1=_TF2;struct Cyc_Absyn_Stmt*s2=_TF1;{struct _tuple13 _TF4;
# 280
({__typeof__(Cyc_Lower_new_label(ctxt,env))_TF5=Cyc_Lower_new_label(ctxt,env);_TF4.f0= _TF5;});({__typeof__(Cyc_Lower_new_label(ctxt,env))_TF5=Cyc_Lower_new_label(ctxt,env);_TF4.f1= _TF5;});_TF= _TF4;}{struct _tuple13 _TF4=_TF;struct _fat_ptr*_TF5;struct _fat_ptr*_TF6;_TF6= _TF4.f0;_TF5= _TF4.f1;{struct _fat_ptr*f_lab=_TF6;struct _fat_ptr*j_lab=_TF5;_T10= ctxt;_T11= env;_T12= e;_T13= f_lab;_T14= s;_T15= _T14->loc;{
struct _fat_ptr*t_lab_opt=Cyc_Lower_lower_true(_T10,_T11,_T12,_T13,_T15);
if(t_lab_opt==0)goto _TL24;_T16= env;_T17= t_lab_opt;_T18= s1;_T19= _T18->loc;
Cyc_Lower_emit_label(_T16,_T17,_T19);goto _TL25;_TL24: _TL25: {
long a=Cyc_Lower_lower_stmt(ctxt,env,s1);_T1A= a;
if(!_T1A)goto _TL26;_T1B= env;_T1C= 
Cyc_Absyn_goto_stmt(j_lab,0U);Cyc_Lower_emit_stmt(_T1B,_T1C);goto _TL27;_TL26: _TL27: _T1D= env;_T1E= f_lab;_T1F= s2;_T20= _T1F->loc;
Cyc_Lower_emit_label(_T1D,_T1E,_T20);{
long b=Cyc_Lower_lower_stmt(ctxt,env,s2);_T21= a;
if(_T21)goto _TL2A;else{goto _TL2B;}_TL2B: _T22= b;if(_T22)goto _TL2A;else{goto _TL28;}
_TL2A: Cyc_Lower_emit_label(env,j_lab,0U);
return 1;_TL28:
# 293
 return 0;}}}}}}case 5:{struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct*_TF4=(struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct*)_TEB;_T23= _TF4->f1;_TF3= _T23.f0;_TF2= _TF4->f2;}{struct Cyc_Absyn_Exp*e=_TF3;struct Cyc_Absyn_Stmt*s1=_TF2;{struct _tuple15 _TF4;
# 295
({__typeof__(Cyc_Lower_new_label(ctxt,env))_TF5=Cyc_Lower_new_label(ctxt,env);_TF4.f0= _TF5;});({__typeof__(Cyc_Lower_new_label(ctxt,env))_TF5=Cyc_Lower_new_label(ctxt,env);_TF4.f1= _TF5;});({__typeof__(Cyc_Lower_new_label(ctxt,env))_TF5=Cyc_Lower_new_label(ctxt,env);_TF4.f2= _TF5;});_T24= _TF4;}{struct _tuple15 _TF4=_T24;struct _fat_ptr*_TF5;struct _fat_ptr*_TF6;struct _fat_ptr*_TF7;_TF7= _TF4.f0;_TF6= _TF4.f1;_TF5= _TF4.f2;{struct _fat_ptr*c_lab=_TF7;struct _fat_ptr*t_lab=_TF6;struct _fat_ptr*b_lab=_TF5;_T25= env;_T26= c_lab;_T27= e;_T28= _T27->loc;
Cyc_Lower_emit_label(_T25,_T26,_T28);_T29= ctxt;_T2A= env;_T2B= e;_T2C= t_lab;_T2D= b_lab;_T2E= s;_T2F= _T2E->loc;
Cyc_Lower_lower_cond(_T29,_T2A,_T2B,_T2C,_T2D,_T2F);_T30= env;_T31= t_lab;_T32= s1;_T33= _T32->loc;
Cyc_Lower_emit_label(_T30,_T31,_T33);{
struct _tuple13 _TF8=Cyc_Lower_get_loop_labels(env);struct _fat_ptr*_TF9;struct _fat_ptr*_TFA;_TFA= _TF8.f0;_TF9= _TF8.f1;{struct _fat_ptr*old_c_lab=_TFA;struct _fat_ptr*old_b_lab=_TF9;_T34= ctxt;_T35= 
Cyc_Lower_set_loop_labels(env,c_lab,b_lab);_T36= s1;_T37= Cyc_Absyn_goto_stmt(c_lab,0U);_T38= Cyc_Absyn_seq_stmt(_T36,_T37,0U);Cyc_Lower_lower_stmt(_T34,_T35,_T38);
Cyc_Lower_emit_label(env,b_lab,0U);
Cyc_Lower_set_loop_labels(env,old_c_lab,old_b_lab);
return 1;}}}}}case 6: _T39= env;_T3A= 
# 305
Cyc_Lower_get_break_label(env);_T3B= _check_null(_T3A);_T3C= Cyc_Absyn_goto_stmt(_T3B,0U);Cyc_Lower_emit_stmt(_T39,_T3C);
return 0;case 7: _T3D= env;_T3E= 
# 308
Cyc_Lower_get_continue_label(env);_T3F= _check_null(_T3E);_T40= Cyc_Absyn_goto_stmt(_T3F,0U);Cyc_Lower_emit_stmt(_T3D,_T40);
return 0;case 8:{struct Cyc_Absyn_Goto_s_Absyn_Raw_stmt_struct*_TF4=(struct Cyc_Absyn_Goto_s_Absyn_Raw_stmt_struct*)_TEB;_TF0= _TF4->f1;}{struct _fat_ptr*x=_TF0;_T41= env;_T42= 
# 311
Cyc_Absyn_goto_stmt(x,0U);Cyc_Lower_emit_stmt(_T41,_T42);
return 0;}case 9:{struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct*_TF4=(struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct*)_TEB;_TF3= _TF4->f1;_T43= _TF4->f2;_TEF= _T43.f0;_T44= _TF4->f3;_TEE= _T44.f0;_TF2= _TF4->f4;}{struct Cyc_Absyn_Exp*e1=_TF3;struct Cyc_Absyn_Exp*e2=_TEF;struct Cyc_Absyn_Exp*e3=_TEE;struct Cyc_Absyn_Stmt*s1=_TF2;
# 314
Cyc_Lower_lower_rhs(ctxt,env,1,0,e1);{struct _tuple15 _TF4;
({__typeof__(Cyc_Lower_new_label(ctxt,env))_TF5=Cyc_Lower_new_label(ctxt,env);_TF4.f0= _TF5;});({__typeof__(Cyc_Lower_new_label(ctxt,env))_TF5=Cyc_Lower_new_label(ctxt,env);_TF4.f1= _TF5;});({__typeof__(Cyc_Lower_new_label(ctxt,env))_TF5=Cyc_Lower_new_label(ctxt,env);_TF4.f2= _TF5;});_T45= _TF4;}{struct _tuple15 _TF4=_T45;struct _fat_ptr*_TF5;struct _fat_ptr*_TF6;struct _fat_ptr*_TF7;_TF7= _TF4.f0;_TF6= _TF4.f1;_TF5= _TF4.f2;{struct _fat_ptr*c_lab=_TF7;struct _fat_ptr*t_lab=_TF6;struct _fat_ptr*b_lab=_TF5;
struct _fat_ptr*l_lab=Cyc_Lower_new_label(ctxt,env);_T46= env;_T47= l_lab;_T48= e2;_T49= _T48->loc;
Cyc_Lower_emit_label(_T46,_T47,_T49);_T4A= ctxt;_T4B= env;_T4C= e2;_T4D= t_lab;_T4E= b_lab;_T4F= s;_T50= _T4F->loc;
Cyc_Lower_lower_cond(_T4A,_T4B,_T4C,_T4D,_T4E,_T50);_T51= env;_T52= t_lab;_T53= s1;_T54= _T53->loc;
Cyc_Lower_emit_label(_T51,_T52,_T54);{
struct _tuple13 _TF8=Cyc_Lower_get_loop_labels(env);struct _fat_ptr*_TF9;struct _fat_ptr*_TFA;_TFA= _TF8.f0;_TF9= _TF8.f1;{struct _fat_ptr*old_c_lab=_TFA;struct _fat_ptr*old_b_lab=_TF9;_T55= ctxt;_T56= 
# 322
Cyc_Lower_set_loop_labels(env,c_lab,b_lab);_T57= s1;_T58= c_lab;_T59= e3;_T5A= e3;_T5B= _T5A->loc;_T5C= 
# 324
Cyc_Absyn_exp_stmt(_T59,_T5B);_T5D= Cyc_Absyn_goto_stmt(l_lab,0U);_T5E= Cyc_Absyn_seq_stmt(_T5C,_T5D,0U);_T5F= Cyc_Absyn_label_stmt(_T58,_T5E,0U);_T60= 
# 323
Cyc_Absyn_seq_stmt(_T57,_T5F,0U);
# 321
Cyc_Lower_lower_stmt(_T55,_T56,_T60);
# 326
Cyc_Lower_set_loop_labels(env,old_c_lab,old_b_lab);
Cyc_Lower_emit_label(env,b_lab,0U);
return 1;}}}}}case 10:{struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct*_TF4=(struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct*)_TEB;_TF3= _TF4->f1;_TED= _TF4->f2;}{struct Cyc_Absyn_Exp*e=_TF3;struct Cyc_List_List*scs=_TED;
# 330
struct _fat_ptr*b_lab=Cyc_Lower_new_label(ctxt,env);
struct Cyc_Absyn_Exp*v=Cyc_Lower_lower_rhs(ctxt,env,0,0,e);
struct Cyc_List_List*prev=Cyc_Lower_prev_stmts(env);
struct _tuple13 _TF4=Cyc_Lower_get_loop_labels(env);struct _fat_ptr*_TF5;struct _fat_ptr*_TF6;_TF6= _TF4.f0;_TF5= _TF4.f1;{struct _fat_ptr*old_c_lab=_TF6;struct _fat_ptr*old_b_lab=_TF5;
env= Cyc_Lower_set_loop_labels(env,old_c_lab,b_lab);{
struct Cyc_List_List*newscs=0;
_TL2F: if(scs!=0)goto _TL2D;else{goto _TL2E;}
_TL2D: _T61= scs;_T62= _T61->hd;{struct Cyc_Absyn_Switch_clause*_TF7=(struct Cyc_Absyn_Switch_clause*)_T62;unsigned _TF8;struct Cyc_Absyn_Stmt*_TF9;struct Cyc_Absyn_Exp*_TFA;struct Cyc_Core_Opt*_TFB;struct Cyc_Absyn_Pat*_TFC;{struct Cyc_Absyn_Switch_clause _TFD=*_TF7;_TFC= _TFD.pattern;_TFB= _TFD.pat_vars;_TFA= _TFD.where_clause;_TF9= _TFD.body;_TF8= _TFD.loc;}{struct Cyc_Absyn_Pat*pat=_TFC;struct Cyc_Core_Opt*pvs=_TFB;struct Cyc_Absyn_Exp*w=_TFA;struct Cyc_Absyn_Stmt*body=_TF9;unsigned loc=_TF8;
Cyc_Lower_set_prev_stmts(env,0);
Cyc_Lower_lower_stmt(ctxt,env,body);_T63= 
Cyc_Lower_prev_stmts(env);{struct Cyc_Absyn_Stmt*new_body=Cyc_Lower_rev_seq_stmts(_T63);
# 343
struct Cyc_Absyn_Switch_clause*newsc;newsc= _cycalloc(sizeof(struct Cyc_Absyn_Switch_clause));_T64= newsc;_T64->pattern= pat;_T65= newsc;_T65->pat_vars= pvs;_T66= newsc;_T66->where_clause= w;_T67= newsc;_T67->body= new_body;_T68= newsc;_T68->loc= loc;{struct Cyc_List_List*_TFD=_cycalloc(sizeof(struct Cyc_List_List));
_TFD->hd= newsc;_TFD->tl= newscs;_T69= (struct Cyc_List_List*)_TFD;}newscs= _T69;}}}_T6A= scs;
# 336
scs= _T6A->tl;goto _TL2F;_TL2E:
# 346
 Cyc_Lower_set_prev_stmts(env,prev);
Cyc_Lower_set_loop_labels(env,old_c_lab,old_b_lab);_T6B= env;_T6C= v;_T6D= 
Cyc_List_imp_rev(newscs);_T6E= s;_T6F= _T6E->loc;_T70= Cyc_Absyn_switch_stmt(_T6C,_T6D,_T6F);Cyc_Lower_emit_stmt(_T6B,_T70);
Cyc_Lower_emit_label(env,b_lab,0U);
return 1;}}}case 12:{struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*_TF4=(struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*)_TEB;_TEC= _TF4->f1;_TF2= _TF4->f2;}{struct Cyc_Absyn_Decl*d=_TEC;struct Cyc_Absyn_Stmt*s1=_TF2;_T71= d;{
# 352
void*_TF4=_T71->r;struct Cyc_Absyn_Fndecl*_TF5;struct Cyc_Absyn_Vardecl*_TF6;_T72= (int*)_TF4;_T73= *_T72;switch(_T73){case 0:{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_TF7=(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_TF4;_TF6= _TF7->f1;}{struct Cyc_Absyn_Vardecl*vd=_TF6;
# 354
struct Cyc_Absyn_Vardecl*newvd;newvd= _cycalloc(sizeof(struct Cyc_Absyn_Vardecl));_T74= newvd;_T75= vd;*_T74= *_T75;_T76= vd;_T77= _T76->sc;_T78= (int)_T77;
# 357
if(_T78==0)goto _TL31;_T79= newvd;_T7A= _T79->initializer;
if(_T7A==0)goto _TL33;_T7B= newvd;{
struct Cyc_Absyn_Exp*e=_T7B->initializer;_T7C= newvd;
({__typeof__(Cyc_Lower_lower_rhs(ctxt,env,0,1,e))_TF7=Cyc_Lower_lower_rhs(ctxt,env,0,1,e);_T7C->initializer= _TF7;});}goto _TL34;_TL33: _TL34: goto _TL32;_TL31: _TL32: {
# 362
struct Cyc_List_List*p=Cyc_Lower_prev_stmts(env);
Cyc_Lower_set_prev_stmts(env,0);{
long a=Cyc_Lower_lower_stmt(ctxt,env,s1);_T7D= 
Cyc_Lower_prev_stmts(env);{struct Cyc_Absyn_Stmt*body=Cyc_Lower_rev_seq_stmts(_T7D);
Cyc_Lower_set_prev_stmts(env,p);_T7E= env;{struct Cyc_Absyn_Decl*_TF7=_cycalloc(sizeof(struct Cyc_Absyn_Decl));{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_TF8=_cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));_TF8->tag= 0;
_TF8->f1= newvd;_T80= (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_TF8;}_TF7->r= (void*)_T80;_T81= d;_TF7->loc= _T81->loc;_T7F= (struct Cyc_Absyn_Decl*)_TF7;}_T82= body;_T83= Cyc_Absyn_decl_stmt(_T7F,_T82,0U);Cyc_Lower_emit_stmt(_T7E,_T83);_T84= a;
return _T84;}}}}case 1:{struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*_TF7=(struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*)_TF4;_TF5= _TF7->f1;}{struct Cyc_Absyn_Fndecl*fd=_TF5;_T85= d;{
# 370
void*fn_r=_T85->r;_T86= fd;_T87= _T86->orig_scope;_T88= (int)_T87;
if(_T88==4)goto _TL35;{struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*_TF7=_cycalloc(sizeof(struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct));_TF7->tag= 1;
({__typeof__(Cyc_Lower_lower_fn(ctxt,fd))_TF8=Cyc_Lower_lower_fn(ctxt,fd);_TF7->f1= _TF8;});_T89= (struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*)_TF7;}fn_r= (void*)_T89;goto _TL36;_TL35: _TL36: {
struct Cyc_List_List*p=Cyc_Lower_prev_stmts(env);
Cyc_Lower_set_prev_stmts(env,0);{
long a=Cyc_Lower_lower_stmt(ctxt,env,s1);_T8A= 
Cyc_Lower_prev_stmts(env);{struct Cyc_Absyn_Stmt*body=Cyc_Lower_rev_seq_stmts(_T8A);
Cyc_Lower_set_prev_stmts(env,p);_T8B= env;{struct Cyc_Absyn_Decl*_TF7=_cycalloc(sizeof(struct Cyc_Absyn_Decl));_T8D= d;
_TF7->r= _T8D->r;_T8E= d;_TF7->loc= _T8E->loc;_T8C= (struct Cyc_Absyn_Decl*)_TF7;}_T8F= body;_T90= Cyc_Absyn_decl_stmt(_T8C,_T8F,0U);Cyc_Lower_emit_stmt(_T8B,_T90);_T91= a;
return _T91;}}}}}case 5: _T93= Cyc_Warn_impos;{
# 384
int(*_TF7)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T93;_T92= _TF7;}_T94= _tag_fat("Aggregate decl in lower_stmt",sizeof(char),29U);_T95= _tag_fat(0U,sizeof(void*),0);_T92(_T94,_T95);case 7: _T97= Cyc_Warn_impos;{
# 386
int(*_TF7)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T97;_T96= _TF7;}_T98= _tag_fat("Enum decl in lower_stmt",sizeof(char),24U);_T99= _tag_fat(0U,sizeof(void*),0);_T96(_T98,_T99);case 10: _T9B= Cyc_Warn_impos;{
# 388
int(*_TF7)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T9B;_T9A= _TF7;}_T9C= _tag_fat("Using decl in lower",sizeof(char),20U);_T9D= _tag_fat(0U,sizeof(void*),0);_T9A(_T9C,_T9D);case 11: _T9F= Cyc_Warn_impos;{
# 390
int(*_TF7)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T9F;_T9E= _TF7;}_TA0= _tag_fat("Extern-C decl in lower",sizeof(char),23U);_TA1= _tag_fat(0U,sizeof(void*),0);_T9E(_TA0,_TA1);case 12: _TA3= Cyc_Warn_impos;{
# 392
int(*_TF7)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_TA3;_TA2= _TF7;}_TA4= _tag_fat("Extern-C include in lower",sizeof(char),26U);_TA5= _tag_fat(0U,sizeof(void*),0);_TA2(_TA4,_TA5);case 13: _TA7= Cyc_Warn_impos;{
# 394
int(*_TF7)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_TA7;_TA6= _TF7;}_TA8= _tag_fat("Porton in lower",sizeof(char),16U);_TA9= _tag_fat(0U,sizeof(void*),0);_TA6(_TA8,_TA9);case 14: _TAB= Cyc_Warn_impos;{
# 396
int(*_TF7)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_TAB;_TAA= _TF7;}_TAC= _tag_fat("Portoff in lower",sizeof(char),17U);_TAD= _tag_fat(0U,sizeof(void*),0);_TAA(_TAC,_TAD);case 15: _TAF= Cyc_Warn_impos;{
# 398
int(*_TF7)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_TAF;_TAE= _TF7;}_TB0= _tag_fat("Tempeston in lower",sizeof(char),19U);_TB1= _tag_fat(0U,sizeof(void*),0);_TAE(_TB0,_TB1);case 16: _TB3= Cyc_Warn_impos;{
# 400
int(*_TF7)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_TB3;_TB2= _TF7;}_TB4= _tag_fat("Tempestoff in lower",sizeof(char),20U);_TB5= _tag_fat(0U,sizeof(void*),0);_TB2(_TB4,_TB5);case 6: _TB7= Cyc_Warn_impos;{
# 402
int(*_TF7)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_TB7;_TB6= _TF7;}_TB8= _tag_fat("Datatype_d in lower",sizeof(char),20U);_TB9= _tag_fat(0U,sizeof(void*),0);_TB6(_TB8,_TB9);case 2: _TBB= Cyc_Warn_impos;{
# 404
int(*_TF7)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_TBB;_TBA= _TF7;}_TBC= _tag_fat("Let_d in lower",sizeof(char),15U);_TBD= _tag_fat(0U,sizeof(void*),0);_TBA(_TBC,_TBD);case 3: _TBF= Cyc_Warn_impos;{
# 406
int(*_TF7)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_TBF;_TBE= _TF7;}_TC0= _tag_fat("Letv_d in lower",sizeof(char),16U);_TC1= _tag_fat(0U,sizeof(void*),0);_TBE(_TC0,_TC1);case 4: _TC3= Cyc_Warn_impos;{
# 408
int(*_TF7)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_TC3;_TC2= _TF7;}_TC4= _tag_fat("Region_d in lower",sizeof(char),18U);_TC5= _tag_fat(0U,sizeof(void*),0);_TC2(_TC4,_TC5);case 8: _TC7= Cyc_Warn_impos;{
# 410
int(*_TF7)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_TC7;_TC6= _TF7;}_TC8= _tag_fat("Typedef_d in lower",sizeof(char),19U);_TC9= _tag_fat(0U,sizeof(void*),0);_TC6(_TC8,_TC9);default: _TCB= Cyc_Warn_impos;{
# 412
int(*_TF7)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_TCB;_TCA= _TF7;}_TCC= _tag_fat("Namespace_d in lower",sizeof(char),21U);_TCD= _tag_fat(0U,sizeof(void*),0);_TCA(_TCC,_TCD);};}goto _LL0;}case 13:{struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct*_TF4=(struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct*)_TEB;_TF0= _TF4->f1;_TF2= _TF4->f2;}{struct _fat_ptr*x=_TF0;struct Cyc_Absyn_Stmt*s1=_TF2;_TCE= env;_TCF= x;_TD0= s;_TD1= _TD0->loc;
# 416
Cyc_Lower_emit_label(_TCE,_TCF,_TD1);_TD2= 
Cyc_Lower_lower_stmt(ctxt,env,s1);return _TD2;}case 14:{struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct*_TF4=(struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct*)_TEB;_TF2= _TF4->f1;_TD3= _TF4->f2;_TF3= _TD3.f0;}{struct Cyc_Absyn_Stmt*s1=_TF2;struct Cyc_Absyn_Exp*e=_TF3;{struct _tuple13 _TF4;
# 419
({__typeof__(Cyc_Lower_new_label(ctxt,env))_TF5=Cyc_Lower_new_label(ctxt,env);_TF4.f0= _TF5;});({__typeof__(Cyc_Lower_new_label(ctxt,env))_TF5=Cyc_Lower_new_label(ctxt,env);_TF4.f1= _TF5;});_TD4= _TF4;}{struct _tuple13 _TF4=_TD4;struct _fat_ptr*_TF5;struct _fat_ptr*_TF6;_TF6= _TF4.f0;_TF5= _TF4.f1;{struct _fat_ptr*c_lab=_TF6;struct _fat_ptr*b_lab=_TF5;_TD5= env;_TD6= c_lab;_TD7= s1;_TD8= _TD7->loc;
Cyc_Lower_emit_label(_TD5,_TD6,_TD8);{
struct _tuple13 _TF7=Cyc_Lower_get_loop_labels(env);struct _fat_ptr*_TF8;struct _fat_ptr*_TF9;_TF9= _TF7.f0;_TF8= _TF7.f1;{struct _fat_ptr*old_c_lab=_TF9;struct _fat_ptr*old_b_lab=_TF8;_TD9= ctxt;_TDA= 
Cyc_Lower_set_loop_labels(env,c_lab,b_lab);_TDB= s1;Cyc_Lower_lower_stmt(_TD9,_TDA,_TDB);
Cyc_Lower_set_loop_labels(env,old_c_lab,old_b_lab);_TDC= ctxt;_TDD= env;_TDE= e;_TDF= c_lab;_TE0= b_lab;_TE1= s;_TE2= _TE1->loc;
Cyc_Lower_lower_cond(_TDC,_TDD,_TDE,_TDF,_TE0,_TE2);
Cyc_Lower_emit_label(env,b_lab,0U);
return 1;}}}}}case 11: _TE4= Cyc_Warn_impos;{
# 428
int(*_TF4)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_TE4;_TE3= _TF4;}_TE5= _tag_fat("fallthru in lower.cyc",sizeof(char),22U);_TE6= _tag_fat(0U,sizeof(void*),0);_TE3(_TE5,_TE6);default: _TE8= Cyc_Warn_impos;{
# 430
int(*_TF4)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_TE8;_TE7= _TF4;}_TE9= _tag_fat("try-catch in lower.cyc",sizeof(char),23U);_TEA= _tag_fat(0U,sizeof(void*),0);_TE7(_TE9,_TEA);}_LL0:;}}
# 437
static long Cyc_Lower_is_temp(struct _tuple0*qv){struct _tuple0*_T0;struct _tuple0 _T1;struct _fat_ptr*_T2;int _T3;struct _fat_ptr _T4;unsigned _T5;struct _fat_ptr _T6;unsigned char*_T7;const char*_T8;const char*_T9;char _TA;int _TB;struct _fat_ptr _TC;unsigned char*_TD;const char*_TE;char _TF;int _T10;struct _fat_ptr _T11;unsigned char*_T12;const char*_T13;char _T14;int _T15;struct _fat_ptr _T16;unsigned char*_T17;const char*_T18;char _T19;int _T1A;_T0= qv;_T1= *_T0;_T2= _T1.f1;{
struct _fat_ptr v=*_T2;_T4= v;_T5= 
# 440
_get_fat_size(_T4,sizeof(char));if(_T5 <= 4U)goto _TL37;_T6= v;_T7= _T6.curr;_T8= (const char*)_T7;_T9= _check_null(_T8);_TA= _T9[0];_TB= (int)_TA;if(_TB!=95)goto _TL37;_TC= v;_TD= _TC.curr;_TE= (const char*)_TD;_TF= _TE[1];_T10= (int)_TF;if(_T10!=116)goto _TL37;_T11= v;_T12= _T11.curr;_T13= (const char*)_T12;_T14= _T13[2];_T15= (int)_T14;if(_T15!=109)goto _TL37;_T16= v;_T17= _T16.curr;_T18= (const char*)_T17;_T19= _T18[3];_T1A= (int)_T19;_T3= _T1A==112;goto _TL38;_TL37: _T3= 0;_TL38: return _T3;}}
# 447
static struct Cyc_List_List*Cyc_Lower_lower_rhs_list(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Lower_Env*env,struct Cyc_List_List*es){long _T0;struct Cyc_List_List*_T1;void*_T2;struct Cyc_Absyn_Exp*_T3;int*_T4;unsigned _T5;struct Cyc_List_List*_T6;long _T7;struct Cyc_List_List*_T8;struct Cyc_List_List*_T9;struct Cyc_Toc_TocContext*_TA;struct Cyc_Lower_Env*_TB;struct Cyc_List_List*_TC;void*_TD;struct Cyc_Absyn_Exp*_TE;struct Cyc_List_List*_TF;struct Cyc_List_List*_T10;
# 450
long no_eff=1;{
# 452
struct Cyc_List_List*es2=es;_TL3C: _T0= no_eff;if(_T0)goto _TL3D;else{goto _TL3B;}_TL3D: if(es2!=0)goto _TL3A;else{goto _TL3B;}
_TL3A: _T1= es2;_T2= _T1->hd;_T3= (struct Cyc_Absyn_Exp*)_T2;{void*_T11=_T3->r;_T4= (int*)_T11;_T5= *_T4;switch(_T5){case 0: goto _LL4;case 1: _LL4: goto _TL39;default:
# 458
 no_eff= 0;goto _LL0;}_LL0:;}_TL39: _T6= es2;
# 452
es2= _T6->tl;goto _TL3C;_TL3B:;}_T7= no_eff;
# 462
if(!_T7)goto _TL3F;_T8= es;
return _T8;_TL3F: {
struct Cyc_List_List*res=0;
_TL44: if(es!=0)goto _TL42;else{goto _TL43;}
_TL42:{struct Cyc_List_List*_T11=_cycalloc(sizeof(struct Cyc_List_List));_TA= ctxt;_TB= env;_TC= es;_TD= _TC->hd;_TE= (struct Cyc_Absyn_Exp*)_TD;({__typeof__(Cyc_Lower_lower_rhs(_TA,_TB,0,0,_TE))_T12=Cyc_Lower_lower_rhs(_TA,_TB,0,0,_TE);_T11->hd= _T12;});_T11->tl= res;_T9= (struct Cyc_List_List*)_T11;}res= _T9;_TF= es;
# 465
es= _TF->tl;goto _TL44;_TL43: _T10= 
# 467
Cyc_List_imp_rev(res);return _T10;}}
# 471
static long Cyc_Lower_might_have_effect(struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;int*_T1;unsigned _T2;_T0= e;{
void*_T3=_T0->r;_T1= (int*)_T3;_T2= *_T1;switch(_T2){case 4: goto _LL4;case 10: _LL4: goto _LL6;case 39: _LL6:
# 476
 return 1;default:
# 478
 return 0;};}}struct _tuple16{struct Cyc_List_List*f0;struct Cyc_Absyn_Exp*f1;};
# 489
static struct Cyc_Absyn_Exp*Cyc_Lower_lower_rhs(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Lower_Env*env,long effect_only,long has_target,struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;void*_T1;struct Cyc_Absyn_Exp*_T2;void*_T3;void*_T4;long _T5;struct Cyc_Absyn_Exp*_T6;int*_T7;unsigned _T8;struct Cyc_Absyn_Exp*_T9;struct Cyc_Absyn_Exp*_TA;unsigned _TB;struct Cyc_Absyn_Exp*_TC;struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_TD;void*_TE;int*_TF;int _T10;struct Cyc_Absyn_Exp*_T11;void*_T12;long _T13;long _T14;struct Cyc_Absyn_Exp*_T15;enum Cyc_Absyn_Primop _T16;struct Cyc_List_List*_T17;struct Cyc_Absyn_Exp*_T18;unsigned _T19;struct Cyc_Lower_Env*_T1A;struct Cyc_Absyn_Exp*_T1B;struct Cyc_Absyn_PrimopOpt*_T1C;enum Cyc_Absyn_Primop _T1D;struct Cyc_Absyn_Exp*_T1E;struct Cyc_Absyn_Exp*_T1F;struct Cyc_Absyn_Exp*_T20;struct Cyc_Absyn_Exp*_T21;unsigned _T22;struct Cyc_Lower_Env*_T23;struct Cyc_Absyn_Exp*_T24;struct Cyc_Absyn_Exp*_T25;struct Cyc_Absyn_Exp*_T26;unsigned _T27;enum Cyc_Absyn_Incrementor _T28;int _T29;long _T2A;struct Cyc_Lower_Env*_T2B;struct Cyc_Absyn_Exp*_T2C;struct Cyc_Absyn_Exp*_T2D;struct Cyc_Absyn_Exp*_T2E;struct Cyc_Absyn_Exp*_T2F;unsigned _T30;struct Cyc_Absyn_Exp*_T31;struct Cyc_Absyn_Exp*_T32;unsigned _T33;struct Cyc_Lower_Env*_T34;struct Cyc_Absyn_Exp*_T35;struct Cyc_Absyn_Exp*_T36;struct Cyc_Absyn_Exp*_T37;struct Cyc_Absyn_Exp*_T38;unsigned _T39;struct Cyc_Absyn_Exp*_T3A;struct Cyc_Absyn_Exp*_T3B;unsigned _T3C;long _T3D;struct Cyc_Lower_Env*_T3E;struct Cyc_Absyn_Exp*_T3F;struct Cyc_Absyn_Exp*_T40;int _T41;struct Cyc_Absyn_Exp*_T42;struct Cyc_Absyn_Exp*_T43;unsigned _T44;struct Cyc_Absyn_Exp*_T45;struct Cyc_Absyn_Exp*_T46;unsigned _T47;struct Cyc_Lower_Env*_T48;struct Cyc_Absyn_Exp*_T49;struct Cyc_Absyn_Exp*_T4A;int _T4B;struct Cyc_Absyn_Exp*_T4C;struct Cyc_Absyn_Exp*_T4D;unsigned _T4E;struct Cyc_Absyn_Exp*_T4F;struct Cyc_Absyn_Exp*_T50;unsigned _T51;long _T52;struct Cyc_Toc_TocContext*_T53;struct Cyc_Lower_Env*_T54;struct Cyc_Absyn_Exp*_T55;struct Cyc_Absyn_Stmt*_T56;struct Cyc_Absyn_Stmt*_T57;struct Cyc_Absyn_Exp*_T58;unsigned _T59;struct Cyc_Absyn_Stmt*_T5A;struct Cyc_Absyn_Exp*_T5B;struct Cyc_Toc_TocContext*_T5C;struct Cyc_Lower_Env*_T5D;struct Cyc_Absyn_Exp*_T5E;struct Cyc_Absyn_Stmt*_T5F;struct Cyc_Absyn_Exp*_T60;struct Cyc_Absyn_Exp*_T61;struct Cyc_Absyn_Stmt*_T62;struct Cyc_Absyn_Exp*_T63;unsigned _T64;struct Cyc_Absyn_Stmt*_T65;struct Cyc_Absyn_Exp*_T66;long _T67;struct Cyc_Toc_TocContext*_T68;struct Cyc_Lower_Env*_T69;struct Cyc_Absyn_Exp*_T6A;struct Cyc_Absyn_Stmt*_T6B;struct Cyc_Absyn_Exp*_T6C;struct Cyc_Absyn_Stmt*_T6D;struct Cyc_Absyn_Exp*_T6E;unsigned _T6F;struct Cyc_Absyn_Stmt*_T70;struct Cyc_Absyn_Exp*_T71;struct Cyc_Toc_TocContext*_T72;struct Cyc_Lower_Env*_T73;struct Cyc_Absyn_Exp*_T74;struct Cyc_Absyn_Stmt*_T75;struct Cyc_Absyn_Exp*_T76;struct Cyc_Absyn_Exp*_T77;struct Cyc_Absyn_Stmt*_T78;struct Cyc_Absyn_Exp*_T79;unsigned _T7A;struct Cyc_Absyn_Stmt*_T7B;struct Cyc_Absyn_Exp*_T7C;long _T7D;struct Cyc_Toc_TocContext*_T7E;struct Cyc_Lower_Env*_T7F;struct Cyc_Absyn_Exp*_T80;struct Cyc_Absyn_Exp*_T81;struct Cyc_Absyn_Stmt*_T82;struct Cyc_Absyn_Stmt*_T83;struct Cyc_Absyn_Exp*_T84;unsigned _T85;struct Cyc_Absyn_Stmt*_T86;struct Cyc_Absyn_Exp*_T87;struct Cyc_Toc_TocContext*_T88;struct Cyc_Lower_Env*_T89;struct Cyc_Absyn_Exp*_T8A;struct Cyc_Absyn_Exp*_T8B;struct Cyc_Absyn_Exp*_T8C;struct Cyc_Absyn_Stmt*_T8D;struct Cyc_Absyn_Exp*_T8E;struct Cyc_Absyn_Exp*_T8F;struct Cyc_Absyn_Stmt*_T90;struct Cyc_Absyn_Exp*_T91;unsigned _T92;struct Cyc_Absyn_Stmt*_T93;struct Cyc_Absyn_Exp*_T94;long _T95;struct Cyc_Absyn_Exp*_T96;struct Cyc_Absyn_Exp*_T97;int*_T98;unsigned _T99;struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T9A;void*_T9B;int*_T9C;int _T9D;void*_T9E;struct _tuple0*_T9F;struct _fat_ptr*_TA0;struct _fat_ptr _TA1;struct _fat_ptr _TA2;int _TA3;long _TA4;struct Cyc_Absyn_Exp*_TA5;struct Cyc_List_List*_TA6;struct Cyc_Absyn_Exp*_TA7;unsigned _TA8;void*_TA9;void*_TAA;struct Cyc_Absyn_Exp*_TAB;long _TAC;enum Cyc_Absyn_Coercion _TAD;struct Cyc_Absyn_Exp*_TAE;unsigned _TAF;struct Cyc_Absyn_Exp*_TB0;struct Cyc_Absyn_Exp*_TB1;unsigned _TB2;void*_TB3;struct Cyc_Absyn_Exp*_TB4;void*_TB5;struct Cyc_Absyn_Exp*_TB6;struct Cyc_Absyn_Exp*_TB7;unsigned _TB8;struct Cyc_Absyn_Exp*_TB9;struct _fat_ptr*_TBA;struct Cyc_Absyn_Exp*_TBB;unsigned _TBC;struct Cyc_Absyn_Exp*_TBD;struct _fat_ptr*_TBE;struct Cyc_Absyn_Exp*_TBF;unsigned _TC0;struct Cyc_Absyn_Exp*_TC1;void*_TC2;struct Cyc_Absyn_Exp*_TC3;long _TC4;struct Cyc_Absyn_Exp*_TC5;struct Cyc_Absyn_Exp*_TC6;struct Cyc_Absyn_Exp*_TC7;struct Cyc_List_List*_TC8;void*_TC9;struct _tuple16*_TCA;struct Cyc_List_List*_TCB;struct _tuple16*_TCC;struct Cyc_List_List*_TCD;struct Cyc_Core_Opt*_TCE;struct Cyc_List_List*_TCF;struct Cyc_Absyn_Exp*_TD0;unsigned _TD1;struct Cyc_Absyn_Exp*_TD2;struct Cyc_String_pa_PrintArg_struct _TD3;int(*_TD4)(struct _fat_ptr,struct _fat_ptr);void*(*_TD5)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _TD6;struct _fat_ptr _TD7;int(*_TD8)(struct _fat_ptr,struct _fat_ptr);void*(*_TD9)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _TDA;struct _fat_ptr _TDB;int(*_TDC)(struct _fat_ptr,struct _fat_ptr);void*(*_TDD)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _TDE;struct _fat_ptr _TDF;void*_TE0;int(*_TE1)(struct _fat_ptr,struct _fat_ptr);void*(*_TE2)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _TE3;struct _fat_ptr _TE4;struct Cyc_String_pa_PrintArg_struct _TE5;int(*_TE6)(struct _fat_ptr,struct _fat_ptr);void*(*_TE7)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _TE8;struct _fat_ptr _TE9;struct Cyc_String_pa_PrintArg_struct _TEA;int(*_TEB)(struct _fat_ptr,struct _fat_ptr);void*(*_TEC)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _TED;struct _fat_ptr _TEE;struct Cyc_String_pa_PrintArg_struct _TEF;int(*_TF0)(struct _fat_ptr,struct _fat_ptr);void*(*_TF1)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _TF2;struct _fat_ptr _TF3;struct Cyc_String_pa_PrintArg_struct _TF4;int(*_TF5)(struct _fat_ptr,struct _fat_ptr);void*(*_TF6)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _TF7;struct _fat_ptr _TF8;struct Cyc_String_pa_PrintArg_struct _TF9;int(*_TFA)(struct _fat_ptr,struct _fat_ptr);void*(*_TFB)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _TFC;struct _fat_ptr _TFD;struct Cyc_String_pa_PrintArg_struct _TFE;int(*_TFF)(struct _fat_ptr,struct _fat_ptr);void*(*_T100)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T101;struct _fat_ptr _T102;struct Cyc_String_pa_PrintArg_struct _T103;int(*_T104)(struct _fat_ptr,struct _fat_ptr);void*(*_T105)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T106;struct _fat_ptr _T107;struct Cyc_String_pa_PrintArg_struct _T108;int(*_T109)(struct _fat_ptr,struct _fat_ptr);void*(*_T10A)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T10B;struct _fat_ptr _T10C;struct Cyc_String_pa_PrintArg_struct _T10D;int(*_T10E)(struct _fat_ptr,struct _fat_ptr);void*(*_T10F)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T110;struct _fat_ptr _T111;struct Cyc_String_pa_PrintArg_struct _T112;int(*_T113)(struct _fat_ptr,struct _fat_ptr);void*(*_T114)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T115;struct _fat_ptr _T116;struct Cyc_String_pa_PrintArg_struct _T117;int(*_T118)(struct _fat_ptr,struct _fat_ptr);void*(*_T119)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T11A;struct _fat_ptr _T11B;long _T11C;long _T11D;struct Cyc_Lower_Env*_T11E;struct Cyc_Absyn_Stmt*_T11F;struct Cyc_Absyn_Exp*_T120;long _T121;struct Cyc_Absyn_Exp*_T122;struct Cyc_Absyn_Exp*_T123;
struct Cyc_Absyn_Exp*res;_T0= e;_T1= _T0->topt;
# 492
if(_T1==0)goto _TL46;_T2= e;_T3= _T2->topt;_T4= Cyc_Absyn_void_type;_T5= Cyc_Unify_unify(_T3,_T4);if(!_T5)goto _TL46;
effect_only= 1;goto _TL47;_TL46: _TL47: _T6= e;{
void*_T124=_T6->r;struct Cyc_Absyn_Aggrdecl*_T125;struct Cyc_List_List*_T126;struct Cyc_Absyn_Enumfield*_T127;long _T128;struct _fat_ptr*_T129;enum Cyc_Absyn_Coercion _T12A;long _T12B;struct Cyc_Absyn_VarargCallInfo*_T12C;struct Cyc_List_List*_T12D;struct Cyc_Absyn_Exp*_T12E;enum Cyc_Absyn_Incrementor _T12F;struct Cyc_Absyn_Exp*_T130;struct Cyc_Absyn_PrimopOpt*_T131;enum Cyc_Absyn_Primop _T132;void*_T133;_T7= (int*)_T124;_T8= *_T7;switch(_T8){case 0: _T9= e;
# 496
return _T9;case 2: _TA= e;_TB= _TA->loc;_TC= 
# 498
Cyc_Absyn_uint_exp(1U,_TB);return _TC;case 1: _TD= (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T124;_TE= _TD->f1;_TF= (int*)_TE;_T10= *_TF;if(_T10!=2)goto _TL49;_T11= e;
# 500
return _T11;_TL49:{struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T134=(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T124;_T12= _T134->f1;_T133= (void*)_T12;}{void*b=_T133;
# 505
struct _tuple0*q=Cyc_Absyn_binding2qvar(b);_T13= 
Cyc_Lower_is_macro(ctxt,q);if(_T13)goto _TL4D;else{goto _TL4E;}_TL4E: _T14= Cyc_Lower_is_temp(q);if(_T14)goto _TL4D;else{goto _TL4B;}
_TL4D: _T15= e;return _T15;_TL4B:
 res= e;goto _LL0;}case 3:{struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*_T134=(struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*)_T124;_T132= _T134->f1;_T133= _T134->f2;}{enum Cyc_Absyn_Primop p=_T132;struct Cyc_List_List*es=_T133;
# 511
struct Cyc_List_List*vs=Cyc_Lower_lower_rhs_list(ctxt,env,es);_T16= p;_T17= vs;_T18= e;_T19= _T18->loc;
res= Cyc_Absyn_primop_exp(_T16,_T17,_T19);goto _LL0;}case 4:{struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct*_T134=(struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct*)_T124;_T133= _T134->f1;_T131= _T134->f2;_T130= _T134->f3;}{struct Cyc_Absyn_Exp*e1=_T133;struct Cyc_Absyn_PrimopOpt*popt=_T131;struct Cyc_Absyn_Exp*e2=_T130;
# 520
struct Cyc_Absyn_Exp*v1=Cyc_Lower_lower_lhs(ctxt,env,e1);
if(popt==0)goto _TL4F;{
struct Cyc_Absyn_Exp*v2=Cyc_Lower_lower_rhs(ctxt,env,0,0,e2);_T1A= env;_T1B= v1;_T1C= popt;_T1D= _T1C->v;_T1E= 
Cyc_Lower_deep_copy(v1);_T1F= v2;_T20= Cyc_Absyn_prim2_exp(_T1D,_T1E,_T1F,0U);_T21= e;_T22= _T21->loc;Cyc_Lower_emit_assign(_T1A,_T1B,_T20,_T22);
res= Cyc_Lower_deep_copy(v1);}goto _TL50;
# 526
_TL4F:{struct Cyc_Absyn_Exp*v2=Cyc_Lower_lower_rhs(ctxt,env,0,1,e2);_T23= env;_T24= v1;_T25= v2;_T26= e;_T27= _T26->loc;
Cyc_Lower_emit_assign(_T23,_T24,_T25,_T27);
res= Cyc_Lower_deep_copy(v1);}_TL50: goto _LL0;}case 5:{struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*_T134=(struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*)_T124;_T133= _T134->f1;_T12F= _T134->f2;}{struct Cyc_Absyn_Exp*e1=_T133;enum Cyc_Absyn_Incrementor incr=_T12F;
# 532
struct Cyc_Absyn_Exp*v1=Cyc_Lower_lower_lhs(ctxt,env,e1);_T28= incr;_T29= (int)_T28;switch(_T29){case Cyc_Absyn_PostInc: _T2A= effect_only;if(!_T2A)goto _TL52;goto _LL5D;_TL52: {
# 545
struct _tuple14 _T134=Cyc_Lower_fresh_var(ctxt,env,e);struct Cyc_Absyn_Exp*_T135;struct Cyc_Absyn_Vardecl*_T136;_T136= _T134.f0;_T135= _T134.f1;{struct Cyc_Absyn_Vardecl*vd=_T136;struct Cyc_Absyn_Exp*temp=_T135;
Cyc_Lower_emit_assign(env,temp,v1,0U);_T2B= env;_T2C= v1;_T2D= 
Cyc_Lower_deep_copy(temp);_T2E= Cyc_Absyn_signed_int_exp(1,0U);_T2F= e;_T30= _T2F->loc;_T31= Cyc_Absyn_add_exp(_T2D,_T2E,_T30);_T32= e;_T33= _T32->loc;Cyc_Lower_emit_assign(_T2B,_T2C,_T31,_T33);
res= Cyc_Lower_deep_copy(temp);goto _LL59;}}case Cyc_Absyn_PreInc: _LL5D: _T34= env;_T35= v1;_T36= 
# 536
Cyc_Lower_deep_copy(v1);_T37= Cyc_Absyn_signed_int_exp(1,0U);_T38= e;_T39= _T38->loc;_T3A= Cyc_Absyn_add_exp(_T36,_T37,_T39);_T3B= e;_T3C= _T3B->loc;Cyc_Lower_emit_assign(_T34,_T35,_T3A,_T3C);
res= Cyc_Lower_deep_copy(v1);goto _LL59;case Cyc_Absyn_PostDec: _T3D= effect_only;if(!_T3D)goto _TL54;goto _LL61;_TL54: goto _LL64;case Cyc_Absyn_PreDec: _LL61: _T3E= env;_T3F= v1;_T40= 
# 541
Cyc_Lower_deep_copy(v1);_T41= - 1;_T42= Cyc_Absyn_signed_int_exp(_T41,0U);_T43= e;_T44= _T43->loc;_T45= Cyc_Absyn_add_exp(_T40,_T42,_T44);_T46= e;_T47= _T46->loc;Cyc_Lower_emit_assign(_T3E,_T3F,_T45,_T47);
res= Cyc_Lower_deep_copy(v1);goto _LL59;default: _LL64: {
# 551
struct _tuple14 _T134=Cyc_Lower_fresh_var(ctxt,env,e);struct Cyc_Absyn_Exp*_T135;struct Cyc_Absyn_Vardecl*_T136;_T136= _T134.f0;_T135= _T134.f1;{struct Cyc_Absyn_Vardecl*vd=_T136;struct Cyc_Absyn_Exp*temp=_T135;
Cyc_Lower_emit_assign(env,temp,v1,0U);_T48= env;_T49= v1;_T4A= 
Cyc_Lower_deep_copy(temp);_T4B= - 1;_T4C= Cyc_Absyn_signed_int_exp(_T4B,0U);_T4D= e;_T4E= _T4D->loc;_T4F= Cyc_Absyn_add_exp(_T4A,_T4C,_T4E);_T50= e;_T51= _T50->loc;Cyc_Lower_emit_assign(_T48,_T49,_T4F,_T51);
res= Cyc_Lower_deep_copy(temp);goto _LL59;}}}_LL59: goto _LL0;}case 6:{struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct*_T134=(struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct*)_T124;_T133= _T134->f1;_T130= _T134->f2;_T12E= _T134->f3;}{struct Cyc_Absyn_Exp*e1=_T133;struct Cyc_Absyn_Exp*e2=_T130;struct Cyc_Absyn_Exp*e3=_T12E;_T52= effect_only;
# 559
if(!_T52)goto _TL56;_T53= ctxt;_T54= env;_T55= e1;_T56= 
Cyc_Absyn_exp_stmt(e2,0U);_T57= Cyc_Absyn_exp_stmt(e3,0U);_T58= e;_T59= _T58->loc;_T5A= Cyc_Absyn_ifthenelse_stmt(_T55,_T56,_T57,_T59);Cyc_Lower_lower_stmt(_T53,_T54,_T5A);_T5B= 
Cyc_Absyn_uint_exp(0U,0U);return _T5B;
# 563
_TL56: {struct _tuple14 _T134=Cyc_Lower_fresh_var(ctxt,env,e);struct Cyc_Absyn_Exp*_T135;struct Cyc_Absyn_Vardecl*_T136;_T136= _T134.f0;_T135= _T134.f1;{struct Cyc_Absyn_Vardecl*vd=_T136;struct Cyc_Absyn_Exp*temp=_T135;_T5C= ctxt;_T5D= env;_T5E= e1;_T5F= 
Cyc_Lower_assign_it(temp,e2,0U);_T60= 
Cyc_Lower_deep_copy(temp);_T61= e3;_T62= Cyc_Lower_assign_it(_T60,_T61,0U);_T63= e;_T64= _T63->loc;_T65= 
# 564
Cyc_Absyn_ifthenelse_stmt(_T5E,_T5F,_T62,_T64);Cyc_Lower_lower_stmt(_T5C,_T5D,_T65);_T66= 
# 566
Cyc_Lower_deep_copy(temp);return _T66;}}}case 7:{struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*_T134=(struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*)_T124;_T133= _T134->f1;_T130= _T134->f2;}{struct Cyc_Absyn_Exp*e1=_T133;struct Cyc_Absyn_Exp*e2=_T130;_T67= effect_only;
# 569
if(!_T67)goto _TL58;_T68= ctxt;_T69= env;_T6A= e1;_T6B= 
Cyc_Absyn_exp_stmt(e2,0U);_T6C= Cyc_Absyn_false_exp(0U);_T6D= Cyc_Absyn_exp_stmt(_T6C,0U);_T6E= e;_T6F= _T6E->loc;_T70= Cyc_Absyn_ifthenelse_stmt(_T6A,_T6B,_T6D,_T6F);Cyc_Lower_lower_stmt(_T68,_T69,_T70);_T71= 
Cyc_Absyn_uint_exp(0U,0U);return _T71;
# 573
_TL58: {struct _tuple14 _T134=Cyc_Lower_fresh_var(ctxt,env,e);struct Cyc_Absyn_Exp*_T135;struct Cyc_Absyn_Vardecl*_T136;_T136= _T134.f0;_T135= _T134.f1;{struct Cyc_Absyn_Vardecl*vd=_T136;struct Cyc_Absyn_Exp*temp=_T135;_T72= ctxt;_T73= env;_T74= e1;_T75= 
Cyc_Lower_assign_it(temp,e2,0U);_T76= 
Cyc_Lower_deep_copy(temp);_T77= Cyc_Absyn_false_exp(0U);_T78= Cyc_Lower_assign_it(_T76,_T77,0U);_T79= e;_T7A= _T79->loc;_T7B= 
# 574
Cyc_Absyn_ifthenelse_stmt(_T74,_T75,_T78,_T7A);Cyc_Lower_lower_stmt(_T72,_T73,_T7B);_T7C= 
# 576
Cyc_Lower_deep_copy(temp);return _T7C;}}}case 8:{struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*_T134=(struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*)_T124;_T133= _T134->f1;_T130= _T134->f2;}{struct Cyc_Absyn_Exp*e1=_T133;struct Cyc_Absyn_Exp*e2=_T130;_T7D= effect_only;
# 579
if(!_T7D)goto _TL5A;_T7E= ctxt;_T7F= env;_T80= e1;_T81= 
Cyc_Absyn_true_exp(0U);_T82= Cyc_Absyn_exp_stmt(_T81,0U);_T83= Cyc_Absyn_exp_stmt(e2,0U);_T84= e;_T85= _T84->loc;_T86= Cyc_Absyn_ifthenelse_stmt(_T80,_T82,_T83,_T85);Cyc_Lower_lower_stmt(_T7E,_T7F,_T86);_T87= 
Cyc_Absyn_uint_exp(0U,0U);return _T87;
# 583
_TL5A: {struct _tuple14 _T134=Cyc_Lower_fresh_var(ctxt,env,e);struct Cyc_Absyn_Exp*_T135;struct Cyc_Absyn_Vardecl*_T136;_T136= _T134.f0;_T135= _T134.f1;{struct Cyc_Absyn_Vardecl*vd=_T136;struct Cyc_Absyn_Exp*temp=_T135;_T88= ctxt;_T89= env;_T8A= e1;_T8B= temp;_T8C= 
Cyc_Absyn_true_exp(0U);_T8D= Cyc_Lower_assign_it(_T8B,_T8C,0U);_T8E= 
Cyc_Lower_deep_copy(temp);_T8F= e2;_T90= Cyc_Lower_assign_it(_T8E,_T8F,0U);_T91= e;_T92= _T91->loc;_T93= 
# 584
Cyc_Absyn_ifthenelse_stmt(_T8A,_T8D,_T90,_T92);Cyc_Lower_lower_stmt(_T88,_T89,_T93);_T94= 
# 586
Cyc_Lower_deep_copy(temp);return _T94;}}}case 9:{struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct*_T134=(struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct*)_T124;_T133= _T134->f1;_T130= _T134->f2;}{struct Cyc_Absyn_Exp*e1=_T133;struct Cyc_Absyn_Exp*e2=_T130;
# 589
Cyc_Lower_lower_rhs(ctxt,env,1,0,e1);
res= Cyc_Lower_lower_rhs(ctxt,env,effect_only,has_target,e2);_T95= effect_only;
# 592
if(!_T95)goto _TL5C;_T96= res;
return _T96;_TL5C: goto _LL0;}case 10:{struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*_T134=(struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*)_T124;_T133= _T134->f1;_T12D= _T134->f2;_T12C= _T134->f3;}{struct Cyc_Absyn_Exp*e1=_T133;struct Cyc_List_List*es=_T12D;struct Cyc_Absyn_VarargCallInfo*vai=_T12C;
# 596
struct Cyc_Absyn_Exp*v1;
long is_setjmp=0;
LOOP: _T97= e1;{
void*_T134=_T97->r;struct _fat_ptr*_T135;struct Cyc_Absyn_Exp*_T136;_T98= (int*)_T134;_T99= *_T98;switch(_T99){case 13:{struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*_T137=(struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*)_T134;_T136= _T137->f1;}{struct Cyc_Absyn_Exp*e2=_T136;
# 601
e1= e2;goto LOOP;}case 1: _T9A= (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T134;_T9B= _T9A->f1;_T9C= (int*)_T9B;_T9D= *_T9C;if(_T9D!=0)goto _TL5F;{struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T137=(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T134;_T9E= _T137->f1;{struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*_T138=(struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)_T9E;_T9F= _T138->f1;{struct _tuple0 _T139=*_T9F;_T135= _T139.f1;}}}{struct _fat_ptr*n=_T135;_TA0= n;_TA1= *_TA0;_TA2= 
# 606
_tag_fat("setjmp",sizeof(char),7U);_TA3= Cyc_strcmp(_TA1,_TA2);if(_TA3!=0)goto _TL61;
is_setjmp= 1;goto _TL62;_TL61: _TL62: goto _LL7B;}_TL5F: _LL7B:
# 610
 v1= e1;goto _LL75;default:
# 613
 v1= Cyc_Lower_lower_rhs(ctxt,env,0,0,e1);goto _LL75;}_LL75:;}{
# 616
struct Cyc_List_List*vs;_TA4= is_setjmp;
if(!_TA4)goto _TL63;
vs= es;goto _TL64;
# 620
_TL63: vs= Cyc_Lower_lower_rhs_list(ctxt,env,es);_TL64: _TA5= v1;_TA6= vs;_TA7= e;_TA8= _TA7->loc;
res= Cyc_Absyn_fncall_exp(_TA5,_TA6,_TA8);goto _LL0;}}case 14:{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T134=(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T124;_TA9= _T134->f1;_T133= (void*)_TA9;_T130= _T134->f2;_T12B= _T134->f3;_T12A= _T134->f4;}{void*t=_T133;struct Cyc_Absyn_Exp*e1=_T130;long b=_T12B;enum Cyc_Absyn_Coercion c=_T12A;_TAA= t;_TAB= 
# 624
Cyc_Lower_lower_rhs(ctxt,env,effect_only,0,e1);_TAC= b;_TAD= c;_TAE= e;_TAF= _TAE->loc;res= Cyc_Absyn_cast_exp(_TAA,_TAB,_TAC,_TAD,_TAF);goto _LL0;}case 15:{struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct*_T134=(struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct*)_T124;_T133= _T134->f1;}{struct Cyc_Absyn_Exp*e1=_T133;_TB0= 
# 627
Cyc_Lower_lower_lhs(ctxt,env,e1);_TB1= e;_TB2= _TB1->loc;res= Cyc_Absyn_address_exp(_TB0,_TB2);goto _LL0;}case 17:{struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct*_T134=(struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct*)_T124;_TB3= _T134->f1;_T133= (void*)_TB3;}{void*t=_T133;_TB4= e;
# 630
return _TB4;goto _LL0;}case 18:
# 634
 res= e;goto _LL0;case 19:{struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct*_T134=(struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct*)_T124;_TB5= _T134->f1;_T133= (void*)_TB5;_T12D= _T134->f2;}{void*t=_T133;struct Cyc_List_List*fs=_T12D;
# 637
res= e;goto _LL0;}case 20:{struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*_T134=(struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*)_T124;_T133= _T134->f1;}{struct Cyc_Absyn_Exp*e1=_T133;_TB6= 
# 640
Cyc_Lower_lower_rhs(ctxt,env,0,0,e1);_TB7= e;_TB8= _TB7->loc;res= Cyc_Absyn_deref_exp(_TB6,_TB8);goto _LL0;}case 21:{struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*_T134=(struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*)_T124;_T133= _T134->f1;_T129= _T134->f2;_T12B= _T134->f3;_T128= _T134->f4;}{struct Cyc_Absyn_Exp*e1=_T133;struct _fat_ptr*f=_T129;long it=_T12B;long ir=_T128;_TB9= 
# 645
Cyc_Lower_lower_rhs(ctxt,env,0,0,e1);_TBA= f;_TBB= e;_TBC= _TBB->loc;res= Cyc_Absyn_aggrmember_exp(_TB9,_TBA,_TBC);goto _LL0;}case 22:{struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*_T134=(struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*)_T124;_T133= _T134->f1;_T129= _T134->f2;_T12B= _T134->f3;_T128= _T134->f4;}{struct Cyc_Absyn_Exp*e1=_T133;struct _fat_ptr*f=_T129;long it=_T12B;long ir=_T128;_TBD= 
# 649
Cyc_Lower_lower_rhs(ctxt,env,0,0,e1);_TBE= f;_TBF= e;_TC0= _TBF->loc;res= Cyc_Absyn_aggrarrow_exp(_TBD,_TBE,_TC0);goto _LL0;}case 23:{struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*_T134=(struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*)_T124;_T133= _T134->f1;_T130= _T134->f2;}{struct Cyc_Absyn_Exp*e1=_T133;struct Cyc_Absyn_Exp*e2=_T130;
# 654
res= Cyc_Lower_lower_rhs_subs(ctxt,env,e);goto _LL0;}case 31:{struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct*_T134=(struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct*)_T124;_T133= _T134->f1;_T127= _T134->f2;}{struct Cyc_Absyn_Enumdecl*ed=_T133;struct Cyc_Absyn_Enumfield*ef=_T127;_TC1= e;
# 657
return _TC1;}case 32:{struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct*_T134=(struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct*)_T124;_TC2= _T134->f1;_T133= (void*)_TC2;_T127= _T134->f2;}{void*tp=_T133;struct Cyc_Absyn_Enumfield*ef=_T127;_TC3= e;
# 659
return _TC3;}case 36:{struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct*_T134=(struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct*)_T124;_T133= _T134->f1;}{struct Cyc_Absyn_Stmt*s=_T133;
# 661
struct Cyc_Absyn_Exp*eopt=Cyc_Lower_get_assign_last_exp(env);_TC4= effect_only;
if(!_TC4)goto _TL65;
Cyc_Lower_set_assign_last_exp(env,0);
Cyc_Lower_lower_stmt(ctxt,env,s);
Cyc_Lower_set_assign_last_exp(env,eopt);_TC5= 
Cyc_Absyn_uint_exp(0U,0U);return _TC5;
# 670
_TL65:{struct _tuple14 _T134=Cyc_Lower_fresh_var(ctxt,env,e);struct Cyc_Absyn_Exp*_T135;struct Cyc_Absyn_Vardecl*_T136;_T136= _T134.f0;_T135= _T134.f1;{struct Cyc_Absyn_Vardecl*vd=_T136;struct Cyc_Absyn_Exp*temp=_T135;
Cyc_Lower_set_assign_last_exp(env,temp);
Cyc_Lower_lower_stmt(ctxt,env,s);
Cyc_Lower_set_assign_last_exp(env,eopt);_TC6= 
Cyc_Lower_deep_copy(temp);return _TC6;}}goto _LL0;}case 13:{struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*_T134=(struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*)_T124;_T133= _T134->f1;}{struct Cyc_Absyn_Exp*e=_T133;_TC7= 
# 678
Cyc_Lower_lower_rhs(ctxt,env,effect_only,has_target,e);return _TC7;}case 35:{struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct*_T134=(struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct*)_T124;_T133= _T134->f1;_T12D= _T134->f2;}{struct Cyc_Core_Opt*tdn=_T133;struct Cyc_List_List*dles=_T12D;
# 685
struct Cyc_List_List*dles2=0;
_TL6A: if(dles!=0)goto _TL68;else{goto _TL69;}
_TL68: _TC8= dles;_TC9= _TC8->hd;_TCA= (struct _tuple16*)_TC9;{struct _tuple16 _T134=*_TCA;struct Cyc_Absyn_Exp*_T135;struct Cyc_List_List*_T136;_T136= _T134.f0;_T135= _T134.f1;{struct Cyc_List_List*ds=_T136;struct Cyc_Absyn_Exp*e=_T135;
struct Cyc_Absyn_Exp*v=Cyc_Lower_lower_rhs(ctxt,env,0,0,e);{struct Cyc_List_List*_T137=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple16*_T138=_cycalloc(sizeof(struct _tuple16));
_T138->f0= ds;_T138->f1= v;_TCC= (struct _tuple16*)_T138;}_T137->hd= _TCC;_T137->tl= dles2;_TCB= (struct Cyc_List_List*)_T137;}dles2= _TCB;}}_TCD= dles;
# 686
dles= _TCD->tl;goto _TL6A;_TL69: _TCE= tdn;_TCF= 
# 691
Cyc_List_imp_rev(dles2);_TD0= e;_TD1= _TD0->loc;_TD2= Cyc_Absyn_unresolvedmem_exp(_TCE,_TCF,_TD1);return _TD2;}case 39:
# 693
 res= e;goto _LL0;case 12:{struct Cyc_String_pa_PrintArg_struct _T134;_T134.tag= 0;
# 696
({__typeof__(Cyc_Absynpp_exp2string(e))_T135=Cyc_Absynpp_exp2string(e);_T134.f1= _T135;});_TD3= _T134;}{struct Cyc_String_pa_PrintArg_struct _T134=_TD3;void*_T135[1];_T135[0]= & _T134;_TD5= Cyc_Warn_impos;{int(*_T136)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_TD5;_TD4= _T136;}_TD6= _tag_fat("no instantiate expression in lower_rhs (%s)",sizeof(char),44U);_TD7= _tag_fat(_T135,sizeof(void*),1);_TD4(_TD6,_TD7);}case 25:{struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*_T134=(struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*)_T124;_T133= _T134->f1;}{struct Cyc_List_List*dles=_T133;_TD9= Cyc_Warn_impos;{
# 698
int(*_T134)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_TD9;_TD8= _T134;}_TDA= _tag_fat("array in lower_rhs",sizeof(char),19U);_TDB= _tag_fat(0U,sizeof(void*),0);_TD8(_TDA,_TDB);}case 28:{struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*_T134=(struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*)_T124;_T133= _T134->f1;_T12D= _T134->f2;_T126= _T134->f3;_T125= _T134->f4;}{struct _tuple0*tdn=_T133;struct Cyc_List_List*ts=_T12D;struct Cyc_List_List*es=_T126;struct Cyc_Absyn_Aggrdecl*ad=_T125;_TDD= Cyc_Warn_impos;{
# 700
int(*_T134)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_TDD;_TDC= _T134;}_TDE= _tag_fat("aggregate in lower_rhs",sizeof(char),23U);_TDF= _tag_fat(0U,sizeof(void*),0);_TDC(_TDE,_TDF);}case 29:{struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct*_T134=(struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct*)_T124;_TE0= _T134->f1;_T133= (void*)_TE0;_T12B= _T134->f2;_T12D= _T134->f3;}{void*topt=_T133;long tuple=_T12B;struct Cyc_List_List*dles=_T12D;_TE2= Cyc_Warn_impos;{
# 702
int(*_T134)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_TE2;_TE1= _T134;}_TE3= _tag_fat("anonstrct in lower_rhs",sizeof(char),23U);_TE4= _tag_fat(0U,sizeof(void*),0);_TE1(_TE3,_TE4);}case 33:{struct Cyc_String_pa_PrintArg_struct _T134;_T134.tag= 0;
# 705
({__typeof__(Cyc_Absynpp_exp2string(e))_T135=Cyc_Absynpp_exp2string(e);_T134.f1= _T135;});_TE5= _T134;}{struct Cyc_String_pa_PrintArg_struct _T134=_TE5;void*_T135[1];_T135[0]= & _T134;_TE7= Cyc_Warn_impos;{int(*_T136)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_TE7;_TE6= _T136;}_TE8= _tag_fat("malloc expression in lower_rhs (%s)",sizeof(char),36U);_TE9= _tag_fat(_T135,sizeof(void*),1);_TE6(_TE8,_TE9);}case 24:{struct Cyc_String_pa_PrintArg_struct _T134;_T134.tag= 0;
# 707
({__typeof__(Cyc_Absynpp_exp2string(e))_T135=Cyc_Absynpp_exp2string(e);_T134.f1= _T135;});_TEA= _T134;}{struct Cyc_String_pa_PrintArg_struct _T134=_TEA;void*_T135[1];_T135[0]= & _T134;_TEC= Cyc_Warn_impos;{int(*_T136)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_TEC;_TEB= _T136;}_TED= _tag_fat("compoundlit expression in lower_rhs (%s)",sizeof(char),41U);_TEE= _tag_fat(_T135,sizeof(void*),1);_TEB(_TED,_TEE);}case 37:{struct Cyc_String_pa_PrintArg_struct _T134;_T134.tag= 0;
# 709
({__typeof__(Cyc_Absynpp_exp2string(e))_T135=Cyc_Absynpp_exp2string(e);_T134.f1= _T135;});_TEF= _T134;}{struct Cyc_String_pa_PrintArg_struct _T134=_TEF;void*_T135[1];_T135[0]= & _T134;_TF1= Cyc_Warn_impos;{int(*_T136)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_TF1;_TF0= _T136;}_TF2= _tag_fat("tagcheck expression in lower_rhs (%s)",sizeof(char),38U);_TF3= _tag_fat(_T135,sizeof(void*),1);_TF0(_TF2,_TF3);}case 38:{struct Cyc_String_pa_PrintArg_struct _T134;_T134.tag= 0;
# 711
({__typeof__(Cyc_Absynpp_exp2string(e))_T135=Cyc_Absynpp_exp2string(e);_T134.f1= _T135;});_TF4= _T134;}{struct Cyc_String_pa_PrintArg_struct _T134=_TF4;void*_T135[1];_T135[0]= & _T134;_TF6= Cyc_Warn_impos;{int(*_T136)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_TF6;_TF5= _T136;}_TF7= _tag_fat("valueof expression in lower_rhs (%s)",sizeof(char),37U);_TF8= _tag_fat(_T135,sizeof(void*),1);_TF5(_TF7,_TF8);}case 40:{struct Cyc_String_pa_PrintArg_struct _T134;_T134.tag= 0;
# 713
({__typeof__(Cyc_Absynpp_exp2string(e))_T135=Cyc_Absynpp_exp2string(e);_T134.f1= _T135;});_TF9= _T134;}{struct Cyc_String_pa_PrintArg_struct _T134=_TF9;void*_T135[1];_T135[0]= & _T134;_TFB= Cyc_Warn_impos;{int(*_T136)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_TFB;_TFA= _T136;}_TFC= _tag_fat("extension expression in lower_rhs (%s)",sizeof(char),39U);_TFD= _tag_fat(_T135,sizeof(void*),1);_TFA(_TFC,_TFD);}case 41: goto _LL4C;case 42: _LL4C:{struct Cyc_String_pa_PrintArg_struct _T134;_T134.tag= 0;
# 716
({__typeof__(Cyc_Absynpp_exp2string(e))_T135=Cyc_Absynpp_exp2string(e);_T134.f1= _T135;});_TFE= _T134;}{struct Cyc_String_pa_PrintArg_struct _T134=_TFE;void*_T135[1];_T135[0]= & _T134;_T100= Cyc_Warn_impos;{int(*_T136)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T100;_TFF= _T136;}_T101= _tag_fat("assert expression in lower_rhs (%s)",sizeof(char),36U);_T102= _tag_fat(_T135,sizeof(void*),1);_TFF(_T101,_T102);}case 34:{struct Cyc_String_pa_PrintArg_struct _T134;_T134.tag= 0;
# 718
({__typeof__(Cyc_Absynpp_exp2string(e))_T135=Cyc_Absynpp_exp2string(e);_T134.f1= _T135;});_T103= _T134;}{struct Cyc_String_pa_PrintArg_struct _T134=_T103;void*_T135[1];_T135[0]= & _T134;_T105= Cyc_Warn_impos;{int(*_T136)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T105;_T104= _T136;}_T106= _tag_fat("swap expression in lower_rhs (%s)",sizeof(char),34U);_T107= _tag_fat(_T135,sizeof(void*),1);_T104(_T106,_T107);}case 30:{struct Cyc_String_pa_PrintArg_struct _T134;_T134.tag= 0;
# 720
({__typeof__(Cyc_Absynpp_exp2string(e))_T135=Cyc_Absynpp_exp2string(e);_T134.f1= _T135;});_T108= _T134;}{struct Cyc_String_pa_PrintArg_struct _T134=_T108;void*_T135[1];_T135[0]= & _T134;_T10A= Cyc_Warn_impos;{int(*_T136)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T10A;_T109= _T136;}_T10B= _tag_fat("datatype expression in lower_rhs (%s)",sizeof(char),38U);_T10C= _tag_fat(_T135,sizeof(void*),1);_T109(_T10B,_T10C);}case 26: goto _LL54;case 27: _LL54:{struct Cyc_String_pa_PrintArg_struct _T134;_T134.tag= 0;
# 723
({__typeof__(Cyc_Absynpp_exp2string(e))_T135=Cyc_Absynpp_exp2string(e);_T134.f1= _T135;});_T10D= _T134;}{struct Cyc_String_pa_PrintArg_struct _T134=_T10D;void*_T135[1];_T135[0]= & _T134;_T10F= Cyc_Warn_impos;{int(*_T136)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T10F;_T10E= _T136;}_T110= _tag_fat("comprehension expression in lower_rhs (%s)",sizeof(char),43U);_T111= _tag_fat(_T135,sizeof(void*),1);_T10E(_T110,_T111);}case 11:{struct Cyc_String_pa_PrintArg_struct _T134;_T134.tag= 0;
# 725
({__typeof__(Cyc_Absynpp_exp2string(e))_T135=Cyc_Absynpp_exp2string(e);_T134.f1= _T135;});_T112= _T134;}{struct Cyc_String_pa_PrintArg_struct _T134=_T112;void*_T135[1];_T135[0]= & _T134;_T114= Cyc_Warn_impos;{int(*_T136)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T114;_T113= _T136;}_T115= _tag_fat("throw expression in lower_rhs (%s)",sizeof(char),35U);_T116= _tag_fat(_T135,sizeof(void*),1);_T113(_T115,_T116);}default:{struct Cyc_String_pa_PrintArg_struct _T134;_T134.tag= 0;
# 727
({__typeof__(Cyc_Absynpp_exp2string(e))_T135=Cyc_Absynpp_exp2string(e);_T134.f1= _T135;});_T117= _T134;}{struct Cyc_String_pa_PrintArg_struct _T134=_T117;void*_T135[1];_T135[0]= & _T134;_T119= Cyc_Warn_impos;{int(*_T136)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T119;_T118= _T136;}_T11A= _tag_fat("new expression in lower_rhs (%s)",sizeof(char),33U);_T11B= _tag_fat(_T135,sizeof(void*),1);_T118(_T11A,_T11B);}}_LL0:;}_T11C= effect_only;
# 729
if(!_T11C)goto _TL6B;_T11D= 
Cyc_Lower_might_have_effect(res);if(!_T11D)goto _TL6D;_T11E= env;_T11F= 
Cyc_Absyn_exp_stmt(res,0U);Cyc_Lower_emit_stmt(_T11E,_T11F);goto _TL6E;_TL6D: _TL6E: _T120= res;
return _T120;
# 736
_TL6B: _T121= has_target;if(_T121)goto _TL6F;else{goto _TL71;}
_TL71:{struct _tuple14 _T124=Cyc_Lower_fresh_var(ctxt,env,e);struct Cyc_Absyn_Exp*_T125;struct Cyc_Absyn_Vardecl*_T126;_T126= _T124.f0;_T125= _T124.f1;{struct Cyc_Absyn_Vardecl*vd=_T126;struct Cyc_Absyn_Exp*temp=_T125;
Cyc_Lower_emit_assign(env,temp,res,0U);_T122= temp;
return _T122;}}
# 741
_TL6F: _T123= res;return _T123;}
# 747
static struct Cyc_Absyn_Exp*Cyc_Lower_lower_rhs_subs(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Lower_Env*env,struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;int*_T1;int _T2;struct Cyc_Absyn_Exp*_T3;struct Cyc_Absyn_Exp*_T4;struct Cyc_Absyn_Exp*_T5;unsigned _T6;struct Cyc_Absyn_Exp*_T7;struct Cyc_Absyn_Exp*_T8;_T0= e;{
void*_T9=_T0->r;struct Cyc_Absyn_Exp*_TA;struct Cyc_Absyn_Exp*_TB;_T1= (int*)_T9;_T2= *_T1;if(_T2!=23)goto _TL72;{struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*_TC=(struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*)_T9;_TB= _TC->f1;_TA= _TC->f2;}{struct Cyc_Absyn_Exp*e1=_TB;struct Cyc_Absyn_Exp*e2=_TA;_T3= 
# 750
Cyc_Lower_lower_rhs_subs(ctxt,env,e1);_T4= Cyc_Lower_lower_rhs(ctxt,env,0,0,e2);_T5= e;_T6= _T5->loc;_T7= Cyc_Absyn_subscript_exp(_T3,_T4,_T6);return _T7;}_TL72: _T8= 
# 752
Cyc_Lower_lower_rhs(ctxt,env,0,0,e);return _T8;;}}
# 758
static struct Cyc_Absyn_Exp*Cyc_Lower_lower_lhs(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Lower_Env*env,struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;int*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;struct Cyc_Absyn_Exp*_T4;struct Cyc_Absyn_Exp*_T5;struct Cyc_Absyn_Exp*_T6;struct _fat_ptr*_T7;struct Cyc_Absyn_Exp*_T8;unsigned _T9;struct Cyc_Absyn_Exp*_TA;struct Cyc_Absyn_Exp*_TB;struct Cyc_Absyn_Exp*_TC;struct _fat_ptr*_TD;struct Cyc_Absyn_Exp*_TE;unsigned _TF;struct Cyc_Absyn_Exp*_T10;struct Cyc_Absyn_Exp*_T11;struct Cyc_Absyn_Exp*_T12;unsigned _T13;struct Cyc_Absyn_Exp*_T14;void*_T15;struct Cyc_Absyn_Exp*_T16;void*_T17;void*_T18;struct Cyc_Absyn_Exp*_T19;void*_T1A;long _T1B;struct Cyc_String_pa_PrintArg_struct _T1C;struct Cyc_String_pa_PrintArg_struct _T1D;struct Cyc_Absyn_Exp*_T1E;void*_T1F;void*_T20;struct Cyc_String_pa_PrintArg_struct _T21;struct Cyc_Absyn_Exp*_T22;unsigned _T23;struct _fat_ptr _T24;struct _fat_ptr _T25;struct Cyc_Absyn_Exp*_T26;struct Cyc_String_pa_PrintArg_struct _T27;int(*_T28)(struct _fat_ptr,struct _fat_ptr);void*(*_T29)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T2A;struct _fat_ptr _T2B;_T0= e;{
void*_T2C=_T0->r;struct Cyc_Absyn_Exp*_T2D;long _T2E;long _T2F;struct _fat_ptr*_T30;void*_T31;_T1= (int*)_T2C;_T2= *_T1;switch(_T2){case 1: _T3= e;
# 761
return _T3;case 13:{struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*_T32=(struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*)_T2C;_T31= _T32->f1;}{struct Cyc_Absyn_Exp*e=_T31;_T4= 
# 763
Cyc_Lower_lower_lhs(ctxt,env,e);return _T4;}case 12:{struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct*_T32=(struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct*)_T2C;_T31= _T32->f1;}{struct Cyc_Absyn_Exp*e=_T31;_T5= 
# 765
Cyc_Lower_lower_lhs(ctxt,env,e);return _T5;}case 21:{struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*_T32=(struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*)_T2C;_T31= _T32->f1;_T30= _T32->f2;_T2F= _T32->f3;_T2E= _T32->f4;}{struct Cyc_Absyn_Exp*e1=_T31;struct _fat_ptr*f=_T30;long it=_T2F;long ir=_T2E;_T6= 
# 767
Cyc_Lower_lower_lhs(ctxt,env,e1);_T7= f;_T8= e;_T9= _T8->loc;_TA= Cyc_Absyn_aggrmember_exp(_T6,_T7,_T9);return _TA;}case 23:{struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*_T32=(struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*)_T2C;_T31= _T32->f1;_T2D= _T32->f2;}{struct Cyc_Absyn_Exp*e1=_T31;struct Cyc_Absyn_Exp*e2=_T2D;_TB= 
# 770
Cyc_Lower_lower_rhs_subs(ctxt,env,e);return _TB;}case 22:{struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*_T32=(struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*)_T2C;_T31= _T32->f1;_T30= _T32->f2;_T2F= _T32->f3;_T2E= _T32->f4;}{struct Cyc_Absyn_Exp*e1=_T31;struct _fat_ptr*f=_T30;long it=_T2F;long ir=_T2E;_TC= 
# 792 "cyclone/library/compiler/lower.cyc"
Cyc_Lower_lower_rhs(ctxt,env,0,0,e1);_TD= f;_TE= e;_TF= _TE->loc;_T10= Cyc_Absyn_aggrarrow_exp(_TC,_TD,_TF);return _T10;}case 20:{struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*_T32=(struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*)_T2C;_T31= _T32->f1;}{struct Cyc_Absyn_Exp*e1=_T31;_T11= 
# 794
Cyc_Lower_lower_rhs(ctxt,env,0,0,e1);_T12= e;_T13= _T12->loc;_T14= Cyc_Absyn_deref_exp(_T11,_T13);return _T14;}case 14:{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T32=(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T2C;_T15= _T32->f1;_T31= (void*)_T15;_T2D= _T32->f2;}{void*t=_T31;struct Cyc_Absyn_Exp*e1=_T2D;_T16= e1;_T17= _T16->topt;
# 797
if(_T17==0)goto _TL77;else{goto _TL78;}_TL78: _T18= t;_T19= e1;_T1A= _T19->topt;_T1B= Cyc_Unify_unify(_T18,_T1A);if(_T1B)goto _TL75;else{goto _TL77;}
_TL77:{struct Cyc_String_pa_PrintArg_struct _T32;_T32.tag= 0;({__typeof__(Cyc_Absynpp_exp2string(e1))_T33=Cyc_Absynpp_exp2string(e1);_T32.f1= _T33;});_T1C= _T32;}{struct Cyc_String_pa_PrintArg_struct _T32=_T1C;{struct Cyc_String_pa_PrintArg_struct _T33;_T33.tag= 0;_T1E= e1;_T1F= _T1E->topt;_T20= 
_check_null(_T1F);({__typeof__(Cyc_Absynpp_typ2string(_T20))_T34=Cyc_Absynpp_typ2string(_T20);_T33.f1= _T34;});_T1D= _T33;}{struct Cyc_String_pa_PrintArg_struct _T33=_T1D;{struct Cyc_String_pa_PrintArg_struct _T34;_T34.tag= 0;({__typeof__(Cyc_Absynpp_typ2string(t))_T35=Cyc_Absynpp_typ2string(t);_T34.f1= _T35;});_T21= _T34;}{struct Cyc_String_pa_PrintArg_struct _T34=_T21;void*_T35[3];_T35[0]= & _T32;_T35[1]= & _T33;_T35[2]= & _T34;_T22= e;_T23= _T22->loc;_T24= 
# 798
_tag_fat("cast on lhs %s : %s --> %s\n",sizeof(char),28U);_T25= _tag_fat(_T35,sizeof(void*),3);Cyc_Warn_warn(_T23,_T24,_T25);}}}goto _TL76;_TL75: _TL76: _T26= 
# 800
Cyc_Lower_lower_lhs(ctxt,env,e1);return _T26;}default:{struct Cyc_String_pa_PrintArg_struct _T32;_T32.tag= 0;
# 802
({__typeof__(Cyc_Absynpp_exp2string(e))_T33=Cyc_Absynpp_exp2string(e);_T32.f1= _T33;});_T27= _T32;}{struct Cyc_String_pa_PrintArg_struct _T32=_T27;void*_T33[1];_T33[0]= & _T32;_T29= Cyc_Warn_impos;{int(*_T34)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T29;_T28= _T34;}_T2A= _tag_fat("lower_lhs applied to %s\n",sizeof(char),25U);_T2B= _tag_fat(_T33,sizeof(void*),1);_T28(_T2A,_T2B);}};}}struct _tuple17{enum Cyc_Absyn_Primop f0;struct Cyc_List_List*f1;};
# 806
static struct _tuple17 Cyc_Lower_negate(enum Cyc_Absyn_Primop p,struct Cyc_List_List*vs,unsigned loc){enum Cyc_Absyn_Primop _T0;int _T1;struct _tuple17 _T2;struct _tuple17 _T3;struct _tuple17 _T4;struct _tuple17 _T5;struct _tuple17 _T6;struct _tuple17 _T7;struct _tuple17 _T8;struct _tuple17 _T9;struct _tuple17 _TA;struct _tuple17 _TB;struct _tuple17 _TC;struct Cyc_List_List*_TD;_T0= p;_T1= (int)_T0;switch(_T1){case Cyc_Absyn_Eq:{struct _tuple17 _TE;
# 809
_TE.f0= 6U;_TE.f1= vs;_T2= _TE;}return _T2;case Cyc_Absyn_Neq:{struct _tuple17 _TE;
# 811
_TE.f0= 5U;_TE.f1= vs;_T3= _TE;}return _T3;case Cyc_Absyn_Gt:{struct _tuple17 _TE;
# 813
_TE.f0= 10U;_TE.f1= vs;_T4= _TE;}return _T4;case Cyc_Absyn_Lt:{struct _tuple17 _TE;
# 815
_TE.f0= 9U;_TE.f1= vs;_T5= _TE;}return _T5;case Cyc_Absyn_Gte:{struct _tuple17 _TE;
# 817
_TE.f0= 8U;_TE.f1= vs;_T6= _TE;}return _T6;case Cyc_Absyn_Lte:{struct _tuple17 _TE;
# 819
_TE.f0= 7U;_TE.f1= vs;_T7= _TE;}return _T7;case Cyc_Absyn_UGt:{struct _tuple17 _TE;
# 821
_TE.f0= 25U;_TE.f1= vs;_T8= _TE;}return _T8;case Cyc_Absyn_ULt:{struct _tuple17 _TE;
# 823
_TE.f0= 24U;_TE.f1= vs;_T9= _TE;}return _T9;case Cyc_Absyn_UGte:{struct _tuple17 _TE;
# 825
_TE.f0= 23U;_TE.f1= vs;_TA= _TE;}return _TA;case Cyc_Absyn_ULte:{struct _tuple17 _TE;
# 827
_TE.f0= 22U;_TE.f1= vs;_TB= _TE;}return _TB;default:{struct _tuple17 _TE;
# 829
_TE.f0= 11U;{struct Cyc_List_List*_TF=_cycalloc(sizeof(struct Cyc_List_List));({__typeof__(Cyc_Absyn_primop_exp(p,vs,loc))_T10=Cyc_Absyn_primop_exp(p,vs,loc);_TF->hd= _T10;});_TF->tl= 0;_TD= (struct Cyc_List_List*)_TF;}_TE.f1= _TD;_TC= _TE;}return _TC;};}
# 836
static struct _fat_ptr*Cyc_Lower_lower_true(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Lower_Env*env,struct Cyc_Absyn_Exp*e,struct _fat_ptr*falselab,unsigned loc){struct Cyc_Absyn_Exp*_T0;int*_T1;unsigned _T2;struct _fat_ptr*_T3;struct _fat_ptr*_T4;struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*_T5;enum Cyc_Absyn_Primop _T6;struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*_T7;struct Cyc_List_List*_T8;struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*_T9;struct Cyc_List_List*_TA;struct Cyc_List_List*_TB;struct Cyc_List_List*_TC;struct Cyc_List_List*_TD;void*_TE;struct _fat_ptr*_TF;enum Cyc_Absyn_Primop _T10;struct Cyc_List_List*_T11;struct Cyc_Absyn_Exp*_T12;unsigned _T13;struct Cyc_Lower_Env*_T14;enum Cyc_Absyn_Primop _T15;struct Cyc_List_List*_T16;struct Cyc_Absyn_Exp*_T17;unsigned _T18;struct Cyc_Absyn_Exp*_T19;struct Cyc_Absyn_Stmt*_T1A;struct Cyc_Absyn_Stmt*_T1B;unsigned _T1C;struct Cyc_Absyn_Stmt*_T1D;struct Cyc_Lower_Env*_T1E;struct Cyc_Absyn_Exp*_T1F;struct Cyc_Absyn_Stmt*_T20;struct Cyc_Absyn_Stmt*_T21;unsigned _T22;struct Cyc_Absyn_Stmt*_T23;_T0= e;{
void*_T24=_T0->r;struct Cyc_List_List*_T25;enum Cyc_Absyn_Primop _T26;struct Cyc_Absyn_Exp*_T27;struct Cyc_Absyn_Exp*_T28;_T1= (int*)_T24;_T2= *_T1;switch(_T2){case 7:{struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*_T29=(struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*)_T24;_T28= _T29->f1;_T27= _T29->f2;}{struct Cyc_Absyn_Exp*e1=_T28;struct Cyc_Absyn_Exp*e2=_T27;
# 839
struct _fat_ptr*topt=Cyc_Lower_lower_true(ctxt,env,e1,falselab,loc);
if(topt==0)goto _TL7B;
Cyc_Lower_emit_label(env,topt,0U);goto _TL7C;_TL7B: _TL7C:
 topt= Cyc_Lower_lower_true(ctxt,env,e2,falselab,loc);_T3= topt;
return _T3;}case 8:{struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*_T29=(struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*)_T24;_T28= _T29->f1;_T27= _T29->f2;}{struct Cyc_Absyn_Exp*e1=_T28;struct Cyc_Absyn_Exp*e2=_T27;
# 845
struct _fat_ptr*truelab=Cyc_Lower_new_label(ctxt,env);
Cyc_Lower_lower_cond(ctxt,env,e,truelab,falselab,loc);_T4= truelab;
return _T4;}case 3: _T5= (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*)_T24;_T6= _T5->f1;if(_T6!=Cyc_Absyn_Not)goto _TL7D;_T7= (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*)_T24;_T8= _T7->f2;if(_T8==0)goto _TL7F;_T9= (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*)_T24;_TA= _T9->f2;_TB= (struct Cyc_List_List*)_TA;_TC= _TB->tl;if(_TC!=0)goto _TL81;{struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*_T29=(struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*)_T24;_TD= _T29->f2;{struct Cyc_List_List _T2A=*_TD;_TE= _T2A.hd;_T28= (struct Cyc_Absyn_Exp*)_TE;}}{struct Cyc_Absyn_Exp*e1=_T28;
# 849
struct _fat_ptr*truelab=Cyc_Lower_new_label(ctxt,env);
Cyc_Lower_lower_cond(ctxt,env,e1,falselab,truelab,loc);_TF= truelab;
return _TF;}_TL81: goto _LL7;_TL7F: goto _LL7;_TL7D: _LL7:{struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*_T29=(struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*)_T24;_T26= _T29->f1;_T25= _T29->f2;}{enum Cyc_Absyn_Primop p=_T26;struct Cyc_List_List*es=_T25;
# 853
struct Cyc_List_List*vs=Cyc_Lower_lower_rhs_list(ctxt,env,es);_T10= p;_T11= vs;_T12= e;_T13= _T12->loc;{
struct _tuple17 _T29=Cyc_Lower_negate(_T10,_T11,_T13);struct Cyc_List_List*_T2A;enum Cyc_Absyn_Primop _T2B;_T2B= _T29.f0;_T2A= _T29.f1;{enum Cyc_Absyn_Primop p=_T2B;struct Cyc_List_List*vs=_T2A;_T14= env;_T15= p;_T16= vs;_T17= e;_T18= _T17->loc;_T19= 
Cyc_Absyn_primop_exp(_T15,_T16,_T18);_T1A= Cyc_Absyn_goto_stmt(falselab,0U);_T1B= 
Cyc_Absyn_skip_stmt(0U);_T1C= loc;_T1D= 
# 855
Cyc_Absyn_ifthenelse_stmt(_T19,_T1A,_T1B,_T1C);Cyc_Lower_emit_stmt(_T14,_T1D);
# 861
return 0;}}}default:  {
# 863
struct Cyc_Absyn_Exp*v=Cyc_Lower_lower_rhs(ctxt,env,0,0,e);_T1E= env;_T1F= 
# 865
Cyc_Absyn_prim1_exp(11U,v,0U);_T20= Cyc_Absyn_goto_stmt(falselab,0U);_T21= Cyc_Absyn_skip_stmt(0U);_T22= loc;_T23= Cyc_Absyn_ifthenelse_stmt(_T1F,_T20,_T21,_T22);
# 864
Cyc_Lower_emit_stmt(_T1E,_T23);
# 866
return 0;}};}}
# 872
static void Cyc_Lower_lower_cond(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Lower_Env*env,struct Cyc_Absyn_Exp*e,struct _fat_ptr*truelab,struct _fat_ptr*falselab,unsigned loc){struct Cyc_Absyn_Exp*_T0;int*_T1;unsigned _T2;struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*_T3;enum Cyc_Absyn_Primop _T4;struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*_T5;struct Cyc_List_List*_T6;struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*_T7;struct Cyc_List_List*_T8;struct Cyc_List_List*_T9;struct Cyc_List_List*_TA;struct Cyc_List_List*_TB;void*_TC;struct Cyc_Lower_Env*_TD;enum Cyc_Absyn_Primop _TE;struct Cyc_List_List*_TF;struct Cyc_Absyn_Exp*_T10;unsigned _T11;struct Cyc_Absyn_Exp*_T12;struct Cyc_Absyn_Stmt*_T13;struct Cyc_Absyn_Stmt*_T14;unsigned _T15;struct Cyc_Absyn_Stmt*_T16;struct Cyc_Lower_Env*_T17;struct Cyc_Absyn_Exp*_T18;struct Cyc_Absyn_Stmt*_T19;struct Cyc_Absyn_Stmt*_T1A;unsigned _T1B;struct Cyc_Absyn_Stmt*_T1C;_T0= e;{
void*_T1D=_T0->r;struct Cyc_List_List*_T1E;enum Cyc_Absyn_Primop _T1F;struct Cyc_Absyn_Exp*_T20;struct Cyc_Absyn_Exp*_T21;_T1= (int*)_T1D;_T2= *_T1;switch(_T2){case 7:{struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*_T22=(struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*)_T1D;_T21= _T22->f1;_T20= _T22->f2;}{struct Cyc_Absyn_Exp*e1=_T21;struct Cyc_Absyn_Exp*e2=_T20;
# 875
struct _fat_ptr*x=Cyc_Lower_new_label(ctxt,env);
Cyc_Lower_lower_cond(ctxt,env,e1,x,falselab,loc);
Cyc_Lower_emit_label(env,x,0U);
Cyc_Lower_lower_cond(ctxt,env,e2,truelab,falselab,loc);goto _LL0;}case 8:{struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*_T22=(struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*)_T1D;_T21= _T22->f1;_T20= _T22->f2;}{struct Cyc_Absyn_Exp*e1=_T21;struct Cyc_Absyn_Exp*e2=_T20;
# 881
struct _fat_ptr*x=Cyc_Lower_new_label(ctxt,env);
Cyc_Lower_lower_cond(ctxt,env,e1,truelab,x,loc);
Cyc_Lower_emit_label(env,x,0U);
Cyc_Lower_lower_cond(ctxt,env,e2,truelab,falselab,loc);goto _LL0;}case 3: _T3= (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*)_T1D;_T4= _T3->f1;if(_T4!=Cyc_Absyn_Not)goto _TL84;_T5= (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*)_T1D;_T6= _T5->f2;if(_T6==0)goto _TL86;_T7= (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*)_T1D;_T8= _T7->f2;_T9= (struct Cyc_List_List*)_T8;_TA= _T9->tl;if(_TA!=0)goto _TL88;{struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*_T22=(struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*)_T1D;_TB= _T22->f2;{struct Cyc_List_List _T23=*_TB;_TC= _T23.hd;_T21= (struct Cyc_Absyn_Exp*)_TC;}}{struct Cyc_Absyn_Exp*e1=_T21;
# 887
Cyc_Lower_lower_cond(ctxt,env,e1,falselab,truelab,loc);goto _LL0;}_TL88: goto _LL7;_TL86: goto _LL7;_TL84: _LL7:{struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*_T22=(struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*)_T1D;_T1F= _T22->f1;_T1E= _T22->f2;}{enum Cyc_Absyn_Primop p=_T1F;struct Cyc_List_List*es=_T1E;
# 890
struct Cyc_List_List*vs=Cyc_Lower_lower_rhs_list(ctxt,env,es);_TD= env;_TE= p;_TF= vs;_T10= e;_T11= _T10->loc;_T12= 
Cyc_Absyn_primop_exp(_TE,_TF,_T11);_T13= Cyc_Absyn_goto_stmt(truelab,0U);_T14= 
Cyc_Absyn_goto_stmt(falselab,0U);_T15= loc;_T16= 
# 891
Cyc_Absyn_ifthenelse_stmt(_T12,_T13,_T14,_T15);Cyc_Lower_emit_stmt(_TD,_T16);goto _LL0;}default: _T17= env;_T18= 
# 895
Cyc_Lower_lower_rhs(ctxt,env,0,0,e);_T19= Cyc_Absyn_goto_stmt(truelab,0U);_T1A= 
Cyc_Absyn_goto_stmt(falselab,0U);_T1B= loc;_T1C= 
# 895
Cyc_Absyn_ifthenelse_stmt(_T18,_T19,_T1A,_T1B);Cyc_Lower_emit_stmt(_T17,_T1C);goto _LL0;}_LL0:;}}
# 901
static struct Cyc_Absyn_Fndecl*Cyc_Lower_lower_fn(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Absyn_Fndecl*fd){struct Cyc_Absyn_Fndecl*_T0;struct Cyc_Toc_TocContext*_T1;struct Cyc_Lower_Env*_T2;struct Cyc_Absyn_Fndecl*_T3;struct Cyc_Absyn_Stmt*_T4;struct Cyc_List_List*_T5;struct Cyc_Lower_Env*_T6;struct Cyc_Absyn_Decl*_T7;struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T8;struct Cyc_List_List*_T9;void*_TA;struct Cyc_Absyn_Stmt*_TB;struct Cyc_List_List*_TC;struct Cyc_Absyn_Fndecl*_TD;struct Cyc_Absyn_Fndecl*_TE;
struct Cyc_Absyn_Fndecl*_TF;_TF= _cycalloc(sizeof(struct Cyc_Absyn_Fndecl));_T0= fd;*_TF= *_T0;{struct Cyc_Absyn_Fndecl*fd=_TF;
struct Cyc_Lower_Env*env=Cyc_Lower_new_env();_T1= ctxt;_T2= env;_T3= fd;_T4= _T3->body;
# 905
Cyc_Lower_lower_stmt(_T1,_T2,_T4);_T5= 
Cyc_Lower_prev_stmts(env);{struct Cyc_Absyn_Stmt*body=Cyc_Lower_rev_seq_stmts(_T5);_T6= env;{
struct Cyc_List_List*ts=_T6->temps;_TL8D: if(ts!=0)goto _TL8B;else{goto _TL8C;}
_TL8B:{struct Cyc_Absyn_Decl*_T10=_cycalloc(sizeof(struct Cyc_Absyn_Decl));{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T11=_cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));_T11->tag= 0;_T9= ts;_TA= _T9->hd;_T11->f1= (struct Cyc_Absyn_Vardecl*)_TA;_T8= (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T11;}_T10->r= (void*)_T8;_T10->loc= 0U;_T7= (struct Cyc_Absyn_Decl*)_T10;}_TB= body;body= Cyc_Absyn_decl_stmt(_T7,_TB,0U);_TC= ts;
# 907
ts= _TC->tl;goto _TL8D;_TL8C:;}_TD= fd;
# 909
_TD->body= body;_TE= fd;
return _TE;}}}
# 913
static struct Cyc_List_List*Cyc_Lower_anormalize(struct Cyc_Toc_TocContext*ctxt,struct Cyc_List_List*ds){struct Cyc_List_List*_T0;void*_T1;struct Cyc_Absyn_Decl*_T2;int*_T3;int _T4;struct Cyc_Absyn_Fndecl*_T5;enum Cyc_Absyn_Scope _T6;int _T7;struct Cyc_List_List*_T8;struct Cyc_Absyn_Decl*_T9;struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*_TA;struct Cyc_Absyn_Decl*_TB;struct Cyc_List_List*_TC;struct Cyc_List_List*_TD;struct Cyc_List_List*_TE;struct Cyc_List_List*_TF;
struct Cyc_List_List*res=0;
_TL91: if(ds!=0)goto _TL8F;else{goto _TL90;}
_TL8F: _T0= ds;_T1= _T0->hd;{struct Cyc_Absyn_Decl*d=(struct Cyc_Absyn_Decl*)_T1;_T2= d;{
void*_T10=_T2->r;struct Cyc_Absyn_Fndecl*_T11;_T3= (int*)_T10;_T4= *_T3;if(_T4!=1)goto _TL92;{struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*_T12=(struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*)_T10;_T11= _T12->f1;}{struct Cyc_Absyn_Fndecl*fd=_T11;_T5= fd;_T6= _T5->orig_scope;_T7= (int)_T6;
# 920
if(_T7==4)goto _TL94;{struct Cyc_List_List*_T12=_cycalloc(sizeof(struct Cyc_List_List));{struct Cyc_Absyn_Decl*_T13=_cycalloc(sizeof(struct Cyc_Absyn_Decl));{struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*_T14=_cycalloc(sizeof(struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct));_T14->tag= 1;
({__typeof__(Cyc_Lower_lower_fn(ctxt,fd))_T15=Cyc_Lower_lower_fn(ctxt,fd);_T14->f1= _T15;});_TA= (struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*)_T14;}_T13->r= (void*)_TA;_TB= d;_T13->loc= _TB->loc;_T9= (struct Cyc_Absyn_Decl*)_T13;}_T12->hd= _T9;_T12->tl= res;_T8= (struct Cyc_List_List*)_T12;}res= _T8;goto _TL95;
# 923
_TL94:{struct Cyc_List_List*_T12=_cycalloc(sizeof(struct Cyc_List_List));_T12->hd= d;_T12->tl= res;_TC= (struct Cyc_List_List*)_T12;}res= _TC;_TL95: goto _LL0;}_TL92:{struct Cyc_List_List*_T12=_cycalloc(sizeof(struct Cyc_List_List));
# 926
_T12->hd= d;_T12->tl= res;_TD= (struct Cyc_List_List*)_T12;}res= _TD;goto _LL0;_LL0:;}}_TE= ds;
# 915
ds= _TE->tl;goto _TL91;_TL90: _TF= 
# 930
Cyc_List_imp_rev(res);return _TF;}
# 933
struct Cyc_List_List*Cyc_Lower_lower(struct Cyc_Toc_TocContext*ctxt,struct Cyc_List_List*ds){struct Cyc_List_List*_T0;
# 935
ds= Cyc_Lower_anormalize(ctxt,ds);_T0= ds;
return _T0;}
