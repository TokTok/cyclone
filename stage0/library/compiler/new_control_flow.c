#include <cyc_include.h>
 struct Cyc_Core_Opt{void*v;};struct _tuple0{void*f0;void*f1;};
# 108 "./cyclone/library/std/core.h"
void*Cyc_Core_snd(struct _tuple0*);
# 121
int Cyc_Core_ptrcmp(void*,void*);
# 312 "./cyclone/library/std/core.h"
void Cyc_Core_rethrow(void*);struct Cyc_List_List{void*hd;struct Cyc_List_List*tl;};
# 57 "./cyclone/library/std/list.h"
extern struct Cyc_List_List*Cyc_List_list(struct _fat_ptr);
# 64
extern int Cyc_List_length(struct Cyc_List_List*);
# 73
extern struct Cyc_List_List*Cyc_List_copy(struct Cyc_List_List*);
# 79
extern struct Cyc_List_List*Cyc_List_map(void*(*)(void*),struct Cyc_List_List*);
# 136
extern void Cyc_List_iter_c(void(*)(void*,void*),void*,struct Cyc_List_List*);
# 173
extern struct Cyc_List_List*Cyc_List_rev(struct Cyc_List_List*);
# 179
extern struct Cyc_List_List*Cyc_List_imp_rev(struct Cyc_List_List*);
# 185
extern struct Cyc_List_List*Cyc_List_append(struct Cyc_List_List*,struct Cyc_List_List*);
# 239
extern void*Cyc_List_nth(struct Cyc_List_List*,int);
# 273
extern struct Cyc_List_List*Cyc_List_rzip(struct _RegionHandle*,struct _RegionHandle*,struct Cyc_List_List*,struct Cyc_List_List*);struct _tuple1{struct Cyc_List_List*f0;struct Cyc_List_List*f1;};
# 291
extern struct _tuple1 Cyc_List_split(struct Cyc_List_List*);
# 314
extern long Cyc_List_memq(struct Cyc_List_List*,void*);
# 37 "./cyclone/library/std/position.h"
extern struct _fat_ptr Cyc_Position_string_of_segment(unsigned);struct Cyc_AssnDef_ExistAssnFn;struct _union_Nmspace_Abs_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_Rel_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_C_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_Loc_n{int tag;int val;};union Cyc_Absyn_Nmspace{struct _union_Nmspace_Abs_n Abs_n;struct _union_Nmspace_Rel_n Rel_n;struct _union_Nmspace_C_n C_n;struct _union_Nmspace_Loc_n Loc_n;};struct _tuple2{union Cyc_Absyn_Nmspace f0;struct _fat_ptr*f1;};
# 148 "cyclone/library/compiler/absyn.h"
enum Cyc_Absyn_Scope{Cyc_Absyn_Static =0U,Cyc_Absyn_Abstract =1U,Cyc_Absyn_Public =2U,Cyc_Absyn_Extern =3U,Cyc_Absyn_ExternC =4U,Cyc_Absyn_Register =5U,Cyc_Absyn_Noreturn =6U};struct Cyc_Absyn_Tqual{long print_const: 1;long q_volatile: 1;long q_restrict: 1;long real_const: 1;unsigned loc;};
# 180
enum Cyc_Absyn_Sign{Cyc_Absyn_Signed =0U,Cyc_Absyn_Unsigned =1U,Cyc_Absyn_None =2U};
# 186
enum Cyc_Absyn_AggrKind{Cyc_Absyn_StructA =0U,Cyc_Absyn_UnionA =1U};struct Cyc_Absyn_Tvar{struct _fat_ptr*name;int identity;void*kind;void*aquals_bound;};struct Cyc_Absyn_PtrLoc{unsigned ptr_loc;unsigned rgn_loc;unsigned zt_loc;};struct Cyc_Absyn_PtrAtts{void*eff;void*nullable;void*bounds;void*zero_term;struct Cyc_Absyn_PtrLoc*ptrloc;void*autoreleased;void*aqual;};struct Cyc_Absyn_PtrInfo{void*elt_type;struct Cyc_Absyn_Tqual elt_tq;struct Cyc_Absyn_PtrAtts ptr_atts;};struct Cyc_Absyn_VarargInfo{struct _fat_ptr*name;struct Cyc_Absyn_Tqual tq;void*type;long inject;};struct Cyc_Absyn_FnInfo{struct Cyc_List_List*tvars;void*effect;struct Cyc_Absyn_Tqual ret_tqual;void*ret_type;struct Cyc_List_List*args;long c_varargs;struct Cyc_Absyn_VarargInfo*cyc_varargs;struct Cyc_List_List*qual_bnd;struct Cyc_List_List*attributes;struct Cyc_Absyn_Exp*checks_clause;struct Cyc_AssnDef_ExistAssnFn*checks_assn;struct Cyc_Absyn_Exp*requires_clause;struct Cyc_AssnDef_ExistAssnFn*requires_assn;struct Cyc_Absyn_Exp*ensures_clause;struct Cyc_AssnDef_ExistAssnFn*ensures_assn;struct Cyc_Absyn_Exp*throws_clause;struct Cyc_AssnDef_ExistAssnFn*throws_assn;struct Cyc_Absyn_Vardecl*return_value;struct Cyc_List_List*arg_vardecls;struct Cyc_List_List*effconstr;};struct Cyc_Absyn_UnknownDatatypeFieldInfo{struct _tuple2*datatype_name;struct _tuple2*field_name;long is_extensible;};struct _union_DatatypeFieldInfo_UnknownDatatypefield{int tag;struct Cyc_Absyn_UnknownDatatypeFieldInfo val;};struct _tuple3{struct Cyc_Absyn_Datatypedecl*f0;struct Cyc_Absyn_Datatypefield*f1;};struct _union_DatatypeFieldInfo_KnownDatatypefield{int tag;struct _tuple3 val;};union Cyc_Absyn_DatatypeFieldInfo{struct _union_DatatypeFieldInfo_UnknownDatatypefield UnknownDatatypefield;struct _union_DatatypeFieldInfo_KnownDatatypefield KnownDatatypefield;};struct _tuple4{enum Cyc_Absyn_AggrKind f0;struct _tuple2*f1;struct Cyc_Core_Opt*f2;};struct _union_AggrInfo_UnknownAggr{int tag;struct _tuple4 val;};struct _union_AggrInfo_KnownAggr{int tag;struct Cyc_Absyn_Aggrdecl**val;};union Cyc_Absyn_AggrInfo{struct _union_AggrInfo_UnknownAggr UnknownAggr;struct _union_AggrInfo_KnownAggr KnownAggr;};struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct{int tag;union Cyc_Absyn_DatatypeFieldInfo f1;};struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct{int tag;union Cyc_Absyn_AggrInfo f1;};struct Cyc_Absyn_AppType_Absyn_Type_struct{int tag;void*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_PointerType_Absyn_Type_struct{int tag;struct Cyc_Absyn_PtrInfo f1;};struct Cyc_Absyn_FnType_Absyn_Type_struct{int tag;struct Cyc_Absyn_FnInfo f1;};struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct{int tag;enum Cyc_Absyn_AggrKind f1;long f2;struct Cyc_List_List*f3;};struct Cyc_Absyn_Initializes_att_Absyn_Attribute_struct{int tag;int f1;};struct Cyc_Absyn_Noliveunique_att_Absyn_Attribute_struct{int tag;int f1;};struct Cyc_Absyn_Consume_att_Absyn_Attribute_struct{int tag;int f1;};struct _union_Cnst_Null_c{int tag;int val;};struct _tuple5{enum Cyc_Absyn_Sign f0;char f1;};struct _union_Cnst_Char_c{int tag;struct _tuple5 val;};struct _union_Cnst_Wchar_c{int tag;struct _fat_ptr val;};struct _tuple6{enum Cyc_Absyn_Sign f0;short f1;};struct _union_Cnst_Short_c{int tag;struct _tuple6 val;};struct _tuple7{enum Cyc_Absyn_Sign f0;int f1;};struct _union_Cnst_Int_c{int tag;struct _tuple7 val;};struct _tuple8{enum Cyc_Absyn_Sign f0;long long f1;};struct _union_Cnst_LongLong_c{int tag;struct _tuple8 val;};struct _union_Cnst_Int128_c{int tag;struct _tuple8 val;};struct _tuple9{struct _fat_ptr f0;int f1;};struct _union_Cnst_Float_c{int tag;struct _tuple9 val;};struct _union_Cnst_String_c{int tag;struct _fat_ptr val;};struct _union_Cnst_Wstring_c{int tag;struct _fat_ptr val;};union Cyc_Absyn_Cnst{struct _union_Cnst_Null_c Null_c;struct _union_Cnst_Char_c Char_c;struct _union_Cnst_Wchar_c Wchar_c;struct _union_Cnst_Short_c Short_c;struct _union_Cnst_Int_c Int_c;struct _union_Cnst_LongLong_c LongLong_c;struct _union_Cnst_Int128_c Int128_c;struct _union_Cnst_Float_c Float_c;struct _union_Cnst_String_c String_c;struct _union_Cnst_Wstring_c Wstring_c;};
# 596 "cyclone/library/compiler/absyn.h"
enum Cyc_Absyn_Primop{Cyc_Absyn_Plus =0U,Cyc_Absyn_Times =1U,Cyc_Absyn_Minus =2U,Cyc_Absyn_Div =3U,Cyc_Absyn_Mod =4U,Cyc_Absyn_Eq =5U,Cyc_Absyn_Neq =6U,Cyc_Absyn_Gt =7U,Cyc_Absyn_Lt =8U,Cyc_Absyn_Gte =9U,Cyc_Absyn_Lte =10U,Cyc_Absyn_Not =11U,Cyc_Absyn_Bitnot =12U,Cyc_Absyn_Bitand =13U,Cyc_Absyn_Bitor =14U,Cyc_Absyn_Bitxor =15U,Cyc_Absyn_Bitlshift =16U,Cyc_Absyn_Bitlrshift =17U,Cyc_Absyn_Numelts =18U,Cyc_Absyn_Tagof =19U,Cyc_Absyn_UDiv =20U,Cyc_Absyn_UMod =21U,Cyc_Absyn_UGt =22U,Cyc_Absyn_ULt =23U,Cyc_Absyn_UGte =24U,Cyc_Absyn_ULte =25U};struct Cyc_Absyn_PrimopOpt{enum Cyc_Absyn_Primop v;};
# 631
enum Cyc_Absyn_Incrementor{Cyc_Absyn_PreInc =0U,Cyc_Absyn_PostInc =1U,Cyc_Absyn_PreDec =2U,Cyc_Absyn_PostDec =3U};struct Cyc_Absyn_VarargCallInfo{int num_varargs;struct Cyc_List_List*injectors;struct Cyc_Absyn_VarargInfo*vai;};
# 656
enum Cyc_Absyn_Coercion{Cyc_Absyn_Unknown_coercion =0U,Cyc_Absyn_No_coercion =1U,Cyc_Absyn_Null_to_NonNull =2U,Cyc_Absyn_Subset_coercion =3U,Cyc_Absyn_Other_coercion =4U};struct Cyc_Absyn_FieldName_Absyn_Designator_struct{int tag;struct _fat_ptr*f1;};
# 671
enum Cyc_Absyn_MallocKind{Cyc_Absyn_Malloc =0U,Cyc_Absyn_Calloc =1U,Cyc_Absyn_Vmalloc =2U};struct Cyc_Absyn_MallocInfo{enum Cyc_Absyn_MallocKind mknd;struct Cyc_Absyn_Exp*rgn;struct Cyc_Absyn_Exp*aqual;void**elt_type;struct Cyc_Absyn_Exp*num_elts;long fat_result;long inline_call;};struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct{int tag;union Cyc_Absyn_Cnst f1;};struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct{int tag;void*f1;};struct Cyc_Absyn_Pragma_e_Absyn_Raw_exp_struct{int tag;struct _fat_ptr f1;};struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct{int tag;enum Cyc_Absyn_Primop f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_PrimopOpt*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;enum Cyc_Absyn_Incrementor f2;};struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_List_List*f2;struct Cyc_Absyn_VarargCallInfo*f3;long f4;};struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;long f2;};struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct{int tag;void*f1;struct Cyc_Absyn_Exp*f2;long f3;enum Cyc_Absyn_Coercion f4;};struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _fat_ptr*f2;long f3;long f4;};struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _fat_ptr*f2;long f3;long f4;};struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct{int tag;struct Cyc_List_List*f1;};struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Vardecl*f1;struct Cyc_Absyn_Exp*f2;struct Cyc_Absyn_Exp*f3;long f4;};struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;void*f2;long f3;};struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct{int tag;struct _tuple2*f1;struct Cyc_List_List*f2;struct Cyc_List_List*f3;struct Cyc_Absyn_Aggrdecl*f4;};struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct{int tag;void*f1;long f2;struct Cyc_List_List*f3;};struct Cyc_Absyn_Datatype_e_Absyn_Raw_exp_struct{int tag;struct Cyc_List_List*f1;struct Cyc_Absyn_Datatypedecl*f2;struct Cyc_Absyn_Datatypefield*f3;};struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_MallocInfo f1;};struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Stmt*f1;};struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _fat_ptr*f2;};struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;long f2;long f3;};struct Cyc_Absyn_Exp{void*topt;void*r;unsigned loc;void*annot;};struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Stmt*f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Stmt*f2;struct Cyc_Absyn_Stmt*f3;};struct _tuple11{struct Cyc_Absyn_Exp*f0;struct Cyc_Absyn_Stmt*f1;};struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct{int tag;struct _tuple11 f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _tuple11 f2;struct _tuple11 f3;struct Cyc_Absyn_Stmt*f4;};struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_List_List*f2;void*f3;};struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_List_List*f1;struct Cyc_Absyn_Switch_clause**f2;};struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Decl*f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct{int tag;struct _fat_ptr*f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Stmt*f1;struct _tuple11 f2;};struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Stmt*f1;struct Cyc_List_List*f2;void*f3;};struct Cyc_Absyn_Stmt{void*r;unsigned loc;void*annot;};struct Cyc_Absyn_Pat{void*r;void*topt;unsigned loc;};struct Cyc_Absyn_Switch_clause{struct Cyc_Absyn_Pat*pattern;struct Cyc_Core_Opt*pat_vars;struct Cyc_Absyn_Exp*where_clause;struct Cyc_Absyn_Stmt*body;unsigned loc;};struct Cyc_Absyn_Global_b_Absyn_Binding_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};struct Cyc_Absyn_Param_b_Absyn_Binding_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};struct Cyc_Absyn_Local_b_Absyn_Binding_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};struct Cyc_Absyn_Pat_b_Absyn_Binding_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};struct Cyc_Absyn_Vardecl{enum Cyc_Absyn_Scope sc;struct _tuple2*name;unsigned varloc;struct Cyc_Absyn_Tqual tq;void*type;struct Cyc_Absyn_Exp*initializer;void*rgn;struct Cyc_List_List*attributes;long escapes;long is_proto;struct Cyc_Absyn_Exp*rename;};struct Cyc_Absyn_Fndecl{enum Cyc_Absyn_Scope sc;long is_inline;struct _tuple2*name;struct Cyc_Absyn_Stmt*body;struct Cyc_Absyn_FnInfo i;void*cached_type;struct Cyc_Core_Opt*param_vardecls;struct Cyc_Absyn_Vardecl*fn_vardecl;enum Cyc_Absyn_Scope orig_scope;long escapes;};struct Cyc_Absyn_Aggrfield{struct _fat_ptr*name;struct Cyc_Absyn_Tqual tq;void*type;struct Cyc_Absyn_Exp*width;struct Cyc_List_List*attributes;struct Cyc_Absyn_Exp*requires_clause;};struct Cyc_Absyn_AggrdeclImpl{struct Cyc_List_List*exist_vars;struct Cyc_List_List*qual_bnd;struct Cyc_List_List*fields;long tagged;struct Cyc_List_List*effconstr;};struct Cyc_Absyn_Aggrdecl{enum Cyc_Absyn_AggrKind kind;enum Cyc_Absyn_Scope sc;struct _tuple2*name;struct Cyc_List_List*tvs;struct Cyc_Absyn_AggrdeclImpl*impl;struct Cyc_List_List*attributes;long expected_mem_kind;};struct Cyc_Absyn_Datatypefield{struct _tuple2*name;struct Cyc_List_List*typs;unsigned loc;enum Cyc_Absyn_Scope sc;};struct Cyc_Absyn_Datatypedecl{enum Cyc_Absyn_Scope sc;struct _tuple2*name;struct Cyc_List_List*tvs;struct Cyc_Core_Opt*fields;long is_extensible;};struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Fndecl*f1;};struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Pat*f1;struct Cyc_Core_Opt*f2;struct Cyc_Absyn_Exp*f3;void*f4;};struct Cyc_Absyn_Letv_d_Absyn_Raw_decl_struct{int tag;struct Cyc_List_List*f1;};struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Tvar*f1;struct Cyc_Absyn_Vardecl*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct{int tag;struct _fat_ptr*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct{int tag;struct _tuple2*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct{int tag;struct Cyc_List_List*f1;};struct Cyc_Absyn_Decl{void*r;unsigned loc;};
# 1066
void*Cyc_Absyn_compress(void*);
# 1101
extern void*Cyc_Absyn_void_type;
# 1187
struct Cyc_Absyn_Exp*Cyc_Absyn_signed_int_exp(int,unsigned);
struct Cyc_Absyn_Exp*Cyc_Absyn_uint_exp(unsigned,unsigned);
# 1343
struct Cyc_Absyn_Aggrdecl*Cyc_Absyn_get_known_aggrdecl(union Cyc_Absyn_AggrInfo);
# 1345
long Cyc_Absyn_is_nontagged_nonrequire_union_type(void*);
# 1347
long Cyc_Absyn_is_require_union_type(void*);struct Cyc___cycFILE;
# 53 "./cyclone/library/std/cycboot.h"
extern struct Cyc___cycFILE*Cyc_stderr;struct Cyc_String_pa_PrintArg_struct{int tag;struct _fat_ptr f1;};
# 100
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);struct Cyc_Dict_T;struct Cyc_Dict_Dict{int(*rel)(void*,void*);struct _RegionHandle*r;const struct Cyc_Dict_T*t;};extern char Cyc_Dict_Absent[7U];struct Cyc_Dict_Absent_exn_struct{char*tag;};
# 87 "./cyclone/library/std/dict.h"
extern struct Cyc_Dict_Dict Cyc_Dict_insert(struct Cyc_Dict_Dict,void*,void*);
# 111
extern void*Cyc_Dict_lookup_other(struct Cyc_Dict_Dict,int(*)(void*,void*),void*);
# 124
extern long Cyc_Dict_lookup_bool(struct Cyc_Dict_Dict,void*,void**);
# 147
extern void Cyc_Dict_iter_c(void(*)(void*,void*,void*),void*,struct Cyc_Dict_Dict);
# 40 "cyclone/library/compiler/cf_flowinfo.h"
extern long Cyc_CfFlowInfo_anal_error;
extern void Cyc_CfFlowInfo_aerr(unsigned,struct _fat_ptr,struct _fat_ptr);struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};struct Cyc_CfFlowInfo_MallocPt_CfFlowInfo_Root_struct{int tag;struct Cyc_Absyn_Exp*f1;void*f2;};struct Cyc_CfFlowInfo_InitParam_CfFlowInfo_Root_struct{int tag;int f1;void*f2;};struct Cyc_CfFlowInfo_Dot_CfFlowInfo_PathCon_struct{int tag;int f1;};struct Cyc_CfFlowInfo_Star_CfFlowInfo_PathCon_struct{int tag;};struct Cyc_CfFlowInfo_Place{void*root;struct Cyc_List_List*path;};
# 73
enum Cyc_CfFlowInfo_InitLevel{Cyc_CfFlowInfo_NoneIL =0U,Cyc_CfFlowInfo_AllIL =1U};struct Cyc_CfFlowInfo_IsZero_Absyn_AbsynAnnot_struct{char*tag;};extern char Cyc_CfFlowInfo_NotZero[8U];struct Cyc_CfFlowInfo_NotZero_Absyn_AbsynAnnot_struct{char*tag;};extern char Cyc_CfFlowInfo_UnknownZ[9U];struct Cyc_CfFlowInfo_UnknownZ_Absyn_AbsynAnnot_struct{char*tag;};
# 86
extern struct Cyc_CfFlowInfo_IsZero_Absyn_AbsynAnnot_struct Cyc_CfFlowInfo_IsZero_val;
extern struct Cyc_CfFlowInfo_NotZero_Absyn_AbsynAnnot_struct Cyc_CfFlowInfo_NotZero_val;
extern struct Cyc_CfFlowInfo_UnknownZ_Absyn_AbsynAnnot_struct Cyc_CfFlowInfo_UnknownZ_val;struct _union_AbsLVal_PlaceL{int tag;struct Cyc_CfFlowInfo_Place*val;};struct _union_AbsLVal_UnknownL{int tag;int val;};union Cyc_CfFlowInfo_AbsLVal{struct _union_AbsLVal_PlaceL PlaceL;struct _union_AbsLVal_UnknownL UnknownL;};
# 95
extern union Cyc_CfFlowInfo_AbsLVal Cyc_CfFlowInfo_PlaceL(struct Cyc_CfFlowInfo_Place*);
extern union Cyc_CfFlowInfo_AbsLVal Cyc_CfFlowInfo_UnknownL (void);struct Cyc_CfFlowInfo_UnionRInfo{long is_union;int fieldnum;};struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct{int tag;enum Cyc_CfFlowInfo_InitLevel f1;};struct Cyc_CfFlowInfo_Esc_CfFlowInfo_AbsRVal_struct{int tag;enum Cyc_CfFlowInfo_InitLevel f1;};struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct{int tag;struct Cyc_CfFlowInfo_Place*f1;};struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct{int tag;void*f1;};struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct{int tag;struct Cyc_CfFlowInfo_UnionRInfo f1;struct _fat_ptr f2;};struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct{int tag;struct Cyc_Absyn_Exp*f1;int f2;void*f3;long f4;};struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct{int tag;struct Cyc_Absyn_Vardecl*f1;void*f2;};struct _union_FlowInfo_BottomFL{int tag;int val;};struct _union_FlowInfo_ReachableFL{int tag;struct Cyc_Dict_Dict val;};union Cyc_CfFlowInfo_FlowInfo{struct _union_FlowInfo_BottomFL BottomFL;struct _union_FlowInfo_ReachableFL ReachableFL;};
# 143
extern union Cyc_CfFlowInfo_FlowInfo Cyc_CfFlowInfo_BottomFL (void);
extern union Cyc_CfFlowInfo_FlowInfo Cyc_CfFlowInfo_ReachableFL(struct Cyc_Dict_Dict);struct Cyc_CfFlowInfo_FlowEnv{void*zero;void*notzeroall;void*unknown_none;void*unknown_all;void*esc_none;void*esc_all;struct Cyc_Dict_Dict mt_flowdict;struct Cyc_CfFlowInfo_Place*dummy_place;};
# 158
extern struct Cyc_CfFlowInfo_FlowEnv*Cyc_CfFlowInfo_new_flow_env (void);
# 160
extern int Cyc_CfFlowInfo_get_field_index(void*,struct _fat_ptr*);
extern int Cyc_CfFlowInfo_get_field_index_fs(struct Cyc_List_List*,struct _fat_ptr*);
extern int Cyc_CfFlowInfo_root_cmp(void*,void*);
# 165
extern struct _fat_ptr Cyc_CfFlowInfo_aggrfields_to_aggrdict(struct Cyc_CfFlowInfo_FlowEnv*,struct Cyc_List_List*,long,void*);
# 167
extern void*Cyc_CfFlowInfo_typ_to_absrval(struct Cyc_CfFlowInfo_FlowEnv*,void*,long,void*);
# 169
extern void*Cyc_CfFlowInfo_make_unique_consumed(struct Cyc_CfFlowInfo_FlowEnv*,struct Cyc_List_List*,void*,struct Cyc_Absyn_Exp*,int,void*,long);
# 171
extern long Cyc_CfFlowInfo_is_unique_consumed(struct Cyc_Absyn_Exp*,int,void*,long*);
extern void*Cyc_CfFlowInfo_make_unique_unconsumed(struct Cyc_CfFlowInfo_FlowEnv*,void*);struct _tuple13{void*f0;struct Cyc_List_List*f1;};
extern struct _tuple13 Cyc_CfFlowInfo_unname_rval(void*);
# 175
extern enum Cyc_CfFlowInfo_InitLevel Cyc_CfFlowInfo_initlevel(struct Cyc_CfFlowInfo_FlowEnv*,struct Cyc_Dict_Dict,void*);
extern void*Cyc_CfFlowInfo_lookup_place(struct Cyc_Dict_Dict,struct Cyc_CfFlowInfo_Place*);
# 178
extern long Cyc_CfFlowInfo_is_init_pointer(void*);
extern long Cyc_CfFlowInfo_flow_lessthan_approx(union Cyc_CfFlowInfo_FlowInfo,union Cyc_CfFlowInfo_FlowInfo);
# 181
extern void Cyc_CfFlowInfo_print_absrval(void*);
# 188
extern void Cyc_CfFlowInfo_print_flow(union Cyc_CfFlowInfo_FlowInfo);
# 210 "cyclone/library/compiler/cf_flowinfo.h"
extern struct Cyc_Dict_Dict Cyc_CfFlowInfo_escape_deref(struct Cyc_CfFlowInfo_FlowEnv*,struct Cyc_Dict_Dict,void*);
extern struct Cyc_Dict_Dict Cyc_CfFlowInfo_assign_place(struct Cyc_CfFlowInfo_FlowEnv*,unsigned,struct Cyc_Dict_Dict,struct Cyc_CfFlowInfo_Place*,void*);
extern union Cyc_CfFlowInfo_FlowInfo Cyc_CfFlowInfo_join_tryflow(struct Cyc_CfFlowInfo_FlowEnv*,union Cyc_CfFlowInfo_FlowInfo,union Cyc_CfFlowInfo_FlowInfo);
extern union Cyc_CfFlowInfo_FlowInfo Cyc_CfFlowInfo_join_flow(struct Cyc_CfFlowInfo_FlowEnv*,union Cyc_CfFlowInfo_FlowInfo,union Cyc_CfFlowInfo_FlowInfo);struct _tuple14{union Cyc_CfFlowInfo_FlowInfo f0;void*f1;};
extern struct _tuple14 Cyc_CfFlowInfo_join_flow_and_rval(struct Cyc_CfFlowInfo_FlowEnv*,struct _tuple14,struct _tuple14);struct Cyc_Hashtable_Table;
# 42 "./cyclone/library/std/hashtable.h"
extern struct Cyc_Hashtable_Table*Cyc_Hashtable_create(int,int(*)(void*,void*),int(*)(void*));
# 53
extern void Cyc_Hashtable_insert(struct Cyc_Hashtable_Table*,void*,void*);
# 55
extern void*Cyc_Hashtable_lookup(struct Cyc_Hashtable_Table*,void*);
# 59
extern void**Cyc_Hashtable_lookup_opt(struct Cyc_Hashtable_Table*,void*);struct Cyc_JumpAnalysis_Jump_Anal_Result{struct Cyc_Hashtable_Table*pop_tables;struct Cyc_Hashtable_Table*succ_tables;struct Cyc_Hashtable_Table*pat_pop_tables;};
# 62 "cyclone/library/compiler/attributes.h"
long Cyc_Atts_is_noreturn_fn_type(void*);
# 66 "cyclone/library/compiler/flags.h"
extern long Cyc_Flags_warn_lose_unique;
# 115 "cyclone/library/compiler/tcpat.h"
long Cyc_Tcpat_has_vars(struct Cyc_Core_Opt*);
# 30 "cyclone/library/compiler/tcutil.h"
long Cyc_Tcutil_is_void_type(void*);
# 32
long Cyc_Tcutil_is_any_int_type(void*);
long Cyc_Tcutil_is_any_float_type(void*);
# 47
long Cyc_Tcutil_is_zeroterm_pointer_type(void*);
# 49
long Cyc_Tcutil_is_bound_one(void*,long);
# 59
void*Cyc_Tcutil_pointer_elt_type(void*);
# 134
void*Cyc_Tcutil_rsubstitute(struct _RegionHandle*,struct Cyc_List_List*,void*);
# 155
void*Cyc_Tcutil_fndecl2type(struct Cyc_Absyn_Fndecl*);
# 180
long Cyc_Tcutil_is_zero_ptr_deref(struct Cyc_Absyn_Exp*,void**,long*,void**);
# 188
long Cyc_Tcutil_is_noalias_pointer(struct Cyc_List_List*,void*,long);
# 198
long Cyc_Tcutil_is_noalias_pointer_or_aggr(struct Cyc_List_List*,void*);
# 235
struct Cyc_List_List*Cyc_Tcutil_filter_nulls(struct Cyc_List_List*);
# 261
struct Cyc_List_List*Cyc_Tcutil_get_aquals_bounds(struct Cyc_Absyn_Fndecl*);struct Cyc___cycFILE;
# 98 "bazel-out/k8-fastbuild/bin/cyclone/library/std/libc/stdio.h"
extern struct Cyc___cycFILE*Cyc_stderr;
# 161
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 32 "cyclone/library/compiler/warn.h"
extern int Cyc_Warn_num_errors;
# 41
void Cyc_Warn_warn(unsigned,struct _fat_ptr,struct _fat_ptr);
# 51
void*Cyc_Warn_impos(struct _fat_ptr,struct _fat_ptr);
# 69 "cyclone/library/compiler/absynpp.h"
struct _fat_ptr Cyc_Absynpp_exp2string(struct Cyc_Absyn_Exp*);
# 71
struct _fat_ptr Cyc_Absynpp_qvar2string(struct _tuple2*);
# 51 "./cyclone/library/std/string.h"
extern int Cyc_strcmp(struct _fat_ptr,struct _fat_ptr);struct Cyc_NewControlFlow_CFStmtAnnot{int visited;};static char Cyc_NewControlFlow_CFAnnot[8U]="CFAnnot";struct Cyc_NewControlFlow_CFAnnot_Absyn_AbsynAnnot_struct{char*tag;struct Cyc_NewControlFlow_CFStmtAnnot f1;};struct Cyc_NewControlFlow_AnalEnv{struct Cyc_JumpAnalysis_Jump_Anal_Result*all_tables;struct Cyc_Hashtable_Table*succ_table;struct Cyc_Hashtable_Table*pat_pop_table;struct Cyc_CfFlowInfo_FlowEnv*fenv;long iterate_again;int iteration_num;long in_try;union Cyc_CfFlowInfo_FlowInfo tryflow;long noreturn;void*return_type;struct Cyc_List_List*unique_pat_vars;struct Cyc_List_List*param_roots;struct Cyc_List_List*noconsume_params;struct Cyc_Hashtable_Table*flow_table;struct Cyc_List_List*aquals_bounds;};struct _tuple17{void*f0;long f1;};
# 98 "cyclone/library/compiler/new_control_flow.cyc"
static union Cyc_CfFlowInfo_FlowInfo Cyc_NewControlFlow_anal_stmt(struct Cyc_NewControlFlow_AnalEnv*,union Cyc_CfFlowInfo_FlowInfo,struct Cyc_Absyn_Stmt*,struct _tuple17*);
static union Cyc_CfFlowInfo_FlowInfo Cyc_NewControlFlow_anal_decl(struct Cyc_NewControlFlow_AnalEnv*,union Cyc_CfFlowInfo_FlowInfo,struct Cyc_Absyn_Decl*);struct _tuple18{union Cyc_CfFlowInfo_FlowInfo f0;union Cyc_CfFlowInfo_AbsLVal f1;};
static struct _tuple18 Cyc_NewControlFlow_anal_Lexp(struct Cyc_NewControlFlow_AnalEnv*,union Cyc_CfFlowInfo_FlowInfo,long,long,struct Cyc_Absyn_Exp*);
# 103
static struct _tuple14 Cyc_NewControlFlow_anal_Rexp(struct Cyc_NewControlFlow_AnalEnv*,long,union Cyc_CfFlowInfo_FlowInfo,struct Cyc_Absyn_Exp*,long);struct _tuple19{union Cyc_CfFlowInfo_FlowInfo f0;union Cyc_CfFlowInfo_FlowInfo f1;};
static struct _tuple19 Cyc_NewControlFlow_anal_test(struct Cyc_NewControlFlow_AnalEnv*,union Cyc_CfFlowInfo_FlowInfo,struct Cyc_Absyn_Exp*);
# 106
static union Cyc_CfFlowInfo_FlowInfo Cyc_NewControlFlow_expand_unique_places(struct Cyc_NewControlFlow_AnalEnv*,union Cyc_CfFlowInfo_FlowInfo,struct Cyc_List_List*);
# 110
static struct Cyc_NewControlFlow_CFStmtAnnot*Cyc_NewControlFlow_get_stmt_annot(struct Cyc_Absyn_Stmt*s){struct Cyc_Absyn_Stmt*_T0;struct Cyc_NewControlFlow_CFAnnot_Absyn_AbsynAnnot_struct*_T1;char*_T2;char*_T3;struct Cyc_NewControlFlow_CFAnnot_Absyn_AbsynAnnot_struct*_T4;struct Cyc_NewControlFlow_CFStmtAnnot*_T5;struct Cyc_NewControlFlow_CFStmtAnnot*_T6;struct Cyc_Absyn_Stmt*_T7;struct Cyc_NewControlFlow_CFAnnot_Absyn_AbsynAnnot_struct*_T8;struct Cyc_NewControlFlow_CFStmtAnnot*_T9;_T0= s;{
void*_TA=_T0->annot;void*_TB;_T1= (struct Cyc_NewControlFlow_CFAnnot_Absyn_AbsynAnnot_struct*)_TA;_T2= _T1->tag;_T3= Cyc_NewControlFlow_CFAnnot;if(_T2!=_T3)goto _TL0;{struct Cyc_NewControlFlow_CFAnnot_Absyn_AbsynAnnot_struct*_TC=(struct Cyc_NewControlFlow_CFAnnot_Absyn_AbsynAnnot_struct*)_TA;_T4= (struct Cyc_NewControlFlow_CFAnnot_Absyn_AbsynAnnot_struct*)_TA;_T5= & _T4->f1;_TB= (struct Cyc_NewControlFlow_CFStmtAnnot*)_T5;}{struct Cyc_NewControlFlow_CFStmtAnnot*x=(struct Cyc_NewControlFlow_CFStmtAnnot*)_TB;_T6= x;
# 113
return _T6;}_TL0: _T7= s;{struct Cyc_NewControlFlow_CFAnnot_Absyn_AbsynAnnot_struct*_TC=_cycalloc(sizeof(struct Cyc_NewControlFlow_CFAnnot_Absyn_AbsynAnnot_struct));_TC->tag= Cyc_NewControlFlow_CFAnnot;
# 115
_TC->f1.visited= 0;_T8= (struct Cyc_NewControlFlow_CFAnnot_Absyn_AbsynAnnot_struct*)_TC;}_T7->annot= (void*)_T8;_T9= 
Cyc_NewControlFlow_get_stmt_annot(s);return _T9;;}}
# 120
static union Cyc_CfFlowInfo_FlowInfo*Cyc_NewControlFlow_get_stmt_flow(struct Cyc_NewControlFlow_AnalEnv*env,struct Cyc_Absyn_Stmt*s){union Cyc_CfFlowInfo_FlowInfo**(*_T0)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*);void**(*_T1)(struct Cyc_Hashtable_Table*,void*);struct Cyc_NewControlFlow_AnalEnv*_T2;struct Cyc_Hashtable_Table*_T3;struct Cyc_Absyn_Stmt*_T4;union Cyc_CfFlowInfo_FlowInfo*_T5;void(*_T6)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*,union Cyc_CfFlowInfo_FlowInfo*);void(*_T7)(struct Cyc_Hashtable_Table*,void*,void*);struct Cyc_NewControlFlow_AnalEnv*_T8;struct Cyc_Hashtable_Table*_T9;struct Cyc_Absyn_Stmt*_TA;union Cyc_CfFlowInfo_FlowInfo*_TB;union Cyc_CfFlowInfo_FlowInfo*_TC;union Cyc_CfFlowInfo_FlowInfo**_TD;union Cyc_CfFlowInfo_FlowInfo*_TE;_T1= Cyc_Hashtable_lookup_opt;{
union Cyc_CfFlowInfo_FlowInfo**(*_TF)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*)=(union Cyc_CfFlowInfo_FlowInfo**(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*))_T1;_T0= _TF;}_T2= env;_T3= _T2->flow_table;_T4= s;{union Cyc_CfFlowInfo_FlowInfo**sflow=_T0(_T3,_T4);
if(sflow!=0)goto _TL2;{
union Cyc_CfFlowInfo_FlowInfo*res;res= _cycalloc(sizeof(union Cyc_CfFlowInfo_FlowInfo));_T5= res;({__typeof__(Cyc_CfFlowInfo_BottomFL())_TF=Cyc_CfFlowInfo_BottomFL();*_T5= _TF;});_T7= Cyc_Hashtable_insert;{
void(*_TF)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*,union Cyc_CfFlowInfo_FlowInfo*)=(void(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*,union Cyc_CfFlowInfo_FlowInfo*))_T7;_T6= _TF;}_T8= env;_T9= _T8->flow_table;_TA= s;_TB= res;_T6(_T9,_TA,_TB);_TC= res;
return _TC;}_TL2: _TD= sflow;_TE= *_TD;
# 127
return _TE;}}struct _tuple20{struct Cyc_NewControlFlow_CFStmtAnnot*f0;union Cyc_CfFlowInfo_FlowInfo*f1;};
# 130
static struct _tuple20 Cyc_NewControlFlow_pre_stmt_check(struct Cyc_NewControlFlow_AnalEnv*env,union Cyc_CfFlowInfo_FlowInfo inflow,struct Cyc_Absyn_Stmt*s){union Cyc_CfFlowInfo_FlowInfo*_T0;struct Cyc_NewControlFlow_AnalEnv*_T1;struct Cyc_CfFlowInfo_FlowEnv*_T2;union Cyc_CfFlowInfo_FlowInfo _T3;union Cyc_CfFlowInfo_FlowInfo*_T4;union Cyc_CfFlowInfo_FlowInfo _T5;struct Cyc_NewControlFlow_CFStmtAnnot*_T6;struct Cyc_NewControlFlow_AnalEnv*_T7;struct _tuple20 _T8;
struct Cyc_NewControlFlow_CFStmtAnnot*annot=Cyc_NewControlFlow_get_stmt_annot(s);
union Cyc_CfFlowInfo_FlowInfo*sflow=Cyc_NewControlFlow_get_stmt_flow(env,s);_T0= sflow;_T1= env;_T2= _T1->fenv;_T3= inflow;_T4= sflow;_T5= *_T4;
# 134
({__typeof__(Cyc_CfFlowInfo_join_flow(_T2,_T3,_T5))_T9=Cyc_CfFlowInfo_join_flow(_T2,_T3,_T5);*_T0= _T9;});_T6= annot;_T7= env;
# 142
_T6->visited= _T7->iteration_num;{struct _tuple20 _T9;
_T9.f0= annot;_T9.f1= sflow;_T8= _T9;}return _T8;}
# 152
static void Cyc_NewControlFlow_update_tryflow(struct Cyc_NewControlFlow_AnalEnv*env,union Cyc_CfFlowInfo_FlowInfo new_flow){struct Cyc_NewControlFlow_AnalEnv*_T0;long _T1;struct Cyc_NewControlFlow_AnalEnv*_T2;struct Cyc_NewControlFlow_AnalEnv*_T3;struct Cyc_CfFlowInfo_FlowEnv*_T4;union Cyc_CfFlowInfo_FlowInfo _T5;struct Cyc_NewControlFlow_AnalEnv*_T6;union Cyc_CfFlowInfo_FlowInfo _T7;_T0= env;_T1= _T0->in_try;
if(!_T1)goto _TL4;_T2= env;_T3= env;_T4= _T3->fenv;_T5= new_flow;_T6= env;_T7= _T6->tryflow;
# 160
({__typeof__(Cyc_CfFlowInfo_join_tryflow(_T4,_T5,_T7))_T8=Cyc_CfFlowInfo_join_tryflow(_T4,_T5,_T7);_T2->tryflow= _T8;});goto _TL5;_TL4: _TL5:;}struct _tuple21{struct Cyc_NewControlFlow_AnalEnv*f0;unsigned f1;struct Cyc_Dict_Dict f2;};
# 167
static void Cyc_NewControlFlow_check_unique_root(struct _tuple21*ckenv,void*root,void*rval){struct _tuple21*_T0;void*_T1;int*_T2;int _T3;void*_T4;struct Cyc_Dict_Dict _T5;void*_T6;void**_T7;long _T8;struct Cyc_NewControlFlow_AnalEnv*_T9;struct Cyc_List_List*_TA;struct Cyc_Absyn_Vardecl*_TB;void*_TC;long _TD;void*_TE;int*_TF;unsigned _T10;void*_T11;void*_T12;void*_T13;struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct*_T14;enum Cyc_CfFlowInfo_InitLevel _T15;struct Cyc_String_pa_PrintArg_struct _T16;struct Cyc_Absyn_Vardecl*_T17;struct _tuple2*_T18;unsigned _T19;struct _fat_ptr _T1A;struct _fat_ptr _T1B;struct Cyc_Dict_Dict _T1C;unsigned _T1D;struct Cyc_NewControlFlow_AnalEnv*_T1E;_T0= ckenv;{struct _tuple21 _T1F=*_T0;_T1E= _T1F.f0;_T1D= _T1F.f1;_T1C= _T1F.f2;}{struct Cyc_NewControlFlow_AnalEnv*env=_T1E;unsigned loc=_T1D;struct Cyc_Dict_Dict new_fd=_T1C;struct Cyc_Absyn_Vardecl*_T1F;_T1= root;_T2= (int*)_T1;_T3= *_T2;if(_T3!=0)goto _TL6;_T4= root;{struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*_T20=(struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*)_T4;_T1F= _T20->f1;}{struct Cyc_Absyn_Vardecl*vd=_T1F;_T5= new_fd;_T6= root;_T7= & rval;_T8= 
# 171
Cyc_Dict_lookup_bool(_T5,_T6,_T7);if(_T8)goto _TL8;else{goto _TLA;}_TLA: _T9= env;_TA= _T9->aquals_bounds;_TB= vd;_TC= _TB->type;_TD= 
Cyc_Tcutil_is_noalias_pointer_or_aggr(_TA,_TC);
# 171
if(!_TD)goto _TL8;
# 173
retry:{void*_T20;_TE= rval;_TF= (int*)_TE;_T10= *_TF;switch(_T10){case 8: _T11= rval;{struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*_T21=(struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*)_T11;_T12= _T21->f2;_T20= (void*)_T12;}{void*r=_T20;
# 176
rval= r;goto retry;}case 7: goto _LLE;case 2: _T13= rval;_T14= (struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct*)_T13;_T15= _T14->f1;if(_T15!=Cyc_CfFlowInfo_NoneIL)goto _TLC;_LLE: goto _LL10;_TLC: goto _LL11;case 0: _LL10: goto _LL8;default: _LL11:{struct Cyc_String_pa_PrintArg_struct _T21;_T21.tag= 0;_T17= vd;_T18= _T17->name;
# 187
({__typeof__(Cyc_Absynpp_qvar2string(_T18))_T22=Cyc_Absynpp_qvar2string(_T18);_T21.f1= _T22;});_T16= _T21;}{struct Cyc_String_pa_PrintArg_struct _T21=_T16;void*_T22[1];_T22[0]= & _T21;_T19= loc;_T1A= 
# 186
_tag_fat("alias-free pointer(s) reachable from %s may become unreachable.",sizeof(char),64U);_T1B= _tag_fat(_T22,sizeof(void*),1);Cyc_Warn_warn(_T19,_T1A,_T1B);}goto _LL8;}_LL8:;}goto _TL9;_TL8: _TL9: goto _LL3;}_TL6: goto _LL3;_LL3:;}}
# 200
static void Cyc_NewControlFlow_update_flow(struct Cyc_NewControlFlow_AnalEnv*env,struct Cyc_Absyn_Stmt*s,union Cyc_CfFlowInfo_FlowInfo flow){struct Cyc_NewControlFlow_AnalEnv*_T0;struct Cyc_CfFlowInfo_FlowEnv*_T1;union Cyc_CfFlowInfo_FlowInfo _T2;union Cyc_CfFlowInfo_FlowInfo*_T3;union Cyc_CfFlowInfo_FlowInfo _T4;long _T5;struct _tuple19 _T6;union Cyc_CfFlowInfo_FlowInfo _T7;struct _union_FlowInfo_ReachableFL _T8;unsigned _T9;union Cyc_CfFlowInfo_FlowInfo _TA;struct _union_FlowInfo_ReachableFL _TB;unsigned _TC;union Cyc_CfFlowInfo_FlowInfo _TD;struct _union_FlowInfo_ReachableFL _TE;union Cyc_CfFlowInfo_FlowInfo _TF;struct _union_FlowInfo_ReachableFL _T10;struct _tuple21 _T11;struct Cyc_Absyn_Stmt*_T12;void(*_T13)(void(*)(struct _tuple21*,void*,void*),struct _tuple21*,struct Cyc_Dict_Dict);void(*_T14)(void(*)(void*,void*,void*),void*,struct Cyc_Dict_Dict);struct _tuple21*_T15;struct _tuple21*_T16;struct Cyc_Dict_Dict _T17;union Cyc_CfFlowInfo_FlowInfo _T18;union Cyc_CfFlowInfo_FlowInfo*_T19;union Cyc_CfFlowInfo_FlowInfo _T1A;long _T1B;union Cyc_CfFlowInfo_FlowInfo*_T1C;struct Cyc_NewControlFlow_CFStmtAnnot*_T1D;int _T1E;struct Cyc_NewControlFlow_AnalEnv*_T1F;int _T20;struct Cyc_NewControlFlow_AnalEnv*_T21;
struct Cyc_NewControlFlow_CFStmtAnnot*annot=Cyc_NewControlFlow_get_stmt_annot(s);
union Cyc_CfFlowInfo_FlowInfo*sflow=Cyc_NewControlFlow_get_stmt_flow(env,s);_T0= env;_T1= _T0->fenv;_T2= flow;_T3= sflow;_T4= *_T3;{
union Cyc_CfFlowInfo_FlowInfo new_flow=Cyc_CfFlowInfo_join_flow(_T1,_T2,_T4);_T5= Cyc_Flags_warn_lose_unique;
# 207
if(!_T5)goto _TLE;{struct _tuple19 _T22;
_T22.f0= flow;_T22.f1= new_flow;_T6= _T22;}{struct _tuple19 _T22=_T6;struct Cyc_Dict_Dict _T23;struct Cyc_Dict_Dict _T24;_T7= _T22.f0;_T8= _T7.ReachableFL;_T9= _T8.tag;if(_T9!=2)goto _TL10;_TA= _T22.f1;_TB= _TA.ReachableFL;_TC= _TB.tag;if(_TC!=2)goto _TL12;_TD= _T22.f0;_TE= _TD.ReachableFL;_T24= _TE.val;_TF= _T22.f1;_T10= _TF.ReachableFL;_T23= _T10.val;{struct Cyc_Dict_Dict fd=_T24;struct Cyc_Dict_Dict new_fd=_T23;{struct _tuple21 _T25;
# 210
_T25.f0= env;_T12= s;_T25.f1= _T12->loc;_T25.f2= new_fd;_T11= _T25;}{struct _tuple21 ckenv=_T11;_T14= Cyc_Dict_iter_c;{
void(*_T25)(void(*)(struct _tuple21*,void*,void*),struct _tuple21*,struct Cyc_Dict_Dict)=(void(*)(void(*)(struct _tuple21*,void*,void*),struct _tuple21*,struct Cyc_Dict_Dict))_T14;_T13= _T25;}_T15= & ckenv;_T16= (struct _tuple21*)_T15;_T17= fd;_T13(Cyc_NewControlFlow_check_unique_root,_T16,_T17);goto _LL0;}}_TL12: goto _LL3;_TL10: _LL3: goto _LL0;_LL0:;}goto _TLF;_TLE: _TLF: _T18= new_flow;_T19= sflow;_T1A= *_T19;_T1B= 
# 216
Cyc_CfFlowInfo_flow_lessthan_approx(_T18,_T1A);if(_T1B)goto _TL14;else{goto _TL16;}
# 222
_TL16: _T1C= sflow;*_T1C= new_flow;_T1D= annot;_T1E= _T1D->visited;_T1F= env;_T20= _T1F->iteration_num;
# 226
if(_T1E!=_T20)goto _TL17;_T21= env;
# 228
_T21->iterate_again= 1;goto _TL18;_TL17: _TL18: goto _TL15;_TL14: _TL15:;}}
# 233
static union Cyc_CfFlowInfo_FlowInfo Cyc_NewControlFlow_add_vars(struct Cyc_CfFlowInfo_FlowEnv*fenv,union Cyc_CfFlowInfo_FlowInfo inflow,struct Cyc_List_List*vds,void*leafval,unsigned loc,long nameit){union Cyc_CfFlowInfo_FlowInfo _T0;struct _union_FlowInfo_BottomFL _T1;unsigned _T2;union Cyc_CfFlowInfo_FlowInfo _T3;union Cyc_CfFlowInfo_FlowInfo _T4;struct _union_FlowInfo_ReachableFL _T5;struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*_T6;struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*_T7;struct Cyc_List_List*_T8;void*_T9;struct Cyc_CfFlowInfo_FlowEnv*_TA;struct Cyc_List_List*_TB;void*_TC;struct Cyc_Absyn_Vardecl*_TD;void*_TE;void*_TF;long _T10;struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*_T11;struct Cyc_List_List*_T12;void*_T13;struct Cyc_Dict_Dict _T14;struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*_T15;void*_T16;void*_T17;struct Cyc_List_List*_T18;union Cyc_CfFlowInfo_FlowInfo _T19;struct Cyc_Dict_Dict _T1A;_T0= inflow;_T1= _T0.BottomFL;_T2= _T1.tag;if(_T2!=1)goto _TL19;_T3= 
# 237
Cyc_CfFlowInfo_BottomFL();return _T3;_TL19: _T4= inflow;_T5= _T4.ReachableFL;_T1A= _T5.val;{struct Cyc_Dict_Dict d=_T1A;
# 239
_TL1E: if(vds!=0)goto _TL1C;else{goto _TL1D;}
_TL1C:{struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*root;root= _cycalloc(sizeof(struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct));_T6= root;_T6->tag= 0;_T7= root;_T8= vds;_T9= _T8->hd;_T7->f1= (struct Cyc_Absyn_Vardecl*)_T9;_TA= fenv;_TB= vds;_TC= _TB->hd;_TD= (struct Cyc_Absyn_Vardecl*)_TC;_TE= _TD->type;_TF= leafval;{
void*rval=Cyc_CfFlowInfo_typ_to_absrval(_TA,_TE,0,_TF);_T10= nameit;
if(!_T10)goto _TL1F;{struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*_T1B=_cycalloc(sizeof(struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct));_T1B->tag= 8;_T12= vds;_T13= _T12->hd;
_T1B->f1= (struct Cyc_Absyn_Vardecl*)_T13;_T1B->f2= rval;_T11= (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*)_T1B;}rval= (void*)_T11;goto _TL20;_TL1F: _TL20: _T14= d;_T15= root;_T16= (void*)_T15;_T17= rval;
# 245
d= Cyc_Dict_insert(_T14,_T16,_T17);}}_T18= vds;
# 239
vds= _T18->tl;goto _TL1E;_TL1D: _T19= 
# 247
Cyc_CfFlowInfo_ReachableFL(d);return _T19;};}
# 251
static struct Cyc_Absyn_Exp*Cyc_NewControlFlow_strip_cast(struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;int*_T1;int _T2;struct Cyc_Absyn_Exp*_T3;struct Cyc_Absyn_Exp*_T4;_T0= e;{
void*_T5=_T0->r;struct Cyc_Absyn_Exp*_T6;_T1= (int*)_T5;_T2= *_T1;if(_T2!=14)goto _TL21;{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T7=(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T5;_T6= _T7->f2;}{struct Cyc_Absyn_Exp*e1=_T6;_T3= e1;
# 254
return _T3;}_TL21: _T4= e;
# 256
return _T4;;}}
# 260
static void Cyc_NewControlFlow_check_union_requires(unsigned loc,void*t,struct _fat_ptr*f,union Cyc_CfFlowInfo_FlowInfo inflow){union Cyc_CfFlowInfo_FlowInfo _T0;struct _union_FlowInfo_BottomFL _T1;unsigned _T2;_T0= inflow;_T1= _T0.BottomFL;_T2= _T1.tag;if(_T2!=1)goto _TL23;
# 263
return;_TL23:
# 265
 return;;}
# 269
static union Cyc_CfFlowInfo_FlowInfo Cyc_NewControlFlow_use_Rval(struct Cyc_NewControlFlow_AnalEnv*env,unsigned loc,union Cyc_CfFlowInfo_FlowInfo inflow,void*r){union Cyc_CfFlowInfo_FlowInfo _T0;struct _union_FlowInfo_BottomFL _T1;unsigned _T2;union Cyc_CfFlowInfo_FlowInfo _T3;union Cyc_CfFlowInfo_FlowInfo _T4;struct _union_FlowInfo_ReachableFL _T5;struct Cyc_NewControlFlow_AnalEnv*_T6;struct Cyc_CfFlowInfo_FlowEnv*_T7;struct Cyc_Dict_Dict _T8;void*_T9;enum Cyc_CfFlowInfo_InitLevel _TA;int _TB;unsigned _TC;struct _fat_ptr _TD;struct _fat_ptr _TE;struct Cyc_NewControlFlow_AnalEnv*_TF;struct Cyc_CfFlowInfo_FlowEnv*_T10;struct Cyc_Dict_Dict _T11;void*_T12;struct Cyc_Dict_Dict _T13;const struct Cyc_Dict_T*_T14;struct Cyc_Dict_Dict _T15;const struct Cyc_Dict_T*_T16;union Cyc_CfFlowInfo_FlowInfo _T17;union Cyc_CfFlowInfo_FlowInfo _T18;struct Cyc_Dict_Dict _T19;_T0= inflow;_T1= _T0.BottomFL;_T2= _T1.tag;if(_T2!=1)goto _TL25;_T3= 
# 272
Cyc_CfFlowInfo_BottomFL();return _T3;_TL25: _T4= inflow;_T5= _T4.ReachableFL;_T19= _T5.val;{struct Cyc_Dict_Dict d=_T19;_T6= env;_T7= _T6->fenv;_T8= d;_T9= r;_TA= 
# 274
Cyc_CfFlowInfo_initlevel(_T7,_T8,_T9);_TB= (int)_TA;if(_TB==1)goto _TL27;_TC= loc;_TD= 
_tag_fat("expression may not be fully initialized",sizeof(char),40U);_TE= _tag_fat(0U,sizeof(void*),0);Cyc_CfFlowInfo_aerr(_TC,_TD,_TE);goto _TL28;_TL27: _TL28: _TF= env;_T10= _TF->fenv;_T11= d;_T12= r;{
struct Cyc_Dict_Dict ans_d=Cyc_CfFlowInfo_escape_deref(_T10,_T11,_T12);_T13= d;_T14= _T13.t;_T15= ans_d;_T16= _T15.t;
if(_T14!=_T16)goto _TL29;_T17= inflow;
return _T17;_TL29: {
union Cyc_CfFlowInfo_FlowInfo ans=Cyc_CfFlowInfo_ReachableFL(ans_d);
Cyc_NewControlFlow_update_tryflow(env,ans);_T18= ans;
return _T18;}}};}struct _tuple22{struct Cyc_Absyn_Tqual f0;void*f1;};
# 285
static void Cyc_NewControlFlow_check_nounique(struct Cyc_NewControlFlow_AnalEnv*env,unsigned loc,void*t,void*r){struct _tuple0 _T0;void*_T1;int*_T2;unsigned _T3;void*_T4;struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct*_T5;enum Cyc_CfFlowInfo_InitLevel _T6;void*_T7;int*_T8;unsigned _T9;void*_TA;struct Cyc_Absyn_AppType_Absyn_Type_struct*_TB;void*_TC;int*_TD;unsigned _TE;void*_TF;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T10;void*_T11;struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct*_T12;union Cyc_Absyn_DatatypeFieldInfo _T13;struct _union_DatatypeFieldInfo_KnownDatatypefield _T14;unsigned _T15;void*_T16;void*_T17;void*_T18;int*_T19;unsigned _T1A;void*_T1B;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T1C;void*_T1D;int*_T1E;unsigned _T1F;void*_T20;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T21;void*_T22;struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct*_T23;union Cyc_Absyn_DatatypeFieldInfo _T24;struct _union_DatatypeFieldInfo_KnownDatatypefield _T25;unsigned _T26;void*_T27;int*_T28;int _T29;void*_T2A;void*_T2B;union Cyc_Absyn_DatatypeFieldInfo _T2C;struct _union_DatatypeFieldInfo_KnownDatatypefield _T2D;struct _tuple3 _T2E;union Cyc_Absyn_DatatypeFieldInfo _T2F;struct _union_DatatypeFieldInfo_KnownDatatypefield _T30;struct _tuple3 _T31;void*_T32;struct Cyc_Absyn_Datatypefield*_T33;struct Cyc_List_List*_T34;struct _RegionHandle*_T35;struct _RegionHandle*_T36;struct Cyc_Absyn_Datatypedecl*_T37;struct Cyc_List_List*_T38;struct Cyc_List_List*_T39;struct Cyc_Absyn_Datatypefield*_T3A;int _T3B;unsigned _T3C;struct _fat_ptr _T3D;unsigned _T3E;struct Cyc_List_List*_T3F;void*_T40;struct Cyc_NewControlFlow_AnalEnv*_T41;unsigned _T42;void*_T43;struct _fat_ptr _T44;unsigned char*_T45;void**_T46;void**_T47;int _T48;void*_T49;struct Cyc_List_List*_T4A;void*_T4B;int*_T4C;int _T4D;void*_T4E;void*_T4F;void*_T50;struct Cyc_Absyn_Aggrdecl*_T51;struct Cyc_Absyn_AggrdeclImpl*_T52;struct Cyc_Absyn_Aggrdecl*_T53;struct Cyc_Absyn_AggrdeclImpl*_T54;struct _RegionHandle*_T55;struct _RegionHandle*_T56;struct Cyc_Absyn_Aggrdecl*_T57;struct Cyc_List_List*_T58;struct Cyc_List_List*_T59;int _T5A;unsigned _T5B;struct _fat_ptr _T5C;unsigned _T5D;struct Cyc_List_List*_T5E;void*_T5F;struct Cyc_Absyn_Aggrfield*_T60;struct Cyc_NewControlFlow_AnalEnv*_T61;unsigned _T62;void*_T63;struct _fat_ptr _T64;unsigned char*_T65;void**_T66;void**_T67;int _T68;void*_T69;struct Cyc_List_List*_T6A;void*_T6B;int*_T6C;int _T6D;void*_T6E;void*_T6F;int _T70;unsigned _T71;struct _fat_ptr _T72;unsigned _T73;struct Cyc_NewControlFlow_AnalEnv*_T74;unsigned _T75;struct Cyc_List_List*_T76;void*_T77;struct Cyc_Absyn_Aggrfield*_T78;void*_T79;struct _fat_ptr _T7A;unsigned char*_T7B;void**_T7C;void**_T7D;int _T7E;void*_T7F;struct Cyc_List_List*_T80;struct Cyc_NewControlFlow_AnalEnv*_T81;struct Cyc_List_List*_T82;void*_T83;long _T84;unsigned _T85;struct _fat_ptr _T86;struct _fat_ptr _T87;{struct _tuple0 _T88;
({__typeof__(Cyc_Absyn_compress(t))_T89=Cyc_Absyn_compress(t);_T88.f0= _T89;});_T88.f1= r;_T0= _T88;}{struct _tuple0 _T88=_T0;enum Cyc_Absyn_AggrKind _T89;union Cyc_Absyn_AggrInfo _T8A;struct _fat_ptr _T8B;struct Cyc_List_List*_T8C;struct Cyc_Absyn_Datatypefield*_T8D;struct Cyc_Absyn_Datatypedecl*_T8E;void*_T8F;_T1= _T88.f1;_T2= (int*)_T1;_T3= *_T2;switch(_T3){case 2: _T4= _T88.f1;_T5= (struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct*)_T4;_T6= _T5->f1;if(_T6!=Cyc_CfFlowInfo_NoneIL)goto _TL2C;
# 288
return;_TL2C: _T7= _T88.f0;_T8= (int*)_T7;_T9= *_T8;switch(_T9){case 0: _TA= _T88.f0;_TB= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_TA;_TC= _TB->f1;_TD= (int*)_TC;_TE= *_TD;switch(_TE){case 23: _TF= _T88.f0;_T10= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_TF;_T11= _T10->f1;_T12= (struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct*)_T11;_T13= _T12->f1;_T14= _T13.KnownDatatypefield;_T15= _T14.tag;if(_T15!=2)goto _TL30;goto _LL11;_TL30: goto _LL11;case 24: goto _LL11;default: goto _LL11;};case 7: goto _LL11;case 4: goto _LLF;default: goto _LL11;};case 0:
# 290
 return;case 7:
# 292
 return;case 8: _T16= _T88.f1;{struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*_T90=(struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*)_T16;_T17= _T90->f2;_T8F= (void*)_T17;}{void*r=_T8F;
# 294
Cyc_NewControlFlow_check_nounique(env,loc,t,r);
return;}default: _T18= _T88.f0;_T19= (int*)_T18;_T1A= *_T19;switch(_T1A){case 0: _T1B= _T88.f0;_T1C= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T1B;_T1D= _T1C->f1;_T1E= (int*)_T1D;_T1F= *_T1E;switch(_T1F){case 23: _T20= _T88.f0;_T21= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T20;_T22= _T21->f1;_T23= (struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct*)_T22;_T24= _T23->f1;_T25= _T24.KnownDatatypefield;_T26= _T25.tag;if(_T26!=2)goto _TL34;_T27= _T88.f1;_T28= (int*)_T27;_T29= *_T28;if(_T29!=6)goto _TL36;_T2A= _T88.f0;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T90=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T2A;_T2B= _T90->f1;{struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct*_T91=(struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct*)_T2B;_T2C= _T91->f1;_T2D= _T2C.KnownDatatypefield;_T2E= _T2D.val;_T8E= _T2E.f0;_T2F= _T91->f1;_T30= _T2F.KnownDatatypefield;_T31= _T30.val;_T8D= _T31.f1;}_T8C= _T90->f2;}_T32= _T88.f1;{struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct*_T90=(struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct*)_T32;_T8B= _T90->f2;}{struct Cyc_Absyn_Datatypedecl*tud=_T8E;struct Cyc_Absyn_Datatypefield*tuf=_T8D;struct Cyc_List_List*targs=_T8C;struct _fat_ptr ad=_T8B;_T33= tuf;_T34= _T33->typs;
# 298
if(_T34!=0)goto _TL38;
return;_TL38: {struct _RegionHandle _T90=_new_region(0U,"temp");struct _RegionHandle*temp=& _T90;_push_region(temp);_T35= temp;_T36= temp;_T37= tud;_T38= _T37->tvs;_T39= targs;{
# 301
struct Cyc_List_List*inst=Cyc_List_rzip(_T35,_T36,_T38,_T39);_T3A= tuf;{
struct Cyc_List_List*fs=_T3A->typs;{
int i=0;_TL3D: _T3B= i;_T3C= (unsigned)_T3B;_T3D= ad;_T3E= _get_fat_size(_T3D,sizeof(void*));if(_T3C < _T3E)goto _TL3B;else{goto _TL3C;}
_TL3B: _T3F= _check_null(fs);_T40= _T3F->hd;{struct _tuple22*_T91=(struct _tuple22*)_T40;void*_T92;{struct _tuple22 _T93=*_T91;_T92= _T93.f1;}{void*t=_T92;
if(inst==0)goto _TL3E;
t= Cyc_Tcutil_rsubstitute(temp,inst,t);goto _TL3F;_TL3E: _TL3F: _T41= env;_T42= loc;_T43= t;_T44= ad;_T45= _T44.curr;_T46= (void**)_T45;_T47= 
_check_null(_T46);_T48= i;_T49= _T47[_T48];Cyc_NewControlFlow_check_nounique(_T41,_T42,_T43,_T49);}}
# 303
i= i + 1;_T4A= fs;fs= _T4A->tl;goto _TL3D;_TL3C:;}_npop_handler(0);return;}}_pop_region();}}goto _TL37;_TL36: goto _LL11;_TL37: goto _TL35;_TL34: goto _LL11;_TL35:;case 24: _T4B= _T88.f1;_T4C= (int*)_T4B;_T4D= *_T4C;if(_T4D!=6)goto _TL40;_T4E= _T88.f0;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T90=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T4E;_T4F= _T90->f1;{struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_T91=(struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*)_T4F;_T8A= _T91->f1;}_T8C= _T90->f2;}_T50= _T88.f1;{struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct*_T90=(struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct*)_T50;_T8B= _T90->f2;}{union Cyc_Absyn_AggrInfo info=_T8A;struct Cyc_List_List*targs=_T8C;struct _fat_ptr d=_T8B;
# 313
struct Cyc_Absyn_Aggrdecl*ad=Cyc_Absyn_get_known_aggrdecl(info);_T51= ad;_T52= _T51->impl;
if(_T52!=0)goto _TL42;
return;_TL42: _T53= ad;_T54= _T53->impl;{
struct Cyc_List_List*fs=_T54->fields;struct _RegionHandle _T90=_new_region(0U,"temp");struct _RegionHandle*temp=& _T90;_push_region(temp);_T55= temp;_T56= temp;_T57= ad;_T58= _T57->tvs;_T59= targs;{
# 318
struct Cyc_List_List*inst=Cyc_List_rzip(_T55,_T56,_T58,_T59);{
int i=0;_TL47: _T5A= i;_T5B= (unsigned)_T5A;_T5C= d;_T5D= _get_fat_size(_T5C,sizeof(void*));if(_T5B < _T5D)goto _TL45;else{goto _TL46;}
_TL45: _T5E= _check_null(fs);_T5F= _T5E->hd;_T60= (struct Cyc_Absyn_Aggrfield*)_T5F;{void*t=_T60->type;
if(inst==0)goto _TL48;
t= Cyc_Tcutil_rsubstitute(temp,inst,t);goto _TL49;_TL48: _TL49: _T61= env;_T62= loc;_T63= t;_T64= d;_T65= _T64.curr;_T66= (void**)_T65;_T67= 
_check_null(_T66);_T68= i;_T69= _T67[_T68];Cyc_NewControlFlow_check_nounique(_T61,_T62,_T63,_T69);}
# 319
i= i + 1;_T6A= fs;fs= _T6A->tl;goto _TL47;_TL46:;}_npop_handler(0);return;}_pop_region();}}goto _TL41;_TL40: goto _LL11;_TL41:;default: goto _LL11;};case 7: _T6B= _T88.f1;_T6C= (int*)_T6B;_T6D= *_T6C;if(_T6D!=6)goto _TL4A;_T6E= _T88.f0;{struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*_T90=(struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*)_T6E;_T89= _T90->f1;_T8C= _T90->f3;}_T6F= _T88.f1;{struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct*_T90=(struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct*)_T6F;_T8B= _T90->f2;}{enum Cyc_Absyn_AggrKind k=_T89;struct Cyc_List_List*fs=_T8C;struct _fat_ptr d=_T8B;{
# 328
int i=0;_TL4F: _T70= i;_T71= (unsigned)_T70;_T72= d;_T73= _get_fat_size(_T72,sizeof(void*));if(_T71 < _T73)goto _TL4D;else{goto _TL4E;}
_TL4D: _T74= env;_T75= loc;_T76= _check_null(fs);_T77= _T76->hd;_T78= (struct Cyc_Absyn_Aggrfield*)_T77;_T79= _T78->type;_T7A= d;_T7B= _T7A.curr;_T7C= (void**)_T7B;_T7D= _check_null(_T7C);_T7E= i;_T7F= _T7D[_T7E];Cyc_NewControlFlow_check_nounique(_T74,_T75,_T79,_T7F);
# 328
i= i + 1;_T80= fs;fs= _T80->tl;goto _TL4F;_TL4E:;}
# 330
return;}_TL4A: goto _LL11;case 4: _LLF: _T81= env;_T82= _T81->aquals_bounds;_T83= t;_T84= 
# 332
Cyc_Tcutil_is_noalias_pointer(_T82,_T83,0);if(!_T84)goto _TL50;_T85= loc;_T86= 
_tag_fat("argument may still contain alias-free pointers",sizeof(char),47U);_T87= _tag_fat(0U,sizeof(void*),0);Cyc_Warn_warn(_T85,_T86,_T87);goto _TL51;_TL50: _TL51:
 return;default: _LL11:
# 336
 return;};};}}
# 340
static union Cyc_CfFlowInfo_FlowInfo Cyc_NewControlFlow_use_nounique_Rval(struct Cyc_NewControlFlow_AnalEnv*env,unsigned loc,void*t,union Cyc_CfFlowInfo_FlowInfo inflow,void*r){union Cyc_CfFlowInfo_FlowInfo _T0;struct _union_FlowInfo_BottomFL _T1;unsigned _T2;union Cyc_CfFlowInfo_FlowInfo _T3;union Cyc_CfFlowInfo_FlowInfo _T4;struct _union_FlowInfo_ReachableFL _T5;struct Cyc_NewControlFlow_AnalEnv*_T6;struct Cyc_List_List*_T7;void*_T8;long _T9;int(*_TA)(struct _fat_ptr,struct _fat_ptr);void*(*_TB)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _TC;struct _fat_ptr _TD;void*_TE;int*_TF;unsigned _T10;void*_T11;void*_T12;void*_T13;void*_T14;void*_T15;struct Cyc_NewControlFlow_AnalEnv*_T16;struct Cyc_List_List*_T17;void*_T18;long _T19;unsigned _T1A;struct _fat_ptr _T1B;struct _fat_ptr _T1C;union Cyc_CfFlowInfo_FlowInfo _T1D;struct Cyc_NewControlFlow_AnalEnv*_T1E;struct Cyc_CfFlowInfo_FlowEnv*_T1F;struct Cyc_Dict_Dict _T20;void*_T21;struct Cyc_Dict_Dict _T22;const struct Cyc_Dict_T*_T23;struct Cyc_Dict_Dict _T24;const struct Cyc_Dict_T*_T25;union Cyc_CfFlowInfo_FlowInfo _T26;union Cyc_CfFlowInfo_FlowInfo _T27;struct Cyc_Dict_Dict _T28;_T0= inflow;_T1= _T0.BottomFL;_T2= _T1.tag;if(_T2!=1)goto _TL52;_T3= 
# 344
Cyc_CfFlowInfo_BottomFL();return _T3;_TL52: _T4= inflow;_T5= _T4.ReachableFL;_T28= _T5.val;{struct Cyc_Dict_Dict d=_T28;_T6= env;_T7= _T6->aquals_bounds;_T8= t;_T9= 
# 346
Cyc_Tcutil_is_noalias_pointer(_T7,_T8,0);if(_T9)goto _TL54;else{goto _TL56;}
_TL56: _TB= Cyc_Warn_impos;{int(*_T29)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_TB;_TA= _T29;}_TC= _tag_fat("noliveunique attribute requires alias-free pointer",sizeof(char),51U);_TD= _tag_fat(0U,sizeof(void*),0);_TA(_TC,_TD);goto _TL55;_TL54: _TL55: {
void*elt_type=Cyc_Tcutil_pointer_elt_type(t);
retry:{void*_T29;_TE= r;_TF= (int*)_TE;_T10= *_TF;switch(_T10){case 8: _T11= r;{struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*_T2A=(struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*)_T11;_T12= _T2A->f2;_T29= (void*)_T12;}{void*r2=_T29;
# 352
r= r2;goto retry;}case 4: _T13= r;{struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct*_T2A=(struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct*)_T13;_T29= _T2A->f1;}{struct Cyc_CfFlowInfo_Place*p=_T29;_T29= 
# 355
Cyc_CfFlowInfo_lookup_place(d,p);goto _LLB;}case 5: _T14= r;{struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct*_T2A=(struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct*)_T14;_T15= _T2A->f1;_T29= (void*)_T15;}_LLB: {void*r=_T29;
# 357
Cyc_NewControlFlow_check_nounique(env,loc,elt_type,r);goto _LL5;}default: _T16= env;_T17= _T16->aquals_bounds;_T18= elt_type;_T19= 
# 360
Cyc_Tcutil_is_noalias_pointer_or_aggr(_T17,_T18);if(!_T19)goto _TL58;_T1A= loc;_T1B= 
_tag_fat("argument may contain live alias-free pointers",sizeof(char),46U);_T1C= _tag_fat(0U,sizeof(void*),0);Cyc_Warn_warn(_T1A,_T1B,_T1C);goto _TL59;_TL58: _TL59: _T1D= 
Cyc_NewControlFlow_use_Rval(env,loc,inflow,r);return _T1D;}_LL5:;}_T1E= env;_T1F= _T1E->fenv;_T20= d;_T21= r;{
# 364
struct Cyc_Dict_Dict ans_d=Cyc_CfFlowInfo_escape_deref(_T1F,_T20,_T21);_T22= d;_T23= _T22.t;_T24= ans_d;_T25= _T24.t;
if(_T23!=_T25)goto _TL5A;_T26= inflow;
return _T26;_TL5A: {
union Cyc_CfFlowInfo_FlowInfo ans=Cyc_CfFlowInfo_ReachableFL(ans_d);
Cyc_NewControlFlow_update_tryflow(env,ans);_T27= ans;
return _T27;}}}};}struct _tuple23{union Cyc_CfFlowInfo_FlowInfo f0;struct Cyc_List_List*f1;};
# 375
static struct _tuple23 Cyc_NewControlFlow_anal_Rexps(struct Cyc_NewControlFlow_AnalEnv*env,union Cyc_CfFlowInfo_FlowInfo inflow,struct Cyc_List_List*es,long first_is_copy,long others_are_copy){struct _tuple23 _T0;struct Cyc_NewControlFlow_AnalEnv*_T1;long _T2;union Cyc_CfFlowInfo_FlowInfo _T3;struct Cyc_List_List*_T4;void*_T5;struct Cyc_Absyn_Exp*_T6;struct Cyc_List_List*_T7;struct Cyc_List_List*_T8;struct _tuple23 _T9;
# 377
struct Cyc_List_List*rvals=0;
if(es!=0)goto _TL5C;{struct _tuple23 _TA;
_TA.f0= inflow;_TA.f1= 0;_T0= _TA;}return _T0;_TL5C:
# 382
 _TL5E: _T1= env;_T2= first_is_copy;_T3= inflow;_T4= es;_T5= _T4->hd;_T6= (struct Cyc_Absyn_Exp*)_T5;{struct _tuple14 _TA=Cyc_NewControlFlow_anal_Rexp(_T1,_T2,_T3,_T6,0);void*_TB;union Cyc_CfFlowInfo_FlowInfo _TC;_TC= _TA.f0;_TB= _TA.f1;{union Cyc_CfFlowInfo_FlowInfo f=_TC;void*r=_TB;
inflow= f;{struct Cyc_List_List*_TD=_cycalloc(sizeof(struct Cyc_List_List));
_TD->hd= r;_TD->tl= rvals;_T7= (struct Cyc_List_List*)_TD;}rvals= _T7;_T8= es;
es= _T8->tl;
first_is_copy= others_are_copy;}}
# 380
if(es!=0)goto _TL5E;else{goto _TL5F;}_TL5F:
# 389
 Cyc_NewControlFlow_update_tryflow(env,inflow);{struct _tuple23 _TA;
_TA.f0= inflow;({__typeof__(Cyc_List_imp_rev(rvals))_TB=Cyc_List_imp_rev(rvals);_TA.f1= _TB;});_T9= _TA;}return _T9;}
# 395
static struct _tuple14 Cyc_NewControlFlow_anal_use_ints(struct Cyc_NewControlFlow_AnalEnv*env,union Cyc_CfFlowInfo_FlowInfo inflow,struct Cyc_List_List*es){union Cyc_CfFlowInfo_FlowInfo _T0;struct _union_FlowInfo_ReachableFL _T1;unsigned _T2;union Cyc_CfFlowInfo_FlowInfo _T3;struct _union_FlowInfo_ReachableFL _T4;struct Cyc_NewControlFlow_AnalEnv*_T5;struct Cyc_CfFlowInfo_FlowEnv*_T6;struct Cyc_Dict_Dict _T7;struct Cyc_List_List*_T8;void*_T9;enum Cyc_CfFlowInfo_InitLevel _TA;int _TB;struct Cyc_List_List*_TC;void*_TD;struct Cyc_Absyn_Exp*_TE;unsigned _TF;struct _fat_ptr _T10;struct _fat_ptr _T11;struct Cyc_List_List*_T12;struct Cyc_List_List*_T13;struct _tuple14 _T14;struct Cyc_NewControlFlow_AnalEnv*_T15;struct Cyc_CfFlowInfo_FlowEnv*_T16;
struct _tuple23 _T17=Cyc_NewControlFlow_anal_Rexps(env,inflow,es,0,0);struct Cyc_List_List*_T18;union Cyc_CfFlowInfo_FlowInfo _T19;_T19= _T17.f0;_T18= _T17.f1;{union Cyc_CfFlowInfo_FlowInfo afterflow=_T19;struct Cyc_List_List*rvals=_T18;{struct Cyc_Dict_Dict _T1A;_T0= afterflow;_T1= _T0.ReachableFL;_T2= _T1.tag;if(_T2!=2)goto _TL60;_T3= afterflow;_T4= _T3.ReachableFL;_T1A= _T4.val;{struct Cyc_Dict_Dict d=_T1A;
# 399
_TL65: if(rvals!=0)goto _TL63;else{goto _TL64;}
_TL63: _T5= env;_T6= _T5->fenv;_T7= d;_T8= rvals;_T9= _T8->hd;_TA= Cyc_CfFlowInfo_initlevel(_T6,_T7,_T9);_TB= (int)_TA;if(_TB!=0)goto _TL66;_TC= 
_check_null(es);_TD= _TC->hd;_TE= (struct Cyc_Absyn_Exp*)_TD;_TF= _TE->loc;_T10= _tag_fat("expression may not be initialized",sizeof(char),34U);_T11= _tag_fat(0U,sizeof(void*),0);Cyc_CfFlowInfo_aerr(_TF,_T10,_T11);goto _TL67;_TL66: _TL67: _T12= rvals;
# 399
rvals= _T12->tl;_T13= _check_null(es);es= _T13->tl;goto _TL65;_TL64: goto _LL3;}_TL60: goto _LL3;_LL3:;}{struct _tuple14 _T1A;
# 406
_T1A.f0= afterflow;_T15= env;_T16= _T15->fenv;_T1A.f1= _T16->unknown_all;_T14= _T1A;}return _T14;}}
# 413
static void*Cyc_NewControlFlow_consume_zero_rval(struct Cyc_NewControlFlow_AnalEnv*env,struct Cyc_Dict_Dict new_dict,struct Cyc_CfFlowInfo_Place*p,struct Cyc_Absyn_Exp*e,void*new_rval){struct Cyc_Absyn_Exp*_T0;struct Cyc_NewControlFlow_AnalEnv*_T1;int _T2;void*_T3;long*_T4;long _T5;int(*_T6)(struct _fat_ptr,struct _fat_ptr);void*(*_T7)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T8;struct _fat_ptr _T9;long _TA;struct Cyc_NewControlFlow_AnalEnv*_TB;struct Cyc_CfFlowInfo_FlowEnv*_TC;struct Cyc_NewControlFlow_AnalEnv*_TD;struct Cyc_List_List*_TE;struct Cyc_Absyn_Exp*_TF;void*_T10;void*_T11;struct Cyc_Absyn_Exp*_T12;struct Cyc_NewControlFlow_AnalEnv*_T13;int _T14;void*_T15;void*_T16;void*_T17;
# 417
long needs_unconsume=0;
void*old_rval=Cyc_CfFlowInfo_lookup_place(new_dict,p);_T0= e;_T1= env;_T2= _T1->iteration_num;_T3= old_rval;_T4= & needs_unconsume;_T5= 
# 420
Cyc_CfFlowInfo_is_unique_consumed(_T0,_T2,_T3,_T4);if(!_T5)goto _TL68;_T7= Cyc_Warn_impos;{
int(*_T18)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T7;_T6= _T18;}_T8= _tag_fat("consume_zero_rval",sizeof(char),18U);_T9= _tag_fat(0U,sizeof(void*),0);_T6(_T8,_T9);goto _TL69;
# 423
_TL68: _TA= needs_unconsume;if(!_TA)goto _TL6A;_TB= env;_TC= _TB->fenv;_TD= env;_TE= _TD->aquals_bounds;_TF= e;_T10= _TF->topt;_T11= 
_check_null(_T10);_T12= e;_T13= env;_T14= _T13->iteration_num;_T15= new_rval;_T16= Cyc_CfFlowInfo_make_unique_consumed(_TC,_TE,_T11,_T12,_T14,_T15,0);return _T16;
# 427
_TL6A: _T17= new_rval;return _T17;_TL69:;}
# 440
static union Cyc_CfFlowInfo_FlowInfo Cyc_NewControlFlow_notzero(struct Cyc_NewControlFlow_AnalEnv*env,union Cyc_CfFlowInfo_FlowInfo inflow,union Cyc_CfFlowInfo_FlowInfo outflow,struct Cyc_Absyn_Exp*e,enum Cyc_CfFlowInfo_InitLevel il,struct Cyc_List_List*names){union Cyc_CfFlowInfo_FlowInfo _T0;struct _union_FlowInfo_BottomFL _T1;unsigned _T2;union Cyc_CfFlowInfo_FlowInfo _T3;union Cyc_CfFlowInfo_FlowInfo _T4;struct _union_FlowInfo_ReachableFL _T5;struct _tuple18 _T6;struct _union_AbsLVal_UnknownL _T7;unsigned _T8;union Cyc_CfFlowInfo_FlowInfo _T9;struct _union_AbsLVal_PlaceL _TA;void*_TB;enum Cyc_CfFlowInfo_InitLevel _TC;int _TD;struct Cyc_NewControlFlow_AnalEnv*_TE;struct Cyc_CfFlowInfo_FlowEnv*_TF;struct Cyc_NewControlFlow_AnalEnv*_T10;struct Cyc_CfFlowInfo_FlowEnv*_T11;struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*_T12;struct Cyc_List_List*_T13;void*_T14;struct Cyc_List_List*_T15;struct Cyc_NewControlFlow_AnalEnv*_T16;struct Cyc_CfFlowInfo_FlowEnv*_T17;struct Cyc_Absyn_Exp*_T18;unsigned _T19;struct Cyc_Dict_Dict _T1A;struct Cyc_CfFlowInfo_Place*_T1B;void*_T1C;struct Cyc_Dict_Dict _T1D;union Cyc_CfFlowInfo_FlowInfo _T1E;struct Cyc_Dict_Dict _T1F;_T0= outflow;_T1= _T0.BottomFL;_T2= _T1.tag;if(_T2!=1)goto _TL6C;_T3= outflow;
# 447
return _T3;_TL6C: _T4= outflow;_T5= _T4.ReachableFL;_T1F= _T5.val;{struct Cyc_Dict_Dict d=_T1F;_T6= 
# 449
Cyc_NewControlFlow_anal_Lexp(env,inflow,0,0,e);{union Cyc_CfFlowInfo_AbsLVal _T20=_T6.f1;struct Cyc_CfFlowInfo_Place*_T21;_T7= _T20.UnknownL;_T8= _T7.tag;if(_T8!=2)goto _TL6E;_T9= outflow;
# 453
return _T9;_TL6E: _TA= _T20.PlaceL;_T21= _TA.val;{struct Cyc_CfFlowInfo_Place*p=_T21;_TC= il;_TD= (int)_TC;
# 457
if(_TD!=1)goto _TL70;_TE= env;_TF= _TE->fenv;_TB= _TF->notzeroall;goto _TL71;_TL70: _T10= env;_T11= _T10->fenv;_TB= _T11->unknown_none;_TL71: {void*nzval=_TB;
_TL75: if(names!=0)goto _TL73;else{goto _TL74;}
_TL73:{struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*_T22=_cycalloc(sizeof(struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct));_T22->tag= 8;_T13= names;_T14= _T13->hd;_T22->f1= (struct Cyc_Absyn_Vardecl*)_T14;_T22->f2= nzval;_T12= (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*)_T22;}nzval= (void*)_T12;_T15= names;
# 458
names= _T15->tl;goto _TL75;_TL74:
# 461
 nzval= Cyc_NewControlFlow_consume_zero_rval(env,d,p,e,nzval);_T16= env;_T17= _T16->fenv;_T18= e;_T19= _T18->loc;_T1A= d;_T1B= p;_T1C= nzval;_T1D= 
Cyc_CfFlowInfo_assign_place(_T17,_T19,_T1A,_T1B,_T1C);{union Cyc_CfFlowInfo_FlowInfo outflow=Cyc_CfFlowInfo_ReachableFL(_T1D);_T1E= outflow;
# 465
return _T1E;}}};}};}
# 474
static struct _tuple19 Cyc_NewControlFlow_splitzero(struct Cyc_NewControlFlow_AnalEnv*env,union Cyc_CfFlowInfo_FlowInfo inflow,union Cyc_CfFlowInfo_FlowInfo outflow,struct Cyc_Absyn_Exp*e,enum Cyc_CfFlowInfo_InitLevel il,struct Cyc_List_List*names){union Cyc_CfFlowInfo_FlowInfo _T0;struct _union_FlowInfo_BottomFL _T1;unsigned _T2;struct _tuple19 _T3;union Cyc_CfFlowInfo_FlowInfo _T4;struct _union_FlowInfo_ReachableFL _T5;struct _tuple18 _T6;struct _union_AbsLVal_UnknownL _T7;unsigned _T8;struct _tuple19 _T9;struct _union_AbsLVal_PlaceL _TA;void*_TB;enum Cyc_CfFlowInfo_InitLevel _TC;int _TD;struct Cyc_NewControlFlow_AnalEnv*_TE;struct Cyc_CfFlowInfo_FlowEnv*_TF;struct Cyc_NewControlFlow_AnalEnv*_T10;struct Cyc_CfFlowInfo_FlowEnv*_T11;struct Cyc_NewControlFlow_AnalEnv*_T12;struct Cyc_CfFlowInfo_FlowEnv*_T13;struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*_T14;struct Cyc_List_List*_T15;void*_T16;struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*_T17;struct Cyc_List_List*_T18;void*_T19;struct Cyc_List_List*_T1A;struct _tuple19 _T1B;struct Cyc_NewControlFlow_AnalEnv*_T1C;struct Cyc_CfFlowInfo_FlowEnv*_T1D;struct Cyc_Absyn_Exp*_T1E;unsigned _T1F;struct Cyc_Dict_Dict _T20;struct Cyc_CfFlowInfo_Place*_T21;void*_T22;struct Cyc_Dict_Dict _T23;struct Cyc_NewControlFlow_AnalEnv*_T24;struct Cyc_CfFlowInfo_FlowEnv*_T25;struct Cyc_Absyn_Exp*_T26;unsigned _T27;struct Cyc_Dict_Dict _T28;struct Cyc_CfFlowInfo_Place*_T29;void*_T2A;struct Cyc_Dict_Dict _T2B;struct Cyc_Dict_Dict _T2C;_T0= outflow;_T1= _T0.BottomFL;_T2= _T1.tag;if(_T2!=1)goto _TL76;{struct _tuple19 _T2D;
# 478
_T2D.f0= outflow;_T2D.f1= outflow;_T3= _T2D;}return _T3;_TL76: _T4= outflow;_T5= _T4.ReachableFL;_T2C= _T5.val;{struct Cyc_Dict_Dict d=_T2C;_T6= 
# 480
Cyc_NewControlFlow_anal_Lexp(env,inflow,0,0,e);{union Cyc_CfFlowInfo_AbsLVal _T2D=_T6.f1;struct Cyc_CfFlowInfo_Place*_T2E;_T7= _T2D.UnknownL;_T8= _T7.tag;if(_T8!=2)goto _TL78;{struct _tuple19 _T2F;
# 482
_T2F.f0= outflow;_T2F.f1= outflow;_T9= _T2F;}return _T9;_TL78: _TA= _T2D.PlaceL;_T2E= _TA.val;{struct Cyc_CfFlowInfo_Place*p=_T2E;_TC= il;_TD= (int)_TC;
# 484
if(_TD!=1)goto _TL7A;_TE= env;_TF= _TE->fenv;_TB= _TF->notzeroall;goto _TL7B;_TL7A: _T10= env;_T11= _T10->fenv;_TB= _T11->unknown_none;_TL7B: {void*nzval=_TB;_T12= env;_T13= _T12->fenv;{
void*zval=_T13->zero;
_TL7F: if(names!=0)goto _TL7D;else{goto _TL7E;}
_TL7D:{struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*_T2F=_cycalloc(sizeof(struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct));_T2F->tag= 8;_T15= names;_T16= _T15->hd;_T2F->f1= (struct Cyc_Absyn_Vardecl*)_T16;_T2F->f2= nzval;_T14= (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*)_T2F;}nzval= (void*)_T14;{struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*_T2F=_cycalloc(sizeof(struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct));_T2F->tag= 8;_T18= names;_T19= _T18->hd;
_T2F->f1= (struct Cyc_Absyn_Vardecl*)_T19;_T2F->f2= zval;_T17= (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*)_T2F;}zval= (void*)_T17;_T1A= names;
# 486
names= _T1A->tl;goto _TL7F;_TL7E:
# 490
 nzval= Cyc_NewControlFlow_consume_zero_rval(env,d,p,e,nzval);
zval= Cyc_NewControlFlow_consume_zero_rval(env,d,p,e,zval);{struct _tuple19 _T2F;_T1C= env;_T1D= _T1C->fenv;_T1E= e;_T1F= _T1E->loc;_T20= d;_T21= p;_T22= nzval;_T23= 
Cyc_CfFlowInfo_assign_place(_T1D,_T1F,_T20,_T21,_T22);({__typeof__(Cyc_CfFlowInfo_ReachableFL(_T23))_T30=Cyc_CfFlowInfo_ReachableFL(_T23);_T2F.f0= _T30;});_T24= env;_T25= _T24->fenv;_T26= e;_T27= _T26->loc;_T28= d;_T29= p;_T2A= zval;_T2B= 
Cyc_CfFlowInfo_assign_place(_T25,_T27,_T28,_T29,_T2A);({__typeof__(Cyc_CfFlowInfo_ReachableFL(_T2B))_T30=Cyc_CfFlowInfo_ReachableFL(_T2B);_T2F.f1= _T30;});_T1B= _T2F;}
# 492
return _T1B;}}};}};}
# 498
static struct Cyc_CfFlowInfo_NotZero_Absyn_AbsynAnnot_struct Cyc_NewControlFlow_mt_notzero_v={Cyc_CfFlowInfo_NotZero};
static struct Cyc_CfFlowInfo_UnknownZ_Absyn_AbsynAnnot_struct Cyc_NewControlFlow_mt_unknownz_v={Cyc_CfFlowInfo_UnknownZ};
# 506
static struct _tuple14 Cyc_NewControlFlow_anal_derefR(struct Cyc_NewControlFlow_AnalEnv*env,union Cyc_CfFlowInfo_FlowInfo inflow,union Cyc_CfFlowInfo_FlowInfo f,struct Cyc_Absyn_Exp*e,void*r,struct Cyc_Absyn_Exp*index){struct Cyc_Absyn_Exp*_T0;void*_T1;void*_T2;int*_T3;int _T4;struct Cyc_Absyn_PtrInfo _T5;struct Cyc_Absyn_PtrInfo _T6;struct Cyc_Absyn_PtrAtts _T7;union Cyc_CfFlowInfo_FlowInfo _T8;struct _union_FlowInfo_BottomFL _T9;unsigned _TA;struct _tuple14 _TB;struct Cyc_NewControlFlow_AnalEnv*_TC;struct Cyc_CfFlowInfo_FlowEnv*_TD;void*_TE;struct Cyc_NewControlFlow_AnalEnv*_TF;struct Cyc_CfFlowInfo_FlowEnv*_T10;void*_T11;union Cyc_CfFlowInfo_FlowInfo _T12;struct _union_FlowInfo_ReachableFL _T13;void*_T14;int*_T15;unsigned _T16;void*_T17;void*_T18;int(*_T19)(struct _fat_ptr,struct _fat_ptr);void*(*_T1A)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T1B;struct _fat_ptr _T1C;struct Cyc_Absyn_Exp*_T1D;struct Cyc_CfFlowInfo_NotZero_Absyn_AbsynAnnot_struct*_T1E;struct Cyc_CfFlowInfo_NotZero_Absyn_AbsynAnnot_struct*_T1F;void*_T20;struct Cyc_Absyn_Exp*_T21;struct Cyc_CfFlowInfo_NotZero_Absyn_AbsynAnnot_struct*_T22;struct Cyc_CfFlowInfo_NotZero_Absyn_AbsynAnnot_struct*_T23;long _T24;struct _tuple14 _T25;void*_T26;void*_T27;struct Cyc_Absyn_Exp*_T28;struct Cyc_CfFlowInfo_UnknownZ_Absyn_AbsynAnnot_struct*_T29;struct Cyc_CfFlowInfo_UnknownZ_Absyn_AbsynAnnot_struct*_T2A;long _T2B;struct _tuple14 _T2C;struct Cyc_Absyn_Exp*_T2D;struct Cyc_CfFlowInfo_IsZero_Absyn_AbsynAnnot_struct*_T2E;struct Cyc_CfFlowInfo_IsZero_Absyn_AbsynAnnot_struct*_T2F;struct _tuple14 _T30;struct Cyc_NewControlFlow_AnalEnv*_T31;struct Cyc_CfFlowInfo_FlowEnv*_T32;void*_T33;struct Cyc_NewControlFlow_AnalEnv*_T34;struct Cyc_CfFlowInfo_FlowEnv*_T35;void*_T36;void*_T37;struct Cyc_Absyn_Exp*_T38;struct Cyc_CfFlowInfo_UnknownZ_Absyn_AbsynAnnot_struct*_T39;struct Cyc_CfFlowInfo_UnknownZ_Absyn_AbsynAnnot_struct*_T3A;struct Cyc_NewControlFlow_AnalEnv*_T3B;struct Cyc_CfFlowInfo_FlowEnv*_T3C;struct Cyc_Dict_Dict _T3D;void*_T3E;void*_T3F;int*_T40;int _T41;struct Cyc_Absyn_Exp*_T42;unsigned _T43;struct _fat_ptr _T44;struct _fat_ptr _T45;struct Cyc_Absyn_Exp*_T46;unsigned _T47;struct _fat_ptr _T48;struct _fat_ptr _T49;struct _tuple14 _T4A;struct Cyc_NewControlFlow_AnalEnv*_T4B;struct Cyc_CfFlowInfo_FlowEnv*_T4C;void*_T4D;struct Cyc_NewControlFlow_AnalEnv*_T4E;struct Cyc_CfFlowInfo_FlowEnv*_T4F;void*_T50;int(*_T51)(struct _fat_ptr,struct _fat_ptr);void*(*_T52)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T53;struct _fat_ptr _T54;_T0= e;_T1= _T0->topt;_T2= 
# 508
_check_null(_T1);{void*_T55=Cyc_Absyn_compress(_T2);void*_T56;void*_T57;_T3= (int*)_T55;_T4= *_T3;if(_T4!=4)goto _TL80;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T58=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T55;_T5= _T58->f1;_T57= _T5.elt_type;_T6= _T58->f1;_T7= _T6.ptr_atts;_T56= _T7.bounds;}{void*elttype=_T57;void*bd=_T56;struct Cyc_Dict_Dict _T58;_T8= f;_T9= _T8.BottomFL;_TA= _T9.tag;if(_TA!=1)goto _TL82;{struct _tuple14 _T59;
# 512
_T59.f0= f;_TC= env;_TD= _TC->fenv;_TE= elttype;_TF= env;_T10= _TF->fenv;_T11= _T10->unknown_all;({__typeof__(Cyc_CfFlowInfo_typ_to_absrval(_TD,_TE,0,_T11))_T5A=Cyc_CfFlowInfo_typ_to_absrval(_TD,_TE,0,_T11);_T59.f1= _T5A;});_TB= _T59;}return _TB;_TL82: _T12= f;_T13= _T12.ReachableFL;_T58= _T13.val;{struct Cyc_Dict_Dict outdict=_T58;
# 514
struct _tuple13 _T59=Cyc_CfFlowInfo_unname_rval(r);struct Cyc_List_List*_T5A;void*_T5B;_T5B= _T59.f0;_T5A= _T59.f1;{void*r=_T5B;struct Cyc_List_List*names=_T5A;{enum Cyc_CfFlowInfo_InitLevel _T5C;void*_T5D;void*_T5E;_T14= r;_T15= (int*)_T14;_T16= *_T15;switch(_T16){case 8: _T17= r;{struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*_T5F=(struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*)_T17;_T5E= _T5F->f1;_T18= _T5F->f2;_T5D= (void*)_T18;}{struct Cyc_Absyn_Vardecl*n=_T5E;void*r2=_T5D;_T1A= Cyc_Warn_impos;{
# 517
int(*_T5F)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T1A;_T19= _T5F;}_T1B= _tag_fat("named location in anal_derefR",sizeof(char),30U);_T1C= _tag_fat(0U,sizeof(void*),0);_T19(_T1B,_T1C);}case 1: _T1D= e;_T1E= & Cyc_CfFlowInfo_NotZero_val;_T1F= (struct Cyc_CfFlowInfo_NotZero_Absyn_AbsynAnnot_struct*)_T1E;
# 519
_T1D->annot= (void*)_T1F;goto _LLD;case 4: _T20= r;{struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct*_T5F=(struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct*)_T20;_T5E= _T5F->f1;}{struct Cyc_CfFlowInfo_Place*p=_T5E;_T21= e;_T22= & Cyc_CfFlowInfo_NotZero_val;_T23= (struct Cyc_CfFlowInfo_NotZero_Absyn_AbsynAnnot_struct*)_T22;
# 522
_T21->annot= (void*)_T23;
if(index!=0)goto _TL85;_T24= Cyc_Tcutil_is_bound_one(bd,0);if(!_T24)goto _TL85;{struct _tuple14 _T5F;
_T5F.f0= f;({__typeof__(Cyc_CfFlowInfo_lookup_place(outdict,p))_T60=Cyc_CfFlowInfo_lookup_place(outdict,p);_T5F.f1= _T60;});_T25= _T5F;}return _T25;_TL85: goto _LLD;}case 5: _T26= r;{struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct*_T5F=(struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct*)_T26;_T27= _T5F->f1;_T5E= (void*)_T27;}{void*r=_T5E;_T28= e;_T29= & Cyc_CfFlowInfo_UnknownZ_val;_T2A= (struct Cyc_CfFlowInfo_UnknownZ_Absyn_AbsynAnnot_struct*)_T29;
# 528
_T28->annot= (void*)_T2A;
if(index!=0)goto _TL87;_T2B= Cyc_Tcutil_is_bound_one(bd,0);if(!_T2B)goto _TL87;{struct _tuple14 _T5F;
_T5F.f0= f;_T5F.f1= r;_T2C= _T5F;}return _T2C;_TL87: goto _LLD;}case 0: _T2D= e;_T2E= & Cyc_CfFlowInfo_IsZero_val;_T2F= (struct Cyc_CfFlowInfo_IsZero_Absyn_AbsynAnnot_struct*)_T2E;
# 533
_T2D->annot= (void*)_T2F;{struct _tuple14 _T5F;
({__typeof__(Cyc_CfFlowInfo_BottomFL())_T60=Cyc_CfFlowInfo_BottomFL();_T5F.f0= _T60;});_T31= env;_T32= _T31->fenv;_T33= elttype;_T34= env;_T35= _T34->fenv;_T36= _T35->unknown_all;
({__typeof__(Cyc_CfFlowInfo_typ_to_absrval(_T32,_T33,0,_T36))_T60=Cyc_CfFlowInfo_typ_to_absrval(_T32,_T33,0,_T36);_T5F.f1= _T60;});_T30= _T5F;}
# 534
return _T30;case 2: _T37= r;{struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct*_T5F=(struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct*)_T37;_T5C= _T5F->f1;}{enum Cyc_CfFlowInfo_InitLevel il=_T5C;
# 537
f= Cyc_NewControlFlow_notzero(env,inflow,f,e,il,names);goto _LL1B;}default: _LL1B: _T38= e;_T39= & Cyc_CfFlowInfo_UnknownZ_val;_T3A= (struct Cyc_CfFlowInfo_UnknownZ_Absyn_AbsynAnnot_struct*)_T39;
# 540
_T38->annot= (void*)_T3A;goto _LLD;}_LLD:;}_T3B= env;_T3C= _T3B->fenv;_T3D= outdict;_T3E= r;{
# 543
enum Cyc_CfFlowInfo_InitLevel _T5C=Cyc_CfFlowInfo_initlevel(_T3C,_T3D,_T3E);if(_T5C!=Cyc_CfFlowInfo_NoneIL)goto _TL89;{
# 545
struct _tuple13 _T5D=Cyc_CfFlowInfo_unname_rval(r);void*_T5E;_T5E= _T5D.f0;{void*r=_T5E;_T3F= r;_T40= (int*)_T3F;_T41= *_T40;if(_T41!=7)goto _TL8B;_T42= e;_T43= _T42->loc;_T44= 
# 548
_tag_fat("attempt to dereference a consumed alias-free pointer",sizeof(char),53U);_T45= _tag_fat(0U,sizeof(void*),0);Cyc_CfFlowInfo_aerr(_T43,_T44,_T45);goto _LL24;_TL8B: _T46= e;_T47= _T46->loc;_T48= 
# 551
_tag_fat("dereference of possibly uninitialized pointer",sizeof(char),46U);_T49= _tag_fat(0U,sizeof(void*),0);Cyc_CfFlowInfo_aerr(_T47,_T48,_T49);_LL24: goto _LL20;}}_TL89: _LL20:{struct _tuple14 _T5D;
# 555
_T5D.f0= f;_T4B= env;_T4C= _T4B->fenv;_T4D= elttype;_T4E= env;_T4F= _T4E->fenv;_T50= _T4F->unknown_all;({__typeof__(Cyc_CfFlowInfo_typ_to_absrval(_T4C,_T4D,0,_T50))_T5E=Cyc_CfFlowInfo_typ_to_absrval(_T4C,_T4D,0,_T50);_T5D.f1= _T5E;});_T4A= _T5D;}return _T4A;;}}};}goto _TL81;_TL80: _T52= Cyc_Warn_impos;{
# 559
int(*_T58)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T52;_T51= _T58;}_T53= _tag_fat("right deref of non-pointer-type",sizeof(char),32U);_T54= _tag_fat(0U,sizeof(void*),0);_T51(_T53,_T54);_TL81:;}}
# 568
static union Cyc_CfFlowInfo_FlowInfo Cyc_NewControlFlow_restore_noconsume_arg(struct Cyc_NewControlFlow_AnalEnv*env,union Cyc_CfFlowInfo_FlowInfo inflow,struct Cyc_Absyn_Exp*exp,unsigned loc,void*old_rval){struct _tuple18 _T0;union Cyc_CfFlowInfo_FlowInfo _T1;struct _union_FlowInfo_ReachableFL _T2;unsigned _T3;union Cyc_CfFlowInfo_AbsLVal _T4;struct _union_AbsLVal_PlaceL _T5;unsigned _T6;union Cyc_CfFlowInfo_FlowInfo _T7;struct _union_FlowInfo_ReachableFL _T8;union Cyc_CfFlowInfo_AbsLVal _T9;struct _union_AbsLVal_PlaceL _TA;struct Cyc_NewControlFlow_AnalEnv*_TB;struct Cyc_CfFlowInfo_FlowEnv*_TC;struct Cyc_Absyn_Exp*_TD;void*_TE;void*_TF;struct Cyc_NewControlFlow_AnalEnv*_T10;struct Cyc_CfFlowInfo_FlowEnv*_T11;void*_T12;struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*_T13;struct Cyc_List_List*_T14;void*_T15;struct Cyc_List_List*_T16;struct Cyc_NewControlFlow_AnalEnv*_T17;struct Cyc_CfFlowInfo_FlowEnv*_T18;unsigned _T19;struct Cyc_Dict_Dict _T1A;struct Cyc_CfFlowInfo_Place*_T1B;void*_T1C;union Cyc_CfFlowInfo_AbsLVal _T1D;struct _union_AbsLVal_UnknownL _T1E;union Cyc_CfFlowInfo_FlowInfo _T1F;
# 570
struct _tuple18 _T20=Cyc_NewControlFlow_anal_Lexp(env,inflow,1,1,exp);union Cyc_CfFlowInfo_AbsLVal _T21;_T21= _T20.f1;{union Cyc_CfFlowInfo_AbsLVal lval=_T21;{struct _tuple18 _T22;
_T22.f0= inflow;_T22.f1= lval;_T0= _T22;}{struct _tuple18 _T22=_T0;int _T23;struct Cyc_CfFlowInfo_Place*_T24;struct Cyc_Dict_Dict _T25;_T1= _T22.f0;_T2= _T1.ReachableFL;_T3= _T2.tag;if(_T3!=2)goto _TL8D;_T4= _T22.f1;_T5= _T4.PlaceL;_T6= _T5.tag;if(_T6!=1)goto _TL8F;_T7= _T22.f0;_T8= _T7.ReachableFL;_T25= _T8.val;_T9= _T22.f1;_TA= _T9.PlaceL;_T24= _TA.val;{struct Cyc_Dict_Dict fd=_T25;struct Cyc_CfFlowInfo_Place*p=_T24;_TB= env;_TC= _TB->fenv;_TD= exp;_TE= _TD->topt;_TF= 
# 573
_check_null(_TE);_T10= env;_T11= _T10->fenv;_T12= _T11->unknown_all;{void*new_rval=Cyc_CfFlowInfo_typ_to_absrval(_TC,_TF,0,_T12);
struct _tuple13 _T26=Cyc_CfFlowInfo_unname_rval(old_rval);struct Cyc_List_List*_T27;void*_T28;_T28= _T26.f0;_T27= _T26.f1;{void*old_rval=_T28;struct Cyc_List_List*names=_T27;
_TL94: if(names!=0)goto _TL92;else{goto _TL93;}
_TL92:{struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*_T29=_cycalloc(sizeof(struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct));_T29->tag= 8;_T14= names;_T15= _T14->hd;_T29->f1= (struct Cyc_Absyn_Vardecl*)_T15;_T29->f2= new_rval;_T13= (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*)_T29;}new_rval= (void*)_T13;_T16= names;
# 575
names= _T16->tl;goto _TL94;_TL93: _T17= env;_T18= _T17->fenv;_T19= loc;_T1A= fd;_T1B= p;_T1C= new_rval;
# 579
fd= Cyc_CfFlowInfo_assign_place(_T18,_T19,_T1A,_T1B,_T1C);
inflow= Cyc_CfFlowInfo_ReachableFL(fd);
Cyc_NewControlFlow_update_tryflow(env,inflow);goto _LL3;}}}_TL8F: _T1D= _T22.f1;_T1E= _T1D.UnknownL;_T23= _T1E.val;{int u=_T23;goto _LL3;}_TL8D: goto _LL3;_LL3:;}_T1F= inflow;
# 601
return _T1F;}}
# 606
static struct _tuple14 Cyc_NewControlFlow_do_assign(struct Cyc_CfFlowInfo_FlowEnv*fenv,struct Cyc_NewControlFlow_AnalEnv*env,union Cyc_CfFlowInfo_FlowInfo outflow,struct Cyc_Absyn_Exp*lexp,union Cyc_CfFlowInfo_AbsLVal lval,struct Cyc_Absyn_Exp*rexp,void*rval,unsigned loc){union Cyc_CfFlowInfo_FlowInfo _T0;struct _union_FlowInfo_BottomFL _T1;unsigned _T2;struct _tuple14 _T3;union Cyc_CfFlowInfo_FlowInfo _T4;struct _union_FlowInfo_ReachableFL _T5;union Cyc_CfFlowInfo_AbsLVal _T6;struct _union_AbsLVal_PlaceL _T7;unsigned _T8;union Cyc_CfFlowInfo_AbsLVal _T9;struct _union_AbsLVal_PlaceL _TA;long _TB;struct Cyc_NewControlFlow_AnalEnv*_TC;struct Cyc_List_List*_TD;struct Cyc_Absyn_Exp*_TE;void*_TF;long _T10;void*_T11;void*_T12;int*_T13;unsigned _T14;void*_T15;struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct*_T16;enum Cyc_CfFlowInfo_InitLevel _T17;struct Cyc_Absyn_Exp*_T18;unsigned _T19;struct _fat_ptr _T1A;struct _fat_ptr _T1B;struct _tuple14 _T1C;struct _tuple14 _T1D;struct Cyc_NewControlFlow_AnalEnv*_T1E;struct Cyc_Absyn_Exp*_T1F;unsigned _T20;union Cyc_CfFlowInfo_FlowInfo _T21;void*_T22;struct Cyc_Dict_Dict _T23;_T0= outflow;_T1= _T0.BottomFL;_T2= _T1.tag;if(_T2!=1)goto _TL95;{struct _tuple14 _T24;
# 611
({__typeof__(Cyc_CfFlowInfo_BottomFL())_T25=Cyc_CfFlowInfo_BottomFL();_T24.f0= _T25;});_T24.f1= rval;_T3= _T24;}return _T3;_TL95: _T4= outflow;_T5= _T4.ReachableFL;_T23= _T5.val;{struct Cyc_Dict_Dict indict=_T23;struct Cyc_CfFlowInfo_Place*_T24;_T6= lval;_T7= _T6.PlaceL;_T8= _T7.tag;if(_T8!=1)goto _TL97;_T9= lval;_TA= _T9.PlaceL;_T24= _TA.val;{struct Cyc_CfFlowInfo_Place*p=_T24;
# 621
struct Cyc_Dict_Dict outdict=Cyc_CfFlowInfo_assign_place(fenv,loc,indict,p,rval);
outflow= Cyc_CfFlowInfo_ReachableFL(outdict);_TB= Cyc_Flags_warn_lose_unique;
if(!_TB)goto _TL99;_TC= env;_TD= _TC->aquals_bounds;_TE= lexp;_TF= _TE->topt;_T10= 
Cyc_Tcutil_is_noalias_pointer_or_aggr(_TD,_TF);
# 623
if(!_T10)goto _TL99;_T11= 
# 626
Cyc_CfFlowInfo_lookup_place(indict,p);{struct _tuple13 _T25=Cyc_CfFlowInfo_unname_rval(_T11);void*_T26;_T26= _T25.f0;{void*rv=_T26;_T12= rv;_T13= (int*)_T12;_T14= *_T13;switch(_T14){case 2: _T15= rv;_T16= (struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct*)_T15;_T17= _T16->f1;if(_T17!=Cyc_CfFlowInfo_NoneIL)goto _TL9C;goto _LL11;_TL9C: goto _LL14;case 7: _LL11: goto _LL13;case 0: _LL13: goto _LLD;default: _LL14: _T18= lexp;_T19= _T18->loc;_T1A= 
# 633
_tag_fat("assignment may overwrite alias-free pointer(s)",sizeof(char),47U);_T1B= _tag_fat(0U,sizeof(void*),0);Cyc_Warn_warn(_T19,_T1A,_T1B);goto _LLD;}_LLD:;}}goto _TL9A;_TL99: _TL9A:
# 638
 Cyc_NewControlFlow_update_tryflow(env,outflow);{struct _tuple14 _T25;
_T25.f0= outflow;_T25.f1= rval;_T1C= _T25;}return _T1C;}_TL97:{struct _tuple14 _T25;_T1E= env;_T1F= rexp;_T20= _T1F->loc;_T21= outflow;_T22= rval;
# 644
({__typeof__(Cyc_NewControlFlow_use_Rval(_T1E,_T20,_T21,_T22))_T26=Cyc_NewControlFlow_use_Rval(_T1E,_T20,_T21,_T22);_T25.f0= _T26;});_T25.f1= rval;_T1D= _T25;}return _T1D;;};}
# 651
static union Cyc_CfFlowInfo_FlowInfo Cyc_NewControlFlow_do_initialize_var(struct Cyc_CfFlowInfo_FlowEnv*fenv,struct Cyc_NewControlFlow_AnalEnv*env,union Cyc_CfFlowInfo_FlowInfo f,struct Cyc_Absyn_Vardecl*vd,struct Cyc_Absyn_Exp*rexp,void*rval,unsigned loc){union Cyc_CfFlowInfo_FlowInfo _T0;struct _union_FlowInfo_BottomFL _T1;unsigned _T2;union Cyc_CfFlowInfo_FlowInfo _T3;union Cyc_CfFlowInfo_FlowInfo _T4;struct _union_FlowInfo_ReachableFL _T5;struct Cyc_CfFlowInfo_FlowEnv*_T6;unsigned _T7;struct Cyc_Dict_Dict _T8;struct Cyc_CfFlowInfo_Place*_T9;struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*_TA;void*_TB;union Cyc_CfFlowInfo_FlowInfo _TC;struct Cyc_Dict_Dict _TD;_T0= f;_T1= _T0.BottomFL;_T2= _T1.tag;if(_T2!=1)goto _TL9E;_T3= 
# 655
Cyc_CfFlowInfo_BottomFL();return _T3;_TL9E: _T4= f;_T5= _T4.ReachableFL;_TD= _T5.val;{struct Cyc_Dict_Dict outdict=_TD;_T6= fenv;_T7= loc;_T8= outdict;{struct Cyc_CfFlowInfo_Place*_TE=_cycalloc(sizeof(struct Cyc_CfFlowInfo_Place));{struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*_TF=_cycalloc(sizeof(struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct));_TF->tag= 0;
# 659
_TF->f1= vd;_TA= (struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*)_TF;}_TE->root= (void*)_TA;_TE->path= 0;_T9= (struct Cyc_CfFlowInfo_Place*)_TE;}_TB= rval;outdict= Cyc_CfFlowInfo_assign_place(_T6,_T7,_T8,_T9,_TB);{
union Cyc_CfFlowInfo_FlowInfo outflow=Cyc_CfFlowInfo_ReachableFL(outdict);
Cyc_NewControlFlow_update_tryflow(env,outflow);_TC= outflow;
# 663
return _TC;}};}struct _tuple24{struct Cyc_Absyn_Vardecl**f0;struct Cyc_Absyn_Exp*f1;};
# 667
static union Cyc_CfFlowInfo_FlowInfo Cyc_NewControlFlow_initialize_pat_vars(struct Cyc_CfFlowInfo_FlowEnv*fenv,struct Cyc_NewControlFlow_AnalEnv*env,union Cyc_CfFlowInfo_FlowInfo inflow,struct Cyc_List_List*vds,long name_locs,unsigned pat_loc,unsigned exp_loc,long isAliasPat){union Cyc_CfFlowInfo_FlowInfo _T0;struct _tuple1 _T1;struct Cyc_List_List*_T2;struct Cyc_List_List*_T3;void*_T4;struct _tuple24*_T5;struct _tuple24 _T6;struct Cyc_Absyn_Vardecl**_T7;struct Cyc_List_List*_T8;struct Cyc_List_List*_T9;void*_TA;struct _tuple24*_TB;struct _tuple24 _TC;struct Cyc_Absyn_Exp*_TD;struct Cyc_List_List*_TE;struct Cyc_CfFlowInfo_FlowEnv*_TF;union Cyc_CfFlowInfo_FlowInfo _T10;struct Cyc_List_List*_T11;struct Cyc_CfFlowInfo_FlowEnv*_T12;void*_T13;unsigned _T14;long _T15;struct Cyc_NewControlFlow_AnalEnv*_T16;union Cyc_CfFlowInfo_FlowInfo _T17;struct Cyc_List_List*_T18;void*_T19;struct Cyc_Absyn_Exp*_T1A;struct Cyc_List_List*_T1B;struct Cyc_List_List*_T1C;void*_T1D;struct Cyc_Absyn_Exp*_T1E;void*_T1F;struct Cyc_String_pa_PrintArg_struct _T20;int(*_T21)(struct _fat_ptr,struct _fat_ptr);void*(*_T22)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T23;struct _fat_ptr _T24;struct Cyc_List_List _T25;struct Cyc_NewControlFlow_AnalEnv*_T26;union Cyc_CfFlowInfo_FlowInfo _T27;struct Cyc_List_List*_T28;struct Cyc_List_List*_T29;union Cyc_CfFlowInfo_FlowInfo _T2A;struct _union_FlowInfo_ReachableFL _T2B;unsigned _T2C;union Cyc_CfFlowInfo_FlowInfo _T2D;struct _union_FlowInfo_ReachableFL _T2E;long _T2F;union Cyc_CfFlowInfo_AbsLVal _T30;struct _union_AbsLVal_PlaceL _T31;unsigned _T32;union Cyc_CfFlowInfo_AbsLVal _T33;struct _union_AbsLVal_PlaceL _T34;struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*_T35;struct Cyc_Absyn_Vardecl**_T36;struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*_T37;struct Cyc_Absyn_Vardecl**_T38;struct Cyc_NewControlFlow_AnalEnv*_T39;struct Cyc_List_List*_T3A;struct Cyc_Absyn_Exp*_T3B;void*_T3C;void*_T3D;long _T3E;struct Cyc_NewControlFlow_AnalEnv*_T3F;struct Cyc_List_List*_T40;struct Cyc_Absyn_Vardecl**_T41;struct Cyc_Absyn_Vardecl*_T42;void*_T43;long _T44;struct Cyc_String_pa_PrintArg_struct _T45;unsigned _T46;struct _fat_ptr _T47;struct _fat_ptr _T48;struct Cyc_CfFlowInfo_FlowEnv*_T49;struct Cyc_NewControlFlow_AnalEnv*_T4A;union Cyc_CfFlowInfo_FlowInfo _T4B;struct Cyc_Absyn_Vardecl**_T4C;struct Cyc_Absyn_Vardecl*_T4D;struct Cyc_Absyn_Exp*_T4E;void*_T4F;unsigned _T50;struct Cyc_List_List*_T51;union Cyc_CfFlowInfo_FlowInfo _T52;
# 671
if(vds!=0)goto _TLA0;_T0= inflow;
return _T0;_TLA0: _T1= 
# 675
Cyc_List_split(vds);_T2= _T1.f0;{struct Cyc_List_List*vs=Cyc_Tcutil_filter_nulls(_T2);
struct Cyc_List_List*es=0;{
struct Cyc_List_List*x=vds;_TLA5: if(x!=0)goto _TLA3;else{goto _TLA4;}
_TLA3: _T3= x;_T4= _T3->hd;_T5= (struct _tuple24*)_T4;_T6= *_T5;_T7= _T6.f0;if(_T7!=0)goto _TLA6;{struct Cyc_List_List*_T53=_cycalloc(sizeof(struct Cyc_List_List));_T9= x;_TA= _T9->hd;_TB= (struct _tuple24*)_TA;_TC= *_TB;_TD= _TC.f1;
({__typeof__(_check_null(_TD))_T54=_check_null(_TD);_T53->hd= _T54;});_T53->tl= es;_T8= (struct Cyc_List_List*)_T53;}es= _T8;goto _TLA7;_TLA6: _TLA7: _TE= x;
# 677
x= _TE->tl;goto _TLA5;_TLA4:;}_TF= fenv;_T10= inflow;_T11= vs;_T12= fenv;_T13= _T12->unknown_all;_T14= pat_loc;_T15= name_locs;
# 681
inflow= Cyc_NewControlFlow_add_vars(_TF,_T10,_T11,_T13,_T14,_T15);
# 683
inflow= Cyc_NewControlFlow_expand_unique_places(env,inflow,es);{
struct Cyc_List_List*x=es;_TLAB: if(x!=0)goto _TLA9;else{goto _TLAA;}
# 689
_TLA9: _T16= env;_T17= inflow;_T18= x;_T19= _T18->hd;_T1A= (struct Cyc_Absyn_Exp*)_T19;{struct _tuple14 _T53=Cyc_NewControlFlow_anal_Rexp(_T16,1,_T17,_T1A,0);void*_T54;union Cyc_CfFlowInfo_FlowInfo _T55;_T55= _T53.f0;_T54= _T53.f1;{union Cyc_CfFlowInfo_FlowInfo f=_T55;void*r=_T54;
inflow= Cyc_NewControlFlow_use_Rval(env,exp_loc,f,r);}}_T1B= x;
# 684
x= _T1B->tl;goto _TLAB;_TLAA:;}{
# 697
struct Cyc_List_List*_T53=Cyc_List_rev(vds);struct Cyc_List_List*vds=_T53;
_TLAF: if(vds!=0)goto _TLAD;else{goto _TLAE;}
_TLAD: _T1C= vds;_T1D= _T1C->hd;{struct _tuple24*_T54=(struct _tuple24*)_T1D;struct Cyc_Absyn_Exp*_T55;struct Cyc_Absyn_Vardecl**_T56;{struct _tuple24 _T57=*_T54;_T56= _T57.f0;_T55= _T57.f1;}{struct Cyc_Absyn_Vardecl**vd=_T56;struct Cyc_Absyn_Exp*ve=_T55;
if(vd==0)goto _TLB0;if(ve==0)goto _TLB0;_T1E= ve;_T1F= _T1E->topt;
if(_T1F!=0)goto _TLB2;{struct Cyc_String_pa_PrintArg_struct _T57;_T57.tag= 0;
({__typeof__(Cyc_Absynpp_exp2string(ve))_T58=Cyc_Absynpp_exp2string(ve);_T57.f1= _T58;});_T20= _T57;}{struct Cyc_String_pa_PrintArg_struct _T57=_T20;void*_T58[1];_T58[0]= & _T57;_T22= Cyc_Warn_impos;{int(*_T59)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T22;_T21= _T59;}_T23= _tag_fat("oops! pattern init expr %s has no type!\n",sizeof(char),41U);_T24= _tag_fat(_T58,sizeof(void*),1);_T21(_T23,_T24);}goto _TLB3;_TLB2: _TLB3:{struct Cyc_List_List _T57;
# 710
_T57.hd= ve;_T57.tl= 0;_T25= _T57;}{
# 709
struct Cyc_List_List l=_T25;_T26= env;_T27= inflow;_T28= & l;_T29= (struct Cyc_List_List*)_T28;{
# 712
union Cyc_CfFlowInfo_FlowInfo f=Cyc_NewControlFlow_expand_unique_places(_T26,_T27,_T29);
struct _tuple18 _T57=Cyc_NewControlFlow_anal_Lexp(env,f,0,0,ve);union Cyc_CfFlowInfo_AbsLVal _T58;_T58= _T57.f1;{union Cyc_CfFlowInfo_AbsLVal lval=_T58;
struct _tuple14 _T59=Cyc_NewControlFlow_anal_Rexp(env,1,f,ve,isAliasPat);void*_T5A;union Cyc_CfFlowInfo_FlowInfo _T5B;_T5B= _T59.f0;_T5A= _T59.f1;{union Cyc_CfFlowInfo_FlowInfo f=_T5B;void*rval=_T5A;struct Cyc_Dict_Dict _T5C;_T2A= f;_T2B= _T2A.ReachableFL;_T2C= _T2B.tag;if(_T2C!=2)goto _TLB4;_T2D= f;_T2E= _T2D.ReachableFL;_T5C= _T2E.val;{struct Cyc_Dict_Dict fd=_T5C;_T2F= name_locs;
# 717
if(!_T2F)goto _TLB6;{struct Cyc_CfFlowInfo_Place*_T5D;_T30= lval;_T31= _T30.PlaceL;_T32= _T31.tag;if(_T32!=1)goto _TLB8;_T33= lval;_T34= _T33.PlaceL;_T5D= _T34.val;{struct Cyc_CfFlowInfo_Place*p=_T5D;{struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*_T5E=_cycalloc(sizeof(struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct));_T5E->tag= 8;_T36= vd;
# 720
_T5E->f1= *_T36;_T5E->f2= rval;_T35= (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*)_T5E;}rval= (void*)_T35;{
# 723
void*new_rval=Cyc_CfFlowInfo_lookup_place(fd,p);{struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*_T5E=_cycalloc(sizeof(struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct));_T5E->tag= 8;_T38= vd;
_T5E->f1= *_T38;_T5E->f2= new_rval;_T37= (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*)_T5E;}new_rval= (void*)_T37;
fd= Cyc_CfFlowInfo_assign_place(fenv,exp_loc,fd,p,new_rval);
f= Cyc_CfFlowInfo_ReachableFL(fd);goto _LL11;}}_TLB8: _T39= env;_T3A= _T39->aquals_bounds;_T3B= ve;_T3C= _T3B->topt;_T3D= 
# 730
_check_null(_T3C);_T3E= Cyc_Tcutil_is_noalias_pointer_or_aggr(_T3A,_T3D);if(!_T3E)goto _TLBA;_T3F= env;_T40= _T3F->aquals_bounds;_T41= vd;_T42= *_T41;_T43= _T42->type;_T44= 
Cyc_Tcutil_is_noalias_pointer_or_aggr(_T40,_T43);
# 730
if(_T44)goto _TLBA;else{goto _TLBC;}
# 732
_TLBC:{struct Cyc_String_pa_PrintArg_struct _T5E;_T5E.tag= 0;({__typeof__(Cyc_Absynpp_exp2string(ve))_T5F=Cyc_Absynpp_exp2string(ve);_T5E.f1= _T5F;});_T45= _T5E;}{struct Cyc_String_pa_PrintArg_struct _T5E=_T45;void*_T5F[1];_T5F[0]= & _T5E;_T46= exp_loc;_T47= _tag_fat("aliased pattern expression not an l-value: %s",sizeof(char),46U);_T48= _tag_fat(_T5F,sizeof(void*),1);Cyc_CfFlowInfo_aerr(_T46,_T47,_T48);}goto _TLBB;_TLBA: _TLBB: _LL11:;}goto _TLB7;_TLB6: _TLB7: _T49= fenv;_T4A= env;_T4B= f;_T4C= vd;_T4D= *_T4C;_T4E= ve;_T4F= rval;_T50= pat_loc;
# 739
inflow= Cyc_NewControlFlow_do_initialize_var(_T49,_T4A,_T4B,_T4D,_T4E,_T4F,_T50);goto _LLC;}_TLB4: goto _LLC;_LLC:;}}}}goto _TLB1;_TLB0: _TLB1:;}}_T51= vds;
# 698
vds= _T51->tl;goto _TLAF;_TLAE: _T52= inflow;
# 748
return _T52;}}}
# 751
static long Cyc_NewControlFlow_is_local_var_rooted_path(struct Cyc_Absyn_Exp*e,long cast_ok){struct Cyc_Absyn_Exp*_T0;int*_T1;unsigned _T2;struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T3;void*_T4;int*_T5;unsigned _T6;long _T7;long _T8;long _T9;_T0= e;{
void*_TA=_T0->r;struct Cyc_Absyn_Exp*_TB;_T1= (int*)_TA;_T2= *_T1;switch(_T2){case 1: _T3= (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_TA;_T4= _T3->f1;_T5= (int*)_T4;_T6= *_T5;switch(_T6){case 4: goto _LL4;case 3: _LL4: goto _LL6;case 5: _LL6:
# 756
 return 1;default: goto _LL11;};case 20:{struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*_TC=(struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*)_TA;_TB= _TC->f1;}{struct Cyc_Absyn_Exp*e=_TB;_TB= e;goto _LLA;}case 21:{struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*_TC=(struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*)_TA;_TB= _TC->f1;}_LLA: {struct Cyc_Absyn_Exp*e=_TB;_TB= e;goto _LLC;}case 22:{struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*_TC=(struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*)_TA;_TB= _TC->f1;}_LLC: {struct Cyc_Absyn_Exp*e=_TB;_T7= 
# 762
Cyc_NewControlFlow_is_local_var_rooted_path(e,cast_ok);return _T7;}case 23:{struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*_TC=(struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*)_TA;_TB= _TC->f1;}{struct Cyc_Absyn_Exp*e=_TB;
# 764
return 0;}case 14:{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_TC=(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_TA;_TB= _TC->f2;}{struct Cyc_Absyn_Exp*e=_TB;_T8= cast_ok;
# 766
if(!_T8)goto _TLBF;_T9= 
Cyc_NewControlFlow_is_local_var_rooted_path(e,cast_ok);return _T9;
# 769
_TLBF: return 0;}default: _LL11:
# 771
 return 0;};}}struct _tuple25{union Cyc_CfFlowInfo_AbsLVal f0;union Cyc_CfFlowInfo_FlowInfo f1;};struct _tuple26{struct Cyc_List_List*f0;struct Cyc_Absyn_Exp*f1;};
# 776
static struct _tuple14 Cyc_NewControlFlow_anal_Rexp(struct Cyc_NewControlFlow_AnalEnv*env,long copy_ctxt,union Cyc_CfFlowInfo_FlowInfo inflow,struct Cyc_Absyn_Exp*e,long local_alias){struct Cyc_NewControlFlow_AnalEnv*_T0;union Cyc_CfFlowInfo_FlowInfo _T1;struct _union_FlowInfo_BottomFL _T2;unsigned _T3;struct _tuple14 _T4;struct Cyc_CfFlowInfo_FlowEnv*_T5;union Cyc_CfFlowInfo_FlowInfo _T6;struct _union_FlowInfo_ReachableFL _T7;long _T8;long _T9;struct Cyc_NewControlFlow_AnalEnv*_TA;struct Cyc_List_List*_TB;struct Cyc_Absyn_Exp*_TC;void*_TD;long _TE;struct _tuple18 _TF;union Cyc_CfFlowInfo_FlowInfo _T10;struct _union_FlowInfo_ReachableFL _T11;unsigned _T12;union Cyc_CfFlowInfo_AbsLVal _T13;struct _union_AbsLVal_PlaceL _T14;unsigned _T15;union Cyc_CfFlowInfo_FlowInfo _T16;struct _union_FlowInfo_ReachableFL _T17;union Cyc_CfFlowInfo_AbsLVal _T18;struct _union_AbsLVal_PlaceL _T19;struct Cyc_Absyn_Exp*_T1A;struct Cyc_NewControlFlow_AnalEnv*_T1B;int _T1C;void*_T1D;long*_T1E;long _T1F;struct Cyc_Absyn_Exp*_T20;unsigned _T21;struct _fat_ptr _T22;struct _fat_ptr _T23;struct _tuple14 _T24;struct Cyc_CfFlowInfo_FlowEnv*_T25;long _T26;struct _tuple14 _T27;struct Cyc_CfFlowInfo_FlowEnv*_T28;struct Cyc_NewControlFlow_AnalEnv*_T29;struct Cyc_List_List*_T2A;struct Cyc_Absyn_Exp*_T2B;void*_T2C;struct Cyc_Absyn_Exp*_T2D;struct Cyc_NewControlFlow_AnalEnv*_T2E;int _T2F;void*_T30;long _T31;struct Cyc_CfFlowInfo_FlowEnv*_T32;struct Cyc_Absyn_Exp*_T33;unsigned _T34;struct Cyc_Dict_Dict _T35;struct Cyc_CfFlowInfo_Place*_T36;void*_T37;struct _tuple14 _T38;struct Cyc_Absyn_Exp*_T39;int*_T3A;unsigned _T3B;struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T3C;enum Cyc_Absyn_Coercion _T3D;struct _tuple14 _T3E;struct _tuple14 _T3F;struct _fat_ptr _T40;struct _fat_ptr _T41;int _T42;struct Cyc_Absyn_Exp*_T43;unsigned _T44;struct Cyc_String_pa_PrintArg_struct _T45;struct Cyc___cycFILE*_T46;struct _fat_ptr _T47;struct _fat_ptr _T48;struct Cyc___cycFILE*_T49;struct _fat_ptr _T4A;struct _fat_ptr _T4B;struct _fat_ptr _T4C;struct _fat_ptr _T4D;int _T4E;struct _fat_ptr _T4F;struct _fat_ptr _T50;int _T51;struct _tuple14 _T52;struct Cyc_CfFlowInfo_FlowEnv*_T53;struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T54;union Cyc_Absyn_Cnst _T55;struct _union_Cnst_Wstring_c _T56;unsigned _T57;struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T58;union Cyc_Absyn_Cnst _T59;struct _union_Cnst_Int_c _T5A;struct _tuple7 _T5B;int _T5C;struct _tuple14 _T5D;struct Cyc_CfFlowInfo_FlowEnv*_T5E;struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T5F;void*_T60;int*_T61;unsigned _T62;struct _tuple14 _T63;struct Cyc_CfFlowInfo_FlowEnv*_T64;struct _tuple14 _T65;struct Cyc_CfFlowInfo_FlowEnv*_T66;struct Cyc_Absyn_Exp*_T67;void*_T68;void*_T69;struct Cyc_CfFlowInfo_FlowEnv*_T6A;void*_T6B;void*_T6C;struct Cyc_Absyn_Vardecl*_T6D;enum Cyc_Absyn_Scope _T6E;int _T6F;struct _tuple14 _T70;struct Cyc_CfFlowInfo_FlowEnv*_T71;struct Cyc_Absyn_Exp*_T72;void*_T73;void*_T74;struct Cyc_CfFlowInfo_FlowEnv*_T75;void*_T76;void*_T77;void*_T78;struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct _T79;struct _tuple14 _T7A;struct Cyc_Dict_Dict _T7B;int(*_T7C)(void*,void*);struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*_T7D;void*_T7E;long _T7F;struct _tuple14 _T80;struct Cyc_CfFlowInfo_FlowEnv*_T81;struct Cyc_Absyn_Datatype_e_Absyn_Raw_exp_struct*_T82;struct Cyc_List_List*_T83;int _T84;int _T85;struct _fat_ptr _T86;void**_T87;unsigned _T88;unsigned _T89;struct Cyc_CfFlowInfo_FlowEnv*_T8A;struct _fat_ptr _T8B;unsigned char*_T8C;void**_T8D;struct Cyc_CfFlowInfo_FlowEnv*_T8E;struct _fat_ptr _T8F;unsigned char*_T90;void**_T91;unsigned _T92;int _T93;struct Cyc_List_List*_T94;struct Cyc_List_List*_T95;struct _tuple14 _T96;struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct*_T97;struct _tuple14 _T98;struct Cyc_CfFlowInfo_FlowEnv*_T99;enum Cyc_Absyn_Primop _T9A;int _T9B;struct Cyc_NewControlFlow_AnalEnv*_T9C;union Cyc_CfFlowInfo_FlowInfo _T9D;struct Cyc_List_List*_T9E;void*_T9F;struct Cyc_Absyn_Exp*_TA0;long _TA1;struct Cyc_NewControlFlow_AnalEnv*_TA2;union Cyc_CfFlowInfo_FlowInfo _TA3;union Cyc_CfFlowInfo_FlowInfo _TA4;struct Cyc_List_List*_TA5;void*_TA6;struct Cyc_Absyn_Exp*_TA7;void*_TA8;struct Cyc_NewControlFlow_AnalEnv*_TA9;struct Cyc_List_List*_TAA;void*_TAB;struct Cyc_Absyn_Exp*_TAC;unsigned _TAD;union Cyc_CfFlowInfo_FlowInfo _TAE;void*_TAF;struct _tuple14 _TB0;struct Cyc_NewControlFlow_AnalEnv*_TB1;struct Cyc_CfFlowInfo_FlowEnv*_TB2;struct _tuple14 _TB3;struct Cyc_List_List _TB4;struct Cyc_NewControlFlow_AnalEnv*_TB5;union Cyc_CfFlowInfo_FlowInfo _TB6;struct Cyc_List_List*_TB7;struct Cyc_List_List*_TB8;struct Cyc_Absyn_Exp*_TB9;void*_TBA;void*_TBB;long _TBC;struct _tuple25 _TBD;union Cyc_CfFlowInfo_AbsLVal _TBE;struct _union_AbsLVal_PlaceL _TBF;unsigned _TC0;union Cyc_CfFlowInfo_FlowInfo _TC1;struct _union_FlowInfo_ReachableFL _TC2;unsigned _TC3;union Cyc_CfFlowInfo_AbsLVal _TC4;struct _union_AbsLVal_PlaceL _TC5;union Cyc_CfFlowInfo_FlowInfo _TC6;struct _union_FlowInfo_ReachableFL _TC7;struct Cyc_CfFlowInfo_FlowEnv*_TC8;struct Cyc_Absyn_Exp*_TC9;unsigned _TCA;struct Cyc_Dict_Dict _TCB;struct Cyc_CfFlowInfo_Place*_TCC;struct Cyc_CfFlowInfo_FlowEnv*_TCD;void*_TCE;struct Cyc_Dict_Dict _TCF;long _TD0;struct _tuple14 _TD1;struct Cyc_CfFlowInfo_FlowEnv*_TD2;struct _tuple14 _TD3;struct Cyc_CfFlowInfo_FlowEnv*_TD4;struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct*_TD5;struct Cyc_Absyn_PrimopOpt*_TD6;long _TD7;struct Cyc_NewControlFlow_AnalEnv*_TD8;struct Cyc_List_List*_TD9;struct Cyc_Absyn_Exp*_TDA;void*_TDB;void*_TDC;long _TDD;struct Cyc_Absyn_Exp*_TDE;unsigned _TDF;struct _fat_ptr _TE0;struct _fat_ptr _TE1;struct _tuple14 _TE2;struct Cyc_CfFlowInfo_FlowEnv*_TE3;union Cyc_CfFlowInfo_FlowInfo _TE4;struct _union_FlowInfo_ReachableFL _TE5;unsigned _TE6;union Cyc_CfFlowInfo_FlowInfo _TE7;struct _union_FlowInfo_ReachableFL _TE8;union Cyc_CfFlowInfo_AbsLVal _TE9;struct _union_AbsLVal_PlaceL _TEA;unsigned _TEB;union Cyc_CfFlowInfo_AbsLVal _TEC;struct _union_AbsLVal_PlaceL _TED;struct Cyc_CfFlowInfo_FlowEnv*_TEE;struct Cyc_Absyn_Exp*_TEF;unsigned _TF0;struct Cyc_Dict_Dict _TF1;struct Cyc_CfFlowInfo_Place*_TF2;struct Cyc_CfFlowInfo_FlowEnv*_TF3;void*_TF4;struct _tuple14 _TF5;struct Cyc_CfFlowInfo_FlowEnv*_TF6;long _TF7;struct Cyc_NewControlFlow_AnalEnv*_TF8;struct Cyc_List_List*_TF9;struct Cyc_Absyn_Exp*_TFA;void*_TFB;void*_TFC;long _TFD;struct Cyc_Absyn_Exp*_TFE;unsigned _TFF;struct _fat_ptr _T100;struct _fat_ptr _T101;struct _tuple14 _T102;struct Cyc_CfFlowInfo_FlowEnv*_T103;struct Cyc_NewControlFlow_AnalEnv*_T104;union Cyc_CfFlowInfo_FlowInfo _T105;struct Cyc_List_List*_T106;struct _fat_ptr _T107;struct Cyc_CfFlowInfo_FlowEnv*_T108;struct Cyc_NewControlFlow_AnalEnv*_T109;union Cyc_CfFlowInfo_FlowInfo _T10A;struct Cyc_Absyn_Exp*_T10B;union Cyc_CfFlowInfo_AbsLVal _T10C;struct Cyc_Absyn_Exp*_T10D;void*_T10E;struct Cyc_Absyn_Exp*_T10F;unsigned _T110;struct _tuple14 _T111;struct _tuple14 _T112;struct Cyc_NewControlFlow_AnalEnv*_T113;struct Cyc_Absyn_Exp*_T114;unsigned _T115;union Cyc_CfFlowInfo_FlowInfo _T116;void*_T117;struct _tuple14 _T118;struct Cyc_CfFlowInfo_FlowEnv*_T119;struct Cyc_Absyn_Exp*_T11A;void*_T11B;void*_T11C;struct Cyc_CfFlowInfo_FlowEnv*_T11D;void*_T11E;struct Cyc_NewControlFlow_AnalEnv*_T11F;union Cyc_CfFlowInfo_FlowInfo _T120;struct Cyc_List_List*_T121;struct Cyc_NewControlFlow_AnalEnv*_T122;struct Cyc_Absyn_Exp*_T123;unsigned _T124;union Cyc_CfFlowInfo_FlowInfo _T125;void*_T126;struct Cyc_Absyn_Exp*_T127;void*_T128;void*_T129;int*_T12A;int _T12B;struct Cyc_Absyn_PtrInfo _T12C;int*_T12D;int _T12E;struct Cyc_Absyn_FnInfo _T12F;struct Cyc_List_List*_T130;int*_T131;unsigned _T132;struct Cyc_List_List*_T133;int _T134;struct Cyc_List_List*_T135;int _T136;struct Cyc_List_List*_T137;int _T138;struct Cyc_List_List*_T139;int _T13A;struct Cyc_List_List*_T13B;int(*_T13C)(struct _fat_ptr,struct _fat_ptr);void*(*_T13D)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T13E;struct _fat_ptr _T13F;int(*_T140)(struct _fat_ptr,struct _fat_ptr);void*(*_T141)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T142;struct _fat_ptr _T143;long(*_T144)(struct Cyc_List_List*,int);long(*_T145)(struct Cyc_List_List*,void*);long _T146;union Cyc_CfFlowInfo_FlowInfo _T147;struct _union_FlowInfo_BottomFL _T148;unsigned _T149;union Cyc_CfFlowInfo_FlowInfo _T14A;struct _union_FlowInfo_ReachableFL _T14B;struct Cyc_List_List*_T14C;void*_T14D;struct Cyc_NewControlFlow_AnalEnv*_T14E;struct Cyc_CfFlowInfo_FlowEnv*_T14F;struct Cyc_Dict_Dict _T150;struct Cyc_List_List*_T151;void*_T152;enum Cyc_CfFlowInfo_InitLevel _T153;int _T154;struct Cyc_List_List*_T155;void*_T156;long _T157;struct Cyc_List_List*_T158;void*_T159;struct Cyc_Absyn_Exp*_T15A;unsigned _T15B;struct _fat_ptr _T15C;struct _fat_ptr _T15D;union Cyc_CfFlowInfo_FlowInfo _T15E;struct _union_FlowInfo_BottomFL _T15F;unsigned _T160;union Cyc_CfFlowInfo_FlowInfo _T161;struct _union_FlowInfo_ReachableFL _T162;struct Cyc_CfFlowInfo_FlowEnv*_T163;struct Cyc_Dict_Dict _T164;struct Cyc_List_List*_T165;void*_T166;struct Cyc_List_List*_T167;int*_T168;unsigned _T169;struct Cyc_List_List*_T16A;void*_T16B;struct Cyc_Absyn_Exp*_T16C;void*_T16D;int*_T16E;int _T16F;struct Cyc_Absyn_PtrInfo _T170;struct Cyc_CfFlowInfo_FlowEnv*_T171;struct Cyc_List_List*_T172;void*_T173;struct Cyc_Absyn_Exp*_T174;unsigned _T175;struct Cyc_Dict_Dict _T176;struct Cyc_CfFlowInfo_Place*_T177;struct Cyc_CfFlowInfo_FlowEnv*_T178;void*_T179;struct Cyc_CfFlowInfo_FlowEnv*_T17A;void*_T17B;void*_T17C;int(*_T17D)(struct _fat_ptr,struct _fat_ptr);void*(*_T17E)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T17F;struct _fat_ptr _T180;int(*_T181)(struct _fat_ptr,struct _fat_ptr);void*(*_T182)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T183;struct _fat_ptr _T184;long(*_T185)(struct Cyc_List_List*,int);long(*_T186)(struct Cyc_List_List*,void*);long _T187;struct Cyc_NewControlFlow_AnalEnv*_T188;struct Cyc_List_List*_T189;void*_T18A;struct Cyc_Absyn_Exp*_T18B;unsigned _T18C;struct Cyc_List_List*_T18D;void*_T18E;struct Cyc_Absyn_Exp*_T18F;void*_T190;void*_T191;union Cyc_CfFlowInfo_FlowInfo _T192;struct Cyc_List_List*_T193;void*_T194;struct Cyc_NewControlFlow_AnalEnv*_T195;struct Cyc_List_List*_T196;void*_T197;struct Cyc_Absyn_Exp*_T198;unsigned _T199;union Cyc_CfFlowInfo_FlowInfo _T19A;struct Cyc_List_List*_T19B;void*_T19C;long(*_T19D)(struct Cyc_List_List*,int);long(*_T19E)(struct Cyc_List_List*,void*);long _T19F;struct Cyc_NewControlFlow_AnalEnv*_T1A0;struct Cyc_List_List*_T1A1;struct Cyc_List_List*_T1A2;void*_T1A3;struct Cyc_Absyn_Exp*_T1A4;void*_T1A5;void*_T1A6;long _T1A7;struct Cyc_NewControlFlow_AnalEnv*_T1A8;union Cyc_CfFlowInfo_FlowInfo _T1A9;struct Cyc_List_List*_T1AA;void*_T1AB;struct Cyc_Absyn_Exp*_T1AC;struct Cyc_List_List*_T1AD;void*_T1AE;struct Cyc_Absyn_Exp*_T1AF;unsigned _T1B0;struct Cyc_List_List*_T1B1;void*_T1B2;struct Cyc_List_List*_T1B3;struct Cyc_List_List*_T1B4;struct Cyc_Absyn_Exp*_T1B5;void*_T1B6;void*_T1B7;long _T1B8;struct _tuple14 _T1B9;struct Cyc_CfFlowInfo_FlowEnv*_T1BA;struct Cyc_Absyn_Exp*_T1BB;void*_T1BC;void*_T1BD;struct Cyc_CfFlowInfo_FlowEnv*_T1BE;void*_T1BF;struct Cyc_Absyn_MallocInfo _T1C0;struct Cyc_Absyn_MallocInfo _T1C1;struct Cyc_Absyn_MallocInfo _T1C2;struct Cyc_Absyn_MallocInfo _T1C3;struct Cyc_Absyn_MallocInfo _T1C4;struct Cyc_Absyn_MallocInfo _T1C5;long _T1C6;struct Cyc_CfFlowInfo_FlowEnv*_T1C7;enum Cyc_Absyn_MallocKind _T1C8;int _T1C9;struct Cyc_CfFlowInfo_FlowEnv*_T1CA;void**_T1CB;void*_T1CC;struct Cyc_CfFlowInfo_FlowEnv*_T1CD;void*_T1CE;struct Cyc_CfFlowInfo_FlowEnv*_T1CF;void**_T1D0;void*_T1D1;struct Cyc_CfFlowInfo_FlowEnv*_T1D2;void*_T1D3;struct Cyc_List_List*_T1D4;struct Cyc_List_List*_T1D5;struct Cyc_Absyn_Exp*_T1D6;unsigned _T1D7;struct Cyc_List_List*_T1D8;struct Cyc_Absyn_Exp*_T1D9;unsigned _T1DA;struct Cyc_List_List*_T1DB;struct Cyc_NewControlFlow_AnalEnv*_T1DC;struct Cyc_List_List*_T1DD;struct Cyc_Absyn_Exp*_T1DE;void*_T1DF;void*_T1E0;long _T1E1;struct _tuple14 _T1E2;struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct*_T1E3;struct Cyc_CfFlowInfo_MallocPt_CfFlowInfo_Root_struct*_T1E4;struct Cyc_Absyn_Exp*_T1E5;void*_T1E6;struct Cyc_CfFlowInfo_Place*_T1E7;struct Cyc_CfFlowInfo_Place*_T1E8;struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct*_T1E9;union Cyc_CfFlowInfo_FlowInfo _T1EA;struct _union_FlowInfo_BottomFL _T1EB;unsigned _T1EC;struct _tuple14 _T1ED;union Cyc_CfFlowInfo_FlowInfo _T1EE;struct _union_FlowInfo_ReachableFL _T1EF;struct _tuple14 _T1F0;struct Cyc_Dict_Dict _T1F1;struct Cyc_NewControlFlow_AnalEnv*_T1F2;union Cyc_CfFlowInfo_FlowInfo _T1F3;struct Cyc_List_List*_T1F4;struct _fat_ptr _T1F5;struct Cyc_List_List*_T1F6;struct Cyc_List_List*_T1F7;struct Cyc_List_List*_T1F8;struct Cyc_List_List*_T1F9;struct Cyc_Absyn_Exp*_T1FA;void**_T1FB;long*_T1FC;void**_T1FD;long _T1FE;void*_T1FF;int*_T200;int _T201;struct Cyc_Absyn_Exp*_T202;unsigned _T203;struct _fat_ptr _T204;struct _fat_ptr _T205;struct Cyc_Absyn_Exp*_T206;void**_T207;long*_T208;void**_T209;long _T20A;void*_T20B;int*_T20C;int _T20D;struct Cyc_Absyn_Exp*_T20E;unsigned _T20F;struct _fat_ptr _T210;struct _fat_ptr _T211;union Cyc_CfFlowInfo_FlowInfo _T212;struct _union_FlowInfo_ReachableFL _T213;unsigned _T214;union Cyc_CfFlowInfo_FlowInfo _T215;struct _union_FlowInfo_ReachableFL _T216;union Cyc_CfFlowInfo_AbsLVal _T217;struct _union_AbsLVal_PlaceL _T218;unsigned _T219;union Cyc_CfFlowInfo_AbsLVal _T21A;struct _union_AbsLVal_PlaceL _T21B;struct Cyc_CfFlowInfo_FlowEnv*_T21C;struct Cyc_Absyn_Exp*_T21D;unsigned _T21E;struct Cyc_Dict_Dict _T21F;struct Cyc_CfFlowInfo_Place*_T220;void*_T221;enum Cyc_CfFlowInfo_InitLevel _T222;int _T223;struct Cyc_Absyn_Exp*_T224;unsigned _T225;struct _fat_ptr _T226;struct _fat_ptr _T227;union Cyc_CfFlowInfo_AbsLVal _T228;struct _union_AbsLVal_PlaceL _T229;unsigned _T22A;union Cyc_CfFlowInfo_AbsLVal _T22B;struct _union_AbsLVal_PlaceL _T22C;struct Cyc_CfFlowInfo_FlowEnv*_T22D;struct Cyc_Absyn_Exp*_T22E;unsigned _T22F;struct Cyc_Dict_Dict _T230;struct Cyc_CfFlowInfo_Place*_T231;void*_T232;enum Cyc_CfFlowInfo_InitLevel _T233;int _T234;struct Cyc_Absyn_Exp*_T235;unsigned _T236;struct _fat_ptr _T237;struct _fat_ptr _T238;struct _tuple14 _T239;struct Cyc_CfFlowInfo_FlowEnv*_T23A;struct Cyc_List_List*_T23B;struct Cyc_List_List*_T23C;struct Cyc_Absyn_Exp*_T23D;unsigned _T23E;struct Cyc_List_List*_T23F;struct Cyc_Absyn_Exp*_T240;unsigned _T241;struct Cyc_List_List*_T242;void*_T243;struct Cyc_List_List*_T244;struct Cyc_List_List*_T245;struct Cyc_List_List*_T246;struct Cyc_List_List*_T247;struct Cyc_List_List*_T248;struct Cyc_List_List*_T249;struct Cyc_List_List*_T24A;struct Cyc_List_List*_T24B;struct Cyc_NewControlFlow_AnalEnv*_T24C;struct Cyc_List_List*_T24D;struct Cyc_Absyn_Exp*_T24E;void*_T24F;void*_T250;long _T251;struct _tuple14 _T252;struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct*_T253;struct Cyc_CfFlowInfo_MallocPt_CfFlowInfo_Root_struct*_T254;struct Cyc_Absyn_Exp*_T255;void*_T256;struct Cyc_CfFlowInfo_Place*_T257;struct Cyc_CfFlowInfo_Place*_T258;struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct*_T259;union Cyc_CfFlowInfo_FlowInfo _T25A;struct _union_FlowInfo_BottomFL _T25B;unsigned _T25C;struct _tuple14 _T25D;union Cyc_CfFlowInfo_FlowInfo _T25E;struct _union_FlowInfo_ReachableFL _T25F;struct _tuple14 _T260;struct Cyc_Dict_Dict _T261;union Cyc_CfFlowInfo_AbsLVal _T262;struct _union_AbsLVal_UnknownL _T263;unsigned _T264;struct _tuple14 _T265;struct Cyc_CfFlowInfo_FlowEnv*_T266;union Cyc_CfFlowInfo_AbsLVal _T267;struct _union_AbsLVal_PlaceL _T268;struct _tuple14 _T269;struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct*_T26A;struct _tuple14 _T26B;struct Cyc_Absyn_Exp*_T26C;void*_T26D;long _T26E;struct _tuple14 _T26F;struct Cyc_CfFlowInfo_FlowEnv*_T270;struct Cyc_Absyn_Exp*_T271;void*_T272;void*_T273;struct Cyc_CfFlowInfo_FlowEnv*_T274;void*_T275;long _T276;struct Cyc_Absyn_Exp*_T277;unsigned _T278;void*_T279;struct _fat_ptr*_T27A;union Cyc_CfFlowInfo_FlowInfo _T27B;void*_T27C;int*_T27D;int _T27E;void*_T27F;struct Cyc_CfFlowInfo_UnionRInfo _T280;struct Cyc_CfFlowInfo_UnionRInfo _T281;struct Cyc_Absyn_Exp*_T282;void*_T283;void*_T284;struct _fat_ptr*_T285;long _T286;int _T287;int _T288;struct _tuple14 _T289;struct Cyc_CfFlowInfo_FlowEnv*_T28A;struct Cyc_Absyn_Exp*_T28B;void*_T28C;void*_T28D;struct Cyc_CfFlowInfo_FlowEnv*_T28E;void*_T28F;struct _tuple14 _T290;struct _fat_ptr _T291;int _T292;unsigned char*_T293;void**_T294;struct Cyc___cycFILE*_T295;struct _fat_ptr _T296;struct _fat_ptr _T297;struct Cyc_String_pa_PrintArg_struct _T298;int(*_T299)(struct _fat_ptr,struct _fat_ptr);void*(*_T29A)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T29B;struct _fat_ptr _T29C;struct Cyc_Absyn_Exp*_T29D;void*_T29E;void*_T29F;long _T2A0;struct _tuple14 _T2A1;struct Cyc_CfFlowInfo_FlowEnv*_T2A2;void*_T2A3;int*_T2A4;int _T2A5;void*_T2A6;struct Cyc_CfFlowInfo_UnionRInfo _T2A7;struct Cyc_CfFlowInfo_UnionRInfo _T2A8;struct Cyc_Absyn_Exp*_T2A9;void*_T2AA;void*_T2AB;struct _fat_ptr*_T2AC;long _T2AD;int _T2AE;int _T2AF;struct _tuple14 _T2B0;struct Cyc_CfFlowInfo_FlowEnv*_T2B1;struct _tuple14 _T2B2;struct Cyc_CfFlowInfo_FlowEnv*_T2B3;struct _tuple14 _T2B4;struct Cyc_CfFlowInfo_FlowEnv*_T2B5;struct Cyc_String_pa_PrintArg_struct _T2B6;int(*_T2B7)(struct _fat_ptr,struct _fat_ptr);void*(*_T2B8)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T2B9;struct _fat_ptr _T2BA;struct Cyc_Absyn_Exp*_T2BB;void*_T2BC;void*_T2BD;int*_T2BE;int _T2BF;struct Cyc_Absyn_PtrInfo _T2C0;long _T2C1;struct _tuple14 _T2C2;struct Cyc_CfFlowInfo_FlowEnv*_T2C3;struct Cyc_Absyn_Exp*_T2C4;void*_T2C5;void*_T2C6;struct Cyc_CfFlowInfo_FlowEnv*_T2C7;void*_T2C8;long _T2C9;struct Cyc_Absyn_Exp*_T2CA;unsigned _T2CB;void*_T2CC;struct _fat_ptr*_T2CD;union Cyc_CfFlowInfo_FlowInfo _T2CE;void*_T2CF;int*_T2D0;int _T2D1;void*_T2D2;struct Cyc_CfFlowInfo_UnionRInfo _T2D3;struct Cyc_CfFlowInfo_UnionRInfo _T2D4;long _T2D5;int _T2D6;int _T2D7;struct _tuple14 _T2D8;struct Cyc_CfFlowInfo_FlowEnv*_T2D9;struct Cyc_Absyn_Exp*_T2DA;void*_T2DB;void*_T2DC;struct Cyc_CfFlowInfo_FlowEnv*_T2DD;void*_T2DE;struct _tuple14 _T2DF;struct _fat_ptr _T2E0;int _T2E1;unsigned char*_T2E2;void**_T2E3;int(*_T2E4)(struct _fat_ptr,struct _fat_ptr);void*(*_T2E5)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T2E6;struct _fat_ptr _T2E7;int(*_T2E8)(struct _fat_ptr,struct _fat_ptr);void*(*_T2E9)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T2EA;struct _fat_ptr _T2EB;struct _tuple14 _T2EC;struct _tuple14 _T2ED;struct _tuple14 _T2EE;struct Cyc_CfFlowInfo_FlowEnv*_T2EF;struct _tuple14 _T2F0;struct _tuple14 _T2F1;struct _tuple14 _T2F2;struct Cyc_CfFlowInfo_FlowEnv*_T2F3;struct _tuple14 _T2F4;struct Cyc_NewControlFlow_AnalEnv*_T2F5;union Cyc_CfFlowInfo_FlowInfo _T2F6;struct Cyc_List_List*_T2F7;struct _fat_ptr _T2F8;union Cyc_CfFlowInfo_FlowInfo _T2F9;struct _union_FlowInfo_ReachableFL _T2FA;unsigned _T2FB;union Cyc_CfFlowInfo_FlowInfo _T2FC;struct _union_FlowInfo_ReachableFL _T2FD;struct Cyc_NewControlFlow_AnalEnv*_T2FE;struct Cyc_CfFlowInfo_FlowEnv*_T2FF;struct Cyc_Dict_Dict _T300;struct Cyc_List_List*_T301;struct Cyc_List_List*_T302;struct Cyc_List_List*_T303;void*_T304;enum Cyc_CfFlowInfo_InitLevel _T305;int _T306;struct Cyc_Absyn_Exp*_T307;unsigned _T308;struct _fat_ptr _T309;struct _fat_ptr _T30A;struct Cyc_NewControlFlow_AnalEnv*_T30B;union Cyc_CfFlowInfo_FlowInfo _T30C;union Cyc_CfFlowInfo_FlowInfo _T30D;struct Cyc_Absyn_Exp*_T30E;struct Cyc_List_List*_T30F;void*_T310;struct Cyc_Absyn_Exp*_T311;union Cyc_CfFlowInfo_FlowInfo _T312;struct _union_FlowInfo_BottomFL _T313;unsigned _T314;struct _tuple14 _T315;struct _tuple14 _T316;struct Cyc_Absyn_Exp*_T317;void*_T318;void*_T319;int*_T31A;int _T31B;int(*_T31C)(struct _fat_ptr,struct _fat_ptr);void*(*_T31D)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T31E;struct _fat_ptr _T31F;struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*_T320;struct Cyc_Absyn_Aggrdecl*_T321;struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*_T322;struct Cyc_Absyn_Aggrdecl*_T323;struct Cyc_Absyn_Aggrdecl*_T324;struct Cyc_Absyn_AggrdeclImpl*_T325;struct Cyc_Absyn_Aggrdecl*_T326;struct Cyc_Absyn_AggrdeclImpl*_T327;struct Cyc_Absyn_Exp*_T328;void*_T329;struct Cyc_NewControlFlow_AnalEnv*_T32A;union Cyc_CfFlowInfo_FlowInfo _T32B;struct Cyc_List_List*(*_T32C)(struct Cyc_Absyn_Exp*(*)(struct _tuple26*),struct Cyc_List_List*);struct Cyc_List_List*(*_T32D)(void*(*)(void*),struct Cyc_List_List*);struct Cyc_Absyn_Exp*(*_T32E)(struct _tuple26*);void*(*_T32F)(struct _tuple0*);struct Cyc_List_List*_T330;struct Cyc_List_List*_T331;struct Cyc_CfFlowInfo_FlowEnv*_T332;struct Cyc_List_List*_T333;enum Cyc_Absyn_AggrKind _T334;int _T335;int _T336;struct Cyc_CfFlowInfo_FlowEnv*_T337;void*_T338;struct Cyc_List_List*_T339;void*_T33A;struct _tuple26*_T33B;struct _tuple26 _T33C;struct Cyc_List_List*_T33D;int*_T33E;int _T33F;int(*_T340)(struct _fat_ptr,struct _fat_ptr);void*(*_T341)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T342;struct _fat_ptr _T343;struct _fat_ptr _T344;int _T345;unsigned char*_T346;void**_T347;struct Cyc_List_List*_T348;enum Cyc_Absyn_AggrKind _T349;int _T34A;struct Cyc_List_List*_T34B;void*_T34C;struct _tuple26*_T34D;struct _tuple26 _T34E;struct Cyc_NewControlFlow_AnalEnv*_T34F;struct Cyc_Absyn_Exp*_T350;unsigned _T351;union Cyc_CfFlowInfo_FlowInfo _T352;struct Cyc_List_List*_T353;void*_T354;long _T355;struct Cyc_Absyn_Exp*_T356;unsigned _T357;void*_T358;struct _fat_ptr*_T359;union Cyc_CfFlowInfo_FlowInfo _T35A;struct Cyc_List_List*_T35B;struct Cyc_List_List*_T35C;struct Cyc_List_List*_T35D;struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct*_T35E;struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct*_T35F;enum Cyc_Absyn_AggrKind _T360;int _T361;struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct*_T362;struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct*_T363;struct _tuple14 _T364;struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct*_T365;struct Cyc_String_pa_PrintArg_struct _T366;int(*_T367)(struct _fat_ptr,struct _fat_ptr);void*(*_T368)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T369;struct _fat_ptr _T36A;struct Cyc_List_List*(*_T36B)(struct Cyc_Absyn_Exp*(*)(struct _tuple26*),struct Cyc_List_List*);struct Cyc_List_List*(*_T36C)(void*(*)(void*),struct Cyc_List_List*);struct Cyc_Absyn_Exp*(*_T36D)(struct _tuple26*);void*(*_T36E)(struct _tuple0*);struct Cyc_List_List*_T36F;struct Cyc_NewControlFlow_AnalEnv*_T370;struct Cyc_List_List*_T371;void*_T372;struct Cyc_Absyn_Exp*_T373;unsigned _T374;union Cyc_CfFlowInfo_FlowInfo _T375;struct Cyc_List_List*_T376;void*_T377;struct Cyc_List_List*_T378;struct Cyc_List_List*_T379;struct _tuple14 _T37A;struct Cyc_CfFlowInfo_FlowEnv*_T37B;struct Cyc_Absyn_Exp*_T37C;void*_T37D;void*_T37E;struct Cyc_CfFlowInfo_FlowEnv*_T37F;void*_T380;union Cyc_CfFlowInfo_FlowInfo _T381;struct _union_FlowInfo_BottomFL _T382;unsigned _T383;struct _tuple14 _T384;struct Cyc_CfFlowInfo_FlowEnv*_T385;union Cyc_CfFlowInfo_FlowInfo _T386;struct _union_FlowInfo_ReachableFL _T387;struct Cyc_NewControlFlow_AnalEnv*_T388;struct Cyc_CfFlowInfo_FlowEnv*_T389;struct Cyc_Dict_Dict _T38A;void*_T38B;enum Cyc_CfFlowInfo_InitLevel _T38C;int _T38D;struct Cyc_Absyn_Exp*_T38E;unsigned _T38F;struct _fat_ptr _T390;struct _fat_ptr _T391;void*_T392;int*_T393;unsigned _T394;struct _tuple14 _T395;struct Cyc_CfFlowInfo_FlowEnv*_T396;struct Cyc_List_List _T397;struct Cyc_CfFlowInfo_FlowEnv*_T398;union Cyc_CfFlowInfo_FlowInfo _T399;struct Cyc_List_List*_T39A;struct Cyc_List_List*_T39B;struct Cyc_CfFlowInfo_FlowEnv*_T39C;void*_T39D;struct Cyc_Absyn_Exp*_T39E;unsigned _T39F;union Cyc_CfFlowInfo_FlowInfo _T3A0;struct _union_FlowInfo_BottomFL _T3A1;unsigned _T3A2;struct _tuple14 _T3A3;struct Cyc_CfFlowInfo_FlowEnv*_T3A4;union Cyc_CfFlowInfo_FlowInfo _T3A5;struct _union_FlowInfo_ReachableFL _T3A6;enum Cyc_CfFlowInfo_InitLevel _T3A7;int _T3A8;struct Cyc_Absyn_Exp*_T3A9;unsigned _T3AA;struct _fat_ptr _T3AB;struct _fat_ptr _T3AC;struct _tuple14 _T3AD;struct Cyc_CfFlowInfo_FlowEnv*_T3AE;struct Cyc_List_List _T3AF;struct Cyc_CfFlowInfo_FlowEnv*_T3B0;union Cyc_CfFlowInfo_FlowInfo _T3B1;struct Cyc_List_List*_T3B2;struct Cyc_List_List*_T3B3;struct Cyc_CfFlowInfo_FlowEnv*_T3B4;void*_T3B5;struct Cyc_Absyn_Exp*_T3B6;unsigned _T3B7;union Cyc_CfFlowInfo_FlowInfo _T3B8;struct _union_FlowInfo_BottomFL _T3B9;unsigned _T3BA;union Cyc_CfFlowInfo_FlowInfo _T3BB;struct _union_FlowInfo_ReachableFL _T3BC;enum Cyc_CfFlowInfo_InitLevel _T3BD;int _T3BE;struct Cyc_Absyn_Exp*_T3BF;unsigned _T3C0;struct _fat_ptr _T3C1;struct _fat_ptr _T3C2;struct _tuple14 _T3C3;struct Cyc_CfFlowInfo_FlowEnv*_T3C4;long _T3C5;struct _tuple14 _T3C6;struct Cyc_CfFlowInfo_FlowEnv*_T3C7;void*_T3C8;struct Cyc_CfFlowInfo_MallocPt_CfFlowInfo_Root_struct*_T3C9;struct Cyc_Absyn_Exp*_T3CA;void*_T3CB;struct Cyc_CfFlowInfo_Place*_T3CC;struct Cyc_CfFlowInfo_Place*_T3CD;struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct*_T3CE;struct Cyc_CfFlowInfo_FlowEnv*_T3CF;void*_T3D0;struct Cyc_CfFlowInfo_FlowEnv*_T3D1;void*_T3D2;union Cyc_CfFlowInfo_FlowInfo _T3D3;struct _union_FlowInfo_BottomFL _T3D4;unsigned _T3D5;struct _tuple14 _T3D6;union Cyc_CfFlowInfo_FlowInfo _T3D7;struct _union_FlowInfo_ReachableFL _T3D8;struct _tuple14 _T3D9;struct Cyc_Dict_Dict _T3DA;struct _tuple17 _T3DB;struct Cyc_NewControlFlow_AnalEnv*_T3DC;struct Cyc_CfFlowInfo_FlowEnv*_T3DD;struct Cyc_NewControlFlow_AnalEnv*_T3DE;union Cyc_CfFlowInfo_FlowInfo _T3DF;struct Cyc_Absyn_Stmt*_T3E0;struct _tuple17*_T3E1;struct _tuple14 _T3E2;struct _tuple17 _T3E3;int(*_T3E4)(struct _fat_ptr,struct _fat_ptr);void*(*_T3E5)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T3E6;struct _fat_ptr _T3E7;_T0= env;{
# 780
struct Cyc_CfFlowInfo_FlowEnv*fenv=_T0->fenv;
struct Cyc_Dict_Dict d;{struct Cyc_Dict_Dict _T3E8;_T1= inflow;_T2= _T1.BottomFL;_T3= _T2.tag;if(_T3!=1)goto _TLC1;{struct _tuple14 _T3E9;
# 797 "cyclone/library/compiler/new_control_flow.cyc"
({__typeof__(Cyc_CfFlowInfo_BottomFL())_T3EA=Cyc_CfFlowInfo_BottomFL();_T3E9.f0= _T3EA;});_T5= fenv;_T3E9.f1= _T5->unknown_all;_T4= _T3E9;}return _T4;_TLC1: _T6= inflow;_T7= _T6.ReachableFL;_T3E8= _T7.val;{struct Cyc_Dict_Dict d2=_T3E8;
# 799
d= d2;};}_T8= copy_ctxt;
# 815
if(!_T8)goto _TLC3;_T9= Cyc_NewControlFlow_is_local_var_rooted_path(e,0);if(!_T9)goto _TLC3;_TA= env;_TB= _TA->aquals_bounds;_TC= e;_TD= _TC->topt;_TE= 
Cyc_Tcutil_is_noalias_pointer_or_aggr(_TB,_TD);
# 815
if(!_TE)goto _TLC3;{
# 836
struct _tuple18 _T3E8=Cyc_NewControlFlow_anal_Lexp(env,inflow,1,0,e);union Cyc_CfFlowInfo_AbsLVal _T3E9;union Cyc_CfFlowInfo_FlowInfo _T3EA;_T3EA= _T3E8.f0;_T3E9= _T3E8.f1;{union Cyc_CfFlowInfo_FlowInfo flval=_T3EA;union Cyc_CfFlowInfo_AbsLVal lval=_T3E9;{struct _tuple18 _T3EB;
_T3EB.f0= flval;_T3EB.f1= lval;_TF= _T3EB;}{struct _tuple18 _T3EB=_TF;struct Cyc_CfFlowInfo_Place*_T3EC;struct Cyc_Dict_Dict _T3ED;_T10= _T3EB.f0;_T11= _T10.ReachableFL;_T12= _T11.tag;if(_T12!=2)goto _TLC5;_T13= _T3EB.f1;_T14= _T13.PlaceL;_T15= _T14.tag;if(_T15!=1)goto _TLC7;_T16= _T3EB.f0;_T17= _T16.ReachableFL;_T3ED= _T17.val;_T18= _T3EB.f1;_T19= _T18.PlaceL;_T3EC= _T19.val;{struct Cyc_Dict_Dict fd=_T3ED;struct Cyc_CfFlowInfo_Place*p=_T3EC;
# 839
void*old_rval=Cyc_CfFlowInfo_lookup_place(fd,p);
long needs_unconsume=0;_T1A= e;_T1B= env;_T1C= _T1B->iteration_num;_T1D= old_rval;_T1E= & needs_unconsume;_T1F= 
Cyc_CfFlowInfo_is_unique_consumed(_T1A,_T1C,_T1D,_T1E);if(!_T1F)goto _TLC9;_T20= e;_T21= _T20->loc;_T22= 
_tag_fat("expression attempts to copy a consumed alias-free value",sizeof(char),56U);_T23= _tag_fat(0U,sizeof(void*),0);Cyc_CfFlowInfo_aerr(_T21,_T22,_T23);{struct _tuple14 _T3EE;
({__typeof__(Cyc_CfFlowInfo_BottomFL())_T3EF=Cyc_CfFlowInfo_BottomFL();_T3EE.f0= _T3EF;});_T25= fenv;_T3EE.f1= _T25->unknown_all;_T24= _T3EE;}return _T24;
_TLC9: _T26= needs_unconsume;if(!_T26)goto _TLCB;{struct _tuple14 _T3EE;
# 846
_T3EE.f0= flval;({__typeof__(Cyc_CfFlowInfo_make_unique_unconsumed(fenv,old_rval))_T3EF=Cyc_CfFlowInfo_make_unique_unconsumed(fenv,old_rval);_T3EE.f1= _T3EF;});_T27= _T3EE;}return _T27;
# 848
_TLCB: _T28= fenv;_T29= env;_T2A= _T29->aquals_bounds;_T2B= e;_T2C= _T2B->topt;_T2D= e;_T2E= env;_T2F= _T2E->iteration_num;_T30= old_rval;_T31= local_alias;{void*new_rval=Cyc_CfFlowInfo_make_unique_consumed(_T28,_T2A,_T2C,_T2D,_T2F,_T30,_T31);_T32= fenv;_T33= e;_T34= _T33->loc;_T35= fd;_T36= p;_T37= new_rval;{
# 850
struct Cyc_Dict_Dict outdict=Cyc_CfFlowInfo_assign_place(_T32,_T34,_T35,_T36,_T37);{struct _tuple14 _T3EE;
# 861
({__typeof__(Cyc_CfFlowInfo_ReachableFL(outdict))_T3EF=Cyc_CfFlowInfo_ReachableFL(outdict);_T3EE.f0= _T3EF;});_T3EE.f1= old_rval;_T38= _T3EE;}return _T38;}}}_TLC7: goto _LLB;_TLC5: _LLB: goto _LL8;_LL8:;}}}goto _TLC4;_TLC3: _TLC4: _T39= e;{
# 869
void*_T3E8=_T39->r;struct Cyc_Absyn_Stmt*_T3E9;enum Cyc_Absyn_AggrKind _T3EA;struct _fat_ptr*_T3EB;struct Cyc_Absyn_Exp*_T3EC;void**_T3ED;enum Cyc_Absyn_MallocKind _T3EE;struct Cyc_List_List*_T3EF;struct Cyc_Absyn_Exp*_T3F0;enum Cyc_Absyn_Primop _T3F1;struct Cyc_Absyn_Datatypedecl*_T3F2;long _T3F3;struct _fat_ptr _T3F4;void*_T3F5;_T3A= (int*)_T3E8;_T3B= *_T3A;switch(_T3B){case 14: _T3C= (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T3E8;_T3D= _T3C->f4;if(_T3D!=Cyc_Absyn_Null_to_NonNull)goto _TLCE;{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T3E8;_T3F5= _T3F6->f2;}{struct Cyc_Absyn_Exp*e1=_T3F5;
# 873
struct _tuple14 _T3F6=Cyc_NewControlFlow_anal_Rexp(env,copy_ctxt,inflow,e1,local_alias);void*_T3F7;union Cyc_CfFlowInfo_FlowInfo _T3F8;_T3F8= _T3F6.f0;_T3F7= _T3F6.f1;{union Cyc_CfFlowInfo_FlowInfo f1=_T3F8;void*r1=_T3F7;
struct _tuple14 _T3F9=Cyc_NewControlFlow_anal_derefR(env,inflow,f1,e1,r1,0);void*_T3FA;union Cyc_CfFlowInfo_FlowInfo _T3FB;_T3FB= _T3F9.f0;_T3FA= _T3F9.f1;{union Cyc_CfFlowInfo_FlowInfo f2=_T3FB;void*r2=_T3FA;{struct _tuple14 _T3FC;
_T3FC.f0= f2;_T3FC.f1= r1;_T3E= _T3FC;}return _T3E;}}}_TLCE:{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T3E8;_T3F5= _T3F6->f2;}{struct Cyc_Absyn_Exp*e1=_T3F5;_T3F5= e1;goto _LL13;}case 12:{struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct*)_T3E8;_T3F5= _T3F6->f1;}_LL13: {struct Cyc_Absyn_Exp*e1=_T3F5;_T3F5= e1;goto _LL15;}case 40:{struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct*)_T3E8;_T3F5= _T3F6->f1;}_LL15: {struct Cyc_Absyn_Exp*e1=_T3F5;_T3F5= e1;goto _LL17;}case 13:{struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*)_T3E8;_T3F5= _T3F6->f1;}_LL17: {struct Cyc_Absyn_Exp*e1=_T3F5;_T3F= 
# 886
Cyc_NewControlFlow_anal_Rexp(env,copy_ctxt,inflow,e1,local_alias);return _T3F;}case 2:{struct Cyc_Absyn_Pragma_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_Pragma_e_Absyn_Raw_exp_struct*)_T3E8;_T3F4= _T3F6->f1;}{struct _fat_ptr p=_T3F4;_T40= p;_T41= 
# 889
_tag_fat("print_flow",sizeof(char),11U);_T42= Cyc_strcmp(_T40,_T41);if(_T42)goto _TLD0;else{goto _TLD2;}
_TLD2: _T43= e;_T44= _T43->loc;{struct _fat_ptr seg_str=Cyc_Position_string_of_segment(_T44);{struct Cyc_String_pa_PrintArg_struct _T3F6;_T3F6.tag= 0;
_T3F6.f1= seg_str;_T45= _T3F6;}{struct Cyc_String_pa_PrintArg_struct _T3F6=_T45;void*_T3F7[1];_T3F7[0]= & _T3F6;_T46= Cyc_stderr;_T47= _tag_fat("%s: current flow is\n",sizeof(char),21U);_T48= _tag_fat(_T3F7,sizeof(void*),1);Cyc_fprintf(_T46,_T47,_T48);}
Cyc_CfFlowInfo_print_flow(inflow);_T49= Cyc_stderr;_T4A= 
_tag_fat("\n",sizeof(char),2U);_T4B= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T49,_T4A,_T4B);}goto _TLD1;
_TLD0: _T4C= p;_T4D= _tag_fat("debug_on",sizeof(char),9U);_T4E= Cyc_strcmp(_T4C,_T4D);if(_T4E)goto _TLD3;else{goto _TLD5;}_TLD5: goto _TLD4;
# 898
_TLD3: _T4F= p;_T50= _tag_fat("debug_off",sizeof(char),10U);_T51= Cyc_strcmp(_T4F,_T50);if(_T51)goto _TLD6;else{goto _TLD8;}_TLD8: goto _TLD7;_TLD6: _TLD7: _TLD4: _TLD1:{struct _tuple14 _T3F6;
# 908
_T3F6.f0= inflow;_T53= fenv;_T3F6.f1= _T53->zero;_T52= _T3F6;}return _T52;}case 39: goto _LL1D;case 0: _T54= (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_T3E8;_T55= _T54->f1;_T56= _T55.Wstring_c;_T57= _T56.tag;switch(_T57){case 1: _LL1D: goto _LL1F;case 5: _T58= (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_T3E8;_T59= _T58->f1;_T5A= _T59.Int_c;_T5B= _T5A.val;_T5C= _T5B.f1;if(_T5C!=0)goto _TLDA;_LL1F:{struct _tuple14 _T3F6;
# 913
_T3F6.f0= inflow;_T5E= fenv;_T3F6.f1= _T5E->zero;_T5D= _T3F6;}return _T5D;_TLDA: goto _LL23;case 9: _LL23: goto _LL25;case 10: _LL25: goto _LL27;default: _LL2D: goto _LL2F;};case 1: _T5F= (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T3E8;_T60= _T5F->f1;_T61= (int*)_T60;_T62= *_T61;switch(_T62){case 2: _LL27:{struct _tuple14 _T3F6;
# 918
_T3F6.f0= inflow;_T64= fenv;_T3F6.f1= _T64->notzeroall;_T63= _T3F6;}return _T63;case 1:{struct _tuple14 _T3F6;
# 937
_T3F6.f0= inflow;_T66= fenv;_T67= e;_T68= _T67->topt;_T69= _check_null(_T68);_T6A= fenv;_T6B= _T6A->unknown_all;({__typeof__(Cyc_CfFlowInfo_typ_to_absrval(_T66,_T69,0,_T6B))_T3F7=Cyc_CfFlowInfo_typ_to_absrval(_T66,_T69,0,_T6B);_T3F6.f1= _T3F7;});_T65= _T3F6;}return _T65;case 4:{struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T3E8;_T6C= _T3F6->f1;{struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T3F7=(struct Cyc_Absyn_Local_b_Absyn_Binding_struct*)_T6C;_T3F5= _T3F7->f1;}}{struct Cyc_Absyn_Vardecl*vd=_T3F5;_T6D= vd;_T6E= _T6D->sc;_T6F= (int)_T6E;
# 941
if(_T6F!=0)goto _TLDD;{struct _tuple14 _T3F6;
_T3F6.f0= inflow;_T71= fenv;_T72= e;_T73= _T72->topt;_T74= _check_null(_T73);_T75= fenv;_T76= _T75->unknown_all;({__typeof__(Cyc_CfFlowInfo_typ_to_absrval(_T71,_T74,0,_T76))_T3F7=Cyc_CfFlowInfo_typ_to_absrval(_T71,_T74,0,_T76);_T3F6.f1= _T3F7;});_T70= _T3F6;}return _T70;_TLDD: _T3F5= vd;goto _LL3F;}case 3:{struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T3E8;_T77= _T3F6->f1;{struct Cyc_Absyn_Param_b_Absyn_Binding_struct*_T3F7=(struct Cyc_Absyn_Param_b_Absyn_Binding_struct*)_T77;_T3F5= _T3F7->f1;}}_LL3F: {struct Cyc_Absyn_Vardecl*vd=_T3F5;_T3F5= vd;goto _LL41;}case 5:{struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T3E8;_T78= _T3F6->f1;{struct Cyc_Absyn_Pat_b_Absyn_Binding_struct*_T3F7=(struct Cyc_Absyn_Pat_b_Absyn_Binding_struct*)_T78;_T3F5= _T3F7->f1;}}_LL41: {struct Cyc_Absyn_Vardecl*vd=_T3F5;{struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct _T3F6;_T3F6.tag= 0;
# 948
_T3F6.f1= vd;_T79= _T3F6;}{struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct vdroot=_T79;{struct _tuple14 _T3F6;
_T3F6.f0= inflow;_T7B= d;_T7C= Cyc_CfFlowInfo_root_cmp;{struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*_T3F7=_cycalloc(sizeof(struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct));*_T3F7= vdroot;_T7D= (struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*)_T3F7;}_T7E= (void*)_T7D;({__typeof__(Cyc_Dict_lookup_other(_T7B,_T7C,_T7E))_T3F7=Cyc_Dict_lookup_other(_T7B,_T7C,_T7E);_T3F6.f1= _T3F7;});_T7A= _T3F6;}return _T7A;}}default: goto _LL7B;};case 41:{struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct*)_T3E8;_T3F5= _T3F6->f1;_T3F3= _T3F6->f2;}{struct Cyc_Absyn_Exp*e1=_T3F5;long static_only=_T3F3;_T7F= static_only;
# 921
if(!_T7F)goto _TLDF;goto _LL2B;_TLDF: {
# 923
struct _tuple19 _T3F6=Cyc_NewControlFlow_anal_test(env,inflow,e1);union Cyc_CfFlowInfo_FlowInfo _T3F7;union Cyc_CfFlowInfo_FlowInfo _T3F8;_T3F8= _T3F6.f0;_T3F7= _T3F6.f1;{union Cyc_CfFlowInfo_FlowInfo f1t=_T3F8;union Cyc_CfFlowInfo_FlowInfo f1f=_T3F7;{struct _tuple14 _T3F9;
_T3F9.f0= f1t;_T81= fenv;_T3F9.f1= _T81->notzeroall;_T80= _T3F9;}return _T80;}}}case 30: _T82= (struct Cyc_Absyn_Datatype_e_Absyn_Raw_exp_struct*)_T3E8;_T83= _T82->f1;if(_T83!=0)goto _TLE1;_LL2B: goto _LL2D;_TLE1:{struct Cyc_Absyn_Datatype_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_Datatype_e_Absyn_Raw_exp_struct*)_T3E8;_T3F5= _T3F6->f1;_T3F2= _T3F6->f2;}{struct Cyc_List_List*es=_T3F5;struct Cyc_Absyn_Datatypedecl*tud=_T3F2;
# 1434
struct _tuple23 _T3F6=Cyc_NewControlFlow_anal_Rexps(env,inflow,es,1,1);struct Cyc_List_List*_T3F7;union Cyc_CfFlowInfo_FlowInfo _T3F8;_T3F8= _T3F6.f0;_T3F7= _T3F6.f1;{union Cyc_CfFlowInfo_FlowInfo f=_T3F8;struct Cyc_List_List*rvals=_T3F7;_T84= 
Cyc_List_length(es);_T85= _T84 + 1;{unsigned sz=(unsigned)_T85;{unsigned _T3F9=sz;_T88= _check_times(_T3F9,sizeof(void*));{void**_T3FA=_cycalloc(_T88);{unsigned _T3FB=_T3F9;unsigned i;i= 0;_TLE6: if(i < _T3FB)goto _TLE4;else{goto _TLE5;}_TLE4: _T89= i;_T8A= fenv;
# 1437
_T3FA[_T89]= _T8A->unknown_none;i= i + 1;goto _TLE6;_TLE5:;}_T87= (void**)_T3FA;}_T86= 
# 1436
_tag_fat(_T87,sizeof(void*),_T3F9);}{struct _fat_ptr aggrdict=_T86;_T8B= aggrdict;_T8C= _check_fat_subscript(_T8B,sizeof(void*),0);_T8D= (void**)_T8C;_T8E= fenv;
# 1439
*_T8D= _T8E->unknown_all;{
unsigned i=1U;_TLEA: if(i < sz)goto _TLE8;else{goto _TLE9;}
_TLE8: _T8F= aggrdict;_T90= _T8F.curr;_T91= (void**)_T90;_T92= i;_T93= (int)_T92;_T94= _check_null(rvals);_T91[_T93]= _T94->hd;
# 1440
i= i + 1;_T95= rvals;rvals= _T95->tl;goto _TLEA;_TLE9:;}{struct _tuple14 _T3F9;
# 1442
_T3F9.f0= f;{struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct*_T3FA=_cycalloc(sizeof(struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct));_T3FA->tag= 6;_T3FA->f1.is_union= 0;_T3FA->f1.fieldnum= - 1;_T3FA->f2= aggrdict;_T97= (struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct*)_T3FA;}_T3F9.f1= (void*)_T97;_T96= _T3F9;}return _T96;}}}}case 42: _LL2F: goto _LL31;case 18: _LL31: goto _LL33;case 17: _LL33: goto _LL35;case 19: _LL35: goto _LL37;case 32: _LL37: goto _LL39;case 31: _LL39:{struct _tuple14 _T3F6;
# 934
_T3F6.f0= inflow;_T99= fenv;_T3F6.f1= _T99->unknown_all;_T98= _T3F6;}return _T98;case 3:{struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*)_T3E8;_T3F1= _T3F6->f1;_T3F5= _T3F6->f2;}{enum Cyc_Absyn_Primop p=_T3F1;struct Cyc_List_List*es=_T3F5;_T9A= p;_T9B= (int)_T9A;
# 955
if(_T9B!=19)goto _TLEB;_T9C= env;_T9D= inflow;_T9E= 
# 958
_check_null(es);_T9F= _T9E->hd;_TA0= (struct Cyc_Absyn_Exp*)_T9F;_TA1= local_alias;{struct _tuple14 _T3F6=Cyc_NewControlFlow_anal_Rexp(_T9C,0,_T9D,_TA0,_TA1);void*_T3F7;union Cyc_CfFlowInfo_FlowInfo _T3F8;_T3F8= _T3F6.f0;_T3F7= _T3F6.f1;{union Cyc_CfFlowInfo_FlowInfo f=_T3F8;void*r=_T3F7;_TA2= env;_TA3= inflow;_TA4= f;_TA5= es;_TA6= _TA5->hd;_TA7= (struct Cyc_Absyn_Exp*)_TA6;_TA8= r;{
struct _tuple14 _T3F9=Cyc_NewControlFlow_anal_derefR(_TA2,_TA3,_TA4,_TA7,_TA8,0);void*_T3FA;union Cyc_CfFlowInfo_FlowInfo _T3FB;_T3FB= _T3F9.f0;_T3FA= _T3F9.f1;{union Cyc_CfFlowInfo_FlowInfo f2=_T3FB;void*r2=_T3FA;_TA9= env;_TAA= es;_TAB= _TAA->hd;_TAC= (struct Cyc_Absyn_Exp*)_TAB;_TAD= _TAC->loc;_TAE= f2;_TAF= r;
f2= Cyc_NewControlFlow_use_Rval(_TA9,_TAD,_TAE,_TAF);{struct _tuple14 _T3FC;
_T3FC.f0= f2;_TB1= env;_TB2= _TB1->fenv;_T3FC.f1= _TB2->unknown_all;_TB0= _T3FC;}return _TB0;}}}}
# 963
_TLEB: {struct _tuple14 _T3F6=Cyc_NewControlFlow_anal_use_ints(env,inflow,es);void*_T3F7;union Cyc_CfFlowInfo_FlowInfo _T3F8;_T3F8= _T3F6.f0;_T3F7= _T3F6.f1;{union Cyc_CfFlowInfo_FlowInfo f=_T3F8;void*r=_T3F7;{struct _tuple14 _T3F9;
_T3F9.f0= f;_T3F9.f1= r;_TB3= _T3F9;}return _TB3;}}}case 5:{struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*)_T3E8;_T3F5= _T3F6->f1;}{struct Cyc_Absyn_Exp*e1=_T3F5;{struct Cyc_List_List _T3F6;
# 967
_T3F6.hd= e1;_T3F6.tl= 0;_TB4= _T3F6;}{struct Cyc_List_List arg=_TB4;_TB5= env;_TB6= inflow;_TB7= & arg;_TB8= (struct Cyc_List_List*)_TB7;{
struct _tuple14 _T3F6=Cyc_NewControlFlow_anal_use_ints(_TB5,_TB6,_TB8);union Cyc_CfFlowInfo_FlowInfo _T3F7;_T3F7= _T3F6.f0;{union Cyc_CfFlowInfo_FlowInfo f=_T3F7;
struct _tuple18 _T3F8=Cyc_NewControlFlow_anal_Lexp(env,f,0,0,e1);union Cyc_CfFlowInfo_AbsLVal _T3F9;_T3F9= _T3F8.f1;{union Cyc_CfFlowInfo_AbsLVal lval=_T3F9;_TB9= e1;_TBA= _TB9->topt;_TBB= 
_check_null(_TBA);{long iszt=Cyc_Tcutil_is_zeroterm_pointer_type(_TBB);_TBC= iszt;
if(!_TBC)goto _TLED;{
# 974
struct _tuple14 _T3FA=Cyc_NewControlFlow_anal_Rexp(env,0,inflow,e1,local_alias);void*_T3FB;union Cyc_CfFlowInfo_FlowInfo _T3FC;_T3FC= _T3FA.f0;_T3FB= _T3FA.f1;{union Cyc_CfFlowInfo_FlowInfo g=_T3FC;void*r=_T3FB;
Cyc_NewControlFlow_anal_derefR(env,inflow,g,e1,r,0);}}goto _TLEE;_TLED: _TLEE:{struct _tuple25 _T3FA;
# 977
_T3FA.f0= lval;_T3FA.f1= f;_TBD= _T3FA;}{struct _tuple25 _T3FA=_TBD;struct Cyc_Dict_Dict _T3FB;struct Cyc_CfFlowInfo_Place*_T3FC;_TBE= _T3FA.f0;_TBF= _TBE.PlaceL;_TC0= _TBF.tag;if(_TC0!=1)goto _TLEF;_TC1= _T3FA.f1;_TC2= _TC1.ReachableFL;_TC3= _TC2.tag;if(_TC3!=2)goto _TLF1;_TC4= _T3FA.f0;_TC5= _TC4.PlaceL;_T3FC= _TC5.val;_TC6= _T3FA.f1;_TC7= _TC6.ReachableFL;_T3FB= _TC7.val;{struct Cyc_CfFlowInfo_Place*p=_T3FC;struct Cyc_Dict_Dict outdict=_T3FB;_TC8= fenv;_TC9= e1;_TCA= _TC9->loc;_TCB= outdict;_TCC= p;_TCD= fenv;_TCE= _TCD->unknown_all;_TCF= 
# 979
Cyc_CfFlowInfo_assign_place(_TC8,_TCA,_TCB,_TCC,_TCE);f= Cyc_CfFlowInfo_ReachableFL(_TCF);goto _LL9B;}_TLF1: goto _LL9E;_TLEF: _LL9E: goto _LL9B;_LL9B:;}_TD0= iszt;
# 986
if(!_TD0)goto _TLF3;{struct _tuple14 _T3FA;
_T3FA.f0= f;_TD2= fenv;_T3FA.f1= _TD2->notzeroall;_TD1= _T3FA;}return _TD1;
# 989
_TLF3:{struct _tuple14 _T3FA;_T3FA.f0= f;_TD4= fenv;_T3FA.f1= _TD4->unknown_all;_TD3= _T3FA;}return _TD3;}}}}}}case 4: _TD5= (struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct*)_T3E8;_TD6= _TD5->f2;if(_TD6==0)goto _TLF5;{struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct*)_T3E8;_T3F5= _T3F6->f1;_T3F0= _T3F6->f3;}{struct Cyc_Absyn_Exp*l=_T3F5;struct Cyc_Absyn_Exp*r=_T3F0;_TD7= copy_ctxt;
# 992
if(!_TD7)goto _TLF7;_TD8= env;_TD9= _TD8->aquals_bounds;_TDA= e;_TDB= _TDA->topt;_TDC= _check_null(_TDB);_TDD= Cyc_Tcutil_is_noalias_pointer_or_aggr(_TD9,_TDC);if(!_TDD)goto _TLF7;_TDE= e;_TDF= _TDE->loc;_TE0= 
_tag_fat("cannot track alias-free pointers through multiple assignments",sizeof(char),62U);_TE1= _tag_fat(0U,sizeof(void*),0);Cyc_CfFlowInfo_aerr(_TDF,_TE0,_TE1);{struct _tuple14 _T3F6;
({__typeof__(Cyc_CfFlowInfo_BottomFL())_T3F7=Cyc_CfFlowInfo_BottomFL();_T3F6.f0= _T3F7;});_TE3= fenv;_T3F6.f1= _TE3->unknown_all;_TE2= _T3F6;}return _TE2;_TLF7: {
# 996
struct _tuple14 _T3F6=Cyc_NewControlFlow_anal_Rexp(env,1,inflow,r,local_alias);void*_T3F7;union Cyc_CfFlowInfo_FlowInfo _T3F8;_T3F8= _T3F6.f0;_T3F7= _T3F6.f1;{union Cyc_CfFlowInfo_FlowInfo right_out=_T3F8;void*rval=_T3F7;
struct _tuple18 _T3F9=Cyc_NewControlFlow_anal_Lexp(env,right_out,0,0,l);union Cyc_CfFlowInfo_AbsLVal _T3FA;union Cyc_CfFlowInfo_FlowInfo _T3FB;_T3FB= _T3F9.f0;_T3FA= _T3F9.f1;{union Cyc_CfFlowInfo_FlowInfo f=_T3FB;union Cyc_CfFlowInfo_AbsLVal lval=_T3FA;{struct Cyc_Dict_Dict _T3FC;_TE4= f;_TE5= _TE4.ReachableFL;_TE6= _TE5.tag;if(_TE6!=2)goto _TLF9;_TE7= f;_TE8= _TE7.ReachableFL;_T3FC= _TE8.val;{struct Cyc_Dict_Dict outdict=_T3FC;{struct Cyc_CfFlowInfo_Place*_T3FD;_TE9= lval;_TEA= _TE9.PlaceL;_TEB= _TEA.tag;if(_TEB!=1)goto _TLFB;_TEC= lval;_TED= _TEC.PlaceL;_T3FD= _TED.val;{struct Cyc_CfFlowInfo_Place*p=_T3FD;_TEE= fenv;_TEF= l;_TF0= _TEF->loc;_TF1= outdict;_TF2= p;_TF3= fenv;_TF4= _TF3->unknown_all;
# 1004
outdict= Cyc_CfFlowInfo_assign_place(_TEE,_TF0,_TF1,_TF2,_TF4);
f= Cyc_CfFlowInfo_ReachableFL(outdict);goto _LLAB;}_TLFB: goto _LLAB;_LLAB:;}goto _LLA6;}_TLF9: goto _LLA6;_LLA6:;}{struct _tuple14 _T3FC;
# 1018
_T3FC.f0= f;_TF6= fenv;_T3FC.f1= _TF6->unknown_all;_TF5= _T3FC;}return _TF5;}}}}_TLF5:{struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct*)_T3E8;_T3F5= _T3F6->f1;_T3F0= _T3F6->f3;}{struct Cyc_Absyn_Exp*e1=_T3F5;struct Cyc_Absyn_Exp*e2=_T3F0;_TF7= copy_ctxt;
# 1021
if(!_TF7)goto _TLFD;_TF8= env;_TF9= _TF8->aquals_bounds;_TFA= e;_TFB= _TFA->topt;_TFC= _check_null(_TFB);_TFD= Cyc_Tcutil_is_noalias_pointer_or_aggr(_TF9,_TFC);if(!_TFD)goto _TLFD;_TFE= e;_TFF= _TFE->loc;_T100= 
_tag_fat("cannot track alias-free pointers through multiple assignments",sizeof(char),62U);_T101= _tag_fat(0U,sizeof(void*),0);Cyc_CfFlowInfo_aerr(_TFF,_T100,_T101);{struct _tuple14 _T3F6;
({__typeof__(Cyc_CfFlowInfo_BottomFL())_T3F7=Cyc_CfFlowInfo_BottomFL();_T3F6.f0= _T3F7;});_T103= fenv;_T3F6.f1= _T103->unknown_all;_T102= _T3F6;}return _T102;_TLFD: _T104= env;_T105= inflow;{struct Cyc_Absyn_Exp*_T3F6[2];
# 1027
_T3F6[0]= e1;_T3F6[1]= e2;_T107= _tag_fat(_T3F6,sizeof(struct Cyc_Absyn_Exp*),2);_T106= Cyc_List_list(_T107);}inflow= Cyc_NewControlFlow_expand_unique_places(_T104,_T105,_T106);{
# 1029
struct _tuple14 _T3F6=Cyc_NewControlFlow_anal_Rexp(env,1,inflow,e2,local_alias);void*_T3F7;union Cyc_CfFlowInfo_FlowInfo _T3F8;_T3F8= _T3F6.f0;_T3F7= _T3F6.f1;{union Cyc_CfFlowInfo_FlowInfo right_out=_T3F8;void*rval=_T3F7;
struct _tuple18 _T3F9=Cyc_NewControlFlow_anal_Lexp(env,right_out,0,0,e1);union Cyc_CfFlowInfo_AbsLVal _T3FA;union Cyc_CfFlowInfo_FlowInfo _T3FB;_T3FB= _T3F9.f0;_T3FA= _T3F9.f1;{union Cyc_CfFlowInfo_FlowInfo outflow=_T3FB;union Cyc_CfFlowInfo_AbsLVal lval=_T3FA;_T108= fenv;_T109= env;_T10A= outflow;_T10B= e1;_T10C= lval;_T10D= e2;_T10E= rval;_T10F= e;_T110= _T10F->loc;{
struct _tuple14 _T3FC=Cyc_NewControlFlow_do_assign(_T108,_T109,_T10A,_T10B,_T10C,_T10D,_T10E,_T110);void*_T3FD;union Cyc_CfFlowInfo_FlowInfo _T3FE;_T3FE= _T3FC.f0;_T3FD= _T3FC.f1;{union Cyc_CfFlowInfo_FlowInfo outflow=_T3FE;void*rval=_T3FD;{struct _tuple14 _T3FF;
# 1035
_T3FF.f0= outflow;_T3FF.f1= rval;_T111= _T3FF;}return _T111;}}}}}}case 9:{struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct*)_T3E8;_T3F5= _T3F6->f1;_T3F0= _T3F6->f2;}{struct Cyc_Absyn_Exp*e1=_T3F5;struct Cyc_Absyn_Exp*e2=_T3F0;
# 1038
struct _tuple14 _T3F6=Cyc_NewControlFlow_anal_Rexp(env,0,inflow,e1,local_alias);void*_T3F7;union Cyc_CfFlowInfo_FlowInfo _T3F8;_T3F8= _T3F6.f0;_T3F7= _T3F6.f1;{union Cyc_CfFlowInfo_FlowInfo f=_T3F8;void*r=_T3F7;_T112= 
Cyc_NewControlFlow_anal_Rexp(env,copy_ctxt,f,e2,local_alias);return _T112;}}case 11:{struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct*)_T3E8;_T3F5= _T3F6->f1;}{struct Cyc_Absyn_Exp*e1=_T3F5;
# 1042
struct _tuple14 _T3F6=Cyc_NewControlFlow_anal_Rexp(env,1,inflow,e1,local_alias);void*_T3F7;union Cyc_CfFlowInfo_FlowInfo _T3F8;_T3F8= _T3F6.f0;_T3F7= _T3F6.f1;{union Cyc_CfFlowInfo_FlowInfo f=_T3F8;void*r=_T3F7;_T113= env;_T114= e1;_T115= _T114->loc;_T116= f;_T117= r;
Cyc_NewControlFlow_use_Rval(_T113,_T115,_T116,_T117);{struct _tuple14 _T3F9;
({__typeof__(Cyc_CfFlowInfo_BottomFL())_T3FA=Cyc_CfFlowInfo_BottomFL();_T3F9.f0= _T3FA;});_T119= fenv;_T11A= e;_T11B= _T11A->topt;_T11C= _check_null(_T11B);_T11D= fenv;_T11E= _T11D->unknown_all;({__typeof__(Cyc_CfFlowInfo_typ_to_absrval(_T119,_T11C,0,_T11E))_T3FA=Cyc_CfFlowInfo_typ_to_absrval(_T119,_T11C,0,_T11E);_T3F9.f1= _T3FA;});_T118= _T3F9;}return _T118;}}case 10:{struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*)_T3E8;_T3F5= _T3F6->f1;_T3EF= _T3F6->f2;}{struct Cyc_Absyn_Exp*e1=_T3F5;struct Cyc_List_List*es=_T3EF;
# 1047
struct Cyc_List_List*orig_es=es;
struct _tuple14 _T3F6=Cyc_NewControlFlow_anal_Rexp(env,0,inflow,e1,local_alias);void*_T3F7;union Cyc_CfFlowInfo_FlowInfo _T3F8;_T3F8= _T3F6.f0;_T3F7= _T3F6.f1;{union Cyc_CfFlowInfo_FlowInfo f1=_T3F8;void*r1=_T3F7;
# 1050
Cyc_NewControlFlow_anal_derefR(env,inflow,f1,e1,r1,0);_T11F= env;_T120= f1;_T121= 
# 1055
Cyc_List_copy(es);{struct _tuple23 _T3F9=Cyc_NewControlFlow_anal_Rexps(_T11F,_T120,_T121,1,1);struct Cyc_List_List*_T3FA;union Cyc_CfFlowInfo_FlowInfo _T3FB;_T3FB= _T3F9.f0;_T3FA= _T3F9.f1;{union Cyc_CfFlowInfo_FlowInfo fst_outflow=_T3FB;struct Cyc_List_List*rvals=_T3FA;_T122= env;_T123= e1;_T124= _T123->loc;_T125= fst_outflow;_T126= r1;{
# 1057
union Cyc_CfFlowInfo_FlowInfo outflow=Cyc_NewControlFlow_use_Rval(_T122,_T124,_T125,_T126);
# 1059
struct Cyc_List_List*init_params=0;
struct Cyc_List_List*nolive_unique_params=0;
struct Cyc_List_List*consume_params=0;_T127= e1;_T128= _T127->topt;_T129= 
_check_null(_T128);{void*_T3FC=Cyc_Absyn_compress(_T129);void*_T3FD;_T12A= (int*)_T3FC;_T12B= *_T12A;if(_T12B!=4)goto _TLFF;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T3FE=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T3FC;_T12C= _T3FE->f1;_T3FD= _T12C.elt_type;}{void*t=_T3FD;{
# 1064
void*_T3FE=Cyc_Absyn_compress(t);struct Cyc_List_List*_T3FF;_T12D= (int*)_T3FE;_T12E= *_T12D;if(_T12E!=6)goto _TL101;{struct Cyc_Absyn_FnType_Absyn_Type_struct*_T400=(struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T3FE;_T12F= _T400->f1;_T3FF= _T12F.attributes;}{struct Cyc_List_List*atts=_T3FF;
# 1066
_TL106: if(atts!=0)goto _TL104;else{goto _TL105;}
# 1068
_TL104: _T130= atts;{void*_T400=_T130->hd;int _T401;_T131= (int*)_T400;_T132= *_T131;switch(_T132){case 21:{struct Cyc_Absyn_Initializes_att_Absyn_Attribute_struct*_T402=(struct Cyc_Absyn_Initializes_att_Absyn_Attribute_struct*)_T400;_T401= _T402->f1;}{int i=_T401;{struct Cyc_List_List*_T402=_cycalloc(sizeof(struct Cyc_List_List));_T134= i;
# 1070
_T402->hd= (void*)_T134;_T402->tl= init_params;_T133= (struct Cyc_List_List*)_T402;}init_params= _T133;goto _LLCF;}case 22:{struct Cyc_Absyn_Noliveunique_att_Absyn_Attribute_struct*_T402=(struct Cyc_Absyn_Noliveunique_att_Absyn_Attribute_struct*)_T400;_T401= _T402->f1;}{int i=_T401;{struct Cyc_List_List*_T402=_cycalloc(sizeof(struct Cyc_List_List));_T136= i;
# 1073
_T402->hd= (void*)_T136;_T402->tl= nolive_unique_params;_T135= (struct Cyc_List_List*)_T402;}nolive_unique_params= _T135;{struct Cyc_List_List*_T402=_cycalloc(sizeof(struct Cyc_List_List));_T138= i;
_T402->hd= (void*)_T138;_T402->tl= consume_params;_T137= (struct Cyc_List_List*)_T402;}consume_params= _T137;goto _LLCF;}case 23:{struct Cyc_Absyn_Consume_att_Absyn_Attribute_struct*_T402=(struct Cyc_Absyn_Consume_att_Absyn_Attribute_struct*)_T400;_T401= _T402->f1;}{int i=_T401;{struct Cyc_List_List*_T402=_cycalloc(sizeof(struct Cyc_List_List));_T13A= i;
# 1077
_T402->hd= (void*)_T13A;_T402->tl= consume_params;_T139= (struct Cyc_List_List*)_T402;}consume_params= _T139;goto _LLCF;}default: goto _LLCF;}_LLCF:;}_T13B= atts;
# 1066
atts= _T13B->tl;goto _TL106;_TL105: goto _LLCA;}_TL101: _T13D= Cyc_Warn_impos;{
# 1084
int(*_T400)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T13D;_T13C= _T400;}_T13E= _tag_fat("anal_Rexp: bad function type",sizeof(char),29U);_T13F= _tag_fat(0U,sizeof(void*),0);_T13C(_T13E,_T13F);_LLCA:;}goto _LLC5;}_TLFF: _T141= Cyc_Warn_impos;{
# 1088
int(*_T3FE)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T141;_T140= _T3FE;}_T142= _tag_fat("anal_Rexp: bad function type",sizeof(char),29U);_T143= _tag_fat(0U,sizeof(void*),0);_T140(_T142,_T143);_LLC5:;}{
# 1090
int i=1;_TL10B: if(rvals!=0)goto _TL109;else{goto _TL10A;}
_TL109: _T145= Cyc_List_memq;{long(*_T3FC)(struct Cyc_List_List*,int)=(long(*)(struct Cyc_List_List*,int))_T145;_T144= _T3FC;}_T146= _T144(init_params,i);if(!_T146)goto _TL10C;{struct Cyc_Dict_Dict _T3FC;_T147= fst_outflow;_T148= _T147.BottomFL;_T149= _T148.tag;if(_T149!=1)goto _TL10E;goto _LLD8;_TL10E: _T14A= fst_outflow;_T14B= _T14A.ReachableFL;_T3FC= _T14B.val;{struct Cyc_Dict_Dict fst_d=_T3FC;_T14C= rvals;_T14D= _T14C->hd;{
# 1096
struct _tuple13 _T3FD=Cyc_CfFlowInfo_unname_rval(_T14D);void*_T3FE;_T3FE= _T3FD.f0;{void*r=_T3FE;_T14E= env;_T14F= _T14E->fenv;_T150= fst_d;_T151= rvals;_T152= _T151->hd;_T153= 
Cyc_CfFlowInfo_initlevel(_T14F,_T150,_T152);_T154= (int)_T153;if(_T154!=0)goto _TL110;_T155= rvals;_T156= _T155->hd;_T157= Cyc_CfFlowInfo_is_init_pointer(_T156);if(_T157)goto _TL110;else{goto _TL112;}
_TL112: _T158= es;_T159= _T158->hd;_T15A= (struct Cyc_Absyn_Exp*)_T159;_T15B= _T15A->loc;_T15C= _tag_fat("expression may not be initialized",sizeof(char),34U);_T15D= _tag_fat(0U,sizeof(void*),0);Cyc_CfFlowInfo_aerr(_T15B,_T15C,_T15D);goto _TL111;_TL110: _TL111:{struct Cyc_Dict_Dict _T3FF;_T15E= outflow;_T15F= _T15E.BottomFL;_T160= _T15F.tag;if(_T160!=1)goto _TL113;goto _LLE0;_TL113: _T161= outflow;_T162= _T161.ReachableFL;_T3FF= _T162.val;{struct Cyc_Dict_Dict d=_T3FF;_T163= fenv;_T164= d;_T165= rvals;_T166= _T165->hd;{
# 1105
struct Cyc_Dict_Dict ans_d=Cyc_CfFlowInfo_escape_deref(_T163,_T164,_T166);_T167= rvals;{
void*_T400=_T167->hd;struct Cyc_CfFlowInfo_Place*_T401;_T168= (int*)_T400;_T169= *_T168;switch(_T169){case 4:{struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct*_T402=(struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct*)_T400;_T401= _T402->f1;}{struct Cyc_CfFlowInfo_Place*p=_T401;_T16A= es;_T16B= _T16A->hd;_T16C= (struct Cyc_Absyn_Exp*)_T16B;_T16D= _T16C->topt;{
# 1108
void*_T402=Cyc_Absyn_compress(_T16D);void*_T403;_T16E= (int*)_T402;_T16F= *_T16E;if(_T16F!=4)goto _TL116;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T404=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T402;_T170= _T404->f1;_T403= _T170.elt_type;}{void*t=_T403;_T171= fenv;_T172= es;_T173= _T172->hd;_T174= (struct Cyc_Absyn_Exp*)_T173;_T175= _T174->loc;_T176= ans_d;_T177= p;_T178= fenv;_T179= t;_T17A= fenv;_T17B= _T17A->esc_all;_T17C= 
# 1111
Cyc_CfFlowInfo_typ_to_absrval(_T178,_T179,0,_T17B);
# 1110
ans_d= Cyc_CfFlowInfo_assign_place(_T171,_T175,_T176,_T177,_T17C);goto _LLEC;}_TL116: _T17E= Cyc_Warn_impos;{
# 1115
int(*_T404)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T17E;_T17D= _T404;}_T17F= _tag_fat("anal_Rexp:bad type for initialized arg",sizeof(char),39U);_T180= _tag_fat(0U,sizeof(void*),0);_T17D(_T17F,_T180);_LLEC:;}goto _LLE5;}case 5: _T182= Cyc_Warn_impos;{
# 1119
int(*_T402)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T182;_T181= _T402;}_T183= 
# 1121
_tag_fat("anal_Rexp:initialize attribute on unique pointers not yet supported",sizeof(char),68U);_T184= _tag_fat(0U,sizeof(void*),0);
# 1119
_T181(_T183,_T184);default: goto _LLE5;}_LLE5:;}
# 1125
outflow= Cyc_CfFlowInfo_ReachableFL(ans_d);goto _LLE0;}}_LLE0:;}goto _LLD8;}}}_LLD8:;}goto _TL10D;
# 1130
_TL10C: _T186= Cyc_List_memq;{long(*_T3FC)(struct Cyc_List_List*,int)=(long(*)(struct Cyc_List_List*,int))_T186;_T185= _T3FC;}_T187= _T185(nolive_unique_params,i);if(!_T187)goto _TL118;_T188= env;_T189= 
# 1135
_check_null(es);_T18A= _T189->hd;_T18B= (struct Cyc_Absyn_Exp*)_T18A;_T18C= _T18B->loc;_T18D= es;_T18E= _T18D->hd;_T18F= (struct Cyc_Absyn_Exp*)_T18E;_T190= _T18F->topt;_T191= _check_null(_T190);_T192= outflow;_T193= rvals;_T194= _T193->hd;outflow= Cyc_NewControlFlow_use_nounique_Rval(_T188,_T18C,_T191,_T192,_T194);goto _TL119;
# 1143
_TL118: _T195= env;_T196= _check_null(es);_T197= _T196->hd;_T198= (struct Cyc_Absyn_Exp*)_T197;_T199= _T198->loc;_T19A= outflow;_T19B= rvals;_T19C= _T19B->hd;outflow= Cyc_NewControlFlow_use_Rval(_T195,_T199,_T19A,_T19C);_T19E= Cyc_List_memq;{
long(*_T3FC)(struct Cyc_List_List*,int)=(long(*)(struct Cyc_List_List*,int))_T19E;_T19D= _T3FC;}_T19F= _T19D(consume_params,i);if(_T19F)goto _TL11A;else{goto _TL11C;}_TL11C: _T1A0= env;_T1A1= _T1A0->aquals_bounds;_T1A2= es;_T1A3= _T1A2->hd;_T1A4= (struct Cyc_Absyn_Exp*)_T1A3;_T1A5= _T1A4->topt;_T1A6= 
_check_null(_T1A5);_T1A7= Cyc_Tcutil_is_noalias_pointer(_T1A1,_T1A6,0);
# 1144
if(!_T1A7)goto _TL11A;_T1A8= env;_T1A9= outflow;_T1AA= es;_T1AB= _T1AA->hd;_T1AC= (struct Cyc_Absyn_Exp*)_T1AB;_T1AD= es;_T1AE= _T1AD->hd;_T1AF= (struct Cyc_Absyn_Exp*)_T1AE;_T1B0= _T1AF->loc;_T1B1= rvals;_T1B2= _T1B1->hd;
# 1146
outflow= Cyc_NewControlFlow_restore_noconsume_arg(_T1A8,_T1A9,_T1AC,_T1B0,_T1B2);goto _TL11B;_TL11A: _TL11B: _TL119: _TL10D: _T1B3= rvals;
# 1090
rvals= _T1B3->tl;_T1B4= es;es= _T1B4->tl;i= i + 1;goto _TL10B;_TL10A:;}_T1B5= e1;_T1B6= _T1B5->topt;_T1B7= 
# 1155
_check_null(_T1B6);_T1B8= Cyc_Atts_is_noreturn_fn_type(_T1B7);if(!_T1B8)goto _TL11D;
outflow= Cyc_CfFlowInfo_BottomFL();goto _TL11E;_TL11D: _TL11E:{struct _tuple14 _T3FC;
_T3FC.f0= outflow;_T1BA= fenv;_T1BB= e;_T1BC= _T1BB->topt;_T1BD= _check_null(_T1BC);_T1BE= fenv;_T1BF= _T1BE->unknown_all;({__typeof__(Cyc_CfFlowInfo_typ_to_absrval(_T1BA,_T1BD,0,_T1BF))_T3FD=Cyc_CfFlowInfo_typ_to_absrval(_T1BA,_T1BD,0,_T1BF);_T3FC.f1= _T3FD;});_T1B9= _T3FC;}return _T1B9;}}}}}case 33:{struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct*)_T3E8;_T1C0= _T3F6->f1;_T3EE= _T1C0.mknd;_T1C1= _T3F6->f1;_T3F5= _T1C1.rgn;_T1C2= _T3F6->f1;_T3F0= _T1C2.aqual;_T1C3= _T3F6->f1;_T3ED= _T1C3.elt_type;_T1C4= _T3F6->f1;_T3EC= _T1C4.num_elts;_T1C5= _T3F6->f1;_T3F3= _T1C5.fat_result;}{enum Cyc_Absyn_MallocKind mknd=_T3EE;struct Cyc_Absyn_Exp*ropt=_T3F5;struct Cyc_Absyn_Exp*aqopt=_T3F0;void**topt=_T3ED;struct Cyc_Absyn_Exp*exp=_T3EC;long isfat=_T3F3;
# 1160
void*place_val;_T1C6= isfat;
if(!_T1C6)goto _TL11F;_T1C7= fenv;
place_val= _T1C7->notzeroall;goto _TL120;
_TL11F: _T1C8= mknd;_T1C9= (int)_T1C8;if(_T1C9!=1)goto _TL121;_T1CA= fenv;_T1CB= 
_check_null(topt);_T1CC= *_T1CB;_T1CD= fenv;_T1CE= _T1CD->zero;place_val= Cyc_CfFlowInfo_typ_to_absrval(_T1CA,_T1CC,0,_T1CE);goto _TL122;
# 1166
_TL121: _T1CF= fenv;_T1D0= _check_null(topt);_T1D1= *_T1D0;_T1D2= fenv;_T1D3= _T1D2->unknown_none;place_val= Cyc_CfFlowInfo_typ_to_absrval(_T1CF,_T1D1,0,_T1D3);_TL122: _TL120: {
union Cyc_CfFlowInfo_FlowInfo outflow;
if(ropt!=0)goto _TL123;if(aqopt!=0)goto _TL123;{
struct _tuple14 _T3F6=Cyc_NewControlFlow_anal_Rexp(env,1,inflow,exp,local_alias);union Cyc_CfFlowInfo_FlowInfo _T3F7;_T3F7= _T3F6.f0;{union Cyc_CfFlowInfo_FlowInfo f=_T3F7;
outflow= f;}}goto _TL124;
# 1172
_TL123:{struct Cyc_List_List*expl;expl= _cycalloc(sizeof(struct Cyc_List_List));_T1D4= expl;_T1D4->hd= exp;_T1D5= expl;_T1D5->tl= 0;_T1D6= aqopt;_T1D7= (unsigned)_T1D6;
if(!_T1D7)goto _TL125;{struct Cyc_List_List*_T3F6=_cycalloc(sizeof(struct Cyc_List_List));
_T3F6->hd= aqopt;_T3F6->tl= expl;_T1D8= (struct Cyc_List_List*)_T3F6;}expl= _T1D8;goto _TL126;_TL125: _TL126: _T1D9= ropt;_T1DA= (unsigned)_T1D9;
if(!_T1DA)goto _TL127;{struct Cyc_List_List*_T3F6=_cycalloc(sizeof(struct Cyc_List_List));
_T3F6->hd= ropt;_T3F6->tl= expl;_T1DB= (struct Cyc_List_List*)_T3F6;}expl= _T1DB;goto _TL128;_TL127: _TL128: {
struct _tuple23 _T3F6=Cyc_NewControlFlow_anal_Rexps(env,inflow,expl,1,1);struct Cyc_List_List*_T3F7;union Cyc_CfFlowInfo_FlowInfo _T3F8;_T3F8= _T3F6.f0;_T3F7= _T3F6.f1;{union Cyc_CfFlowInfo_FlowInfo f=_T3F8;struct Cyc_List_List*rvals=_T3F7;
outflow= f;}}}_TL124: _T1DC= env;_T1DD= _T1DC->aquals_bounds;_T1DE= e;_T1DF= _T1DE->topt;_T1E0= 
# 1182
_check_null(_T1DF);_T1E1= Cyc_Tcutil_is_noalias_pointer(_T1DD,_T1E0,1);if(!_T1E1)goto _TL129;{struct _tuple14 _T3F6;
_T3F6.f0= outflow;{struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct*_T3F7=_cycalloc(sizeof(struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct));_T3F7->tag= 5;_T3F7->f1= place_val;_T1E3= (struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct*)_T3F7;}_T3F6.f1= (void*)_T1E3;_T1E2= _T3F6;}return _T1E2;
# 1185
_TL129:{struct Cyc_CfFlowInfo_MallocPt_CfFlowInfo_Root_struct*_T3F6=_cycalloc(sizeof(struct Cyc_CfFlowInfo_MallocPt_CfFlowInfo_Root_struct));_T3F6->tag= 1;_T3F6->f1= exp;_T1E5= e;_T1E6= _T1E5->topt;({__typeof__(_check_null(_T1E6))_T3F7=_check_null(_T1E6);_T3F6->f2= _T3F7;});_T1E4= (struct Cyc_CfFlowInfo_MallocPt_CfFlowInfo_Root_struct*)_T3F6;}{void*root=(void*)_T1E4;
struct Cyc_CfFlowInfo_Place*place;place= _cycalloc(sizeof(struct Cyc_CfFlowInfo_Place));_T1E7= place;_T1E7->root= root;_T1E8= place;_T1E8->path= 0;{struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct*_T3F6=_cycalloc(sizeof(struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct));_T3F6->tag= 4;
_T3F6->f1= place;_T1E9= (struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct*)_T3F6;}{void*rval=(void*)_T1E9;struct Cyc_Dict_Dict _T3F6;_T1EA= outflow;_T1EB= _T1EA.BottomFL;_T1EC= _T1EB.tag;if(_T1EC!=1)goto _TL12B;{struct _tuple14 _T3F7;
# 1190
_T3F7.f0= outflow;_T3F7.f1= rval;_T1ED= _T3F7;}return _T1ED;_TL12B: _T1EE= outflow;_T1EF= _T1EE.ReachableFL;_T3F6= _T1EF.val;{struct Cyc_Dict_Dict d2=_T3F6;{struct _tuple14 _T3F7;_T1F1= 
# 1192
Cyc_Dict_insert(d2,root,place_val);({__typeof__(Cyc_CfFlowInfo_ReachableFL(_T1F1))_T3F8=Cyc_CfFlowInfo_ReachableFL(_T1F1);_T3F7.f0= _T3F8;});_T3F7.f1= rval;_T1F0= _T3F7;}return _T1F0;};}};}}case 34:{struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct*)_T3E8;_T3F5= _T3F6->f1;_T3F0= _T3F6->f2;}{struct Cyc_Absyn_Exp*e1=_T3F5;struct Cyc_Absyn_Exp*e2=_T3F0;
# 1197
void*left_rval;
void*right_rval;
union Cyc_CfFlowInfo_FlowInfo outflow;_T1F2= env;_T1F3= inflow;{struct Cyc_Absyn_Exp*_T3F6[2];
# 1203
_T3F6[0]= e1;_T3F6[1]= e2;_T1F5= _tag_fat(_T3F6,sizeof(struct Cyc_Absyn_Exp*),2);_T1F4= Cyc_List_list(_T1F5);}{struct _tuple23 _T3F6=Cyc_NewControlFlow_anal_Rexps(_T1F2,_T1F3,_T1F4,0,0);struct Cyc_List_List*_T3F7;union Cyc_CfFlowInfo_FlowInfo _T3F8;_T3F8= _T3F6.f0;_T3F7= _T3F6.f1;{union Cyc_CfFlowInfo_FlowInfo f=_T3F8;struct Cyc_List_List*rvals=_T3F7;_T1F6= 
_check_null(rvals);left_rval= _T1F6->hd;_T1F7= rvals;_T1F8= _T1F7->tl;_T1F9= 
_check_null(_T1F8);right_rval= _T1F9->hd;
outflow= f;{
# 1209
void*t_ign1=Cyc_Absyn_void_type;void*t_ign2=Cyc_Absyn_void_type;
long b_ign1=0;_T1FA= e1;_T1FB= & t_ign1;_T1FC= & b_ign1;_T1FD= & t_ign2;_T1FE= 
Cyc_Tcutil_is_zero_ptr_deref(_T1FA,_T1FB,_T1FC,_T1FD);if(!_T1FE)goto _TL12D;_T1FF= right_rval;_T200= (int*)_T1FF;_T201= *_T200;if(_T201!=0)goto _TL12F;goto _LLFF;_TL12F: _T202= e1;_T203= _T202->loc;_T204= 
# 1216
_tag_fat("cannot swap value into zeroterm array not known to be 0",sizeof(char),56U);_T205= _tag_fat(0U,sizeof(void*),0);Cyc_CfFlowInfo_aerr(_T203,_T204,_T205);_LLFF: goto _TL12E;
# 1221
_TL12D: _T206= e2;_T207= & t_ign1;_T208= & b_ign1;_T209= & t_ign2;_T20A= Cyc_Tcutil_is_zero_ptr_deref(_T206,_T207,_T208,_T209);if(!_T20A)goto _TL131;_T20B= left_rval;_T20C= (int*)_T20B;_T20D= *_T20C;if(_T20D!=0)goto _TL133;goto _LL104;_TL133: _T20E= e2;_T20F= _T20E->loc;_T210= 
# 1226
_tag_fat("cannot swap value into zeroterm array not known to be 0",sizeof(char),56U);_T211= _tag_fat(0U,sizeof(void*),0);Cyc_CfFlowInfo_aerr(_T20F,_T210,_T211);_LL104: goto _TL132;_TL131: _TL132: _TL12E: {
# 1230
struct _tuple18 _T3F9=Cyc_NewControlFlow_anal_Lexp(env,outflow,0,0,e1);union Cyc_CfFlowInfo_AbsLVal _T3FA;_T3FA= _T3F9.f1;{union Cyc_CfFlowInfo_AbsLVal left_lval=_T3FA;
struct _tuple18 _T3FB=Cyc_NewControlFlow_anal_Lexp(env,outflow,0,0,e2);union Cyc_CfFlowInfo_AbsLVal _T3FC;_T3FC= _T3FB.f1;{union Cyc_CfFlowInfo_AbsLVal right_lval=_T3FC;{struct Cyc_Dict_Dict _T3FD;_T212= outflow;_T213= _T212.ReachableFL;_T214= _T213.tag;if(_T214!=2)goto _TL135;_T215= outflow;_T216= _T215.ReachableFL;_T3FD= _T216.val;{struct Cyc_Dict_Dict outdict=_T3FD;{struct Cyc_CfFlowInfo_Place*_T3FE;_T217= left_lval;_T218= _T217.PlaceL;_T219= _T218.tag;if(_T219!=1)goto _TL137;_T21A= left_lval;_T21B= _T21A.PlaceL;_T3FE= _T21B.val;{struct Cyc_CfFlowInfo_Place*lp=_T3FE;_T21C= fenv;_T21D= e1;_T21E= _T21D->loc;_T21F= outdict;_T220= lp;_T221= right_rval;
# 1236
outdict= Cyc_CfFlowInfo_assign_place(_T21C,_T21E,_T21F,_T220,_T221);goto _LL114;}_TL137: _T222= 
# 1242
Cyc_CfFlowInfo_initlevel(fenv,outdict,right_rval);_T223= (int)_T222;if(_T223==1)goto _TL139;_T224= e2;_T225= _T224->loc;_T226= 
_tag_fat("expression may not be fully initialized",sizeof(char),40U);_T227= _tag_fat(0U,sizeof(void*),0);Cyc_CfFlowInfo_aerr(_T225,_T226,_T227);goto _TL13A;_TL139: _TL13A: goto _LL114;_LL114:;}{struct Cyc_CfFlowInfo_Place*_T3FE;_T228= right_lval;_T229= _T228.PlaceL;_T22A= _T229.tag;if(_T22A!=1)goto _TL13B;_T22B= right_lval;_T22C= _T22B.PlaceL;_T3FE= _T22C.val;{struct Cyc_CfFlowInfo_Place*rp=_T3FE;_T22D= fenv;_T22E= e2;_T22F= _T22E->loc;_T230= outdict;_T231= rp;_T232= left_rval;
# 1248
outdict= Cyc_CfFlowInfo_assign_place(_T22D,_T22F,_T230,_T231,_T232);goto _LL119;}_TL13B: _T233= 
# 1251
Cyc_CfFlowInfo_initlevel(fenv,outdict,left_rval);_T234= (int)_T233;if(_T234==1)goto _TL13D;_T235= e1;_T236= _T235->loc;_T237= 
_tag_fat("expression may not be fully initialized",sizeof(char),40U);_T238= _tag_fat(0U,sizeof(void*),0);Cyc_CfFlowInfo_aerr(_T236,_T237,_T238);goto _TL13E;_TL13D: _TL13E: goto _LL119;_LL119:;}
# 1257
outflow= Cyc_CfFlowInfo_ReachableFL(outdict);
Cyc_NewControlFlow_update_tryflow(env,outflow);goto _LL10F;}_TL135: goto _LL10F;_LL10F:;}{struct _tuple14 _T3FD;
# 1265
_T3FD.f0= outflow;_T23A= fenv;_T3FD.f1= _T23A->unknown_all;_T239= _T3FD;}return _T239;}}}}}}}case 16:{struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct*)_T3E8;_T3F5= _T3F6->f1;_T3F0= _T3F6->f2;_T3EC= _T3F6->f3;}{struct Cyc_Absyn_Exp*eopt=_T3F5;struct Cyc_Absyn_Exp*e2=_T3F0;struct Cyc_Absyn_Exp*qopt=_T3EC;
# 1268
union Cyc_CfFlowInfo_FlowInfo outflow;
void*place_val;
if(eopt!=0)goto _TL13F;if(qopt!=0)goto _TL13F;{
struct _tuple14 _T3F6=Cyc_NewControlFlow_anal_Rexp(env,1,inflow,e2,local_alias);void*_T3F7;union Cyc_CfFlowInfo_FlowInfo _T3F8;_T3F8= _T3F6.f0;_T3F7= _T3F6.f1;{union Cyc_CfFlowInfo_FlowInfo f=_T3F8;void*r=_T3F7;
outflow= f;
place_val= r;}}goto _TL140;
# 1275
_TL13F:{struct Cyc_List_List*expl;expl= _cycalloc(sizeof(struct Cyc_List_List));_T23B= expl;_T23B->hd= e2;_T23C= expl;_T23C->tl= 0;{
int depth=0;_T23D= qopt;_T23E= (unsigned)_T23D;
if(!_T23E)goto _TL141;{struct Cyc_List_List*_T3F6=_cycalloc(sizeof(struct Cyc_List_List));
_T3F6->hd= qopt;_T3F6->tl= expl;_T23F= (struct Cyc_List_List*)_T3F6;}expl= _T23F;
depth= depth + 1;goto _TL142;_TL141: _TL142: _T240= eopt;_T241= (unsigned)_T240;
# 1281
if(!_T241)goto _TL143;{struct Cyc_List_List*_T3F6=_cycalloc(sizeof(struct Cyc_List_List));
_T3F6->hd= eopt;_T3F6->tl= expl;_T242= (struct Cyc_List_List*)_T3F6;}expl= _T242;
depth= depth + 1;goto _TL144;_TL143: _TL144: {
# 1285
struct _tuple23 _T3F6=Cyc_NewControlFlow_anal_Rexps(env,inflow,expl,1,1);struct Cyc_List_List*_T3F7;union Cyc_CfFlowInfo_FlowInfo _T3F8;_T3F8= _T3F6.f0;_T3F7= _T3F6.f1;{union Cyc_CfFlowInfo_FlowInfo f=_T3F8;struct Cyc_List_List*rvals=_T3F7;
outflow= f;
if(depth!=1)goto _TL145;_T244= _check_null(rvals);_T245= _T244->tl;_T246= _check_null(_T245);_T243= _T246->hd;goto _TL146;_TL145: _T247= _check_null(rvals);_T248= _T247->tl;_T249= _check_null(_T248);_T24A= _T249->tl;_T24B= _check_null(_T24A);_T243= _T24B->hd;_TL146: place_val= _T243;}}}}_TL140: _T24C= env;_T24D= _T24C->aquals_bounds;_T24E= e;_T24F= _T24E->topt;_T250= 
# 1290
_check_null(_T24F);_T251= Cyc_Tcutil_is_noalias_pointer(_T24D,_T250,1);if(!_T251)goto _TL147;{struct _tuple14 _T3F6;
_T3F6.f0= outflow;{struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct*_T3F7=_cycalloc(sizeof(struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct));_T3F7->tag= 5;_T3F7->f1= place_val;_T253= (struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct*)_T3F7;}_T3F6.f1= (void*)_T253;_T252= _T3F6;}return _T252;
# 1293
_TL147:{struct Cyc_CfFlowInfo_MallocPt_CfFlowInfo_Root_struct*_T3F6=_cycalloc(sizeof(struct Cyc_CfFlowInfo_MallocPt_CfFlowInfo_Root_struct));_T3F6->tag= 1;_T3F6->f1= e2;_T255= e;_T256= _T255->topt;({__typeof__(_check_null(_T256))_T3F7=_check_null(_T256);_T3F6->f2= _T3F7;});_T254= (struct Cyc_CfFlowInfo_MallocPt_CfFlowInfo_Root_struct*)_T3F6;}{void*root=(void*)_T254;
struct Cyc_CfFlowInfo_Place*place;place= _cycalloc(sizeof(struct Cyc_CfFlowInfo_Place));_T257= place;_T257->root= root;_T258= place;_T258->path= 0;{struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct*_T3F6=_cycalloc(sizeof(struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct));_T3F6->tag= 4;
_T3F6->f1= place;_T259= (struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct*)_T3F6;}{void*rval=(void*)_T259;struct Cyc_Dict_Dict _T3F6;_T25A= outflow;_T25B= _T25A.BottomFL;_T25C= _T25B.tag;if(_T25C!=1)goto _TL149;{struct _tuple14 _T3F7;
# 1298
_T3F7.f0= outflow;_T3F7.f1= rval;_T25D= _T3F7;}return _T25D;_TL149: _T25E= outflow;_T25F= _T25E.ReachableFL;_T3F6= _T25F.val;{struct Cyc_Dict_Dict d2=_T3F6;{struct _tuple14 _T3F7;_T261= 
# 1300
Cyc_Dict_insert(d2,root,place_val);({__typeof__(Cyc_CfFlowInfo_ReachableFL(_T261))_T3F8=Cyc_CfFlowInfo_ReachableFL(_T261);_T3F7.f0= _T3F8;});_T3F7.f1= rval;_T260= _T3F7;}return _T260;};}};}case 15:{struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct*)_T3E8;_T3F5= _T3F6->f1;}{struct Cyc_Absyn_Exp*e1=_T3F5;
# 1305
struct _tuple18 _T3F6=Cyc_NewControlFlow_anal_Lexp(env,inflow,0,0,e1);union Cyc_CfFlowInfo_AbsLVal _T3F7;union Cyc_CfFlowInfo_FlowInfo _T3F8;_T3F8= _T3F6.f0;_T3F7= _T3F6.f1;{union Cyc_CfFlowInfo_FlowInfo f=_T3F8;union Cyc_CfFlowInfo_AbsLVal l=_T3F7;struct Cyc_CfFlowInfo_Place*_T3F9;_T262= l;_T263= _T262.UnknownL;_T264= _T263.tag;if(_T264!=2)goto _TL14B;{struct _tuple14 _T3FA;
# 1308
_T3FA.f0= f;_T266= fenv;_T3FA.f1= _T266->notzeroall;_T265= _T3FA;}return _T265;_TL14B: _T267= l;_T268= _T267.PlaceL;_T3F9= _T268.val;{struct Cyc_CfFlowInfo_Place*p=_T3F9;{struct _tuple14 _T3FA;
# 1310
_T3FA.f0= f;{struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct*_T3FB=_cycalloc(sizeof(struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct));_T3FB->tag= 4;_T3FB->f1= p;_T26A= (struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct*)_T3FB;}_T3FA.f1= (void*)_T26A;_T269= _T3FA;}return _T269;};}}case 20:{struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*)_T3E8;_T3F5= _T3F6->f1;}{struct Cyc_Absyn_Exp*e1=_T3F5;
# 1314
struct _tuple14 _T3F6=Cyc_NewControlFlow_anal_Rexp(env,0,inflow,e1,local_alias);void*_T3F7;union Cyc_CfFlowInfo_FlowInfo _T3F8;_T3F8= _T3F6.f0;_T3F7= _T3F6.f1;{union Cyc_CfFlowInfo_FlowInfo f=_T3F8;void*r=_T3F7;_T26B= 
Cyc_NewControlFlow_anal_derefR(env,inflow,f,e1,r,0);return _T26B;}}case 21:{struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*)_T3E8;_T3F5= _T3F6->f1;_T3EB= _T3F6->f2;}{struct Cyc_Absyn_Exp*e1=_T3F5;struct _fat_ptr*field=_T3EB;
# 1318
struct _tuple14 _T3F6=Cyc_NewControlFlow_anal_Rexp(env,0,inflow,e1,local_alias);void*_T3F7;union Cyc_CfFlowInfo_FlowInfo _T3F8;_T3F8= _T3F6.f0;_T3F7= _T3F6.f1;{union Cyc_CfFlowInfo_FlowInfo f=_T3F8;void*r=_T3F7;_T26C= e1;_T26D= _T26C->topt;{
void*e1_type=_check_null(_T26D);_T26E= 
# 1321
Cyc_Absyn_is_nontagged_nonrequire_union_type(e1_type);if(!_T26E)goto _TL14D;{struct _tuple14 _T3F9;
_T3F9.f0= f;_T270= fenv;_T271= e;_T272= _T271->topt;_T273= _check_null(_T272);_T274= fenv;_T275= _T274->unknown_all;({__typeof__(Cyc_CfFlowInfo_typ_to_absrval(_T270,_T273,0,_T275))_T3FA=Cyc_CfFlowInfo_typ_to_absrval(_T270,_T273,0,_T275);_T3F9.f1= _T3FA;});_T26F= _T3F9;}return _T26F;_TL14D: _T276= 
Cyc_Absyn_is_require_union_type(e1_type);if(!_T276)goto _TL14F;_T277= e1;_T278= _T277->loc;_T279= e1_type;_T27A= field;_T27B= f;
Cyc_NewControlFlow_check_union_requires(_T278,_T279,_T27A,_T27B);goto _TL150;_TL14F: _TL150: {
struct _tuple13 _T3F9=Cyc_CfFlowInfo_unname_rval(r);void*_T3FA;_T3FA= _T3F9.f0;{void*r=_T3FA;struct _fat_ptr _T3FB;int _T3FC;long _T3FD;_T27C= r;_T27D= (int*)_T27C;_T27E= *_T27D;if(_T27E!=6)goto _TL151;_T27F= r;{struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct*_T3FE=(struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct*)_T27F;_T280= _T3FE->f1;_T3FD= _T280.is_union;_T281= _T3FE->f1;_T3FC= _T281.fieldnum;_T3FB= _T3FE->f2;}{long is_union=_T3FD;int fnum=_T3FC;struct _fat_ptr rdict=_T3FB;_T282= e1;_T283= _T282->topt;_T284= 
# 1328
_check_null(_T283);_T285= field;{int field_no=Cyc_CfFlowInfo_get_field_index(_T284,_T285);_T286= is_union;
if(!_T286)goto _TL153;_T287= fnum;_T288= - 1;if(_T287==_T288)goto _TL153;if(fnum==field_no)goto _TL153;{struct _tuple14 _T3FE;
_T3FE.f0= f;_T28A= fenv;_T28B= e;_T28C= _T28B->topt;_T28D= _check_null(_T28C);_T28E= fenv;_T28F= _T28E->unknown_none;({__typeof__(Cyc_CfFlowInfo_typ_to_absrval(_T28A,_T28D,1,_T28F))_T3FF=Cyc_CfFlowInfo_typ_to_absrval(_T28A,_T28D,1,_T28F);_T3FE.f1= _T3FF;});_T289= _T3FE;}return _T289;_TL153:{struct _tuple14 _T3FE;
_T3FE.f0= f;_T291= rdict;_T292= field_no;_T293= _check_fat_subscript(_T291,sizeof(void*),_T292);_T294= (void**)_T293;_T3FE.f1= *_T294;_T290= _T3FE;}return _T290;}}_TL151: _T295= Cyc_stderr;_T296= 
# 1333
_tag_fat("the bad rexp is :",sizeof(char),18U);_T297= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T295,_T296,_T297);
Cyc_CfFlowInfo_print_absrval(r);{struct Cyc_String_pa_PrintArg_struct _T3FE;_T3FE.tag= 0;
({__typeof__(Cyc_Absynpp_exp2string(e))_T3FF=Cyc_Absynpp_exp2string(e);_T3FE.f1= _T3FF;});_T298= _T3FE;}{struct Cyc_String_pa_PrintArg_struct _T3FE=_T298;void*_T3FF[1];_T3FF[0]= & _T3FE;_T29A= Cyc_Warn_impos;{int(*_T400)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T29A;_T299= _T400;}_T29B= _tag_fat("\nanal_Rexp: AggrMember: %s",sizeof(char),27U);_T29C= _tag_fat(_T3FF,sizeof(void*),1);_T299(_T29B,_T29C);};}}}}}case 37:{struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct*)_T3E8;_T3F5= _T3F6->f1;_T3EB= _T3F6->f2;}{struct Cyc_Absyn_Exp*e1=_T3F5;struct _fat_ptr*field=_T3EB;
# 1341
struct _tuple14 _T3F6=Cyc_NewControlFlow_anal_Rexp(env,0,inflow,e1,local_alias);void*_T3F7;union Cyc_CfFlowInfo_FlowInfo _T3F8;_T3F8= _T3F6.f0;_T3F7= _T3F6.f1;{union Cyc_CfFlowInfo_FlowInfo f=_T3F8;void*r=_T3F7;_T29D= e1;_T29E= _T29D->topt;_T29F= 
# 1343
_check_null(_T29E);_T2A0= Cyc_Absyn_is_nontagged_nonrequire_union_type(_T29F);if(!_T2A0)goto _TL155;{struct _tuple14 _T3F9;
_T3F9.f0= f;_T2A2= fenv;_T3F9.f1= _T2A2->unknown_all;_T2A1= _T3F9;}return _T2A1;_TL155: {
struct _tuple13 _T3F9=Cyc_CfFlowInfo_unname_rval(r);void*_T3FA;_T3FA= _T3F9.f0;{void*r=_T3FA;struct _fat_ptr _T3FB;int _T3FC;long _T3FD;_T2A3= r;_T2A4= (int*)_T2A3;_T2A5= *_T2A4;if(_T2A5!=6)goto _TL157;_T2A6= r;{struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct*_T3FE=(struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct*)_T2A6;_T2A7= _T3FE->f1;_T3FD= _T2A7.is_union;_T2A8= _T3FE->f1;_T3FC= _T2A8.fieldnum;_T3FB= _T3FE->f2;}{long is_union=_T3FD;int fnum=_T3FC;struct _fat_ptr rdict=_T3FB;_T2A9= e1;_T2AA= _T2A9->topt;_T2AB= 
# 1348
_check_null(_T2AA);_T2AC= field;{int field_no=Cyc_CfFlowInfo_get_field_index(_T2AB,_T2AC);_T2AD= is_union;
if(!_T2AD)goto _TL159;_T2AE= fnum;_T2AF= - 1;if(_T2AE==_T2AF)goto _TL159;
if(fnum==field_no)goto _TL15B;{struct _tuple14 _T3FE;
_T3FE.f0= f;_T2B1= fenv;_T3FE.f1= _T2B1->zero;_T2B0= _T3FE;}return _T2B0;
# 1353
_TL15B:{struct _tuple14 _T3FE;_T3FE.f0= f;_T2B3= fenv;_T3FE.f1= _T2B3->notzeroall;_T2B2= _T3FE;}return _T2B2;
# 1355
_TL159:{struct _tuple14 _T3FE;_T3FE.f0= f;_T2B5= fenv;_T3FE.f1= _T2B5->unknown_all;_T2B4= _T3FE;}return _T2B4;}}_TL157:{struct Cyc_String_pa_PrintArg_struct _T3FE;_T3FE.tag= 0;
# 1357
({__typeof__(Cyc_Absynpp_exp2string(e))_T3FF=Cyc_Absynpp_exp2string(e);_T3FE.f1= _T3FF;});_T2B6= _T3FE;}{struct Cyc_String_pa_PrintArg_struct _T3FE=_T2B6;void*_T3FF[1];_T3FF[0]= & _T3FE;_T2B8= Cyc_Warn_impos;{int(*_T400)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T2B8;_T2B7= _T400;}_T2B9= _tag_fat("anal_Rexp: TagCheck_e: %s",sizeof(char),26U);_T2BA= _tag_fat(_T3FF,sizeof(void*),1);_T2B7(_T2B9,_T2BA);};}}}}case 22:{struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*)_T3E8;_T3F5= _T3F6->f1;_T3EB= _T3F6->f2;}{struct Cyc_Absyn_Exp*e1=_T3F5;struct _fat_ptr*field=_T3EB;
# 1361
struct _tuple14 _T3F6=Cyc_NewControlFlow_anal_Rexp(env,0,inflow,e1,local_alias);void*_T3F7;union Cyc_CfFlowInfo_FlowInfo _T3F8;_T3F8= _T3F6.f0;_T3F7= _T3F6.f1;{union Cyc_CfFlowInfo_FlowInfo f1=_T3F8;void*r1=_T3F7;
# 1364
struct _tuple14 _T3F9=Cyc_NewControlFlow_anal_derefR(env,inflow,f1,e1,r1,0);void*_T3FA;union Cyc_CfFlowInfo_FlowInfo _T3FB;_T3FB= _T3F9.f0;_T3FA= _T3F9.f1;{union Cyc_CfFlowInfo_FlowInfo f2=_T3FB;void*r2=_T3FA;_T2BB= e1;_T2BC= _T2BB->topt;_T2BD= 
# 1367
_check_null(_T2BC);{void*_T3FC=Cyc_Absyn_compress(_T2BD);void*_T3FD;_T2BE= (int*)_T3FC;_T2BF= *_T2BE;if(_T2BF!=4)goto _TL15D;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T3FE=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T3FC;_T2C0= _T3FE->f1;_T3FD= _T2C0.elt_type;}{void*t2=_T3FD;_T2C1= 
# 1369
Cyc_Absyn_is_nontagged_nonrequire_union_type(t2);if(!_T2C1)goto _TL15F;{struct _tuple14 _T3FE;
# 1371
_T3FE.f0= f2;_T2C3= fenv;_T2C4= e;_T2C5= _T2C4->topt;_T2C6= _check_null(_T2C5);_T2C7= fenv;_T2C8= _T2C7->unknown_all;({__typeof__(Cyc_CfFlowInfo_typ_to_absrval(_T2C3,_T2C6,0,_T2C8))_T3FF=Cyc_CfFlowInfo_typ_to_absrval(_T2C3,_T2C6,0,_T2C8);_T3FE.f1= _T3FF;});_T2C2= _T3FE;}return _T2C2;_TL15F: _T2C9= 
Cyc_Absyn_is_require_union_type(t2);if(!_T2C9)goto _TL161;_T2CA= e1;_T2CB= _T2CA->loc;_T2CC= t2;_T2CD= field;_T2CE= f1;
Cyc_NewControlFlow_check_union_requires(_T2CB,_T2CC,_T2CD,_T2CE);goto _TL162;_TL161: _TL162: {
struct _tuple13 _T3FE=Cyc_CfFlowInfo_unname_rval(r2);void*_T3FF;_T3FF= _T3FE.f0;{void*r2=_T3FF;struct _fat_ptr _T400;int _T401;long _T402;_T2CF= r2;_T2D0= (int*)_T2CF;_T2D1= *_T2D0;if(_T2D1!=6)goto _TL163;_T2D2= r2;{struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct*_T403=(struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct*)_T2D2;_T2D3= _T403->f1;_T402= _T2D3.is_union;_T2D4= _T403->f1;_T401= _T2D4.fieldnum;_T400= _T403->f2;}{long is_union=_T402;int fnum=_T401;struct _fat_ptr rdict=_T400;
# 1377
int field_no=Cyc_CfFlowInfo_get_field_index(t2,field);_T2D5= is_union;
if(!_T2D5)goto _TL165;_T2D6= fnum;_T2D7= - 1;if(_T2D6==_T2D7)goto _TL165;if(fnum==field_no)goto _TL165;{struct _tuple14 _T403;
_T403.f0= f2;_T2D9= fenv;_T2DA= e;_T2DB= _T2DA->topt;_T2DC= _check_null(_T2DB);_T2DD= fenv;_T2DE= _T2DD->unknown_none;({__typeof__(Cyc_CfFlowInfo_typ_to_absrval(_T2D9,_T2DC,1,_T2DE))_T404=Cyc_CfFlowInfo_typ_to_absrval(_T2D9,_T2DC,1,_T2DE);_T403.f1= _T404;});_T2D8= _T403;}return _T2D8;_TL165:{struct _tuple14 _T403;
_T403.f0= f2;_T2E0= rdict;_T2E1= field_no;_T2E2= _check_fat_subscript(_T2E0,sizeof(void*),_T2E1);_T2E3= (void**)_T2E2;_T403.f1= *_T2E3;_T2DF= _T403;}return _T2DF;}_TL163: _T2E5= Cyc_Warn_impos;{
# 1382
int(*_T403)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T2E5;_T2E4= _T403;}_T2E6= _tag_fat("anal_Rexp: AggrArrow",sizeof(char),21U);_T2E7= _tag_fat(0U,sizeof(void*),0);_T2E4(_T2E6,_T2E7);;}}}goto _TL15E;_TL15D: _T2E9= Cyc_Warn_impos;{
# 1385
int(*_T3FE)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T2E9;_T2E8= _T3FE;}_T2EA= _tag_fat("anal_Rexp: AggrArrow ptr",sizeof(char),25U);_T2EB= _tag_fat(0U,sizeof(void*),0);_T2E8(_T2EA,_T2EB);_TL15E:;}}}}case 6:{struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct*)_T3E8;_T3F5= _T3F6->f1;_T3F0= _T3F6->f2;_T3EC= _T3F6->f3;}{struct Cyc_Absyn_Exp*e1=_T3F5;struct Cyc_Absyn_Exp*e2=_T3F0;struct Cyc_Absyn_Exp*e3=_T3EC;
# 1389
struct _tuple19 _T3F6=Cyc_NewControlFlow_anal_test(env,inflow,e1);union Cyc_CfFlowInfo_FlowInfo _T3F7;union Cyc_CfFlowInfo_FlowInfo _T3F8;_T3F8= _T3F6.f0;_T3F7= _T3F6.f1;{union Cyc_CfFlowInfo_FlowInfo f1t=_T3F8;union Cyc_CfFlowInfo_FlowInfo f1f=_T3F7;
struct _tuple14 pr2=Cyc_NewControlFlow_anal_Rexp(env,copy_ctxt,f1t,e2,local_alias);
struct _tuple14 pr3=Cyc_NewControlFlow_anal_Rexp(env,copy_ctxt,f1f,e3,local_alias);_T2EC= 
Cyc_CfFlowInfo_join_flow_and_rval(fenv,pr2,pr3);return _T2EC;}}case 7:{struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*)_T3E8;_T3F5= _T3F6->f1;_T3F0= _T3F6->f2;}{struct Cyc_Absyn_Exp*e1=_T3F5;struct Cyc_Absyn_Exp*e2=_T3F0;
# 1395
struct _tuple19 _T3F6=Cyc_NewControlFlow_anal_test(env,inflow,e1);union Cyc_CfFlowInfo_FlowInfo _T3F7;union Cyc_CfFlowInfo_FlowInfo _T3F8;_T3F8= _T3F6.f0;_T3F7= _T3F6.f1;{union Cyc_CfFlowInfo_FlowInfo f1t=_T3F8;union Cyc_CfFlowInfo_FlowInfo f1f=_T3F7;
struct _tuple14 _T3F9=Cyc_NewControlFlow_anal_Rexp(env,copy_ctxt,f1t,e2,local_alias);void*_T3FA;union Cyc_CfFlowInfo_FlowInfo _T3FB;_T3FB= _T3F9.f0;_T3FA= _T3F9.f1;{union Cyc_CfFlowInfo_FlowInfo f2t=_T3FB;void*f2r=_T3FA;{struct _tuple14 _T3FC;
_T3FC.f0= f2t;_T3FC.f1= f2r;_T2ED= _T3FC;}{struct _tuple14 pr2=_T2ED;{struct _tuple14 _T3FC;
_T3FC.f0= f1f;_T2EF= fenv;_T3FC.f1= _T2EF->zero;_T2EE= _T3FC;}{struct _tuple14 pr3=_T2EE;_T2F0= 
Cyc_CfFlowInfo_join_flow_and_rval(fenv,pr2,pr3);return _T2F0;}}}}}case 8:{struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*)_T3E8;_T3F5= _T3F6->f1;_T3F0= _T3F6->f2;}{struct Cyc_Absyn_Exp*e1=_T3F5;struct Cyc_Absyn_Exp*e2=_T3F0;
# 1402
struct _tuple19 _T3F6=Cyc_NewControlFlow_anal_test(env,inflow,e1);union Cyc_CfFlowInfo_FlowInfo _T3F7;union Cyc_CfFlowInfo_FlowInfo _T3F8;_T3F8= _T3F6.f0;_T3F7= _T3F6.f1;{union Cyc_CfFlowInfo_FlowInfo f1t=_T3F8;union Cyc_CfFlowInfo_FlowInfo f1f=_T3F7;
struct _tuple14 _T3F9=Cyc_NewControlFlow_anal_Rexp(env,copy_ctxt,f1f,e2,local_alias);void*_T3FA;union Cyc_CfFlowInfo_FlowInfo _T3FB;_T3FB= _T3F9.f0;_T3FA= _T3F9.f1;{union Cyc_CfFlowInfo_FlowInfo f2t=_T3FB;void*f2r=_T3FA;{struct _tuple14 _T3FC;
_T3FC.f0= f2t;_T3FC.f1= f2r;_T2F1= _T3FC;}{struct _tuple14 pr2=_T2F1;{struct _tuple14 _T3FC;
_T3FC.f0= f1t;_T2F3= fenv;_T3FC.f1= _T2F3->notzeroall;_T2F2= _T3FC;}{struct _tuple14 pr3=_T2F2;_T2F4= 
Cyc_CfFlowInfo_join_flow_and_rval(fenv,pr2,pr3);return _T2F4;}}}}}case 23:{struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*)_T3E8;_T3F5= _T3F6->f1;_T3F0= _T3F6->f2;}{struct Cyc_Absyn_Exp*e1=_T3F5;struct Cyc_Absyn_Exp*e2=_T3F0;_T2F5= env;_T2F6= inflow;{struct Cyc_Absyn_Exp*_T3F6[2];
# 1409
_T3F6[0]= e1;_T3F6[1]= e2;_T2F8= _tag_fat(_T3F6,sizeof(struct Cyc_Absyn_Exp*),2);_T2F7= Cyc_List_list(_T2F8);}{struct _tuple23 _T3F6=Cyc_NewControlFlow_anal_Rexps(_T2F5,_T2F6,_T2F7,0,1);struct Cyc_List_List*_T3F7;union Cyc_CfFlowInfo_FlowInfo _T3F8;_T3F8= _T3F6.f0;_T3F7= _T3F6.f1;{union Cyc_CfFlowInfo_FlowInfo f=_T3F8;struct Cyc_List_List*rvals=_T3F7;
# 1412
union Cyc_CfFlowInfo_FlowInfo f2=f;{struct Cyc_Dict_Dict _T3F9;_T2F9= f;_T2FA= _T2F9.ReachableFL;_T2FB= _T2FA.tag;if(_T2FB!=2)goto _TL167;_T2FC= f;_T2FD= _T2FC.ReachableFL;_T3F9= _T2FD.val;{struct Cyc_Dict_Dict d2=_T3F9;_T2FE= env;_T2FF= _T2FE->fenv;_T300= d2;_T301= 
# 1418
_check_null(rvals);_T302= _T301->tl;_T303= _check_null(_T302);_T304= _T303->hd;_T305= Cyc_CfFlowInfo_initlevel(_T2FF,_T300,_T304);_T306= (int)_T305;if(_T306!=0)goto _TL169;_T307= e2;_T308= _T307->loc;_T309= 
_tag_fat("expression may not be initialized",sizeof(char),34U);_T30A= _tag_fat(0U,sizeof(void*),0);Cyc_CfFlowInfo_aerr(_T308,_T309,_T30A);goto _TL16A;_TL169: _TL16A:
 f2= Cyc_CfFlowInfo_ReachableFL(d2);goto _LL16F;}_TL167: goto _LL16F;_LL16F:;}_T30B= env;_T30C= inflow;_T30D= f;_T30E= e1;_T30F= 
# 1425
_check_null(rvals);_T310= _T30F->hd;_T311= e2;{struct _tuple14 _T3F9=Cyc_NewControlFlow_anal_derefR(_T30B,_T30C,_T30D,_T30E,_T310,_T311);void*_T3FA;union Cyc_CfFlowInfo_FlowInfo _T3FB;_T3FB= _T3F9.f0;_T3FA= _T3F9.f1;{union Cyc_CfFlowInfo_FlowInfo f3=_T3FB;void*r=_T3FA;_T312= f3;_T313= _T312.BottomFL;_T314= _T313.tag;if(_T314!=1)goto _TL16B;{struct _tuple14 _T3FC;
# 1428
_T3FC.f0= f3;_T3FC.f1= r;_T315= _T3FC;}return _T315;_TL16B:{struct _tuple14 _T3FC;
# 1430
_T3FC.f0= f2;_T3FC.f1= r;_T316= _T3FC;}return _T316;;}}}}}case 29:{struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct*)_T3E8;_T3F5= _T3F6->f3;}{struct Cyc_List_List*des=_T3F5;
# 1445
struct Cyc_List_List*fs;_T317= e;_T318= _T317->topt;_T319= 
_check_null(_T318);{void*_T3F6=Cyc_Absyn_compress(_T319);struct Cyc_List_List*_T3F7;_T31A= (int*)_T3F6;_T31B= *_T31A;if(_T31B!=7)goto _TL16D;{struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*_T3F8=(struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*)_T3F6;_T3F7= _T3F8->f3;}{struct Cyc_List_List*f=_T3F7;
# 1448
fs= f;goto _LL17F;}_TL16D: _T31D= Cyc_Warn_impos;{
# 1451
int(*_T3F8)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T31D;_T31C= _T3F8;}_T31E= _tag_fat("anal_Rexp:anon struct has bad type",sizeof(char),35U);_T31F= _tag_fat(0U,sizeof(void*),0);_T31C(_T31E,_T31F);_LL17F:;}_T3F5= des;_T3EA= 0U;_T3EF= fs;goto _LL6D;}case 28: _T320= (struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*)_T3E8;_T321= _T320->f4;if(_T321==0)goto _TL16F;_T322= (struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*)_T3E8;_T323= _T322->f4;_T324= (struct Cyc_Absyn_Aggrdecl*)_T323;_T325= _T324->impl;if(_T325==0)goto _TL171;{struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*)_T3E8;_T3F5= _T3F6->f3;_T326= _T3F6->f4;{struct Cyc_Absyn_Aggrdecl _T3F7=*_T326;_T3EA= _T3F7.kind;_T327= _T3F7.impl;{struct Cyc_Absyn_AggrdeclImpl _T3F8=*_T327;_T3EF= _T3F8.fields;}}}_LL6D:{struct Cyc_List_List*des=_T3F5;enum Cyc_Absyn_AggrKind kind=_T3EA;struct Cyc_List_List*fs=_T3EF;_T328= e;_T329= _T328->topt;{
# 1456
void*exp_type=_check_null(_T329);_T32A= env;_T32B= inflow;_T32D= Cyc_List_map;{
struct Cyc_List_List*(*_T3F6)(struct Cyc_Absyn_Exp*(*)(struct _tuple26*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct Cyc_Absyn_Exp*(*)(struct _tuple26*),struct Cyc_List_List*))_T32D;_T32C= _T3F6;}_T32F= Cyc_Core_snd;{struct Cyc_Absyn_Exp*(*_T3F6)(struct _tuple26*)=(struct Cyc_Absyn_Exp*(*)(struct _tuple26*))_T32F;_T32E= _T3F6;}_T330= des;_T331= _T32C(_T32E,_T330);{struct _tuple23 _T3F6=Cyc_NewControlFlow_anal_Rexps(_T32A,_T32B,_T331,1,1);struct Cyc_List_List*_T3F7;union Cyc_CfFlowInfo_FlowInfo _T3F8;_T3F8= _T3F6.f0;_T3F7= _T3F6.f1;{union Cyc_CfFlowInfo_FlowInfo f=_T3F8;struct Cyc_List_List*rvals=_T3F7;_T332= fenv;_T333= fs;_T334= kind;_T335= (int)_T334;_T336= _T335==1;_T337= fenv;_T338= _T337->unknown_all;{
struct _fat_ptr aggrdict=Cyc_CfFlowInfo_aggrfields_to_aggrdict(_T332,_T333,_T336,_T338);
# 1460
int field_no=- 1;{
int i=0;_TL176: if(rvals!=0)goto _TL174;else{goto _TL175;}
_TL174: _T339= _check_null(des);_T33A= _T339->hd;_T33B= (struct _tuple26*)_T33A;_T33C= *_T33B;{struct Cyc_List_List*ds=_T33C.f0;_TL17A: if(ds!=0)goto _TL178;else{goto _TL179;}
_TL178: _T33D= ds;{void*_T3F9=_T33D->hd;struct _fat_ptr*_T3FA;_T33E= (int*)_T3F9;_T33F= *_T33E;if(_T33F!=0)goto _TL17B;_T341= Cyc_Warn_impos;{
# 1465
int(*_T3FB)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T341;_T340= _T3FB;}_T342= _tag_fat("anal_Rexp:Aggregate_e",sizeof(char),22U);_T343= _tag_fat(0U,sizeof(void*),0);_T340(_T342,_T343);goto _TL17C;_TL17B:{struct Cyc_Absyn_FieldName_Absyn_Designator_struct*_T3FB=(struct Cyc_Absyn_FieldName_Absyn_Designator_struct*)_T3F9;_T3FA= _T3FB->f1;}{struct _fat_ptr*fld=_T3FA;
# 1468
field_no= Cyc_CfFlowInfo_get_field_index_fs(fs,fld);_T344= aggrdict;_T345= field_no;_T346= _check_fat_subscript(_T344,sizeof(void*),_T345);_T347= (void**)_T346;_T348= rvals;
*_T347= _T348->hd;_T349= kind;_T34A= (int)_T349;
# 1471
if(_T34A!=1)goto _TL17D;_T34B= des;_T34C= _T34B->hd;_T34D= (struct _tuple26*)_T34C;_T34E= *_T34D;{
struct Cyc_Absyn_Exp*e=_T34E.f1;_T34F= env;_T350= e;_T351= _T350->loc;_T352= f;_T353= rvals;_T354= _T353->hd;
f= Cyc_NewControlFlow_use_Rval(_T34F,_T351,_T352,_T354);_T355= 
# 1475
Cyc_Absyn_is_require_union_type(exp_type);if(!_T355)goto _TL17F;_T356= e;_T357= _T356->loc;_T358= exp_type;_T359= fld;_T35A= f;
Cyc_NewControlFlow_check_union_requires(_T357,_T358,_T359,_T35A);goto _TL180;_TL17F: _TL180:;}goto _TL17E;_TL17D: _TL17E:;}_TL17C:;}_T35B= ds;
# 1462
ds= _T35B->tl;goto _TL17A;_TL179:;}_T35C= rvals;
# 1461
rvals= _T35C->tl;_T35D= des;des= _T35D->tl;i= i + 1;goto _TL176;_TL175:;}{
# 1479
struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct*res;res= _cycalloc(sizeof(struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct));_T35E= res;_T35E->tag= 6;_T35F= res;_T360= kind;_T361= (int)_T360;_T35F->f1.is_union= _T361==1;_T362= res;_T362->f1.fieldnum= field_no;_T363= res;_T363->f2= aggrdict;{struct _tuple14 _T3F9;
_T3F9.f0= f;_T365= res;_T3F9.f1= (void*)_T365;_T364= _T3F9;}return _T364;}}}}}}_TL171: goto _LL6E;_TL16F: _LL6E:{struct Cyc_String_pa_PrintArg_struct _T3F6;_T3F6.tag= 0;
# 1483
({__typeof__(Cyc_Absynpp_exp2string(e))_T3F7=Cyc_Absynpp_exp2string(e);_T3F6.f1= _T3F7;});_T366= _T3F6;}{struct Cyc_String_pa_PrintArg_struct _T3F6=_T366;void*_T3F7[1];_T3F7[0]= & _T3F6;_T368= Cyc_Warn_impos;{int(*_T3F8)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T368;_T367= _T3F8;}_T369= _tag_fat("anal_Rexp:missing aggrdeclimpl in %s",sizeof(char),37U);_T36A= _tag_fat(_T3F7,sizeof(void*),1);_T367(_T369,_T36A);};case 25:{struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*)_T3E8;_T3F5= _T3F6->f1;}{struct Cyc_List_List*dles=_T3F5;_T36C= Cyc_List_map;{
# 1485
struct Cyc_List_List*(*_T3F6)(struct Cyc_Absyn_Exp*(*)(struct _tuple26*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct Cyc_Absyn_Exp*(*)(struct _tuple26*),struct Cyc_List_List*))_T36C;_T36B= _T3F6;}_T36E= Cyc_Core_snd;{struct Cyc_Absyn_Exp*(*_T3F6)(struct _tuple26*)=(struct Cyc_Absyn_Exp*(*)(struct _tuple26*))_T36E;_T36D= _T3F6;}_T36F= dles;{struct Cyc_List_List*es=_T36B(_T36D,_T36F);
struct _tuple23 _T3F6=Cyc_NewControlFlow_anal_Rexps(env,inflow,es,1,1);struct Cyc_List_List*_T3F7;union Cyc_CfFlowInfo_FlowInfo _T3F8;_T3F8= _T3F6.f0;_T3F7= _T3F6.f1;{union Cyc_CfFlowInfo_FlowInfo outflow=_T3F8;struct Cyc_List_List*rvals=_T3F7;
_TL184: if(rvals!=0)goto _TL182;else{goto _TL183;}
_TL182: _T370= env;_T371= _check_null(es);_T372= _T371->hd;_T373= (struct Cyc_Absyn_Exp*)_T372;_T374= _T373->loc;_T375= outflow;_T376= rvals;_T377= _T376->hd;outflow= Cyc_NewControlFlow_use_Rval(_T370,_T374,_T375,_T377);_T378= rvals;
# 1487
rvals= _T378->tl;_T379= es;es= _T379->tl;goto _TL184;_TL183:{struct _tuple14 _T3F9;
# 1490
_T3F9.f0= outflow;_T37B= fenv;_T37C= e;_T37D= _T37C->topt;_T37E= _check_null(_T37D);_T37F= fenv;_T380= _T37F->notzeroall;({__typeof__(Cyc_CfFlowInfo_typ_to_absrval(_T37B,_T37E,0,_T380))_T3FA=Cyc_CfFlowInfo_typ_to_absrval(_T37B,_T37E,0,_T380);_T3F9.f1= _T3FA;});_T37A= _T3F9;}return _T37A;}}}case 26:{struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct*)_T3E8;_T3F5= _T3F6->f1;_T3F0= _T3F6->f2;_T3EC= _T3F6->f3;_T3F3= _T3F6->f4;}{struct Cyc_Absyn_Vardecl*vd=_T3F5;struct Cyc_Absyn_Exp*e1=_T3F0;struct Cyc_Absyn_Exp*e2=_T3EC;long zt=_T3F3;
# 1494
struct _tuple14 _T3F6=Cyc_NewControlFlow_anal_Rexp(env,1,inflow,e1,local_alias);void*_T3F7;union Cyc_CfFlowInfo_FlowInfo _T3F8;_T3F8= _T3F6.f0;_T3F7= _T3F6.f1;{union Cyc_CfFlowInfo_FlowInfo f1=_T3F8;void*r1=_T3F7;struct Cyc_Dict_Dict _T3F9;_T381= f1;_T382= _T381.BottomFL;_T383= _T382.tag;if(_T383!=1)goto _TL185;{struct _tuple14 _T3FA;
# 1497
_T3FA.f0= f1;_T385= fenv;_T3FA.f1= _T385->unknown_all;_T384= _T3FA;}return _T384;_TL185: _T386= f1;_T387= _T386.ReachableFL;_T3F9= _T387.val;{struct Cyc_Dict_Dict d1=_T3F9;_T388= env;_T389= _T388->fenv;_T38A= d1;_T38B= r1;_T38C= 
# 1499
Cyc_CfFlowInfo_initlevel(_T389,_T38A,_T38B);_T38D= (int)_T38C;if(_T38D!=0)goto _TL187;_T38E= e1;_T38F= _T38E->loc;_T390= 
_tag_fat("expression may not be initialized",sizeof(char),34U);_T391= _tag_fat(0U,sizeof(void*),0);Cyc_CfFlowInfo_aerr(_T38F,_T390,_T391);goto _TL188;_TL187: _TL188:
# 1503
 f1= Cyc_CfFlowInfo_ReachableFL(d1);_T392= r1;_T393= (int*)_T392;_T394= *_T393;switch(_T394){case 0:{struct _tuple14 _T3FA;
# 1508
_T3FA.f0= f1;_T396= fenv;_T3FA.f1= _T396->unknown_all;_T395= _T3FA;}return _T395;case 1: goto _LL19D;case 4: _LL19D:{struct Cyc_List_List _T3FA;
# 1511
_T3FA.hd= vd;_T3FA.tl= 0;_T397= _T3FA;}{struct Cyc_List_List l=_T397;_T398= fenv;_T399= f1;_T39A= & l;_T39B= (struct Cyc_List_List*)_T39A;_T39C= fenv;_T39D= _T39C->unknown_all;_T39E= e;_T39F= _T39E->loc;
f1= Cyc_NewControlFlow_add_vars(_T398,_T399,_T39B,_T39D,_T39F,0);{
# 1514
struct _tuple14 _T3FA=Cyc_NewControlFlow_anal_Rexp(env,1,f1,e2,local_alias);void*_T3FB;union Cyc_CfFlowInfo_FlowInfo _T3FC;_T3FC= _T3FA.f0;_T3FB= _T3FA.f1;{union Cyc_CfFlowInfo_FlowInfo f2=_T3FC;void*r2=_T3FB;{struct Cyc_Dict_Dict _T3FD;_T3A0= f2;_T3A1= _T3A0.BottomFL;_T3A2= _T3A1.tag;if(_T3A2!=1)goto _TL18A;{struct _tuple14 _T3FE;
# 1517
_T3FE.f0= f2;_T3A4= fenv;_T3FE.f1= _T3A4->unknown_all;_T3A3= _T3FE;}return _T3A3;_TL18A: _T3A5= f2;_T3A6= _T3A5.ReachableFL;_T3FD= _T3A6.val;{struct Cyc_Dict_Dict d2=_T3FD;_T3A7= 
# 1519
Cyc_CfFlowInfo_initlevel(fenv,d2,r2);_T3A8= (int)_T3A7;if(_T3A8==1)goto _TL18C;_T3A9= e1;_T3AA= _T3A9->loc;_T3AB= 
_tag_fat("expression may not be initialized",sizeof(char),34U);_T3AC= _tag_fat(0U,sizeof(void*),0);Cyc_CfFlowInfo_aerr(_T3AA,_T3AB,_T3AC);{struct _tuple14 _T3FE;
({__typeof__(Cyc_CfFlowInfo_BottomFL())_T3FF=Cyc_CfFlowInfo_BottomFL();_T3FE.f0= _T3FF;});_T3AE= fenv;_T3FE.f1= _T3AE->unknown_all;_T3AD= _T3FE;}return _T3AD;_TL18C:;};}
# 1524
f1= f2;goto _LL19F;}}}default: _LL19F:
# 1527
 _TL18E: if(1)goto _TL18F;else{goto _TL190;}
_TL18F:{struct Cyc_List_List _T3FA;_T3FA.hd= vd;_T3FA.tl= 0;_T3AF= _T3FA;}{struct Cyc_List_List l=_T3AF;_T3B0= fenv;_T3B1= f1;_T3B2= & l;_T3B3= (struct Cyc_List_List*)_T3B2;_T3B4= fenv;_T3B5= _T3B4->unknown_all;_T3B6= e;_T3B7= _T3B6->loc;
f1= Cyc_NewControlFlow_add_vars(_T3B0,_T3B1,_T3B3,_T3B5,_T3B7,0);{
struct _tuple14 _T3FA=Cyc_NewControlFlow_anal_Rexp(env,1,f1,e2,local_alias);void*_T3FB;union Cyc_CfFlowInfo_FlowInfo _T3FC;_T3FC= _T3FA.f0;_T3FB= _T3FA.f1;{union Cyc_CfFlowInfo_FlowInfo f2=_T3FC;void*r2=_T3FB;{struct Cyc_Dict_Dict _T3FD;_T3B8= f2;_T3B9= _T3B8.BottomFL;_T3BA= _T3B9.tag;if(_T3BA!=1)goto _TL191;goto _LL1AB;_TL191: _T3BB= f2;_T3BC= _T3BB.ReachableFL;_T3FD= _T3BC.val;{struct Cyc_Dict_Dict d2=_T3FD;_T3BD= 
# 1535
Cyc_CfFlowInfo_initlevel(fenv,d2,r2);_T3BE= (int)_T3BD;if(_T3BE==1)goto _TL193;_T3BF= e1;_T3C0= _T3BF->loc;_T3C1= 
_tag_fat("expression may not be initialized",sizeof(char),34U);_T3C2= _tag_fat(0U,sizeof(void*),0);Cyc_CfFlowInfo_aerr(_T3C0,_T3C1,_T3C2);{struct _tuple14 _T3FE;
({__typeof__(Cyc_CfFlowInfo_BottomFL())_T3FF=Cyc_CfFlowInfo_BottomFL();_T3FE.f0= _T3FF;});_T3C4= fenv;_T3FE.f1= _T3C4->unknown_all;_T3C3= _T3FE;}return _T3C3;_TL193:;}_LL1AB:;}{
# 1540
union Cyc_CfFlowInfo_FlowInfo newflow=Cyc_CfFlowInfo_join_flow(fenv,f1,f2);_T3C5= 
Cyc_CfFlowInfo_flow_lessthan_approx(newflow,f1);if(!_T3C5)goto _TL195;goto _TL190;_TL195:
# 1543
 f1= newflow;}}}}goto _TL18E;_TL190:{struct _tuple14 _T3FA;
# 1545
_T3FA.f0= f1;_T3C7= fenv;_T3FA.f1= _T3C7->notzeroall;_T3C6= _T3FA;}return _T3C6;};};}}case 27:{struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct*)_T3E8;_T3F0= _T3F6->f1;_T3C8= _T3F6->f2;_T3F5= (void*)_T3C8;_T3F3= _T3F6->f3;}{struct Cyc_Absyn_Exp*exp=_T3F0;void*typ=_T3F5;long iszeroterm=_T3F3;{struct Cyc_CfFlowInfo_MallocPt_CfFlowInfo_Root_struct*_T3F6=_cycalloc(sizeof(struct Cyc_CfFlowInfo_MallocPt_CfFlowInfo_Root_struct));_T3F6->tag= 1;
# 1551
_T3F6->f1= exp;_T3CA= e;_T3CB= _T3CA->topt;({__typeof__(_check_null(_T3CB))_T3F7=_check_null(_T3CB);_T3F6->f2= _T3F7;});_T3C9= (struct Cyc_CfFlowInfo_MallocPt_CfFlowInfo_Root_struct*)_T3F6;}{void*root=(void*)_T3C9;
struct Cyc_CfFlowInfo_Place*place;place= _cycalloc(sizeof(struct Cyc_CfFlowInfo_Place));_T3CC= place;_T3CC->root= root;_T3CD= place;_T3CD->path= 0;{struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct*_T3F6=_cycalloc(sizeof(struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct));_T3F6->tag= 4;
_T3F6->f1= place;_T3CE= (struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct*)_T3F6;}{void*rval=(void*)_T3CE;
void*place_val;_T3CF= fenv;_T3D0= typ;_T3D1= fenv;_T3D2= _T3D1->unknown_none;
# 1561
place_val= Cyc_CfFlowInfo_typ_to_absrval(_T3CF,_T3D0,0,_T3D2);{
union Cyc_CfFlowInfo_FlowInfo outflow;
struct _tuple14 _T3F6=Cyc_NewControlFlow_anal_Rexp(env,1,inflow,exp,local_alias);union Cyc_CfFlowInfo_FlowInfo _T3F7;_T3F7= _T3F6.f0;{union Cyc_CfFlowInfo_FlowInfo f=_T3F7;
outflow= f;{struct Cyc_Dict_Dict _T3F8;_T3D3= outflow;_T3D4= _T3D3.BottomFL;_T3D5= _T3D4.tag;if(_T3D5!=1)goto _TL197;{struct _tuple14 _T3F9;
# 1567
_T3F9.f0= outflow;_T3F9.f1= rval;_T3D6= _T3F9;}return _T3D6;_TL197: _T3D7= outflow;_T3D8= _T3D7.ReachableFL;_T3F8= _T3D8.val;{struct Cyc_Dict_Dict d2=_T3F8;{struct _tuple14 _T3F9;_T3DA= 
# 1569
Cyc_Dict_insert(d2,root,place_val);({__typeof__(Cyc_CfFlowInfo_ReachableFL(_T3DA))_T3FA=Cyc_CfFlowInfo_ReachableFL(_T3DA);_T3F9.f0= _T3FA;});_T3F9.f1= rval;_T3D9= _T3F9;}return _T3D9;};}}}}}}case 36:{struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct*_T3F6=(struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct*)_T3E8;_T3E9= _T3F6->f1;}{struct Cyc_Absyn_Stmt*s=_T3E9;{struct _tuple17 _T3F6;_T3DC= env;_T3DD= _T3DC->fenv;
# 1573
_T3F6.f0= _T3DD->unknown_all;_T3F6.f1= copy_ctxt;_T3DB= _T3F6;}{struct _tuple17 rval_opt=_T3DB;_T3DE= env;_T3DF= inflow;_T3E0= s;_T3E1= & rval_opt;{
union Cyc_CfFlowInfo_FlowInfo f=Cyc_NewControlFlow_anal_stmt(_T3DE,_T3DF,_T3E0,_T3E1);{struct _tuple14 _T3F6;
_T3F6.f0= f;_T3E3= rval_opt;_T3F6.f1= _T3E3.f0;_T3E2= _T3F6;}return _T3E2;}}}case 35: _LL7B: goto _LL7D;case 24: _LL7D: goto _LL7F;default: _LL7F: _T3E5= Cyc_Warn_impos;{
# 1581
int(*_T3F6)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T3E5;_T3E4= _T3F6;}_T3E6= _tag_fat("anal_Rexp, unexpected exp form",sizeof(char),31U);_T3E7= _tag_fat(0U,sizeof(void*),0);_T3E4(_T3E6,_T3E7);};}}}
# 1593
static struct _tuple18 Cyc_NewControlFlow_anal_derefL(struct Cyc_NewControlFlow_AnalEnv*env,union Cyc_CfFlowInfo_FlowInfo inflow,struct Cyc_Absyn_Exp*e,union Cyc_CfFlowInfo_FlowInfo f,void*r,long passthrough_consumes,long expanded_place_possibly_null,struct Cyc_List_List*path){struct Cyc_NewControlFlow_AnalEnv*_T0;struct Cyc_Absyn_Exp*_T1;void*_T2;void*_T3;int*_T4;int _T5;struct Cyc_Absyn_PtrInfo _T6;struct Cyc_Absyn_PtrAtts _T7;union Cyc_CfFlowInfo_FlowInfo _T8;struct _union_FlowInfo_BottomFL _T9;unsigned _TA;struct _tuple18 _TB;union Cyc_CfFlowInfo_FlowInfo _TC;struct _union_FlowInfo_ReachableFL _TD;void*_TE;int*_TF;unsigned _T10;int(*_T11)(struct _fat_ptr,struct _fat_ptr);void*(*_T12)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T13;struct _fat_ptr _T14;struct Cyc_Absyn_Exp*_T15;struct Cyc_CfFlowInfo_NotZero_Absyn_AbsynAnnot_struct*_T16;struct Cyc_CfFlowInfo_NotZero_Absyn_AbsynAnnot_struct*_T17;void*_T18;void*_T19;long _T1A;struct Cyc_Absyn_Exp*_T1B;struct Cyc_CfFlowInfo_UnknownZ_Absyn_AbsynAnnot_struct*_T1C;struct Cyc_CfFlowInfo_UnknownZ_Absyn_AbsynAnnot_struct*_T1D;struct Cyc_Absyn_Exp*_T1E;struct Cyc_CfFlowInfo_UnknownZ_Absyn_AbsynAnnot_struct*_T1F;char*_T20;char*_T21;struct Cyc_Absyn_Exp*_T22;struct Cyc_CfFlowInfo_UnknownZ_Absyn_AbsynAnnot_struct*_T23;struct Cyc_CfFlowInfo_UnknownZ_Absyn_AbsynAnnot_struct*_T24;struct Cyc_Absyn_Exp*_T25;struct Cyc_CfFlowInfo_NotZero_Absyn_AbsynAnnot_struct*_T26;struct Cyc_CfFlowInfo_NotZero_Absyn_AbsynAnnot_struct*_T27;long _T28;struct _tuple18 _T29;void*_T2A;struct Cyc_CfFlowInfo_Place*_T2B;struct Cyc_Absyn_Exp*_T2C;struct Cyc_CfFlowInfo_NotZero_Absyn_AbsynAnnot_struct*_T2D;struct Cyc_CfFlowInfo_NotZero_Absyn_AbsynAnnot_struct*_T2E;long _T2F;struct _tuple18 _T30;struct Cyc_CfFlowInfo_Place*_T31;struct Cyc_Absyn_Exp*_T32;struct Cyc_CfFlowInfo_IsZero_Absyn_AbsynAnnot_struct*_T33;struct Cyc_CfFlowInfo_IsZero_Absyn_AbsynAnnot_struct*_T34;struct _tuple18 _T35;void*_T36;long _T37;struct Cyc_Absyn_Exp*_T38;struct Cyc_CfFlowInfo_UnknownZ_Absyn_AbsynAnnot_struct*_T39;struct Cyc_CfFlowInfo_UnknownZ_Absyn_AbsynAnnot_struct*_T3A;void*_T3B;void*_T3C;long _T3D;struct Cyc_Absyn_Exp*_T3E;struct Cyc_CfFlowInfo_UnknownZ_Absyn_AbsynAnnot_struct*_T3F;struct Cyc_CfFlowInfo_UnknownZ_Absyn_AbsynAnnot_struct*_T40;enum Cyc_CfFlowInfo_InitLevel _T41;int _T42;void*_T43;int*_T44;int _T45;struct Cyc_Absyn_Exp*_T46;unsigned _T47;struct _fat_ptr _T48;struct _fat_ptr _T49;struct Cyc_Absyn_Exp*_T4A;unsigned _T4B;struct _fat_ptr _T4C;struct _fat_ptr _T4D;struct _tuple18 _T4E;int(*_T4F)(struct _fat_ptr,struct _fat_ptr);void*(*_T50)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T51;struct _fat_ptr _T52;_T0= env;{
# 1599
struct Cyc_CfFlowInfo_FlowEnv*fenv=_T0->fenv;_T1= e;_T2= _T1->topt;_T3= 
_check_null(_T2);{void*_T53=Cyc_Absyn_compress(_T3);void*_T54;_T4= (int*)_T53;_T5= *_T4;if(_T5!=4)goto _TL199;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T55=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T53;_T6= _T55->f1;_T7= _T6.ptr_atts;_T54= _T7.bounds;}{void*bd=_T54;struct Cyc_Dict_Dict _T55;_T8= f;_T9= _T8.BottomFL;_TA= _T9.tag;if(_TA!=1)goto _TL19B;{struct _tuple18 _T56;
# 1604
_T56.f0= f;({__typeof__(Cyc_CfFlowInfo_UnknownL())_T57=Cyc_CfFlowInfo_UnknownL();_T56.f1= _T57;});_TB= _T56;}return _TB;_TL19B: _TC= f;_TD= _TC.ReachableFL;_T55= _TD.val;{struct Cyc_Dict_Dict outdict=_T55;
# 1607
struct _tuple13 _T56=Cyc_CfFlowInfo_unname_rval(r);struct Cyc_List_List*_T57;void*_T58;_T58= _T56.f0;_T57= _T56.f1;{void*r=_T58;struct Cyc_List_List*names=_T57;
retry:{enum Cyc_CfFlowInfo_InitLevel _T59;struct Cyc_List_List*_T5A;void*_T5B;_TE= r;_TF= (int*)_TE;_T10= *_TF;switch(_T10){case 8: _T12= Cyc_Warn_impos;{
# 1611
int(*_T5C)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T12;_T11= _T5C;}_T13= _tag_fat("named location in anal_derefL",sizeof(char),30U);_T14= _tag_fat(0U,sizeof(void*),0);_T11(_T13,_T14);case 1: _T15= e;_T16= & Cyc_CfFlowInfo_NotZero_val;_T17= (struct Cyc_CfFlowInfo_NotZero_Absyn_AbsynAnnot_struct*)_T16;
# 1613
_T15->annot= (void*)_T17;goto _LLD;case 5: _T18= r;{struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct*_T5C=(struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct*)_T18;_T19= _T5C->f1;_T5B= (void*)_T19;}{void*rv=_T5B;_T1A= expanded_place_possibly_null;
# 1618
if(!_T1A)goto _TL19E;_T1B= e;_T1C= & Cyc_CfFlowInfo_UnknownZ_val;_T1D= (struct Cyc_CfFlowInfo_UnknownZ_Absyn_AbsynAnnot_struct*)_T1C;
# 1620
_T1B->annot= (void*)_T1D;goto _TL19F;
# 1622
_TL19E: _T1E= e;{void*_T5C=_T1E->annot;_T1F= (struct Cyc_CfFlowInfo_UnknownZ_Absyn_AbsynAnnot_struct*)_T5C;_T20= _T1F->tag;_T21= Cyc_CfFlowInfo_UnknownZ;if(_T20!=_T21)goto _TL1A0;_T22= e;_T23= & Cyc_CfFlowInfo_UnknownZ_val;_T24= (struct Cyc_CfFlowInfo_UnknownZ_Absyn_AbsynAnnot_struct*)_T23;
# 1626
_T22->annot= (void*)_T24;goto _LL1E;_TL1A0: _T25= e;_T26= & Cyc_CfFlowInfo_NotZero_val;_T27= (struct Cyc_CfFlowInfo_NotZero_Absyn_AbsynAnnot_struct*)_T26;
# 1629
_T25->annot= (void*)_T27;goto _LL1E;_LL1E:;}_TL19F: _T28= 
# 1634
Cyc_Tcutil_is_bound_one(bd,1);if(!_T28)goto _TL1A2;{struct _tuple18 _T5C;
_T5C.f0= f;({__typeof__(Cyc_CfFlowInfo_UnknownL())_T5D=Cyc_CfFlowInfo_UnknownL();_T5C.f1= _T5D;});_T29= _T5C;}return _T29;_TL1A2: goto _LLD;}case 4: _T2A= r;{struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct*_T5C=(struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct*)_T2A;_T2B= _T5C->f1;{struct Cyc_CfFlowInfo_Place _T5D=*_T2B;_T5B= _T5D.root;_T5A= _T5D.path;}}{void*root=_T5B;struct Cyc_List_List*path2=_T5A;_T2C= e;_T2D= & Cyc_CfFlowInfo_NotZero_val;_T2E= (struct Cyc_CfFlowInfo_NotZero_Absyn_AbsynAnnot_struct*)_T2D;
# 1639
_T2C->annot= (void*)_T2E;_T2F= 
Cyc_Tcutil_is_bound_one(bd,0);if(!_T2F)goto _TL1A4;{struct _tuple18 _T5C;
_T5C.f0= f;{struct Cyc_CfFlowInfo_Place*_T5D=_cycalloc(sizeof(struct Cyc_CfFlowInfo_Place));_T5D->root= root;({__typeof__(Cyc_List_append(path2,path))_T5E=Cyc_List_append(path2,path);_T5D->path= _T5E;});_T31= (struct Cyc_CfFlowInfo_Place*)_T5D;}({__typeof__(Cyc_CfFlowInfo_PlaceL(_T31))_T5D=Cyc_CfFlowInfo_PlaceL(_T31);_T5C.f1= _T5D;});_T30= _T5C;}return _T30;_TL1A4: goto _LLD;}case 0: _T32= e;_T33= & Cyc_CfFlowInfo_IsZero_val;_T34= (struct Cyc_CfFlowInfo_IsZero_Absyn_AbsynAnnot_struct*)_T33;
# 1644
_T32->annot= (void*)_T34;{struct _tuple18 _T5C;
({__typeof__(Cyc_CfFlowInfo_BottomFL())_T5D=Cyc_CfFlowInfo_BottomFL();_T5C.f0= _T5D;});({__typeof__(Cyc_CfFlowInfo_UnknownL())_T5D=Cyc_CfFlowInfo_UnknownL();_T5C.f1= _T5D;});_T35= _T5C;}return _T35;case 2: _T36= r;{struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct*_T5C=(struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct*)_T36;_T59= _T5C->f1;}{enum Cyc_CfFlowInfo_InitLevel il=_T59;_T37= 
# 1652
Cyc_Tcutil_is_bound_one(bd,0);if(!_T37)goto _TL1A6;
f= Cyc_NewControlFlow_notzero(env,inflow,f,e,il,names);goto _TL1A7;_TL1A6: _TL1A7: _T38= e;_T39= & Cyc_CfFlowInfo_UnknownZ_val;_T3A= (struct Cyc_CfFlowInfo_UnknownZ_Absyn_AbsynAnnot_struct*)_T39;
_T38->annot= (void*)_T3A;goto _LLD;}case 7: _T3B= r;{struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct*_T5C=(struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct*)_T3B;_T3C= _T5C->f3;_T5B= (void*)_T3C;}{void*r2=_T5B;_T3D= passthrough_consumes;
# 1657
if(!_T3D)goto _TL1A8;
r= r2;goto retry;_TL1A8: goto _LL1D;}default: _LL1D: _T3E= e;_T3F= & Cyc_CfFlowInfo_UnknownZ_val;_T40= (struct Cyc_CfFlowInfo_UnknownZ_Absyn_AbsynAnnot_struct*)_T3F;
# 1663
_T3E->annot= (void*)_T40;goto _LLD;}_LLD:;}_T41= 
# 1666
Cyc_CfFlowInfo_initlevel(fenv,outdict,r);_T42= (int)_T41;if(_T42!=0)goto _TL1AA;{
struct _tuple13 _T59=Cyc_CfFlowInfo_unname_rval(r);void*_T5A;_T5A= _T59.f0;{void*r=_T5A;_T43= r;_T44= (int*)_T43;_T45= *_T44;if(_T45!=7)goto _TL1AC;_T46= e;_T47= _T46->loc;_T48= 
# 1672
_tag_fat("attempt to dereference an alias-free that has already been copied",sizeof(char),66U);_T49= _tag_fat(0U,sizeof(void*),0);
# 1670
Cyc_CfFlowInfo_aerr(_T47,_T48,_T49);goto _LL26;_TL1AC: _T4A= e;_T4B= _T4A->loc;_T4C= 
# 1675
_tag_fat("dereference of possibly uninitialized pointer",sizeof(char),46U);_T4D= _tag_fat(0U,sizeof(void*),0);Cyc_CfFlowInfo_aerr(_T4B,_T4C,_T4D);goto _LL26;_LL26:;}}goto _TL1AB;_TL1AA: _TL1AB:{struct _tuple18 _T59;
# 1679
_T59.f0= f;({__typeof__(Cyc_CfFlowInfo_UnknownL())_T5A=Cyc_CfFlowInfo_UnknownL();_T59.f1= _T5A;});_T4E= _T59;}return _T4E;}};}goto _TL19A;_TL199: _T50= Cyc_Warn_impos;{
# 1682
int(*_T55)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T50;_T4F= _T55;}_T51= _tag_fat("left deref of non-pointer-type",sizeof(char),31U);_T52= _tag_fat(0U,sizeof(void*),0);_T4F(_T51,_T52);_TL19A:;}}}
# 1688
static struct Cyc_CfFlowInfo_Place*Cyc_NewControlFlow_make_expanded_place(struct Cyc_CfFlowInfo_Place*p,struct Cyc_List_List*path){struct Cyc_CfFlowInfo_Place*_T0;struct Cyc_List_List*_T1;struct Cyc_CfFlowInfo_Star_CfFlowInfo_PathCon_struct*_T2;struct Cyc_CfFlowInfo_Place*_T3;struct Cyc_List_List*_T4;void*_T5;_T0= p;{struct Cyc_CfFlowInfo_Place _T6=*_T0;_T5= _T6.root;_T4= _T6.path;}{void*proot=_T5;struct Cyc_List_List*ppath=_T4;{struct Cyc_List_List*_T6=_cycalloc(sizeof(struct Cyc_List_List));{struct Cyc_CfFlowInfo_Star_CfFlowInfo_PathCon_struct*_T7=_cycalloc(sizeof(struct Cyc_CfFlowInfo_Star_CfFlowInfo_PathCon_struct));
# 1690
_T7->tag= 1;_T2= (struct Cyc_CfFlowInfo_Star_CfFlowInfo_PathCon_struct*)_T7;}_T6->hd= (void*)_T2;_T6->tl= path;_T1= (struct Cyc_List_List*)_T6;}path= _T1;{struct Cyc_CfFlowInfo_Place*_T6=_cycalloc(sizeof(struct Cyc_CfFlowInfo_Place));
_T6->root= proot;({__typeof__(Cyc_List_append(ppath,path))_T7=Cyc_List_append(ppath,path);_T6->path= _T7;});_T3= (struct Cyc_CfFlowInfo_Place*)_T6;}return _T3;}}
# 1698
static struct _tuple18 Cyc_NewControlFlow_anal_Lexp_rec(struct Cyc_NewControlFlow_AnalEnv*env,union Cyc_CfFlowInfo_FlowInfo inflow,long expand_unique,long passthrough_consumes,struct Cyc_Absyn_Exp*e,struct Cyc_List_List*path){struct Cyc_NewControlFlow_AnalEnv*_T0;union Cyc_CfFlowInfo_FlowInfo _T1;struct _union_FlowInfo_BottomFL _T2;unsigned _T3;struct _tuple18 _T4;union Cyc_CfFlowInfo_FlowInfo _T5;struct _union_FlowInfo_ReachableFL _T6;struct Cyc_Absyn_Exp*_T7;int*_T8;unsigned _T9;struct _tuple18 _TA;struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_TB;void*_TC;int*_TD;unsigned _TE;void*_TF;struct Cyc_Absyn_Vardecl*_T10;enum Cyc_Absyn_Scope _T11;int _T12;struct _tuple18 _T13;void*_T14;void*_T15;struct _tuple18 _T16;struct Cyc_CfFlowInfo_Place*_T17;struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*_T18;void*_T19;struct _tuple18 _T1A;struct Cyc_Absyn_Exp*_T1B;void*_T1C;void*_T1D;int*_T1E;int _T1F;struct Cyc_Absyn_PtrInfo _T20;long _T21;long _T22;struct Cyc_Absyn_Exp*_T23;unsigned _T24;void*_T25;struct _fat_ptr*_T26;union Cyc_CfFlowInfo_FlowInfo _T27;struct Cyc_List_List*_T28;struct Cyc_CfFlowInfo_Dot_CfFlowInfo_PathCon_struct*_T29;int(*_T2A)(struct _fat_ptr,struct _fat_ptr);void*(*_T2B)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T2C;struct _fat_ptr _T2D;struct Cyc_NewControlFlow_AnalEnv*_T2E;struct Cyc_List_List*_T2F;struct Cyc_Absyn_Exp*_T30;void*_T31;void*_T32;long _T33;struct _tuple18 _T34;union Cyc_CfFlowInfo_FlowInfo _T35;struct _union_FlowInfo_ReachableFL _T36;unsigned _T37;union Cyc_CfFlowInfo_AbsLVal _T38;struct _union_AbsLVal_PlaceL _T39;unsigned _T3A;union Cyc_CfFlowInfo_FlowInfo _T3B;struct _union_FlowInfo_ReachableFL _T3C;union Cyc_CfFlowInfo_AbsLVal _T3D;struct _union_AbsLVal_PlaceL _T3E;long _T3F;void*_T40;int*_T41;unsigned _T42;void*_T43;void*_T44;int(*_T45)(struct _fat_ptr,struct _fat_ptr);void*(*_T46)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T47;struct _fat_ptr _T48;void*_T49;struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct*_T4A;void*_T4B;int*_T4C;unsigned _T4D;struct _tuple18 _T4E;struct _tuple18 _T4F;struct Cyc_CfFlowInfo_Place*_T50;void*_T51;enum Cyc_CfFlowInfo_InitLevel _T52;int _T53;struct Cyc_CfFlowInfo_FlowEnv*_T54;struct Cyc_CfFlowInfo_FlowEnv*_T55;struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct*_T56;struct Cyc_CfFlowInfo_FlowEnv*_T57;struct Cyc_Absyn_Exp*_T58;void*_T59;void*_T5A;void*_T5B;void*_T5C;struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*_T5D;struct Cyc_List_List*_T5E;void*_T5F;struct Cyc_List_List*_T60;struct Cyc_CfFlowInfo_FlowEnv*_T61;struct Cyc_Absyn_Exp*_T62;unsigned _T63;struct Cyc_Dict_Dict _T64;struct Cyc_CfFlowInfo_Place*_T65;void*_T66;struct _tuple18 _T67;struct Cyc_CfFlowInfo_Place*_T68;void*_T69;int*_T6A;unsigned _T6B;void*_T6C;struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct*_T6D;void*_T6E;int*_T6F;int _T70;struct _tuple18 _T71;struct Cyc_CfFlowInfo_Place*_T72;struct _tuple18 _T73;struct Cyc_NewControlFlow_AnalEnv*_T74;union Cyc_CfFlowInfo_FlowInfo _T75;struct Cyc_List_List*_T76;struct _fat_ptr _T77;union Cyc_CfFlowInfo_FlowInfo _T78;struct _union_FlowInfo_ReachableFL _T79;unsigned _T7A;union Cyc_CfFlowInfo_FlowInfo _T7B;struct _union_FlowInfo_ReachableFL _T7C;struct Cyc_CfFlowInfo_FlowEnv*_T7D;struct Cyc_Dict_Dict _T7E;struct Cyc_List_List*_T7F;struct Cyc_List_List*_T80;struct Cyc_List_List*_T81;void*_T82;enum Cyc_CfFlowInfo_InitLevel _T83;int _T84;struct Cyc_Absyn_Exp*_T85;unsigned _T86;struct _fat_ptr _T87;struct _fat_ptr _T88;struct Cyc_NewControlFlow_AnalEnv*_T89;union Cyc_CfFlowInfo_FlowInfo _T8A;struct Cyc_Absyn_Exp*_T8B;union Cyc_CfFlowInfo_FlowInfo _T8C;struct Cyc_List_List*_T8D;void*_T8E;long _T8F;struct Cyc_List_List*_T90;union Cyc_CfFlowInfo_FlowInfo _T91;struct _union_FlowInfo_BottomFL _T92;unsigned _T93;struct _tuple18 _T94;struct _tuple18 _T95;struct Cyc_Absyn_Exp*_T96;void*_T97;long _T98;struct Cyc_Absyn_Exp*_T99;unsigned _T9A;void*_T9B;struct _fat_ptr*_T9C;union Cyc_CfFlowInfo_FlowInfo _T9D;long _T9E;struct _tuple18 _T9F;struct Cyc_NewControlFlow_AnalEnv*_TA0;union Cyc_CfFlowInfo_FlowInfo _TA1;long _TA2;long _TA3;struct Cyc_Absyn_Exp*_TA4;struct Cyc_List_List*_TA5;struct Cyc_CfFlowInfo_Dot_CfFlowInfo_PathCon_struct*_TA6;struct _tuple18 _TA7;struct _tuple18 _TA8;
# 1700
struct Cyc_Dict_Dict d;_T0= env;{
struct Cyc_CfFlowInfo_FlowEnv*fenv=_T0->fenv;{struct Cyc_Dict_Dict _TA9;_T1= inflow;_T2= _T1.BottomFL;_T3= _T2.tag;if(_T3!=1)goto _TL1AE;{struct _tuple18 _TAA;
# 1705
({__typeof__(Cyc_CfFlowInfo_BottomFL())_TAB=Cyc_CfFlowInfo_BottomFL();_TAA.f0= _TAB;});({__typeof__(Cyc_CfFlowInfo_UnknownL())_TAB=Cyc_CfFlowInfo_UnknownL();_TAA.f1= _TAB;});_T4= _TAA;}return _T4;_TL1AE: _T5= inflow;_T6= _T5.ReachableFL;_TA9= _T6.val;{struct Cyc_Dict_Dict d2=_TA9;
# 1707
d= d2;};}_T7= e;{
# 1713
void*_TA9=_T7->r;struct Cyc_Absyn_Exp*_TAA;struct _fat_ptr*_TAB;struct Cyc_Absyn_Vardecl*_TAC;struct Cyc_Absyn_Exp*_TAD;_T8= (int*)_TA9;_T9= *_T8;switch(_T9){case 14:{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_TAE=(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_TA9;_TAD= _TAE->f2;}{struct Cyc_Absyn_Exp*e1=_TAD;_TAD= e1;goto _LL9;}case 12:{struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct*_TAE=(struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct*)_TA9;_TAD= _TAE->f1;}_LL9: {struct Cyc_Absyn_Exp*e1=_TAD;_TAD= e1;goto _LLB;}case 13:{struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*_TAE=(struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*)_TA9;_TAD= _TAE->f1;}_LLB: {struct Cyc_Absyn_Exp*e1=_TAD;_TA= 
# 1719
Cyc_NewControlFlow_anal_Lexp_rec(env,inflow,expand_unique,passthrough_consumes,e1,path);return _TA;}case 1: _TB= (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_TA9;_TC= _TB->f1;_TD= (int*)_TC;_TE= *_TD;switch(_TE){case 4:{struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_TAE=(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_TA9;_TF= _TAE->f1;{struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_TAF=(struct Cyc_Absyn_Local_b_Absyn_Binding_struct*)_TF;_TAC= _TAF->f1;}}{struct Cyc_Absyn_Vardecl*vd=_TAC;_T10= vd;_T11= _T10->sc;_T12= (int)_T11;
# 1722
if(_T12!=0)goto _TL1B2;{struct _tuple18 _TAE;
_TAE.f0= inflow;({__typeof__(Cyc_CfFlowInfo_UnknownL())_TAF=Cyc_CfFlowInfo_UnknownL();_TAE.f1= _TAF;});_T13= _TAE;}return _T13;_TL1B2: _TAC= vd;goto _LLF;}case 3:{struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_TAE=(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_TA9;_T14= _TAE->f1;{struct Cyc_Absyn_Param_b_Absyn_Binding_struct*_TAF=(struct Cyc_Absyn_Param_b_Absyn_Binding_struct*)_T14;_TAC= _TAF->f1;}}_LLF: {struct Cyc_Absyn_Vardecl*vd=_TAC;_TAC= vd;goto _LL11;}case 5:{struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_TAE=(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_TA9;_T15= _TAE->f1;{struct Cyc_Absyn_Pat_b_Absyn_Binding_struct*_TAF=(struct Cyc_Absyn_Pat_b_Absyn_Binding_struct*)_T15;_TAC= _TAF->f1;}}_LL11: {struct Cyc_Absyn_Vardecl*vd=_TAC;{struct _tuple18 _TAE;
# 1728
_TAE.f0= inflow;{struct Cyc_CfFlowInfo_Place*_TAF=_cycalloc(sizeof(struct Cyc_CfFlowInfo_Place));{struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*_TB0=_cycalloc(sizeof(struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct));_TB0->tag= 0;_TB0->f1= vd;_T18= (struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*)_TB0;}_TAF->root= (void*)_T18;_TAF->path= path;_T17= (struct Cyc_CfFlowInfo_Place*)_TAF;}({__typeof__(Cyc_CfFlowInfo_PlaceL(_T17))_TAF=Cyc_CfFlowInfo_PlaceL(_T17);_TAE.f1= _TAF;});_T16= _TAE;}return _T16;}case 1:{struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_TAE=(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_TA9;_T19= _TAE->f1;{struct Cyc_Absyn_Global_b_Absyn_Binding_struct*_TAF=(struct Cyc_Absyn_Global_b_Absyn_Binding_struct*)_T19;_TAC= _TAF->f1;}}{struct Cyc_Absyn_Vardecl*vd=_TAC;{struct _tuple18 _TAE;
# 1731
_TAE.f0= inflow;({__typeof__(Cyc_CfFlowInfo_UnknownL())_TAF=Cyc_CfFlowInfo_UnknownL();_TAE.f1= _TAF;});_T1A= _TAE;}return _T1A;}default: goto _LL1C;};case 22:{struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*_TAE=(struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*)_TA9;_TAD= _TAE->f1;_TAB= _TAE->f2;}{struct Cyc_Absyn_Exp*e1=_TAD;struct _fat_ptr*f=_TAB;_T1B= e1;_T1C= _T1B->topt;_T1D= 
# 1734
_check_null(_T1C);{void*_TAE=Cyc_Absyn_compress(_T1D);void*_TAF;_T1E= (int*)_TAE;_T1F= *_T1E;if(_T1F!=4)goto _TL1B4;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_TB0=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_TAE;_T20= _TB0->f1;_TAF= _T20.elt_type;}{void*t2=_TAF;_T21= 
# 1736
Cyc_Absyn_is_nontagged_nonrequire_union_type(t2);if(_T21)goto _TL1B6;else{goto _TL1B8;}
_TL1B8: _T22= Cyc_Absyn_is_require_union_type(t2);if(!_T22)goto _TL1B9;_T23= e1;_T24= _T23->loc;_T25= t2;_T26= f;_T27= inflow;
Cyc_NewControlFlow_check_union_requires(_T24,_T25,_T26,_T27);goto _TL1BA;_TL1B9: _TL1BA:{struct Cyc_List_List*_TB0=_cycalloc(sizeof(struct Cyc_List_List));{struct Cyc_CfFlowInfo_Dot_CfFlowInfo_PathCon_struct*_TB1=_cycalloc(sizeof(struct Cyc_CfFlowInfo_Dot_CfFlowInfo_PathCon_struct));_TB1->tag= 0;
({__typeof__(Cyc_CfFlowInfo_get_field_index(t2,f))_TB2=Cyc_CfFlowInfo_get_field_index(t2,f);_TB1->f1= _TB2;});_T29= (struct Cyc_CfFlowInfo_Dot_CfFlowInfo_PathCon_struct*)_TB1;}_TB0->hd= (void*)_T29;_TB0->tl= path;_T28= (struct Cyc_List_List*)_TB0;}path= _T28;goto _TL1B7;_TL1B6: _TL1B7: goto _LL1E;}_TL1B4: _T2B= Cyc_Warn_impos;{
# 1743
int(*_TB0)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T2B;_T2A= _TB0;}_T2C= _tag_fat("anal_Lexp: AggrArrow ptr",sizeof(char),25U);_T2D= _tag_fat(0U,sizeof(void*),0);_T2A(_T2C,_T2D);_LL1E:;}_TAD= e1;goto _LL17;}case 20:{struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*_TAE=(struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*)_TA9;_TAD= _TAE->f1;}_LL17: {struct Cyc_Absyn_Exp*e1=_TAD;_T2E= env;_T2F= _T2E->aquals_bounds;_T30= e1;_T31= _T30->topt;_T32= 
# 1750
_check_null(_T31);_T33= Cyc_Tcutil_is_noalias_pointer(_T2F,_T32,1);if(!_T33)goto _TL1BB;{
# 1752
struct _tuple18 _TAE=Cyc_NewControlFlow_anal_Lexp(env,inflow,expand_unique,passthrough_consumes,e1);union Cyc_CfFlowInfo_AbsLVal _TAF;union Cyc_CfFlowInfo_FlowInfo _TB0;_TB0= _TAE.f0;_TAF= _TAE.f1;{union Cyc_CfFlowInfo_FlowInfo f=_TB0;union Cyc_CfFlowInfo_AbsLVal lval=_TAF;{struct _tuple18 _TB1;
_TB1.f0= f;_TB1.f1= lval;_T34= _TB1;}{struct _tuple18 _TB1=_T34;struct Cyc_CfFlowInfo_Place*_TB2;struct Cyc_Dict_Dict _TB3;_T35= _TB1.f0;_T36= _T35.ReachableFL;_T37= _T36.tag;if(_T37!=2)goto _TL1BD;_T38= _TB1.f1;_T39= _T38.PlaceL;_T3A= _T39.tag;if(_T3A!=1)goto _TL1BF;_T3B= _TB1.f0;_T3C= _T3B.ReachableFL;_TB3= _T3C.val;_T3D= _TB1.f1;_T3E= _T3D.PlaceL;_TB2= _T3E.val;{struct Cyc_Dict_Dict fd=_TB3;struct Cyc_CfFlowInfo_Place*p=_TB2;
# 1755
void*old_rval=Cyc_CfFlowInfo_lookup_place(fd,p);
struct _tuple13 _TB4=Cyc_CfFlowInfo_unname_rval(old_rval);struct Cyc_List_List*_TB5;void*_TB6;_TB6= _TB4.f0;_TB5= _TB4.f1;{void*rval=_TB6;struct Cyc_List_List*names=_TB5;_T3F= expand_unique;
if(!_T3F)goto _TL1C1;{
long possibly_null=1;void*_TB7;struct Cyc_Absyn_Vardecl*_TB8;_T40= rval;_T41= (int*)_T40;_T42= *_T41;switch(_T42){case 8: _T43= rval;{struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*_TB9=(struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*)_T43;_TB8= _TB9->f1;_T44= _TB9->f2;_TB7= (void*)_T44;}{struct Cyc_Absyn_Vardecl*n=_TB8;void*r=_TB7;_T46= Cyc_Warn_impos;{
# 1761
int(*_TB9)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T46;_T45= _TB9;}_T47= _tag_fat("bad named location in anal_Lexp:deref",sizeof(char),38U);_T48= _tag_fat(0U,sizeof(void*),0);_T45(_T47,_T48);}case 7: _T49= rval;_T4A= (struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct*)_T49;_T4B= _T4A->f3;_T4C= (int*)_T4B;_T4D= *_T4C;switch(_T4D){case 4: goto _LL34;case 5: goto _LL38;default: goto _LL3B;};case 4: _LL34: _T4E= 
# 1765
Cyc_NewControlFlow_anal_derefL(env,f,e1,f,old_rval,passthrough_consumes,0,path);return _T4E;case 5: _LL38: {
# 1771
struct _tuple18 _TB9=
Cyc_NewControlFlow_anal_derefL(env,f,e1,f,old_rval,passthrough_consumes,0,path);union Cyc_CfFlowInfo_FlowInfo _TBA;_TBA= _TB9.f0;{union Cyc_CfFlowInfo_FlowInfo f=_TBA;{struct _tuple18 _TBB;
_TBB.f0= f;_T50= Cyc_NewControlFlow_make_expanded_place(p,path);({__typeof__(Cyc_CfFlowInfo_PlaceL(_T50))_TBC=Cyc_CfFlowInfo_PlaceL(_T50);_TBB.f1= _TBC;});_T4F= _TBB;}return _T4F;}}case 1:
# 1775
 possibly_null= 0;goto _LL3C;default: _LL3B: _LL3C: {
# 1783
enum Cyc_CfFlowInfo_InitLevel il=Cyc_CfFlowInfo_initlevel(fenv,fd,rval);_T52= il;_T53= (int)_T52;
if(_T53!=1)goto _TL1C5;_T54= fenv;_T51= _T54->unknown_all;goto _TL1C6;_TL1C5: _T55= fenv;_T51= _T55->unknown_none;_TL1C6: {void*leaf=_T51;{struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct*_TB9=_cycalloc(sizeof(struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct));_TB9->tag= 5;_T57= fenv;_T58= e1;_T59= _T58->topt;_T5A= 
# 1786
_check_null(_T59);_T5B= Cyc_Tcutil_pointer_elt_type(_T5A);_T5C= leaf;
# 1785
({__typeof__(Cyc_CfFlowInfo_typ_to_absrval(_T57,_T5B,0,_T5C))_TBA=Cyc_CfFlowInfo_typ_to_absrval(_T57,_T5B,0,_T5C);_TB9->f1= _TBA;});_T56= (struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct*)_TB9;}{void*res=(void*)_T56;
# 1787
_TL1CA: if(names!=0)goto _TL1C8;else{goto _TL1C9;}
_TL1C8:{struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*_TB9=_cycalloc(sizeof(struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct));_TB9->tag= 8;_T5E= names;_T5F= _T5E->hd;_TB9->f1= (struct Cyc_Absyn_Vardecl*)_T5F;_TB9->f2= res;_T5D= (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*)_TB9;}res= (void*)_T5D;_T60= names;
# 1787
names= _T60->tl;goto _TL1CA;_TL1C9: _T61= fenv;_T62= e;_T63= _T62->loc;_T64= fd;_T65= p;_T66= res;
# 1789
fd= Cyc_CfFlowInfo_assign_place(_T61,_T63,_T64,_T65,_T66);{
union Cyc_CfFlowInfo_FlowInfo outflow=Cyc_CfFlowInfo_ReachableFL(fd);
# 1797
struct _tuple18 _TB9=Cyc_NewControlFlow_anal_derefL(env,outflow,e1,outflow,res,passthrough_consumes,possibly_null,path);union Cyc_CfFlowInfo_FlowInfo _TBA;_TBA= _TB9.f0;{union Cyc_CfFlowInfo_FlowInfo f=_TBA;{struct _tuple18 _TBB;
# 1799
_TBB.f0= f;_T68= Cyc_NewControlFlow_make_expanded_place(p,path);({__typeof__(Cyc_CfFlowInfo_PlaceL(_T68))_TBC=Cyc_CfFlowInfo_PlaceL(_T68);_TBB.f1= _TBC;});_T67= _TBB;}return _T67;}}}}}};}goto _TL1C2;
# 1802
_TL1C1: _T69= rval;_T6A= (int*)_T69;_T6B= *_T6A;switch(_T6B){case 7: _T6C= rval;_T6D= (struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct*)_T6C;_T6E= _T6D->f3;_T6F= (int*)_T6E;_T70= *_T6F;if(_T70!=5)goto _TL1CC;goto _LL47;_TL1CC: goto _LL48;case 5: _LL47: {
# 1808
struct _tuple18 _TB7=
Cyc_NewControlFlow_anal_derefL(env,f,e1,f,old_rval,passthrough_consumes,0,path);union Cyc_CfFlowInfo_FlowInfo _TB8;_TB8= _TB7.f0;{union Cyc_CfFlowInfo_FlowInfo f=_TB8;{struct _tuple18 _TB9;
_TB9.f0= f;_T72= Cyc_NewControlFlow_make_expanded_place(p,path);({__typeof__(Cyc_CfFlowInfo_PlaceL(_T72))_TBA=Cyc_CfFlowInfo_PlaceL(_T72);_TB9.f1= _TBA;});_T71= _TB9;}return _T71;}}default: _LL48: goto _LL43;}_LL43: _TL1C2: goto _LL26;}}_TL1BF: goto _LL29;_TL1BD: _LL29: goto _LL26;_LL26:;}}}goto _TL1BC;_TL1BB: _TL1BC: {
# 1822
struct _tuple14 _TAE=Cyc_NewControlFlow_anal_Rexp(env,0,inflow,e1,0);void*_TAF;union Cyc_CfFlowInfo_FlowInfo _TB0;_TB0= _TAE.f0;_TAF= _TAE.f1;{union Cyc_CfFlowInfo_FlowInfo f=_TB0;void*r=_TAF;_T73= 
# 1824
Cyc_NewControlFlow_anal_derefL(env,inflow,e1,f,r,passthrough_consumes,0,path);return _T73;}}}case 23:{struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*_TAE=(struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*)_TA9;_TAD= _TAE->f1;_TAA= _TAE->f2;}{struct Cyc_Absyn_Exp*e1=_TAD;struct Cyc_Absyn_Exp*e2=_TAA;_T74= env;_T75= inflow;{struct Cyc_Absyn_Exp*_TAE[2];
# 1826
_TAE[0]= e1;_TAE[1]= e2;_T77= _tag_fat(_TAE,sizeof(struct Cyc_Absyn_Exp*),2);_T76= Cyc_List_list(_T77);}{struct _tuple23 _TAE=Cyc_NewControlFlow_anal_Rexps(_T74,_T75,_T76,0,1);struct Cyc_List_List*_TAF;union Cyc_CfFlowInfo_FlowInfo _TB0;_TB0= _TAE.f0;_TAF= _TAE.f1;{union Cyc_CfFlowInfo_FlowInfo f=_TB0;struct Cyc_List_List*rvals=_TAF;
union Cyc_CfFlowInfo_FlowInfo f2=f;{struct Cyc_Dict_Dict _TB1;_T78= f;_T79= _T78.ReachableFL;_T7A= _T79.tag;if(_T7A!=2)goto _TL1CE;_T7B= f;_T7C= _T7B.ReachableFL;_TB1= _T7C.val;{struct Cyc_Dict_Dict d2=_TB1;_T7D= fenv;_T7E= d2;_T7F= 
# 1830
_check_null(rvals);_T80= _T7F->tl;_T81= _check_null(_T80);_T82= _T81->hd;_T83= Cyc_CfFlowInfo_initlevel(_T7D,_T7E,_T82);_T84= (int)_T83;if(_T84!=0)goto _TL1D0;_T85= e2;_T86= _T85->loc;_T87= 
_tag_fat("expression may not be initialized",sizeof(char),34U);_T88= _tag_fat(0U,sizeof(void*),0);Cyc_CfFlowInfo_aerr(_T86,_T87,_T88);goto _TL1D1;_TL1D0: _TL1D1:
 f2= Cyc_CfFlowInfo_ReachableFL(d2);goto _LL53;}_TL1CE: goto _LL53;_LL53:;}_T89= env;_T8A= inflow;_T8B= e1;_T8C= f;_T8D= 
# 1838
_check_null(rvals);_T8E= _T8D->hd;_T8F= passthrough_consumes;_T90= path;{struct _tuple18 _TB1=Cyc_NewControlFlow_anal_derefL(_T89,_T8A,_T8B,_T8C,_T8E,_T8F,0,_T90);union Cyc_CfFlowInfo_AbsLVal _TB2;union Cyc_CfFlowInfo_FlowInfo _TB3;_TB3= _TB1.f0;_TB2= _TB1.f1;{union Cyc_CfFlowInfo_FlowInfo f3=_TB3;union Cyc_CfFlowInfo_AbsLVal r=_TB2;_T91= f3;_T92= _T91.BottomFL;_T93= _T92.tag;if(_T93!=1)goto _TL1D2;{struct _tuple18 _TB4;
# 1841
_TB4.f0= f3;_TB4.f1= r;_T94= _TB4;}return _T94;_TL1D2:{struct _tuple18 _TB4;
# 1843
_TB4.f0= f2;_TB4.f1= r;_T95= _TB4;}return _T95;;}}}}}case 21:{struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*_TAE=(struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*)_TA9;_TAD= _TAE->f1;_TAB= _TAE->f2;}{struct Cyc_Absyn_Exp*e1=_TAD;struct _fat_ptr*fld=_TAB;_T96= e1;_T97= _T96->topt;{
# 1847
void*e1_type=_check_null(_T97);_T98= 
Cyc_Absyn_is_require_union_type(e1_type);if(!_T98)goto _TL1D4;_T99= e1;_T9A= _T99->loc;_T9B= e1_type;_T9C= fld;_T9D= inflow;
Cyc_NewControlFlow_check_union_requires(_T9A,_T9B,_T9C,_T9D);goto _TL1D5;_TL1D4: _TL1D5: _T9E= 
Cyc_Absyn_is_nontagged_nonrequire_union_type(e1_type);if(!_T9E)goto _TL1D6;{struct _tuple18 _TAE;
_TAE.f0= inflow;({__typeof__(Cyc_CfFlowInfo_UnknownL())_TAF=Cyc_CfFlowInfo_UnknownL();_TAE.f1= _TAF;});_T9F= _TAE;}return _T9F;_TL1D6: _TA0= env;_TA1= inflow;_TA2= expand_unique;_TA3= passthrough_consumes;_TA4= e1;{struct Cyc_List_List*_TAE=_cycalloc(sizeof(struct Cyc_List_List));{struct Cyc_CfFlowInfo_Dot_CfFlowInfo_PathCon_struct*_TAF=_cycalloc(sizeof(struct Cyc_CfFlowInfo_Dot_CfFlowInfo_PathCon_struct));_TAF->tag= 0;
# 1853
({__typeof__(Cyc_CfFlowInfo_get_field_index(e1_type,fld))_TB0=Cyc_CfFlowInfo_get_field_index(e1_type,fld);_TAF->f1= _TB0;});_TA6= (struct Cyc_CfFlowInfo_Dot_CfFlowInfo_PathCon_struct*)_TAF;}_TAE->hd= (void*)_TA6;_TAE->tl= path;_TA5= (struct Cyc_List_List*)_TAE;}_TA7= 
# 1852
Cyc_NewControlFlow_anal_Lexp_rec(_TA0,_TA1,_TA2,_TA3,_TA4,_TA5);return _TA7;}}default: _LL1C:{struct _tuple18 _TAE;
# 1856
({__typeof__(Cyc_CfFlowInfo_BottomFL())_TAF=Cyc_CfFlowInfo_BottomFL();_TAE.f0= _TAF;});({__typeof__(Cyc_CfFlowInfo_UnknownL())_TAF=Cyc_CfFlowInfo_UnknownL();_TAE.f1= _TAF;});_TA8= _TAE;}return _TA8;};}}}
# 1860
static struct _tuple18 Cyc_NewControlFlow_anal_Lexp(struct Cyc_NewControlFlow_AnalEnv*env,union Cyc_CfFlowInfo_FlowInfo inflow,long expand_unique,long passthrough_consumes,struct Cyc_Absyn_Exp*e){struct _tuple18 _T0;
# 1862
struct _tuple18 _T1=Cyc_NewControlFlow_anal_Lexp_rec(env,inflow,expand_unique,passthrough_consumes,e,0);union Cyc_CfFlowInfo_AbsLVal _T2;union Cyc_CfFlowInfo_FlowInfo _T3;_T3= _T1.f0;_T2= _T1.f1;{union Cyc_CfFlowInfo_FlowInfo f=_T3;union Cyc_CfFlowInfo_AbsLVal r=_T2;{struct _tuple18 _T4;
_T4.f0= f;_T4.f1= r;_T0= _T4;}return _T0;}}
# 1869
static union Cyc_CfFlowInfo_FlowInfo Cyc_NewControlFlow_expand_unique_places(struct Cyc_NewControlFlow_AnalEnv*env,union Cyc_CfFlowInfo_FlowInfo inflow,struct Cyc_List_List*es){struct Cyc_List_List*_T0;void*_T1;struct Cyc_Absyn_Exp*_T2;long _T3;struct Cyc_NewControlFlow_AnalEnv*_T4;struct Cyc_List_List*_T5;struct Cyc_List_List*_T6;void*_T7;struct Cyc_Absyn_Exp*_T8;void*_T9;void*_TA;long _TB;struct Cyc_NewControlFlow_AnalEnv*_TC;union Cyc_CfFlowInfo_FlowInfo _TD;struct Cyc_List_List*_TE;void*_TF;struct Cyc_Absyn_Exp*_T10;struct Cyc_List_List*_T11;union Cyc_CfFlowInfo_FlowInfo _T12;{
# 1871
struct Cyc_List_List*x=es;_TL1DB: if(x!=0)goto _TL1D9;else{goto _TL1DA;}
# 1874
_TL1D9: _T0= x;_T1= _T0->hd;_T2= (struct Cyc_Absyn_Exp*)_T1;_T3= Cyc_NewControlFlow_is_local_var_rooted_path(_T2,1);if(!_T3)goto _TL1DC;_T4= env;_T5= _T4->aquals_bounds;_T6= x;_T7= _T6->hd;_T8= (struct Cyc_Absyn_Exp*)_T7;_T9= _T8->topt;_TA= 
_check_null(_T9);_TB= Cyc_Tcutil_is_noalias_pointer_or_aggr(_T5,_TA);
# 1874
if(!_TB)goto _TL1DC;_TC= env;_TD= inflow;_TE= x;_TF= _TE->hd;_T10= (struct Cyc_Absyn_Exp*)_TF;{
# 1877
struct _tuple18 _T13=Cyc_NewControlFlow_anal_Lexp(_TC,_TD,1,0,_T10);union Cyc_CfFlowInfo_FlowInfo _T14;_T14= _T13.f0;{union Cyc_CfFlowInfo_FlowInfo f=_T14;
inflow= f;}}goto _TL1DD;_TL1DC: _TL1DD: _T11= x;
# 1871
x= _T11->tl;goto _TL1DB;_TL1DA:;}_T12= inflow;
# 1882
return _T12;}
# 1888
static struct _tuple19 Cyc_NewControlFlow_anal_primop_test(struct Cyc_NewControlFlow_AnalEnv*env,union Cyc_CfFlowInfo_FlowInfo inflow,enum Cyc_Absyn_Primop p,struct Cyc_List_List*es){struct Cyc_NewControlFlow_AnalEnv*_T0;struct Cyc_NewControlFlow_AnalEnv*_T1;union Cyc_CfFlowInfo_FlowInfo _T2;struct Cyc_List_List*_T3;void*_T4;struct Cyc_Absyn_Exp*_T5;struct Cyc_NewControlFlow_AnalEnv*_T6;union Cyc_CfFlowInfo_FlowInfo _T7;struct Cyc_List_List*_T8;struct Cyc_List_List*_T9;struct Cyc_List_List*_TA;void*_TB;struct Cyc_Absyn_Exp*_TC;union Cyc_CfFlowInfo_FlowInfo _TD;struct _union_FlowInfo_BottomFL _TE;unsigned _TF;struct _tuple19 _T10;union Cyc_CfFlowInfo_FlowInfo _T11;struct _union_FlowInfo_ReachableFL _T12;struct Cyc_List_List*_T13;void*_T14;struct Cyc_List_List*_T15;struct Cyc_List_List*_T16;void*_T17;struct Cyc_NewControlFlow_AnalEnv*_T18;struct Cyc_CfFlowInfo_FlowEnv*_T19;struct Cyc_Dict_Dict _T1A;void*_T1B;enum Cyc_CfFlowInfo_InitLevel _T1C;int _T1D;long _T1E;struct Cyc_List_List*_T1F;void*_T20;struct Cyc_Absyn_Exp*_T21;unsigned _T22;struct _fat_ptr _T23;struct _fat_ptr _T24;struct Cyc_NewControlFlow_AnalEnv*_T25;struct Cyc_CfFlowInfo_FlowEnv*_T26;struct Cyc_Dict_Dict _T27;void*_T28;enum Cyc_CfFlowInfo_InitLevel _T29;int _T2A;long _T2B;struct Cyc_List_List*_T2C;struct Cyc_List_List*_T2D;void*_T2E;struct Cyc_Absyn_Exp*_T2F;unsigned _T30;struct _fat_ptr _T31;struct _fat_ptr _T32;enum Cyc_Absyn_Primop _T33;int _T34;enum Cyc_Absyn_Primop _T35;int _T36;struct _tuple0 _T37;void*_T38;int*_T39;unsigned _T3A;void*_T3B;int*_T3C;int _T3D;void*_T3E;enum Cyc_Absyn_Primop _T3F;int _T40;int(*_T41)(struct _fat_ptr,struct _fat_ptr);void*(*_T42)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T43;struct _fat_ptr _T44;void*_T45;int*_T46;unsigned _T47;void*_T48;enum Cyc_Absyn_Primop _T49;int _T4A;int(*_T4B)(struct _fat_ptr,struct _fat_ptr);void*(*_T4C)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T4D;struct _fat_ptr _T4E;enum Cyc_Absyn_Primop _T4F;int _T50;void*_T51;int*_T52;int _T53;void*_T54;int*_T55;int _T56;enum Cyc_Absyn_Primop _T57;int _T58;struct _tuple19 _T59;_T0= env;{
# 1890
struct Cyc_CfFlowInfo_FlowEnv*fenv=_T0->fenv;_T1= env;_T2= inflow;_T3= 
# 1894
_check_null(es);_T4= _T3->hd;_T5= (struct Cyc_Absyn_Exp*)_T4;{struct _tuple14 _T5A=Cyc_NewControlFlow_anal_Rexp(_T1,0,_T2,_T5,0);void*_T5B;union Cyc_CfFlowInfo_FlowInfo _T5C;_T5C= _T5A.f0;_T5B= _T5A.f1;{union Cyc_CfFlowInfo_FlowInfo f1=_T5C;void*r1=_T5B;_T6= env;_T7= f1;_T8= es;_T9= _T8->tl;_TA= 
_check_null(_T9);_TB= _TA->hd;_TC= (struct Cyc_Absyn_Exp*)_TB;{struct _tuple14 _T5D=Cyc_NewControlFlow_anal_Rexp(_T6,0,_T7,_TC,0);void*_T5E;union Cyc_CfFlowInfo_FlowInfo _T5F;_T5F= _T5D.f0;_T5E= _T5D.f1;{union Cyc_CfFlowInfo_FlowInfo f2=_T5F;void*r2=_T5E;
union Cyc_CfFlowInfo_FlowInfo f=f2;struct Cyc_Dict_Dict _T60;_TD= f;_TE= _TD.BottomFL;_TF= _TE.tag;if(_TF!=1)goto _TL1DE;{struct _tuple19 _T61;
# 1901
_T61.f0= f;_T61.f1= f;_T10= _T61;}return _T10;_TL1DE: _T11= f;_T12= _T11.ReachableFL;_T60= _T12.val;{struct Cyc_Dict_Dict d=_T60;_T13= es;_T14= _T13->hd;{
# 1903
struct Cyc_Absyn_Exp*e1=(struct Cyc_Absyn_Exp*)_T14;_T15= es;_T16= _T15->tl;_T17= _T16->hd;{
struct Cyc_Absyn_Exp*e2=(struct Cyc_Absyn_Exp*)_T17;_T18= env;_T19= _T18->fenv;_T1A= d;_T1B= r1;_T1C= 
Cyc_CfFlowInfo_initlevel(_T19,_T1A,_T1B);_T1D= (int)_T1C;if(_T1D!=0)goto _TL1E0;_T1E= Cyc_CfFlowInfo_is_init_pointer(r1);if(_T1E)goto _TL1E0;else{goto _TL1E2;}
_TL1E2: _T1F= es;_T20= _T1F->hd;_T21= (struct Cyc_Absyn_Exp*)_T20;_T22= _T21->loc;_T23= _tag_fat("expression may not be initialized",sizeof(char),34U);_T24= _tag_fat(0U,sizeof(void*),0);Cyc_CfFlowInfo_aerr(_T22,_T23,_T24);goto _TL1E1;_TL1E0: _TL1E1: _T25= env;_T26= _T25->fenv;_T27= d;_T28= r2;_T29= 
Cyc_CfFlowInfo_initlevel(_T26,_T27,_T28);_T2A= (int)_T29;if(_T2A!=0)goto _TL1E3;_T2B= Cyc_CfFlowInfo_is_init_pointer(r1);if(_T2B)goto _TL1E3;else{goto _TL1E5;}
_TL1E5: _T2C= es;_T2D= _T2C->tl;_T2E= _T2D->hd;_T2F= (struct Cyc_Absyn_Exp*)_T2E;_T30= _T2F->loc;_T31= _tag_fat("expression may not be initialized",sizeof(char),34U);_T32= _tag_fat(0U,sizeof(void*),0);Cyc_CfFlowInfo_aerr(_T30,_T31,_T32);goto _TL1E4;_TL1E3: _TL1E4: {
# 1910
union Cyc_CfFlowInfo_FlowInfo ft=f;
union Cyc_CfFlowInfo_FlowInfo ff=f;_T33= p;_T34= (int)_T33;
# 1915
if(_T34==5)goto _TL1E8;else{goto _TL1E9;}_TL1E9: _T35= p;_T36= (int)_T35;if(_T36==6)goto _TL1E8;else{goto _TL1E6;}
_TL1E8:{struct _tuple13 _T61=Cyc_CfFlowInfo_unname_rval(r1);struct Cyc_List_List*_T62;void*_T63;_T63= _T61.f0;_T62= _T61.f1;{void*r1=_T63;struct Cyc_List_List*r1n=_T62;
struct _tuple13 _T64=Cyc_CfFlowInfo_unname_rval(r2);struct Cyc_List_List*_T65;void*_T66;_T66= _T64.f0;_T65= _T64.f1;{void*r2=_T66;struct Cyc_List_List*r2n=_T65;{struct _tuple0 _T67;
_T67.f0= r1;_T67.f1= r2;_T37= _T67;}{struct _tuple0 _T67=_T37;enum Cyc_CfFlowInfo_InitLevel _T68;_T38= _T67.f0;_T39= (int*)_T38;_T3A= *_T39;switch(_T3A){case 2: _T3B= _T67.f1;_T3C= (int*)_T3B;_T3D= *_T3C;if(_T3D!=0)goto _TL1EB;_T3E= _T67.f0;{struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct*_T69=(struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct*)_T3E;_T68= _T69->f1;}{enum Cyc_CfFlowInfo_InitLevel il=_T68;
# 1920
struct _tuple19 _T69=Cyc_NewControlFlow_splitzero(env,inflow,f,e1,il,r1n);union Cyc_CfFlowInfo_FlowInfo _T6A;union Cyc_CfFlowInfo_FlowInfo _T6B;_T6B= _T69.f0;_T6A= _T69.f1;{union Cyc_CfFlowInfo_FlowInfo f1=_T6B;union Cyc_CfFlowInfo_FlowInfo f2=_T6A;_T3F= p;_T40= (int)_T3F;switch(_T40){case Cyc_Absyn_Eq:
# 1923
 ft= f2;
ff= f1;goto _LL25;case Cyc_Absyn_Neq:
# 1927
 ft= f1;
ff= f2;goto _LL25;default: _T42= Cyc_Warn_impos;{
# 1931
int(*_T6C)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T42;_T41= _T6C;}_T43= _tag_fat("anal_test, zero-split",sizeof(char),22U);_T44= _tag_fat(0U,sizeof(void*),0);_T41(_T43,_T44);}_LL25: goto _LL11;}}_TL1EB: goto _LL20;case 0: _T45= _T67.f1;_T46= (int*)_T45;_T47= *_T46;switch(_T47){case 2: _T48= _T67.f1;{struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct*_T69=(struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct*)_T48;_T68= _T69->f1;}{enum Cyc_CfFlowInfo_InitLevel il=_T68;
# 1935
struct _tuple19 _T69=Cyc_NewControlFlow_splitzero(env,f2,f,e2,il,r2n);union Cyc_CfFlowInfo_FlowInfo _T6A;union Cyc_CfFlowInfo_FlowInfo _T6B;_T6B= _T69.f0;_T6A= _T69.f1;{union Cyc_CfFlowInfo_FlowInfo f1=_T6B;union Cyc_CfFlowInfo_FlowInfo f2=_T6A;_T49= p;_T4A= (int)_T49;switch(_T4A){case Cyc_Absyn_Eq:
# 1938
 ft= f2;
ff= f1;goto _LL2F;case Cyc_Absyn_Neq:
# 1942
 ft= f1;
ff= f2;goto _LL2F;default: _T4C= Cyc_Warn_impos;{
# 1946
int(*_T6C)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T4C;_T4B= _T6C;}_T4D= _tag_fat("anal_test, zero-split",sizeof(char),22U);_T4E= _tag_fat(0U,sizeof(void*),0);_T4B(_T4D,_T4E);}_LL2F: goto _LL11;}}case 0: _T4F= p;_T50= (int)_T4F;
# 1950
if(_T50!=5)goto _TL1F0;
ff= Cyc_CfFlowInfo_BottomFL();goto _TL1F1;
# 1953
_TL1F0: ft= Cyc_CfFlowInfo_BottomFL();_TL1F1: goto _LL11;case 1: goto _LL1B;case 4: _LL1B: goto _LL1D;default: goto _LL20;};case 1: _T51= _T67.f1;_T52= (int*)_T51;_T53= *_T52;if(_T53!=0)goto _TL1F2;_LL1D: goto _LL1F;_TL1F2: goto _LL20;case 4: _T54= _T67.f1;_T55= (int*)_T54;_T56= *_T55;if(_T56!=0)goto _TL1F4;_LL1F: _T57= p;_T58= (int)_T57;
# 1962
if(_T58!=6)goto _TL1F6;
ff= Cyc_CfFlowInfo_BottomFL();goto _TL1F7;
# 1965
_TL1F6: ft= Cyc_CfFlowInfo_BottomFL();_TL1F7: goto _LL11;_TL1F4: goto _LL20;default: _LL20: goto _LL11;}_LL11:;}}}}goto _TL1E7;_TL1E6: _TL1E7:{struct _tuple19 _T61;
# 1972
_T61.f0= ft;_T61.f1= ff;_T59= _T61;}return _T59;}}}};}}}}}}
# 1978
static struct _tuple19 Cyc_NewControlFlow_anal_test(struct Cyc_NewControlFlow_AnalEnv*env,union Cyc_CfFlowInfo_FlowInfo inflow,struct Cyc_Absyn_Exp*e){struct Cyc_NewControlFlow_AnalEnv*_T0;struct Cyc_Absyn_Exp*_T1;int*_T2;unsigned _T3;struct _tuple19 _T4;struct _tuple19 _T5;struct _tuple19 _T6;struct _tuple19 _T7;struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*_T8;enum Cyc_Absyn_Primop _T9;struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*_TA;struct Cyc_List_List*_TB;struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*_TC;struct Cyc_List_List*_TD;struct Cyc_List_List*_TE;struct Cyc_List_List*_TF;struct Cyc_List_List*_T10;void*_T11;struct _tuple19 _T12;struct _tuple19 _T13;union Cyc_CfFlowInfo_FlowInfo _T14;struct _union_FlowInfo_BottomFL _T15;unsigned _T16;struct _tuple19 _T17;union Cyc_CfFlowInfo_FlowInfo _T18;struct _union_FlowInfo_ReachableFL _T19;void*_T1A;int*_T1B;unsigned _T1C;void*_T1D;void*_T1E;int(*_T1F)(struct _fat_ptr,struct _fat_ptr);void*(*_T20)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T21;struct _fat_ptr _T22;struct _tuple19 _T23;struct _tuple19 _T24;void*_T25;struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct*_T26;enum Cyc_CfFlowInfo_InitLevel _T27;void*_T28;struct _tuple19 _T29;void*_T2A;struct Cyc_CfFlowInfo_Esc_CfFlowInfo_AbsRVal_struct*_T2B;enum Cyc_CfFlowInfo_InitLevel _T2C;struct _tuple19 _T2D;struct Cyc_Absyn_Exp*_T2E;unsigned _T2F;struct _fat_ptr _T30;struct _fat_ptr _T31;struct _tuple19 _T32;int(*_T33)(struct _fat_ptr,struct _fat_ptr);void*(*_T34)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T35;struct _fat_ptr _T36;_T0= env;{
struct Cyc_CfFlowInfo_FlowEnv*fenv=_T0->fenv;_T1= e;{
# 1981
void*_T37=_T1->r;struct Cyc_List_List*_T38;enum Cyc_Absyn_Primop _T39;struct Cyc_Absyn_Exp*_T3A;struct Cyc_Absyn_Exp*_T3B;struct Cyc_Absyn_Exp*_T3C;_T2= (int*)_T37;_T3= *_T2;switch(_T3){case 6:{struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct*_T3D=(struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct*)_T37;_T3C= _T3D->f1;_T3B= _T3D->f2;_T3A= _T3D->f3;}{struct Cyc_Absyn_Exp*e1=_T3C;struct Cyc_Absyn_Exp*e2=_T3B;struct Cyc_Absyn_Exp*e3=_T3A;
# 1983
struct _tuple19 _T3D=Cyc_NewControlFlow_anal_test(env,inflow,e1);union Cyc_CfFlowInfo_FlowInfo _T3E;union Cyc_CfFlowInfo_FlowInfo _T3F;_T3F= _T3D.f0;_T3E= _T3D.f1;{union Cyc_CfFlowInfo_FlowInfo f1t=_T3F;union Cyc_CfFlowInfo_FlowInfo f1f=_T3E;
struct _tuple19 _T40=Cyc_NewControlFlow_anal_test(env,f1t,e2);union Cyc_CfFlowInfo_FlowInfo _T41;union Cyc_CfFlowInfo_FlowInfo _T42;_T42= _T40.f0;_T41= _T40.f1;{union Cyc_CfFlowInfo_FlowInfo f2t=_T42;union Cyc_CfFlowInfo_FlowInfo f2f=_T41;
struct _tuple19 _T43=Cyc_NewControlFlow_anal_test(env,f1f,e3);union Cyc_CfFlowInfo_FlowInfo _T44;union Cyc_CfFlowInfo_FlowInfo _T45;_T45= _T43.f0;_T44= _T43.f1;{union Cyc_CfFlowInfo_FlowInfo f3t=_T45;union Cyc_CfFlowInfo_FlowInfo f3f=_T44;{struct _tuple19 _T46;
({__typeof__(Cyc_CfFlowInfo_join_flow(fenv,f2t,f3t))_T47=Cyc_CfFlowInfo_join_flow(fenv,f2t,f3t);_T46.f0= _T47;});({__typeof__(Cyc_CfFlowInfo_join_flow(fenv,f2f,f3f))_T47=Cyc_CfFlowInfo_join_flow(fenv,f2f,f3f);_T46.f1= _T47;});_T4= _T46;}return _T4;}}}}case 7:{struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*_T3D=(struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*)_T37;_T3C= _T3D->f1;_T3B= _T3D->f2;}{struct Cyc_Absyn_Exp*e1=_T3C;struct Cyc_Absyn_Exp*e2=_T3B;
# 1988
struct _tuple19 _T3D=Cyc_NewControlFlow_anal_test(env,inflow,e1);union Cyc_CfFlowInfo_FlowInfo _T3E;union Cyc_CfFlowInfo_FlowInfo _T3F;_T3F= _T3D.f0;_T3E= _T3D.f1;{union Cyc_CfFlowInfo_FlowInfo f1t=_T3F;union Cyc_CfFlowInfo_FlowInfo f1f=_T3E;
struct _tuple19 _T40=Cyc_NewControlFlow_anal_test(env,f1t,e2);union Cyc_CfFlowInfo_FlowInfo _T41;union Cyc_CfFlowInfo_FlowInfo _T42;_T42= _T40.f0;_T41= _T40.f1;{union Cyc_CfFlowInfo_FlowInfo f2t=_T42;union Cyc_CfFlowInfo_FlowInfo f2f=_T41;{struct _tuple19 _T43;
_T43.f0= f2t;({__typeof__(Cyc_CfFlowInfo_join_flow(fenv,f1f,f2f))_T44=Cyc_CfFlowInfo_join_flow(fenv,f1f,f2f);_T43.f1= _T44;});_T5= _T43;}return _T5;}}}case 8:{struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*_T3D=(struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*)_T37;_T3C= _T3D->f1;_T3B= _T3D->f2;}{struct Cyc_Absyn_Exp*e1=_T3C;struct Cyc_Absyn_Exp*e2=_T3B;
# 1992
struct _tuple19 _T3D=Cyc_NewControlFlow_anal_test(env,inflow,e1);union Cyc_CfFlowInfo_FlowInfo _T3E;union Cyc_CfFlowInfo_FlowInfo _T3F;_T3F= _T3D.f0;_T3E= _T3D.f1;{union Cyc_CfFlowInfo_FlowInfo f1t=_T3F;union Cyc_CfFlowInfo_FlowInfo f1f=_T3E;
struct _tuple19 _T40=Cyc_NewControlFlow_anal_test(env,f1f,e2);union Cyc_CfFlowInfo_FlowInfo _T41;union Cyc_CfFlowInfo_FlowInfo _T42;_T42= _T40.f0;_T41= _T40.f1;{union Cyc_CfFlowInfo_FlowInfo f2t=_T42;union Cyc_CfFlowInfo_FlowInfo f2f=_T41;{struct _tuple19 _T43;
({__typeof__(Cyc_CfFlowInfo_join_flow(fenv,f1t,f2t))_T44=Cyc_CfFlowInfo_join_flow(fenv,f1t,f2t);_T43.f0= _T44;});_T43.f1= f2f;_T6= _T43;}return _T6;}}}case 9:{struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct*_T3D=(struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct*)_T37;_T3C= _T3D->f1;_T3B= _T3D->f2;}{struct Cyc_Absyn_Exp*e1=_T3C;struct Cyc_Absyn_Exp*e2=_T3B;
# 1996
struct _tuple14 _T3D=Cyc_NewControlFlow_anal_Rexp(env,0,inflow,e1,0);void*_T3E;union Cyc_CfFlowInfo_FlowInfo _T3F;_T3F= _T3D.f0;_T3E= _T3D.f1;{union Cyc_CfFlowInfo_FlowInfo f=_T3F;void*r=_T3E;_T7= 
Cyc_NewControlFlow_anal_test(env,f,e2);return _T7;}}case 3: _T8= (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*)_T37;_T9= _T8->f1;if(_T9!=Cyc_Absyn_Not)goto _TL1F9;_TA= (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*)_T37;_TB= _TA->f2;if(_TB==0)goto _TL1FB;_TC= (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*)_T37;_TD= _TC->f2;_TE= (struct Cyc_List_List*)_TD;_TF= _TE->tl;if(_TF!=0)goto _TL1FD;{struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*_T3D=(struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*)_T37;_T10= _T3D->f2;{struct Cyc_List_List _T3E=*_T10;_T11= _T3E.hd;_T3C= (struct Cyc_Absyn_Exp*)_T11;}}{struct Cyc_Absyn_Exp*e1=_T3C;
# 1999
struct _tuple19 _T3D=Cyc_NewControlFlow_anal_test(env,inflow,e1);union Cyc_CfFlowInfo_FlowInfo _T3E;union Cyc_CfFlowInfo_FlowInfo _T3F;_T3F= _T3D.f0;_T3E= _T3D.f1;{union Cyc_CfFlowInfo_FlowInfo f1=_T3F;union Cyc_CfFlowInfo_FlowInfo f2=_T3E;{struct _tuple19 _T40;
_T40.f0= f2;_T40.f1= f1;_T12= _T40;}return _T12;}}_TL1FD: goto _LLB;_TL1FB: goto _LLB;_TL1F9: _LLB:{struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*_T3D=(struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*)_T37;_T39= _T3D->f1;_T38= _T3D->f2;}{enum Cyc_Absyn_Primop p=_T39;struct Cyc_List_List*es=_T38;_T13= 
# 2002
Cyc_NewControlFlow_anal_primop_test(env,inflow,p,es);return _T13;}default:  {
# 2006
struct _tuple14 _T3D=Cyc_NewControlFlow_anal_Rexp(env,0,inflow,e,0);void*_T3E;union Cyc_CfFlowInfo_FlowInfo _T3F;_T3F= _T3D.f0;_T3E= _T3D.f1;{union Cyc_CfFlowInfo_FlowInfo f=_T3F;void*r=_T3E;struct Cyc_Dict_Dict _T40;_T14= f;_T15= _T14.BottomFL;_T16= _T15.tag;if(_T16!=1)goto _TL1FF;{struct _tuple19 _T41;
# 2009
_T41.f0= f;_T41.f1= f;_T17= _T41;}return _T17;_TL1FF: _T18= f;_T19= _T18.ReachableFL;_T40= _T19.val;{struct Cyc_Dict_Dict d=_T40;
# 2011
struct _tuple13 _T41=Cyc_CfFlowInfo_unname_rval(r);struct Cyc_List_List*_T42;void*_T43;_T43= _T41.f0;_T42= _T41.f1;{void*r=_T43;struct Cyc_List_List*names=_T42;enum Cyc_CfFlowInfo_InitLevel _T44;void*_T45;struct Cyc_Absyn_Vardecl*_T46;_T1A= r;_T1B= (int*)_T1A;_T1C= *_T1B;switch(_T1C){case 8: _T1D= r;{struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*_T47=(struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*)_T1D;_T46= _T47->f1;_T1E= _T47->f2;_T45= (void*)_T1E;}{struct Cyc_Absyn_Vardecl*n=_T46;void*r2=_T45;_T20= Cyc_Warn_impos;{
# 2014
int(*_T47)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T20;_T1F= _T47;}_T21= _tag_fat("anal_test: bad namedlocation",sizeof(char),29U);_T22= _tag_fat(0U,sizeof(void*),0);_T1F(_T21,_T22);}case 0:{struct _tuple19 _T47;
# 2016
({__typeof__(Cyc_CfFlowInfo_BottomFL())_T48=Cyc_CfFlowInfo_BottomFL();_T47.f0= _T48;});_T47.f1= f;_T23= _T47;}return _T23;case 1: goto _LL3D;case 5: _LL3D: goto _LL3F;case 4: _LL3F:{struct _tuple19 _T47;
# 2020
_T47.f0= f;({__typeof__(Cyc_CfFlowInfo_BottomFL())_T48=Cyc_CfFlowInfo_BottomFL();_T47.f1= _T48;});_T24= _T47;}return _T24;case 2: _T25= r;_T26= (struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct*)_T25;_T27= _T26->f1;if(_T27!=Cyc_CfFlowInfo_NoneIL)goto _TL202;goto _LL43;_TL202: _T28= r;{struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct*_T47=(struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct*)_T28;_T44= _T47->f1;}{enum Cyc_CfFlowInfo_InitLevel il=_T44;_T29= 
# 2027
Cyc_NewControlFlow_splitzero(env,inflow,f,e,il,names);return _T29;}case 3: _T2A= r;_T2B= (struct Cyc_CfFlowInfo_Esc_CfFlowInfo_AbsRVal_struct*)_T2A;_T2C= _T2B->f1;if(_T2C!=Cyc_CfFlowInfo_NoneIL)goto _TL204;_LL43: goto _LL45;_TL204:{struct _tuple19 _T47;
# 2029
_T47.f0= f;_T47.f1= f;_T2D= _T47;}return _T2D;case 7: _LL45: _T2E= e;_T2F= _T2E->loc;_T30= 
# 2024
_tag_fat("expression may not be initialized",sizeof(char),34U);_T31= _tag_fat(0U,sizeof(void*),0);Cyc_CfFlowInfo_aerr(_T2F,_T30,_T31);{struct _tuple19 _T47;
({__typeof__(Cyc_CfFlowInfo_BottomFL())_T48=Cyc_CfFlowInfo_BottomFL();_T47.f0= _T48;});({__typeof__(Cyc_CfFlowInfo_BottomFL())_T48=Cyc_CfFlowInfo_BottomFL();_T47.f1= _T48;});_T32= _T47;}return _T32;default: _T34= Cyc_Warn_impos;{
# 2031
int(*_T47)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T34;_T33= _T47;}_T35= _tag_fat("anal_test",sizeof(char),10U);_T36= _tag_fat(0U,sizeof(void*),0);_T33(_T35,_T36);};}};}}};}}}struct _tuple27{unsigned f0;struct Cyc_NewControlFlow_AnalEnv*f1;struct Cyc_Dict_Dict f2;};
# 2037
static void Cyc_NewControlFlow_check_for_unused_unique(struct _tuple27*ckenv,void*root,void*rval){struct _tuple27*_T0;void*_T1;int*_T2;int _T3;void*_T4;struct Cyc_NewControlFlow_AnalEnv*_T5;struct Cyc_List_List*_T6;struct Cyc_Absyn_Vardecl*_T7;void*_T8;long _T9;void*_TA;int*_TB;unsigned _TC;void*_TD;struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct*_TE;enum Cyc_CfFlowInfo_InitLevel _TF;struct Cyc_String_pa_PrintArg_struct _T10;struct Cyc_Absyn_Vardecl*_T11;struct _tuple2*_T12;unsigned _T13;struct _fat_ptr _T14;struct _fat_ptr _T15;struct Cyc_Dict_Dict _T16;struct Cyc_NewControlFlow_AnalEnv*_T17;unsigned _T18;_T0= ckenv;{struct _tuple27 _T19=*_T0;_T18= _T19.f0;_T17= _T19.f1;_T16= _T19.f2;}{unsigned loc=_T18;struct Cyc_NewControlFlow_AnalEnv*env=_T17;struct Cyc_Dict_Dict fd=_T16;struct Cyc_Absyn_Vardecl*_T19;_T1= root;_T2= (int*)_T1;_T3= *_T2;if(_T3!=0)goto _TL206;_T4= root;{struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*_T1A=(struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*)_T4;_T19= _T1A->f1;}{struct Cyc_Absyn_Vardecl*vd=_T19;_T5= env;_T6= _T5->aquals_bounds;_T7= vd;_T8= _T7->type;_T9= 
# 2042
Cyc_Tcutil_is_noalias_pointer_or_aggr(_T6,_T8);if(!_T9)goto _TL208;{
struct _tuple13 _T1A=Cyc_CfFlowInfo_unname_rval(rval);void*_T1B;_T1B= _T1A.f0;{void*rval=_T1B;_TA= rval;_TB= (int*)_TA;_TC= *_TB;switch(_TC){case 7: goto _LLF;case 0: _LLF: goto _LL11;case 2: _TD= rval;_TE= (struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct*)_TD;_TF= _TE->f1;if(_TF!=Cyc_CfFlowInfo_NoneIL)goto _TL20B;_LL11: goto _LLB;_TL20B: goto _LL12;default: _LL12:{struct Cyc_String_pa_PrintArg_struct _T1C;_T1C.tag= 0;_T11= vd;_T12= _T11->name;
# 2051
({__typeof__(Cyc_Absynpp_qvar2string(_T12))_T1D=Cyc_Absynpp_qvar2string(_T12);_T1C.f1= _T1D;});_T10= _T1C;}{struct Cyc_String_pa_PrintArg_struct _T1C=_T10;void*_T1D[1];_T1D[0]= & _T1C;_T13= loc;_T14= 
# 2050
_tag_fat("unique pointers reachable from %s may become unreachable",sizeof(char),57U);_T15= _tag_fat(_T1D,sizeof(void*),1);Cyc_Warn_warn(_T13,_T14,_T15);}goto _LLB;}_LLB:;}}goto _TL209;_TL208: _TL209: goto _LL3;}_TL206: goto _LL3;_LL3:;}}
# 2061
static void Cyc_NewControlFlow_check_init_params(unsigned loc,struct Cyc_NewControlFlow_AnalEnv*env,union Cyc_CfFlowInfo_FlowInfo flow){union Cyc_CfFlowInfo_FlowInfo _T0;struct _union_FlowInfo_BottomFL _T1;unsigned _T2;union Cyc_CfFlowInfo_FlowInfo _T3;struct _union_FlowInfo_ReachableFL _T4;struct Cyc_NewControlFlow_AnalEnv*_T5;struct Cyc_NewControlFlow_AnalEnv*_T6;struct Cyc_CfFlowInfo_FlowEnv*_T7;struct Cyc_Dict_Dict _T8;struct Cyc_Dict_Dict _T9;struct Cyc_List_List*_TA;void*_TB;struct Cyc_CfFlowInfo_Place*_TC;void*_TD;enum Cyc_CfFlowInfo_InitLevel _TE;int _TF;unsigned _T10;struct _fat_ptr _T11;struct _fat_ptr _T12;struct Cyc_List_List*_T13;long _T14;struct _tuple27 _T15;void(*_T16)(void(*)(struct _tuple27*,void*,void*),struct _tuple27*,struct Cyc_Dict_Dict);void(*_T17)(void(*)(void*,void*,void*),void*,struct Cyc_Dict_Dict);struct _tuple27*_T18;struct _tuple27*_T19;struct Cyc_Dict_Dict _T1A;struct Cyc_Dict_Dict _T1B;_T0= flow;_T1= _T0.BottomFL;_T2= _T1.tag;if(_T2!=1)goto _TL20D;goto _LL0;_TL20D: _T3= flow;_T4= _T3.ReachableFL;_T1B= _T4.val;{struct Cyc_Dict_Dict d=_T1B;_T5= env;{
# 2066
struct Cyc_List_List*inits=_T5->param_roots;_TL212: if(inits!=0)goto _TL210;else{goto _TL211;}
_TL210: _T6= env;_T7= _T6->fenv;_T8= d;_T9= d;_TA= inits;_TB= _TA->hd;_TC= (struct Cyc_CfFlowInfo_Place*)_TB;_TD= Cyc_CfFlowInfo_lookup_place(_T9,_TC);_TE= Cyc_CfFlowInfo_initlevel(_T7,_T8,_TD);_TF= (int)_TE;if(_TF==1)goto _TL213;_T10= loc;_T11= 
# 2070
_tag_fat("function may not initialize all the parameters with attribute 'initializes'",sizeof(char),76U);_T12= _tag_fat(0U,sizeof(void*),0);
# 2068
Cyc_CfFlowInfo_aerr(_T10,_T11,_T12);goto _TL214;_TL213: _TL214: _T13= inits;
# 2066
inits= _T13->tl;goto _TL212;_TL211:;}_T14= Cyc_Flags_warn_lose_unique;
# 2071
if(!_T14)goto _TL215;{struct _tuple27 _T1C;
_T1C.f0= loc;_T1C.f1= env;_T1C.f2= d;_T15= _T1C;}{struct _tuple27 check_env=_T15;_T17= Cyc_Dict_iter_c;{
void(*_T1C)(void(*)(struct _tuple27*,void*,void*),struct _tuple27*,struct Cyc_Dict_Dict)=(void(*)(void(*)(struct _tuple27*,void*,void*),struct _tuple27*,struct Cyc_Dict_Dict))_T17;_T16= _T1C;}_T18= & check_env;_T19= (struct _tuple27*)_T18;_T1A= d;_T16(Cyc_NewControlFlow_check_for_unused_unique,_T19,_T1A);}goto _TL216;_TL215: _TL216: goto _LL0;}_LL0:;}
# 2083
static struct _tuple1 Cyc_NewControlFlow_get_unconsume_pat_vars(struct Cyc_NewControlFlow_AnalEnv*env,struct Cyc_List_List*vds){struct Cyc_List_List*_T0;void*_T1;struct Cyc_NewControlFlow_AnalEnv*_T2;struct Cyc_List_List*_T3;struct Cyc_Absyn_Exp*_T4;void*_T5;void*_T6;long _T7;struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*_T8;struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*_T9;struct Cyc_Absyn_Vardecl**_TA;struct Cyc_CfFlowInfo_Place*_TB;struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*_TC;struct Cyc_CfFlowInfo_Place*_TD;struct Cyc_List_List*_TE;struct Cyc_List_List*_TF;struct Cyc_List_List*_T10;struct _tuple1 _T11;
# 2085
struct Cyc_List_List*roots=0;
struct Cyc_List_List*es=0;{
# 2088
struct Cyc_List_List*x=vds;_TL21A: if(x!=0)goto _TL218;else{goto _TL219;}
_TL218: _T0= x;_T1= _T0->hd;{struct _tuple24*_T12=(struct _tuple24*)_T1;struct Cyc_Absyn_Exp*_T13;struct Cyc_Absyn_Vardecl**_T14;{struct _tuple24 _T15=*_T12;_T14= _T15.f0;_T13= _T15.f1;}{struct Cyc_Absyn_Vardecl**vopt=_T14;struct Cyc_Absyn_Exp*eopt=_T13;
if(vopt==0)goto _TL21B;if(eopt==0)goto _TL21B;_T2= env;_T3= _T2->aquals_bounds;_T4= eopt;_T5= _T4->topt;_T6= 
_check_null(_T5);_T7= Cyc_Tcutil_is_noalias_pointer(_T3,_T6,0);
# 2090
if(!_T7)goto _TL21B;{
# 2092
struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*root;root= _cycalloc(sizeof(struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct));_T8= root;_T8->tag= 0;_T9= root;_TA= vopt;_T9->f1= *_TA;{
struct Cyc_CfFlowInfo_Place*rp;rp= _cycalloc(sizeof(struct Cyc_CfFlowInfo_Place));_TB= rp;_TC= root;_TB->root= (void*)_TC;_TD= rp;_TD->path= 0;{struct Cyc_List_List*_T15=_cycalloc(sizeof(struct Cyc_List_List));
_T15->hd= rp;_T15->tl= roots;_TE= (struct Cyc_List_List*)_T15;}roots= _TE;{struct Cyc_List_List*_T15=_cycalloc(sizeof(struct Cyc_List_List));
_T15->hd= eopt;_T15->tl= es;_TF= (struct Cyc_List_List*)_T15;}es= _TF;}}goto _TL21C;_TL21B: _TL21C:;}}_T10= x;
# 2088
x= _T10->tl;goto _TL21A;_TL219:;}{struct _tuple1 _T12;
# 2098
_T12.f0= roots;_T12.f1= es;_T11= _T12;}return _T11;}struct _tuple28{long f0;void*f1;};
# 2104
static struct _tuple28 Cyc_NewControlFlow_noconsume_place_ok(struct Cyc_NewControlFlow_AnalEnv*env,struct Cyc_CfFlowInfo_Place*place,long do_unconsume,struct Cyc_Absyn_Vardecl*vd,union Cyc_CfFlowInfo_FlowInfo flow,unsigned loc){union Cyc_CfFlowInfo_FlowInfo _T0;struct _union_FlowInfo_BottomFL _T1;unsigned _T2;int(*_T3)(struct _fat_ptr,struct _fat_ptr);void*(*_T4)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T5;struct _fat_ptr _T6;union Cyc_CfFlowInfo_FlowInfo _T7;struct _union_FlowInfo_ReachableFL _T8;void*_T9;int*_TA;int _TB;void*_TC;void*_TD;struct Cyc_NewControlFlow_AnalEnv*_TE;struct Cyc_List_List*_TF;struct Cyc_Absyn_Vardecl*_T10;void*_T11;long _T12;struct Cyc_Absyn_Exp*_T13;int _T14;void*_T15;long*_T16;long _T17;long _T18;struct Cyc_String_pa_PrintArg_struct _T19;struct Cyc_Absyn_Vardecl*_T1A;struct _tuple2*_T1B;unsigned _T1C;struct _fat_ptr _T1D;struct _fat_ptr _T1E;struct Cyc_NewControlFlow_AnalEnv*_T1F;struct Cyc_CfFlowInfo_FlowEnv*_T20;struct Cyc_Dict_Dict _T21;void*_T22;enum Cyc_CfFlowInfo_InitLevel _T23;int _T24;long _T25;struct Cyc_String_pa_PrintArg_struct _T26;struct Cyc_Absyn_Vardecl*_T27;struct _tuple2*_T28;unsigned _T29;struct _fat_ptr _T2A;struct _fat_ptr _T2B;struct Cyc_NewControlFlow_AnalEnv*_T2C;struct Cyc_List_List*_T2D;struct Cyc_Absyn_Vardecl*_T2E;void*_T2F;long _T30;long _T31;struct Cyc_String_pa_PrintArg_struct _T32;struct Cyc_Absyn_Vardecl*_T33;struct _tuple2*_T34;unsigned _T35;struct _fat_ptr _T36;struct _fat_ptr _T37;struct _tuple28 _T38;struct Cyc_Dict_Dict _T39;_T0= flow;_T1= _T0.BottomFL;_T2= _T1.tag;if(_T2!=1)goto _TL21D;_T4= Cyc_Warn_impos;{
# 2108
int(*_T3A)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T4;_T3= _T3A;}_T5= _tag_fat("noconsume_place_ok: flow became Bottom!",sizeof(char),40U);_T6= _tag_fat(0U,sizeof(void*),0);_T3(_T5,_T6);goto _TL21E;_TL21D: _T7= flow;_T8= _T7.ReachableFL;_T39= _T8.val;{struct Cyc_Dict_Dict d=_T39;
# 2115
struct Cyc_Absyn_Exp*bogus_exp=Cyc_Absyn_uint_exp(1U,0U);
long bogus_bool=0;
int bogus_int=1;
void*curr_rval=Cyc_CfFlowInfo_lookup_place(d,place);
void*rval=curr_rval;
# 2127
long varok=0;{void*_T3A;struct Cyc_Absyn_Vardecl*_T3B;_T9= curr_rval;_TA= (int*)_T9;_TB= *_TA;if(_TB!=8)goto _TL21F;_TC= curr_rval;{struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*_T3C=(struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*)_TC;_T3B= _T3C->f1;_TD= _T3C->f2;_T3A= (void*)_TD;}{struct Cyc_Absyn_Vardecl*n=_T3B;void*r=_T3A;
# 2130
if(vd!=n)goto _TL221;
rval= r;_TE= env;_TF= _TE->aquals_bounds;_T10= vd;_T11= _T10->type;_T12= 
# 2133
Cyc_Tcutil_is_noalias_pointer_or_aggr(_TF,_T11);if(!_T12)goto _TL223;_T13= bogus_exp;_T14= bogus_int;_T15= rval;_T16= & bogus_bool;_T17= 
# 2135
Cyc_CfFlowInfo_is_unique_consumed(_T13,_T14,_T15,_T16);if(!_T17)goto _TL225;_T18= do_unconsume;
if(_T18)goto _TL227;else{goto _TL229;}
_TL229:{struct Cyc_String_pa_PrintArg_struct _T3C;_T3C.tag= 0;_T1A= vd;_T1B= _T1A->name;
# 2140
({__typeof__(Cyc_Absynpp_qvar2string(_T1B))_T3D=Cyc_Absynpp_qvar2string(_T1B);_T3C.f1= _T3D;});_T19= _T3C;}{struct Cyc_String_pa_PrintArg_struct _T3C=_T19;void*_T3D[1];_T3D[0]= & _T3C;_T1C= loc;_T1D= 
# 2139
_tag_fat("function consumes parameter %s which is does not have the 'consume' attribute",sizeof(char),78U);_T1E= _tag_fat(_T3D,sizeof(void*),1);Cyc_CfFlowInfo_aerr(_T1C,_T1D,_T1E);}goto _TL228;_TL227: _TL228: goto _TL226;
# 2143
_TL225: _T1F= env;_T20= _T1F->fenv;_T21= d;_T22= rval;_T23= Cyc_CfFlowInfo_initlevel(_T20,_T21,_T22);_T24= (int)_T23;if(_T24==1)goto _TL22A;_T25= do_unconsume;if(_T25)goto _TL22A;else{goto _TL22C;}
_TL22C:{struct Cyc_String_pa_PrintArg_struct _T3C;_T3C.tag= 0;_T27= vd;_T28= _T27->name;
# 2147
({__typeof__(Cyc_Absynpp_qvar2string(_T28))_T3D=Cyc_Absynpp_qvar2string(_T28);_T3C.f1= _T3D;});_T26= _T3C;}{struct Cyc_String_pa_PrintArg_struct _T3C=_T26;void*_T3D[1];_T3D[0]= & _T3C;_T29= loc;_T2A= 
# 2146
_tag_fat("function consumes value pointed to by parameter %s, which does not have the 'consume' attribute",sizeof(char),96U);_T2B= _tag_fat(_T3D,sizeof(void*),1);Cyc_CfFlowInfo_aerr(_T29,_T2A,_T2B);}goto _TL22B;
# 2150
_TL22A: varok= 1;_TL22B: _TL226: goto _TL224;
# 2154
_TL223: varok= 1;_TL224: goto _TL222;
# 2158
_TL221: goto _LL9;_TL222: goto _LL5;}_TL21F: _LL9: _T2C= env;_T2D= _T2C->aquals_bounds;_T2E= vd;_T2F= _T2E->type;_T30= 
# 2162
Cyc_Tcutil_is_noalias_pointer_or_aggr(_T2D,_T2F);if(_T30)goto _TL22D;else{goto _TL22F;}
_TL22F: varok= 1;goto _TL22E;
_TL22D: _T31= do_unconsume;if(_T31)goto _TL230;else{goto _TL232;}
_TL232:{struct Cyc_String_pa_PrintArg_struct _T3C;_T3C.tag= 0;_T33= vd;_T34= _T33->name;
# 2168
({__typeof__(Cyc_Absynpp_qvar2string(_T34))_T3D=Cyc_Absynpp_qvar2string(_T34);_T3C.f1= _T3D;});_T32= _T3C;}{struct Cyc_String_pa_PrintArg_struct _T3C=_T32;void*_T3D[1];_T3D[0]= & _T3C;_T35= loc;_T36= 
# 2167
_tag_fat("function parameter %s without 'consume' attribute no longer set to its original value",sizeof(char),86U);_T37= _tag_fat(_T3D,sizeof(void*),1);Cyc_CfFlowInfo_aerr(_T35,_T36,_T37);}goto _TL231;_TL230: _TL231: _TL22E: goto _LL5;_LL5:;}{struct _tuple28 _T3A;
# 2175
_T3A.f0= varok;_T3A.f1= rval;_T38= _T3A;}return _T38;}_TL21E:;}
# 2181
static struct Cyc_Absyn_Vardecl*Cyc_NewControlFlow_get_vd_from_place(struct Cyc_CfFlowInfo_Place*p){struct Cyc_CfFlowInfo_Place*_T0;int(*_T1)(struct _fat_ptr,struct _fat_ptr);void*(*_T2)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T3;struct _fat_ptr _T4;void*_T5;int*_T6;int _T7;void*_T8;struct Cyc_Absyn_Vardecl*_T9;int(*_TA)(struct _fat_ptr,struct _fat_ptr);void*(*_TB)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _TC;struct _fat_ptr _TD;struct Cyc_List_List*_TE;void*_TF;_T0= p;{struct Cyc_CfFlowInfo_Place _T10=*_T0;_TF= _T10.root;_TE= _T10.path;}{void*root=_TF;struct Cyc_List_List*fs=_TE;
# 2184
if(fs==0)goto _TL233;_T2= Cyc_Warn_impos;{
int(*_T10)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T2;_T1= _T10;}_T3= _tag_fat("unconsume_params: param to unconsume is non-variable",sizeof(char),53U);_T4= _tag_fat(0U,sizeof(void*),0);_T1(_T3,_T4);goto _TL234;_TL233: _TL234: {
struct Cyc_Absyn_Vardecl*vd;struct Cyc_Absyn_Vardecl*_T10;_T5= root;_T6= (int*)_T5;_T7= *_T6;if(_T7!=0)goto _TL235;_T8= root;{struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*_T11=(struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*)_T8;_T10= _T11->f1;}{struct Cyc_Absyn_Vardecl*vd=_T10;_T9= vd;
# 2189
return _T9;}_TL235: _TB= Cyc_Warn_impos;{
# 2191
int(*_T11)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_TB;_TA= _T11;}_TC= _tag_fat("unconsume_params: root is not a varroot",sizeof(char),40U);_TD= _tag_fat(0U,sizeof(void*),0);_TA(_TC,_TD);;}}}
# 2203
static union Cyc_CfFlowInfo_FlowInfo Cyc_NewControlFlow_unconsume_exp(struct Cyc_NewControlFlow_AnalEnv*env,struct Cyc_Absyn_Exp*unconsume_exp,struct Cyc_Absyn_Vardecl*vd,long varok,void*ropt,union Cyc_CfFlowInfo_FlowInfo flow,unsigned loc){union Cyc_CfFlowInfo_FlowInfo _T0;struct _union_FlowInfo_BottomFL _T1;unsigned _T2;union Cyc_CfFlowInfo_FlowInfo _T3;union Cyc_CfFlowInfo_FlowInfo _T4;struct _union_FlowInfo_ReachableFL _T5;union Cyc_CfFlowInfo_AbsLVal _T6;struct _union_AbsLVal_PlaceL _T7;unsigned _T8;union Cyc_CfFlowInfo_AbsLVal _T9;struct _union_AbsLVal_PlaceL _TA;void*_TB;int*_TC;int _TD;void*_TE;void*_TF;long _T10;struct Cyc_NewControlFlow_AnalEnv*_T11;struct Cyc_CfFlowInfo_FlowEnv*_T12;void*_T13;struct Cyc_NewControlFlow_AnalEnv*_T14;struct Cyc_CfFlowInfo_FlowEnv*_T15;struct _tuple14 _T16;struct _tuple14 _T17;union Cyc_CfFlowInfo_FlowInfo _T18;struct _union_FlowInfo_ReachableFL _T19;unsigned _T1A;union Cyc_CfFlowInfo_FlowInfo _T1B;struct _union_FlowInfo_ReachableFL _T1C;struct Cyc_NewControlFlow_AnalEnv*_T1D;struct Cyc_CfFlowInfo_FlowEnv*_T1E;unsigned _T1F;struct Cyc_Dict_Dict _T20;struct Cyc_CfFlowInfo_Place*_T21;void*_T22;struct Cyc_Dict_Dict _T23;int(*_T24)(struct _fat_ptr,struct _fat_ptr);void*(*_T25)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T26;struct _fat_ptr _T27;struct Cyc_NewControlFlow_AnalEnv*_T28;struct Cyc_List_List*_T29;struct Cyc_Absyn_Vardecl*_T2A;void*_T2B;long _T2C;struct Cyc_String_pa_PrintArg_struct _T2D;unsigned _T2E;struct _fat_ptr _T2F;struct _fat_ptr _T30;union Cyc_CfFlowInfo_FlowInfo _T31;{struct Cyc_Dict_Dict _T32;_T0= flow;_T1= _T0.BottomFL;_T2= _T1.tag;if(_T2!=1)goto _TL237;_T3= flow;
# 2207
return _T3;_TL237: _T4= flow;_T5= _T4.ReachableFL;_T32= _T5.val;{struct Cyc_Dict_Dict d=_T32;
# 2213
struct _tuple18 _T33=Cyc_NewControlFlow_anal_Lexp(env,flow,0,1,unconsume_exp);union Cyc_CfFlowInfo_AbsLVal _T34;union Cyc_CfFlowInfo_FlowInfo _T35;_T35= _T33.f0;_T34= _T33.f1;{union Cyc_CfFlowInfo_FlowInfo f=_T35;union Cyc_CfFlowInfo_AbsLVal lval=_T34;{struct Cyc_CfFlowInfo_Place*_T36;_T6= lval;_T7= _T6.PlaceL;_T8= _T7.tag;if(_T8!=1)goto _TL239;_T9= lval;_TA= _T9.PlaceL;_T36= _TA.val;{struct Cyc_CfFlowInfo_Place*p=_T36;
# 2220
void*old_rval=Cyc_CfFlowInfo_lookup_place(d,p);{void*_T37;struct Cyc_Absyn_Vardecl*_T38;_TB= old_rval;_TC= (int*)_TB;_TD= *_TC;if(_TD!=8)goto _TL23B;_TE= old_rval;{struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*_T39=(struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*)_TE;_T38= _T39->f1;_TF= _T39->f2;_T37= (void*)_TF;}{struct Cyc_Absyn_Vardecl*old_vd=_T38;void*r=_T37;
# 2226
void*new_rval;
if(old_vd!=vd)goto _TL23D;_T10= varok;
# 2230
if(!_T10)goto _TL23F;_T11= env;_T12= _T11->fenv;_T13= r;
# 2232
old_rval= Cyc_CfFlowInfo_make_unique_unconsumed(_T12,_T13);
# 2237
if(ropt==0)goto _TL241;_T14= env;_T15= _T14->fenv;{struct _tuple14 _T39;
# 2244
_T39.f0= f;_T39.f1= old_rval;_T16= _T39;}{struct _tuple14 _T39;_T39.f0= f;_T39.f1= ropt;_T17= _T39;}{
# 2243
struct _tuple14 _T39=
Cyc_CfFlowInfo_join_flow_and_rval(_T15,_T16,_T17);void*_T3A;union Cyc_CfFlowInfo_FlowInfo _T3B;_T3B= _T39.f0;_T3A= _T39.f1;{union Cyc_CfFlowInfo_FlowInfo f2=_T3B;void*new_rval2=_T3A;
f= f2;
new_rval= new_rval2;}}goto _TL242;
# 2251
_TL241: new_rval= old_rval;_TL242: goto _TL240;
# 2254
_TL23F: new_rval= r;_TL240:{struct Cyc_Dict_Dict _T39;_T18= f;_T19= _T18.ReachableFL;_T1A= _T19.tag;if(_T1A!=2)goto _TL243;_T1B= f;_T1C= _T1B.ReachableFL;_T39= _T1C.val;{struct Cyc_Dict_Dict d2=_T39;_T1D= env;_T1E= _T1D->fenv;_T1F= loc;_T20= d2;_T21= p;_T22= new_rval;_T23= 
# 2258
Cyc_CfFlowInfo_assign_place(_T1E,_T1F,_T20,_T21,_T22);flow= Cyc_CfFlowInfo_ReachableFL(_T23);goto _LL15;}_TL243: _T25= Cyc_Warn_impos;{
# 2264
int(*_T3A)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T25;_T24= _T3A;}_T26= _tag_fat("unconsume_params: joined flow became bot!",sizeof(char),42U);_T27= _tag_fat(0U,sizeof(void*),0);_T24(_T26,_T27);_LL15:;}goto _LLD;
# 2268
_TL23D: goto _LL11;goto _LLD;}_TL23B: _LL11:
# 2275
 if(ropt==0)goto _TL245;_T28= env;_T29= _T28->aquals_bounds;_T2A= vd;_T2B= _T2A->type;_T2C= 
Cyc_Tcutil_is_noalias_pointer_or_aggr(_T29,_T2B);
# 2275
if(_T2C)goto _TL245;else{goto _TL247;}
# 2277
_TL247:{struct Cyc_String_pa_PrintArg_struct _T39;_T39.tag= 0;({__typeof__(Cyc_Absynpp_exp2string(unconsume_exp))_T3A=Cyc_Absynpp_exp2string(unconsume_exp);_T39.f1= _T3A;});_T2D= _T39;}{struct Cyc_String_pa_PrintArg_struct _T39=_T2D;void*_T3A[1];_T3A[0]= & _T39;_T2E= loc;_T2F= _tag_fat("aliased expression %s was overwritten",sizeof(char),38U);_T30= _tag_fat(_T3A,sizeof(void*),1);Cyc_CfFlowInfo_aerr(_T2E,_T2F,_T30);}goto _TL246;_TL245: _TL246: goto _LLD;_LLD:;}goto _LL8;}_TL239: goto _LL8;_LL8:;}goto _LL0;}}_LL0:;}_T31= flow;
# 2312 "cyclone/library/compiler/new_control_flow.cyc"
return _T31;}
# 2325
static union Cyc_CfFlowInfo_FlowInfo Cyc_NewControlFlow_unconsume_params(struct Cyc_NewControlFlow_AnalEnv*env,struct Cyc_List_List*consumed_vals,struct Cyc_List_List*unconsume_exps,long is_region_open,union Cyc_CfFlowInfo_FlowInfo flow,unsigned loc){union Cyc_CfFlowInfo_FlowInfo _T0;struct _union_FlowInfo_BottomFL _T1;unsigned _T2;union Cyc_CfFlowInfo_FlowInfo _T3;struct Cyc_List_List*_T4;void*_T5;struct Cyc_CfFlowInfo_Place*_T6;struct _tuple28 _T7;long _T8;struct _tuple28 _T9;struct Cyc_NewControlFlow_AnalEnv*_TA;struct Cyc_List_List*_TB;void*_TC;struct Cyc_CfFlowInfo_Place*_TD;int _TE;struct Cyc_Absyn_Vardecl*_TF;union Cyc_CfFlowInfo_FlowInfo _T10;unsigned _T11;int _T12;struct Cyc_NewControlFlow_AnalEnv*_T13;struct Cyc_List_List*_T14;void*_T15;struct Cyc_Absyn_Exp*_T16;struct Cyc_Absyn_Vardecl*_T17;long _T18;void*_T19;union Cyc_CfFlowInfo_FlowInfo _T1A;unsigned _T1B;struct Cyc_List_List*_T1C;struct Cyc_List_List*_T1D;union Cyc_CfFlowInfo_FlowInfo _T1E;_T0= flow;_T1= _T0.BottomFL;_T2= _T1.tag;if(_T2!=1)goto _TL248;_T3= flow;
# 2330
return _T3;_TL248: goto _LL0;_LL0: {
# 2334
int do_unconsume=unconsume_exps!=0;
struct Cyc_List_List*_T1F=Cyc_List_rev(consumed_vals);struct Cyc_List_List*consumed_vals=_T1F;
struct Cyc_List_List*_T20=Cyc_List_rev(unconsume_exps);struct Cyc_List_List*unconsume_exps=_T20;{
struct Cyc_List_List*params=consumed_vals;_TL24D: if(params!=0)goto _TL24B;else{goto _TL24C;}
# 2341
_TL24B: _T4= params;_T5= _T4->hd;_T6= (struct Cyc_CfFlowInfo_Place*)_T5;{struct Cyc_Absyn_Vardecl*vd=Cyc_NewControlFlow_get_vd_from_place(_T6);_T8= is_region_open;
if(!_T8)goto _TL24E;{struct _tuple28 _T21;
_T21.f0= 1;_T21.f1= 0;_T9= _T21;}_T7= _T9;goto _TL24F;_TL24E: _TA= env;_TB= params;_TC= _TB->hd;_TD= (struct Cyc_CfFlowInfo_Place*)_TC;_TE= do_unconsume;_TF= vd;_T10= flow;_T11= loc;_T7= 
Cyc_NewControlFlow_noconsume_place_ok(_TA,_TD,_TE,_TF,_T10,_T11);_TL24F: {
# 2342
struct _tuple28 _T21=_T7;void*_T22;long _T23;_T23= _T21.f0;_T22= _T21.f1;{long varok=_T23;void*rval=_T22;_T12= do_unconsume;
# 2348
if(!_T12)goto _TL250;_T13= env;_T14= unconsume_exps;_T15= _T14->hd;_T16= (struct Cyc_Absyn_Exp*)_T15;_T17= vd;_T18= varok;_T19= rval;_T1A= flow;_T1B= loc;
flow= Cyc_NewControlFlow_unconsume_exp(_T13,_T16,_T17,_T18,_T19,_T1A,_T1B);goto _TL251;_TL250: _TL251:;}}}_T1C= params;
# 2338
params= _T1C->tl;if(unconsume_exps==0)goto _TL252;_T1D= unconsume_exps;unconsume_exps= _T1D->tl;goto _TL253;_TL252: _TL253: goto _TL24D;_TL24C:;}
# 2351
Cyc_NewControlFlow_update_tryflow(env,flow);_T1E= flow;
return _T1E;}}struct _tuple29{long f0;struct Cyc_Absyn_Stmt*f1;struct Cyc_List_List*f2;struct Cyc_List_List*f3;};
# 2355
static union Cyc_CfFlowInfo_FlowInfo Cyc_NewControlFlow_anal_scs(struct Cyc_NewControlFlow_AnalEnv*env,union Cyc_CfFlowInfo_FlowInfo inflow,struct Cyc_List_List*scs,unsigned exp_loc){struct Cyc_NewControlFlow_AnalEnv*_T0;struct Cyc_List_List*_T1;void*_T2;struct Cyc_NewControlFlow_AnalEnv*_T3;struct Cyc_Core_Opt*_T4;void*_T5;struct Cyc_List_List*_T6;struct Cyc_NewControlFlow_AnalEnv*_T7;struct Cyc_CfFlowInfo_FlowEnv*_T8;struct Cyc_NewControlFlow_AnalEnv*_T9;union Cyc_CfFlowInfo_FlowInfo _TA;struct Cyc_Core_Opt*_TB;void*_TC;struct Cyc_List_List*_TD;int _TE;unsigned _TF;unsigned _T10;struct Cyc_NewControlFlow_AnalEnv*_T11;long _T12;struct Cyc_NewControlFlow_AnalEnv*_T13;struct Cyc_List_List*_T14;struct _tuple29*_T15;struct Cyc_NewControlFlow_AnalEnv*_T16;union Cyc_CfFlowInfo_FlowInfo _T17;struct _union_FlowInfo_BottomFL _T18;unsigned _T19;struct Cyc_List_List*_T1A;struct Cyc_List_List*_T1B;union Cyc_CfFlowInfo_FlowInfo _T1C;struct Cyc_List_List*_T1D;struct Cyc_List_List*_T1E;void*_T1F;struct Cyc_Absyn_Switch_clause*_T20;struct Cyc_Core_Opt*_T21;void*_T22;struct Cyc_List_List*_T23;struct Cyc_Absyn_Stmt*_T24;unsigned _T25;struct _fat_ptr _T26;struct _fat_ptr _T27;struct Cyc_Absyn_Stmt*_T28;unsigned _T29;struct _fat_ptr _T2A;struct _fat_ptr _T2B;struct Cyc_NewControlFlow_AnalEnv*_T2C;struct Cyc_List_List*_T2D;struct Cyc_List_List*_T2E;void*_T2F;struct Cyc_Absyn_Switch_clause*_T30;struct Cyc_Absyn_Stmt*_T31;union Cyc_CfFlowInfo_FlowInfo _T32;struct Cyc_List_List*_T33;union Cyc_CfFlowInfo_FlowInfo _T34;_T0= env;{
# 2357
struct Cyc_CfFlowInfo_FlowEnv*fenv=_T0->fenv;
# 2359
_TL257: if(scs!=0)goto _TL255;else{goto _TL256;}
_TL255: _T1= scs;_T2= _T1->hd;{struct Cyc_Absyn_Switch_clause*_T35=(struct Cyc_Absyn_Switch_clause*)_T2;unsigned _T36;struct Cyc_Absyn_Stmt*_T37;struct Cyc_Absyn_Exp*_T38;struct Cyc_Core_Opt*_T39;{struct Cyc_Absyn_Switch_clause _T3A=*_T35;_T39= _T3A.pat_vars;_T38= _T3A.where_clause;_T37= _T3A.body;_T36= _T3A.loc;}{struct Cyc_Core_Opt*vds_opt=_T39;struct Cyc_Absyn_Exp*where_opt=_T38;struct Cyc_Absyn_Stmt*body=_T37;unsigned loc=_T36;_T3= env;_T4= 
_check_null(vds_opt);_T5= _T4->v;_T6= (struct Cyc_List_List*)_T5;{struct _tuple1 _T3A=Cyc_NewControlFlow_get_unconsume_pat_vars(_T3,_T6);struct Cyc_List_List*_T3B;struct Cyc_List_List*_T3C;_T3C= _T3A.f0;_T3B= _T3A.f1;{struct Cyc_List_List*roots=_T3C;struct Cyc_List_List*es=_T3B;_T7= env;_T8= _T7->fenv;_T9= env;_TA= inflow;_TB= vds_opt;_TC= _TB->v;_TD= (struct Cyc_List_List*)_TC;_TE= roots!=0;_TF= loc;_T10= exp_loc;{
union Cyc_CfFlowInfo_FlowInfo clause_inflow=
Cyc_NewControlFlow_initialize_pat_vars(_T8,_T9,_TA,_TD,_TE,_TF,_T10,0);
union Cyc_CfFlowInfo_FlowInfo clause_outflow;_T11= env;{
struct Cyc_List_List*old_unique_pat_vars=_T11->unique_pat_vars;_T12= 
# 2367
Cyc_Tcpat_has_vars(vds_opt);if(!_T12)goto _TL258;_T13= env;{struct Cyc_List_List*_T3D=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple29*_T3E=_cycalloc(sizeof(struct _tuple29));
_T3E->f0= 0;_T3E->f1= body;_T3E->f2= roots;_T3E->f3= es;_T15= (struct _tuple29*)_T3E;}_T3D->hd= _T15;_T3D->tl= old_unique_pat_vars;_T14= (struct Cyc_List_List*)_T3D;}_T13->unique_pat_vars= _T14;goto _TL259;_TL258: _TL259:
 if(where_opt==0)goto _TL25A;{
struct Cyc_Absyn_Exp*wexp=where_opt;
struct _tuple19 _T3D=Cyc_NewControlFlow_anal_test(env,clause_inflow,wexp);union Cyc_CfFlowInfo_FlowInfo _T3E;union Cyc_CfFlowInfo_FlowInfo _T3F;_T3F= _T3D.f0;_T3E= _T3D.f1;{union Cyc_CfFlowInfo_FlowInfo ft=_T3F;union Cyc_CfFlowInfo_FlowInfo ff=_T3E;
inflow= ff;
clause_outflow= Cyc_NewControlFlow_anal_stmt(env,ft,body,0);}}goto _TL25B;
# 2375
_TL25A: clause_outflow= Cyc_NewControlFlow_anal_stmt(env,clause_inflow,body,0);_TL25B: _T16= env;
_T16->unique_pat_vars= old_unique_pat_vars;_T17= clause_outflow;_T18= _T17.BottomFL;_T19= _T18.tag;if(_T19!=1)goto _TL25C;goto _LL9;_TL25C:
# 2382
 clause_outflow= Cyc_NewControlFlow_unconsume_params(env,roots,es,0,clause_outflow,loc);_T1A= scs;_T1B= _T1A->tl;
# 2384
if(_T1B!=0)goto _TL25E;_T1C= clause_outflow;
return _T1C;
# 2389
_TL25E: _T1D= scs;_T1E= _T1D->tl;_T1F= _T1E->hd;_T20= (struct Cyc_Absyn_Switch_clause*)_T1F;_T21= _T20->pat_vars;_T22= _T21->v;_T23= (struct Cyc_List_List*)_T22;if(_T23==0)goto _TL260;_T24= body;_T25= _T24->loc;_T26= 
_tag_fat("switch clause may implicitly fallthru",sizeof(char),38U);_T27= _tag_fat(0U,sizeof(void*),0);Cyc_CfFlowInfo_aerr(_T25,_T26,_T27);goto _TL261;
# 2392
_TL260: _T28= body;_T29= _T28->loc;_T2A= _tag_fat("switch clause may implicitly fallthru",sizeof(char),38U);_T2B= _tag_fat(0U,sizeof(void*),0);Cyc_Warn_warn(_T29,_T2A,_T2B);_TL261: _T2C= env;_T2D= scs;_T2E= _T2D->tl;_T2F= _T2E->hd;_T30= (struct Cyc_Absyn_Switch_clause*)_T2F;_T31= _T30->body;_T32= clause_outflow;
# 2394
Cyc_NewControlFlow_update_flow(_T2C,_T31,_T32);goto _LL9;_LL9:;}}}}}}_T33= scs;
# 2359
scs= _T33->tl;goto _TL257;_TL256: _T34= 
# 2399
Cyc_CfFlowInfo_BottomFL();return _T34;}}struct _tuple30{struct Cyc_NewControlFlow_AnalEnv*f0;struct Cyc_Dict_Dict f1;unsigned f2;};
# 2404
static void Cyc_NewControlFlow_check_dropped_unique_vd(struct _tuple30*vdenv,struct Cyc_Absyn_Vardecl*vd){struct _tuple30*_T0;struct Cyc_NewControlFlow_AnalEnv*_T1;struct Cyc_List_List*_T2;struct Cyc_Absyn_Vardecl*_T3;void*_T4;long _T5;struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct _T6;struct Cyc_Dict_Dict _T7;int(*_T8)(void*,void*);struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*_T9;void*_TA;void*_TB;void*_TC;int*_TD;unsigned _TE;void*_TF;struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct*_T10;enum Cyc_CfFlowInfo_InitLevel _T11;struct Cyc_String_pa_PrintArg_struct _T12;struct Cyc_Absyn_Vardecl*_T13;struct _tuple2*_T14;unsigned _T15;struct _fat_ptr _T16;struct _fat_ptr _T17;unsigned _T18;struct Cyc_Dict_Dict _T19;struct Cyc_NewControlFlow_AnalEnv*_T1A;_T0= vdenv;{struct _tuple30 _T1B=*_T0;_T1A= _T1B.f0;_T19= _T1B.f1;_T18= _T1B.f2;}{struct Cyc_NewControlFlow_AnalEnv*env=_T1A;struct Cyc_Dict_Dict fd=_T19;unsigned loc=_T18;_T1= env;_T2= _T1->aquals_bounds;_T3= vd;_T4= _T3->type;_T5= 
# 2406
Cyc_Tcutil_is_noalias_pointer_or_aggr(_T2,_T4);if(!_T5)goto _TL262;{struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct _T1B;_T1B.tag= 0;
# 2408
_T1B.f1= vd;_T6= _T1B;}{struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct vdroot=_T6;_T7= fd;_T8= Cyc_CfFlowInfo_root_cmp;{struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*_T1B=_cycalloc(sizeof(struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct));
*_T1B= vdroot;_T9= (struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*)_T1B;}_TA= (void*)_T9;_TB= Cyc_Dict_lookup_other(_T7,_T8,_TA);{struct _tuple13 _T1B=Cyc_CfFlowInfo_unname_rval(_TB);void*_T1C;_T1C= _T1B.f0;{void*rval=_T1C;_TC= rval;_TD= (int*)_TC;_TE= *_TD;switch(_TE){case 7: goto _LLA;case 0: _LLA: goto _LLC;case 2: _TF= rval;_T10= (struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct*)_TF;_T11= _T10->f1;if(_T11!=Cyc_CfFlowInfo_NoneIL)goto _TL265;_LLC: goto _LL6;_TL265: goto _LLD;default: _LLD:{struct Cyc_String_pa_PrintArg_struct _T1D;_T1D.tag= 0;_T13= vd;_T14= _T13->name;
# 2419
({__typeof__(Cyc_Absynpp_qvar2string(_T14))_T1E=Cyc_Absynpp_qvar2string(_T14);_T1D.f1= _T1E;});_T12= _T1D;}{struct Cyc_String_pa_PrintArg_struct _T1D=_T12;void*_T1E[1];_T1E[0]= & _T1D;_T15= loc;_T16= 
# 2418
_tag_fat("unique pointers may still exist after variable %s goes out of scope",sizeof(char),68U);_T17= _tag_fat(_T1E,sizeof(void*),1);Cyc_Warn_warn(_T15,_T16,_T17);}goto _LL6;}_LL6:;}}}goto _TL263;_TL262: _TL263:;}}
# 2426
static void Cyc_NewControlFlow_check_dropped_unique(struct Cyc_NewControlFlow_AnalEnv*env,union Cyc_CfFlowInfo_FlowInfo inflow,struct Cyc_Absyn_Decl*decl){union Cyc_CfFlowInfo_FlowInfo _T0;struct _union_FlowInfo_ReachableFL _T1;unsigned _T2;union Cyc_CfFlowInfo_FlowInfo _T3;struct _union_FlowInfo_ReachableFL _T4;struct _tuple30 _T5;struct Cyc_Absyn_Decl*_T6;struct Cyc_NewControlFlow_AnalEnv*_T7;struct Cyc_Absyn_Decl*_T8;int*_T9;unsigned _TA;struct _tuple30*_TB;struct Cyc_Absyn_Vardecl*_TC;struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*_TD;struct Cyc_Core_Opt*_TE;struct Cyc_Core_Opt*_TF;void*_T10;void(*_T11)(void(*)(struct _tuple30*,struct Cyc_Absyn_Vardecl*),struct _tuple30*,struct Cyc_List_List*);void(*_T12)(void(*)(void*,void*),void*,struct Cyc_List_List*);struct _tuple30*_T13;struct Cyc_List_List*_T14;{struct Cyc_Dict_Dict _T15;_T0= inflow;_T1= _T0.ReachableFL;_T2= _T1.tag;if(_T2!=2)goto _TL267;_T3= inflow;_T4= _T3.ReachableFL;_T15= _T4.val;{struct Cyc_Dict_Dict fd=_T15;{struct _tuple30 _T16;
# 2429
_T16.f0= env;_T16.f1= fd;_T6= decl;_T16.f2= _T6->loc;_T5= _T16;}{struct _tuple30 vdenv=_T5;_T7= env;{
struct Cyc_CfFlowInfo_FlowEnv*fenv=_T7->fenv;_T8= decl;{
void*_T16=_T8->r;struct Cyc_List_List*_T17;struct Cyc_Absyn_Vardecl*_T18;_T9= (int*)_T16;_TA= *_T9;switch(_TA){case 0:{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T19=(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T16;_T18= _T19->f1;}{struct Cyc_Absyn_Vardecl*vd=_T18;_TB= & vdenv;_TC= vd;
# 2433
Cyc_NewControlFlow_check_dropped_unique_vd(_TB,_TC);goto _LL5;}case 2: _TD= (struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*)_T16;_TE= _TD->f2;if(_TE==0)goto _TL26A;{struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*_T19=(struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*)_T16;_TF= _T19->f2;{struct Cyc_Core_Opt _T1A=*_TF;_T10= _T1A.v;_T17= (struct Cyc_List_List*)_T10;}}{struct Cyc_List_List*vds=_T17;
# 2436
struct _tuple1 _T19=Cyc_List_split(vds);struct Cyc_List_List*_T1A;_T1A= _T19.f0;{struct Cyc_List_List*vs=_T1A;
struct Cyc_List_List*_T1B=Cyc_Tcutil_filter_nulls(vs);{struct Cyc_List_List*vs=_T1B;_T17= vs;goto _LLB;}}}_TL26A: goto _LLC;case 3:{struct Cyc_Absyn_Letv_d_Absyn_Raw_decl_struct*_T19=(struct Cyc_Absyn_Letv_d_Absyn_Raw_decl_struct*)_T16;_T17= _T19->f1;}_LLB: {struct Cyc_List_List*vds=_T17;_T12= Cyc_List_iter_c;{
# 2440
void(*_T19)(void(*)(struct _tuple30*,struct Cyc_Absyn_Vardecl*),struct _tuple30*,struct Cyc_List_List*)=(void(*)(void(*)(struct _tuple30*,struct Cyc_Absyn_Vardecl*),struct _tuple30*,struct Cyc_List_List*))_T12;_T11= _T19;}_T13= & vdenv;_T14= vds;_T11(Cyc_NewControlFlow_check_dropped_unique_vd,_T13,_T14);goto _LL5;}default: _LLC: goto _LL5;}_LL5:;}goto _LL0;}}}_TL267: goto _LL0;_LL0:;}
# 2449
return;}
# 2455
static union Cyc_CfFlowInfo_FlowInfo Cyc_NewControlFlow_unconsume_pat_vars(struct Cyc_NewControlFlow_AnalEnv*env,struct Cyc_Absyn_Stmt*src,union Cyc_CfFlowInfo_FlowInfo inflow,struct Cyc_Absyn_Stmt*dest){int(*_T0)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*);void*(*_T1)(struct Cyc_Hashtable_Table*,void*);struct Cyc_NewControlFlow_AnalEnv*_T2;struct Cyc_Hashtable_Table*_T3;struct Cyc_Absyn_Stmt*_T4;struct Cyc_NewControlFlow_AnalEnv*_T5;struct Cyc_List_List*_T6;void*_T7;struct Cyc_NewControlFlow_AnalEnv*_T8;struct Cyc_List_List*_T9;struct Cyc_List_List*_TA;long _TB;union Cyc_CfFlowInfo_FlowInfo _TC;struct Cyc_Absyn_Stmt*_TD;unsigned _TE;struct Cyc_List_List*_TF;union Cyc_CfFlowInfo_FlowInfo _T10;_T1= Cyc_Hashtable_lookup;{
int(*_T11)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*)=(int(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*))_T1;_T0= _T11;}_T2= env;_T3= _T2->pat_pop_table;_T4= src;{int num_pop=_T0(_T3,_T4);_T5= env;{
# 2458
struct Cyc_List_List*x=_T5->unique_pat_vars;_TL26F: if(num_pop > 0)goto _TL26D;else{goto _TL26E;}
_TL26D: _T6= _check_null(x);_T7= _T6->hd;{struct _tuple29*_T11=(struct _tuple29*)_T7;struct Cyc_List_List*_T12;struct Cyc_List_List*_T13;struct Cyc_Absyn_Stmt*_T14;long _T15;{struct _tuple29 _T16=*_T11;_T15= _T16.f0;_T14= _T16.f1;_T13= _T16.f2;_T12= _T16.f3;}{long is_open=_T15;struct Cyc_Absyn_Stmt*pat_stmt=_T14;struct Cyc_List_List*roots=_T13;struct Cyc_List_List*es=_T12;_T8= env;_T9= roots;_TA= es;_TB= is_open;_TC= inflow;_TD= dest;_TE= _TD->loc;
inflow= Cyc_NewControlFlow_unconsume_params(_T8,_T9,_TA,_TB,_TC,_TE);}}_TF= x;
# 2458
x= _TF->tl;num_pop= num_pop + -1;goto _TL26F;_TL26E:;}_T10= inflow;
# 2462
return _T10;}}
# 2468
static union Cyc_CfFlowInfo_FlowInfo Cyc_NewControlFlow_anal_stmt(struct Cyc_NewControlFlow_AnalEnv*env,union Cyc_CfFlowInfo_FlowInfo inflow,struct Cyc_Absyn_Stmt*s,struct _tuple17*rval_opt){union Cyc_CfFlowInfo_FlowInfo*_T0;struct Cyc_NewControlFlow_AnalEnv*_T1;struct Cyc_Absyn_Stmt*_T2;int*_T3;unsigned _T4;union Cyc_CfFlowInfo_FlowInfo _T5;struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct*_T6;struct Cyc_Absyn_Exp*_T7;struct Cyc_NewControlFlow_AnalEnv*_T8;long _T9;struct Cyc_Absyn_Stmt*_TA;unsigned _TB;struct _fat_ptr _TC;struct _fat_ptr _TD;struct Cyc_Absyn_Stmt*_TE;unsigned _TF;struct Cyc_NewControlFlow_AnalEnv*_T10;union Cyc_CfFlowInfo_FlowInfo _T11;struct Cyc_NewControlFlow_AnalEnv*_T12;struct Cyc_NewControlFlow_AnalEnv*_T13;struct Cyc_List_List*_T14;union Cyc_CfFlowInfo_FlowInfo _T15;struct Cyc_Absyn_Stmt*_T16;unsigned _T17;union Cyc_CfFlowInfo_FlowInfo _T18;struct Cyc_NewControlFlow_AnalEnv*_T19;long _T1A;struct Cyc_Absyn_Stmt*_T1B;unsigned _T1C;struct _fat_ptr _T1D;struct _fat_ptr _T1E;struct Cyc_NewControlFlow_AnalEnv*_T1F;struct Cyc_Absyn_Exp*_T20;unsigned _T21;union Cyc_CfFlowInfo_FlowInfo _T22;void*_T23;struct Cyc_Absyn_Stmt*_T24;unsigned _T25;struct Cyc_NewControlFlow_AnalEnv*_T26;union Cyc_CfFlowInfo_FlowInfo _T27;struct Cyc_NewControlFlow_AnalEnv*_T28;struct Cyc_NewControlFlow_AnalEnv*_T29;struct Cyc_List_List*_T2A;union Cyc_CfFlowInfo_FlowInfo _T2B;struct Cyc_Absyn_Stmt*_T2C;unsigned _T2D;union Cyc_CfFlowInfo_FlowInfo _T2E;struct _tuple17*_T2F;struct _tuple17*_T30;void**_T31;void**_T32;union Cyc_CfFlowInfo_FlowInfo _T33;struct _tuple14 _T34;union Cyc_CfFlowInfo_FlowInfo _T35;struct Cyc_NewControlFlow_AnalEnv*_T36;union Cyc_CfFlowInfo_FlowInfo _T37;struct Cyc_Absyn_Stmt*_T38;struct _tuple17*_T39;union Cyc_CfFlowInfo_FlowInfo _T3A;union Cyc_CfFlowInfo_FlowInfo _T3B;struct _tuple11 _T3C;struct _tuple11 _T3D;union Cyc_CfFlowInfo_FlowInfo*_T3E;union Cyc_CfFlowInfo_FlowInfo _T3F;struct _tuple11 _T40;struct _tuple11 _T41;union Cyc_CfFlowInfo_FlowInfo*_T42;union Cyc_CfFlowInfo_FlowInfo _T43;struct _tuple11 _T44;struct _tuple11 _T45;struct _tuple11 _T46;struct _tuple11 _T47;struct _tuple14 _T48;union Cyc_CfFlowInfo_FlowInfo*_T49;union Cyc_CfFlowInfo_FlowInfo*_T4A;struct _tuple14 _T4B;union Cyc_CfFlowInfo_FlowInfo _T4C;struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct*_T4D;struct Cyc_Absyn_Switch_clause**_T4E;struct Cyc_Absyn_Switch_clause**_T4F;struct Cyc_NewControlFlow_AnalEnv*_T50;struct Cyc_Absyn_Stmt*_T51;union Cyc_CfFlowInfo_FlowInfo _T52;struct Cyc_Absyn_Switch_clause*_T53;struct Cyc_Absyn_Stmt*_T54;struct Cyc_Absyn_Switch_clause*_T55;struct Cyc_Core_Opt*_T56;struct Cyc_Core_Opt*_T57;void*_T58;struct Cyc_List_List*_T59;struct _tuple1 _T5A;struct Cyc_List_List*_T5B;struct Cyc_CfFlowInfo_FlowEnv*_T5C;union Cyc_CfFlowInfo_FlowInfo _T5D;struct Cyc_List_List*_T5E;struct Cyc_CfFlowInfo_FlowEnv*_T5F;void*_T60;struct Cyc_Absyn_Stmt*_T61;unsigned _T62;struct Cyc_Absyn_Switch_clause*_T63;struct Cyc_Core_Opt*_T64;struct Cyc_Core_Opt*_T65;void*_T66;struct Cyc_List_List*_T67;void*_T68;struct Cyc_CfFlowInfo_FlowEnv*_T69;struct Cyc_NewControlFlow_AnalEnv*_T6A;union Cyc_CfFlowInfo_FlowInfo _T6B;struct Cyc_Absyn_Vardecl**_T6C;struct Cyc_Absyn_Vardecl*_T6D;struct Cyc_List_List*_T6E;void*_T6F;struct Cyc_Absyn_Exp*_T70;struct Cyc_List_List*_T71;void*_T72;struct Cyc_Absyn_Stmt*_T73;unsigned _T74;struct Cyc_List_List*_T75;struct Cyc_List_List*_T76;struct Cyc_List_List*_T77;struct Cyc_NewControlFlow_AnalEnv*_T78;struct Cyc_Absyn_Switch_clause*_T79;struct Cyc_Absyn_Stmt*_T7A;union Cyc_CfFlowInfo_FlowInfo _T7B;union Cyc_CfFlowInfo_FlowInfo _T7C;int(*_T7D)(struct _fat_ptr,struct _fat_ptr);void*(*_T7E)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T7F;struct _fat_ptr _T80;struct Cyc_Absyn_Stmt*(*_T81)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*);void*(*_T82)(struct Cyc_Hashtable_Table*,void*);struct Cyc_NewControlFlow_AnalEnv*_T83;struct Cyc_Hashtable_Table*_T84;struct Cyc_Absyn_Stmt*_T85;struct Cyc_Absyn_Stmt*_T86;union Cyc_CfFlowInfo_FlowInfo _T87;struct _union_FlowInfo_ReachableFL _T88;unsigned _T89;struct Cyc_NewControlFlow_AnalEnv*_T8A;void*_T8B;long _T8C;struct Cyc_NewControlFlow_AnalEnv*_T8D;void*_T8E;long _T8F;struct Cyc_NewControlFlow_AnalEnv*_T90;void*_T91;long _T92;struct Cyc_Absyn_Stmt*_T93;unsigned _T94;struct _fat_ptr _T95;struct _fat_ptr _T96;struct Cyc_Absyn_Stmt*_T97;unsigned _T98;struct _fat_ptr _T99;struct _fat_ptr _T9A;struct Cyc_NewControlFlow_AnalEnv*_T9B;long _T9C;struct Cyc_Absyn_Stmt*_T9D;unsigned _T9E;struct _fat_ptr _T9F;struct _fat_ptr _TA0;struct Cyc_Absyn_Stmt*_TA1;unsigned _TA2;struct Cyc_NewControlFlow_AnalEnv*_TA3;union Cyc_CfFlowInfo_FlowInfo _TA4;struct Cyc_NewControlFlow_AnalEnv*_TA5;struct Cyc_NewControlFlow_AnalEnv*_TA6;struct Cyc_List_List*_TA7;union Cyc_CfFlowInfo_FlowInfo _TA8;struct Cyc_Absyn_Stmt*_TA9;unsigned _TAA;union Cyc_CfFlowInfo_FlowInfo _TAB;struct Cyc_Absyn_Stmt*(*_TAC)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*);void*(*_TAD)(struct Cyc_Hashtable_Table*,void*);struct Cyc_NewControlFlow_AnalEnv*_TAE;struct Cyc_Hashtable_Table*_TAF;struct Cyc_Absyn_Stmt*_TB0;struct Cyc_Absyn_Stmt*_TB1;unsigned _TB2;struct _fat_ptr _TB3;struct _fat_ptr _TB4;struct Cyc_NewControlFlow_AnalEnv*_TB5;struct Cyc_Absyn_Stmt*_TB6;union Cyc_CfFlowInfo_FlowInfo _TB7;struct Cyc_Absyn_Stmt*_TB8;union Cyc_CfFlowInfo_FlowInfo _TB9;void*_TBA;struct Cyc_NewControlFlow_AnalEnv*_TBB;union Cyc_CfFlowInfo_FlowInfo _TBC;struct Cyc_List_List*_TBD;struct Cyc_Absyn_Exp*_TBE;unsigned _TBF;union Cyc_CfFlowInfo_FlowInfo _TC0;void*_TC1;struct Cyc_NewControlFlow_AnalEnv*_TC2;struct Cyc_NewControlFlow_AnalEnv*_TC3;struct Cyc_NewControlFlow_AnalEnv*_TC4;struct Cyc_NewControlFlow_AnalEnv*_TC5;struct Cyc_NewControlFlow_AnalEnv*_TC6;struct Cyc_NewControlFlow_AnalEnv*_TC7;struct Cyc_NewControlFlow_AnalEnv*_TC8;union Cyc_CfFlowInfo_FlowInfo _TC9;struct _union_FlowInfo_BottomFL _TCA;unsigned _TCB;struct Cyc_Absyn_Stmt*_TCC;unsigned _TCD;struct _fat_ptr _TCE;struct _fat_ptr _TCF;union Cyc_CfFlowInfo_FlowInfo _TD0;struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*_TD1;struct Cyc_Absyn_Decl*_TD2;struct Cyc_Absyn_Decl*_TD3;void*_TD4;int*_TD5;unsigned _TD6;struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*_TD7;struct Cyc_Absyn_Decl*_TD8;struct Cyc_Absyn_Decl*_TD9;void*_TDA;struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*_TDB;struct Cyc_Core_Opt*_TDC;struct Cyc_Absyn_Decl*_TDD;void*_TDE;struct Cyc_Core_Opt*_TDF;void*_TE0;struct Cyc___cycFILE*_TE1;struct _fat_ptr _TE2;struct _fat_ptr _TE3;struct Cyc_Absyn_Pat*_TE4;int*_TE5;int _TE6;struct Cyc_CfFlowInfo_FlowEnv*_TE7;struct Cyc_NewControlFlow_AnalEnv*_TE8;union Cyc_CfFlowInfo_FlowInfo _TE9;struct Cyc_List_List*_TEA;int _TEB;unsigned _TEC;struct Cyc_Absyn_Exp*_TED;unsigned _TEE;long _TEF;struct Cyc_NewControlFlow_AnalEnv*_TF0;struct Cyc_NewControlFlow_AnalEnv*_TF1;struct Cyc_List_List*_TF2;struct _tuple29*_TF3;struct Cyc_NewControlFlow_AnalEnv*_TF4;union Cyc_CfFlowInfo_FlowInfo _TF5;struct Cyc_Absyn_Decl*_TF6;void*_TF7;struct Cyc_Absyn_Exp*_TF8;struct Cyc_List_List _TF9;struct Cyc_NewControlFlow_AnalEnv*_TFA;union Cyc_CfFlowInfo_FlowInfo _TFB;struct Cyc_List_List*_TFC;struct Cyc_List_List*_TFD;union Cyc_CfFlowInfo_FlowInfo _TFE;struct _union_FlowInfo_ReachableFL _TFF;unsigned _T100;union Cyc_CfFlowInfo_FlowInfo _T101;struct _union_FlowInfo_ReachableFL _T102;union Cyc_CfFlowInfo_AbsLVal _T103;struct _union_AbsLVal_PlaceL _T104;unsigned _T105;union Cyc_CfFlowInfo_AbsLVal _T106;struct _union_AbsLVal_PlaceL _T107;struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*_T108;struct Cyc_CfFlowInfo_FlowEnv*_T109;struct Cyc_Absyn_Exp*_T10A;unsigned _T10B;struct Cyc_Dict_Dict _T10C;struct Cyc_CfFlowInfo_Place*_T10D;void*_T10E;struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*_T10F;struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*_T110;struct Cyc_CfFlowInfo_Place*_T111;struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*_T112;struct Cyc_CfFlowInfo_Place*_T113;struct Cyc_List_List*_T114;struct Cyc_List_List*_T115;struct Cyc_List_List _T116;struct Cyc_CfFlowInfo_FlowEnv*_T117;union Cyc_CfFlowInfo_FlowInfo _T118;struct Cyc_List_List*_T119;struct Cyc_List_List*_T11A;struct Cyc_CfFlowInfo_FlowEnv*_T11B;void*_T11C;unsigned _T11D;struct Cyc_NewControlFlow_AnalEnv*_T11E;struct Cyc_NewControlFlow_AnalEnv*_T11F;struct Cyc_List_List*_T120;struct _tuple29*_T121;struct Cyc_NewControlFlow_AnalEnv*_T122;union Cyc_CfFlowInfo_FlowInfo _T123;struct Cyc_NewControlFlow_AnalEnv*_T124;union Cyc_CfFlowInfo_FlowInfo _T125;struct Cyc_Absyn_Stmt*_T126;struct _tuple17*_T127;long _T128;union Cyc_CfFlowInfo_FlowInfo _T129;union Cyc_CfFlowInfo_FlowInfo _T12A;
union Cyc_CfFlowInfo_FlowInfo outflow;
# 2471
struct _tuple20 _T12B=Cyc_NewControlFlow_pre_stmt_check(env,inflow,s);union Cyc_CfFlowInfo_FlowInfo*_T12C;struct Cyc_NewControlFlow_CFStmtAnnot*_T12D;_T12D= _T12B.f0;_T12C= _T12B.f1;{struct Cyc_NewControlFlow_CFStmtAnnot*annot=_T12D;union Cyc_CfFlowInfo_FlowInfo*sflow=_T12C;_T0= sflow;
inflow= *_T0;_T1= env;{
struct Cyc_CfFlowInfo_FlowEnv*fenv=_T1->fenv;_T2= s;{
# 2479
void*_T12E=_T2->r;struct Cyc_Absyn_Decl*_T12F;struct Cyc_Absyn_Vardecl*_T130;unsigned _T131;struct Cyc_Absyn_Pat*_T132;struct Cyc_List_List*_T133;struct Cyc_Absyn_Stmt*_T134;struct Cyc_Absyn_Stmt*_T135;struct Cyc_Absyn_Exp*_T136;struct Cyc_Absyn_Stmt*_T137;void*_T138;void*_T139;_T3= (int*)_T12E;_T4= *_T3;switch(_T4){case 0: _T5= inflow;
# 2481
return _T5;case 3: _T6= (struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct*)_T12E;_T7= _T6->f1;if(_T7!=0)goto _TL271;_T8= env;_T9= _T8->noreturn;
# 2484
if(!_T9)goto _TL273;_TA= s;_TB= _TA->loc;_TC= 
_tag_fat("`noreturn' function might return",sizeof(char),33U);_TD= _tag_fat(0U,sizeof(void*),0);Cyc_CfFlowInfo_aerr(_TB,_TC,_TD);goto _TL274;_TL273: _TL274: _TE= s;_TF= _TE->loc;_T10= env;_T11= inflow;
Cyc_NewControlFlow_check_init_params(_TF,_T10,_T11);_T12= env;_T13= env;_T14= _T13->noconsume_params;_T15= inflow;_T16= s;_T17= _T16->loc;
Cyc_NewControlFlow_unconsume_params(_T12,_T14,0,0,_T15,_T17);_T18= 
Cyc_CfFlowInfo_BottomFL();return _T18;_TL271:{struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct*_T13A=(struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct*)_T12E;_T139= _T13A->f1;}{struct Cyc_Absyn_Exp*e=_T139;_T19= env;_T1A= _T19->noreturn;
# 2490
if(!_T1A)goto _TL275;_T1B= s;_T1C= _T1B->loc;_T1D= 
_tag_fat("`noreturn' function might return",sizeof(char),33U);_T1E= _tag_fat(0U,sizeof(void*),0);Cyc_CfFlowInfo_aerr(_T1C,_T1D,_T1E);goto _TL276;_TL275: _TL276: {
struct _tuple14 _T13A=Cyc_NewControlFlow_anal_Rexp(env,1,inflow,e,0);void*_T13B;union Cyc_CfFlowInfo_FlowInfo _T13C;_T13C= _T13A.f0;_T13B= _T13A.f1;{union Cyc_CfFlowInfo_FlowInfo f=_T13C;void*r=_T13B;_T1F= env;_T20= e;_T21= _T20->loc;_T22= f;_T23= r;
f= Cyc_NewControlFlow_use_Rval(_T1F,_T21,_T22,_T23);_T24= s;_T25= _T24->loc;_T26= env;_T27= f;
Cyc_NewControlFlow_check_init_params(_T25,_T26,_T27);_T28= env;_T29= env;_T2A= _T29->noconsume_params;_T2B= f;_T2C= s;_T2D= _T2C->loc;
Cyc_NewControlFlow_unconsume_params(_T28,_T2A,0,0,_T2B,_T2D);_T2E= 
Cyc_CfFlowInfo_BottomFL();return _T2E;}}}case 1:{struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct*_T13A=(struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct*)_T12E;_T139= _T13A->f1;}{struct Cyc_Absyn_Exp*e=_T139;long _T13A;void*_T13B;if(rval_opt==0)goto _TL277;_T2F= rval_opt;{struct _tuple17 _T13C=*_T2F;_T30= rval_opt;_T31= & _T30->f0;_T13B= (void**)_T31;_T13A= _T13C.f1;}{void**rval=(void**)_T13B;long copy_ctxt=_T13A;
# 2501
struct _tuple14 _T13C=Cyc_NewControlFlow_anal_Rexp(env,copy_ctxt,inflow,e,0);void*_T13D;union Cyc_CfFlowInfo_FlowInfo _T13E;_T13E= _T13C.f0;_T13D= _T13C.f1;{union Cyc_CfFlowInfo_FlowInfo f=_T13E;void*r=_T13D;_T32= rval;
*_T32= r;_T33= f;
return _T33;}}_TL277: _T34= 
# 2505
Cyc_NewControlFlow_anal_Rexp(env,0,inflow,e,0);_T35= _T34.f0;return _T35;;}case 2:{struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*_T13A=(struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*)_T12E;_T139= _T13A->f1;_T138= _T13A->f2;}{struct Cyc_Absyn_Stmt*s1=_T139;struct Cyc_Absyn_Stmt*s2=_T138;_T36= env;_T37= 
# 2509
Cyc_NewControlFlow_anal_stmt(env,inflow,s1,0);_T38= s2;_T39= rval_opt;_T3A= Cyc_NewControlFlow_anal_stmt(_T36,_T37,_T38,_T39);return _T3A;}case 4:{struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct*_T13A=(struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct*)_T12E;_T139= _T13A->f1;_T138= _T13A->f2;_T137= _T13A->f3;}{struct Cyc_Absyn_Exp*e=_T139;struct Cyc_Absyn_Stmt*s1=_T138;struct Cyc_Absyn_Stmt*s2=_T137;
# 2512
struct _tuple19 _T13A=Cyc_NewControlFlow_anal_test(env,inflow,e);union Cyc_CfFlowInfo_FlowInfo _T13B;union Cyc_CfFlowInfo_FlowInfo _T13C;_T13C= _T13A.f0;_T13B= _T13A.f1;{union Cyc_CfFlowInfo_FlowInfo f1t=_T13C;union Cyc_CfFlowInfo_FlowInfo f1f=_T13B;
# 2519
union Cyc_CfFlowInfo_FlowInfo ff=Cyc_NewControlFlow_anal_stmt(env,f1f,s2,0);
union Cyc_CfFlowInfo_FlowInfo ft=Cyc_NewControlFlow_anal_stmt(env,f1t,s1,0);_T3B= 
Cyc_CfFlowInfo_join_flow(fenv,ft,ff);return _T3B;}}case 5:{struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct*_T13A=(struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct*)_T12E;_T3C= _T13A->f1;_T139= _T3C.f0;_T3D= _T13A->f1;_T138= _T3D.f1;_T137= _T13A->f2;}{struct Cyc_Absyn_Exp*e=_T139;struct Cyc_Absyn_Stmt*cont=_T138;struct Cyc_Absyn_Stmt*body=_T137;
# 2526
struct _tuple20 _T13A=Cyc_NewControlFlow_pre_stmt_check(env,inflow,cont);union Cyc_CfFlowInfo_FlowInfo*_T13B;_T13B= _T13A.f1;{union Cyc_CfFlowInfo_FlowInfo*eflow_ptr=_T13B;_T3E= eflow_ptr;{
union Cyc_CfFlowInfo_FlowInfo e_inflow=*_T3E;
struct _tuple19 _T13C=Cyc_NewControlFlow_anal_test(env,e_inflow,e);union Cyc_CfFlowInfo_FlowInfo _T13D;union Cyc_CfFlowInfo_FlowInfo _T13E;_T13E= _T13C.f0;_T13D= _T13C.f1;{union Cyc_CfFlowInfo_FlowInfo f1t=_T13E;union Cyc_CfFlowInfo_FlowInfo f1f=_T13D;
union Cyc_CfFlowInfo_FlowInfo body_outflow=Cyc_NewControlFlow_anal_stmt(env,f1t,body,0);
Cyc_NewControlFlow_update_flow(env,cont,body_outflow);_T3F= f1f;
return _T3F;}}}}case 14:{struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct*_T13A=(struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct*)_T12E;_T139= _T13A->f1;_T40= _T13A->f2;_T138= _T40.f0;_T41= _T13A->f2;_T137= _T41.f1;}{struct Cyc_Absyn_Stmt*body=_T139;struct Cyc_Absyn_Exp*e=_T138;struct Cyc_Absyn_Stmt*cont=_T137;
# 2535
union Cyc_CfFlowInfo_FlowInfo body_outflow=Cyc_NewControlFlow_anal_stmt(env,inflow,body,0);
struct _tuple20 _T13A=Cyc_NewControlFlow_pre_stmt_check(env,body_outflow,cont);union Cyc_CfFlowInfo_FlowInfo*_T13B;_T13B= _T13A.f1;{union Cyc_CfFlowInfo_FlowInfo*eflow_ptr=_T13B;_T42= eflow_ptr;{
union Cyc_CfFlowInfo_FlowInfo e_inflow=*_T42;
struct _tuple19 _T13C=Cyc_NewControlFlow_anal_test(env,e_inflow,e);union Cyc_CfFlowInfo_FlowInfo _T13D;union Cyc_CfFlowInfo_FlowInfo _T13E;_T13E= _T13C.f0;_T13D= _T13C.f1;{union Cyc_CfFlowInfo_FlowInfo f1t=_T13E;union Cyc_CfFlowInfo_FlowInfo f1f=_T13D;
Cyc_NewControlFlow_update_flow(env,body,f1t);_T43= f1f;
return _T43;}}}}case 9:{struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct*_T13A=(struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct*)_T12E;_T139= _T13A->f1;_T44= _T13A->f2;_T138= _T44.f0;_T45= _T13A->f2;_T137= _T45.f1;_T46= _T13A->f3;_T136= _T46.f0;_T47= _T13A->f3;_T135= _T47.f1;_T134= _T13A->f4;}{struct Cyc_Absyn_Exp*e1=_T139;struct Cyc_Absyn_Exp*e2=_T138;struct Cyc_Absyn_Stmt*guard=_T137;struct Cyc_Absyn_Exp*e3=_T136;struct Cyc_Absyn_Stmt*cont=_T135;struct Cyc_Absyn_Stmt*body=_T134;_T48= 
# 2544
Cyc_NewControlFlow_anal_Rexp(env,0,inflow,e1,0);{union Cyc_CfFlowInfo_FlowInfo e1_outflow=_T48.f0;
struct _tuple20 _T13A=Cyc_NewControlFlow_pre_stmt_check(env,e1_outflow,guard);union Cyc_CfFlowInfo_FlowInfo*_T13B;_T13B= _T13A.f1;{union Cyc_CfFlowInfo_FlowInfo*e2flow_ptr=_T13B;_T49= e2flow_ptr;{
union Cyc_CfFlowInfo_FlowInfo e2_inflow=*_T49;
struct _tuple19 _T13C=Cyc_NewControlFlow_anal_test(env,e2_inflow,e2);union Cyc_CfFlowInfo_FlowInfo _T13D;union Cyc_CfFlowInfo_FlowInfo _T13E;_T13E= _T13C.f0;_T13D= _T13C.f1;{union Cyc_CfFlowInfo_FlowInfo f2t=_T13E;union Cyc_CfFlowInfo_FlowInfo f2f=_T13D;
union Cyc_CfFlowInfo_FlowInfo body_outflow=Cyc_NewControlFlow_anal_stmt(env,f2t,body,0);
struct _tuple20 _T13F=Cyc_NewControlFlow_pre_stmt_check(env,body_outflow,cont);union Cyc_CfFlowInfo_FlowInfo*_T140;_T140= _T13F.f1;{union Cyc_CfFlowInfo_FlowInfo*e3flow_ptr=_T140;_T4A= e3flow_ptr;{
union Cyc_CfFlowInfo_FlowInfo e3_inflow=*_T4A;_T4B= 
Cyc_NewControlFlow_anal_Rexp(env,0,e3_inflow,e3,0);{union Cyc_CfFlowInfo_FlowInfo e3_outflow=_T4B.f0;
Cyc_NewControlFlow_update_flow(env,guard,e3_outflow);_T4C= f2f;
return _T4C;}}}}}}}}case 11: _T4D= (struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct*)_T12E;_T4E= _T4D->f2;if(_T4E==0)goto _TL279;{struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct*_T13A=(struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct*)_T12E;_T139= _T13A->f1;_T4F= _T13A->f2;{struct Cyc_Absyn_Switch_clause*_T13B=*_T4F;_T138= _T13B;}}{struct Cyc_List_List*es=_T139;struct Cyc_Absyn_Switch_clause*destclause=_T138;
# 2556
struct _tuple23 _T13A=Cyc_NewControlFlow_anal_Rexps(env,inflow,es,1,1);struct Cyc_List_List*_T13B;union Cyc_CfFlowInfo_FlowInfo _T13C;_T13C= _T13A.f0;_T13B= _T13A.f1;{union Cyc_CfFlowInfo_FlowInfo f=_T13C;struct Cyc_List_List*rvals=_T13B;_T50= env;_T51= s;_T52= inflow;_T53= destclause;_T54= _T53->body;
# 2558
inflow= Cyc_NewControlFlow_unconsume_pat_vars(_T50,_T51,_T52,_T54);_T55= destclause;_T56= _T55->pat_vars;_T57= 
# 2560
_check_null(_T56);_T58= _T57->v;_T59= (struct Cyc_List_List*)_T58;_T5A= Cyc_List_split(_T59);_T5B= _T5A.f0;{struct Cyc_List_List*vds=Cyc_Tcutil_filter_nulls(_T5B);_T5C= fenv;_T5D= f;_T5E= vds;_T5F= fenv;_T60= _T5F->unknown_all;_T61= s;_T62= _T61->loc;
f= Cyc_NewControlFlow_add_vars(_T5C,_T5D,_T5E,_T60,_T62,0);_T63= destclause;_T64= _T63->pat_vars;_T65= 
# 2563
_check_null(_T64);_T66= _T65->v;{struct Cyc_List_List*x=(struct Cyc_List_List*)_T66;_TL27E: if(x!=0)goto _TL27C;else{goto _TL27D;}
_TL27C: _T67= x;_T68= _T67->hd;{struct _tuple24*_T13D=(struct _tuple24*)_T68;struct Cyc_Absyn_Exp*_T13E;struct Cyc_Absyn_Vardecl**_T13F;{struct _tuple24 _T140=*_T13D;_T13F= _T140.f0;_T13E= _T140.f1;}{struct Cyc_Absyn_Vardecl**vd=_T13F;struct Cyc_Absyn_Exp*ve=_T13E;
if(vd==0)goto _TL27F;_T69= fenv;_T6A= env;_T6B= f;_T6C= vd;_T6D= *_T6C;_T6E= 
_check_null(es);_T6F= _T6E->hd;_T70= (struct Cyc_Absyn_Exp*)_T6F;_T71= _check_null(rvals);_T72= _T71->hd;_T73= s;_T74= _T73->loc;f= Cyc_NewControlFlow_do_initialize_var(_T69,_T6A,_T6B,_T6D,_T70,_T72,_T74);_T75= rvals;
rvals= _T75->tl;_T76= es;
es= _T76->tl;goto _TL280;_TL27F: _TL280:;}}_T77= x;
# 2563
x= _T77->tl;goto _TL27E;_TL27D:;}_T78= env;_T79= destclause;_T7A= _T79->body;_T7B= f;
# 2571
Cyc_NewControlFlow_update_flow(_T78,_T7A,_T7B);_T7C= 
Cyc_CfFlowInfo_BottomFL();return _T7C;}}}_TL279: _T7E= Cyc_Warn_impos;{
# 2754
int(*_T13A)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T7E;_T7D= _T13A;}_T7F= _tag_fat("anal_stmt: bad stmt syntax or unimplemented stmt form",sizeof(char),54U);_T80= _tag_fat(0U,sizeof(void*),0);_T7D(_T7F,_T80);;case 6: _T82= Cyc_Hashtable_lookup;{
# 2577
struct Cyc_Absyn_Stmt*(*_T13A)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*)=(struct Cyc_Absyn_Stmt*(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*))_T82;_T81= _T13A;}_T83= env;_T84= _T83->succ_table;_T85= s;_T86= _T81(_T84,_T85);if(_T86!=0)goto _TL281;_T87= inflow;_T88= _T87.ReachableFL;_T89= _T88.tag;if(_T89!=2)goto _TL283;_T8A= env;_T8B= _T8A->return_type;_T8C= 
# 2580
Cyc_Tcutil_is_void_type(_T8B);if(_T8C)goto _TL285;else{goto _TL287;}
_TL287: _T8D= env;_T8E= _T8D->return_type;_T8F= Cyc_Tcutil_is_any_float_type(_T8E);if(_T8F)goto _TL28A;else{goto _TL28B;}_TL28B: _T90= env;_T91= _T90->return_type;_T92= 
Cyc_Tcutil_is_any_int_type(_T91);
# 2581
if(_T92)goto _TL28A;else{goto _TL288;}
# 2583
_TL28A: _T93= s;_T94= _T93->loc;_T95= _tag_fat("break may cause function not to return a value",sizeof(char),47U);_T96= _tag_fat(0U,sizeof(void*),0);Cyc_Warn_warn(_T94,_T95,_T96);goto _TL289;
# 2585
_TL288: _T97= s;_T98= _T97->loc;_T99= _tag_fat("break may cause function not to return a value",sizeof(char),47U);_T9A= _tag_fat(0U,sizeof(void*),0);Cyc_CfFlowInfo_aerr(_T98,_T99,_T9A);_TL289: goto _TL286;_TL285: _TL286: goto _LL55;_TL283: goto _LL55;_LL55: _T9B= env;_T9C= _T9B->noreturn;
# 2591
if(!_T9C)goto _TL28C;_T9D= s;_T9E= _T9D->loc;_T9F= 
_tag_fat("`noreturn' function might return",sizeof(char),33U);_TA0= _tag_fat(0U,sizeof(void*),0);Cyc_CfFlowInfo_aerr(_T9E,_T9F,_TA0);goto _TL28D;_TL28C: _TL28D: _TA1= s;_TA2= _TA1->loc;_TA3= env;_TA4= inflow;
Cyc_NewControlFlow_check_init_params(_TA2,_TA3,_TA4);_TA5= env;_TA6= env;_TA7= _TA6->noconsume_params;_TA8= inflow;_TA9= s;_TAA= _TA9->loc;
Cyc_NewControlFlow_unconsume_params(_TA5,_TA7,0,0,_TA8,_TAA);_TAB= 
Cyc_CfFlowInfo_BottomFL();return _TAB;_TL281: goto _LL1B;case 7: _LL1B: goto _LL1D;case 8: _LL1D: _TAD= Cyc_Hashtable_lookup;{
# 2602
struct Cyc_Absyn_Stmt*(*_T13A)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*)=(struct Cyc_Absyn_Stmt*(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*))_TAD;_TAC= _T13A;}_TAE= env;_TAF= _TAE->succ_table;_TB0= s;{struct Cyc_Absyn_Stmt*dest=_TAC(_TAF,_TB0);
if(dest!=0)goto _TL28E;_TB1= s;_TB2= _TB1->loc;_TB3= 
_tag_fat("jump has no target (should be impossible)",sizeof(char),42U);_TB4= _tag_fat(0U,sizeof(void*),0);Cyc_CfFlowInfo_aerr(_TB2,_TB3,_TB4);goto _TL28F;_TL28E: _TL28F: _TB5= env;_TB6= s;_TB7= inflow;_TB8= 
_check_null(dest);inflow= Cyc_NewControlFlow_unconsume_pat_vars(_TB5,_TB6,_TB7,_TB8);
# 2607
Cyc_NewControlFlow_update_flow(env,dest,inflow);_TB9= 
Cyc_CfFlowInfo_BottomFL();return _TB9;}case 10:{struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct*_T13A=(struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct*)_T12E;_T139= _T13A->f1;_T133= _T13A->f2;_TBA= _T13A->f3;_T138= (void*)_TBA;}{struct Cyc_Absyn_Exp*e=_T139;struct Cyc_List_List*scs=_T133;void*dec_tree=_T138;_TBB= env;_TBC= inflow;_TBD= scs;_TBE= e;_TBF= _TBE->loc;_TC0= 
# 2613
Cyc_NewControlFlow_anal_scs(_TBB,_TBC,_TBD,_TBF);return _TC0;}case 15:{struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct*_T13A=(struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct*)_T12E;_T137= _T13A->f1;_T133= _T13A->f2;_TC1= _T13A->f3;_T139= (void*)_TC1;}{struct Cyc_Absyn_Stmt*s1=_T137;struct Cyc_List_List*scs=_T133;void*dec_tree=_T139;_TC2= env;{
# 2618
long old_in_try=_TC2->in_try;_TC3= env;{
union Cyc_CfFlowInfo_FlowInfo old_tryflow=_TC3->tryflow;_TC4= env;
_TC4->in_try= 1;_TC5= env;
_TC5->tryflow= inflow;{
union Cyc_CfFlowInfo_FlowInfo s1_outflow=Cyc_NewControlFlow_anal_stmt(env,inflow,s1,0);_TC6= env;{
union Cyc_CfFlowInfo_FlowInfo scs_inflow=_TC6->tryflow;_TC7= env;
# 2626
_TC7->in_try= old_in_try;_TC8= env;
_TC8->tryflow= old_tryflow;
# 2629
Cyc_NewControlFlow_update_tryflow(env,scs_inflow);{
# 2632
union Cyc_CfFlowInfo_FlowInfo scs_outflow=Cyc_NewControlFlow_anal_scs(env,scs_inflow,scs,0U);_TC9= scs_outflow;_TCA= _TC9.BottomFL;_TCB= _TCA.tag;if(_TCB!=1)goto _TL290;goto _LL5A;_TL290: _TCC= s;_TCD= _TCC->loc;_TCE= 
# 2637
_tag_fat("last catch clause may implicitly fallthru",sizeof(char),42U);_TCF= _tag_fat(0U,sizeof(void*),0);Cyc_CfFlowInfo_aerr(_TCD,_TCE,_TCF);_LL5A:
# 2639
 outflow= s1_outflow;_TD0= outflow;
# 2641
return _TD0;}}}}}}case 12: _TD1= (struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*)_T12E;_TD2= _TD1->f1;_TD3= (struct Cyc_Absyn_Decl*)_TD2;_TD4= _TD3->r;_TD5= (int*)_TD4;_TD6= *_TD5;switch(_TD6){case 2: _TD7= (struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*)_T12E;_TD8= _TD7->f1;_TD9= (struct Cyc_Absyn_Decl*)_TD8;_TDA= _TD9->r;_TDB= (struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*)_TDA;_TDC= _TDB->f2;if(_TDC==0)goto _TL293;{struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*_T13A=(struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*)_T12E;_TDD= _T13A->f1;{struct Cyc_Absyn_Decl _T13B=*_TDD;_TDE= _T13B.r;{struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*_T13C=(struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*)_TDE;_T132= _T13C->f1;_TDF= _T13C->f2;{struct Cyc_Core_Opt _T13D=*_TDF;_TE0= _T13D.v;_T133= (struct Cyc_List_List*)_TE0;}_T136= _T13C->f3;}_T131= _T13B.loc;}_T137= _T13A->f2;}{struct Cyc_Absyn_Pat*letpat=_T132;struct Cyc_List_List*vds=_T133;struct Cyc_Absyn_Exp*e=_T136;unsigned loc=_T131;struct Cyc_Absyn_Stmt*s1=_T137;_TE1= Cyc_stderr;_TE2= 
# 2646
_tag_fat("",sizeof(char),1U);_TE3= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_TE1,_TE2,_TE3);{
# 2652
long isAliasPat=0;_TE4= letpat;{
void*_T13A=_TE4->r;_TE5= (int*)_T13A;_TE6= *_TE5;if(_TE6!=2)goto _TL295;
# 2655
isAliasPat= 1;goto _LL5F;_TL295: goto _LL5F;_LL5F:;}{
# 2660
struct _tuple1 _T13A=Cyc_NewControlFlow_get_unconsume_pat_vars(env,vds);struct Cyc_List_List*_T13B;struct Cyc_List_List*_T13C;_T13C= _T13A.f0;_T13B= _T13A.f1;{struct Cyc_List_List*roots=_T13C;struct Cyc_List_List*es=_T13B;_TE7= fenv;_TE8= env;_TE9= inflow;_TEA= vds;_TEB= roots!=0;_TEC= loc;_TED= e;_TEE= _TED->loc;_TEF= isAliasPat;
inflow= Cyc_NewControlFlow_initialize_pat_vars(_TE7,_TE8,_TE9,_TEA,_TEB,_TEC,_TEE,_TEF);_TF0= env;{
struct Cyc_List_List*old_unique_pat_vars=_TF0->unique_pat_vars;_TF1= env;{struct Cyc_List_List*_T13D=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple29*_T13E=_cycalloc(sizeof(struct _tuple29));
# 2664
_T13E->f0= 0;_T13E->f1= s;_T13E->f2= roots;_T13E->f3= es;_TF3= (struct _tuple29*)_T13E;}_T13D->hd= _TF3;_T13D->tl= old_unique_pat_vars;_TF2= (struct Cyc_List_List*)_T13D;}_TF1->unique_pat_vars= _TF2;
# 2668
inflow= Cyc_NewControlFlow_anal_stmt(env,inflow,s1,rval_opt);_TF4= env;
_TF4->unique_pat_vars= old_unique_pat_vars;
# 2672
inflow= Cyc_NewControlFlow_unconsume_params(env,roots,es,0,inflow,loc);_TF5= inflow;
# 2676
return _TF5;}}}}}_TL293: goto _LL26;case 4:{struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*_T13A=(struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*)_T12E;_TF6= _T13A->f1;{struct Cyc_Absyn_Decl _T13B=*_TF6;_TF7= _T13B.r;{struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct*_T13C=(struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct*)_TF7;_T130= _T13C->f2;_T136= _T13C->f3;}_T131= _T13B.loc;}_T137= _T13A->f2;}_TF8= (struct Cyc_Absyn_Exp*)_T136;if(_TF8==0)goto _TL297;{struct Cyc_Absyn_Vardecl*vd=_T130;struct Cyc_Absyn_Exp*open_exp_opt=_T136;unsigned loc=_T131;struct Cyc_Absyn_Stmt*s1=_T137;{struct Cyc_List_List _T13A;
# 2689
_T13A.hd= open_exp_opt;_T13A.tl= 0;_TF9= _T13A;}{
# 2688
struct Cyc_List_List l=_TF9;_TFA= env;_TFB= inflow;_TFC= & l;_TFD= (struct Cyc_List_List*)_TFC;{
# 2691
union Cyc_CfFlowInfo_FlowInfo f=Cyc_NewControlFlow_expand_unique_places(_TFA,_TFB,_TFD);
struct _tuple18 _T13A=Cyc_NewControlFlow_anal_Lexp(env,f,0,0,open_exp_opt);union Cyc_CfFlowInfo_AbsLVal _T13B;_T13B= _T13A.f1;{union Cyc_CfFlowInfo_AbsLVal lval=_T13B;
struct _tuple14 _T13C=Cyc_NewControlFlow_anal_Rexp(env,1,f,open_exp_opt,0);union Cyc_CfFlowInfo_FlowInfo _T13D;_T13D= _T13C.f0;{union Cyc_CfFlowInfo_FlowInfo f=_T13D;
struct Cyc_List_List*roots=0;
struct Cyc_List_List*es=0;{struct Cyc_Dict_Dict _T13E;_TFE= f;_TFF= _TFE.ReachableFL;_T100= _TFF.tag;if(_T100!=2)goto _TL299;_T101= f;_T102= _T101.ReachableFL;_T13E= _T102.val;{struct Cyc_Dict_Dict fd=_T13E;{struct Cyc_CfFlowInfo_Place*_T13F;_T103= lval;_T104= _T103.PlaceL;_T105= _T104.tag;if(_T105!=1)goto _TL29B;_T106= lval;_T107= _T106.PlaceL;_T13F= _T107.val;{struct Cyc_CfFlowInfo_Place*p=_T13F;
# 2702
void*new_rval=Cyc_CfFlowInfo_lookup_place(fd,p);{struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*_T140=_cycalloc(sizeof(struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct));_T140->tag= 8;
_T140->f1= vd;_T140->f2= new_rval;_T108= (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct*)_T140;}new_rval= (void*)_T108;_T109= fenv;_T10A= open_exp_opt;_T10B= _T10A->loc;_T10C= fd;_T10D= p;_T10E= new_rval;
fd= Cyc_CfFlowInfo_assign_place(_T109,_T10B,_T10C,_T10D,_T10E);
f= Cyc_CfFlowInfo_ReachableFL(fd);{
struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*root;root= _cycalloc(sizeof(struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct));_T10F= root;_T10F->tag= 0;_T110= root;_T110->f1= vd;{
struct Cyc_CfFlowInfo_Place*rp;rp= _cycalloc(sizeof(struct Cyc_CfFlowInfo_Place));_T111= rp;_T112= root;_T111->root= (void*)_T112;_T113= rp;_T113->path= 0;{struct Cyc_List_List*_T140=_cycalloc(sizeof(struct Cyc_List_List));
_T140->hd= rp;_T140->tl= roots;_T114= (struct Cyc_List_List*)_T140;}roots= _T114;{struct Cyc_List_List*_T140=_cycalloc(sizeof(struct Cyc_List_List));
_T140->hd= open_exp_opt;_T140->tl= es;_T115= (struct Cyc_List_List*)_T140;}es= _T115;goto _LL72;}}}_TL29B: goto _LL72;_LL72:;}goto _LL6D;}_TL299: goto _LL6D;_LL6D:;}{struct Cyc_List_List _T13E;
# 2725
_T13E.hd= vd;_T13E.tl= 0;_T116= _T13E;}{struct Cyc_List_List vds=_T116;_T117= fenv;_T118= f;_T119= & vds;_T11A= (struct Cyc_List_List*)_T119;_T11B= fenv;_T11C= _T11B->unknown_all;_T11D= loc;
f= Cyc_NewControlFlow_add_vars(_T117,_T118,_T11A,_T11C,_T11D,0);_T11E= env;{
# 2729
struct Cyc_List_List*old_unique_pat_vars=_T11E->unique_pat_vars;_T11F= env;{struct Cyc_List_List*_T13E=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple29*_T13F=_cycalloc(sizeof(struct _tuple29));
_T13F->f0= 1;_T13F->f1= s;_T13F->f2= roots;_T13F->f3= es;_T121= (struct _tuple29*)_T13F;}_T13E->hd= _T121;_T13E->tl= old_unique_pat_vars;_T120= (struct Cyc_List_List*)_T13E;}_T11F->unique_pat_vars= _T120;
# 2734
f= Cyc_NewControlFlow_anal_stmt(env,f,s1,rval_opt);_T122= env;
_T122->unique_pat_vars= old_unique_pat_vars;
# 2738
f= Cyc_NewControlFlow_unconsume_params(env,roots,es,1,f,loc);_T123= f;
# 2742
return _T123;}}}}}}}_TL297: goto _LL26;default: _LL26:{struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*_T13A=(struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*)_T12E;_T12F= _T13A->f1;_T137= _T13A->f2;}{struct Cyc_Absyn_Decl*d=_T12F;struct Cyc_Absyn_Stmt*s=_T137;_T124= env;_T125= 
# 2745
Cyc_NewControlFlow_anal_decl(env,inflow,d);_T126= s;_T127= rval_opt;outflow= Cyc_NewControlFlow_anal_stmt(_T124,_T125,_T126,_T127);_T128= Cyc_Flags_warn_lose_unique;
if(!_T128)goto _TL29D;
Cyc_NewControlFlow_check_dropped_unique(env,outflow,d);goto _TL29E;_TL29D: _TL29E: _T129= outflow;
return _T129;}};default:{struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct*_T13A=(struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct*)_T12E;_T137= _T13A->f2;}{struct Cyc_Absyn_Stmt*s=_T137;_T12A= 
# 2751
Cyc_NewControlFlow_anal_stmt(env,inflow,s,rval_opt);return _T12A;}};}}}}
# 2758
static void Cyc_NewControlFlow_check_nested_fun(struct Cyc_JumpAnalysis_Jump_Anal_Result*,struct Cyc_CfFlowInfo_FlowEnv*,union Cyc_CfFlowInfo_FlowInfo,struct Cyc_Absyn_Fndecl*);
# 2762
static union Cyc_CfFlowInfo_FlowInfo Cyc_NewControlFlow_anal_decl(struct Cyc_NewControlFlow_AnalEnv*env,union Cyc_CfFlowInfo_FlowInfo inflow,struct Cyc_Absyn_Decl*decl){struct Cyc_NewControlFlow_AnalEnv*_T0;struct Cyc_Absyn_Decl*_T1;int*_T2;unsigned _T3;struct Cyc_Absyn_Vardecl*_T4;enum Cyc_Absyn_Scope _T5;int _T6;union Cyc_CfFlowInfo_FlowInfo _T7;struct Cyc_List_List _T8;struct Cyc_CfFlowInfo_FlowEnv*_T9;union Cyc_CfFlowInfo_FlowInfo _TA;struct Cyc_List_List*_TB;struct Cyc_List_List*_TC;struct Cyc_CfFlowInfo_FlowEnv*_TD;void*_TE;struct Cyc_Absyn_Decl*_TF;unsigned _T10;struct Cyc_Absyn_Vardecl*_T11;union Cyc_CfFlowInfo_FlowInfo _T12;struct Cyc_CfFlowInfo_FlowEnv*_T13;struct Cyc_NewControlFlow_AnalEnv*_T14;union Cyc_CfFlowInfo_FlowInfo _T15;struct Cyc_Absyn_Vardecl*_T16;struct Cyc_Absyn_Exp*_T17;void*_T18;struct Cyc_Absyn_Decl*_T19;unsigned _T1A;union Cyc_CfFlowInfo_FlowInfo _T1B;struct Cyc_CfFlowInfo_FlowEnv*_T1C;union Cyc_CfFlowInfo_FlowInfo _T1D;struct Cyc_List_List*_T1E;struct Cyc_CfFlowInfo_FlowEnv*_T1F;void*_T20;struct Cyc_Absyn_Decl*_T21;unsigned _T22;union Cyc_CfFlowInfo_FlowInfo _T23;struct Cyc_NewControlFlow_AnalEnv*_T24;struct Cyc_JumpAnalysis_Jump_Anal_Result*_T25;struct Cyc_CfFlowInfo_FlowEnv*_T26;union Cyc_CfFlowInfo_FlowInfo _T27;struct Cyc_Absyn_Fndecl*_T28;struct Cyc_Absyn_Fndecl*_T29;struct Cyc_CfFlowInfo_FlowEnv*_T2A;union Cyc_CfFlowInfo_FlowInfo _T2B;struct Cyc_List_List*_T2C;struct Cyc_CfFlowInfo_FlowEnv*_T2D;void*_T2E;struct Cyc_Absyn_Decl*_T2F;unsigned _T30;union Cyc_CfFlowInfo_FlowInfo _T31;int(*_T32)(struct _fat_ptr,struct _fat_ptr);void*(*_T33)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T34;struct _fat_ptr _T35;struct Cyc_List_List _T36;struct Cyc_CfFlowInfo_FlowEnv*_T37;union Cyc_CfFlowInfo_FlowInfo _T38;struct Cyc_List_List*_T39;struct Cyc_List_List*_T3A;struct Cyc_CfFlowInfo_FlowEnv*_T3B;void*_T3C;struct Cyc_Absyn_Decl*_T3D;unsigned _T3E;union Cyc_CfFlowInfo_FlowInfo _T3F;int(*_T40)(struct _fat_ptr,struct _fat_ptr);void*(*_T41)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T42;struct _fat_ptr _T43;_T0= env;{
struct Cyc_CfFlowInfo_FlowEnv*fenv=_T0->fenv;_T1= decl;{
# 2765
void*_T44=_T1->r;struct Cyc_Absyn_Exp*_T45;struct Cyc_Absyn_Tvar*_T46;struct Cyc_Absyn_Fndecl*_T47;struct Cyc_List_List*_T48;struct Cyc_Absyn_Vardecl*_T49;_T2= (int*)_T44;_T3= *_T2;switch(_T3){case 0:{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T4A=(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T44;_T49= _T4A->f1;}{struct Cyc_Absyn_Vardecl*vd=_T49;_T4= vd;_T5= _T4->sc;_T6= (int)_T5;
# 2771
if(_T6!=0)goto _TL2A0;_T7= inflow;
return _T7;_TL2A0:{struct Cyc_List_List _T4A;
# 2776
_T4A.hd= vd;_T4A.tl= 0;_T8= _T4A;}{struct Cyc_List_List vds=_T8;_T9= fenv;_TA= inflow;_TB= & vds;_TC= (struct Cyc_List_List*)_TB;_TD= fenv;_TE= _TD->unknown_none;_TF= decl;_T10= _TF->loc;
inflow= Cyc_NewControlFlow_add_vars(_T9,_TA,_TC,_TE,_T10,0);_T11= vd;{
struct Cyc_Absyn_Exp*e=_T11->initializer;
if(e!=0)goto _TL2A2;_T12= inflow;
return _T12;_TL2A2: {
struct _tuple14 _T4A=Cyc_NewControlFlow_anal_Rexp(env,1,inflow,e,0);void*_T4B;union Cyc_CfFlowInfo_FlowInfo _T4C;_T4C= _T4A.f0;_T4B= _T4A.f1;{union Cyc_CfFlowInfo_FlowInfo f=_T4C;void*r=_T4B;_T13= fenv;_T14= env;_T15= f;_T16= vd;_T17= e;_T18= r;_T19= decl;_T1A= _T19->loc;_T1B= 
Cyc_NewControlFlow_do_initialize_var(_T13,_T14,_T15,_T16,_T17,_T18,_T1A);return _T1B;}}}}}case 3:{struct Cyc_Absyn_Letv_d_Absyn_Raw_decl_struct*_T4A=(struct Cyc_Absyn_Letv_d_Absyn_Raw_decl_struct*)_T44;_T48= _T4A->f1;}{struct Cyc_List_List*vds=_T48;_T1C= fenv;_T1D= inflow;_T1E= vds;_T1F= fenv;_T20= _T1F->unknown_none;_T21= decl;_T22= _T21->loc;_T23= 
# 2785
Cyc_NewControlFlow_add_vars(_T1C,_T1D,_T1E,_T20,_T22,0);return _T23;}case 1:{struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*_T4A=(struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*)_T44;_T47= _T4A->f1;}{struct Cyc_Absyn_Fndecl*fd=_T47;_T24= env;_T25= _T24->all_tables;_T26= fenv;_T27= inflow;_T28= fd;
# 2788
Cyc_NewControlFlow_check_nested_fun(_T25,_T26,_T27,_T28);_T29= fd;{
struct Cyc_Absyn_Vardecl*vd=_T29->fn_vardecl;_T2A= fenv;_T2B= inflow;{struct Cyc_List_List*_T4A=_cycalloc(sizeof(struct Cyc_List_List));
# 2793
({__typeof__(_check_null(vd))_T4B=_check_null(vd);_T4A->hd= _T4B;});_T4A->tl= 0;_T2C= (struct Cyc_List_List*)_T4A;}_T2D= fenv;_T2E= _T2D->unknown_all;_T2F= decl;_T30= _T2F->loc;_T31= Cyc_NewControlFlow_add_vars(_T2A,_T2B,_T2C,_T2E,_T30,0);return _T31;}}case 4:{struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct*_T4A=(struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct*)_T44;_T46= _T4A->f1;_T49= _T4A->f2;_T45= _T4A->f3;}{struct Cyc_Absyn_Tvar*tv=_T46;struct Cyc_Absyn_Vardecl*vd=_T49;struct Cyc_Absyn_Exp*open_exp_opt=_T45;
# 2797
if(open_exp_opt==0)goto _TL2A4;_T33= Cyc_Warn_impos;{
int(*_T4A)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T33;_T32= _T4A;}_T34= _tag_fat("found open expression in declaration!",sizeof(char),38U);_T35= _tag_fat(0U,sizeof(void*),0);_T32(_T34,_T35);goto _TL2A5;_TL2A4: _TL2A5:{struct Cyc_List_List _T4A;
_T4A.hd= vd;_T4A.tl= 0;_T36= _T4A;}{struct Cyc_List_List vds=_T36;_T37= fenv;_T38= inflow;_T39= & vds;_T3A= (struct Cyc_List_List*)_T39;_T3B= fenv;_T3C= _T3B->unknown_all;_T3D= decl;_T3E= _T3D->loc;_T3F= 
Cyc_NewControlFlow_add_vars(_T37,_T38,_T3A,_T3C,_T3E,0);return _T3F;}}default: _T41= Cyc_Warn_impos;{
# 2804
int(*_T4A)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T41;_T40= _T4A;}_T42= _tag_fat("anal_decl: unexpected decl variant",sizeof(char),35U);_T43= _tag_fat(0U,sizeof(void*),0);_T40(_T42,_T43);};}}}
# 2812
static void Cyc_NewControlFlow_check_fun(struct Cyc_JumpAnalysis_Jump_Anal_Result*tables,struct Cyc_Absyn_Fndecl*fd){struct _handler_cons*_T0;int _T1;struct Cyc_JumpAnalysis_Jump_Anal_Result*_T2;struct Cyc_CfFlowInfo_FlowEnv*_T3;struct Cyc_CfFlowInfo_FlowEnv*_T4;struct Cyc_Dict_Dict _T5;union Cyc_CfFlowInfo_FlowInfo _T6;struct Cyc_Absyn_Fndecl*_T7;void*_T8;struct Cyc_Dict_Absent_exn_struct*_T9;char*_TA;char*_TB;struct Cyc_Dict_Absent_exn_struct*_TC;void*_TD;struct _handler_cons _TE;_T0= & _TE;_push_handler(_T0);{int _TF=0;_T1= setjmp(_TE.handler);if(!_T1)goto _TL2A6;_TF= 1;goto _TL2A7;_TL2A6: _TL2A7: if(_TF)goto _TL2A8;else{goto _TL2AA;}_TL2AA:{
# 2814
struct Cyc_CfFlowInfo_FlowEnv*fenv=Cyc_CfFlowInfo_new_flow_env();_T2= tables;_T3= fenv;_T4= fenv;_T5= _T4->mt_flowdict;_T6= 
Cyc_CfFlowInfo_ReachableFL(_T5);_T7= fd;Cyc_NewControlFlow_check_nested_fun(_T2,_T3,_T6,_T7);}_pop_handler();goto _TL2A9;_TL2A8: _T8= Cyc_Core_get_exn_thrown();{void*_T10=(void*)_T8;void*_T11;_T9= (struct Cyc_Dict_Absent_exn_struct*)_T10;_TA= _T9->tag;_TB= Cyc_Dict_Absent;if(_TA!=_TB)goto _TL2AB;
# 2820
if(Cyc_Warn_num_errors <= 0)goto _TL2AD;goto _LL0;
# 2823
_TL2AD:{struct Cyc_Dict_Absent_exn_struct*_T12=_cycalloc(sizeof(struct Cyc_Dict_Absent_exn_struct));_T12->tag= Cyc_Dict_Absent;_TC= (struct Cyc_Dict_Absent_exn_struct*)_T12;}_TD= (void*)_TC;Cyc_Core_rethrow(_TD);goto _TL2AC;_TL2AB: _T11= _T10;{void*exn=_T11;_rethrow(exn);}_TL2AC: _LL0:;}_TL2A9:;}}
# 2827
static int Cyc_NewControlFlow_hash_ptr(void*s){void*_T0;int _T1;_T0= s;_T1= (int)_T0;return _T1;}
# 2832
static struct Cyc_List_List*Cyc_NewControlFlow_get_noconsume_params(struct Cyc_List_List*aqb,struct Cyc_List_List*param_vardecls,struct Cyc_List_List*atts){struct _fat_ptr _T0;int _T1;long*_T2;struct _RegionHandle*_T3;unsigned _T4;unsigned _T5;struct Cyc_List_List*_T6;int*_T7;unsigned _T8;struct _fat_ptr _T9;int _TA;unsigned char*_TB;long*_TC;struct Cyc_List_List*_TD;struct Cyc_List_List*_TE;void*_TF;struct Cyc_List_List*_T10;struct Cyc_Absyn_Vardecl*_T11;void*_T12;long _T13;struct _fat_ptr _T14;int _T15;unsigned char*_T16;long*_T17;long _T18;struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*_T19;struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*_T1A;struct Cyc_CfFlowInfo_Place*_T1B;struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*_T1C;struct Cyc_CfFlowInfo_Place*_T1D;struct Cyc_List_List*_T1E;struct Cyc_List_List*_T1F;struct _RegionHandle _T20=_new_region(0U,"r");struct _RegionHandle*r=& _T20;_push_region(r);{
# 2835
int len=Cyc_List_length(param_vardecls);_T1= len;{unsigned _T21=(unsigned)_T1;_T3= r;_T4= _check_times(_T21,sizeof(long));{long*_T22=_region_malloc(_T3,0U,_T4);{unsigned _T23=_T21;unsigned i;i= 0;_TL2B2: if(i < _T23)goto _TL2B0;else{goto _TL2B1;}_TL2B0: _T5= i;
# 2837
_T22[_T5]= 0;i= i + 1;goto _TL2B2;_TL2B1:;}_T2= (long*)_T22;}_T0= 
# 2836
_tag_fat(_T2,sizeof(long),_T21);}{struct _fat_ptr cons=_T0;
# 2840
_TL2B6: if(atts!=0)goto _TL2B4;else{goto _TL2B5;}
_TL2B4: _T6= atts;{void*_T21=_T6->hd;int _T22;_T7= (int*)_T21;_T8= *_T7;switch(_T8){case 23:{struct Cyc_Absyn_Consume_att_Absyn_Attribute_struct*_T23=(struct Cyc_Absyn_Consume_att_Absyn_Attribute_struct*)_T21;_T22= _T23->f1;}{int i=_T22;_T22= i;goto _LL4;}case 22:{struct Cyc_Absyn_Noliveunique_att_Absyn_Attribute_struct*_T23=(struct Cyc_Absyn_Noliveunique_att_Absyn_Attribute_struct*)_T21;_T22= _T23->f1;}_LL4: {int i=_T22;_T9= cons;_TA= i - 1;_TB= _check_fat_subscript(_T9,sizeof(long),_TA);_TC= (long*)_TB;
# 2845
*_TC= 1;goto _LL0;}default: goto _LL0;}_LL0:;}_TD= atts;
# 2840
atts= _TD->tl;goto _TL2B6;_TL2B5: {
# 2851
struct Cyc_List_List*noconsume_roots=0;{
int i=0;_TL2BB: if(param_vardecls!=0)goto _TL2B9;else{goto _TL2BA;}
_TL2B9: _TE= param_vardecls;_TF= _TE->hd;{struct Cyc_Absyn_Vardecl*vd=(struct Cyc_Absyn_Vardecl*)_TF;_T10= aqb;_T11= vd;_T12= _T11->type;_T13= 
Cyc_Tcutil_is_noalias_pointer(_T10,_T12,0);if(!_T13)goto _TL2BC;_T14= cons;_T15= i;_T16= _check_fat_subscript(_T14,sizeof(long),_T15);_T17= (long*)_T16;_T18= *_T17;if(_T18)goto _TL2BC;else{goto _TL2BE;}
_TL2BE:{struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*root;root= _cycalloc(sizeof(struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct));_T19= root;_T19->tag= 0;_T1A= root;_T1A->f1= vd;{
struct Cyc_CfFlowInfo_Place*rp;rp= _cycalloc(sizeof(struct Cyc_CfFlowInfo_Place));_T1B= rp;_T1C= root;_T1B->root= (void*)_T1C;_T1D= rp;_T1D->path= 0;{struct Cyc_List_List*_T21=_cycalloc(sizeof(struct Cyc_List_List));
_T21->hd= rp;_T21->tl= noconsume_roots;_T1E= (struct Cyc_List_List*)_T21;}noconsume_roots= _T1E;}}goto _TL2BD;_TL2BC: _TL2BD:;}_T1F= param_vardecls;
# 2852
param_vardecls= _T1F->tl;i= i + 1;goto _TL2BB;_TL2BA:;}{struct Cyc_List_List*_T21=noconsume_roots;_npop_handler(0);return _T21;}}}}_pop_region();}
# 2863
static void Cyc_NewControlFlow_check_nested_fun(struct Cyc_JumpAnalysis_Jump_Anal_Result*tables,struct Cyc_CfFlowInfo_FlowEnv*fenv,union Cyc_CfFlowInfo_FlowInfo inflow,struct Cyc_Absyn_Fndecl*fd){struct Cyc_Absyn_Fndecl*_T0;struct Cyc_Absyn_Stmt*_T1;struct Cyc_CfFlowInfo_FlowEnv*_T2;union Cyc_CfFlowInfo_FlowInfo _T3;struct Cyc_Absyn_Fndecl*_T4;struct Cyc_Core_Opt*_T5;struct Cyc_Core_Opt*_T6;void*_T7;struct Cyc_List_List*_T8;struct Cyc_CfFlowInfo_FlowEnv*_T9;void*_TA;unsigned _TB;struct Cyc_Dict_Dict _TC;struct _union_FlowInfo_ReachableFL _TD;unsigned _TE;struct _union_FlowInfo_ReachableFL _TF;struct Cyc_Absyn_Fndecl*_T10;void*_T11;void*_T12;int*_T13;int _T14;struct Cyc_Absyn_FnInfo _T15;int(*_T16)(struct _fat_ptr,struct _fat_ptr);void*(*_T17)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T18;struct _fat_ptr _T19;struct Cyc_List_List*_T1A;struct Cyc_Absyn_Fndecl*_T1B;struct Cyc_Core_Opt*_T1C;struct Cyc_Core_Opt*_T1D;void*_T1E;struct Cyc_List_List*_T1F;struct Cyc_List_List*_T20;struct Cyc_List_List*_T21;int*_T22;unsigned _T23;int _T24;struct Cyc_Absyn_Vardecl*(*_T25)(struct Cyc_List_List*,int);void*(*_T26)(struct Cyc_List_List*,int);struct Cyc_Absyn_Fndecl*_T27;struct Cyc_Core_Opt*_T28;void*_T29;struct Cyc_List_List*_T2A;int _T2B;struct Cyc_Absyn_Vardecl*_T2C;void*_T2D;struct Cyc_CfFlowInfo_FlowEnv*_T2E;struct Cyc_List_List*_T2F;void*_T30;struct Cyc_Absyn_Exp*_T31;int _T32;struct Cyc_CfFlowInfo_FlowEnv*_T33;void*_T34;struct Cyc_CfFlowInfo_FlowEnv*_T35;void*_T36;void*_T37;struct Cyc_CfFlowInfo_InitParam_CfFlowInfo_Root_struct*_T38;struct Cyc_CfFlowInfo_InitParam_CfFlowInfo_Root_struct*_T39;struct Cyc_CfFlowInfo_InitParam_CfFlowInfo_Root_struct*_T3A;struct Cyc_CfFlowInfo_Place*_T3B;struct Cyc_CfFlowInfo_InitParam_CfFlowInfo_Root_struct*_T3C;struct Cyc_CfFlowInfo_Place*_T3D;struct Cyc_Dict_Dict _T3E;struct Cyc_CfFlowInfo_InitParam_CfFlowInfo_Root_struct*_T3F;void*_T40;void*_T41;struct Cyc_Dict_Dict _T42;struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*_T43;void*_T44;struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct*_T45;void*_T46;struct Cyc_Absyn_Vardecl*(*_T47)(struct Cyc_List_List*,int);void*(*_T48)(struct Cyc_List_List*,int);struct Cyc_Absyn_Fndecl*_T49;struct Cyc_Core_Opt*_T4A;struct Cyc_Core_Opt*_T4B;void*_T4C;struct Cyc_List_List*_T4D;int _T4E;struct Cyc_Absyn_Vardecl*_T4F;void*_T50;struct Cyc_CfFlowInfo_InitParam_CfFlowInfo_Root_struct*_T51;struct Cyc_CfFlowInfo_InitParam_CfFlowInfo_Root_struct*_T52;struct Cyc_CfFlowInfo_InitParam_CfFlowInfo_Root_struct*_T53;struct Cyc_CfFlowInfo_Place*_T54;struct Cyc_CfFlowInfo_InitParam_CfFlowInfo_Root_struct*_T55;struct Cyc_CfFlowInfo_Place*_T56;struct Cyc_Dict_Dict _T57;struct Cyc_CfFlowInfo_InitParam_CfFlowInfo_Root_struct*_T58;void*_T59;struct Cyc_CfFlowInfo_FlowEnv*_T5A;void*_T5B;struct Cyc_CfFlowInfo_FlowEnv*_T5C;void*_T5D;void*_T5E;struct Cyc_Dict_Dict _T5F;struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*_T60;void*_T61;struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct*_T62;void*_T63;struct Cyc_List_List*_T64;struct Cyc_List_List*_T65;void*_T66;struct Cyc_Hashtable_Table*(*_T67)(int,int(*)(struct Cyc_Absyn_Stmt*,struct Cyc_Absyn_Stmt*),int(*)(struct Cyc_Absyn_Stmt*));struct Cyc_Hashtable_Table*(*_T68)(int,int(*)(void*,void*),int(*)(void*));int(*_T69)(struct Cyc_Absyn_Stmt*,struct Cyc_Absyn_Stmt*);int(*_T6A)(void*,void*);int(*_T6B)(struct Cyc_Absyn_Stmt*);struct Cyc_NewControlFlow_AnalEnv*_T6C;struct Cyc_NewControlFlow_AnalEnv*_T6D;struct Cyc_Hashtable_Table*(*_T6E)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Fndecl*);void*(*_T6F)(struct Cyc_Hashtable_Table*,void*);struct Cyc_JumpAnalysis_Jump_Anal_Result*_T70;struct Cyc_Hashtable_Table*_T71;struct Cyc_Absyn_Fndecl*_T72;struct Cyc_NewControlFlow_AnalEnv*_T73;struct Cyc_Hashtable_Table*(*_T74)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Fndecl*);void*(*_T75)(struct Cyc_Hashtable_Table*,void*);struct Cyc_JumpAnalysis_Jump_Anal_Result*_T76;struct Cyc_Hashtable_Table*_T77;struct Cyc_Absyn_Fndecl*_T78;struct Cyc_NewControlFlow_AnalEnv*_T79;struct Cyc_NewControlFlow_AnalEnv*_T7A;struct Cyc_NewControlFlow_AnalEnv*_T7B;struct Cyc_NewControlFlow_AnalEnv*_T7C;struct Cyc_NewControlFlow_AnalEnv*_T7D;struct Cyc_NewControlFlow_AnalEnv*_T7E;struct Cyc_NewControlFlow_AnalEnv*_T7F;struct Cyc_Absyn_Fndecl*_T80;struct Cyc_Absyn_FnInfo _T81;struct Cyc_NewControlFlow_AnalEnv*_T82;struct Cyc_NewControlFlow_AnalEnv*_T83;struct Cyc_NewControlFlow_AnalEnv*_T84;struct Cyc_NewControlFlow_AnalEnv*_T85;struct Cyc_NewControlFlow_AnalEnv*_T86;struct Cyc_NewControlFlow_AnalEnv*_T87;long _T88;long _T89;struct Cyc_NewControlFlow_AnalEnv*_T8A;struct Cyc_NewControlFlow_AnalEnv*_T8B;struct Cyc_NewControlFlow_AnalEnv*_T8C;union Cyc_CfFlowInfo_FlowInfo _T8D;struct Cyc_Absyn_Fndecl*_T8E;struct Cyc_Absyn_Stmt*_T8F;union Cyc_CfFlowInfo_FlowInfo _T90;struct _union_FlowInfo_BottomFL _T91;unsigned _T92;struct Cyc_NewControlFlow_AnalEnv*_T93;struct Cyc_NewControlFlow_AnalEnv*_T94;struct Cyc_List_List*_T95;union Cyc_CfFlowInfo_FlowInfo _T96;unsigned _T97;long _T98;unsigned _T99;struct _fat_ptr _T9A;struct _fat_ptr _T9B;struct Cyc_Absyn_Fndecl*_T9C;struct Cyc_Absyn_FnInfo _T9D;void*_T9E;long _T9F;struct Cyc_Absyn_Fndecl*_TA0;struct Cyc_Absyn_FnInfo _TA1;void*_TA2;long _TA3;struct Cyc_Absyn_Fndecl*_TA4;struct Cyc_Absyn_FnInfo _TA5;void*_TA6;long _TA7;unsigned _TA8;struct _fat_ptr _TA9;struct _fat_ptr _TAA;unsigned _TAB;struct _fat_ptr _TAC;struct _fat_ptr _TAD;_T0= fd;_T1= _T0->body;{
# 2869
unsigned loc=_T1->loc;_T2= fenv;_T3= inflow;_T4= fd;_T5= _T4->param_vardecls;_T6= 
_check_null(_T5);_T7= _T6->v;_T8= (struct Cyc_List_List*)_T7;_T9= fenv;_TA= _T9->unknown_all;_TB= loc;inflow= Cyc_NewControlFlow_add_vars(_T2,_T3,_T8,_TA,_TB,1);{
# 2874
struct Cyc_List_List*param_roots=0;{union Cyc_CfFlowInfo_FlowInfo _TAE=inflow;_TD= _TAE.ReachableFL;_TE= _TD.tag;if(_TE==2)goto _TL2BF;_throw_match();goto _TL2C0;_TL2BF: _TL2C0: _TF= _TAE.ReachableFL;_TC= _TF.val;}{
struct Cyc_Dict_Dict d=_TC;
# 2884
struct Cyc_List_List*aquals_bounds=Cyc_Tcutil_get_aquals_bounds(fd);
# 2887
struct Cyc_List_List*atts;_T10= fd;_T11= _T10->cached_type;_T12= 
_check_null(_T11);{void*_TAE=Cyc_Absyn_compress(_T12);struct Cyc_List_List*_TAF;_T13= (int*)_TAE;_T14= *_T13;if(_T14!=6)goto _TL2C1;{struct Cyc_Absyn_FnType_Absyn_Type_struct*_TB0=(struct Cyc_Absyn_FnType_Absyn_Type_struct*)_TAE;_T15= _TB0->f1;_TAF= _T15.attributes;}{struct Cyc_List_List*as=_TAF;
# 2890
atts= as;goto _LL0;}_TL2C1: _T17= Cyc_Warn_impos;{
# 2893
int(*_TB0)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T17;_T16= _TB0;}_T18= _tag_fat("check_fun: non-function type cached with fndecl_t",sizeof(char),50U);_T19= _tag_fat(0U,sizeof(void*),0);_T16(_T18,_T19);_LL0:;}_T1A= aquals_bounds;_T1B= fd;_T1C= _T1B->param_vardecls;_T1D= 
# 2896
_check_null(_T1C);_T1E= _T1D->v;_T1F= (struct Cyc_List_List*)_T1E;_T20= atts;{
# 2895
struct Cyc_List_List*noconsume_roots=
Cyc_NewControlFlow_get_noconsume_params(_T1A,_T1F,_T20);
# 2899
_TL2C6: if(atts!=0)goto _TL2C4;else{goto _TL2C5;}
_TL2C4: _T21= atts;{void*_TAE=_T21->hd;int _TAF;_T22= (int*)_TAE;_T23= *_T22;switch(_T23){case 22:{struct Cyc_Absyn_Noliveunique_att_Absyn_Attribute_struct*_TB0=(struct Cyc_Absyn_Noliveunique_att_Absyn_Attribute_struct*)_TAE;_TAF= _TB0->f1;}{int i=_TAF;_T24= - 1;{
# 2902
struct Cyc_Absyn_Exp*bogus_exp=Cyc_Absyn_signed_int_exp(_T24,0U);_T26= Cyc_List_nth;{
struct Cyc_Absyn_Vardecl*(*_TB0)(struct Cyc_List_List*,int)=(struct Cyc_Absyn_Vardecl*(*)(struct Cyc_List_List*,int))_T26;_T25= _TB0;}_T27= fd;_T28= _T27->param_vardecls;_T29= _T28->v;_T2A= (struct Cyc_List_List*)_T29;_T2B= i - 1;{struct Cyc_Absyn_Vardecl*vd=_T25(_T2A,_T2B);_T2C= vd;_T2D= _T2C->type;{
void*t=Cyc_Absyn_compress(_T2D);
void*elttype=Cyc_Tcutil_pointer_elt_type(t);_T2E= fenv;_T2F= aquals_bounds;_T30= elttype;_T31= bogus_exp;_T32= - 1;_T33= fenv;_T34= elttype;_T35= fenv;_T36= _T35->unknown_all;_T37= 
# 2908
Cyc_CfFlowInfo_typ_to_absrval(_T33,_T34,0,_T36);{
# 2906
void*rval=
Cyc_CfFlowInfo_make_unique_consumed(_T2E,_T2F,_T30,_T31,_T32,_T37,0);
# 2909
struct Cyc_CfFlowInfo_InitParam_CfFlowInfo_Root_struct*r;r= _cycalloc(sizeof(struct Cyc_CfFlowInfo_InitParam_CfFlowInfo_Root_struct));_T38= r;_T38->tag= 2;_T39= r;_T39->f1= i;_T3A= r;_T3A->f2= t;{
struct Cyc_CfFlowInfo_Place*rp;rp= _cycalloc(sizeof(struct Cyc_CfFlowInfo_Place));_T3B= rp;_T3C= r;_T3B->root= (void*)_T3C;_T3D= rp;_T3D->path= 0;_T3E= d;_T3F= r;_T40= (void*)_T3F;_T41= rval;
d= Cyc_Dict_insert(_T3E,_T40,_T41);_T42= d;{struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*_TB0=_cycalloc(sizeof(struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct));_TB0->tag= 0;
_TB0->f1= vd;_T43= (struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*)_TB0;}_T44= (void*)_T43;{struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct*_TB0=_cycalloc(sizeof(struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct));_TB0->tag= 4;_TB0->f1= rp;_T45= (struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct*)_TB0;}_T46= (void*)_T45;d= Cyc_Dict_insert(_T42,_T44,_T46);goto _LL5;}}}}}}case 21:{struct Cyc_Absyn_Initializes_att_Absyn_Attribute_struct*_TB0=(struct Cyc_Absyn_Initializes_att_Absyn_Attribute_struct*)_TAE;_TAF= _TB0->f1;}{int i=_TAF;_T48= Cyc_List_nth;{
# 2915
struct Cyc_Absyn_Vardecl*(*_TB0)(struct Cyc_List_List*,int)=(struct Cyc_Absyn_Vardecl*(*)(struct Cyc_List_List*,int))_T48;_T47= _TB0;}_T49= fd;_T4A= _T49->param_vardecls;_T4B= _check_null(_T4A);_T4C= _T4B->v;_T4D= (struct Cyc_List_List*)_T4C;_T4E= i - 1;{struct Cyc_Absyn_Vardecl*vd=_T47(_T4D,_T4E);_T4F= vd;_T50= _T4F->type;{
void*elttype=Cyc_Tcutil_pointer_elt_type(_T50);
struct Cyc_CfFlowInfo_InitParam_CfFlowInfo_Root_struct*r;r= _cycalloc(sizeof(struct Cyc_CfFlowInfo_InitParam_CfFlowInfo_Root_struct));_T51= r;_T51->tag= 2;_T52= r;_T52->f1= i;_T53= r;_T53->f2= elttype;{
struct Cyc_CfFlowInfo_Place*rp;rp= _cycalloc(sizeof(struct Cyc_CfFlowInfo_Place));_T54= rp;_T55= r;_T54->root= (void*)_T55;_T56= rp;_T56->path= 0;_T57= d;_T58= r;_T59= (void*)_T58;_T5A= fenv;_T5B= elttype;_T5C= fenv;_T5D= _T5C->esc_none;_T5E= 
Cyc_CfFlowInfo_typ_to_absrval(_T5A,_T5B,0,_T5D);d= Cyc_Dict_insert(_T57,_T59,_T5E);_T5F= d;{struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*_TB0=_cycalloc(sizeof(struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct));_TB0->tag= 0;
_TB0->f1= vd;_T60= (struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct*)_TB0;}_T61= (void*)_T60;{struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct*_TB0=_cycalloc(sizeof(struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct));_TB0->tag= 4;_TB0->f1= rp;_T62= (struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct*)_TB0;}_T63= (void*)_T62;d= Cyc_Dict_insert(_T5F,_T61,_T63);{struct Cyc_List_List*_TB0=_cycalloc(sizeof(struct Cyc_List_List));
_TB0->hd= rp;_TB0->tl= param_roots;_T64= (struct Cyc_List_List*)_TB0;}param_roots= _T64;goto _LL5;}}}}default: goto _LL5;}_LL5:;}_T65= atts;
# 2899
atts= _T65->tl;goto _TL2C6;_TL2C5:
# 2927
 inflow= Cyc_CfFlowInfo_ReachableFL(d);_T66= 
# 2929
Cyc_Tcutil_fndecl2type(fd);{long noreturn=Cyc_Atts_is_noreturn_fn_type(_T66);_T68= Cyc_Hashtable_create;{
struct Cyc_Hashtable_Table*(*_TAE)(int,int(*)(struct Cyc_Absyn_Stmt*,struct Cyc_Absyn_Stmt*),int(*)(struct Cyc_Absyn_Stmt*))=(struct Cyc_Hashtable_Table*(*)(int,int(*)(struct Cyc_Absyn_Stmt*,struct Cyc_Absyn_Stmt*),int(*)(struct Cyc_Absyn_Stmt*)))_T68;_T67= _TAE;}_T6A= Cyc_Core_ptrcmp;{int(*_TAE)(struct Cyc_Absyn_Stmt*,struct Cyc_Absyn_Stmt*)=(int(*)(struct Cyc_Absyn_Stmt*,struct Cyc_Absyn_Stmt*))_T6A;_T69= _TAE;}{int(*_TAE)(struct Cyc_Absyn_Stmt*)=(int(*)(struct Cyc_Absyn_Stmt*))Cyc_NewControlFlow_hash_ptr;_T6B= _TAE;}{struct Cyc_Hashtable_Table*flow_table=_T67(33,_T69,_T6B);
struct Cyc_NewControlFlow_AnalEnv*env;env= _cycalloc(sizeof(struct Cyc_NewControlFlow_AnalEnv));_T6C= env;_T6C->all_tables= tables;_T6D= env;_T6F= Cyc_Hashtable_lookup;{struct Cyc_Hashtable_Table*(*_TAE)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Fndecl*)=(struct Cyc_Hashtable_Table*(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Fndecl*))_T6F;_T6E= _TAE;}_T70= tables;_T71= _T70->succ_tables;_T72= fd;({__typeof__(_T6E(_T71,_T72))_TAE=_T6E(_T71,_T72);_T6D->succ_table= _TAE;});_T73= env;_T75= Cyc_Hashtable_lookup;{
struct Cyc_Hashtable_Table*(*_TAE)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Fndecl*)=(struct Cyc_Hashtable_Table*(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Fndecl*))_T75;_T74= _TAE;}_T76= tables;_T77= _T76->pat_pop_tables;_T78= fd;({__typeof__(_T74(_T77,_T78))_TAE=_T74(_T77,_T78);_T73->pat_pop_table= _TAE;});_T79= env;_T79->fenv= fenv;_T7A= env;_T7A->iterate_again= 1;_T7B= env;_T7B->iteration_num= 0;_T7C= env;_T7C->in_try= 0;_T7D= env;
_T7D->tryflow= inflow;_T7E= env;_T7E->noreturn= noreturn;_T7F= env;_T80= fd;_T81= _T80->i;_T7F->return_type= _T81.ret_type;_T82= env;_T82->unique_pat_vars= 0;_T83= env;_T83->param_roots= param_roots;_T84= env;_T84->noconsume_params= noconsume_roots;_T85= env;
_T85->flow_table= flow_table;_T86= env;_T86->aquals_bounds= aquals_bounds;{
union Cyc_CfFlowInfo_FlowInfo outflow=inflow;
_TL2C8: _T87= env;_T88= _T87->iterate_again;if(_T88)goto _TL2CB;else{goto _TL2CA;}_TL2CB: _T89= Cyc_CfFlowInfo_anal_error;if(_T89)goto _TL2CA;else{goto _TL2C9;}
_TL2C9: _T8A= env;_T8A->iteration_num= _T8A->iteration_num + 1;_T8B= env;
# 2941
_T8B->iterate_again= 0;_T8C= env;_T8D= inflow;_T8E= fd;_T8F= _T8E->body;
outflow= Cyc_NewControlFlow_anal_stmt(_T8C,_T8D,_T8F,0);goto _TL2C8;_TL2CA: _T90= outflow;_T91= _T90.BottomFL;_T92= _T91.tag;if(_T92!=1)goto _TL2CC;goto _LLC;_TL2CC:
# 2948
 Cyc_NewControlFlow_check_init_params(loc,env,outflow);_T93= env;_T94= env;_T95= _T94->noconsume_params;_T96= outflow;_T97= loc;
Cyc_NewControlFlow_unconsume_params(_T93,_T95,0,0,_T96,_T97);_T98= noreturn;
# 2952
if(!_T98)goto _TL2CE;_T99= loc;_T9A= 
_tag_fat("`noreturn' function might (implicitly) return",sizeof(char),46U);_T9B= _tag_fat(0U,sizeof(void*),0);Cyc_CfFlowInfo_aerr(_T99,_T9A,_T9B);goto _TL2CF;
_TL2CE: _T9C= fd;_T9D= _T9C->i;_T9E= _T9D.ret_type;_T9F= Cyc_Tcutil_is_void_type(_T9E);if(_T9F)goto _TL2D0;else{goto _TL2D2;}
_TL2D2: _TA0= fd;_TA1= _TA0->i;_TA2= _TA1.ret_type;_TA3= Cyc_Tcutil_is_any_float_type(_TA2);if(_TA3)goto _TL2D5;else{goto _TL2D6;}_TL2D6: _TA4= fd;_TA5= _TA4->i;_TA6= _TA5.ret_type;_TA7= Cyc_Tcutil_is_any_int_type(_TA6);if(_TA7)goto _TL2D5;else{goto _TL2D3;}
_TL2D5: _TA8= loc;_TA9= _tag_fat("function may not return a value",sizeof(char),32U);_TAA= _tag_fat(0U,sizeof(void*),0);Cyc_Warn_warn(_TA8,_TA9,_TAA);goto _TL2D4;
# 2958
_TL2D3: _TAB= loc;_TAC= _tag_fat("function may not return a value",sizeof(char),32U);_TAD= _tag_fat(0U,sizeof(void*),0);Cyc_CfFlowInfo_aerr(_TAB,_TAC,_TAD);_TL2D4: goto _LLC;_TL2D0: _TL2CF: goto _LLC;_LLC:;}}}}}}}}
# 2965
void Cyc_NewControlFlow_cf_check(struct Cyc_JumpAnalysis_Jump_Anal_Result*tables,struct Cyc_List_List*ds){struct Cyc_List_List*_T0;void*_T1;struct Cyc_Absyn_Decl*_T2;int*_T3;unsigned _T4;struct Cyc_List_List*_T5;
_TL2DA: if(ds!=0)goto _TL2D8;else{goto _TL2D9;}
_TL2D8: Cyc_CfFlowInfo_anal_error= 0;_T0= ds;_T1= _T0->hd;_T2= (struct Cyc_Absyn_Decl*)_T1;{
void*_T6=_T2->r;struct Cyc_List_List*_T7;struct Cyc_Absyn_Fndecl*_T8;_T3= (int*)_T6;_T4= *_T3;switch(_T4){case 1:{struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*_T9=(struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*)_T6;_T8= _T9->f1;}{struct Cyc_Absyn_Fndecl*fd=_T8;
# 2970
Cyc_NewControlFlow_check_fun(tables,fd);goto _LL0;}case 11:{struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct*_T9=(struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct*)_T6;_T7= _T9->f1;}{struct Cyc_List_List*ds2=_T7;_T7= ds2;goto _LL6;}case 10:{struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct*_T9=(struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct*)_T6;_T7= _T9->f2;}_LL6: {struct Cyc_List_List*ds2=_T7;_T7= ds2;goto _LL8;}case 9:{struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct*_T9=(struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct*)_T6;_T7= _T9->f2;}_LL8: {struct Cyc_List_List*ds2=_T7;
# 2978
Cyc_NewControlFlow_cf_check(tables,ds2);goto _LL0;}case 12: goto _LL0;default: goto _LL0;}_LL0:;}_T5= ds;
# 2966
ds= _T5->tl;goto _TL2DA;_TL2D9:;}
