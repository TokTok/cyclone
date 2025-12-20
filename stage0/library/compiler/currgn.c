#include <cyc_include.h>
 struct Cyc_Core_Opt{void*v;};struct Cyc_List_List{void*hd;struct Cyc_List_List*tl;};
# 79 "./cyclone/library/std/list.h"
extern struct Cyc_List_List*Cyc_List_map(void*(*)(void*),struct Cyc_List_List*);struct Cyc_AssnDef_ExistAssnFn;struct _union_Nmspace_Abs_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_Rel_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_C_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_Loc_n{int tag;int val;};union Cyc_Absyn_Nmspace{struct _union_Nmspace_Abs_n Abs_n;struct _union_Nmspace_Rel_n Rel_n;struct _union_Nmspace_C_n C_n;struct _union_Nmspace_Loc_n Loc_n;};struct _tuple0{union Cyc_Absyn_Nmspace f0;struct _fat_ptr*f1;};
# 148 "cyclone/library/compiler/absyn.h"
enum Cyc_Absyn_Scope{Cyc_Absyn_Static =0U,Cyc_Absyn_Abstract =1U,Cyc_Absyn_Public =2U,Cyc_Absyn_Extern =3U,Cyc_Absyn_ExternC =4U,Cyc_Absyn_Register =5U,Cyc_Absyn_Noreturn =6U};struct Cyc_Absyn_Tqual{long print_const: 1;long q_volatile: 1;long q_restrict: 1;long real_const: 1;unsigned loc;};
# 186
enum Cyc_Absyn_AggrKind{Cyc_Absyn_StructA =0U,Cyc_Absyn_UnionA =1U};
# 210 "cyclone/library/compiler/absyn.h"
enum Cyc_Absyn_AliasHint{Cyc_Absyn_UniqueHint =0U,Cyc_Absyn_RefcntHint =1U,Cyc_Absyn_RestrictedHint =2U,Cyc_Absyn_NoHint =3U};
# 217
enum Cyc_Absyn_KindQual{Cyc_Absyn_AnyKind =0U,Cyc_Absyn_MemKind =1U,Cyc_Absyn_BoxKind =2U,Cyc_Absyn_EffKind =3U,Cyc_Absyn_IntKind =4U,Cyc_Absyn_BoolKind =5U,Cyc_Absyn_PtrBndKind =6U,Cyc_Absyn_AqualKind =7U};struct Cyc_Absyn_Kind{enum Cyc_Absyn_KindQual kind;enum Cyc_Absyn_AliasHint aliashint;};struct Cyc_Absyn_Tvar{struct _fat_ptr*name;int identity;void*kind;void*aquals_bound;};struct Cyc_Absyn_PtrLoc{unsigned ptr_loc;unsigned rgn_loc;unsigned zt_loc;};struct Cyc_Absyn_PtrAtts{void*eff;void*nullable;void*bounds;void*zero_term;struct Cyc_Absyn_PtrLoc*ptrloc;void*autoreleased;void*aqual;};struct Cyc_Absyn_PtrInfo{void*elt_type;struct Cyc_Absyn_Tqual elt_tq;struct Cyc_Absyn_PtrAtts ptr_atts;};struct Cyc_Absyn_VarargInfo{struct _fat_ptr*name;struct Cyc_Absyn_Tqual tq;void*type;long inject;};struct Cyc_Absyn_FnInfo{struct Cyc_List_List*tvars;void*effect;struct Cyc_Absyn_Tqual ret_tqual;void*ret_type;struct Cyc_List_List*args;long c_varargs;struct Cyc_Absyn_VarargInfo*cyc_varargs;struct Cyc_List_List*qual_bnd;struct Cyc_List_List*attributes;struct Cyc_Absyn_Exp*checks_clause;struct Cyc_AssnDef_ExistAssnFn*checks_assn;struct Cyc_Absyn_Exp*requires_clause;struct Cyc_AssnDef_ExistAssnFn*requires_assn;struct Cyc_Absyn_Exp*ensures_clause;struct Cyc_AssnDef_ExistAssnFn*ensures_assn;struct Cyc_Absyn_Exp*throws_clause;struct Cyc_AssnDef_ExistAssnFn*throws_assn;struct Cyc_Absyn_Vardecl*return_value;struct Cyc_List_List*arg_vardecls;struct Cyc_List_List*effconstr;};struct Cyc_Absyn_ArrayInfo{void*elt_type;struct Cyc_Absyn_Tqual tq;struct Cyc_Absyn_Exp*num_elts;void*zero_term;unsigned zt_loc;};struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct{int tag;struct Cyc_Absyn_Aggrdecl*f1;};struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct{int tag;struct Cyc_Absyn_Datatypedecl*f1;};struct Cyc_Absyn_TypeDecl{void*r;unsigned loc;};struct Cyc_Absyn_SingleConstraint_Absyn_EffConstraint_struct{int tag;void*f1;};struct Cyc_Absyn_DisjointConstraint_Absyn_EffConstraint_struct{int tag;void*f1;void*f2;};struct Cyc_Absyn_SubsetConstraint_Absyn_EffConstraint_struct{int tag;void*f1;void*f2;};struct Cyc_Absyn_AppType_Absyn_Type_struct{int tag;void*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Evar_Absyn_Type_struct{int tag;struct Cyc_Core_Opt*f1;void*f2;int f3;struct Cyc_Core_Opt*f4;};struct Cyc_Absyn_VarType_Absyn_Type_struct{int tag;struct Cyc_Absyn_Tvar*f1;};struct Cyc_Absyn_Cvar_Absyn_Type_struct{int tag;struct Cyc_Core_Opt*f1;void*f2;int f3;void*f4;const char*f5;const char*f6;long f7;};struct Cyc_Absyn_PointerType_Absyn_Type_struct{int tag;struct Cyc_Absyn_PtrInfo f1;};struct Cyc_Absyn_ArrayType_Absyn_Type_struct{int tag;struct Cyc_Absyn_ArrayInfo f1;};struct Cyc_Absyn_FnType_Absyn_Type_struct{int tag;struct Cyc_Absyn_FnInfo f1;};struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct{int tag;enum Cyc_Absyn_AggrKind f1;long f2;struct Cyc_List_List*f3;};struct Cyc_Absyn_TypedefType_Absyn_Type_struct{int tag;struct _tuple0*f1;struct Cyc_List_List*f2;struct Cyc_Absyn_Typedefdecl*f3;void*f4;};struct Cyc_Absyn_ValueofType_Absyn_Type_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct{int tag;struct Cyc_Absyn_TypeDecl*f1;void**f2;};struct Cyc_Absyn_TypeofType_Absyn_Type_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_SubsetType_Absyn_Type_struct{int tag;struct Cyc_Absyn_Vardecl*f1;struct Cyc_Absyn_Exp*f2;struct Cyc_AssnDef_ExistAssnFn*f3;};
# 596
enum Cyc_Absyn_Primop{Cyc_Absyn_Plus =0U,Cyc_Absyn_Times =1U,Cyc_Absyn_Minus =2U,Cyc_Absyn_Div =3U,Cyc_Absyn_Mod =4U,Cyc_Absyn_Eq =5U,Cyc_Absyn_Neq =6U,Cyc_Absyn_Gt =7U,Cyc_Absyn_Lt =8U,Cyc_Absyn_Gte =9U,Cyc_Absyn_Lte =10U,Cyc_Absyn_Not =11U,Cyc_Absyn_Bitnot =12U,Cyc_Absyn_Bitand =13U,Cyc_Absyn_Bitor =14U,Cyc_Absyn_Bitxor =15U,Cyc_Absyn_Bitlshift =16U,Cyc_Absyn_Bitlrshift =17U,Cyc_Absyn_Numelts =18U,Cyc_Absyn_Tagof =19U,Cyc_Absyn_UDiv =20U,Cyc_Absyn_UMod =21U,Cyc_Absyn_UGt =22U,Cyc_Absyn_ULt =23U,Cyc_Absyn_UGte =24U,Cyc_Absyn_ULte =25U};struct Cyc_Absyn_PrimopOpt{enum Cyc_Absyn_Primop v;};
# 631
enum Cyc_Absyn_Incrementor{Cyc_Absyn_PreInc =0U,Cyc_Absyn_PostInc =1U,Cyc_Absyn_PreDec =2U,Cyc_Absyn_PostDec =3U};struct Cyc_Absyn_VarargCallInfo{int num_varargs;struct Cyc_List_List*injectors;struct Cyc_Absyn_VarargInfo*vai;};
# 656
enum Cyc_Absyn_Coercion{Cyc_Absyn_Unknown_coercion =0U,Cyc_Absyn_No_coercion =1U,Cyc_Absyn_Null_to_NonNull =2U,Cyc_Absyn_Subset_coercion =3U,Cyc_Absyn_Other_coercion =4U};
# 671
enum Cyc_Absyn_MallocKind{Cyc_Absyn_Malloc =0U,Cyc_Absyn_Calloc =1U,Cyc_Absyn_Vmalloc =2U};struct Cyc_Absyn_MallocInfo{enum Cyc_Absyn_MallocKind mknd;struct Cyc_Absyn_Exp*rgn;struct Cyc_Absyn_Exp*aqual;void**elt_type;struct Cyc_Absyn_Exp*num_elts;long fat_result;long inline_call;};struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct{int tag;enum Cyc_Absyn_Primop f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_PrimopOpt*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;enum Cyc_Absyn_Incrementor f2;};struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_List_List*f2;struct Cyc_Absyn_VarargCallInfo*f3;long f4;};struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;long f2;};struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct{int tag;void*f1;struct Cyc_Absyn_Exp*f2;long f3;enum Cyc_Absyn_Coercion f4;};struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct{int tag;void*f1;};struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct{int tag;void*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _fat_ptr*f2;long f3;long f4;};struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _fat_ptr*f2;long f3;long f4;};struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct _tuple8{struct _fat_ptr*f0;struct Cyc_Absyn_Tqual f1;void*f2;};struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct{int tag;struct _tuple8*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct{int tag;struct Cyc_List_List*f1;};struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Vardecl*f1;struct Cyc_Absyn_Exp*f2;struct Cyc_Absyn_Exp*f3;long f4;};struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;void*f2;long f3;};struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct{int tag;struct _tuple0*f1;struct Cyc_List_List*f2;struct Cyc_List_List*f3;struct Cyc_Absyn_Aggrdecl*f4;};struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct{int tag;void*f1;long f2;struct Cyc_List_List*f3;};struct Cyc_Absyn_Datatype_e_Absyn_Raw_exp_struct{int tag;struct Cyc_List_List*f1;struct Cyc_Absyn_Datatypedecl*f2;struct Cyc_Absyn_Datatypefield*f3;};struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_MallocInfo f1;};struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Core_Opt*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Stmt*f1;};struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _fat_ptr*f2;};struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct{int tag;void*f1;};struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;long f2;long f3;};struct Cyc_Absyn_Assert_false_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Exp{void*topt;void*r;unsigned loc;void*annot;};struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Stmt*f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Stmt*f2;struct Cyc_Absyn_Stmt*f3;};struct _tuple9{struct Cyc_Absyn_Exp*f0;struct Cyc_Absyn_Stmt*f1;};struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct{int tag;struct _tuple9 f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _tuple9 f2;struct _tuple9 f3;struct Cyc_Absyn_Stmt*f4;};struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_List_List*f2;void*f3;};struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_List_List*f1;struct Cyc_Absyn_Switch_clause**f2;};struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Decl*f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct{int tag;struct _fat_ptr*f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Stmt*f1;struct _tuple9 f2;};struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Stmt*f1;struct Cyc_List_List*f2;void*f3;};struct Cyc_Absyn_Stmt{void*r;unsigned loc;void*annot;};struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct{int tag;struct Cyc_Absyn_Vardecl*f1;struct Cyc_Absyn_Pat*f2;};struct Cyc_Absyn_AliasVar_p_Absyn_Raw_pat_struct{int tag;struct Cyc_Absyn_Tvar*f1;struct Cyc_Absyn_Vardecl*f2;};struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct{int tag;struct Cyc_Absyn_Vardecl*f1;struct Cyc_Absyn_Pat*f2;};struct Cyc_Absyn_TagInt_p_Absyn_Raw_pat_struct{int tag;struct Cyc_Absyn_Tvar*f1;struct Cyc_Absyn_Vardecl*f2;};struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct{int tag;struct Cyc_Absyn_Pat*f1;};struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct{int tag;void*f1;long f2;struct Cyc_List_List*f3;struct Cyc_List_List*f4;long f5;};struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct{int tag;struct Cyc_Absyn_Datatypedecl*f1;struct Cyc_Absyn_Datatypefield*f2;struct Cyc_List_List*f3;long f4;};struct Cyc_Absyn_UnknownCall_p_Absyn_Raw_pat_struct{int tag;struct _tuple0*f1;struct Cyc_List_List*f2;long f3;};struct Cyc_Absyn_Exp_p_Absyn_Raw_pat_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Pat{void*r;void*topt;unsigned loc;};struct Cyc_Absyn_Switch_clause{struct Cyc_Absyn_Pat*pattern;struct Cyc_Core_Opt*pat_vars;struct Cyc_Absyn_Exp*where_clause;struct Cyc_Absyn_Stmt*body;unsigned loc;};struct Cyc_Absyn_Vardecl{enum Cyc_Absyn_Scope sc;struct _tuple0*name;unsigned varloc;struct Cyc_Absyn_Tqual tq;void*type;struct Cyc_Absyn_Exp*initializer;void*rgn;struct Cyc_List_List*attributes;long escapes;long is_proto;struct Cyc_Absyn_Exp*rename;};struct Cyc_Absyn_Fndecl{enum Cyc_Absyn_Scope sc;long is_inline;struct _tuple0*name;struct Cyc_Absyn_Stmt*body;struct Cyc_Absyn_FnInfo i;void*cached_type;struct Cyc_Core_Opt*param_vardecls;struct Cyc_Absyn_Vardecl*fn_vardecl;enum Cyc_Absyn_Scope orig_scope;long escapes;};struct Cyc_Absyn_Aggrfield{struct _fat_ptr*name;struct Cyc_Absyn_Tqual tq;void*type;struct Cyc_Absyn_Exp*width;struct Cyc_List_List*attributes;struct Cyc_Absyn_Exp*requires_clause;};struct Cyc_Absyn_AggrdeclImpl{struct Cyc_List_List*exist_vars;struct Cyc_List_List*qual_bnd;struct Cyc_List_List*fields;long tagged;struct Cyc_List_List*effconstr;};struct Cyc_Absyn_Aggrdecl{enum Cyc_Absyn_AggrKind kind;enum Cyc_Absyn_Scope sc;struct _tuple0*name;struct Cyc_List_List*tvs;struct Cyc_Absyn_AggrdeclImpl*impl;struct Cyc_List_List*attributes;long expected_mem_kind;};struct Cyc_Absyn_Datatypefield{struct _tuple0*name;struct Cyc_List_List*typs;unsigned loc;enum Cyc_Absyn_Scope sc;};struct Cyc_Absyn_Datatypedecl{enum Cyc_Absyn_Scope sc;struct _tuple0*name;struct Cyc_List_List*tvs;struct Cyc_Core_Opt*fields;long is_extensible;};struct Cyc_Absyn_Typedefdecl{struct _tuple0*name;struct Cyc_Absyn_Tqual tq;struct Cyc_List_List*tvs;struct Cyc_Core_Opt*kind;void*defn;struct Cyc_List_List*atts;long extern_c;};struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Fndecl*f1;};struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Pat*f1;struct Cyc_Core_Opt*f2;struct Cyc_Absyn_Exp*f3;void*f4;};struct Cyc_Absyn_Letv_d_Absyn_Raw_decl_struct{int tag;struct Cyc_List_List*f1;};struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Tvar*f1;struct Cyc_Absyn_Vardecl*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Aggrdecl*f1;};struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Datatypedecl*f1;};struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Typedefdecl*f1;};struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct{int tag;struct _fat_ptr*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct{int tag;struct _tuple0*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Decl{void*r;unsigned loc;};
# 1048
int Cyc_Absyn_tvar_cmp(struct Cyc_Absyn_Tvar*,struct Cyc_Absyn_Tvar*);
# 1066
void*Cyc_Absyn_compress(void*);
# 1101
extern void*Cyc_Absyn_var_type(struct Cyc_Absyn_Tvar*);
# 29 "cyclone/library/compiler/currgn.h"
extern struct _fat_ptr Cyc_CurRgn_curr_rgn_name;
# 34 "cyclone/library/compiler/kinds.h"
extern struct Cyc_Absyn_Kind Cyc_Kinds_ek;
# 85 "cyclone/library/compiler/kinds.h"
void*Cyc_Kinds_kind_to_bound(struct Cyc_Absyn_Kind*);
# 39 "cyclone/library/compiler/tcutil.h"
long Cyc_Tcutil_is_function_type(void*);
# 92
void*Cyc_Tcutil_copy_type(void*);
# 131
void*Cyc_Tcutil_substitute(struct Cyc_List_List*,void*);
void*Cyc_Tcutil_substitute_nofun(struct Cyc_List_List*,void*);
# 210
int Cyc_Tcutil_new_tvar_id (void);
# 51 "cyclone/library/compiler/warn.h"
void*Cyc_Warn_impos(struct _fat_ptr,struct _fat_ptr);struct Cyc_Warn_String_Warn_Warg_struct{int tag;struct _fat_ptr f1;};struct Cyc_Warn_Tvar_Warn_Warg_struct{int tag;struct Cyc_Absyn_Tvar*f1;};
# 79
void Cyc_Warn_err2(unsigned,struct _fat_ptr);
# 29 "./cyclone/library/std/assert.h"
extern void*Cyc___assert_fail(struct _fat_ptr,struct _fat_ptr,unsigned);
# 34 "cyclone/library/compiler/currgn.cyc"
static struct Cyc_Absyn_Tvar*Cyc_CurRgn_curr_tvar=0;
static void*Cyc_CurRgn_curr_rgn_typ=0;static char _TmpG0[3U]="`C";
# 37
struct _fat_ptr Cyc_CurRgn_curr_rgn_name={(unsigned char*)_TmpG0,(unsigned char*)_TmpG0,(unsigned char*)_TmpG0 + 3U};
# 39
struct Cyc_Absyn_Tvar*Cyc_CurRgn_curr_rgn_tvar (void){struct Cyc_Absyn_Tvar*_T0;struct _fat_ptr*_T1;struct Cyc_Absyn_Kind*_T2;struct Cyc_Absyn_Kind*_T3;struct Cyc_Absyn_Tvar*_T4;
if(Cyc_CurRgn_curr_tvar!=0)goto _TL0;{struct Cyc_Absyn_Tvar*_T5=_cycalloc(sizeof(struct Cyc_Absyn_Tvar));{struct _fat_ptr*_T6=_cycalloc(sizeof(struct _fat_ptr));
# 42
*_T6= Cyc_CurRgn_curr_rgn_name;_T1= (struct _fat_ptr*)_T6;}_T5->name= _T1;({__typeof__(Cyc_Tcutil_new_tvar_id())_T6=Cyc_Tcutil_new_tvar_id();_T5->identity= _T6;});_T2= & Cyc_Kinds_ek;_T3= (struct Cyc_Absyn_Kind*)_T2;({__typeof__(Cyc_Kinds_kind_to_bound(_T3))_T6=Cyc_Kinds_kind_to_bound(_T3);_T5->kind= _T6;});_T5->aquals_bound= 0;_T0= (struct Cyc_Absyn_Tvar*)_T5;}
# 41
Cyc_CurRgn_curr_tvar= _T0;
# 43
Cyc_CurRgn_curr_rgn_typ= Cyc_Absyn_var_type(Cyc_CurRgn_curr_tvar);goto _TL1;_TL0: _TL1: _T4= 
# 45
_check_null(Cyc_CurRgn_curr_tvar);return _T4;}
# 48
void*Cyc_CurRgn_curr_rgn_type (void){struct Cyc_Absyn_Tvar*_T0;void*_T1;
Cyc_CurRgn_curr_rgn_tvar();_T0= 
_check_null(Cyc_CurRgn_curr_tvar);Cyc_CurRgn_curr_rgn_typ= Cyc_Absyn_var_type(_T0);_T1= Cyc_CurRgn_curr_rgn_typ;
return _T1;}struct _tuple13{struct Cyc_Absyn_Tvar*f0;void*f1;};
# 54
void Cyc_CurRgn_subst_inst(struct Cyc_List_List*inst,struct Cyc_Absyn_Tvar*tv,void*t){struct Cyc_List_List*_T0;void*_T1;struct Cyc_Absyn_Tvar**_T2;void**_T3;struct Cyc_Absyn_Tvar**_T4;struct Cyc_Absyn_Tvar*_T5;struct Cyc_Absyn_Tvar*_T6;int _T7;void**_T8;struct Cyc_List_List*_T9;
_TL5: if(inst!=0)goto _TL3;else{goto _TL4;}
_TL3: _T0= inst;_T1= _T0->hd;{struct _tuple13*_TA=(struct _tuple13*)_T1;void*_TB;void*_TC;{struct _tuple13 _TD=*_TA;_T2= & _TA->f0;_TC= (struct Cyc_Absyn_Tvar**)_T2;_T3= & _TA->f1;_TB= (void**)_T3;}{struct Cyc_Absyn_Tvar**tvi=(struct Cyc_Absyn_Tvar**)_TC;void**ti=(void**)_TB;_T4= tvi;_T5= *_T4;_T6= tv;_T7= 
Cyc_Absyn_tvar_cmp(_T5,_T6);if(_T7!=0)goto _TL6;_T8= ti;
*_T8= t;
return;_TL6:;}}_T9= inst;goto _TL5;_TL4:;}
# 67
static struct _tuple8*Cyc_CurRgn_argtype(struct _tuple8*arg){struct _tuple8*_T0;void*_T1;int*_T2;int _T3;void*_T4;struct Cyc_Absyn_PtrInfo _T5;long _T6;struct _tuple8*_T7;struct _tuple8*_T8;int*_T9;int _TA;struct Cyc_Absyn_PtrInfo _TB;int*_TC;int _TD;struct Cyc_Absyn_FnType_Absyn_Type_struct*_TE;struct Cyc_List_List**_TF;struct Cyc_List_List**_T10;struct Cyc_List_List**_T11;struct Cyc_List_List*_T12;struct _tuple8*_T13;int(*_T14)(struct _fat_ptr,struct _fat_ptr);void*(*_T15)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T16;struct _fat_ptr _T17;int(*_T18)(struct _fat_ptr,struct _fat_ptr);void*(*_T19)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T1A;struct _fat_ptr _T1B;void*_T1C;struct Cyc_Absyn_Tqual _T1D;struct _fat_ptr*_T1E;_T0= arg;{struct _tuple8 _T1F=*_T0;_T1E= _T1F.f0;_T1D= _T1F.f1;_T1C= _T1F.f2;}{struct _fat_ptr*vopt=_T1E;struct Cyc_Absyn_Tqual tq=_T1D;void*t=_T1C;{void*_T1F;_T1= t;_T2= (int*)_T1;_T3= *_T2;if(_T3!=4)goto _TL8;_T4= t;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T20=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T4;_T5= _T20->f1;_T1F= _T5.elt_type;}{void*t1=_T1F;_T6= 
# 71
Cyc_Tcutil_is_function_type(t1);if(_T6)goto _TLA;else{goto _TLC;}
_TLC: _T7= arg;return _T7;_TLA: goto _LL3;}_TL8: _T8= arg;
# 75
return _T8;_LL3:;}{
# 77
void*t2=Cyc_Tcutil_copy_type(t);
void*_T1F=Cyc_Absyn_compress(t2);void*_T20;_T9= (int*)_T1F;_TA= *_T9;if(_TA!=4)goto _TLD;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T21=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T1F;_TB= _T21->f1;_T20= _TB.elt_type;}{void*t1=_T20;
# 80
void*_T21=Cyc_Absyn_compress(t1);void*_T22;_TC= (int*)_T21;_TD= *_TC;if(_TD!=6)goto _TLF;{struct Cyc_Absyn_FnType_Absyn_Type_struct*_T23=(struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T21;_TE= (struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T21;_TF= & _TE->f1.tvars;_T22= (struct Cyc_List_List**)_TF;}{struct Cyc_List_List**tvars=(struct Cyc_List_List**)_T22;_T10= tvars;{
# 84
struct Cyc_List_List*tvars2=*_T10;_T11= tvars;{struct Cyc_List_List*_T23=_cycalloc(sizeof(struct Cyc_List_List));
({__typeof__(_check_null(Cyc_CurRgn_curr_tvar))_T24=_check_null(Cyc_CurRgn_curr_tvar);_T23->hd= _T24;});_T23->tl= tvars2;_T12= (struct Cyc_List_List*)_T23;}*_T11= _T12;{struct _tuple8*_T23=_cycalloc(sizeof(struct _tuple8));
_T23->f0= vopt;_T23->f1= tq;_T23->f2= t2;_T13= (struct _tuple8*)_T23;}return _T13;}}_TLF: _T15= Cyc_Warn_impos;{
# 88
int(*_T23)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T15;_T14= _T23;}_T16= _tag_fat("internal compiler error: not a function type",sizeof(char),45U);_T17= _tag_fat(0U,sizeof(void*),0);_T14(_T16,_T17);;}goto _TLE;_TLD: _T19= Cyc_Warn_impos;{
# 91
int(*_T21)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T19;_T18= _T21;}_T1A= _tag_fat("internal compiler error: not a pointer type",sizeof(char),44U);_T1B= _tag_fat(0U,sizeof(void*),0);_T18(_T1A,_T1B);_TLE:;}}}
# 96
void*Cyc_CurRgn_instantiate(void*fntype,void*currgn){void*_T0;int*_T1;int _T2;void*_T3;struct Cyc_Absyn_FnInfo _T4;struct Cyc_Absyn_FnInfo _T5;struct Cyc_Absyn_FnInfo _T6;struct Cyc_Absyn_FnInfo _T7;void*_T8;struct Cyc_Absyn_FnType_Absyn_Type_struct*_T9;struct Cyc_List_List**_TA;struct Cyc_List_List**_TB;struct Cyc_List_List**_TC;struct Cyc_List_List*(*_TD)(struct _tuple8*(*)(struct _tuple8*),struct Cyc_List_List*);struct Cyc_List_List*(*_TE)(void*(*)(void*),struct Cyc_List_List*);struct Cyc_List_List**_TF;struct Cyc_List_List*_T10;struct Cyc_List_List*_T11;struct _tuple13*_T12;struct Cyc_List_List*_T13;void*_T14;int*_T15;int _T16;void*_T17;struct Cyc_Absyn_FnInfo _T18;void*_T19;struct Cyc_Absyn_FnType_Absyn_Type_struct*_T1A;struct Cyc_List_List**_T1B;struct Cyc_List_List**_T1C;struct Cyc_List_List**_T1D;void*_T1E;void*_T1F;void*_T20;void*_T21;struct Cyc_Absyn_Tqual _T22;void*_T23;struct Cyc_List_List*_T24;_T0= fntype;_T1= (int*)_T0;_T2= *_T1;if(_T2!=6)goto _TL11;_T3= fntype;{struct Cyc_Absyn_FnType_Absyn_Type_struct*_T25=(struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T3;_T4= _T25->f1;_T24= _T4.tvars;_T5= _T25->f1;_T23= _T5.effect;_T6= _T25->f1;_T22= _T6.ret_tqual;_T7= _T25->f1;_T21= _T7.ret_type;_T8= fntype;_T9= (struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T8;_TA= & _T9->f1.args;_T20= (struct Cyc_List_List**)_TA;}{struct Cyc_List_List*tvars=_T24;void*eff=_T23;struct Cyc_Absyn_Tqual res_tq=_T22;void*res_typ=_T21;struct Cyc_List_List**args_info=(struct Cyc_List_List**)_T20;_TB= args_info;{
# 102
struct Cyc_List_List*old_args_info=*_TB;_TC= args_info;_TE= Cyc_List_map;{
# 104
struct Cyc_List_List*(*_T25)(struct _tuple8*(*)(struct _tuple8*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _tuple8*(*)(struct _tuple8*),struct Cyc_List_List*))_TE;_TD= _T25;}_TF= args_info;_T10= *_TF;({__typeof__(_TD(Cyc_CurRgn_argtype,_T10))_T25=_TD(Cyc_CurRgn_argtype,_T10);*_TC= _T25;});{
# 106
struct Cyc_List_List*inst;inst= _cycalloc(sizeof(struct Cyc_List_List));_T11= inst;{struct _tuple13*_T25=_cycalloc(sizeof(struct _tuple13));({__typeof__(_check_null(Cyc_CurRgn_curr_tvar))_T26=_check_null(Cyc_CurRgn_curr_tvar);_T25->f0= _T26;});_T25->f1= currgn;_T12= (struct _tuple13*)_T25;}_T11->hd= _T12;_T13= inst;_T13->tl= 0;{
void*fntype2=Cyc_Tcutil_substitute(inst,fntype);{void*_T25;struct Cyc_List_List*_T26;_T14= fntype2;_T15= (int*)_T14;_T16= *_T15;if(_T16!=6)goto _TL13;_T17= fntype2;{struct Cyc_Absyn_FnType_Absyn_Type_struct*_T27=(struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T17;_T18= _T27->f1;_T26= _T18.tvars;_T19= fntype2;_T1A= (struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T19;_T1B= & _T1A->f1.args;_T25= (struct Cyc_List_List**)_T1B;}{struct Cyc_List_List*tvars=_T26;struct Cyc_List_List**args_info2=(struct Cyc_List_List**)_T25;_T1C= args_info2;
# 111
*_T1C= old_args_info;{
struct Cyc_List_List*tvars2=tvars;goto _LL5;}}_TL13: goto _LL5;_LL5:;}_T1D= args_info;
# 117
*_T1D= old_args_info;_T1E= fntype2;
return _T1E;}}}}_TL11: _T1F= fntype;
# 120
return _T1F;;}
# 125
long Cyc_CurRgn_is_not_curr_rgn(struct Cyc_Absyn_Tvar*v){struct Cyc_Absyn_Tvar*_T0;struct Cyc_Absyn_Tvar*_T1;int _T2;int _T3;_T0= v;_T1= _check_null(Cyc_CurRgn_curr_tvar);_T2= Cyc_Absyn_tvar_cmp(_T0,_T1);_T3= _T2!=0;return _T3;}
# 127
long Cyc_CurRgn_is_curr_rgn(struct Cyc_Absyn_Tvar*v){struct Cyc_Absyn_Tvar*_T0;struct Cyc_Absyn_Tvar*_T1;int _T2;int _T3;_T0= v;_T1= _check_null(Cyc_CurRgn_curr_tvar);_T2= Cyc_Absyn_tvar_cmp(_T0,_T1);_T3= _T2==0;return _T3;}struct Cyc_CurRgn_rgnsubenv{struct Cyc_List_List*inst;long in_externC;long toplevel;};
# 135
static void Cyc_CurRgn_rgnsubstmt(struct Cyc_CurRgn_rgnsubenv,struct Cyc_Absyn_Stmt*);
static void Cyc_CurRgn_rgnsubexp(struct Cyc_CurRgn_rgnsubenv,struct Cyc_Absyn_Exp*);
static void Cyc_CurRgn_rgnsubexpopt(struct Cyc_CurRgn_rgnsubenv,struct Cyc_Absyn_Exp*);
static void Cyc_CurRgn_rgnsubds(struct Cyc_CurRgn_rgnsubenv,struct Cyc_List_List*);
static void Cyc_CurRgn_rgnsubdtdecl(unsigned,struct Cyc_CurRgn_rgnsubenv,struct Cyc_Absyn_Datatypedecl*);
static void Cyc_CurRgn_rgnsubaggrdecl(unsigned,struct Cyc_CurRgn_rgnsubenv,struct Cyc_Absyn_Aggrdecl*);
# 143
static void Cyc_CurRgn_check_tvar(unsigned loc,struct Cyc_Absyn_Tvar*tv){struct Cyc_Absyn_Tvar*_T0;struct Cyc_Absyn_Tvar*_T1;int _T2;struct Cyc_Warn_String_Warn_Warg_struct _T3;struct Cyc_Warn_Tvar_Warn_Warg_struct _T4;unsigned _T5;struct _fat_ptr _T6;_T0= tv;_T1= 
_check_null(Cyc_CurRgn_curr_tvar);_T2= Cyc_Absyn_tvar_cmp(_T0,_T1);if(_T2!=0)goto _TL15;{struct Cyc_Warn_String_Warn_Warg_struct _T7;_T7.tag= 0;
({__typeof__(_tag_fat("Cannot abstract special type variable ",sizeof(char),39U))_T8=_tag_fat("Cannot abstract special type variable ",sizeof(char),39U);_T7.f1= _T8;});_T3= _T7;}{struct Cyc_Warn_String_Warn_Warg_struct _T7=_T3;{struct Cyc_Warn_Tvar_Warn_Warg_struct _T8;_T8.tag= 7;({__typeof__(_check_null(Cyc_CurRgn_curr_tvar))_T9=_check_null(Cyc_CurRgn_curr_tvar);_T8.f1= _T9;});_T4= _T8;}{struct Cyc_Warn_Tvar_Warn_Warg_struct _T8=_T4;void*_T9[2];_T9[0]= & _T7;_T9[1]= & _T8;_T5= loc;_T6= _tag_fat(_T9,sizeof(void*),2);Cyc_Warn_err2(_T5,_T6);}}goto _TL16;_TL15: _TL16:;}
# 148
static void Cyc_CurRgn_check_tvars(unsigned loc,struct Cyc_List_List*tvs){unsigned _T0;struct Cyc_List_List*_T1;void*_T2;struct Cyc_Absyn_Tvar*_T3;struct Cyc_List_List*_T4;
_TL1A: if(tvs!=0)goto _TL18;else{goto _TL19;}
_TL18: _T0= loc;_T1= tvs;_T2= _T1->hd;_T3= (struct Cyc_Absyn_Tvar*)_T2;Cyc_CurRgn_check_tvar(_T0,_T3);_T4= tvs;
# 149
tvs= _T4->tl;goto _TL1A;_TL19:;}
# 153
static void Cyc_CurRgn_rgnsubtypes(unsigned,struct Cyc_CurRgn_rgnsubenv,struct Cyc_List_List*);
# 156
static void Cyc_CurRgn_rgnsubtype(unsigned loc,struct Cyc_CurRgn_rgnsubenv env,void*type){int*_T0;unsigned _T1;struct Cyc_CurRgn_rgnsubenv _T2;long _T3;unsigned _T4;struct Cyc_CurRgn_rgnsubenv _T5;struct Cyc_Absyn_Vardecl*_T6;void*_T7;struct Cyc_Absyn_ArrayInfo _T8;struct Cyc_Absyn_ArrayInfo _T9;struct Cyc_Absyn_ArrayInfo _TA;struct Cyc_Absyn_PtrInfo _TB;struct Cyc_Absyn_PtrInfo _TC;struct Cyc_Absyn_PtrAtts _TD;struct Cyc_Absyn_PtrInfo _TE;struct Cyc_Absyn_PtrAtts _TF;struct Cyc_Absyn_PtrInfo _T10;struct Cyc_Absyn_PtrAtts _T11;struct Cyc_Absyn_PtrInfo _T12;struct Cyc_Absyn_PtrAtts _T13;unsigned _T14;struct Cyc_CurRgn_rgnsubenv _T15;struct Cyc_List_List*_T16;void*_T17;struct Cyc_Absyn_Aggrfield*_T18;void*_T19;struct Cyc_CurRgn_rgnsubenv _T1A;struct Cyc_List_List*_T1B;void*_T1C;struct Cyc_Absyn_Aggrfield*_T1D;struct Cyc_Absyn_Exp*_T1E;struct Cyc_List_List*_T1F;void*_T20;void*_T21;void*_T22;int(*_T23)(struct _fat_ptr,struct _fat_ptr,unsigned);void*(*_T24)(struct _fat_ptr,struct _fat_ptr,unsigned);struct _fat_ptr _T25;struct _fat_ptr _T26;struct Cyc_Absyn_TypeDecl*_T27;int*_T28;unsigned _T29;
void*_T2A=Cyc_Absyn_compress(type);void**_T2B;struct Cyc_Absyn_TypeDecl*_T2C;struct Cyc_Absyn_Exp*_T2D;struct Cyc_List_List*_T2E;void*_T2F;void*_T30;void*_T31;void*_T32;void*_T33;_T0= (int*)_T2A;_T1= *_T0;switch(_T1){case 2:{struct Cyc_Absyn_VarType_Absyn_Type_struct*_T34=(struct Cyc_Absyn_VarType_Absyn_Type_struct*)_T2A;_T33= _T34->f1;}{struct Cyc_Absyn_Tvar*v=_T33;_T2= env;_T3= _T2.toplevel;
# 159
if(!_T3)goto _TL1C;
Cyc_CurRgn_check_tvar(loc,v);goto _TL1D;_TL1C: _TL1D:
 return;}case 8:{struct Cyc_Absyn_TypedefType_Absyn_Type_struct*_T34=(struct Cyc_Absyn_TypedefType_Absyn_Type_struct*)_T2A;_T33= _T34->f2;}{struct Cyc_List_List*ts=_T33;
# 163
Cyc_CurRgn_rgnsubtypes(loc,env,ts);
return;}case 12:{struct Cyc_Absyn_SubsetType_Absyn_Type_struct*_T34=(struct Cyc_Absyn_SubsetType_Absyn_Type_struct*)_T2A;_T33= _T34->f1;_T32= _T34->f2;}{struct Cyc_Absyn_Vardecl*vd=_T33;struct Cyc_Absyn_Exp*e=_T32;_T4= loc;_T5= env;_T6= vd;_T7= _T6->type;
# 166
Cyc_CurRgn_rgnsubtype(_T4,_T5,_T7);
Cyc_CurRgn_rgnsubexpopt(env,e);
return;}case 5:{struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T34=(struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_T2A;_T8= _T34->f1;_T33= _T8.elt_type;_T9= _T34->f1;_T32= _T9.num_elts;_TA= _T34->f1;_T31= _TA.zero_term;}{void*t1=_T33;struct Cyc_Absyn_Exp*e=_T32;void*zt=_T31;
# 170
Cyc_CurRgn_rgnsubtype(loc,env,t1);
Cyc_CurRgn_rgnsubexpopt(env,e);
Cyc_CurRgn_rgnsubtype(loc,env,zt);
return;}case 4:{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T34=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T2A;_TB= _T34->f1;_T33= _TB.elt_type;_TC= _T34->f1;_TD= _TC.ptr_atts;_T32= _TD.eff;_TE= _T34->f1;_TF= _TE.ptr_atts;_T31= _TF.bounds;_T10= _T34->f1;_T11= _T10.ptr_atts;_T30= _T11.zero_term;_T12= _T34->f1;_T13= _T12.ptr_atts;_T2F= _T13.autoreleased;}{void*t1=_T33;void*r=_T32;void*b=_T31;void*zt=_T30;void*rel=_T2F;
# 175
Cyc_CurRgn_rgnsubtype(loc,env,t1);
Cyc_CurRgn_rgnsubtype(loc,env,r);
Cyc_CurRgn_rgnsubtype(loc,env,b);
Cyc_CurRgn_rgnsubtype(loc,env,zt);
Cyc_CurRgn_rgnsubtype(loc,env,rel);
return;}case 6:
# 183
 return;case 7:{struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*_T34=(struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*)_T2A;_T33= _T34->f3;}{struct Cyc_List_List*fs=_T33;
# 185
_TL21: if(fs!=0)goto _TL1F;else{goto _TL20;}
_TL1F: _T14= loc;_T15= env;_T16= fs;_T17= _T16->hd;_T18= (struct Cyc_Absyn_Aggrfield*)_T17;_T19= _T18->type;Cyc_CurRgn_rgnsubtype(_T14,_T15,_T19);_T1A= env;_T1B= fs;_T1C= _T1B->hd;_T1D= (struct Cyc_Absyn_Aggrfield*)_T1C;_T1E= _T1D->requires_clause;
Cyc_CurRgn_rgnsubexpopt(_T1A,_T1E);_T1F= fs;
# 185
fs= _T1F->tl;goto _TL21;_TL20:
# 189
 return;}case 3:{struct Cyc_Absyn_Cvar_Absyn_Type_struct*_T34=(struct Cyc_Absyn_Cvar_Absyn_Type_struct*)_T2A;_T20= _T34->f2;_T33= (void*)_T20;}{void*r=_T33;_T33= r;goto _LL12;}case 1:{struct Cyc_Absyn_Evar_Absyn_Type_struct*_T34=(struct Cyc_Absyn_Evar_Absyn_Type_struct*)_T2A;_T21= _T34->f2;_T33= (void*)_T21;}_LL12: {void*r=_T33;
# 193
if(r==0)goto _TL22;
Cyc_CurRgn_rgnsubtype(loc,env,r);goto _TL23;_TL22: _TL23:
 return;}case 0:{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T34=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T2A;_T22= _T34->f1;_T33= (void*)_T22;_T2E= _T34->f2;}{void*c=_T33;struct Cyc_List_List*ts=_T2E;
# 197
Cyc_CurRgn_rgnsubtypes(loc,env,ts);
return;}case 9:{struct Cyc_Absyn_ValueofType_Absyn_Type_struct*_T34=(struct Cyc_Absyn_ValueofType_Absyn_Type_struct*)_T2A;_T2D= _T34->f1;}{struct Cyc_Absyn_Exp*e=_T2D;
# 200
Cyc_CurRgn_rgnsubexp(env,e);
return;}case 11:{struct Cyc_Absyn_TypeofType_Absyn_Type_struct*_T34=(struct Cyc_Absyn_TypeofType_Absyn_Type_struct*)_T2A;_T2D= _T34->f1;}{struct Cyc_Absyn_Exp*e=_T2D;
# 203
Cyc_CurRgn_rgnsubexp(env,e);
return;}default:{struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*_T34=(struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*)_T2A;_T2C= _T34->f1;_T2B= _T34->f2;}{struct Cyc_Absyn_TypeDecl*td=_T2C;void**topt=_T2B;
# 206
if(topt!=0)goto _TL24;goto _TL25;_TL24: _T24= Cyc___assert_fail;{int(*_T34)(struct _fat_ptr,struct _fat_ptr,unsigned)=(int(*)(struct _fat_ptr,struct _fat_ptr,unsigned))_T24;_T23= _T34;}_T25= _tag_fat("topt == NULL",sizeof(char),13U);_T26= _tag_fat("cyclone/library/compiler/currgn.cyc",sizeof(char),36U);_T23(_T25,_T26,206U);_TL25: _T27= td;{
void*_T34=_T27->r;struct Cyc_Absyn_Datatypedecl*_T35;struct Cyc_Absyn_Aggrdecl*_T36;_T28= (int*)_T34;_T29= *_T28;switch(_T29){case 0:{struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct*_T37=(struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct*)_T34;_T36= _T37->f1;}{struct Cyc_Absyn_Aggrdecl*ad=_T36;
# 209
Cyc_CurRgn_rgnsubaggrdecl(loc,env,ad);
return;}case 2:{struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct*_T37=(struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct*)_T34;_T35= _T37->f1;}{struct Cyc_Absyn_Datatypedecl*dtd=_T35;
# 212
Cyc_CurRgn_rgnsubdtdecl(loc,env,dtd);
return;}default:
# 215
 return;};}
# 217
return;}};}
# 221
static void Cyc_CurRgn_rgnsubtypes(unsigned loc,struct Cyc_CurRgn_rgnsubenv env,struct Cyc_List_List*ts){unsigned _T0;struct Cyc_CurRgn_rgnsubenv _T1;struct Cyc_List_List*_T2;void*_T3;struct Cyc_List_List*_T4;
_TL2A: if(ts!=0)goto _TL28;else{goto _TL29;}
_TL28: _T0= loc;_T1= env;_T2= ts;_T3= _T2->hd;Cyc_CurRgn_rgnsubtype(_T0,_T1,_T3);_T4= ts;
# 222
ts= _T4->tl;goto _TL2A;_TL29:;}
# 228
static void Cyc_CurRgn_rgnsubexp(struct Cyc_CurRgn_rgnsubenv env,struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;int*_T1;unsigned _T2;struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct*_T3;void**_T4;struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct*_T5;void**_T6;struct Cyc_Absyn_Exp*_T7;unsigned _T8;struct Cyc_CurRgn_rgnsubenv _T9;void**_TA;void*_TB;struct Cyc_CurRgn_rgnsubenv _TC;long _TD;void**_TE;struct Cyc_CurRgn_rgnsubenv _TF;struct Cyc_List_List*_T10;void**_T11;void*_T12;struct Cyc_CurRgn_rgnsubenv _T13;struct Cyc_List_List*_T14;void*_T15;struct Cyc_Absyn_Exp*_T16;struct Cyc_List_List*_T17;struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct*_T18;void**_T19;struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T1A;void**_T1B;struct Cyc_Absyn_Exp*_T1C;unsigned _T1D;struct Cyc_CurRgn_rgnsubenv _T1E;void**_T1F;void*_T20;struct Cyc_CurRgn_rgnsubenv _T21;long _T22;void**_T23;struct Cyc_CurRgn_rgnsubenv _T24;struct Cyc_List_List*_T25;void**_T26;void*_T27;struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct*_T28;void**_T29;struct Cyc_Absyn_Exp*_T2A;unsigned _T2B;struct Cyc_CurRgn_rgnsubenv _T2C;void**_T2D;void*_T2E;struct Cyc_CurRgn_rgnsubenv _T2F;long _T30;struct Cyc_CurRgn_rgnsubenv _T31;struct Cyc_List_List*_T32;void**_T33;void*_T34;void*_T35;void**_T36;void*_T37;int*_T38;int _T39;struct Cyc_Absyn_Exp*_T3A;struct Cyc_Absyn_Exp*_T3B;struct Cyc_Absyn_Exp*_T3C;struct Cyc_Absyn_Exp*_T3D;struct Cyc_Absyn_Exp*_T3E;struct Cyc_Absyn_Exp*_T3F;void**_T40;struct Cyc_CurRgn_rgnsubenv _T41;struct Cyc_List_List*_T42;void*_T43;struct Cyc_Absyn_Exp*_T44;struct Cyc_List_List*_T45;struct Cyc_Absyn_Exp*_T46;unsigned _T47;struct Cyc_CurRgn_rgnsubenv _T48;struct Cyc_List_List*_T49;void*_T4A;struct Cyc_CurRgn_rgnsubenv _T4B;long _T4C;struct Cyc_List_List*_T4D;struct Cyc_CurRgn_rgnsubenv _T4E;struct Cyc_List_List*_T4F;struct Cyc_List_List*_T50;void*_T51;void*_T52;struct Cyc_List_List*_T53;struct Cyc_Absyn_Exp*_T54;unsigned _T55;struct Cyc_CurRgn_rgnsubenv _T56;struct _tuple8*_T57;struct _tuple8 _T58;void*_T59;struct Cyc_CurRgn_rgnsubenv _T5A;long _T5B;struct _tuple8*_T5C;struct Cyc_CurRgn_rgnsubenv _T5D;struct Cyc_List_List*_T5E;struct _tuple8*_T5F;struct _tuple8 _T60;void*_T61;struct Cyc_Absyn_Exp*_T62;unsigned _T63;struct Cyc_CurRgn_rgnsubenv _T64;struct Cyc_List_List*_T65;void*_T66;struct Cyc_CurRgn_rgnsubenv _T67;long _T68;struct Cyc_List_List*_T69;struct Cyc_CurRgn_rgnsubenv _T6A;struct Cyc_List_List*_T6B;struct Cyc_List_List*_T6C;void*_T6D;void*_T6E;struct Cyc_List_List*_T6F;struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct*_T70;void**_T71;void**_T72;void*_T73;struct Cyc_Absyn_Exp*_T74;unsigned _T75;struct Cyc_CurRgn_rgnsubenv _T76;void**_T77;void*_T78;struct Cyc_CurRgn_rgnsubenv _T79;long _T7A;void**_T7B;struct Cyc_CurRgn_rgnsubenv _T7C;struct Cyc_List_List*_T7D;void**_T7E;void*_T7F;void*_T80;struct Cyc_Absyn_MallocInfo _T81;struct Cyc_Absyn_MallocInfo _T82;struct Cyc_Absyn_MallocInfo _T83;struct Cyc_Absyn_MallocInfo _T84;struct Cyc_CurRgn_rgnsubenv _T85;long _T86;int(*_T87)(struct _fat_ptr,struct _fat_ptr,unsigned);void*(*_T88)(struct _fat_ptr,struct _fat_ptr,unsigned);struct _fat_ptr _T89;struct _fat_ptr _T8A;struct Cyc_Absyn_Exp*_T8B;unsigned _T8C;struct Cyc_CurRgn_rgnsubenv _T8D;void**_T8E;void*_T8F;void**_T90;struct Cyc_CurRgn_rgnsubenv _T91;struct Cyc_List_List*_T92;void**_T93;void*_T94;struct Cyc_Absyn_Exp*_T95;void*_T96;struct Cyc_Absyn_Exp*_T97;unsigned _T98;struct Cyc_CurRgn_rgnsubenv _T99;struct Cyc_Absyn_Exp*_T9A;void*_T9B;struct Cyc_CurRgn_rgnsubenv _T9C;long _T9D;struct Cyc_Absyn_Exp*_T9E;struct Cyc_CurRgn_rgnsubenv _T9F;struct Cyc_List_List*_TA0;struct Cyc_Absyn_Exp*_TA1;void*_TA2;void*_TA3;_T0= e;{
void*_TA4=_T0->r;struct Cyc_Absyn_Stmt*_TA5;struct Cyc_List_List*_TA6;struct _tuple8*_TA7;struct Cyc_Absyn_VarargCallInfo*_TA8;struct Cyc_Absyn_Datatypefield*_TA9;struct Cyc_Absyn_Datatypedecl*_TAA;long _TAB;struct Cyc_Absyn_Vardecl*_TAC;struct Cyc_Absyn_Exp*_TAD;struct Cyc_Absyn_Exp*_TAE;struct Cyc_Absyn_Exp*_TAF;struct Cyc_List_List*_TB0;void**_TB1;_T1= (int*)_TA4;_T2= *_T1;switch(_T2){case 0: goto _LL4;case 31: _LL4: goto _LL6;case 32: _LL6: goto _LL8;case 2: _LL8: goto _LLA;case 39: _LLA: goto _LLC;case 1: _LLC: goto _LL0;case 19:{struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct*)_TA4;_T3= (struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct*)_TA4;_T4= & _T3->f1;_TB1= (void**)_T4;_TB0= _TB2->f2;}{void**t=_TB1;struct Cyc_List_List*f=_TB0;_TB1= t;goto _LL10;}case 17:{struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct*)_TA4;_T5= (struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct*)_TA4;_T6= & _T5->f1;_TB1= (void**)_T6;}_LL10: {void**t=_TB1;_T7= e;_T8= _T7->loc;_T9= env;_TA= t;_TB= *_TA;
# 241
Cyc_CurRgn_rgnsubtype(_T8,_T9,_TB);_TC= env;_TD= _TC.toplevel;
if(_TD)goto _TL2C;else{goto _TL2E;}
_TL2E: _TE= t;_TF= env;_T10= _TF.inst;_T11= t;_T12= *_T11;({__typeof__(Cyc_Tcutil_substitute_nofun(_T10,_T12))_TB2=Cyc_Tcutil_substitute_nofun(_T10,_T12);*_TE= _TB2;});goto _TL2D;_TL2C: _TL2D: goto _LL0;}case 6:{struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct*)_TA4;_TAF= _TB2->f1;_TAE= _TB2->f2;_TAD= _TB2->f3;}{struct Cyc_Absyn_Exp*e1=_TAF;struct Cyc_Absyn_Exp*e2=_TAE;struct Cyc_Absyn_Exp*e3=_TAD;
# 247
Cyc_CurRgn_rgnsubexp(env,e1);
Cyc_CurRgn_rgnsubexp(env,e2);
Cyc_CurRgn_rgnsubexp(env,e3);goto _LL0;}case 26:{struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct*)_TA4;_TAC= _TB2->f1;_TAF= _TB2->f2;_TAE= _TB2->f3;_TAB= _TB2->f4;}{struct Cyc_Absyn_Vardecl*vd=_TAC;struct Cyc_Absyn_Exp*e1=_TAF;struct Cyc_Absyn_Exp*e2=_TAE;long res=_TAB;_TAF= e1;_TAE= e2;goto _LL16;}case 4:{struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct*)_TA4;_TAF= _TB2->f1;_TAE= _TB2->f3;}_LL16: {struct Cyc_Absyn_Exp*e1=_TAF;struct Cyc_Absyn_Exp*e2=_TAE;_TAF= e1;_TAE= e2;goto _LL18;}case 34:{struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct*)_TA4;_TAF= _TB2->f1;_TAE= _TB2->f2;}_LL18: {struct Cyc_Absyn_Exp*e1=_TAF;struct Cyc_Absyn_Exp*e2=_TAE;_TAF= e1;_TAE= e2;goto _LL1A;}case 7:{struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*)_TA4;_TAF= _TB2->f1;_TAE= _TB2->f2;}_LL1A: {struct Cyc_Absyn_Exp*e1=_TAF;struct Cyc_Absyn_Exp*e2=_TAE;_TAF= e1;_TAE= e2;goto _LL1C;}case 8:{struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*)_TA4;_TAF= _TB2->f1;_TAE= _TB2->f2;}_LL1C: {struct Cyc_Absyn_Exp*e1=_TAF;struct Cyc_Absyn_Exp*e2=_TAE;_TAF= e1;_TAE= e2;goto _LL1E;}case 23:{struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*)_TA4;_TAF= _TB2->f1;_TAE= _TB2->f2;}_LL1E: {struct Cyc_Absyn_Exp*e1=_TAF;struct Cyc_Absyn_Exp*e2=_TAE;_TAF= e1;_TAE= e2;goto _LL20;}case 9:{struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct*)_TA4;_TAF= _TB2->f1;_TAE= _TB2->f2;}_LL20: {struct Cyc_Absyn_Exp*e1=_TAF;struct Cyc_Absyn_Exp*e2=_TAE;
# 265
Cyc_CurRgn_rgnsubexp(env,e1);
Cyc_CurRgn_rgnsubexp(env,e2);goto _LL0;}case 30:{struct Cyc_Absyn_Datatype_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_Datatype_e_Absyn_Raw_exp_struct*)_TA4;_TB0= _TB2->f1;_TAA= _TB2->f2;_TA9= _TB2->f3;}{struct Cyc_List_List*es=_TB0;struct Cyc_Absyn_Datatypedecl*dtd=_TAA;struct Cyc_Absyn_Datatypefield*dtfd=_TA9;_TB0= es;goto _LL24;}case 3:{struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*)_TA4;_TB0= _TB2->f2;}_LL24: {struct Cyc_List_List*es=_TB0;
# 273
_TL32: if(es!=0)goto _TL30;else{goto _TL31;}
_TL30: _T13= env;_T14= es;_T15= _T14->hd;_T16= (struct Cyc_Absyn_Exp*)_T15;Cyc_CurRgn_rgnsubexp(_T13,_T16);_T17= es;
# 273
es= _T17->tl;goto _TL32;_TL31: goto _LL0;}case 27:{struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct*)_TA4;_TAF= _TB2->f1;_T18= (struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct*)_TA4;_T19= & _T18->f2;_TB1= (void**)_T19;}{struct Cyc_Absyn_Exp*e1=_TAF;void**t=_TB1;_TB1= t;_TAF= e1;goto _LL28;}case 14:{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_TA4;_T1A= (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_TA4;_T1B= & _T1A->f1;_TB1= (void**)_T1B;_TAF= _TB2->f2;}_LL28: {void**t=_TB1;struct Cyc_Absyn_Exp*e1=_TAF;_T1C= e;_T1D= _T1C->loc;_T1E= env;_T1F= t;_T20= *_T1F;
# 280
Cyc_CurRgn_rgnsubtype(_T1D,_T1E,_T20);_T21= env;_T22= _T21.toplevel;
if(_T22)goto _TL33;else{goto _TL35;}
_TL35: _T23= t;_T24= env;_T25= _T24.inst;_T26= t;_T27= *_T26;({__typeof__(Cyc_Tcutil_substitute_nofun(_T25,_T27))_TB2=Cyc_Tcutil_substitute_nofun(_T25,_T27);*_T23= _TB2;});goto _TL34;_TL33: _TL34: _TAF= e1;goto _LL2A;}case 21:{struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*)_TA4;_TAF= _TB2->f1;}_LL2A: {struct Cyc_Absyn_Exp*e1=_TAF;_TAF= e1;goto _LL2C;}case 22:{struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*)_TA4;_TAF= _TB2->f1;}_LL2C: {struct Cyc_Absyn_Exp*e1=_TAF;_TAF= e1;goto _LL2E;}case 37:{struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct*)_TA4;_TAF= _TB2->f1;}_LL2E: {struct Cyc_Absyn_Exp*e1=_TAF;_TAF= e1;goto _LL30;}case 5:{struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*)_TA4;_TAF= _TB2->f1;}_LL30: {struct Cyc_Absyn_Exp*e1=_TAF;_TAF= e1;goto _LL32;}case 41:{struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct*)_TA4;_TAF= _TB2->f1;}_LL32: {struct Cyc_Absyn_Exp*e1=_TAF;_TAF= e1;goto _LL34;}case 42:{struct Cyc_Absyn_Assert_false_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_Assert_false_e_Absyn_Raw_exp_struct*)_TA4;_TAF= _TB2->f1;}_LL34: {struct Cyc_Absyn_Exp*e1=_TAF;_TAF= e1;goto _LL36;}case 20:{struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*)_TA4;_TAF= _TB2->f1;}_LL36: {struct Cyc_Absyn_Exp*e1=_TAF;_TAF= e1;goto _LL38;}case 15:{struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct*)_TA4;_TAF= _TB2->f1;}_LL38: {struct Cyc_Absyn_Exp*e1=_TAF;_TAF= e1;goto _LL3A;}case 18:{struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct*)_TA4;_TAF= _TB2->f1;}_LL3A: {struct Cyc_Absyn_Exp*e1=_TAF;_TAF= e1;goto _LL3C;}case 40:{struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct*)_TA4;_TAF= _TB2->f1;}_LL3C: {struct Cyc_Absyn_Exp*e1=_TAF;_TAF= e1;goto _LL3E;}case 11:{struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct*)_TA4;_TAF= _TB2->f1;}_LL3E: {struct Cyc_Absyn_Exp*e1=_TAF;_TAF= e1;goto _LL40;}case 12:{struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct*)_TA4;_TAF= _TB2->f1;}_LL40: {struct Cyc_Absyn_Exp*e1=_TAF;
# 308
Cyc_CurRgn_rgnsubexp(env,e1);goto _LL0;}case 38:{struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct*)_TA4;_T28= (struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct*)_TA4;_T29= & _T28->f1;_TB1= (void**)_T29;}{void**t=_TB1;_T2A= e;_T2B= _T2A->loc;_T2C= env;_T2D= t;_T2E= *_T2D;
# 312
Cyc_CurRgn_rgnsubtype(_T2B,_T2C,_T2E);_T2F= env;_T30= _T2F.toplevel;
if(_T30)goto _TL36;else{goto _TL38;}
_TL38: _T31= env;_T32= _T31.inst;_T33= t;_T34= *_T33;{void*new_typ=Cyc_Tcutil_substitute_nofun(_T32,_T34);_T35= new_typ;_T36= t;_T37= *_T36;
if(_T35!=_T37)goto _TL39;goto _LL0;_TL39: {
# 318
void*_TB2=Cyc_Absyn_compress(new_typ);struct Cyc_Absyn_Exp*_TB3;_T38= (int*)_TB2;_T39= *_T38;if(_T39!=9)goto _TL3B;{struct Cyc_Absyn_ValueofType_Absyn_Type_struct*_TB4=(struct Cyc_Absyn_ValueofType_Absyn_Type_struct*)_TB2;_TB3= _TB4->f1;}{struct Cyc_Absyn_Exp*e1=_TB3;_T3A= e;_T3B= e1;
# 320
_T3A->r= _T3B->r;_T3C= e;_T3D= e1;
_T3C->topt= _T3D->topt;_T3E= e;_T3F= e1;
_T3E->annot= _T3F->annot;goto _LL57;}_TL3B: _T40= t;
# 325
*_T40= new_typ;goto _LL57;_LL57:;}}goto _TL37;_TL36: _TL37: goto _LL0;}case 10:{struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*)_TA4;_TAF= _TB2->f1;_TB0= _TB2->f2;_TA8= _TB2->f3;_TAB= _TB2->f4;}{struct Cyc_Absyn_Exp*e1=_TAF;struct Cyc_List_List*es=_TB0;struct Cyc_Absyn_VarargCallInfo*vararg=_TA8;long resv=_TAB;
# 331
_TL3D: if(es!=0)goto _TL3E;else{goto _TL3F;}
_TL3E: _T41= env;_T42= es;_T43= _T42->hd;_T44= (struct Cyc_Absyn_Exp*)_T43;Cyc_CurRgn_rgnsubexp(_T41,_T44);_T45= es;
es= _T45->tl;goto _TL3D;_TL3F:
# 335
 Cyc_CurRgn_rgnsubexp(env,e1);goto _LL0;}case 13:{struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*)_TA4;_TAF= _TB2->f1;_TB0= _TB2->f2;}{struct Cyc_Absyn_Exp*e1=_TAF;struct Cyc_List_List*ts=_TB0;
# 338
_TL40: if(ts!=0)goto _TL41;else{goto _TL42;}
_TL41: _T46= e;_T47= _T46->loc;_T48= env;_T49= ts;_T4A= _T49->hd;Cyc_CurRgn_rgnsubtype(_T47,_T48,_T4A);_T4B= env;_T4C= _T4B.toplevel;
if(_T4C)goto _TL43;else{goto _TL45;}
_TL45: _T4D= ts;_T4E= env;_T4F= _T4E.inst;_T50= ts;_T51= _T50->hd;_T52= Cyc_Tcutil_substitute_nofun(_T4F,_T51);_T4D->hd= (void*)_T52;goto _TL44;_TL43: _TL44: _T53= ts;
ts= _T53->tl;goto _TL40;_TL42:
# 344
 Cyc_CurRgn_rgnsubexp(env,e1);goto _LL0;}case 16:{struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct*)_TA4;_TAF= _TB2->f1;_TAE= _TB2->f2;_TAD= _TB2->f3;}{struct Cyc_Absyn_Exp*eopt=_TAF;struct Cyc_Absyn_Exp*e1=_TAE;struct Cyc_Absyn_Exp*qopt=_TAD;
# 348
Cyc_CurRgn_rgnsubexpopt(env,eopt);
Cyc_CurRgn_rgnsubexpopt(env,qopt);
Cyc_CurRgn_rgnsubexp(env,e1);goto _LL0;}case 24:{struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct*)_TA4;_TA7= _TB2->f1;_TB0= _TB2->f2;}{struct _tuple8*i=_TA7;struct Cyc_List_List*ds=_TB0;_T54= e;_T55= _T54->loc;_T56= env;_T57= i;_T58= *_T57;_T59= _T58.f2;
# 354
Cyc_CurRgn_rgnsubtype(_T55,_T56,_T59);_T5A= env;_T5B= _T5A.toplevel;
if(_T5B)goto _TL46;else{goto _TL48;}
_TL48: _T5C= i;_T5D= env;_T5E= _T5D.inst;_T5F= i;_T60= *_T5F;_T61= _T60.f2;({__typeof__(Cyc_Tcutil_substitute_nofun(_T5E,_T61))_TB2=Cyc_Tcutil_substitute_nofun(_T5E,_T61);(*_T5C).f2= _TB2;});goto _TL47;_TL46: _TL47:
 Cyc_CurRgn_rgnsubds(env,ds);goto _LL0;}case 35:{struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct*)_TA4;_TB0= _TB2->f2;}{struct Cyc_List_List*ds=_TB0;
# 361
Cyc_CurRgn_rgnsubds(env,ds);goto _LL0;}case 25:{struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*)_TA4;_TB0= _TB2->f1;}{struct Cyc_List_List*ds=_TB0;
# 364
Cyc_CurRgn_rgnsubds(env,ds);goto _LL0;}case 28:{struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*)_TA4;_TB0= _TB2->f2;_TA6= _TB2->f3;}{struct Cyc_List_List*ts=_TB0;struct Cyc_List_List*ds=_TA6;
# 368
_TL4C: if(ts!=0)goto _TL4A;else{goto _TL4B;}
_TL4A: _T62= e;_T63= _T62->loc;_T64= env;_T65= ts;_T66= _T65->hd;Cyc_CurRgn_rgnsubtype(_T63,_T64,_T66);_T67= env;_T68= _T67.toplevel;
if(_T68)goto _TL4D;else{goto _TL4F;}
_TL4F: _T69= ts;_T6A= env;_T6B= _T6A.inst;_T6C= ts;_T6D= _T6C->hd;_T6E= Cyc_Tcutil_substitute_nofun(_T6B,_T6D);_T69->hd= (void*)_T6E;goto _TL4E;_TL4D: _TL4E: _T6F= ts;
# 368
ts= _T6F->tl;goto _TL4C;_TL4B:
# 373
 Cyc_CurRgn_rgnsubds(env,ds);goto _LL0;}case 29:{struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct*)_TA4;_T70= (struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct*)_TA4;_T71= & _T70->f1;_TB1= (void**)_T71;_TB0= _TB2->f3;}{void**t=_TB1;struct Cyc_List_List*ds=_TB0;_T72= t;_T73= *_T72;
# 377
if(_T73==0)goto _TL50;_T74= e;_T75= _T74->loc;_T76= env;_T77= t;_T78= *_T77;
Cyc_CurRgn_rgnsubtype(_T75,_T76,_T78);_T79= env;_T7A= _T79.toplevel;
if(_T7A)goto _TL52;else{goto _TL54;}
_TL54: _T7B= t;_T7C= env;_T7D= _T7C.inst;_T7E= t;_T7F= *_T7E;_T80= _check_null(_T7F);({__typeof__(Cyc_Tcutil_substitute_nofun(_T7D,_T80))_TB2=Cyc_Tcutil_substitute_nofun(_T7D,_T80);*_T7B= _TB2;});goto _TL53;_TL52: _TL53: goto _TL51;_TL50: _TL51:
# 382
 Cyc_CurRgn_rgnsubds(env,ds);goto _LL0;}case 33:{struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct*)_TA4;_T81= _TB2->f1;_TAF= _T81.rgn;_T82= _TB2->f1;_TAE= _T82.aqual;_T83= _TB2->f1;_TB1= _T83.elt_type;_T84= _TB2->f1;_TAD= _T84.num_elts;}{struct Cyc_Absyn_Exp*rgnopt=_TAF;struct Cyc_Absyn_Exp*aqopt=_TAE;void**elt_t=_TB1;struct Cyc_Absyn_Exp*e1=_TAD;_T85= env;_T86= _T85.toplevel;
# 386
if(_T86)goto _TL55;else{goto _TL57;}_TL57: goto _TL56;_TL55: _T88= Cyc___assert_fail;{int(*_TB2)(struct _fat_ptr,struct _fat_ptr,unsigned)=(int(*)(struct _fat_ptr,struct _fat_ptr,unsigned))_T88;_T87= _TB2;}_T89= _tag_fat("!env.toplevel",sizeof(char),14U);_T8A= _tag_fat("cyclone/library/compiler/currgn.cyc",sizeof(char),36U);_T87(_T89,_T8A,386U);_TL56:
 Cyc_CurRgn_rgnsubexpopt(env,rgnopt);
Cyc_CurRgn_rgnsubexpopt(env,aqopt);
if(elt_t==0)goto _TL58;_T8B= e;_T8C= _T8B->loc;_T8D= env;_T8E= elt_t;_T8F= *_T8E;
Cyc_CurRgn_rgnsubtype(_T8C,_T8D,_T8F);_T90= elt_t;_T91= env;_T92= _T91.inst;_T93= elt_t;_T94= *_T93;
({__typeof__(Cyc_Tcutil_substitute_nofun(_T92,_T94))_TB2=Cyc_Tcutil_substitute_nofun(_T92,_T94);*_T90= _TB2;});goto _TL59;_TL58: _TL59:
# 393
 Cyc_CurRgn_rgnsubexp(env,e1);goto _LL0;}default:{struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct*_TB2=(struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct*)_TA4;_TA5= _TB2->f1;}{struct Cyc_Absyn_Stmt*s=_TA5;
# 397
Cyc_CurRgn_rgnsubstmt(env,s);goto _LL0;}}_LL0:;}_T95= e;_T96= _T95->topt;
# 400
if(_T96==0)goto _TL5A;_T97= e;_T98= _T97->loc;_T99= env;_T9A= e;_T9B= _T9A->topt;
Cyc_CurRgn_rgnsubtype(_T98,_T99,_T9B);_T9C= env;_T9D= _T9C.toplevel;
if(_T9D)goto _TL5C;else{goto _TL5E;}
_TL5E: _T9E= e;_T9F= env;_TA0= _T9F.inst;_TA1= e;_TA2= _TA1->topt;_TA3= _check_null(_TA2);({__typeof__(Cyc_Tcutil_substitute_nofun(_TA0,_TA3))_TA4=Cyc_Tcutil_substitute_nofun(_TA0,_TA3);_T9E->topt= _TA4;});goto _TL5D;_TL5C: _TL5D: goto _TL5B;_TL5A: _TL5B:;}
# 407
static void Cyc_CurRgn_rgnsubexpopt(struct Cyc_CurRgn_rgnsubenv env,struct Cyc_Absyn_Exp*e){
if(e!=0)goto _TL5F;
return;_TL5F:
 Cyc_CurRgn_rgnsubexp(env,e);}struct _tuple14{struct Cyc_List_List*f0;struct Cyc_Absyn_Exp*f1;};
