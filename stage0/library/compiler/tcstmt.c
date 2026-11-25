#include <cyc_include.h>
 struct Cyc_Core_Opt{void*v;};struct _tuple0{void*f0;void*f1;};
# 106 "./cyclone/library/std/core.h"
void*Cyc_Core_fst(struct _tuple0*);
# 108
void*Cyc_Core_snd(struct _tuple0*);struct Cyc_List_List{void*hd;struct Cyc_List_List*tl;};
# 57 "./cyclone/library/std/list.h"
extern struct Cyc_List_List*Cyc_List_list(struct _fat_ptr);
# 64
extern int Cyc_List_length(struct Cyc_List_List*);
# 79
extern struct Cyc_List_List*Cyc_List_map(void*(*)(void*),struct Cyc_List_List*);
# 86
extern struct Cyc_List_List*Cyc_List_map_c(void*(*)(void*,void*),void*,struct Cyc_List_List*);
# 179
extern struct Cyc_List_List*Cyc_List_imp_rev(struct Cyc_List_List*);
# 185
extern struct Cyc_List_List*Cyc_List_append(struct Cyc_List_List*,struct Cyc_List_List*);
# 248
extern long Cyc_List_forall(long(*)(void*),struct Cyc_List_List*);
# 255
extern long Cyc_List_exists(long(*)(void*),struct Cyc_List_List*);struct _tuple1{struct Cyc_List_List*f0;struct Cyc_List_List*f1;};
# 291
extern struct _tuple1 Cyc_List_split(struct Cyc_List_List*);
# 317
extern long Cyc_List_mem(int(*)(void*,void*),struct Cyc_List_List*,void*);
# 386
extern struct Cyc_List_List*Cyc_List_filter(long(*)(void*),struct Cyc_List_List*);struct Cyc_AssnDef_ExistAssnFn;struct _union_Nmspace_Abs_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_Rel_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_C_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_Loc_n{int tag;int val;};union Cyc_Absyn_Nmspace{struct _union_Nmspace_Abs_n Abs_n;struct _union_Nmspace_Rel_n Rel_n;struct _union_Nmspace_C_n C_n;struct _union_Nmspace_Loc_n Loc_n;};struct _tuple2{union Cyc_Absyn_Nmspace f0;struct _fat_ptr*f1;};
# 148 "cyclone/library/compiler/absyn.h"
enum Cyc_Absyn_Scope{Cyc_Absyn_Static =0U,Cyc_Absyn_Abstract =1U,Cyc_Absyn_Public =2U,Cyc_Absyn_Extern =3U,Cyc_Absyn_ExternC =4U,Cyc_Absyn_Register =5U,Cyc_Absyn_Noreturn =6U};struct Cyc_Absyn_Tqual{long print_const: 1;long q_volatile: 1;long q_restrict: 1;long real_const: 1;unsigned loc;};
# 180
enum Cyc_Absyn_Sign{Cyc_Absyn_Signed =0U,Cyc_Absyn_Unsigned =1U,Cyc_Absyn_None =2U};
# 186
enum Cyc_Absyn_AggrKind{Cyc_Absyn_StructA =0U,Cyc_Absyn_UnionA =1U};
# 210 "cyclone/library/compiler/absyn.h"
enum Cyc_Absyn_AliasHint{Cyc_Absyn_UniqueHint =0U,Cyc_Absyn_RefcntHint =1U,Cyc_Absyn_RestrictedHint =2U,Cyc_Absyn_NoHint =3U};
# 217
enum Cyc_Absyn_KindQual{Cyc_Absyn_AnyKind =0U,Cyc_Absyn_MemKind =1U,Cyc_Absyn_BoxKind =2U,Cyc_Absyn_EffKind =3U,Cyc_Absyn_IntKind =4U,Cyc_Absyn_BoolKind =5U,Cyc_Absyn_PtrBndKind =6U,Cyc_Absyn_AqualKind =7U};struct Cyc_Absyn_Kind{enum Cyc_Absyn_KindQual kind;enum Cyc_Absyn_AliasHint aliashint;};struct Cyc_Absyn_Tvar{struct _fat_ptr*name;int identity;void*kind;void*aquals_bound;};struct Cyc_Absyn_PtrLoc{unsigned ptr_loc;unsigned rgn_loc;unsigned zt_loc;};struct Cyc_Absyn_PtrAtts{void*eff;void*nullable;void*bounds;void*zero_term;struct Cyc_Absyn_PtrLoc*ptrloc;void*autoreleased;void*aqual;};struct Cyc_Absyn_PtrInfo{void*elt_type;struct Cyc_Absyn_Tqual elt_tq;struct Cyc_Absyn_PtrAtts ptr_atts;};struct Cyc_Absyn_VarargInfo{struct _fat_ptr*name;struct Cyc_Absyn_Tqual tq;void*type;long inject;};struct Cyc_Absyn_FnInfo{struct Cyc_List_List*tvars;void*effect;struct Cyc_Absyn_Tqual ret_tqual;void*ret_type;struct Cyc_List_List*args;long c_varargs;struct Cyc_Absyn_VarargInfo*cyc_varargs;struct Cyc_List_List*qual_bnd;struct Cyc_List_List*attributes;struct Cyc_Absyn_Exp*checks_clause;struct Cyc_AssnDef_ExistAssnFn*checks_assn;struct Cyc_Absyn_Exp*requires_clause;struct Cyc_AssnDef_ExistAssnFn*requires_assn;struct Cyc_Absyn_Exp*ensures_clause;struct Cyc_AssnDef_ExistAssnFn*ensures_assn;struct Cyc_Absyn_Exp*throws_clause;struct Cyc_AssnDef_ExistAssnFn*throws_assn;struct Cyc_Absyn_Vardecl*return_value;struct Cyc_List_List*arg_vardecls;struct Cyc_List_List*effconstr;};struct _tuple4{enum Cyc_Absyn_AggrKind f0;struct _tuple2*f1;struct Cyc_Core_Opt*f2;};struct _union_AggrInfo_UnknownAggr{int tag;struct _tuple4 val;};struct _union_AggrInfo_KnownAggr{int tag;struct Cyc_Absyn_Aggrdecl**val;};union Cyc_Absyn_AggrInfo{struct _union_AggrInfo_UnknownAggr UnknownAggr;struct _union_AggrInfo_KnownAggr KnownAggr;};
# 372
union Cyc_Absyn_AggrInfo Cyc_Absyn_UnknownAggr(enum Cyc_Absyn_AggrKind,struct _tuple2*,struct Cyc_Core_Opt*);struct Cyc_Absyn_ArrayInfo{void*elt_type;struct Cyc_Absyn_Tqual tq;struct Cyc_Absyn_Exp*num_elts;void*zero_term;unsigned zt_loc;};struct Cyc_Absyn_AppType_Absyn_Type_struct{int tag;void*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_VarType_Absyn_Type_struct{int tag;struct Cyc_Absyn_Tvar*f1;};struct Cyc_Absyn_PointerType_Absyn_Type_struct{int tag;struct Cyc_Absyn_PtrInfo f1;};struct Cyc_Absyn_ArrayType_Absyn_Type_struct{int tag;struct Cyc_Absyn_ArrayInfo f1;};struct Cyc_Absyn_FnType_Absyn_Type_struct{int tag;struct Cyc_Absyn_FnInfo f1;};struct Cyc_Absyn_No_throw_att_Absyn_Attribute_struct{int tag;};struct _union_Cnst_Null_c{int tag;int val;};struct _tuple5{enum Cyc_Absyn_Sign f0;char f1;};struct _union_Cnst_Char_c{int tag;struct _tuple5 val;};struct _union_Cnst_Wchar_c{int tag;struct _fat_ptr val;};struct _tuple6{enum Cyc_Absyn_Sign f0;short f1;};struct _union_Cnst_Short_c{int tag;struct _tuple6 val;};struct _tuple7{enum Cyc_Absyn_Sign f0;int f1;};struct _union_Cnst_Int_c{int tag;struct _tuple7 val;};struct _tuple8{enum Cyc_Absyn_Sign f0;long long f1;};struct _union_Cnst_LongLong_c{int tag;struct _tuple8 val;};struct _union_Cnst_Int128_c{int tag;struct _tuple8 val;};struct _tuple9{struct _fat_ptr f0;int f1;};struct _union_Cnst_Float_c{int tag;struct _tuple9 val;};struct _union_Cnst_String_c{int tag;struct _fat_ptr val;};struct _union_Cnst_Wstring_c{int tag;struct _fat_ptr val;};union Cyc_Absyn_Cnst{struct _union_Cnst_Null_c Null_c;struct _union_Cnst_Char_c Char_c;struct _union_Cnst_Wchar_c Wchar_c;struct _union_Cnst_Short_c Short_c;struct _union_Cnst_Int_c Int_c;struct _union_Cnst_LongLong_c LongLong_c;struct _union_Cnst_Int128_c Int128_c;struct _union_Cnst_Float_c Float_c;struct _union_Cnst_String_c String_c;struct _union_Cnst_Wstring_c Wstring_c;};
# 600
enum Cyc_Absyn_Primop{Cyc_Absyn_Plus =0U,Cyc_Absyn_Times =1U,Cyc_Absyn_Minus =2U,Cyc_Absyn_Div =3U,Cyc_Absyn_Mod =4U,Cyc_Absyn_Eq =5U,Cyc_Absyn_Neq =6U,Cyc_Absyn_Gt =7U,Cyc_Absyn_Lt =8U,Cyc_Absyn_Gte =9U,Cyc_Absyn_Lte =10U,Cyc_Absyn_Not =11U,Cyc_Absyn_Bitnot =12U,Cyc_Absyn_Bitand =13U,Cyc_Absyn_Bitor =14U,Cyc_Absyn_Bitxor =15U,Cyc_Absyn_Bitlshift =16U,Cyc_Absyn_Bitlrshift =17U,Cyc_Absyn_Numelts =18U,Cyc_Absyn_Tagof =19U,Cyc_Absyn_UDiv =20U,Cyc_Absyn_UMod =21U,Cyc_Absyn_UGt =22U,Cyc_Absyn_ULt =23U,Cyc_Absyn_UGte =24U,Cyc_Absyn_ULte =25U};
# 635
enum Cyc_Absyn_Incrementor{Cyc_Absyn_PreInc =0U,Cyc_Absyn_PostInc =1U,Cyc_Absyn_PreDec =2U,Cyc_Absyn_PostDec =3U};struct Cyc_Absyn_VarargCallInfo{int num_varargs;struct Cyc_List_List*injectors;struct Cyc_Absyn_VarargInfo*vai;};
# 660
enum Cyc_Absyn_Coercion{Cyc_Absyn_Unknown_coercion =0U,Cyc_Absyn_No_coercion =1U,Cyc_Absyn_Null_to_NonNull =2U,Cyc_Absyn_Subset_coercion =3U,Cyc_Absyn_Other_coercion =4U};struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct{int tag;union Cyc_Absyn_Cnst f1;};struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct{int tag;void*f1;};struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct{int tag;enum Cyc_Absyn_Primop f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;enum Cyc_Absyn_Incrementor f2;};struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_List_List*f2;struct Cyc_Absyn_VarargCallInfo*f3;long f4;};struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;long f2;};struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct{int tag;void*f1;struct Cyc_Absyn_Exp*f2;long f3;enum Cyc_Absyn_Coercion f4;};struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _fat_ptr*f2;long f3;long f4;};struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct{int tag;struct Cyc_List_List*f1;};struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Vardecl*f1;struct Cyc_Absyn_Exp*f2;struct Cyc_Absyn_Exp*f3;long f4;};struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;void*f2;long f3;};struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct{int tag;struct _tuple2*f1;struct Cyc_List_List*f2;struct Cyc_List_List*f3;struct Cyc_Absyn_Aggrdecl*f4;};struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Core_Opt*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Exp{void*topt;void*r;unsigned loc;void*annot;};struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Stmt*f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Stmt*f2;struct Cyc_Absyn_Stmt*f3;};struct _tuple11{struct Cyc_Absyn_Exp*f0;struct Cyc_Absyn_Stmt*f1;};struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct{int tag;struct _tuple11 f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _tuple11 f2;struct _tuple11 f3;struct Cyc_Absyn_Stmt*f4;};struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_List_List*f2;void*f3;};struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_List_List*f1;struct Cyc_Absyn_Switch_clause**f2;};struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Decl*f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct{int tag;struct _fat_ptr*f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Stmt*f1;struct _tuple11 f2;};struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Stmt*f1;struct Cyc_List_List*f2;void*f3;};struct Cyc_Absyn_Stmt{void*r;unsigned loc;void*annot;};struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct{int tag;};struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct{int tag;struct Cyc_Absyn_Vardecl*f1;struct Cyc_Absyn_Pat*f2;};
# 854
extern struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct Cyc_Absyn_Wild_p_val;struct Cyc_Absyn_Pat{void*r;void*topt;unsigned loc;};struct Cyc_Absyn_Switch_clause{struct Cyc_Absyn_Pat*pattern;struct Cyc_Core_Opt*pat_vars;struct Cyc_Absyn_Exp*where_clause;struct Cyc_Absyn_Stmt*body;unsigned loc;};struct Cyc_Absyn_Local_b_Absyn_Binding_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};struct Cyc_Absyn_Vardecl{enum Cyc_Absyn_Scope sc;struct _tuple2*name;unsigned varloc;struct Cyc_Absyn_Tqual tq;void*type;struct Cyc_Absyn_Exp*initializer;void*rgn;struct Cyc_List_List*attributes;long escapes;long is_proto;struct Cyc_Absyn_Exp*rename;};struct Cyc_Absyn_Fndecl{enum Cyc_Absyn_Scope sc;long is_inline;struct _tuple2*name;struct Cyc_Absyn_Stmt*body;struct Cyc_Absyn_FnInfo i;void*cached_type;struct Cyc_Core_Opt*param_vardecls;struct Cyc_Absyn_Vardecl*fn_vardecl;enum Cyc_Absyn_Scope orig_scope;long escapes;};struct Cyc_Absyn_AggrdeclImpl{struct Cyc_List_List*exist_vars;struct Cyc_List_List*qual_bnd;struct Cyc_List_List*fields;long tagged;struct Cyc_List_List*effconstr;};struct Cyc_Absyn_Aggrdecl{enum Cyc_Absyn_AggrKind kind;enum Cyc_Absyn_Scope sc;struct _tuple2*name;struct Cyc_List_List*tvs;struct Cyc_Absyn_AggrdeclImpl*impl;struct Cyc_List_List*attributes;long expected_mem_kind;};struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Fndecl*f1;};struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Pat*f1;struct Cyc_Core_Opt*f2;struct Cyc_Absyn_Exp*f3;void*f4;};struct Cyc_Absyn_Letv_d_Absyn_Raw_decl_struct{int tag;struct Cyc_List_List*f1;};struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Tvar*f1;struct Cyc_Absyn_Vardecl*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct{int tag;struct _fat_ptr*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct{int tag;struct _tuple2*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Decl{void*r;unsigned loc;};
# 1057
union Cyc_Absyn_Nmspace Cyc_Absyn_Loc_n (void);
# 1060
union Cyc_Absyn_Nmspace Cyc_Absyn_Abs_n(struct Cyc_List_List*,long);
# 1063
struct Cyc_Absyn_Tqual Cyc_Absyn_const_tqual(unsigned);
struct Cyc_Absyn_Tqual Cyc_Absyn_empty_tqual(unsigned);
# 1070
void*Cyc_Absyn_compress(void*);
# 1083
void*Cyc_Absyn_new_evar(struct Cyc_Core_Opt*,struct Cyc_Core_Opt*);
# 1097
extern void*Cyc_Absyn_heap_rgn_type;
# 1099
extern void*Cyc_Absyn_al_qual_type;
# 1103
extern void*Cyc_Absyn_false_type;
# 1105
extern void*Cyc_Absyn_void_type;extern void*Cyc_Absyn_rgn_handle_type(void*);
# 1121
void*Cyc_Absyn_exn_type (void);
# 1149
void*Cyc_Absyn_at_type(void*,void*,void*,struct Cyc_Absyn_Tqual,void*,void*);
# 1166
void*Cyc_Absyn_aggr_type(union Cyc_Absyn_AggrInfo,struct Cyc_List_List*);
# 1182
struct Cyc_Absyn_Exp*Cyc_Absyn_new_exp(void*,unsigned);
# 1192
struct Cyc_Absyn_Exp*Cyc_Absyn_uint_exp(unsigned,unsigned);
# 1199
struct Cyc_Absyn_Exp*Cyc_Absyn_varb_exp(void*,unsigned);
# 1262
struct Cyc_Absyn_Stmt*Cyc_Absyn_new_stmt(void*,unsigned);
struct Cyc_Absyn_Stmt*Cyc_Absyn_skip_stmt(unsigned);
struct Cyc_Absyn_Stmt*Cyc_Absyn_exp_stmt(struct Cyc_Absyn_Exp*,unsigned);
# 1275
struct Cyc_Absyn_Stmt*Cyc_Absyn_decl_stmt(struct Cyc_Absyn_Decl*,struct Cyc_Absyn_Stmt*,unsigned);
# 1284
struct Cyc_Absyn_Pat*Cyc_Absyn_new_pat(void*,unsigned);
# 1289
struct Cyc_Absyn_Decl*Cyc_Absyn_let_decl(struct Cyc_Absyn_Pat*,struct Cyc_Absyn_Exp*,unsigned);
# 1293
struct Cyc_Absyn_Vardecl*Cyc_Absyn_new_vardecl(unsigned,struct _tuple2*,void*,struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*);
# 1330
long Cyc_Absyn_no_side_effects_exp(struct Cyc_Absyn_Exp*);
# 1359
void Cyc_Absyn_visit_stmt(long(*)(void*,struct Cyc_Absyn_Exp*),long(*)(void*,struct Cyc_Absyn_Stmt*),void*,struct Cyc_Absyn_Stmt*);
# 46 "cyclone/library/compiler/attributes.h"
extern struct Cyc_Absyn_No_throw_att_Absyn_Attribute_struct Cyc_Atts_No_throw_att_val;
# 76
struct Cyc_List_List*Cyc_Atts_transfer_fn_type_atts(void*,struct Cyc_List_List*);
# 84
void Cyc_Atts_check_fndecl_atts(unsigned,struct Cyc_List_List*,long);
# 93
int Cyc_Atts_attribute_cmp(void*,void*);
# 32 "cyclone/library/compiler/kinds.h"
extern struct Cyc_Absyn_Kind Cyc_Kinds_bk;
extern struct Cyc_Absyn_Kind Cyc_Kinds_mk;
extern struct Cyc_Absyn_Kind Cyc_Kinds_ek;
# 38
extern struct Cyc_Absyn_Kind Cyc_Kinds_aqk;
# 85 "cyclone/library/compiler/kinds.h"
void*Cyc_Kinds_kind_to_bound(struct Cyc_Absyn_Kind*);struct Cyc_String_pa_PrintArg_struct{int tag;struct _fat_ptr f1;};struct Cyc_Int_pa_PrintArg_struct{int tag;unsigned long f1;};
# 127 "bazel-out/k8-fastbuild/bin/cyclone/library/std/libc/stdio.h"
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
# 12 "cyclone/library/compiler/subtype.h"
enum Cyc_Absyn_Coercion Cyc_Subtype_coercible_exact(unsigned,void*,void*);
# 75 "./cyclone/library/std/cycboot.h"
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);struct Cyc_Dict_T;struct Cyc_Dict_Dict{int(*rel)(void*,void*);struct _RegionHandle*r;const struct Cyc_Dict_T*t;};struct Cyc_Tcenv_Genv{struct Cyc_Dict_Dict aggrdecls;struct Cyc_Dict_Dict datatypedecls;struct Cyc_Dict_Dict enumdecls;struct Cyc_Dict_Dict typedefs;struct Cyc_Dict_Dict ordinaries;};struct Cyc_Tcenv_Fenv;struct Cyc_Tcenv_Tenv{struct Cyc_List_List*ns;struct Cyc_Tcenv_Genv*ae;struct Cyc_Tcenv_Fenv*le;long allow_valueof: 1;long in_extern_c_include: 1;long in_tempest: 1;long tempest_generalize: 1;long in_extern_c_inc_repeat: 1;};
# 70 "cyclone/library/compiler/tcenv.h"
struct Cyc_Tcenv_Fenv*Cyc_Tcenv_nested_fenv(unsigned,struct Cyc_Tcenv_Fenv*,struct Cyc_Absyn_Fndecl*);
# 96
void*Cyc_Tcenv_return_typ(struct Cyc_Tcenv_Tenv*);
# 98
struct Cyc_List_List*Cyc_Tcenv_lookup_type_vars(struct Cyc_Tcenv_Tenv*);
# 100
struct Cyc_Tcenv_Tenv*Cyc_Tcenv_add_type_vars(unsigned,struct Cyc_Tcenv_Tenv*,struct Cyc_List_List*);
# 102
struct Cyc_Tcenv_Tenv*Cyc_Tcenv_set_fallthru(struct Cyc_Tcenv_Tenv*,struct Cyc_List_List*,struct Cyc_List_List*,struct Cyc_Absyn_Switch_clause*);
# 104
struct Cyc_Tcenv_Tenv*Cyc_Tcenv_clear_fallthru(struct Cyc_Tcenv_Tenv*);
# 122
long Cyc_Tcenv_in_stmt_exp(struct Cyc_Tcenv_Tenv*);struct _tuple15{struct Cyc_Absyn_Switch_clause*f0;struct Cyc_List_List*f1;struct Cyc_List_List*f2;};
# 125
const struct _tuple15*const Cyc_Tcenv_process_fallthru(struct Cyc_Tcenv_Tenv*,struct Cyc_Absyn_Stmt*,struct Cyc_Absyn_Switch_clause***);
# 128
struct Cyc_Tcenv_Tenv*Cyc_Tcenv_new_block(unsigned,struct Cyc_Tcenv_Tenv*);
struct Cyc_Tcenv_Tenv*Cyc_Tcenv_new_named_block(unsigned,struct Cyc_Tcenv_Tenv*,struct Cyc_Absyn_Tvar*);
struct Cyc_Tcenv_Tenv*Cyc_Tcenv_new_effect_constraints(struct Cyc_Tcenv_Tenv*,struct Cyc_List_List*,unsigned);
# 137
void*Cyc_Tcenv_curr_rgn(struct Cyc_Tcenv_Tenv*);
# 141
struct Cyc_List_List*Cyc_Tcenv_curr_aquals_bounds(struct Cyc_Tcenv_Tenv*);
struct Cyc_Tcenv_Tenv*Cyc_Tcenv_add_aquals_bound(struct Cyc_Tcenv_Tenv*,void*,void*);
# 144
struct Cyc_Tcenv_Tenv*Cyc_Tcenv_add_region(struct Cyc_Tcenv_Tenv*,void*,long,long);
# 152
void Cyc_Tcenv_check_delayed_effects(struct Cyc_Tcenv_Tenv*);
void Cyc_Tcenv_check_delayed_constraints(struct Cyc_Tcenv_Tenv*);struct Cyc_Tc_TcContext{long debug;struct _fat_ptr tc_msg;};
# 27 "cyclone/library/compiler/tcexp.h"
void*Cyc_Tcexp_tcExp(struct Cyc_Tc_TcContext*,struct Cyc_Tcenv_Tenv*,void**,struct Cyc_Absyn_Exp*);
void*Cyc_Tcexp_tcExpInitializer(struct Cyc_Tc_TcContext*,struct Cyc_Tcenv_Tenv*,void**,struct Cyc_Absyn_Exp*);
void Cyc_Tcexp_tcTest(struct Cyc_Tc_TcContext*,struct Cyc_Tcenv_Tenv*,struct Cyc_Absyn_Exp*,struct _fat_ptr);
void Cyc_Tcexp_check_consume(unsigned,struct Cyc_List_List*,void*,struct Cyc_Absyn_Exp*);struct Cyc_Tcpat_TcPatResult{struct _tuple1*tvars_and_effconstr_opt;struct Cyc_List_List*patvars;struct Cyc_List_List*aquals_bounds;};
# 59 "cyclone/library/compiler/tcpat.h"
struct Cyc_Tcpat_TcPatResult Cyc_Tcpat_tcPat(struct Cyc_Tc_TcContext*,struct Cyc_Tcenv_Tenv*,struct Cyc_Absyn_Pat*,void**,struct Cyc_Absyn_Exp*);
void Cyc_Tcpat_check_pat_regions(struct Cyc_Tcenv_Tenv*,struct Cyc_Absyn_Pat*,struct Cyc_Tcpat_TcPatResult*);
# 110
void Cyc_Tcpat_check_switch_exhaustive(unsigned,struct Cyc_Tcenv_Tenv*,struct Cyc_List_List*,void**);
long Cyc_Tcpat_check_let_pat_exhaustive(unsigned,struct Cyc_Tcenv_Tenv*,struct Cyc_Absyn_Pat*,void**);
# 113
void Cyc_Tcpat_check_catch_overlap(unsigned,struct Cyc_Tcenv_Tenv*,struct Cyc_List_List*,void**);
# 30 "cyclone/library/compiler/tcstmt.h"
void Cyc_Tcstmt_tcStmt(struct Cyc_Tc_TcContext*,struct Cyc_Tcenv_Tenv*,struct Cyc_Absyn_Stmt*,long);
# 32
long Cyc_Tcstmt_ensure_no_throw_stmt(struct Cyc_Absyn_Stmt*);
# 36 "cyclone/library/compiler/tctyp.h"
void Cyc_Tctyp_check_fndecl_valid_type(struct Cyc_Tc_TcContext*,unsigned,struct Cyc_Tcenv_Tenv*,struct Cyc_Absyn_Fndecl*);
# 48
void Cyc_Tctyp_check_type(struct Cyc_Tc_TcContext*,unsigned,struct Cyc_Tcenv_Tenv*,struct Cyc_List_List*,struct Cyc_Absyn_Kind*,long,long,void*);
# 30 "cyclone/library/compiler/tcutil.h"
long Cyc_Tcutil_is_void_type(void*);
# 32
long Cyc_Tcutil_is_any_int_type(void*);
long Cyc_Tcutil_is_any_float_type(void*);
# 105
long Cyc_Tcutil_coerce_arg(struct Cyc_List_List*,struct Cyc_Absyn_Exp*,void*,long*);
long Cyc_Tcutil_coerce_assign(struct Cyc_List_List*,struct Cyc_Absyn_Exp*,void*);
# 131
void*Cyc_Tcutil_substitute(struct Cyc_List_List*,void*);
# 155
void*Cyc_Tcutil_fndecl2type(struct Cyc_Absyn_Fndecl*);struct _tuple16{struct Cyc_Absyn_Tvar*f0;void*f1;};
# 159
struct _tuple16*Cyc_Tcutil_make_inst_var(struct Cyc_List_List*,struct Cyc_Absyn_Tvar*);
# 210
int Cyc_Tcutil_new_tvar_id (void);
# 219
long Cyc_Tcutil_is_const_exp(struct Cyc_Absyn_Exp*);
# 225
long Cyc_Tcutil_extract_const_from_typedef(unsigned,long,void*);
# 235
struct Cyc_List_List*Cyc_Tcutil_filter_nulls(struct Cyc_List_List*);
# 265
long Cyc_Tcutil_is_aliasable_qual(void*);
# 27 "cyclone/library/compiler/unify.h"
void Cyc_Unify_explain_failure (void);
# 29
long Cyc_Unify_unify(void*,void*);
# 51 "cyclone/library/compiler/warn.h"
void*Cyc_Warn_impos(struct _fat_ptr,struct _fat_ptr);struct Cyc_Warn_String_Warn_Warg_struct{int tag;struct _fat_ptr f1;};struct Cyc_Warn_Typ_Warn_Warg_struct{int tag;void*f1;};struct Cyc_Warn_TypOpt_Warn_Warg_struct{int tag;void*f1;};struct Cyc_Warn_Vardecl_Warn_Warg_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};
# 79
void Cyc_Warn_err2(unsigned,struct _fat_ptr);
void Cyc_Warn_warn2(unsigned,struct _fat_ptr);
# 82
void*Cyc_Warn_impos2(struct _fat_ptr);
# 42 "cyclone/library/compiler/tcstmt.cyc"
static void Cyc_Tcstmt_simplify_unused_result_exp(struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;int*_T1;int _T2;struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*_T3;enum Cyc_Absyn_Incrementor _T4;int _T5;struct Cyc_Absyn_Exp*_T6;struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*_T7;struct Cyc_Absyn_Exp*_T8;struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*_T9;_T0= e;{
void*_TA=_T0->r;struct Cyc_Absyn_Exp*_TB;_T1= (int*)_TA;_T2= *_T1;if(_T2!=5)goto _TL0;_T3= (struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*)_TA;_T4= _T3->f2;_T5= (int)_T4;switch(_T5){case Cyc_Absyn_PostInc:{struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*_TC=(struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*)_TA;_TB= _TC->f1;}{struct Cyc_Absyn_Exp*e1=_TB;_T6= e;{struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*_TC=_cycalloc(sizeof(struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct));_TC->tag= 5;
# 45
_TC->f1= e1;_TC->f2= 0U;_T7= (struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*)_TC;}_T6->r= (void*)_T7;goto _LL0;}case Cyc_Absyn_PostDec:{struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*_TC=(struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*)_TA;_TB= _TC->f1;}{struct Cyc_Absyn_Exp*e1=_TB;_T8= e;{struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*_TC=_cycalloc(sizeof(struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct));_TC->tag= 5;
# 48
_TC->f1= e1;_TC->f2= 2U;_T9= (struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*)_TC;}_T8->r= (void*)_T9;goto _LL0;}default: goto _LL5;}goto _TL1;_TL0: _LL5: goto _LL0;_TL1: _LL0:;}}
# 55
static struct _tuple2*Cyc_Tcstmt_stmt_temp_var (void){struct _tuple2*_T0;struct _fat_ptr*_T1;struct _fat_ptr _T2;struct Cyc_Int_pa_PrintArg_struct _T3;int _T4;int _T5;struct _fat_ptr _T6;struct _fat_ptr _T7;
static int counter=0;{struct _tuple2*_T8=_cycalloc(sizeof(struct _tuple2));
({__typeof__(Cyc_Absyn_Loc_n())_T9=Cyc_Absyn_Loc_n();_T8->f0= _T9;});{struct _fat_ptr*_T9=_cycalloc(sizeof(struct _fat_ptr));{struct Cyc_Int_pa_PrintArg_struct _TA;_TA.tag= 1;_T4= counter;counter= _T4 + 1;_T5= _T4;_TA.f1= (unsigned)_T5;_T3= _TA;}{struct Cyc_Int_pa_PrintArg_struct _TA=_T3;void*_TB[1];_TB[0]= & _TA;_T6= _tag_fat("_tmpS%X",sizeof(char),8U);_T7= _tag_fat(_TB,sizeof(void*),1);_T2= Cyc_aprintf(_T6,_T7);}*_T9= _T2;_T1= (struct _fat_ptr*)_T9;}_T8->f1= _T1;_T0= (struct _tuple2*)_T8;}return _T0;}
# 62
static long Cyc_Tcstmt_make_var_exp(struct Cyc_Absyn_Exp**eptr,struct Cyc_Absyn_Stmt*s0){struct Cyc_Absyn_Exp**_T0;long _T1;struct Cyc_Absyn_Exp*_T2;int*_T3;unsigned _T4;struct Cyc_Absyn_Exp**_T5;struct _tuple2*_T6;void*_T7;struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct*_T8;struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct*_T9;struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct*_TA;void*_TB;struct Cyc_Absyn_Exp*_TC;unsigned _TD;void*_TE;struct Cyc_Absyn_Exp*_TF;unsigned _T10;struct Cyc_Absyn_Pat*_T11;struct Cyc_Absyn_Exp*_T12;struct Cyc_Absyn_Stmt*_T13;unsigned _T14;struct Cyc_Absyn_Stmt*_T15;struct Cyc_Absyn_Decl*_T16;struct Cyc_Absyn_Stmt*_T17;void*_T18;struct Cyc_Absyn_Stmt*_T19;unsigned _T1A;struct Cyc_Absyn_Stmt*_T1B;struct Cyc_Absyn_Stmt*_T1C;unsigned _T1D;struct Cyc_Absyn_Stmt*_T1E;struct Cyc_Absyn_Exp**_T1F;struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T20;void*_T21;struct Cyc_Absyn_Exp*_T22;unsigned _T23;_T0= eptr;{
struct Cyc_Absyn_Exp*e2=*_T0;
long done=0;
_TL3: _T1= done;if(_T1)goto _TL5;else{goto _TL4;}
_TL4: _T2= e2;{void*_T24=_T2->r;struct Cyc_Absyn_Exp*_T25;_T3= (int*)_T24;_T4= *_T3;switch(_T4){case 1:
# 68
 return 0;case 12:{struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct*_T26=(struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct*)_T24;_T25= _T26->f1;}{struct Cyc_Absyn_Exp*e3=_T25;_T25= e3;goto _LL6;}case 13:{struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*_T26=(struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*)_T24;_T25= _T26->f1;}_LL6: {struct Cyc_Absyn_Exp*e3=_T25;
# 72
e2= e3;goto _TL3;}default:
# 75
 done= 1;};}goto _TL3;_TL5: _T5= eptr;{
# 77
struct Cyc_Absyn_Exp*e=*_T5;_T6= 
Cyc_Tcstmt_stmt_temp_var();_T7= Cyc_Absyn_new_evar(0,0);{struct Cyc_Absyn_Vardecl*vd=Cyc_Absyn_new_vardecl(0U,_T6,_T7,0,0);{struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct*_T24=_cycalloc(sizeof(struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct));_T24->tag= 1;
_T24->f1= vd;_T9= & Cyc_Absyn_Wild_p_val;_TA= (struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct*)_T9;_TB= (void*)_TA;_TC= e;_TD= _TC->loc;({__typeof__(Cyc_Absyn_new_pat(_TB,_TD))_T25=Cyc_Absyn_new_pat(_TB,_TD);_T24->f2= _T25;});_T8= (struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct*)_T24;}_TE= (void*)_T8;_TF= e;_T10= _TF->loc;_T11= Cyc_Absyn_new_pat(_TE,_T10);_T12= e;_T13= s0;_T14= _T13->loc;{struct Cyc_Absyn_Decl*d=Cyc_Absyn_let_decl(_T11,_T12,_T14);_T15= s0;_T16= d;_T17= s0;_T18= _T17->r;_T19= s0;_T1A= _T19->loc;_T1B= 
Cyc_Absyn_new_stmt(_T18,_T1A);_T1C= s0;_T1D= _T1C->loc;_T1E= Cyc_Absyn_decl_stmt(_T16,_T1B,_T1D);_T15->r= _T1E->r;_T1F= eptr;{struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T24=_cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));_T24->tag= 4;
_T24->f1= vd;_T20= (struct Cyc_Absyn_Local_b_Absyn_Binding_struct*)_T24;}_T21= (void*)_T20;_T22= e;_T23= _T22->loc;({__typeof__(Cyc_Absyn_varb_exp(_T21,_T23))_T24=Cyc_Absyn_varb_exp(_T21,_T23);*_T1F= _T24;});
return 1;}}}}}struct _tuple17{struct Cyc_Absyn_Tvar*f0;long f1;};struct _tuple18{struct Cyc_Absyn_Vardecl**f0;struct Cyc_Absyn_Exp*f1;};
# 86
static void Cyc_Tcstmt_pattern_synth(struct Cyc_Tc_TcContext*ctx,unsigned loc,struct Cyc_Tcenv_Tenv*te,struct Cyc_Tcpat_TcPatResult pat_res,struct Cyc_Absyn_Stmt*s,struct Cyc_Absyn_Exp*where_opt,long new_block){struct Cyc_Tcpat_TcPatResult _T0;struct Cyc_Tcpat_TcPatResult _T1;struct Cyc_Tcpat_TcPatResult _T2;struct Cyc_List_List*(*_T3)(struct Cyc_Absyn_Vardecl**(*)(struct _tuple18*),struct Cyc_List_List*);struct Cyc_List_List*(*_T4)(void*(*)(void*),struct Cyc_List_List*);struct Cyc_Absyn_Vardecl**(*_T5)(struct _tuple18*);void*(*_T6)(struct _tuple0*);struct Cyc_List_List*_T7;struct Cyc_List_List*_T8;struct Cyc_List_List*(*_T9)(struct Cyc_Absyn_Tvar*(*)(struct _tuple17*),struct Cyc_List_List*);struct Cyc_List_List*(*_TA)(void*(*)(void*),struct Cyc_List_List*);struct Cyc_Absyn_Tvar*(*_TB)(struct _tuple17*);void*(*_TC)(struct _tuple0*);struct _tuple1*_TD;struct _tuple1 _TE;struct Cyc_List_List*_TF;struct Cyc_List_List*_T10;struct _tuple1*_T11;struct _tuple1 _T12;struct Cyc_List_List*_T13;struct Cyc_List_List*(*_T14)(struct Cyc_Absyn_Tvar*(*)(struct _tuple17*),struct Cyc_List_List*);struct Cyc_List_List*(*_T15)(void*(*)(void*),struct Cyc_List_List*);struct Cyc_Absyn_Tvar*(*_T16)(struct _tuple17*);void*(*_T17)(struct _tuple0*);struct Cyc_List_List*(*_T18)(long(*)(struct _tuple17*),struct Cyc_List_List*);struct Cyc_List_List*(*_T19)(long(*)(void*),struct Cyc_List_List*);long(*_T1A)(struct _tuple17*);void*(*_T1B)(struct _tuple0*);struct _tuple1*_T1C;struct _tuple1 _T1D;struct Cyc_List_List*_T1E;struct Cyc_List_List*_T1F;struct Cyc_Tcenv_Tenv*_T20;struct Cyc_Absyn_VarType_Absyn_Type_struct*_T21;struct Cyc_List_List*_T22;void*_T23;void*_T24;struct Cyc_List_List*_T25;long _T26;struct Cyc_List_List*_T27;void*_T28;struct Cyc_Absyn_Vardecl**_T29;struct Cyc_List_List*_T2A;void*_T2B;struct Cyc_Absyn_Vardecl**_T2C;struct Cyc_Absyn_Vardecl*_T2D;struct Cyc_List_List*_T2E;struct Cyc_List_List*_T2F;void*_T30;int*_T31;int _T32;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T33;void*_T34;int*_T35;int _T36;struct Cyc_List_List*_T37;struct Cyc_Tc_TcContext*_T38;struct Cyc_Tcenv_Tenv*_T39;struct Cyc_Absyn_Exp*_T3A;struct _fat_ptr _T3B;long _T3C;struct Cyc_Warn_String_Warn_Warg_struct _T3D;struct Cyc_Absyn_Exp*_T3E;unsigned _T3F;struct _fat_ptr _T40;struct Cyc_List_List*_T41;struct Cyc_List_List*_T42;struct _tuple1*_T43;_T0= pat_res;_T43= _T0.tvars_and_effconstr_opt;_T1= pat_res;_T42= _T1.patvars;_T2= pat_res;_T41= _T2.aquals_bounds;{struct _tuple1*p=_T43;struct Cyc_List_List*vse=_T42;struct Cyc_List_List*aqb=_T41;_T4= Cyc_List_map;{
# 89
struct Cyc_List_List*(*_T44)(struct Cyc_Absyn_Vardecl**(*)(struct _tuple18*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct Cyc_Absyn_Vardecl**(*)(struct _tuple18*),struct Cyc_List_List*))_T4;_T3= _T44;}_T6= Cyc_Core_fst;{struct Cyc_Absyn_Vardecl**(*_T44)(struct _tuple18*)=(struct Cyc_Absyn_Vardecl**(*)(struct _tuple18*))_T6;_T5= _T44;}_T7= vse;{struct Cyc_List_List*vs=_T3(_T5,_T7);
if(p!=0)goto _TL7;_T8= 0;goto _TL8;_TL7: _TA= Cyc_List_map;{struct Cyc_List_List*(*_T44)(struct Cyc_Absyn_Tvar*(*)(struct _tuple17*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct Cyc_Absyn_Tvar*(*)(struct _tuple17*),struct Cyc_List_List*))_TA;_T9= _T44;}_TC= Cyc_Core_fst;{struct Cyc_Absyn_Tvar*(*_T44)(struct _tuple17*)=(struct Cyc_Absyn_Tvar*(*)(struct _tuple17*))_TC;_TB= _T44;}_TD= p;_TE= *_TD;_TF= _TE.f0;_T8= _T9(_TB,_TF);_TL8: {struct Cyc_List_List*tvs=_T8;
if(p!=0)goto _TL9;_T10= 0;goto _TLA;_TL9: _T11= p;_T12= *_T11;_T10= _T12.f1;_TLA: {struct Cyc_List_List*ecs=_T10;
if(p!=0)goto _TLB;_T13= 0;goto _TLC;_TLB: _T15= Cyc_List_map;{struct Cyc_List_List*(*_T44)(struct Cyc_Absyn_Tvar*(*)(struct _tuple17*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct Cyc_Absyn_Tvar*(*)(struct _tuple17*),struct Cyc_List_List*))_T15;_T14= _T44;}_T17= Cyc_Core_fst;{struct Cyc_Absyn_Tvar*(*_T44)(struct _tuple17*)=(struct Cyc_Absyn_Tvar*(*)(struct _tuple17*))_T17;_T16= _T44;}_T19= Cyc_List_filter;{struct Cyc_List_List*(*_T44)(long(*)(struct _tuple17*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(long(*)(struct _tuple17*),struct Cyc_List_List*))_T19;_T18= _T44;}_T1B= Cyc_Core_snd;{long(*_T44)(struct _tuple17*)=(long(*)(struct _tuple17*))_T1B;_T1A= _T44;}_T1C= p;_T1D= *_T1C;_T1E= _T1D.f0;_T1F= _T18(_T1A,_T1E);_T13= _T14(_T16,_T1F);_TLC: {struct Cyc_List_List*rgns=_T13;
te= Cyc_Tcenv_add_type_vars(loc,te,tvs);
_TL10: if(rgns!=0)goto _TLE;else{goto _TLF;}
_TLE: _T20= te;{struct Cyc_Absyn_VarType_Absyn_Type_struct*_T44=_cycalloc(sizeof(struct Cyc_Absyn_VarType_Absyn_Type_struct));_T44->tag= 2;_T22= rgns;_T23= _T22->hd;_T44->f1= (struct Cyc_Absyn_Tvar*)_T23;_T21= (struct Cyc_Absyn_VarType_Absyn_Type_struct*)_T44;}_T24= (void*)_T21;te= Cyc_Tcenv_add_region(_T20,_T24,0,0);_T25= rgns;
# 94
rgns= _T25->tl;goto _TL10;_TLF:
# 96
 te= Cyc_Tcenv_new_effect_constraints(te,ecs,loc);_T26= new_block;
# 98
if(!_T26)goto _TL11;
te= Cyc_Tcenv_new_block(loc,te);goto _TL12;_TL11: _TL12: {
void*ropt=Cyc_Tcenv_curr_rgn(te);
_TL16: if(vs!=0)goto _TL14;else{goto _TL15;}
_TL14: _T27= vs;_T28= _T27->hd;_T29= (struct Cyc_Absyn_Vardecl**)_T28;if(_T29==0)goto _TL17;_T2A= vs;_T2B= _T2A->hd;_T2C= (struct Cyc_Absyn_Vardecl**)_T2B;_T2D= *_T2C;
_T2D->rgn= ropt;goto _TL18;_TL17: _TL18: _T2E= vs;
# 101
vs= _T2E->tl;goto _TL16;_TL15:
# 104
 _TL1C: if(aqb!=0)goto _TL1A;else{goto _TL1B;}
_TL1A: _T2F= aqb;_T30= _T2F->hd;{struct _tuple0*_T44=(struct _tuple0*)_T30;void*_T45;void*_T46;{struct _tuple0 _T47=*_T44;_T46= _T47.f0;_T45= _T47.f1;}{void*tv=_T46;void*b=_T45;
void*_T47=Cyc_Absyn_compress(tv);_T31= (int*)_T47;_T32= *_T31;if(_T32!=0)goto _TL1D;_T33= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T47;_T34= _T33->f1;_T35= (int*)_T34;_T36= *_T35;if(_T36!=15)goto _TL1F;
# 108
te= Cyc_Tcenv_add_aquals_bound(te,tv,b);goto _LL6;_TL1F: goto _LL9;_TL1D: _LL9: goto _LL6;_LL6:;}}_T37= aqb;
# 104
aqb= _T37->tl;goto _TL1C;_TL1B:
# 114
 if(where_opt==0)goto _TL21;_T38= ctx;_T39= te;_T3A= where_opt;_T3B= 
_tag_fat("switch clause guard",sizeof(char),20U);Cyc_Tcexp_tcTest(_T38,_T39,_T3A,_T3B);_T3C= 
Cyc_Absyn_no_side_effects_exp(where_opt);if(_T3C)goto _TL23;else{goto _TL25;}
_TL25:{struct Cyc_Warn_String_Warn_Warg_struct _T44;_T44.tag= 0;({__typeof__(_tag_fat("cannot show &&-clause in pattern has no effects",sizeof(char),48U))_T45=_tag_fat("cannot show &&-clause in pattern has no effects",sizeof(char),48U);_T44.f1= _T45;});_T3D= _T44;}{struct Cyc_Warn_String_Warn_Warg_struct _T44=_T3D;void*_T45[1];_T45[0]= & _T44;_T3E= where_opt;_T3F= _T3E->loc;_T40= _tag_fat(_T45,sizeof(void*),1);Cyc_Warn_err2(_T3F,_T40);}goto _TL24;_TL23: _TL24: goto _TL22;_TL21: _TL22:
# 119
 Cyc_Tcstmt_tcStmt(ctx,te,s,0);}}}}}}}
# 122
static long Cyc_Tcstmt_is_case_default(struct Cyc_Absyn_Switch_clause*c){struct Cyc_Absyn_Switch_clause*_T0;struct Cyc_Absyn_Pat*_T1;int*_T2;unsigned _T3;struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct*_T4;struct Cyc_Absyn_Pat*_T5;struct Cyc_Absyn_Pat*_T6;void*_T7;int*_T8;int _T9;_T0= c;_T1= _T0->pattern;{
void*_TA=_T1->r;_T2= (int*)_TA;_T3= *_T2;switch(_T3){case 0:
# 125
 return 1;case 1: _T4= (struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct*)_TA;_T5= _T4->f2;_T6= (struct Cyc_Absyn_Pat*)_T5;_T7= _T6->r;_T8= (int*)_T7;_T9= *_T8;if(_T9!=0)goto _TL27;
# 127
return 1;_TL27: goto _LL5;default: _LL5:
# 129
 return 0;};}}
# 141
void Cyc_Tcstmt_tcStmt(struct Cyc_Tc_TcContext*ctx,struct Cyc_Tcenv_Tenv*te,struct Cyc_Absyn_Stmt*s0,long new_block){struct Cyc_Absyn_Stmt*_T0;int*_T1;unsigned _T2;long _T3;long _T4;long _T5;long _T6;struct Cyc_Warn_String_Warn_Warg_struct _T7;struct Cyc_Warn_Typ_Warn_Warg_struct _T8;struct Cyc_Absyn_Stmt*_T9;unsigned _TA;struct _fat_ptr _TB;struct Cyc_Warn_String_Warn_Warg_struct _TC;struct Cyc_Warn_Typ_Warn_Warg_struct _TD;struct Cyc_Absyn_Stmt*_TE;unsigned _TF;struct _fat_ptr _T10;struct Cyc_Tc_TcContext*_T11;struct Cyc_Tcenv_Tenv*_T12;void**_T13;struct Cyc_Absyn_Exp*_T14;struct Cyc_List_List*_T15;struct Cyc_Absyn_Exp*_T16;void*_T17;long _T18;struct Cyc_Warn_String_Warn_Warg_struct _T19;struct Cyc_Warn_TypOpt_Warn_Warg_struct _T1A;struct Cyc_Absyn_Exp*_T1B;struct Cyc_Warn_String_Warn_Warg_struct _T1C;struct Cyc_Warn_Typ_Warn_Warg_struct _T1D;struct Cyc_Absyn_Stmt*_T1E;unsigned _T1F;struct _fat_ptr _T20;struct Cyc_Absyn_Exp*_T21;unsigned _T22;struct Cyc_List_List*_T23;void*_T24;struct Cyc_Absyn_Exp*_T25;struct Cyc_Tc_TcContext*_T26;struct Cyc_Tcenv_Tenv*_T27;struct Cyc_Absyn_Exp*_T28;struct _fat_ptr _T29;struct _tuple11 _T2A;struct _tuple11 _T2B;struct Cyc_Tc_TcContext*_T2C;struct Cyc_Tcenv_Tenv*_T2D;struct Cyc_Absyn_Exp*_T2E;struct _fat_ptr _T2F;struct _tuple11 _T30;struct _tuple11 _T31;struct _tuple11 _T32;struct _tuple11 _T33;struct Cyc_Tc_TcContext*_T34;struct Cyc_Tcenv_Tenv*_T35;struct Cyc_Absyn_Exp*_T36;struct _fat_ptr _T37;struct _tuple11 _T38;struct _tuple11 _T39;struct Cyc_Tc_TcContext*_T3A;struct Cyc_Tcenv_Tenv*_T3B;struct Cyc_Absyn_Exp*_T3C;struct _fat_ptr _T3D;struct Cyc_Absyn_Tvar*_T3E;struct _fat_ptr*_T3F;struct _fat_ptr _T40;struct Cyc_String_pa_PrintArg_struct _T41;struct _fat_ptr*_T42;struct _fat_ptr _T43;struct _fat_ptr _T44;struct Cyc_Absyn_Tvar*_T45;struct Cyc_Absyn_Tvar*_T46;struct Cyc_Absyn_Kind*_T47;struct Cyc_Absyn_Kind*_T48;struct Cyc_Absyn_Tvar*_T49;struct Cyc_Tc_TcContext*_T4A;struct Cyc_Absyn_Stmt*_T4B;unsigned _T4C;struct Cyc_Tcenv_Tenv*_T4D;struct Cyc_Absyn_Tvar*_T4E;struct Cyc_Tcenv_Tenv*_T4F;struct Cyc_Absyn_Stmt*_T50;struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct*_T51;struct Cyc_Absyn_Switch_clause***_T52;struct Cyc_Warn_String_Warn_Warg_struct _T53;struct Cyc_Absyn_Stmt*_T54;unsigned _T55;struct _fat_ptr _T56;const struct _tuple15*_T57;struct Cyc_List_List*(*_T58)(struct _tuple16*(*)(struct Cyc_List_List*,struct Cyc_Absyn_Tvar*),struct Cyc_List_List*,struct Cyc_List_List*);struct Cyc_List_List*(*_T59)(void*(*)(void*,void*),void*,struct Cyc_List_List*);struct _tuple16*(*_T5A)(struct Cyc_List_List*,struct Cyc_Absyn_Tvar*);struct Cyc_List_List*_T5B;struct Cyc_List_List*_T5C;struct Cyc_List_List*(*_T5D)(void*(*)(struct Cyc_List_List*,void*),struct Cyc_List_List*,struct Cyc_List_List*);struct Cyc_List_List*(*_T5E)(void*(*)(void*,void*),void*,struct Cyc_List_List*);void*(*_T5F)(struct Cyc_List_List*,void*);struct Cyc_List_List*_T60;struct Cyc_List_List*_T61;struct Cyc_Tc_TcContext*_T62;struct Cyc_Tcenv_Tenv*_T63;struct Cyc_List_List*_T64;void*_T65;struct Cyc_Absyn_Exp*_T66;struct Cyc_List_List*_T67;struct Cyc_List_List*_T68;void*_T69;struct Cyc_Absyn_Exp*_T6A;struct Cyc_List_List*_T6B;void*_T6C;long _T6D;struct Cyc_Warn_String_Warn_Warg_struct _T6E;struct Cyc_Warn_TypOpt_Warn_Warg_struct _T6F;struct Cyc_List_List*_T70;void*_T71;struct Cyc_Absyn_Exp*_T72;struct Cyc_Warn_String_Warn_Warg_struct _T73;struct Cyc_Warn_Typ_Warn_Warg_struct _T74;struct Cyc_List_List*_T75;struct Cyc_Absyn_Stmt*_T76;unsigned _T77;struct _fat_ptr _T78;struct Cyc_List_List*_T79;void*_T7A;struct Cyc_Absyn_Exp*_T7B;unsigned _T7C;struct Cyc_List_List*_T7D;struct Cyc_List_List*_T7E;void*_T7F;struct Cyc_List_List*_T80;void*_T81;struct Cyc_Absyn_Exp*_T82;struct Cyc_List_List*_T83;struct Cyc_List_List*_T84;struct Cyc_Warn_String_Warn_Warg_struct _T85;struct Cyc_Absyn_Stmt*_T86;unsigned _T87;struct _fat_ptr _T88;struct Cyc_Warn_String_Warn_Warg_struct _T89;struct Cyc_Absyn_Stmt*_T8A;unsigned _T8B;struct _fat_ptr _T8C;struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct*_T8D;struct Cyc_Absyn_Exp**_T8E;struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct*_T8F;void**_T90;long _T91;struct Cyc_Absyn_Exp**_T92;struct Cyc_Absyn_Exp*_T93;unsigned _T94;struct Cyc_List_List*_T95;void*_T96;struct Cyc_Absyn_Exp*_T97;long _T98;struct Cyc_Tc_TcContext*_T99;struct Cyc_Tcenv_Tenv*_T9A;struct Cyc_List_List*_T9B;void*_T9C;struct Cyc_Absyn_Switch_clause*_T9D;struct Cyc_Absyn_Pat*_T9E;void**_T9F;struct Cyc_Absyn_Exp*_TA0;struct Cyc_Tcpat_TcPatResult*_TA1;struct Cyc_List_List*_TA2;struct Cyc_List_List*_TA3;struct Cyc_Tcpat_TcPatResult*_TA4;struct Cyc_Tc_TcContext*_TA5;struct Cyc_Tcenv_Tenv*_TA6;struct Cyc_List_List*_TA7;struct Cyc_List_List*_TA8;void*_TA9;struct Cyc_Absyn_Switch_clause*_TAA;struct Cyc_Absyn_Pat*_TAB;void**_TAC;struct Cyc_Absyn_Exp*_TAD;struct Cyc_Tcpat_TcPatResult*_TAE;struct _tuple1*_TAF;struct Cyc_Tcpat_TcPatResult*_TB0;struct _tuple1*_TB1;struct _tuple1 _TB2;struct Cyc_List_List*_TB3;struct Cyc_Tcpat_TcPatResult*_TB4;struct Cyc_List_List*_TB5;struct _tuple1 _TB6;struct Cyc_List_List*_TB7;struct Cyc_List_List*_TB8;struct Cyc_List_List*_TB9;struct Cyc_Tcpat_TcPatResult*_TBA;struct _tuple1*_TBB;struct Cyc_List_List*(*_TBC)(struct Cyc_Absyn_Tvar*(*)(struct _tuple17*),struct Cyc_List_List*);struct Cyc_List_List*(*_TBD)(void*(*)(void*),struct Cyc_List_List*);struct Cyc_Absyn_Tvar*(*_TBE)(struct _tuple17*);void*(*_TBF)(struct _tuple0*);struct Cyc_Tcpat_TcPatResult*_TC0;struct _tuple1*_TC1;struct _tuple1 _TC2;struct Cyc_List_List*_TC3;struct Cyc_Tcenv_Tenv*_TC4;struct Cyc_List_List*_TC5;struct Cyc_List_List*_TC6;struct Cyc_List_List*_TC7;struct Cyc_List_List*_TC8;struct Cyc_List_List*_TC9;void*_TCA;struct Cyc_Absyn_Switch_clause*_TCB;struct Cyc_List_List*_TCC;void*_TCD;struct Cyc_Absyn_Switch_clause*_TCE;struct Cyc_List_List*_TCF;void*_TD0;struct Cyc_Absyn_Switch_clause*_TD1;unsigned _TD2;void*_TD3;struct Cyc_Absyn_Pat*_TD4;void*_TD5;void*_TD6;enum Cyc_Absyn_Coercion _TD7;int _TD8;struct Cyc_Warn_String_Warn_Warg_struct _TD9;struct Cyc_Warn_Typ_Warn_Warg_struct _TDA;struct Cyc_Warn_String_Warn_Warg_struct _TDB;struct Cyc_Warn_TypOpt_Warn_Warg_struct _TDC;struct Cyc_Absyn_Pat*_TDD;struct Cyc_List_List*_TDE;void*_TDF;struct Cyc_Absyn_Switch_clause*_TE0;unsigned _TE1;struct _fat_ptr _TE2;struct Cyc_Tcenv_Tenv*_TE3;struct Cyc_Absyn_Pat*_TE4;struct Cyc_Tcpat_TcPatResult*_TE5;struct Cyc_Tcpat_TcPatResult*_TE6;struct Cyc_List_List*_TE7;void*_TE8;struct Cyc_Absyn_Switch_clause*_TE9;struct Cyc_Core_Opt*_TEA;struct Cyc_Tcpat_TcPatResult _TEB;struct Cyc_Tc_TcContext*_TEC;struct Cyc_List_List*_TED;void*_TEE;struct Cyc_Absyn_Switch_clause*_TEF;unsigned _TF0;struct Cyc_Tcenv_Tenv*_TF1;struct Cyc_Tcpat_TcPatResult _TF2;struct Cyc_List_List*_TF3;void*_TF4;struct Cyc_Absyn_Switch_clause*_TF5;struct Cyc_Absyn_Stmt*_TF6;struct Cyc_List_List*_TF7;void*_TF8;struct Cyc_Absyn_Switch_clause*_TF9;struct Cyc_Absyn_Exp*_TFA;struct Cyc_List_List*_TFB;struct Cyc_Absyn_Stmt*_TFC;unsigned _TFD;struct Cyc_Tcenv_Tenv*_TFE;struct Cyc_List_List*_TFF;void**_T100;struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct*_T101;struct Cyc_List_List**_T102;struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct*_T103;void**_T104;struct Cyc_Absyn_Stmt*_T105;struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*_T106;struct Cyc_Absyn_Stmt*_T107;void*_T108;struct Cyc_Absyn_Stmt*_T109;unsigned _T10A;struct Cyc_Absyn_Stmt*_T10B;unsigned _T10C;void*_T10D;struct Cyc_Absyn_Stmt*_T10E;unsigned _T10F;struct Cyc_Absyn_Stmt*_T110;long(*_T111)(long(*)(struct Cyc_Absyn_Switch_clause*),struct Cyc_List_List*);long(*_T112)(long(*)(void*),struct Cyc_List_List*);struct Cyc_List_List**_T113;struct Cyc_List_List*_T114;long _T115;struct _tuple2*_T116;struct _tuple2*_T117;struct _fat_ptr*_T118;struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct*_T119;struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct*_T11A;struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct*_T11B;void*_T11C;void*_T11D;struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct*_T11E;struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T11F;void*_T120;void*_T121;struct Cyc_Absyn_Exp*_T122;struct Cyc_Absyn_Switch_clause*_T123;struct Cyc_Absyn_Switch_clause*_T124;struct Cyc_Absyn_Switch_clause*_T125;struct Cyc_Absyn_Switch_clause*_T126;struct Cyc_Absyn_Switch_clause*_T127;struct Cyc_List_List**_T128;struct Cyc_List_List**_T129;struct Cyc_List_List*_T12A;struct Cyc_List_List*_T12B;struct _fat_ptr _T12C;struct Cyc_List_List**_T12D;long _T12E;struct Cyc_Tc_TcContext*_T12F;struct Cyc_Tcenv_Tenv*_T130;struct Cyc_List_List*_T131;void*_T132;struct Cyc_Absyn_Switch_clause*_T133;struct Cyc_Absyn_Pat*_T134;void**_T135;struct Cyc_Tcpat_TcPatResult*_T136;struct Cyc_List_List*_T137;struct Cyc_List_List*_T138;struct Cyc_Tcpat_TcPatResult*_T139;struct Cyc_Tc_TcContext*_T13A;struct Cyc_Tcenv_Tenv*_T13B;struct Cyc_List_List*_T13C;struct Cyc_List_List*_T13D;void*_T13E;struct Cyc_Absyn_Switch_clause*_T13F;struct Cyc_Absyn_Pat*_T140;void**_T141;struct Cyc_Tcpat_TcPatResult*_T142;struct _tuple1*_T143;struct Cyc_Tcpat_TcPatResult*_T144;struct _tuple1*_T145;struct _tuple1 _T146;struct Cyc_List_List*_T147;struct Cyc_Tcpat_TcPatResult*_T148;struct Cyc_List_List*_T149;struct _tuple1 _T14A;struct Cyc_List_List*_T14B;struct Cyc_List_List*_T14C;struct Cyc_List_List*_T14D;struct Cyc_Tcpat_TcPatResult*_T14E;struct _tuple1*_T14F;struct Cyc_List_List*(*_T150)(struct Cyc_Absyn_Tvar*(*)(struct _tuple17*),struct Cyc_List_List*);struct Cyc_List_List*(*_T151)(void*(*)(void*),struct Cyc_List_List*);struct Cyc_Absyn_Tvar*(*_T152)(struct _tuple17*);void*(*_T153)(struct _tuple0*);struct Cyc_Tcpat_TcPatResult*_T154;struct _tuple1*_T155;struct _tuple1 _T156;struct Cyc_List_List*_T157;struct Cyc_Tcenv_Tenv*_T158;struct Cyc_List_List*_T159;struct Cyc_List_List*_T15A;struct Cyc_List_List*_T15B;struct Cyc_List_List*_T15C;struct Cyc_List_List*_T15D;void*_T15E;struct Cyc_Absyn_Switch_clause*_T15F;struct Cyc_List_List*_T160;void*_T161;struct Cyc_Absyn_Switch_clause*_T162;struct Cyc_List_List*_T163;void*_T164;struct Cyc_Absyn_Switch_clause*_T165;unsigned _T166;void*_T167;struct Cyc_Absyn_Pat*_T168;void*_T169;void*_T16A;enum Cyc_Absyn_Coercion _T16B;int _T16C;struct Cyc_Warn_String_Warn_Warg_struct _T16D;struct Cyc_Warn_Typ_Warn_Warg_struct _T16E;struct Cyc_Warn_String_Warn_Warg_struct _T16F;struct Cyc_Warn_TypOpt_Warn_Warg_struct _T170;struct Cyc_Absyn_Pat*_T171;struct Cyc_List_List*_T172;void*_T173;struct Cyc_Absyn_Switch_clause*_T174;unsigned _T175;struct _fat_ptr _T176;struct Cyc_Tcenv_Tenv*_T177;struct Cyc_Absyn_Pat*_T178;struct Cyc_Tcpat_TcPatResult*_T179;struct Cyc_Tcpat_TcPatResult*_T17A;struct Cyc_List_List*_T17B;void*_T17C;struct Cyc_Absyn_Switch_clause*_T17D;struct Cyc_Core_Opt*_T17E;struct Cyc_Tcpat_TcPatResult _T17F;struct Cyc_Tc_TcContext*_T180;struct Cyc_List_List*_T181;void*_T182;struct Cyc_Absyn_Switch_clause*_T183;unsigned _T184;struct Cyc_Tcenv_Tenv*_T185;struct Cyc_Tcpat_TcPatResult _T186;struct Cyc_List_List*_T187;void*_T188;struct Cyc_Absyn_Switch_clause*_T189;struct Cyc_Absyn_Stmt*_T18A;struct Cyc_List_List*_T18B;void*_T18C;struct Cyc_Absyn_Switch_clause*_T18D;struct Cyc_Absyn_Exp*_T18E;struct Cyc_List_List*_T18F;struct Cyc_Absyn_Stmt*_T190;unsigned _T191;struct Cyc_Tcenv_Tenv*_T192;struct Cyc_List_List**_T193;struct Cyc_List_List*_T194;void**_T195;struct Cyc_Tcenv_Tenv*_T196;long _T197;struct Cyc_Absyn_Stmt*_T198;unsigned _T199;struct Cyc_Tcenv_Tenv*_T19A;struct Cyc_Absyn_Decl*_T19B;int*_T19C;unsigned _T19D;struct Cyc_Absyn_Vardecl*_T19E;struct Cyc_Absyn_Vardecl*_T19F;void**_T1A0;enum Cyc_Absyn_Scope _T1A1;int _T1A2;struct Cyc_Absyn_Vardecl*_T1A3;struct Cyc_Warn_String_Warn_Warg_struct _T1A4;struct Cyc_Absyn_Decl*_T1A5;unsigned _T1A6;struct _fat_ptr _T1A7;void**_T1A8;void*_T1A9;long _T1AA;int*_T1AB;unsigned _T1AC;long _T1AD;struct Cyc_Absyn_Vardecl*_T1AE;struct Cyc_Absyn_Vardecl*_T1AF;struct Cyc_Absyn_Exp*_T1B0;struct Cyc_Absyn_ArrayInfo _T1B1;struct Cyc_Absyn_Exp*_T1B2;struct Cyc_Absyn_Vardecl*_T1B3;struct Cyc_Absyn_Exp*_T1B4;int*_T1B5;unsigned _T1B6;struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T1B7;union Cyc_Absyn_Cnst _T1B8;struct _union_Cnst_Wstring_c _T1B9;unsigned _T1BA;union Cyc_Absyn_Cnst _T1BB;struct _union_Cnst_String_c _T1BC;struct _fat_ptr _T1BD;unsigned _T1BE;union Cyc_Absyn_Cnst _T1BF;struct _union_Cnst_Wstring_c _T1C0;int _T1C1;unsigned _T1C2;struct Cyc_Absyn_Vardecl*_T1C3;struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T1C4;struct Cyc_List_List*_T1C5;long _T1C6;struct Cyc_Tc_TcContext*_T1C7;struct Cyc_Absyn_Stmt*_T1C8;unsigned _T1C9;struct Cyc_Tcenv_Tenv*_T1CA;struct Cyc_List_List*_T1CB;struct Cyc_Absyn_Kind*_T1CC;struct Cyc_Absyn_Kind*_T1CD;long _T1CE;void*_T1CF;struct Cyc_Absyn_Vardecl*_T1D0;struct Cyc_Absyn_Stmt*_T1D1;unsigned _T1D2;struct Cyc_Absyn_Vardecl*_T1D3;struct Cyc_Absyn_Tqual _T1D4;long _T1D5;void*_T1D6;enum Cyc_Absyn_Scope _T1D7;int _T1D8;enum Cyc_Absyn_Scope _T1D9;int _T1DA;struct Cyc_Warn_String_Warn_Warg_struct _T1DB;struct Cyc_Absyn_Decl*_T1DC;unsigned _T1DD;struct _fat_ptr _T1DE;struct Cyc_Tc_TcContext*_T1DF;struct Cyc_Tcenv_Tenv*_T1E0;void**_T1E1;struct Cyc_Absyn_Exp*_T1E2;long _T1E3;long _T1E4;struct Cyc_Warn_String_Warn_Warg_struct _T1E5;struct Cyc_Absyn_Decl*_T1E6;unsigned _T1E7;struct _fat_ptr _T1E8;struct Cyc_List_List*_T1E9;struct Cyc_Absyn_Exp*_T1EA;void*_T1EB;long _T1EC;struct Cyc_Warn_Vardecl_Warn_Warg_struct _T1ED;struct Cyc_Warn_String_Warn_Warg_struct _T1EE;struct Cyc_Warn_Typ_Warn_Warg_struct _T1EF;struct Cyc_Warn_String_Warn_Warg_struct _T1F0;struct Cyc_Warn_TypOpt_Warn_Warg_struct _T1F1;struct Cyc_Absyn_Exp*_T1F2;struct Cyc_Absyn_Decl*_T1F3;unsigned _T1F4;struct _fat_ptr _T1F5;void*_T1F6;struct Cyc_Absyn_Exp*_T1F7;void*_T1F8;void*_T1F9;struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*_T1FA;struct Cyc_Core_Opt**_T1FB;struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*_T1FC;struct Cyc_Absyn_Exp**_T1FD;struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*_T1FE;void**_T1FF;struct Cyc_Absyn_Pat*_T200;int*_T201;unsigned _T202;long _T203;struct Cyc_Absyn_Exp**_T204;struct Cyc_Absyn_Exp*_T205;void*_T206;struct Cyc_Tc_TcContext*_T207;struct Cyc_Tcenv_Tenv*_T208;struct Cyc_Absyn_Pat*_T209;void**_T20A;struct Cyc_Absyn_Exp*_T20B;struct Cyc_Core_Opt**_T20C;struct Cyc_Core_Opt*_T20D;struct Cyc_Tcpat_TcPatResult _T20E;struct Cyc_Absyn_Pat*_T20F;void*_T210;struct Cyc_Absyn_Exp*_T211;void*_T212;long _T213;struct Cyc_List_List*_T214;struct Cyc_Absyn_Exp*_T215;void*_T216;long _T217;struct Cyc_Warn_String_Warn_Warg_struct _T218;struct Cyc_Warn_Typ_Warn_Warg_struct _T219;struct Cyc_Warn_String_Warn_Warg_struct _T21A;struct Cyc_Warn_Typ_Warn_Warg_struct _T21B;struct Cyc_Absyn_Decl*_T21C;unsigned _T21D;struct _fat_ptr _T21E;struct Cyc_Tcenv_Tenv*_T21F;struct Cyc_Absyn_Pat*_T220;struct Cyc_Tcpat_TcPatResult*_T221;struct Cyc_Tcpat_TcPatResult*_T222;struct Cyc_Absyn_Pat*_T223;unsigned _T224;struct Cyc_Tcenv_Tenv*_T225;struct Cyc_Absyn_Pat*_T226;void**_T227;struct Cyc_Tc_TcContext*_T228;struct Cyc_Absyn_Stmt*_T229;unsigned _T22A;struct Cyc_Tcenv_Tenv*_T22B;struct Cyc_Tcpat_TcPatResult _T22C;struct Cyc_Absyn_Stmt*_T22D;struct Cyc_List_List*_T22E;void*_T22F;struct Cyc_Absyn_Vardecl*_T230;struct Cyc_Tc_TcContext*_T231;struct Cyc_Absyn_Stmt*_T232;unsigned _T233;struct Cyc_Tcenv_Tenv*_T234;struct Cyc_List_List*_T235;struct Cyc_Absyn_Kind*_T236;struct Cyc_Absyn_Kind*_T237;struct Cyc_List_List*_T238;void*_T239;struct Cyc_Absyn_Vardecl*_T23A;void*_T23B;struct Cyc_List_List*_T23C;struct Cyc_Absyn_Stmt*_T23D;struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*_T23E;struct Cyc_Absyn_Stmt*_T23F;void*_T240;struct Cyc_Absyn_Stmt*_T241;unsigned _T242;struct Cyc_Absyn_Stmt*_T243;unsigned _T244;void*_T245;struct Cyc_Absyn_Stmt*_T246;unsigned _T247;struct Cyc_Absyn_Stmt*_T248;struct Cyc_Absyn_Vardecl*_T249;struct Cyc_Absyn_Vardecl*_T24A;void**_T24B;struct Cyc_Absyn_Vardecl*_T24C;void**_T24D;void**_T24E;struct Cyc_Absyn_Exp*_T24F;unsigned _T250;struct _tuple2*_T251;struct Cyc_List_List*_T252;struct _fat_ptr*_T253;struct _fat_ptr _T254;struct _tuple2*_T255;struct _fat_ptr*_T256;struct Cyc_Core_Opt*_T257;struct Cyc_Absyn_Kind*_T258;struct Cyc_Core_Opt*_T259;struct Cyc_Absyn_Kind*_T25A;struct Cyc_Core_Opt*_T25B;struct Cyc_Absyn_Kind*_T25C;union Cyc_Absyn_AggrInfo _T25D;struct Cyc_List_List*_T25E;struct _fat_ptr _T25F;void*_T260;void*_T261;void*_T262;struct Cyc_Absyn_Tqual _T263;void*_T264;void*_T265;struct Cyc_Tc_TcContext*_T266;struct Cyc_Absyn_Stmt*_T267;unsigned _T268;struct Cyc_Tcenv_Tenv*_T269;struct Cyc_List_List*_T26A;struct Cyc_Absyn_Kind*_T26B;struct Cyc_Absyn_Kind*_T26C;void*_T26D;struct Cyc_Tc_TcContext*_T26E;struct Cyc_Tcenv_Tenv*_T26F;void**_T270;struct Cyc_Absyn_Exp*_T271;long _T272;struct Cyc_List_List*_T273;struct Cyc_Absyn_Exp*_T274;void*_T275;long _T276;struct Cyc_Warn_String_Warn_Warg_struct _T277;struct Cyc_Warn_Typ_Warn_Warg_struct _T278;struct Cyc_Warn_String_Warn_Warg_struct _T279;struct Cyc_Warn_Typ_Warn_Warg_struct _T27A;struct Cyc_Absyn_Stmt*_T27B;unsigned _T27C;struct _fat_ptr _T27D;long _T27E;struct Cyc_Warn_String_Warn_Warg_struct _T27F;struct Cyc_Absyn_Stmt*_T280;unsigned _T281;struct _fat_ptr _T282;void**_T283;struct Cyc_Absyn_VarType_Absyn_Type_struct*_T284;struct Cyc_Absyn_Stmt*_T285;unsigned _T286;struct Cyc_Tcenv_Tenv*_T287;struct Cyc_List_List*_T288;struct Cyc_Tc_TcContext*_T289;struct Cyc_Absyn_Stmt*_T28A;unsigned _T28B;struct Cyc_Tcenv_Tenv*_T28C;struct Cyc_List_List*_T28D;struct Cyc_Absyn_Kind*_T28E;struct Cyc_Absyn_Kind*_T28F;void**_T290;void*_T291;void**_T292;void*_T293;void*_T294;long _T295;int(*_T296)(struct _fat_ptr,struct _fat_ptr);void*(*_T297)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T298;struct _fat_ptr _T299;struct Cyc_Absyn_Fndecl*_T29A;enum Cyc_Absyn_Scope _T29B;int _T29C;struct Cyc_Warn_String_Warn_Warg_struct _T29D;struct Cyc_Absyn_Decl*_T29E;unsigned _T29F;struct _fat_ptr _T2A0;struct Cyc_Absyn_Decl*_T2A1;unsigned _T2A2;struct Cyc_Absyn_Fndecl*_T2A3;struct Cyc_Absyn_FnInfo _T2A4;struct Cyc_List_List*_T2A5;struct Cyc_Tc_TcContext*_T2A6;struct Cyc_Absyn_Decl*_T2A7;unsigned _T2A8;struct Cyc_Tcenv_Tenv*_T2A9;struct Cyc_Absyn_Fndecl*_T2AA;struct Cyc_Absyn_Fndecl*_T2AB;void*_T2AC;struct Cyc_Absyn_Fndecl*_T2AD;struct Cyc_Absyn_FnInfo _T2AE;struct Cyc_List_List*_T2AF;struct Cyc_Absyn_Vardecl*_T2B0;struct Cyc_Absyn_Fndecl*_T2B1;struct Cyc_Absyn_Vardecl*_T2B2;struct Cyc_Absyn_Fndecl*_T2B3;struct Cyc_Absyn_Vardecl*_T2B4;struct Cyc_Absyn_Vardecl*_T2B5;struct Cyc_Absyn_Vardecl*_T2B6;void*_T2B7;void*_T2B8;void*_T2B9;struct Cyc_Absyn_Tqual _T2BA;void*_T2BB;void*_T2BC;struct Cyc_Absyn_Vardecl*_T2BD;struct Cyc_Absyn_Vardecl*_T2BE;struct Cyc_Absyn_Vardecl*_T2BF;struct Cyc_Absyn_Vardecl*_T2C0;struct Cyc_Absyn_Vardecl*_T2C1;struct Cyc_Absyn_Fndecl*_T2C2;struct Cyc_Absyn_Stmt*_T2C3;struct Cyc_Absyn_Vardecl*_T2C4;struct Cyc_Absyn_Fndecl*_T2C5;struct Cyc_Tcenv_Tenv*_T2C6;struct Cyc_Tcenv_Fenv*_T2C7;struct Cyc_Tcenv_Tenv*_T2C8;struct Cyc_Absyn_Decl*_T2C9;unsigned _T2CA;struct Cyc_Tcenv_Fenv*_T2CB;struct Cyc_Absyn_Fndecl*_T2CC;struct Cyc_Tc_TcContext*_T2CD;struct Cyc_Tcenv_Tenv*_T2CE;struct Cyc_Absyn_Fndecl*_T2CF;struct Cyc_Absyn_Stmt*_T2D0;struct Cyc_Tcenv_Tenv*_T2D1;struct Cyc_Warn_String_Warn_Warg_struct _T2D2;struct Cyc_Warn_String_Warn_Warg_struct _T2D3;struct Cyc_Warn_String_Warn_Warg_struct _T2D4;int(*_T2D5)(struct _fat_ptr);void*(*_T2D6)(struct _fat_ptr);struct _fat_ptr _T2D7;_T0= s0;{
void*_T2D8=_T0->r;struct Cyc_Absyn_Decl*_T2D9;struct Cyc_Absyn_Stmt*_T2DA;struct Cyc_Absyn_Stmt*_T2DB;struct Cyc_Absyn_Exp*_T2DC;void*_T2DD;void*_T2DE;void*_T2DF;_T1= (int*)_T2D8;_T2= *_T1;switch(_T2){case 0:
# 144
 return;case 1:{struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct*_T2E0=(struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct*)_T2D8;_T2DF= _T2E0->f1;}{struct Cyc_Absyn_Exp*e=_T2DF;
# 147
Cyc_Tcexp_tcExp(ctx,te,0,e);_T3= 
Cyc_Tcenv_in_stmt_exp(te);if(_T3)goto _TL2A;else{goto _TL2C;}
_TL2C: Cyc_Tcstmt_simplify_unused_result_exp(e);goto _TL2B;_TL2A: _TL2B:
 return;}case 2:{struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*_T2E0=(struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*)_T2D8;_T2DF= _T2E0->f1;_T2DE= _T2E0->f2;}{struct Cyc_Absyn_Stmt*s1=_T2DF;struct Cyc_Absyn_Stmt*s2=_T2DE;
# 153
Cyc_Tcstmt_tcStmt(ctx,te,s1,1);
Cyc_Tcstmt_tcStmt(ctx,te,s2,1);
return;}case 3:{struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct*_T2E0=(struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct*)_T2D8;_T2DF= _T2E0->f1;}{struct Cyc_Absyn_Exp*eopt=_T2DF;
# 158
void*t=Cyc_Tcenv_return_typ(te);
if(eopt!=0)goto _TL2D;_T4= 
Cyc_Tcutil_is_void_type(t);if(_T4)goto _TL2F;else{goto _TL31;}
_TL31: _T5= Cyc_Tcutil_is_any_float_type(t);if(_T5)goto _TL34;else{goto _TL35;}_TL35: _T6= Cyc_Tcutil_is_any_int_type(t);if(_T6)goto _TL34;else{goto _TL32;}
_TL34:{struct Cyc_Warn_String_Warn_Warg_struct _T2E0;_T2E0.tag= 0;({__typeof__(_tag_fat("should return a value of type ",sizeof(char),31U))_T2E1=_tag_fat("should return a value of type ",sizeof(char),31U);_T2E0.f1= _T2E1;});_T7= _T2E0;}{struct Cyc_Warn_String_Warn_Warg_struct _T2E0=_T7;{struct Cyc_Warn_Typ_Warn_Warg_struct _T2E1;_T2E1.tag= 2;_T2E1.f1= t;_T8= _T2E1;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T2E1=_T8;void*_T2E2[2];_T2E2[0]= & _T2E0;_T2E2[1]= & _T2E1;_T9= s0;_TA= _T9->loc;_TB= _tag_fat(_T2E2,sizeof(void*),2);Cyc_Warn_warn2(_TA,_TB);}}goto _TL33;
# 164
_TL32:{struct Cyc_Warn_String_Warn_Warg_struct _T2E0;_T2E0.tag= 0;({__typeof__(_tag_fat("must return a value of type ",sizeof(char),29U))_T2E1=_tag_fat("must return a value of type ",sizeof(char),29U);_T2E0.f1= _T2E1;});_TC= _T2E0;}{struct Cyc_Warn_String_Warn_Warg_struct _T2E0=_TC;{struct Cyc_Warn_Typ_Warn_Warg_struct _T2E1;_T2E1.tag= 2;_T2E1.f1= t;_TD= _T2E1;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T2E1=_TD;void*_T2E2[2];_T2E2[0]= & _T2E0;_T2E2[1]= & _T2E1;_TE= s0;_TF= _TE->loc;_T10= _tag_fat(_T2E2,sizeof(void*),2);Cyc_Warn_err2(_TF,_T10);}}_TL33: goto _TL30;_TL2F: _TL30:
# 166
 return;_TL2D: _T11= ctx;_T12= te;_T13= & t;_T14= eopt;
# 169
Cyc_Tcexp_tcExp(_T11,_T12,_T13,_T14);_T15= 
Cyc_Tcenv_curr_aquals_bounds(te);_T16= eopt;_T17= t;_T18= Cyc_Tcutil_coerce_arg(_T15,_T16,_T17,0);if(_T18)goto _TL36;else{goto _TL38;}
_TL38:{struct Cyc_Warn_String_Warn_Warg_struct _T2E0;_T2E0.tag= 0;({__typeof__(_tag_fat("returns value of type ",sizeof(char),23U))_T2E1=_tag_fat("returns value of type ",sizeof(char),23U);_T2E0.f1= _T2E1;});_T19= _T2E0;}{struct Cyc_Warn_String_Warn_Warg_struct _T2E0=_T19;{struct Cyc_Warn_TypOpt_Warn_Warg_struct _T2E1;_T2E1.tag= 3;_T1B= eopt;_T2E1.f1= _T1B->topt;_T1A= _T2E1;}{struct Cyc_Warn_TypOpt_Warn_Warg_struct _T2E1=_T1A;{struct Cyc_Warn_String_Warn_Warg_struct _T2E2;_T2E2.tag= 0;({__typeof__(_tag_fat(" but requires ",sizeof(char),15U))_T2E3=_tag_fat(" but requires ",sizeof(char),15U);_T2E2.f1= _T2E3;});_T1C= _T2E2;}{struct Cyc_Warn_String_Warn_Warg_struct _T2E2=_T1C;{struct Cyc_Warn_Typ_Warn_Warg_struct _T2E3;_T2E3.tag= 2;_T2E3.f1= t;_T1D= _T2E3;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T2E3=_T1D;void*_T2E4[4];_T2E4[0]= & _T2E0;_T2E4[1]= & _T2E1;_T2E4[2]= & _T2E2;_T2E4[3]= & _T2E3;_T1E= s0;_T1F= _T1E->loc;_T20= _tag_fat(_T2E4,sizeof(void*),4);Cyc_Warn_err2(_T1F,_T20);}}}}
Cyc_Unify_explain_failure();goto _TL37;_TL36: _TL37: _T21= eopt;_T22= _T21->loc;_T23= 
# 174
Cyc_Tcenv_curr_aquals_bounds(te);_T24= t;_T25= eopt;Cyc_Tcexp_check_consume(_T22,_T23,_T24,_T25);
return;}case 4:{struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct*_T2E0=(struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct*)_T2D8;_T2DF= _T2E0->f1;_T2DE= _T2E0->f2;_T2DD= _T2E0->f3;}{struct Cyc_Absyn_Exp*e=_T2DF;struct Cyc_Absyn_Stmt*s1=_T2DE;struct Cyc_Absyn_Stmt*s2=_T2DD;_T26= ctx;_T27= te;_T28= e;_T29= 
# 178
_tag_fat("if statement",sizeof(char),13U);Cyc_Tcexp_tcTest(_T26,_T27,_T28,_T29);
Cyc_Tcstmt_tcStmt(ctx,te,s1,1);
Cyc_Tcstmt_tcStmt(ctx,te,s2,1);
return;}case 5:{struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct*_T2E0=(struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct*)_T2D8;_T2A= _T2E0->f1;_T2DF= _T2A.f0;_T2B= _T2E0->f1;_T2DE= _T2B.f1;_T2DD= _T2E0->f2;}{struct Cyc_Absyn_Exp*e=_T2DF;struct Cyc_Absyn_Stmt*cont_s=_T2DE;struct Cyc_Absyn_Stmt*s=_T2DD;_T2C= ctx;_T2D= te;_T2E= e;_T2F= 
# 184
_tag_fat("while loop",sizeof(char),11U);Cyc_Tcexp_tcTest(_T2C,_T2D,_T2E,_T2F);
Cyc_Tcstmt_tcStmt(ctx,te,s,1);
return;}case 9:{struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct*_T2E0=(struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct*)_T2D8;_T2DF= _T2E0->f1;_T30= _T2E0->f2;_T2DE= _T30.f0;_T31= _T2E0->f2;_T2DD= _T31.f1;_T32= _T2E0->f3;_T2DC= _T32.f0;_T33= _T2E0->f3;_T2DB= _T33.f1;_T2DA= _T2E0->f4;}{struct Cyc_Absyn_Exp*e1=_T2DF;struct Cyc_Absyn_Exp*e2=_T2DE;struct Cyc_Absyn_Stmt*guard_s=_T2DD;struct Cyc_Absyn_Exp*e3=_T2DC;struct Cyc_Absyn_Stmt*cont_s=_T2DB;struct Cyc_Absyn_Stmt*s=_T2DA;
# 189
Cyc_Tcexp_tcExp(ctx,te,0,e1);_T34= ctx;_T35= te;_T36= e2;_T37= 
_tag_fat("for loop",sizeof(char),9U);Cyc_Tcexp_tcTest(_T34,_T35,_T36,_T37);
Cyc_Tcstmt_tcStmt(ctx,te,s,1);
Cyc_Tcexp_tcExp(ctx,te,0,e3);
Cyc_Tcstmt_simplify_unused_result_exp(e3);
return;}case 14:{struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct*_T2E0=(struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct*)_T2D8;_T2DF= _T2E0->f1;_T38= _T2E0->f2;_T2DE= _T38.f0;_T39= _T2E0->f2;_T2DD= _T39.f1;}{struct Cyc_Absyn_Stmt*s=_T2DF;struct Cyc_Absyn_Exp*e=_T2DE;struct Cyc_Absyn_Stmt*cont_s=_T2DD;
# 197
Cyc_Tcstmt_tcStmt(ctx,te,s,1);_T3A= ctx;_T3B= te;_T3C= e;_T3D= 
_tag_fat("do loop",sizeof(char),8U);Cyc_Tcexp_tcTest(_T3A,_T3B,_T3C,_T3D);
return;}case 6: goto _LL14;case 7: _LL14: goto _LL16;case 8: _LL16:
# 204
 return;case 13:{struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct*_T2E0=(struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct*)_T2D8;_T2DF= _T2E0->f1;_T2DE= _T2E0->f2;}{struct _fat_ptr*l=_T2DF;struct Cyc_Absyn_Stmt*s=_T2DE;
# 209
struct Cyc_Absyn_Tvar*tv;tv= _cycalloc(sizeof(struct Cyc_Absyn_Tvar));_T3E= tv;{struct _fat_ptr*_T2E0=_cycalloc(sizeof(struct _fat_ptr));{struct Cyc_String_pa_PrintArg_struct _T2E1;_T2E1.tag= 0;_T42= l;_T2E1.f1= *_T42;_T41= _T2E1;}{struct Cyc_String_pa_PrintArg_struct _T2E1=_T41;void*_T2E2[1];_T2E2[0]= & _T2E1;_T43= _tag_fat("`%s",sizeof(char),4U);_T44= _tag_fat(_T2E2,sizeof(void*),1);_T40= Cyc_aprintf(_T43,_T44);}*_T2E0= _T40;_T3F= (struct _fat_ptr*)_T2E0;}_T3E->name= _T3F;_T45= tv;({__typeof__(Cyc_Tcutil_new_tvar_id())_T2E0=Cyc_Tcutil_new_tvar_id();_T45->identity= _T2E0;});_T46= tv;_T47= & Cyc_Kinds_ek;_T48= (struct Cyc_Absyn_Kind*)_T47;
({__typeof__(Cyc_Kinds_kind_to_bound(_T48))_T2E0=Cyc_Kinds_kind_to_bound(_T48);_T46->kind= _T2E0;});_T49= tv;_T49->aquals_bound= 0;_T4A= ctx;_T4B= s0;_T4C= _T4B->loc;_T4D= te;_T4E= tv;_T4F= 
Cyc_Tcenv_new_named_block(_T4C,_T4D,_T4E);_T50= s;Cyc_Tcstmt_tcStmt(_T4A,_T4F,_T50,0);
return;}case 11:{struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct*_T2E0=(struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct*)_T2D8;_T2DF= _T2E0->f1;_T51= (struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct*)_T2D8;_T52= & _T51->f2;_T2DE= (struct Cyc_Absyn_Switch_clause***)_T52;}{struct Cyc_List_List*es=_T2DF;struct Cyc_Absyn_Switch_clause***clauseopt=_T2DE;
# 215
const struct _tuple15*trip_opt=Cyc_Tcenv_process_fallthru(te,s0,clauseopt);
if(trip_opt!=0)goto _TL39;{struct Cyc_Warn_String_Warn_Warg_struct _T2E0;_T2E0.tag= 0;
({__typeof__(_tag_fat("fallthru in a last case",sizeof(char),24U))_T2E1=_tag_fat("fallthru in a last case",sizeof(char),24U);_T2E0.f1= _T2E1;});_T53= _T2E0;}{struct Cyc_Warn_String_Warn_Warg_struct _T2E0=_T53;void*_T2E1[1];_T2E1[0]= & _T2E0;_T54= s0;_T55= _T54->loc;_T56= _tag_fat(_T2E1,sizeof(void*),1);Cyc_Warn_err2(_T55,_T56);}
return;_TL39: _T57= trip_opt;{
# 220
struct _tuple15 _T2E0=*_T57;struct Cyc_List_List*_T2E1;struct Cyc_List_List*_T2E2;_T2E2= _T2E0.f1;_T2E1= _T2E0.f2;{struct Cyc_List_List*tvs=_T2E2;struct Cyc_List_List*ts_orig=_T2E1;_T59= Cyc_List_map_c;{
struct Cyc_List_List*(*_T2E3)(struct _tuple16*(*)(struct Cyc_List_List*,struct Cyc_Absyn_Tvar*),struct Cyc_List_List*,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _tuple16*(*)(struct Cyc_List_List*,struct Cyc_Absyn_Tvar*),struct Cyc_List_List*,struct Cyc_List_List*))_T59;_T58= _T2E3;}_T5A= Cyc_Tcutil_make_inst_var;_T5B= Cyc_Tcenv_lookup_type_vars(te);_T5C= tvs;{struct Cyc_List_List*instantiation=_T58(_T5A,_T5B,_T5C);_T5E= Cyc_List_map_c;{
struct Cyc_List_List*(*_T2E3)(void*(*)(struct Cyc_List_List*,void*),struct Cyc_List_List*,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(void*(*)(struct Cyc_List_List*,void*),struct Cyc_List_List*,struct Cyc_List_List*))_T5E;_T5D= _T2E3;}_T5F= Cyc_Tcutil_substitute;_T60= instantiation;_T61= ts_orig;{struct Cyc_List_List*ts=_T5D(_T5F,_T60,_T61);
_TL3E: if(ts!=0)goto _TL3F;else{goto _TL3D;}_TL3F: if(es!=0)goto _TL3C;else{goto _TL3D;}
# 225
_TL3C: _T62= ctx;_T63= te;_T64= es;_T65= _T64->hd;_T66= (struct Cyc_Absyn_Exp*)_T65;Cyc_Tcexp_tcExp(_T62,_T63,0,_T66);_T67= 
Cyc_Tcenv_curr_aquals_bounds(te);_T68= es;_T69= _T68->hd;_T6A= (struct Cyc_Absyn_Exp*)_T69;_T6B= ts;_T6C= _T6B->hd;_T6D= Cyc_Tcutil_coerce_arg(_T67,_T6A,_T6C,0);if(_T6D)goto _TL40;else{goto _TL42;}
_TL42:{struct Cyc_Warn_String_Warn_Warg_struct _T2E3;_T2E3.tag= 0;({__typeof__(_tag_fat("fallthru argument has type ",sizeof(char),28U))_T2E4=_tag_fat("fallthru argument has type ",sizeof(char),28U);_T2E3.f1= _T2E4;});_T6E= _T2E3;}{struct Cyc_Warn_String_Warn_Warg_struct _T2E3=_T6E;{struct Cyc_Warn_TypOpt_Warn_Warg_struct _T2E4;_T2E4.tag= 3;_T70= es;_T71= _T70->hd;_T72= (struct Cyc_Absyn_Exp*)_T71;_T2E4.f1= _T72->topt;_T6F= _T2E4;}{struct Cyc_Warn_TypOpt_Warn_Warg_struct _T2E4=_T6F;{struct Cyc_Warn_String_Warn_Warg_struct _T2E5;_T2E5.tag= 0;
({__typeof__(_tag_fat("but pattern variable has type ",sizeof(char),31U))_T2E6=_tag_fat("but pattern variable has type ",sizeof(char),31U);_T2E5.f1= _T2E6;});_T73= _T2E5;}{struct Cyc_Warn_String_Warn_Warg_struct _T2E5=_T73;{struct Cyc_Warn_Typ_Warn_Warg_struct _T2E6;_T2E6.tag= 2;_T75= ts;_T2E6.f1= _T75->hd;_T74= _T2E6;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T2E6=_T74;void*_T2E7[4];_T2E7[0]= & _T2E3;_T2E7[1]= & _T2E4;_T2E7[2]= & _T2E5;_T2E7[3]= & _T2E6;_T76= s0;_T77= _T76->loc;_T78= _tag_fat(_T2E7,sizeof(void*),4);Cyc_Warn_err2(_T77,_T78);}}}}
Cyc_Unify_explain_failure();goto _TL41;_TL40: _TL41: _T79= es;_T7A= _T79->hd;_T7B= (struct Cyc_Absyn_Exp*)_T7A;_T7C= _T7B->loc;_T7D= 
# 231
Cyc_Tcenv_curr_aquals_bounds(te);_T7E= ts;_T7F= _T7E->hd;_T80= es;_T81= _T80->hd;_T82= (struct Cyc_Absyn_Exp*)_T81;Cyc_Tcexp_check_consume(_T7C,_T7D,_T7F,_T82);_T83= ts;
# 223
ts= _T83->tl;_T84= es;es= _T84->tl;goto _TL3E;_TL3D:
# 234
 if(es==0)goto _TL43;{struct Cyc_Warn_String_Warn_Warg_struct _T2E3;_T2E3.tag= 0;
({__typeof__(_tag_fat("too many arguments in explicit fallthru",sizeof(char),40U))_T2E4=_tag_fat("too many arguments in explicit fallthru",sizeof(char),40U);_T2E3.f1= _T2E4;});_T85= _T2E3;}{struct Cyc_Warn_String_Warn_Warg_struct _T2E3=_T85;void*_T2E4[1];_T2E4[0]= & _T2E3;_T86= s0;_T87= _T86->loc;_T88= _tag_fat(_T2E4,sizeof(void*),1);Cyc_Warn_err2(_T87,_T88);}goto _TL44;_TL43: _TL44:
 if(ts==0)goto _TL45;{struct Cyc_Warn_String_Warn_Warg_struct _T2E3;_T2E3.tag= 0;
({__typeof__(_tag_fat("too few arguments in explicit fallthru",sizeof(char),39U))_T2E4=_tag_fat("too few arguments in explicit fallthru",sizeof(char),39U);_T2E3.f1= _T2E4;});_T89= _T2E3;}{struct Cyc_Warn_String_Warn_Warg_struct _T2E3=_T89;void*_T2E4[1];_T2E4[0]= & _T2E3;_T8A= s0;_T8B= _T8A->loc;_T8C= _tag_fat(_T2E4,sizeof(void*),1);Cyc_Warn_err2(_T8B,_T8C);}goto _TL46;_TL45: _TL46:
 return;}}}}}case 10:{struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct*_T2E0=(struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct*)_T2D8;_T8D= (struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct*)_T2D8;_T8E= & _T8D->f1;_T2DF= (struct Cyc_Absyn_Exp**)_T8E;_T2DE= _T2E0->f2;_T8F= (struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct*)_T2D8;_T90= & _T8F->f3;_T2DD= (void**)_T90;}{struct Cyc_Absyn_Exp**exp=_T2DF;struct Cyc_List_List*scs0=_T2DE;void**dtp=(void**)_T2DD;_T91= 
# 242
Cyc_Tcstmt_make_var_exp(exp,s0);if(!_T91)goto _TL47;
Cyc_Tcstmt_tcStmt(ctx,te,s0,new_block);
return;_TL47: _T92= exp;{
# 247
struct Cyc_Absyn_Exp*e=*_T92;
void*t=Cyc_Tcexp_tcExp(ctx,te,0,e);_T93= e;_T94= _T93->loc;_T95= 
# 250
Cyc_Tcenv_curr_aquals_bounds(te);_T96= t;_T97= e;Cyc_Tcexp_check_consume(_T94,_T95,_T96,_T97);{
# 254
struct Cyc_Tcpat_TcPatResult this_pattern;
struct Cyc_Tcpat_TcPatResult*next_pattern=0;
long first_case=1;{
struct Cyc_List_List*scs=scs0;_TL4C: if(scs!=0)goto _TL4A;else{goto _TL4B;}
_TL4A: _T98= first_case;if(!_T98)goto _TL4D;
first_case= 0;_T99= ctx;_T9A= te;_T9B= scs;_T9C= _T9B->hd;_T9D= (struct Cyc_Absyn_Switch_clause*)_T9C;_T9E= _T9D->pattern;_T9F= & t;_TA0= e;
this_pattern= Cyc_Tcpat_tcPat(_T99,_T9A,_T9E,_T9F,_TA0);goto _TL4E;
# 262
_TL4D: _TA1= _check_null(next_pattern);this_pattern= *_TA1;_TL4E: _TA2= scs;_TA3= _TA2->tl;
# 264
if(_TA3==0)goto _TL4F;{struct Cyc_Tcpat_TcPatResult*_T2E0=_cycalloc(sizeof(struct Cyc_Tcpat_TcPatResult));_TA5= ctx;_TA6= te;_TA7= scs;_TA8= _TA7->tl;_TA9= _TA8->hd;_TAA= (struct Cyc_Absyn_Switch_clause*)_TA9;_TAB= _TAA->pattern;_TAC= & t;_TAD= e;
({__typeof__(Cyc_Tcpat_tcPat(_TA5,_TA6,_TAB,_TAC,_TAD))_T2E1=Cyc_Tcpat_tcPat(_TA5,_TA6,_TAB,_TAC,_TAD);*_T2E0= _T2E1;});_TA4= (struct Cyc_Tcpat_TcPatResult*)_T2E0;}next_pattern= _TA4;_TAE= next_pattern;_TAF= _TAE->tvars_and_effconstr_opt;
if(_TAF==0)goto _TL51;_TB0= next_pattern;_TB1= _TB0->tvars_and_effconstr_opt;_TB2= *_TB1;_TB3= _TB2.f1;if(_TB3==0)goto _TL51;
# 268
te= Cyc_Tcenv_clear_fallthru(te);goto _TL52;
# 270
_TL51: _TB4= next_pattern;_TB5= _TB4->patvars;_TB6= Cyc_List_split(_TB5);_TB7= _TB6.f0;_TB8= Cyc_Tcutil_filter_nulls(_TB7);{struct Cyc_List_List*vs=Cyc_List_imp_rev(_TB8);_TBA= next_pattern;_TBB= _TBA->tvars_and_effconstr_opt;
if(_TBB!=0)goto _TL53;_TB9= 0;goto _TL54;_TL53: _TBD= Cyc_List_map;{
# 273
struct Cyc_List_List*(*_T2E0)(struct Cyc_Absyn_Tvar*(*)(struct _tuple17*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct Cyc_Absyn_Tvar*(*)(struct _tuple17*),struct Cyc_List_List*))_TBD;_TBC= _T2E0;}_TBF= Cyc_Core_fst;{struct Cyc_Absyn_Tvar*(*_T2E0)(struct _tuple17*)=(struct Cyc_Absyn_Tvar*(*)(struct _tuple17*))_TBF;_TBE= _T2E0;}_TC0= next_pattern;_TC1= _TC0->tvars_and_effconstr_opt;_TC2= *_TC1;_TC3= _TC2.f0;_TB9= _TBC(_TBE,_TC3);_TL54: {
# 271
struct Cyc_List_List*new_tvs=_TB9;_TC4= te;_TC5= new_tvs;_TC6= vs;_TC7= scs;_TC8= _TC7->tl;_TC9= 
# 274
_check_null(_TC8);_TCA= _TC9->hd;_TCB= (struct Cyc_Absyn_Switch_clause*)_TCA;te= Cyc_Tcenv_set_fallthru(_TC4,_TC5,_TC6,_TCB);}}_TL52: goto _TL50;
# 277
_TL4F: te= Cyc_Tcenv_clear_fallthru(te);_TL50: _TCC= scs;_TCD= _TCC->hd;_TCE= (struct Cyc_Absyn_Switch_clause*)_TCD;{
# 279
struct Cyc_Absyn_Pat*p=_TCE->pattern;_TCF= scs;_TD0= _TCF->hd;_TD1= (struct Cyc_Absyn_Switch_clause*)_TD0;_TD2= _TD1->loc;_TD3= t;_TD4= p;_TD5= _TD4->topt;_TD6= 
_check_null(_TD5);{enum Cyc_Absyn_Coercion _c=Cyc_Subtype_coercible_exact(_TD2,_TD3,_TD6);_TD7= _c;_TD8= (int)_TD7;
if(_TD8!=0)goto _TL55;{struct Cyc_Warn_String_Warn_Warg_struct _T2E0;_T2E0.tag= 0;
# 283
({__typeof__(_tag_fat("switch on type ",sizeof(char),16U))_T2E1=_tag_fat("switch on type ",sizeof(char),16U);_T2E0.f1= _T2E1;});_TD9= _T2E0;}{struct Cyc_Warn_String_Warn_Warg_struct _T2E0=_TD9;{struct Cyc_Warn_Typ_Warn_Warg_struct _T2E1;_T2E1.tag= 2;_T2E1.f1= t;_TDA= _T2E1;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T2E1=_TDA;{struct Cyc_Warn_String_Warn_Warg_struct _T2E2;_T2E2.tag= 0;({__typeof__(_tag_fat(" but case expects type ",sizeof(char),24U))_T2E3=_tag_fat(" but case expects type ",sizeof(char),24U);_T2E2.f1= _T2E3;});_TDB= _T2E2;}{struct Cyc_Warn_String_Warn_Warg_struct _T2E2=_TDB;{struct Cyc_Warn_TypOpt_Warn_Warg_struct _T2E3;_T2E3.tag= 3;_TDD= p;_T2E3.f1= _TDD->topt;_TDC= _T2E3;}{struct Cyc_Warn_TypOpt_Warn_Warg_struct _T2E3=_TDC;void*_T2E4[4];_T2E4[0]= & _T2E0;_T2E4[1]= & _T2E1;_T2E4[2]= & _T2E2;_T2E4[3]= & _T2E3;_TDE= scs;_TDF= _TDE->hd;_TE0= (struct Cyc_Absyn_Switch_clause*)_TDF;_TE1= _TE0->loc;_TE2= _tag_fat(_T2E4,sizeof(void*),4);Cyc_Warn_err2(_TE1,_TE2);}}}}
Cyc_Unify_explain_failure();goto _TL56;
# 286
_TL55: _TE3= te;_TE4= p;_TE5= & this_pattern;_TE6= (struct Cyc_Tcpat_TcPatResult*)_TE5;Cyc_Tcpat_check_pat_regions(_TE3,_TE4,_TE6);_TL56: _TE7= scs;_TE8= _TE7->hd;_TE9= (struct Cyc_Absyn_Switch_clause*)_TE8;{struct Cyc_Core_Opt*_T2E0=_cycalloc(sizeof(struct Cyc_Core_Opt));_TEB= this_pattern;
# 288
_T2E0->v= _TEB.patvars;_TEA= (struct Cyc_Core_Opt*)_T2E0;}_TE9->pat_vars= _TEA;_TEC= ctx;_TED= scs;_TEE= _TED->hd;_TEF= (struct Cyc_Absyn_Switch_clause*)_TEE;_TF0= _TEF->loc;_TF1= te;_TF2= this_pattern;_TF3= scs;_TF4= _TF3->hd;_TF5= (struct Cyc_Absyn_Switch_clause*)_TF4;_TF6= _TF5->body;_TF7= scs;_TF8= _TF7->hd;_TF9= (struct Cyc_Absyn_Switch_clause*)_TF8;_TFA= _TF9->where_clause;
Cyc_Tcstmt_pattern_synth(_TEC,_TF0,_TF1,_TF2,_TF6,_TFA,1);}}_TFB= scs;
# 257
scs= _TFB->tl;goto _TL4C;_TL4B:;}_TFC= s0;_TFD= _TFC->loc;_TFE= te;_TFF= scs0;_T100= dtp;
# 291
Cyc_Tcpat_check_switch_exhaustive(_TFD,_TFE,_TFF,_T100);
return;}}}case 15:{struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct*_T2E0=(struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct*)_T2D8;_T2DB= _T2E0->f1;_T101= (struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct*)_T2D8;_T102= & _T101->f2;_T2DF= (struct Cyc_List_List**)_T102;_T103= (struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct*)_T2D8;_T104= & _T103->f3;_T2DE= (void**)_T104;}{struct Cyc_Absyn_Stmt*s=_T2DB;struct Cyc_List_List**scs0=(struct Cyc_List_List**)_T2DF;void**dtp=(void**)_T2DE;_T105= s;{struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*_T2E0=_cycalloc(sizeof(struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct));_T2E0->tag= 2;_T107= s;_T108= _T107->r;_T109= s;_T10A= _T109->loc;
# 299
({__typeof__(Cyc_Absyn_new_stmt(_T108,_T10A))_T2E1=Cyc_Absyn_new_stmt(_T108,_T10A);_T2E0->f1= _T2E1;});_T10B= s;_T10C= _T10B->loc;({__typeof__(Cyc_Absyn_skip_stmt(_T10C))_T2E1=Cyc_Absyn_skip_stmt(_T10C);_T2E0->f2= _T2E1;});_T106= (struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*)_T2E0;}_T10D= (void*)_T106;_T10E= s;_T10F= _T10E->loc;_T110= Cyc_Absyn_new_stmt(_T10D,_T10F);_T105->r= _T110->r;
Cyc_Tcstmt_tcStmt(ctx,te,s,1);_T112= Cyc_List_exists;{
# 302
long(*_T2E0)(long(*)(struct Cyc_Absyn_Switch_clause*),struct Cyc_List_List*)=(long(*)(long(*)(struct Cyc_Absyn_Switch_clause*),struct Cyc_List_List*))_T112;_T111= _T2E0;}_T113= scs0;_T114= *_T113;_T115= _T111(Cyc_Tcstmt_is_case_default,_T114);if(_T115)goto _TL57;else{goto _TL59;}
# 304
_TL59:{struct _tuple2*def_v;def_v= _cycalloc(sizeof(struct _tuple2));_T116= def_v;({__typeof__(Cyc_Absyn_Loc_n())_T2E0=Cyc_Absyn_Loc_n();_T116->f0= _T2E0;});_T117= def_v;{struct _fat_ptr*_T2E0=_cycalloc(sizeof(struct _fat_ptr));({__typeof__(_tag_fat("exn",sizeof(char),4U))_T2E1=_tag_fat("exn",sizeof(char),4U);*_T2E0= _T2E1;});_T118= (struct _fat_ptr*)_T2E0;}_T117->f1= _T118;{
struct Cyc_Absyn_Vardecl*vd=Cyc_Absyn_new_vardecl(0U,def_v,Cyc_Absyn_void_type,0,0);{struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct*_T2E0=_cycalloc(sizeof(struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct));_T2E0->tag= 1;
_T2E0->f1= vd;_T11A= & Cyc_Absyn_Wild_p_val;_T11B= (struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct*)_T11A;_T11C= (void*)_T11B;({__typeof__(Cyc_Absyn_new_pat(_T11C,0U))_T2E1=Cyc_Absyn_new_pat(_T11C,0U);_T2E0->f2= _T2E1;});_T119= (struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct*)_T2E0;}_T11D= (void*)_T119;{struct Cyc_Absyn_Pat*def_pat=Cyc_Absyn_new_pat(_T11D,0U);{struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct*_T2E0=_cycalloc(sizeof(struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct));_T2E0->tag= 11;{struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T2E1=_cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));_T2E1->tag= 4;
_T2E1->f1= vd;_T11F= (struct Cyc_Absyn_Local_b_Absyn_Binding_struct*)_T2E1;}_T120= (void*)_T11F;({__typeof__(Cyc_Absyn_varb_exp(_T120,0U))_T2E1=Cyc_Absyn_varb_exp(_T120,0U);_T2E0->f1= _T2E1;});_T2E0->f2= 1;_T11E= (struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct*)_T2E0;}_T121= (void*)_T11E;_T122= Cyc_Absyn_new_exp(_T121,0U);{struct Cyc_Absyn_Stmt*def_stmt=Cyc_Absyn_exp_stmt(_T122,0U);
struct Cyc_Absyn_Switch_clause*def_clause;def_clause= _cycalloc(sizeof(struct Cyc_Absyn_Switch_clause));_T123= def_clause;_T123->pattern= def_pat;_T124= def_clause;_T124->pat_vars= 0;_T125= def_clause;_T125->where_clause= 0;_T126= def_clause;_T126->body= def_stmt;_T127= def_clause;_T127->loc= 0U;_T128= scs0;_T129= scs0;_T12A= *_T129;{struct Cyc_Absyn_Switch_clause*_T2E0[1];_T2E0[0]= def_clause;_T12C= _tag_fat(_T2E0,sizeof(struct Cyc_Absyn_Switch_clause*),1);_T12B= Cyc_List_list(_T12C);}
({__typeof__(Cyc_List_append(_T12A,_T12B))_T2E0=Cyc_List_append(_T12A,_T12B);*_T128= _T2E0;});}}}}goto _TL58;_TL57: _TL58: {
# 315
void*exception_type=Cyc_Absyn_exn_type();
struct Cyc_Tcpat_TcPatResult this_pattern;
struct Cyc_Tcpat_TcPatResult*next_pattern=0;
long first_case=1;_T12D= scs0;{
struct Cyc_List_List*scs=*_T12D;_TL5D: if(scs!=0)goto _TL5B;else{goto _TL5C;}
_TL5B: _T12E= first_case;if(!_T12E)goto _TL5E;
first_case= 0;_T12F= ctx;_T130= te;_T131= scs;_T132= _T131->hd;_T133= (struct Cyc_Absyn_Switch_clause*)_T132;_T134= _T133->pattern;_T135= & exception_type;
this_pattern= Cyc_Tcpat_tcPat(_T12F,_T130,_T134,_T135,0);goto _TL5F;
# 324
_TL5E: _T136= _check_null(next_pattern);this_pattern= *_T136;_TL5F: _T137= scs;_T138= _T137->tl;
# 326
if(_T138==0)goto _TL60;{struct Cyc_Tcpat_TcPatResult*_T2E0=_cycalloc(sizeof(struct Cyc_Tcpat_TcPatResult));_T13A= ctx;_T13B= te;_T13C= scs;_T13D= _T13C->tl;_T13E= _T13D->hd;_T13F= (struct Cyc_Absyn_Switch_clause*)_T13E;_T140= _T13F->pattern;_T141= & exception_type;
({__typeof__(Cyc_Tcpat_tcPat(_T13A,_T13B,_T140,_T141,0))_T2E1=Cyc_Tcpat_tcPat(_T13A,_T13B,_T140,_T141,0);*_T2E0= _T2E1;});_T139= (struct Cyc_Tcpat_TcPatResult*)_T2E0;}next_pattern= _T139;_T142= next_pattern;_T143= _T142->tvars_and_effconstr_opt;
if(_T143==0)goto _TL62;_T144= next_pattern;_T145= _T144->tvars_and_effconstr_opt;_T146= *_T145;_T147= _T146.f1;if(_T147==0)goto _TL62;
# 330
te= Cyc_Tcenv_clear_fallthru(te);goto _TL63;
# 332
_TL62: _T148= next_pattern;_T149= _T148->patvars;_T14A= Cyc_List_split(_T149);_T14B= _T14A.f0;_T14C= Cyc_Tcutil_filter_nulls(_T14B);{struct Cyc_List_List*vs=Cyc_List_imp_rev(_T14C);_T14E= next_pattern;_T14F= _T14E->tvars_and_effconstr_opt;
if(_T14F!=0)goto _TL64;_T14D= 0;goto _TL65;_TL64: _T151= Cyc_List_map;{
# 335
struct Cyc_List_List*(*_T2E0)(struct Cyc_Absyn_Tvar*(*)(struct _tuple17*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct Cyc_Absyn_Tvar*(*)(struct _tuple17*),struct Cyc_List_List*))_T151;_T150= _T2E0;}_T153= Cyc_Core_fst;{struct Cyc_Absyn_Tvar*(*_T2E0)(struct _tuple17*)=(struct Cyc_Absyn_Tvar*(*)(struct _tuple17*))_T153;_T152= _T2E0;}_T154= next_pattern;_T155= _T154->tvars_and_effconstr_opt;_T156= *_T155;_T157= _T156.f0;_T14D= _T150(_T152,_T157);_TL65: {
# 333
struct Cyc_List_List*new_tvs=_T14D;_T158= te;_T159= new_tvs;_T15A= vs;_T15B= scs;_T15C= _T15B->tl;_T15D= 
# 336
_check_null(_T15C);_T15E= _T15D->hd;_T15F= (struct Cyc_Absyn_Switch_clause*)_T15E;te= Cyc_Tcenv_set_fallthru(_T158,_T159,_T15A,_T15F);}}_TL63: goto _TL61;
# 339
_TL60: te= Cyc_Tcenv_clear_fallthru(te);_TL61: _T160= scs;_T161= _T160->hd;_T162= (struct Cyc_Absyn_Switch_clause*)_T161;{
# 341
struct Cyc_Absyn_Pat*p=_T162->pattern;_T163= scs;_T164= _T163->hd;_T165= (struct Cyc_Absyn_Switch_clause*)_T164;_T166= _T165->loc;_T167= exception_type;_T168= p;_T169= _T168->topt;_T16A= 
_check_null(_T169);{enum Cyc_Absyn_Coercion _c=Cyc_Subtype_coercible_exact(_T166,_T167,_T16A);_T16B= _c;_T16C= (int)_T16B;
if(_T16C!=0)goto _TL66;{struct Cyc_Warn_String_Warn_Warg_struct _T2E0;_T2E0.tag= 0;
# 345
({__typeof__(_tag_fat("switch on type ",sizeof(char),16U))_T2E1=_tag_fat("switch on type ",sizeof(char),16U);_T2E0.f1= _T2E1;});_T16D= _T2E0;}{struct Cyc_Warn_String_Warn_Warg_struct _T2E0=_T16D;{struct Cyc_Warn_Typ_Warn_Warg_struct _T2E1;_T2E1.tag= 2;_T2E1.f1= exception_type;_T16E= _T2E1;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T2E1=_T16E;{struct Cyc_Warn_String_Warn_Warg_struct _T2E2;_T2E2.tag= 0;({__typeof__(_tag_fat(" but case expects type ",sizeof(char),24U))_T2E3=_tag_fat(" but case expects type ",sizeof(char),24U);_T2E2.f1= _T2E3;});_T16F= _T2E2;}{struct Cyc_Warn_String_Warn_Warg_struct _T2E2=_T16F;{struct Cyc_Warn_TypOpt_Warn_Warg_struct _T2E3;_T2E3.tag= 3;_T171= p;
_T2E3.f1= _T171->topt;_T170= _T2E3;}{struct Cyc_Warn_TypOpt_Warn_Warg_struct _T2E3=_T170;void*_T2E4[4];_T2E4[0]= & _T2E0;_T2E4[1]= & _T2E1;_T2E4[2]= & _T2E2;_T2E4[3]= & _T2E3;_T172= scs;_T173= _T172->hd;_T174= (struct Cyc_Absyn_Switch_clause*)_T173;_T175= _T174->loc;_T176= _tag_fat(_T2E4,sizeof(void*),4);Cyc_Warn_err2(_T175,_T176);}}}}
Cyc_Unify_explain_failure();goto _TL67;
# 349
_TL66: _T177= te;_T178= p;_T179= & this_pattern;_T17A= (struct Cyc_Tcpat_TcPatResult*)_T179;Cyc_Tcpat_check_pat_regions(_T177,_T178,_T17A);_TL67: _T17B= scs;_T17C= _T17B->hd;_T17D= (struct Cyc_Absyn_Switch_clause*)_T17C;{struct Cyc_Core_Opt*_T2E0=_cycalloc(sizeof(struct Cyc_Core_Opt));_T17F= this_pattern;
# 351
_T2E0->v= _T17F.patvars;_T17E= (struct Cyc_Core_Opt*)_T2E0;}_T17D->pat_vars= _T17E;_T180= ctx;_T181= scs;_T182= _T181->hd;_T183= (struct Cyc_Absyn_Switch_clause*)_T182;_T184= _T183->loc;_T185= te;_T186= this_pattern;_T187= scs;_T188= _T187->hd;_T189= (struct Cyc_Absyn_Switch_clause*)_T188;_T18A= _T189->body;_T18B= scs;_T18C= _T18B->hd;_T18D= (struct Cyc_Absyn_Switch_clause*)_T18C;_T18E= _T18D->where_clause;
Cyc_Tcstmt_pattern_synth(_T180,_T184,_T185,_T186,_T18A,_T18E,1);}}_T18F= scs;
# 319
scs= _T18F->tl;goto _TL5D;_TL5C:;}_T190= s0;_T191= _T190->loc;_T192= te;_T193= scs0;_T194= *_T193;_T195= dtp;
# 354
Cyc_Tcpat_check_catch_overlap(_T191,_T192,_T194,_T195);
return;}}default:{struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*_T2E0=(struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*)_T2D8;_T2D9= _T2E0->f1;_T2DB= _T2E0->f2;}{struct Cyc_Absyn_Decl*d=_T2D9;struct Cyc_Absyn_Stmt*s=_T2DB;
# 358
struct _fat_ptr unimp_msg_part;_T197= new_block;
if(!_T197)goto _TL68;_T198= s0;_T199= _T198->loc;_T19A= te;_T196= Cyc_Tcenv_new_block(_T199,_T19A);goto _TL69;_TL68: _T196= te;_TL69: {struct Cyc_Tcenv_Tenv*_T2E0=_T196;struct Cyc_Tcenv_Tenv*te=_T2E0;_T19B= d;{
void*_T2E1=_T19B->r;struct _tuple2*_T2E2;struct _fat_ptr*_T2E3;struct Cyc_Absyn_Fndecl*_T2E4;struct Cyc_Absyn_Exp*_T2E5;struct Cyc_Absyn_Vardecl*_T2E6;struct Cyc_Absyn_Tvar*_T2E7;struct Cyc_List_List*_T2E8;void*_T2E9;void*_T2EA;struct Cyc_Absyn_Pat*_T2EB;void*_T2EC;_T19C= (int*)_T2E1;_T19D= *_T19C;switch(_T19D){case 0:{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T2ED=(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T2E1;_T2EC= _T2ED->f1;}{struct Cyc_Absyn_Vardecl*vd=_T2EC;void*_T2ED;struct Cyc_Absyn_Exp*_T2EE;void*_T2EF;struct Cyc_Absyn_Tqual _T2F0;enum Cyc_Absyn_Scope _T2F1;_T19E= vd;{struct Cyc_Absyn_Vardecl _T2F2=*_T19E;_T2F1= _T2F2.sc;_T2F0= _T2F2.tq;_T2EF= _T2F2.type;_T2EE= _T2F2.initializer;_T19F= vd;_T1A0= & _T19F->rgn;_T2ED= (void**)_T1A0;}{enum Cyc_Absyn_Scope sc=_T2F1;struct Cyc_Absyn_Tqual tq=_T2F0;void*t=_T2EF;struct Cyc_Absyn_Exp*initializer=_T2EE;void**rgn_ptr=(void**)_T2ED;
# 363
void*curr_bl=Cyc_Tcenv_curr_rgn(te);
long is_local;_T1A1= sc;_T1A2= (int)_T1A1;switch(_T1A2){case Cyc_Absyn_Static: goto _LL4E;case Cyc_Absyn_Extern: _LL4E: goto _LL50;case Cyc_Absyn_ExternC: _LL50: _T1A3= vd;
# 369
_T1A3->escapes= 1;
is_local= 0;goto _LL4A;case Cyc_Absyn_Abstract:{struct Cyc_Warn_String_Warn_Warg_struct _T2F2;_T2F2.tag= 0;
# 373
({__typeof__(_tag_fat("bad abstract scope for local variable",sizeof(char),38U))_T2F3=_tag_fat("bad abstract scope for local variable",sizeof(char),38U);_T2F2.f1= _T2F3;});_T1A4= _T2F2;}{struct Cyc_Warn_String_Warn_Warg_struct _T2F2=_T1A4;void*_T2F3[1];_T2F3[0]= & _T2F2;_T1A5= d;_T1A6= _T1A5->loc;_T1A7= _tag_fat(_T2F3,sizeof(void*),1);Cyc_Warn_err2(_T1A6,_T1A7);}goto _LL54;case Cyc_Absyn_Register: _LL54: goto _LL56;case Cyc_Absyn_Public: _LL56: goto _LL58;default: _LL58:
# 378
 is_local= 1;goto _LL4A;}_LL4A: _T1A8= rgn_ptr;_T1AA= is_local;
# 382
if(!_T1AA)goto _TL6C;_T1A9= curr_bl;goto _TL6D;_TL6C: _T1A9= Cyc_Absyn_heap_rgn_type;_TL6D:*_T1A8= _T1A9;{
void*_T2F2=Cyc_Absyn_compress(t);struct Cyc_Absyn_ArrayInfo _T2F3;_T1AB= (int*)_T2F2;_T1AC= *_T1AB;switch(_T1AC){case 6: _T1AD= is_local;if(!_T1AD)goto _TL6F;_T1AE= vd;
# 386
_T1AE->escapes= 1;
sc= 3U;
is_local= 0;goto _LL59;_TL6F: goto _LL5E;case 5:{struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T2F4=(struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_T2F2;_T2F3= _T2F4->f1;}{struct Cyc_Absyn_ArrayInfo ai=_T2F3;_T1AF= vd;_T1B0= _T1AF->initializer;
# 392
if(_T1B0==0)goto _TL73;else{goto _TL74;}_TL74: _T1B1= ai;_T1B2= _T1B1.num_elts;if(_T1B2!=0)goto _TL73;else{goto _TL71;}
_TL73: goto _LL59;_TL71: {
struct Cyc_Absyn_Exp*len;_T1B3= vd;_T1B4= _T1B3->initializer;{
void*_T2F4=_T1B4->r;struct Cyc_List_List*_T2F5;struct Cyc_Absyn_Exp*_T2F6;struct _fat_ptr _T2F7;_T1B5= (int*)_T2F4;_T1B6= *_T1B5;switch(_T1B6){case 0: _T1B7= (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_T2F4;_T1B8= _T1B7->f1;_T1B9= _T1B8.Wstring_c;_T1BA= _T1B9.tag;switch(_T1BA){case 9:{struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T2F8=(struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_T2F4;_T1BB= _T2F8->f1;_T1BC= _T1BB.String_c;_T2F7= _T1BC.val;}{struct _fat_ptr s=_T2F7;_T1BD= s;_T1BE= 
# 397
_get_fat_size(_T1BD,sizeof(char));len= Cyc_Absyn_uint_exp(_T1BE,0U);goto _LL60;}case 10:{struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T2F8=(struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_T2F4;_T1BF= _T2F8->f1;_T1C0= _T1BF.Wstring_c;_T2F7= _T1C0.val;}{struct _fat_ptr s=_T2F7;
# 400
len= Cyc_Absyn_uint_exp(1U,0U);goto _LL60;}default: goto _LL6D;};case 26:{struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct*_T2F8=(struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct*)_T2F4;_T2F6= _T2F8->f2;}{struct Cyc_Absyn_Exp*e=_T2F6;_T2F6= e;goto _LL68;}case 27:{struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct*_T2F8=(struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct*)_T2F4;_T2F6= _T2F8->f1;}_LL68: {struct Cyc_Absyn_Exp*e=_T2F6;
# 405
len= e;goto _LL60;}case 35:{struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct*_T2F8=(struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct*)_T2F4;_T2F5= _T2F8->f2;}{struct Cyc_List_List*es=_T2F5;_T2F5= es;goto _LL6C;}case 25:{struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*_T2F8=(struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*)_T2F4;_T2F5= _T2F8->f1;}_LL6C: {struct Cyc_List_List*es=_T2F5;_T1C1= 
# 410
Cyc_List_length(es);_T1C2= (unsigned)_T1C1;len= Cyc_Absyn_uint_exp(_T1C2,0U);goto _LL60;}default: _LL6D:
# 413
 len= 0;goto _LL60;}_LL60:;}
# 416
ai.num_elts= len;_T1C3= vd;{struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T2F4=_cycalloc(sizeof(struct Cyc_Absyn_ArrayType_Absyn_Type_struct));_T2F4->tag= 5;
_T2F4->f1= ai;_T1C4= (struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_T2F4;}_T1C3->type= (void*)_T1C4;t= _T1C3->type;goto _LL59;}}default: _LL5E: goto _LL59;}_LL59:;}_T1C6= is_local;
# 425
if(_T1C6)goto _TL77;else{goto _TL79;}_TL79: _T1C5= 0;goto _TL78;_TL77: _T1C5= Cyc_Tcenv_lookup_type_vars(te);_TL78: {struct Cyc_List_List*bound_vars=_T1C5;
long allow_evars=is_local;_T1C7= ctx;_T1C8= s0;_T1C9= _T1C8->loc;_T1CA= te;_T1CB= bound_vars;_T1CC= & Cyc_Kinds_mk;_T1CD= (struct Cyc_Absyn_Kind*)_T1CC;_T1CE= allow_evars;_T1CF= t;
Cyc_Tctyp_check_type(_T1C7,_T1C9,_T1CA,_T1CB,_T1CD,_T1CE,1,_T1CF);_T1D0= vd;_T1D1= s0;_T1D2= _T1D1->loc;_T1D3= vd;_T1D4= _T1D3->tq;_T1D5= _T1D4.print_const;_T1D6= t;
({__typeof__(Cyc_Tcutil_extract_const_from_typedef(_T1D2,_T1D5,_T1D6))_T2F2=Cyc_Tcutil_extract_const_from_typedef(_T1D2,_T1D5,_T1D6);_T1D0->tq.real_const= _T2F2;});_T1D7= sc;_T1D8= (int)_T1D7;
if(_T1D8==3)goto _TL7C;else{goto _TL7D;}_TL7D: _T1D9= sc;_T1DA= (int)_T1D9;if(_T1DA==4)goto _TL7C;else{goto _TL7A;}
_TL7C:{struct Cyc_Warn_String_Warn_Warg_struct _T2F2;_T2F2.tag= 0;({__typeof__(_tag_fat("extern declarations are not yet supported within functions",sizeof(char),59U))_T2F3=_tag_fat("extern declarations are not yet supported within functions",sizeof(char),59U);_T2F2.f1= _T2F3;});_T1DB= _T2F2;}{struct Cyc_Warn_String_Warn_Warg_struct _T2F2=_T1DB;void*_T2F3[1];_T2F3[0]= & _T2F2;_T1DC= d;_T1DD= _T1DC->loc;_T1DE= _tag_fat(_T2F3,sizeof(void*),1);Cyc_Warn_err2(_T1DD,_T1DE);}goto _TL7B;_TL7A: _TL7B:
 if(initializer==0)goto _TL7E;_T1DF= ctx;_T1E0= te;_T1E1= & t;_T1E2= initializer;
Cyc_Tcexp_tcExpInitializer(_T1DF,_T1E0,_T1E1,_T1E2);_T1E3= is_local;
# 434
if(_T1E3)goto _TL80;else{goto _TL82;}_TL82: _T1E4= Cyc_Tcutil_is_const_exp(initializer);if(_T1E4)goto _TL80;else{goto _TL83;}
_TL83:{struct Cyc_Warn_String_Warn_Warg_struct _T2F2;_T2F2.tag= 0;
# 437
({__typeof__(_tag_fat("initializer for static variable needs to be a constant expression",sizeof(char),66U))_T2F3=_tag_fat("initializer for static variable needs to be a constant expression",sizeof(char),66U);_T2F2.f1= _T2F3;});_T1E5= _T2F2;}{struct Cyc_Warn_String_Warn_Warg_struct _T2F2=_T1E5;void*_T2F3[1];_T2F3[0]= & _T2F2;_T1E6= d;_T1E7= _T1E6->loc;_T1E8= _tag_fat(_T2F3,sizeof(void*),1);Cyc_Warn_err2(_T1E7,_T1E8);}goto _TL81;_TL80: _TL81: _T1E9= 
Cyc_Tcenv_curr_aquals_bounds(te);_T1EA= initializer;_T1EB= t;_T1EC= Cyc_Tcutil_coerce_assign(_T1E9,_T1EA,_T1EB);if(_T1EC)goto _TL84;else{goto _TL86;}
_TL86:{struct Cyc_Warn_Vardecl_Warn_Warg_struct _T2F2;_T2F2.tag= 11;_T2F2.f1= vd;_T1ED= _T2F2;}{struct Cyc_Warn_Vardecl_Warn_Warg_struct _T2F2=_T1ED;{struct Cyc_Warn_String_Warn_Warg_struct _T2F3;_T2F3.tag= 0;({__typeof__(_tag_fat(" was declared with type ",sizeof(char),25U))_T2F4=_tag_fat(" was declared with type ",sizeof(char),25U);_T2F3.f1= _T2F4;});_T1EE= _T2F3;}{struct Cyc_Warn_String_Warn_Warg_struct _T2F3=_T1EE;{struct Cyc_Warn_Typ_Warn_Warg_struct _T2F4;_T2F4.tag= 2;_T2F4.f1= t;_T1EF= _T2F4;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T2F4=_T1EF;{struct Cyc_Warn_String_Warn_Warg_struct _T2F5;_T2F5.tag= 0;({__typeof__(_tag_fat(" but initialized with type ",sizeof(char),28U))_T2F6=_tag_fat(" but initialized with type ",sizeof(char),28U);_T2F5.f1= _T2F6;});_T1F0= _T2F5;}{struct Cyc_Warn_String_Warn_Warg_struct _T2F5=_T1F0;{struct Cyc_Warn_TypOpt_Warn_Warg_struct _T2F6;_T2F6.tag= 3;_T1F2= initializer;
_T2F6.f1= _T1F2->topt;_T1F1= _T2F6;}{struct Cyc_Warn_TypOpt_Warn_Warg_struct _T2F6=_T1F1;void*_T2F7[5];_T2F7[0]= & _T2F2;_T2F7[1]= & _T2F3;_T2F7[2]= & _T2F4;_T2F7[3]= & _T2F5;_T2F7[4]= & _T2F6;_T1F3= d;_T1F4= _T1F3->loc;_T1F5= _tag_fat(_T2F7,sizeof(void*),5);Cyc_Warn_err2(_T1F4,_T1F5);}}}}}_T1F6= t;_T1F7= initializer;_T1F8= _T1F7->topt;_T1F9= 
_check_null(_T1F8);Cyc_Unify_unify(_T1F6,_T1F9);
Cyc_Unify_explain_failure();goto _TL85;_TL84: _TL85: goto _TL7F;_TL7E: _TL7F:
# 445
 Cyc_Tcstmt_tcStmt(ctx,te,s,0);
return;}}}case 2:{struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*_T2ED=(struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*)_T2E1;_T2EB= _T2ED->f1;_T1FA= (struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*)_T2E1;_T1FB= & _T1FA->f2;_T2EC= (struct Cyc_Core_Opt**)_T1FB;_T1FC= (struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*)_T2E1;_T1FD= & _T1FC->f3;_T2EA= (struct Cyc_Absyn_Exp**)_T1FD;_T1FE= (struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*)_T2E1;_T1FF= & _T1FE->f4;_T2E9= (void**)_T1FF;}{struct Cyc_Absyn_Pat*p=_T2EB;struct Cyc_Core_Opt**vds=(struct Cyc_Core_Opt**)_T2EC;struct Cyc_Absyn_Exp**exp=(struct Cyc_Absyn_Exp**)_T2EA;void**dtp=(void**)_T2E9;_T200= p;{
# 450
void*_T2ED=_T200->r;_T201= (int*)_T2ED;_T202= *_T201;switch(_T202){case 1: goto _LL73;case 2: _LL73: goto _LL75;case 14: _LL75: goto _LL6F;default: _T203= 
# 456
Cyc_Tcstmt_make_var_exp(exp,s0);if(!_T203)goto _TL88;
Cyc_Tcstmt_tcStmt(ctx,te,s0,new_block);
return;_TL88:;}_LL6F:;}_T204= exp;{
# 462
struct Cyc_Absyn_Exp*e=*_T204;
Cyc_Tcexp_tcExpInitializer(ctx,te,0,e);_T205= e;_T206= _T205->topt;{
# 465
void*pat_type=_check_null(_T206);_T207= ctx;_T208= te;_T209= p;_T20A= & pat_type;_T20B= e;{
# 467
struct Cyc_Tcpat_TcPatResult pat_res=Cyc_Tcpat_tcPat(_T207,_T208,_T209,_T20A,_T20B);_T20C= vds;{struct Cyc_Core_Opt*_T2ED=_cycalloc(sizeof(struct Cyc_Core_Opt));_T20E= pat_res;
_T2ED->v= _T20E.patvars;_T20D= (struct Cyc_Core_Opt*)_T2ED;}*_T20C= _T20D;_T20F= p;_T210= _T20F->topt;{
void*pt=_check_null(_T210);_T211= e;_T212= _T211->topt;{
void*et=_check_null(_T212);_T213= 
Cyc_Unify_unify(pt,et);if(_T213)goto _TL8A;else{goto _TL8C;}_TL8C: _T214= Cyc_Tcenv_curr_aquals_bounds(te);_T215= e;_T216= pt;_T217= Cyc_Tcutil_coerce_assign(_T214,_T215,_T216);if(_T217)goto _TL8A;else{goto _TL8D;}
_TL8D:{struct Cyc_Warn_String_Warn_Warg_struct _T2ED;_T2ED.tag= 0;({__typeof__(_tag_fat("pattern type ",sizeof(char),14U))_T2EE=_tag_fat("pattern type ",sizeof(char),14U);_T2ED.f1= _T2EE;});_T218= _T2ED;}{struct Cyc_Warn_String_Warn_Warg_struct _T2ED=_T218;{struct Cyc_Warn_Typ_Warn_Warg_struct _T2EE;_T2EE.tag= 2;_T2EE.f1= pt;_T219= _T2EE;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T2EE=_T219;{struct Cyc_Warn_String_Warn_Warg_struct _T2EF;_T2EF.tag= 0;({__typeof__(_tag_fat(" does not match definition type ",sizeof(char),33U))_T2F0=_tag_fat(" does not match definition type ",sizeof(char),33U);_T2EF.f1= _T2F0;});_T21A= _T2EF;}{struct Cyc_Warn_String_Warn_Warg_struct _T2EF=_T21A;{struct Cyc_Warn_Typ_Warn_Warg_struct _T2F0;_T2F0.tag= 2;_T2F0.f1= et;_T21B= _T2F0;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T2F0=_T21B;void*_T2F1[4];_T2F1[0]= & _T2ED;_T2F1[1]= & _T2EE;_T2F1[2]= & _T2EF;_T2F1[3]= & _T2F0;_T21C= d;_T21D= _T21C->loc;_T21E= _tag_fat(_T2F1,sizeof(void*),4);Cyc_Warn_err2(_T21D,_T21E);}}}}
Cyc_Unify_unify(pt,et);
Cyc_Unify_explain_failure();goto _TL8B;
# 476
_TL8A: _T21F= te;_T220= p;_T221= & pat_res;_T222= (struct Cyc_Tcpat_TcPatResult*)_T221;Cyc_Tcpat_check_pat_regions(_T21F,_T220,_T222);_TL8B: _T223= p;_T224= _T223->loc;_T225= te;_T226= p;_T227= dtp;
Cyc_Tcpat_check_let_pat_exhaustive(_T224,_T225,_T226,_T227);_T228= ctx;_T229= s0;_T22A= _T229->loc;_T22B= te;_T22C= pat_res;_T22D= s;
Cyc_Tcstmt_pattern_synth(_T228,_T22A,_T22B,_T22C,_T22D,0,0);
return;}}}}}}case 3:{struct Cyc_Absyn_Letv_d_Absyn_Raw_decl_struct*_T2ED=(struct Cyc_Absyn_Letv_d_Absyn_Raw_decl_struct*)_T2E1;_T2E8= _T2ED->f1;}{struct Cyc_List_List*vds=_T2E8;
# 482
void*curr_bl=Cyc_Tcenv_curr_rgn(te);
_TL91: if(vds!=0)goto _TL8F;else{goto _TL90;}
_TL8F: _T22E= vds;_T22F= _T22E->hd;_T230= (struct Cyc_Absyn_Vardecl*)_T22F;_T230->rgn= curr_bl;_T231= ctx;_T232= s0;_T233= _T232->loc;_T234= te;_T235= 
Cyc_Tcenv_lookup_type_vars(te);_T236= & Cyc_Kinds_mk;_T237= (struct Cyc_Absyn_Kind*)_T236;_T238= vds;_T239= _T238->hd;_T23A= (struct Cyc_Absyn_Vardecl*)_T239;_T23B= _T23A->type;Cyc_Tctyp_check_type(_T231,_T233,_T234,_T235,_T237,1,1,_T23B);_T23C= vds;
# 483
vds= _T23C->tl;goto _TL91;_TL90:
# 488
 Cyc_Tcstmt_tcStmt(ctx,te,s,0);
return;}case 4:{struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct*_T2ED=(struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct*)_T2E1;_T2E7= _T2ED->f1;_T2E6= _T2ED->f2;_T2E5= _T2ED->f3;}{struct Cyc_Absyn_Tvar*tv=_T2E7;struct Cyc_Absyn_Vardecl*vd=_T2E6;struct Cyc_Absyn_Exp*open_exp_opt=_T2E5;_T23D= s;{struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*_T2ED=_cycalloc(sizeof(struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct));_T2ED->tag= 2;_T23F= s;_T240= _T23F->r;_T241= s;_T242= _T241->loc;
# 494
({__typeof__(Cyc_Absyn_new_stmt(_T240,_T242))_T2EE=Cyc_Absyn_new_stmt(_T240,_T242);_T2ED->f1= _T2EE;});_T243= s;_T244= _T243->loc;({__typeof__(Cyc_Absyn_skip_stmt(_T244))_T2EE=Cyc_Absyn_skip_stmt(_T244);_T2ED->f2= _T2EE;});_T23E= (struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*)_T2ED;}_T245= (void*)_T23E;_T246= s;_T247= _T246->loc;_T248= Cyc_Absyn_new_stmt(_T245,_T247);_T23D->r= _T248->r;{
struct Cyc_Tcenv_Tenv*te2=te;void*_T2ED;void*_T2EE;_T249= vd;{struct Cyc_Absyn_Vardecl _T2EF=*_T249;_T24A= vd;_T24B= & _T24A->type;_T2EE= (void**)_T24B;_T24C= vd;_T24D= & _T24C->rgn;_T2ED= (void**)_T24D;}{void**t=(void**)_T2EE;void**rgn_ptr=(void**)_T2ED;
# 497
void*curr_bl=Cyc_Tcenv_curr_rgn(te);_T24E= rgn_ptr;
*_T24E= curr_bl;{
void*rgn_typ;_T24F= open_exp_opt;_T250= (unsigned)_T24F;
if(!_T250)goto _TL92;{
# 503
struct _tuple2*drname;drname= _cycalloc(sizeof(struct _tuple2));_T251= drname;{struct _fat_ptr*_T2EF[1];{struct _fat_ptr*_T2F0=_cycalloc(sizeof(struct _fat_ptr));({__typeof__(_tag_fat("Core",sizeof(char),5U))_T2F1=_tag_fat("Core",sizeof(char),5U);*_T2F0= _T2F1;});_T253= (struct _fat_ptr*)_T2F0;}_T2EF[0]= _T253;_T254= _tag_fat(_T2EF,sizeof(struct _fat_ptr*),1);_T252= Cyc_List_list(_T254);}({__typeof__(Cyc_Absyn_Abs_n(_T252,0))_T2EF=Cyc_Absyn_Abs_n(_T252,0);_T251->f0= _T2EF;});_T255= drname;{struct _fat_ptr*_T2EF=_cycalloc(sizeof(struct _fat_ptr));({__typeof__(_tag_fat("DynamicRegion",sizeof(char),14U))_T2F0=_tag_fat("DynamicRegion",sizeof(char),14U);*_T2EF= _T2F0;});_T256= (struct _fat_ptr*)_T2EF;}_T255->f1= _T256;{struct Cyc_Core_Opt*_T2EF=_cycalloc(sizeof(struct Cyc_Core_Opt));_T258= & Cyc_Kinds_ek;
_T2EF->v= (struct Cyc_Absyn_Kind*)_T258;_T257= (struct Cyc_Core_Opt*)_T2EF;}{void*outer_rgn=Cyc_Absyn_new_evar(_T257,0);{struct Cyc_Core_Opt*_T2EF=_cycalloc(sizeof(struct Cyc_Core_Opt));_T25A= & Cyc_Kinds_ek;
_T2EF->v= (struct Cyc_Absyn_Kind*)_T25A;_T259= (struct Cyc_Core_Opt*)_T2EF;}rgn_typ= Cyc_Absyn_new_evar(_T259,0);{struct Cyc_Core_Opt*_T2EF=_cycalloc(sizeof(struct Cyc_Core_Opt));_T25C= & Cyc_Kinds_aqk;
_T2EF->v= (struct Cyc_Absyn_Kind*)_T25C;_T25B= (struct Cyc_Core_Opt*)_T2EF;}{void*aq=Cyc_Absyn_new_evar(_T25B,0);_T25D= 
Cyc_Absyn_UnknownAggr(0U,drname,0);{void*_T2EF[1];_T2EF[0]= rgn_typ;_T25F= _tag_fat(_T2EF,sizeof(void*),1);_T25E= Cyc_List_list(_T25F);}{void*dr_type=Cyc_Absyn_aggr_type(_T25D,_T25E);_T260= dr_type;_T261= outer_rgn;_T262= aq;_T263= 
Cyc_Absyn_empty_tqual(0U);_T264= Cyc_Absyn_false_type;_T265= Cyc_Absyn_false_type;{void*exp_type=Cyc_Absyn_at_type(_T260,_T261,_T262,_T263,_T264,_T265);_T266= ctx;_T267= s0;_T268= _T267->loc;_T269= te;_T26A= 
Cyc_Tcenv_lookup_type_vars(te);_T26B= & Cyc_Kinds_mk;_T26C= (struct Cyc_Absyn_Kind*)_T26B;_T26D= exp_type;Cyc_Tctyp_check_type(_T266,_T268,_T269,_T26A,_T26C,1,0,_T26D);_T26E= ctx;_T26F= te;_T270= & exp_type;_T271= open_exp_opt;{
void*key_typ=Cyc_Tcexp_tcExp(_T26E,_T26F,_T270,_T271);_T272= 
Cyc_Unify_unify(exp_type,key_typ);if(_T272)goto _TL94;else{goto _TL96;}_TL96: _T273= 
Cyc_Tcenv_curr_aquals_bounds(te);_T274= open_exp_opt;_T275= exp_type;_T276= Cyc_Tcutil_coerce_assign(_T273,_T274,_T275);
# 511
if(_T276)goto _TL94;else{goto _TL97;}
# 513
_TL97:{struct Cyc_Warn_String_Warn_Warg_struct _T2EF;_T2EF.tag= 0;({__typeof__(_tag_fat("expected ",sizeof(char),10U))_T2F0=_tag_fat("expected ",sizeof(char),10U);_T2EF.f1= _T2F0;});_T277= _T2EF;}{struct Cyc_Warn_String_Warn_Warg_struct _T2EF=_T277;{struct Cyc_Warn_Typ_Warn_Warg_struct _T2F0;_T2F0.tag= 2;_T2F0.f1= exp_type;_T278= _T2F0;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T2F0=_T278;{struct Cyc_Warn_String_Warn_Warg_struct _T2F1;_T2F1.tag= 0;({__typeof__(_tag_fat(" but found ",sizeof(char),12U))_T2F2=_tag_fat(" but found ",sizeof(char),12U);_T2F1.f1= _T2F2;});_T279= _T2F1;}{struct Cyc_Warn_String_Warn_Warg_struct _T2F1=_T279;{struct Cyc_Warn_Typ_Warn_Warg_struct _T2F2;_T2F2.tag= 2;_T2F2.f1= key_typ;_T27A= _T2F2;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T2F2=_T27A;void*_T2F3[4];_T2F3[0]= & _T2EF;_T2F3[1]= & _T2F0;_T2F3[2]= & _T2F1;_T2F3[3]= & _T2F2;_T27B= s0;_T27C= _T27B->loc;_T27D= _tag_fat(_T2F3,sizeof(void*),4);Cyc_Warn_err2(_T27C,_T27D);}}}}goto _TL95;_TL94: _TL95: _T27E= 
# 516
Cyc_Tcutil_is_aliasable_qual(aq);if(!_T27E)goto _TL98;{struct Cyc_Warn_String_Warn_Warg_struct _T2EF;_T2EF.tag= 0;
({__typeof__(_tag_fat("open is allowed only on unique or reference-counted keys",sizeof(char),57U))_T2F0=_tag_fat("open is allowed only on unique or reference-counted keys",sizeof(char),57U);_T2EF.f1= _T2F0;});_T27F= _T2EF;}{struct Cyc_Warn_String_Warn_Warg_struct _T2EF=_T27F;void*_T2F0[1];_T2F0[0]= & _T2EF;_T280= s0;_T281= _T280->loc;_T282= _tag_fat(_T2F0,sizeof(void*),1);Cyc_Warn_err2(_T281,_T282);}goto _TL99;_TL98: _TL99: _T283= t;
({__typeof__(Cyc_Absyn_rgn_handle_type(rgn_typ))_T2EF=Cyc_Absyn_rgn_handle_type(rgn_typ);*_T283= _T2EF;});
te2= Cyc_Tcenv_add_region(te2,rgn_typ,1,0);}}}}}}goto _TL93;
# 521
_TL92:{struct Cyc_Absyn_VarType_Absyn_Type_struct*_T2EF=_cycalloc(sizeof(struct Cyc_Absyn_VarType_Absyn_Type_struct));_T2EF->tag= 2;_T2EF->f1= tv;_T284= (struct Cyc_Absyn_VarType_Absyn_Type_struct*)_T2EF;}rgn_typ= (void*)_T284;_T285= s0;_T286= _T285->loc;_T287= te2;{struct Cyc_List_List*_T2EF=_cycalloc(sizeof(struct Cyc_List_List));
_T2EF->hd= tv;_T2EF->tl= 0;_T288= (struct Cyc_List_List*)_T2EF;}te2= Cyc_Tcenv_add_type_vars(_T286,_T287,_T288);
te2= Cyc_Tcenv_add_region(te2,rgn_typ,0,1);_TL93: _T289= ctx;_T28A= s0;_T28B= _T28A->loc;_T28C= te;_T28D= 
# 525
Cyc_Tcenv_lookup_type_vars(te2);_T28E= & Cyc_Kinds_bk;_T28F= (struct Cyc_Absyn_Kind*)_T28E;_T290= t;_T291= *_T290;Cyc_Tctyp_check_type(_T289,_T28B,_T28C,_T28D,_T28F,1,0,_T291);_T292= t;_T293= *_T292;_T294= 
Cyc_Absyn_rgn_handle_type(rgn_typ);_T295= Cyc_Unify_unify(_T293,_T294);if(_T295)goto _TL9A;else{goto _TL9C;}
_TL9C: _T297= Cyc_Warn_impos;{int(*_T2EF)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T297;_T296= _T2EF;}_T298= _tag_fat("region stmt: type of region handle is wrong!",sizeof(char),45U);_T299= _tag_fat(0U,sizeof(void*),0);_T296(_T298,_T299);goto _TL9B;_TL9A: _TL9B:
 Cyc_Tcstmt_tcStmt(ctx,te2,s,0);
return;}}}}case 1:{struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*_T2ED=(struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*)_T2E1;_T2E4= _T2ED->f1;}{struct Cyc_Absyn_Fndecl*fd=_T2E4;_T29A= fd;_T29B= _T29A->sc;_T29C= (int)_T29B;
# 532
if(_T29C==2)goto _TL9D;{struct Cyc_Warn_String_Warn_Warg_struct _T2ED;_T2ED.tag= 0;
({__typeof__(_tag_fat("bad storage class for inner function",sizeof(char),37U))_T2EE=_tag_fat("bad storage class for inner function",sizeof(char),37U);_T2ED.f1= _T2EE;});_T29D= _T2ED;}{struct Cyc_Warn_String_Warn_Warg_struct _T2ED=_T29D;void*_T2EE[1];_T2EE[0]= & _T2ED;_T29E= d;_T29F= _T29E->loc;_T2A0= _tag_fat(_T2EE,sizeof(void*),1);Cyc_Warn_err2(_T29F,_T2A0);}goto _TL9E;_TL9D: _TL9E: _T2A1= d;_T2A2= _T2A1->loc;_T2A3= fd;_T2A4= _T2A3->i;_T2A5= _T2A4.attributes;
Cyc_Atts_check_fndecl_atts(_T2A2,_T2A5,1);_T2A6= ctx;_T2A7= d;_T2A8= _T2A7->loc;_T2A9= te;_T2AA= fd;
Cyc_Tctyp_check_fndecl_valid_type(_T2A6,_T2A8,_T2A9,_T2AA);{
void*t=Cyc_Tcutil_fndecl2type(fd);_T2AB= fd;_T2AC= t;_T2AD= fd;_T2AE= _T2AD->i;_T2AF= _T2AE.attributes;
({__typeof__(Cyc_Atts_transfer_fn_type_atts(_T2AC,_T2AF))_T2ED=Cyc_Atts_transfer_fn_type_atts(_T2AC,_T2AF);_T2AB->i.attributes= _T2ED;});{
void*curr_bl=Cyc_Tcenv_curr_rgn(te);
struct Cyc_Absyn_Vardecl*vd;vd= _cycalloc(sizeof(struct Cyc_Absyn_Vardecl));_T2B0= vd;_T2B1= fd;
_T2B0->sc= _T2B1->sc;_T2B2= vd;_T2B3= fd;
_T2B2->name= _T2B3->name;_T2B4= vd;
_T2B4->varloc= 0U;_T2B5= vd;
({__typeof__(Cyc_Absyn_const_tqual(0U))_T2ED=Cyc_Absyn_const_tqual(0U);_T2B5->tq= _T2ED;});_T2B6= vd;_T2B7= t;_T2B8= curr_bl;_T2B9= Cyc_Absyn_al_qual_type;_T2BA= 
Cyc_Absyn_empty_tqual(0U);_T2BB= Cyc_Absyn_false_type;_T2BC= Cyc_Absyn_false_type;({__typeof__(Cyc_Absyn_at_type(_T2B7,_T2B8,_T2B9,_T2BA,_T2BB,_T2BC))_T2ED=Cyc_Absyn_at_type(_T2B7,_T2B8,_T2B9,_T2BA,_T2BB,_T2BC);_T2B6->type= _T2ED;});_T2BD= vd;
_T2BD->initializer= 0;_T2BE= vd;
_T2BE->rgn= curr_bl;_T2BF= vd;
_T2BF->attributes= 0;_T2C0= vd;
_T2C0->escapes= 0;_T2C1= vd;_T2C2= fd;_T2C3= _T2C2->body;
_T2C1->is_proto= _T2C3!=0;_T2C4= vd;
_T2C4->rename= 0;_T2C5= fd;
_T2C5->fn_vardecl= vd;_T2C6= te;_T2C7= _T2C6->le;{
struct Cyc_Tcenv_Fenv*old_fenv=_check_null(_T2C7);_T2C8= te;_T2C9= d;_T2CA= _T2C9->loc;_T2CB= old_fenv;_T2CC= fd;
({__typeof__(Cyc_Tcenv_nested_fenv(_T2CA,_T2CB,_T2CC))_T2ED=Cyc_Tcenv_nested_fenv(_T2CA,_T2CB,_T2CC);_T2C8->le= _T2ED;});_T2CD= ctx;_T2CE= te;_T2CF= fd;_T2D0= _T2CF->body;
Cyc_Tcstmt_tcStmt(_T2CD,_T2CE,_T2D0,0);
Cyc_Tcenv_check_delayed_effects(te);
Cyc_Tcenv_check_delayed_constraints(te);_T2D1= te;
_T2D1->le= old_fenv;
Cyc_Tcstmt_tcStmt(ctx,te,s,0);
return;}}}}case 9:{struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct*_T2ED=(struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct*)_T2E1;_T2E3= _T2ED->f1;_T2E8= _T2ED->f2;}{struct _fat_ptr*n=_T2E3;struct Cyc_List_List*tds=_T2E8;
# 561
unimp_msg_part= _tag_fat("namespace",sizeof(char),10U);goto _LL24;}case 10:{struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct*_T2ED=(struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct*)_T2E1;_T2E2= _T2ED->f1;_T2E8= _T2ED->f2;}{struct _tuple2*q=_T2E2;struct Cyc_List_List*tds=_T2E8;
# 564
unimp_msg_part= _tag_fat("using",sizeof(char),6U);goto _LL24;}case 5:
# 567
 unimp_msg_part= _tag_fat("type",sizeof(char),5U);goto _LL24;case 6:
# 570
 unimp_msg_part= _tag_fat("datatype",sizeof(char),9U);goto _LL24;case 7:
# 573
 unimp_msg_part= _tag_fat("enum",sizeof(char),5U);goto _LL24;case 8:
# 576
 unimp_msg_part= _tag_fat("typedef",sizeof(char),8U);goto _LL24;case 11:
# 579
 unimp_msg_part= _tag_fat("extern \"C\"",sizeof(char),11U);goto _LL24;case 12:
# 582
 unimp_msg_part= _tag_fat("extern \"C include\"",sizeof(char),19U);goto _LL24;case 13:
# 585
 unimp_msg_part= _tag_fat("__cyclone_port_on__",sizeof(char),20U);goto _LL24;case 14:
# 588
 unimp_msg_part= _tag_fat("__cyclone_port_off__",sizeof(char),21U);goto _LL24;case 15:
# 591
 unimp_msg_part= _tag_fat("__tempest_on__",sizeof(char),15U);goto _LL24;default:
# 594
 unimp_msg_part= _tag_fat("__tempest_off__",sizeof(char),16U);goto _LL24;}_LL24:;}{struct Cyc_Warn_String_Warn_Warg_struct _T2E1;_T2E1.tag= 0;
# 597
({__typeof__(_tag_fat("tcStmt: nested ",sizeof(char),16U))_T2E2=_tag_fat("tcStmt: nested ",sizeof(char),16U);_T2E1.f1= _T2E2;});_T2D2= _T2E1;}{struct Cyc_Warn_String_Warn_Warg_struct _T2E1=_T2D2;{struct Cyc_Warn_String_Warn_Warg_struct _T2E2;_T2E2.tag= 0;_T2E2.f1= unimp_msg_part;_T2D3= _T2E2;}{struct Cyc_Warn_String_Warn_Warg_struct _T2E2=_T2D3;{struct Cyc_Warn_String_Warn_Warg_struct _T2E3;_T2E3.tag= 0;({__typeof__(_tag_fat(" declarations not allowed",sizeof(char),26U))_T2E4=_tag_fat(" declarations not allowed",sizeof(char),26U);_T2E3.f1= _T2E4;});_T2D4= _T2E3;}{struct Cyc_Warn_String_Warn_Warg_struct _T2E3=_T2D4;void*_T2E4[3];_T2E4[0]= & _T2E1;_T2E4[1]= & _T2E2;_T2E4[2]= & _T2E3;_T2D6= Cyc_Warn_impos2;{int(*_T2E5)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T2D6;_T2D5= _T2E5;}_T2D7= _tag_fat(_T2E4,sizeof(void*),3);_T2D5(_T2D7);}}}}}};}}
# 608
static long Cyc_Tcstmt_check_catchall_handler(struct Cyc_Absyn_Stmt*b){struct Cyc_Absyn_Stmt*_T0;int*_T1;int _T2;struct Cyc_List_List*_T3;unsigned _T4;struct Cyc_List_List*_T5;void*_T6;struct Cyc_Absyn_Switch_clause*_T7;struct Cyc_Absyn_Pat*_T8;int*_T9;int _TA;struct Cyc_Absyn_Switch_clause*_TB;struct Cyc_Absyn_Stmt*_TC;long _TD;struct Cyc_List_List*_TE;long _TF;_T0= b;{
void*_T10=_T0->r;struct Cyc_List_List*_T11;_T1= (int*)_T10;_T2= *_T1;if(_T2!=15)goto _TL9F;{struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct*_T12=(struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct*)_T10;_T11= _T12->f2;}{struct Cyc_List_List*case_list=_T11;
# 611
long found_wild=0;
_TLA4: _T3= case_list;_T4= (unsigned)_T3;if(_T4)goto _TLA2;else{goto _TLA3;}
_TLA2: _T5= case_list;_T6= _T5->hd;{struct Cyc_Absyn_Switch_clause*clause=(struct Cyc_Absyn_Switch_clause*)_T6;_T7= clause;_T8= _T7->pattern;{
void*_T12=_T8->r;_T9= (int*)_T12;_TA= *_T9;if(_TA!=0)goto _TLA5;
# 616
found_wild= 1;goto _LL5;_TLA5: goto _LL5;_LL5:;}_TB= clause;_TC= _TB->body;_TD= 
# 621
Cyc_Tcstmt_ensure_no_throw_stmt(_TC);if(_TD)goto _TLA7;else{goto _TLA9;}
_TLA9: return 0;_TLA7:;}_TE= case_list;
# 612
case_list= _TE->tl;goto _TLA4;_TLA3: _TF= found_wild;
# 624
return _TF;}_TL9F:
# 626
 return 0;;}}struct _tuple19{struct Cyc_List_List*f0;struct Cyc_Absyn_Exp*f1;};
# 629
static long Cyc_Tcstmt_ensure_no_throw_exp(struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;int*_T1;unsigned _T2;long(*_T3)(long(*)(struct Cyc_Absyn_Exp*),struct Cyc_List_List*);long(*_T4)(long(*)(void*),struct Cyc_List_List*);struct Cyc_List_List*_T5;long _T6;int _T7;long _T8;long _T9;struct Cyc_Absyn_Exp*_TA;int*_TB;unsigned _TC;void*_TD;long _TE;struct Cyc_Absyn_Exp*_TF;int*_T10;int _T11;struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T12;struct Cyc_Absyn_PtrInfo _T13;void*_T14;int*_T15;int _T16;struct Cyc_Absyn_PtrInfo _T17;void*_T18;int(*_T19)(void*,void*);struct Cyc_Absyn_FnInfo _T1A;struct Cyc_List_List*_T1B;struct Cyc_Absyn_No_throw_att_Absyn_Attribute_struct*_T1C;struct Cyc_Absyn_No_throw_att_Absyn_Attribute_struct*_T1D;void*_T1E;struct Cyc_Warn_String_Warn_Warg_struct _T1F;int(*_T20)(struct _fat_ptr);void*(*_T21)(struct _fat_ptr);struct _fat_ptr _T22;int _T23;long _T24;long(*_T25)(long(*)(struct Cyc_Absyn_Exp*),struct Cyc_List_List*);long(*_T26)(long(*)(void*),struct Cyc_List_List*);struct Cyc_List_List*_T27;void*_T28;void*_T29;int*_T2A;unsigned _T2B;long _T2C;long(*_T2D)(long(*)(struct Cyc_Absyn_Exp*),struct Cyc_List_List*);long(*_T2E)(long(*)(void*),struct Cyc_List_List*);struct Cyc_List_List*(*_T2F)(struct Cyc_Absyn_Exp*(*)(struct _tuple19*),struct Cyc_List_List*);struct Cyc_List_List*(*_T30)(void*(*)(void*),struct Cyc_List_List*);struct Cyc_Absyn_Exp*(*_T31)(struct _tuple19*);void*(*_T32)(struct _tuple0*);struct Cyc_List_List*_T33;struct Cyc_List_List*_T34;long _T35;void*_T36;int _T37;long _T38;struct Cyc_Absyn_Exp*_T39;int*_T3A;int _T3B;struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T3C;struct Cyc_Absyn_PtrInfo*_T3D;struct Cyc_Absyn_PtrInfo*_T3E;struct Cyc_Absyn_PtrAtts _T3F;void*_T40;unsigned _T41;int _T42;_T0= e;{
void*_T43=_T0->r;enum Cyc_Absyn_Coercion _T44;long _T45;struct Cyc_Absyn_VarargCallInfo*_T46;struct Cyc_List_List*_T47;struct Cyc_Absyn_Exp*_T48;void*_T49;_T1= (int*)_T43;_T2= *_T1;switch(_T2){case 0:
# 632
 return 1;case 3:{struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*_T4A=(struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*)_T43;_T49= _T4A->f2;}{struct Cyc_List_List*es=_T49;_T4= Cyc_List_forall;{
# 635
long(*_T4A)(long(*)(struct Cyc_Absyn_Exp*),struct Cyc_List_List*)=(long(*)(long(*)(struct Cyc_Absyn_Exp*),struct Cyc_List_List*))_T4;_T3= _T4A;}_T5= es;_T6= _T3(Cyc_Tcstmt_ensure_no_throw_exp,_T5);return _T6;}case 7:{struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*_T4A=(struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*)_T43;_T49= _T4A->f1;_T48= _T4A->f2;}{struct Cyc_Absyn_Exp*e1=_T49;struct Cyc_Absyn_Exp*e2=_T48;_T49= e1;_T48= e2;goto _LL8;}case 8:{struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*_T4A=(struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*)_T43;_T49= _T4A->f1;_T48= _T4A->f2;}_LL8: {struct Cyc_Absyn_Exp*e1=_T49;struct Cyc_Absyn_Exp*e2=_T48;_T49= e1;_T48= e2;goto _LLA;}case 34:{struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct*_T4A=(struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct*)_T43;_T49= _T4A->f1;_T48= _T4A->f2;}_LLA: {struct Cyc_Absyn_Exp*e1=_T49;struct Cyc_Absyn_Exp*e2=_T48;_T49= e1;_T48= e2;goto _LLC;}case 9:{struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct*_T4A=(struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct*)_T43;_T49= _T4A->f1;_T48= _T4A->f2;}_LLC: {struct Cyc_Absyn_Exp*e1=_T49;struct Cyc_Absyn_Exp*e2=_T48;_T8= 
# 643
Cyc_Tcstmt_ensure_no_throw_exp(e1);if(!_T8)goto _TLAB;_T7= Cyc_Tcstmt_ensure_no_throw_exp(e2);goto _TLAC;_TLAB: _T7= 0;_TLAC: return _T7;}case 10:{struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*_T4A=(struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*)_T43;_T49= _T4A->f1;_T47= _T4A->f2;_T46= _T4A->f3;_T45= _T4A->f4;}{struct Cyc_Absyn_Exp*fname=_T49;struct Cyc_List_List*args=_T47;struct Cyc_Absyn_VarargCallInfo*vargs=_T46;long res=_T45;_T9= res;
# 645
if(_T9)goto _TLAD;else{goto _TLAF;}
_TLAF: return 0;_TLAD: {
long fname_ok=0;_TA= fname;{
void*_T4A=_TA->r;struct Cyc_List_List*_T4B;void*_T4C;_TB= (int*)_T4A;_TC= *_TB;switch(_TC){case 13:{struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*_T4D=(struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*)_T4A;_T4C= _T4D->f1;_T4B= _T4D->f2;}{struct Cyc_Absyn_Exp*e1=_T4C;struct Cyc_List_List*ts=_T4B;
# 650
fname_ok= Cyc_Tcstmt_ensure_no_throw_exp(e1);goto _LL1D;}case 1:{struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T4D=(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T4A;_TD= _T4D->f1;_T4C= (void*)_TD;}{void*b=_T4C;
# 653
fname_ok= Cyc_Tcstmt_ensure_no_throw_exp(fname);goto _LL1D;}default: goto _LL1D;}_LL1D:;}_TE= fname_ok;
# 658
if(!_TE)goto _TLB1;_TF= fname;{
void*_T4A=_TF->topt;struct Cyc_Absyn_FnInfo _T4B;if(_T4A==0)goto _TLB3;_T10= (int*)_T4A;_T11= *_T10;if(_T11!=4)goto _TLB5;_T12= (struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T4A;_T13= _T12->f1;_T14= _T13.elt_type;_T15= (int*)_T14;_T16= *_T15;if(_T16!=6)goto _TLB7;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T4C=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T4A;_T17= _T4C->f1;_T18= _T17.elt_type;{struct Cyc_Absyn_FnType_Absyn_Type_struct*_T4D=(struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T18;_T4B= _T4D->f1;}}{struct Cyc_Absyn_FnInfo fi=_T4B;_T19= Cyc_Atts_attribute_cmp;_T1A= fi;_T1B= _T1A.attributes;_T1C= & Cyc_Atts_No_throw_att_val;_T1D= (struct Cyc_Absyn_No_throw_att_Absyn_Attribute_struct*)_T1C;_T1E= (void*)_T1D;
# 661
fname_ok= Cyc_List_mem(_T19,_T1B,_T1E);goto _LL24;}_TLB7: goto _LL27;_TLB5: goto _LL27;_TLB3: _LL27:{struct Cyc_Warn_String_Warn_Warg_struct _T4C;_T4C.tag= 0;
# 664
({__typeof__(_tag_fat("Expected function pointer type",sizeof(char),31U))_T4D=_tag_fat("Expected function pointer type",sizeof(char),31U);_T4C.f1= _T4D;});_T1F= _T4C;}{struct Cyc_Warn_String_Warn_Warg_struct _T4C=_T1F;void*_T4D[1];_T4D[0]= & _T4C;_T21= Cyc_Warn_impos2;{int(*_T4E)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T21;_T20= _T4E;}_T22= _tag_fat(_T4D,sizeof(void*),1);_T20(_T22);}_LL24:;}goto _TLB2;_TLB1: _TLB2: _T24= fname_ok;
# 666
if(!_T24)goto _TLB9;_T26= Cyc_List_forall;{long(*_T4A)(long(*)(struct Cyc_Absyn_Exp*),struct Cyc_List_List*)=(long(*)(long(*)(struct Cyc_Absyn_Exp*),struct Cyc_List_List*))_T26;_T25= _T4A;}_T27= args;_T23= _T25(Cyc_Tcstmt_ensure_no_throw_exp,_T27);goto _TLBA;_TLB9: _T23= 0;_TLBA: return _T23;}}case 1:{struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T4A=(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T43;_T28= _T4A->f1;_T49= (void*)_T28;}{void*b=_T49;_T29= b;_T2A= (int*)_T29;_T2B= *_T2A;switch(_T2B){case 3: goto _LL2D;case 4: _LL2D:
# 694
 return 1;default:
# 696
 return 0;};}case 15:{struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct*_T4A=(struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct*)_T43;_T49= _T4A->f1;}{struct Cyc_Absyn_Exp*e1=_T49;_T2C= 
# 699
Cyc_Tcstmt_ensure_no_throw_exp(e1);return _T2C;}case 28:{struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*_T4A=(struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*)_T43;_T49= _T4A->f3;}{struct Cyc_List_List*exps=_T49;_T2E= Cyc_List_forall;{
# 701
long(*_T4A)(long(*)(struct Cyc_Absyn_Exp*),struct Cyc_List_List*)=(long(*)(long(*)(struct Cyc_Absyn_Exp*),struct Cyc_List_List*))_T2E;_T2D= _T4A;}_T30= Cyc_List_map;{struct Cyc_List_List*(*_T4A)(struct Cyc_Absyn_Exp*(*)(struct _tuple19*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct Cyc_Absyn_Exp*(*)(struct _tuple19*),struct Cyc_List_List*))_T30;_T2F= _T4A;}_T32= Cyc_Core_snd;{struct Cyc_Absyn_Exp*(*_T4A)(struct _tuple19*)=(struct Cyc_Absyn_Exp*(*)(struct _tuple19*))_T32;_T31= _T4A;}_T33= exps;_T34= _T2F(_T31,_T33);_T35= _T2D(Cyc_Tcstmt_ensure_no_throw_exp,_T34);return _T35;}case 14:{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T4A=(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T43;_T36= _T4A->f1;_T49= (void*)_T36;_T48= _T4A->f2;_T45= _T4A->f3;_T44= _T4A->f4;}{void*ct=_T49;struct Cyc_Absyn_Exp*e1=_T48;long b=_T45;enum Cyc_Absyn_Coercion c=_T44;_T38= b;
# 703
if(_T38)goto _TLBC;else{goto _TLBE;}_TLBE: _T37= Cyc_Tcstmt_ensure_no_throw_exp(e1);goto _TLBD;_TLBC: _T37= 0;_TLBD: return _T37;}case 20:{struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*_T4A=(struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*)_T43;_T48= _T4A->f1;}{struct Cyc_Absyn_Exp*e1=_T48;_T48= e1;goto _LL1A;}case 22:{struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*_T4A=(struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*)_T43;_T48= _T4A->f1;}_LL1A: {struct Cyc_Absyn_Exp*e1=_T48;_T39= e1;{
# 707
void*_T4A=_T39->topt;void*_T4B;if(_T4A==0)goto _TLBF;_T3A= (int*)_T4A;_T3B= *_T3A;if(_T3B!=4)goto _TLC1;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T4C=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T4A;_T3C= (struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T4A;_T3D= & _T3C->f1;_T4B= (struct Cyc_Absyn_PtrInfo*)_T3D;}{struct Cyc_Absyn_PtrInfo*pi=(struct Cyc_Absyn_PtrInfo*)_T4B;_T3E= pi;_T3F= _T3E->ptr_atts;_T40= _T3F.nullable;_T41= (unsigned)_T40;_T42= !_T41;
# 709
return _T42;}_TLC1: goto _LL33;_TLBF: _LL33:
# 711
 return 0;;}}default:
# 714
 return 0;};}}
# 726
static long Cyc_Tcstmt_nothrow_visit_f1(long*env,struct Cyc_Absyn_Exp*e){long*_T0;_T0= env;
({__typeof__(Cyc_Tcstmt_ensure_no_throw_exp(e))_T1=Cyc_Tcstmt_ensure_no_throw_exp(e);*_T0= _T1;});
return 0;}
# 730
static long Cyc_Tcstmt_nothrow_visit_f2(long*env,struct Cyc_Absyn_Stmt*s){struct Cyc_Absyn_Stmt*_T0;int*_T1;int _T2;long*_T3;int _T4;long*_T5;long _T6;_T0= s;{
# 732
void*_T7=_T0->r;_T1= (int*)_T7;_T2= *_T1;if(_T2!=15)goto _TLC3;_T3= env;_T5= env;_T6= *_T5;
# 734
if(!_T6)goto _TLC5;_T4= Cyc_Tcstmt_check_catchall_handler(s);goto _TLC6;_TLC5: _T4= 0;_TLC6:*_T3= _T4;
return 0;_TLC3:
# 737
 return 1;;}}
# 740
long Cyc_Tcstmt_ensure_no_throw_stmt(struct Cyc_Absyn_Stmt*s){void(*_T0)(long(*)(long*,struct Cyc_Absyn_Exp*),long(*)(long*,struct Cyc_Absyn_Stmt*),long*,struct Cyc_Absyn_Stmt*);void(*_T1)(long(*)(void*,struct Cyc_Absyn_Exp*),long(*)(void*,struct Cyc_Absyn_Stmt*),void*,struct Cyc_Absyn_Stmt*);long*_T2;struct Cyc_Absyn_Stmt*_T3;long _T4;
long env=1;_T1= Cyc_Absyn_visit_stmt;{
void(*_T5)(long(*)(long*,struct Cyc_Absyn_Exp*),long(*)(long*,struct Cyc_Absyn_Stmt*),long*,struct Cyc_Absyn_Stmt*)=(void(*)(long(*)(long*,struct Cyc_Absyn_Exp*),long(*)(long*,struct Cyc_Absyn_Stmt*),long*,struct Cyc_Absyn_Stmt*))_T1;_T0= _T5;}_T2= & env;_T3= s;_T0(Cyc_Tcstmt_nothrow_visit_f1,Cyc_Tcstmt_nothrow_visit_f2,_T2,_T3);_T4= env;
return _T4;}
