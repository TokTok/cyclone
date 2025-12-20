#include <cyc_include.h>
 struct Cyc_Core_Opt{void*v;};
# 121 "./cyclone/library/std/core.h"
int Cyc_Core_ptrcmp(void*,void*);struct Cyc_List_List{void*hd;struct Cyc_List_List*tl;};
# 173 "./cyclone/library/std/list.h"
extern struct Cyc_List_List*Cyc_List_rev(struct Cyc_List_List*);struct Cyc_AssnDef_ExistAssnFn;struct _union_Nmspace_Abs_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_Rel_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_C_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_Loc_n{int tag;int val;};union Cyc_Absyn_Nmspace{struct _union_Nmspace_Abs_n Abs_n;struct _union_Nmspace_Rel_n Rel_n;struct _union_Nmspace_C_n C_n;struct _union_Nmspace_Loc_n Loc_n;};struct _tuple0{union Cyc_Absyn_Nmspace f0;struct _fat_ptr*f1;};
# 148 "cyclone/library/compiler/absyn.h"
enum Cyc_Absyn_Scope{Cyc_Absyn_Static =0U,Cyc_Absyn_Abstract =1U,Cyc_Absyn_Public =2U,Cyc_Absyn_Extern =3U,Cyc_Absyn_ExternC =4U,Cyc_Absyn_Register =5U,Cyc_Absyn_Noreturn =6U};struct Cyc_Absyn_Tqual{long print_const: 1;long q_volatile: 1;long q_restrict: 1;long real_const: 1;unsigned loc;};
# 186
enum Cyc_Absyn_AggrKind{Cyc_Absyn_StructA =0U,Cyc_Absyn_UnionA =1U};struct Cyc_Absyn_Tvar{struct _fat_ptr*name;int identity;void*kind;void*aquals_bound;};struct Cyc_Absyn_PtrLoc{unsigned ptr_loc;unsigned rgn_loc;unsigned zt_loc;};struct Cyc_Absyn_PtrAtts{void*eff;void*nullable;void*bounds;void*zero_term;struct Cyc_Absyn_PtrLoc*ptrloc;void*autoreleased;void*aqual;};struct Cyc_Absyn_PtrInfo{void*elt_type;struct Cyc_Absyn_Tqual elt_tq;struct Cyc_Absyn_PtrAtts ptr_atts;};struct Cyc_Absyn_VarargInfo{struct _fat_ptr*name;struct Cyc_Absyn_Tqual tq;void*type;long inject;};struct Cyc_Absyn_FnInfo{struct Cyc_List_List*tvars;void*effect;struct Cyc_Absyn_Tqual ret_tqual;void*ret_type;struct Cyc_List_List*args;long c_varargs;struct Cyc_Absyn_VarargInfo*cyc_varargs;struct Cyc_List_List*qual_bnd;struct Cyc_List_List*attributes;struct Cyc_Absyn_Exp*checks_clause;struct Cyc_AssnDef_ExistAssnFn*checks_assn;struct Cyc_Absyn_Exp*requires_clause;struct Cyc_AssnDef_ExistAssnFn*requires_assn;struct Cyc_Absyn_Exp*ensures_clause;struct Cyc_AssnDef_ExistAssnFn*ensures_assn;struct Cyc_Absyn_Exp*throws_clause;struct Cyc_AssnDef_ExistAssnFn*throws_assn;struct Cyc_Absyn_Vardecl*return_value;struct Cyc_List_List*arg_vardecls;struct Cyc_List_List*effconstr;};struct Cyc_Absyn_PointerType_Absyn_Type_struct{int tag;struct Cyc_Absyn_PtrInfo f1;};
# 596 "cyclone/library/compiler/absyn.h"
enum Cyc_Absyn_Primop{Cyc_Absyn_Plus =0U,Cyc_Absyn_Times =1U,Cyc_Absyn_Minus =2U,Cyc_Absyn_Div =3U,Cyc_Absyn_Mod =4U,Cyc_Absyn_Eq =5U,Cyc_Absyn_Neq =6U,Cyc_Absyn_Gt =7U,Cyc_Absyn_Lt =8U,Cyc_Absyn_Gte =9U,Cyc_Absyn_Lte =10U,Cyc_Absyn_Not =11U,Cyc_Absyn_Bitnot =12U,Cyc_Absyn_Bitand =13U,Cyc_Absyn_Bitor =14U,Cyc_Absyn_Bitxor =15U,Cyc_Absyn_Bitlshift =16U,Cyc_Absyn_Bitlrshift =17U,Cyc_Absyn_Numelts =18U,Cyc_Absyn_Tagof =19U,Cyc_Absyn_UDiv =20U,Cyc_Absyn_UMod =21U,Cyc_Absyn_UGt =22U,Cyc_Absyn_ULt =23U,Cyc_Absyn_UGte =24U,Cyc_Absyn_ULte =25U};struct Cyc_Absyn_PrimopOpt{enum Cyc_Absyn_Primop v;};
# 631
enum Cyc_Absyn_Incrementor{Cyc_Absyn_PreInc =0U,Cyc_Absyn_PostInc =1U,Cyc_Absyn_PreDec =2U,Cyc_Absyn_PostDec =3U};struct Cyc_Absyn_VarargCallInfo{int num_varargs;struct Cyc_List_List*injectors;struct Cyc_Absyn_VarargInfo*vai;};
# 656
enum Cyc_Absyn_Coercion{Cyc_Absyn_Unknown_coercion =0U,Cyc_Absyn_No_coercion =1U,Cyc_Absyn_Null_to_NonNull =2U,Cyc_Absyn_Subset_coercion =3U,Cyc_Absyn_Other_coercion =4U};
# 671
enum Cyc_Absyn_MallocKind{Cyc_Absyn_Malloc =0U,Cyc_Absyn_Calloc =1U,Cyc_Absyn_Vmalloc =2U};struct Cyc_Absyn_MallocInfo{enum Cyc_Absyn_MallocKind mknd;struct Cyc_Absyn_Exp*rgn;struct Cyc_Absyn_Exp*aqual;void**elt_type;struct Cyc_Absyn_Exp*num_elts;long fat_result;long inline_call;};struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct{int tag;void*f1;};struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct{int tag;enum Cyc_Absyn_Primop f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_PrimopOpt*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;enum Cyc_Absyn_Incrementor f2;};struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_List_List*f2;struct Cyc_Absyn_VarargCallInfo*f3;long f4;};struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;long f2;};struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct{int tag;void*f1;struct Cyc_Absyn_Exp*f2;long f3;enum Cyc_Absyn_Coercion f4;};struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _fat_ptr*f2;long f3;long f4;};struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _fat_ptr*f2;long f3;long f4;};struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct{int tag;struct Cyc_List_List*f1;};struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Vardecl*f1;struct Cyc_Absyn_Exp*f2;struct Cyc_Absyn_Exp*f3;long f4;};struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;void*f2;long f3;};struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct{int tag;struct _tuple0*f1;struct Cyc_List_List*f2;struct Cyc_List_List*f3;struct Cyc_Absyn_Aggrdecl*f4;};struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct{int tag;void*f1;long f2;struct Cyc_List_List*f3;};struct Cyc_Absyn_Datatype_e_Absyn_Raw_exp_struct{int tag;struct Cyc_List_List*f1;struct Cyc_Absyn_Datatypedecl*f2;struct Cyc_Absyn_Datatypefield*f3;};struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_MallocInfo f1;};struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Stmt*f1;};struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _fat_ptr*f2;};struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;long f2;long f3;};struct Cyc_Absyn_Assert_false_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Exp{void*topt;void*r;unsigned loc;void*annot;};struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Stmt*f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Stmt*f2;struct Cyc_Absyn_Stmt*f3;};struct _tuple9{struct Cyc_Absyn_Exp*f0;struct Cyc_Absyn_Stmt*f1;};struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct{int tag;struct _tuple9 f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _tuple9 f2;struct _tuple9 f3;struct Cyc_Absyn_Stmt*f4;};struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_List_List*f2;void*f3;};struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_List_List*f1;struct Cyc_Absyn_Switch_clause**f2;};struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Decl*f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct{int tag;struct _fat_ptr*f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Stmt*f1;struct _tuple9 f2;};struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Stmt*f1;struct Cyc_List_List*f2;void*f3;};struct Cyc_Absyn_Stmt{void*r;unsigned loc;void*annot;};struct Cyc_Absyn_Pat{void*r;void*topt;unsigned loc;};struct Cyc_Absyn_Switch_clause{struct Cyc_Absyn_Pat*pattern;struct Cyc_Core_Opt*pat_vars;struct Cyc_Absyn_Exp*where_clause;struct Cyc_Absyn_Stmt*body;unsigned loc;};struct Cyc_Absyn_Funname_b_Absyn_Binding_struct{int tag;struct Cyc_Absyn_Fndecl*f1;};struct Cyc_Absyn_Vardecl{enum Cyc_Absyn_Scope sc;struct _tuple0*name;unsigned varloc;struct Cyc_Absyn_Tqual tq;void*type;struct Cyc_Absyn_Exp*initializer;void*rgn;struct Cyc_List_List*attributes;long escapes;long is_proto;struct Cyc_Absyn_Exp*rename;};struct Cyc_Absyn_Fndecl{enum Cyc_Absyn_Scope sc;long is_inline;struct _tuple0*name;struct Cyc_Absyn_Stmt*body;struct Cyc_Absyn_FnInfo i;void*cached_type;struct Cyc_Core_Opt*param_vardecls;struct Cyc_Absyn_Vardecl*fn_vardecl;enum Cyc_Absyn_Scope orig_scope;long escapes;};struct Cyc_Absyn_AggrdeclImpl{struct Cyc_List_List*exist_vars;struct Cyc_List_List*qual_bnd;struct Cyc_List_List*fields;long tagged;struct Cyc_List_List*effconstr;};struct Cyc_Absyn_Aggrdecl{enum Cyc_Absyn_AggrKind kind;enum Cyc_Absyn_Scope sc;struct _tuple0*name;struct Cyc_List_List*tvs;struct Cyc_Absyn_AggrdeclImpl*impl;struct Cyc_List_List*attributes;long expected_mem_kind;};struct Cyc_Absyn_Datatypefield{struct _tuple0*name;struct Cyc_List_List*typs;unsigned loc;enum Cyc_Absyn_Scope sc;};struct Cyc_Absyn_Datatypedecl{enum Cyc_Absyn_Scope sc;struct _tuple0*name;struct Cyc_List_List*tvs;struct Cyc_Core_Opt*fields;long is_extensible;};struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Fndecl*f1;};struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Pat*f1;struct Cyc_Core_Opt*f2;struct Cyc_Absyn_Exp*f3;void*f4;};struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Tvar*f1;struct Cyc_Absyn_Vardecl*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct{int tag;struct _fat_ptr*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct{int tag;struct _tuple0*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct{int tag;struct Cyc_List_List*f1;};struct Cyc_Absyn_Decl{void*r;unsigned loc;};extern char Cyc_Absyn_EmptyAnnot[11U];struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct{char*tag;};
# 1045
int Cyc_Absyn_qvar_cmp(struct _tuple0*,struct _tuple0*);
int Cyc_Absyn_hash_qvar(struct _tuple0*);
# 1066
void*Cyc_Absyn_compress(void*);
# 1129
void*Cyc_Absyn_bounds_one (void);
# 1188
struct Cyc_Absyn_Exp*Cyc_Absyn_uint_exp(unsigned,unsigned);
# 1355
void Cyc_Absyn_visit_stmt(long(*)(void*,struct Cyc_Absyn_Exp*),long(*)(void*,struct Cyc_Absyn_Stmt*),void*,struct Cyc_Absyn_Stmt*);
void Cyc_Absyn_visit_exp(long(*)(void*,struct Cyc_Absyn_Exp*),long(*)(void*,struct Cyc_Absyn_Stmt*),void*,struct Cyc_Absyn_Exp*);struct Cyc_Hashtable_Table;
# 42 "./cyclone/library/std/hashtable.h"
extern struct Cyc_Hashtable_Table*Cyc_Hashtable_create(int,int(*)(void*,void*),int(*)(void*));
# 53
extern void Cyc_Hashtable_insert(struct Cyc_Hashtable_Table*,void*,void*);
# 59
extern void**Cyc_Hashtable_lookup_opt(struct Cyc_Hashtable_Table*,void*);struct Cyc_JumpAnalysis_Jump_Anal_Result{struct Cyc_Hashtable_Table*pop_tables;struct Cyc_Hashtable_Table*succ_tables;struct Cyc_Hashtable_Table*pat_pop_tables;};extern char Cyc_InsertChecks_FatBound[9U];struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct{char*tag;};extern char Cyc_InsertChecks_NoCheck[8U];struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct{char*tag;};extern char Cyc_InsertChecks_NullAndFatBound[16U];struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct{char*tag;};extern char Cyc_InsertChecks_NullAndThinBound[17U];struct Cyc_InsertChecks_NullAndThinBound_Absyn_AbsynAnnot_struct{char*tag;struct Cyc_Absyn_Exp*f1;};extern char Cyc_InsertChecks_NullOnly[9U];struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct{char*tag;};extern char Cyc_InsertChecks_ThinBound[10U];struct Cyc_InsertChecks_ThinBound_Absyn_AbsynAnnot_struct{char*tag;struct Cyc_Absyn_Exp*f1;};
# 35 "cyclone/library/compiler/insert_checks.h"
extern struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct Cyc_InsertChecks_NoCheck_val;
extern struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct Cyc_InsertChecks_NullOnly_val;
extern struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct Cyc_InsertChecks_NullAndFatBound_val;
extern struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct Cyc_InsertChecks_FatBound_val;struct Cyc___cycFILE;
# 53 "./cyclone/library/std/cycboot.h"
extern struct Cyc___cycFILE*Cyc_stderr;struct Cyc_String_pa_PrintArg_struct{int tag;struct _fat_ptr f1;};struct Cyc_Int_pa_PrintArg_struct{int tag;unsigned long f1;};struct Cyc_Double_pa_PrintArg_struct{int tag;double f1;};
# 75
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
# 100
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 69 "cyclone/library/compiler/absynpp.h"
struct _fat_ptr Cyc_Absynpp_exp2string(struct Cyc_Absyn_Exp*);struct Cyc_Dict_T;struct Cyc_Dict_Dict{int(*rel)(void*,void*);struct _RegionHandle*r;const struct Cyc_Dict_T*t;};struct Cyc_Set_Set;
# 85 "./cyclone/library/std/graph.h"
extern struct Cyc_List_List*Cyc_Graph_tsort(struct Cyc_Dict_Dict);
# 33 "cyclone/library/compiler/callgraph.h"
struct Cyc_Dict_Dict Cyc_Callgraph_compute_callgraph(struct Cyc_List_List*);extern char Cyc_CfFlowInfo_IsZero[7U];struct Cyc_CfFlowInfo_IsZero_Absyn_AbsynAnnot_struct{char*tag;};extern char Cyc_CfFlowInfo_NotZero[8U];struct Cyc_CfFlowInfo_NotZero_Absyn_AbsynAnnot_struct{char*tag;};extern char Cyc_CfFlowInfo_UnknownZ[9U];struct Cyc_CfFlowInfo_UnknownZ_Absyn_AbsynAnnot_struct{char*tag;};struct _tuple11{unsigned f0;long f1;};
# 29 "cyclone/library/compiler/evexp.h"
extern struct _tuple11 Cyc_Evexp_eval_const_uint_exp(struct Cyc_Absyn_Exp*);
# 33
extern long Cyc_Evexp_c_can_eval(struct Cyc_Absyn_Exp*);
# 43
extern long Cyc_Evexp_lte_const_exp(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*);
# 28 "cyclone/library/compiler/flags.h"
extern long Cyc_Flags_verbose;
# 70
extern long Cyc_Flags_warn_bounds_checks;
# 74
extern long Cyc_Flags_warn_all_null_deref;
# 242 "cyclone/library/compiler/assndef.h"
extern struct _fat_ptr Cyc_AssnDef_assn2string(void*);struct Cyc_AssnDef_AssnFn{struct Cyc_List_List*actuals;void*assn;};struct Cyc_AssnDef_ExistAssnFn{struct Cyc_AssnDef_AssnFn*af;struct Cyc_Set_Set*existvars;};struct Cyc_AssnDef_AssnMap{void*assn;struct Cyc_Dict_Dict map;};
# 299
extern struct _fat_ptr Cyc_AssnDef_assnmap2string(struct Cyc_AssnDef_AssnMap);
# 324
extern long Cyc_AssnDef_simple_prove(void*,void*);
# 382
void Cyc_AssnDef_reset_hash_cons_table (void);
# 7 "cyclone/library/compiler/pratt_prover.h"
long Cyc_PrattProver_constraint_prove(void*,void*);
# 47 "cyclone/library/compiler/tcutil.h"
long Cyc_Tcutil_is_zeroterm_pointer_type(void*);
# 70
struct Cyc_Absyn_Exp*Cyc_Tcutil_get_bounds_exp_constrain(void*,void*,long);
# 73
struct Cyc_Absyn_Exp*Cyc_Tcutil_get_type_bound(void*);
# 219
long Cyc_Tcutil_is_const_exp(struct Cyc_Absyn_Exp*);
# 246
long Cyc_Tcutil_force_type2bool(long,void*);struct Cyc_Vcgen_ExpChecks{struct Cyc_AssnDef_AssnMap ctxt;void*bounds_check;void*null_check;};
# 36 "cyclone/library/compiler/vcgen.h"
extern void Cyc_Vcgen_vcgen_fundecl(unsigned,struct Cyc_JumpAnalysis_Jump_Anal_Result*,struct Cyc_Absyn_Fndecl*,struct Cyc_Hashtable_Table**,struct Cyc_Hashtable_Table*,long);
# 39
struct Cyc_Vcgen_ExpChecks*Cyc_Vcgen_exp2ctxt_checks(struct Cyc_Hashtable_Table**,struct Cyc_Absyn_Exp*);struct Cyc___cycFILE;
# 98 "bazel-out/k8-fastbuild/bin/cyclone/library/std/libc/stdio.h"
extern struct Cyc___cycFILE*Cyc_stderr;
# 127
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
# 161
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 41 "cyclone/library/compiler/warn.h"
void Cyc_Warn_warn(unsigned,struct _fat_ptr,struct _fat_ptr);
# 46
void Cyc_Warn_err(unsigned,struct _fat_ptr,struct _fat_ptr);
# 51
void*Cyc_Warn_impos(struct _fat_ptr,struct _fat_ptr);
# 56
void*Cyc_Warn_impos_loc(unsigned,struct _fat_ptr,struct _fat_ptr);char Cyc_InsertChecks_FatBound[9U]="FatBound";char Cyc_InsertChecks_NoCheck[8U]="NoCheck";char Cyc_InsertChecks_NullAndFatBound[16U]="NullAndFatBound";char Cyc_InsertChecks_NullAndThinBound[17U]="NullAndThinBound";char Cyc_InsertChecks_NullOnly[9U]="NullOnly";char Cyc_InsertChecks_ThinBound[10U]="ThinBound";
# 66 "cyclone/library/compiler/insert_checks.cyc"
struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct Cyc_InsertChecks_NoCheck_val={Cyc_InsertChecks_NoCheck};
struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct Cyc_InsertChecks_NullOnly_val={Cyc_InsertChecks_NullOnly};
struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct Cyc_InsertChecks_NullAndFatBound_val={Cyc_InsertChecks_NullAndFatBound};
struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct Cyc_InsertChecks_FatBound_val={Cyc_InsertChecks_FatBound};
# 73
static unsigned Cyc_InsertChecks_total_bounds_checks=0U;
static unsigned Cyc_InsertChecks_types_eliminated_bounds_checks=0U;
static unsigned Cyc_InsertChecks_simple_eliminated_bounds_checks=0U;
static unsigned Cyc_InsertChecks_constraints_eliminated_bounds_checks=0U;
# 78
static unsigned Cyc_InsertChecks_total_null_checks=0U;
static unsigned Cyc_InsertChecks_types_eliminated_null_checks=0U;
static unsigned Cyc_InsertChecks_flow_eliminated_null_checks=0U;
static unsigned Cyc_InsertChecks_simple_eliminated_null_checks=0U;
static unsigned Cyc_InsertChecks_constraints_eliminated_null_checks=0U;
# 84
static void Cyc_InsertChecks_reset_counters (void){
Cyc_InsertChecks_total_bounds_checks= 0U;
Cyc_InsertChecks_types_eliminated_bounds_checks= 0U;
Cyc_InsertChecks_simple_eliminated_bounds_checks= 0U;
Cyc_InsertChecks_constraints_eliminated_bounds_checks= 0U;
# 90
Cyc_InsertChecks_total_null_checks= 0U;
Cyc_InsertChecks_types_eliminated_null_checks= 0U;
Cyc_InsertChecks_flow_eliminated_null_checks= 0U;
Cyc_InsertChecks_simple_eliminated_null_checks= 0U;
Cyc_InsertChecks_constraints_eliminated_null_checks= 0U;}
# 97
static struct Cyc_Absyn_Exp*Cyc_InsertChecks_shared_zero_exp (void){struct Cyc_Absyn_Exp*_T0;unsigned _T1;struct Cyc_Absyn_Exp*_T2;
static struct Cyc_Absyn_Exp*ans=0;_T0= ans;_T1= (unsigned)_T0;
# 100
if(_T1)goto _TL0;else{goto _TL2;}
_TL2: ans= Cyc_Absyn_uint_exp(0U,0U);goto _TL1;_TL0: _TL1: _T2= ans;
return _T2;}struct Cyc_InsertChecks_Env{struct Cyc_JumpAnalysis_Jump_Anal_Result*tables;struct Cyc_Hashtable_Table**assn_info;struct Cyc_Hashtable_Table*fn_precond_info;unsigned pass_counter;long use_precond: 1;long in_sizeof: 1;long at_toplevel: 1;long vcgen_r: 1;};
# 118
static int Cyc_InsertChecks_hash_ptr(void*s){void*_T0;int _T1;_T0= s;_T1= (int)_T0;return _T1;}
# 120
static struct Cyc_InsertChecks_Env Cyc_InsertChecks_toplevel_env(struct Cyc_JumpAnalysis_Jump_Anal_Result*tables,long do_vcgen){struct Cyc_Hashtable_Table*(*_T0)(int,int(*)(struct _tuple0*,struct _tuple0*),int(*)(struct _tuple0*));struct Cyc_Hashtable_Table*(*_T1)(int,int(*)(void*,void*),int(*)(void*));int(*_T2)(struct _tuple0*,struct _tuple0*);int(*_T3)(struct _tuple0*);struct Cyc_InsertChecks_Env _T4;_T1= Cyc_Hashtable_create;{
struct Cyc_Hashtable_Table*(*_T5)(int,int(*)(struct _tuple0*,struct _tuple0*),int(*)(struct _tuple0*))=(struct Cyc_Hashtable_Table*(*)(int,int(*)(struct _tuple0*,struct _tuple0*),int(*)(struct _tuple0*)))_T1;_T0= _T5;}_T2= Cyc_Absyn_qvar_cmp;_T3= Cyc_Absyn_hash_qvar;{struct Cyc_Hashtable_Table*fn_precond_info=_T0(313,_T2,_T3);{struct Cyc_InsertChecks_Env _T5;
# 123
_T5.tables= tables;_T5.assn_info= 0;_T5.fn_precond_info= fn_precond_info;
_T5.pass_counter= 1U;
_T5.use_precond= 0;
_T5.in_sizeof= 0;
_T5.at_toplevel= 1;
_T5.vcgen_r= do_vcgen;_T4= _T5;}
# 123
return _T4;}}
# 131
static struct Cyc_InsertChecks_Env Cyc_InsertChecks_fn_body_env(struct Cyc_InsertChecks_Env nv){struct Cyc_InsertChecks_Env _T0;struct Cyc_InsertChecks_Env _T1;struct Cyc_InsertChecks_Env _T2;struct Cyc_InsertChecks_Env _T3;struct Cyc_InsertChecks_Env _T4;struct Cyc_InsertChecks_Env _T5;struct Cyc_InsertChecks_Env _T6;{struct Cyc_InsertChecks_Env _T7;_T1= nv;
_T7.tables= _T1.tables;_T2= nv;_T7.assn_info= _T2.assn_info;_T3= nv;_T7.fn_precond_info= _T3.fn_precond_info;_T4= nv;_T7.pass_counter= _T4.pass_counter;_T5= nv;_T7.use_precond= _T5.use_precond;_T7.in_sizeof= 0;
_T7.at_toplevel= 0;_T6= nv;_T7.vcgen_r= _T6.vcgen_r;_T0= _T7;}
# 132
return _T0;}
# 136
static struct Cyc_InsertChecks_Env Cyc_InsertChecks_enter_sizeof(struct Cyc_InsertChecks_Env nv){struct Cyc_InsertChecks_Env _T0;struct Cyc_InsertChecks_Env _T1;struct Cyc_InsertChecks_Env _T2;struct Cyc_InsertChecks_Env _T3;struct Cyc_InsertChecks_Env _T4;struct Cyc_InsertChecks_Env _T5;struct Cyc_InsertChecks_Env _T6;struct Cyc_InsertChecks_Env _T7;{struct Cyc_InsertChecks_Env _T8;_T1= nv;
_T8.tables= _T1.tables;_T2= nv;_T8.assn_info= _T2.assn_info;_T3= nv;_T8.fn_precond_info= _T3.fn_precond_info;_T4= nv;_T8.pass_counter= _T4.pass_counter;_T5= nv;_T8.use_precond= _T5.use_precond;_T8.in_sizeof= 1;_T6= nv;
_T8.at_toplevel= _T6.at_toplevel;_T7= nv;_T8.vcgen_r= _T7.vcgen_r;_T0= _T8;}
# 137
return _T0;}struct _tuple14{long f0;long f1;};
# 142
static struct _tuple14 Cyc_InsertChecks_need_bound_null_check_annot(struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T1;char*_T2;char*_T3;struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct*_T4;char*_T5;char*_T6;struct Cyc_InsertChecks_ThinBound_Absyn_AbsynAnnot_struct*_T7;char*_T8;char*_T9;struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct*_TA;char*_TB;char*_TC;struct _tuple14 _TD;
long bds_ck;long null_ck;_T0= e;{
# 145
void*_TE=_T0->annot;_T1= (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*)_TE;_T2= _T1->tag;_T3= Cyc_InsertChecks_NoCheck;if(_T2!=_T3)goto _TL3;
# 147
bds_ck= 0;
null_ck= 0;goto _LL0;_TL3: _T4= (struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct*)_TE;_T5= _T4->tag;_T6= Cyc_InsertChecks_FatBound;if(_T5!=_T6)goto _TL5;
# 151
bds_ck= 1;
null_ck= 0;goto _LL0;_TL5: _T7= (struct Cyc_InsertChecks_ThinBound_Absyn_AbsynAnnot_struct*)_TE;_T8= _T7->tag;_T9= Cyc_InsertChecks_ThinBound;if(_T8!=_T9)goto _TL7;
# 155
bds_ck= 1;
null_ck= 0;goto _LL0;_TL7: _TA= (struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct*)_TE;_TB= _TA->tag;_TC= Cyc_InsertChecks_NullOnly;if(_TB!=_TC)goto _TL9;
# 159
bds_ck= 0;
null_ck= 1;goto _LL0;_TL9:
# 163
 bds_ck= 1;
null_ck= 1;_LL0:;}{struct _tuple14 _TE;
# 166
_TE.f0= bds_ck;_TE.f1= null_ck;_TD= _TE;}return _TD;}
# 171
static long Cyc_InsertChecks_need_null_check(struct Cyc_InsertChecks_Env nv,struct Cyc_Absyn_Exp*e,struct Cyc_Absyn_Exp*e0){struct Cyc_InsertChecks_Env _T0;unsigned _T1;long _T2;struct Cyc_InsertChecks_Env _T3;long _T4;struct Cyc_Absyn_Exp*_T5;void*_T6;void*_T7;int*_T8;int _T9;struct Cyc_Absyn_PtrInfo _TA;struct Cyc_Absyn_PtrAtts _TB;long _TC;int(*_TD)(unsigned,struct _fat_ptr,struct _fat_ptr);void*(*_TE)(unsigned,struct _fat_ptr,struct _fat_ptr);struct Cyc_Absyn_Exp*_TF;unsigned _T10;struct _fat_ptr _T11;struct _fat_ptr _T12;struct Cyc_Absyn_Exp*_T13;struct Cyc_CfFlowInfo_UnknownZ_Absyn_AbsynAnnot_struct*_T14;char*_T15;char*_T16;struct Cyc_CfFlowInfo_NotZero_Absyn_AbsynAnnot_struct*_T17;char*_T18;char*_T19;struct Cyc_CfFlowInfo_IsZero_Absyn_AbsynAnnot_struct*_T1A;char*_T1B;char*_T1C;struct Cyc_Absyn_Exp*_T1D;unsigned _T1E;struct _fat_ptr _T1F;struct _fat_ptr _T20;struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*_T21;char*_T22;char*_T23;int(*_T24)(unsigned,struct _fat_ptr,struct _fat_ptr);void*(*_T25)(unsigned,struct _fat_ptr,struct _fat_ptr);struct Cyc_Absyn_Exp*_T26;unsigned _T27;struct _fat_ptr _T28;struct _fat_ptr _T29;struct Cyc_InsertChecks_Env _T2A;long _T2B;struct Cyc_Absyn_Exp*_T2C;unsigned _T2D;struct _fat_ptr _T2E;struct _fat_ptr _T2F;_T0= nv;_T1= _T0.pass_counter;
# 175
if(_T1 <= 1U)goto _TLB;{
struct _tuple14 _T30=Cyc_InsertChecks_need_bound_null_check_annot(e0);long _T31;_T31= _T30.f1;{long null_ck=_T31;_T2= null_ck;
return _T2;}}_TLB: _T3= nv;_T4= _T3.in_sizeof;
# 179
if(!_T4)goto _TLD;
return 0;_TLD:
# 182
 Cyc_InsertChecks_total_null_checks= Cyc_InsertChecks_total_null_checks + 1;_T5= e;_T6= _T5->topt;_T7= 
_check_null(_T6);{void*_T30=Cyc_Absyn_compress(_T7);void*_T31;_T8= (int*)_T30;_T9= *_T8;if(_T9!=4)goto _TLF;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T32=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T30;_TA= _T32->f1;_TB= _TA.ptr_atts;_T31= _TB.nullable;}{void*n=_T31;_TC= 
# 185
Cyc_Tcutil_force_type2bool(0,n);if(_TC)goto _TL11;else{goto _TL13;}
_TL13: Cyc_InsertChecks_types_eliminated_null_checks= Cyc_InsertChecks_types_eliminated_null_checks + 1;
return 0;_TL11: goto _LL3;}_TLF: _TE= Cyc_Warn_impos_loc;{
# 191
int(*_T32)(unsigned,struct _fat_ptr,struct _fat_ptr)=(int(*)(unsigned,struct _fat_ptr,struct _fat_ptr))_TE;_TD= _T32;}_TF= e;_T10= _TF->loc;_T11= _tag_fat("need_null_check: non-pointer type",sizeof(char),34U);_T12= _tag_fat(0U,sizeof(void*),0);_TD(_T10,_T11,_T12);_LL3:;}_T13= e;{
# 193
void*_T30=_T13->annot;_T14= (struct Cyc_CfFlowInfo_UnknownZ_Absyn_AbsynAnnot_struct*)_T30;_T15= _T14->tag;_T16= Cyc_CfFlowInfo_UnknownZ;if(_T15!=_T16)goto _TL14;goto _LL8;_TL14: _T17= (struct Cyc_CfFlowInfo_NotZero_Absyn_AbsynAnnot_struct*)_T30;_T18= _T17->tag;_T19= Cyc_CfFlowInfo_NotZero;if(_T18!=_T19)goto _TL16;
# 197
Cyc_InsertChecks_flow_eliminated_null_checks= Cyc_InsertChecks_flow_eliminated_null_checks + 1;
return 0;_TL16: _T1A= (struct Cyc_CfFlowInfo_IsZero_Absyn_AbsynAnnot_struct*)_T30;_T1B= _T1A->tag;_T1C= Cyc_CfFlowInfo_IsZero;if(_T1B!=_T1C)goto _TL18;_T1D= e;_T1E= _T1D->loc;_T1F= 
# 200
_tag_fat("NULL pointer check will definitely fail",sizeof(char),40U);_T20= _tag_fat(0U,sizeof(void*),0);Cyc_Warn_err(_T1E,_T1F,_T20);
return 0;_TL18: _T21= (struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)_T30;_T22= _T21->tag;_T23= Cyc_Absyn_EmptyAnnot;if(_T22!=_T23)goto _TL1A;
# 204
Cyc_InsertChecks_flow_eliminated_null_checks= Cyc_InsertChecks_flow_eliminated_null_checks + 1;
return 0;_TL1A: _T25= Cyc_Warn_impos_loc;{
# 207
int(*_T31)(unsigned,struct _fat_ptr,struct _fat_ptr)=(int(*)(unsigned,struct _fat_ptr,struct _fat_ptr))_T25;_T24= _T31;}_T26= e;_T27= _T26->loc;_T28= _tag_fat("need_null_check: unexpected annotation",sizeof(char),39U);_T29= _tag_fat(0U,sizeof(void*),0);_T24(_T27,_T28,_T29);_LL8:;}_T2A= nv;_T2B= _T2A.at_toplevel;
# 209
if(!_T2B)goto _TL1C;_T2C= e;_T2D= _T2C->loc;_T2E= 
_tag_fat("cannot perform NULL-pointer check at toplevel",sizeof(char),46U);_T2F= _tag_fat(0U,sizeof(void*),0);Cyc_Warn_err(_T2D,_T2E,_T2F);
return 0;_TL1C:
# 217
 return 1;}
# 221
static long Cyc_InsertChecks_simple_need_bounds_check(struct Cyc_InsertChecks_Env nv,struct Cyc_Absyn_Exp*a,struct Cyc_Absyn_Exp*i){struct Cyc_InsertChecks_Env _T0;long _T1;struct Cyc_InsertChecks_Env _T2;long _T3;int(*_T4)(unsigned,struct _fat_ptr,struct _fat_ptr);void*(*_T5)(unsigned,struct _fat_ptr,struct _fat_ptr);struct Cyc_Absyn_Exp*_T6;unsigned _T7;struct _fat_ptr _T8;struct _fat_ptr _T9;struct Cyc_Absyn_Exp*_TA;void*_TB;void*_TC;long _TD;long _TE;long _TF;long _T10;_T0= nv;_T1= _T0.in_sizeof;
if(!_T1)goto _TL1E;
return 0;_TL1E:
 Cyc_InsertChecks_total_bounds_checks= Cyc_InsertChecks_total_bounds_checks + 1;_T2= nv;_T3= _T2.at_toplevel;
if(!_T3)goto _TL20;_T5= Cyc_Warn_impos_loc;{
int(*_T11)(unsigned,struct _fat_ptr,struct _fat_ptr)=(int(*)(unsigned,struct _fat_ptr,struct _fat_ptr))_T5;_T4= _T11;}_T6= a;_T7= _T6->loc;_T8= _tag_fat("InsertChecks: memory read at top-level",sizeof(char),39U);_T9= _tag_fat(0U,sizeof(void*),0);_T4(_T7,_T8,_T9);goto _TL21;_TL20: _TL21: _TA= a;_TB= _TA->topt;_TC= 
# 232
_check_null(_TB);{struct Cyc_Absyn_Exp*bound_opt=Cyc_Tcutil_get_type_bound(_TC);
# 234
if(bound_opt!=0)goto _TL22;
return 1;_TL22: {
struct Cyc_Absyn_Exp*bound=bound_opt;_TD= 
# 238
Cyc_Tcutil_is_const_exp(bound);if(_TD)goto _TL27;else{goto _TL26;}_TL27: _TE= Cyc_Tcutil_is_const_exp(i);if(_TE)goto _TL24;else{goto _TL26;}
_TL26: return 1;_TL24: {
struct _tuple11 _T11=Cyc_Evexp_eval_const_uint_exp(bound);long _T12;unsigned _T13;_T13= _T11.f0;_T12= _T11.f1;{unsigned b=_T13;long b_known=_T12;
struct _tuple11 _T14=Cyc_Evexp_eval_const_uint_exp(i);long _T15;unsigned _T16;_T16= _T14.f0;_T15= _T14.f1;{unsigned i=_T16;long i_known=_T15;_TF= b_known;
# 243
if(_TF)goto _TL2C;else{goto _TL2A;}_TL2C: _T10= i_known;if(_T10)goto _TL2B;else{goto _TL2A;}_TL2B: if(i >= b)goto _TL2A;else{goto _TL28;}
_TL2A: return 1;_TL28:
# 246
 Cyc_InsertChecks_types_eliminated_bounds_checks= Cyc_InsertChecks_types_eliminated_bounds_checks + 1;
return 0;}}}}}}
# 250
static void Cyc_InsertChecks_do_stmt(struct Cyc_InsertChecks_Env,struct Cyc_Absyn_Stmt*);
static void Cyc_InsertChecks_do_exp(struct Cyc_InsertChecks_Env,struct Cyc_Absyn_Exp*);
# 253
static void Cyc_InsertChecks_do_exp_opt(struct Cyc_InsertChecks_Env nv,struct Cyc_Absyn_Exp*eo){
if(eo==0)goto _TL2D;
Cyc_InsertChecks_do_exp(nv,eo);goto _TL2E;_TL2D: _TL2E:;}
# 258
static long Cyc_InsertChecks_need_null_check_vcgen(struct Cyc_InsertChecks_Env nv,struct Cyc_Absyn_Exp*a){struct Cyc_InsertChecks_Env _T0;struct Cyc_Hashtable_Table**_T1;struct Cyc_Absyn_Exp*_T2;struct Cyc_Vcgen_ExpChecks*_T3;struct Cyc_AssnDef_AssnMap _T4;void*_T5;struct Cyc_Vcgen_ExpChecks*_T6;void*_T7;long _T8;struct Cyc_Vcgen_ExpChecks*_T9;struct Cyc_AssnDef_AssnMap _TA;void*_TB;struct Cyc_Vcgen_ExpChecks*_TC;void*_TD;long _TE;int _TF;_T0= nv;_T1= _T0.assn_info;_T2= a;{
struct Cyc_Vcgen_ExpChecks*ec=Cyc_Vcgen_exp2ctxt_checks(_T1,_T2);_T3= ec;_T4= _T3->ctxt;_T5= _T4.assn;_T6= ec;_T7= _T6->null_check;{
long res=Cyc_AssnDef_simple_prove(_T5,_T7);_T8= res;
# 262
if(!_T8)goto _TL2F;
Cyc_InsertChecks_simple_eliminated_null_checks= Cyc_InsertChecks_simple_eliminated_null_checks + 1;goto _TL30;
# 265
_TL2F: _T9= ec;_TA= _T9->ctxt;_TB= _TA.assn;_TC= ec;_TD= _TC->null_check;res= Cyc_PrattProver_constraint_prove(_TB,_TD);_TE= res;
if(!_TE)goto _TL31;
Cyc_InsertChecks_constraints_eliminated_null_checks= Cyc_InsertChecks_constraints_eliminated_null_checks + 1;goto _TL32;_TL31: _TL32: _TL30: _TF= !res;
# 269
return _TF;}}}
# 272
static long Cyc_InsertChecks_need_bounds_check_vcgen(struct Cyc_InsertChecks_Env nv,struct Cyc_Absyn_Exp*a){struct Cyc_InsertChecks_Env _T0;struct Cyc_Hashtable_Table**_T1;struct Cyc_Absyn_Exp*_T2;struct Cyc_Vcgen_ExpChecks*_T3;struct Cyc_AssnDef_AssnMap _T4;void*_T5;struct Cyc_Vcgen_ExpChecks*_T6;void*_T7;long _T8;struct Cyc_Vcgen_ExpChecks*_T9;struct Cyc_AssnDef_AssnMap _TA;void*_TB;struct Cyc_Vcgen_ExpChecks*_TC;void*_TD;long _TE;int _TF;_T0= nv;_T1= _T0.assn_info;_T2= a;{
struct Cyc_Vcgen_ExpChecks*ec=Cyc_Vcgen_exp2ctxt_checks(_T1,_T2);_T3= ec;_T4= _T3->ctxt;_T5= _T4.assn;_T6= ec;_T7= _T6->bounds_check;{
long res=Cyc_AssnDef_simple_prove(_T5,_T7);_T8= res;
# 276
if(!_T8)goto _TL33;
Cyc_InsertChecks_simple_eliminated_bounds_checks= Cyc_InsertChecks_simple_eliminated_bounds_checks + 1;goto _TL34;
# 279
_TL33: _T9= ec;_TA= _T9->ctxt;_TB= _TA.assn;_TC= ec;_TD= _TC->bounds_check;res= Cyc_PrattProver_constraint_prove(_TB,_TD);_TE= res;
if(!_TE)goto _TL35;
Cyc_InsertChecks_constraints_eliminated_bounds_checks= Cyc_InsertChecks_constraints_eliminated_bounds_checks + 1;goto _TL36;_TL35: _TL36: _TL34: _TF= !res;
# 283
return _TF;}}}struct _tuple15{void*f0;void*f1;};struct _tuple16{struct Cyc_Absyn_Exp*f0;struct Cyc_Absyn_Exp*f1;};struct _tuple17{struct Cyc_List_List*f0;struct Cyc_Absyn_Exp*f1;};
# 286
static void Cyc_InsertChecks_do_exp(struct Cyc_InsertChecks_Env nv,struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;int*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T4;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T5;struct Cyc_Absyn_Exp*_T6;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T7;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T8;struct Cyc_InsertChecks_Env _T9;struct Cyc_List_List*_TA;void*_TB;struct Cyc_Absyn_Exp*_TC;struct Cyc_List_List*_TD;struct Cyc_Absyn_Exp*_TE;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_TF;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T10;struct Cyc_Absyn_Exp*_T11;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T12;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T13;struct Cyc_Absyn_Exp*_T14;void*_T15;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T16;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T17;void*_T18;struct Cyc_Absyn_Exp*_T19;void*_T1A;void*_T1B;struct Cyc_Absyn_Exp*_T1C;struct Cyc_Absyn_Exp*_T1D;void*_T1E;void*_T1F;long _T20;long _T21;long _T22;long _T23;struct Cyc_Absyn_Exp*_T24;unsigned _T25;struct _fat_ptr _T26;struct _fat_ptr _T27;struct Cyc_Absyn_Exp*_T28;struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct*_T29;struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct*_T2A;struct Cyc_Absyn_Exp*_T2B;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T2C;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T2D;long _T2E;long _T2F;struct Cyc_Absyn_Exp*_T30;struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct*_T31;struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct*_T32;struct Cyc_Absyn_Exp*_T33;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T34;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T35;struct Cyc_InsertChecks_Env _T36;struct Cyc_List_List*_T37;void*_T38;struct Cyc_Absyn_Exp*_T39;struct Cyc_List_List*_T3A;void*_T3B;struct _tuple15 _T3C;struct Cyc_Absyn_Exp*_T3D;void*_T3E;void*_T3F;void*_T40;int*_T41;int _T42;void*_T43;int*_T44;int _T45;void*_T46;void*_T47;struct Cyc_Absyn_PtrInfo _T48;struct Cyc_Absyn_PtrAtts _T49;void*_T4A;struct Cyc_Absyn_PtrInfo _T4B;struct Cyc_Absyn_PtrAtts _T4C;void*_T4D;void*_T4E;struct Cyc_Absyn_PtrInfo _T4F;struct Cyc_Absyn_PtrAtts _T50;void*_T51;void*_T52;struct Cyc_Absyn_PtrInfo _T53;struct Cyc_Absyn_PtrAtts _T54;void*_T55;long _T56;long _T57;enum Cyc_Absyn_Coercion _T58;int _T59;struct Cyc_Absyn_Exp*_T5A;unsigned _T5B;struct Cyc_Absyn_Exp*_T5C;unsigned _T5D;int(*_T5E)(unsigned,struct _fat_ptr,struct _fat_ptr);void*(*_T5F)(unsigned,struct _fat_ptr,struct _fat_ptr);struct Cyc_Absyn_Exp*_T60;unsigned _T61;struct _fat_ptr _T62;struct _fat_ptr _T63;struct Cyc_Absyn_Exp*_T64;unsigned _T65;struct Cyc_Absyn_Exp*_T66;unsigned _T67;enum Cyc_Absyn_Coercion _T68;int _T69;int(*_T6A)(unsigned,struct _fat_ptr,struct _fat_ptr);void*(*_T6B)(unsigned,struct _fat_ptr,struct _fat_ptr);struct Cyc_Absyn_Exp*_T6C;unsigned _T6D;struct _fat_ptr _T6E;struct _fat_ptr _T6F;struct _tuple16 _T70;struct Cyc_Absyn_Exp*_T71;struct Cyc_Absyn_Exp*_T72;long _T73;int(*_T74)(unsigned,struct _fat_ptr,struct _fat_ptr);void*(*_T75)(unsigned,struct _fat_ptr,struct _fat_ptr);struct Cyc_Absyn_Exp*_T76;unsigned _T77;struct _fat_ptr _T78;struct _fat_ptr _T79;long _T7A;long _T7B;long _T7C;long _T7D;long _T7E;struct Cyc_Absyn_Exp*_T7F;unsigned _T80;struct _fat_ptr _T81;struct _fat_ptr _T82;struct Cyc_Absyn_Exp*_T83;struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct*_T84;struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct*_T85;struct Cyc_Absyn_Exp*_T86;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T87;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T88;struct Cyc_Absyn_Exp*_T89;long _T8A;struct Cyc_Absyn_Exp*_T8B;unsigned _T8C;struct _fat_ptr _T8D;struct _fat_ptr _T8E;struct Cyc_Absyn_Exp*_T8F;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T90;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T91;struct Cyc_Absyn_Exp*_T92;struct Cyc_InsertChecks_Env _T93;long _T94;struct Cyc_Absyn_Exp*_T95;unsigned _T96;struct _fat_ptr _T97;struct _fat_ptr _T98;long _T99;long _T9A;struct Cyc_Absyn_Exp*_T9B;long _T9C;struct Cyc_Absyn_Exp*_T9D;unsigned _T9E;struct _fat_ptr _T9F;struct _fat_ptr _TA0;long _TA1;long _TA2;long _TA3;long _TA4;long _TA5;struct Cyc_Absyn_Exp*_TA6;unsigned _TA7;struct _fat_ptr _TA8;struct _fat_ptr _TA9;struct Cyc_Absyn_Exp*_TAA;void*_TAB;long _TAC;struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct*_TAD;struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct*_TAE;struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct*_TAF;struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct*_TB0;struct Cyc_Absyn_Exp*_TB1;void*_TB2;long _TB3;struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct*_TB4;struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct*_TB5;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_TB6;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_TB7;struct Cyc_Absyn_Exp*_TB8;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_TB9;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_TBA;struct Cyc_Absyn_Exp*_TBB;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_TBC;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_TBD;struct Cyc_Absyn_Exp*_TBE;void*_TBF;void*_TC0;int*_TC1;int _TC2;struct Cyc_Absyn_PtrInfo _TC3;struct Cyc_Absyn_PtrInfo _TC4;struct Cyc_Absyn_PtrInfo _TC5;struct Cyc_Absyn_PtrAtts _TC6;struct Cyc_Absyn_PtrInfo _TC7;struct Cyc_Absyn_PtrAtts _TC8;struct Cyc_Absyn_PtrInfo _TC9;struct Cyc_Absyn_PtrAtts _TCA;struct Cyc_Absyn_PtrInfo _TCB;struct Cyc_Absyn_PtrAtts _TCC;long _TCD;long _TCE;struct Cyc_InsertChecks_Env _TCF;long _TD0;long _TD1;long _TD2;struct Cyc_String_pa_PrintArg_struct _TD3;struct Cyc_Absyn_Exp*_TD4;unsigned _TD5;struct _fat_ptr _TD6;struct _fat_ptr _TD7;void*_TD8;void*_TD9;long _TDA;int _TDB;long _TDC;long _TDD;long _TDE;struct Cyc_Absyn_Exp*_TDF;unsigned _TE0;struct _fat_ptr _TE1;struct _fat_ptr _TE2;long _TE3;struct Cyc_Absyn_Exp*_TE4;unsigned _TE5;long _TE6;struct Cyc_InsertChecks_Env _TE7;struct Cyc_Hashtable_Table**_TE8;struct Cyc_Absyn_Exp*_TE9;struct Cyc_Absyn_Exp*_TEA;unsigned _TEB;struct _fat_ptr _TEC;struct Cyc_String_pa_PrintArg_struct _TED;struct Cyc_Vcgen_ExpChecks*_TEE;void*_TEF;struct _fat_ptr _TF0;struct _fat_ptr _TF1;struct _fat_ptr _TF2;struct Cyc_String_pa_PrintArg_struct _TF3;struct Cyc_Vcgen_ExpChecks*_TF4;struct Cyc_AssnDef_AssnMap _TF5;struct Cyc___cycFILE*_TF6;struct _fat_ptr _TF7;struct _fat_ptr _TF8;struct Cyc___cycFILE*_TF9;struct _fat_ptr _TFA;struct _fat_ptr _TFB;struct Cyc_Absyn_Exp*_TFC;void*_TFD;long _TFE;struct Cyc_InsertChecks_NullAndThinBound_Absyn_AbsynAnnot_struct*_TFF;struct Cyc_InsertChecks_ThinBound_Absyn_AbsynAnnot_struct*_T100;struct Cyc_Absyn_Exp*_T101;void*_T102;long _T103;struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct*_T104;struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct*_T105;struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct*_T106;struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct*_T107;long _T108;struct Cyc_Absyn_Exp*_T109;struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct*_T10A;struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct*_T10B;struct Cyc_Absyn_Exp*_T10C;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T10D;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T10E;int(*_T10F)(unsigned,struct _fat_ptr,struct _fat_ptr);void*(*_T110)(unsigned,struct _fat_ptr,struct _fat_ptr);struct Cyc_Absyn_Exp*_T111;unsigned _T112;struct _fat_ptr _T113;struct _fat_ptr _T114;struct Cyc_Absyn_Exp*_T115;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T116;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T117;struct Cyc_InsertChecks_Env _T118;struct Cyc_Absyn_Exp*_T119;struct Cyc_Absyn_Exp*_T11A;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T11B;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T11C;struct Cyc_Absyn_MallocInfo _T11D;struct Cyc_Absyn_MallocInfo _T11E;struct Cyc_Absyn_MallocInfo _T11F;struct Cyc_Absyn_Exp*_T120;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T121;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T122;struct Cyc_Absyn_Exp*_T123;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T124;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T125;struct Cyc_Absyn_Exp*_T126;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T127;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T128;struct Cyc_Absyn_Exp*_T129;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T12A;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T12B;struct Cyc_Absyn_Exp*_T12C;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T12D;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T12E;struct Cyc_Absyn_Exp*_T12F;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T130;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T131;struct Cyc_InsertChecks_Env _T132;struct Cyc_List_List*_T133;void*_T134;struct _tuple17*_T135;struct _tuple17 _T136;struct Cyc_Absyn_Exp*_T137;struct Cyc_List_List*_T138;struct Cyc_Absyn_Exp*_T139;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T13A;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T13B;struct Cyc_Absyn_Exp*_T13C;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T13D;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T13E;int(*_T13F)(unsigned,struct _fat_ptr,struct _fat_ptr);void*(*_T140)(unsigned,struct _fat_ptr,struct _fat_ptr);struct Cyc_Absyn_Exp*_T141;unsigned _T142;struct _fat_ptr _T143;struct _fat_ptr _T144;_T0= e;{
void*_T145=_T0->r;struct Cyc_Absyn_Stmt*_T146;struct Cyc_Absyn_Exp*_T147;enum Cyc_Absyn_Coercion _T148;long _T149;struct Cyc_List_List*_T14A;enum Cyc_Absyn_Incrementor _T14B;struct Cyc_Absyn_Exp*_T14C;struct Cyc_Absyn_Exp*_T14D;void*_T14E;_T1= (int*)_T145;_T2= *_T1;switch(_T2){case 39: goto _LL4;case 0: _LL4: goto _LL6;case 1: _LL6: goto _LL8;case 2: _LL8: _T3= e;_T4= & Cyc_InsertChecks_NoCheck_val;_T5= (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*)_T4;
# 292
_T3->annot= (void*)_T5;goto _LL0;case 30:{struct Cyc_Absyn_Datatype_e_Absyn_Raw_exp_struct*_T14F=(struct Cyc_Absyn_Datatype_e_Absyn_Raw_exp_struct*)_T145;_T14E= _T14F->f1;}{struct Cyc_List_List*es=_T14E;_T14E= es;goto _LLC;}case 3:{struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*_T14F=(struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*)_T145;_T14E= _T14F->f2;}_LLC: {struct Cyc_List_List*es=_T14E;_T6= e;_T7= & Cyc_InsertChecks_NoCheck_val;_T8= (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*)_T7;
# 298
_T6->annot= (void*)_T8;
_TL3B: if(es!=0)goto _TL39;else{goto _TL3A;}
_TL39: _T9= nv;_TA= es;_TB= _TA->hd;_TC= (struct Cyc_Absyn_Exp*)_TB;Cyc_InsertChecks_do_exp(_T9,_TC);_TD= es;
# 299
es= _TD->tl;goto _TL3B;_TL3A: goto _LL0;}case 4:{struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct*_T14F=(struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct*)_T145;_T14E= _T14F->f1;_T14D= _T14F->f3;}{struct Cyc_Absyn_Exp*e1=_T14E;struct Cyc_Absyn_Exp*e2=_T14D;_T14E= e1;_T14D= e2;goto _LL10;}case 9:{struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct*_T14F=(struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct*)_T145;_T14E= _T14F->f1;_T14D= _T14F->f2;}_LL10: {struct Cyc_Absyn_Exp*e1=_T14E;struct Cyc_Absyn_Exp*e2=_T14D;_T14E= e1;_T14D= e2;goto _LL12;}case 7:{struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*_T14F=(struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*)_T145;_T14E= _T14F->f1;_T14D= _T14F->f2;}_LL12: {struct Cyc_Absyn_Exp*e1=_T14E;struct Cyc_Absyn_Exp*e2=_T14D;_T14E= e1;_T14D= e2;goto _LL14;}case 8:{struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*_T14F=(struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*)_T145;_T14E= _T14F->f1;_T14D= _T14F->f2;}_LL14: {struct Cyc_Absyn_Exp*e1=_T14E;struct Cyc_Absyn_Exp*e2=_T14D;_TE= e;_TF= & Cyc_InsertChecks_NoCheck_val;_T10= (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*)_TF;
# 312
_TE->annot= (void*)_T10;
Cyc_InsertChecks_do_exp(nv,e1);
Cyc_InsertChecks_do_exp(nv,e2);goto _LL0;}case 6:{struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct*_T14F=(struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct*)_T145;_T14E= _T14F->f1;_T14D= _T14F->f2;_T14C= _T14F->f3;}{struct Cyc_Absyn_Exp*e1=_T14E;struct Cyc_Absyn_Exp*e2=_T14D;struct Cyc_Absyn_Exp*e3=_T14C;_T11= e;_T12= & Cyc_InsertChecks_NoCheck_val;_T13= (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*)_T12;
# 317
_T11->annot= (void*)_T13;
Cyc_InsertChecks_do_exp(nv,e1);
Cyc_InsertChecks_do_exp(nv,e2);
Cyc_InsertChecks_do_exp(nv,e3);goto _LL0;}case 5:{struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*_T14F=(struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*)_T145;_T14E= _T14F->f1;_T14B= _T14F->f2;}{struct Cyc_Absyn_Exp*e2=_T14E;enum Cyc_Absyn_Incrementor incr=_T14B;_T14= e;_T15= _T14->annot;_T16= & Cyc_InsertChecks_NoCheck_val;_T17= (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*)_T16;_T18= (void*)_T17;
# 328
if(_T15==_T18)goto _TL3C;_T19= e2;_T1A= _T19->topt;_T1B= _check_null(_T1A);_T1C= Cyc_Tcutil_get_type_bound(_T1B);if(_T1C==0)goto _TL3C;_T1D= e2;_T1E= _T1D->topt;_T1F= 
_check_null(_T1E);_T20= Cyc_Tcutil_is_zeroterm_pointer_type(_T1F);
# 328
if(!_T20)goto _TL3C;_T21= 
Cyc_InsertChecks_need_null_check(nv,e2,e);
# 328
if(!_T21)goto _TL3C;_T22= 
# 330
Cyc_InsertChecks_need_null_check_vcgen(nv,e2);
# 328
if(!_T22)goto _TL3C;_T23= Cyc_Flags_warn_all_null_deref;
# 331
if(!_T23)goto _TL3E;_T24= e;_T25= _T24->loc;_T26= 
_tag_fat("inserted null check",sizeof(char),20U);_T27= _tag_fat(0U,sizeof(void*),0);Cyc_Warn_warn(_T25,_T26,_T27);goto _TL3F;_TL3E: _TL3F: _T28= e;_T29= & Cyc_InsertChecks_NullOnly_val;_T2A= (struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct*)_T29;
_T28->annot= (void*)_T2A;goto _TL3D;
# 335
_TL3C: _T2B= e;_T2C= & Cyc_InsertChecks_NoCheck_val;_T2D= (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*)_T2C;_T2B->annot= (void*)_T2D;_TL3D:
 Cyc_InsertChecks_do_exp(nv,e2);goto _LL0;}case 10:{struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*_T14F=(struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*)_T145;_T14E= _T14F->f1;_T14A= _T14F->f2;}{struct Cyc_Absyn_Exp*e1=_T14E;struct Cyc_List_List*es=_T14A;_T2E= 
# 341
Cyc_InsertChecks_need_null_check(nv,e1,e);if(!_T2E)goto _TL40;_T2F= Cyc_InsertChecks_need_null_check_vcgen(nv,e1);if(!_T2F)goto _TL40;_T30= e;_T31= & Cyc_InsertChecks_NullOnly_val;_T32= (struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct*)_T31;
_T30->annot= (void*)_T32;goto _TL41;
# 344
_TL40: _T33= e;_T34= & Cyc_InsertChecks_NoCheck_val;_T35= (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*)_T34;_T33->annot= (void*)_T35;_TL41:
 Cyc_InsertChecks_do_exp(nv,e1);
_TL45: if(es!=0)goto _TL43;else{goto _TL44;}
_TL43: _T36= nv;_T37= es;_T38= _T37->hd;_T39= (struct Cyc_Absyn_Exp*)_T38;Cyc_InsertChecks_do_exp(_T36,_T39);_T3A= es;
# 346
es= _T3A->tl;goto _TL45;_TL44: goto _LL0;}case 14:{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T14F=(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T145;_T3B= _T14F->f1;_T14E= (void*)_T3B;_T14D= _T14F->f2;_T149= _T14F->f3;_T148= _T14F->f4;}{void*t=_T14E;struct Cyc_Absyn_Exp*e1=_T14D;long user_inserted=_T149;enum Cyc_Absyn_Coercion coercion=_T148;{struct _tuple15 _T14F;_T3D= e1;_T3E= _T3D->topt;_T3F= 
# 354
_check_null(_T3E);({__typeof__(Cyc_Absyn_compress(_T3F))_T150=Cyc_Absyn_compress(_T3F);_T14F.f0= _T150;});({__typeof__(Cyc_Absyn_compress(t))_T150=Cyc_Absyn_compress(t);_T14F.f1= _T150;});_T3C= _T14F;}{struct _tuple15 _T14F=_T3C;struct Cyc_Absyn_PtrInfo _T150;struct Cyc_Absyn_PtrInfo _T151;_T40= _T14F.f0;_T41= (int*)_T40;_T42= *_T41;if(_T42!=4)goto _TL46;_T43= _T14F.f1;_T44= (int*)_T43;_T45= *_T44;if(_T45!=4)goto _TL48;_T46= _T14F.f0;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T152=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T46;_T151= _T152->f1;}_T47= _T14F.f1;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T152=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T47;_T150= _T152->f1;}{struct Cyc_Absyn_PtrInfo p1=_T151;struct Cyc_Absyn_PtrInfo p2=_T150;_T48= p1;_T49= _T48.ptr_atts;_T4A= _T49.nullable;{
# 356
long n1=Cyc_Tcutil_force_type2bool(0,_T4A);_T4B= p2;_T4C= _T4B.ptr_atts;_T4D= _T4C.nullable;{
long n2=Cyc_Tcutil_force_type2bool(0,_T4D);_T4E= 
Cyc_Absyn_bounds_one();_T4F= p1;_T50= _T4F.ptr_atts;_T51= _T50.bounds;{struct Cyc_Absyn_Exp*b1=Cyc_Tcutil_get_bounds_exp_constrain(_T4E,_T51,1);_T52= 
Cyc_Absyn_bounds_one();_T53= p2;_T54= _T53.ptr_atts;_T55= _T54.bounds;{struct Cyc_Absyn_Exp*b2=Cyc_Tcutil_get_bounds_exp_constrain(_T52,_T55,1);_T56= n1;
# 362
if(!_T56)goto _TL4A;_T57= n2;if(_T57)goto _TL4A;else{goto _TL4C;}_TL4C: _T58= coercion;_T59= (int)_T58;if(_T59==2)goto _TL4A;_T5A= b1;_T5B= (unsigned)_T5A;if(_T5B)goto _TL4D;else{goto _TL4E;}_TL4E: _T5C= b2;_T5D= (unsigned)_T5C;if(_T5D)goto _TL4D;else{goto _TL4A;}
_TL4D: _T5F= Cyc_Warn_impos_loc;{int(*_T152)(unsigned,struct _fat_ptr,struct _fat_ptr)=(int(*)(unsigned,struct _fat_ptr,struct _fat_ptr))_T5F;_T5E= _T152;}_T60= e;_T61= _T60->loc;_T62= _tag_fat("null-check conversion mis-classified",sizeof(char),37U);_T63= _tag_fat(0U,sizeof(void*),0);_T5E(_T61,_T62,_T63);goto _TL4B;
_TL4A: _T64= b1;_T65= (unsigned)_T64;if(!_T65)goto _TL4F;_T66= b2;_T67= (unsigned)_T66;if(_T67)goto _TL4F;else{goto _TL51;}_TL51: _T68= coercion;_T69= (int)_T68;if(_T69!=2)goto _TL4F;_T6B= Cyc_Warn_impos_loc;{
int(*_T152)(unsigned,struct _fat_ptr,struct _fat_ptr)=(int(*)(unsigned,struct _fat_ptr,struct _fat_ptr))_T6B;_T6A= _T152;}_T6C= e;_T6D= _T6C->loc;_T6E= _tag_fat("conversion mis-classified as null-check",sizeof(char),40U);_T6F= _tag_fat(0U,sizeof(void*),0);_T6A(_T6D,_T6E,_T6F);goto _TL50;_TL4F: _TL50: _TL4B:{struct _tuple16 _T152;
_T152.f0= b1;_T152.f1= b2;_T70= _T152;}{struct _tuple16 _T152=_T70;_T71= _T152.f0;if(_T71==0)goto _TL52;_T72= _T152.f1;if(_T72==0)goto _TL54;_T73= 
# 369
Cyc_Evexp_lte_const_exp(b2,b1);if(_T73)goto _TL56;else{goto _TL58;}
_TL58: _T75= Cyc_Warn_impos_loc;{int(*_T153)(unsigned,struct _fat_ptr,struct _fat_ptr)=(int(*)(unsigned,struct _fat_ptr,struct _fat_ptr))_T75;_T74= _T153;}_T76= e;_T77= _T76->loc;_T78= _tag_fat("InsertChecks: cast to maybe-shorter pointer type",sizeof(char),49U);_T79= _tag_fat(0U,sizeof(void*),0);_T74(_T77,_T78,_T79);goto _TL57;_TL56: _TL57: _T7A= n1;
# 372
if(!_T7A)goto _TL59;_T7B= n2;if(_T7B)goto _TL59;else{goto _TL5B;}_TL5B: _T7C= Cyc_InsertChecks_need_null_check(nv,e1,e);if(!_T7C)goto _TL59;_T7D= Cyc_InsertChecks_need_null_check_vcgen(nv,e1);if(!_T7D)goto _TL59;_T7E= user_inserted;
if(_T7E)goto _TL5C;else{goto _TL5E;}
_TL5E: _T7F= e;_T80= _T7F->loc;_T81= 
# 376
_tag_fat("inserted null check due to implicit cast from * to @ type",sizeof(char),58U);_T82= _tag_fat(0U,sizeof(void*),0);
# 374
Cyc_Warn_warn(_T80,_T81,_T82);goto _TL5D;_TL5C: _TL5D: _T83= e;_T84= & Cyc_InsertChecks_NullOnly_val;_T85= (struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct*)_T84;
# 377
_T83->annot= (void*)_T85;goto _TL5A;
# 379
_TL59: _T86= e;_T87= & Cyc_InsertChecks_NoCheck_val;_T88= (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*)_T87;_T86->annot= (void*)_T88;_TL5A: goto _LL5C;_TL54: _T89= 
# 383
_check_null(b1);_T8A= Cyc_Evexp_c_can_eval(_T89);if(_T8A)goto _TL5F;else{goto _TL61;}
_TL61: _T8B= e;_T8C= _T8B->loc;_T8D= _tag_fat("cannot perform coercion: numelts is statically unknown",sizeof(char),55U);_T8E= _tag_fat(0U,sizeof(void*),0);Cyc_Warn_err(_T8C,_T8D,_T8E);goto _TL60;_TL5F: _TL60: _T8F= e;_T90= & Cyc_InsertChecks_NoCheck_val;_T91= (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*)_T90;
_T8F->annot= (void*)_T91;goto _LL5C;_TL52: _T92= _T152.f1;if(_T92==0)goto _TL62;_T93= nv;_T94= _T93.at_toplevel;
# 388
if(!_T94)goto _TL64;_T95= e;_T96= _T95->loc;_T97= 
_tag_fat("cannot coerce fat-pointer to thin-pointer at toplevel",sizeof(char),54U);_T98= _tag_fat(0U,sizeof(void*),0);Cyc_Warn_err(_T96,_T97,_T98);goto _TL65;_TL64: _TL65:{
# 393
struct _tuple14 _T153=Cyc_InsertChecks_need_bound_null_check_annot(e);long _T154;long _T155;_T155= _T153.f0;_T154= _T153.f1;{long bds_ck=_T155;long null_ck=_T154;_T99= bds_ck;
if(!_T99)goto _TL66;
bds_ck= Cyc_InsertChecks_need_bounds_check_vcgen(nv,e1);goto _TL67;_TL66: _TL67: _T9A= bds_ck;
# 398
if(!_T9A)goto _TL68;_T9B= 
_check_null(b2);_T9C= Cyc_Evexp_c_can_eval(_T9B);if(_T9C)goto _TL6A;else{goto _TL6C;}
_TL6C: _T9D= e;_T9E= _T9D->loc;_T9F= _tag_fat("cannot perform coercion: numelts is statically unknown",sizeof(char),55U);_TA0= _tag_fat(0U,sizeof(void*),0);Cyc_Warn_err(_T9E,_T9F,_TA0);goto _TL6B;_TL6A: _TL6B: goto _TL69;_TL68: _TL69: _TA1= null_ck;
# 402
if(!_TA1)goto _TL6D;_TA2= n2;if(_TA2)goto _TL6D;else{goto _TL6F;}_TL6F: _TA3= Cyc_InsertChecks_need_null_check(nv,e1,e);if(!_TA3)goto _TL6D;_TA4= Cyc_InsertChecks_need_null_check_vcgen(nv,e);if(!_TA4)goto _TL6D;_TA5= user_inserted;
if(_TA5)goto _TL70;else{goto _TL72;}
_TL72: _TA6= e;_TA7= _TA6->loc;_TA8= 
# 406
_tag_fat("inserted null check due to implicit cast from *@fat (?) to @ type",sizeof(char),66U);_TA9= _tag_fat(0U,sizeof(void*),0);
# 404
Cyc_Warn_warn(_TA7,_TA8,_TA9);goto _TL71;_TL70: _TL71: _TAA= e;_TAC= bds_ck;
# 407
if(!_TAC)goto _TL73;_TAD= & Cyc_InsertChecks_NullAndFatBound_val;_TAE= (struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct*)_TAD;_TAB= (void*)_TAE;goto _TL74;_TL73: _TAF= & Cyc_InsertChecks_NullOnly_val;_TB0= (struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct*)_TAF;_TAB= (void*)_TB0;_TL74: _TAA->annot= _TAB;goto _TL6E;
# 409
_TL6D: _TB1= e;_TB3= bds_ck;if(!_TB3)goto _TL75;_TB4= & Cyc_InsertChecks_FatBound_val;_TB5= (struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct*)_TB4;_TB2= (void*)_TB5;goto _TL76;_TL75: _TB6= & Cyc_InsertChecks_NoCheck_val;_TB7= (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*)_TB6;_TB2= (void*)_TB7;_TL76: _TB1->annot= _TB2;_TL6E: goto _LL5C;}}_TL62: _TB8= e;_TB9= & Cyc_InsertChecks_NoCheck_val;_TBA= (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*)_TB9;
# 412
_TB8->annot= (void*)_TBA;goto _LL5C;_LL5C:;}goto _LL57;}}}}}_TL48: goto _LL5A;_TL46: _LL5A: _TBB= e;_TBC= & Cyc_InsertChecks_NoCheck_val;_TBD= (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*)_TBC;
# 417
_TBB->annot= (void*)_TBD;goto _LL57;_LL57:;}
# 420
Cyc_InsertChecks_do_exp(nv,e1);goto _LL0;}case 22:{struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*_T14F=(struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*)_T145;_T14D= _T14F->f1;}{struct Cyc_Absyn_Exp*e1=_T14D;_T14D= e1;goto _LL20;}case 20:{struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*_T14F=(struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*)_T145;_T14D= _T14F->f1;}_LL20: {struct Cyc_Absyn_Exp*e1=_T14D;_T14D= e1;_T14C= 
# 426
Cyc_InsertChecks_shared_zero_exp();goto _LL22;}case 23:{struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*_T14F=(struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*)_T145;_T14D= _T14F->f1;_T14C= _T14F->f2;}_LL22: {struct Cyc_Absyn_Exp*e1=_T14D;struct Cyc_Absyn_Exp*e2=_T14C;_TBE= e1;_TBF= _TBE->topt;_TC0= 
# 428
_check_null(_TBF);{void*_T14F=Cyc_Absyn_compress(_TC0);void*_T150;void*_T151;void*_T152;void*_T153;struct Cyc_Absyn_Tqual _T154;void*_T155;_TC1= (int*)_T14F;_TC2= *_TC1;if(_TC2!=4)goto _TL77;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T156=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T14F;_TC3= _T156->f1;_T155= _TC3.elt_type;_TC4= _T156->f1;_T154= _TC4.elt_tq;_TC5= _T156->f1;_TC6= _TC5.ptr_atts;_T153= _TC6.eff;_TC7= _T156->f1;_TC8= _TC7.ptr_atts;_T152= _TC8.nullable;_TC9= _T156->f1;_TCA= _TC9.ptr_atts;_T151= _TCA.bounds;_TCB= _T156->f1;_TCC= _TCB.ptr_atts;_T150= _TCC.zero_term;}{void*ta=_T155;struct Cyc_Absyn_Tqual tq=_T154;void*rgn=_T153;void*n=_T152;void*b=_T151;void*zt=_T150;
# 430
struct _tuple14 _T156=Cyc_InsertChecks_need_bound_null_check_annot(e);long _T157;long _T158;_T158= _T156.f0;_T157= _T156.f1;{long bds_ck=_T158;long null_ck=_T157;_TCD= bds_ck;
# 433
if(!_TCD)goto _TL79;
bds_ck= Cyc_InsertChecks_simple_need_bounds_check(nv,e1,e2);goto _TL7A;_TL79: _TL7A: _TCE= bds_ck;
if(!_TCE)goto _TL7B;_TCF= nv;_TD0= _TCF.vcgen_r;if(!_TD0)goto _TL7B;
# 437
bds_ck= Cyc_InsertChecks_need_bounds_check_vcgen(nv,e1);goto _TL7C;_TL7B: _TL7C: _TD1= bds_ck;
if(!_TD1)goto _TL7D;_TD2= Cyc_Flags_warn_bounds_checks;if(!_TD2)goto _TL7D;{struct Cyc_String_pa_PrintArg_struct _T159;_T159.tag= 0;
({__typeof__(Cyc_Absynpp_exp2string(e))_T15A=Cyc_Absynpp_exp2string(e);_T159.f1= _T15A;});_TD3= _T159;}{struct Cyc_String_pa_PrintArg_struct _T159=_TD3;void*_T15A[1];_T15A[0]= & _T159;_TD4= e1;_TD5= _TD4->loc;_TD6= _tag_fat("inserted bounds check at %s",sizeof(char),28U);_TD7= _tag_fat(_T15A,sizeof(void*),1);Cyc_Warn_warn(_TD5,_TD6,_TD7);}goto _TL7E;_TL7D: _TL7E: _TD8= 
Cyc_Absyn_bounds_one();_TD9= b;{struct Cyc_Absyn_Exp*bd=Cyc_Tcutil_get_bounds_exp_constrain(_TD8,_TD9,1);
long fat_ptr=bd==0;_TDA= null_ck;
# 445
if(!_TDA)goto _TL7F;_TDC= 
# 452
Cyc_InsertChecks_need_null_check(nv,e1,e);if(!_TDC)goto _TL81;_TDB= Cyc_InsertChecks_need_null_check_vcgen(nv,e1);goto _TL82;_TL81: _TDB= 0;_TL82: null_ck= _TDB;_TDD= null_ck;
if(!_TDD)goto _TL83;_TDE= Cyc_Flags_warn_all_null_deref;if(!_TDE)goto _TL83;_TDF= e;_TE0= _TDF->loc;_TE1= 
_tag_fat("inserted null check",sizeof(char),20U);_TE2= _tag_fat(0U,sizeof(void*),0);Cyc_Warn_warn(_TE0,_TE1,_TE2);goto _TL84;_TL83: _TL84: goto _TL80;_TL7F: _TL80: _TE3= bds_ck;
# 459
if(!_TE3)goto _TL85;_TE4= bd;_TE5= (unsigned)_TE4;
if(!_TE5)goto _TL87;_TE6= 
# 462
Cyc_Evexp_c_can_eval(bd);if(_TE6)goto _TL89;else{goto _TL8B;}
# 466
_TL8B: _TE7= nv;_TE8= _TE7.assn_info;_TE9= e1;{struct Cyc_Vcgen_ExpChecks*ec=Cyc_Vcgen_exp2ctxt_checks(_TE8,_TE9);_TEA= e;_TEB= _TEA->loc;{struct Cyc_String_pa_PrintArg_struct _T159;_T159.tag= 0;_TEE= ec;_TEF= _TEE->bounds_check;
# 468
({__typeof__(Cyc_AssnDef_assn2string(_TEF))_T15A=Cyc_AssnDef_assn2string(_TEF);_T159.f1= _T15A;});_TED= _T159;}{struct Cyc_String_pa_PrintArg_struct _T159=_TED;void*_T15A[1];_T15A[0]= & _T159;_TF0= 
# 467
_tag_fat("cannot determine subscript is in bounds (%s)",sizeof(char),45U);_TF1= _tag_fat(_T15A,sizeof(void*),1);_TEC= Cyc_aprintf(_TF0,_TF1);}_TF2= _tag_fat(0U,sizeof(void*),0);Cyc_Warn_err(_TEB,_TEC,_TF2);{struct Cyc_String_pa_PrintArg_struct _T159;_T159.tag= 0;_TF4= ec;_TF5= _TF4->ctxt;
# 469
({__typeof__(Cyc_AssnDef_assnmap2string(_TF5))_T15A=Cyc_AssnDef_assnmap2string(_TF5);_T159.f1= _T15A;});_TF3= _T159;}{struct Cyc_String_pa_PrintArg_struct _T159=_TF3;void*_T15A[1];_T15A[0]= & _T159;_TF6= Cyc_stderr;_TF7= _tag_fat("[all that I can prove is %s",sizeof(char),28U);_TF8= _tag_fat(_T15A,sizeof(void*),1);Cyc_fprintf(_TF6,_TF7,_TF8);}_TF9= Cyc_stderr;_TFA= 
_tag_fat("]\n",sizeof(char),3U);_TFB= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_TF9,_TFA,_TFB);}goto _TL8A;_TL89: _TL8A: _TFC= e;_TFE= null_ck;
# 472
if(!_TFE)goto _TL8C;{struct Cyc_InsertChecks_NullAndThinBound_Absyn_AbsynAnnot_struct*_T159=_cycalloc(sizeof(struct Cyc_InsertChecks_NullAndThinBound_Absyn_AbsynAnnot_struct));_T159->tag= Cyc_InsertChecks_NullAndThinBound;_T159->f1= bd;_TFF= (struct Cyc_InsertChecks_NullAndThinBound_Absyn_AbsynAnnot_struct*)_T159;}_TFD= (void*)_TFF;goto _TL8D;_TL8C:{struct Cyc_InsertChecks_ThinBound_Absyn_AbsynAnnot_struct*_T159=_cycalloc(sizeof(struct Cyc_InsertChecks_ThinBound_Absyn_AbsynAnnot_struct));_T159->tag= Cyc_InsertChecks_ThinBound;_T159->f1= bd;_T100= (struct Cyc_InsertChecks_ThinBound_Absyn_AbsynAnnot_struct*)_T159;}_TFD= (void*)_T100;_TL8D: _TFC->annot= _TFD;goto _TL88;
# 474
_TL87: _T101= e;_T103= null_ck;if(!_T103)goto _TL8E;_T104= & Cyc_InsertChecks_NullAndFatBound_val;_T105= (struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct*)_T104;_T102= (void*)_T105;goto _TL8F;_TL8E: _T106= & Cyc_InsertChecks_FatBound_val;_T107= (struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct*)_T106;_T102= (void*)_T107;_TL8F: _T101->annot= _T102;_TL88: goto _TL86;
_TL85: _T108= null_ck;if(!_T108)goto _TL90;_T109= e;_T10A= & Cyc_InsertChecks_NullOnly_val;_T10B= (struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct*)_T10A;
_T109->annot= (void*)_T10B;goto _TL91;
# 478
_TL90: _T10C= e;_T10D= & Cyc_InsertChecks_NoCheck_val;_T10E= (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*)_T10D;_T10C->annot= (void*)_T10E;_TL91: _TL86: goto _LL68;}}}_TL77: _T110= Cyc_Warn_impos_loc;{
# 481
int(*_T156)(unsigned,struct _fat_ptr,struct _fat_ptr)=(int(*)(unsigned,struct _fat_ptr,struct _fat_ptr))_T110;_T10F= _T156;}_T111= e;_T112= _T111->loc;_T113= _tag_fat("InsertChecks: non-pointer-type on dereference",sizeof(char),46U);_T114= _tag_fat(0U,sizeof(void*),0);_T10F(_T112,_T113,_T114);_LL68:;}
# 483
Cyc_InsertChecks_do_exp(nv,e1);
Cyc_InsertChecks_do_exp(nv,e2);goto _LL0;}case 18:{struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct*_T14F=(struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct*)_T145;_T14D= _T14F->f1;}{struct Cyc_Absyn_Exp*e1=_T14D;_T115= e;_T116= & Cyc_InsertChecks_NoCheck_val;_T117= (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*)_T116;
# 488
_T115->annot= (void*)_T117;_T118= 
Cyc_InsertChecks_enter_sizeof(nv);_T119= e1;Cyc_InsertChecks_do_exp(_T118,_T119);goto _LL0;}case 16:{struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct*_T14F=(struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct*)_T145;_T14D= _T14F->f1;_T14C= _T14F->f2;_T147= _T14F->f3;}{struct Cyc_Absyn_Exp*rgnopt=_T14D;struct Cyc_Absyn_Exp*e1=_T14C;struct Cyc_Absyn_Exp*qualopt=_T147;_T11A= e;_T11B= & Cyc_InsertChecks_NoCheck_val;_T11C= (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*)_T11B;
# 493
_T11A->annot= (void*)_T11C;
Cyc_InsertChecks_do_exp_opt(nv,rgnopt);
Cyc_InsertChecks_do_exp_opt(nv,qualopt);
Cyc_InsertChecks_do_exp(nv,e1);goto _LL0;}case 33:{struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct*_T14F=(struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct*)_T145;_T11D= _T14F->f1;_T14D= _T11D.rgn;_T11E= _T14F->f1;_T14C= _T11E.aqual;_T11F= _T14F->f1;_T147= _T11F.num_elts;}{struct Cyc_Absyn_Exp*rgnopt=_T14D;struct Cyc_Absyn_Exp*aqopt=_T14C;struct Cyc_Absyn_Exp*sizeexp=_T147;_T120= e;_T121= & Cyc_InsertChecks_NoCheck_val;_T122= (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*)_T121;
# 501
_T120->annot= (void*)_T122;
Cyc_InsertChecks_do_exp_opt(nv,rgnopt);
Cyc_InsertChecks_do_exp_opt(nv,aqopt);
Cyc_InsertChecks_do_exp(nv,sizeexp);goto _LL0;}case 41:{struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct*_T14F=(struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct*)_T145;_T14D= _T14F->f1;}{struct Cyc_Absyn_Exp*e1=_T14D;_T14D= e1;goto _LL2C;}case 40:{struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct*_T14F=(struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct*)_T145;_T14D= _T14F->f1;}_LL2C: {struct Cyc_Absyn_Exp*e1=_T14D;_T14D= e1;goto _LL2E;}case 11:{struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct*_T14F=(struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct*)_T145;_T14D= _T14F->f1;}_LL2E: {struct Cyc_Absyn_Exp*e1=_T14D;_T14D= e1;goto _LL30;}case 12:{struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct*_T14F=(struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct*)_T145;_T14D= _T14F->f1;}_LL30: {struct Cyc_Absyn_Exp*e1=_T14D;_T14D= e1;goto _LL32;}case 13:{struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*_T14F=(struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*)_T145;_T14D= _T14F->f1;}_LL32: {struct Cyc_Absyn_Exp*e1=_T14D;_T14D= e1;goto _LL34;}case 15:{struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct*_T14F=(struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct*)_T145;_T14D= _T14F->f1;}_LL34: {struct Cyc_Absyn_Exp*e1=_T14D;_T14D= e1;goto _LL36;}case 42:{struct Cyc_Absyn_Assert_false_e_Absyn_Raw_exp_struct*_T14F=(struct Cyc_Absyn_Assert_false_e_Absyn_Raw_exp_struct*)_T145;_T14D= _T14F->f1;}_LL36: {struct Cyc_Absyn_Exp*e1=_T14D;_T123= e;_T124= & Cyc_InsertChecks_NoCheck_val;_T125= (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*)_T124;
# 520
_T123->annot= (void*)_T125;
Cyc_InsertChecks_do_exp(nv,e1);goto _LL0;}case 31: goto _LL3A;case 32: _LL3A: goto _LL3C;case 17: _LL3C: goto _LL3E;case 19: _LL3E: _T126= e;_T127= & Cyc_InsertChecks_NoCheck_val;_T128= (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*)_T127;
# 527
_T126->annot= (void*)_T128;goto _LL0;case 21:{struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*_T14F=(struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*)_T145;_T14D= _T14F->f1;}{struct Cyc_Absyn_Exp*e1=_T14D;_T14D= e1;goto _LL42;}case 37:{struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct*_T14F=(struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct*)_T145;_T14D= _T14F->f1;}_LL42: {struct Cyc_Absyn_Exp*e1=_T14D;_T14D= e1;goto _LL44;}case 27:{struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct*_T14F=(struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct*)_T145;_T14D= _T14F->f1;}_LL44: {struct Cyc_Absyn_Exp*e1=_T14D;_T129= e;_T12A= & Cyc_InsertChecks_NoCheck_val;_T12B= (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*)_T12A;
# 534
_T129->annot= (void*)_T12B;
Cyc_InsertChecks_do_exp(nv,e1);goto _LL0;}case 26:{struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct*_T14F=(struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct*)_T145;_T14D= _T14F->f2;_T14C= _T14F->f3;}{struct Cyc_Absyn_Exp*e1=_T14D;struct Cyc_Absyn_Exp*e2=_T14C;_T14D= e1;_T14C= e2;goto _LL48;}case 34:{struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct*_T14F=(struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct*)_T145;_T14D= _T14F->f1;_T14C= _T14F->f2;}_LL48: {struct Cyc_Absyn_Exp*e1=_T14D;struct Cyc_Absyn_Exp*e2=_T14C;_T12C= e;_T12D= & Cyc_InsertChecks_NoCheck_val;_T12E= (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*)_T12D;
# 540
_T12C->annot= (void*)_T12E;
Cyc_InsertChecks_do_exp(nv,e1);
Cyc_InsertChecks_do_exp(nv,e2);goto _LL0;}case 25:{struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*_T14F=(struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*)_T145;_T14A= _T14F->f1;}{struct Cyc_List_List*dles=_T14A;_T14A= dles;goto _LL4C;}case 28:{struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*_T14F=(struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*)_T145;_T14A= _T14F->f3;}_LL4C: {struct Cyc_List_List*dles=_T14A;_T14A= dles;goto _LL4E;}case 29:{struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct*_T14F=(struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct*)_T145;_T14A= _T14F->f3;}_LL4E: {struct Cyc_List_List*dles=_T14A;_T12F= e;_T130= & Cyc_InsertChecks_NoCheck_val;_T131= (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*)_T130;
# 549
_T12F->annot= (void*)_T131;
_TL95: if(dles!=0)goto _TL93;else{goto _TL94;}
_TL93: _T132= nv;_T133= dles;_T134= _T133->hd;_T135= (struct _tuple17*)_T134;_T136= *_T135;_T137= _T136.f1;Cyc_InsertChecks_do_exp(_T132,_T137);_T138= dles;
# 550
dles= _T138->tl;goto _TL95;_TL94: goto _LL0;}case 36:{struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct*_T14F=(struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct*)_T145;_T146= _T14F->f1;}{struct Cyc_Absyn_Stmt*s=_T146;_T139= e;_T13A= & Cyc_InsertChecks_NoCheck_val;_T13B= (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*)_T13A;
# 554
_T139->annot= (void*)_T13B;
Cyc_InsertChecks_do_stmt(nv,s);goto _LL0;}case 38: _T13C= e;_T13D= & Cyc_InsertChecks_NoCheck_val;_T13E= (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*)_T13D;
# 558
_T13C->annot= (void*)_T13E;goto _LL0;case 35: goto _LL56;default: _LL56: _T140= Cyc_Warn_impos_loc;{
# 562
int(*_T14F)(unsigned,struct _fat_ptr,struct _fat_ptr)=(int(*)(unsigned,struct _fat_ptr,struct _fat_ptr))_T140;_T13F= _T14F;}_T141= e;_T142= _T141->loc;_T143= _tag_fat("InsertChecks, unexpected exp form",sizeof(char),34U);_T144= _tag_fat(0U,sizeof(void*),0);_T13F(_T142,_T143,_T144);}_LL0:;}}
# 566
static void Cyc_InsertChecks_do_fndecl(struct Cyc_InsertChecks_Env env,struct Cyc_Absyn_Fndecl*fd){struct Cyc_Absyn_Fndecl*_T0;long _T1;struct Cyc_InsertChecks_Env _T2;long _T3;struct Cyc_Hashtable_Table**_T4;struct Cyc_Hashtable_Table*(*_T5)(int,int(*)(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*),int(*)(struct Cyc_Absyn_Exp*));struct Cyc_Hashtable_Table*(*_T6)(int,int(*)(void*,void*),int(*)(void*));int(*_T7)(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*);int(*_T8)(void*,void*);int(*_T9)(struct Cyc_Absyn_Exp*);struct Cyc_InsertChecks_Env _TA;long _TB;struct Cyc_InsertChecks_Env _TC;long _TD;struct Cyc_InsertChecks_Env _TE;unsigned _TF;int(*_T10)(struct _fat_ptr,struct _fat_ptr);void*(*_T11)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T12;struct _fat_ptr _T13;struct Cyc_InsertChecks_Env _T14;struct Cyc_JumpAnalysis_Jump_Anal_Result*_T15;struct Cyc_Absyn_Fndecl*_T16;struct Cyc_InsertChecks_Env _T17;struct Cyc_Hashtable_Table**_T18;struct Cyc_InsertChecks_Env _T19;struct Cyc_Hashtable_Table*_T1A;struct Cyc_InsertChecks_Env _T1B;long _T1C;struct Cyc_InsertChecks_Env _T1D;struct Cyc_Absyn_Fndecl*_T1E;struct Cyc_Absyn_Stmt*_T1F;_T0= fd;_T1= _T0->escapes;
# 569
if(!_T1)goto _TL96;_T2= env;_T3= _T2.use_precond;if(!_T3)goto _TL96;
return;
# 572
_TL96:{struct Cyc_InsertChecks_Env nv=Cyc_InsertChecks_fn_body_env(env);{struct Cyc_Hashtable_Table**_T20=_cycalloc(sizeof(struct Cyc_Hashtable_Table*));_T6= Cyc_Hashtable_create;{
struct Cyc_Hashtable_Table*(*_T21)(int,int(*)(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*),int(*)(struct Cyc_Absyn_Exp*))=(struct Cyc_Hashtable_Table*(*)(int,int(*)(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*),int(*)(struct Cyc_Absyn_Exp*)))_T6;_T5= _T21;}_T8= Cyc_Core_ptrcmp;{int(*_T21)(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*)=(int(*)(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*))_T8;_T7= _T21;}{int(*_T21)(struct Cyc_Absyn_Exp*)=(int(*)(struct Cyc_Absyn_Exp*))Cyc_InsertChecks_hash_ptr;_T9= _T21;}({__typeof__(_T5(57,_T7,_T9))_T21=_T5(57,_T7,_T9);*_T20= _T21;});_T4= (struct Cyc_Hashtable_Table**)_T20;}nv.assn_info= _T4;_TA= nv;_TB= _TA.vcgen_r;
if(!_TB)goto _TL98;_TC= env;_TD= _TC.use_precond;
# 583 "cyclone/library/compiler/insert_checks.cyc"
if(!_TD)goto _TL9A;_TE= env;_TF= _TE.pass_counter;if(_TF > 1U)goto _TL9A;_T11= Cyc_Warn_impos;{
int(*_T20)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T11;_T10= _T20;}_T12= _tag_fat("Trying to use preconditions in vcgen at the first pass\n",sizeof(char),56U);_T13= _tag_fat(0U,sizeof(void*),0);_T10(_T12,_T13);goto _TL9B;_TL9A: _TL9B: _T14= nv;_T15= _T14.tables;_T16= fd;_T17= nv;_T18= _T17.assn_info;_T19= nv;_T1A= _T19.fn_precond_info;_T1B= nv;_T1C= _T1B.use_precond;
Cyc_Vcgen_vcgen_fundecl(0U,_T15,_T16,_T18,_T1A,_T1C);goto _TL99;_TL98: _TL99: _T1D= nv;_T1E= fd;_T1F= _T1E->body;
# 602 "cyclone/library/compiler/insert_checks.cyc"
Cyc_InsertChecks_do_stmt(_T1D,_T1F);
Cyc_AssnDef_reset_hash_cons_table();};}
# 620 "cyclone/library/compiler/insert_checks.cyc"
static void Cyc_InsertChecks_do_decl(struct Cyc_InsertChecks_Env nv,struct Cyc_Absyn_Decl*d){struct Cyc_Absyn_Decl*_T0;int*_T1;unsigned _T2;struct Cyc_InsertChecks_Env _T3;struct Cyc_Absyn_Vardecl*_T4;struct Cyc_Absyn_Exp*_T5;struct Cyc_InsertChecks_Env _T6;struct Cyc_List_List*_T7;void*_T8;struct Cyc_Absyn_Decl*_T9;struct Cyc_List_List*_TA;_T0= d;{
void*_TB=_T0->r;struct Cyc_List_List*_TC;struct Cyc_Absyn_Exp*_TD;struct Cyc_Absyn_Fndecl*_TE;struct Cyc_Absyn_Vardecl*_TF;_T1= (int*)_TB;_T2= *_T1;switch(_T2){case 0:{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T10=(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_TB;_TF= _T10->f1;}{struct Cyc_Absyn_Vardecl*vd=_TF;_T3= nv;_T4= vd;_T5= _T4->initializer;
# 623
Cyc_InsertChecks_do_exp_opt(_T3,_T5);goto _LL0;}case 1:{struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*_T10=(struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*)_TB;_TE= _T10->f1;}{struct Cyc_Absyn_Fndecl*fd=_TE;goto _LL0;}case 2:{struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*_T10=(struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*)_TB;_TD= _T10->f3;}{struct Cyc_Absyn_Exp*e=_TD;
# 628
Cyc_InsertChecks_do_exp(nv,e);goto _LL0;}case 3: goto _LL0;case 4:{struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct*_T10=(struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct*)_TB;_TD= _T10->f3;}{struct Cyc_Absyn_Exp*eo=_TD;
# 633
Cyc_InsertChecks_do_exp_opt(nv,eo);goto _LL0;}case 5: goto _LLE;case 6: _LLE: goto _LL10;case 7: _LL10: goto _LL12;case 8: _LL12: goto _LL14;case 13: _LL14: goto _LL16;case 14: _LL16: goto _LL18;case 15: _LL18: goto _LL1A;case 16: _LL1A: goto _LL1C;case 12: _LL1C: goto _LL0;case 11:{struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct*_T10=(struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct*)_TB;_TC= _T10->f1;}{struct Cyc_List_List*ds=_TC;_TC= ds;goto _LL20;}case 10:{struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct*_T10=(struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct*)_TB;_TC= _T10->f2;}_LL20: {struct Cyc_List_List*ds=_TC;_TC= ds;goto _LL22;}default:{struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct*_T10=(struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct*)_TB;_TC= _T10->f2;}_LL22: {struct Cyc_List_List*ds=_TC;
# 650
_TLA0: if(ds!=0)goto _TL9E;else{goto _TL9F;}
_TL9E: _T6= nv;_T7= ds;_T8= _T7->hd;_T9= (struct Cyc_Absyn_Decl*)_T8;Cyc_InsertChecks_do_decl(_T6,_T9);_TA= ds;
# 650
ds= _TA->tl;goto _TLA0;_TL9F:;}}_LL0:;}}
# 655
static void Cyc_InsertChecks_do_scs(struct Cyc_InsertChecks_Env nv,struct Cyc_List_List*scs){struct Cyc_List_List*_T0;void*_T1;struct Cyc_Absyn_Switch_clause*_T2;struct Cyc_Absyn_Exp*_T3;struct Cyc_InsertChecks_Env _T4;struct Cyc_List_List*_T5;void*_T6;struct Cyc_Absyn_Switch_clause*_T7;struct Cyc_Absyn_Exp*_T8;struct Cyc_InsertChecks_Env _T9;struct Cyc_List_List*_TA;void*_TB;struct Cyc_Absyn_Switch_clause*_TC;struct Cyc_Absyn_Stmt*_TD;struct Cyc_List_List*_TE;
# 658
_TLA4: if(scs!=0)goto _TLA2;else{goto _TLA3;}
_TLA2: _T0= scs;_T1= _T0->hd;_T2= (struct Cyc_Absyn_Switch_clause*)_T1;_T3= _T2->where_clause;if(_T3==0)goto _TLA5;_T4= nv;_T5= scs;_T6= _T5->hd;_T7= (struct Cyc_Absyn_Switch_clause*)_T6;_T8= _T7->where_clause;
Cyc_InsertChecks_do_exp(_T4,_T8);goto _TLA6;_TLA5: _TLA6: _T9= nv;_TA= scs;_TB= _TA->hd;_TC= (struct Cyc_Absyn_Switch_clause*)_TB;_TD= _TC->body;
Cyc_InsertChecks_do_stmt(_T9,_TD);_TE= scs;
# 658
scs= _TE->tl;goto _TLA4;_TLA3:;}
# 665
static void Cyc_InsertChecks_do_stmt(struct Cyc_InsertChecks_Env nv,struct Cyc_Absyn_Stmt*s){struct Cyc_Absyn_Stmt*_T0;int*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;unsigned _T4;struct _tuple9 _T5;struct _tuple9 _T6;struct _tuple9 _T7;struct _tuple9 _T8;struct Cyc_InsertChecks_Env _T9;struct Cyc_List_List*_TA;void*_TB;struct Cyc_Absyn_Exp*_TC;struct Cyc_List_List*_TD;_T0= s;{
void*_TE=_T0->r;struct Cyc_Absyn_Decl*_TF;struct Cyc_List_List*_T10;struct Cyc_Absyn_Exp*_T11;struct Cyc_Absyn_Exp*_T12;struct Cyc_Absyn_Stmt*_T13;struct Cyc_Absyn_Stmt*_T14;struct Cyc_Absyn_Exp*_T15;_T1= (int*)_TE;_T2= *_T1;switch(_T2){case 0: goto _LL0;case 1:{struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct*_T16=(struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct*)_TE;_T15= _T16->f1;}{struct Cyc_Absyn_Exp*e=_T15;
# 670
Cyc_InsertChecks_do_exp(nv,e);goto _LL0;}case 2:{struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*_T16=(struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*)_TE;_T14= _T16->f1;_T13= _T16->f2;}{struct Cyc_Absyn_Stmt*s1=_T14;struct Cyc_Absyn_Stmt*s2=_T13;
# 673
Cyc_InsertChecks_do_stmt(nv,s1);
Cyc_InsertChecks_do_stmt(nv,s2);goto _LL0;}case 3:{struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct*_T16=(struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct*)_TE;_T15= _T16->f1;}{struct Cyc_Absyn_Exp*eopt=_T15;_T3= eopt;_T4= (unsigned)_T3;
# 677
if(!_T4)goto _TLA8;
Cyc_InsertChecks_do_exp(nv,eopt);goto _TLA9;_TLA8: _TLA9: goto _LL0;}case 4:{struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct*_T16=(struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct*)_TE;_T15= _T16->f1;_T14= _T16->f2;_T13= _T16->f3;}{struct Cyc_Absyn_Exp*e=_T15;struct Cyc_Absyn_Stmt*s1=_T14;struct Cyc_Absyn_Stmt*s2=_T13;
# 681
Cyc_InsertChecks_do_exp(nv,e);
Cyc_InsertChecks_do_stmt(nv,s1);
Cyc_InsertChecks_do_stmt(nv,s2);goto _LL0;}case 14:{struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct*_T16=(struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct*)_TE;_T14= _T16->f1;_T5= _T16->f2;_T15= _T5.f0;}{struct Cyc_Absyn_Stmt*s1=_T14;struct Cyc_Absyn_Exp*e=_T15;_T15= e;_T14= s1;goto _LLE;}case 5:{struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct*_T16=(struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct*)_TE;_T6= _T16->f1;_T15= _T6.f0;_T14= _T16->f2;}_LLE: {struct Cyc_Absyn_Exp*e=_T15;struct Cyc_Absyn_Stmt*s1=_T14;
# 688
Cyc_InsertChecks_do_exp(nv,e);
Cyc_InsertChecks_do_stmt(nv,s1);goto _LL0;}case 9:{struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct*_T16=(struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct*)_TE;_T15= _T16->f1;_T7= _T16->f2;_T12= _T7.f0;_T8= _T16->f3;_T11= _T8.f0;_T14= _T16->f4;}{struct Cyc_Absyn_Exp*e1=_T15;struct Cyc_Absyn_Exp*e2=_T12;struct Cyc_Absyn_Exp*e3=_T11;struct Cyc_Absyn_Stmt*s1=_T14;
# 692
Cyc_InsertChecks_do_exp(nv,e1);
Cyc_InsertChecks_do_exp(nv,e2);
Cyc_InsertChecks_do_exp(nv,e3);
Cyc_InsertChecks_do_stmt(nv,s1);goto _LL0;}case 6: goto _LL14;case 7: _LL14: goto _LL16;case 8: _LL16:
# 700
 return;case 11:{struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct*_T16=(struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct*)_TE;_T10= _T16->f1;}{struct Cyc_List_List*es=_T10;
# 702
_TLAD: if(es!=0)goto _TLAB;else{goto _TLAC;}
_TLAB: _T9= nv;_TA= es;_TB= _TA->hd;_TC= (struct Cyc_Absyn_Exp*)_TB;Cyc_InsertChecks_do_exp(_T9,_TC);_TD= es;
# 702
es= _TD->tl;goto _TLAD;_TLAC: goto _LL0;}case 13:{struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct*_T16=(struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct*)_TE;_T14= _T16->f2;}{struct Cyc_Absyn_Stmt*s1=_T14;
# 706
Cyc_InsertChecks_do_stmt(nv,s1);goto _LL0;}case 12:{struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*_T16=(struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*)_TE;_TF= _T16->f1;_T14= _T16->f2;}{struct Cyc_Absyn_Decl*d=_TF;struct Cyc_Absyn_Stmt*s1=_T14;
# 709
Cyc_InsertChecks_do_decl(nv,d);
Cyc_InsertChecks_do_stmt(nv,s1);goto _LL0;}case 10:{struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct*_T16=(struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct*)_TE;_T15= _T16->f1;_T10= _T16->f2;}{struct Cyc_Absyn_Exp*e=_T15;struct Cyc_List_List*scs=_T10;
# 713
Cyc_InsertChecks_do_exp(nv,e);
Cyc_InsertChecks_do_scs(nv,scs);goto _LL0;}default:{struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct*_T16=(struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct*)_TE;_T14= _T16->f1;_T10= _T16->f2;}{struct Cyc_Absyn_Stmt*s1=_T14;struct Cyc_List_List*scs=_T10;
# 717
Cyc_InsertChecks_do_stmt(nv,s1);
Cyc_InsertChecks_do_scs(nv,scs);goto _LL0;}}_LL0:;}}
# 723
float Cyc_InsertChecks_percent(int i,int total){int _T0;float _T1;int _T2;float _T3;float _T4;float _T5;float _T6;
float ans=(float)1;
# 726
if(total==0)goto _TLAE;_T0= i;_T1= (float)_T0;_T2= total;_T3= (float)_T2;
ans= _T1 / _T3;goto _TLAF;_TLAE: _TLAF: _T4= ans;_T5= (float)100;_T6= _T4 * _T5;
return _T6;}
# 731
static long Cyc_InsertChecks_visit_esc_fn_exp(struct Cyc_Hashtable_Table*env,struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;int*_T1;unsigned _T2;struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T3;void*_T4;int*_T5;int _T6;void*_T7;struct Cyc_Absyn_Exp**(*_T8)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Exp*);void**(*_T9)(struct Cyc_Hashtable_Table*,void*);struct Cyc_Absyn_Exp**_TA;unsigned _TB;struct Cyc_Absyn_Fndecl*_TC;struct Cyc_Absyn_Exp*_TD;int*_TE;unsigned _TF;void(*_T10)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*);void(*_T11)(struct Cyc_Hashtable_Table*,void*,void*);void(*_T12)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*);void(*_T13)(struct Cyc_Hashtable_Table*,void*,void*);_T0= e;{
void*_T14=_T0->r;struct Cyc_Absyn_Exp*_T15;struct Cyc_Absyn_Fndecl*_T16;_T1= (int*)_T14;_T2= *_T1;switch(_T2){case 1: _T3= (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T14;_T4= _T3->f1;_T5= (int*)_T4;_T6= *_T5;if(_T6!=2)goto _TLB1;{struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T17=(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T14;_T7= _T17->f1;{struct Cyc_Absyn_Funname_b_Absyn_Binding_struct*_T18=(struct Cyc_Absyn_Funname_b_Absyn_Binding_struct*)_T7;_T16= _T18->f1;}}{struct Cyc_Absyn_Fndecl*fd=_T16;_T9= Cyc_Hashtable_lookup_opt;{
# 736
struct Cyc_Absyn_Exp**(*_T17)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Exp*)=(struct Cyc_Absyn_Exp**(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Exp*))_T9;_T8= _T17;}_TA= _T8(env,e);_TB= (unsigned)_TA;if(_TB)goto _TLB3;else{goto _TLB5;}
_TLB5: _TC= fd;_TC->escapes= 1;goto _TLB4;_TLB3: _TLB4: goto _LL0;}_TLB1: goto _LL5;case 10:{struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*_T17=(struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*)_T14;_T15= _T17->f1;}{struct Cyc_Absyn_Exp*e1=_T15;_TD= e1;{
# 740
void*_T17=_TD->r;struct Cyc_Absyn_Exp*_T18;_TE= (int*)_T17;_TF= *_TE;switch(_TF){case 12:{struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct*_T19=(struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct*)_T17;_T18= _T19->f1;}{struct Cyc_Absyn_Exp*f=_T18;_T18= f;goto _LLB;}case 13:{struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*_T19=(struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*)_T17;_T18= _T19->f1;}_LLB: {struct Cyc_Absyn_Exp*f=_T18;_T11= Cyc_Hashtable_insert;{
# 744
void(*_T19)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*)=(void(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*))_T11;_T10= _T19;}_T10(env,f,f);goto _LL7;}default: _T13= Cyc_Hashtable_insert;{
# 747
void(*_T19)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*)=(void(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*))_T13;_T12= _T19;}_T12(env,e1,e1);goto _LL7;}_LL7:;}goto _LL0;}default: _LL5: goto _LL0;}_LL0:;}
# 754
return 1;}
# 757
static long Cyc_InsertChecks_visit_esc_fn_stmt(struct Cyc_Hashtable_Table*env,struct Cyc_Absyn_Stmt*s){return 1;}
# 759
static void Cyc_InsertChecks_mark_escaped_fns(struct Cyc_List_List*ds){struct Cyc_Hashtable_Table*(*_T0)(int,int(*)(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*),int(*)(struct Cyc_Absyn_Exp*));struct Cyc_Hashtable_Table*(*_T1)(int,int(*)(void*,void*),int(*)(void*));int(*_T2)(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*);int(*_T3)(void*,void*);int(*_T4)(struct Cyc_Absyn_Exp*);struct Cyc_List_List*_T5;void*_T6;struct Cyc_Absyn_Decl*_T7;int*_T8;unsigned _T9;struct Cyc_Absyn_Vardecl*_TA;struct Cyc_Absyn_Exp*_TB;void(*_TC)(long(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Exp*),long(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*),struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Exp*);void(*_TD)(long(*)(void*,struct Cyc_Absyn_Exp*),long(*)(void*,struct Cyc_Absyn_Stmt*),void*,struct Cyc_Absyn_Exp*);struct Cyc_Hashtable_Table*_TE;struct Cyc_Absyn_Vardecl*_TF;struct Cyc_Absyn_Exp*_T10;struct Cyc_Absyn_Fndecl*_T11;enum Cyc_Absyn_Scope _T12;int _T13;struct Cyc_Absyn_Fndecl*_T14;void(*_T15)(long(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Exp*),long(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*),struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*);void(*_T16)(long(*)(void*,struct Cyc_Absyn_Exp*),long(*)(void*,struct Cyc_Absyn_Stmt*),void*,struct Cyc_Absyn_Stmt*);struct Cyc_Hashtable_Table*_T17;struct Cyc_Absyn_Fndecl*_T18;struct Cyc_Absyn_Stmt*_T19;void(*_T1A)(long(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Exp*),long(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*),struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Exp*);void(*_T1B)(long(*)(void*,struct Cyc_Absyn_Exp*),long(*)(void*,struct Cyc_Absyn_Stmt*),void*,struct Cyc_Absyn_Exp*);struct Cyc_Hashtable_Table*_T1C;struct Cyc_Absyn_Exp*_T1D;void(*_T1E)(long(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Exp*),long(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*),struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Exp*);void(*_T1F)(long(*)(void*,struct Cyc_Absyn_Exp*),long(*)(void*,struct Cyc_Absyn_Stmt*),void*,struct Cyc_Absyn_Exp*);struct Cyc_Hashtable_Table*_T20;struct Cyc_Absyn_Exp*_T21;struct Cyc_List_List*_T22;
_TLBA: if(ds!=0)goto _TLB8;else{goto _TLB9;}
_TLB8: _T1= Cyc_Hashtable_create;{struct Cyc_Hashtable_Table*(*_T23)(int,int(*)(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*),int(*)(struct Cyc_Absyn_Exp*))=(struct Cyc_Hashtable_Table*(*)(int,int(*)(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*),int(*)(struct Cyc_Absyn_Exp*)))_T1;_T0= _T23;}_T3= Cyc_Core_ptrcmp;{int(*_T23)(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*)=(int(*)(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*))_T3;_T2= _T23;}{int(*_T23)(struct Cyc_Absyn_Exp*)=(int(*)(struct Cyc_Absyn_Exp*))Cyc_InsertChecks_hash_ptr;_T4= _T23;}{struct Cyc_Hashtable_Table*table=_T0(313,_T2,_T4);_T5= ds;_T6= _T5->hd;_T7= (struct Cyc_Absyn_Decl*)_T6;{
void*_T23=_T7->r;struct Cyc_List_List*_T24;struct Cyc_Absyn_Exp*_T25;struct Cyc_Absyn_Fndecl*_T26;struct Cyc_Absyn_Vardecl*_T27;_T8= (int*)_T23;_T9= *_T8;switch(_T9){case 0:{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T28=(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T23;_T27= _T28->f1;}{struct Cyc_Absyn_Vardecl*vd=_T27;_TA= vd;_TB= _TA->initializer;
# 764
if(_TB==0)goto _TLBC;_TD= Cyc_Absyn_visit_exp;{
void(*_T28)(long(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Exp*),long(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*),struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Exp*)=(void(*)(long(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Exp*),long(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*),struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Exp*))_TD;_TC= _T28;}_TE= table;_TF= vd;_T10= _TF->initializer;_TC(Cyc_InsertChecks_visit_esc_fn_exp,Cyc_InsertChecks_visit_esc_fn_stmt,_TE,_T10);goto _TLBD;_TLBC: _TLBD: goto _LL0;}case 1:{struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*_T28=(struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*)_T23;_T26= _T28->f1;}{struct Cyc_Absyn_Fndecl*fd=_T26;_T11= fd;_T12= _T11->sc;_T13= (int)_T12;
# 769
if(_T13==0)goto _TLBE;_T14= fd;
_T14->escapes= 1;goto _TLBF;_TLBE: _TLBF: _T16= Cyc_Absyn_visit_stmt;{
void(*_T28)(long(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Exp*),long(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*),struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*)=(void(*)(long(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Exp*),long(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*),struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*))_T16;_T15= _T28;}_T17= table;_T18= fd;_T19= _T18->body;_T15(Cyc_InsertChecks_visit_esc_fn_exp,Cyc_InsertChecks_visit_esc_fn_stmt,_T17,_T19);goto _LL0;}case 2:{struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*_T28=(struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*)_T23;_T25= _T28->f3;}{struct Cyc_Absyn_Exp*e=_T25;_T1B= Cyc_Absyn_visit_exp;{
# 774
void(*_T28)(long(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Exp*),long(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*),struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Exp*)=(void(*)(long(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Exp*),long(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*),struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Exp*))_T1B;_T1A= _T28;}_T1C= table;_T1D= e;_T1A(Cyc_InsertChecks_visit_esc_fn_exp,Cyc_InsertChecks_visit_esc_fn_stmt,_T1C,_T1D);goto _LL0;}case 3: goto _LL0;case 4:{struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct*_T28=(struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct*)_T23;_T25= _T28->f3;}{struct Cyc_Absyn_Exp*eo=_T25;
# 779
if(eo==0)goto _TLC0;_T1F= Cyc_Absyn_visit_exp;{
void(*_T28)(long(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Exp*),long(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*),struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Exp*)=(void(*)(long(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Exp*),long(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*),struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Exp*))_T1F;_T1E= _T28;}_T20= table;_T21= eo;_T1E(Cyc_InsertChecks_visit_esc_fn_exp,Cyc_InsertChecks_visit_esc_fn_stmt,_T20,_T21);goto _TLC1;_TLC0: _TLC1: goto _LL0;}case 5: goto _LLE;case 6: _LLE: goto _LL10;case 7: _LL10: goto _LL12;case 8: _LL12: goto _LL14;case 13: _LL14: goto _LL16;case 14: _LL16: goto _LL18;case 15: _LL18: goto _LL1A;case 16: _LL1A: goto _LL1C;case 12: _LL1C: goto _LL0;case 11:{struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct*_T28=(struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct*)_T23;_T24= _T28->f1;}{struct Cyc_List_List*ds=_T24;_T24= ds;goto _LL20;}case 10:{struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct*_T28=(struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct*)_T23;_T24= _T28->f2;}_LL20: {struct Cyc_List_List*ds=_T24;_T24= ds;goto _LL22;}default:{struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct*_T28=(struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct*)_T23;_T24= _T28->f2;}_LL22: {struct Cyc_List_List*ds=_T24;
# 797
Cyc_InsertChecks_mark_escaped_fns(ds);}}_LL0:;}}_T22= ds;
# 760
ds= _T22->tl;goto _TLBA;_TLB9:;}
# 802
void Cyc_InsertChecks_insert_checks(struct Cyc_List_List*tds,struct Cyc_JumpAnalysis_Jump_Anal_Result*tables,long do_vcgen){struct Cyc_InsertChecks_Env _T0;struct Cyc_List_List*_T1;void*_T2;struct Cyc_Absyn_Decl*_T3;struct Cyc_List_List*_T4;struct Cyc_InsertChecks_Env _T5;struct Cyc_List_List*_T6;void*_T7;struct Cyc_Absyn_Fndecl*_T8;struct Cyc_List_List*_T9;long _TA;unsigned _TB;unsigned _TC;unsigned _TD;unsigned _TE;unsigned _TF;unsigned _T10;struct Cyc___cycFILE*_T11;struct _fat_ptr _T12;struct _fat_ptr _T13;struct Cyc_Int_pa_PrintArg_struct _T14;unsigned _T15;int _T16;struct Cyc_Int_pa_PrintArg_struct _T17;unsigned _T18;int _T19;struct Cyc_Double_pa_PrintArg_struct _T1A;unsigned _T1B;int _T1C;unsigned _T1D;int _T1E;float _T1F;struct Cyc___cycFILE*_T20;struct _fat_ptr _T21;struct _fat_ptr _T22;struct Cyc_Int_pa_PrintArg_struct _T23;unsigned _T24;int _T25;struct Cyc_Int_pa_PrintArg_struct _T26;unsigned _T27;int _T28;struct Cyc_Double_pa_PrintArg_struct _T29;unsigned _T2A;int _T2B;unsigned _T2C;int _T2D;float _T2E;struct Cyc___cycFILE*_T2F;struct _fat_ptr _T30;struct _fat_ptr _T31;struct Cyc_Int_pa_PrintArg_struct _T32;unsigned _T33;int _T34;struct Cyc_Double_pa_PrintArg_struct _T35;unsigned _T36;int _T37;unsigned _T38;int _T39;float _T3A;struct Cyc___cycFILE*_T3B;struct _fat_ptr _T3C;struct _fat_ptr _T3D;struct Cyc_Int_pa_PrintArg_struct _T3E;unsigned _T3F;int _T40;struct Cyc_Double_pa_PrintArg_struct _T41;unsigned _T42;int _T43;unsigned _T44;int _T45;float _T46;struct Cyc___cycFILE*_T47;struct _fat_ptr _T48;struct _fat_ptr _T49;struct Cyc_Int_pa_PrintArg_struct _T4A;unsigned _T4B;int _T4C;struct Cyc_Double_pa_PrintArg_struct _T4D;unsigned _T4E;int _T4F;unsigned _T50;int _T51;float _T52;struct Cyc___cycFILE*_T53;struct _fat_ptr _T54;struct _fat_ptr _T55;struct Cyc_Int_pa_PrintArg_struct _T56;unsigned _T57;int _T58;struct Cyc_Int_pa_PrintArg_struct _T59;unsigned _T5A;int _T5B;struct Cyc_Double_pa_PrintArg_struct _T5C;unsigned _T5D;int _T5E;unsigned _T5F;int _T60;float _T61;struct Cyc___cycFILE*_T62;struct _fat_ptr _T63;struct _fat_ptr _T64;struct Cyc_Int_pa_PrintArg_struct _T65;unsigned _T66;int _T67;struct Cyc_Double_pa_PrintArg_struct _T68;unsigned _T69;int _T6A;unsigned _T6B;int _T6C;float _T6D;struct Cyc___cycFILE*_T6E;struct _fat_ptr _T6F;struct _fat_ptr _T70;struct Cyc_Int_pa_PrintArg_struct _T71;unsigned _T72;int _T73;struct Cyc_Double_pa_PrintArg_struct _T74;unsigned _T75;int _T76;unsigned _T77;int _T78;float _T79;struct Cyc___cycFILE*_T7A;struct _fat_ptr _T7B;struct _fat_ptr _T7C;struct Cyc_Int_pa_PrintArg_struct _T7D;unsigned _T7E;int _T7F;struct Cyc_Double_pa_PrintArg_struct _T80;unsigned _T81;int _T82;unsigned _T83;int _T84;float _T85;struct Cyc___cycFILE*_T86;struct _fat_ptr _T87;struct _fat_ptr _T88;struct Cyc_Int_pa_PrintArg_struct _T89;unsigned _T8A;int _T8B;struct Cyc_Double_pa_PrintArg_struct _T8C;unsigned _T8D;int _T8E;unsigned _T8F;int _T90;float _T91;struct Cyc___cycFILE*_T92;struct _fat_ptr _T93;struct _fat_ptr _T94;struct Cyc___cycFILE*_T95;struct _fat_ptr _T96;struct _fat_ptr _T97;
# 804
Cyc_InsertChecks_reset_counters();{
# 806
struct Cyc_InsertChecks_Env nv=Cyc_InsertChecks_toplevel_env(tables,do_vcgen);
# 811
struct Cyc_Dict_Dict cg=Cyc_Callgraph_compute_callgraph(tds);
# 818
Cyc_InsertChecks_mark_escaped_fns(tds);
# 821
_TLC5: if(tds!=0)goto _TLC3;else{goto _TLC4;}
_TLC3: _T0= nv;_T1= tds;_T2= _T1->hd;_T3= (struct Cyc_Absyn_Decl*)_T2;Cyc_InsertChecks_do_decl(_T0,_T3);_T4= tds;
# 821
tds= _T4->tl;goto _TLC5;_TLC4: {
# 825
struct Cyc_List_List*cg_fds=Cyc_Graph_tsort(cg);{
# 830
struct Cyc_List_List*fds=Cyc_List_rev(cg_fds);_TLC9: if(fds!=0)goto _TLC7;else{goto _TLC8;}
_TLC7: _T5= nv;_T6= fds;_T7= _T6->hd;_T8= (struct Cyc_Absyn_Fndecl*)_T7;Cyc_InsertChecks_do_fndecl(_T5,_T8);_T9= fds;
# 830
fds= _T9->tl;goto _TLC9;_TLC8:;}_TA= Cyc_Flags_verbose;
# 843
if(!_TA)goto _TLCA;_TB= Cyc_InsertChecks_types_eliminated_bounds_checks + Cyc_InsertChecks_simple_eliminated_bounds_checks;_TC= Cyc_InsertChecks_constraints_eliminated_bounds_checks;{
unsigned eliminated_bounds_checks=_TB + _TC;_TD= Cyc_InsertChecks_types_eliminated_null_checks + Cyc_InsertChecks_flow_eliminated_null_checks;_TE= Cyc_InsertChecks_simple_eliminated_null_checks;_TF= _TD + _TE;_T10= Cyc_InsertChecks_constraints_eliminated_null_checks;{
# 847
unsigned eliminated_null_checks=_TF + _T10;_T11= Cyc_stderr;_T12= 
# 849
_tag_fat("****INSERT CHECKS***********************************\n",sizeof(char),54U);_T13= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T11,_T12,_T13);{struct Cyc_Int_pa_PrintArg_struct _T98;_T98.tag= 1;_T15= eliminated_bounds_checks + eliminated_null_checks;_T16= (int)_T15;
# 851
_T98.f1= (unsigned long)_T16;_T14= _T98;}{struct Cyc_Int_pa_PrintArg_struct _T98=_T14;{struct Cyc_Int_pa_PrintArg_struct _T99;_T99.tag= 1;_T18= Cyc_InsertChecks_total_bounds_checks + Cyc_InsertChecks_total_null_checks;_T19= (int)_T18;
_T99.f1= (unsigned long)_T19;_T17= _T99;}{struct Cyc_Int_pa_PrintArg_struct _T99=_T17;{struct Cyc_Double_pa_PrintArg_struct _T9A;_T9A.tag= 3;_T1B= eliminated_bounds_checks + eliminated_null_checks;_T1C= (int)_T1B;_T1D= Cyc_InsertChecks_total_bounds_checks + Cyc_InsertChecks_total_null_checks;_T1E= (int)_T1D;_T1F= 
Cyc_InsertChecks_percent(_T1C,_T1E);_T9A.f1= (double)_T1F;_T1A= _T9A;}{struct Cyc_Double_pa_PrintArg_struct _T9A=_T1A;void*_T9B[3];_T9B[0]= & _T98;_T9B[1]= & _T99;_T9B[2]= & _T9A;_T20= Cyc_stderr;_T21= 
# 850
_tag_fat("eliminated %d out of a total of %d checks (%g%%).\n",sizeof(char),51U);_T22= _tag_fat(_T9B,sizeof(void*),3);Cyc_fprintf(_T20,_T21,_T22);}}}{struct Cyc_Int_pa_PrintArg_struct _T98;_T98.tag= 1;_T24= eliminated_bounds_checks;_T25= (int)_T24;
# 856
_T98.f1= (unsigned long)_T25;_T23= _T98;}{struct Cyc_Int_pa_PrintArg_struct _T98=_T23;{struct Cyc_Int_pa_PrintArg_struct _T99;_T99.tag= 1;_T27= Cyc_InsertChecks_total_bounds_checks;_T28= (int)_T27;_T99.f1= (unsigned long)_T28;_T26= _T99;}{struct Cyc_Int_pa_PrintArg_struct _T99=_T26;{struct Cyc_Double_pa_PrintArg_struct _T9A;_T9A.tag= 3;_T2A= eliminated_bounds_checks;_T2B= (int)_T2A;_T2C= Cyc_InsertChecks_total_bounds_checks;_T2D= (int)_T2C;_T2E= 
Cyc_InsertChecks_percent(_T2B,_T2D);_T9A.f1= (double)_T2E;_T29= _T9A;}{struct Cyc_Double_pa_PrintArg_struct _T9A=_T29;void*_T9B[3];_T9B[0]= & _T98;_T9B[1]= & _T99;_T9B[2]= & _T9A;_T2F= Cyc_stderr;_T30= 
# 855
_tag_fat("eliminated %d out of a total of %d bounds checks (%g%%).\n",sizeof(char),58U);_T31= _tag_fat(_T9B,sizeof(void*),3);Cyc_fprintf(_T2F,_T30,_T31);}}}{struct Cyc_Int_pa_PrintArg_struct _T98;_T98.tag= 1;_T33= Cyc_InsertChecks_types_eliminated_bounds_checks;_T34= (int)_T33;
# 859
_T98.f1= (unsigned long)_T34;_T32= _T98;}{struct Cyc_Int_pa_PrintArg_struct _T98=_T32;{struct Cyc_Double_pa_PrintArg_struct _T99;_T99.tag= 3;_T36= Cyc_InsertChecks_types_eliminated_bounds_checks;_T37= (int)_T36;_T38= Cyc_InsertChecks_total_bounds_checks;_T39= (int)_T38;_T3A= 
Cyc_InsertChecks_percent(_T37,_T39);_T99.f1= (double)_T3A;_T35= _T99;}{struct Cyc_Double_pa_PrintArg_struct _T99=_T35;void*_T9A[2];_T9A[0]= & _T98;_T9A[1]= & _T99;_T3B= Cyc_stderr;_T3C= 
# 858
_tag_fat("\tbounds checks eliminated by types            : %d (%g%%)\n",sizeof(char),59U);_T3D= _tag_fat(_T9A,sizeof(void*),2);Cyc_fprintf(_T3B,_T3C,_T3D);}}{struct Cyc_Int_pa_PrintArg_struct _T98;_T98.tag= 1;_T3F= Cyc_InsertChecks_simple_eliminated_bounds_checks;_T40= (int)_T3F;
# 862
_T98.f1= (unsigned long)_T40;_T3E= _T98;}{struct Cyc_Int_pa_PrintArg_struct _T98=_T3E;{struct Cyc_Double_pa_PrintArg_struct _T99;_T99.tag= 3;_T42= Cyc_InsertChecks_simple_eliminated_bounds_checks;_T43= (int)_T42;_T44= Cyc_InsertChecks_total_bounds_checks;_T45= (int)_T44;_T46= 
Cyc_InsertChecks_percent(_T43,_T45);_T99.f1= (double)_T46;_T41= _T99;}{struct Cyc_Double_pa_PrintArg_struct _T99=_T41;void*_T9A[2];_T9A[0]= & _T98;_T9A[1]= & _T99;_T47= Cyc_stderr;_T48= 
# 861
_tag_fat("\tbounds checks eliminated by simple prover    : %d (%g%%)\n",sizeof(char),59U);_T49= _tag_fat(_T9A,sizeof(void*),2);Cyc_fprintf(_T47,_T48,_T49);}}{struct Cyc_Int_pa_PrintArg_struct _T98;_T98.tag= 1;_T4B= Cyc_InsertChecks_constraints_eliminated_bounds_checks;_T4C= (int)_T4B;
# 865
_T98.f1= (unsigned long)_T4C;_T4A= _T98;}{struct Cyc_Int_pa_PrintArg_struct _T98=_T4A;{struct Cyc_Double_pa_PrintArg_struct _T99;_T99.tag= 3;_T4E= Cyc_InsertChecks_constraints_eliminated_bounds_checks;_T4F= (int)_T4E;_T50= Cyc_InsertChecks_total_bounds_checks;_T51= (int)_T50;_T52= 
Cyc_InsertChecks_percent(_T4F,_T51);_T99.f1= (double)_T52;_T4D= _T99;}{struct Cyc_Double_pa_PrintArg_struct _T99=_T4D;void*_T9A[2];_T9A[0]= & _T98;_T9A[1]= & _T99;_T53= Cyc_stderr;_T54= 
# 864
_tag_fat("\tbounds checks eliminated by constraint solver: %d (%g%%)\n",sizeof(char),59U);_T55= _tag_fat(_T9A,sizeof(void*),2);Cyc_fprintf(_T53,_T54,_T55);}}{struct Cyc_Int_pa_PrintArg_struct _T98;_T98.tag= 1;_T57= eliminated_null_checks;_T58= (int)_T57;
# 868
_T98.f1= (unsigned long)_T58;_T56= _T98;}{struct Cyc_Int_pa_PrintArg_struct _T98=_T56;{struct Cyc_Int_pa_PrintArg_struct _T99;_T99.tag= 1;_T5A= Cyc_InsertChecks_total_null_checks;_T5B= (int)_T5A;_T99.f1= (unsigned long)_T5B;_T59= _T99;}{struct Cyc_Int_pa_PrintArg_struct _T99=_T59;{struct Cyc_Double_pa_PrintArg_struct _T9A;_T9A.tag= 3;_T5D= eliminated_null_checks;_T5E= (int)_T5D;_T5F= Cyc_InsertChecks_total_null_checks;_T60= (int)_T5F;_T61= 
Cyc_InsertChecks_percent(_T5E,_T60);_T9A.f1= (double)_T61;_T5C= _T9A;}{struct Cyc_Double_pa_PrintArg_struct _T9A=_T5C;void*_T9B[3];_T9B[0]= & _T98;_T9B[1]= & _T99;_T9B[2]= & _T9A;_T62= Cyc_stderr;_T63= 
# 867
_tag_fat("eliminated %d out of a total of %d null checks (%g%%).\n",sizeof(char),56U);_T64= _tag_fat(_T9B,sizeof(void*),3);Cyc_fprintf(_T62,_T63,_T64);}}}{struct Cyc_Int_pa_PrintArg_struct _T98;_T98.tag= 1;_T66= Cyc_InsertChecks_types_eliminated_null_checks;_T67= (int)_T66;
# 871
_T98.f1= (unsigned long)_T67;_T65= _T98;}{struct Cyc_Int_pa_PrintArg_struct _T98=_T65;{struct Cyc_Double_pa_PrintArg_struct _T99;_T99.tag= 3;_T69= Cyc_InsertChecks_types_eliminated_null_checks;_T6A= (int)_T69;_T6B= Cyc_InsertChecks_total_null_checks;_T6C= (int)_T6B;_T6D= Cyc_InsertChecks_percent(_T6A,_T6C);_T99.f1= (double)_T6D;_T68= _T99;}{struct Cyc_Double_pa_PrintArg_struct _T99=_T68;void*_T9A[2];_T9A[0]= & _T98;_T9A[1]= & _T99;_T6E= Cyc_stderr;_T6F= 
# 870
_tag_fat("\tnull checks eliminated by types              : %d (%g%%)\n",sizeof(char),59U);_T70= _tag_fat(_T9A,sizeof(void*),2);Cyc_fprintf(_T6E,_T6F,_T70);}}{struct Cyc_Int_pa_PrintArg_struct _T98;_T98.tag= 1;_T72= Cyc_InsertChecks_flow_eliminated_null_checks;_T73= (int)_T72;
# 873
_T98.f1= (unsigned long)_T73;_T71= _T98;}{struct Cyc_Int_pa_PrintArg_struct _T98=_T71;{struct Cyc_Double_pa_PrintArg_struct _T99;_T99.tag= 3;_T75= Cyc_InsertChecks_flow_eliminated_null_checks;_T76= (int)_T75;_T77= Cyc_InsertChecks_total_null_checks;_T78= (int)_T77;_T79= Cyc_InsertChecks_percent(_T76,_T78);_T99.f1= (double)_T79;_T74= _T99;}{struct Cyc_Double_pa_PrintArg_struct _T99=_T74;void*_T9A[2];_T9A[0]= & _T98;_T9A[1]= & _T99;_T7A= Cyc_stderr;_T7B= 
# 872
_tag_fat("\tnull checks eliminated by flow analysis      : %d (%g%%)\n",sizeof(char),59U);_T7C= _tag_fat(_T9A,sizeof(void*),2);Cyc_fprintf(_T7A,_T7B,_T7C);}}{struct Cyc_Int_pa_PrintArg_struct _T98;_T98.tag= 1;_T7E= Cyc_InsertChecks_simple_eliminated_null_checks;_T7F= (int)_T7E;
# 875
_T98.f1= (unsigned long)_T7F;_T7D= _T98;}{struct Cyc_Int_pa_PrintArg_struct _T98=_T7D;{struct Cyc_Double_pa_PrintArg_struct _T99;_T99.tag= 3;_T81= Cyc_InsertChecks_simple_eliminated_null_checks;_T82= (int)_T81;_T83= Cyc_InsertChecks_total_null_checks;_T84= (int)_T83;_T85= 
Cyc_InsertChecks_percent(_T82,_T84);_T99.f1= (double)_T85;_T80= _T99;}{struct Cyc_Double_pa_PrintArg_struct _T99=_T80;void*_T9A[2];_T9A[0]= & _T98;_T9A[1]= & _T99;_T86= Cyc_stderr;_T87= 
# 874
_tag_fat("\tnull checks eliminated by simple prover      : %d (%g%%)\n",sizeof(char),59U);_T88= _tag_fat(_T9A,sizeof(void*),2);Cyc_fprintf(_T86,_T87,_T88);}}{struct Cyc_Int_pa_PrintArg_struct _T98;_T98.tag= 1;_T8A= Cyc_InsertChecks_constraints_eliminated_null_checks;_T8B= (int)_T8A;
# 878
_T98.f1= (unsigned long)_T8B;_T89= _T98;}{struct Cyc_Int_pa_PrintArg_struct _T98=_T89;{struct Cyc_Double_pa_PrintArg_struct _T99;_T99.tag= 3;_T8D= Cyc_InsertChecks_constraints_eliminated_null_checks;_T8E= (int)_T8D;_T8F= Cyc_InsertChecks_total_null_checks;_T90= (int)_T8F;_T91= 
Cyc_InsertChecks_percent(_T8E,_T90);_T99.f1= (double)_T91;_T8C= _T99;}{struct Cyc_Double_pa_PrintArg_struct _T99=_T8C;void*_T9A[2];_T9A[0]= & _T98;_T9A[1]= & _T99;_T92= Cyc_stderr;_T93= 
# 877
_tag_fat("\tnull checks eliminated by constraint solver  : %d (%g%%)\n",sizeof(char),59U);_T94= _tag_fat(_T9A,sizeof(void*),2);Cyc_fprintf(_T92,_T93,_T94);}}_T95= Cyc_stderr;_T96= 
# 880
_tag_fat("****************************************************\n",sizeof(char),54U);_T97= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T95,_T96,_T97);}}goto _TLCB;_TLCA: _TLCB:;}}}