# 413
static void Cyc_CurRgn_rgnsubds(struct Cyc_CurRgn_rgnsubenv env,struct Cyc_List_List*ds){struct Cyc_CurRgn_rgnsubenv _T0;struct Cyc_List_List*_T1;void*_T2;struct _tuple14*_T3;struct _tuple14 _T4;struct Cyc_Absyn_Exp*_T5;struct Cyc_List_List*_T6;
_TL64: if(ds!=0)goto _TL62;else{goto _TL63;}
_TL62: _T0= env;_T1= ds;_T2= _T1->hd;_T3= (struct _tuple14*)_T2;_T4= *_T3;_T5= _T4.f1;Cyc_CurRgn_rgnsubexp(_T0,_T5);_T6= ds;
# 414
ds= _T6->tl;goto _TL64;_TL63:;}struct _tuple15{struct Cyc_List_List*f0;struct Cyc_Absyn_Pat*f1;};
# 418
static void Cyc_CurRgn_rgnsubpat(struct Cyc_CurRgn_rgnsubenv env,struct Cyc_Absyn_Pat*p){struct Cyc_CurRgn_rgnsubenv _T0;long _T1;int(*_T2)(struct _fat_ptr,struct _fat_ptr,unsigned);void*(*_T3)(struct _fat_ptr,struct _fat_ptr,unsigned);struct _fat_ptr _T4;struct _fat_ptr _T5;struct Cyc_Absyn_Pat*_T6;int*_T7;unsigned _T8;struct Cyc_Absyn_Vardecl*_T9;void*_TA;struct Cyc_Absyn_Pat*_TB;unsigned _TC;struct Cyc_CurRgn_rgnsubenv _TD;struct Cyc_Absyn_Vardecl*_TE;void*_TF;struct Cyc_Absyn_Vardecl*_T10;struct Cyc_CurRgn_rgnsubenv _T11;struct Cyc_List_List*_T12;struct Cyc_Absyn_Vardecl*_T13;void*_T14;struct Cyc_Absyn_Pat*_T15;unsigned _T16;struct Cyc_Absyn_Tvar*_T17;struct Cyc_Absyn_Vardecl*_T18;void*_T19;struct Cyc_Absyn_Pat*_T1A;unsigned _T1B;struct Cyc_CurRgn_rgnsubenv _T1C;struct Cyc_Absyn_Vardecl*_T1D;void*_T1E;struct Cyc_Absyn_Vardecl*_T1F;struct Cyc_CurRgn_rgnsubenv _T20;struct Cyc_List_List*_T21;struct Cyc_Absyn_Vardecl*_T22;void*_T23;struct Cyc_Absyn_Vardecl*_T24;void*_T25;struct Cyc_Absyn_Pat*_T26;unsigned _T27;struct Cyc_CurRgn_rgnsubenv _T28;struct Cyc_Absyn_Vardecl*_T29;void*_T2A;struct Cyc_Absyn_Vardecl*_T2B;struct Cyc_CurRgn_rgnsubenv _T2C;struct Cyc_List_List*_T2D;struct Cyc_Absyn_Vardecl*_T2E;void*_T2F;struct Cyc_Absyn_Pat*_T30;unsigned _T31;struct Cyc_Absyn_Tvar*_T32;struct Cyc_Absyn_Pat*_T33;unsigned _T34;struct Cyc_List_List*_T35;void*_T36;struct Cyc_Absyn_Tvar*_T37;struct Cyc_List_List*_T38;struct Cyc_CurRgn_rgnsubenv _T39;struct Cyc_List_List*_T3A;void*_T3B;struct _tuple15*_T3C;struct _tuple15 _T3D;struct Cyc_Absyn_Pat*_T3E;struct Cyc_List_List*_T3F;struct Cyc_CurRgn_rgnsubenv _T40;struct Cyc_List_List*_T41;void*_T42;struct Cyc_Absyn_Pat*_T43;struct Cyc_List_List*_T44;_T0= env;_T1= _T0.toplevel;
if(_T1)goto _TL65;else{goto _TL67;}_TL67: goto _TL66;_TL65: _T3= Cyc___assert_fail;{int(*_T45)(struct _fat_ptr,struct _fat_ptr,unsigned)=(int(*)(struct _fat_ptr,struct _fat_ptr,unsigned))_T3;_T2= _T45;}_T4= _tag_fat("!env.toplevel",sizeof(char),14U);_T5= _tag_fat("cyclone/library/compiler/currgn.cyc",sizeof(char),36U);_T2(_T4,_T5,419U);_TL66: _T6= p;{
void*_T45=_T6->r;struct Cyc_Absyn_Exp*_T46;struct Cyc_List_List*_T47;struct Cyc_List_List*_T48;struct Cyc_Absyn_Tvar*_T49;struct Cyc_Absyn_Pat*_T4A;struct Cyc_Absyn_Vardecl*_T4B;_T7= (int*)_T45;_T8= *_T7;switch(_T8){case 0:
# 422
 return;case 1:{struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct*_T4C=(struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct*)_T45;_T4B= _T4C->f1;_T4A= _T4C->f2;}{struct Cyc_Absyn_Vardecl*vd=_T4B;struct Cyc_Absyn_Pat*p1=_T4A;_T4B= vd;_T4A= p1;goto _LL6;}case 3:{struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct*_T4C=(struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct*)_T45;_T4B= _T4C->f1;_T4A= _T4C->f2;}_LL6: {struct Cyc_Absyn_Vardecl*vd=_T4B;struct Cyc_Absyn_Pat*p1=_T4A;_T9= vd;_TA= _T9->type;
# 428
if(_TA==0)goto _TL69;_TB= p;_TC= _TB->loc;_TD= env;_TE= vd;_TF= _TE->type;
Cyc_CurRgn_rgnsubtype(_TC,_TD,_TF);_T10= vd;_T11= env;_T12= _T11.inst;_T13= vd;_T14= _T13->type;
({__typeof__(Cyc_Tcutil_substitute_nofun(_T12,_T14))_T4C=Cyc_Tcutil_substitute_nofun(_T12,_T14);_T10->type= _T4C;});goto _TL6A;_TL69: _TL6A:
# 432
 Cyc_CurRgn_rgnsubpat(env,p1);
return;}case 2:{struct Cyc_Absyn_AliasVar_p_Absyn_Raw_pat_struct*_T4C=(struct Cyc_Absyn_AliasVar_p_Absyn_Raw_pat_struct*)_T45;_T49= _T4C->f1;_T4B= _T4C->f2;}{struct Cyc_Absyn_Tvar*tv=_T49;struct Cyc_Absyn_Vardecl*vd=_T4B;_T15= p;_T16= _T15->loc;_T17= tv;
# 436
Cyc_CurRgn_check_tvar(_T16,_T17);_T18= vd;_T19= _T18->type;
if(_T19==0)goto _TL6B;_T1A= p;_T1B= _T1A->loc;_T1C= env;_T1D= vd;_T1E= _T1D->type;
Cyc_CurRgn_rgnsubtype(_T1B,_T1C,_T1E);_T1F= vd;_T20= env;_T21= _T20.inst;_T22= vd;_T23= _T22->type;
({__typeof__(Cyc_Tcutil_substitute_nofun(_T21,_T23))_T4C=Cyc_Tcutil_substitute_nofun(_T21,_T23);_T1F->type= _T4C;});goto _TL6C;_TL6B: _TL6C:
# 441
 return;}case 4:{struct Cyc_Absyn_TagInt_p_Absyn_Raw_pat_struct*_T4C=(struct Cyc_Absyn_TagInt_p_Absyn_Raw_pat_struct*)_T45;_T49= _T4C->f1;_T4B= _T4C->f2;}{struct Cyc_Absyn_Tvar*tv=_T49;struct Cyc_Absyn_Vardecl*vd=_T4B;_T24= vd;_T25= _T24->type;
# 445
if(_T25==0)goto _TL6D;_T26= p;_T27= _T26->loc;_T28= env;_T29= vd;_T2A= _T29->type;
Cyc_CurRgn_rgnsubtype(_T27,_T28,_T2A);_T2B= vd;_T2C= env;_T2D= _T2C.inst;_T2E= vd;_T2F= _T2E->type;
({__typeof__(Cyc_Tcutil_substitute_nofun(_T2D,_T2F))_T4C=Cyc_Tcutil_substitute_nofun(_T2D,_T2F);_T2B->type= _T4C;});goto _TL6E;_TL6D: _TL6E: _T30= p;_T31= _T30->loc;_T32= tv;
# 449
Cyc_CurRgn_check_tvar(_T31,_T32);
return;}case 5:{struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct*_T4C=(struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct*)_T45;_T4A= _T4C->f1;}{struct Cyc_Absyn_Pat*p1=_T4A;
# 453
Cyc_CurRgn_rgnsubpat(env,p1);
return;}case 6:{struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct*_T4C=(struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct*)_T45;_T48= _T4C->f3;_T47= _T4C->f4;}{struct Cyc_List_List*tvs=_T48;struct Cyc_List_List*ds=_T47;
# 457
_TL72: if(tvs!=0)goto _TL70;else{goto _TL71;}
_TL70: _T33= p;_T34= _T33->loc;_T35= tvs;_T36= _T35->hd;_T37= (struct Cyc_Absyn_Tvar*)_T36;Cyc_CurRgn_check_tvar(_T34,_T37);_T38= tvs;
# 457
tvs= _T38->tl;goto _TL72;_TL71:
# 459
 _TL76: if(ds!=0)goto _TL74;else{goto _TL75;}
_TL74: _T39= env;_T3A= ds;_T3B= _T3A->hd;_T3C= (struct _tuple15*)_T3B;_T3D= *_T3C;_T3E= _T3D.f1;Cyc_CurRgn_rgnsubpat(_T39,_T3E);_T3F= ds;
# 459
ds= _T3F->tl;goto _TL76;_TL75:
# 461
 return;}case 7:{struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct*_T4C=(struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct*)_T45;_T48= _T4C->f3;}{struct Cyc_List_List*ps=_T48;_T48= ps;goto _LL12;}case 15:{struct Cyc_Absyn_UnknownCall_p_Absyn_Raw_pat_struct*_T4C=(struct Cyc_Absyn_UnknownCall_p_Absyn_Raw_pat_struct*)_T45;_T48= _T4C->f2;}_LL12: {struct Cyc_List_List*ps=_T48;
# 467
_TL7A: if(ps!=0)goto _TL78;else{goto _TL79;}
_TL78: _T40= env;_T41= ps;_T42= _T41->hd;_T43= (struct Cyc_Absyn_Pat*)_T42;Cyc_CurRgn_rgnsubpat(_T40,_T43);_T44= ps;
# 467
ps= _T44->tl;goto _TL7A;_TL79:
# 469
 return;}case 8: goto _LL16;case 9: _LL16: goto _LL18;case 10: _LL18: goto _LL1A;case 11: _LL1A: goto _LL1C;case 12: _LL1C: goto _LL1E;case 13: _LL1E: goto _LL20;case 14: _LL20:
# 478
 return;default:{struct Cyc_Absyn_Exp_p_Absyn_Raw_pat_struct*_T4C=(struct Cyc_Absyn_Exp_p_Absyn_Raw_pat_struct*)_T45;_T46= _T4C->f1;}{struct Cyc_Absyn_Exp*e=_T46;
# 481
Cyc_CurRgn_rgnsubexp(env,e);
return;}};}}
# 486
static void Cyc_CurRgn_rgnsubaggrdecl(unsigned loc,struct Cyc_CurRgn_rgnsubenv env,struct Cyc_Absyn_Aggrdecl*ad){unsigned _T0;struct Cyc_Absyn_Aggrdecl*_T1;struct Cyc_List_List*_T2;struct Cyc_Absyn_Aggrdecl*_T3;struct Cyc_Absyn_AggrdeclImpl*_T4;unsigned _T5;struct Cyc_Absyn_Aggrdecl*_T6;struct Cyc_Absyn_AggrdeclImpl*_T7;struct Cyc_List_List*_T8;struct Cyc_Absyn_Aggrdecl*_T9;struct Cyc_Absyn_AggrdeclImpl*_TA;struct Cyc_Absyn_AggrdeclImpl*_TB;struct Cyc_List_List*_TC;int*_TD;unsigned _TE;void*_TF;void*_T10;void*_T11;void*_T12;void*_T13;struct Cyc_List_List*_T14;struct Cyc_Absyn_Aggrdecl*_T15;struct Cyc_Absyn_AggrdeclImpl*_T16;unsigned _T17;struct Cyc_CurRgn_rgnsubenv _T18;struct Cyc_List_List*_T19;void*_T1A;struct Cyc_Absyn_Aggrfield*_T1B;void*_T1C;struct Cyc_CurRgn_rgnsubenv _T1D;struct Cyc_List_List*_T1E;void*_T1F;struct Cyc_Absyn_Aggrfield*_T20;struct Cyc_Absyn_Exp*_T21;struct Cyc_List_List*_T22;_T0= loc;_T1= ad;_T2= _T1->tvs;
Cyc_CurRgn_check_tvars(_T0,_T2);_T3= ad;_T4= _T3->impl;
if(_T4==0)goto _TL7B;_T5= loc;_T6= ad;_T7= _T6->impl;_T8= _T7->exist_vars;
Cyc_CurRgn_check_tvars(_T5,_T8);_T9= ad;_TA= _T9->impl;_TB= 
_check_null(_TA);{struct Cyc_List_List*fc=_TB->effconstr;
_TL80: if(fc!=0)goto _TL7E;else{goto _TL7F;}
_TL7E: _TC= fc;{void*_T23=_TC->hd;void*_T24;void*_T25;_TD= (int*)_T23;_TE= *_TD;switch(_TE){case 0:{struct Cyc_Absyn_SingleConstraint_Absyn_EffConstraint_struct*_T26=(struct Cyc_Absyn_SingleConstraint_Absyn_EffConstraint_struct*)_T23;_TF= _T26->f1;_T25= (void*)_TF;}{void*e=_T25;
# 494
Cyc_CurRgn_rgnsubtype(loc,env,e);goto _LL0;}case 1:{struct Cyc_Absyn_DisjointConstraint_Absyn_EffConstraint_struct*_T26=(struct Cyc_Absyn_DisjointConstraint_Absyn_EffConstraint_struct*)_T23;_T10= _T26->f1;_T25= (void*)_T10;_T11= _T26->f2;_T24= (void*)_T11;}{void*e1=_T25;void*e2=_T24;_T25= e1;_T24= e2;goto _LL6;}default:{struct Cyc_Absyn_SubsetConstraint_Absyn_EffConstraint_struct*_T26=(struct Cyc_Absyn_SubsetConstraint_Absyn_EffConstraint_struct*)_T23;_T12= _T26->f1;_T25= (void*)_T12;_T13= _T26->f2;_T24= (void*)_T13;}_LL6: {void*e1=_T25;void*e2=_T24;
# 499
Cyc_CurRgn_rgnsubtype(loc,env,e1);
Cyc_CurRgn_rgnsubtype(loc,env,e2);goto _LL0;}}_LL0:;}_T14= fc;
# 491
fc= _T14->tl;goto _TL80;_TL7F: _T15= ad;_T16= _T15->impl;{
# 504
struct Cyc_List_List*fs=_T16->fields;
_TL85: if(fs!=0)goto _TL83;else{goto _TL84;}
_TL83: _T17= loc;_T18= env;_T19= fs;_T1A= _T19->hd;_T1B= (struct Cyc_Absyn_Aggrfield*)_T1A;_T1C= _T1B->type;Cyc_CurRgn_rgnsubtype(_T17,_T18,_T1C);_T1D= env;_T1E= fs;_T1F= _T1E->hd;_T20= (struct Cyc_Absyn_Aggrfield*)_T1F;_T21= _T20->requires_clause;
Cyc_CurRgn_rgnsubexpopt(_T1D,_T21);_T22= fs;
# 505
fs= _T22->tl;goto _TL85;_TL84:;}}goto _TL7C;_TL7B: _TL7C:;}struct _tuple16{struct Cyc_Absyn_Tqual f0;void*f1;};
# 512
static void Cyc_CurRgn_rgnsubdtdecl(unsigned loc,struct Cyc_CurRgn_rgnsubenv env,struct Cyc_Absyn_Datatypedecl*tud){unsigned _T0;struct Cyc_Absyn_Datatypedecl*_T1;struct Cyc_List_List*_T2;struct Cyc_Absyn_Datatypedecl*_T3;struct Cyc_Core_Opt*_T4;struct Cyc_Absyn_Datatypedecl*_T5;struct Cyc_Core_Opt*_T6;void*_T7;struct Cyc_List_List*_T8;void*_T9;struct Cyc_Absyn_Datatypefield*_TA;struct Cyc_List_List*_TB;void*_TC;void**_TD;unsigned _TE;struct Cyc_CurRgn_rgnsubenv _TF;void**_T10;void*_T11;struct Cyc_List_List*_T12;struct Cyc_List_List*_T13;_T0= loc;_T1= tud;_T2= _T1->tvs;
Cyc_CurRgn_check_tvars(_T0,_T2);_T3= tud;_T4= _T3->fields;
if(_T4==0)goto _TL86;_T5= tud;_T6= _T5->fields;_T7= _T6->v;{
struct Cyc_List_List*fs=(struct Cyc_List_List*)_T7;_TL8B: if(fs!=0)goto _TL89;else{goto _TL8A;}
_TL89: _T8= fs;_T9= _T8->hd;_TA= (struct Cyc_Absyn_Datatypefield*)_T9;{struct Cyc_List_List*ts=_TA->typs;
_TL8C: if(ts!=0)goto _TL8D;else{goto _TL8E;}
_TL8D: _TB= ts;_TC= _TB->hd;{struct _tuple16*_T14=(struct _tuple16*)_TC;void*_T15;{struct _tuple16 _T16=*_T14;_TD= & _T14->f1;_T15= (void**)_TD;}{void**typ=(void**)_T15;_TE= loc;_TF= env;_T10= typ;_T11= *_T10;
Cyc_CurRgn_rgnsubtype(_TE,_TF,_T11);_T12= ts;
ts= _T12->tl;}}goto _TL8C;_TL8E:;}_T13= fs;
# 515
fs= _T13->tl;goto _TL8B;_TL8A:;}goto _TL87;_TL86: _TL87:;}
# 525
static void Cyc_CurRgn_rgnsubdecls(struct Cyc_CurRgn_rgnsubenv,struct Cyc_List_List*);
static void Cyc_CurRgn_rgnsubdecl(struct Cyc_CurRgn_rgnsubenv env,struct Cyc_Absyn_Decl*d){struct Cyc_Absyn_Decl*_T0;int*_T1;unsigned _T2;struct Cyc_Absyn_Vardecl*_T3;struct Cyc_Absyn_Vardecl*_T4;void**_T5;struct Cyc_Absyn_Decl*_T6;unsigned _T7;struct Cyc_CurRgn_rgnsubenv _T8;void**_T9;void*_TA;struct Cyc_CurRgn_rgnsubenv _TB;long _TC;void**_TD;struct Cyc_CurRgn_rgnsubenv _TE;struct Cyc_List_List*_TF;void**_T10;void*_T11;struct Cyc_List_List*_T12;struct _tuple13*_T13;struct Cyc_CurRgn_rgnsubenv _T14;struct Cyc_Absyn_Fndecl*_T15;struct Cyc_Absyn_Stmt*_T16;struct Cyc_CurRgn_rgnsubenv _T17;long _T18;int(*_T19)(struct _fat_ptr,struct _fat_ptr,unsigned);void*(*_T1A)(struct _fat_ptr,struct _fat_ptr,unsigned);struct _fat_ptr _T1B;struct _fat_ptr _T1C;struct Cyc_Absyn_Decl*_T1D;unsigned _T1E;struct Cyc_Absyn_Typedefdecl*_T1F;struct Cyc_List_List*_T20;struct Cyc_Absyn_Typedefdecl*_T21;void*_T22;struct Cyc_Absyn_Decl*_T23;unsigned _T24;struct Cyc_CurRgn_rgnsubenv _T25;struct Cyc_Absyn_Typedefdecl*_T26;void*_T27;struct Cyc_CurRgn_rgnsubenv _T28;long _T29;int(*_T2A)(struct _fat_ptr,struct _fat_ptr,unsigned);void*(*_T2B)(struct _fat_ptr,struct _fat_ptr,unsigned);struct _fat_ptr _T2C;struct _fat_ptr _T2D;struct Cyc_Absyn_Decl*_T2E;unsigned _T2F;struct Cyc_CurRgn_rgnsubenv _T30;struct Cyc_Absyn_Aggrdecl*_T31;struct Cyc_CurRgn_rgnsubenv _T32;long _T33;int(*_T34)(struct _fat_ptr,struct _fat_ptr,unsigned);void*(*_T35)(struct _fat_ptr,struct _fat_ptr,unsigned);struct _fat_ptr _T36;struct _fat_ptr _T37;struct Cyc_Absyn_Decl*_T38;unsigned _T39;struct Cyc_CurRgn_rgnsubenv _T3A;struct Cyc_Absyn_Datatypedecl*_T3B;struct Cyc_CurRgn_rgnsubenv _T3C;long _T3D;int(*_T3E)(struct _fat_ptr,struct _fat_ptr,unsigned);void*(*_T3F)(struct _fat_ptr,struct _fat_ptr,unsigned);struct _fat_ptr _T40;struct _fat_ptr _T41;struct Cyc_Absyn_Decl*_T42;unsigned _T43;struct Cyc_CurRgn_rgnsubenv _T44;struct Cyc_List_List*_T45;void*_T46;struct Cyc_Absyn_Vardecl*_T47;void*_T48;struct Cyc_List_List*_T49;void*_T4A;struct Cyc_Absyn_Vardecl*_T4B;struct Cyc_CurRgn_rgnsubenv _T4C;struct Cyc_List_List*_T4D;struct Cyc_List_List*_T4E;void*_T4F;struct Cyc_Absyn_Vardecl*_T50;void*_T51;struct Cyc_List_List*_T52;int(*_T53)(struct _fat_ptr,struct _fat_ptr);void*(*_T54)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T55;struct _fat_ptr _T56;_T0= d;{
void*_T57=_T0->r;struct Cyc_Absyn_Exp*_T58;struct Cyc_Absyn_Pat*_T59;struct Cyc_List_List*_T5A;struct _fat_ptr*_T5B;struct Cyc_Absyn_Datatypedecl*_T5C;struct Cyc_Absyn_Aggrdecl*_T5D;struct Cyc_Absyn_Typedefdecl*_T5E;struct Cyc_Absyn_Fndecl*_T5F;struct Cyc_Absyn_Vardecl*_T60;_T1= (int*)_T57;_T2= *_T1;switch(_T2){case 0:{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T61=(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T57;_T60= _T61->f1;}{struct Cyc_Absyn_Vardecl*vd=_T60;struct Cyc_Absyn_Exp*_T61;void*_T62;_T3= vd;{struct Cyc_Absyn_Vardecl _T63=*_T3;_T4= vd;_T5= & _T4->type;_T62= (void**)_T5;_T61= _T63.initializer;}{void**t=(void**)_T62;struct Cyc_Absyn_Exp*initializer=_T61;
# 530
Cyc_CurRgn_rgnsubexpopt(env,initializer);_T6= d;_T7= _T6->loc;_T8= env;_T9= t;_TA= *_T9;
Cyc_CurRgn_rgnsubtype(_T7,_T8,_TA);_TB= env;_TC= _TB.toplevel;
if(_TC)goto _TL90;else{goto _TL92;}
_TL92: _TD= t;_TE= env;_TF= _TE.inst;_T10= t;_T11= *_T10;({__typeof__(Cyc_Tcutil_substitute_nofun(_TF,_T11))_T63=Cyc_Tcutil_substitute_nofun(_TF,_T11);*_TD= _T63;});goto _TL91;_TL90: _TL91:
 return;}}case 1:{struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*_T61=(struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*)_T57;_T5F= _T61->f1;}{struct Cyc_Absyn_Fndecl*fd=_T5F;
# 542
env.toplevel= 0;{struct Cyc_List_List*_T61=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple13*_T62=_cycalloc(sizeof(struct _tuple13));
({__typeof__(_check_null(Cyc_CurRgn_curr_tvar))_T63=_check_null(Cyc_CurRgn_curr_tvar);_T62->f0= _T63;});({__typeof__(_check_null(Cyc_CurRgn_curr_rgn_typ))_T63=_check_null(Cyc_CurRgn_curr_rgn_typ);_T62->f1= _T63;});_T13= (struct _tuple13*)_T62;}_T61->hd= _T13;_T61->tl= 0;_T12= (struct Cyc_List_List*)_T61;}env.inst= _T12;_T14= env;_T15= fd;_T16= _T15->body;
Cyc_CurRgn_rgnsubstmt(_T14,_T16);
# 549
return;}case 8:{struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct*_T61=(struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct*)_T57;_T5E= _T61->f1;}{struct Cyc_Absyn_Typedefdecl*td=_T5E;_T17= env;_T18= _T17.toplevel;
# 552
if(!_T18)goto _TL93;goto _TL94;_TL93: _T1A= Cyc___assert_fail;{int(*_T61)(struct _fat_ptr,struct _fat_ptr,unsigned)=(int(*)(struct _fat_ptr,struct _fat_ptr,unsigned))_T1A;_T19= _T61;}_T1B= _tag_fat("env.toplevel",sizeof(char),13U);_T1C= _tag_fat("cyclone/library/compiler/currgn.cyc",sizeof(char),36U);_T19(_T1B,_T1C,552U);_TL94: _T1D= d;_T1E= _T1D->loc;_T1F= td;_T20= _T1F->tvs;
Cyc_CurRgn_check_tvars(_T1E,_T20);_T21= td;_T22= _T21->defn;
if(_T22==0)goto _TL95;_T23= d;_T24= _T23->loc;_T25= env;_T26= td;_T27= _T26->defn;
Cyc_CurRgn_rgnsubtype(_T24,_T25,_T27);goto _TL96;_TL95: _TL96:
 return;}case 5:{struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T61=(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*)_T57;_T5D= _T61->f1;}{struct Cyc_Absyn_Aggrdecl*ad=_T5D;_T28= env;_T29= _T28.toplevel;
# 559
if(!_T29)goto _TL97;goto _TL98;_TL97: _T2B= Cyc___assert_fail;{int(*_T61)(struct _fat_ptr,struct _fat_ptr,unsigned)=(int(*)(struct _fat_ptr,struct _fat_ptr,unsigned))_T2B;_T2A= _T61;}_T2C= _tag_fat("env.toplevel",sizeof(char),13U);_T2D= _tag_fat("cyclone/library/compiler/currgn.cyc",sizeof(char),36U);_T2A(_T2C,_T2D,559U);_TL98: _T2E= d;_T2F= _T2E->loc;_T30= env;_T31= ad;
Cyc_CurRgn_rgnsubaggrdecl(_T2F,_T30,_T31);
return;}case 6:{struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct*_T61=(struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct*)_T57;_T5C= _T61->f1;}{struct Cyc_Absyn_Datatypedecl*tud=_T5C;_T32= env;_T33= _T32.toplevel;
# 564
if(!_T33)goto _TL99;goto _TL9A;_TL99: _T35= Cyc___assert_fail;{int(*_T61)(struct _fat_ptr,struct _fat_ptr,unsigned)=(int(*)(struct _fat_ptr,struct _fat_ptr,unsigned))_T35;_T34= _T61;}_T36= _tag_fat("env.toplevel",sizeof(char),13U);_T37= _tag_fat("cyclone/library/compiler/currgn.cyc",sizeof(char),36U);_T34(_T36,_T37,564U);_TL9A: _T38= d;_T39= _T38->loc;_T3A= env;_T3B= tud;
Cyc_CurRgn_rgnsubdtdecl(_T39,_T3A,_T3B);
return;}case 11: goto _LLE;case 12: _LLE: goto _LL10;case 7: _LL10: goto _LL12;case 13: _LL12: goto _LL14;case 14: _LL14: goto _LL16;case 15: _LL16: goto _LL18;case 16: _LL18:
# 577
 return;case 9:{struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct*_T61=(struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct*)_T57;_T5B= _T61->f1;_T5A= _T61->f2;}{struct _fat_ptr*v=_T5B;struct Cyc_List_List*ds2=_T5A;_T5A= ds2;goto _LL1C;}case 10:{struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct*_T61=(struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct*)_T57;_T5A= _T61->f2;}_LL1C: {struct Cyc_List_List*ds2=_T5A;
# 582
Cyc_CurRgn_rgnsubdecls(env,ds2);
return;}case 2:{struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*_T61=(struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*)_T57;_T59= _T61->f1;_T58= _T61->f3;}{struct Cyc_Absyn_Pat*p=_T59;struct Cyc_Absyn_Exp*e=_T58;
# 586
Cyc_CurRgn_rgnsubpat(env,p);
Cyc_CurRgn_rgnsubexp(env,e);
return;}case 3:{struct Cyc_Absyn_Letv_d_Absyn_Raw_decl_struct*_T61=(struct Cyc_Absyn_Letv_d_Absyn_Raw_decl_struct*)_T57;_T5A= _T61->f1;}{struct Cyc_List_List*vds=_T5A;_T3C= env;_T3D= _T3C.toplevel;
# 591
if(_T3D)goto _TL9B;else{goto _TL9D;}_TL9D: goto _TL9C;_TL9B: _T3F= Cyc___assert_fail;{int(*_T61)(struct _fat_ptr,struct _fat_ptr,unsigned)=(int(*)(struct _fat_ptr,struct _fat_ptr,unsigned))_T3F;_T3E= _T61;}_T40= _tag_fat("!env.toplevel",sizeof(char),14U);_T41= _tag_fat("cyclone/library/compiler/currgn.cyc",sizeof(char),36U);_T3E(_T40,_T41,591U);_TL9C:
 _TLA1: if(vds!=0)goto _TL9F;else{goto _TLA0;}
_TL9F: _T42= d;_T43= _T42->loc;_T44= env;_T45= vds;_T46= _T45->hd;_T47= (struct Cyc_Absyn_Vardecl*)_T46;_T48= _T47->type;Cyc_CurRgn_rgnsubtype(_T43,_T44,_T48);_T49= vds;_T4A= _T49->hd;_T4B= (struct Cyc_Absyn_Vardecl*)_T4A;_T4C= env;_T4D= _T4C.inst;_T4E= vds;_T4F= _T4E->hd;_T50= (struct Cyc_Absyn_Vardecl*)_T4F;_T51= _T50->type;
({__typeof__(Cyc_Tcutil_substitute_nofun(_T4D,_T51))_T61=Cyc_Tcutil_substitute_nofun(_T4D,_T51);_T4B->type= _T61;});_T52= vds;
# 592
vds= _T52->tl;goto _TLA1;_TLA0:
# 596
 return;}default: _T54= Cyc_Warn_impos;{
# 598
int(*_T61)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T54;_T53= _T61;}_T55= _tag_fat("internal compiler error: region or pool at toplevel",sizeof(char),52U);_T56= _tag_fat(0U,sizeof(void*),0);_T53(_T55,_T56);};}}
# 602
static void Cyc_CurRgn_rgnsubstmt(struct Cyc_CurRgn_rgnsubenv env,struct Cyc_Absyn_Stmt*s){struct Cyc_Absyn_Stmt*_T0;int*_T1;unsigned _T2;struct _tuple9 _T3;struct _tuple9 _T4;struct _tuple9 _T5;struct _tuple9 _T6;struct _tuple9 _T7;struct _tuple9 _T8;struct Cyc_CurRgn_rgnsubenv _T9;struct Cyc_List_List*_TA;void*_TB;struct Cyc_Absyn_Exp*_TC;struct Cyc_List_List*_TD;struct Cyc_List_List*_TE;void*_TF;struct Cyc_List_List*_T10;struct Cyc_List_List*_T11;void*_T12;struct Cyc_List_List*_T13;struct Cyc_Absyn_Decl*_T14;int*_T15;int _T16;struct Cyc_Absyn_Decl*_T17;unsigned _T18;struct Cyc_Absyn_Tvar*_T19;struct Cyc_CurRgn_rgnsubenv _T1A;struct Cyc_List_List*_T1B;struct Cyc_Absyn_Tvar*_T1C;void*_T1D;_T0= s;{
void*_T1E=_T0->r;struct Cyc_Absyn_Decl*_T1F;struct Cyc_List_List*_T20;struct _fat_ptr*_T21;struct Cyc_Absyn_Stmt*_T22;struct Cyc_Absyn_Exp*_T23;struct Cyc_Absyn_Exp*_T24;struct Cyc_Absyn_Stmt*_T25;struct Cyc_Absyn_Stmt*_T26;struct Cyc_Absyn_Exp*_T27;_T1= (int*)_T1E;_T2= *_T1;switch(_T2){case 0: goto _LL4;case 6: _LL4: goto _LL6;case 7: _LL6: goto _LL8;case 8: _LL8: goto _LL0;case 1:{struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct*_T28=(struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct*)_T1E;_T27= _T28->f1;}{struct Cyc_Absyn_Exp*e=_T27;
# 611
Cyc_CurRgn_rgnsubexp(env,e);goto _LL0;}case 2:{struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*_T28=(struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*)_T1E;_T26= _T28->f1;_T25= _T28->f2;}{struct Cyc_Absyn_Stmt*s1=_T26;struct Cyc_Absyn_Stmt*s2=_T25;
# 614
Cyc_CurRgn_rgnsubstmt(env,s1);
Cyc_CurRgn_rgnsubstmt(env,s2);goto _LL0;}case 3:{struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct*_T28=(struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct*)_T1E;_T27= _T28->f1;}{struct Cyc_Absyn_Exp*eopt=_T27;
# 618
Cyc_CurRgn_rgnsubexpopt(env,eopt);goto _LL0;}case 4:{struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct*_T28=(struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct*)_T1E;_T27= _T28->f1;_T26= _T28->f2;_T25= _T28->f3;}{struct Cyc_Absyn_Exp*e=_T27;struct Cyc_Absyn_Stmt*s1=_T26;struct Cyc_Absyn_Stmt*s2=_T25;
# 622
Cyc_CurRgn_rgnsubexp(env,e);
Cyc_CurRgn_rgnsubstmt(env,s1);
Cyc_CurRgn_rgnsubstmt(env,s2);goto _LL0;}case 14:{struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct*_T28=(struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct*)_T1E;_T26= _T28->f1;_T3= _T28->f2;_T27= _T3.f0;}{struct Cyc_Absyn_Stmt*s=_T26;struct Cyc_Absyn_Exp*e=_T27;_T27= e;_T26= s;goto _LL14;}case 5:{struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct*_T28=(struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct*)_T1E;_T4= _T28->f1;_T27= _T4.f0;_T26= _T28->f2;}_LL14: {struct Cyc_Absyn_Exp*e=_T27;struct Cyc_Absyn_Stmt*s1=_T26;
# 630
Cyc_CurRgn_rgnsubexp(env,e);
Cyc_CurRgn_rgnsubstmt(env,s1);goto _LL0;}case 9:{struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct*_T28=(struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct*)_T1E;_T27= _T28->f1;_T5= _T28->f2;_T24= _T5.f0;_T6= _T28->f2;_T26= _T6.f1;_T7= _T28->f3;_T23= _T7.f0;_T8= _T28->f3;_T25= _T8.f1;_T22= _T28->f4;}{struct Cyc_Absyn_Exp*e1=_T27;struct Cyc_Absyn_Exp*e2=_T24;struct Cyc_Absyn_Stmt*guard_s=_T26;struct Cyc_Absyn_Exp*e3=_T23;struct Cyc_Absyn_Stmt*cont_s=_T25;struct Cyc_Absyn_Stmt*s1=_T22;
# 635
Cyc_CurRgn_rgnsubexp(env,e1);
Cyc_CurRgn_rgnsubexp(env,e2);
Cyc_CurRgn_rgnsubexp(env,e3);
Cyc_CurRgn_rgnsubstmt(env,s1);goto _LL0;}case 13:{struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct*_T28=(struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct*)_T1E;_T21= _T28->f1;_T26= _T28->f2;}{struct _fat_ptr*l=_T21;struct Cyc_Absyn_Stmt*s1=_T26;
# 642
Cyc_CurRgn_rgnsubstmt(env,s1);goto _LL0;}case 11:{struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct*_T28=(struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct*)_T1E;_T20= _T28->f1;}{struct Cyc_List_List*es=_T20;
# 646
_TLA3: if(es!=0)goto _TLA4;else{goto _TLA5;}
_TLA4: _T9= env;_TA= es;_TB= _TA->hd;_TC= (struct Cyc_Absyn_Exp*)_TB;Cyc_CurRgn_rgnsubexp(_T9,_TC);_TD= es;
es= _TD->tl;goto _TLA3;_TLA5: goto _LL0;}case 10:{struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct*_T28=(struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct*)_T1E;_T27= _T28->f1;_T20= _T28->f2;}{struct Cyc_Absyn_Exp*e=_T27;struct Cyc_List_List*scs=_T20;
# 653
Cyc_CurRgn_rgnsubexp(env,e);
_TLA6: if(scs!=0)goto _TLA7;else{goto _TLA8;}
_TLA7: _TE= scs;_TF= _TE->hd;{struct Cyc_Absyn_Switch_clause*_T28=(struct Cyc_Absyn_Switch_clause*)_TF;struct Cyc_Absyn_Stmt*_T29;struct Cyc_Absyn_Exp*_T2A;struct Cyc_Absyn_Pat*_T2B;{struct Cyc_Absyn_Switch_clause _T2C=*_T28;_T2B= _T2C.pattern;_T2A= _T2C.where_clause;_T29= _T2C.body;}{struct Cyc_Absyn_Pat*p=_T2B;struct Cyc_Absyn_Exp*eopt=_T2A;struct Cyc_Absyn_Stmt*s1=_T29;
Cyc_CurRgn_rgnsubpat(env,p);
Cyc_CurRgn_rgnsubexpopt(env,eopt);
Cyc_CurRgn_rgnsubstmt(env,s1);_T10= scs;
scs= _T10->tl;}}goto _TLA6;_TLA8: goto _LL0;}case 15:{struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct*_T28=(struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct*)_T1E;_T26= _T28->f1;_T20= _T28->f2;}{struct Cyc_Absyn_Stmt*s1=_T26;struct Cyc_List_List*scs=_T20;
# 664
_TLA9: if(scs!=0)goto _TLAA;else{goto _TLAB;}
_TLAA: _T11= scs;_T12= _T11->hd;{struct Cyc_Absyn_Switch_clause*_T28=(struct Cyc_Absyn_Switch_clause*)_T12;struct Cyc_Absyn_Stmt*_T29;struct Cyc_Absyn_Exp*_T2A;struct Cyc_Absyn_Pat*_T2B;{struct Cyc_Absyn_Switch_clause _T2C=*_T28;_T2B= _T2C.pattern;_T2A= _T2C.where_clause;_T29= _T2C.body;}{struct Cyc_Absyn_Pat*p=_T2B;struct Cyc_Absyn_Exp*eopt=_T2A;struct Cyc_Absyn_Stmt*s1=_T29;
Cyc_CurRgn_rgnsubpat(env,p);
Cyc_CurRgn_rgnsubexpopt(env,eopt);
Cyc_CurRgn_rgnsubstmt(env,s1);_T13= scs;
scs= _T13->tl;}}goto _TLA9;_TLAB: goto _LL0;}default:{struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*_T28=(struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*)_T1E;_T1F= _T28->f1;_T26= _T28->f2;}{struct Cyc_Absyn_Decl*d=_T1F;struct Cyc_Absyn_Stmt*s1=_T26;_T14= d;{
# 674
void*_T28=_T14->r;struct Cyc_Absyn_Exp*_T29;struct Cyc_Absyn_Vardecl*_T2A;struct Cyc_Absyn_Tvar*_T2B;_T15= (int*)_T28;_T16= *_T15;if(_T16!=4)goto _TLAC;{struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct*_T2C=(struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct*)_T28;_T2B= _T2C->f1;_T2A= _T2C->f2;_T29= _T2C->f3;}{struct Cyc_Absyn_Tvar*tv=_T2B;struct Cyc_Absyn_Vardecl*vd=_T2A;struct Cyc_Absyn_Exp*open_exp_opt=_T29;_T17= d;_T18= _T17->loc;_T19= tv;
# 676
Cyc_CurRgn_check_tvar(_T18,_T19);
Cyc_CurRgn_rgnsubexpopt(env,open_exp_opt);
# 681
if(open_exp_opt!=0)goto _TLAE;_T1A= env;_T1B= _T1A.inst;_T1C= 
_check_null(Cyc_CurRgn_curr_tvar);_T1D= Cyc_Absyn_var_type(tv);Cyc_CurRgn_subst_inst(_T1B,_T1C,_T1D);
Cyc_CurRgn_rgnsubstmt(env,s1);goto _TLAF;
# 685
_TLAE: Cyc_CurRgn_rgnsubstmt(env,s1);_TLAF: goto _LL27;}_TLAC:
# 689
 Cyc_CurRgn_rgnsubdecl(env,d);
Cyc_CurRgn_rgnsubstmt(env,s1);goto _LL27;_LL27:;}goto _LL0;}}_LL0:;}}
# 697
static void Cyc_CurRgn_rgnsubdecls(struct Cyc_CurRgn_rgnsubenv env,struct Cyc_List_List*ds){struct Cyc_CurRgn_rgnsubenv _T0;struct Cyc_List_List*_T1;void*_T2;struct Cyc_Absyn_Decl*_T3;struct Cyc_List_List*_T4;
_TLB3: if(ds!=0)goto _TLB1;else{goto _TLB2;}
_TLB1: _T0= env;_T1= ds;_T2= _T1->hd;_T3= (struct Cyc_Absyn_Decl*)_T2;Cyc_CurRgn_rgnsubdecl(_T0,_T3);_T4= ds;
# 698
ds= _T4->tl;goto _TLB3;_TLB2:;}
# 702
void Cyc_CurRgn_adjust_all(struct Cyc_List_List*tds){struct Cyc_CurRgn_rgnsubenv _T0;
Cyc_CurRgn_curr_rgn_type();{struct Cyc_CurRgn_rgnsubenv _T1;
_T1.inst= 0;_T1.in_externC= 0;_T1.toplevel= 1;_T0= _T1;}{struct Cyc_CurRgn_rgnsubenv env=_T0;
Cyc_CurRgn_rgnsubdecls(env,tds);}}
