#include <cyc_include.h>
 struct Cyc_Core_Opt{void*v;};extern char Cyc_Core_Not_found[10U];struct Cyc_Core_Not_found_exn_struct{char*tag;};
# 166 "./cyclone/library/std/core.h"
extern struct _RegionHandle*Cyc_Core_heap_region;
# 173
extern unsigned Cyc_Core_unique_qual;
# 186
void Cyc_Core_ufree(void*);
# 203
struct _fat_ptr Cyc_Core_alias_refptr(struct _fat_ptr);struct Cyc_Core_DynamicRegion;struct Cyc_Core_NewDynamicRegion{struct Cyc_Core_DynamicRegion*key;};
# 268
struct Cyc_Core_NewDynamicRegion Cyc_Core__new_rckey(unsigned,const char*,const char*,int);
# 293 "./cyclone/library/std/core.h"
void Cyc_Core_free_rckey(struct Cyc_Core_DynamicRegion*);struct Cyc_String_pa_PrintArg_struct{int tag;struct _fat_ptr f1;};struct Cyc_Int_pa_PrintArg_struct{int tag;unsigned long f1;};
# 75 "./cyclone/library/std/cycboot.h"
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);struct Cyc_List_List{void*hd;struct Cyc_List_List*tl;};
# 57 "./cyclone/library/std/list.h"
extern struct Cyc_List_List*Cyc_List_list(struct _fat_ptr);
# 60
extern struct Cyc_List_List*Cyc_List_rlist(struct _RegionHandle*,struct _fat_ptr);
# 64
extern int Cyc_List_length(struct Cyc_List_List*);
# 79
extern struct Cyc_List_List*Cyc_List_map(void*(*)(void*),struct Cyc_List_List*);
# 86
extern struct Cyc_List_List*Cyc_List_map_c(void*(*)(void*,void*),void*,struct Cyc_List_List*);
# 89
extern struct Cyc_List_List*Cyc_List_rmap_c(struct _RegionHandle*,void*(*)(void*,void*),void*,struct Cyc_List_List*);
# 136
extern void Cyc_List_iter_c(void(*)(void*,void*),void*,struct Cyc_List_List*);
# 173
extern struct Cyc_List_List*Cyc_List_rev(struct Cyc_List_List*);
# 179
extern struct Cyc_List_List*Cyc_List_imp_rev(struct Cyc_List_List*);
# 185
extern struct Cyc_List_List*Cyc_List_append(struct Cyc_List_List*,struct Cyc_List_List*);
# 196
extern struct Cyc_List_List*Cyc_List_imp_append(struct Cyc_List_List*,struct Cyc_List_List*);
# 267
extern struct Cyc_List_List*Cyc_List_zip(struct Cyc_List_List*,struct Cyc_List_List*);
# 273
extern struct Cyc_List_List*Cyc_List_rzip(struct _RegionHandle*,struct _RegionHandle*,struct Cyc_List_List*,struct Cyc_List_List*);struct _tuple0{struct Cyc_List_List*f0;struct Cyc_List_List*f1;};
# 291
extern struct _tuple0 Cyc_List_split(struct Cyc_List_List*);
# 323
extern void*Cyc_List_assoc(struct Cyc_List_List*,void*);
# 366
extern struct Cyc_List_List*Cyc_List_from_array(struct _fat_ptr);
# 378
extern int Cyc_List_list_cmp(int(*)(void*,void*),struct Cyc_List_List*,struct Cyc_List_List*);
# 51 "./cyclone/library/std/string.h"
extern int Cyc_strcmp(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_strptrcmp(struct _fat_ptr*,struct _fat_ptr*);
# 69
extern struct _fat_ptr Cyc_rstr_sepstr(struct _RegionHandle*,struct Cyc_List_List*,struct _fat_ptr);struct Cyc_AssnDef_ExistAssnFn;struct _union_Nmspace_Abs_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_Rel_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_C_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_Loc_n{int tag;int val;};union Cyc_Absyn_Nmspace{struct _union_Nmspace_Abs_n Abs_n;struct _union_Nmspace_Rel_n Rel_n;struct _union_Nmspace_C_n C_n;struct _union_Nmspace_Loc_n Loc_n;};struct _tuple1{union Cyc_Absyn_Nmspace f0;struct _fat_ptr*f1;};
# 148 "cyclone/library/compiler/absyn.h"
enum Cyc_Absyn_Scope{Cyc_Absyn_Static =0U,Cyc_Absyn_Abstract =1U,Cyc_Absyn_Public =2U,Cyc_Absyn_Extern =3U,Cyc_Absyn_ExternC =4U,Cyc_Absyn_Register =5U,Cyc_Absyn_Noreturn =6U};struct Cyc_Absyn_Tqual{long print_const: 1;long q_volatile: 1;long q_restrict: 1;long real_const: 1;unsigned loc;};
# 180
enum Cyc_Absyn_Sign{Cyc_Absyn_Signed =0U,Cyc_Absyn_Unsigned =1U,Cyc_Absyn_None =2U};
# 186
enum Cyc_Absyn_AggrKind{Cyc_Absyn_StructA =0U,Cyc_Absyn_UnionA =1U};
# 210 "cyclone/library/compiler/absyn.h"
enum Cyc_Absyn_AliasHint{Cyc_Absyn_UniqueHint =0U,Cyc_Absyn_RefcntHint =1U,Cyc_Absyn_RestrictedHint =2U,Cyc_Absyn_NoHint =3U};
# 217
enum Cyc_Absyn_KindQual{Cyc_Absyn_AnyKind =0U,Cyc_Absyn_MemKind =1U,Cyc_Absyn_BoxKind =2U,Cyc_Absyn_EffKind =3U,Cyc_Absyn_IntKind =4U,Cyc_Absyn_BoolKind =5U,Cyc_Absyn_PtrBndKind =6U,Cyc_Absyn_AqualKind =7U};struct Cyc_Absyn_Kind{enum Cyc_Absyn_KindQual kind;enum Cyc_Absyn_AliasHint aliashint;};struct Cyc_Absyn_Tvar{struct _fat_ptr*name;int identity;void*kind;void*aquals_bound;};struct Cyc_Absyn_PtrLoc{unsigned ptr_loc;unsigned rgn_loc;unsigned zt_loc;};struct Cyc_Absyn_PtrAtts{void*eff;void*nullable;void*bounds;void*zero_term;struct Cyc_Absyn_PtrLoc*ptrloc;void*autoreleased;void*aqual;};struct Cyc_Absyn_PtrInfo{void*elt_type;struct Cyc_Absyn_Tqual elt_tq;struct Cyc_Absyn_PtrAtts ptr_atts;};struct Cyc_Absyn_VarargInfo{struct _fat_ptr*name;struct Cyc_Absyn_Tqual tq;void*type;long inject;};struct Cyc_Absyn_FnInfo{struct Cyc_List_List*tvars;void*effect;struct Cyc_Absyn_Tqual ret_tqual;void*ret_type;struct Cyc_List_List*args;long c_varargs;struct Cyc_Absyn_VarargInfo*cyc_varargs;struct Cyc_List_List*qual_bnd;struct Cyc_List_List*attributes;struct Cyc_Absyn_Exp*checks_clause;struct Cyc_AssnDef_ExistAssnFn*checks_assn;struct Cyc_Absyn_Exp*requires_clause;struct Cyc_AssnDef_ExistAssnFn*requires_assn;struct Cyc_Absyn_Exp*ensures_clause;struct Cyc_AssnDef_ExistAssnFn*ensures_assn;struct Cyc_Absyn_Exp*throws_clause;struct Cyc_AssnDef_ExistAssnFn*throws_assn;struct Cyc_Absyn_Vardecl*return_value;struct Cyc_List_List*arg_vardecls;struct Cyc_List_List*effconstr;};struct Cyc_Absyn_UnknownDatatypeInfo{struct _tuple1*name;long is_extensible;};struct _union_DatatypeInfo_UnknownDatatype{int tag;struct Cyc_Absyn_UnknownDatatypeInfo val;};struct _union_DatatypeInfo_KnownDatatype{int tag;struct Cyc_Absyn_Datatypedecl**val;};union Cyc_Absyn_DatatypeInfo{struct _union_DatatypeInfo_UnknownDatatype UnknownDatatype;struct _union_DatatypeInfo_KnownDatatype KnownDatatype;};struct Cyc_Absyn_UnknownDatatypeFieldInfo{struct _tuple1*datatype_name;struct _tuple1*field_name;long is_extensible;};struct _union_DatatypeFieldInfo_UnknownDatatypefield{int tag;struct Cyc_Absyn_UnknownDatatypeFieldInfo val;};struct _tuple2{struct Cyc_Absyn_Datatypedecl*f0;struct Cyc_Absyn_Datatypefield*f1;};struct _union_DatatypeFieldInfo_KnownDatatypefield{int tag;struct _tuple2 val;};union Cyc_Absyn_DatatypeFieldInfo{struct _union_DatatypeFieldInfo_UnknownDatatypefield UnknownDatatypefield;struct _union_DatatypeFieldInfo_KnownDatatypefield KnownDatatypefield;};struct _tuple3{enum Cyc_Absyn_AggrKind f0;struct _tuple1*f1;struct Cyc_Core_Opt*f2;};struct _union_AggrInfo_UnknownAggr{int tag;struct _tuple3 val;};struct _union_AggrInfo_KnownAggr{int tag;struct Cyc_Absyn_Aggrdecl**val;};union Cyc_Absyn_AggrInfo{struct _union_AggrInfo_UnknownAggr UnknownAggr;struct _union_AggrInfo_KnownAggr KnownAggr;};
# 372
union Cyc_Absyn_AggrInfo Cyc_Absyn_UnknownAggr(enum Cyc_Absyn_AggrKind,struct _tuple1*,struct Cyc_Core_Opt*);
union Cyc_Absyn_AggrInfo Cyc_Absyn_KnownAggr(struct Cyc_Absyn_Aggrdecl**);struct Cyc_Absyn_ArrayInfo{void*elt_type;struct Cyc_Absyn_Tqual tq;struct Cyc_Absyn_Exp*num_elts;void*zero_term;unsigned zt_loc;};struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct{int tag;struct Cyc_Absyn_Aggrdecl*f1;};struct Cyc_Absyn_Enum_td_Absyn_Raw_typedecl_struct{int tag;struct Cyc_Absyn_Enumdecl*f1;};struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct{int tag;struct Cyc_Absyn_Datatypedecl*f1;};struct Cyc_Absyn_TypeDecl{void*r;unsigned loc;};struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct{int tag;struct _tuple1*f1;struct Cyc_Absyn_Enumdecl*f2;};struct Cyc_Absyn_AnonEnumCon_Absyn_TyCon_struct{int tag;struct Cyc_List_List*f1;};struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct{int tag;union Cyc_Absyn_DatatypeInfo f1;};struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct{int tag;union Cyc_Absyn_DatatypeFieldInfo f1;};struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct{int tag;union Cyc_Absyn_AggrInfo f1;};struct Cyc_Absyn_AppType_Absyn_Type_struct{int tag;void*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Evar_Absyn_Type_struct{int tag;struct Cyc_Core_Opt*f1;void*f2;int f3;struct Cyc_Core_Opt*f4;};struct Cyc_Absyn_VarType_Absyn_Type_struct{int tag;struct Cyc_Absyn_Tvar*f1;};struct Cyc_Absyn_PointerType_Absyn_Type_struct{int tag;struct Cyc_Absyn_PtrInfo f1;};struct Cyc_Absyn_ArrayType_Absyn_Type_struct{int tag;struct Cyc_Absyn_ArrayInfo f1;};struct Cyc_Absyn_FnType_Absyn_Type_struct{int tag;struct Cyc_Absyn_FnInfo f1;};struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct{int tag;enum Cyc_Absyn_AggrKind f1;long f2;struct Cyc_List_List*f3;};struct Cyc_Absyn_TypedefType_Absyn_Type_struct{int tag;struct _tuple1*f1;struct Cyc_List_List*f2;struct Cyc_Absyn_Typedefdecl*f3;void*f4;};struct Cyc_Absyn_ValueofType_Absyn_Type_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct{int tag;struct Cyc_Absyn_TypeDecl*f1;void**f2;};struct Cyc_Absyn_TypeofType_Absyn_Type_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_SubsetType_Absyn_Type_struct{int tag;struct Cyc_Absyn_Vardecl*f1;struct Cyc_Absyn_Exp*f2;struct Cyc_AssnDef_ExistAssnFn*f3;};struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct _union_Cnst_Null_c{int tag;int val;};struct _tuple4{enum Cyc_Absyn_Sign f0;char f1;};struct _union_Cnst_Char_c{int tag;struct _tuple4 val;};struct _union_Cnst_Wchar_c{int tag;struct _fat_ptr val;};struct _tuple5{enum Cyc_Absyn_Sign f0;short f1;};struct _union_Cnst_Short_c{int tag;struct _tuple5 val;};struct _tuple6{enum Cyc_Absyn_Sign f0;int f1;};struct _union_Cnst_Int_c{int tag;struct _tuple6 val;};struct _tuple7{enum Cyc_Absyn_Sign f0;long long f1;};struct _union_Cnst_LongLong_c{int tag;struct _tuple7 val;};struct _union_Cnst_Int128_c{int tag;struct _tuple7 val;};struct _tuple8{struct _fat_ptr f0;int f1;};struct _union_Cnst_Float_c{int tag;struct _tuple8 val;};struct _union_Cnst_String_c{int tag;struct _fat_ptr val;};struct _union_Cnst_Wstring_c{int tag;struct _fat_ptr val;};union Cyc_Absyn_Cnst{struct _union_Cnst_Null_c Null_c;struct _union_Cnst_Char_c Char_c;struct _union_Cnst_Wchar_c Wchar_c;struct _union_Cnst_Short_c Short_c;struct _union_Cnst_Int_c Int_c;struct _union_Cnst_LongLong_c LongLong_c;struct _union_Cnst_Int128_c Int128_c;struct _union_Cnst_Float_c Float_c;struct _union_Cnst_String_c String_c;struct _union_Cnst_Wstring_c Wstring_c;};
# 600
enum Cyc_Absyn_Primop{Cyc_Absyn_Plus =0U,Cyc_Absyn_Times =1U,Cyc_Absyn_Minus =2U,Cyc_Absyn_Div =3U,Cyc_Absyn_Mod =4U,Cyc_Absyn_Eq =5U,Cyc_Absyn_Neq =6U,Cyc_Absyn_Gt =7U,Cyc_Absyn_Lt =8U,Cyc_Absyn_Gte =9U,Cyc_Absyn_Lte =10U,Cyc_Absyn_Not =11U,Cyc_Absyn_Bitnot =12U,Cyc_Absyn_Bitand =13U,Cyc_Absyn_Bitor =14U,Cyc_Absyn_Bitxor =15U,Cyc_Absyn_Bitlshift =16U,Cyc_Absyn_Bitlrshift =17U,Cyc_Absyn_Numelts =18U,Cyc_Absyn_Tagof =19U,Cyc_Absyn_UDiv =20U,Cyc_Absyn_UMod =21U,Cyc_Absyn_UGt =22U,Cyc_Absyn_ULt =23U,Cyc_Absyn_UGte =24U,Cyc_Absyn_ULte =25U};struct Cyc_Absyn_PrimopOpt{enum Cyc_Absyn_Primop v;};
# 635
enum Cyc_Absyn_Incrementor{Cyc_Absyn_PreInc =0U,Cyc_Absyn_PostInc =1U,Cyc_Absyn_PreDec =2U,Cyc_Absyn_PostDec =3U};struct Cyc_Absyn_VarargCallInfo{int num_varargs;struct Cyc_List_List*injectors;struct Cyc_Absyn_VarargInfo*vai;};
# 660
enum Cyc_Absyn_Coercion{Cyc_Absyn_Unknown_coercion =0U,Cyc_Absyn_No_coercion =1U,Cyc_Absyn_Null_to_NonNull =2U,Cyc_Absyn_Subset_coercion =3U,Cyc_Absyn_Other_coercion =4U};struct Cyc_Absyn_FieldName_Absyn_Designator_struct{int tag;struct _fat_ptr*f1;};
# 675
enum Cyc_Absyn_MallocKind{Cyc_Absyn_Malloc =0U,Cyc_Absyn_Calloc =1U,Cyc_Absyn_Vmalloc =2U};struct Cyc_Absyn_MallocInfo{enum Cyc_Absyn_MallocKind mknd;struct Cyc_Absyn_Exp*rgn;struct Cyc_Absyn_Exp*aqual;void**elt_type;struct Cyc_Absyn_Exp*num_elts;long fat_result;long inline_call;};struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct{int tag;union Cyc_Absyn_Cnst f1;};struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct{int tag;void*f1;};struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct{int tag;enum Cyc_Absyn_Primop f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_PrimopOpt*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;enum Cyc_Absyn_Incrementor f2;};struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_List_List*f2;struct Cyc_Absyn_VarargCallInfo*f3;long f4;};struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;long f2;};struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct{int tag;void*f1;struct Cyc_Absyn_Exp*f2;long f3;enum Cyc_Absyn_Coercion f4;};struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct{int tag;void*f1;};struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct{int tag;void*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _fat_ptr*f2;long f3;long f4;};struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _fat_ptr*f2;long f3;long f4;};struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct _tuple9{struct _fat_ptr*f0;struct Cyc_Absyn_Tqual f1;void*f2;};struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct{int tag;struct _tuple9*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct{int tag;struct Cyc_List_List*f1;};struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Vardecl*f1;struct Cyc_Absyn_Exp*f2;struct Cyc_Absyn_Exp*f3;long f4;};struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;void*f2;long f3;};struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct{int tag;struct _tuple1*f1;struct Cyc_List_List*f2;struct Cyc_List_List*f3;struct Cyc_Absyn_Aggrdecl*f4;};struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct{int tag;void*f1;long f2;struct Cyc_List_List*f3;};struct Cyc_Absyn_Datatype_e_Absyn_Raw_exp_struct{int tag;struct Cyc_List_List*f1;struct Cyc_Absyn_Datatypedecl*f2;struct Cyc_Absyn_Datatypefield*f3;};struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Enumdecl*f1;struct Cyc_Absyn_Enumfield*f2;};struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct{int tag;void*f1;struct Cyc_Absyn_Enumfield*f2;};struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_MallocInfo f1;};struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Core_Opt*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Stmt*f1;};struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _fat_ptr*f2;};struct Cyc_Absyn_Asm_e_Absyn_Raw_exp_struct{int tag;long f1;struct _fat_ptr f2;struct Cyc_List_List*f3;struct Cyc_List_List*f4;struct Cyc_List_List*f5;};struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;long f2;long f3;};struct Cyc_Absyn_Exp{void*topt;void*r;unsigned loc;void*annot;};struct Cyc_Absyn_Skip_s_Absyn_Raw_stmt_struct{int tag;};struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Stmt*f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Stmt*f2;struct Cyc_Absyn_Stmt*f3;};struct _tuple10{struct Cyc_Absyn_Exp*f0;struct Cyc_Absyn_Stmt*f1;};struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct{int tag;struct _tuple10 f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_Goto_s_Absyn_Raw_stmt_struct{int tag;struct _fat_ptr*f1;};struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _tuple10 f2;struct _tuple10 f3;struct Cyc_Absyn_Stmt*f4;};struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_List_List*f2;void*f3;};struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_List_List*f1;struct Cyc_Absyn_Switch_clause**f2;};struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Decl*f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct{int tag;struct _fat_ptr*f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Stmt*f1;struct _tuple10 f2;};struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Stmt*f1;struct Cyc_List_List*f2;void*f3;};struct Cyc_Absyn_Stmt{void*r;unsigned loc;void*annot;};struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct{int tag;};struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct{int tag;struct Cyc_Absyn_Vardecl*f1;struct Cyc_Absyn_Pat*f2;};struct Cyc_Absyn_AliasVar_p_Absyn_Raw_pat_struct{int tag;struct Cyc_Absyn_Tvar*f1;struct Cyc_Absyn_Vardecl*f2;};struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct{int tag;struct Cyc_Absyn_Vardecl*f1;struct Cyc_Absyn_Pat*f2;};struct Cyc_Absyn_TagInt_p_Absyn_Raw_pat_struct{int tag;struct Cyc_Absyn_Tvar*f1;struct Cyc_Absyn_Vardecl*f2;};struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct{int tag;struct Cyc_Absyn_Pat*f1;};struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct{int tag;void*f1;long f2;struct Cyc_List_List*f3;struct Cyc_List_List*f4;long f5;};struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct{int tag;struct Cyc_Absyn_Datatypedecl*f1;struct Cyc_Absyn_Datatypefield*f2;struct Cyc_List_List*f3;long f4;};struct Cyc_Absyn_Exp_p_Absyn_Raw_pat_struct{int tag;struct Cyc_Absyn_Exp*f1;};
# 854
extern struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct Cyc_Absyn_Wild_p_val;struct Cyc_Absyn_Pat{void*r;void*topt;unsigned loc;};struct Cyc_Absyn_Switch_clause{struct Cyc_Absyn_Pat*pattern;struct Cyc_Core_Opt*pat_vars;struct Cyc_Absyn_Exp*where_clause;struct Cyc_Absyn_Stmt*body;unsigned loc;};struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct{int tag;struct _tuple1*f1;};struct Cyc_Absyn_Global_b_Absyn_Binding_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};struct Cyc_Absyn_Local_b_Absyn_Binding_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};struct Cyc_Absyn_Pat_b_Absyn_Binding_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};struct Cyc_Absyn_Vardecl{enum Cyc_Absyn_Scope sc;struct _tuple1*name;unsigned varloc;struct Cyc_Absyn_Tqual tq;void*type;struct Cyc_Absyn_Exp*initializer;void*rgn;struct Cyc_List_List*attributes;long escapes;long is_proto;struct Cyc_Absyn_Exp*rename;};struct Cyc_Absyn_Fndecl{enum Cyc_Absyn_Scope sc;long is_inline;struct _tuple1*name;struct Cyc_Absyn_Stmt*body;struct Cyc_Absyn_FnInfo i;void*cached_type;struct Cyc_Core_Opt*param_vardecls;struct Cyc_Absyn_Vardecl*fn_vardecl;enum Cyc_Absyn_Scope orig_scope;long escapes;};struct Cyc_Absyn_Aggrfield{struct _fat_ptr*name;struct Cyc_Absyn_Tqual tq;void*type;struct Cyc_Absyn_Exp*width;struct Cyc_List_List*attributes;struct Cyc_Absyn_Exp*requires_clause;};struct Cyc_Absyn_AggrdeclImpl{struct Cyc_List_List*exist_vars;struct Cyc_List_List*qual_bnd;struct Cyc_List_List*fields;long tagged;struct Cyc_List_List*effconstr;};struct Cyc_Absyn_Aggrdecl{enum Cyc_Absyn_AggrKind kind;enum Cyc_Absyn_Scope sc;struct _tuple1*name;struct Cyc_List_List*tvs;struct Cyc_Absyn_AggrdeclImpl*impl;struct Cyc_List_List*attributes;long expected_mem_kind;};struct Cyc_Absyn_Datatypefield{struct _tuple1*name;struct Cyc_List_List*typs;unsigned loc;enum Cyc_Absyn_Scope sc;};struct Cyc_Absyn_Datatypedecl{enum Cyc_Absyn_Scope sc;struct _tuple1*name;struct Cyc_List_List*tvs;struct Cyc_Core_Opt*fields;long is_extensible;};struct Cyc_Absyn_Enumfield{struct _tuple1*name;struct Cyc_Absyn_Exp*tag;unsigned loc;};struct Cyc_Absyn_Enumdecl{enum Cyc_Absyn_Scope sc;struct _tuple1*name;struct Cyc_Core_Opt*fields;};struct Cyc_Absyn_Typedefdecl{struct _tuple1*name;struct Cyc_Absyn_Tqual tq;struct Cyc_List_List*tvs;struct Cyc_Core_Opt*kind;void*defn;struct Cyc_List_List*atts;long extern_c;};struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Fndecl*f1;};struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Pat*f1;struct Cyc_Core_Opt*f2;struct Cyc_Absyn_Exp*f3;void*f4;};struct Cyc_Absyn_Letv_d_Absyn_Raw_decl_struct{int tag;struct Cyc_List_List*f1;};struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Tvar*f1;struct Cyc_Absyn_Vardecl*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Aggrdecl*f1;};struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Datatypedecl*f1;};struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Enumdecl*f1;};struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Typedefdecl*f1;};struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct{int tag;struct _fat_ptr*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct{int tag;struct _tuple1*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct{int tag;struct Cyc_List_List*f1;};struct _tuple11{unsigned f0;struct Cyc_List_List*f1;};struct Cyc_Absyn_ExternCinclude_d_Absyn_Raw_decl_struct{int tag;struct Cyc_List_List*f1;struct Cyc_List_List*f2;struct Cyc_List_List*f3;struct _tuple11*f4;};struct Cyc_Absyn_Decl{void*r;unsigned loc;};extern char Cyc_Absyn_EmptyAnnot[11U];struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct{char*tag;};
# 1042
extern struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct Cyc_Absyn_EmptyAnnot_val;
# 1049
int Cyc_Absyn_qvar_cmp(struct _tuple1*,struct _tuple1*);
# 1057
union Cyc_Absyn_Nmspace Cyc_Absyn_Loc_n (void);
union Cyc_Absyn_Nmspace Cyc_Absyn_Rel_n(struct Cyc_List_List*);
# 1060
union Cyc_Absyn_Nmspace Cyc_Absyn_Abs_n(struct Cyc_List_List*,long);
# 1063
struct Cyc_Absyn_Tqual Cyc_Absyn_const_tqual(unsigned);
struct Cyc_Absyn_Tqual Cyc_Absyn_empty_tqual(unsigned);
# 1066
long Cyc_Absyn_equal_tqual(struct Cyc_Absyn_Tqual,struct Cyc_Absyn_Tqual);
# 1070
void*Cyc_Absyn_compress(void*);
# 1088
extern void*Cyc_Absyn_char_type;extern void*Cyc_Absyn_uchar_type;extern void*Cyc_Absyn_uint_type;
# 1090
extern void*Cyc_Absyn_sint_type;
# 1093
void*Cyc_Absyn_gen_float_type(unsigned);
# 1097
extern void*Cyc_Absyn_heap_rgn_type;
# 1099
extern void*Cyc_Absyn_al_qual_type;
# 1103
extern void*Cyc_Absyn_true_type;extern void*Cyc_Absyn_false_type;
# 1105
extern void*Cyc_Absyn_void_type;extern void*Cyc_Absyn_enum_type(struct _tuple1*,struct Cyc_Absyn_Enumdecl*);
# 1121
void*Cyc_Absyn_exn_type (void);
# 1133
void*Cyc_Absyn_bounds_one (void);
# 1147
void*Cyc_Absyn_star_type(void*,void*,void*,struct Cyc_Absyn_Tqual,void*,void*);
# 1151
void*Cyc_Absyn_cstar_type(void*,struct Cyc_Absyn_Tqual);
# 1153
void*Cyc_Absyn_fatptr_type(void*,void*,void*,struct Cyc_Absyn_Tqual,void*,void*);
# 1155
void*Cyc_Absyn_strct(struct _fat_ptr*);
void*Cyc_Absyn_strctq(struct _tuple1*);
void*Cyc_Absyn_unionq_type(struct _tuple1*);
# 1161
void*Cyc_Absyn_array_type(void*,struct Cyc_Absyn_Tqual,struct Cyc_Absyn_Exp*,void*,unsigned);
# 1166
void*Cyc_Absyn_aggr_type(union Cyc_Absyn_AggrInfo,struct Cyc_List_List*);
# 1182
struct Cyc_Absyn_Exp*Cyc_Absyn_new_exp(void*,unsigned);
# 1190
struct Cyc_Absyn_Exp*Cyc_Absyn_int_exp(enum Cyc_Absyn_Sign,int,unsigned);
struct Cyc_Absyn_Exp*Cyc_Absyn_signed_int_exp(int,unsigned);
struct Cyc_Absyn_Exp*Cyc_Absyn_uint_exp(unsigned,unsigned);
# 1195
struct Cyc_Absyn_Exp*Cyc_Absyn_float_exp(struct _fat_ptr,int,unsigned);
struct Cyc_Absyn_Exp*Cyc_Absyn_string_exp(struct _fat_ptr,unsigned);
# 1198
struct Cyc_Absyn_Exp*Cyc_Absyn_var_exp(struct _tuple1*,unsigned);
struct Cyc_Absyn_Exp*Cyc_Absyn_varb_exp(void*,unsigned);
# 1204
struct Cyc_Absyn_Exp*Cyc_Absyn_prim1_exp(enum Cyc_Absyn_Primop,struct Cyc_Absyn_Exp*,unsigned);
struct Cyc_Absyn_Exp*Cyc_Absyn_prim2_exp(enum Cyc_Absyn_Primop,struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*,unsigned);
# 1207
struct Cyc_Absyn_Exp*Cyc_Absyn_add_exp(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*,unsigned);
struct Cyc_Absyn_Exp*Cyc_Absyn_times_exp(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*,unsigned);
struct Cyc_Absyn_Exp*Cyc_Absyn_divide_exp(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*,unsigned);
# 1211
struct Cyc_Absyn_Exp*Cyc_Absyn_eq_exp(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*,unsigned);
struct Cyc_Absyn_Exp*Cyc_Absyn_neq_exp(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*,unsigned);
# 1221
struct Cyc_Absyn_Exp*Cyc_Absyn_assignop_exp(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_PrimopOpt*,struct Cyc_Absyn_Exp*,unsigned);
struct Cyc_Absyn_Exp*Cyc_Absyn_assign_exp(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*,unsigned);
struct Cyc_Absyn_Exp*Cyc_Absyn_increment_exp(struct Cyc_Absyn_Exp*,enum Cyc_Absyn_Incrementor,unsigned);
struct Cyc_Absyn_Exp*Cyc_Absyn_conditional_exp(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*,unsigned);
struct Cyc_Absyn_Exp*Cyc_Absyn_and_exp(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*,unsigned);
# 1229
struct Cyc_Absyn_Exp*Cyc_Absyn_fncall_exp(struct Cyc_Absyn_Exp*,struct Cyc_List_List*,unsigned);
# 1234
struct Cyc_Absyn_Exp*Cyc_Absyn_cast_exp(void*,struct Cyc_Absyn_Exp*,long,enum Cyc_Absyn_Coercion,unsigned);
struct Cyc_Absyn_Exp*Cyc_Absyn_address_exp(struct Cyc_Absyn_Exp*,unsigned);
struct Cyc_Absyn_Exp*Cyc_Absyn_sizeoftype_exp(void*,unsigned);
# 1239
struct Cyc_Absyn_Exp*Cyc_Absyn_deref_exp(struct Cyc_Absyn_Exp*,unsigned);
struct Cyc_Absyn_Exp*Cyc_Absyn_aggrmember_exp(struct Cyc_Absyn_Exp*,struct _fat_ptr*,unsigned);
struct Cyc_Absyn_Exp*Cyc_Absyn_aggrarrow_exp(struct Cyc_Absyn_Exp*,struct _fat_ptr*,unsigned);
struct Cyc_Absyn_Exp*Cyc_Absyn_subscript_exp(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*,unsigned);
# 1244
struct Cyc_Absyn_Exp*Cyc_Absyn_stmt_exp(struct Cyc_Absyn_Stmt*,unsigned);
struct Cyc_Absyn_Exp*Cyc_Absyn_array_exp(struct Cyc_List_List*,unsigned);
# 1252
struct Cyc_Absyn_Exp*Cyc_Absyn_unresolvedmem_exp(struct Cyc_Core_Opt*,struct Cyc_List_List*,unsigned);
# 1259
struct Cyc_Absyn_Exp*Cyc_Absyn_set_type(struct Cyc_Absyn_Exp*,void*);
# 1262
struct Cyc_Absyn_Stmt*Cyc_Absyn_new_stmt(void*,unsigned);
struct Cyc_Absyn_Stmt*Cyc_Absyn_skip_stmt(unsigned);
struct Cyc_Absyn_Stmt*Cyc_Absyn_exp_stmt(struct Cyc_Absyn_Exp*,unsigned);
struct Cyc_Absyn_Stmt*Cyc_Absyn_seq_stmt(struct Cyc_Absyn_Stmt*,struct Cyc_Absyn_Stmt*,unsigned);
# 1267
struct Cyc_Absyn_Stmt*Cyc_Absyn_return_stmt(struct Cyc_Absyn_Exp*,unsigned);
struct Cyc_Absyn_Stmt*Cyc_Absyn_ifthenelse_stmt(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Stmt*,struct Cyc_Absyn_Stmt*,unsigned);
# 1275
struct Cyc_Absyn_Stmt*Cyc_Absyn_decl_stmt(struct Cyc_Absyn_Decl*,struct Cyc_Absyn_Stmt*,unsigned);
struct Cyc_Absyn_Stmt*Cyc_Absyn_declare_stmt(struct _tuple1*,void*,struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Stmt*,unsigned);
struct Cyc_Absyn_Stmt*Cyc_Absyn_label_stmt(struct _fat_ptr*,struct Cyc_Absyn_Stmt*,unsigned);
# 1279
struct Cyc_Absyn_Stmt*Cyc_Absyn_goto_stmt(struct _fat_ptr*,unsigned);
struct Cyc_Absyn_Stmt*Cyc_Absyn_assign_stmt(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*,unsigned);
# 1284
struct Cyc_Absyn_Pat*Cyc_Absyn_new_pat(void*,unsigned);
# 1288
struct Cyc_Absyn_Decl*Cyc_Absyn_new_decl(void*,unsigned);
# 1293
struct Cyc_Absyn_Vardecl*Cyc_Absyn_new_vardecl(unsigned,struct _tuple1*,void*,struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*);
struct Cyc_Absyn_Vardecl*Cyc_Absyn_static_vardecl(struct _tuple1*,void*,struct Cyc_Absyn_Exp*);
# 1315
void*Cyc_Absyn_function_type(struct Cyc_List_List*,void*,struct Cyc_Absyn_Tqual,void*,struct Cyc_List_List*,long,struct Cyc_Absyn_VarargInfo*,struct Cyc_List_List*,struct Cyc_List_List*,struct Cyc_List_List*,struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*);
# 1328
long Cyc_Absyn_is_lvalue(struct Cyc_Absyn_Exp*);
# 1333
struct Cyc_Absyn_Aggrfield*Cyc_Absyn_lookup_field(struct Cyc_List_List*,struct _fat_ptr*);
# 1343
struct _fat_ptr*Cyc_Absyn_fieldname(int);struct _tuple12{enum Cyc_Absyn_AggrKind f0;struct _tuple1*f1;};
# 1345
struct _tuple12 Cyc_Absyn_aggr_kinded_name(union Cyc_Absyn_AggrInfo);
# 1347
struct Cyc_Absyn_Aggrdecl*Cyc_Absyn_get_known_aggrdecl(union Cyc_Absyn_AggrInfo);
# 1356
struct _fat_ptr*Cyc_Absyn_designatorlist_to_fieldname(struct Cyc_List_List*);
# 1359
void Cyc_Absyn_visit_stmt(long(*)(void*,struct Cyc_Absyn_Exp*),long(*)(void*,struct Cyc_Absyn_Stmt*),void*,struct Cyc_Absyn_Stmt*);
void Cyc_Absyn_visit_exp(long(*)(void*,struct Cyc_Absyn_Exp*),long(*)(void*,struct Cyc_Absyn_Stmt*),void*,struct Cyc_Absyn_Exp*);
# 1368
long Cyc_Absyn_var_may_appear_exp(struct _tuple1*,struct Cyc_Absyn_Exp*);
# 98 "cyclone/library/compiler/attributes.h"
struct Cyc_List_List*Cyc_Atts_atts2c(struct Cyc_List_List*);struct Cyc_Dict_T;struct Cyc_Dict_Dict{int(*rel)(void*,void*);struct _RegionHandle*r;const struct Cyc_Dict_T*t;};extern char Cyc_Dict_Absent[7U];struct Cyc_Dict_Absent_exn_struct{char*tag;};
# 68 "./cyclone/library/std/dict.h"
extern struct Cyc_Dict_Dict Cyc_Dict_rempty(struct _RegionHandle*,int(*)(void*,void*));
# 87
extern struct Cyc_Dict_Dict Cyc_Dict_insert(struct Cyc_Dict_Dict,void*,void*);
# 111
extern void*Cyc_Dict_lookup_other(struct Cyc_Dict_Dict,int(*)(void*,void*),void*);
# 120
extern void**Cyc_Dict_lookup_opt(struct Cyc_Dict_Dict,void*);struct Cyc_Set_Set;
# 53 "./cyclone/library/std/set.h"
extern struct Cyc_Set_Set*Cyc_Set_rempty(struct _RegionHandle*,int(*)(void*,void*));
# 70
extern struct Cyc_Set_Set*Cyc_Set_rinsert(struct _RegionHandle*,struct Cyc_Set_Set*,void*);
# 101
extern long Cyc_Set_member(struct Cyc_Set_Set*,void*);struct Cyc_Xarray_Xarray{struct _fat_ptr elmts;int num_elmts;};
# 40 "./cyclone/library/std/xarray.h"
extern int Cyc_Xarray_length(struct Cyc_Xarray_Xarray*);
# 42
extern void*Cyc_Xarray_get(struct Cyc_Xarray_Xarray*,int);
# 57
extern struct Cyc_Xarray_Xarray*Cyc_Xarray_rcreate_empty(struct _RegionHandle*);
# 69
extern int Cyc_Xarray_add_ind(struct Cyc_Xarray_Xarray*,void*);
# 121
extern void Cyc_Xarray_reuse(struct Cyc_Xarray_Xarray*);struct _tuple13{unsigned f0;long f1;};
# 29 "cyclone/library/compiler/evexp.h"
extern struct _tuple13 Cyc_Evexp_eval_const_uint_exp(struct Cyc_Absyn_Exp*);
# 33
extern long Cyc_Evexp_c_can_eval(struct Cyc_Absyn_Exp*);
# 36 "cyclone/library/compiler/flags.h"
extern long Cyc_Flags_no_regions;
# 38
extern long Cyc_Flags_no_reaps;
# 81
extern long Cyc_Flags_noexpand_r;struct Cyc_Hashtable_Table;
# 55 "./cyclone/library/std/hashtable.h"
extern void*Cyc_Hashtable_lookup(struct Cyc_Hashtable_Table*,void*);extern char Cyc_InsertChecks_FatBound[9U];struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct{char*tag;};extern char Cyc_InsertChecks_NoCheck[8U];struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct{char*tag;};extern char Cyc_InsertChecks_NullAndFatBound[16U];struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct{char*tag;};extern char Cyc_InsertChecks_NullAndThinBound[17U];struct Cyc_InsertChecks_NullAndThinBound_Absyn_AbsynAnnot_struct{char*tag;struct Cyc_Absyn_Exp*f1;};extern char Cyc_InsertChecks_NullOnly[9U];struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct{char*tag;};extern char Cyc_InsertChecks_ThinBound[10U];struct Cyc_InsertChecks_ThinBound_Absyn_AbsynAnnot_struct{char*tag;struct Cyc_Absyn_Exp*f1;};
# 35 "cyclone/library/compiler/insert_checks.h"
extern struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct Cyc_InsertChecks_NoCheck_val;
# 37
extern struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct Cyc_InsertChecks_NullAndFatBound_val;
# 31 "cyclone/library/compiler/kinds.h"
extern struct Cyc_Absyn_Kind Cyc_Kinds_ak;
extern struct Cyc_Absyn_Kind Cyc_Kinds_bk;
# 91 "cyclone/library/compiler/kinds.h"
struct Cyc_Absyn_Kind*Cyc_Kinds_tvar_kind(struct Cyc_Absyn_Tvar*,struct Cyc_Absyn_Kind*);
# 101
long Cyc_Kinds_kind_leq(struct Cyc_Absyn_Kind*,struct Cyc_Absyn_Kind*);struct Cyc_Tcpat_WhereTest_Tcpat_PatTest_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Tcpat_EqEnum_Tcpat_PatTest_struct{int tag;struct Cyc_Absyn_Enumdecl*f1;struct Cyc_Absyn_Enumfield*f2;};struct Cyc_Tcpat_EqAnonEnum_Tcpat_PatTest_struct{int tag;void*f1;struct Cyc_Absyn_Enumfield*f2;};struct Cyc_Tcpat_EqFloat_Tcpat_PatTest_struct{int tag;struct _fat_ptr f1;int f2;};struct Cyc_Tcpat_EqConst_Tcpat_PatTest_struct{int tag;unsigned f1;};struct Cyc_Tcpat_EqDatatypeTag_Tcpat_PatTest_struct{int tag;int f1;struct Cyc_Absyn_Datatypedecl*f2;struct Cyc_Absyn_Datatypefield*f3;};struct Cyc_Tcpat_EqTaggedUnion_Tcpat_PatTest_struct{int tag;void*f1;struct _fat_ptr*f2;int f3;};struct Cyc_Tcpat_EqExtensibleDatatype_Tcpat_PatTest_struct{int tag;struct Cyc_Absyn_Datatypedecl*f1;struct Cyc_Absyn_Datatypefield*f2;};struct Cyc_Tcpat_Deref_Tcpat_Access_struct{int tag;void*f1;};struct Cyc_Tcpat_DatatypeField_Tcpat_Access_struct{int tag;struct Cyc_Absyn_Datatypedecl*f1;struct Cyc_Absyn_Datatypefield*f2;unsigned f3;void*f4;};struct Cyc_Tcpat_AggrField_Tcpat_Access_struct{int tag;void*f1;long f2;struct _fat_ptr*f3;void*f4;};struct _union_PatOrWhere_pattern{int tag;struct Cyc_Absyn_Pat*val;};struct _union_PatOrWhere_where_clause{int tag;struct Cyc_Absyn_Exp*val;};union Cyc_Tcpat_PatOrWhere{struct _union_PatOrWhere_pattern pattern;struct _union_PatOrWhere_where_clause where_clause;};struct Cyc_Tcpat_PathNode{union Cyc_Tcpat_PatOrWhere orig_pat;void*access;};struct Cyc_Tcpat_Rhs{long used;unsigned pat_loc;struct Cyc_Absyn_Stmt*rhs;};struct Cyc_Tcpat_Success_Tcpat_Decision_struct{int tag;struct Cyc_Tcpat_Rhs*f1;};struct Cyc_Tcpat_SwitchDec_Tcpat_Decision_struct{int tag;struct Cyc_List_List*f1;struct Cyc_List_List*f2;void*f3;};
# 30 "cyclone/library/compiler/tcutil.h"
long Cyc_Tcutil_is_void_type(void*);
long Cyc_Tcutil_is_char_type(void*);
# 35
long Cyc_Tcutil_is_arithmetic_type(void*);
# 41
long Cyc_Tcutil_is_pointer_type(void*);
long Cyc_Tcutil_is_array_type(void*);
long Cyc_Tcutil_is_boxed(void*);
# 46
long Cyc_Tcutil_is_fat_ptr(void*);
long Cyc_Tcutil_is_zeroterm_pointer_type(void*);
# 51
long Cyc_Tcutil_is_fat_pointer_type(void*);
# 59
void*Cyc_Tcutil_pointer_elt_type(void*);
# 70
struct Cyc_Absyn_Exp*Cyc_Tcutil_get_bounds_exp_constrain(void*,void*,long);
# 75
long Cyc_Tcutil_is_fat_pointer_type_elt(void*,void**);
# 77
long Cyc_Tcutil_is_zero_pointer_type_elt(void*,void**);
# 87
long Cyc_Tcutil_is_zero(struct Cyc_Absyn_Exp*);
# 95
struct Cyc_Absyn_Exp*Cyc_Tcutil_deep_copy_exp(long,struct Cyc_Absyn_Exp*);
# 99
struct Cyc_Absyn_Kind*Cyc_Tcutil_type_kind(void*);
# 128
int Cyc_Tcutil_typecmp(void*,void*);
int Cyc_Tcutil_aggrfield_cmp(struct Cyc_Absyn_Aggrfield*,struct Cyc_Absyn_Aggrfield*);
# 131
void*Cyc_Tcutil_substitute(struct Cyc_List_List*,void*);
# 134
void*Cyc_Tcutil_rsubstitute(struct _RegionHandle*,struct Cyc_List_List*,void*);
# 174
struct Cyc_List_List*Cyc_Tcutil_resolve_aggregate_designators(struct _RegionHandle*,unsigned,struct Cyc_List_List*,enum Cyc_Absyn_AggrKind,struct Cyc_List_List*);
# 180
long Cyc_Tcutil_is_zero_ptr_deref(struct Cyc_Absyn_Exp*,void**,long*,void**);
# 185
long Cyc_Tcutil_is_noalias_qual(void*,long);
# 235
struct Cyc_List_List*Cyc_Tcutil_filter_nulls(struct Cyc_List_List*);
# 246
long Cyc_Tcutil_force_type2bool(long,void*);
# 272
void*Cyc_Tcutil_get_pointer_bounds(void*);struct Cyc_Toc_TocState{struct Cyc_List_List**tuple_types;struct Cyc_List_List**anon_aggr_types;struct Cyc_Dict_Dict*aggrs_so_far;struct Cyc_List_List**abs_struct_types;struct Cyc_Set_Set**datatypes_so_far;struct Cyc_Dict_Dict*xdatatypes_so_far;struct Cyc_Dict_Dict*qvar_tags;struct Cyc_Xarray_Xarray*temp_labels;};struct Cyc_Toc_TocStateWrap{struct Cyc_Core_DynamicRegion*dyn;struct Cyc_Toc_TocState*state;};struct Cyc_Toc_TocContext{struct Cyc_List_List*result_decls;struct Cyc_Hashtable_Table**pop_tables;struct Cyc_Hashtable_Table**fn_pop_table;int tuple_type_counter;int temp_var_counter;int fresh_label_counter;struct Cyc_Toc_TocStateWrap*toc_state;struct Cyc_List_List*tagged_union_cache;void*void_star_type_cache;void*fat_ptr_type_cache;void*rgn_type_cache;void*aqualt_type_cache;struct Cyc_Absyn_Exp*aliasable_qual_exp_cache;struct Cyc_Absyn_Exp*get_exn_thrown_exp_cache;struct _fat_ptr globals;};struct Cyc_Toc_FallthruInfo{struct _fat_ptr*label;struct Cyc_List_List*binders;};struct Cyc_Toc_Env{struct Cyc_Toc_TocContext*ctxt;struct _fat_ptr**break_lab;struct _fat_ptr**continue_lab;struct Cyc_Toc_FallthruInfo*fallthru_info;long toplevel;long*in_lhs;struct _RegionHandle*rgn;};
# 118 "cyclone/library/compiler/toc.h"
void Cyc_Toc_exp_to_c(struct Cyc_Toc_Env*,struct Cyc_Absyn_Exp*);
void Cyc_Toc_stmt_to_c(struct Cyc_Toc_Env*,struct Cyc_Absyn_Stmt*);extern char Cyc_Toc_NewInfo[8U];struct Cyc_Toc_NewInfo_Absyn_AbsynAnnot_struct{char*tag;struct Cyc_Absyn_Exp*f1;void*f2;};
# 29 "cyclone/library/compiler/unify.h"
long Cyc_Unify_unify(void*,void*);
# 127 "bazel-out/k8-fastbuild/bin/cyclone/library/std/libc/stdio.h"
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
# 41 "cyclone/library/compiler/warn.h"
void Cyc_Warn_warn(unsigned,struct _fat_ptr,struct _fat_ptr);struct Cyc_Warn_String_Warn_Warg_struct{int tag;struct _fat_ptr f1;};struct Cyc_Warn_Typ_Warn_Warg_struct{int tag;void*f1;};struct Cyc_Warn_Exp_Warn_Warg_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Warn_Stmt_Warn_Warg_struct{int tag;struct Cyc_Absyn_Stmt*f1;};struct Cyc_Warn_Aggrdecl_Warn_Warg_struct{int tag;struct Cyc_Absyn_Aggrdecl*f1;};
# 79
void Cyc_Warn_err2(unsigned,struct _fat_ptr);
void Cyc_Warn_warn2(unsigned,struct _fat_ptr);
void*Cyc_Warn_vimpos2(struct _fat_ptr);
void*Cyc_Warn_impos2(struct _fat_ptr);
# 84
void*Cyc_Warn_impos_loc2(unsigned,struct _fat_ptr);char Cyc_Toc_NewInfo[8U]="NewInfo";
# 70 "cyclone/library/compiler/toc.cyc"
static void*Cyc_Toc_unimp(struct _fat_ptr str){struct Cyc_Warn_String_Warn_Warg_struct _T0;struct _fat_ptr _T1;{struct Cyc_Warn_String_Warn_Warg_struct _T2;_T2.tag= 0;_T2.f1= str;_T0= _T2;}{struct Cyc_Warn_String_Warn_Warg_struct _T2=_T0;void*_T3[1];_T3[0]= & _T2;_T1= _tag_fat(_T3,sizeof(void*),1);Cyc_Warn_impos2(_T1);}}
static void*Cyc_Toc_toc_impos(struct _fat_ptr ap){struct Cyc_Warn_String_Warn_Warg_struct*_T0;struct _fat_ptr _T1;struct _fat_ptr _T2;unsigned _T3;void**_T4;unsigned _T5;unsigned _T6;unsigned _T7;struct _fat_ptr _T8;unsigned char*_T9;void**_TA;void**_TB;unsigned _TC;int _TD;{struct Cyc_Warn_String_Warn_Warg_struct*_TE=_cycalloc(sizeof(struct Cyc_Warn_String_Warn_Warg_struct));_TE->tag= 0;
({__typeof__(_tag_fat("Toc: ",sizeof(char),6U))_TF=_tag_fat("Toc: ",sizeof(char),6U);_TE->f1= _TF;});_T0= (struct Cyc_Warn_String_Warn_Warg_struct*)_TE;}{void*toc=(void*)_T0;_T2= ap;_T3= 
# 74
_get_fat_size(_T2,sizeof(void*));{unsigned _TE=_T3 + 1U;_T5= _check_times(_TE,sizeof(void*));{void**_TF=_cycalloc(_T5);{unsigned _T10=_TE;unsigned i;i= 0;_TL3: if(i < _T10)goto _TL1;else{goto _TL2;}_TL1: if(i!=0U)goto _TL4;_T6= i;_TF[_T6]= toc;goto _TL5;_TL4: _T7= i;_T8= ap;_T9= _T8.curr;_TA= (void**)_T9;_TB= _check_null(_TA);_TC= i - 1U;_TD= (int)_TC;_TF[_T7]= _TB[_TD];_TL5: i= i + 1;goto _TL3;_TL2:;}_T4= (void**)_TF;}_T1= 
# 73
_tag_fat(_T4,sizeof(void*),_TE);}{struct _fat_ptr args=_T1;
# 76
Cyc_Warn_vimpos2(args);}}}
# 79
static int Cyc_Toc_get_npop(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Absyn_Stmt*s){int(*_T0)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*);void*(*_T1)(struct Cyc_Hashtable_Table*,void*);struct Cyc_Toc_TocContext*_T2;struct Cyc_Hashtable_Table**_T3;struct Cyc_Hashtable_Table**_T4;struct Cyc_Hashtable_Table*_T5;struct Cyc_Absyn_Stmt*_T6;int _T7;_T1= Cyc_Hashtable_lookup;{int(*_T8)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*)=(int(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Stmt*))_T1;_T0= _T8;}_T2= _check_null(ctxt);_T3= _T2->fn_pop_table;_T4= _check_null(_T3);_T5= *_T4;_T6= s;_T7= _T0(_T5,_T6);return _T7;}struct _tuple16{struct _tuple1*f0;struct _tuple1*f1;};
# 82
static int Cyc_Toc_qvar_tag_cmp(struct _tuple16*x,struct _tuple16*y){struct _tuple16*_T0;struct _tuple16 _T1;struct _tuple1*_T2;struct _tuple16*_T3;struct _tuple16 _T4;struct _tuple1*_T5;int _T6;struct _tuple16*_T7;struct _tuple16 _T8;struct _tuple1*_T9;struct _tuple16*_TA;struct _tuple16 _TB;struct _tuple1*_TC;int _TD;_T0= x;_T1= *_T0;_T2= _T1.f0;_T3= y;_T4= *_T3;_T5= _T4.f0;{
int i=Cyc_Absyn_qvar_cmp(_T2,_T5);
if(i==0)goto _TL6;_T6= i;
return _T6;_TL6: _T7= x;_T8= *_T7;_T9= _T8.f1;_TA= y;_TB= *_TA;_TC= _TB.f1;_TD= 
Cyc_Absyn_qvar_cmp(_T9,_TC);return _TD;}}
# 90
static struct Cyc_Toc_TocState*Cyc_Toc_empty_toc_state(struct _RegionHandle*d){struct Cyc_Toc_TocState*_T0;struct _RegionHandle*_T1;struct Cyc_List_List**_T2;struct _RegionHandle*_T3;struct Cyc_List_List**_T4;struct _RegionHandle*_T5;struct Cyc_Dict_Dict*_T6;struct _RegionHandle*_T7;struct Cyc_Dict_Dict(*_T8)(struct _RegionHandle*,int(*)(struct _tuple1*,struct _tuple1*));struct Cyc_Dict_Dict(*_T9)(struct _RegionHandle*,int(*)(void*,void*));struct _RegionHandle*_TA;int(*_TB)(struct _tuple1*,struct _tuple1*);struct Cyc_List_List**_TC;struct _RegionHandle*_TD;struct Cyc_Set_Set**_TE;struct _RegionHandle*_TF;struct Cyc_Set_Set*(*_T10)(struct _RegionHandle*,int(*)(struct _tuple1*,struct _tuple1*));struct Cyc_Set_Set*(*_T11)(struct _RegionHandle*,int(*)(void*,void*));struct _RegionHandle*_T12;int(*_T13)(struct _tuple1*,struct _tuple1*);struct Cyc_Dict_Dict*_T14;struct _RegionHandle*_T15;struct Cyc_Dict_Dict(*_T16)(struct _RegionHandle*,int(*)(struct _tuple1*,struct _tuple1*));struct Cyc_Dict_Dict(*_T17)(struct _RegionHandle*,int(*)(void*,void*));struct _RegionHandle*_T18;int(*_T19)(struct _tuple1*,struct _tuple1*);struct Cyc_Dict_Dict*_T1A;struct _RegionHandle*_T1B;struct Cyc_Dict_Dict(*_T1C)(struct _RegionHandle*,int(*)(struct _tuple16*,struct _tuple16*));struct Cyc_Dict_Dict(*_T1D)(struct _RegionHandle*,int(*)(void*,void*));struct _RegionHandle*_T1E;_T1= d;{struct Cyc_Toc_TocState*_T1F=_region_malloc(_T1,0U,sizeof(struct Cyc_Toc_TocState));_T3= d;{struct Cyc_List_List**_T20=_region_malloc(_T3,0U,sizeof(struct Cyc_List_List*));
*_T20= 0;_T2= (struct Cyc_List_List**)_T20;}_T1F->tuple_types= _T2;_T5= d;{struct Cyc_List_List**_T20=_region_malloc(_T5,0U,sizeof(struct Cyc_List_List*));
*_T20= 0;_T4= (struct Cyc_List_List**)_T20;}_T1F->anon_aggr_types= _T4;_T7= d;{struct Cyc_Dict_Dict*_T20=_region_malloc(_T7,0U,sizeof(struct Cyc_Dict_Dict));_T9= Cyc_Dict_rempty;{
struct Cyc_Dict_Dict(*_T21)(struct _RegionHandle*,int(*)(struct _tuple1*,struct _tuple1*))=(struct Cyc_Dict_Dict(*)(struct _RegionHandle*,int(*)(struct _tuple1*,struct _tuple1*)))_T9;_T8= _T21;}_TA= d;_TB= Cyc_Absyn_qvar_cmp;({__typeof__(_T8(_TA,_TB))_T21=_T8(_TA,_TB);*_T20= _T21;});_T6= (struct Cyc_Dict_Dict*)_T20;}_T1F->aggrs_so_far= _T6;_TD= d;{struct Cyc_List_List**_T20=_region_malloc(_TD,0U,sizeof(struct Cyc_List_List*));
*_T20= 0;_TC= (struct Cyc_List_List**)_T20;}_T1F->abs_struct_types= _TC;_TF= d;{struct Cyc_Set_Set**_T20=_region_malloc(_TF,0U,sizeof(struct Cyc_Set_Set*));_T11= Cyc_Set_rempty;{
struct Cyc_Set_Set*(*_T21)(struct _RegionHandle*,int(*)(struct _tuple1*,struct _tuple1*))=(struct Cyc_Set_Set*(*)(struct _RegionHandle*,int(*)(struct _tuple1*,struct _tuple1*)))_T11;_T10= _T21;}_T12= d;_T13= Cyc_Absyn_qvar_cmp;({__typeof__(_T10(_T12,_T13))_T21=_T10(_T12,_T13);*_T20= _T21;});_TE= (struct Cyc_Set_Set**)_T20;}_T1F->datatypes_so_far= _TE;_T15= d;{struct Cyc_Dict_Dict*_T20=_region_malloc(_T15,0U,sizeof(struct Cyc_Dict_Dict));_T17= Cyc_Dict_rempty;{
struct Cyc_Dict_Dict(*_T21)(struct _RegionHandle*,int(*)(struct _tuple1*,struct _tuple1*))=(struct Cyc_Dict_Dict(*)(struct _RegionHandle*,int(*)(struct _tuple1*,struct _tuple1*)))_T17;_T16= _T21;}_T18= d;_T19= Cyc_Absyn_qvar_cmp;({__typeof__(_T16(_T18,_T19))_T21=_T16(_T18,_T19);*_T20= _T21;});_T14= (struct Cyc_Dict_Dict*)_T20;}_T1F->xdatatypes_so_far= _T14;_T1B= d;{struct Cyc_Dict_Dict*_T20=_region_malloc(_T1B,0U,sizeof(struct Cyc_Dict_Dict));_T1D= Cyc_Dict_rempty;{
struct Cyc_Dict_Dict(*_T21)(struct _RegionHandle*,int(*)(struct _tuple16*,struct _tuple16*))=(struct Cyc_Dict_Dict(*)(struct _RegionHandle*,int(*)(struct _tuple16*,struct _tuple16*)))_T1D;_T1C= _T21;}_T1E= d;({__typeof__(_T1C(_T1E,Cyc_Toc_qvar_tag_cmp))_T21=_T1C(_T1E,Cyc_Toc_qvar_tag_cmp);*_T20= _T21;});_T1A= (struct Cyc_Dict_Dict*)_T20;}_T1F->qvar_tags= _T1A;
({__typeof__(Cyc_Xarray_rcreate_empty(d))_T20=Cyc_Xarray_rcreate_empty(d);_T1F->temp_labels= _T20;});_T0= (struct Cyc_Toc_TocState*)_T1F;}
# 91
return _T0;}struct _tuple17{struct Cyc_Toc_TocState*f0;void*f1;};
# 105
static void*Cyc_Toc_use_toc_state(struct Cyc_Toc_TocContext*ctxt,void*arg,void*(*f)(struct _RegionHandle*,struct _tuple17*)){struct Cyc_Toc_TocContext*_T0;struct Cyc_Toc_TocContext*_T1;struct Cyc_Toc_TocStateWrap*_T2;struct Cyc_Core_DynamicRegion*_T3;struct _fat_ptr _T4;struct Cyc_Toc_TocStateWrap*_T5;struct Cyc_Toc_TocStateWrap _T6;struct Cyc_Toc_TocContext*_T7;struct Cyc_Toc_TocContext*_T8;struct _fat_ptr _T9;unsigned char*_TA;unsigned char*_TB;struct Cyc_Core_DynamicRegion*_TC;struct _tuple17 _TD;struct _RegionHandle*_TE;struct _tuple17*_TF;struct _fat_ptr _T10;unsigned char*_T11;struct Cyc_Core_DynamicRegion*_T12;void*_T13;
# 107
struct Cyc_Toc_TocStateWrap*ts=0;{
struct Cyc_Toc_TocStateWrap*_T14=ts;_T0= ctxt;{struct Cyc_Toc_TocStateWrap*_T15=_T0->toc_state;ts= _T15;_T1= ctxt;_T1->toc_state= _T14;}}_T2= 
_check_null(ts);{struct Cyc_Toc_TocStateWrap _T14=*_T2;struct Cyc_Toc_TocState*_T15;struct Cyc_Core_DynamicRegion*_T16;_T16= _T14.dyn;_T15= _T14.state;{struct Cyc_Core_DynamicRegion*dyn=_T16;struct Cyc_Toc_TocState*s=_T15;_T3= dyn;_T4= 
_tag_fat(_T3,sizeof(struct Cyc_Core_DynamicRegion),1U);{struct _fat_ptr dyn2=Cyc_Core_alias_refptr(_T4);_T5= ts;{struct Cyc_Toc_TocStateWrap _T17;
_T17.dyn= dyn;_T17.state= s;_T6= _T17;}*_T5= _T6;_T7= ctxt;{
struct Cyc_Toc_TocStateWrap*_T17=_T7->toc_state;struct Cyc_Toc_TocStateWrap*_T18=ts;_T8= ctxt;_T8->toc_state= _T18;ts= _T17;}{
void*res;_T9= _check_fat_at_base(dyn2);_TA= _untag_fat_ptr_check_bound(_T9,sizeof(struct Cyc_Core_DynamicRegion),1U);_TB= _check_null(_TA);_TC= (struct Cyc_Core_DynamicRegion*)_TB;{struct _RegionHandle*h=& _TC->h;{struct _tuple17 _T17;
# 116
_T17.f0= s;_T17.f1= arg;_TD= _T17;}{struct _tuple17 env=_TD;_TE= h;_TF= & env;
res= f(_TE,_TF);}}_T10= _check_fat_at_base(dyn2);_T11= _untag_fat_ptr(_T10,sizeof(struct Cyc_Core_DynamicRegion),1U);_T12= (struct Cyc_Core_DynamicRegion*)_T11;
# 120
Cyc_Core_free_rckey(_T12);_T13= res;
return _T13;}}}}}struct _tuple18{struct _tuple1*f0;void*(*f1)(struct _tuple1*);};struct _tuple19{struct Cyc_Toc_TocState*f0;struct _tuple18*f1;};struct _tuple20{struct Cyc_Absyn_Aggrdecl*f0;void*f1;};
# 124
static void*Cyc_Toc_aggrdecl_type_body(struct _RegionHandle*d,struct _tuple19*env){struct _tuple19*_T0;struct _tuple18*_T1;struct _tuple20**(*_T2)(struct Cyc_Dict_Dict,struct _tuple1*);void**(*_T3)(struct Cyc_Dict_Dict,void*);struct Cyc_Toc_TocState*_T4;struct Cyc_Dict_Dict*_T5;struct Cyc_Dict_Dict _T6;struct _tuple1*_T7;void*_T8;struct _tuple20**_T9;struct _tuple20*_TA;struct _tuple20 _TB;_T0= env;{
# 127
struct _tuple19 _TC=*_T0;void*(*_TD)(struct _tuple1*);struct _tuple1*_TE;struct Cyc_Toc_TocState*_TF;_TF= _TC.f0;_T1= _TC.f1;{struct _tuple18 _T10=*_T1;_TE= _T10.f0;_TD= _T10.f1;}{struct Cyc_Toc_TocState*s=_TF;struct _tuple1*q=_TE;void*(*type_maker)(struct _tuple1*)=_TD;_T3= Cyc_Dict_lookup_opt;{
struct _tuple20**(*_T10)(struct Cyc_Dict_Dict,struct _tuple1*)=(struct _tuple20**(*)(struct Cyc_Dict_Dict,struct _tuple1*))_T3;_T2= _T10;}_T4= s;_T5= _T4->aggrs_so_far;_T6= *_T5;_T7= q;{struct _tuple20**v=_T2(_T6,_T7);
if(v!=0)goto _TL8;_T8= type_maker(q);goto _TL9;_TL8: _T9= v;_TA= *_T9;_TB= *_TA;_T8= _TB.f1;_TL9: return _T8;}}}}
# 132
static void*Cyc_Toc_aggrdecl_type(struct Cyc_Toc_TocContext*ctxt,struct _tuple1*q,void*(*type_maker)(struct _tuple1*)){struct _tuple18 _T0;void*(*_T1)(struct Cyc_Toc_TocContext*,struct _tuple18*,void*(*)(struct _RegionHandle*,struct _tuple19*));struct Cyc_Toc_TocContext*_T2;struct _tuple18*_T3;void*_T4;{struct _tuple18 _T5;
_T5.f0= q;_T5.f1= type_maker;_T0= _T5;}{struct _tuple18 env=_T0;{
void*(*_T5)(struct Cyc_Toc_TocContext*,struct _tuple18*,void*(*)(struct _RegionHandle*,struct _tuple19*))=(void*(*)(struct Cyc_Toc_TocContext*,struct _tuple18*,void*(*)(struct _RegionHandle*,struct _tuple19*)))Cyc_Toc_use_toc_state;_T1= _T5;}_T2= ctxt;_T3= & env;_T4= _T1(_T2,_T3,Cyc_Toc_aggrdecl_type_body);return _T4;}}struct _tuple21{struct _fat_ptr*f0;struct _fat_ptr*f1;void*f2;};
# 139
static void*Cyc_Toc_tagged_union_field_struct(struct Cyc_Toc_TocContext*ctxt,void*t,struct _fat_ptr*f){int*_T0;int _T1;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T2;void*_T3;int*_T4;int _T5;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T6;void*_T7;struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_T8;union Cyc_Absyn_AggrInfo _T9;struct _union_AggrInfo_KnownAggr _TA;unsigned _TB;void*_TC;union Cyc_Absyn_AggrInfo _TD;struct _union_AggrInfo_KnownAggr _TE;struct Cyc_Absyn_Aggrdecl**_TF;struct Cyc_Absyn_Aggrdecl*_T10;void*_T11;union Cyc_Absyn_AggrInfo _T12;struct _union_AggrInfo_UnknownAggr _T13;struct _tuple3 _T14;struct _tuple1*_T15;struct Cyc_Toc_TocContext*_T16;struct Cyc_List_List*_T17;void*_T18;int _T19;int _T1A;void*_T1B;struct Cyc_List_List*_T1C;struct _fat_ptr _T1D;struct Cyc_String_pa_PrintArg_struct _T1E;struct _fat_ptr*_T1F;struct Cyc_String_pa_PrintArg_struct _T20;struct _fat_ptr*_T21;struct _fat_ptr _T22;struct _fat_ptr _T23;struct _fat_ptr*_T24;struct Cyc_Toc_TocContext*_T25;struct Cyc_List_List*_T26;struct _tuple21*_T27;struct Cyc_Toc_TocContext*_T28;void*_T29;struct Cyc_Warn_String_Warn_Warg_struct _T2A;int(*_T2B)(struct _fat_ptr ap);struct _fat_ptr _T2C;
void*_T2D=Cyc_Absyn_compress(t);struct _tuple1*_T2E;struct Cyc_Absyn_Aggrdecl*_T2F;_T0= (int*)_T2D;_T1= *_T0;if(_T1!=0)goto _TLA;_T2= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T2D;_T3= _T2->f1;_T4= (int*)_T3;_T5= *_T4;if(_T5!=24)goto _TLC;_T6= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T2D;_T7= _T6->f1;_T8= (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*)_T7;_T9= _T8->f1;_TA= _T9.KnownAggr;_TB= _TA.tag;if(_TB!=2)goto _TLE;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T30=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T2D;_TC= _T30->f1;{struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_T31=(struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*)_TC;_TD= _T31->f1;_TE= _TD.KnownAggr;_TF= _TE.val;{struct Cyc_Absyn_Aggrdecl*_T32=*_TF;_T2F= _T32;}}}{struct Cyc_Absyn_Aggrdecl*ad=_T2F;_T10= ad;_T2E= _T10->name;goto _LL4;}_TLE:{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T30=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T2D;_T11= _T30->f1;{struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_T31=(struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*)_T11;_T12= _T31->f1;_T13= _T12.UnknownAggr;_T14= _T13.val;_T2E= _T14.f1;}}_LL4:{struct _tuple1*name=_T2E;struct _fat_ptr*_T30;_T15= name;{struct _tuple1 _T31=*_T15;_T30= _T31.f1;}{struct _fat_ptr*n=_T30;_T16= 
# 145
_check_null(ctxt);{struct Cyc_List_List*c=_T16->tagged_union_cache;_TL13: if(c!=0)goto _TL11;else{goto _TL12;}
_TL11: _T17= c;_T18= _T17->hd;{struct _tuple21*_T31=(struct _tuple21*)_T18;void*_T32;struct _fat_ptr*_T33;struct _fat_ptr*_T34;{struct _tuple21 _T35=*_T31;_T34= _T35.f0;_T33= _T35.f1;_T32= _T35.f2;}{struct _fat_ptr*n2=_T34;struct _fat_ptr*f2=_T33;void*t=_T32;_T19= 
Cyc_strptrcmp(n2,n);if(_T19!=0)goto _TL14;_T1A= Cyc_strptrcmp(f,f2);if(_T1A!=0)goto _TL14;_T1B= t;
return _T1B;_TL14:;}}_T1C= c;
# 145
c= _T1C->tl;goto _TL13;_TL12:;}{struct Cyc_String_pa_PrintArg_struct _T31;_T31.tag= 0;_T1F= n;
# 150
_T31.f1= *_T1F;_T1E= _T31;}{struct Cyc_String_pa_PrintArg_struct _T31=_T1E;{struct Cyc_String_pa_PrintArg_struct _T32;_T32.tag= 0;_T21= f;_T32.f1= *_T21;_T20= _T32;}{struct Cyc_String_pa_PrintArg_struct _T32=_T20;void*_T33[2];_T33[0]= & _T31;_T33[1]= & _T32;_T22= _tag_fat("_union_%s_%s",sizeof(char),13U);_T23= _tag_fat(_T33,sizeof(void*),2);_T1D= Cyc_aprintf(_T22,_T23);}}{struct _fat_ptr str=_T1D;{struct _fat_ptr*_T31=_cycalloc(sizeof(struct _fat_ptr));
*_T31= str;_T24= (struct _fat_ptr*)_T31;}t= Cyc_Absyn_strct(_T24);_T25= ctxt;{struct Cyc_List_List*_T31=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple21*_T32=_cycalloc(sizeof(struct _tuple21));
_T32->f0= n;_T32->f1= f;_T32->f2= t;_T27= (struct _tuple21*)_T32;}_T31->hd= _T27;_T28= ctxt;_T31->tl= _T28->tagged_union_cache;_T26= (struct Cyc_List_List*)_T31;}_T25->tagged_union_cache= _T26;_T29= t;
return _T29;}}}_TLC: goto _LL5;_TLA: _LL5:{struct Cyc_Warn_String_Warn_Warg_struct _T30;_T30.tag= 0;
# 155
({__typeof__(_tag_fat("tagged_union_field_struct",sizeof(char),26U))_T31=_tag_fat("tagged_union_field_struct",sizeof(char),26U);_T30.f1= _T31;});_T2A= _T30;}{struct Cyc_Warn_String_Warn_Warg_struct _T30=_T2A;void*_T31[1];_T31[0]= & _T30;{int(*_T32)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T2B= _T32;}_T2C= _tag_fat(_T31,sizeof(void*),1);_T2B(_T2C);};}static char _TmpG0[5U]="curr";
# 167
static struct _fat_ptr Cyc_Toc_curr_string={(unsigned char*)_TmpG0,(unsigned char*)_TmpG0,(unsigned char*)_TmpG0 + 5U};static struct _fat_ptr*Cyc_Toc_curr_sp=(struct _fat_ptr*)& Cyc_Toc_curr_string;static char _TmpG1[4U]="tag";
static struct _fat_ptr Cyc_Toc_tag_string={(unsigned char*)_TmpG1,(unsigned char*)_TmpG1,(unsigned char*)_TmpG1 + 4U};static struct _fat_ptr*Cyc_Toc_tag_sp=(struct _fat_ptr*)& Cyc_Toc_tag_string;static char _TmpG2[4U]="val";
static struct _fat_ptr Cyc_Toc_val_string={(unsigned char*)_TmpG2,(unsigned char*)_TmpG2,(unsigned char*)_TmpG2 + 4U};static struct _fat_ptr*Cyc_Toc_val_sp=(struct _fat_ptr*)& Cyc_Toc_val_string;static char _TmpG3[14U]="_handler_cons";
static struct _fat_ptr Cyc_Toc__handler_cons_string={(unsigned char*)_TmpG3,(unsigned char*)_TmpG3,(unsigned char*)_TmpG3 + 14U};static struct _fat_ptr*Cyc_Toc__handler_cons_sp=(struct _fat_ptr*)& Cyc_Toc__handler_cons_string;static char _TmpG4[8U]="handler";
static struct _fat_ptr Cyc_Toc_handler_string={(unsigned char*)_TmpG4,(unsigned char*)_TmpG4,(unsigned char*)_TmpG4 + 8U};static struct _fat_ptr*Cyc_Toc_handler_sp=(struct _fat_ptr*)& Cyc_Toc_handler_string;static char _TmpG5[14U]="_RegionHandle";
static struct _fat_ptr Cyc_Toc__RegionHandle_string={(unsigned char*)_TmpG5,(unsigned char*)_TmpG5,(unsigned char*)_TmpG5 + 14U};static struct _fat_ptr*Cyc_Toc__RegionHandle_sp=(struct _fat_ptr*)& Cyc_Toc__RegionHandle_string;static char _TmpG6[7U]="_throw";
# 186 "cyclone/library/compiler/toc.cyc"
static struct _fat_ptr Cyc_Toc__throw_str={(unsigned char*)_TmpG6,(unsigned char*)_TmpG6,(unsigned char*)_TmpG6 + 7U};static struct _tuple1 Cyc_Toc__throw_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__throw_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__throw_bnd={0,& Cyc_Toc__throw_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__throw_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__throw_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__throw_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__throw_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__throw_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__throw_ev;static char _TmpG7[7U]="setjmp";
static struct _fat_ptr Cyc_Toc_setjmp_str={(unsigned char*)_TmpG7,(unsigned char*)_TmpG7,(unsigned char*)_TmpG7 + 7U};static struct _tuple1 Cyc_Toc_setjmp_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc_setjmp_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc_setjmp_bnd={0,& Cyc_Toc_setjmp_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc_setjmp_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc_setjmp_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc_setjmp_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc_setjmp_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc_setjmp_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc_setjmp_ev;static char _TmpG8[14U]="_push_handler";
static struct _fat_ptr Cyc_Toc__push_handler_str={(unsigned char*)_TmpG8,(unsigned char*)_TmpG8,(unsigned char*)_TmpG8 + 14U};static struct _tuple1 Cyc_Toc__push_handler_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__push_handler_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__push_handler_bnd={0,& Cyc_Toc__push_handler_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__push_handler_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__push_handler_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__push_handler_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__push_handler_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__push_handler_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__push_handler_ev;static char _TmpG9[13U]="_pop_handler";
static struct _fat_ptr Cyc_Toc__pop_handler_str={(unsigned char*)_TmpG9,(unsigned char*)_TmpG9,(unsigned char*)_TmpG9 + 13U};static struct _tuple1 Cyc_Toc__pop_handler_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__pop_handler_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__pop_handler_bnd={0,& Cyc_Toc__pop_handler_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__pop_handler_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__pop_handler_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__pop_handler_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__pop_handler_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__pop_handler_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__pop_handler_ev;static char _TmpGA[12U]="_exn_thrown";
static struct _fat_ptr Cyc_Toc__exn_thrown_str={(unsigned char*)_TmpGA,(unsigned char*)_TmpGA,(unsigned char*)_TmpGA + 12U};static struct _tuple1 Cyc_Toc__exn_thrown_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__exn_thrown_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__exn_thrown_bnd={0,& Cyc_Toc__exn_thrown_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__exn_thrown_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__exn_thrown_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__exn_thrown_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__exn_thrown_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__exn_thrown_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__exn_thrown_ev;static char _TmpGB[14U]="_npop_handler";
static struct _fat_ptr Cyc_Toc__npop_handler_str={(unsigned char*)_TmpGB,(unsigned char*)_TmpGB,(unsigned char*)_TmpGB + 14U};static struct _tuple1 Cyc_Toc__npop_handler_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__npop_handler_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__npop_handler_bnd={0,& Cyc_Toc__npop_handler_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__npop_handler_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__npop_handler_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__npop_handler_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__npop_handler_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__npop_handler_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__npop_handler_ev;static char _TmpGC[12U]="_check_null";
static struct _fat_ptr Cyc_Toc__check_null_str={(unsigned char*)_TmpGC,(unsigned char*)_TmpGC,(unsigned char*)_TmpGC + 12U};static struct _tuple1 Cyc_Toc__check_null_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__check_null_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__check_null_bnd={0,& Cyc_Toc__check_null_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__check_null_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__check_null_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__check_null_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__check_null_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__check_null_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__check_null_ev;static char _TmpGD[28U]="_check_known_subscript_null";
static struct _fat_ptr Cyc_Toc__check_known_subscript_null_str={(unsigned char*)_TmpGD,(unsigned char*)_TmpGD,(unsigned char*)_TmpGD + 28U};static struct _tuple1 Cyc_Toc__check_known_subscript_null_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__check_known_subscript_null_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__check_known_subscript_null_bnd={0,& Cyc_Toc__check_known_subscript_null_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__check_known_subscript_null_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__check_known_subscript_null_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__check_known_subscript_null_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__check_known_subscript_null_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__check_known_subscript_null_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__check_known_subscript_null_ev;static char _TmpGE[31U]="_check_known_subscript_notnull";
static struct _fat_ptr Cyc_Toc__check_known_subscript_notnull_str={(unsigned char*)_TmpGE,(unsigned char*)_TmpGE,(unsigned char*)_TmpGE + 31U};static struct _tuple1 Cyc_Toc__check_known_subscript_notnull_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__check_known_subscript_notnull_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__check_known_subscript_notnull_bnd={0,& Cyc_Toc__check_known_subscript_notnull_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__check_known_subscript_notnull_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__check_known_subscript_notnull_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__check_known_subscript_notnull_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__check_known_subscript_notnull_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__check_known_subscript_notnull_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__check_known_subscript_notnull_ev;static char _TmpGF[21U]="_check_fat_subscript";
static struct _fat_ptr Cyc_Toc__check_fat_subscript_str={(unsigned char*)_TmpGF,(unsigned char*)_TmpGF,(unsigned char*)_TmpGF + 21U};static struct _tuple1 Cyc_Toc__check_fat_subscript_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__check_fat_subscript_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__check_fat_subscript_bnd={0,& Cyc_Toc__check_fat_subscript_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__check_fat_subscript_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__check_fat_subscript_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__check_fat_subscript_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__check_fat_subscript_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__check_fat_subscript_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__check_fat_subscript_ev;static char _TmpG10[9U]="_fat_ptr";
static struct _fat_ptr Cyc_Toc__fat_ptr_str={(unsigned char*)_TmpG10,(unsigned char*)_TmpG10,(unsigned char*)_TmpG10 + 9U};static struct _tuple1 Cyc_Toc__fat_ptr_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__fat_ptr_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__fat_ptr_bnd={0,& Cyc_Toc__fat_ptr_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__fat_ptr_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__fat_ptr_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__fat_ptr_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__fat_ptr_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__fat_ptr_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__fat_ptr_ev;static char _TmpG11[9U]="_tag_fat";
static struct _fat_ptr Cyc_Toc__tag_fat_str={(unsigned char*)_TmpG11,(unsigned char*)_TmpG11,(unsigned char*)_TmpG11 + 9U};static struct _tuple1 Cyc_Toc__tag_fat_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__tag_fat_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__tag_fat_bnd={0,& Cyc_Toc__tag_fat_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__tag_fat_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__tag_fat_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__tag_fat_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__tag_fat_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__tag_fat_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__tag_fat_ev;static char _TmpG12[27U]="_untag_fat_ptr_check_bound";
static struct _fat_ptr Cyc_Toc__untag_fat_ptr_check_bound_str={(unsigned char*)_TmpG12,(unsigned char*)_TmpG12,(unsigned char*)_TmpG12 + 27U};static struct _tuple1 Cyc_Toc__untag_fat_ptr_check_bound_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__untag_fat_ptr_check_bound_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__untag_fat_ptr_check_bound_bnd={0,& Cyc_Toc__untag_fat_ptr_check_bound_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__untag_fat_ptr_check_bound_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__untag_fat_ptr_check_bound_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__untag_fat_ptr_check_bound_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__untag_fat_ptr_check_bound_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__untag_fat_ptr_check_bound_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__untag_fat_ptr_check_bound_ev;static char _TmpG13[15U]="_untag_fat_ptr";
static struct _fat_ptr Cyc_Toc__untag_fat_ptr_str={(unsigned char*)_TmpG13,(unsigned char*)_TmpG13,(unsigned char*)_TmpG13 + 15U};static struct _tuple1 Cyc_Toc__untag_fat_ptr_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__untag_fat_ptr_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__untag_fat_ptr_bnd={0,& Cyc_Toc__untag_fat_ptr_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__untag_fat_ptr_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__untag_fat_ptr_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__untag_fat_ptr_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__untag_fat_ptr_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__untag_fat_ptr_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__untag_fat_ptr_ev;static char _TmpG14[19U]="_check_fat_at_base";
static struct _fat_ptr Cyc_Toc__check_fat_at_base_str={(unsigned char*)_TmpG14,(unsigned char*)_TmpG14,(unsigned char*)_TmpG14 + 19U};static struct _tuple1 Cyc_Toc__check_fat_at_base_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__check_fat_at_base_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__check_fat_at_base_bnd={0,& Cyc_Toc__check_fat_at_base_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__check_fat_at_base_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__check_fat_at_base_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__check_fat_at_base_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__check_fat_at_base_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__check_fat_at_base_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__check_fat_at_base_ev;static char _TmpG15[14U]="_get_fat_size";
static struct _fat_ptr Cyc_Toc__get_fat_size_str={(unsigned char*)_TmpG15,(unsigned char*)_TmpG15,(unsigned char*)_TmpG15 + 14U};static struct _tuple1 Cyc_Toc__get_fat_size_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__get_fat_size_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__get_fat_size_bnd={0,& Cyc_Toc__get_fat_size_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__get_fat_size_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__get_fat_size_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__get_fat_size_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__get_fat_size_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__get_fat_size_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__get_fat_size_ev;static char _TmpG16[23U]="_fat_ptr_decrease_size";
static struct _fat_ptr Cyc_Toc__fat_ptr_decrease_size_str={(unsigned char*)_TmpG16,(unsigned char*)_TmpG16,(unsigned char*)_TmpG16 + 23U};static struct _tuple1 Cyc_Toc__fat_ptr_decrease_size_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__fat_ptr_decrease_size_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__fat_ptr_decrease_size_bnd={0,& Cyc_Toc__fat_ptr_decrease_size_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__fat_ptr_decrease_size_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__fat_ptr_decrease_size_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__fat_ptr_decrease_size_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__fat_ptr_decrease_size_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__fat_ptr_decrease_size_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__fat_ptr_decrease_size_ev;static char _TmpG17[24U]="_get_zero_arr_size_char";
static struct _fat_ptr Cyc_Toc__get_zero_arr_size_char_str={(unsigned char*)_TmpG17,(unsigned char*)_TmpG17,(unsigned char*)_TmpG17 + 24U};static struct _tuple1 Cyc_Toc__get_zero_arr_size_char_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__get_zero_arr_size_char_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__get_zero_arr_size_char_bnd={0,& Cyc_Toc__get_zero_arr_size_char_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__get_zero_arr_size_char_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__get_zero_arr_size_char_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__get_zero_arr_size_char_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__get_zero_arr_size_char_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__get_zero_arr_size_char_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__get_zero_arr_size_char_ev;static char _TmpG18[25U]="_get_zero_arr_size_other";
static struct _fat_ptr Cyc_Toc__get_zero_arr_size_other_str={(unsigned char*)_TmpG18,(unsigned char*)_TmpG18,(unsigned char*)_TmpG18 + 25U};static struct _tuple1 Cyc_Toc__get_zero_arr_size_other_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__get_zero_arr_size_other_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__get_zero_arr_size_other_bnd={0,& Cyc_Toc__get_zero_arr_size_other_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__get_zero_arr_size_other_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__get_zero_arr_size_other_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__get_zero_arr_size_other_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__get_zero_arr_size_other_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__get_zero_arr_size_other_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__get_zero_arr_size_other_ev;static char _TmpG19[14U]="_fat_ptr_plus";
static struct _fat_ptr Cyc_Toc__fat_ptr_plus_str={(unsigned char*)_TmpG19,(unsigned char*)_TmpG19,(unsigned char*)_TmpG19 + 14U};static struct _tuple1 Cyc_Toc__fat_ptr_plus_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__fat_ptr_plus_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__fat_ptr_plus_bnd={0,& Cyc_Toc__fat_ptr_plus_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__fat_ptr_plus_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__fat_ptr_plus_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__fat_ptr_plus_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__fat_ptr_plus_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__fat_ptr_plus_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__fat_ptr_plus_ev;static char _TmpG1A[20U]="_zero_arr_plus_char";
static struct _fat_ptr Cyc_Toc__zero_arr_plus_char_str={(unsigned char*)_TmpG1A,(unsigned char*)_TmpG1A,(unsigned char*)_TmpG1A + 20U};static struct _tuple1 Cyc_Toc__zero_arr_plus_char_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__zero_arr_plus_char_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__zero_arr_plus_char_bnd={0,& Cyc_Toc__zero_arr_plus_char_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__zero_arr_plus_char_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__zero_arr_plus_char_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__zero_arr_plus_char_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__zero_arr_plus_char_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__zero_arr_plus_char_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__zero_arr_plus_char_ev;static char _TmpG1B[21U]="_zero_arr_plus_other";
static struct _fat_ptr Cyc_Toc__zero_arr_plus_other_str={(unsigned char*)_TmpG1B,(unsigned char*)_TmpG1B,(unsigned char*)_TmpG1B + 21U};static struct _tuple1 Cyc_Toc__zero_arr_plus_other_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__zero_arr_plus_other_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__zero_arr_plus_other_bnd={0,& Cyc_Toc__zero_arr_plus_other_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__zero_arr_plus_other_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__zero_arr_plus_other_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__zero_arr_plus_other_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__zero_arr_plus_other_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__zero_arr_plus_other_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__zero_arr_plus_other_ev;static char _TmpG1C[22U]="_fat_ptr_inplace_plus";
static struct _fat_ptr Cyc_Toc__fat_ptr_inplace_plus_str={(unsigned char*)_TmpG1C,(unsigned char*)_TmpG1C,(unsigned char*)_TmpG1C + 22U};static struct _tuple1 Cyc_Toc__fat_ptr_inplace_plus_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__fat_ptr_inplace_plus_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__fat_ptr_inplace_plus_bnd={0,& Cyc_Toc__fat_ptr_inplace_plus_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__fat_ptr_inplace_plus_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__fat_ptr_inplace_plus_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__fat_ptr_inplace_plus_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__fat_ptr_inplace_plus_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__fat_ptr_inplace_plus_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__fat_ptr_inplace_plus_ev;static char _TmpG1D[28U]="_zero_arr_inplace_plus_char";
static struct _fat_ptr Cyc_Toc__zero_arr_inplace_plus_char_str={(unsigned char*)_TmpG1D,(unsigned char*)_TmpG1D,(unsigned char*)_TmpG1D + 28U};static struct _tuple1 Cyc_Toc__zero_arr_inplace_plus_char_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__zero_arr_inplace_plus_char_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__zero_arr_inplace_plus_char_bnd={0,& Cyc_Toc__zero_arr_inplace_plus_char_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__zero_arr_inplace_plus_char_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__zero_arr_inplace_plus_char_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__zero_arr_inplace_plus_char_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__zero_arr_inplace_plus_char_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__zero_arr_inplace_plus_char_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__zero_arr_inplace_plus_char_ev;static char _TmpG1E[29U]="_zero_arr_inplace_plus_other";
static struct _fat_ptr Cyc_Toc__zero_arr_inplace_plus_other_str={(unsigned char*)_TmpG1E,(unsigned char*)_TmpG1E,(unsigned char*)_TmpG1E + 29U};static struct _tuple1 Cyc_Toc__zero_arr_inplace_plus_other_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__zero_arr_inplace_plus_other_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__zero_arr_inplace_plus_other_bnd={0,& Cyc_Toc__zero_arr_inplace_plus_other_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__zero_arr_inplace_plus_other_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__zero_arr_inplace_plus_other_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__zero_arr_inplace_plus_other_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__zero_arr_inplace_plus_other_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__zero_arr_inplace_plus_other_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__zero_arr_inplace_plus_other_ev;static char _TmpG1F[27U]="_fat_ptr_inplace_plus_post";
static struct _fat_ptr Cyc_Toc__fat_ptr_inplace_plus_post_str={(unsigned char*)_TmpG1F,(unsigned char*)_TmpG1F,(unsigned char*)_TmpG1F + 27U};static struct _tuple1 Cyc_Toc__fat_ptr_inplace_plus_post_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__fat_ptr_inplace_plus_post_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__fat_ptr_inplace_plus_post_bnd={0,& Cyc_Toc__fat_ptr_inplace_plus_post_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__fat_ptr_inplace_plus_post_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__fat_ptr_inplace_plus_post_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__fat_ptr_inplace_plus_post_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__fat_ptr_inplace_plus_post_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__fat_ptr_inplace_plus_post_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__fat_ptr_inplace_plus_post_ev;static char _TmpG20[33U]="_zero_arr_inplace_plus_post_char";
static struct _fat_ptr Cyc_Toc__zero_arr_inplace_plus_post_char_str={(unsigned char*)_TmpG20,(unsigned char*)_TmpG20,(unsigned char*)_TmpG20 + 33U};static struct _tuple1 Cyc_Toc__zero_arr_inplace_plus_post_char_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__zero_arr_inplace_plus_post_char_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__zero_arr_inplace_plus_post_char_bnd={0,& Cyc_Toc__zero_arr_inplace_plus_post_char_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__zero_arr_inplace_plus_post_char_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__zero_arr_inplace_plus_post_char_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__zero_arr_inplace_plus_post_char_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__zero_arr_inplace_plus_post_char_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__zero_arr_inplace_plus_post_char_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__zero_arr_inplace_plus_post_char_ev;static char _TmpG21[34U]="_zero_arr_inplace_plus_post_other";
static struct _fat_ptr Cyc_Toc__zero_arr_inplace_plus_post_other_str={(unsigned char*)_TmpG21,(unsigned char*)_TmpG21,(unsigned char*)_TmpG21 + 34U};static struct _tuple1 Cyc_Toc__zero_arr_inplace_plus_post_other_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__zero_arr_inplace_plus_post_other_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__zero_arr_inplace_plus_post_other_bnd={0,& Cyc_Toc__zero_arr_inplace_plus_post_other_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__zero_arr_inplace_plus_post_other_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__zero_arr_inplace_plus_post_other_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__zero_arr_inplace_plus_post_other_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__zero_arr_inplace_plus_post_other_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__zero_arr_inplace_plus_post_other_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__zero_arr_inplace_plus_post_other_ev;static char _TmpG22[10U]="_cycalloc";
static struct _fat_ptr Cyc_Toc__cycalloc_str={(unsigned char*)_TmpG22,(unsigned char*)_TmpG22,(unsigned char*)_TmpG22 + 10U};static struct _tuple1 Cyc_Toc__cycalloc_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__cycalloc_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__cycalloc_bnd={0,& Cyc_Toc__cycalloc_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__cycalloc_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__cycalloc_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__cycalloc_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__cycalloc_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__cycalloc_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__cycalloc_ev;static char _TmpG23[11U]="_cyccalloc";
static struct _fat_ptr Cyc_Toc__cyccalloc_str={(unsigned char*)_TmpG23,(unsigned char*)_TmpG23,(unsigned char*)_TmpG23 + 11U};static struct _tuple1 Cyc_Toc__cyccalloc_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__cyccalloc_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__cyccalloc_bnd={0,& Cyc_Toc__cyccalloc_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__cyccalloc_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__cyccalloc_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__cyccalloc_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__cyccalloc_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__cyccalloc_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__cyccalloc_ev;static char _TmpG24[17U]="_cycalloc_atomic";
static struct _fat_ptr Cyc_Toc__cycalloc_atomic_str={(unsigned char*)_TmpG24,(unsigned char*)_TmpG24,(unsigned char*)_TmpG24 + 17U};static struct _tuple1 Cyc_Toc__cycalloc_atomic_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__cycalloc_atomic_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__cycalloc_atomic_bnd={0,& Cyc_Toc__cycalloc_atomic_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__cycalloc_atomic_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__cycalloc_atomic_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__cycalloc_atomic_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__cycalloc_atomic_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__cycalloc_atomic_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__cycalloc_atomic_ev;static char _TmpG25[18U]="_cyccalloc_atomic";
static struct _fat_ptr Cyc_Toc__cyccalloc_atomic_str={(unsigned char*)_TmpG25,(unsigned char*)_TmpG25,(unsigned char*)_TmpG25 + 18U};static struct _tuple1 Cyc_Toc__cyccalloc_atomic_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__cyccalloc_atomic_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__cyccalloc_atomic_bnd={0,& Cyc_Toc__cyccalloc_atomic_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__cyccalloc_atomic_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__cyccalloc_atomic_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__cyccalloc_atomic_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__cyccalloc_atomic_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__cyccalloc_atomic_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__cyccalloc_atomic_ev;static char _TmpG26[15U]="_region_malloc";
static struct _fat_ptr Cyc_Toc__region_malloc_str={(unsigned char*)_TmpG26,(unsigned char*)_TmpG26,(unsigned char*)_TmpG26 + 15U};static struct _tuple1 Cyc_Toc__region_malloc_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__region_malloc_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__region_malloc_bnd={0,& Cyc_Toc__region_malloc_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__region_malloc_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__region_malloc_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__region_malloc_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__region_malloc_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__region_malloc_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__region_malloc_ev;static char _TmpG27[15U]="_region_calloc";
static struct _fat_ptr Cyc_Toc__region_calloc_str={(unsigned char*)_TmpG27,(unsigned char*)_TmpG27,(unsigned char*)_TmpG27 + 15U};static struct _tuple1 Cyc_Toc__region_calloc_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__region_calloc_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__region_calloc_bnd={0,& Cyc_Toc__region_calloc_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__region_calloc_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__region_calloc_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__region_calloc_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__region_calloc_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__region_calloc_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__region_calloc_ev;static char _TmpG28[16U]="_region_vmalloc";
static struct _fat_ptr Cyc_Toc__region_vmalloc_str={(unsigned char*)_TmpG28,(unsigned char*)_TmpG28,(unsigned char*)_TmpG28 + 16U};static struct _tuple1 Cyc_Toc__region_vmalloc_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__region_vmalloc_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__region_vmalloc_bnd={0,& Cyc_Toc__region_vmalloc_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__region_vmalloc_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__region_vmalloc_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__region_vmalloc_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__region_vmalloc_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__region_vmalloc_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__region_vmalloc_ev;static char _TmpG29[14U]="_aqual_malloc";
static struct _fat_ptr Cyc_Toc__aqual_malloc_str={(unsigned char*)_TmpG29,(unsigned char*)_TmpG29,(unsigned char*)_TmpG29 + 14U};static struct _tuple1 Cyc_Toc__aqual_malloc_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__aqual_malloc_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__aqual_malloc_bnd={0,& Cyc_Toc__aqual_malloc_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__aqual_malloc_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__aqual_malloc_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__aqual_malloc_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__aqual_malloc_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__aqual_malloc_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__aqual_malloc_ev;static char _TmpG2A[14U]="_aqual_calloc";
static struct _fat_ptr Cyc_Toc__aqual_calloc_str={(unsigned char*)_TmpG2A,(unsigned char*)_TmpG2A,(unsigned char*)_TmpG2A + 14U};static struct _tuple1 Cyc_Toc__aqual_calloc_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__aqual_calloc_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__aqual_calloc_bnd={0,& Cyc_Toc__aqual_calloc_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__aqual_calloc_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__aqual_calloc_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__aqual_calloc_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__aqual_calloc_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__aqual_calloc_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__aqual_calloc_ev;static char _TmpG2B[20U]="_fast_region_malloc";
static struct _fat_ptr Cyc_Toc__fast_region_malloc_str={(unsigned char*)_TmpG2B,(unsigned char*)_TmpG2B,(unsigned char*)_TmpG2B + 20U};static struct _tuple1 Cyc_Toc__fast_region_malloc_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__fast_region_malloc_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__fast_region_malloc_bnd={0,& Cyc_Toc__fast_region_malloc_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__fast_region_malloc_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__fast_region_malloc_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__fast_region_malloc_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__fast_region_malloc_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__fast_region_malloc_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__fast_region_malloc_ev;static char _TmpG2C[13U]="_check_times";
static struct _fat_ptr Cyc_Toc__check_times_str={(unsigned char*)_TmpG2C,(unsigned char*)_TmpG2C,(unsigned char*)_TmpG2C + 13U};static struct _tuple1 Cyc_Toc__check_times_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__check_times_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__check_times_bnd={0,& Cyc_Toc__check_times_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__check_times_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__check_times_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__check_times_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__check_times_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__check_times_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__check_times_ev;static char _TmpG2D[12U]="_new_region";
static struct _fat_ptr Cyc_Toc__new_region_str={(unsigned char*)_TmpG2D,(unsigned char*)_TmpG2D,(unsigned char*)_TmpG2D + 12U};static struct _tuple1 Cyc_Toc__new_region_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__new_region_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__new_region_bnd={0,& Cyc_Toc__new_region_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__new_region_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__new_region_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__new_region_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__new_region_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__new_region_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__new_region_ev;static char _TmpG2E[13U]="_push_region";
static struct _fat_ptr Cyc_Toc__push_region_str={(unsigned char*)_TmpG2E,(unsigned char*)_TmpG2E,(unsigned char*)_TmpG2E + 13U};static struct _tuple1 Cyc_Toc__push_region_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__push_region_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__push_region_bnd={0,& Cyc_Toc__push_region_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__push_region_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__push_region_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__push_region_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__push_region_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__push_region_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__push_region_ev;static char _TmpG2F[12U]="_pop_region";
static struct _fat_ptr Cyc_Toc__pop_region_str={(unsigned char*)_TmpG2F,(unsigned char*)_TmpG2F,(unsigned char*)_TmpG2F + 12U};static struct _tuple1 Cyc_Toc__pop_region_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__pop_region_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__pop_region_bnd={0,& Cyc_Toc__pop_region_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__pop_region_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__pop_region_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__pop_region_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__pop_region_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__pop_region_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__pop_region_ev;static char _TmpG30[19U]="_throw_arraybounds";
static struct _fat_ptr Cyc_Toc__throw_arraybounds_str={(unsigned char*)_TmpG30,(unsigned char*)_TmpG30,(unsigned char*)_TmpG30 + 19U};static struct _tuple1 Cyc_Toc__throw_arraybounds_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__throw_arraybounds_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__throw_arraybounds_bnd={0,& Cyc_Toc__throw_arraybounds_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__throw_arraybounds_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__throw_arraybounds_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__throw_arraybounds_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__throw_arraybounds_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__throw_arraybounds_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__throw_arraybounds_ev;static char _TmpG31[13U]="_throw_match";
static struct _fat_ptr Cyc_Toc__throw_match_str={(unsigned char*)_TmpG31,(unsigned char*)_TmpG31,(unsigned char*)_TmpG31 + 13U};static struct _tuple1 Cyc_Toc__throw_match_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__throw_match_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__throw_match_bnd={0,& Cyc_Toc__throw_match_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__throw_match_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__throw_match_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__throw_match_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__throw_match_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__throw_match_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__throw_match_ev;static char _TmpG32[9U]="_rethrow";
static struct _fat_ptr Cyc_Toc__rethrow_str={(unsigned char*)_TmpG32,(unsigned char*)_TmpG32,(unsigned char*)_TmpG32 + 9U};static struct _tuple1 Cyc_Toc__rethrow_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__rethrow_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__rethrow_bnd={0,& Cyc_Toc__rethrow_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__rethrow_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__rethrow_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__rethrow_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__rethrow_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__rethrow_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__rethrow_ev;static char _TmpG33[14U]="_throw_assert";
static struct _fat_ptr Cyc_Toc__throw_assert_str={(unsigned char*)_TmpG33,(unsigned char*)_TmpG33,(unsigned char*)_TmpG33 + 14U};static struct _tuple1 Cyc_Toc__throw_assert_pr={.f0={.Abs_n={1,0}},.f1=(struct _fat_ptr*)& Cyc_Toc__throw_assert_str};static struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct Cyc_Toc__throw_assert_bnd={0,& Cyc_Toc__throw_assert_pr};static struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct Cyc_Toc__throw_assert_re={1,(void*)((struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)& Cyc_Toc__throw_assert_bnd)};static struct Cyc_Absyn_Exp Cyc_Toc__throw_assert_ev={0,(void*)((struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)& Cyc_Toc__throw_assert_re),0U,(void*)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)& Cyc_Absyn_EmptyAnnot_val)};static struct Cyc_Absyn_Exp*Cyc_Toc__throw_assert_e=(struct Cyc_Absyn_Exp*)& Cyc_Toc__throw_assert_ev;
# 236
static struct Cyc_Absyn_Tqual Cyc_Toc_mt_tq={0,0,0,0,0U};
# 238
static struct Cyc_Absyn_Exp*Cyc_Toc_deep_copy(struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;_T0= Cyc_Tcutil_deep_copy_exp(1,e);return _T0;}
# 240
void*Cyc_Toc_void_star_type(struct Cyc_Toc_TocContext*ctxt){struct Cyc_Toc_TocContext*_T0;void*_T1;struct Cyc_Toc_TocContext*_T2;void*_T3;void*_T4;void*_T5;struct Cyc_Absyn_Tqual _T6;void*_T7;void*_T8;struct Cyc_Toc_TocContext*_T9;void*_TA;_T0= 
_check_null(ctxt);_T1= _T0->void_star_type_cache;if(_T1!=0)goto _TL16;_T2= ctxt;_T3= Cyc_Absyn_void_type;_T4= Cyc_Absyn_heap_rgn_type;_T5= Cyc_Absyn_al_qual_type;_T6= 
Cyc_Absyn_empty_tqual(0U);_T7= Cyc_Absyn_false_type;_T8= Cyc_Absyn_false_type;({__typeof__(Cyc_Absyn_star_type(_T3,_T4,_T5,_T6,_T7,_T8))_TB=Cyc_Absyn_star_type(_T3,_T4,_T5,_T6,_T7,_T8);_T2->void_star_type_cache= _TB;});goto _TL17;_TL16: _TL17: _T9= ctxt;_TA= _T9->void_star_type_cache;
return _TA;}
# 245
static void*Cyc_Toc_fat_ptr_type(struct Cyc_Toc_TocContext*ctxt){struct Cyc_Toc_TocContext*_T0;void*_T1;struct Cyc_Toc_TocContext*_T2;struct _tuple1*_T3;union Cyc_Absyn_AggrInfo _T4;struct Cyc_Toc_TocContext*_T5;void*_T6;_T0= 
_check_null(ctxt);_T1= _T0->fat_ptr_type_cache;if(_T1!=0)goto _TL18;_T2= ctxt;_T3= & Cyc_Toc__fat_ptr_pr;_T4= 
Cyc_Absyn_UnknownAggr(0U,_T3,0);({__typeof__(Cyc_Absyn_aggr_type(_T4,0))_T7=Cyc_Absyn_aggr_type(_T4,0);_T2->fat_ptr_type_cache= _T7;});goto _TL19;_TL18: _TL19: _T5= ctxt;_T6= _T5->fat_ptr_type_cache;
return _T6;}
# 250
static void*Cyc_Toc_rgn_type(struct Cyc_Toc_TocContext*ctxt){struct Cyc_Toc_TocContext*_T0;void*_T1;struct Cyc_Toc_TocContext*_T2;void*_T3;struct Cyc_Absyn_Tqual _T4;struct Cyc_Toc_TocContext*_T5;void*_T6;_T0= 
_check_null(ctxt);_T1= _T0->rgn_type_cache;if(_T1!=0)goto _TL1A;_T2= ctxt;_T3= 
Cyc_Absyn_strct(Cyc_Toc__RegionHandle_sp);_T4= Cyc_Toc_mt_tq;({__typeof__(Cyc_Absyn_cstar_type(_T3,_T4))_T7=Cyc_Absyn_cstar_type(_T3,_T4);_T2->rgn_type_cache= _T7;});goto _TL1B;_TL1A: _TL1B: _T5= ctxt;_T6= _T5->rgn_type_cache;
return _T6;}
# 255
static void*Cyc_Toc_aqualt_type(struct Cyc_Toc_TocContext*ctxt){void*_T0;_T0= Cyc_Absyn_uint_type;return _T0;}
static struct Cyc_Absyn_Exp*Cyc_Toc_aliasable_qual_exp(struct Cyc_Toc_TocContext*ctxt){struct Cyc_Toc_TocContext*_T0;struct Cyc_Absyn_Exp*_T1;struct Cyc_Toc_TocContext*_T2;struct Cyc_Absyn_Exp*_T3;void*_T4;struct Cyc_Toc_TocContext*_T5;struct Cyc_Absyn_Exp*_T6;_T0= 
_check_null(ctxt);_T1= _T0->aliasable_qual_exp_cache;if(_T1!=0)goto _TL1C;_T2= ctxt;_T3= 
Cyc_Absyn_uint_exp(0U,0U);_T4= Cyc_Absyn_uint_type;({__typeof__(Cyc_Absyn_set_type(_T3,_T4))_T7=Cyc_Absyn_set_type(_T3,_T4);_T2->aliasable_qual_exp_cache= _T7;});goto _TL1D;_TL1C: _TL1D: _T5= ctxt;_T6= _T5->aliasable_qual_exp_cache;
return _T6;}
# 261
static struct Cyc_Absyn_Stmt*Cyc_Toc_skip_stmt_dl (void){struct Cyc_Absyn_Stmt*_T0;_T0= Cyc_Absyn_skip_stmt(0U);return _T0;}struct _tuple22{struct Cyc_List_List*f0;struct Cyc_Absyn_Exp*f1;};
# 263
static struct _tuple22*Cyc_Toc_make_field(struct _fat_ptr*name,struct Cyc_Absyn_Exp*e){struct _tuple22*_T0;struct Cyc_List_List*_T1;struct Cyc_Absyn_FieldName_Absyn_Designator_struct*_T2;{struct _tuple22*_T3=_cycalloc(sizeof(struct _tuple22));{struct Cyc_List_List*_T4=_cycalloc(sizeof(struct Cyc_List_List));{struct Cyc_Absyn_FieldName_Absyn_Designator_struct*_T5=_cycalloc(sizeof(struct Cyc_Absyn_FieldName_Absyn_Designator_struct));_T5->tag= 1;
_T5->f1= name;_T2= (struct Cyc_Absyn_FieldName_Absyn_Designator_struct*)_T5;}_T4->hd= (void*)_T2;_T4->tl= 0;_T1= (struct Cyc_List_List*)_T4;}_T3->f0= _T1;_T3->f1= e;_T0= (struct _tuple22*)_T3;}return _T0;}
# 267
static struct Cyc_Absyn_Exp*Cyc_Toc_fncall_exp_dl(struct Cyc_Absyn_Exp*f,struct _fat_ptr args){struct Cyc_Absyn_Exp*_T0;struct Cyc_List_List*_T1;struct Cyc_Absyn_Exp*_T2;_T0= f;_T1= 
Cyc_List_from_array(args);_T2= Cyc_Absyn_fncall_exp(_T0,_T1,0U);return _T2;}
# 270
static struct Cyc_Absyn_Exp*Cyc_Toc_cast_it(void*t,struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;int*_T1;int _T2;struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T3;enum Cyc_Absyn_Coercion _T4;struct Cyc_Absyn_Exp*_T5;struct Cyc_Absyn_Exp*_T6;void*_T7;struct Cyc_Absyn_Exp*_T8;_T0= e;{
void*_T9=_T0->r;struct Cyc_Absyn_Exp*_TA;_T1= (int*)_T9;_T2= *_T1;if(_T2!=14)goto _TL1E;_T3= (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T9;_T4= _T3->f4;if(_T4!=Cyc_Absyn_No_coercion)goto _TL20;{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_TB=(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T9;_TA= _TB->f2;}{struct Cyc_Absyn_Exp*e=_TA;_T5= 
# 273
Cyc_Toc_cast_it(t,e);return _T5;}_TL20: goto _LL3;_TL1E: _LL3: _T6= 
# 275
Cyc_Absyn_cast_exp(t,e,0,1U,0U);_T7= t;_T8= Cyc_Absyn_set_type(_T6,_T7);return _T8;;}}
# 279
struct Cyc_Absyn_Exp*Cyc_Toc_get_exn_thrown_expression(struct Cyc_Toc_TocContext*ctxt){struct Cyc_Toc_TocContext*_T0;struct Cyc_Absyn_Exp*_T1;unsigned _T2;struct Cyc_Toc_TocContext*_T3;struct Cyc_Absyn_Exp*_T4;struct Cyc_Absyn_Exp*_T5;struct _tuple1*_T6;struct _tuple1*_T7;struct Cyc_List_List*_T8;struct _fat_ptr*_T9;struct _fat_ptr _TA;struct _tuple1*_TB;struct _fat_ptr*_TC;struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*_TD;struct Cyc_Absyn_Exp*_TE;struct Cyc_Absyn_Exp*_TF;struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T10;struct Cyc_Absyn_Exp*_T11;struct Cyc_Absyn_Exp*_T12;struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*_T13;struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*_T14;struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*_T15;struct Cyc_Absyn_Exp*_T16;struct Cyc_Absyn_Tqual _T17;void*_T18;void*_T19;struct Cyc_Absyn_Tqual _T1A;struct Cyc_Toc_TocContext*_T1B;struct Cyc_Absyn_Exp*_T1C;struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*_T1D;struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*_T1E;struct Cyc_Toc_TocContext*_T1F;struct Cyc_Absyn_Exp*_T20;struct Cyc_Absyn_Exp*_T21;struct Cyc_Toc_TocContext*_T22;struct Cyc_Absyn_Exp*_T23;struct Cyc_Absyn_Exp*_T24;_T0= 
# 281
_check_null(ctxt);_T1= _T0->get_exn_thrown_exp_cache;_T2= (unsigned)_T1;if(!_T2)goto _TL22;_T3= ctxt;_T4= _T3->get_exn_thrown_exp_cache;_T5= 
Cyc_Toc_deep_copy(_T4);return _T5;_TL22: {
struct _tuple1*qv;qv= _cycalloc(sizeof(struct _tuple1));_T6= qv;_T6->f0.Abs_n.tag= 1U;_T7= qv;{struct _fat_ptr*_T25[1];{struct _fat_ptr*_T26=_cycalloc(sizeof(struct _fat_ptr));({__typeof__(_tag_fat("Core",sizeof(char),5U))_T27=_tag_fat("Core",sizeof(char),5U);*_T26= _T27;});_T9= (struct _fat_ptr*)_T26;}_T25[0]= _T9;_TA= _tag_fat(_T25,sizeof(struct _fat_ptr*),1);_T8= Cyc_List_list(_TA);}_T7->f0.Abs_n.val= _T8;_TB= qv;{struct _fat_ptr*_T25=_cycalloc(sizeof(struct _fat_ptr));({__typeof__(_tag_fat("get_exn_thrown",sizeof(char),15U))_T26=_tag_fat("get_exn_thrown",sizeof(char),15U);*_T25= _T26;});_TC= (struct _fat_ptr*)_T25;}_TB->f1= _TC;{struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*_T25=_cycalloc(sizeof(struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct));_T25->tag= 0;
_T25->f1= qv;_TD= (struct Cyc_Absyn_Unresolved_b_Absyn_Binding_struct*)_T25;}{void*bnd=(void*)_TD;
struct Cyc_Absyn_Exp*fnname;fnname= _cycalloc(sizeof(struct Cyc_Absyn_Exp));_TE= fnname;_TE->topt= 0;_TF= fnname;{struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T25=_cycalloc(sizeof(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct));_T25->tag= 1;_T25->f1= bnd;_T10= (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T25;}_TF->r= (void*)_T10;_T11= fnname;_T11->loc= 0U;_T12= fnname;_T13= & Cyc_Absyn_EmptyAnnot_val;_T14= (struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)_T13;_T12->annot= (void*)_T14;{struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*_T25=_cycalloc(sizeof(struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct));_T25->tag= 10;
_T25->f1= fnname;_T25->f2= 0;_T25->f3= 0;_T25->f4= 0;_T15= (struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*)_T25;}{void*fncall_re=(void*)_T15;_T16= fnname;_T17= Cyc_Toc_mt_tq;_T18= 
Cyc_Toc_void_star_type(ctxt);_T19= Cyc_Absyn_function_type(0,0,_T17,_T18,0,0,0,0,0,0,0,0,0,0);_T1A= Cyc_Toc_mt_tq;({__typeof__(Cyc_Absyn_cstar_type(_T19,_T1A))_T25=Cyc_Absyn_cstar_type(_T19,_T1A);_T16->topt= _T25;});_T1B= ctxt;{struct Cyc_Absyn_Exp*_T25=_cycalloc(sizeof(struct Cyc_Absyn_Exp));
# 290
_T25->topt= 0;_T25->r= fncall_re;_T25->loc= 0U;_T1D= & Cyc_Absyn_EmptyAnnot_val;_T1E= (struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)_T1D;_T25->annot= (void*)_T1E;_T1C= (struct Cyc_Absyn_Exp*)_T25;}_T1B->get_exn_thrown_exp_cache= _T1C;_T1F= ctxt;_T20= _T1F->get_exn_thrown_exp_cache;_T21= 
_check_null(_T20);({__typeof__(Cyc_Toc_void_star_type(ctxt))_T25=Cyc_Toc_void_star_type(ctxt);_T21->topt= _T25;});_T22= ctxt;_T23= _T22->get_exn_thrown_exp_cache;_T24= 
_check_null(_T23);return _T24;}}}}
# 297
static void*Cyc_Toc_cast_it_r(void*t,struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T0;void*_T1;{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T2=_cycalloc(sizeof(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct));_T2->tag= 14;_T2->f1= t;_T2->f2= e;_T2->f3= 0;_T2->f4= 1U;_T0= (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T2;}_T1= (void*)_T0;return _T1;}
static void*Cyc_Toc_deref_exp_r(struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*_T0;void*_T1;{struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*_T2=_cycalloc(sizeof(struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct));_T2->tag= 20;_T2->f1= e;_T0= (struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*)_T2;}_T1= (void*)_T0;return _T1;}
static void*Cyc_Toc_subscript_exp_r(struct Cyc_Absyn_Exp*e1,struct Cyc_Absyn_Exp*e2){struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*_T0;void*_T1;{struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*_T2=_cycalloc(sizeof(struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct));_T2->tag= 23;_T2->f1= e1;_T2->f2= e2;_T0= (struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*)_T2;}_T1= (void*)_T0;return _T1;}
static void*Cyc_Toc_stmt_exp_r(struct Cyc_Absyn_Stmt*s){struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct*_T0;void*_T1;{struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct*_T2=_cycalloc(sizeof(struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct));_T2->tag= 36;_T2->f1= s;_T0= (struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct*)_T2;}_T1= (void*)_T0;return _T1;}
static void*Cyc_Toc_sizeoftype_exp_r(void*t){struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct*_T0;void*_T1;{struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct*_T2=_cycalloc(sizeof(struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct));_T2->tag= 17;_T2->f1= t;_T0= (struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct*)_T2;}_T1= (void*)_T0;return _T1;}
static void*Cyc_Toc_fncall_exp_r(struct Cyc_Absyn_Exp*e,struct _fat_ptr es){struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*_T0;void*_T1;{struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*_T2=_cycalloc(sizeof(struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct));_T2->tag= 10;
_T2->f1= e;({__typeof__(Cyc_List_from_array(es))_T3=Cyc_List_from_array(es);_T2->f2= _T3;});_T2->f3= 0;_T2->f4= 1;_T0= (struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*)_T2;}_T1= (void*)_T0;return _T1;}
# 305
static void*Cyc_Toc_seq_stmt_r(struct Cyc_Absyn_Stmt*s1,struct Cyc_Absyn_Stmt*s2){struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*_T0;void*_T1;{struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*_T2=_cycalloc(sizeof(struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct));_T2->tag= 2;_T2->f1= s1;_T2->f2= s2;_T0= (struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*)_T2;}_T1= (void*)_T0;return _T1;}
static void*Cyc_Toc_conditional_exp_r(struct Cyc_Absyn_Exp*e1,struct Cyc_Absyn_Exp*e2,struct Cyc_Absyn_Exp*e3){struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct*_T0;void*_T1;{struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct*_T2=_cycalloc(sizeof(struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct));_T2->tag= 6;
_T2->f1= e1;_T2->f2= e2;_T2->f3= e3;_T0= (struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct*)_T2;}_T1= (void*)_T0;return _T1;}
# 309
static void*Cyc_Toc_aggrmember_exp_r(struct Cyc_Absyn_Exp*e,struct _fat_ptr*n){struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*_T0;void*_T1;{struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*_T2=_cycalloc(sizeof(struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct));_T2->tag= 21;
_T2->f1= e;_T2->f2= n;_T2->f3= 0;_T2->f4= 0;_T0= (struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*)_T2;}_T1= (void*)_T0;return _T1;}
# 312
static void*Cyc_Toc_unresolvedmem_exp_r(struct Cyc_Core_Opt*tdopt,struct Cyc_List_List*ds){struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct*_T0;void*_T1;{struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct*_T2=_cycalloc(sizeof(struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct));_T2->tag= 35;
# 314
_T2->f1= tdopt;_T2->f2= ds;_T0= (struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct*)_T2;}_T1= (void*)_T0;return _T1;}
# 316
static void*Cyc_Toc_goto_stmt_r(struct _fat_ptr*v){struct Cyc_Absyn_Goto_s_Absyn_Raw_stmt_struct*_T0;void*_T1;{struct Cyc_Absyn_Goto_s_Absyn_Raw_stmt_struct*_T2=_cycalloc(sizeof(struct Cyc_Absyn_Goto_s_Absyn_Raw_stmt_struct));_T2->tag= 8;_T2->f1= v;_T0= (struct Cyc_Absyn_Goto_s_Absyn_Raw_stmt_struct*)_T2;}_T1= (void*)_T0;return _T1;}
# 318
static void*Cyc_Toc_zero_exp (void){struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T0;void*_T1;{struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T2=_cycalloc(sizeof(struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct));_T2->tag= 0;_T2->f1.Int_c.tag= 5U;_T2->f1.Int_c.val.f0= 0U;_T2->f1.Int_c.val.f1= 0;_T0= (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_T2;}_T1= (void*)_T0;return _T1;}
# 322
static struct Cyc_Absyn_Exp*Cyc_Toc_member_exp(struct Cyc_Absyn_Exp*e,struct _fat_ptr*f,unsigned loc){struct Cyc_Absyn_Exp*_T0;int*_T1;int _T2;struct Cyc_Absyn_Exp*_T3;struct Cyc_Absyn_Exp*_T4;_T0= e;{
void*_T5=_T0->r;struct Cyc_Absyn_Exp*_T6;_T1= (int*)_T5;_T2= *_T1;if(_T2!=20)goto _TL24;{struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*_T7=(struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*)_T5;_T6= _T7->f1;}{struct Cyc_Absyn_Exp*e1=_T6;_T3= 
# 325
Cyc_Absyn_aggrarrow_exp(e1,f,loc);return _T3;}_TL24: _T4= 
# 327
Cyc_Absyn_aggrmember_exp(e,f,loc);return _T4;;}}
# 332
static struct Cyc_Absyn_Exp*Cyc_Toc_get_curr(struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;void*_T1;struct Cyc_Absyn_Exp*_T2;_T0= 
Cyc_Toc_member_exp(e,Cyc_Toc_curr_sp,0U);_T1= Cyc_Absyn_cstar_type(Cyc_Absyn_uchar_type,Cyc_Toc_mt_tq);_T2= Cyc_Absyn_set_type(_T0,_T1);return _T2;}
# 336
static long Cyc_Toc_isCharStar(struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;void*_T1;void*_T2;int*_T3;int _T4;struct Cyc_Absyn_PtrInfo _T5;void*_T6;long _T7;_T0= e;_T1= _T0->topt;_T2= 
_check_null(_T1);{void*_T8=Cyc_Absyn_compress(_T2);struct Cyc_Absyn_PtrInfo _T9;_T3= (int*)_T8;_T4= *_T3;if(_T4!=4)goto _TL26;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_TA=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T8;_T9= _TA->f1;}{struct Cyc_Absyn_PtrInfo pi=_T9;_T5= pi;_T6= _T5.elt_type;_T7= 
# 339
Cyc_Tcutil_is_char_type(_T6);return _T7;}_TL26:
# 341
 return 0;;}}
# 350
static long Cyc_Toc_is_zero(struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;int*_T1;unsigned _T2;struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T3;union Cyc_Absyn_Cnst _T4;struct _union_Cnst_Null_c _T5;unsigned _T6;long _T7;struct Cyc_List_List*_T8;void*_T9;struct _tuple22*_TA;struct _tuple22 _TB;struct Cyc_Absyn_Exp*_TC;long _TD;struct Cyc_List_List*_TE;long _TF;_T0= e;{
void*_T10=_T0->r;struct Cyc_List_List*_T11;struct Cyc_Absyn_Exp*_T12;_T1= (int*)_T10;_T2= *_T1;switch(_T2){case 0: _T3= (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_T10;_T4= _T3->f1;_T5= _T4.Null_c;_T6= _T5.tag;if(_T6!=1)goto _TL29;
# 353
return 1;_TL29: goto _LLF;case 14:{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T13=(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T10;_T12= _T13->f2;}{struct Cyc_Absyn_Exp*e1=_T12;_T7= 
# 355
Cyc_Toc_is_zero(e1);return _T7;}case 25:{struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*_T13=(struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*)_T10;_T11= _T13->f1;}{struct Cyc_List_List*dles=_T11;_T11= dles;goto _LL8;}case 29:{struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct*_T13=(struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct*)_T10;_T11= _T13->f3;}_LL8: {struct Cyc_List_List*dles=_T11;_T11= dles;goto _LLA;}case 28:{struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*_T13=(struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*)_T10;_T11= _T13->f3;}_LLA: {struct Cyc_List_List*dles=_T11;_T11= dles;goto _LLC;}case 24:{struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct*_T13=(struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct*)_T10;_T11= _T13->f2;}_LLC: {struct Cyc_List_List*dles=_T11;_T11= dles;goto _LLE;}case 35:{struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct*_T13=(struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct*)_T10;_T11= _T13->f2;}_LLE: {struct Cyc_List_List*dles=_T11;
# 365
_TL2E: if(dles!=0)goto _TL2C;else{goto _TL2D;}
_TL2C: _T8= dles;_T9= _T8->hd;_TA= (struct _tuple22*)_T9;_TB= *_TA;_TC= _TB.f1;_TD= Cyc_Toc_is_zero(_TC);if(_TD)goto _TL2F;else{goto _TL31;}
_TL31: return 0;_TL2F: _TE= dles;
# 365
dles= _TE->tl;goto _TL2E;_TL2D:
# 368
 return 1;}default: _LLF: _TF= 
# 370
Cyc_Tcutil_is_zero(e);return _TF;};}}
# 375
static struct _fat_ptr Cyc_Toc_collapse_qvar(struct _fat_ptr*s,struct _tuple1*x){struct _tuple1*_T0;union Cyc_Absyn_Nmspace _T1;struct _union_Nmspace_Abs_n _T2;unsigned _T3;union Cyc_Absyn_Nmspace _T4;struct _union_Nmspace_Rel_n _T5;union Cyc_Absyn_Nmspace _T6;struct _union_Nmspace_Abs_n _T7;union Cyc_Absyn_Nmspace _T8;struct _union_Nmspace_C_n _T9;struct _fat_ptr _TA;struct Cyc_String_pa_PrintArg_struct _TB;struct _fat_ptr*_TC;struct Cyc_String_pa_PrintArg_struct _TD;struct _fat_ptr*_TE;struct _fat_ptr _TF;struct _fat_ptr _T10;struct _fat_ptr _T11;struct Cyc_String_pa_PrintArg_struct _T12;struct _fat_ptr*_T13;struct Cyc_String_pa_PrintArg_struct _T14;struct _RegionHandle*_T15;struct Cyc_List_List*_T16;struct _fat_ptr _T17;struct Cyc_String_pa_PrintArg_struct _T18;struct _fat_ptr*_T19;struct _fat_ptr _T1A;struct _fat_ptr _T1B;struct _fat_ptr*_T1C;union Cyc_Absyn_Nmspace _T1D;_T0= x;{struct _tuple1 _T1E=*_T0;_T1D= _T1E.f0;_T1C= _T1E.f1;}{union Cyc_Absyn_Nmspace ns=_T1D;struct _fat_ptr*v=_T1C;struct Cyc_List_List*_T1E;_T1= ns;_T2= _T1.Abs_n;_T3= _T2.tag;switch(_T3){case 4: _T1E= 0;goto _LL7;case 2: _T4= ns;_T5= _T4.Rel_n;_T1E= _T5.val;_LL7: {struct Cyc_List_List*vs=_T1E;_T1E= vs;goto _LL9;}case 1: _T6= ns;_T7= _T6.Abs_n;_T1E= _T7.val;_LL9: {struct Cyc_List_List*vs=_T1E;_T1E= vs;goto _LLB;}default: _T8= ns;_T9= _T8.C_n;_T1E= _T9.val;_LLB: {struct Cyc_List_List*vs=_T1E;
# 387
if(vs!=0)goto _TL33;{struct Cyc_String_pa_PrintArg_struct _T1F;_T1F.tag= 0;_TC= s;
_T1F.f1= *_TC;_TB= _T1F;}{struct Cyc_String_pa_PrintArg_struct _T1F=_TB;{struct Cyc_String_pa_PrintArg_struct _T20;_T20.tag= 0;_TE= v;_T20.f1= *_TE;_TD= _T20;}{struct Cyc_String_pa_PrintArg_struct _T20=_TD;void*_T21[2];_T21[0]= & _T1F;_T21[1]= & _T20;_TF= _tag_fat("%s_%s_struct",sizeof(char),13U);_T10= _tag_fat(_T21,sizeof(void*),2);_TA= Cyc_aprintf(_TF,_T10);}}return _TA;_TL33: {struct _RegionHandle _T1F=_new_region(0U,"r");struct _RegionHandle*r=& _T1F;_push_region(r);{struct Cyc_String_pa_PrintArg_struct _T20;_T20.tag= 0;_T13= s;
# 390
_T20.f1= *_T13;_T12= _T20;}{struct Cyc_String_pa_PrintArg_struct _T20=_T12;{struct Cyc_String_pa_PrintArg_struct _T21;_T21.tag= 0;_T15= r;_T16= vs;_T17= _tag_fat("_",sizeof(char),2U);({__typeof__(Cyc_rstr_sepstr(_T15,_T16,_T17))_T22=Cyc_rstr_sepstr(_T15,_T16,_T17);_T21.f1= _T22;});_T14= _T21;}{struct Cyc_String_pa_PrintArg_struct _T21=_T14;{struct Cyc_String_pa_PrintArg_struct _T22;_T22.tag= 0;_T19= v;_T22.f1= *_T19;_T18= _T22;}{struct Cyc_String_pa_PrintArg_struct _T22=_T18;void*_T23[3];_T23[0]= & _T20;_T23[1]= & _T21;_T23[2]= & _T22;_T1A= _tag_fat("%s_%s_%s_struct",sizeof(char),16U);_T1B= _tag_fat(_T23,sizeof(void*),3);_T11= Cyc_aprintf(_T1A,_T1B);}}}{struct _fat_ptr _T20=_T11;_npop_handler(0);return _T20;}_pop_region();}}};}}struct _tuple23{struct Cyc_Toc_TocContext*f0;struct _tuple1*f1;struct _tuple1*f2;};struct _tuple24{struct Cyc_Toc_TocState*f0;struct _tuple23*f1;};
# 400
static struct _tuple1*Cyc_Toc_collapse_qvars_body(struct _RegionHandle*d,struct _tuple24*env){struct _tuple24*_T0;struct Cyc_Toc_TocState*_T1;struct _tuple23*_T2;struct _tuple16*_T3;struct _tuple16*_T4;struct _handler_cons*_T5;int _T6;struct _tuple1*(*_T7)(struct Cyc_Dict_Dict,int(*)(struct _tuple16*,struct _tuple16*),struct _tuple16*);void*(*_T8)(struct Cyc_Dict_Dict,int(*)(void*,void*),void*);struct Cyc_Dict_Dict*_T9;struct Cyc_Dict_Dict _TA;struct _tuple16*_TB;void*_TC;struct Cyc_Dict_Absent_exn_struct*_TD;char*_TE;char*_TF;struct _RegionHandle*_T10;struct _tuple16*_T11;struct _tuple16*_T12;struct _tuple1*_T13;struct _tuple1*_T14;struct _tuple1*_T15;struct _fat_ptr*_T16;struct Cyc_Dict_Dict*_T17;struct Cyc_Dict_Dict(*_T18)(struct Cyc_Dict_Dict,struct _tuple16*,struct _tuple1*);struct Cyc_Dict_Dict(*_T19)(struct Cyc_Dict_Dict,void*,void*);struct Cyc_Dict_Dict*_T1A;struct Cyc_Dict_Dict _T1B;struct _tuple16*_T1C;struct _tuple1*_T1D;struct _tuple1*_T1E;_T0= env;{
# 402
struct _tuple24 _T1F=*_T0;struct _tuple23*_T20;struct Cyc_Dict_Dict*_T21;_T1= _T1F.f0;{struct Cyc_Toc_TocState _T22=*_T1;_T21= _T22.qvar_tags;}_T20= _T1F.f1;{struct Cyc_Dict_Dict*qvs=_T21;struct _tuple23*pair=_T20;_T2= pair;{
struct _tuple23 _T22=*_T2;struct _tuple1*_T23;struct _tuple1*_T24;struct Cyc_Toc_TocContext*_T25;_T25= _T22.f0;_T24= _T22.f1;_T23= _T22.f2;{struct Cyc_Toc_TocContext*ctxt=_T25;struct _tuple1*fieldname=_T24;struct _tuple1*dtname=_T23;
struct _tuple16*lookup_pair;lookup_pair= _cycalloc(sizeof(struct _tuple16));_T3= lookup_pair;_T3->f0= fieldname;_T4= lookup_pair;_T4->f1= dtname;{struct _handler_cons _T26;_T5= & _T26;_push_handler(_T5);{int _T27=0;_T6= setjmp(_T26.handler);if(!_T6)goto _TL35;_T27= 1;goto _TL36;_TL35: _TL36: if(_T27)goto _TL37;else{goto _TL39;}_TL39: _T8= Cyc_Dict_lookup_other;{
# 406
struct _tuple1*(*_T28)(struct Cyc_Dict_Dict,int(*)(struct _tuple16*,struct _tuple16*),struct _tuple16*)=(struct _tuple1*(*)(struct Cyc_Dict_Dict,int(*)(struct _tuple16*,struct _tuple16*),struct _tuple16*))_T8;_T7= _T28;}_T9= qvs;_TA= *_T9;_TB= lookup_pair;{struct _tuple1*_T28=_T7(_TA,Cyc_Toc_qvar_tag_cmp,_TB);_npop_handler(0);return _T28;}_pop_handler();goto _TL38;_TL37: _TC= Cyc_Core_get_exn_thrown();{void*_T28=(void*)_TC;void*_T29;_TD= (struct Cyc_Dict_Absent_exn_struct*)_T28;_TE= _TD->tag;_TF= Cyc_Dict_Absent;if(_TE!=_TF)goto _TL3A;{
# 409
struct _tuple16*new_pair;_T10= d;new_pair= _region_malloc(_T10,0U,sizeof(struct _tuple16));_T11= new_pair;_T11->f0= fieldname;_T12= new_pair;_T12->f1= dtname;{struct _fat_ptr*_T2A;union Cyc_Absyn_Nmspace _T2B;_T13= fieldname;{struct _tuple1 _T2C=*_T13;_T2B= _T2C.f0;_T2A= _T2C.f1;}{union Cyc_Absyn_Nmspace nmspace=_T2B;struct _fat_ptr*fieldvar=_T2A;
# 411
struct _fat_ptr newvar=Cyc_Toc_collapse_qvar(fieldvar,dtname);
struct _tuple1*res;res= _cycalloc(sizeof(struct _tuple1));_T14= res;_T14->f0= nmspace;_T15= res;{struct _fat_ptr*_T2C=_cycalloc(sizeof(struct _fat_ptr));*_T2C= newvar;_T16= (struct _fat_ptr*)_T2C;}_T15->f1= _T16;_T17= qvs;_T19= Cyc_Dict_insert;{
struct Cyc_Dict_Dict(*_T2C)(struct Cyc_Dict_Dict,struct _tuple16*,struct _tuple1*)=(struct Cyc_Dict_Dict(*)(struct Cyc_Dict_Dict,struct _tuple16*,struct _tuple1*))_T19;_T18= _T2C;}_T1A= qvs;_T1B= *_T1A;_T1C= new_pair;_T1D= res;({__typeof__(_T18(_T1B,_T1C,_T1D))_T2C=_T18(_T1B,_T1C,_T1D);*_T17= _T2C;});_T1E= res;
return _T1E;}}}_TL3A: _T29= _T28;{void*exn=_T29;_rethrow(exn);};}_TL38:;}}}}}}}
# 417
static struct _tuple1*Cyc_Toc_collapse_qvars(struct Cyc_Toc_TocContext*ctxt,struct _tuple1*fieldname,struct _tuple1*dtname){struct _tuple23 _T0;struct _tuple1*(*_T1)(struct Cyc_Toc_TocContext*,struct _tuple23*,struct _tuple1*(*)(struct _RegionHandle*,struct _tuple24*));struct Cyc_Toc_TocContext*_T2;struct _tuple23*_T3;struct _tuple1*_T4;{struct _tuple23 _T5;
_T5.f0= ctxt;_T5.f1= fieldname;_T5.f2= dtname;_T0= _T5;}{struct _tuple23 env=_T0;{
struct _tuple1*(*_T5)(struct Cyc_Toc_TocContext*,struct _tuple23*,struct _tuple1*(*)(struct _RegionHandle*,struct _tuple24*))=(struct _tuple1*(*)(struct Cyc_Toc_TocContext*,struct _tuple23*,struct _tuple1*(*)(struct _RegionHandle*,struct _tuple24*)))Cyc_Toc_use_toc_state;_T1= _T5;}_T2= ctxt;_T3= & env;_T4= _T1(_T2,_T3,Cyc_Toc_collapse_qvars_body);return _T4;}}
# 424
static struct Cyc_Absyn_Aggrdecl*Cyc_Toc_make_c_struct_defn(struct _fat_ptr*name,struct Cyc_List_List*fs){struct Cyc_Absyn_Aggrdecl*_T0;struct _tuple1*_T1;struct Cyc_Absyn_AggrdeclImpl*_T2;{struct Cyc_Absyn_Aggrdecl*_T3=_cycalloc(sizeof(struct Cyc_Absyn_Aggrdecl));
_T3->kind= 0U;
_T3->sc= 2U;
_T3->tvs= 0;
_T3->attributes= 0;
_T3->expected_mem_kind= 0;{struct _tuple1*_T4=_cycalloc(sizeof(struct _tuple1));
({__typeof__(Cyc_Absyn_Rel_n(0))_T5=Cyc_Absyn_Rel_n(0);_T4->f0= _T5;});_T4->f1= name;_T1= (struct _tuple1*)_T4;}_T3->name= _T1;{struct Cyc_Absyn_AggrdeclImpl*_T4=_cycalloc(sizeof(struct Cyc_Absyn_AggrdeclImpl));
_T4->exist_vars= 0;_T4->qual_bnd= 0;_T4->fields= fs;_T4->tagged= 0;_T4->effconstr= 0;_T2= (struct Cyc_Absyn_AggrdeclImpl*)_T4;}_T3->impl= _T2;_T0= (struct Cyc_Absyn_Aggrdecl*)_T3;}
# 425
return _T0;}struct _tuple25{struct Cyc_Toc_TocContext*f0;struct Cyc_List_List*f1;};struct _tuple26{struct Cyc_Toc_TocState*f0;struct _tuple25*f1;};struct _tuple27{void*f0;struct Cyc_List_List*f1;};struct _tuple28{struct Cyc_Absyn_Tqual f0;void*f1;};
# 436
static void*Cyc_Toc_add_tuple_type_body(struct _RegionHandle*d,struct _tuple26*env){struct _tuple26*_T0;struct Cyc_Toc_TocState*_T1;struct _tuple25*_T2;struct Cyc_List_List**_T3;struct Cyc_List_List*_T4;void*_T5;struct Cyc_List_List*_T6;void*_T7;struct _tuple28*_T8;struct _tuple28 _T9;void*_TA;struct Cyc_List_List*_TB;void*_TC;long _TD;struct Cyc_List_List*_TE;struct Cyc_List_List*_TF;void*_T10;struct Cyc_List_List*_T11;struct _fat_ptr*_T12;struct _fat_ptr _T13;struct Cyc_Int_pa_PrintArg_struct _T14;struct Cyc_Toc_TocContext*_T15;int _T16;int _T17;struct _fat_ptr _T18;struct _fat_ptr _T19;struct Cyc_List_List*_T1A;void*_T1B;struct _tuple28*_T1C;struct _tuple28 _T1D;struct Cyc_List_List*_T1E;struct Cyc_Absyn_Aggrfield*_T1F;struct Cyc_List_List*_T20;struct _RegionHandle*_T21;struct Cyc_List_List*_T22;struct Cyc_Absyn_Aggrdecl**_T23;union Cyc_Absyn_AggrInfo _T24;struct Cyc_Toc_TocContext*_T25;struct Cyc_List_List*_T26;struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T27;void*_T28;struct Cyc_Toc_TocContext*_T29;struct Cyc_List_List**_T2A;struct Cyc_List_List*_T2B;struct _RegionHandle*_T2C;struct _tuple27*_T2D;struct _RegionHandle*_T2E;struct Cyc_List_List**_T2F;void*_T30;_T0= env;{
# 438
struct _tuple26 _T31=*_T0;struct Cyc_List_List*_T32;struct Cyc_Toc_TocContext*_T33;struct Cyc_List_List**_T34;_T1= _T31.f0;{struct Cyc_Toc_TocState _T35=*_T1;_T34= _T35.tuple_types;}_T2= _T31.f1;{struct _tuple25 _T35=*_T2;_T33= _T35.f0;_T32= _T35.f1;}{struct Cyc_List_List**tuple_types=_T34;struct Cyc_Toc_TocContext*ctxt=_T33;struct Cyc_List_List*tqs0=_T32;_T3= tuple_types;{
# 440
struct Cyc_List_List*tts=*_T3;_TL3F: if(tts!=0)goto _TL3D;else{goto _TL3E;}
_TL3D: _T4= tts;_T5= _T4->hd;{struct _tuple27*_T35=(struct _tuple27*)_T5;struct Cyc_List_List*_T36;void*_T37;{struct _tuple27 _T38=*_T35;_T37= _T38.f0;_T36= _T38.f1;}{void*x=_T37;struct Cyc_List_List*ts=_T36;
struct Cyc_List_List*tqs=tqs0;
_TL43: if(tqs!=0)goto _TL44;else{goto _TL42;}_TL44: if(ts!=0)goto _TL41;else{goto _TL42;}
_TL41: _T6= tqs;_T7= _T6->hd;_T8= (struct _tuple28*)_T7;_T9= *_T8;_TA= _T9.f1;_TB= ts;_TC= _TB->hd;_TD= Cyc_Unify_unify(_TA,_TC);if(_TD)goto _TL45;else{goto _TL47;}
_TL47: goto _TL42;_TL45: _TE= tqs;
# 443
tqs= _TE->tl;_TF= ts;ts= _TF->tl;goto _TL43;_TL42:
# 446
 if(tqs!=0)goto _TL48;if(ts!=0)goto _TL48;_T10= x;
return _T10;_TL48:;}}_T11= tts;
# 440
tts= _T11->tl;goto _TL3F;_TL3E:;}{
# 451
struct _fat_ptr*xname;xname= _cycalloc(sizeof(struct _fat_ptr));_T12= xname;{struct Cyc_Int_pa_PrintArg_struct _T35;_T35.tag= 1;_T15= ctxt;_T16= _T15->tuple_type_counter;_T15->tuple_type_counter= _T16 + 1;_T17= _T16;_T35.f1= (unsigned long)_T17;_T14= _T35;}{struct Cyc_Int_pa_PrintArg_struct _T35=_T14;void*_T36[1];_T36[0]= & _T35;_T18= _tag_fat("_tuple%d",sizeof(char),9U);_T19= _tag_fat(_T36,sizeof(void*),1);_T13= Cyc_aprintf(_T18,_T19);}*_T12= _T13;{
struct Cyc_List_List*fs=0;
struct Cyc_List_List*ts=0;{
int i=1;_TL4D: if(tqs0!=0)goto _TL4B;else{goto _TL4C;}
_TL4B: _T1A= tqs0;_T1B= _T1A->hd;_T1C= (struct _tuple28*)_T1B;_T1D= *_T1C;{void*t=_T1D.f1;{struct Cyc_List_List*_T35=_cycalloc(sizeof(struct Cyc_List_List));{struct Cyc_Absyn_Aggrfield*_T36=_cycalloc(sizeof(struct Cyc_Absyn_Aggrfield));
({__typeof__(Cyc_Absyn_fieldname(i))_T37=Cyc_Absyn_fieldname(i);_T36->name= _T37;});_T36->tq= Cyc_Toc_mt_tq;_T36->type= t;_T36->width= 0;_T36->attributes= 0;_T36->requires_clause= 0;_T1F= (struct Cyc_Absyn_Aggrfield*)_T36;}_T35->hd= _T1F;_T35->tl= fs;_T1E= (struct Cyc_List_List*)_T35;}fs= _T1E;_T21= d;{struct Cyc_List_List*_T35=_region_malloc(_T21,0U,sizeof(struct Cyc_List_List));
_T35->hd= t;_T35->tl= ts;_T20= (struct Cyc_List_List*)_T35;}ts= _T20;}_T22= tqs0;
# 454
tqs0= _T22->tl;i= i + 1;goto _TL4D;_TL4C:;}
# 459
fs= Cyc_List_imp_rev(fs);
ts= Cyc_List_imp_rev(ts);{
struct Cyc_Absyn_Aggrdecl*sd=Cyc_Toc_make_c_struct_defn(xname,fs);{struct Cyc_Absyn_Aggrdecl**_T35=_cycalloc(sizeof(struct Cyc_Absyn_Aggrdecl*));
*_T35= sd;_T23= (struct Cyc_Absyn_Aggrdecl**)_T35;}_T24= Cyc_Absyn_KnownAggr(_T23);{void*ans=Cyc_Absyn_aggr_type(_T24,0);_T25= ctxt;{struct Cyc_List_List*_T35=_cycalloc(sizeof(struct Cyc_List_List));{struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T36=_cycalloc(sizeof(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct));_T36->tag= 5;
_T36->f1= sd;_T27= (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*)_T36;}_T28= (void*)_T27;({__typeof__(Cyc_Absyn_new_decl(_T28,0U))_T36=Cyc_Absyn_new_decl(_T28,0U);_T35->hd= _T36;});_T29= ctxt;_T35->tl= _T29->result_decls;_T26= (struct Cyc_List_List*)_T35;}_T25->result_decls= _T26;_T2A= tuple_types;_T2C= d;{struct Cyc_List_List*_T35=_region_malloc(_T2C,0U,sizeof(struct Cyc_List_List));_T2E= d;{struct _tuple27*_T36=_region_malloc(_T2E,0U,sizeof(struct _tuple27));
_T36->f0= ans;_T36->f1= ts;_T2D= (struct _tuple27*)_T36;}_T35->hd= _T2D;_T2F= tuple_types;_T35->tl= *_T2F;_T2B= (struct Cyc_List_List*)_T35;}*_T2A= _T2B;_T30= ans;
return _T30;}}}}}}}
# 467
static void*Cyc_Toc_add_tuple_type(struct Cyc_Toc_TocContext*ctxt,struct Cyc_List_List*tqs0){void*(*_T0)(struct Cyc_Toc_TocContext*,struct _tuple25*,void*(*)(struct _RegionHandle*,struct _tuple26*));struct Cyc_Toc_TocContext*_T1;struct _tuple25*_T2;void*_T3;{
void*(*_T4)(struct Cyc_Toc_TocContext*,struct _tuple25*,void*(*)(struct _RegionHandle*,struct _tuple26*))=(void*(*)(struct Cyc_Toc_TocContext*,struct _tuple25*,void*(*)(struct _RegionHandle*,struct _tuple26*)))Cyc_Toc_use_toc_state;_T0= _T4;}_T1= ctxt;{struct _tuple25*_T4=_cycalloc(sizeof(struct _tuple25));_T4->f0= ctxt;_T4->f1= tqs0;_T2= (struct _tuple25*)_T4;}_T3= _T0(_T1,_T2,Cyc_Toc_add_tuple_type_body);return _T3;}
# 472
static void*Cyc_Toc_trans_type(struct Cyc_Toc_TocContext*,void*);struct _tuple29{struct Cyc_Toc_TocContext*f0;enum Cyc_Absyn_AggrKind f1;struct Cyc_List_List*f2;};struct _tuple30{struct Cyc_Toc_TocState*f0;struct _tuple29*f1;};struct _tuple31{void*f0;enum Cyc_Absyn_AggrKind f1;struct Cyc_List_List*f2;};
static void*Cyc_Toc_add_anon_aggr_type_body(struct _RegionHandle*d,struct _tuple30*env){struct _tuple30*_T0;struct Cyc_Toc_TocState*_T1;struct _tuple29*_T2;struct Cyc_List_List**_T3;struct Cyc_List_List*_T4;void*_T5;enum Cyc_Absyn_AggrKind _T6;int _T7;enum Cyc_Absyn_AggrKind _T8;int _T9;int(*_TA)(int(*)(struct Cyc_Absyn_Aggrfield*,struct Cyc_Absyn_Aggrfield*),struct Cyc_List_List*,struct Cyc_List_List*);int(*_TB)(int(*)(void*,void*),struct Cyc_List_List*,struct Cyc_List_List*);int(*_TC)(struct Cyc_Absyn_Aggrfield*,struct Cyc_Absyn_Aggrfield*);struct Cyc_List_List*_TD;struct Cyc_List_List*_TE;int _TF;void*_T10;struct Cyc_List_List*_T11;struct _fat_ptr*_T12;struct _fat_ptr _T13;struct Cyc_Int_pa_PrintArg_struct _T14;struct Cyc_Toc_TocContext*_T15;int _T16;int _T17;struct _fat_ptr _T18;struct _fat_ptr _T19;struct Cyc_Absyn_Aggrdecl*_T1A;struct Cyc_Absyn_Aggrdecl**_T1B;union Cyc_Absyn_AggrInfo _T1C;struct Cyc_Toc_TocContext*_T1D;struct Cyc_List_List*_T1E;struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T1F;void*_T20;struct Cyc_Toc_TocContext*_T21;struct Cyc_List_List**_T22;struct Cyc_List_List*_T23;struct _RegionHandle*_T24;struct _tuple31*_T25;struct _RegionHandle*_T26;struct Cyc_List_List**_T27;void*_T28;_T0= env;{
# 476
struct _tuple30 _T29=*_T0;struct Cyc_List_List*_T2A;enum Cyc_Absyn_AggrKind _T2B;struct Cyc_Toc_TocContext*_T2C;struct Cyc_List_List**_T2D;_T1= _T29.f0;{struct Cyc_Toc_TocState _T2E=*_T1;_T2D= _T2E.anon_aggr_types;}_T2= _T29.f1;{struct _tuple29 _T2E=*_T2;_T2C= _T2E.f0;_T2B= _T2E.f1;_T2A= _T2E.f2;}{struct Cyc_List_List**anon_aggr_types=_T2D;struct Cyc_Toc_TocContext*ctxt=_T2C;enum Cyc_Absyn_AggrKind ak=_T2B;struct Cyc_List_List*fs=_T2A;_T3= anon_aggr_types;{
# 478
struct Cyc_List_List*ts=*_T3;_TL51: if(ts!=0)goto _TL4F;else{goto _TL50;}
_TL4F: _T4= ts;_T5= _T4->hd;{struct _tuple31*_T2E=(struct _tuple31*)_T5;struct Cyc_List_List*_T2F;enum Cyc_Absyn_AggrKind _T30;void*_T31;{struct _tuple31 _T32=*_T2E;_T31= _T32.f0;_T30= _T32.f1;_T2F= _T32.f2;}{void*x=_T31;enum Cyc_Absyn_AggrKind ak2=_T30;struct Cyc_List_List*fs2=_T2F;_T6= ak;_T7= (int)_T6;_T8= ak2;_T9= (int)_T8;
if(_T7!=_T9)goto _TL52;_TB= Cyc_List_list_cmp;{int(*_T32)(int(*)(struct Cyc_Absyn_Aggrfield*,struct Cyc_Absyn_Aggrfield*),struct Cyc_List_List*,struct Cyc_List_List*)=(int(*)(int(*)(struct Cyc_Absyn_Aggrfield*,struct Cyc_Absyn_Aggrfield*),struct Cyc_List_List*,struct Cyc_List_List*))_TB;_TA= _T32;}_TC= Cyc_Tcutil_aggrfield_cmp;_TD= fs2;_TE= fs;_TF= _TA(_TC,_TD,_TE);if(_TF)goto _TL52;else{goto _TL54;}
_TL54: _T10= x;return _T10;_TL52:;}}_T11= ts;
# 478
ts= _T11->tl;goto _TL51;_TL50:;}{
# 485
struct _fat_ptr*xname;xname= _cycalloc(sizeof(struct _fat_ptr));_T12= xname;{struct Cyc_Int_pa_PrintArg_struct _T2E;_T2E.tag= 1;_T15= ctxt;_T16= _T15->tuple_type_counter;_T15->tuple_type_counter= _T16 + 1;_T17= _T16;_T2E.f1= (unsigned long)_T17;_T14= _T2E;}{struct Cyc_Int_pa_PrintArg_struct _T2E=_T14;void*_T2F[1];_T2F[0]= & _T2E;_T18= _tag_fat("_tuple%d",sizeof(char),9U);_T19= _tag_fat(_T2F,sizeof(void*),1);_T13= Cyc_aprintf(_T18,_T19);}*_T12= _T13;{
struct Cyc_Absyn_Aggrdecl*sd=Cyc_Toc_make_c_struct_defn(xname,fs);_T1A= sd;
_T1A->kind= ak;{struct Cyc_Absyn_Aggrdecl**_T2E=_cycalloc(sizeof(struct Cyc_Absyn_Aggrdecl*));
*_T2E= sd;_T1B= (struct Cyc_Absyn_Aggrdecl**)_T2E;}_T1C= Cyc_Absyn_KnownAggr(_T1B);{void*ans=Cyc_Absyn_aggr_type(_T1C,0);_T1D= ctxt;{struct Cyc_List_List*_T2E=_cycalloc(sizeof(struct Cyc_List_List));{struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T2F=_cycalloc(sizeof(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct));_T2F->tag= 5;
_T2F->f1= sd;_T1F= (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*)_T2F;}_T20= (void*)_T1F;({__typeof__(Cyc_Absyn_new_decl(_T20,0U))_T2F=Cyc_Absyn_new_decl(_T20,0U);_T2E->hd= _T2F;});_T21= ctxt;_T2E->tl= _T21->result_decls;_T1E= (struct Cyc_List_List*)_T2E;}_T1D->result_decls= _T1E;_T22= anon_aggr_types;_T24= d;{struct Cyc_List_List*_T2E=_region_malloc(_T24,0U,sizeof(struct Cyc_List_List));_T26= d;{struct _tuple31*_T2F=_region_malloc(_T26,0U,sizeof(struct _tuple31));
_T2F->f0= ans;_T2F->f1= ak;_T2F->f2= fs;_T25= (struct _tuple31*)_T2F;}_T2E->hd= _T25;_T27= anon_aggr_types;_T2E->tl= *_T27;_T23= (struct Cyc_List_List*)_T2E;}*_T22= _T23;_T28= ans;
return _T28;}}}}}}
# 493
static void*Cyc_Toc_add_anon_aggr_type(struct Cyc_Toc_TocContext*ctxt,enum Cyc_Absyn_AggrKind ak,struct Cyc_List_List*fs){void*(*_T0)(struct Cyc_Toc_TocContext*,struct _tuple29*,void*(*)(struct _RegionHandle*,struct _tuple30*));struct Cyc_Toc_TocContext*_T1;struct _tuple29*_T2;void*_T3;{
void*(*_T4)(struct Cyc_Toc_TocContext*,struct _tuple29*,void*(*)(struct _RegionHandle*,struct _tuple30*))=(void*(*)(struct Cyc_Toc_TocContext*,struct _tuple29*,void*(*)(struct _RegionHandle*,struct _tuple30*)))Cyc_Toc_use_toc_state;_T0= _T4;}_T1= ctxt;{struct _tuple29*_T4=_cycalloc(sizeof(struct _tuple29));_T4->f0= ctxt;_T4->f1= ak;_T4->f2= fs;_T2= (struct _tuple29*)_T4;}_T3= _T0(_T1,_T2,Cyc_Toc_add_anon_aggr_type_body);return _T3;}struct _tuple32{struct Cyc_Toc_TocContext*f0;struct _tuple1*f1;struct Cyc_List_List*f2;struct Cyc_List_List*f3;struct Cyc_List_List*f4;};struct _tuple33{struct Cyc_Toc_TocState*f0;struct _tuple32*f1;};struct _tuple34{struct _tuple1*f0;struct Cyc_List_List*f1;void*f2;};
# 502
static void*Cyc_Toc_add_struct_type_body(struct _RegionHandle*d,struct _tuple33*env){struct _tuple33*_T0;struct Cyc_Toc_TocState*_T1;struct _tuple32*_T2;struct Cyc_List_List**_T3;struct Cyc_List_List*_T4;void*_T5;int _T6;int _T7;int _T8;struct Cyc_List_List*_T9;struct Cyc_List_List*_TA;struct Cyc_Absyn_Kind*_TB;enum Cyc_Absyn_KindQual _TC;long _TD;void*_TE;void*_TF;long _T10;struct Cyc_List_List*_T11;struct Cyc_List_List*_T12;long _T13;void*_T14;struct Cyc_List_List*_T15;struct _fat_ptr*_T16;struct _fat_ptr _T17;struct Cyc_Int_pa_PrintArg_struct _T18;struct Cyc_Toc_TocContext*_T19;int _T1A;int _T1B;struct _fat_ptr _T1C;struct _fat_ptr _T1D;struct Cyc_List_List**_T1E;struct Cyc_List_List*_T1F;struct _RegionHandle*_T20;struct _tuple34*_T21;struct _RegionHandle*_T22;struct Cyc_List_List**_T23;struct Cyc_List_List*_T24;void*_T25;struct Cyc_Absyn_Aggrfield*_T26;struct Cyc_Absyn_Aggrfield*_T27;struct Cyc_List_List*_T28;struct Cyc_List_List*_T29;struct Cyc_Absyn_Kind*_T2A;struct Cyc_Absyn_Kind*_T2B;struct Cyc_Absyn_Kind*_T2C;long _T2D;long _T2E;struct Cyc_List_List*_T2F;struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct*_T30;struct Cyc_Toc_TocContext*_T31;void*_T32;long _T33;struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T34;struct Cyc_Absyn_Exp*_T35;void*_T36;struct Cyc_List_List*_T37;struct Cyc_Absyn_Aggrfield*_T38;struct Cyc_Absyn_Aggrfield*_T39;struct Cyc_Absyn_Aggrfield*_T3A;struct Cyc_List_List*_T3B;struct Cyc_Toc_TocContext*_T3C;struct Cyc_List_List*_T3D;struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T3E;void*_T3F;struct Cyc_Toc_TocContext*_T40;_T0= env;{
# 508
struct _tuple33 _T41=*_T0;struct Cyc_List_List*_T42;struct Cyc_List_List*_T43;struct Cyc_List_List*_T44;struct _tuple1*_T45;struct Cyc_Toc_TocContext*_T46;struct Cyc_List_List**_T47;_T1= _T41.f0;{struct Cyc_Toc_TocState _T48=*_T1;_T47= _T48.abs_struct_types;}_T2= _T41.f1;{struct _tuple32 _T48=*_T2;_T46= _T48.f0;_T45= _T48.f1;_T44= _T48.f2;_T43= _T48.f3;_T42= _T48.f4;}{struct Cyc_List_List**abs_struct_types=_T47;struct Cyc_Toc_TocContext*ctxt=_T46;struct _tuple1*struct_name=_T45;struct Cyc_List_List*type_vars=_T44;struct Cyc_List_List*type_args=_T43;struct Cyc_List_List*fields=_T42;_T3= abs_struct_types;{
# 512
struct Cyc_List_List*tts=*_T3;_TL58: if(tts!=0)goto _TL56;else{goto _TL57;}
_TL56: _T4= tts;_T5= _T4->hd;{struct _tuple34*_T48=(struct _tuple34*)_T5;void*_T49;struct Cyc_List_List*_T4A;struct _tuple1*_T4B;{struct _tuple34 _T4C=*_T48;_T4B= _T4C.f0;_T4A= _T4C.f1;_T49= _T4C.f2;}{struct _tuple1*x=_T4B;struct Cyc_List_List*ts2=_T4A;void*t=_T49;_T6= 
Cyc_Absyn_qvar_cmp(x,struct_name);if(_T6!=0)goto _TL59;_T7= Cyc_List_length(type_args);_T8= Cyc_List_length(ts2);if(_T7!=_T8)goto _TL59;{
long okay=1;{
struct Cyc_List_List*ts=type_args;_TL5E: if(ts!=0)goto _TL5C;else{goto _TL5D;}
_TL5C: _T9= ts;{void*t=_T9->hd;_TA= 
_check_null(ts2);{void*t2=_TA->hd;{
struct Cyc_Absyn_Kind*_T4C=Cyc_Tcutil_type_kind(t);_TB= (struct Cyc_Absyn_Kind*)_T4C;_TC= _TB->kind;if(_TC!=Cyc_Absyn_EffKind)goto _TL5F;goto _TL5B;_TL5F: _TD= 
# 525
Cyc_Unify_unify(t,t2);if(_TD)goto _TL63;else{goto _TL64;}_TL64: _TE= Cyc_Toc_trans_type(ctxt,t);_TF= Cyc_Toc_trans_type(ctxt,t2);_T10= Cyc_Unify_unify(_TE,_TF);if(_T10)goto _TL63;else{goto _TL61;}
_TL63: goto _TL5B;_TL61:
 okay= 0;goto _LL6;_LL6:;}goto _TL5D;}}_TL5B: _T11= ts;
# 516
ts= _T11->tl;_T12= ts2;ts2= _T12->tl;goto _TL5E;_TL5D:;}_T13= okay;
# 532
if(!_T13)goto _TL65;_T14= t;
return _T14;_TL65:;}goto _TL5A;_TL59: _TL5A:;}}_T15= tts;
# 512
tts= _T15->tl;goto _TL58;_TL57:;}{
# 538
struct _fat_ptr*xname;xname= _cycalloc(sizeof(struct _fat_ptr));_T16= xname;{struct Cyc_Int_pa_PrintArg_struct _T48;_T48.tag= 1;_T19= ctxt;_T1A= _T19->tuple_type_counter;_T19->tuple_type_counter= _T1A + 1;_T1B= _T1A;_T48.f1= (unsigned long)_T1B;_T18= _T48;}{struct Cyc_Int_pa_PrintArg_struct _T48=_T18;void*_T49[1];_T49[0]= & _T48;_T1C= _tag_fat("_tuple%d",sizeof(char),9U);_T1D= _tag_fat(_T49,sizeof(void*),1);_T17= Cyc_aprintf(_T1C,_T1D);}*_T16= _T17;{
void*x=Cyc_Absyn_strct(xname);
struct Cyc_List_List*fs=0;_T1E= abs_struct_types;_T20= d;{struct Cyc_List_List*_T48=_region_malloc(_T20,0U,sizeof(struct Cyc_List_List));_T22= d;{struct _tuple34*_T49=_region_malloc(_T22,0U,sizeof(struct _tuple34));
# 542
_T49->f0= struct_name;_T49->f1= type_args;_T49->f2= x;_T21= (struct _tuple34*)_T49;}_T48->hd= _T21;_T23= abs_struct_types;_T48->tl= *_T23;_T1F= (struct Cyc_List_List*)_T48;}*_T1E= _T1F;{struct _RegionHandle _T48=_new_region(0U,"r");struct _RegionHandle*r=& _T48;_push_region(r);{
# 545
struct Cyc_List_List*inst=Cyc_List_rzip(r,r,type_vars,type_args);
_TL6A: if(fields!=0)goto _TL68;else{goto _TL69;}
_TL68: _T24= fields;_T25= _T24->hd;{struct Cyc_Absyn_Aggrfield*f=(struct Cyc_Absyn_Aggrfield*)_T25;_T26= f;{
void*t=_T26->type;_T27= f;{
struct Cyc_List_List*atts=_T27->attributes;_T28= fields;_T29= _T28->tl;
# 554
if(_T29!=0)goto _TL6B;_T2A= & Cyc_Kinds_ak;_T2B= (struct Cyc_Absyn_Kind*)_T2A;_T2C= Cyc_Tcutil_type_kind(t);_T2D= Cyc_Kinds_kind_leq(_T2B,_T2C);if(!_T2D)goto _TL6B;_T2E= Cyc_Tcutil_is_array_type(t);if(_T2E)goto _TL6B;else{goto _TL6D;}
_TL6D:{struct Cyc_List_List*_T49=_cycalloc(sizeof(struct Cyc_List_List));{struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct*_T4A=_cycalloc(sizeof(struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct));_T4A->tag= 7;_T4A->f1= 0;_T30= (struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct*)_T4A;}_T49->hd= (void*)_T30;_T49->tl= atts;_T2F= (struct Cyc_List_List*)_T49;}atts= _T2F;goto _TL6C;_TL6B: _TL6C: _T31= ctxt;_T32= 
Cyc_Tcutil_rsubstitute(r,inst,t);t= Cyc_Toc_trans_type(_T31,_T32);_T33= 
# 559
Cyc_Unify_unify(t,Cyc_Absyn_void_type);if(!_T33)goto _TL6E;{struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T49=_cycalloc(sizeof(struct Cyc_Absyn_ArrayType_Absyn_Type_struct));_T49->tag= 5;
# 561
({__typeof__(Cyc_Toc_void_star_type(ctxt))_T4A=Cyc_Toc_void_star_type(ctxt);_T49->f1.elt_type= _T4A;});_T49->f1.tq= Cyc_Toc_mt_tq;_T35= Cyc_Absyn_uint_exp(0U,0U);_T36= Cyc_Absyn_uint_type;({__typeof__(Cyc_Absyn_set_type(_T35,_T36))_T4A=Cyc_Absyn_set_type(_T35,_T36);_T49->f1.num_elts= _T4A;});_T49->f1.zero_term= Cyc_Absyn_false_type;_T49->f1.zt_loc= 0U;_T34= (struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_T49;}
# 560
t= (void*)_T34;goto _TL6F;_TL6E: _TL6F:{struct Cyc_List_List*_T49=_cycalloc(sizeof(struct Cyc_List_List));{struct Cyc_Absyn_Aggrfield*_T4A=_cycalloc(sizeof(struct Cyc_Absyn_Aggrfield));_T39= f;
# 562
_T4A->name= _T39->name;_T4A->tq= Cyc_Toc_mt_tq;_T4A->type= t;_T3A= f;_T4A->width= _T3A->width;_T4A->attributes= atts;_T4A->requires_clause= 0;_T38= (struct Cyc_Absyn_Aggrfield*)_T4A;}_T49->hd= _T38;_T49->tl= fs;_T37= (struct Cyc_List_List*)_T49;}fs= _T37;}}}_T3B= fields;
# 546
fields= _T3B->tl;goto _TL6A;_TL69:
# 564
 fs= Cyc_List_imp_rev(fs);{
struct Cyc_Absyn_Aggrdecl*sd=Cyc_Toc_make_c_struct_defn(xname,fs);_T3C= ctxt;{struct Cyc_List_List*_T49=_cycalloc(sizeof(struct Cyc_List_List));{struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T4A=_cycalloc(sizeof(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct));_T4A->tag= 5;
_T4A->f1= sd;_T3E= (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*)_T4A;}_T3F= (void*)_T3E;({__typeof__(Cyc_Absyn_new_decl(_T3F,0U))_T4A=Cyc_Absyn_new_decl(_T3F,0U);_T49->hd= _T4A;});_T40= ctxt;_T49->tl= _T40->result_decls;_T3D= (struct Cyc_List_List*)_T49;}_T3C->result_decls= _T3D;{void*_T49=x;_npop_handler(0);return _T49;}}}_pop_region();}}}}}}
# 570
static void*Cyc_Toc_add_struct_type(struct Cyc_Toc_TocContext*ctxt,struct _tuple1*struct_name,struct Cyc_List_List*type_vars,struct Cyc_List_List*type_args,struct Cyc_List_List*fields){struct _tuple32*_T0;struct _tuple32*_T1;struct _tuple32*_T2;struct _tuple32*_T3;struct _tuple32*_T4;void*(*_T5)(struct Cyc_Toc_TocContext*,struct _tuple32*,void*(*)(struct _RegionHandle*,struct _tuple33*));struct Cyc_Toc_TocContext*_T6;struct _tuple32*_T7;void*_T8;
# 572
struct _tuple32*env;env= _cycalloc(sizeof(struct _tuple32));_T0= env;_T0->f0= ctxt;_T1= env;_T1->f1= struct_name;_T2= env;_T2->f2= type_vars;_T3= env;_T3->f3= type_args;_T4= env;_T4->f4= fields;{
void*(*_T9)(struct Cyc_Toc_TocContext*,struct _tuple32*,void*(*)(struct _RegionHandle*,struct _tuple33*))=(void*(*)(struct Cyc_Toc_TocContext*,struct _tuple32*,void*(*)(struct _RegionHandle*,struct _tuple33*)))Cyc_Toc_use_toc_state;_T5= _T9;}_T6= ctxt;_T7= env;_T8= _T5(_T6,_T7,Cyc_Toc_add_struct_type_body);return _T8;}
# 579
struct _tuple1*Cyc_Toc_temp_var(struct Cyc_Toc_TocContext*ctxt){struct _tuple1*_T0;struct _fat_ptr*_T1;struct _fat_ptr _T2;struct Cyc_Int_pa_PrintArg_struct _T3;struct Cyc_Toc_TocContext*_T4;int _T5;int _T6;struct _fat_ptr _T7;struct _fat_ptr _T8;{struct _tuple1*_T9=_cycalloc(sizeof(struct _tuple1));({__typeof__(Cyc_Absyn_Loc_n())_TA=Cyc_Absyn_Loc_n();_T9->f0= _TA;});{struct _fat_ptr*_TA=_cycalloc(sizeof(struct _fat_ptr));{struct Cyc_Int_pa_PrintArg_struct _TB;_TB.tag= 1;_T4= ctxt;_T5= _T4->temp_var_counter;_T4->temp_var_counter= _T5 + 1;_T6= _T5;_TB.f1= (unsigned)_T6;_T3= _TB;}{struct Cyc_Int_pa_PrintArg_struct _TB=_T3;void*_TC[1];_TC[0]= & _TB;_T7= _tag_fat("_tmp%X",sizeof(char),7U);_T8= _tag_fat(_TC,sizeof(void*),1);_T2= Cyc_aprintf(_T7,_T8);}*_TA= _T2;_T1= (struct _fat_ptr*)_TA;}_T9->f1= _T1;_T0= (struct _tuple1*)_T9;}return _T0;}struct _tuple35{struct _tuple1*f0;struct Cyc_Absyn_Exp*f1;};
struct _tuple35 Cyc_Toc_temp_var_and_exp(struct Cyc_Toc_TocContext*ctxt){struct _tuple35 _T0;
struct _tuple1*v=Cyc_Toc_temp_var(ctxt);{struct _tuple35 _T1;
_T1.f0= v;({__typeof__(Cyc_Absyn_var_exp(v,0U))_T2=Cyc_Absyn_var_exp(v,0U);_T1.f1= _T2;});_T0= _T1;}return _T0;}struct _tuple36{struct Cyc_Toc_TocState*f0;struct Cyc_Toc_TocContext*f1;};
# 587
static struct _fat_ptr*Cyc_Toc_fresh_label_body(struct _RegionHandle*d,struct _tuple36*env){struct _tuple36*_T0;struct Cyc_Toc_TocState*_T1;struct Cyc_Toc_TocContext*_T2;int _T3;int _T4;int _T5;struct _fat_ptr*(*_T6)(struct Cyc_Xarray_Xarray*,int);void*(*_T7)(struct Cyc_Xarray_Xarray*,int);struct _fat_ptr*_T8;struct _fat_ptr*_T9;struct _fat_ptr _TA;struct Cyc_Int_pa_PrintArg_struct _TB;int _TC;struct _fat_ptr _TD;struct _fat_ptr _TE;int(*_TF)(struct Cyc_Xarray_Xarray*,struct _fat_ptr*);int(*_T10)(struct Cyc_Xarray_Xarray*,void*);int _T11;int _T12;struct Cyc_Warn_String_Warn_Warg_struct _T13;int(*_T14)(struct _fat_ptr ap);struct _fat_ptr _T15;struct _fat_ptr*_T16;_T0= env;{
struct _tuple36 _T17=*_T0;struct Cyc_Toc_TocContext*_T18;struct Cyc_Xarray_Xarray*_T19;_T1= _T17.f0;{struct Cyc_Toc_TocState _T1A=*_T1;_T19= _T1A.temp_labels;}_T18= _T17.f1;{struct Cyc_Xarray_Xarray*temp_labels=_T19;struct Cyc_Toc_TocContext*ctxt=_T18;_T2= ctxt;_T3= _T2->fresh_label_counter;
_T2->fresh_label_counter= _T3 + 1;{int i=_T3;_T4= i;_T5= 
Cyc_Xarray_length(temp_labels);if(_T4 >= _T5)goto _TL70;_T7= Cyc_Xarray_get;{
struct _fat_ptr*(*_T1A)(struct Cyc_Xarray_Xarray*,int)=(struct _fat_ptr*(*)(struct Cyc_Xarray_Xarray*,int))_T7;_T6= _T1A;}_T8= _T6(temp_labels,i);return _T8;_TL70: {
struct _fat_ptr*res;res= _cycalloc(sizeof(struct _fat_ptr));_T9= res;{struct Cyc_Int_pa_PrintArg_struct _T1A;_T1A.tag= 1;_TC= i;_T1A.f1= (unsigned)_TC;_TB= _T1A;}{struct Cyc_Int_pa_PrintArg_struct _T1A=_TB;void*_T1B[1];_T1B[0]= & _T1A;_TD= _tag_fat("_LL%X",sizeof(char),6U);_TE= _tag_fat(_T1B,sizeof(void*),1);_TA= Cyc_aprintf(_TD,_TE);}*_T9= _TA;_T10= Cyc_Xarray_add_ind;{
int(*_T1A)(struct Cyc_Xarray_Xarray*,struct _fat_ptr*)=(int(*)(struct Cyc_Xarray_Xarray*,struct _fat_ptr*))_T10;_TF= _T1A;}_T11= _TF(temp_labels,res);_T12= i;if(_T11==_T12)goto _TL72;{struct Cyc_Warn_String_Warn_Warg_struct _T1A;_T1A.tag= 0;
({__typeof__(_tag_fat("fresh_label: add_ind returned bad index...",sizeof(char),43U))_T1B=_tag_fat("fresh_label: add_ind returned bad index...",sizeof(char),43U);_T1A.f1= _T1B;});_T13= _T1A;}{struct Cyc_Warn_String_Warn_Warg_struct _T1A=_T13;void*_T1B[1];_T1B[0]= & _T1A;{int(*_T1C)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T14= _T1C;}_T15= _tag_fat(_T1B,sizeof(void*),1);_T14(_T15);}goto _TL73;_TL72: _TL73: _T16= res;
return _T16;}}}}}
# 597
static struct _fat_ptr*Cyc_Toc_fresh_label(struct Cyc_Toc_TocContext*ctxt){struct _fat_ptr*(*_T0)(struct Cyc_Toc_TocContext*,struct Cyc_Toc_TocContext*,struct _fat_ptr*(*)(struct _RegionHandle*,struct _tuple36*));struct _fat_ptr*_T1;{struct _fat_ptr*(*_T2)(struct Cyc_Toc_TocContext*,struct Cyc_Toc_TocContext*,struct _fat_ptr*(*)(struct _RegionHandle*,struct _tuple36*))=(struct _fat_ptr*(*)(struct Cyc_Toc_TocContext*,struct Cyc_Toc_TocContext*,struct _fat_ptr*(*)(struct _RegionHandle*,struct _tuple36*)))Cyc_Toc_use_toc_state;_T0= _T2;}_T1= _T0(ctxt,ctxt,Cyc_Toc_fresh_label_body);return _T1;}
# 601
static struct Cyc_Absyn_Exp*Cyc_Toc_datatype_tag(struct Cyc_Absyn_Datatypedecl*td,struct _tuple1*name){struct Cyc_Absyn_Datatypedecl*_T0;struct Cyc_Core_Opt*_T1;struct Cyc_Core_Opt*_T2;void*_T3;struct _tuple1*_T4;struct Cyc_List_List*_T5;void*_T6;struct Cyc_Absyn_Datatypefield*_T7;struct _tuple1*_T8;int _T9;struct Cyc_List_List*_TA;struct Cyc_Absyn_Exp*_TB;void*_TC;struct Cyc_Absyn_Exp*_TD;
int ans=0;_T0= td;_T1= _T0->fields;_T2= 
_check_null(_T1);_T3= _T2->v;{struct Cyc_List_List*fs=(struct Cyc_List_List*)_T3;_TL77: _T4= name;_T5= _check_null(fs);_T6= _T5->hd;_T7= (struct Cyc_Absyn_Datatypefield*)_T6;_T8= _T7->name;_T9= Cyc_Absyn_qvar_cmp(_T4,_T8);if(_T9!=0)goto _TL75;else{goto _TL76;}
_TL75: ans= ans + 1;_TA= fs;
# 603
fs= _TA->tl;goto _TL77;_TL76:;}_TB= 
# 605
Cyc_Absyn_signed_int_exp(ans,0U);_TC= Cyc_Absyn_sint_type;_TD= Cyc_Absyn_set_type(_TB,_TC);return _TD;}
# 611
static void*Cyc_Toc_trans_type(struct Cyc_Toc_TocContext*,void*);
static void Cyc_Toc_trans_enumdecl(struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Enumdecl*);
static void Cyc_Toc_trans_aggrdecl(struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Aggrdecl*);
static void Cyc_Toc_trans_datatypedecl(struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Datatypedecl*);
static void Cyc_Toc_trans_exptypes(struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Exp*);
static void Cyc_Toc_trans_stmttypes(struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Stmt*);
# 626
static struct _tuple9*Cyc_Toc_arg_to_c(struct Cyc_Toc_TocContext*ctxt,struct _tuple9*a){struct _tuple9*_T0;struct _tuple9*_T1;struct _tuple9 _T2;struct Cyc_Toc_TocContext*_T3;struct _tuple9*_T4;struct _tuple9 _T5;void*_T6;{struct _tuple9*_T7=_cycalloc(sizeof(struct _tuple9));
_T7->f0= 0;_T1= a;_T2= *_T1;_T7->f1= _T2.f1;_T3= ctxt;_T4= a;_T5= *_T4;_T6= _T5.f2;({__typeof__(Cyc_Toc_trans_type(_T3,_T6))_T8=Cyc_Toc_trans_type(_T3,_T6);_T7->f2= _T8;});_T0= (struct _tuple9*)_T7;}return _T0;}
# 645
static void*Cyc_Toc_trans_type_array(struct Cyc_Toc_TocContext*ctxt,void*t){int*_T0;int _T1;struct Cyc_Toc_TocContext*_T2;struct Cyc_Absyn_ArrayInfo _T3;void*_T4;void*_T5;struct Cyc_Absyn_ArrayInfo _T6;struct Cyc_Absyn_Tqual _T7;void*_T8;void*_T9;
void*_TA=Cyc_Absyn_compress(t);struct Cyc_Absyn_ArrayInfo _TB;_T0= (int*)_TA;_T1= *_T0;if(_T1!=5)goto _TL78;{struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_TC=(struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_TA;_TB= _TC->f1;}{struct Cyc_Absyn_ArrayInfo ai=_TB;_T2= ctxt;_T3= ai;_T4= _T3.elt_type;_T5= 
# 648
Cyc_Toc_trans_type_array(_T2,_T4);_T6= ai;_T7= _T6.tq;_T8= Cyc_Absyn_cstar_type(_T5,_T7);return _T8;}_TL78: _T9= 
# 650
Cyc_Toc_trans_type(ctxt,t);return _T9;;}
# 653
static void*Cyc_Toc_typ_to_c_array(struct Cyc_Toc_TocContext*ctxt,void*t){void*_T0;_T0= Cyc_Toc_trans_type_array(ctxt,t);return _T0;}
# 655
static struct Cyc_Absyn_Aggrfield*Cyc_Toc_aggrfield_to_c(struct Cyc_Absyn_Aggrfield*f,void*new_type){struct Cyc_Absyn_Aggrfield*_T0;struct Cyc_Absyn_Aggrfield*_T1;struct Cyc_Absyn_Aggrfield*_T2;struct Cyc_Absyn_Aggrfield*_T3;struct Cyc_Absyn_Aggrfield*_T4;struct Cyc_Absyn_Aggrfield*_T5;
# 657
struct Cyc_Absyn_Aggrfield*ans;ans= _cycalloc(sizeof(struct Cyc_Absyn_Aggrfield));_T0= ans;_T1= f;*_T0= *_T1;_T2= ans;
_T2->type= new_type;_T3= ans;
_T3->requires_clause= 0;_T4= ans;
_T4->tq= Cyc_Toc_mt_tq;_T5= ans;
return _T5;}
# 664
static void Cyc_Toc_enumfields_to_c(struct Cyc_List_List*fs){
return;}
# 668
static long Cyc_Toc_is_boxed_tvar(void*t){int*_T0;int _T1;struct Cyc_Absyn_Kind*_T2;struct Cyc_Absyn_Kind*_T3;struct Cyc_Absyn_Kind*_T4;long _T5;
void*_T6=Cyc_Absyn_compress(t);struct Cyc_Absyn_Tvar*_T7;_T0= (int*)_T6;_T1= *_T0;if(_T1!=2)goto _TL7A;{struct Cyc_Absyn_VarType_Absyn_Type_struct*_T8=(struct Cyc_Absyn_VarType_Absyn_Type_struct*)_T6;_T7= _T8->f1;}{struct Cyc_Absyn_Tvar*tv=_T7;_T2= 
# 671
Cyc_Tcutil_type_kind(t);_T3= & Cyc_Kinds_bk;_T4= (struct Cyc_Absyn_Kind*)_T3;_T5= Cyc_Kinds_kind_leq(_T2,_T4);return _T5;}_TL7A:
# 673
 return 0;;}
# 676
static long Cyc_Toc_is_abstract_type(void*t){struct Cyc_Absyn_Kind*_T0;enum Cyc_Absyn_KindQual _T1;
struct Cyc_Absyn_Kind*_T2=Cyc_Tcutil_type_kind(t);_T0= (struct Cyc_Absyn_Kind*)_T2;_T1= _T0->kind;if(_T1!=Cyc_Absyn_AnyKind)goto _TL7C;
# 679
return 1;_TL7C:
# 681
 return 0;;}
# 684
static long Cyc_Toc_is_void_star(void*t){int*_T0;int _T1;struct Cyc_Absyn_PtrInfo _T2;long _T3;
void*_T4=Cyc_Absyn_compress(t);void*_T5;_T0= (int*)_T4;_T1= *_T0;if(_T1!=4)goto _TL7E;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T6=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T4;_T2= _T6->f1;_T5= _T2.elt_type;}{void*t2=_T5;_T3= 
# 687
Cyc_Tcutil_is_void_type(t2);return _T3;}_TL7E:
# 689
 return 0;;}
# 692
static long Cyc_Toc_is_void_star_or_boxed_tvar(void*t){int _T0;long _T1;_T1= Cyc_Toc_is_void_star(t);if(!_T1)goto _TL80;_T0= 1;goto _TL81;_TL80: _T0= Cyc_Toc_is_boxed_tvar(t);_TL81: return _T0;}
static long Cyc_Toc_is_pointer_or_boxed_tvar(void*t){int _T0;long _T1;_T1= Cyc_Tcutil_is_pointer_type(t);if(!_T1)goto _TL82;_T0= 1;goto _TL83;_TL82: _T0= Cyc_Toc_is_boxed_tvar(t);_TL83: return _T0;}
# 695
void*Cyc_Toc_typ_to_c(struct Cyc_Toc_TocContext*ctxt,void*t){void*_T0;_T0= 
Cyc_Toc_trans_type(ctxt,t);return _T0;}
# 699
static void*Cyc_Toc_trans_type(struct Cyc_Toc_TocContext*ctxt,void*t){void*_T0;int*_T1;unsigned _T2;void*_T3;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T4;void*_T5;int*_T6;unsigned _T7;void*_T8;void*_T9;void*_TA;struct Cyc_Absyn_AppType_Absyn_Type_struct*_TB;void*_TC;struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct*_TD;union Cyc_Absyn_DatatypeFieldInfo _TE;struct _union_DatatypeFieldInfo_KnownDatatypefield _TF;unsigned _T10;void*_T11;void*_T12;union Cyc_Absyn_DatatypeFieldInfo _T13;struct _union_DatatypeFieldInfo_KnownDatatypefield _T14;struct _tuple2 _T15;union Cyc_Absyn_DatatypeFieldInfo _T16;struct _union_DatatypeFieldInfo_KnownDatatypefield _T17;struct _tuple2 _T18;struct Cyc_Toc_TocContext*_T19;struct Cyc_Absyn_Datatypefield*_T1A;struct _tuple1*_T1B;struct Cyc_Absyn_Datatypedecl*_T1C;struct _tuple1*_T1D;struct _tuple1*_T1E;void*_T1F;struct Cyc_Warn_String_Warn_Warg_struct _T20;int(*_T21)(struct _fat_ptr ap);struct _fat_ptr _T22;void*_T23;void*_T24;void*_T25;union Cyc_Absyn_AggrInfo _T26;struct _union_AggrInfo_UnknownAggr _T27;unsigned _T28;void*_T29;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T2A;struct Cyc_Absyn_Aggrdecl*_T2B;long _T2C;struct Cyc_Absyn_Aggrdecl*_T2D;struct Cyc_Absyn_AggrdeclImpl*_T2E;struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _T2F;struct Cyc_Warn_String_Warn_Warg_struct _T30;struct _fat_ptr _T31;struct Cyc_Absyn_Aggrdecl*_T32;enum Cyc_Absyn_AggrKind _T33;int _T34;struct Cyc_Toc_TocContext*_T35;struct Cyc_Absyn_Aggrdecl*_T36;struct _tuple1*_T37;void*(*_T38)(struct _tuple1*);void*_T39;struct Cyc_List_List*_T3A;struct Cyc_Absyn_Aggrdecl*_T3B;struct Cyc_Absyn_AggrdeclImpl*_T3C;struct Cyc_Absyn_Aggrdecl*_T3D;struct Cyc_Absyn_AggrdeclImpl*_T3E;struct Cyc_Toc_TocContext*_T3F;struct Cyc_Absyn_Aggrdecl*_T40;struct _tuple1*_T41;void*(*_T42)(struct _tuple1*);void*_T43;struct Cyc_List_List*_T44;struct Cyc_List_List*_T45;struct Cyc_List_List*_T46;struct Cyc_List_List*_T47;void*_T48;struct Cyc_Absyn_Aggrfield*_T49;struct Cyc_Absyn_Kind*_T4A;struct Cyc_Absyn_Kind*_T4B;struct Cyc_Absyn_Kind*_T4C;long _T4D;struct Cyc_Absyn_Aggrdecl*_T4E;long _T4F;struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _T50;struct Cyc_Warn_String_Warn_Warg_struct _T51;struct _fat_ptr _T52;struct _RegionHandle*_T53;struct _RegionHandle*_T54;struct Cyc_Absyn_Aggrdecl*_T55;struct Cyc_List_List*_T56;struct Cyc_List_List*_T57;long _T58;struct Cyc_Toc_TocContext*_T59;struct Cyc_Absyn_Aggrdecl*_T5A;struct _tuple1*_T5B;void*(*_T5C)(struct _tuple1*);struct Cyc_Toc_TocContext*_T5D;struct Cyc_Absyn_Aggrdecl*_T5E;struct _tuple1*_T5F;struct Cyc_Absyn_Aggrdecl*_T60;struct Cyc_List_List*_T61;struct Cyc_List_List*_T62;struct Cyc_Absyn_Aggrdecl*_T63;struct Cyc_Absyn_AggrdeclImpl*_T64;struct Cyc_List_List*_T65;long _T66;struct Cyc_String_pa_PrintArg_struct _T67;struct Cyc_Absyn_Aggrdecl*_T68;struct _tuple1*_T69;struct _tuple1 _T6A;struct _fat_ptr*_T6B;struct _fat_ptr _T6C;struct _fat_ptr _T6D;struct Cyc_Toc_TocContext*_T6E;struct Cyc_Absyn_Aggrdecl*_T6F;struct _tuple1*_T70;void*(*_T71)(struct _tuple1*);void*_T72;void*_T73;void*_T74;void*_T75;void*_T76;void*_T77;void*_T78;void*_T79;void*_T7A;void*_T7B;void*_T7C;void*_T7D;void*_T7E;void*_T7F;void*_T80;void*_T81;struct Cyc_Absyn_Evar_Absyn_Type_struct*_T82;void**_T83;void**_T84;void*_T85;struct Cyc_Toc_TocContext*_T86;void**_T87;void*_T88;void*_T89;void**_T8A;void*_T8B;void*_T8C;struct Cyc_Absyn_Tvar*_T8D;struct Cyc_Absyn_Kind*_T8E;struct Cyc_Absyn_Kind*_T8F;struct Cyc_Absyn_Kind*_T90;enum Cyc_Absyn_KindQual _T91;int _T92;void*_T93;void*_T94;void*_T95;struct Cyc_Absyn_PtrInfo _T96;struct Cyc_Absyn_PtrInfo _T97;struct Cyc_Absyn_PtrInfo _T98;struct Cyc_Absyn_PtrAtts _T99;void*_T9A;void*_T9B;struct Cyc_Absyn_Exp*_T9C;void*_T9D;void*_T9E;void*_T9F;struct Cyc_Absyn_ArrayInfo _TA0;struct Cyc_Absyn_ArrayInfo _TA1;struct Cyc_Absyn_ArrayInfo _TA2;struct Cyc_Absyn_ArrayInfo _TA3;void*_TA4;struct Cyc_Absyn_Tqual _TA5;struct Cyc_Absyn_Exp*_TA6;void*_TA7;unsigned _TA8;void*_TA9;void*_TAA;struct Cyc_Absyn_FnInfo _TAB;struct Cyc_Absyn_FnInfo _TAC;struct Cyc_Absyn_FnInfo _TAD;struct Cyc_Absyn_FnInfo _TAE;struct Cyc_Absyn_FnInfo _TAF;struct Cyc_Absyn_FnInfo _TB0;struct Cyc_List_List*(*_TB1)(struct _tuple9*(*)(struct Cyc_Toc_TocContext*,struct _tuple9*),struct Cyc_Toc_TocContext*,struct Cyc_List_List*);struct Cyc_List_List*(*_TB2)(void*(*)(void*,void*),void*,struct Cyc_List_List*);struct Cyc_Toc_TocContext*_TB3;struct Cyc_List_List*_TB4;struct Cyc_Toc_TocContext*_TB5;struct Cyc_Absyn_VarargInfo*_TB6;void*_TB7;void*_TB8;void*_TB9;struct Cyc_Absyn_Tqual _TBA;void*_TBB;void*_TBC;void*_TBD;struct _tuple9*_TBE;struct Cyc_Absyn_VarargInfo*_TBF;struct _tuple9*_TC0;struct Cyc_Absyn_VarargInfo*_TC1;struct _tuple9*_TC2;struct Cyc_List_List*_TC3;struct Cyc_List_List*_TC4;struct Cyc_Absyn_FnType_Absyn_Type_struct*_TC5;void*_TC6;void*_TC7;struct Cyc_List_List*_TC8;struct Cyc_List_List*_TC9;void*_TCA;struct Cyc_Absyn_Aggrfield*_TCB;struct Cyc_Toc_TocContext*_TCC;struct Cyc_List_List*_TCD;void*_TCE;struct Cyc_Absyn_Aggrfield*_TCF;void*_TD0;void*_TD1;struct Cyc_List_List*_TD2;struct Cyc_Toc_TocContext*_TD3;enum Cyc_Absyn_AggrKind _TD4;struct Cyc_List_List*_TD5;void*_TD6;void*_TD7;void*_TD8;void*_TD9;struct Cyc_Absyn_TypedefType_Absyn_Type_struct*_TDA;struct _tuple1*_TDB;struct _tuple1 _TDC;struct _fat_ptr*_TDD;struct _fat_ptr _TDE;struct _fat_ptr _TDF;int _TE0;long _TE1;struct _fat_ptr _TE2;struct _fat_ptr _TE3;struct _fat_ptr _TE4;struct _fat_ptr _TE5;struct Cyc_Absyn_TypedefType_Absyn_Type_struct*_TE6;void*_TE7;void*_TE8;void*_TE9;void*_TEA;void*_TEB;struct Cyc_Absyn_Exp*_TEC;void*_TED;struct Cyc_Toc_TocContext*_TEE;struct Cyc_Absyn_Exp*_TEF;void*_TF0;void*_TF1;struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*_TF2;struct Cyc_Absyn_TypeDecl*_TF3;struct Cyc_Absyn_TypeDecl*_TF4;void*_TF5;int*_TF6;unsigned _TF7;void*_TF8;struct Cyc_Absyn_TypeDecl*_TF9;void*_TFA;struct Cyc_Toc_TocContext*_TFB;struct Cyc_Absyn_Aggrdecl*_TFC;struct _tuple1*_TFD;void*(*_TFE)(struct _tuple1*);struct Cyc_Absyn_Aggrdecl*_TFF;enum Cyc_Absyn_AggrKind _T100;int _T101;void*_T102;void*_T103;struct Cyc_Absyn_TypeDecl*_T104;void*_T105;void*_T106;void*_T107;struct Cyc_Absyn_TypeDecl*_T108;void*_T109;struct Cyc_Toc_TocContext*_T10A;void**_T10B;void*_T10C;void*_T10D;void*_T10E;struct Cyc_Toc_TocContext*_T10F;struct Cyc_Absyn_Vardecl*_T110;void*_T111;void*_T112;struct Cyc_Absyn_Vardecl*_T113;void**_T114;struct Cyc_Absyn_Datatypedecl*_T115;struct Cyc_Absyn_Enumdecl*_T116;struct Cyc_Absyn_Aggrdecl*_T117;struct Cyc_Absyn_Typedefdecl*_T118;struct _tuple1*_T119;enum Cyc_Absyn_AggrKind _T11A;struct Cyc_List_List*_T11B;struct Cyc_Absyn_VarargInfo*_T11C;long _T11D;struct Cyc_List_List*_T11E;unsigned _T11F;struct Cyc_Absyn_Exp*_T120;struct Cyc_Absyn_Tqual _T121;union Cyc_Absyn_AggrInfo _T122;void*_T123;void*_T124;_T0= t;_T1= (int*)_T0;_T2= *_T1;switch(_T2){case 0: _T3= t;_T4= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3;_T5= _T4->f1;_T6= (int*)_T5;_T7= *_T6;switch(_T7){case 0: _T8= t;
# 702
return _T8;case 22: _T9= Cyc_Absyn_void_type;
# 714
return _T9;case 23: _TA= t;_TB= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_TA;_TC= _TB->f1;_TD= (struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct*)_TC;_TE= _TD->f1;_TF= _TE.KnownDatatypefield;_T10= _TF.tag;if(_T10!=2)goto _TL86;_T11= t;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T125=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T11;_T12= _T125->f1;{struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct*_T126=(struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct*)_T12;_T13= _T126->f1;_T14= _T13.KnownDatatypefield;_T15= _T14.val;_T124= _T15.f0;_T16= _T126->f1;_T17= _T16.KnownDatatypefield;_T18= _T17.val;_T123= _T18.f1;}}{struct Cyc_Absyn_Datatypedecl*tud=_T124;struct Cyc_Absyn_Datatypefield*tuf=_T123;_T19= ctxt;_T1A= tuf;_T1B= _T1A->name;_T1C= tud;_T1D= _T1C->name;_T1E= 
# 716
Cyc_Toc_collapse_qvars(_T19,_T1B,_T1D);_T1F= Cyc_Absyn_strctq(_T1E);return _T1F;}_TL86:{struct Cyc_Warn_String_Warn_Warg_struct _T125;_T125.tag= 0;
# 718
({__typeof__(_tag_fat("unresolved DatatypeFieldType",sizeof(char),29U))_T126=_tag_fat("unresolved DatatypeFieldType",sizeof(char),29U);_T125.f1= _T126;});_T20= _T125;}{struct Cyc_Warn_String_Warn_Warg_struct _T125=_T20;void*_T126[1];_T126[0]= & _T125;{int(*_T127)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T21= _T127;}_T22= _tag_fat(_T126,sizeof(void*),1);_T21(_T22);};case 1: goto _LL14;case 2: _LL14: _T23= t;
# 728
return _T23;case 24: _T24= t;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T125=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T24;_T25= _T125->f1;_T124= (void*)_T25;{struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_T126=(struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*)_T124;_T122= _T126->f1;}_T123= _T125->f2;}{void*c=_T124;union Cyc_Absyn_AggrInfo info=_T122;struct Cyc_List_List*ts=_T123;_T26= info;_T27= _T26.UnknownAggr;_T28= _T27.tag;if(_T28!=1)goto _TL88;
# 757
if(ts!=0)goto _TL8A;_T29= t;goto _TL8B;_TL8A:{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T125=_cycalloc(sizeof(struct Cyc_Absyn_AppType_Absyn_Type_struct));_T125->tag= 0;_T125->f1= c;_T125->f2= 0;_T2A= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T125;}_T29= (void*)_T2A;_TL8B: return _T29;_TL88: goto _LL3B;_LL3B: {
# 761
struct Cyc_Absyn_Aggrdecl*ad=Cyc_Absyn_get_known_aggrdecl(info);_T2B= ad;_T2C= _T2B->expected_mem_kind;
# 763
if(!_T2C)goto _TL8C;_T2D= ad;_T2E= _T2D->impl;if(_T2E!=0)goto _TL8C;{struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _T125;_T125.tag= 6;
_T125.f1= ad;_T2F= _T125;}{struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _T125=_T2F;{struct Cyc_Warn_String_Warn_Warg_struct _T126;_T126.tag= 0;({__typeof__(_tag_fat(" was never defined.",sizeof(char),20U))_T127=_tag_fat(" was never defined.",sizeof(char),20U);_T126.f1= _T127;});_T30= _T126;}{struct Cyc_Warn_String_Warn_Warg_struct _T126=_T30;void*_T127[2];_T127[0]= & _T125;_T127[1]= & _T126;_T31= _tag_fat(_T127,sizeof(void*),2);Cyc_Warn_warn2(0U,_T31);}}goto _TL8D;_TL8C: _TL8D: _T32= ad;_T33= _T32->kind;_T34= (int)_T33;
# 766
if(_T34!=1)goto _TL8E;_T35= ctxt;_T36= ad;_T37= _T36->name;_T38= Cyc_Absyn_unionq_type;_T39= 
Cyc_Toc_aggrdecl_type(_T35,_T37,_T38);return _T39;_TL8E: _T3B= ad;_T3C= _T3B->impl;
if(_T3C!=0)goto _TL90;_T3A= 0;goto _TL91;_TL90: _T3D= ad;_T3E= _T3D->impl;_T3A= _T3E->fields;_TL91: {struct Cyc_List_List*fs=_T3A;
if(fs!=0)goto _TL92;_T3F= ctxt;_T40= ad;_T41= _T40->name;_T42= Cyc_Absyn_strctq;_T43= 
Cyc_Toc_aggrdecl_type(_T3F,_T41,_T42);return _T43;_TL92:
 _TL97: _T44= fs;_T45= _T44->tl;if(_T45!=0)goto _TL95;else{goto _TL96;}
_TL95: _T46= fs;
# 771
fs= _T46->tl;goto _TL97;_TL96: _T47= fs;_T48= _T47->hd;_T49= (struct Cyc_Absyn_Aggrfield*)_T48;{
# 773
void*last_type=_T49->type;_T4A= & Cyc_Kinds_ak;_T4B= (struct Cyc_Absyn_Kind*)_T4A;_T4C= 
Cyc_Tcutil_type_kind(last_type);_T4D= Cyc_Kinds_kind_leq(_T4B,_T4C);if(!_T4D)goto _TL98;_T4E= ad;_T4F= _T4E->expected_mem_kind;
if(!_T4F)goto _TL9A;{struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _T125;_T125.tag= 6;
_T125.f1= ad;_T50= _T125;}{struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _T125=_T50;{struct Cyc_Warn_String_Warn_Warg_struct _T126;_T126.tag= 0;({__typeof__(_tag_fat(" ended up being abstract.",sizeof(char),26U))_T127=_tag_fat(" ended up being abstract.",sizeof(char),26U);_T126.f1= _T127;});_T51= _T126;}{struct Cyc_Warn_String_Warn_Warg_struct _T126=_T51;void*_T127[2];_T127[0]= & _T125;_T127[1]= & _T126;_T52= _tag_fat(_T127,sizeof(void*),2);Cyc_Warn_warn2(0U,_T52);}}goto _TL9B;_TL9A: _TL9B:{struct _RegionHandle _T125=_new_region(0U,"r");struct _RegionHandle*r=& _T125;_push_region(r);_T53= r;_T54= r;_T55= ad;_T56= _T55->tvs;_T57= ts;{
# 780
struct Cyc_List_List*inst=Cyc_List_rzip(_T53,_T54,_T56,_T57);
void*t=Cyc_Tcutil_rsubstitute(r,inst,last_type);_T58= 
Cyc_Toc_is_abstract_type(t);if(!_T58)goto _TL9C;_T59= ctxt;_T5A= ad;_T5B= _T5A->name;_T5C= Cyc_Absyn_strctq;{void*_T126=
Cyc_Toc_aggrdecl_type(_T59,_T5B,_T5C);_npop_handler(0);return _T126;}_TL9C: _T5D= ctxt;_T5E= ad;_T5F= _T5E->name;_T60= ad;_T61= _T60->tvs;_T62= ts;_T63= ad;_T64= _T63->impl;_T65= _T64->fields;{
void*res=Cyc_Toc_add_struct_type(_T5D,_T5F,_T61,_T62,_T65);_T66= 
Cyc_Toc_is_void_star(res);if(!_T66)goto _TL9E;{struct Cyc_String_pa_PrintArg_struct _T126;_T126.tag= 0;_T68= ad;_T69= _T68->name;_T6A= *_T69;_T6B= _T6A.f1;_T126.f1= *_T6B;_T67= _T126;}{struct Cyc_String_pa_PrintArg_struct _T126=_T67;void*_T127[1];_T127[0]= & _T126;_T6C= _tag_fat("add_struct_type returned void* for %s",sizeof(char),38U);_T6D= _tag_fat(_T127,sizeof(void*),1);Cyc_Warn_warn(0U,_T6C,_T6D);}goto _TL9F;_TL9E: _TL9F: {void*_T126=res;_npop_handler(0);return _T126;}}}_pop_region();}goto _TL99;_TL98: _TL99: _T6E= ctxt;_T6F= ad;_T70= _T6F->name;_T71= Cyc_Absyn_strctq;_T72= 
# 788
Cyc_Toc_aggrdecl_type(_T6E,_T70,_T71);return _T72;}}}}case 19: _T73= t;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T125=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T73;_T74= _T125->f1;{struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct*_T126=(struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct*)_T74;_T124= _T126->f1;}}{struct _tuple1*tdn=_T124;_T75= t;
# 790
return _T75;}case 20: _T76= t;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T125=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T76;_T77= _T125->f1;{struct Cyc_Absyn_AnonEnumCon_Absyn_TyCon_struct*_T126=(struct Cyc_Absyn_AnonEnumCon_Absyn_TyCon_struct*)_T77;_T124= _T126->f1;}}{struct Cyc_List_List*fs=_T124;
# 792
Cyc_Toc_enumfields_to_c(fs);_T78= t;
return _T78;}case 5: _T79= Cyc_Absyn_uint_type;
# 808
return _T79;case 4: _T7A= 
# 810
Cyc_Toc_rgn_type(ctxt);return _T7A;case 18: _T7B= 
# 812
Cyc_Toc_aqualt_type(ctxt);return _T7B;case 21: _T7C= t;
# 814
return _T7C;case 3: _T7D= t;
# 816
return _T7D;default: _T7E= 
# 820
Cyc_Toc_void_star_type(ctxt);return _T7E;};case 3: _T7F= 
# 704
Cyc_Toc_void_star_type(ctxt);return _T7F;case 1: _T80= t;{struct Cyc_Absyn_Evar_Absyn_Type_struct*_T125=(struct Cyc_Absyn_Evar_Absyn_Type_struct*)_T80;_T81= t;_T82= (struct Cyc_Absyn_Evar_Absyn_Type_struct*)_T81;_T83= & _T82->f2;_T124= (void**)_T83;}{void**t2=_T124;_T84= t2;_T85= *_T84;
# 706
if(_T85==0)goto _TLA0;_T86= ctxt;_T87= t2;_T88= *_T87;_T89= 
Cyc_Toc_trans_type(_T86,_T88);return _T89;_TLA0: _T8A= t2;
({__typeof__(Cyc_Toc_void_star_type(ctxt))_T125=Cyc_Toc_void_star_type(ctxt);*_T8A= _T125;});_T8B= *_T8A;return _T8B;}case 2: _T8C= t;{struct Cyc_Absyn_VarType_Absyn_Type_struct*_T125=(struct Cyc_Absyn_VarType_Absyn_Type_struct*)_T8C;_T124= _T125->f1;}{struct Cyc_Absyn_Tvar*tv=_T124;_T8D= tv;_T8E= & Cyc_Kinds_bk;_T8F= (struct Cyc_Absyn_Kind*)_T8E;_T90= 
# 710
Cyc_Kinds_tvar_kind(_T8D,_T8F);_T91= _T90->kind;_T92= (int)_T91;if(_T92!=0)goto _TLA2;_T93= Cyc_Absyn_void_type;
return _T93;_TLA2: _T94= 
Cyc_Toc_void_star_type(ctxt);return _T94;}case 4: _T95= t;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T125=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T95;_T96= _T125->f1;_T124= _T96.elt_type;_T97= _T125->f1;_T121= _T97.elt_tq;_T98= _T125->f1;_T99= _T98.ptr_atts;_T123= _T99.bounds;}{void*t2=_T124;struct Cyc_Absyn_Tqual tq=_T121;void*bnds=_T123;
# 722
t2= Cyc_Toc_trans_type(ctxt,t2);_T9A= 
Cyc_Absyn_bounds_one();_T9B= bnds;_T9C= Cyc_Tcutil_get_bounds_exp_constrain(_T9A,_T9B,1);if(_T9C!=0)goto _TLA4;_T9D= 
Cyc_Toc_fat_ptr_type(ctxt);return _T9D;_TLA4: _T9E= 
Cyc_Absyn_star_type(t2,Cyc_Absyn_heap_rgn_type,Cyc_Absyn_al_qual_type,tq,Cyc_Absyn_false_type,Cyc_Absyn_false_type);return _T9E;}case 5: _T9F= t;{struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T125=(struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_T9F;_TA0= _T125->f1;_T124= _TA0.elt_type;_TA1= _T125->f1;_T121= _TA1.tq;_TA2= _T125->f1;_T120= _TA2.num_elts;_TA3= _T125->f1;_T11F= _TA3.zt_loc;}{void*t2=_T124;struct Cyc_Absyn_Tqual tq=_T121;struct Cyc_Absyn_Exp*e=_T120;unsigned ztl=_T11F;_TA4= 
# 730
Cyc_Toc_trans_type(ctxt,t2);_TA5= tq;_TA6= e;_TA7= Cyc_Absyn_false_type;_TA8= ztl;_TA9= Cyc_Absyn_array_type(_TA4,_TA5,_TA6,_TA7,_TA8);return _TA9;}case 6: _TAA= t;{struct Cyc_Absyn_FnType_Absyn_Type_struct*_T125=(struct Cyc_Absyn_FnType_Absyn_Type_struct*)_TAA;_TAB= _T125->f1;_T121= _TAB.ret_tqual;_TAC= _T125->f1;_T124= _TAC.ret_type;_TAD= _T125->f1;_T11E= _TAD.args;_TAE= _T125->f1;_T11D= _TAE.c_varargs;_TAF= _T125->f1;_T11C= _TAF.cyc_varargs;_TB0= _T125->f1;_T11B= _TB0.attributes;}{struct Cyc_Absyn_Tqual tq2=_T121;void*t2=_T124;struct Cyc_List_List*args=_T11E;long c_vararg=_T11D;struct Cyc_Absyn_VarargInfo*cyc_vararg=_T11C;struct Cyc_List_List*atts=_T11B;
# 734
struct Cyc_List_List*new_atts=Cyc_Atts_atts2c(atts);_TB2= Cyc_List_map_c;{
struct Cyc_List_List*(*_T125)(struct _tuple9*(*)(struct Cyc_Toc_TocContext*,struct _tuple9*),struct Cyc_Toc_TocContext*,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _tuple9*(*)(struct Cyc_Toc_TocContext*,struct _tuple9*),struct Cyc_Toc_TocContext*,struct Cyc_List_List*))_TB2;_TB1= _T125;}_TB3= ctxt;_TB4= args;{struct Cyc_List_List*new_args=_TB1(Cyc_Toc_arg_to_c,_TB3,_TB4);
if(cyc_vararg==0)goto _TLA6;_TB5= ctxt;_TB6= cyc_vararg;_TB7= _TB6->type;_TB8= Cyc_Absyn_heap_rgn_type;_TB9= Cyc_Absyn_al_qual_type;_TBA= Cyc_Toc_mt_tq;_TBB= Cyc_Absyn_false_type;_TBC= Cyc_Absyn_false_type;_TBD= 
# 738
Cyc_Absyn_fatptr_type(_TB7,_TB8,_TB9,_TBA,_TBB,_TBC);{void*t=Cyc_Toc_trans_type(_TB5,_TBD);
# 740
struct _tuple9*vararg;vararg= _cycalloc(sizeof(struct _tuple9));_TBE= vararg;_TBF= cyc_vararg;_TBE->f0= _TBF->name;_TC0= vararg;_TC1= cyc_vararg;_TC0->f1= _TC1->tq;_TC2= vararg;_TC2->f2= t;_TC3= new_args;{struct Cyc_List_List*_T125=_cycalloc(sizeof(struct Cyc_List_List));
_T125->hd= vararg;_T125->tl= 0;_TC4= (struct Cyc_List_List*)_T125;}new_args= Cyc_List_imp_append(_TC3,_TC4);}goto _TLA7;_TLA6: _TLA7:{struct Cyc_Absyn_FnType_Absyn_Type_struct*_T125=_cycalloc(sizeof(struct Cyc_Absyn_FnType_Absyn_Type_struct));_T125->tag= 6;
# 743
_T125->f1.tvars= 0;_T125->f1.effect= 0;_T125->f1.ret_tqual= tq2;({__typeof__(Cyc_Toc_trans_type(ctxt,t2))_T126=Cyc_Toc_trans_type(ctxt,t2);_T125->f1.ret_type= _T126;});_T125->f1.args= new_args;_T125->f1.c_varargs= c_vararg;_T125->f1.cyc_varargs= 0;
_T125->f1.qual_bnd= 0;_T125->f1.attributes= new_atts;_T125->f1.checks_clause= 0;_T125->f1.checks_assn= 0;_T125->f1.requires_clause= 0;_T125->f1.requires_assn= 0;_T125->f1.ensures_clause= 0;
_T125->f1.ensures_assn= 0;_T125->f1.throws_clause= 0;_T125->f1.throws_assn= 0;_T125->f1.return_value= 0;_T125->f1.arg_vardecls= 0;_T125->f1.effconstr= 0;_TC5= (struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T125;}_TC6= (void*)_TC5;
# 743
return _TC6;}}case 7: _TC7= t;{struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*_T125=(struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*)_TC7;_T11A= _T125->f1;_T11E= _T125->f3;}{enum Cyc_Absyn_AggrKind k=_T11A;struct Cyc_List_List*fs=_T11E;
# 749
struct Cyc_List_List*fs2=0;
_TLAB: if(fs!=0)goto _TLA9;else{goto _TLAA;}
_TLA9:{struct Cyc_List_List*_T125=_cycalloc(sizeof(struct Cyc_List_List));_TC9= fs;_TCA= _TC9->hd;_TCB= (struct Cyc_Absyn_Aggrfield*)_TCA;_TCC= ctxt;_TCD= fs;_TCE= _TCD->hd;_TCF= (struct Cyc_Absyn_Aggrfield*)_TCE;_TD0= _TCF->type;_TD1= Cyc_Toc_trans_type(_TCC,_TD0);({__typeof__(Cyc_Toc_aggrfield_to_c(_TCB,_TD1))_T126=Cyc_Toc_aggrfield_to_c(_TCB,_TD1);_T125->hd= _T126;});_T125->tl= fs2;_TC8= (struct Cyc_List_List*)_T125;}fs2= _TC8;_TD2= fs;
# 750
fs= _TD2->tl;goto _TLAB;_TLAA: _TD3= ctxt;_TD4= k;_TD5= 
# 752
Cyc_List_imp_rev(fs2);_TD6= Cyc_Toc_add_anon_aggr_type(_TD3,_TD4,_TD5);return _TD6;}case 8: _TD7= t;{struct Cyc_Absyn_TypedefType_Absyn_Type_struct*_T125=(struct Cyc_Absyn_TypedefType_Absyn_Type_struct*)_TD7;_T119= _T125->f1;_T11E= _T125->f2;_T118= _T125->f3;_TD8= _T125->f4;_T124= (void*)_TD8;}{struct _tuple1*tdn=_T119;struct Cyc_List_List*ts=_T11E;struct Cyc_Absyn_Typedefdecl*td=_T118;void*topt=_T124;
# 797
if(topt!=0)goto _TLAC;
if(ts!=0)goto _TLAE;_TD9= t;goto _TLAF;_TLAE:{struct Cyc_Absyn_TypedefType_Absyn_Type_struct*_T125=_cycalloc(sizeof(struct Cyc_Absyn_TypedefType_Absyn_Type_struct));_T125->tag= 8;_T125->f1= tdn;_T125->f2= 0;_T125->f3= td;_T125->f4= 0;_TDA= (struct Cyc_Absyn_TypedefType_Absyn_Type_struct*)_T125;}_TD9= (void*)_TDA;_TLAF: return _TD9;_TLAC: {
# 800
void*res=Cyc_Toc_trans_type(ctxt,topt);_TDB= tdn;_TDC= *_TDB;_TDD= _TDC.f1;_TDE= *_TDD;_TDF= 
_tag_fat("iter_t",sizeof(char),7U);_TE0= Cyc_strcmp(_TDE,_TDF);if(_TE0!=0)goto _TLB0;_TE1= 
Cyc_Toc_is_void_star(res);if(!_TE1)goto _TLB2;_TE2= _tag_fat("iter_t translated to void*",sizeof(char),27U);_TE3= _tag_fat(0U,sizeof(void*),0);Cyc_Warn_warn(0U,_TE2,_TE3);goto _TLB3;
_TLB2: _TE4= _tag_fat("iter_t translated to non-void*",sizeof(char),31U);_TE5= _tag_fat(0U,sizeof(void*),0);Cyc_Warn_warn(0U,_TE4,_TE5);_TLB3: goto _TLB1;_TLB0: _TLB1:{struct Cyc_Absyn_TypedefType_Absyn_Type_struct*_T125=_cycalloc(sizeof(struct Cyc_Absyn_TypedefType_Absyn_Type_struct));_T125->tag= 8;
# 805
_T125->f1= tdn;_T125->f2= 0;_T125->f3= td;_T125->f4= res;_TE6= (struct Cyc_Absyn_TypedefType_Absyn_Type_struct*)_T125;}_TE7= (void*)_TE6;return _TE7;}}case 9: _TE8= t;{struct Cyc_Absyn_ValueofType_Absyn_Type_struct*_T125=(struct Cyc_Absyn_ValueofType_Absyn_Type_struct*)_TE8;_T120= _T125->f1;}{struct Cyc_Absyn_Exp*e=_T120;_TE9= t;
# 826
return _TE9;}case 11: _TEA= t;{struct Cyc_Absyn_TypeofType_Absyn_Type_struct*_T125=(struct Cyc_Absyn_TypeofType_Absyn_Type_struct*)_TEA;_T120= _T125->f1;}{struct Cyc_Absyn_Exp*e=_T120;
# 831
Cyc_Toc_trans_exptypes(ctxt,e);_TEC= e;_TED= _TEC->topt;
if(_TED!=0)goto _TLB4;_TEB= t;goto _TLB5;_TLB4: _TEE= ctxt;_TEF= e;_TF0= _TEF->topt;_TEB= Cyc_Toc_trans_type(_TEE,_TF0);_TLB5: return _TEB;}case 10: _TF1= t;_TF2= (struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*)_TF1;_TF3= _TF2->f1;_TF4= (struct Cyc_Absyn_TypeDecl*)_TF3;_TF5= _TF4->r;_TF6= (int*)_TF5;_TF7= *_TF6;switch(_TF7){case 0: _TF8= t;{struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*_T125=(struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*)_TF8;_TF9= _T125->f1;{struct Cyc_Absyn_TypeDecl _T126=*_TF9;_TFA= _T126.r;{struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct*_T127=(struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct*)_TFA;_T117= _T127->f1;}}}{struct Cyc_Absyn_Aggrdecl*ad=_T117;
# 834
Cyc_Toc_trans_aggrdecl(ctxt,ad);_TFB= ctxt;_TFC= ad;_TFD= _TFC->name;_TFF= ad;_T100= _TFF->kind;_T101= (int)_T100;
if(_T101!=1)goto _TLB7;_TFE= Cyc_Absyn_unionq_type;goto _TLB8;_TLB7: _TFE= Cyc_Absyn_strctq;_TLB8: _T102= Cyc_Toc_aggrdecl_type(_TFB,_TFD,_TFE);return _T102;}case 1: _T103= t;{struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*_T125=(struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*)_T103;_T104= _T125->f1;{struct Cyc_Absyn_TypeDecl _T126=*_T104;_T105= _T126.r;{struct Cyc_Absyn_Enum_td_Absyn_Raw_typedecl_struct*_T127=(struct Cyc_Absyn_Enum_td_Absyn_Raw_typedecl_struct*)_T105;_T116= _T127->f1;}}}{struct Cyc_Absyn_Enumdecl*ed=_T116;
# 837
Cyc_Toc_trans_enumdecl(ctxt,ed);_T106= t;
return _T106;}default: _T107= t;{struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*_T125=(struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*)_T107;_T108= _T125->f1;{struct Cyc_Absyn_TypeDecl _T126=*_T108;_T109= _T126.r;{struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct*_T127=(struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct*)_T109;_T115= _T127->f1;}}_T114= _T125->f2;}{struct Cyc_Absyn_Datatypedecl*dd=_T115;void**t=_T114;
# 840
Cyc_Toc_trans_datatypedecl(ctxt,dd);_T10A= ctxt;_T10B= 
_check_null(t);_T10C= *_T10B;_T10D= Cyc_Toc_trans_type(_T10A,_T10C);return _T10D;}};default: _T10E= t;{struct Cyc_Absyn_SubsetType_Absyn_Type_struct*_T125=(struct Cyc_Absyn_SubsetType_Absyn_Type_struct*)_T10E;_T113= _T125->f1;}{struct Cyc_Absyn_Vardecl*vd=_T113;_T10F= ctxt;_T110= vd;_T111= _T110->type;_T112= 
# 843
Cyc_Toc_trans_type(_T10F,_T111);return _T112;}};}
# 847
static struct Cyc_Absyn_Exp*Cyc_Toc_array_to_ptr_cast(void*t,struct Cyc_Absyn_Exp*e,unsigned l){void*_T0;int*_T1;int _T2;void*_T3;struct Cyc_Absyn_ArrayInfo _T4;struct Cyc_Absyn_ArrayInfo _T5;void*_T6;struct Cyc_Absyn_Exp*_T7;struct Cyc_Absyn_Exp*_T8;struct Cyc_Absyn_Exp*_T9;struct Cyc_Absyn_Tqual _TA;void*_TB;_T0= t;_T1= (int*)_T0;_T2= *_T1;if(_T2!=5)goto _TLB9;_T3= t;{struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_TC=(struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_T3;_T4= _TC->f1;_TB= _T4.elt_type;_T5= _TC->f1;_TA= _T5.tq;}{void*t2=_TB;struct Cyc_Absyn_Tqual tq=_TA;_T6= 
# 850
Cyc_Absyn_star_type(t2,Cyc_Absyn_heap_rgn_type,Cyc_Absyn_al_qual_type,tq,Cyc_Absyn_false_type,Cyc_Absyn_false_type);_T7= e;_T8= Cyc_Toc_cast_it(_T6,_T7);return _T8;}_TLB9: _T9= 
# 852
Cyc_Toc_cast_it(t,e);return _T9;;}
# 858
static long Cyc_Toc_atomic_type(void*t){int*_T0;unsigned _T1;void*_T2;void*_T3;int*_T4;unsigned _T5;void*_T6;union Cyc_Absyn_AggrInfo _T7;struct _union_AggrInfo_UnknownAggr _T8;unsigned _T9;struct Cyc_Absyn_Aggrdecl*_TA;struct Cyc_Absyn_AggrdeclImpl*_TB;struct Cyc_Absyn_Aggrdecl*_TC;struct Cyc_Absyn_AggrdeclImpl*_TD;struct Cyc_List_List*_TE;void*_TF;struct Cyc_Absyn_Aggrfield*_T10;void*_T11;long _T12;struct Cyc_List_List*_T13;void*_T14;struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct*_T15;union Cyc_Absyn_DatatypeFieldInfo _T16;struct _union_DatatypeFieldInfo_KnownDatatypefield _T17;unsigned _T18;void*_T19;union Cyc_Absyn_DatatypeFieldInfo _T1A;struct _union_DatatypeFieldInfo_KnownDatatypefield _T1B;struct _tuple2 _T1C;union Cyc_Absyn_DatatypeFieldInfo _T1D;struct _union_DatatypeFieldInfo_KnownDatatypefield _T1E;struct _tuple2 _T1F;struct Cyc_Absyn_Datatypefield*_T20;struct Cyc_List_List*_T21;void*_T22;struct _tuple28*_T23;struct _tuple28 _T24;void*_T25;long _T26;struct Cyc_List_List*_T27;struct Cyc_Warn_String_Warn_Warg_struct _T28;struct Cyc_Warn_Typ_Warn_Warg_struct _T29;int(*_T2A)(struct _fat_ptr ap);struct _fat_ptr _T2B;struct Cyc_Absyn_ArrayInfo _T2C;long _T2D;struct Cyc_List_List*_T2E;void*_T2F;struct Cyc_Absyn_Aggrfield*_T30;void*_T31;long _T32;struct Cyc_List_List*_T33;struct Cyc_Warn_String_Warn_Warg_struct _T34;struct Cyc_Warn_Typ_Warn_Warg_struct _T35;int(*_T36)(struct _fat_ptr ap);struct _fat_ptr _T37;
void*_T38=Cyc_Absyn_compress(t);struct Cyc_List_List*_T39;void*_T3A;_T0= (int*)_T38;_T1= *_T0;switch(_T1){case 2:
# 861
 return 0;case 0:{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T3B=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T38;_T2= _T3B->f1;_T3A= (void*)_T2;_T39= _T3B->f2;}{void*c=_T3A;struct Cyc_List_List*ts=_T39;struct Cyc_Absyn_Datatypefield*_T3B;struct Cyc_Absyn_Datatypedecl*_T3C;union Cyc_Absyn_AggrInfo _T3D;_T3= c;_T4= (int*)_T3;_T5= *_T4;switch(_T5){case 0: goto _LL13;case 1: _LL13: goto _LL15;case 2: _LL15: goto _LL17;case 5: _LL17: goto _LL19;case 19: _LL19: goto _LL1B;case 20: _LL1B:
# 870
 return 1;case 22: goto _LL1F;case 4: _LL1F: goto _LL21;case 21: _LL21:
# 874
 return 0;case 24: _T6= c;{struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_T3E=(struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*)_T6;_T3D= _T3E->f1;}{union Cyc_Absyn_AggrInfo info=_T3D;_T7= info;_T8= _T7.UnknownAggr;_T9= _T8.tag;if(_T9!=1)goto _TLBD;
# 883
return 0;_TLBD: goto _LL28;_LL28: {
# 887
struct Cyc_Absyn_Aggrdecl*ad=Cyc_Absyn_get_known_aggrdecl(info);_TA= ad;_TB= _TA->impl;
if(_TB!=0)goto _TLBF;
return 0;_TLBF: _TC= ad;_TD= _TC->impl;{
struct Cyc_List_List*fs=_TD->fields;_TLC4: if(fs!=0)goto _TLC2;else{goto _TLC3;}
_TLC2: _TE= fs;_TF= _TE->hd;_T10= (struct Cyc_Absyn_Aggrfield*)_TF;_T11= _T10->type;_T12= Cyc_Toc_atomic_type(_T11);if(_T12)goto _TLC5;else{goto _TLC7;}
_TLC7: return 0;_TLC5: _T13= fs;
# 890
fs= _T13->tl;goto _TLC4;_TLC3:;}
# 893
return 1;}}case 23: _T14= c;_T15= (struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct*)_T14;_T16= _T15->f1;_T17= _T16.KnownDatatypefield;_T18= _T17.tag;if(_T18!=2)goto _TLC8;_T19= c;{struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct*_T3E=(struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct*)_T19;_T1A= _T3E->f1;_T1B= _T1A.KnownDatatypefield;_T1C= _T1B.val;_T3C= _T1C.f0;_T1D= _T3E->f1;_T1E= _T1D.KnownDatatypefield;_T1F= _T1E.val;_T3B= _T1F.f1;}{struct Cyc_Absyn_Datatypedecl*tud=_T3C;struct Cyc_Absyn_Datatypefield*tuf=_T3B;_T20= tuf;{
# 895
struct Cyc_List_List*tqs=_T20->typs;_TLCD: if(tqs!=0)goto _TLCB;else{goto _TLCC;}
_TLCB: _T21= tqs;_T22= _T21->hd;_T23= (struct _tuple28*)_T22;_T24= *_T23;_T25= _T24.f1;_T26= Cyc_Toc_atomic_type(_T25);if(_T26)goto _TLCE;else{goto _TLD0;}
_TLD0: return 0;_TLCE: _T27= tqs;
# 895
tqs= _T27->tl;goto _TLCD;_TLCC:;}
# 898
return 1;}_TLC8: goto _LL26;default: _LL26:{struct Cyc_Warn_String_Warn_Warg_struct _T3E;_T3E.tag= 0;
# 900
({__typeof__(_tag_fat("atomic_typ: bad type ",sizeof(char),22U))_T3F=_tag_fat("atomic_typ: bad type ",sizeof(char),22U);_T3E.f1= _T3F;});_T28= _T3E;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E=_T28;{struct Cyc_Warn_Typ_Warn_Warg_struct _T3F;_T3F.tag= 2;_T3F.f1= t;_T29= _T3F;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T3F=_T29;void*_T40[2];_T40[0]= & _T3E;_T40[1]= & _T3F;{int(*_T41)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T2A= _T41;}_T2B= _tag_fat(_T40,sizeof(void*),2);_T2A(_T2B);}}};}case 6:
# 903
 return 1;case 5:{struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T3B=(struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_T38;_T2C= _T3B->f1;_T3A= _T2C.elt_type;}{void*t=_T3A;_T2D= 
# 905
Cyc_Toc_atomic_type(t);return _T2D;}case 7:{struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*_T3B=(struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*)_T38;_T39= _T3B->f3;}{struct Cyc_List_List*fs=_T39;
# 907
_TLD4: if(fs!=0)goto _TLD2;else{goto _TLD3;}
_TLD2: _T2E= fs;_T2F= _T2E->hd;_T30= (struct Cyc_Absyn_Aggrfield*)_T2F;_T31= _T30->type;_T32= Cyc_Toc_atomic_type(_T31);if(_T32)goto _TLD5;else{goto _TLD7;}
_TLD7: return 0;_TLD5: _T33= fs;
# 907
fs= _T33->tl;goto _TLD4;_TLD3:
# 910
 return 1;}case 4:
# 912
 return 0;default:{struct Cyc_Warn_String_Warn_Warg_struct _T3B;_T3B.tag= 0;
# 914
({__typeof__(_tag_fat("atomic_typ:  bad type ",sizeof(char),23U))_T3C=_tag_fat("atomic_typ:  bad type ",sizeof(char),23U);_T3B.f1= _T3C;});_T34= _T3B;}{struct Cyc_Warn_String_Warn_Warg_struct _T3B=_T34;{struct Cyc_Warn_Typ_Warn_Warg_struct _T3C;_T3C.tag= 2;_T3C.f1= t;_T35= _T3C;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T3C=_T35;void*_T3D[2];_T3D[0]= & _T3B;_T3D[1]= & _T3C;{int(*_T3E)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T36= _T3E;}_T37= _tag_fat(_T3D,sizeof(void*),2);_T36(_T37);}}};}
# 919
static long Cyc_Toc_is_poly_field(void*t,struct _fat_ptr*f){int*_T0;unsigned _T1;struct Cyc_Absyn_Vardecl*_T2;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T3;void*_T4;int*_T5;int _T6;void*_T7;struct Cyc_Absyn_Aggrdecl*_T8;struct Cyc_Absyn_AggrdeclImpl*_T9;struct Cyc_Warn_String_Warn_Warg_struct _TA;int(*_TB)(struct _fat_ptr ap);struct _fat_ptr _TC;struct Cyc_Absyn_Aggrdecl*_TD;struct Cyc_Absyn_AggrdeclImpl*_TE;struct Cyc_Warn_String_Warn_Warg_struct _TF;struct Cyc_Warn_String_Warn_Warg_struct _T10;struct _fat_ptr*_T11;int(*_T12)(struct _fat_ptr ap);struct _fat_ptr _T13;struct Cyc_Absyn_Aggrfield*_T14;void*_T15;long _T16;struct Cyc_Warn_String_Warn_Warg_struct _T17;struct Cyc_Warn_Typ_Warn_Warg_struct _T18;int(*_T19)(struct _fat_ptr ap);struct _fat_ptr _T1A;
loop: {
void*_T1B=Cyc_Absyn_compress(t);struct Cyc_List_List*_T1C;union Cyc_Absyn_AggrInfo _T1D;struct Cyc_Absyn_Vardecl*_T1E;_T0= (int*)_T1B;_T1= *_T0;switch(_T1){case 12:{struct Cyc_Absyn_SubsetType_Absyn_Type_struct*_T1F=(struct Cyc_Absyn_SubsetType_Absyn_Type_struct*)_T1B;_T1E= _T1F->f1;}{struct Cyc_Absyn_Vardecl*vd=_T1E;_T2= vd;
# 923
t= _T2->type;goto loop;}case 0: _T3= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T1B;_T4= _T3->f1;_T5= (int*)_T4;_T6= *_T5;if(_T6!=24)goto _TLD9;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T1F=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T1B;_T7= _T1F->f1;{struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_T20=(struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*)_T7;_T1D= _T20->f1;}}{union Cyc_Absyn_AggrInfo info=_T1D;
# 926
struct Cyc_Absyn_Aggrdecl*ad=Cyc_Absyn_get_known_aggrdecl(info);_T8= ad;_T9= _T8->impl;
if(_T9!=0)goto _TLDB;{struct Cyc_Warn_String_Warn_Warg_struct _T1F;_T1F.tag= 0;
({__typeof__(_tag_fat("is_poly_field: type missing fields",sizeof(char),35U))_T20=_tag_fat("is_poly_field: type missing fields",sizeof(char),35U);_T1F.f1= _T20;});_TA= _T1F;}{struct Cyc_Warn_String_Warn_Warg_struct _T1F=_TA;void*_T20[1];_T20[0]= & _T1F;{int(*_T21)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_TB= _T21;}_TC= _tag_fat(_T20,sizeof(void*),1);_TB(_TC);}goto _TLDC;_TLDB: _TLDC: _TD= ad;_TE= _TD->impl;_T1C= _TE->fields;goto _LL6;}_TLD9: goto _LL7;case 7:{struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*_T1F=(struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*)_T1B;_T1C= _T1F->f3;}_LL6: {struct Cyc_List_List*fs=_T1C;
# 931
struct Cyc_Absyn_Aggrfield*field=Cyc_Absyn_lookup_field(fs,f);
if(field!=0)goto _TLDD;{struct Cyc_Warn_String_Warn_Warg_struct _T1F;_T1F.tag= 0;
({__typeof__(_tag_fat("is_poly_field: bad field ",sizeof(char),26U))_T20=_tag_fat("is_poly_field: bad field ",sizeof(char),26U);_T1F.f1= _T20;});_TF= _T1F;}{struct Cyc_Warn_String_Warn_Warg_struct _T1F=_TF;{struct Cyc_Warn_String_Warn_Warg_struct _T20;_T20.tag= 0;_T11= f;_T20.f1= *_T11;_T10= _T20;}{struct Cyc_Warn_String_Warn_Warg_struct _T20=_T10;void*_T21[2];_T21[0]= & _T1F;_T21[1]= & _T20;{int(*_T22)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T12= _T22;}_T13= _tag_fat(_T21,sizeof(void*),2);_T12(_T13);}}goto _TLDE;_TLDD: _TLDE: _T14= field;_T15= _T14->type;_T16= 
Cyc_Toc_is_void_star_or_boxed_tvar(_T15);return _T16;}default: _LL7:{struct Cyc_Warn_String_Warn_Warg_struct _T1F;_T1F.tag= 0;
# 936
({__typeof__(_tag_fat("is_poly_field: bad type ",sizeof(char),25U))_T20=_tag_fat("is_poly_field: bad type ",sizeof(char),25U);_T1F.f1= _T20;});_T17= _T1F;}{struct Cyc_Warn_String_Warn_Warg_struct _T1F=_T17;{struct Cyc_Warn_Typ_Warn_Warg_struct _T20;_T20.tag= 2;_T20.f1= t;_T18= _T20;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T20=_T18;void*_T21[2];_T21[0]= & _T1F;_T21[1]= & _T20;{int(*_T22)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T19= _T22;}_T1A= _tag_fat(_T21,sizeof(void*),2);_T19(_T1A);}}};}}
# 943
static long Cyc_Toc_is_poly_project(struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;int*_T1;unsigned _T2;int _T3;struct Cyc_Absyn_Exp*_T4;void*_T5;void*_T6;struct _fat_ptr*_T7;long _T8;struct Cyc_Absyn_Exp*_T9;void*_TA;void*_TB;long _TC;struct Cyc_Absyn_Exp*_TD;void*_TE;void*_TF;int*_T10;int _T11;struct Cyc_Absyn_PtrInfo _T12;int _T13;long _T14;struct Cyc_Absyn_Exp*_T15;void*_T16;void*_T17;long _T18;struct Cyc_Warn_String_Warn_Warg_struct _T19;struct Cyc_Warn_Typ_Warn_Warg_struct _T1A;struct Cyc_Absyn_Exp*_T1B;void*_T1C;int(*_T1D)(struct _fat_ptr ap);struct _fat_ptr _T1E;_T0= e;{
void*_T1F=_T0->r;struct _fat_ptr*_T20;struct Cyc_Absyn_Exp*_T21;_T1= (int*)_T1F;_T2= *_T1;switch(_T2){case 21:{struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*_T22=(struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*)_T1F;_T21= _T22->f1;_T20= _T22->f2;}{struct Cyc_Absyn_Exp*e1=_T21;struct _fat_ptr*f=_T20;_T4= e1;_T5= _T4->topt;_T6= 
# 946
_check_null(_T5);_T7= f;_T8= Cyc_Toc_is_poly_field(_T6,_T7);if(!_T8)goto _TLE0;_T9= e;_TA= _T9->topt;_TB= _check_null(_TA);_TC= Cyc_Toc_is_void_star_or_boxed_tvar(_TB);_T3= !_TC;goto _TLE1;_TLE0: _T3= 0;_TLE1: return _T3;}case 22:{struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*_T22=(struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*)_T1F;_T21= _T22->f1;_T20= _T22->f2;}{struct Cyc_Absyn_Exp*e1=_T21;struct _fat_ptr*f=_T20;_TD= e1;_TE= _TD->topt;_TF= 
# 948
_check_null(_TE);{void*_T22=Cyc_Absyn_compress(_TF);void*_T23;_T10= (int*)_T22;_T11= *_T10;if(_T11!=4)goto _TLE2;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T24=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T22;_T12= _T24->f1;_T23= _T12.elt_type;}{void*t=_T23;_T14= 
# 950
Cyc_Toc_is_poly_field(t,f);if(!_T14)goto _TLE4;_T15= e;_T16= _T15->topt;_T17= _check_null(_T16);_T18= Cyc_Toc_is_void_star_or_boxed_tvar(_T17);_T13= !_T18;goto _TLE5;_TLE4: _T13= 0;_TLE5: return _T13;}_TLE2:{struct Cyc_Warn_String_Warn_Warg_struct _T24;_T24.tag= 0;
# 952
({__typeof__(_tag_fat("is_poly_project: bad type ",sizeof(char),27U))_T25=_tag_fat("is_poly_project: bad type ",sizeof(char),27U);_T24.f1= _T25;});_T19= _T24;}{struct Cyc_Warn_String_Warn_Warg_struct _T24=_T19;{struct Cyc_Warn_Typ_Warn_Warg_struct _T25;_T25.tag= 2;_T1B= e1;_T1C= _T1B->topt;({__typeof__(_check_null(_T1C))_T26=_check_null(_T1C);_T25.f1= _T26;});_T1A= _T25;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T25=_T1A;void*_T26[2];_T26[0]= & _T24;_T26[1]= & _T25;{int(*_T27)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T1D= _T27;}_T1E= _tag_fat(_T26,sizeof(void*),2);_T1D(_T1E);}};}}default:
# 955
 return 0;};}}
# 960
static struct Cyc_Absyn_Exp*Cyc_Toc_malloc_exp(struct Cyc_Toc_TocContext*ctxt,void*t,struct Cyc_Absyn_Exp*s){struct Cyc_Absyn_Exp*_T0;long _T1;struct Cyc_Absyn_Exp*_T2;struct Cyc_Absyn_Exp*_T3;struct _fat_ptr _T4;void*_T5;struct Cyc_Absyn_Exp*_T6;_T1= 
Cyc_Toc_atomic_type(t);if(!_T1)goto _TLE6;_T0= Cyc_Toc__cycalloc_atomic_e;goto _TLE7;_TLE6: _T0= Cyc_Toc__cycalloc_e;_TLE7: {struct Cyc_Absyn_Exp*fn_e=_T0;{struct Cyc_Absyn_Exp*_T7[1];_T7[0]= s;_T3= fn_e;_T4= _tag_fat(_T7,sizeof(struct Cyc_Absyn_Exp*),1);_T2= Cyc_Toc_fncall_exp_dl(_T3,_T4);}_T5= 
Cyc_Toc_void_star_type(ctxt);_T6= Cyc_Absyn_set_type(_T2,_T5);return _T6;}}
# 965
static struct Cyc_Absyn_Exp*Cyc_Toc_calloc_exp(struct Cyc_Toc_TocContext*ctxt,void*elt_type,struct Cyc_Absyn_Exp*s,struct Cyc_Absyn_Exp*n){struct Cyc_Absyn_Exp*_T0;long _T1;struct Cyc_Absyn_Exp*_T2;struct Cyc_Absyn_Exp*_T3;struct _fat_ptr _T4;void*_T5;struct Cyc_Absyn_Exp*_T6;_T1= 
Cyc_Toc_atomic_type(elt_type);if(!_T1)goto _TLE8;_T0= Cyc_Toc__cyccalloc_atomic_e;goto _TLE9;_TLE8: _T0= Cyc_Toc__cyccalloc_e;_TLE9: {struct Cyc_Absyn_Exp*fn_e=_T0;{struct Cyc_Absyn_Exp*_T7[2];
_T7[0]= s;_T7[1]= n;_T3= fn_e;_T4= _tag_fat(_T7,sizeof(struct Cyc_Absyn_Exp*),2);_T2= Cyc_Toc_fncall_exp_dl(_T3,_T4);}_T5= Cyc_Toc_void_star_type(ctxt);_T6= Cyc_Absyn_set_type(_T2,_T5);return _T6;}}
# 970
static struct Cyc_Absyn_Exp*Cyc_Toc_rmalloc_exp(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Absyn_Exp*rgn,struct Cyc_Absyn_Exp*aq,struct Cyc_Absyn_Exp*s){struct Cyc_Absyn_Exp*_T0;struct Cyc_Absyn_Exp*_T1;struct _fat_ptr _T2;void*_T3;struct Cyc_Absyn_Exp*_T4;{struct Cyc_Absyn_Exp*_T5[3];
_T5[0]= rgn;_T5[1]= aq;_T5[2]= s;_T1= Cyc_Toc__region_malloc_e;_T2= _tag_fat(_T5,sizeof(struct Cyc_Absyn_Exp*),3);_T0= Cyc_Toc_fncall_exp_dl(_T1,_T2);}_T3= Cyc_Toc_void_star_type(ctxt);_T4= Cyc_Absyn_set_type(_T0,_T3);return _T4;}
# 973
static struct Cyc_Absyn_Exp*Cyc_Toc_aqmalloc_exp(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Absyn_Exp*aq,struct Cyc_Absyn_Exp*s){struct Cyc_Absyn_Exp*_T0;struct Cyc_Absyn_Exp*_T1;struct _fat_ptr _T2;void*_T3;struct Cyc_Absyn_Exp*_T4;{struct Cyc_Absyn_Exp*_T5[2];
_T5[0]= aq;_T5[1]= s;_T1= Cyc_Toc__aqual_malloc_e;_T2= _tag_fat(_T5,sizeof(struct Cyc_Absyn_Exp*),2);_T0= Cyc_Toc_fncall_exp_dl(_T1,_T2);}_T3= Cyc_Toc_void_star_type(ctxt);_T4= Cyc_Absyn_set_type(_T0,_T3);return _T4;}
# 977
static struct Cyc_Absyn_Exp*Cyc_Toc_rvmalloc_exp(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Absyn_Exp*rgn,struct Cyc_Absyn_Exp*s){struct Cyc_Absyn_Exp*_T0;struct Cyc_Absyn_Exp*_T1;struct _fat_ptr _T2;void*_T3;struct Cyc_Absyn_Exp*_T4;{struct Cyc_Absyn_Exp*_T5[2];
_T5[0]= rgn;_T5[1]= s;_T1= Cyc_Toc__region_vmalloc_e;_T2= _tag_fat(_T5,sizeof(struct Cyc_Absyn_Exp*),2);_T0= Cyc_Toc_fncall_exp_dl(_T1,_T2);}_T3= Cyc_Toc_void_star_type(ctxt);_T4= Cyc_Absyn_set_type(_T0,_T3);return _T4;}
# 981
static struct Cyc_Absyn_Exp*Cyc_Toc_rmalloc_inline_exp(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Absyn_Exp*rgn,struct Cyc_Absyn_Exp*aq,struct Cyc_Absyn_Exp*s){struct Cyc_Absyn_Exp*_T0;struct Cyc_Absyn_Exp*_T1;struct _fat_ptr _T2;void*_T3;struct Cyc_Absyn_Exp*_T4;{struct Cyc_Absyn_Exp*_T5[3];
_T5[0]= rgn;_T5[1]= aq;_T5[2]= s;_T1= Cyc_Toc__fast_region_malloc_e;_T2= _tag_fat(_T5,sizeof(struct Cyc_Absyn_Exp*),3);_T0= Cyc_Toc_fncall_exp_dl(_T1,_T2);}_T3= Cyc_Toc_void_star_type(ctxt);_T4= Cyc_Absyn_set_type(_T0,_T3);return _T4;}
# 985
static struct Cyc_Absyn_Exp*Cyc_Toc_rcalloc_exp(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Absyn_Exp*rgn,struct Cyc_Absyn_Exp*aq,struct Cyc_Absyn_Exp*s,struct Cyc_Absyn_Exp*n){struct Cyc_Absyn_Exp*_T0;struct Cyc_Absyn_Exp*_T1;struct _fat_ptr _T2;void*_T3;struct Cyc_Absyn_Exp*_T4;{struct Cyc_Absyn_Exp*_T5[4];
_T5[0]= rgn;_T5[1]= aq;_T5[2]= s;_T5[3]= n;_T1= Cyc_Toc__region_calloc_e;_T2= _tag_fat(_T5,sizeof(struct Cyc_Absyn_Exp*),4);_T0= Cyc_Toc_fncall_exp_dl(_T1,_T2);}_T3= Cyc_Toc_void_star_type(ctxt);_T4= Cyc_Absyn_set_type(_T0,_T3);return _T4;}
# 988
static struct Cyc_Absyn_Exp*Cyc_Toc_aqcalloc_exp(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Absyn_Exp*aq,struct Cyc_Absyn_Exp*s,struct Cyc_Absyn_Exp*n){struct Cyc_Absyn_Exp*_T0;struct Cyc_Absyn_Exp*_T1;struct _fat_ptr _T2;void*_T3;struct Cyc_Absyn_Exp*_T4;{struct Cyc_Absyn_Exp*_T5[3];
_T5[0]= aq;_T5[1]= s;_T5[2]= n;_T1= Cyc_Toc__aqual_calloc_e;_T2= _tag_fat(_T5,sizeof(struct Cyc_Absyn_Exp*),3);_T0= Cyc_Toc_fncall_exp_dl(_T1,_T2);}_T3= Cyc_Toc_void_star_type(ctxt);_T4= Cyc_Absyn_set_type(_T0,_T3);return _T4;}
# 992
static struct Cyc_Absyn_Stmt*Cyc_Toc_throw_match_stmt(struct Cyc_Toc_TocContext*ctxt){struct Cyc_Absyn_Exp*_T0;struct _fat_ptr _T1;struct Cyc_Absyn_Exp*_T2;void*_T3;struct Cyc_Absyn_Exp*_T4;struct Cyc_Absyn_Stmt*_T5;_T0= Cyc_Toc__throw_match_e;_T1= _tag_fat(0U,sizeof(struct Cyc_Absyn_Exp*),0);_T2= 
Cyc_Toc_fncall_exp_dl(_T0,_T1);_T3= Cyc_Toc_void_star_type(ctxt);_T4= Cyc_Absyn_set_type(_T2,_T3);_T5= Cyc_Absyn_exp_stmt(_T4,0U);return _T5;}
# 997
static struct Cyc_Absyn_Exp*Cyc_Toc_make_toplevel_dyn_arr(struct Cyc_Toc_TocContext*ctxt,void*t,struct Cyc_Absyn_Exp*sz,struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;int*_T1;int _T2;struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T3;union Cyc_Absyn_Cnst _T4;struct _union_Cnst_Wstring_c _T5;unsigned _T6;struct Cyc_Toc_TocContext*_T7;struct Cyc_List_List*_T8;struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T9;void*_TA;struct Cyc_Toc_TocContext*_TB;void*_TC;struct Cyc_Absyn_Exp*_TD;void*_TE;struct Cyc_Absyn_Exp*_TF;struct Cyc_Absyn_Exp*_T10;void*_T11;void*_T12;struct Cyc_Absyn_Exp*_T13;void*_T14;struct Cyc_Absyn_Exp*_T15;struct Cyc_Absyn_Exp*_T16;struct Cyc_Absyn_Exp*_T17;struct Cyc_List_List*_T18;struct _tuple22*_T19;struct _tuple22*_T1A;struct _tuple22*_T1B;struct _fat_ptr _T1C;struct Cyc_Absyn_Exp*_T1D;
# 1005
struct Cyc_Absyn_Exp*xexp;
struct Cyc_Absyn_Exp*xplussz;_T0= e;{
void*_T1E=_T0->r;_T1= (int*)_T1E;_T2= *_T1;if(_T2!=0)goto _TLEA;_T3= (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_T1E;_T4= _T3->f1;_T5= _T4.Wstring_c;_T6= _T5.tag;switch(_T6){case 9: goto _LL4;case 10: _LL4: {
# 1010
struct _tuple1*x=Cyc_Toc_temp_var(ctxt);
void*vd_typ=Cyc_Absyn_array_type(Cyc_Absyn_char_type,Cyc_Toc_mt_tq,sz,Cyc_Absyn_false_type,0U);
struct Cyc_Absyn_Vardecl*vd=Cyc_Absyn_static_vardecl(x,vd_typ,e);_T7= ctxt;{struct Cyc_List_List*_T1F=_cycalloc(sizeof(struct Cyc_List_List));{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T20=_cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));_T20->tag= 0;
_T20->f1= vd;_T9= (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T20;}_TA= (void*)_T9;({__typeof__(Cyc_Absyn_new_decl(_TA,0U))_T20=Cyc_Absyn_new_decl(_TA,0U);_T1F->hd= _T20;});_TB= ctxt;_T1F->tl= _TB->result_decls;_T8= (struct Cyc_List_List*)_T1F;}_T7->result_decls= _T8;_TC= 
Cyc_Absyn_cstar_type(Cyc_Absyn_uchar_type,Cyc_Toc_mt_tq);_TD= 
Cyc_Absyn_var_exp(x,0U);_TE= Cyc_Absyn_cstar_type(Cyc_Absyn_char_type,Cyc_Toc_mt_tq);_TF= Cyc_Absyn_set_type(_TD,_TE);
# 1014
xexp= Cyc_Toc_cast_it(_TC,_TF);_T10= 
# 1016
Cyc_Absyn_add_exp(xexp,sz,0U);_T11= Cyc_Absyn_cstar_type(Cyc_Absyn_uchar_type,Cyc_Toc_mt_tq);xplussz= Cyc_Absyn_set_type(_T10,_T11);goto _LL0;}default: goto _LL5;}goto _TLEB;_TLEA: _LL5: _T12= 
# 1019
Cyc_Toc_void_star_type(ctxt);_T13= e;xexp= Cyc_Toc_cast_it(_T12,_T13);_T14= 
# 1021
Cyc_Toc_void_star_type(ctxt);_T15= Cyc_Toc_deep_copy(e);_T16= sz;_T17= Cyc_Absyn_add_exp(_T15,_T16,0U);xplussz= Cyc_Toc_cast_it(_T14,_T17);goto _LL0;_TLEB: _LL0:;}{struct _tuple22*_T1E[3];{struct _tuple22*_T1F=_cycalloc(sizeof(struct _tuple22));
# 1025
_T1F->f0= 0;_T1F->f1= xexp;_T19= (struct _tuple22*)_T1F;}_T1E[0]= _T19;{struct _tuple22*_T1F=_cycalloc(sizeof(struct _tuple22));_T1F->f0= 0;({__typeof__(Cyc_Toc_deep_copy(xexp))_T20=Cyc_Toc_deep_copy(xexp);_T1F->f1= _T20;});_T1A= (struct _tuple22*)_T1F;}_T1E[1]= _T1A;{struct _tuple22*_T1F=_cycalloc(sizeof(struct _tuple22));_T1F->f0= 0;_T1F->f1= xplussz;_T1B= (struct _tuple22*)_T1F;}_T1E[2]= _T1B;_T1C= _tag_fat(_T1E,sizeof(struct _tuple22*),3);_T18= Cyc_List_list(_T1C);}_T1D= 
# 1024
Cyc_Absyn_unresolvedmem_exp(0,_T18,0U);return _T1D;}
# 1041
struct Cyc_Toc_Env*Cyc_Toc_empty_env(struct _RegionHandle*r,struct Cyc_Toc_TocContext*ctxt){struct Cyc_Toc_Env*_T0;struct _RegionHandle*_T1;long*_T2;struct _RegionHandle*_T3;_T1= r;{struct Cyc_Toc_Env*_T4=_region_malloc(_T1,0U,sizeof(struct Cyc_Toc_Env));
_T4->ctxt= ctxt;_T4->break_lab= 0;_T4->continue_lab= 0;_T4->fallthru_info= 0;_T4->toplevel= 1;_T3= r;{long*_T5=_region_malloc(_T3,0U,sizeof(long));*_T5= 0;_T2= (long*)_T5;}_T4->in_lhs= _T2;_T4->rgn= r;_T0= (struct Cyc_Toc_Env*)_T4;}return _T0;}
# 1045
static long Cyc_Toc_is_toplevel(struct Cyc_Toc_Env*nv){struct Cyc_Toc_Env*_T0;long _T1;long _T2;_T0= nv;{struct Cyc_Toc_Env _T3=*_T0;_T2= _T3.toplevel;}{long t=_T2;_T1= t;
# 1047
return _T1;}}
# 1049
static struct Cyc_Toc_Env*Cyc_Toc_clear_toplevel(struct _RegionHandle*r,struct Cyc_Toc_Env*e){struct Cyc_Toc_Env*_T0;struct Cyc_Toc_Env*_T1;struct _RegionHandle*_T2;long*_T3;long _T4;struct Cyc_Toc_FallthruInfo*_T5;struct _fat_ptr**_T6;struct _fat_ptr**_T7;struct Cyc_Toc_TocContext*_T8;_T0= e;{struct Cyc_Toc_Env _T9=*_T0;_T8= _T9.ctxt;_T7= _T9.break_lab;_T6= _T9.continue_lab;_T5= _T9.fallthru_info;_T4= _T9.toplevel;_T3= _T9.in_lhs;}{struct Cyc_Toc_TocContext*ctxt=_T8;struct _fat_ptr**b=_T7;struct _fat_ptr**c=_T6;struct Cyc_Toc_FallthruInfo*f=_T5;long t=_T4;long*lhs=_T3;_T2= r;{struct Cyc_Toc_Env*_T9=_region_malloc(_T2,0U,sizeof(struct Cyc_Toc_Env));
# 1051
_T9->ctxt= ctxt;_T9->break_lab= b;_T9->continue_lab= c;_T9->fallthru_info= f;_T9->toplevel= 0;_T9->in_lhs= lhs;_T9->rgn= r;_T1= (struct Cyc_Toc_Env*)_T9;}return _T1;}}
# 1053
static struct Cyc_Toc_Env*Cyc_Toc_set_toplevel(struct _RegionHandle*r,struct Cyc_Toc_Env*e){struct Cyc_Toc_Env*_T0;struct Cyc_Toc_Env*_T1;struct _RegionHandle*_T2;long*_T3;long _T4;struct Cyc_Toc_FallthruInfo*_T5;struct _fat_ptr**_T6;struct _fat_ptr**_T7;struct Cyc_Toc_TocContext*_T8;_T0= e;{struct Cyc_Toc_Env _T9=*_T0;_T8= _T9.ctxt;_T7= _T9.break_lab;_T6= _T9.continue_lab;_T5= _T9.fallthru_info;_T4= _T9.toplevel;_T3= _T9.in_lhs;}{struct Cyc_Toc_TocContext*ctxt=_T8;struct _fat_ptr**b=_T7;struct _fat_ptr**c=_T6;struct Cyc_Toc_FallthruInfo*f=_T5;long t=_T4;long*lhs=_T3;_T2= r;{struct Cyc_Toc_Env*_T9=_region_malloc(_T2,0U,sizeof(struct Cyc_Toc_Env));
# 1055
_T9->ctxt= ctxt;_T9->break_lab= b;_T9->continue_lab= c;_T9->fallthru_info= f;_T9->toplevel= 1;_T9->in_lhs= lhs;_T9->rgn= r;_T1= (struct Cyc_Toc_Env*)_T9;}return _T1;}}
# 1057
static long Cyc_Toc_in_lhs(struct Cyc_Toc_Env*nv){struct Cyc_Toc_Env*_T0;long*_T1;long _T2;long*_T3;_T0= nv;{struct Cyc_Toc_Env _T4=*_T0;_T3= _T4.in_lhs;}{long*b=_T3;_T1= b;_T2= *_T1;
# 1059
return _T2;}}
# 1061
static void Cyc_Toc_set_lhs(struct Cyc_Toc_Env*e,long b){struct Cyc_Toc_Env*_T0;long*_T1;long*_T2;_T0= e;{struct Cyc_Toc_Env _T3=*_T0;_T2= _T3.in_lhs;}{long*lhs=_T2;_T1= lhs;
# 1063
*_T1= b;}}
# 1066
static struct Cyc_Toc_Env*Cyc_Toc_share_env(struct _RegionHandle*r,struct Cyc_Toc_Env*e){struct Cyc_Toc_Env*_T0;struct Cyc_Toc_Env*_T1;struct _RegionHandle*_T2;long*_T3;long _T4;struct Cyc_Toc_FallthruInfo*_T5;struct _fat_ptr**_T6;struct _fat_ptr**_T7;struct Cyc_Toc_TocContext*_T8;_T0= e;{struct Cyc_Toc_Env _T9=*_T0;_T8= _T9.ctxt;_T7= _T9.break_lab;_T6= _T9.continue_lab;_T5= _T9.fallthru_info;_T4= _T9.toplevel;_T3= _T9.in_lhs;}{struct Cyc_Toc_TocContext*ctxt=_T8;struct _fat_ptr**b=_T7;struct _fat_ptr**c=_T6;struct Cyc_Toc_FallthruInfo*f=_T5;long t=_T4;long*lhs=_T3;_T2= r;{struct Cyc_Toc_Env*_T9=_region_malloc(_T2,0U,sizeof(struct Cyc_Toc_Env));
# 1068
_T9->ctxt= ctxt;_T9->break_lab= b;_T9->continue_lab= c;_T9->fallthru_info= f;_T9->toplevel= t;_T9->in_lhs= lhs;_T9->rgn= r;_T1= (struct Cyc_Toc_Env*)_T9;}return _T1;}}
# 1073
static struct Cyc_Toc_Env*Cyc_Toc_loop_env(struct _RegionHandle*r,struct Cyc_Toc_Env*e){struct Cyc_Toc_Env*_T0;struct Cyc_Toc_Env*_T1;struct _RegionHandle*_T2;long*_T3;long _T4;struct Cyc_Toc_FallthruInfo*_T5;struct _fat_ptr**_T6;struct _fat_ptr**_T7;struct Cyc_Toc_TocContext*_T8;_T0= e;{struct Cyc_Toc_Env _T9=*_T0;_T8= _T9.ctxt;_T7= _T9.break_lab;_T6= _T9.continue_lab;_T5= _T9.fallthru_info;_T4= _T9.toplevel;_T3= _T9.in_lhs;}{struct Cyc_Toc_TocContext*ctxt=_T8;struct _fat_ptr**b=_T7;struct _fat_ptr**c=_T6;struct Cyc_Toc_FallthruInfo*f=_T5;long t=_T4;long*lhs=_T3;_T2= r;{struct Cyc_Toc_Env*_T9=_region_malloc(_T2,0U,sizeof(struct Cyc_Toc_Env));
# 1075
_T9->ctxt= ctxt;_T9->break_lab= 0;_T9->continue_lab= 0;_T9->fallthru_info= f;_T9->toplevel= t;_T9->in_lhs= lhs;_T9->rgn= r;_T1= (struct Cyc_Toc_Env*)_T9;}return _T1;}}
# 1079
static struct Cyc_Toc_Env*Cyc_Toc_non_last_switchclause_env(struct _RegionHandle*r,struct Cyc_Toc_Env*e,struct _fat_ptr*break_l,struct _fat_ptr*fallthru_l,struct Cyc_List_List*fallthru_binders){struct Cyc_Toc_Env*_T0;struct _RegionHandle*_T1;struct Cyc_Toc_FallthruInfo*_T2;struct Cyc_Toc_FallthruInfo*_T3;struct Cyc_Toc_Env*_T4;struct _RegionHandle*_T5;struct _fat_ptr**_T6;struct _RegionHandle*_T7;long*_T8;long _T9;struct Cyc_Toc_FallthruInfo*_TA;struct _fat_ptr**_TB;struct _fat_ptr**_TC;struct Cyc_Toc_TocContext*_TD;_T0= e;{struct Cyc_Toc_Env _TE=*_T0;_TD= _TE.ctxt;_TC= _TE.break_lab;_TB= _TE.continue_lab;_TA= _TE.fallthru_info;_T9= _TE.toplevel;_T8= _TE.in_lhs;}{struct Cyc_Toc_TocContext*ctxt=_TD;struct _fat_ptr**b=_TC;struct _fat_ptr**c=_TB;struct Cyc_Toc_FallthruInfo*f=_TA;long t=_T9;long*lhs=_T8;
# 1083
struct Cyc_Toc_FallthruInfo*fi;_T1= r;fi= _region_malloc(_T1,0U,sizeof(struct Cyc_Toc_FallthruInfo));_T2= fi;_T2->label= fallthru_l;_T3= fi;_T3->binders= fallthru_binders;_T5= r;{struct Cyc_Toc_Env*_TE=_region_malloc(_T5,0U,sizeof(struct Cyc_Toc_Env));
_TE->ctxt= ctxt;_T7= r;{struct _fat_ptr**_TF=_region_malloc(_T7,0U,sizeof(struct _fat_ptr*));*_TF= break_l;_T6= (struct _fat_ptr**)_TF;}_TE->break_lab= _T6;_TE->continue_lab= c;_TE->fallthru_info= fi;_TE->toplevel= t;_TE->in_lhs= lhs;_TE->rgn= r;_T4= (struct Cyc_Toc_Env*)_TE;}return _T4;}}
# 1086
static struct Cyc_Toc_Env*Cyc_Toc_last_switchclause_env(struct _RegionHandle*r,struct Cyc_Toc_Env*e,struct _fat_ptr*break_l){struct Cyc_Toc_Env*_T0;struct Cyc_Toc_Env*_T1;struct _RegionHandle*_T2;struct _fat_ptr**_T3;struct _RegionHandle*_T4;long*_T5;long _T6;struct Cyc_Toc_FallthruInfo*_T7;struct _fat_ptr**_T8;struct _fat_ptr**_T9;struct Cyc_Toc_TocContext*_TA;_T0= e;{struct Cyc_Toc_Env _TB=*_T0;_TA= _TB.ctxt;_T9= _TB.break_lab;_T8= _TB.continue_lab;_T7= _TB.fallthru_info;_T6= _TB.toplevel;_T5= _TB.in_lhs;}{struct Cyc_Toc_TocContext*ctxt=_TA;struct _fat_ptr**b=_T9;struct _fat_ptr**c=_T8;struct Cyc_Toc_FallthruInfo*f=_T7;long t=_T6;long*lhs=_T5;_T2= r;{struct Cyc_Toc_Env*_TB=_region_malloc(_T2,0U,sizeof(struct Cyc_Toc_Env));
# 1088
_TB->ctxt= ctxt;_T4= r;{struct _fat_ptr**_TC=_region_malloc(_T4,0U,sizeof(struct _fat_ptr*));*_TC= break_l;_T3= (struct _fat_ptr**)_TC;}_TB->break_lab= _T3;_TB->continue_lab= c;_TB->fallthru_info= 0;_TB->toplevel= t;_TB->in_lhs= lhs;_TB->rgn= r;_T1= (struct Cyc_Toc_Env*)_TB;}return _T1;}}
# 1100
void Cyc_Toc_exp_to_c(struct Cyc_Toc_Env*,struct Cyc_Absyn_Exp*);
void Cyc_Toc_stmt_to_c(struct Cyc_Toc_Env*,struct Cyc_Absyn_Stmt*);
static struct Cyc_Absyn_Stmt*Cyc_Toc_letdecl_to_c(struct Cyc_Toc_Env*,struct Cyc_Absyn_Pat*,void*,void*,struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Stmt*);
static void Cyc_Toc_local_decl_to_c(struct Cyc_Toc_Env*,struct Cyc_Absyn_Vardecl*,struct Cyc_Absyn_Stmt*);
static void Cyc_Toc_fndecl_to_c(struct Cyc_Toc_Env*,struct Cyc_Absyn_Fndecl*,long);struct _tuple37{struct _fat_ptr f0;struct Cyc_Absyn_Exp*f1;};
# 1106
static void Cyc_Toc_asm_iolist_types_toc(struct Cyc_Toc_TocContext*ctxt,struct Cyc_List_List*l){struct Cyc_Toc_TocContext*_T0;struct Cyc_List_List*_T1;void*_T2;struct _tuple37*_T3;struct _tuple37 _T4;struct Cyc_Absyn_Exp*_T5;struct Cyc_List_List*_T6;
_TLF0: if(l!=0)goto _TLEE;else{goto _TLEF;}
_TLEE: _T0= ctxt;_T1= l;_T2= _T1->hd;_T3= (struct _tuple37*)_T2;_T4= *_T3;_T5= _T4.f1;Cyc_Toc_trans_exptypes(_T0,_T5);_T6= l;
# 1107
l= _T6->tl;goto _TLF0;_TLEF:;}
# 1111
static long Cyc_Toc_do_null_check(struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T1;char*_T2;char*_T3;struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct*_T4;char*_T5;char*_T6;struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct*_T7;char*_T8;char*_T9;struct Cyc_InsertChecks_NullAndThinBound_Absyn_AbsynAnnot_struct*_TA;char*_TB;char*_TC;struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct*_TD;char*_TE;char*_TF;struct Cyc_InsertChecks_ThinBound_Absyn_AbsynAnnot_struct*_T10;char*_T11;char*_T12;struct Cyc_Warn_String_Warn_Warg_struct _T13;int(*_T14)(unsigned,struct _fat_ptr);void*(*_T15)(unsigned,struct _fat_ptr);struct Cyc_Absyn_Exp*_T16;unsigned _T17;struct _fat_ptr _T18;_T0= e;{
void*_T19=_T0->annot;_T1= (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*)_T19;_T2= _T1->tag;_T3= Cyc_InsertChecks_NoCheck;if(_T2!=_T3)goto _TLF1;
# 1114
return 0;_TLF1: _T4= (struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct*)_T19;_T5= _T4->tag;_T6= Cyc_InsertChecks_NullOnly;if(_T5!=_T6)goto _TLF3;goto _LL6;_TLF3: _T7= (struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct*)_T19;_T8= _T7->tag;_T9= Cyc_InsertChecks_NullAndFatBound;if(_T8!=_T9)goto _TLF5;_LL6: goto _LL8;_TLF5: _TA= (struct Cyc_InsertChecks_NullAndThinBound_Absyn_AbsynAnnot_struct*)_T19;_TB= _TA->tag;_TC= Cyc_InsertChecks_NullAndThinBound;if(_TB!=_TC)goto _TLF7;_LL8:
# 1118
 return 1;_TLF7: _TD= (struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct*)_T19;_TE= _TD->tag;_TF= Cyc_InsertChecks_FatBound;if(_TE!=_TF)goto _TLF9;goto _LLC;_TLF9: _T10= (struct Cyc_InsertChecks_ThinBound_Absyn_AbsynAnnot_struct*)_T19;_T11= _T10->tag;_T12= Cyc_InsertChecks_ThinBound;if(_T11!=_T12)goto _TLFB;_LLC:
# 1121
 return 0;_TLFB:{struct Cyc_Warn_String_Warn_Warg_struct _T1A;_T1A.tag= 0;
# 1123
({__typeof__(_tag_fat("Toc: do_null_check",sizeof(char),19U))_T1B=_tag_fat("Toc: do_null_check",sizeof(char),19U);_T1A.f1= _T1B;});_T13= _T1A;}{struct Cyc_Warn_String_Warn_Warg_struct _T1A=_T13;void*_T1B[1];_T1B[0]= & _T1A;_T15= Cyc_Warn_impos_loc2;{int(*_T1C)(unsigned,struct _fat_ptr)=(int(*)(unsigned,struct _fat_ptr))_T15;_T14= _T1C;}_T16= e;_T17= _T16->loc;_T18= _tag_fat(_T1B,sizeof(void*),1);_T14(_T17,_T18);};}}
# 1136
enum Cyc_Toc_PTR_ANS{Cyc_Toc_DIRECT_DEREF =0U,Cyc_Toc_DROP_SUBSCRIPT =1U,Cyc_Toc_LEAVE_SUBSCRIPT =2U};
# 1138
static enum Cyc_Toc_PTR_ANS Cyc_Toc_ptr_use_to_c(struct Cyc_Toc_Env*nv,struct Cyc_Absyn_Exp*ptr,void*annot,struct Cyc_Absyn_Exp*index){struct Cyc_Absyn_Exp*_T0;void*_T1;void*_T2;struct Cyc_Toc_Env*_T3;struct Cyc_Toc_TocContext*_T4;void*_T5;void*_T6;int*_T7;int _T8;void*_T9;struct Cyc_Absyn_PtrInfo _TA;struct Cyc_Absyn_PtrInfo _TB;struct Cyc_Absyn_PtrInfo _TC;struct Cyc_Absyn_PtrAtts _TD;struct Cyc_Absyn_PtrInfo _TE;struct Cyc_Absyn_PtrAtts _TF;void*_T10;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T11;char*_T12;char*_T13;void*_T14;void*_T15;struct Cyc_Absyn_Exp*_T16;unsigned _T17;struct Cyc_Toc_Env*_T18;struct Cyc_Toc_TocContext*_T19;void*_T1A;void*_T1B;struct Cyc_Absyn_Tqual _T1C;struct Cyc_Absyn_Exp*_T1D;void*_T1E;struct Cyc_Absyn_Exp*_T1F;struct Cyc_Absyn_Exp*_T20;struct Cyc_Absyn_Exp*_T21;void*_T22;struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct*_T23;char*_T24;char*_T25;void*_T26;void*_T27;struct Cyc_Absyn_Exp*_T28;unsigned _T29;struct Cyc_Toc_Env*_T2A;struct Cyc_Toc_TocContext*_T2B;void*_T2C;void*_T2D;struct Cyc_Absyn_Tqual _T2E;struct Cyc_Absyn_Exp*_T2F;void*_T30;struct Cyc_Absyn_Exp*_T31;struct Cyc_Absyn_Exp*_T32;struct Cyc_Absyn_Exp*_T33;struct Cyc_Absyn_Exp*_T34;struct Cyc_Absyn_Exp*_T35;struct Cyc_Absyn_Exp*_T36;struct _fat_ptr _T37;void*_T38;struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct*_T39;char*_T3A;char*_T3B;void*_T3C;struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct*_T3D;char*_T3E;char*_T3F;struct Cyc_Toc_Env*_T40;struct Cyc_Toc_TocContext*_T41;void*_T42;struct Cyc_Absyn_Exp*_T43;struct Cyc_Absyn_Exp*_T44;unsigned _T45;struct Cyc_Absyn_Exp*_T46;void*_T47;struct Cyc_Absyn_Exp*_T48;void*_T49;struct Cyc_Absyn_Exp*_T4A;struct Cyc_Absyn_Exp*_T4B;void*_T4C;struct Cyc_Absyn_Exp*_T4D;struct _fat_ptr _T4E;void*_T4F;struct Cyc_Absyn_Exp*_T50;struct Cyc_Absyn_Exp*_T51;void*_T52;struct Cyc_InsertChecks_NullAndThinBound_Absyn_AbsynAnnot_struct*_T53;char*_T54;char*_T55;void*_T56;void*_T57;struct Cyc_InsertChecks_ThinBound_Absyn_AbsynAnnot_struct*_T58;char*_T59;char*_T5A;void*_T5B;struct Cyc_Toc_Env*_T5C;struct Cyc_Toc_TocContext*_T5D;void*_T5E;struct Cyc_Absyn_Exp*_T5F;struct Cyc_Absyn_Exp*_T60;unsigned _T61;struct Cyc_Absyn_Exp*_T62;void*_T63;long _T64;struct Cyc_Absyn_Exp*_T65;void*_T66;void*_T67;long _T68;int*_T69;int _T6A;struct Cyc_Absyn_Exp*_T6B;struct Cyc_Absyn_ArrayInfo _T6C;void*_T6D;struct Cyc_Absyn_Tqual _T6E;struct Cyc_Absyn_Exp*_T6F;struct Cyc_Absyn_ArrayInfo _T70;void*_T71;struct Cyc_Absyn_Tqual _T72;void*_T73;struct Cyc_Absyn_Exp*_T74;struct Cyc_Absyn_ArrayInfo _T75;struct Cyc_Absyn_Exp*_T76;struct Cyc_Absyn_Exp*_T77;struct Cyc_Absyn_ArrayInfo _T78;void*_T79;struct Cyc_Absyn_Exp*_T7A;void*_T7B;struct Cyc_Absyn_Exp*_T7C;struct Cyc_Absyn_Exp*_T7D;void*_T7E;struct Cyc_Absyn_Exp*_T7F;struct _fat_ptr _T80;void*_T81;struct Cyc_Absyn_Exp*_T82;struct Cyc_Absyn_Exp*_T83;struct Cyc_Absyn_Exp*_T84;void*_T85;struct Cyc_Absyn_Exp*_T86;struct Cyc_Absyn_Exp*_T87;void*_T88;struct Cyc_Absyn_Exp*_T89;struct _fat_ptr _T8A;void*_T8B;struct Cyc_Absyn_Exp*_T8C;long _T8D;struct Cyc_Absyn_Exp*_T8E;struct Cyc_Absyn_Exp*_T8F;struct Cyc_Absyn_Exp*_T90;struct _fat_ptr _T91;long _T92;struct Cyc_Absyn_Exp*_T93;void*_T94;struct Cyc_Absyn_Exp*_T95;struct _fat_ptr _T96;struct Cyc_Absyn_Exp*_T97;struct Cyc_Toc_Env*_T98;struct Cyc_Toc_TocContext*_T99;void*_T9A;void*_T9B;struct Cyc_Absyn_Exp*_T9C;struct Cyc_Toc_Env*_T9D;struct Cyc_Toc_TocContext*_T9E;void*_T9F;void*_TA0;void*_TA1;struct Cyc_Absyn_Exp*_TA2;void*_TA3;struct Cyc_Absyn_Exp*_TA4;struct _fat_ptr _TA5;struct Cyc_Warn_String_Warn_Warg_struct _TA6;int(*_TA7)(struct _fat_ptr ap);struct _fat_ptr _TA8;enum Cyc_Toc_PTR_ANS _TA9;struct Cyc_Warn_String_Warn_Warg_struct _TAA;int(*_TAB)(struct _fat_ptr ap);struct _fat_ptr _TAC;
enum Cyc_Toc_PTR_ANS ans;
long old_lhs=Cyc_Toc_in_lhs(nv);_T0= ptr;_T1= _T0->topt;_T2= 
_check_null(_T1);{void*old_typ=Cyc_Absyn_compress(_T2);_T3= nv;_T4= _T3->ctxt;_T5= old_typ;{
void*new_typ=Cyc_Toc_typ_to_c(_T4,_T5);
struct Cyc_Absyn_Exp*fn_e=Cyc_Toc__check_known_subscript_notnull_e;
Cyc_Toc_set_lhs(nv,0);
Cyc_Toc_exp_to_c(nv,ptr);
if(index==0)goto _TLFD;
Cyc_Toc_exp_to_c(nv,index);goto _TLFE;_TLFD: _TLFE: {void*_TAD;void*_TAE;struct Cyc_Absyn_Tqual _TAF;void*_TB0;_T6= old_typ;_T7= (int*)_T6;_T8= *_T7;if(_T8!=4)goto _TLFF;_T9= old_typ;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_TB1=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T9;_TA= _TB1->f1;_TB0= _TA.elt_type;_TB= _TB1->f1;_TAF= _TB.elt_tq;_TC= _TB1->f1;_TD= _TC.ptr_atts;_TAE= _TD.bounds;_TE= _TB1->f1;_TF= _TE.ptr_atts;_TAD= _TF.zero_term;}{void*ta=_TB0;struct Cyc_Absyn_Tqual tq=_TAF;void*b=_TAE;void*zt=_TAD;{struct Cyc_Absyn_Exp*_TB1;_T10= annot;_T11= (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*)_T10;_T12= _T11->tag;_T13= Cyc_InsertChecks_NoCheck;if(_T12!=_T13)goto _TL101;_T14= 
# 1152
Cyc_Absyn_bounds_one();_T15= b;_T16= Cyc_Tcutil_get_bounds_exp_constrain(_T14,_T15,1);_T17= (unsigned)_T16;if(_T17)goto _TL103;else{goto _TL105;}
# 1155
_TL105: _T18= nv;_T19= _T18->ctxt;_T1A= ta;_T1B= Cyc_Toc_typ_to_c(_T19,_T1A);_T1C= tq;{void*newt=Cyc_Absyn_cstar_type(_T1B,_T1C);_T1D= ptr;_T1E= newt;_T1F= 
Cyc_Toc_deep_copy(ptr);_T20= Cyc_Toc_get_curr(_T1F);({__typeof__(Cyc_Toc_cast_it_r(_T1E,_T20))_TB2=Cyc_Toc_cast_it_r(_T1E,_T20);_T1D->r= _TB2;});_T21= ptr;
_T21->topt= newt;}goto _TL104;_TL103: _TL104:
# 1159
 ans= 2U;goto _LL5;_TL101: _T22= annot;_T23= (struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct*)_T22;_T24= _T23->tag;_T25= Cyc_InsertChecks_NullOnly;if(_T24!=_T25)goto _TL106;_T26= 
# 1162
Cyc_Absyn_bounds_one();_T27= b;_T28= Cyc_Tcutil_get_bounds_exp_constrain(_T26,_T27,1);_T29= (unsigned)_T28;if(_T29)goto _TL108;else{goto _TL10A;}
# 1164
_TL10A: _T2A= nv;_T2B= _T2A->ctxt;_T2C= ta;_T2D= Cyc_Toc_typ_to_c(_T2B,_T2C);_T2E= tq;{void*newt=Cyc_Absyn_cstar_type(_T2D,_T2E);_T2F= ptr;_T30= newt;_T31= 
Cyc_Toc_deep_copy(ptr);_T32= Cyc_Toc_get_curr(_T31);({__typeof__(Cyc_Toc_cast_it_r(_T30,_T32))_TB2=Cyc_Toc_cast_it_r(_T30,_T32);_T2F->r= _TB2;});_T33= ptr;
_T33->topt= newt;}goto _TL109;_TL108: _TL109: _T34= ptr;{struct Cyc_Absyn_Exp*_TB2[1];({__typeof__(
# 1176
Cyc_Toc_deep_copy(ptr))_TB3=Cyc_Toc_deep_copy(ptr);_TB2[0]= _TB3;});_T36= Cyc_Toc__check_null_e;_T37= _tag_fat(_TB2,sizeof(struct Cyc_Absyn_Exp*),1);_T35= Cyc_Toc_fncall_exp_dl(_T36,_T37);}_T34->r= _T35->r;
ans= 2U;goto _LL5;_TL106: _T38= annot;_T39= (struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct*)_T38;_T3A= _T39->tag;_T3B= Cyc_InsertChecks_NullAndFatBound;if(_T3A!=_T3B)goto _TL10B;goto _LLD;_TL10B: _T3C= annot;_T3D= (struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct*)_T3C;_T3E= _T3D->tag;_T3F= Cyc_InsertChecks_FatBound;if(_T3E!=_T3F)goto _TL10D;_LLD: _T40= nv;_T41= _T40->ctxt;_T42= ta;{
# 1183
void*ta1=Cyc_Toc_typ_to_c(_T41,_T42);
void*newt=Cyc_Absyn_cstar_type(ta1,tq);_T44= index;_T45= (unsigned)_T44;
if(!_T45)goto _TL10F;_T43= index;goto _TL110;_TL10F: _T46= Cyc_Absyn_uint_exp(0U,0U);_T47= Cyc_Absyn_uint_type;_T43= Cyc_Absyn_set_type(_T46,_T47);_TL110: {struct Cyc_Absyn_Exp*ind=_T43;_T48= ptr;_T49= newt;{struct Cyc_Absyn_Exp*_TB2[3];
({__typeof__(Cyc_Toc_deep_copy(ptr))_TB3=Cyc_Toc_deep_copy(ptr);_TB2[0]= _TB3;});_T4B= 
Cyc_Absyn_sizeoftype_exp(ta1,0U);_T4C= Cyc_Absyn_uint_type;({__typeof__(Cyc_Absyn_set_type(_T4B,_T4C))_TB3=Cyc_Absyn_set_type(_T4B,_T4C);_TB2[1]= _TB3;});_TB2[2]= ind;_T4D= Cyc_Toc__check_fat_subscript_e;_T4E= _tag_fat(_TB2,sizeof(struct Cyc_Absyn_Exp*),3);_T4A= Cyc_Toc_fncall_exp_dl(_T4D,_T4E);}_T4F= 
Cyc_Absyn_cstar_type(Cyc_Absyn_uchar_type,Cyc_Toc_mt_tq);_T50= 
# 1186
Cyc_Absyn_set_type(_T4A,_T4F);({__typeof__(Cyc_Toc_cast_it_r(_T49,_T50))_TB2=Cyc_Toc_cast_it_r(_T49,_T50);_T48->r= _TB2;});_T51= ptr;
# 1189
_T51->topt= newt;
ans= 0U;goto _LL5;}}_TL10D: _T52= annot;_T53= (struct Cyc_InsertChecks_NullAndThinBound_Absyn_AbsynAnnot_struct*)_T52;_T54= _T53->tag;_T55= Cyc_InsertChecks_NullAndThinBound;if(_T54!=_T55)goto _TL111;_T56= annot;{struct Cyc_InsertChecks_NullAndThinBound_Absyn_AbsynAnnot_struct*_TB2=(struct Cyc_InsertChecks_NullAndThinBound_Absyn_AbsynAnnot_struct*)_T56;_TB1= _TB2->f1;}{struct Cyc_Absyn_Exp*bd=_TB1;
# 1193
fn_e= Cyc_Toc__check_known_subscript_null_e;_TB1= bd;goto _LL11;}_TL111: _T57= annot;_T58= (struct Cyc_InsertChecks_ThinBound_Absyn_AbsynAnnot_struct*)_T57;_T59= _T58->tag;_T5A= Cyc_InsertChecks_ThinBound;if(_T59!=_T5A)goto _TL113;_T5B= annot;{struct Cyc_InsertChecks_ThinBound_Absyn_AbsynAnnot_struct*_TB2=(struct Cyc_InsertChecks_ThinBound_Absyn_AbsynAnnot_struct*)_T5B;_TB1= _TB2->f1;}_LL11:{struct Cyc_Absyn_Exp*bd=_TB1;_T5C= nv;_T5D= _T5C->ctxt;_T5E= ta;{
# 1196
void*ta1=Cyc_Toc_typ_to_c(_T5D,_T5E);_T60= index;_T61= (unsigned)_T60;
if(!_T61)goto _TL115;_T5F= index;goto _TL116;_TL115: _T62= Cyc_Absyn_uint_exp(0U,0U);_T63= Cyc_Absyn_uint_type;_T5F= Cyc_Absyn_set_type(_T62,_T63);_TL116: {struct Cyc_Absyn_Exp*ind=_T5F;
# 1201
struct _tuple13 _TB2=Cyc_Evexp_eval_const_uint_exp(bd);long _TB3;unsigned _TB4;_TB4= _TB2.f0;_TB3= _TB2.f1;{unsigned i=_TB4;long valid=_TB3;_T64= valid;
if(_T64)goto _TL11B;else{goto _TL119;}_TL11B: if(i!=1U)goto _TL119;else{goto _TL11A;}_TL11A: _T65= ptr;_T66= _T65->topt;_T67= _check_null(_T66);_T68= Cyc_Tcutil_is_zeroterm_pointer_type(_T67);if(_T68)goto _TL117;else{goto _TL119;}
# 1205
_TL119:{struct Cyc_Absyn_Exp*newp=Cyc_Toc_deep_copy(ptr);
void*_TB5=Cyc_Absyn_compress(ta1);struct Cyc_Absyn_ArrayInfo _TB6;_T69= (int*)_TB5;_T6A= *_T69;if(_T6A!=5)goto _TL11C;{struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_TB7=(struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_TB5;_TB6= _TB7->f1;}{struct Cyc_Absyn_ArrayInfo ainfo=_TB6;_T6B= newp;_T6C= ainfo;_T6D= _T6C.elt_type;_T6E= tq;
# 1208
({__typeof__(Cyc_Absyn_cstar_type(_T6D,_T6E))_TB7=Cyc_Absyn_cstar_type(_T6D,_T6E);_T6B->topt= _TB7;});_T6F= ptr;_T70= ainfo;_T71= _T70.elt_type;_T72= tq;_T73= 
# 1210
Cyc_Absyn_cstar_type(_T71,_T72);{struct Cyc_Absyn_Exp*_TB7[4];
# 1212
_TB7[0]= newp;_TB7[1]= bd;_T75= ainfo;_T76= _T75.num_elts;_T77= 
_check_null(_T76);_T78= ainfo;_T79= _T78.elt_type;_T7A= 
Cyc_Absyn_sizeoftype_exp(_T79,0U);_T7B= Cyc_Absyn_uint_type;_T7C= Cyc_Absyn_set_type(_T7A,_T7B);_T7D= 
# 1213
Cyc_Absyn_times_exp(_T77,_T7C,0U);_T7E= Cyc_Absyn_uint_type;({__typeof__(Cyc_Absyn_set_type(_T7D,_T7E))_TB8=Cyc_Absyn_set_type(_T7D,_T7E);_TB7[2]= _TB8;});
# 1216
_TB7[3]= ind;_T7F= fn_e;_T80= _tag_fat(_TB7,sizeof(struct Cyc_Absyn_Exp*),4);_T74= Cyc_Toc_fncall_exp_dl(_T7F,_T80);}_T81= 
Cyc_Absyn_cstar_type(Cyc_Absyn_char_type,tq);_T82= 
# 1211
Cyc_Absyn_set_type(_T74,_T81);
# 1209
({__typeof__(Cyc_Toc_cast_it_r(_T73,_T82))_TB7=Cyc_Toc_cast_it_r(_T73,_T82);_T6F->r= _TB7;});
# 1218
ans= 1U;goto _LL17;}_TL11C: _T83= newp;
# 1221
({__typeof__(Cyc_Absyn_cstar_type(ta1,tq))_TB7=Cyc_Absyn_cstar_type(ta1,tq);_T83->topt= _TB7;});_T84= ptr;_T85= 
# 1223
Cyc_Absyn_cstar_type(ta1,tq);{struct Cyc_Absyn_Exp*_TB7[4];
_TB7[0]= newp;_TB7[1]= bd;_T87= Cyc_Absyn_sizeoftype_exp(ta1,0U);_T88= Cyc_Absyn_uint_type;({__typeof__(Cyc_Absyn_set_type(_T87,_T88))_TB8=Cyc_Absyn_set_type(_T87,_T88);_TB7[2]= _TB8;});_TB7[3]= ind;_T89= fn_e;_T8A= _tag_fat(_TB7,sizeof(struct Cyc_Absyn_Exp*),4);_T86= Cyc_Toc_fncall_exp_dl(_T89,_T8A);}_T8B= 
Cyc_Absyn_cstar_type(Cyc_Absyn_char_type,tq);_T8C= 
# 1224
Cyc_Absyn_set_type(_T86,_T8B);
# 1222
({__typeof__(
Cyc_Toc_cast_it_r(_T85,_T8C))_TB7=Cyc_Toc_cast_it_r(_T85,_T8C);
# 1222
_T84->r= _TB7;});
# 1226
ans= 0U;goto _LL17;_LL17:;}goto _TL118;
# 1231
_TL117: _T8D= Cyc_Toc_is_zero(bd);if(!_T8D)goto _TL11E;
if(fn_e!=Cyc_Toc__check_known_subscript_null_e)goto _TL120;_T8E= ptr;{struct Cyc_Absyn_Exp*_TB5[1];({__typeof__(
# 1234
Cyc_Toc_deep_copy(ptr))_TB6=Cyc_Toc_deep_copy(ptr);_TB5[0]= _TB6;});_T90= Cyc_Toc__check_null_e;_T91= _tag_fat(_TB5,sizeof(struct Cyc_Absyn_Exp*),1);_T8F= Cyc_Toc_fncall_exp_dl(_T90,_T91);}_T8E->r= _T8F->r;goto _TL121;_TL120: _TL121:
 ans= 2U;goto _TL11F;
# 1239
_TL11E: _T92= Cyc_Toc_isCharStar(ptr);if(!_T92)goto _TL122;_T93= ptr;{struct Cyc_Absyn_Exp*_TB5[3];
({__typeof__(Cyc_Toc_deep_copy(ptr))_TB6=Cyc_Toc_deep_copy(ptr);_TB5[0]= _TB6;});_TB5[1]= bd;_TB5[2]= ind;_T95= Cyc_Toc__zero_arr_plus_char_e;_T96= _tag_fat(_TB5,sizeof(struct Cyc_Absyn_Exp*),3);_T94= Cyc_Toc_fncall_exp_r(_T95,_T96);}_T93->r= _T94;goto _TL123;
# 1242
_TL122: _T97= ptr;_T98= nv;_T99= _T98->ctxt;_T9A= old_typ;_T9B= 
Cyc_Toc_typ_to_c(_T99,_T9A);{struct Cyc_Absyn_Exp*_TB5[4];_T9D= nv;_T9E= _T9D->ctxt;_T9F= old_typ;_TA0= 
# 1245
Cyc_Toc_typ_to_c(_T9E,_T9F);_TA1= Cyc_Tcutil_pointer_elt_type(_TA0);_TA2= Cyc_Absyn_sizeoftype_exp(_TA1,0U);_TA3= Cyc_Absyn_uint_type;({__typeof__(Cyc_Absyn_set_type(_TA2,_TA3))_TB6=Cyc_Absyn_set_type(_TA2,_TA3);_TB5[0]= _TB6;});
({__typeof__(Cyc_Toc_deep_copy(ptr))_TB6=Cyc_Toc_deep_copy(ptr);_TB5[1]= _TB6;});_TB5[2]= bd;_TB5[3]= ind;_TA4= Cyc_Toc__zero_arr_plus_other_e;_TA5= _tag_fat(_TB5,sizeof(struct Cyc_Absyn_Exp*),4);_T9C= Cyc_Toc_fncall_exp_dl(_TA4,_TA5);}
# 1242
({__typeof__(
Cyc_Toc_cast_it_r(_T9B,_T9C))_TB5=Cyc_Toc_cast_it_r(_T9B,_T9C);
# 1242
_T97->r= _TB5;});_TL123:
# 1247
 ans= 0U;_TL11F: _TL118: goto _LL5;}}}}_TL113:{struct Cyc_Warn_String_Warn_Warg_struct _TB2;_TB2.tag= 0;
# 1252
({__typeof__(_tag_fat("FIX: ptr_use_to_c, bad annotation",sizeof(char),34U))_TB3=_tag_fat("FIX: ptr_use_to_c, bad annotation",sizeof(char),34U);_TB2.f1= _TB3;});_TA6= _TB2;}{struct Cyc_Warn_String_Warn_Warg_struct _TB2=_TA6;void*_TB3[1];_TB3[0]= & _TB2;{int(*_TB4)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_TA7= _TB4;}_TA8= _tag_fat(_TB3,sizeof(void*),1);_TA7(_TA8);}_LL5:;}
# 1254
Cyc_Toc_set_lhs(nv,old_lhs);_TA9= ans;
return _TA9;}_TLFF:{struct Cyc_Warn_String_Warn_Warg_struct _TB1;_TB1.tag= 0;
# 1257
({__typeof__(_tag_fat("ptr_use_to_c: non-pointer-type",sizeof(char),31U))_TB2=_tag_fat("ptr_use_to_c: non-pointer-type",sizeof(char),31U);_TB1.f1= _TB2;});_TAA= _TB1;}{struct Cyc_Warn_String_Warn_Warg_struct _TB1=_TAA;void*_TB2[1];_TB2[0]= & _TB1;{int(*_TB3)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_TAB= _TB3;}_TAC= _tag_fat(_TB2,sizeof(void*),1);_TAB(_TAC);};}}}}
# 1261
static void*Cyc_Toc_get_cyc_type(struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;void*_T1;struct Cyc_Warn_String_Warn_Warg_struct _T2;int(*_T3)(struct _fat_ptr ap);struct _fat_ptr _T4;struct Cyc_Absyn_Exp*_T5;void*_T6;_T0= e;_T1= _T0->topt;
if(_T1!=0)goto _TL124;{struct Cyc_Warn_String_Warn_Warg_struct _T7;_T7.tag= 0;
({__typeof__(_tag_fat("Missing type in primop ",sizeof(char),24U))_T8=_tag_fat("Missing type in primop ",sizeof(char),24U);_T7.f1= _T8;});_T2= _T7;}{struct Cyc_Warn_String_Warn_Warg_struct _T7=_T2;void*_T8[1];_T8[0]= & _T7;{int(*_T9)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T3= _T9;}_T4= _tag_fat(_T8,sizeof(void*),1);_T3(_T4);}goto _TL125;_TL124: _TL125: _T5= e;_T6= _T5->topt;
return _T6;}
# 1266
static struct _tuple28*Cyc_Toc_tup_to_c(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Absyn_Exp*e){struct _tuple28*_T0;struct Cyc_Toc_TocContext*_T1;struct Cyc_Absyn_Exp*_T2;void*_T3;void*_T4;{struct _tuple28*_T5=_cycalloc(sizeof(struct _tuple28));_T5->f0= Cyc_Toc_mt_tq;_T1= ctxt;_T2= e;_T3= _T2->topt;_T4= _check_null(_T3);({__typeof__(Cyc_Toc_typ_to_c(_T1,_T4))_T6=Cyc_Toc_typ_to_c(_T1,_T4);_T5->f1= _T6;});_T0= (struct _tuple28*)_T5;}return _T0;}
# 1269
static struct Cyc_Absyn_Exp*Cyc_Toc_array_length_exp(struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;int*_T1;unsigned _T2;struct Cyc_List_List*_T3;void*_T4;struct _tuple22*_T5;struct _tuple22 _T6;struct Cyc_List_List*_T7;int(*_T8)(struct _fat_ptr);struct _fat_ptr _T9;struct Cyc_List_List*_TA;int _TB;struct Cyc_Absyn_Exp*_TC;void*_TD;struct Cyc_Absyn_Exp*_TE;long _TF;struct Cyc_Absyn_Exp*_T10;struct Cyc_Absyn_Exp*_T11;void*_T12;struct Cyc_Absyn_Exp*_T13;struct Cyc_Absyn_Exp*_T14;void*_T15;_T0= e;{
void*_T16=_T0->r;long _T17;struct Cyc_Absyn_Exp*_T18;struct Cyc_List_List*_T19;_T1= (int*)_T16;_T2= *_T1;switch(_T2){case 25:{struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*_T1A=(struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*)_T16;_T19= _T1A->f1;}{struct Cyc_List_List*dles=_T19;{
# 1272
struct Cyc_List_List*dles2=dles;_TL12A: if(dles2!=0)goto _TL128;else{goto _TL129;}
_TL128: _T3= dles2;_T4= _T3->hd;_T5= (struct _tuple22*)_T4;_T6= *_T5;_T7= _T6.f0;if(_T7==0)goto _TL12B;{
int(*_T1A)(struct _fat_ptr)=(int(*)(struct _fat_ptr))Cyc_Toc_unimp;_T8= _T1A;}_T9= _tag_fat("array designators for abstract-field initialization",sizeof(char),52U);_T8(_T9);goto _TL12C;_TL12B: _TL12C: _TA= dles2;
# 1272
dles2= _TA->tl;goto _TL12A;_TL129:;}_TB= 
# 1275
Cyc_List_length(dles);_TC= Cyc_Absyn_signed_int_exp(_TB,0U);_TD= Cyc_Absyn_sint_type;_T18= Cyc_Absyn_set_type(_TC,_TD);_T17= 0;goto _LL4;}case 26:{struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct*_T1A=(struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct*)_T16;_T18= _T1A->f2;_T17= _T1A->f4;}_LL4: {struct Cyc_Absyn_Exp*bd=_T18;long zt=_T17;_T18= bd;_T17= zt;goto _LL6;}case 27:{struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct*_T1A=(struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct*)_T16;_T18= _T1A->f1;_T17= _T1A->f3;}_LL6: {struct Cyc_Absyn_Exp*bd=_T18;long zt=_T17;
# 1279
bd= Cyc_Toc_deep_copy(bd);_TF= zt;
if(!_TF)goto _TL12D;_T10= bd;_T11= Cyc_Absyn_uint_exp(1U,0U);_T12= Cyc_Absyn_uint_type;_T13= Cyc_Absyn_set_type(_T11,_T12);_T14= Cyc_Absyn_add_exp(_T10,_T13,0U);_T15= Cyc_Absyn_uint_type;_TE= Cyc_Absyn_set_type(_T14,_T15);goto _TL12E;_TL12D: _TE= bd;_TL12E: return _TE;}default:
# 1282
 return 0;};}}
# 1289
static struct Cyc_Absyn_Exp*Cyc_Toc_get_varsizeexp(struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;int*_T1;int _T2;struct Cyc_Absyn_Exp*_T3;void*_T4;void*_T5;int*_T6;int _T7;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T8;void*_T9;int*_TA;int _TB;struct Cyc_Absyn_AppType_Absyn_Type_struct*_TC;void*_TD;struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_TE;union Cyc_Absyn_AggrInfo _TF;struct _union_AggrInfo_KnownAggr _T10;unsigned _T11;void*_T12;union Cyc_Absyn_AggrInfo _T13;struct _union_AggrInfo_KnownAggr _T14;struct Cyc_Absyn_Aggrdecl**_T15;struct Cyc_Absyn_Aggrdecl*_T16;struct Cyc_Absyn_AggrdeclImpl*_T17;struct Cyc_Absyn_Aggrdecl*_T18;enum Cyc_Absyn_AggrKind _T19;int _T1A;struct Cyc_Absyn_Aggrdecl*_T1B;struct Cyc_Absyn_AggrdeclImpl*_T1C;struct Cyc_List_List*_T1D;struct Cyc_List_List*_T1E;struct Cyc_List_List*_T1F;struct Cyc_List_List*_T20;void*_T21;struct Cyc_List_List*_T22;void*_T23;struct _fat_ptr*_T24;struct Cyc_Absyn_Aggrfield*_T25;struct _fat_ptr*_T26;int _T27;struct Cyc_Absyn_Exp*_T28;struct Cyc_Absyn_Aggrfield*_T29;void*_T2A;int*_T2B;int _T2C;struct Cyc_Absyn_ArrayInfo _T2D;struct Cyc_Absyn_ArrayInfo _T2E;long _T2F;struct Cyc_Absyn_Exp*_T30;struct Cyc_Absyn_Exp*_T31;struct Cyc_Absyn_Exp*_T32;void*_T33;struct Cyc_Absyn_Exp*_T34;struct _fat_ptr _T35;void*_T36;struct Cyc_Absyn_Exp*_T37;int _T38;struct Cyc_Absyn_Exp*_T39;void*_T3A;struct Cyc_Absyn_Exp*_T3B;struct Cyc_Absyn_Exp*_T3C;void*_T3D;struct Cyc_Absyn_Exp*_T3E;struct Cyc_List_List*_T3F;struct Cyc_Warn_String_Warn_Warg_struct _T40;int(*_T41)(struct _fat_ptr ap);struct _fat_ptr _T42;
# 1297
struct Cyc_List_List*dles;
struct Cyc_List_List*field_types;_T0= e;{
void*_T43=_T0->r;struct Cyc_List_List*_T44;_T1= (int*)_T43;_T2= *_T1;if(_T2!=28)goto _TL12F;{struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*_T45=(struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*)_T43;_T44= _T45->f3;}{struct Cyc_List_List*dles2=_T44;
# 1301
dles= dles2;goto _LL0;}_TL12F:
# 1304
 return 0;_LL0:;}_T3= e;_T4= _T3->topt;_T5= 
# 1306
_check_null(_T4);{void*_T43=Cyc_Absyn_compress(_T5);struct Cyc_Absyn_Aggrdecl*_T44;_T6= (int*)_T43;_T7= *_T6;if(_T7!=0)goto _TL131;_T8= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T43;_T9= _T8->f1;_TA= (int*)_T9;_TB= *_TA;if(_TB!=24)goto _TL133;_TC= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T43;_TD= _TC->f1;_TE= (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*)_TD;_TF= _TE->f1;_T10= _TF.KnownAggr;_T11= _T10.tag;if(_T11!=2)goto _TL135;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T45=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T43;_T12= _T45->f1;{struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_T46=(struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*)_T12;_T13= _T46->f1;_T14= _T13.KnownAggr;_T15= _T14.val;{struct Cyc_Absyn_Aggrdecl*_T47=*_T15;_T44= _T47;}}}{struct Cyc_Absyn_Aggrdecl*ad=_T44;_T16= ad;_T17= _T16->impl;
# 1308
if(_T17==0)goto _TL139;else{goto _TL13A;}_TL13A: _T18= ad;_T19= _T18->kind;_T1A= (int)_T19;if(_T1A==1)goto _TL139;else{goto _TL137;}
_TL139: return 0;_TL137: _T1B= ad;_T1C= _T1B->impl;
field_types= _T1C->fields;goto _LL5;}_TL135: goto _LL8;_TL133: goto _LL8;_TL131: _LL8:
# 1315
 return 0;_LL5:;}
# 1317
if(field_types!=0)goto _TL13B;
return 0;_TL13B:
 _TL140: _T1D= _check_null(field_types);_T1E= _T1D->tl;if(_T1E!=0)goto _TL13E;else{goto _TL13F;}
_TL13E: _T1F= field_types;
# 1319
field_types= _T1F->tl;goto _TL140;_TL13F: _T20= field_types;_T21= _T20->hd;{
# 1321
struct Cyc_Absyn_Aggrfield*last_type_field=(struct Cyc_Absyn_Aggrfield*)_T21;
_TL144: if(dles!=0)goto _TL142;else{goto _TL143;}
_TL142: _T22= dles;_T23= _T22->hd;{struct _tuple22*_T43=(struct _tuple22*)_T23;struct Cyc_Absyn_Exp*_T44;struct Cyc_List_List*_T45;{struct _tuple22 _T46=*_T43;_T45= _T46.f0;_T44= _T46.f1;}{struct Cyc_List_List*ds=_T45;struct Cyc_Absyn_Exp*e2=_T44;
struct _fat_ptr*f=Cyc_Absyn_designatorlist_to_fieldname(ds);_T24= f;_T25= last_type_field;_T26= _T25->name;_T27= 
Cyc_strptrcmp(_T24,_T26);if(_T27)goto _TL145;else{goto _TL147;}
_TL147:{struct Cyc_Absyn_Exp*nested_ans=Cyc_Toc_get_varsizeexp(e2);
if(nested_ans==0)goto _TL148;_T28= nested_ans;
return _T28;_TL148: _T29= last_type_field;_T2A= _T29->type;{
void*_T46=Cyc_Absyn_compress(_T2A);struct Cyc_Absyn_Exp*_T47;void*_T48;_T2B= (int*)_T46;_T2C= *_T2B;if(_T2C!=5)goto _TL14A;{struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T49=(struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_T46;_T2D= _T49->f1;_T48= _T2D.elt_type;_T2E= _T49->f1;_T47= _T2E.num_elts;}{void*elt_type=_T48;struct Cyc_Absyn_Exp*type_bd=_T47;
# 1332
if(type_bd==0)goto _TL14E;else{goto _TL14F;}_TL14F: _T2F= Cyc_Toc_is_zero(type_bd);if(_T2F)goto _TL14C;else{goto _TL14E;}
_TL14E: return 0;_TL14C:{struct Cyc_Absyn_Exp*_T49[2];_T31= 
# 1339
Cyc_Toc_array_length_exp(e2);({__typeof__(_check_null(_T31))_T4A=_check_null(_T31);_T49[0]= _T4A;});_T32= 
Cyc_Absyn_sizeoftype_exp(elt_type,0U);_T33= Cyc_Absyn_uint_type;({__typeof__(Cyc_Absyn_set_type(_T32,_T33))_T4A=Cyc_Absyn_set_type(_T32,_T33);_T49[1]= _T4A;});_T34= Cyc_Toc__check_times_e;_T35= _tag_fat(_T49,sizeof(struct Cyc_Absyn_Exp*),2);_T30= Cyc_Toc_fncall_exp_dl(_T34,_T35);}_T36= Cyc_Absyn_uint_type;_T37= 
# 1339
Cyc_Absyn_set_type(_T30,_T36);_T38= (int)sizeof(double);_T39= 
# 1342
Cyc_Absyn_signed_int_exp(_T38,0U);_T3A= Cyc_Absyn_sint_type;_T3B= Cyc_Absyn_set_type(_T39,_T3A);_T3C= 
# 1339
Cyc_Absyn_add_exp(_T37,_T3B,0U);_T3D= Cyc_Absyn_uint_type;_T3E= 
# 1338
Cyc_Absyn_set_type(_T3C,_T3D);return _T3E;}_TL14A:
# 1345
 return 0;;}}goto _TL146;_TL145: _TL146:;}}_T3F= dles;
# 1322
dles= _T3F->tl;goto _TL144;_TL143:{struct Cyc_Warn_String_Warn_Warg_struct _T43;_T43.tag= 0;
# 1349
({__typeof__(_tag_fat("get_varsizeexp: did not find last struct field",sizeof(char),47U))_T44=_tag_fat("get_varsizeexp: did not find last struct field",sizeof(char),47U);_T43.f1= _T44;});_T40= _T43;}{struct Cyc_Warn_String_Warn_Warg_struct _T43=_T40;void*_T44[1];_T44[0]= & _T43;{int(*_T45)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T41= _T45;}_T42= _tag_fat(_T44,sizeof(void*),1);_T41(_T42);}}}
# 1352
static int Cyc_Toc_get_member_offset(struct Cyc_Absyn_Aggrdecl*ad,struct _fat_ptr*f){struct Cyc_Absyn_Aggrdecl*_T0;struct Cyc_Absyn_AggrdeclImpl*_T1;struct Cyc_Absyn_AggrdeclImpl*_T2;struct Cyc_List_List*_T3;void*_T4;struct Cyc_Absyn_Aggrfield*_T5;struct _fat_ptr*_T6;struct _fat_ptr _T7;struct _fat_ptr*_T8;struct _fat_ptr _T9;int _TA;int _TB;struct Cyc_List_List*_TC;struct Cyc_Warn_String_Warn_Warg_struct _TD;struct Cyc_Warn_String_Warn_Warg_struct _TE;struct _fat_ptr*_TF;struct Cyc_Warn_String_Warn_Warg_struct _T10;int(*_T11)(struct _fat_ptr ap);struct _fat_ptr _T12;_T0= ad;_T1= _T0->impl;_T2= 
_check_null(_T1);{struct Cyc_List_List*fs=_T2->fields;{
int i=1;_TL153: if(fs!=0)goto _TL151;else{goto _TL152;}
_TL151: _T3= fs;_T4= _T3->hd;_T5= (struct Cyc_Absyn_Aggrfield*)_T4;_T6= _T5->name;_T7= *_T6;_T8= f;_T9= *_T8;_TA= Cyc_strcmp(_T7,_T9);if(_TA!=0)goto _TL154;_TB= i;
return _TB;_TL154: _TC= fs;
# 1354
fs= _TC->tl;i= i + 1;goto _TL153;_TL152:;}{struct Cyc_Warn_String_Warn_Warg_struct _T13;_T13.tag= 0;
# 1357
({__typeof__(_tag_fat("get_member_offset ",sizeof(char),19U))_T14=_tag_fat("get_member_offset ",sizeof(char),19U);_T13.f1= _T14;});_TD= _T13;}{struct Cyc_Warn_String_Warn_Warg_struct _T13=_TD;{struct Cyc_Warn_String_Warn_Warg_struct _T14;_T14.tag= 0;_TF= f;_T14.f1= *_TF;_TE= _T14;}{struct Cyc_Warn_String_Warn_Warg_struct _T14=_TE;{struct Cyc_Warn_String_Warn_Warg_struct _T15;_T15.tag= 0;({__typeof__(_tag_fat(" failed",sizeof(char),8U))_T16=_tag_fat(" failed",sizeof(char),8U);_T15.f1= _T16;});_T10= _T15;}{struct Cyc_Warn_String_Warn_Warg_struct _T15=_T10;void*_T16[3];_T16[0]= & _T13;_T16[1]= & _T14;_T16[2]= & _T15;{int(*_T17)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T11= _T17;}_T12= _tag_fat(_T16,sizeof(void*),3);_T11(_T12);}}}}}struct _tuple38{struct Cyc_Absyn_PrimopOpt*f0;struct Cyc_Absyn_Exp*f1;};
# 1361
static struct Cyc_Absyn_Exp*Cyc_Toc_assignop_lvalue(struct Cyc_Absyn_Exp*el,struct _tuple38*pr){struct Cyc_Absyn_Exp*_T0;struct _tuple38*_T1;struct _tuple38 _T2;struct Cyc_Absyn_PrimopOpt*_T3;struct _tuple38*_T4;struct _tuple38 _T5;struct Cyc_Absyn_Exp*_T6;struct Cyc_Absyn_Exp*_T7;struct Cyc_Absyn_Exp*_T8;struct Cyc_Absyn_Exp*_T9;_T0= el;_T1= pr;_T2= *_T1;_T3= _T2.f0;_T4= pr;_T5= *_T4;_T6= _T5.f1;{
struct Cyc_Absyn_Exp*res=Cyc_Absyn_assignop_exp(_T0,_T3,_T6,0U);_T7= res;_T8= el;
_T7->topt= _T8->topt;_T9= res;
return _T9;}}
# 1366
static struct Cyc_Absyn_Exp*Cyc_Toc_address_lvalue(struct Cyc_Absyn_Exp*e1,long ignore){struct Cyc_Absyn_Exp*_T0;void*_T1;struct Cyc_Absyn_Exp*_T2;struct Cyc_Absyn_Exp*_T3;void*_T4;struct Cyc_Absyn_Tqual _T5;struct Cyc_Absyn_Exp*_T6;
struct Cyc_Absyn_Exp*res=Cyc_Absyn_address_exp(e1,0U);_T0= e1;_T1= _T0->topt;
if(_T1==0)goto _TL156;_T2= res;_T3= e1;_T4= _T3->topt;_T5= Cyc_Toc_mt_tq;
({__typeof__(Cyc_Absyn_cstar_type(_T4,_T5))_T7=Cyc_Absyn_cstar_type(_T4,_T5);_T2->topt= _T7;});goto _TL157;_TL156: _TL157: _T6= res;
return _T6;}
# 1372
static struct Cyc_Absyn_Exp*Cyc_Toc_incr_lvalue(struct Cyc_Absyn_Exp*e1,enum Cyc_Absyn_Incrementor*incr){struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*_T0;enum Cyc_Absyn_Incrementor*_T1;void*_T2;struct Cyc_Absyn_Exp*_T3;struct Cyc_Absyn_Exp*_T4;struct Cyc_Absyn_Exp*_T5;{struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*_T6=_cycalloc(sizeof(struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct));_T6->tag= 5;
_T6->f1= e1;_T1= incr;_T6->f2= *_T1;_T0= (struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*)_T6;}_T2= (void*)_T0;{struct Cyc_Absyn_Exp*res=Cyc_Absyn_new_exp(_T2,0U);_T3= res;_T4= e1;
_T3->topt= _T4->topt;_T5= res;
return _T5;}}
# 1378
static void Cyc_Toc_lvalue_assign_stmt(struct Cyc_Absyn_Stmt*,struct Cyc_List_List*,struct Cyc_Absyn_Exp*(*)(struct Cyc_Absyn_Exp*,void*),void*);
# 1386
static void Cyc_Toc_lvalue_assign(struct Cyc_Absyn_Exp*e1,struct Cyc_List_List*fs,struct Cyc_Absyn_Exp*(*f)(struct Cyc_Absyn_Exp*,void*),void*f_env){struct Cyc_Absyn_Exp*_T0;int*_T1;unsigned _T2;struct Cyc_Absyn_Stmt*_T3;struct Cyc_List_List*_T4;struct Cyc_Absyn_Exp*(*_T5)(struct Cyc_Absyn_Exp*,void*);void*_T6;void*_T7;struct Cyc_Absyn_Exp*_T8;struct Cyc_List_List*_T9;struct Cyc_Absyn_Exp*(*_TA)(struct Cyc_Absyn_Exp*,void*);void*_TB;struct Cyc_Absyn_Exp*_TC;struct Cyc_Absyn_Exp*_TD;struct Cyc_Absyn_Exp*_TE;struct Cyc_List_List*_TF;struct Cyc_Absyn_Exp*(*_T10)(struct Cyc_Absyn_Exp*,void*);void*_T11;struct Cyc_Absyn_Exp*_T12;struct Cyc_List_List*_T13;void*_T14;struct _fat_ptr*_T15;struct Cyc_Absyn_Exp*_T16;unsigned _T17;struct Cyc_List_List*_T18;struct Cyc_Absyn_Exp*_T19;struct Cyc_Absyn_Exp*_T1A;_T0= e1;{
void*_T1B=_T0->r;long _T1C;long _T1D;struct _fat_ptr*_T1E;struct Cyc_Absyn_Exp*_T1F;void*_T20;_T1= (int*)_T1B;_T2= *_T1;switch(_T2){case 36:{struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct*_T21=(struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct*)_T1B;_T20= _T21->f1;}{struct Cyc_Absyn_Stmt*s=_T20;_T3= s;_T4= fs;_T5= f;_T6= f_env;
# 1389
Cyc_Toc_lvalue_assign_stmt(_T3,_T4,_T5,_T6);goto _LL0;}case 14:{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T21=(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T1B;_T7= _T21->f1;_T20= (void*)_T7;_T1F= _T21->f2;}{void*t=_T20;struct Cyc_Absyn_Exp*e=_T1F;_T8= e;_T9= fs;_TA= f;_TB= f_env;
# 1392
Cyc_Toc_lvalue_assign(_T8,_T9,_TA,_TB);goto _LL0;}case 21:{struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*_T21=(struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*)_T1B;_T1F= _T21->f1;_T1E= _T21->f2;_T1D= _T21->f3;_T1C= _T21->f4;}{struct Cyc_Absyn_Exp*e=_T1F;struct _fat_ptr*fld=_T1E;long is_tagged=_T1D;long is_read=_T1C;_TC= e1;_TD= e;
# 1396
_TC->r= _TD->r;_TE= e1;{struct Cyc_List_List*_T21=_cycalloc(sizeof(struct Cyc_List_List));
_T21->hd= fld;_T21->tl= fs;_TF= (struct Cyc_List_List*)_T21;}_T10= f;_T11= f_env;Cyc_Toc_lvalue_assign(_TE,_TF,_T10,_T11);goto _LL0;}default:  {
# 1405
struct Cyc_Absyn_Exp*e1_copy=Cyc_Toc_deep_copy(e1);
# 1407
_TL15C: if(fs!=0)goto _TL15A;else{goto _TL15B;}
_TL15A: _T12= e1_copy;_T13= fs;_T14= _T13->hd;_T15= (struct _fat_ptr*)_T14;_T16= e1_copy;_T17= _T16->loc;e1_copy= Cyc_Toc_member_exp(_T12,_T15,_T17);_T18= fs;
# 1407
fs= _T18->tl;goto _TL15C;_TL15B: _T19= e1;_T1A= 
# 1409
f(e1_copy,f_env);_T19->r= _T1A->r;goto _LL0;}}_LL0:;}}
# 1413
static void Cyc_Toc_lvalue_assign_stmt(struct Cyc_Absyn_Stmt*s,struct Cyc_List_List*fs,struct Cyc_Absyn_Exp*(*f)(struct Cyc_Absyn_Exp*,void*),void*f_env){struct Cyc_Absyn_Stmt*_T0;int*_T1;unsigned _T2;struct Cyc_Absyn_Exp*_T3;struct Cyc_List_List*_T4;struct Cyc_Absyn_Exp*(*_T5)(struct Cyc_Absyn_Exp*,void*);void*_T6;struct Cyc_Absyn_Stmt*_T7;struct Cyc_List_List*_T8;struct Cyc_Absyn_Exp*(*_T9)(struct Cyc_Absyn_Exp*,void*);void*_TA;struct Cyc_Absyn_Stmt*_TB;struct Cyc_List_List*_TC;struct Cyc_Absyn_Exp*(*_TD)(struct Cyc_Absyn_Exp*,void*);void*_TE;struct Cyc_Warn_String_Warn_Warg_struct _TF;struct Cyc_Warn_Stmt_Warn_Warg_struct _T10;struct _fat_ptr _T11;_T0= s;{
void*_T12=_T0->r;struct Cyc_Absyn_Stmt*_T13;struct Cyc_Absyn_Decl*_T14;struct Cyc_Absyn_Exp*_T15;_T1= (int*)_T12;_T2= *_T1;switch(_T2){case 1:{struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct*_T16=(struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct*)_T12;_T15= _T16->f1;}{struct Cyc_Absyn_Exp*e1=_T15;_T3= e1;_T4= fs;_T5= f;_T6= f_env;
# 1416
Cyc_Toc_lvalue_assign(_T3,_T4,_T5,_T6);goto _LL0;}case 12:{struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*_T16=(struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*)_T12;_T14= _T16->f1;_T13= _T16->f2;}{struct Cyc_Absyn_Decl*d=_T14;struct Cyc_Absyn_Stmt*s2=_T13;_T7= s2;_T8= fs;_T9= f;_TA= f_env;
# 1420
Cyc_Toc_lvalue_assign_stmt(_T7,_T8,_T9,_TA);goto _LL0;}case 2:{struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*_T16=(struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*)_T12;_T13= _T16->f2;}{struct Cyc_Absyn_Stmt*s2=_T13;_TB= s2;_TC= fs;_TD= f;_TE= f_env;
# 1423
Cyc_Toc_lvalue_assign_stmt(_TB,_TC,_TD,_TE);goto _LL0;}default:{struct Cyc_Warn_String_Warn_Warg_struct _T16;_T16.tag= 0;
# 1426
({__typeof__(_tag_fat("lvalue_assign_stmt: ",sizeof(char),21U))_T17=_tag_fat("lvalue_assign_stmt: ",sizeof(char),21U);_T16.f1= _T17;});_TF= _T16;}{struct Cyc_Warn_String_Warn_Warg_struct _T16=_TF;{struct Cyc_Warn_Stmt_Warn_Warg_struct _T17;_T17.tag= 5;_T17.f1= s;_T10= _T17;}{struct Cyc_Warn_Stmt_Warn_Warg_struct _T17=_T10;void*_T18[2];_T18[0]= & _T16;_T18[1]= & _T17;_T11= _tag_fat(_T18,sizeof(void*),2);Cyc_Toc_toc_impos(_T11);}}}_LL0:;}}
# 1432
static void Cyc_Toc_push_address_stmt(struct Cyc_Absyn_Stmt*);
static struct Cyc_Absyn_Exp*Cyc_Toc_push_address_exp(struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;int*_T1;unsigned _T2;struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T3;void**_T4;struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T5;struct Cyc_Absyn_Exp**_T6;struct Cyc_Absyn_Exp**_T7;struct Cyc_Absyn_Exp**_T8;struct Cyc_Absyn_Exp*_T9;void**_TA;void**_TB;void*_TC;struct Cyc_Absyn_Tqual _TD;struct Cyc_Absyn_Exp*_TE;void**_TF;struct Cyc_Absyn_Exp*_T10;struct Cyc_Absyn_Exp*_T11;struct Cyc_Absyn_Exp*_T12;long _T13;struct Cyc_Absyn_Exp*_T14;struct Cyc_Warn_String_Warn_Warg_struct _T15;struct Cyc_Warn_Exp_Warn_Warg_struct _T16;int(*_T17)(struct _fat_ptr ap);struct _fat_ptr _T18;_T0= e;{
void*_T19=_T0->r;struct Cyc_Absyn_Stmt*_T1A;struct Cyc_Absyn_Exp*_T1B;void*_T1C;void*_T1D;_T1= (int*)_T19;_T2= *_T1;switch(_T2){case 14:{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T1E=(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T19;_T3= (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T19;_T4= & _T3->f1;_T1D= (void**)_T4;_T5= (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T19;_T6= & _T5->f2;_T1C= (struct Cyc_Absyn_Exp**)_T6;}{void**t=(void**)_T1D;struct Cyc_Absyn_Exp**e1=(struct Cyc_Absyn_Exp**)_T1C;_T7= e1;_T8= e1;_T9= *_T8;
# 1436
({__typeof__(Cyc_Toc_push_address_exp(_T9))_T1E=Cyc_Toc_push_address_exp(_T9);*_T7= _T1E;});_TA= t;_TB= t;_TC= *_TB;_TD= Cyc_Toc_mt_tq;
({__typeof__(Cyc_Absyn_cstar_type(_TC,_TD))_T1E=Cyc_Absyn_cstar_type(_TC,_TD);*_TA= _T1E;});_TE= e;_TF= t;
_TE->topt= *_TF;_T10= e;
return _T10;}case 20:{struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*_T1E=(struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*)_T19;_T1B= _T1E->f1;}{struct Cyc_Absyn_Exp*e1=_T1B;_T11= e1;
# 1441
return _T11;}case 36:{struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct*_T1E=(struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct*)_T19;_T1A= _T1E->f1;}{struct Cyc_Absyn_Stmt*s=_T1A;
# 1445
Cyc_Toc_push_address_stmt(s);_T12= e;
return _T12;}default: _T13= 
# 1448
Cyc_Absyn_is_lvalue(e);if(!_T13)goto _TL15F;_T14= 
Cyc_Toc_address_lvalue(e,0);return _T14;_TL15F:{struct Cyc_Warn_String_Warn_Warg_struct _T1E;_T1E.tag= 0;
({__typeof__(_tag_fat("can't take & of exp ",sizeof(char),21U))_T1F=_tag_fat("can't take & of exp ",sizeof(char),21U);_T1E.f1= _T1F;});_T15= _T1E;}{struct Cyc_Warn_String_Warn_Warg_struct _T1E=_T15;{struct Cyc_Warn_Exp_Warn_Warg_struct _T1F;_T1F.tag= 4;_T1F.f1= e;_T16= _T1F;}{struct Cyc_Warn_Exp_Warn_Warg_struct _T1F=_T16;void*_T20[2];_T20[0]= & _T1E;_T20[1]= & _T1F;{int(*_T21)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T17= _T21;}_T18= _tag_fat(_T20,sizeof(void*),2);_T17(_T18);}}};}}
# 1453
static void Cyc_Toc_push_address_stmt(struct Cyc_Absyn_Stmt*s){struct Cyc_Absyn_Stmt*_T0;int*_T1;unsigned _T2;struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct*_T3;struct Cyc_Absyn_Exp**_T4;struct Cyc_Absyn_Exp**_T5;struct Cyc_Absyn_Exp**_T6;struct Cyc_Absyn_Exp*_T7;struct Cyc_Warn_String_Warn_Warg_struct _T8;struct Cyc_Warn_Stmt_Warn_Warg_struct _T9;int(*_TA)(struct _fat_ptr ap);struct _fat_ptr _TB;_T0= s;{
void*_TC=_T0->r;void*_TD;_T1= (int*)_TC;_T2= *_T1;switch(_T2){case 2:{struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*_TE=(struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*)_TC;_TD= _TE->f2;}{struct Cyc_Absyn_Stmt*s2=_TD;_TD= s2;goto _LL4;}case 12:{struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*_TE=(struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*)_TC;_TD= _TE->f2;}_LL4: {struct Cyc_Absyn_Stmt*s2=_TD;
# 1458
Cyc_Toc_push_address_stmt(s2);goto _LL0;}case 1:{struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct*_TE=(struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct*)_TC;_T3= (struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct*)_TC;_T4= & _T3->f1;_TD= (struct Cyc_Absyn_Exp**)_T4;}{struct Cyc_Absyn_Exp**e=(struct Cyc_Absyn_Exp**)_TD;_T5= e;_T6= e;_T7= *_T6;
# 1461
({__typeof__(Cyc_Toc_push_address_exp(_T7))_TE=Cyc_Toc_push_address_exp(_T7);*_T5= _TE;});goto _LL0;}default:{struct Cyc_Warn_String_Warn_Warg_struct _TE;_TE.tag= 0;
# 1464
({__typeof__(_tag_fat("can't take & of stmt ",sizeof(char),22U))_TF=_tag_fat("can't take & of stmt ",sizeof(char),22U);_TE.f1= _TF;});_T8= _TE;}{struct Cyc_Warn_String_Warn_Warg_struct _TE=_T8;{struct Cyc_Warn_Stmt_Warn_Warg_struct _TF;_TF.tag= 5;_TF.f1= s;_T9= _TF;}{struct Cyc_Warn_Stmt_Warn_Warg_struct _TF=_T9;void*_T10[2];_T10[0]= & _TE;_T10[1]= & _TF;{int(*_T11)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_TA= _T11;}_TB= _tag_fat(_T10,sizeof(void*),2);_TA(_TB);}}}_LL0:;}}
# 1471
static void Cyc_Toc_zero_ptr_assign_to_c(struct Cyc_Toc_Env*nv,struct Cyc_Absyn_Exp*e,struct Cyc_Absyn_Exp*e1,struct Cyc_Absyn_PrimopOpt*popt,struct Cyc_Absyn_Exp*e2,void*ptr_type,long is_fat,void*elt_type){struct Cyc_Toc_Env*_T0;struct Cyc_Toc_TocContext*_T1;void*_T2;struct Cyc_Toc_Env*_T3;struct Cyc_Toc_TocContext*_T4;void*_T5;struct Cyc_Core_Opt*_T6;struct Cyc_Absyn_Exp*_T7;int*_T8;unsigned _T9;long _TA;struct Cyc_Absyn_Exp*_TB;struct Cyc_Absyn_Exp*_TC;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_TD;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_TE;long _TF;struct Cyc_Absyn_Exp*_T10;struct Cyc_Absyn_Exp*_T11;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T12;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T13;struct Cyc_Absyn_Exp*_T14;struct Cyc_Toc_Env*_T15;struct Cyc_Toc_TocContext*_T16;void*_T17;void*_T18;struct Cyc_Absyn_Exp*_T19;void*_T1A;struct Cyc_Absyn_Exp*_T1B;struct _fat_ptr _T1C;struct Cyc_Absyn_Exp*_T1D;struct Cyc_Warn_String_Warn_Warg_struct _T1E;int(*_T1F)(struct _fat_ptr ap);struct _fat_ptr _T20;struct Cyc_Toc_Env*_T21;struct Cyc_Toc_TocContext*_T22;struct Cyc_Absyn_Vardecl*_T23;struct Cyc_Absyn_Vardecl*_T24;struct Cyc_Absyn_Vardecl*_T25;struct Cyc_Absyn_Vardecl*_T26;struct Cyc_Absyn_Vardecl*_T27;struct Cyc_Absyn_Vardecl*_T28;struct Cyc_Absyn_Vardecl*_T29;struct Cyc_Absyn_Vardecl*_T2A;struct Cyc_Absyn_Vardecl*_T2B;struct Cyc_Absyn_Vardecl*_T2C;struct Cyc_Absyn_Vardecl*_T2D;struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T2E;struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T2F;struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T30;void*_T31;struct Cyc_Absyn_Exp*_T32;struct Cyc_Absyn_Exp*_T33;long _T34;struct Cyc_Absyn_Exp*_T35;struct Cyc_Absyn_Exp*_T36;struct Cyc_Absyn_Exp*_T37;struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct*_T38;struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct*_T39;struct Cyc_Toc_Env*_T3A;struct Cyc_Toc_TocContext*_T3B;struct Cyc_Absyn_Vardecl*_T3C;struct Cyc_Absyn_Vardecl*_T3D;struct Cyc_Absyn_Vardecl*_T3E;struct Cyc_Absyn_Vardecl*_T3F;struct Cyc_Absyn_Vardecl*_T40;struct Cyc_Absyn_Vardecl*_T41;struct Cyc_Absyn_Vardecl*_T42;struct Cyc_Absyn_Vardecl*_T43;struct Cyc_Absyn_Vardecl*_T44;struct Cyc_Absyn_Vardecl*_T45;struct Cyc_Absyn_Vardecl*_T46;struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T47;struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T48;struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T49;void*_T4A;struct Cyc_Absyn_Exp*_T4B;struct Cyc_Absyn_Exp*_T4C;struct Cyc_Absyn_PrimopOpt*_T4D;enum Cyc_Absyn_Primop _T4E;struct Cyc_Absyn_Exp*_T4F;struct Cyc_Absyn_Exp*_T50;struct Cyc_Absyn_Exp*_T51;struct Cyc_Absyn_Exp*_T52;struct Cyc_Absyn_Exp*_T53;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T54;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T55;struct Cyc_Toc_Env*_T56;struct Cyc_Toc_TocContext*_T57;struct Cyc_Absyn_Vardecl*_T58;struct Cyc_Absyn_Vardecl*_T59;struct Cyc_Absyn_Vardecl*_T5A;struct Cyc_Absyn_Vardecl*_T5B;struct Cyc_Absyn_Vardecl*_T5C;struct Cyc_Absyn_Vardecl*_T5D;struct Cyc_Absyn_Vardecl*_T5E;struct Cyc_Absyn_Vardecl*_T5F;struct Cyc_Absyn_Vardecl*_T60;struct Cyc_Absyn_Vardecl*_T61;struct Cyc_Absyn_Vardecl*_T62;struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T63;struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T64;struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T65;void*_T66;struct Cyc_Absyn_Exp*_T67;struct Cyc_Absyn_Exp*_T68;struct Cyc_Absyn_Exp*_T69;struct Cyc_Absyn_Exp*_T6A;struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T6B;void*_T6C;struct Cyc_Absyn_Exp*_T6D;struct Cyc_Absyn_Exp*_T6E;struct Cyc_Absyn_Exp*_T6F;struct Cyc_Absyn_Exp*_T70;struct Cyc_List_List*_T71;struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T72;void*_T73;struct Cyc_Absyn_Exp*_T74;void*_T75;struct Cyc_Toc_Env*_T76;struct Cyc_Toc_TocContext*_T77;void*_T78;void*_T79;struct Cyc_Absyn_Exp*_T7A;void*_T7B;struct _fat_ptr _T7C;struct Cyc_Absyn_Exp*_T7D;void*_T7E;struct Cyc_Absyn_Exp*_T7F;void*_T80;struct Cyc_Absyn_Exp*_T81;struct Cyc_Absyn_Exp*_T82;struct Cyc_Absyn_Exp*_T83;struct Cyc_Absyn_Exp*_T84;struct Cyc_Absyn_Exp*_T85;struct _fat_ptr _T86;struct Cyc_Absyn_Exp*_T87;struct Cyc_Toc_Env*_T88;struct Cyc_Toc_TocContext*_T89;void*_T8A;struct Cyc_Absyn_Exp*_T8B;struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T8C;void*_T8D;struct Cyc_Absyn_Exp*_T8E;void*_T8F;struct Cyc_Absyn_Exp*_T90;struct Cyc_Absyn_Exp*_T91;void*_T92;struct Cyc_Absyn_Exp*_T93;struct Cyc_Absyn_Exp*_T94;void*_T95;struct Cyc_Absyn_Exp*_T96;struct Cyc_Absyn_Exp*_T97;void*_T98;struct Cyc_Absyn_Exp*_T99;struct Cyc_Absyn_Stmt*_T9A;struct Cyc_Absyn_Stmt*_T9B;struct Cyc_Absyn_Stmt*_T9C;struct Cyc_Absyn_Stmt*_T9D;struct Cyc_Absyn_Decl*_T9E;struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T9F;struct Cyc_Absyn_Stmt*_TA0;struct Cyc_Absyn_Decl*_TA1;struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_TA2;struct Cyc_Absyn_Stmt*_TA3;struct Cyc_Absyn_Decl*_TA4;struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_TA5;struct Cyc_Absyn_Stmt*_TA6;struct Cyc_Absyn_Exp*_TA7;
# 1480
void*fat_ptr_type=
Cyc_Absyn_fatptr_type(elt_type,Cyc_Absyn_heap_rgn_type,Cyc_Absyn_al_qual_type,Cyc_Toc_mt_tq,Cyc_Absyn_true_type,Cyc_Absyn_false_type);_T0= nv;_T1= _T0->ctxt;_T2= elt_type;{
void*c_elt_type=Cyc_Toc_typ_to_c(_T1,_T2);_T3= nv;_T4= _T3->ctxt;_T5= fat_ptr_type;{
void*c_fat_ptr_type=Cyc_Toc_typ_to_c(_T4,_T5);
void*c_ptr_type=Cyc_Absyn_cstar_type(c_elt_type,Cyc_Toc_mt_tq);
struct Cyc_Core_Opt*c_ptr_type_opt;c_ptr_type_opt= _cycalloc(sizeof(struct Cyc_Core_Opt));_T6= c_ptr_type_opt;_T6->v= c_ptr_type;{
struct Cyc_Absyn_Exp*xinit;_T7= e1;{
void*_TA8=_T7->r;struct Cyc_Absyn_Exp*_TA9;struct Cyc_Absyn_Exp*_TAA;_T8= (int*)_TA8;_T9= *_T8;switch(_T9){case 20:{struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*_TAB=(struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*)_TA8;_TAA= _TAB->f1;}{struct Cyc_Absyn_Exp*ea=_TAA;_TA= is_fat;
# 1489
if(_TA)goto _TL163;else{goto _TL165;}
_TL165: ea= Cyc_Absyn_cast_exp(fat_ptr_type,ea,0,4U,0U);_TB= ea;
_TB->topt= fat_ptr_type;_TC= ea;_TD= & Cyc_InsertChecks_NoCheck_val;_TE= (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*)_TD;
_TC->annot= (void*)_TE;goto _TL164;_TL163: _TL164:
# 1494
 Cyc_Toc_exp_to_c(nv,ea);
xinit= ea;goto _LL0;}case 23:{struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*_TAB=(struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*)_TA8;_TAA= _TAB->f1;_TA9= _TAB->f2;}{struct Cyc_Absyn_Exp*ea=_TAA;struct Cyc_Absyn_Exp*eb=_TA9;_TF= is_fat;
# 1498
if(_TF)goto _TL166;else{goto _TL168;}
_TL168: ea= Cyc_Absyn_cast_exp(fat_ptr_type,ea,0,4U,0U);_T10= ea;
_T10->topt= fat_ptr_type;_T11= ea;_T12= & Cyc_InsertChecks_NoCheck_val;_T13= (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*)_T12;
_T11->annot= (void*)_T13;goto _TL167;_TL166: _TL167:
# 1503
 Cyc_Toc_exp_to_c(nv,ea);
Cyc_Toc_exp_to_c(nv,eb);{struct Cyc_Absyn_Exp*_TAB[3];
_TAB[0]= ea;_T15= nv;_T16= _T15->ctxt;_T17= elt_type;_T18= Cyc_Toc_typ_to_c(_T16,_T17);_T19= Cyc_Absyn_sizeoftype_exp(_T18,0U);_T1A= Cyc_Absyn_uint_type;({__typeof__(Cyc_Absyn_set_type(_T19,_T1A))_TAC=Cyc_Absyn_set_type(_T19,_T1A);_TAB[1]= _TAC;});_TAB[2]= eb;_T1B= Cyc_Toc__fat_ptr_plus_e;_T1C= _tag_fat(_TAB,sizeof(struct Cyc_Absyn_Exp*),3);_T14= Cyc_Toc_fncall_exp_dl(_T1B,_T1C);}xinit= _T14;_T1D= xinit;
_T1D->topt= c_fat_ptr_type;goto _LL0;}default:{struct Cyc_Warn_String_Warn_Warg_struct _TAB;_TAB.tag= 0;
# 1509
({__typeof__(_tag_fat("found bad lhs for zero-terminated pointer assignment",sizeof(char),53U))_TAC=_tag_fat("found bad lhs for zero-terminated pointer assignment",sizeof(char),53U);_TAB.f1= _TAC;});_T1E= _TAB;}{struct Cyc_Warn_String_Warn_Warg_struct _TAB=_T1E;void*_TAC[1];_TAC[0]= & _TAB;{int(*_TAD)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T1F= _TAD;}_T20= _tag_fat(_TAC,sizeof(void*),1);_T1F(_T20);}}_LL0:;}_T21= nv;_T22= _T21->ctxt;{
# 1511
struct _tuple1*x=Cyc_Toc_temp_var(_T22);struct _RegionHandle _TA8=_new_region(0U,"rgn2");struct _RegionHandle*rgn2=& _TA8;_push_region(rgn2);{
# 1513
struct Cyc_Absyn_Vardecl*x_vd;x_vd= _cycalloc(sizeof(struct Cyc_Absyn_Vardecl));_T23= x_vd;
_T23->sc= 2U;_T24= x_vd;_T24->name= x;_T25= x_vd;_T25->varloc= 0U;_T26= x_vd;_T26->tq= Cyc_Toc_mt_tq;_T27= x_vd;_T27->type= c_fat_ptr_type;_T28= x_vd;_T28->initializer= xinit;_T29= x_vd;_T29->rgn= 0;_T2A= x_vd;_T2A->attributes= 0;_T2B= x_vd;_T2B->escapes= 0;_T2C= x_vd;_T2C->is_proto= 0;_T2D= x_vd;_T2D->rename= 0;{
struct Cyc_Absyn_Local_b_Absyn_Binding_struct*x_bnd;x_bnd= _cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));_T2E= x_bnd;_T2E->tag= 4;_T2F= x_bnd;_T2F->f1= x_vd;_T30= x_bnd;_T31= (void*)_T30;{
struct Cyc_Absyn_Exp*x_exp=Cyc_Absyn_varb_exp(_T31,0U);_T32= x_exp;
_T32->topt= fat_ptr_type;{
struct Cyc_Absyn_Exp*deref_x=Cyc_Absyn_deref_exp(x_exp,0U);_T33= deref_x;
_T33->topt= elt_type;_T34= is_fat;
# 1522
if(!_T34)goto _TL169;_T35= deref_x;_T36= e1;
_T35->annot= _T36->annot;goto _TL16A;
# 1525
_TL169: _T37= deref_x;_T38= & Cyc_InsertChecks_NullAndFatBound_val;_T39= (struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct*)_T38;_T37->annot= (void*)_T39;_TL16A:
 Cyc_Toc_exp_to_c(nv,deref_x);_T3A= nv;_T3B= _T3A->ctxt;{
struct _tuple1*y=Cyc_Toc_temp_var(_T3B);
struct Cyc_Absyn_Vardecl*y_vd;y_vd= _cycalloc(sizeof(struct Cyc_Absyn_Vardecl));_T3C= y_vd;
_T3C->sc= 2U;_T3D= y_vd;_T3D->name= y;_T3E= y_vd;_T3E->varloc= 0U;_T3F= y_vd;_T3F->tq= Cyc_Toc_mt_tq;_T40= y_vd;_T40->type= c_elt_type;_T41= y_vd;_T41->initializer= deref_x;_T42= y_vd;_T42->rgn= 0;_T43= y_vd;_T43->attributes= 0;_T44= y_vd;_T44->escapes= 0;_T45= y_vd;_T45->is_proto= 0;_T46= y_vd;_T46->rename= 0;{
struct Cyc_Absyn_Local_b_Absyn_Binding_struct*y_bnd;y_bnd= _cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));_T47= y_bnd;_T47->tag= 4;_T48= y_bnd;_T48->f1= y_vd;{
struct Cyc_Absyn_Exp*z_init=e2;
if(popt==0)goto _TL16B;_T49= y_bnd;_T4A= (void*)_T49;{
struct Cyc_Absyn_Exp*y_exp=Cyc_Absyn_varb_exp(_T4A,0U);_T4B= y_exp;_T4C= deref_x;
_T4B->topt= _T4C->topt;_T4D= popt;_T4E= _T4D->v;_T4F= y_exp;_T50= 
Cyc_Toc_deep_copy(e2);z_init= Cyc_Absyn_prim2_exp(_T4E,_T4F,_T50,0U);_T51= z_init;_T52= y_exp;
_T51->topt= _T52->topt;_T53= z_init;_T54= & Cyc_InsertChecks_NoCheck_val;_T55= (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*)_T54;
_T53->annot= (void*)_T55;}goto _TL16C;_TL16B: _TL16C:
# 1539
 Cyc_Toc_exp_to_c(nv,z_init);_T56= nv;_T57= _T56->ctxt;{
struct _tuple1*z=Cyc_Toc_temp_var(_T57);
struct Cyc_Absyn_Vardecl*z_vd;z_vd= _cycalloc(sizeof(struct Cyc_Absyn_Vardecl));_T58= z_vd;_T58->sc= 2U;_T59= z_vd;_T59->name= z;_T5A= z_vd;_T5A->varloc= 0U;_T5B= z_vd;_T5B->tq= Cyc_Toc_mt_tq;_T5C= z_vd;_T5C->type= c_elt_type;_T5D= z_vd;_T5D->initializer= z_init;_T5E= z_vd;_T5E->rgn= 0;_T5F= z_vd;_T5F->attributes= 0;_T60= z_vd;_T60->escapes= 0;_T61= z_vd;_T61->is_proto= 0;_T62= z_vd;_T62->rename= 0;{
struct Cyc_Absyn_Local_b_Absyn_Binding_struct*z_bnd;z_bnd= _cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));_T63= z_bnd;_T63->tag= 4;_T64= z_bnd;_T64->f1= z_vd;_T65= y_bnd;_T66= (void*)_T65;{
# 1545
struct Cyc_Absyn_Exp*y2_exp=Cyc_Absyn_varb_exp(_T66,0U);_T67= y2_exp;_T68= deref_x;
_T67->topt= _T68->topt;{
struct Cyc_Absyn_Exp*zero1_exp=Cyc_Absyn_signed_int_exp(0,0U);
struct Cyc_Absyn_Exp*comp1_exp=Cyc_Absyn_prim2_exp(5U,y2_exp,zero1_exp,0U);_T69= zero1_exp;
_T69->topt= Cyc_Absyn_sint_type;_T6A= comp1_exp;
_T6A->topt= Cyc_Absyn_sint_type;
Cyc_Toc_exp_to_c(nv,comp1_exp);_T6B= z_bnd;_T6C= (void*)_T6B;{
# 1553
struct Cyc_Absyn_Exp*z_exp=Cyc_Absyn_varb_exp(_T6C,0U);_T6D= z_exp;_T6E= deref_x;
_T6D->topt= _T6E->topt;{
struct Cyc_Absyn_Exp*zero2_exp=Cyc_Absyn_signed_int_exp(0,0U);
struct Cyc_Absyn_Exp*comp2_exp=Cyc_Absyn_prim2_exp(6U,z_exp,zero2_exp,0U);_T6F= zero2_exp;
_T6F->topt= Cyc_Absyn_sint_type;_T70= comp2_exp;
_T70->topt= Cyc_Absyn_sint_type;
Cyc_Toc_exp_to_c(nv,comp2_exp);{struct Cyc_Absyn_Exp*_TA9[2];_T72= x_bnd;_T73= (void*)_T72;_T74= 
# 1562
Cyc_Absyn_varb_exp(_T73,0U);_T75= c_fat_ptr_type;({__typeof__(Cyc_Absyn_set_type(_T74,_T75))_TAA=Cyc_Absyn_set_type(_T74,_T75);_TA9[0]= _TAA;});_T76= nv;_T77= _T76->ctxt;_T78= elt_type;_T79= Cyc_Toc_typ_to_c(_T77,_T78);_T7A= Cyc_Absyn_sizeoftype_exp(_T79,0U);_T7B= Cyc_Absyn_uint_type;({__typeof__(Cyc_Absyn_set_type(_T7A,_T7B))_TAA=Cyc_Absyn_set_type(_T7A,_T7B);_TA9[1]= _TAA;});_T7C= _tag_fat(_TA9,sizeof(struct Cyc_Absyn_Exp*),2);_T71= Cyc_List_list(_T7C);}{
# 1561
struct Cyc_List_List*xsizeargs=_T71;_T7D= 
# 1563
Cyc_Absyn_uint_exp(1U,0U);_T7E= Cyc_Absyn_uint_type;{struct Cyc_Absyn_Exp*oneexp=Cyc_Absyn_set_type(_T7D,_T7E);
struct Cyc_Absyn_Exp*xsize;_T7F= 
# 1566
Cyc_Absyn_fncall_exp(Cyc_Toc__get_fat_size_e,xsizeargs,0U);_T80= Cyc_Absyn_uint_type;_T81= Cyc_Absyn_set_type(_T7F,_T80);_T82= oneexp;
# 1565
xsize= 
Cyc_Absyn_prim2_exp(5U,_T81,_T82,0U);_T83= xsize;_T84= 
# 1568
Cyc_Absyn_and_exp(comp1_exp,comp2_exp,0U);{struct Cyc_Absyn_Exp*comp_exp=Cyc_Absyn_and_exp(_T83,_T84,0U);_T85= Cyc_Toc__throw_arraybounds_e;_T86= _tag_fat(0U,sizeof(struct Cyc_Absyn_Exp*),0);_T87= 
Cyc_Toc_fncall_exp_dl(_T85,_T86);_T88= nv;_T89= _T88->ctxt;_T8A= Cyc_Toc_void_star_type(_T89);_T8B= Cyc_Absyn_set_type(_T87,_T8A);{struct Cyc_Absyn_Stmt*thr_stmt=Cyc_Absyn_exp_stmt(_T8B,0U);_T8C= x_bnd;_T8D= (void*)_T8C;_T8E= 
Cyc_Absyn_varb_exp(_T8D,0U);_T8F= c_fat_ptr_type;_T90= Cyc_Absyn_set_type(_T8E,_T8F);{struct Cyc_Absyn_Exp*xcurr=Cyc_Toc_get_curr(_T90);
xcurr= Cyc_Toc_cast_it(c_ptr_type,xcurr);_T91= 
Cyc_Absyn_deref_exp(xcurr,0U);_T92= c_elt_type;{struct Cyc_Absyn_Exp*deref_xcurr=Cyc_Absyn_set_type(_T91,_T92);_T93= deref_xcurr;_T94= 
# 1574
Cyc_Absyn_var_exp(z,0U);_T95= c_elt_type;_T96= Cyc_Absyn_set_type(_T94,_T95);_T97= Cyc_Absyn_assign_exp(_T93,_T96,0U);_T98= c_elt_type;{
# 1573
struct Cyc_Absyn_Exp*asn_exp=
Cyc_Absyn_set_type(_T97,_T98);
struct Cyc_Absyn_Stmt*s=Cyc_Absyn_exp_stmt(asn_exp,0U);_T99= comp_exp;_T9A= thr_stmt;_T9B= 
Cyc_Absyn_skip_stmt(0U);_T9C= Cyc_Absyn_ifthenelse_stmt(_T99,_T9A,_T9B,0U);_T9D= s;s= Cyc_Absyn_seq_stmt(_T9C,_T9D,0U);{struct Cyc_Absyn_Decl*_TA9=_cycalloc(sizeof(struct Cyc_Absyn_Decl));{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_TAA=_cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));_TAA->tag= 0;
_TAA->f1= z_vd;_T9F= (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_TAA;}_TA9->r= (void*)_T9F;_TA9->loc= 0U;_T9E= (struct Cyc_Absyn_Decl*)_TA9;}_TA0= s;s= Cyc_Absyn_decl_stmt(_T9E,_TA0,0U);{struct Cyc_Absyn_Decl*_TA9=_cycalloc(sizeof(struct Cyc_Absyn_Decl));{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_TAA=_cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));_TAA->tag= 0;
_TAA->f1= y_vd;_TA2= (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_TAA;}_TA9->r= (void*)_TA2;_TA9->loc= 0U;_TA1= (struct Cyc_Absyn_Decl*)_TA9;}_TA3= s;s= Cyc_Absyn_decl_stmt(_TA1,_TA3,0U);{struct Cyc_Absyn_Decl*_TA9=_cycalloc(sizeof(struct Cyc_Absyn_Decl));{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_TAA=_cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));_TAA->tag= 0;
_TAA->f1= x_vd;_TA5= (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_TAA;}_TA9->r= (void*)_TA5;_TA9->loc= 0U;_TA4= (struct Cyc_Absyn_Decl*)_TA9;}_TA6= s;s= Cyc_Absyn_decl_stmt(_TA4,_TA6,0U);_TA7= e;
({__typeof__(Cyc_Toc_stmt_exp_r(s))_TA9=Cyc_Toc_stmt_exp_r(s);_TA7->r= _TA9;});}}}}}}}}}}}}}}}}}}}}_pop_region();}}}}}
# 1595
static void*Cyc_Toc_check_tagged_union(struct Cyc_Toc_TocContext*ctxt,void*res_type,struct Cyc_Absyn_Exp*e1,void*e1_c_type,void*aggrtype,struct _fat_ptr*f,long in_lhs,struct Cyc_Absyn_Exp*(*aggrproj)(struct Cyc_Absyn_Exp*,struct _fat_ptr*,unsigned)){int*_T0;int _T1;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T2;void*_T3;int*_T4;int _T5;void*_T6;struct Cyc_Warn_String_Warn_Warg_struct _T7;struct Cyc_Warn_Typ_Warn_Warg_struct _T8;struct Cyc_Warn_String_Warn_Warg_struct _T9;int(*_TA)(struct _fat_ptr ap);struct _fat_ptr _TB;int _TC;struct Cyc_Absyn_Exp*_TD;void*_TE;long _TF;struct Cyc_Absyn_Exp*_T10;void*_T11;struct Cyc_Absyn_Exp*_T12;void*_T13;struct Cyc_Absyn_Exp*_T14;struct _fat_ptr*_T15;struct Cyc_Absyn_Exp*_T16;void*_T17;struct Cyc_Absyn_Exp*_T18;void*_T19;struct Cyc_Absyn_Exp*_T1A;struct Cyc_Absyn_Exp*_T1B;struct Cyc_Absyn_Stmt*_T1C;struct Cyc_Absyn_Stmt*_T1D;struct Cyc_Absyn_Exp*_T1E;void*_T1F;struct Cyc_Absyn_Exp*_T20;struct Cyc_Absyn_Exp*_T21;void*_T22;struct _tuple1*_T23;void*_T24;struct Cyc_Absyn_Exp*_T25;struct Cyc_Absyn_Stmt*_T26;void*_T27;struct Cyc_Absyn_Exp*_T28;void*_T29;struct Cyc_Absyn_Exp*_T2A;struct _fat_ptr*_T2B;struct Cyc_Absyn_Exp*_T2C;void*_T2D;struct Cyc_Absyn_Exp*_T2E;struct _fat_ptr*_T2F;struct Cyc_Absyn_Exp*_T30;void*_T31;struct Cyc_Absyn_Exp*_T32;struct _fat_ptr*_T33;struct Cyc_Absyn_Exp*_T34;struct Cyc_Absyn_Stmt*_T35;struct Cyc_Absyn_Stmt*_T36;struct _tuple1*_T37;void*_T38;struct Cyc_Absyn_Exp*_T39;struct Cyc_Absyn_Stmt*_T3A;void*_T3B;
# 1598
struct Cyc_Absyn_Aggrdecl*ad;{
void*_T3C=Cyc_Absyn_compress(aggrtype);union Cyc_Absyn_AggrInfo _T3D;_T0= (int*)_T3C;_T1= *_T0;if(_T1!=0)goto _TL16D;_T2= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3C;_T3= _T2->f1;_T4= (int*)_T3;_T5= *_T4;if(_T5!=24)goto _TL16F;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T3E=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3C;_T6= _T3E->f1;{struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_T3F=(struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*)_T6;_T3D= _T3F->f1;}}{union Cyc_Absyn_AggrInfo info=_T3D;
# 1601
ad= Cyc_Absyn_get_known_aggrdecl(info);goto _LL0;}_TL16F: goto _LL3;_TL16D: _LL3:{struct Cyc_Warn_String_Warn_Warg_struct _T3E;_T3E.tag= 0;
# 1604
({__typeof__(_tag_fat("expecting union but found ",sizeof(char),27U))_T3F=_tag_fat("expecting union but found ",sizeof(char),27U);_T3E.f1= _T3F;});_T7= _T3E;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E=_T7;{struct Cyc_Warn_Typ_Warn_Warg_struct _T3F;_T3F.tag= 2;_T3F.f1= aggrtype;_T8= _T3F;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T3F=_T8;{struct Cyc_Warn_String_Warn_Warg_struct _T40;_T40.tag= 0;({__typeof__(_tag_fat(" in check_tagged_union",sizeof(char),23U))_T41=_tag_fat(" in check_tagged_union",sizeof(char),23U);_T40.f1= _T41;});_T9= _T40;}{struct Cyc_Warn_String_Warn_Warg_struct _T40=_T9;void*_T41[3];_T41[0]= & _T3E;_T41[1]= & _T3F;_T41[2]= & _T40;{int(*_T42)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_TA= _T42;}_TB= _tag_fat(_T41,sizeof(void*),3);_TA(_TB);}}}_LL0:;}{
# 1606
void*strct_name=Cyc_Toc_tagged_union_field_struct(ctxt,aggrtype,f);
struct _tuple35 _T3C=Cyc_Toc_temp_var_and_exp(ctxt);struct Cyc_Absyn_Exp*_T3D;struct _tuple1*_T3E;_T3E= _T3C.f0;_T3D= _T3C.f1;{struct _tuple1*temp=_T3E;struct Cyc_Absyn_Exp*temp_exp=_T3D;_TC= 
Cyc_Toc_get_member_offset(ad,f);_TD= Cyc_Absyn_signed_int_exp(_TC,0U);_TE= Cyc_Absyn_uint_type;{struct Cyc_Absyn_Exp*f_tag=Cyc_Absyn_set_type(_TD,_TE);_TF= in_lhs;
if(!_TF)goto _TL171;{
void*e1_p_type=Cyc_Absyn_cstar_type(e1_c_type,Cyc_Toc_mt_tq);
Cyc_Absyn_set_type(temp_exp,e1_p_type);_T10= 
Cyc_Absyn_aggrarrow_exp(temp_exp,Cyc_Toc_tag_sp,0U);_T11= Cyc_Absyn_uint_type;{struct Cyc_Absyn_Exp*temp_f_tag=Cyc_Absyn_set_type(_T10,_T11);_T12= 
Cyc_Absyn_neq_exp(temp_f_tag,f_tag,0U);_T13= Cyc_Absyn_sint_type;{struct Cyc_Absyn_Exp*test_exp=Cyc_Absyn_set_type(_T12,_T13);_T14= 
Cyc_Toc_deep_copy(temp_exp);_T15= Cyc_Toc_val_sp;_T16= Cyc_Absyn_aggrarrow_exp(_T14,_T15,0U);_T17= res_type;{struct Cyc_Absyn_Exp*temp_f_val=Cyc_Absyn_set_type(_T16,_T17);_T18= 
Cyc_Absyn_address_exp(temp_f_val,0U);_T19= Cyc_Absyn_cstar_type(res_type,Cyc_Toc_mt_tq);_T1A= Cyc_Absyn_set_type(_T18,_T19);{struct Cyc_Absyn_Stmt*sres=Cyc_Absyn_exp_stmt(_T1A,0U);_T1B= test_exp;_T1C= 
Cyc_Toc_throw_match_stmt(ctxt);_T1D= Cyc_Toc_skip_stmt_dl();{struct Cyc_Absyn_Stmt*ifs=Cyc_Absyn_ifthenelse_stmt(_T1B,_T1C,_T1D,0U);_T1E= 
aggrproj(e1,f,0U);_T1F= res_type;_T20= Cyc_Absyn_set_type(_T1E,_T1F);_T21= Cyc_Absyn_address_exp(_T20,0U);_T22= e1_p_type;{struct Cyc_Absyn_Exp*e1_f=Cyc_Absyn_set_type(_T21,_T22);_T23= temp;_T24= e1_p_type;_T25= e1_f;_T26= 
Cyc_Absyn_seq_stmt(ifs,sres,0U);{struct Cyc_Absyn_Stmt*s=Cyc_Absyn_declare_stmt(_T23,_T24,_T25,_T26,0U);_T27= 
Cyc_Toc_stmt_exp_r(s);return _T27;}}}}}}}}
# 1621
_TL171: Cyc_Absyn_set_type(temp_exp,e1_c_type);_T28= 
# 1623
aggrproj(temp_exp,f,0U);_T29= strct_name;_T2A= Cyc_Absyn_set_type(_T28,_T29);_T2B= Cyc_Toc_tag_sp;_T2C= Cyc_Toc_member_exp(_T2A,_T2B,0U);_T2D= Cyc_Absyn_uint_type;{
# 1622
struct Cyc_Absyn_Exp*temp_f_tag=Cyc_Absyn_set_type(_T2C,_T2D);
# 1624
struct Cyc_Absyn_Exp*test_exp=Cyc_Absyn_neq_exp(temp_f_tag,f_tag,0U);_T2E= 
# 1626
Cyc_Toc_deep_copy(temp_exp);_T2F= f;_T30= aggrproj(_T2E,_T2F,0U);_T31= strct_name;_T32= Cyc_Absyn_set_type(_T30,_T31);_T33= Cyc_Toc_val_sp;{
# 1625
struct Cyc_Absyn_Exp*temp_f_val=
Cyc_Toc_member_exp(_T32,_T33,0U);
Cyc_Absyn_set_type(temp_f_val,res_type);{
struct Cyc_Absyn_Stmt*sres=Cyc_Absyn_exp_stmt(temp_f_val,0U);_T34= test_exp;_T35= 
Cyc_Toc_throw_match_stmt(ctxt);_T36= Cyc_Toc_skip_stmt_dl();{struct Cyc_Absyn_Stmt*ifs=Cyc_Absyn_ifthenelse_stmt(_T34,_T35,_T36,0U);_T37= temp;_T38= e1_c_type;_T39= e1;_T3A= 
Cyc_Absyn_seq_stmt(ifs,sres,0U);{struct Cyc_Absyn_Stmt*s=Cyc_Absyn_declare_stmt(_T37,_T38,_T39,_T3A,0U);_T3B= 
Cyc_Toc_stmt_exp_r(s);return _T3B;}}}}}}}}}
# 1635
static long Cyc_Toc_is_tagged_union_project_impl(struct Cyc_Toc_TocContext*ctxt,void*t,struct _fat_ptr*f,int*f_tag,void**tagged_member_type,long clear_read,long*is_read){int*_T0;int _T1;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T2;void*_T3;int*_T4;int _T5;void*_T6;int*_T7;void**_T8;long _T9;long*_TA;struct Cyc_Absyn_Aggrdecl*_TB;struct Cyc_Absyn_AggrdeclImpl*_TC;struct Cyc_Absyn_AggrdeclImpl*_TD;long _TE;
# 1638
void*_TF=Cyc_Absyn_compress(t);union Cyc_Absyn_AggrInfo _T10;_T0= (int*)_TF;_T1= *_T0;if(_T1!=0)goto _TL173;_T2= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_TF;_T3= _T2->f1;_T4= (int*)_T3;_T5= *_T4;if(_T5!=24)goto _TL175;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T11=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_TF;_T6= _T11->f1;{struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_T12=(struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*)_T6;_T10= _T12->f1;}}{union Cyc_Absyn_AggrInfo info=_T10;
# 1640
struct Cyc_Absyn_Aggrdecl*ad=Cyc_Absyn_get_known_aggrdecl(info);_T7= f_tag;
({__typeof__(Cyc_Toc_get_member_offset(ad,f))_T11=Cyc_Toc_get_member_offset(ad,f);*_T7= _T11;});_T8= tagged_member_type;
({__typeof__(Cyc_Toc_tagged_union_field_struct(ctxt,t,f))_T11=Cyc_Toc_tagged_union_field_struct(ctxt,t,f);*_T8= _T11;});_T9= clear_read;
if(!_T9)goto _TL177;_TA= 
_check_null(is_read);*_TA= 0;goto _TL178;_TL177: _TL178: _TB= ad;_TC= _TB->impl;_TD= 
_check_null(_TC);_TE= _TD->tagged;return _TE;}_TL175: goto _LL3;_TL173: _LL3:
# 1647
 return 0;;}
# 1654
static long Cyc_Toc_is_tagged_union_project(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Absyn_Exp*e,int*f_tag,void**tagged_member_type,long clear_read){struct Cyc_Absyn_Exp*_T0;int*_T1;unsigned _T2;struct Cyc_Warn_String_Warn_Warg_struct _T3;int(*_T4)(struct _fat_ptr ap);struct _fat_ptr _T5;struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*_T6;long*_T7;struct Cyc_Toc_TocContext*_T8;struct Cyc_Absyn_Exp*_T9;void*_TA;void*_TB;struct _fat_ptr*_TC;int*_TD;void**_TE;long _TF;long*_T10;long _T11;struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*_T12;long*_T13;struct Cyc_Absyn_Exp*_T14;void*_T15;void*_T16;int*_T17;int _T18;struct Cyc_Absyn_PtrInfo _T19;long _T1A;_T0= e;{
# 1656
void*_T1B=_T0->r;void*_T1C;struct _fat_ptr*_T1D;struct Cyc_Absyn_Exp*_T1E;_T1= (int*)_T1B;_T2= *_T1;switch(_T2){case 14:{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T1F=(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T1B;_T1E= _T1F->f2;}{struct Cyc_Absyn_Exp*e1=_T1E;{struct Cyc_Warn_String_Warn_Warg_struct _T1F;_T1F.tag= 0;
# 1658
({__typeof__(_tag_fat("cast on lhs!",sizeof(char),13U))_T20=_tag_fat("cast on lhs!",sizeof(char),13U);_T1F.f1= _T20;});_T3= _T1F;}{struct Cyc_Warn_String_Warn_Warg_struct _T1F=_T3;void*_T20[1];_T20[0]= & _T1F;{int(*_T21)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T4= _T21;}_T5= _tag_fat(_T20,sizeof(void*),1);_T4(_T5);}}case 21:{struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*_T1F=(struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*)_T1B;_T1E= _T1F->f1;_T1D= _T1F->f2;_T6= (struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*)_T1B;_T7= & _T6->f4;_T1C= (long*)_T7;}{struct Cyc_Absyn_Exp*e1=_T1E;struct _fat_ptr*f=_T1D;long*is_read=_T1C;_T8= ctxt;_T9= e1;_TA= _T9->topt;_TB= 
# 1660
_check_null(_TA);_TC= f;_TD= f_tag;_TE= tagged_member_type;_TF= clear_read;_T10= is_read;_T11= Cyc_Toc_is_tagged_union_project_impl(_T8,_TB,_TC,_TD,_TE,_TF,_T10);return _T11;}case 22:{struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*_T1F=(struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*)_T1B;_T1E= _T1F->f1;_T1D= _T1F->f2;_T12= (struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*)_T1B;_T13= & _T12->f4;_T1C= (long*)_T13;}{struct Cyc_Absyn_Exp*e1=_T1E;struct _fat_ptr*f=_T1D;long*is_read=(long*)_T1C;_T14= e1;_T15= _T14->topt;_T16= 
# 1663
_check_null(_T15);{void*_T1F=Cyc_Absyn_compress(_T16);void*_T20;_T17= (int*)_T1F;_T18= *_T17;if(_T18!=4)goto _TL17A;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T21=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T1F;_T19= _T21->f1;_T20= _T19.elt_type;}{void*et=_T20;_T1A= 
# 1665
Cyc_Toc_is_tagged_union_project_impl(ctxt,et,f,f_tag,tagged_member_type,clear_read,is_read);return _T1A;}_TL17A:
# 1668
 return 0;;}}default:
# 1671
 return 0;};}}
# 1684
static void*Cyc_Toc_tagged_union_assignop(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Absyn_Exp*e1,void*e1_cyc_type,struct Cyc_Absyn_PrimopOpt*popt,struct Cyc_Absyn_Exp*e2,void*e2_cyc_type,int tag_num,void*member_type){struct Cyc_Absyn_Exp*_T0;void*_T1;struct Cyc_Absyn_Exp*_T2;void*_T3;struct Cyc_Absyn_Exp*_T4;void*_T5;struct Cyc_Absyn_Exp*_T6;void*_T7;struct Cyc_Absyn_Exp*_T8;struct Cyc_Absyn_Exp*_T9;struct Cyc_Absyn_Exp*_TA;struct Cyc_Absyn_Stmt*_TB;struct Cyc_Absyn_Stmt*_TC;struct _tuple1*_TD;void*_TE;struct Cyc_Absyn_Exp*_TF;struct Cyc_Absyn_Stmt*_T10;void*_T11;
# 1687
struct _tuple35 _T12=Cyc_Toc_temp_var_and_exp(ctxt);struct Cyc_Absyn_Exp*_T13;struct _tuple1*_T14;_T14= _T12.f0;_T13= _T12.f1;{struct _tuple1*temp=_T14;struct Cyc_Absyn_Exp*temp_exp=_T13;_T0= temp_exp;_T1= 
Cyc_Absyn_cstar_type(member_type,Cyc_Toc_mt_tq);Cyc_Absyn_set_type(_T0,_T1);_T2= 
Cyc_Absyn_aggrarrow_exp(temp_exp,Cyc_Toc_val_sp,0U);_T3= member_type;{struct Cyc_Absyn_Exp*temp_val=Cyc_Absyn_set_type(_T2,_T3);_T4= 
Cyc_Absyn_aggrarrow_exp(temp_exp,Cyc_Toc_tag_sp,0U);_T5= Cyc_Absyn_uint_type;{struct Cyc_Absyn_Exp*temp_tag=Cyc_Absyn_set_type(_T4,_T5);_T6= 
Cyc_Absyn_signed_int_exp(tag_num,0U);_T7= Cyc_Absyn_uint_type;{struct Cyc_Absyn_Exp*f_tag=Cyc_Absyn_set_type(_T6,_T7);_T8= 
Cyc_Absyn_assignop_exp(temp_val,popt,e2,0U);{struct Cyc_Absyn_Stmt*s3=Cyc_Absyn_exp_stmt(_T8,0U);
struct Cyc_Absyn_Stmt*s2;
if(popt!=0)goto _TL17C;_T9= 
Cyc_Absyn_assign_exp(temp_tag,f_tag,0U);s2= Cyc_Absyn_exp_stmt(_T9,0U);goto _TL17D;
# 1697
_TL17C:{struct Cyc_Absyn_Exp*test_exp=Cyc_Absyn_neq_exp(temp_tag,f_tag,0U);_TA= test_exp;_TB= 
Cyc_Toc_throw_match_stmt(ctxt);_TC= Cyc_Toc_skip_stmt_dl();s2= Cyc_Absyn_ifthenelse_stmt(_TA,_TB,_TC,0U);}_TL17D: _TD= temp;_TE= 
# 1700
Cyc_Absyn_cstar_type(member_type,Cyc_Toc_mt_tq);_TF= Cyc_Toc_push_address_exp(e1);_T10= 
Cyc_Absyn_seq_stmt(s2,s3,0U);{
# 1700
struct Cyc_Absyn_Stmt*s1=Cyc_Absyn_declare_stmt(_TD,_TE,_TF,_T10,0U);_T11= 
# 1702
Cyc_Toc_stmt_exp_r(s1);return _T11;}}}}}}}struct _tuple39{struct _tuple1*f0;void*f1;};struct _tuple40{void*f0;void*f1;};struct _tuple41{struct Cyc_Absyn_Exp*f0;struct Cyc_Absyn_Exp*f1;};struct _tuple42{struct Cyc_Absyn_Aggrfield*f0;struct Cyc_Absyn_Exp*f1;};
# 1705
void Cyc_Toc_exp_to_c(struct Cyc_Toc_Env*nv,struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;void*_T1;struct Cyc_Warn_String_Warn_Warg_struct _T2;struct Cyc_Warn_Exp_Warn_Warg_struct _T3;int(*_T4)(unsigned,struct _fat_ptr);void*(*_T5)(unsigned,struct _fat_ptr);struct Cyc_Absyn_Exp*_T6;unsigned _T7;struct _fat_ptr _T8;struct Cyc_Absyn_Exp*_T9;struct Cyc_Toc_Env*_TA;struct Cyc_Toc_TocContext*_TB;void*_TC;struct Cyc_Absyn_Exp*_TD;struct Cyc_Absyn_Exp*_TE;struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*_TF;char*_T10;char*_T11;struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*_T12;char*_T13;char*_T14;struct Cyc_Absyn_Exp*_T15;int*_T16;unsigned _T17;struct Cyc_Absyn_Exp*_T18;struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T19;union Cyc_Absyn_Cnst _T1A;struct _union_Cnst_Null_c _T1B;unsigned _T1C;struct Cyc_Absyn_Exp*_T1D;struct Cyc_Toc_Env*_T1E;struct Cyc_Toc_TocContext*_T1F;void*_T20;void*_T21;void*_T22;void*_T23;struct Cyc_Absyn_Exp*_T24;long _T25;struct Cyc_Absyn_Exp*_T26;struct Cyc_Toc_Env*_T27;struct Cyc_Toc_TocContext*_T28;void*_T29;struct Cyc_Absyn_Exp*_T2A;struct Cyc_Absyn_Exp*_T2B;struct Cyc_Absyn_Exp*_T2C;struct Cyc_Absyn_Exp*_T2D;void*_T2E;struct Cyc_Absyn_Exp*_T2F;struct _fat_ptr _T30;struct Cyc_Absyn_Exp*_T31;long _T32;long _T33;struct Cyc_Absyn_Exp*_T34;struct Cyc_Absyn_Exp*_T35;struct Cyc_Absyn_Exp*_T36;struct Cyc_Absyn_Exp*_T37;struct Cyc_Absyn_Exp*_T38;struct Cyc_Toc_Env*_T39;struct Cyc_Toc_TocContext*_T3A;void*_T3B;void*_T3C;struct Cyc_Absyn_Exp*_T3D;struct _fat_ptr _T3E;struct Cyc_Absyn_Exp*_T3F;struct Cyc_Toc_Env*_T40;struct Cyc_Toc_TocContext*_T41;void*_T42;struct Cyc_Absyn_Exp*_T43;struct Cyc_Absyn_Exp*_T44;struct Cyc_Absyn_Exp*_T45;struct Cyc_Absyn_Exp*_T46;struct Cyc_Absyn_Exp*_T47;struct Cyc_List_List*(*_T48)(void*(*)(struct Cyc_Absyn_Exp*),struct Cyc_List_List*);struct Cyc_List_List*(*_T49)(void*(*)(void*),struct Cyc_List_List*);struct Cyc_List_List*_T4A;void(*_T4B)(void(*)(struct Cyc_Toc_Env*,struct Cyc_Absyn_Exp*),struct Cyc_Toc_Env*,struct Cyc_List_List*);void(*_T4C)(void(*)(void*,void*),void*,struct Cyc_List_List*);struct Cyc_Toc_Env*_T4D;struct Cyc_List_List*_T4E;enum Cyc_Absyn_Primop _T4F;int _T50;struct Cyc_List_List*_T51;void*_T52;struct Cyc_Absyn_Exp*_T53;void*_T54;struct Cyc_Absyn_Tqual _T55;void*_T56;struct Cyc_Absyn_Exp*_T57;struct Cyc_Absyn_Exp*_T58;struct Cyc_Absyn_Exp*_T59;struct Cyc_List_List*_T5A;void*_T5B;struct Cyc_List_List*_T5C;void*_T5D;int*_T5E;int _T5F;struct Cyc_Absyn_PtrInfo _T60;struct Cyc_Absyn_PtrInfo _T61;struct Cyc_Absyn_PtrAtts _T62;struct Cyc_Absyn_PtrInfo _T63;struct Cyc_Absyn_PtrAtts _T64;struct Cyc_Absyn_PtrInfo _T65;struct Cyc_Absyn_PtrAtts _T66;void*_T67;void*_T68;struct Cyc_Absyn_Exp*_T69;void*_T6A;struct Cyc_List_List*_T6B;void*_T6C;struct Cyc_Toc_Env*_T6D;struct Cyc_Toc_TocContext*_T6E;void*_T6F;void*_T70;struct Cyc_Absyn_Exp*_T71;void*_T72;struct Cyc_Absyn_Exp*_T73;struct _fat_ptr _T74;long _T75;struct Cyc_List_List*_T76;void*_T77;struct Cyc_Absyn_Exp*_T78;long _T79;struct Cyc_Absyn_Exp*_T7A;void*_T7B;struct Cyc_List_List*_T7C;void*_T7D;struct Cyc_Absyn_Exp*_T7E;struct _fat_ptr _T7F;struct Cyc_Absyn_Exp*_T80;void*_T81;struct Cyc_Toc_Env*_T82;struct Cyc_Toc_TocContext*_T83;struct Cyc_List_List*_T84;void*_T85;void*_T86;void*_T87;struct Cyc_Absyn_Exp*_T88;void*_T89;struct Cyc_List_List*_T8A;void*_T8B;struct Cyc_Absyn_Exp*_T8C;struct _fat_ptr _T8D;long _T8E;long _T8F;struct Cyc_Warn_String_Warn_Warg_struct _T90;struct Cyc_Absyn_Exp*_T91;unsigned _T92;struct _fat_ptr _T93;struct Cyc_Absyn_Exp*_T94;struct Cyc_Absyn_Exp*_T95;struct Cyc_Absyn_Exp*_T96;struct Cyc_Absyn_Exp*_T97;void*_T98;struct Cyc_Absyn_Exp*_T99;struct Cyc_Absyn_Exp*_T9A;struct Cyc_Absyn_Exp*_T9B;struct Cyc_Warn_String_Warn_Warg_struct _T9C;struct Cyc_Warn_Typ_Warn_Warg_struct _T9D;struct Cyc_Absyn_Exp*_T9E;void*_T9F;int(*_TA0)(struct _fat_ptr ap);struct _fat_ptr _TA1;struct Cyc_List_List*_TA2;void*_TA3;int*_TA4;int _TA5;struct Cyc_Absyn_PtrInfo _TA6;struct Cyc_Absyn_PtrInfo _TA7;struct Cyc_Absyn_PtrAtts _TA8;struct Cyc_Absyn_PtrInfo _TA9;struct Cyc_Absyn_PtrAtts _TAA;long _TAB;int(*_TAC)(struct _fat_ptr);struct _fat_ptr _TAD;void*_TAE;void*_TAF;struct Cyc_List_List*_TB0;void*_TB1;struct Cyc_List_List*_TB2;struct Cyc_List_List*_TB3;struct Cyc_List_List*_TB4;void*_TB5;struct Cyc_Absyn_Exp*_TB6;void*_TB7;struct Cyc_Toc_Env*_TB8;struct Cyc_Toc_TocContext*_TB9;void*_TBA;void*_TBB;struct Cyc_Absyn_Exp*_TBC;void*_TBD;struct Cyc_Absyn_Exp*_TBE;struct _fat_ptr _TBF;long _TC0;long _TC1;struct Cyc_Absyn_Exp*_TC2;void*_TC3;struct Cyc_Absyn_Exp*_TC4;struct _fat_ptr _TC5;struct Cyc_Absyn_Exp*_TC6;void*_TC7;struct Cyc_Toc_Env*_TC8;struct Cyc_Toc_TocContext*_TC9;struct Cyc_List_List*_TCA;void*_TCB;void*_TCC;void*_TCD;struct Cyc_Absyn_Exp*_TCE;void*_TCF;struct Cyc_Absyn_Exp*_TD0;struct _fat_ptr _TD1;struct Cyc_List_List*_TD2;void*_TD3;void**_TD4;long _TD5;struct Cyc_List_List*_TD6;void*_TD7;struct Cyc_List_List*_TD8;struct Cyc_List_List*_TD9;struct Cyc_List_List*_TDA;void*_TDB;struct Cyc_List_List*_TDC;struct Cyc_List_List*_TDD;struct Cyc_List_List*_TDE;void*_TDF;long _TE0;struct Cyc_Absyn_Exp*_TE1;struct Cyc_Absyn_Exp*_TE2;struct _fat_ptr*_TE3;struct Cyc_Absyn_Exp*_TE4;struct Cyc_Absyn_Exp*_TE5;struct _fat_ptr*_TE6;struct Cyc_Absyn_Exp*_TE7;struct Cyc_Absyn_Exp*_TE8;struct Cyc_Absyn_Exp*_TE9;struct Cyc_Absyn_Exp*_TEA;struct Cyc_Toc_Env*_TEB;struct Cyc_Toc_TocContext*_TEC;void*_TED;void*_TEE;struct Cyc_Absyn_Exp*_TEF;void*_TF0;struct Cyc_Absyn_Exp*_TF1;struct Cyc_Absyn_Exp*_TF2;struct Cyc_Absyn_Exp*_TF3;void*_TF4;struct Cyc_Toc_Env*_TF5;struct Cyc_Toc_TocContext*_TF6;void*_TF7;void*_TF8;struct Cyc_Absyn_Exp*_TF9;void*_TFA;struct Cyc_Absyn_Exp*_TFB;void*_TFC;struct Cyc_Absyn_Exp*_TFD;struct _fat_ptr _TFE;struct Cyc_List_List*_TFF;void*_T100;struct Cyc_List_List*_T101;struct Cyc_List_List*_T102;struct Cyc_List_List*_T103;void*_T104;struct Cyc_List_List*_T105;struct Cyc_List_List*_T106;struct Cyc_List_List*_T107;struct Cyc_List_List*_T108;void*_T109;void**_T10A;long _T10B;struct Cyc_Toc_Env*_T10C;struct Cyc_Toc_TocContext*_T10D;void*_T10E;void*_T10F;struct Cyc_Absyn_Tqual _T110;struct Cyc_Absyn_Exp*_T111;void*_T112;struct Cyc_Absyn_Exp*_T113;struct Cyc_Absyn_Exp*_T114;struct Cyc_Absyn_Exp*_T115;long _T116;struct Cyc_Toc_Env*_T117;struct Cyc_Toc_TocContext*_T118;void*_T119;void*_T11A;struct Cyc_Absyn_Tqual _T11B;struct Cyc_Absyn_Exp*_T11C;void*_T11D;struct Cyc_Absyn_Exp*_T11E;struct Cyc_Absyn_Exp*_T11F;struct Cyc_Absyn_Exp*_T120;struct Cyc_Absyn_Exp*_T121;void*_T122;enum Cyc_Absyn_Incrementor _T123;int _T124;enum Cyc_Absyn_Incrementor _T125;int _T126;struct Cyc_Absyn_Exp*_T127;void**_T128;long*_T129;void**_T12A;long _T12B;struct Cyc_Warn_String_Warn_Warg_struct _T12C;struct Cyc_Warn_String_Warn_Warg_struct _T12D;struct Cyc_Warn_String_Warn_Warg_struct _T12E;struct Cyc_Warn_String_Warn_Warg_struct _T12F;int(*_T130)(unsigned,struct _fat_ptr);void*(*_T131)(unsigned,struct _fat_ptr);struct Cyc_Absyn_Exp*_T132;unsigned _T133;struct _fat_ptr _T134;struct Cyc_Toc_Env*_T135;struct Cyc_Toc_TocContext*_T136;struct Cyc_Absyn_Exp*_T137;int*_T138;void**_T139;long _T13A;struct Cyc_Absyn_Exp*_T13B;enum Cyc_Absyn_Incrementor _T13C;int _T13D;struct Cyc_Warn_String_Warn_Warg_struct _T13E;struct Cyc_Warn_String_Warn_Warg_struct _T13F;struct Cyc_Warn_String_Warn_Warg_struct _T140;int(*_T141)(unsigned,struct _fat_ptr);void*(*_T142)(unsigned,struct _fat_ptr);struct Cyc_Absyn_Exp*_T143;unsigned _T144;struct _fat_ptr _T145;struct Cyc_Absyn_Exp*_T146;struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct*_T147;struct Cyc_Absyn_PrimopOpt*_T148;void*_T149;void**_T14A;long _T14B;struct Cyc_Absyn_Exp*_T14C;enum Cyc_Absyn_Incrementor _T14D;int _T14E;enum Cyc_Absyn_Incrementor _T14F;int _T150;enum Cyc_Absyn_Incrementor _T151;int _T152;enum Cyc_Absyn_Incrementor _T153;int _T154;struct Cyc_Absyn_Exp*_T155;void*_T156;struct Cyc_Toc_Env*_T157;struct Cyc_Toc_TocContext*_T158;void*_T159;void*_T15A;struct Cyc_Absyn_Exp*_T15B;void*_T15C;struct Cyc_Absyn_Exp*_T15D;void*_T15E;struct Cyc_Absyn_Exp*_T15F;struct _fat_ptr _T160;void*_T161;void**_T162;long _T163;enum Cyc_Absyn_Incrementor _T164;int _T165;struct Cyc_Toc_Env*_T166;struct Cyc_Toc_TocContext*_T167;struct Cyc_Toc_Env*_T168;struct Cyc_Toc_TocContext*_T169;void*_T16A;struct Cyc_Absyn_Exp*_T16B;void*_T16C;struct Cyc_Absyn_Exp*_T16D;void*_T16E;struct Cyc_Absyn_Exp*_T16F;void*_T170;struct Cyc_Absyn_Exp*_T171;struct Cyc_Absyn_Exp*_T172;void*_T173;struct Cyc_Absyn_Exp*_T174;long _T175;struct Cyc_Absyn_Exp*_T176;struct Cyc_Absyn_Exp*_T177;void*_T178;struct Cyc_Absyn_Exp*_T179;struct Cyc_Absyn_Exp*_T17A;struct Cyc_Absyn_Exp*_T17B;struct Cyc_Absyn_Exp*_T17C;struct Cyc_Absyn_Exp*_T17D;struct Cyc_Absyn_Exp*_T17E;struct Cyc_Absyn_Stmt*_T17F;struct Cyc_Absyn_Exp*_T180;struct _fat_ptr _T181;struct Cyc_Absyn_Exp*_T182;struct Cyc_Toc_Env*_T183;struct Cyc_Toc_TocContext*_T184;void*_T185;struct Cyc_Absyn_Exp*_T186;struct Cyc_Absyn_Stmt*_T187;struct Cyc_Absyn_Stmt*_T188;struct Cyc_Absyn_Exp*_T189;struct Cyc_Absyn_Stmt*_T18A;struct Cyc_Absyn_Exp*_T18B;struct Cyc_Absyn_Stmt*_T18C;struct Cyc_Absyn_Exp*_T18D;long _T18E;struct Cyc_Absyn_Exp*_T18F;void*_T190;struct Cyc_Absyn_Exp*_T191;void*_T192;struct Cyc_Absyn_Exp*_T193;struct _fat_ptr _T194;struct Cyc_Absyn_Exp*_T195;struct Cyc_Toc_Env*_T196;struct Cyc_Toc_TocContext*_T197;void*_T198;void*_T199;struct Cyc_Absyn_Exp*_T19A;struct Cyc_Toc_Env*_T19B;struct Cyc_Toc_TocContext*_T19C;void*_T19D;void*_T19E;void*_T19F;struct Cyc_Absyn_Exp*_T1A0;void*_T1A1;struct Cyc_Absyn_Exp*_T1A2;void*_T1A3;struct Cyc_Absyn_Exp*_T1A4;struct _fat_ptr _T1A5;long _T1A6;void(*_T1A7)(struct Cyc_Absyn_Exp*,struct Cyc_List_List*,struct Cyc_Absyn_Exp*(*)(struct Cyc_Absyn_Exp*,enum Cyc_Absyn_Incrementor*),enum Cyc_Absyn_Incrementor*);struct Cyc_Absyn_Exp*_T1A8;enum Cyc_Absyn_Incrementor*_T1A9;struct Cyc_Absyn_Exp*_T1AA;struct Cyc_Absyn_Exp*_T1AB;struct Cyc_Absyn_Exp*_T1AC;void*_T1AD;struct Cyc_Absyn_Exp*_T1AE;void*_T1AF;struct Cyc_Toc_Env*_T1B0;struct Cyc_Toc_TocContext*_T1B1;struct Cyc_Absyn_Exp*_T1B2;int*_T1B3;void**_T1B4;long _T1B5;struct Cyc_Absyn_Exp*_T1B6;struct Cyc_Toc_Env*_T1B7;struct Cyc_Toc_TocContext*_T1B8;struct Cyc_Absyn_Exp*_T1B9;void*_T1BA;struct Cyc_Absyn_PrimopOpt*_T1BB;struct Cyc_Absyn_Exp*_T1BC;void*_T1BD;int _T1BE;void*_T1BF;struct Cyc_Absyn_Exp*_T1C0;void**_T1C1;long*_T1C2;void**_T1C3;long _T1C4;void*_T1C5;void**_T1C6;long _T1C7;struct Cyc_Absyn_PrimopOpt*_T1C8;int _T1C9;struct Cyc_Absyn_Exp*_T1CA;void*_T1CB;struct Cyc_Warn_String_Warn_Warg_struct _T1CC;int(*_T1CD)(struct _fat_ptr ap);struct _fat_ptr _T1CE;struct Cyc_Absyn_Exp*_T1CF;void*_T1D0;struct Cyc_Toc_Env*_T1D1;struct Cyc_Toc_TocContext*_T1D2;void*_T1D3;void*_T1D4;struct Cyc_Absyn_Exp*_T1D5;void*_T1D6;struct Cyc_Absyn_Exp*_T1D7;struct _fat_ptr _T1D8;void*_T1D9;void**_T1DA;long _T1DB;struct Cyc_Absyn_PrimopOpt*_T1DC;long _T1DD;struct Cyc_Absyn_Exp*_T1DE;void*_T1DF;struct Cyc_Absyn_Exp*_T1E0;struct _fat_ptr _T1E1;struct Cyc_Absyn_Exp*_T1E2;struct Cyc_Toc_Env*_T1E3;struct Cyc_Toc_TocContext*_T1E4;void*_T1E5;void*_T1E6;struct Cyc_Absyn_Exp*_T1E7;struct Cyc_Toc_Env*_T1E8;struct Cyc_Toc_TocContext*_T1E9;void*_T1EA;void*_T1EB;void*_T1EC;struct Cyc_Absyn_Exp*_T1ED;void*_T1EE;struct Cyc_Absyn_Exp*_T1EF;struct _fat_ptr _T1F0;struct Cyc_Warn_String_Warn_Warg_struct _T1F1;int(*_T1F2)(struct _fat_ptr ap);struct _fat_ptr _T1F3;long _T1F4;long _T1F5;struct Cyc_Absyn_Exp*_T1F6;struct Cyc_Toc_Env*_T1F7;struct Cyc_Toc_TocContext*_T1F8;void*_T1F9;struct Cyc_Absyn_Exp*_T1FA;struct Cyc_Absyn_Exp*_T1FB;struct Cyc_Toc_Env*_T1FC;struct Cyc_Toc_TocContext*_T1FD;long _T1FE;void(*_T1FF)(struct Cyc_Absyn_Exp*,struct Cyc_List_List*,struct Cyc_Absyn_Exp*(*)(struct Cyc_Absyn_Exp*,struct _tuple38*),struct _tuple38*);struct Cyc_Absyn_Exp*_T200;struct _tuple38*_T201;struct Cyc_Absyn_Exp*_T202;struct Cyc_Absyn_Exp*_T203;struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*_T204;struct Cyc_Absyn_VarargCallInfo*_T205;struct Cyc_Absyn_Exp*_T206;void*_T207;long _T208;struct Cyc_Absyn_Exp*_T209;struct Cyc_Absyn_Exp*_T20A;struct Cyc_Absyn_Exp*_T20B;struct _fat_ptr _T20C;void(*_T20D)(void(*)(struct Cyc_Toc_Env*,struct Cyc_Absyn_Exp*),struct Cyc_Toc_Env*,struct Cyc_List_List*);void(*_T20E)(void(*)(void*,void*),void*,struct Cyc_List_List*);struct Cyc_Toc_Env*_T20F;struct Cyc_List_List*_T210;struct Cyc_Absyn_VarargCallInfo*_T211;struct Cyc_Toc_Env*_T212;struct Cyc_Toc_TocContext*_T213;struct Cyc_Absyn_Exp*_T214;void*_T215;struct Cyc_Toc_Env*_T216;struct Cyc_Toc_TocContext*_T217;struct Cyc_Absyn_VarargInfo*_T218;void*_T219;struct Cyc_Toc_Env*_T21A;struct Cyc_List_List*_T21B;void*_T21C;struct Cyc_Absyn_Exp*_T21D;struct Cyc_List_List*_T21E;struct Cyc_List_List*_T21F;void*_T220;struct Cyc_List_List*_T221;struct Cyc_List_List*_T222;struct Cyc_Absyn_Exp*_T223;struct Cyc_Absyn_Exp*_T224;void*_T225;struct Cyc_Absyn_Exp*_T226;void*_T227;struct Cyc_Absyn_Exp*_T228;void*_T229;struct Cyc_Absyn_Exp*_T22A;struct _fat_ptr _T22B;struct Cyc_Toc_Env*_T22C;struct Cyc_Toc_TocContext*_T22D;void*_T22E;struct Cyc_Absyn_Exp*_T22F;void*_T230;long _T231;struct Cyc_Absyn_Exp*_T232;struct Cyc_Absyn_Exp*_T233;struct Cyc_Absyn_Exp*_T234;struct _fat_ptr _T235;struct Cyc_Absyn_Exp*_T236;struct Cyc_Absyn_Exp*_T237;struct Cyc_Absyn_Exp*_T238;struct Cyc_Toc_Env*_T239;struct Cyc_Toc_TocContext*_T23A;struct Cyc_Absyn_Exp*_T23B;void*_T23C;void*_T23D;void*_T23E;struct Cyc_Absyn_Exp*_T23F;struct Cyc_Absyn_VarargInfo*_T240;long _T241;struct Cyc_Absyn_VarargInfo*_T242;void*_T243;void*_T244;int*_T245;int _T246;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T247;void*_T248;int*_T249;int _T24A;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T24B;void*_T24C;struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*_T24D;union Cyc_Absyn_DatatypeInfo _T24E;struct _union_DatatypeInfo_KnownDatatype _T24F;unsigned _T250;void*_T251;union Cyc_Absyn_DatatypeInfo _T252;struct _union_DatatypeInfo_KnownDatatype _T253;struct Cyc_Absyn_Datatypedecl**_T254;struct Cyc_Warn_String_Warn_Warg_struct _T255;int(*_T256)(struct _fat_ptr ap);struct _fat_ptr _T257;struct _fat_ptr _T258;int _T259;struct _tuple39*_T25A;struct _RegionHandle*_T25B;unsigned _T25C;unsigned _T25D;struct Cyc_Toc_Env*_T25E;struct Cyc_Toc_TocContext*_T25F;unsigned _T260;int _T261;struct Cyc_List_List*_T262;void*_T263;struct Cyc_Absyn_Exp*_T264;void*_T265;struct _fat_ptr _T266;int _T267;unsigned char*_T268;struct _tuple39*_T269;struct _tuple39 _T26A;struct Cyc_List_List*_T26B;void*_T26C;struct Cyc_Toc_Env*_T26D;struct Cyc_Toc_TocContext*_T26E;struct _tuple1*_T26F;struct Cyc_Absyn_Datatypedecl*_T270;struct _tuple1*_T271;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T272;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T273;struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_T274;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T275;struct _fat_ptr _T276;unsigned char*_T277;struct _tuple39*_T278;int _T279;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T27A;struct Cyc_List_List*_T27B;struct Cyc_List_List*_T27C;struct _fat_ptr _T27D;unsigned char*_T27E;struct _tuple39*_T27F;int _T280;struct Cyc_Absyn_Exp*_T281;void*_T282;struct Cyc_Absyn_Exp*_T283;void*_T284;struct Cyc_List_List*_T285;struct _tuple1*_T286;void*_T287;struct Cyc_Absyn_Exp*_T288;void*_T289;struct Cyc_Absyn_Exp*_T28A;struct Cyc_Absyn_Stmt*_T28B;int _T28C;struct Cyc_List_List*_T28D;void*_T28E;struct Cyc_Absyn_Exp*_T28F;void*_T290;struct _fat_ptr _T291;int _T292;unsigned char*_T293;struct _tuple39*_T294;struct _tuple39 _T295;struct _fat_ptr _T296;unsigned char*_T297;struct _tuple39*_T298;int _T299;struct _tuple39 _T29A;void*_T29B;struct Cyc_List_List*_T29C;void*_T29D;long _T29E;struct Cyc_Toc_Env*_T29F;struct Cyc_Toc_TocContext*_T2A0;struct _tuple1*_T2A1;struct Cyc_Absyn_Datatypedecl*_T2A2;struct _tuple1*_T2A3;struct Cyc_List_List*_T2A4;struct _fat_ptr*_T2A5;struct Cyc_Absyn_Exp*_T2A6;struct _fat_ptr*_T2A7;struct Cyc_Absyn_Exp*_T2A8;struct _fat_ptr _T2A9;struct _tuple1*_T2AA;void*_T2AB;struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*_T2AC;void*_T2AD;struct Cyc_Absyn_Exp*_T2AE;void*_T2AF;struct Cyc_Absyn_Exp*_T2B0;struct Cyc_Absyn_Stmt*_T2B1;struct Cyc_List_List*_T2B2;struct Cyc_List_List*_T2B3;struct Cyc_Toc_Env*_T2B4;struct Cyc_List_List*_T2B5;void*_T2B6;struct Cyc_Absyn_Exp*_T2B7;struct Cyc_List_List*_T2B8;struct Cyc_List_List*_T2B9;void*_T2BA;struct Cyc_List_List*_T2BB;struct Cyc_List_List*_T2BC;struct Cyc_Absyn_Exp*_T2BD;void*_T2BE;struct Cyc_Absyn_Exp*_T2BF;struct Cyc_Absyn_Exp*_T2C0;long _T2C1;struct Cyc_Toc_Env*_T2C2;struct Cyc_Toc_TocContext*_T2C3;void*_T2C4;struct Cyc_Absyn_Exp*_T2C5;void*_T2C6;struct Cyc_Absyn_Exp*_T2C7;struct Cyc_Absyn_Exp*_T2C8;struct _fat_ptr _T2C9;void*_T2CA;struct Cyc_Absyn_Exp*_T2CB;struct Cyc_Absyn_Exp*_T2CC;struct Cyc_Absyn_Exp*_T2CD;struct Cyc_Absyn_Exp*_T2CE;struct Cyc_Toc_Env*_T2CF;struct Cyc_Toc_TocContext*_T2D0;void*_T2D1;struct Cyc_Toc_Env*_T2D2;struct Cyc_Toc_TocContext*_T2D3;struct Cyc_Absyn_Exp*_T2D4;void*_T2D5;void*_T2D6;int _T2D7;struct Cyc_Toc_Env*_T2D8;struct Cyc_Toc_TocContext*_T2D9;struct Cyc_Absyn_Exp*_T2DA;struct _tuple1*_T2DB;void*_T2DC;struct Cyc_Absyn_Exp*_T2DD;struct Cyc_Absyn_Exp*_T2DE;struct Cyc_Absyn_Exp*_T2DF;unsigned _T2E0;struct Cyc_Absyn_Stmt*_T2E1;struct Cyc_Absyn_Exp*_T2E2;unsigned _T2E3;struct Cyc_Absyn_Stmt*_T2E4;struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T2E5;void**_T2E6;struct Cyc_Absyn_Exp*_T2E7;void*_T2E8;struct Cyc_Toc_Env*_T2E9;struct Cyc_Toc_TocContext*_T2EA;void*_T2EB;void**_T2EC;struct Cyc_Toc_Env*_T2ED;struct Cyc_Toc_TocContext*_T2EE;void*_T2EF;void**_T2F0;struct _tuple40 _T2F1;void*_T2F2;int*_T2F3;int _T2F4;void*_T2F5;int*_T2F6;unsigned _T2F7;void*_T2F8;void*_T2F9;void*_T2FA;struct Cyc_Absyn_PtrInfo _T2FB;struct Cyc_Absyn_PtrAtts _T2FC;void*_T2FD;void*_T2FE;struct Cyc_Absyn_PtrInfo _T2FF;struct Cyc_Absyn_PtrAtts _T300;void*_T301;struct Cyc_Absyn_PtrInfo _T302;struct Cyc_Absyn_PtrAtts _T303;void*_T304;struct Cyc_Absyn_PtrInfo _T305;struct Cyc_Absyn_PtrAtts _T306;void*_T307;struct _tuple41 _T308;struct Cyc_Absyn_Exp*_T309;struct Cyc_Absyn_Exp*_T30A;long _T30B;struct Cyc_Absyn_Exp*_T30C;struct Cyc_Absyn_Exp*_T30D;struct Cyc_Absyn_Exp*_T30E;struct _fat_ptr _T30F;long _T310;struct Cyc_Absyn_Exp*_T311;struct Cyc_Absyn_Exp*_T312;long _T313;long _T314;struct Cyc_Absyn_PtrInfo _T315;struct Cyc_Absyn_Tqual _T316;long _T317;long _T318;struct Cyc_Absyn_Exp*_T319;struct Cyc_Absyn_Exp*_T31A;void*_T31B;struct Cyc_Absyn_Exp*_T31C;struct Cyc_Absyn_Exp*_T31D;struct Cyc_Absyn_Exp*_T31E;void*_T31F;void*_T320;struct Cyc_Absyn_Exp*_T321;struct Cyc_Toc_Env*_T322;struct Cyc_Toc_TocContext*_T323;void*_T324;struct Cyc_Absyn_Exp*_T325;struct Cyc_Absyn_Exp*_T326;struct Cyc_Absyn_Exp*_T327;long _T328;struct Cyc_Toc_Env*_T329;struct Cyc_Toc_TocContext*_T32A;struct Cyc_Absyn_Exp*_T32B;struct Cyc_Toc_Env*_T32C;struct Cyc_Toc_TocContext*_T32D;void*_T32E;void*_T32F;struct Cyc_Absyn_Exp*_T330;int*_T331;unsigned _T332;struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T333;union Cyc_Absyn_Cnst _T334;struct _union_Cnst_Wstring_c _T335;unsigned _T336;struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T337;void*_T338;int*_T339;unsigned _T33A;void*_T33B;void*_T33C;struct Cyc_Absyn_Vardecl*_T33D;void*_T33E;long _T33F;struct Cyc_Toc_Env*_T340;struct Cyc_Toc_TocContext*_T341;void*_T342;struct Cyc_Absyn_Exp*_T343;long _T344;long _T345;struct Cyc_Absyn_Exp*_T346;struct Cyc_Absyn_Exp*_T347;struct _fat_ptr _T348;struct Cyc_Absyn_Exp*_T349;struct Cyc_Toc_Env*_T34A;struct Cyc_Toc_TocContext*_T34B;void*_T34C;void*_T34D;void*_T34E;struct Cyc_Absyn_Exp*_T34F;void*_T350;struct Cyc_Absyn_Exp*_T351;void*_T352;struct Cyc_Absyn_Exp*_T353;struct _fat_ptr _T354;struct Cyc_Absyn_Exp*_T355;long _T356;struct Cyc_Absyn_PtrInfo _T357;struct Cyc_Absyn_Tqual _T358;long _T359;struct Cyc_Absyn_Exp*_T35A;struct Cyc_Absyn_Exp*_T35B;void*_T35C;struct Cyc_Absyn_Exp*_T35D;struct Cyc_Absyn_Exp*_T35E;struct Cyc_Absyn_Exp*_T35F;void*_T360;void*_T361;struct Cyc_Toc_Env*_T362;struct Cyc_Toc_TocContext*_T363;struct Cyc_Absyn_PtrInfo _T364;void*_T365;void*_T366;struct Cyc_Absyn_Exp*_T367;void*_T368;struct Cyc_Absyn_Exp*_T369;void*_T36A;long _T36B;struct Cyc_Absyn_Exp*_T36C;struct Cyc_Absyn_Exp*_T36D;struct _fat_ptr _T36E;struct Cyc_Absyn_Exp*_T36F;struct Cyc_Toc_Env*_T370;struct Cyc_Toc_TocContext*_T371;struct _tuple1*_T372;struct Cyc_Toc_Env*_T373;struct Cyc_Toc_TocContext*_T374;void*_T375;void*_T376;struct Cyc_Absyn_Exp*_T377;struct Cyc_Absyn_Stmt*_T378;struct Cyc_Absyn_Exp*_T379;struct Cyc_Absyn_Exp*_T37A;void*_T37B;struct Cyc_Absyn_Exp*_T37C;struct _fat_ptr _T37D;struct Cyc_Absyn_Exp*_T37E;void*_T37F;struct Cyc_Toc_Env*_T380;struct Cyc_Toc_TocContext*_T381;struct Cyc_Absyn_PtrInfo _T382;void*_T383;void*_T384;struct Cyc_Absyn_Exp*_T385;void*_T386;struct Cyc_Absyn_Exp*_T387;void*_T388;struct Cyc_Absyn_Exp*_T389;struct _fat_ptr _T38A;struct Cyc_Absyn_Exp*_T38B;long _T38C;long _T38D;struct Cyc_Absyn_Exp*_T38E;struct Cyc_Absyn_Exp*_T38F;void*_T390;struct Cyc_Absyn_Exp*_T391;struct Cyc_Absyn_Exp*_T392;void*_T393;struct Cyc_Absyn_PtrInfo _T394;struct Cyc_Absyn_PtrAtts _T395;void*_T396;long _T397;struct Cyc_Absyn_PtrInfo _T398;struct Cyc_Absyn_PtrAtts _T399;void*_T39A;long _T39B;struct Cyc_Absyn_Exp*_T39C;struct Cyc_Absyn_Exp*_T39D;struct _fat_ptr _T39E;struct Cyc_Toc_Env*_T39F;struct Cyc_Toc_TocContext*_T3A0;void*_T3A1;struct Cyc_Absyn_Exp*_T3A2;struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct*_T3A3;char*_T3A4;char*_T3A5;struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct*_T3A6;char*_T3A7;char*_T3A8;struct Cyc_Absyn_Exp*_T3A9;struct Cyc_Toc_Env*_T3AA;struct Cyc_Toc_TocContext*_T3AB;struct Cyc_Absyn_PtrInfo _T3AC;void*_T3AD;void*_T3AE;struct Cyc_Absyn_Exp*_T3AF;void*_T3B0;struct Cyc_Absyn_Exp*_T3B1;void*_T3B2;struct Cyc_Absyn_Exp*_T3B3;struct _fat_ptr _T3B4;void*_T3B5;struct Cyc_Absyn_Exp*_T3B6;struct Cyc_Toc_Env*_T3B7;struct Cyc_Toc_TocContext*_T3B8;struct Cyc_Absyn_PtrInfo _T3B9;void*_T3BA;void*_T3BB;struct Cyc_Absyn_Exp*_T3BC;void*_T3BD;struct Cyc_Absyn_Exp*_T3BE;void*_T3BF;struct Cyc_Absyn_Exp*_T3C0;struct _fat_ptr _T3C1;void*_T3C2;long _T3C3;struct Cyc_Absyn_Exp*_T3C4;void*_T3C5;struct Cyc_Absyn_Exp*_T3C6;struct _fat_ptr _T3C7;struct Cyc_Absyn_Exp*_T3C8;void**_T3C9;void*_T3CA;struct Cyc_Absyn_Exp*_T3CB;long _T3CC;long _T3CD;struct Cyc_Absyn_PtrInfo _T3CE;struct Cyc_Absyn_Tqual _T3CF;long _T3D0;long _T3D1;int(*_T3D2)(struct _fat_ptr);struct _fat_ptr _T3D3;struct Cyc_Absyn_Exp*_T3D4;void*_T3D5;struct Cyc_Toc_Env*_T3D6;struct Cyc_Toc_TocContext*_T3D7;struct Cyc_Absyn_PtrInfo _T3D8;void*_T3D9;void*_T3DA;struct Cyc_Absyn_Exp*_T3DB;void*_T3DC;struct Cyc_Absyn_Exp*_T3DD;void*_T3DE;struct Cyc_Absyn_Exp*_T3DF;void*_T3E0;struct Cyc_Absyn_Exp*_T3E1;struct _fat_ptr _T3E2;void*_T3E3;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T3E4;void*_T3E5;int*_T3E6;int _T3E7;void*_T3E8;void*_T3E9;struct Cyc_Absyn_PtrInfo _T3EA;struct Cyc_Absyn_PtrAtts _T3EB;void*_T3EC;struct Cyc_Absyn_Exp*_T3ED;struct Cyc_Absyn_Exp*_T3EE;struct _fat_ptr*_T3EF;struct Cyc_Absyn_Exp*_T3F0;long _T3F1;struct Cyc_Absyn_Exp*_T3F2;struct Cyc_Absyn_Exp*_T3F3;long _T3F4;void(*_T3F5)(struct Cyc_Absyn_Exp*,struct Cyc_List_List*,struct Cyc_Absyn_Exp*(*)(struct Cyc_Absyn_Exp*,long),long);struct Cyc_Absyn_Exp*_T3F6;struct Cyc_Absyn_Exp*_T3F7;struct Cyc_Toc_Env*_T3F8;struct Cyc_Toc_TocContext*_T3F9;void*_T3FA;void*_T3FB;struct Cyc_Absyn_Exp*_T3FC;struct Cyc_Absyn_Kind*_T3FD;struct Cyc_Absyn_Kind*_T3FE;struct Cyc_Absyn_Exp*_T3FF;void*_T400;void*_T401;struct Cyc_Absyn_Kind*_T402;long _T403;struct Cyc_Absyn_Exp*_T404;struct Cyc_Toc_Env*_T405;struct Cyc_Toc_TocContext*_T406;void*_T407;void*_T408;struct Cyc_Absyn_Exp*_T409;struct Cyc_Absyn_Exp*_T40A;void*_T40B;void*_T40C;struct Cyc_Absyn_Tqual _T40D;void*_T40E;struct Cyc_Absyn_Exp*_T40F;struct Cyc_Toc_Env*_T410;struct Cyc_Toc_TocContext*_T411;struct Cyc_Absyn_Exp*_T412;void*_T413;void*_T414;int*_T415;int _T416;struct Cyc_Absyn_ArrayInfo _T417;struct Cyc_Toc_Env*_T418;struct Cyc_Toc_TocContext*_T419;void*_T41A;struct Cyc_Toc_Env*_T41B;struct Cyc_Toc_TocContext*_T41C;struct Cyc_Absyn_Exp*_T41D;void*_T41E;struct Cyc_Absyn_Exp*_T41F;struct Cyc_Absyn_Exp*_T420;void*_T421;struct Cyc_Absyn_Exp*_T422;struct _fat_ptr _T423;struct Cyc_Absyn_Exp*_T424;int*_T425;unsigned _T426;struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct*_T427;struct Cyc_Absyn_Exp**_T428;struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct*_T429;struct Cyc_Absyn_Exp**_T42A;struct Cyc_Absyn_Exp**_T42B;struct Cyc_Absyn_Exp*_T42C;void*_T42D;struct Cyc_Absyn_Exp*_T42E;struct Cyc_Absyn_Exp*_T42F;void*_T430;long _T431;struct Cyc_Toc_Env*_T432;struct Cyc_Toc_TocContext*_T433;void*_T434;struct Cyc_Absyn_Exp*_T435;struct Cyc_Toc_Env*_T436;struct Cyc_Toc_TocContext*_T437;struct Cyc_Absyn_Exp*_T438;struct Cyc_Absyn_Exp*_T439;struct Cyc_Toc_Env*_T43A;struct Cyc_Toc_TocContext*_T43B;struct Cyc_Absyn_Exp*_T43C;struct Cyc_Toc_Env*_T43D;struct Cyc_Toc_TocContext*_T43E;struct Cyc_Absyn_Exp*_T43F;struct Cyc_Absyn_Exp*_T440;struct Cyc_Absyn_Exp*_T441;void*_T442;struct Cyc_Absyn_Exp*_T443;struct Cyc_Toc_NewInfo_Absyn_AbsynAnnot_struct*_T444;long _T445;struct Cyc_Absyn_Exp*_T446;void*_T447;struct Cyc_Absyn_Exp*_T448;struct Cyc_Absyn_Exp*_T449;struct Cyc_Absyn_Exp*_T44A;void*_T44B;struct Cyc_Absyn_Exp*_T44C;unsigned _T44D;struct Cyc_Absyn_Exp*_T44E;void*_T44F;struct Cyc_Absyn_Exp*_T450;struct _fat_ptr _T451;struct Cyc_Absyn_Exp*_T452;struct Cyc_Toc_Env*_T453;struct Cyc_Toc_TocContext*_T454;void*_T455;void*_T456;struct Cyc_Absyn_Exp*_T457;struct Cyc_Absyn_Exp*_T458;unsigned _T459;struct _tuple1*_T45A;void*_T45B;struct Cyc_Absyn_Exp*_T45C;struct Cyc_Absyn_Exp*_T45D;struct Cyc_Absyn_Stmt*_T45E;struct Cyc_Absyn_Exp*_T45F;void*_T460;struct Cyc_Absyn_Exp*_T461;struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct*_T462;struct Cyc_Toc_Env*_T463;struct Cyc_Toc_TocContext*_T464;void*_T465;void*_T466;struct Cyc_Absyn_Exp*_T467;struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct*_T468;struct Cyc_Toc_Env*_T469;struct Cyc_Toc_TocContext*_T46A;void*_T46B;struct Cyc_Absyn_Exp*_T46C;void*_T46D;struct Cyc_Toc_Env*_T46E;struct Cyc_Toc_TocContext*_T46F;void*_T470;void*_T471;long _T472;struct Cyc_Toc_Env*_T473;struct Cyc_Toc_TocContext*_T474;long _T475;long _T476;struct Cyc_Absyn_Exp*_T477;struct Cyc_Toc_Env*_T478;struct Cyc_Toc_TocContext*_T479;void*_T47A;struct Cyc_Absyn_Exp*_T47B;struct Cyc_Toc_Env*_T47C;struct Cyc_Toc_TocContext*_T47D;void*_T47E;void*_T47F;void*_T480;struct _fat_ptr*_T481;long _T482;long _T483;struct Cyc_Absyn_Exp*_T484;struct Cyc_Toc_Env*_T485;struct Cyc_Toc_TocContext*_T486;void*_T487;struct _fat_ptr*_T488;long _T489;struct Cyc_Absyn_Exp*_T48A;struct Cyc_Toc_Env*_T48B;struct Cyc_Toc_TocContext*_T48C;struct Cyc_Absyn_Exp*_T48D;struct Cyc_Absyn_Exp*_T48E;struct Cyc_Absyn_Exp*_T48F;void*_T490;struct Cyc_Toc_Env*_T491;struct Cyc_Toc_TocContext*_T492;void*_T493;void*_T494;long _T495;struct Cyc_Toc_Env*_T496;struct Cyc_Toc_TocContext*_T497;int*_T498;int _T499;struct Cyc_Absyn_PtrInfo _T49A;struct Cyc_Warn_String_Warn_Warg_struct _T49B;int(*_T49C)(struct _fat_ptr ap);struct _fat_ptr _T49D;struct Cyc_Toc_Env*_T49E;struct Cyc_Absyn_Exp*_T49F;struct Cyc_Absyn_Exp*_T4A0;void*_T4A1;long _T4A2;long _T4A3;struct Cyc_Absyn_Exp*_T4A4;struct Cyc_Toc_Env*_T4A5;struct Cyc_Toc_TocContext*_T4A6;void*_T4A7;struct Cyc_Absyn_Exp*_T4A8;struct Cyc_Toc_Env*_T4A9;struct Cyc_Toc_TocContext*_T4AA;void*_T4AB;void*_T4AC;void*_T4AD;struct _fat_ptr*_T4AE;long _T4AF;struct Cyc_Absyn_Exp*(*_T4B0)(struct Cyc_Absyn_Exp*,struct _fat_ptr*,unsigned);long _T4B1;struct Cyc_Absyn_Exp*_T4B2;struct Cyc_Toc_Env*_T4B3;struct Cyc_Toc_TocContext*_T4B4;void*_T4B5;struct _fat_ptr*_T4B6;long _T4B7;long _T4B8;struct Cyc_Absyn_Exp*_T4B9;struct Cyc_Toc_Env*_T4BA;struct Cyc_Toc_TocContext*_T4BB;struct Cyc_Absyn_Exp*_T4BC;struct Cyc_Absyn_Exp*_T4BD;long _T4BE;struct Cyc_Absyn_Exp*_T4BF;struct Cyc_Toc_Env*_T4C0;struct Cyc_Toc_TocContext*_T4C1;struct Cyc_Toc_Env*_T4C2;struct Cyc_Absyn_Exp*_T4C3;struct Cyc_Absyn_Exp*_T4C4;void*_T4C5;struct Cyc_Toc_Env*_T4C6;struct Cyc_Absyn_Exp*_T4C7;struct Cyc_Absyn_Exp*_T4C8;void*_T4C9;struct Cyc_Absyn_Exp*_T4CA;enum Cyc_Toc_PTR_ANS _T4CB;int _T4CC;struct Cyc_Absyn_Exp*_T4CD;enum Cyc_Toc_PTR_ANS _T4CE;int _T4CF;struct Cyc_Absyn_Exp*_T4D0;struct Cyc_Absyn_Exp*_T4D1;struct Cyc_Toc_Env*_T4D2;struct Cyc_List_List*_T4D3;void*_T4D4;struct _tuple22*_T4D5;struct _tuple22 _T4D6;struct Cyc_Absyn_Exp*_T4D7;struct Cyc_List_List*_T4D8;long _T4D9;struct Cyc_Absyn_Exp*_T4DA;long _T4DB;struct Cyc_Toc_Env*_T4DC;struct Cyc_Toc_TocContext*_T4DD;struct Cyc_Absyn_Exp*_T4DE;void*_T4DF;void*_T4E0;long _T4E1;long _T4E2;struct Cyc_Warn_String_Warn_Warg_struct _T4E3;struct Cyc_Absyn_Exp*_T4E4;unsigned _T4E5;struct _fat_ptr _T4E6;struct Cyc_List_List*_T4E7;struct _tuple22*_T4E8;long _T4E9;void*_T4EA;struct Cyc_Absyn_Exp*_T4EB;void*_T4EC;struct Cyc_Absyn_Exp*_T4ED;struct Cyc_List_List*_T4EE;struct Cyc_List_List*_T4EF;struct _tuple22*_T4F0;struct Cyc_Absyn_Exp*_T4F1;void*_T4F2;long _T4F3;struct Cyc_Absyn_Exp*_T4F4;void*_T4F5;struct Cyc_Toc_Env*_T4F6;struct Cyc_List_List*_T4F7;void*_T4F8;struct _tuple22*_T4F9;struct _tuple22 _T4FA;struct Cyc_Absyn_Exp*_T4FB;struct Cyc_List_List*_T4FC;struct Cyc_Toc_Env*_T4FD;struct Cyc_Toc_TocContext*_T4FE;void*_T4FF;struct Cyc_Absyn_Exp*_T500;long _T501;int*_T502;int _T503;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T504;void*_T505;int*_T506;int _T507;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T508;struct Cyc_List_List*_T509;void*_T50A;struct Cyc_Absyn_Exp*_T50B;struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*_T50C;struct Cyc_Absyn_Aggrdecl*_T50D;struct Cyc_Absyn_Exp*_T50E;struct Cyc_Warn_String_Warn_Warg_struct _T50F;int(*_T510)(struct _fat_ptr ap);struct _fat_ptr _T511;struct Cyc_Absyn_Exp*_T512;struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*_T513;struct _tuple1**_T514;struct Cyc_Absyn_Aggrdecl*_T515;struct Cyc_Absyn_AggrdeclImpl*_T516;struct Cyc_Warn_String_Warn_Warg_struct _T517;int(*_T518)(struct _fat_ptr ap);struct _fat_ptr _T519;struct Cyc_Toc_Env*_T51A;struct Cyc_Toc_TocContext*_T51B;void*_T51C;int*_T51D;int _T51E;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T51F;void*_T520;int*_T521;int _T522;void*_T523;struct _tuple1**_T524;struct _tuple12 _T525;struct Cyc_Warn_String_Warn_Warg_struct _T526;int(*_T527)(struct _fat_ptr ap);struct _fat_ptr _T528;struct Cyc_Absyn_Aggrdecl*_T529;struct Cyc_Absyn_AggrdeclImpl*_T52A;struct Cyc_Absyn_AggrdeclImpl*_T52B;struct Cyc_List_List*_T52C;struct Cyc_List_List*_T52D;struct Cyc_List_List*_T52E;struct Cyc_List_List*_T52F;void*_T530;struct _RegionHandle*_T531;struct Cyc_Absyn_Exp*_T532;unsigned _T533;struct Cyc_List_List*_T534;struct Cyc_Absyn_Aggrdecl*_T535;enum Cyc_Absyn_AggrKind _T536;struct Cyc_Absyn_Aggrdecl*_T537;struct Cyc_Absyn_AggrdeclImpl*_T538;struct Cyc_List_List*_T539;long _T53A;int*_T53B;unsigned _T53C;struct Cyc_Absyn_Vardecl*_T53D;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T53E;void*_T53F;int*_T540;int _T541;struct Cyc_List_List*_T542;void*_T543;struct Cyc_Absyn_Exp*_T544;struct Cyc_Absyn_Aggrfield*_T545;void*_T546;long _T547;struct Cyc_Absyn_Exp*_T548;void*_T549;void*_T54A;long _T54B;struct Cyc_Toc_Env*_T54C;struct Cyc_Toc_TocContext*_T54D;struct Cyc_Absyn_Aggrfield*_T54E;void*_T54F;struct Cyc_Absyn_Exp*_T550;void*_T551;struct Cyc_Absyn_Exp*_T552;struct Cyc_Absyn_Exp*_T553;struct Cyc_Absyn_Exp*_T554;struct Cyc_Absyn_Aggrdecl*_T555;struct Cyc_Absyn_AggrdeclImpl*_T556;struct Cyc_Absyn_AggrdeclImpl*_T557;long _T558;struct Cyc_Absyn_Aggrfield*_T559;int _T55A;unsigned _T55B;struct Cyc_Absyn_Exp*_T55C;void*_T55D;struct _tuple1*_T55E;struct _tuple1*_T55F;struct _fat_ptr*_T560;struct _fat_ptr _T561;struct Cyc_String_pa_PrintArg_struct _T562;struct Cyc_Absyn_Aggrdecl*_T563;struct _tuple1*_T564;struct _tuple1 _T565;struct _fat_ptr*_T566;struct Cyc_String_pa_PrintArg_struct _T567;struct _fat_ptr*_T568;struct _fat_ptr _T569;struct _fat_ptr _T56A;struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*_T56B;struct Cyc_List_List*_T56C;struct _fat_ptr _T56D;void*_T56E;struct Cyc_Absyn_Exp*_T56F;struct Cyc_Toc_Env*_T570;struct Cyc_Toc_TocContext*_T571;void*_T572;struct _fat_ptr*_T573;void*_T574;struct Cyc_Absyn_Exp*_T575;struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*_T576;struct _tuple1**_T577;struct Cyc_List_List*_T578;struct _fat_ptr _T579;long _T57A;struct Cyc_Absyn_Aggrdecl*_T57B;struct Cyc_Absyn_AggrdeclImpl*_T57C;struct Cyc_Absyn_AggrdeclImpl*_T57D;struct Cyc_List_List*_T57E;struct Cyc_List_List*_T57F;struct Cyc_List_List*_T580;struct Cyc_Absyn_Aggrdecl*_T581;struct Cyc_List_List*_T582;struct Cyc_List_List*_T583;struct Cyc_List_List*_T584;struct Cyc_Absyn_Aggrdecl*_T585;struct Cyc_Absyn_AggrdeclImpl*_T586;struct Cyc_Absyn_AggrdeclImpl*_T587;struct Cyc_List_List*_T588;void*_T589;struct Cyc_List_List*_T58A;struct Cyc_Absyn_Aggrfield*_T58B;void*_T58C;struct Cyc_Absyn_Aggrfield*_T58D;struct Cyc_Toc_Env*_T58E;struct Cyc_Toc_TocContext*_T58F;void*_T590;void*_T591;struct Cyc_List_List*_T592;struct Cyc_List_List*_T593;struct Cyc_List_List*_T594;struct Cyc_Absyn_Aggrfield*_T595;void*_T596;int*_T597;int _T598;struct Cyc_Absyn_ArrayInfo _T599;struct Cyc_Absyn_Exp*_T59A;struct Cyc_Absyn_Exp*_T59B;long _T59C;struct Cyc_Absyn_Exp*_T59D;void*_T59E;struct Cyc_Absyn_Aggrfield*_T59F;struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T5A0;struct Cyc_Absyn_Exp*_T5A1;void*_T5A2;struct Cyc_Absyn_Exp*_T5A3;void*_T5A4;int*_T5A5;int _T5A6;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T5A7;void*_T5A8;int*_T5A9;int _T5AA;struct Cyc_Absyn_Aggrfield*_T5AB;struct Cyc_Absyn_Exp*_T5AC;void*_T5AD;struct Cyc_Absyn_Aggrfield*_T5AE;void*_T5AF;long _T5B0;struct Cyc_Absyn_Kind*_T5B1;struct Cyc_Absyn_Kind*_T5B2;struct Cyc_Absyn_Aggrfield*_T5B3;void*_T5B4;struct Cyc_Absyn_Kind*_T5B5;long _T5B6;struct Cyc_Absyn_Aggrfield*_T5B7;struct Cyc_List_List*_T5B8;struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct*_T5B9;struct Cyc_Absyn_Aggrfield*_T5BA;struct Cyc_List_List*_T5BB;struct _fat_ptr*_T5BC;struct _fat_ptr _T5BD;struct Cyc_Int_pa_PrintArg_struct _T5BE;struct Cyc_Toc_Env*_T5BF;struct Cyc_Toc_TocContext*_T5C0;struct Cyc_Toc_TocContext*_T5C1;int _T5C2;int _T5C3;struct _fat_ptr _T5C4;struct _fat_ptr _T5C5;struct Cyc_List_List*_T5C6;struct _tuple1**_T5C7;struct Cyc_Absyn_Aggrdecl*_T5C8;struct Cyc_Toc_Env*_T5C9;struct Cyc_Toc_TocContext*_T5CA;struct Cyc_Absyn_Aggrdecl*_T5CB;struct Cyc_Absyn_Exp*_T5CC;struct Cyc_Absyn_Aggrdecl**_T5CD;union Cyc_Absyn_AggrInfo _T5CE;struct Cyc_List_List*_T5CF;struct Cyc_Warn_String_Warn_Warg_struct _T5D0;int(*_T5D1)(struct _fat_ptr ap);struct _fat_ptr _T5D2;struct Cyc_Absyn_Aggrdecl*_T5D3;struct Cyc_Absyn_AggrdeclImpl*_T5D4;struct Cyc_Absyn_AggrdeclImpl*_T5D5;long _T5D6;struct Cyc_List_List*_T5D7;void*_T5D8;struct Cyc_Absyn_Exp*_T5D9;void*_T5DA;struct Cyc_Absyn_Aggrfield*_T5DB;long _T5DC;long _T5DD;struct Cyc_Absyn_Exp*_T5DE;struct Cyc_Toc_Env*_T5DF;struct Cyc_Toc_TocContext*_T5E0;void*_T5E1;struct Cyc_Absyn_Exp*_T5E2;struct Cyc_Absyn_Aggrdecl*_T5E3;struct Cyc_Absyn_Aggrfield*_T5E4;struct _fat_ptr*_T5E5;struct Cyc_Absyn_Exp*_T5E6;void*_T5E7;struct Cyc_List_List*_T5E8;struct _tuple22*_T5E9;struct _tuple22*_T5EA;struct _fat_ptr _T5EB;struct Cyc_Absyn_Exp*_T5EC;struct Cyc_List_List*_T5ED;struct Cyc_Absyn_Aggrfield*_T5EE;struct _fat_ptr*_T5EF;struct Cyc_Absyn_Exp*_T5F0;struct _fat_ptr _T5F1;struct Cyc_Absyn_Aggrdecl*_T5F2;struct Cyc_Absyn_AggrdeclImpl*_T5F3;struct Cyc_List_List*_T5F4;void*_T5F5;struct _tuple42*_T5F6;struct _tuple42 _T5F7;struct Cyc_Absyn_Aggrfield*_T5F8;struct Cyc_List_List*_T5F9;void*_T5FA;struct Cyc_Absyn_Aggrfield*_T5FB;struct Cyc_List_List*_T5FC;void*_T5FD;struct Cyc_Toc_Env*_T5FE;struct Cyc_Toc_TocContext*_T5FF;struct Cyc_Absyn_Aggrfield*_T600;void*_T601;struct Cyc_Toc_Env*_T602;struct Cyc_Toc_TocContext*_T603;struct Cyc_Absyn_Exp*_T604;void*_T605;void*_T606;long _T607;long _T608;long _T609;long _T60A;void*_T60B;struct Cyc_Absyn_Exp*_T60C;struct Cyc_List_List*_T60D;struct _tuple22*_T60E;struct Cyc_List_List*_T60F;struct Cyc_List_List*_T610;struct Cyc_Absyn_Exp*_T611;struct Cyc_List_List*_T612;struct Cyc_Absyn_Datatypefield*_T613;struct Cyc_List_List*_T614;void*_T615;struct Cyc_Absyn_Exp*_T616;void*_T617;struct Cyc_Toc_Env*_T618;struct Cyc_Toc_TocContext*_T619;struct Cyc_List_List*_T61A;void*_T61B;struct _tuple28*_T61C;struct _tuple28 _T61D;void*_T61E;long _T61F;long _T620;struct Cyc_Absyn_Exp*_T621;void*_T622;struct Cyc_Absyn_Exp*_T623;struct Cyc_Absyn_Exp*_T624;struct Cyc_List_List*_T625;struct Cyc_List_List*_T626;struct Cyc_Absyn_Exp*_T627;struct Cyc_Absyn_Datatypedecl*_T628;long _T629;struct Cyc_Absyn_Datatypefield*_T62A;struct _tuple1*_T62B;struct Cyc_Absyn_Exp*_T62C;void*_T62D;struct Cyc_Absyn_Datatypedecl*_T62E;struct Cyc_Absyn_Datatypefield*_T62F;struct _tuple1*_T630;long _T631;struct Cyc_List_List*_T632;struct _fat_ptr*_T633;struct Cyc_List_List*_T634;void*_T635;struct Cyc_Absyn_Exp*_T636;struct Cyc_List_List*_T637;struct Cyc_Absyn_Exp*_T638;struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*_T639;struct Cyc_Toc_Env*_T63A;struct Cyc_Toc_TocContext*_T63B;struct Cyc_Absyn_Datatypefield*_T63C;struct _tuple1*_T63D;struct Cyc_Absyn_Datatypedecl*_T63E;struct _tuple1*_T63F;struct Cyc_List_List*_T640;struct Cyc_List_List*_T641;struct _tuple22*_T642;struct Cyc_List_List*_T643;void*_T644;struct Cyc_List_List*_T645;struct Cyc_Absyn_Exp*_T646;struct Cyc_List_List*_T647;struct _tuple22*_T648;struct Cyc_Absyn_MallocInfo _T649;struct Cyc_Absyn_MallocInfo _T64A;struct Cyc_Absyn_MallocInfo _T64B;struct Cyc_Absyn_MallocInfo _T64C;struct Cyc_Absyn_MallocInfo _T64D;struct Cyc_Absyn_MallocInfo _T64E;struct Cyc_Absyn_MallocInfo _T64F;struct Cyc_Toc_Env*_T650;struct Cyc_Toc_TocContext*_T651;void**_T652;void*_T653;long _T654;struct Cyc_Toc_Env*_T655;struct Cyc_Toc_TocContext*_T656;enum Cyc_Absyn_MallocKind _T657;int _T658;long _T659;struct Cyc_Toc_Env*_T65A;struct Cyc_Toc_TocContext*_T65B;void**_T65C;void*_T65D;struct Cyc_Absyn_Exp*_T65E;void*_T65F;struct Cyc_Absyn_Exp*_T660;struct Cyc_Absyn_Exp*_T661;struct Cyc_Toc_Env*_T662;struct Cyc_Toc_TocContext*_T663;struct Cyc_Absyn_Exp*_T664;struct Cyc_Absyn_Exp*_T665;struct Cyc_Toc_Env*_T666;struct Cyc_Toc_TocContext*_T667;struct Cyc_Absyn_Exp*_T668;void*_T669;struct Cyc_Absyn_Exp*_T66A;struct Cyc_Absyn_Exp*_T66B;struct Cyc_Toc_Env*_T66C;struct Cyc_Toc_TocContext*_T66D;struct Cyc_Absyn_Exp*_T66E;struct Cyc_Absyn_Exp*_T66F;void*_T670;struct Cyc_Absyn_Exp*_T671;struct Cyc_Absyn_Exp*_T672;long _T673;struct Cyc_Toc_Env*_T674;struct Cyc_Toc_TocContext*_T675;void**_T676;void*_T677;struct Cyc_Absyn_Exp*_T678;enum Cyc_Absyn_MallocKind _T679;int _T67A;struct Cyc_Toc_Env*_T67B;struct Cyc_Toc_TocContext*_T67C;struct Cyc_Absyn_Exp*_T67D;struct Cyc_Absyn_Exp*_T67E;struct Cyc_Absyn_Exp*(*_T67F)(struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*);long _T680;struct Cyc_Toc_Env*_T681;struct Cyc_Toc_TocContext*_T682;struct Cyc_Absyn_Exp*_T683;struct Cyc_Absyn_Exp*_T684;struct Cyc_Toc_Env*_T685;struct Cyc_Toc_TocContext*_T686;struct Cyc_Absyn_Exp*_T687;struct Cyc_Toc_Env*_T688;struct Cyc_Toc_TocContext*_T689;struct Cyc_Absyn_Exp*_T68A;struct Cyc_Absyn_Exp*_T68B;long _T68C;struct Cyc_Absyn_Exp*_T68D;enum Cyc_Absyn_MallocKind _T68E;int _T68F;struct Cyc_Absyn_Exp*_T690;void*_T691;struct Cyc_Absyn_Exp*_T692;void*_T693;struct Cyc_Absyn_Exp*_T694;struct Cyc_Absyn_Exp*_T695;struct _fat_ptr _T696;struct Cyc_Absyn_Exp*_T697;struct Cyc_Toc_Env*_T698;struct Cyc_Toc_TocContext*_T699;struct _tuple1*_T69A;void*_T69B;struct Cyc_Absyn_Exp*_T69C;struct Cyc_Absyn_Stmt*_T69D;struct Cyc_Absyn_Exp*_T69E;struct Cyc_Absyn_Exp*_T69F;struct Cyc_Toc_Env*_T6A0;struct Cyc_Toc_TocContext*_T6A1;void*_T6A2;void*_T6A3;struct Cyc_Absyn_Exp*_T6A4;struct Cyc_Absyn_Exp*_T6A5;void*_T6A6;struct Cyc_Absyn_Exp*_T6A7;void*_T6A8;long _T6A9;long _T6AA;struct Cyc_Warn_String_Warn_Warg_struct _T6AB;int(*_T6AC)(struct _fat_ptr ap);struct _fat_ptr _T6AD;struct Cyc_Absyn_Exp*_T6AE;struct Cyc_Toc_Env*_T6AF;struct Cyc_Toc_TocContext*_T6B0;struct Cyc_Absyn_Exp*_T6B1;struct Cyc_Toc_Env*_T6B2;struct Cyc_Toc_TocContext*_T6B3;struct Cyc_Absyn_Exp*_T6B4;struct Cyc_Absyn_Exp*_T6B5;struct Cyc_Absyn_Exp*_T6B6;unsigned _T6B7;struct Cyc_Absyn_Exp*_T6B8;struct Cyc_Absyn_Exp*_T6B9;struct Cyc_Absyn_Exp*_T6BA;unsigned _T6BB;struct Cyc_Absyn_Exp*_T6BC;struct _tuple1*_T6BD;void*_T6BE;struct Cyc_Absyn_Exp*_T6BF;struct _tuple1*_T6C0;void*_T6C1;struct Cyc_Absyn_Exp*_T6C2;struct Cyc_Absyn_Stmt*_T6C3;unsigned _T6C4;struct Cyc_Absyn_Stmt*_T6C5;unsigned _T6C6;struct Cyc_Absyn_Exp*_T6C7;struct Cyc_Absyn_Exp*_T6C8;void*_T6C9;void*_T6CA;void*_T6CB;int*_T6CC;int _T6CD;void*_T6CE;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T6CF;void*_T6D0;int*_T6D1;int _T6D2;void*_T6D3;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T6D4;void*_T6D5;struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_T6D6;union Cyc_Absyn_AggrInfo _T6D7;struct _union_AggrInfo_KnownAggr _T6D8;unsigned _T6D9;void*_T6DA;void*_T6DB;union Cyc_Absyn_AggrInfo _T6DC;struct _union_AggrInfo_KnownAggr _T6DD;struct Cyc_Absyn_Aggrdecl**_T6DE;int _T6DF;struct Cyc_Absyn_Exp*_T6E0;void*_T6E1;struct Cyc_Absyn_Exp*_T6E2;struct Cyc_Toc_Env*_T6E3;struct Cyc_Toc_TocContext*_T6E4;void*_T6E5;struct _fat_ptr*_T6E6;void*_T6E7;struct Cyc_Absyn_Exp*_T6E8;void*_T6E9;struct Cyc_Absyn_Exp*_T6EA;struct Cyc_Absyn_Exp*_T6EB;struct Cyc_Warn_String_Warn_Warg_struct _T6EC;int(*_T6ED)(struct _fat_ptr ap);struct _fat_ptr _T6EE;struct Cyc_Warn_String_Warn_Warg_struct _T6EF;int(*_T6F0)(struct _fat_ptr ap);struct _fat_ptr _T6F1;struct Cyc_Warn_String_Warn_Warg_struct _T6F2;int(*_T6F3)(struct _fat_ptr ap);struct _fat_ptr _T6F4;struct Cyc_Warn_String_Warn_Warg_struct _T6F5;int(*_T6F6)(struct _fat_ptr ap);struct _fat_ptr _T6F7;struct Cyc_Toc_Env*_T6F8;struct Cyc_Toc_TocContext*_T6F9;struct Cyc_List_List*_T6FA;struct Cyc_Toc_Env*_T6FB;struct Cyc_Toc_TocContext*_T6FC;struct Cyc_List_List*_T6FD;long _T6FE;struct Cyc_Warn_String_Warn_Warg_struct _T6FF;struct Cyc_Warn_Exp_Warn_Warg_struct _T700;int(*_T701)(unsigned,struct _fat_ptr);void*(*_T702)(unsigned,struct _fat_ptr);struct Cyc_Absyn_Exp*_T703;unsigned _T704;struct _fat_ptr _T705;_T0= e;_T1= _T0->topt;
if(_T1!=0)goto _TL17E;{struct Cyc_Warn_String_Warn_Warg_struct _T706;_T706.tag= 0;
({__typeof__(_tag_fat("exp_to_c: no type for ",sizeof(char),23U))_T707=_tag_fat("exp_to_c: no type for ",sizeof(char),23U);_T706.f1= _T707;});_T2= _T706;}{struct Cyc_Warn_String_Warn_Warg_struct _T706=_T2;{struct Cyc_Warn_Exp_Warn_Warg_struct _T707;_T707.tag= 4;_T707.f1= e;_T3= _T707;}{struct Cyc_Warn_Exp_Warn_Warg_struct _T707=_T3;void*_T708[2];_T708[0]= & _T706;_T708[1]= & _T707;_T5= Cyc_Warn_impos_loc2;{int(*_T709)(unsigned,struct _fat_ptr)=(int(*)(unsigned,struct _fat_ptr))_T5;_T4= _T709;}_T6= e;_T7= _T6->loc;_T8= _tag_fat(_T708,sizeof(void*),2);_T4(_T7,_T8);}}goto _TL17F;_TL17E: _TL17F: _T9= e;{
void*old_typ=_T9->topt;_TA= nv;_TB= _TA->ctxt;_TC= old_typ;{
void*new_typ=Cyc_Toc_typ_to_c(_TB,_TC);_TD= e;
_TD->topt= new_typ;{
# 1713
long did_inserted_checks=0;_TE= e;{
void*_T706=_TE->annot;_TF= (struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct*)_T706;_T10= _TF->tag;_T11= Cyc_Absyn_EmptyAnnot;if(_T10!=_T11)goto _TL180;goto _LL4;_TL180: _T12= (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct*)_T706;_T13= _T12->tag;_T14= Cyc_InsertChecks_NoCheck;if(_T13!=_T14)goto _TL182;_LL4:
# 1717
 did_inserted_checks= 1;goto _LL0;_TL182: goto _LL0;_LL0:;}_T15= e;{
# 1722
void*_T706=_T15->r;struct Cyc_Absyn_Stmt*_T707;struct _fat_ptr*_T708;struct Cyc_Absyn_Exp*_T709;void**_T70A;struct Cyc_Absyn_Exp*_T70B;enum Cyc_Absyn_MallocKind _T70C;struct Cyc_Absyn_Datatypefield*_T70D;struct Cyc_Absyn_Datatypedecl*_T70E;struct Cyc_Absyn_Aggrdecl*_T70F;struct Cyc_List_List*_T710;enum Cyc_Absyn_Coercion _T711;struct Cyc_Absyn_VarargInfo*_T712;struct Cyc_List_List*_T713;struct Cyc_Absyn_Exp*_T714;void*_T715;enum Cyc_Absyn_Incrementor _T716;enum Cyc_Absyn_Primop _T717;long _T718;long _T719;void*_T71A;_T16= (int*)_T706;_T17= *_T16;switch(_T17){case 2: _T18= e;
# 1724
({__typeof__(Cyc_Toc_zero_exp())_T71B=Cyc_Toc_zero_exp();_T18->r= _T71B;});goto _LL7;case 0: _T19= (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_T706;_T1A= _T19->f1;_T1B= _T1A.Null_c;_T1C= _T1B.tag;if(_T1C!=1)goto _TL185;_T1D= 
# 1730
Cyc_Absyn_signed_int_exp(0,0U);_T1E= nv;_T1F= _T1E->ctxt;_T20= Cyc_Toc_void_star_type(_T1F);{struct Cyc_Absyn_Exp*zero=Cyc_Absyn_set_type(_T1D,_T20);_T21= 
# 1732
Cyc_Absyn_bounds_one();_T22= Cyc_Tcutil_get_pointer_bounds(old_typ);_T23= _check_null(_T22);_T24= Cyc_Tcutil_get_bounds_exp_constrain(_T21,_T23,1);if(_T24!=0)goto _TL187;_T25= 
Cyc_Toc_is_toplevel(nv);if(!_T25)goto _TL189;_T26= e;_T27= nv;_T28= _T27->ctxt;_T29= old_typ;_T2A= zero;_T2B= zero;_T2C= 
Cyc_Toc_make_toplevel_dyn_arr(_T28,_T29,_T2A,_T2B);_T26->r= _T2C->r;goto _TL18A;
# 1736
_TL189: _T2D= e;{struct Cyc_Absyn_Exp*_T71B[3];_T71B[0]= zero;_T71B[1]= zero;_T71B[2]= zero;_T2F= Cyc_Toc__tag_fat_e;_T30= _tag_fat(_T71B,sizeof(struct Cyc_Absyn_Exp*),3);_T2E= Cyc_Toc_fncall_exp_r(_T2F,_T30);}_T2D->r= _T2E;_TL18A: goto _TL188;
# 1738
_TL187: _T31= e;({__typeof__(Cyc_Toc_zero_exp())_T71B=Cyc_Toc_zero_exp();_T31->r= _T71B;});_TL188: goto _LL7;}_TL185: goto _LL7;case 1: goto _LL7;case 41:{struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct*)_T706;_T71A= _T71B->f1;_T719= _T71B->f2;_T718= _T71B->f3;}{struct Cyc_Absyn_Exp*e1=_T71A;long static_only=_T719;long do_check=_T718;_T32= static_only;
# 1745
if(_T32)goto _TL18D;else{goto _TL18E;}_TL18E: _T33= do_check;if(_T33)goto _TL18B;else{goto _TL18D;}
_TL18D: _T34= e;_T35= Cyc_Absyn_int_exp(0U,1,0U);_T34->r= _T35->r;goto _TL18C;
# 1749
_TL18B: Cyc_Toc_exp_to_c(nv,e1);_T36= e;_T37= e1;_T38= 
Cyc_Absyn_int_exp(0U,1,0U);_T39= nv;_T3A= _T39->ctxt;_T3B= old_typ;_T3C= 
# 1752
Cyc_Toc_typ_to_c(_T3A,_T3B);_T3D= Cyc_Toc__throw_assert_e;_T3E= _tag_fat(0U,sizeof(struct Cyc_Absyn_Exp*),0);_T3F= 
Cyc_Toc_fncall_exp_dl(_T3D,_T3E);_T40= nv;_T41= _T40->ctxt;_T42= Cyc_Toc_void_star_type(_T41);_T43= Cyc_Absyn_set_type(_T3F,_T42);_T44= 
# 1751
Cyc_Toc_array_to_ptr_cast(_T3C,_T43,0U);_T45= 
# 1750
Cyc_Absyn_conditional_exp(_T37,_T38,_T44,0U);_T36->r= _T45->r;_TL18C: goto _LL7;}case 42: _T46= e;_T47= 
# 1759
Cyc_Absyn_int_exp(0U,0,0U);_T46->r= _T47->r;goto _LL7;case 40:{struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct*)_T706;_T71A= _T71B->f1;}{struct Cyc_Absyn_Exp*e1=_T71A;
# 1762
Cyc_Toc_exp_to_c(nv,e1);goto _LL7;}case 3:{struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*)_T706;_T717= _T71B->f1;_T71A= _T71B->f2;}{enum Cyc_Absyn_Primop p=_T717;struct Cyc_List_List*es=_T71A;_T49= Cyc_List_map;{
# 1766
struct Cyc_List_List*(*_T71B)(void*(*)(struct Cyc_Absyn_Exp*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(void*(*)(struct Cyc_Absyn_Exp*),struct Cyc_List_List*))_T49;_T48= _T71B;}_T4A= es;{struct Cyc_List_List*old_types=_T48(Cyc_Toc_get_cyc_type,_T4A);_T4C= Cyc_List_iter_c;{
# 1768
void(*_T71B)(void(*)(struct Cyc_Toc_Env*,struct Cyc_Absyn_Exp*),struct Cyc_Toc_Env*,struct Cyc_List_List*)=(void(*)(void(*)(struct Cyc_Toc_Env*,struct Cyc_Absyn_Exp*),struct Cyc_Toc_Env*,struct Cyc_List_List*))_T4C;_T4B= _T71B;}_T4D= nv;_T4E= es;_T4B(Cyc_Toc_exp_to_c,_T4D,_T4E);_T4F= p;_T50= (int)_T4F;switch(_T50){case Cyc_Absyn_Tagof: _T51= 
# 1773
_check_null(es);_T52= _T51->hd;{struct Cyc_Absyn_Exp*arg=(struct Cyc_Absyn_Exp*)_T52;_T53= e;_T54= Cyc_Absyn_uint_type;_T55= 
Cyc_Absyn_const_tqual(0U);_T56= Cyc_Absyn_cstar_type(_T54,_T55);_T57= arg;_T58= Cyc_Toc_cast_it(_T56,_T57);_T59= Cyc_Absyn_deref_exp(_T58,0U);_T53->r= _T59->r;goto _LL62;}case Cyc_Absyn_Numelts: _T5A= 
# 1777
_check_null(es);_T5B= _T5A->hd;{struct Cyc_Absyn_Exp*arg=(struct Cyc_Absyn_Exp*)_T5B;_T5C= 
_check_null(old_types);_T5D= _T5C->hd;{void*_T71B=Cyc_Absyn_compress(_T5D);void*_T71C;void*_T71D;void*_T71E;void*_T71F;_T5E= (int*)_T71B;_T5F= *_T5E;if(_T5F!=4)goto _TL190;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T720=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T71B;_T60= _T720->f1;_T71F= _T60.elt_type;_T61= _T720->f1;_T62= _T61.ptr_atts;_T71E= _T62.nullable;_T63= _T720->f1;_T64= _T63.ptr_atts;_T71D= _T64.bounds;_T65= _T720->f1;_T66= _T65.ptr_atts;_T71C= _T66.zero_term;}{void*elt_type=_T71F;void*nbl=_T71E;void*bound=_T71D;void*zt=_T71C;_T67= 
# 1780
Cyc_Absyn_bounds_one();_T68= bound;{struct Cyc_Absyn_Exp*eopt=Cyc_Tcutil_get_bounds_exp_constrain(_T67,_T68,1);
if(eopt!=0)goto _TL192;_T69= e;{struct Cyc_Absyn_Exp*_T720[2];_T6B= es;_T6C= _T6B->hd;
# 1784
_T720[0]= (struct Cyc_Absyn_Exp*)_T6C;_T6D= nv;_T6E= _T6D->ctxt;_T6F= elt_type;_T70= Cyc_Toc_typ_to_c(_T6E,_T6F);_T71= Cyc_Absyn_sizeoftype_exp(_T70,0U);_T72= Cyc_Absyn_uint_type;({__typeof__(Cyc_Absyn_set_type(_T71,_T72))_T721=Cyc_Absyn_set_type(_T71,_T72);_T720[1]= _T721;});_T73= Cyc_Toc__get_fat_size_e;_T74= _tag_fat(_T720,sizeof(struct Cyc_Absyn_Exp*),2);_T6A= Cyc_Toc_fncall_exp_r(_T73,_T74);}
# 1783
_T69->r= _T6A;goto _TL193;
# 1785
_TL192: _T75= Cyc_Tcutil_force_type2bool(0,zt);if(!_T75)goto _TL194;_T76= es;_T77= _T76->hd;_T78= (struct Cyc_Absyn_Exp*)_T77;_T79= 
# 1787
Cyc_Toc_isCharStar(_T78);if(!_T79)goto _TL196;_T7A= e;{struct Cyc_Absyn_Exp*_T720[2];_T7C= es;_T7D= _T7C->hd;
_T720[0]= (struct Cyc_Absyn_Exp*)_T7D;_T720[1]= eopt;_T7E= Cyc_Toc__get_zero_arr_size_char_e;_T7F= _tag_fat(_T720,sizeof(struct Cyc_Absyn_Exp*),2);_T7B= Cyc_Toc_fncall_exp_r(_T7E,_T7F);}_T7A->r= _T7B;goto _TL197;
# 1790
_TL196: _T80= e;{struct Cyc_Absyn_Exp*_T720[3];_T82= nv;_T83= _T82->ctxt;_T84= old_types;_T85= _T84->hd;_T86= 
Cyc_Tcutil_pointer_elt_type(_T85);_T87= Cyc_Toc_typ_to_c(_T83,_T86);_T88= Cyc_Absyn_sizeoftype_exp(_T87,0U);_T89= Cyc_Absyn_uint_type;({__typeof__(Cyc_Absyn_set_type(_T88,_T89))_T721=Cyc_Absyn_set_type(_T88,_T89);_T720[0]= _T721;});_T8A= es;_T8B= _T8A->hd;
_T720[1]= (struct Cyc_Absyn_Exp*)_T8B;_T720[2]= eopt;_T8C= Cyc_Toc__get_zero_arr_size_other_e;_T8D= _tag_fat(_T720,sizeof(struct Cyc_Absyn_Exp*),3);_T81= Cyc_Toc_fncall_exp_r(_T8C,_T8D);}
# 1790
_T80->r= _T81;_TL197: goto _TL195;
# 1793
_TL194: _T8E= Cyc_Tcutil_force_type2bool(0,nbl);if(!_T8E)goto _TL198;_T8F= 
Cyc_Evexp_c_can_eval(eopt);if(_T8F)goto _TL19A;else{goto _TL19C;}
_TL19C:{struct Cyc_Warn_String_Warn_Warg_struct _T720;_T720.tag= 0;({__typeof__(_tag_fat("can't calculate numelts",sizeof(char),24U))_T721=_tag_fat("can't calculate numelts",sizeof(char),24U);_T720.f1= _T721;});_T90= _T720;}{struct Cyc_Warn_String_Warn_Warg_struct _T720=_T90;void*_T721[1];_T721[0]= & _T720;_T91= e;_T92= _T91->loc;_T93= _tag_fat(_T721,sizeof(void*),1);Cyc_Warn_err2(_T92,_T93);}goto _TL19B;_TL19A: _TL19B: _T94= e;_T95= arg;_T96= eopt;_T97= 
# 1797
Cyc_Absyn_uint_exp(0U,0U);_T98= Cyc_Absyn_uint_type;_T99= Cyc_Absyn_set_type(_T97,_T98);({__typeof__(Cyc_Toc_conditional_exp_r(_T95,_T96,_T99))_T720=Cyc_Toc_conditional_exp_r(_T95,_T96,_T99);_T94->r= _T720;});goto _TL199;
# 1799
_TL198: _T9A= e;_T9B= eopt;_T9A->r= _T9B->r;_TL199: _TL195: _TL193: goto _LL81;}}_TL190:{struct Cyc_Warn_String_Warn_Warg_struct _T720;_T720.tag= 0;
# 1802
({__typeof__(_tag_fat("numelts primop applied to non-pointer ",sizeof(char),39U))_T721=_tag_fat("numelts primop applied to non-pointer ",sizeof(char),39U);_T720.f1= _T721;});_T9C= _T720;}{struct Cyc_Warn_String_Warn_Warg_struct _T720=_T9C;{struct Cyc_Warn_Typ_Warn_Warg_struct _T721;_T721.tag= 2;_T9E= arg;_T9F= _T9E->topt;({__typeof__(_check_null(_T9F))_T722=_check_null(_T9F);_T721.f1= _T722;});_T9D= _T721;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T721=_T9D;void*_T722[2];_T722[0]= & _T720;_T722[1]= & _T721;{int(*_T723)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_TA0= _T723;}_TA1= _tag_fat(_T722,sizeof(void*),2);_TA0(_TA1);}}_LL81:;}goto _LL62;}case Cyc_Absyn_Plus: _TA2= 
# 1808
_check_null(old_types);_TA3= _TA2->hd;{void*_T71B=Cyc_Absyn_compress(_TA3);void*_T71C;void*_T71D;void*_T71E;_TA4= (int*)_T71B;_TA5= *_TA4;if(_TA5!=4)goto _TL19D;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T71F=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T71B;_TA6= _T71F->f1;_T71E= _TA6.elt_type;_TA7= _T71F->f1;_TA8= _TA7.ptr_atts;_T71D= _TA8.bounds;_TA9= _T71F->f1;_TAA= _TA9.ptr_atts;_T71C= _TAA.zero_term;}{void*elt_type=_T71E;void*b=_T71D;void*zt=_T71C;_TAB= 
# 1811
Cyc_Toc_is_toplevel(nv);if(!_TAB)goto _TL19F;{
int(*_T71F)(struct _fat_ptr)=(int(*)(struct _fat_ptr))Cyc_Toc_unimp;_TAC= _T71F;}_TAD= _tag_fat("can't do pointer arithmetic at top-level",sizeof(char),41U);_TAC(_TAD);goto _TL1A0;_TL19F: _TL1A0: _TAE= 
Cyc_Absyn_bounds_one();_TAF= b;{struct Cyc_Absyn_Exp*eopt=Cyc_Tcutil_get_bounds_exp_constrain(_TAE,_TAF,1);_TB0= 
_check_null(es);_TB1= _TB0->hd;{struct Cyc_Absyn_Exp*e1=(struct Cyc_Absyn_Exp*)_TB1;_TB2= es;_TB3= _TB2->tl;_TB4= 
_check_null(_TB3);_TB5= _TB4->hd;{struct Cyc_Absyn_Exp*e2=(struct Cyc_Absyn_Exp*)_TB5;
if(eopt!=0)goto _TL1A1;_TB6= e;{struct Cyc_Absyn_Exp*_T71F[3];
# 1818
_T71F[0]= e1;_TB8= nv;_TB9= _TB8->ctxt;_TBA= elt_type;_TBB= Cyc_Toc_typ_to_c(_TB9,_TBA);_TBC= Cyc_Absyn_sizeoftype_exp(_TBB,0U);_TBD= Cyc_Absyn_uint_type;({__typeof__(Cyc_Absyn_set_type(_TBC,_TBD))_T720=Cyc_Absyn_set_type(_TBC,_TBD);_T71F[1]= _T720;});_T71F[2]= e2;_TBE= Cyc_Toc__fat_ptr_plus_e;_TBF= _tag_fat(_T71F,sizeof(struct Cyc_Absyn_Exp*),3);_TB7= Cyc_Toc_fncall_exp_r(_TBE,_TBF);}
# 1817
_TB6->r= _TB7;goto _TL1A2;
# 1819
_TL1A1: _TC0= Cyc_Tcutil_force_type2bool(0,zt);if(!_TC0)goto _TL1A3;_TC1= 
Cyc_Toc_isCharStar(e1);if(!_TC1)goto _TL1A5;_TC2= e;{struct Cyc_Absyn_Exp*_T71F[3];
_T71F[0]= e1;_T71F[1]= eopt;_T71F[2]= e2;_TC4= Cyc_Toc__zero_arr_plus_char_e;_TC5= _tag_fat(_T71F,sizeof(struct Cyc_Absyn_Exp*),3);_TC3= Cyc_Toc_fncall_exp_r(_TC4,_TC5);}_TC2->r= _TC3;goto _TL1A6;
# 1823
_TL1A5: _TC6= e;{struct Cyc_Absyn_Exp*_T71F[3];_TC8= nv;_TC9= _TC8->ctxt;_TCA= old_types;_TCB= _TCA->hd;_TCC= 
Cyc_Tcutil_pointer_elt_type(_TCB);_TCD= Cyc_Toc_typ_to_c(_TC9,_TCC);_TCE= Cyc_Absyn_sizeoftype_exp(_TCD,0U);_TCF= Cyc_Absyn_uint_type;({__typeof__(Cyc_Absyn_set_type(_TCE,_TCF))_T720=Cyc_Absyn_set_type(_TCE,_TCF);_T71F[0]= _T720;});
_T71F[1]= eopt;_T71F[2]= e2;_TD0= Cyc_Toc__zero_arr_plus_other_e;_TD1= _tag_fat(_T71F,sizeof(struct Cyc_Absyn_Exp*),3);_TC7= Cyc_Toc_fncall_exp_r(_TD0,_TD1);}
# 1823
_TC6->r= _TC7;_TL1A6: goto _TL1A4;_TL1A3: _TL1A4: _TL1A2: goto _LL86;}}}}_TL19D: goto _LL86;_LL86:;}goto _LL62;case Cyc_Absyn_Minus:  {
# 1836
void*elt_type=Cyc_Absyn_void_type;_TD2= 
_check_null(old_types);_TD3= _TD2->hd;_TD4= & elt_type;_TD5= Cyc_Tcutil_is_fat_pointer_type_elt(_TD3,_TD4);if(!_TD5)goto _TL1A7;_TD6= 
_check_null(es);_TD7= _TD6->hd;{struct Cyc_Absyn_Exp*e1=(struct Cyc_Absyn_Exp*)_TD7;_TD8= es;_TD9= _TD8->tl;_TDA= 
_check_null(_TD9);_TDB= _TDA->hd;{struct Cyc_Absyn_Exp*e2=(struct Cyc_Absyn_Exp*)_TDB;_TDC= old_types;_TDD= _TDC->tl;_TDE= 
_check_null(_TDD);_TDF= _TDE->hd;_TE0= Cyc_Tcutil_is_fat_pointer_type(_TDF);if(!_TE0)goto _TL1A9;_TE1= e1;_TE2= 
Cyc_Toc_deep_copy(e1);_TE3= Cyc_Toc_curr_sp;({__typeof__(Cyc_Toc_aggrmember_exp_r(_TE2,_TE3))_T71B=Cyc_Toc_aggrmember_exp_r(_TE2,_TE3);_TE1->r= _T71B;});_TE4= e2;_TE5= 
Cyc_Toc_deep_copy(e2);_TE6= Cyc_Toc_curr_sp;({__typeof__(Cyc_Toc_aggrmember_exp_r(_TE5,_TE6))_T71B=Cyc_Toc_aggrmember_exp_r(_TE5,_TE6);_TE4->r= _T71B;});_TE7= e1;_TE8= e2;
({__typeof__(Cyc_Absyn_cstar_type(Cyc_Absyn_uchar_type,Cyc_Toc_mt_tq))_T71B=Cyc_Absyn_cstar_type(Cyc_Absyn_uchar_type,Cyc_Toc_mt_tq);_TE8->topt= _T71B;});_TE7->topt= _TE8->topt;_TE9= e;_TEA= 
Cyc_Toc_deep_copy(e);_TEB= nv;_TEC= _TEB->ctxt;_TED= elt_type;_TEE= Cyc_Toc_typ_to_c(_TEC,_TED);_TEF= Cyc_Absyn_sizeoftype_exp(_TEE,0U);_TF0= Cyc_Absyn_uint_type;_TF1= Cyc_Absyn_set_type(_TEF,_TF0);_TF2= Cyc_Absyn_divide_exp(_TEA,_TF1,0U);_TE9->r= _TF2->r;goto _TL1AA;
# 1846
_TL1A9: _TF3= e;{struct Cyc_Absyn_Exp*_T71B[3];_T71B[0]= e1;_TF5= nv;_TF6= _TF5->ctxt;_TF7= elt_type;_TF8= Cyc_Toc_typ_to_c(_TF6,_TF7);_TF9= Cyc_Absyn_sizeoftype_exp(_TF8,0U);_TFA= Cyc_Absyn_uint_type;({__typeof__(Cyc_Absyn_set_type(_TF9,_TFA))_T71C=Cyc_Absyn_set_type(_TF9,_TFA);_T71B[1]= _T71C;});_TFB= 
Cyc_Absyn_prim1_exp(2U,e2,0U);_TFC= Cyc_Absyn_sint_type;({__typeof__(Cyc_Absyn_set_type(_TFB,_TFC))_T71C=Cyc_Absyn_set_type(_TFB,_TFC);_T71B[2]= _T71C;});_TFD= Cyc_Toc__fat_ptr_plus_e;_TFE= _tag_fat(_T71B,sizeof(struct Cyc_Absyn_Exp*),3);_TF4= Cyc_Toc_fncall_exp_r(_TFD,_TFE);}
# 1846
_TF3->r= _TF4;_TL1AA:;}}goto _TL1A8;_TL1A7: _TL1A8: goto _LL62;}case Cyc_Absyn_Eq: goto _LL6E;case Cyc_Absyn_Neq: _LL6E: goto _LL70;case Cyc_Absyn_Gt: _LL70: goto _LL72;case Cyc_Absyn_Gte: _LL72: goto _LL74;case Cyc_Absyn_Lt: _LL74: goto _LL76;case Cyc_Absyn_Lte: _LL76: goto _LL78;case Cyc_Absyn_UGt: _LL78: goto _LL7A;case Cyc_Absyn_UGte: _LL7A: goto _LL7C;case Cyc_Absyn_ULt: _LL7C: goto _LL7E;case Cyc_Absyn_ULte: _LL7E: _TFF= 
# 1861
_check_null(es);_T100= _TFF->hd;{struct Cyc_Absyn_Exp*e1=(struct Cyc_Absyn_Exp*)_T100;_T101= es;_T102= _T101->tl;_T103= 
_check_null(_T102);_T104= _T103->hd;{struct Cyc_Absyn_Exp*e2=(struct Cyc_Absyn_Exp*)_T104;_T105= 
_check_null(old_types);{void*t1=_T105->hd;_T106= old_types;_T107= _T106->tl;_T108= 
_check_null(_T107);{void*t2=_T108->hd;
void*elt_type=Cyc_Absyn_void_type;_T109= t1;_T10A= & elt_type;_T10B= 
Cyc_Tcutil_is_fat_pointer_type_elt(_T109,_T10A);if(!_T10B)goto _TL1AB;_T10C= nv;_T10D= _T10C->ctxt;_T10E= elt_type;_T10F= 
Cyc_Toc_typ_to_c(_T10D,_T10E);_T110= Cyc_Toc_mt_tq;{void*t=Cyc_Absyn_cstar_type(_T10F,_T110);_T111= e1;_T112= t;_T113= 
Cyc_Toc_deep_copy(e1);_T114= Cyc_Toc_get_curr(_T113);({__typeof__(Cyc_Toc_cast_it_r(_T112,_T114))_T71B=Cyc_Toc_cast_it_r(_T112,_T114);_T111->r= _T71B;});_T115= e1;
_T115->topt= t;}goto _TL1AC;_TL1AB: _TL1AC: _T116= 
# 1871
Cyc_Tcutil_is_fat_pointer_type(t2);if(!_T116)goto _TL1AD;_T117= nv;_T118= _T117->ctxt;_T119= elt_type;_T11A= 
Cyc_Toc_typ_to_c(_T118,_T119);_T11B= Cyc_Toc_mt_tq;{void*t=Cyc_Absyn_cstar_type(_T11A,_T11B);_T11C= e2;_T11D= t;_T11E= 
Cyc_Toc_deep_copy(e2);_T11F= Cyc_Toc_get_curr(_T11E);({__typeof__(Cyc_Toc_cast_it_r(_T11D,_T11F))_T71B=Cyc_Toc_cast_it_r(_T11D,_T11F);_T11C->r= _T71B;});_T120= e2;
_T120->topt= t;}goto _TL1AE;_TL1AD: _TL1AE: goto _LL62;}}}}default: goto _LL62;}_LL62: goto _LL7;}}case 5:{struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*)_T706;_T71A= _T71B->f1;_T716= _T71B->f2;}{struct Cyc_Absyn_Exp*e2=_T71A;enum Cyc_Absyn_Incrementor incr=_T716;_T121= e2;_T122= _T121->topt;{
# 1882
void*e2_cyc_typ=_check_null(_T122);
# 1891
void*ignore_typ=Cyc_Absyn_void_type;
long ignore_bool=0;
int ignore_int=0;
struct _fat_ptr incr_str=_tag_fat("increment",sizeof(char),10U);_T123= incr;_T124= (int)_T123;
if(_T124==2)goto _TL1B1;else{goto _TL1B2;}_TL1B2: _T125= incr;_T126= (int)_T125;if(_T126==3)goto _TL1B1;else{goto _TL1AF;}
_TL1B1: incr_str= _tag_fat("decrement",sizeof(char),10U);goto _TL1B0;_TL1AF: _TL1B0: _T127= e2;_T128= & ignore_typ;_T129= & ignore_bool;_T12A= & ignore_typ;_T12B= 
Cyc_Tcutil_is_zero_ptr_deref(_T127,_T128,_T129,_T12A);if(!_T12B)goto _TL1B3;{struct Cyc_Warn_String_Warn_Warg_struct _T71B;_T71B.tag= 0;
({__typeof__(_tag_fat("in-place ",sizeof(char),10U))_T71C=_tag_fat("in-place ",sizeof(char),10U);_T71B.f1= _T71C;});_T12C= _T71B;}{struct Cyc_Warn_String_Warn_Warg_struct _T71B=_T12C;{struct Cyc_Warn_String_Warn_Warg_struct _T71C;_T71C.tag= 0;_T71C.f1= incr_str;_T12D= _T71C;}{struct Cyc_Warn_String_Warn_Warg_struct _T71C=_T12D;{struct Cyc_Warn_String_Warn_Warg_struct _T71D;_T71D.tag= 0;({__typeof__(_tag_fat(" is not supported when ",sizeof(char),24U))_T71E=_tag_fat(" is not supported when ",sizeof(char),24U);_T71D.f1= _T71E;});_T12E= _T71D;}{struct Cyc_Warn_String_Warn_Warg_struct _T71D=_T12E;{struct Cyc_Warn_String_Warn_Warg_struct _T71E;_T71E.tag= 0;
({__typeof__(_tag_fat("dereferencing a zero-terminated pointer",sizeof(char),40U))_T71F=_tag_fat("dereferencing a zero-terminated pointer",sizeof(char),40U);_T71E.f1= _T71F;});_T12F= _T71E;}{struct Cyc_Warn_String_Warn_Warg_struct _T71E=_T12F;void*_T71F[4];_T71F[0]= & _T71B;_T71F[1]= & _T71C;_T71F[2]= & _T71D;_T71F[3]= & _T71E;_T131= Cyc_Warn_impos_loc2;{
# 1898
int(*_T720)(unsigned,struct _fat_ptr)=(int(*)(unsigned,struct _fat_ptr))_T131;_T130= _T720;}_T132= e;_T133= _T132->loc;_T134= _tag_fat(_T71F,sizeof(void*),4);_T130(_T133,_T134);}}}}goto _TL1B4;_TL1B3: _TL1B4: _T135= nv;_T136= _T135->ctxt;_T137= e2;_T138= & ignore_int;_T139= & ignore_typ;_T13A= 
# 1900
Cyc_Toc_is_tagged_union_project(_T136,_T137,_T138,_T139,1);if(!_T13A)goto _TL1B5;{
struct Cyc_Absyn_Exp*one=Cyc_Absyn_signed_int_exp(1,0U);
enum Cyc_Absyn_Primop op;_T13B= one;
_T13B->topt= Cyc_Absyn_sint_type;_T13C= incr;_T13D= (int)_T13C;switch(_T13D){case Cyc_Absyn_PreInc:
# 1906
 op= 0U;goto _LL8B;case Cyc_Absyn_PreDec:
# 1909
 op= 2U;goto _LL8B;default:{struct Cyc_Warn_String_Warn_Warg_struct _T71B;_T71B.tag= 0;
# 1912
({__typeof__(_tag_fat("in-place post",sizeof(char),14U))_T71C=_tag_fat("in-place post",sizeof(char),14U);_T71B.f1= _T71C;});_T13E= _T71B;}{struct Cyc_Warn_String_Warn_Warg_struct _T71B=_T13E;{struct Cyc_Warn_String_Warn_Warg_struct _T71C;_T71C.tag= 0;_T71C.f1= incr_str;_T13F= _T71C;}{struct Cyc_Warn_String_Warn_Warg_struct _T71C=_T13F;{struct Cyc_Warn_String_Warn_Warg_struct _T71D;_T71D.tag= 0;
({__typeof__(_tag_fat(" is not supported on @tagged union members",sizeof(char),43U))_T71E=_tag_fat(" is not supported on @tagged union members",sizeof(char),43U);_T71D.f1= _T71E;});_T140= _T71D;}{struct Cyc_Warn_String_Warn_Warg_struct _T71D=_T140;void*_T71E[3];_T71E[0]= & _T71B;_T71E[1]= & _T71C;_T71E[2]= & _T71D;_T142= Cyc_Warn_impos_loc2;{
# 1912
int(*_T71F)(unsigned,struct _fat_ptr)=(int(*)(unsigned,struct _fat_ptr))_T142;_T141= _T71F;}_T143= e;_T144= _T143->loc;_T145= _tag_fat(_T71E,sizeof(void*),3);_T141(_T144,_T145);}}}}_LL8B: _T146= e;{struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct*_T71B=_cycalloc(sizeof(struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct));_T71B->tag= 4;
# 1915
_T71B->f1= e2;{struct Cyc_Absyn_PrimopOpt*_T71C=_cycalloc(sizeof(struct Cyc_Absyn_PrimopOpt));_T71C->v= op;_T148= (struct Cyc_Absyn_PrimopOpt*)_T71C;}_T71B->f2= _T148;_T71B->f3= one;_T147= (struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct*)_T71B;}_T146->r= (void*)_T147;
Cyc_Toc_exp_to_c(nv,e);
return;}_TL1B5:
# 1919
 Cyc_Toc_set_lhs(nv,1);
Cyc_Toc_exp_to_c(nv,e2);
Cyc_Toc_set_lhs(nv,0);{
# 1924
void*elt_typ=Cyc_Absyn_void_type;_T149= old_typ;_T14A= & elt_typ;_T14B= 
Cyc_Tcutil_is_fat_pointer_type_elt(_T149,_T14A);if(!_T14B)goto _TL1B8;{
int change=1;_T14D= incr;_T14E= (int)_T14D;
if(_T14E==1)goto _TL1BC;else{goto _TL1BD;}_TL1BD: _T14F= incr;_T150= (int)_T14F;if(_T150==3)goto _TL1BC;else{goto _TL1BA;}_TL1BC: _T14C= Cyc_Toc__fat_ptr_inplace_plus_post_e;goto _TL1BB;_TL1BA: _T14C= Cyc_Toc__fat_ptr_inplace_plus_e;_TL1BB: {struct Cyc_Absyn_Exp*fn_e=_T14C;_T151= incr;_T152= (int)_T151;
# 1929
if(_T152==2)goto _TL1C0;else{goto _TL1C1;}_TL1C1: _T153= incr;_T154= (int)_T153;if(_T154==3)goto _TL1C0;else{goto _TL1BE;}
_TL1C0: change= - 1;goto _TL1BF;_TL1BE: _TL1BF: _T155= e;{struct Cyc_Absyn_Exp*_T71B[3];
({__typeof__(Cyc_Toc_push_address_exp(e2))_T71C=Cyc_Toc_push_address_exp(e2);_T71B[0]= _T71C;});_T157= nv;_T158= _T157->ctxt;_T159= elt_typ;_T15A= Cyc_Toc_typ_to_c(_T158,_T159);_T15B= Cyc_Absyn_sizeoftype_exp(_T15A,0U);_T15C= Cyc_Absyn_uint_type;({__typeof__(Cyc_Absyn_set_type(_T15B,_T15C))_T71C=Cyc_Absyn_set_type(_T15B,_T15C);_T71B[1]= _T71C;});_T15D= 
Cyc_Absyn_signed_int_exp(change,0U);_T15E= Cyc_Absyn_sint_type;({__typeof__(Cyc_Absyn_set_type(_T15D,_T15E))_T71C=Cyc_Absyn_set_type(_T15D,_T15E);_T71B[2]= _T71C;});_T15F= fn_e;_T160= _tag_fat(_T71B,sizeof(struct Cyc_Absyn_Exp*),3);_T156= Cyc_Toc_fncall_exp_r(_T15F,_T160);}
# 1931
_T155->r= _T156;}}goto _TL1B9;
# 1933
_TL1B8: _T161= old_typ;_T162= & elt_typ;_T163= Cyc_Tcutil_is_zero_pointer_type_elt(_T161,_T162);if(!_T163)goto _TL1C2;
# 1939
did_inserted_checks= 1;_T164= incr;_T165= (int)_T164;
if(_T165==1)goto _TL1C4;_T166= nv;_T167= _T166->ctxt;{
struct _tuple1*x=Cyc_Toc_temp_var(_T167);_T168= nv;_T169= _T168->ctxt;_T16A= old_typ;{
void*et=Cyc_Toc_typ_to_c(_T169,_T16A);
void*t=Cyc_Absyn_cstar_type(et,Cyc_Toc_mt_tq);_T16B= 
Cyc_Absyn_var_exp(x,0U);_T16C= t;{struct Cyc_Absyn_Exp*xe=Cyc_Absyn_set_type(_T16B,_T16C);_T16D= 
Cyc_Absyn_deref_exp(xe,0U);_T16E= et;{struct Cyc_Absyn_Exp*deref_x=Cyc_Absyn_set_type(_T16D,_T16E);
struct Cyc_Absyn_Exp*xexp=Cyc_Toc_push_address_exp(e2);_T16F= 
Cyc_Absyn_deref_exp(deref_x,0U);_T170= Cyc_Absyn_sint_type;{struct Cyc_Absyn_Exp*test_left=Cyc_Absyn_set_type(_T16F,_T170);_T171= test_left;_T172= 
Cyc_Absyn_int_exp(2U,0,0U);_T173= Cyc_Absyn_sint_type;_T174= Cyc_Absyn_set_type(_T172,_T173);{struct Cyc_Absyn_Exp*testexp=Cyc_Absyn_neq_exp(_T171,_T174,0U);_T175= 
Cyc_Toc_do_null_check(e);if(!_T175)goto _TL1C6;_T176= 
# 1951
Cyc_Toc_deep_copy(deref_x);_T177= Cyc_Absyn_int_exp(2U,0,0U);_T178= Cyc_Absyn_sint_type;_T179= Cyc_Absyn_set_type(_T177,_T178);_T17A= Cyc_Absyn_neq_exp(_T176,_T179,0U);_T17B= testexp;
# 1950
testexp= 
Cyc_Absyn_and_exp(_T17A,_T17B,0U);goto _TL1C7;_TL1C6: _TL1C7: _T17C= testexp;_T17D= 
# 1954
Cyc_Toc_deep_copy(deref_x);_T17E= Cyc_Absyn_increment_exp(_T17D,0U,0U);_T17F= Cyc_Absyn_exp_stmt(_T17E,0U);_T180= Cyc_Toc__throw_arraybounds_e;_T181= _tag_fat(0U,sizeof(struct Cyc_Absyn_Exp*),0);_T182= 
Cyc_Toc_fncall_exp_dl(_T180,_T181);_T183= nv;_T184= _T183->ctxt;_T185= Cyc_Toc_void_star_type(_T184);_T186= Cyc_Absyn_set_type(_T182,_T185);_T187= Cyc_Absyn_exp_stmt(_T186,0U);{
# 1953
struct Cyc_Absyn_Stmt*s=Cyc_Absyn_ifthenelse_stmt(_T17C,_T17F,_T187,0U);_T188= s;_T189= 
# 1956
Cyc_Toc_deep_copy(deref_x);_T18A= Cyc_Absyn_exp_stmt(_T189,0U);s= Cyc_Absyn_seq_stmt(_T188,_T18A,0U);_T18B= e;_T18C= 
Cyc_Absyn_declare_stmt(x,t,xexp,s,0U);_T18D= Cyc_Absyn_stmt_exp(_T18C,0U);_T18B->r= _T18D->r;}}}}}}}goto _TL1C5;
# 1960
_TL1C4: _T18E= Cyc_Toc_isCharStar(e2);if(!_T18E)goto _TL1C8;_T18F= e;{struct Cyc_Absyn_Exp*_T71B[2];
({__typeof__(Cyc_Toc_push_address_exp(e2))_T71C=Cyc_Toc_push_address_exp(e2);_T71B[0]= _T71C;});_T191= 
Cyc_Absyn_signed_int_exp(1,0U);_T192= Cyc_Absyn_sint_type;({__typeof__(Cyc_Absyn_set_type(_T191,_T192))_T71C=Cyc_Absyn_set_type(_T191,_T192);_T71B[1]= _T71C;});_T193= Cyc_Toc__zero_arr_inplace_plus_post_char_e;_T194= _tag_fat(_T71B,sizeof(struct Cyc_Absyn_Exp*),2);_T190= Cyc_Toc_fncall_exp_r(_T193,_T194);}
# 1961
_T18F->r= _T190;goto _TL1C9;
# 1964
_TL1C8: _T195= e;_T196= nv;_T197= _T196->ctxt;_T198= e2_cyc_typ;_T199= 
Cyc_Toc_typ_to_c(_T197,_T198);{struct Cyc_Absyn_Exp*_T71B[3];_T19B= nv;_T19C= _T19B->ctxt;_T19D= e2_cyc_typ;_T19E= 
# 1967
Cyc_Toc_typ_to_c(_T19C,_T19D);_T19F= Cyc_Tcutil_pointer_elt_type(_T19E);_T1A0= Cyc_Absyn_sizeoftype_exp(_T19F,0U);_T1A1= Cyc_Absyn_uint_type;({__typeof__(Cyc_Absyn_set_type(_T1A0,_T1A1))_T71C=Cyc_Absyn_set_type(_T1A0,_T1A1);_T71B[0]= _T71C;});
({__typeof__(Cyc_Toc_push_address_exp(e2))_T71C=Cyc_Toc_push_address_exp(e2);_T71B[1]= _T71C;});_T1A2= Cyc_Absyn_signed_int_exp(1,0U);_T1A3= Cyc_Absyn_sint_type;({__typeof__(Cyc_Absyn_set_type(_T1A2,_T1A3))_T71C=Cyc_Absyn_set_type(_T1A2,_T1A3);_T71B[2]= _T71C;});_T1A4= Cyc_Toc__zero_arr_inplace_plus_post_other_e;_T1A5= _tag_fat(_T71B,sizeof(struct Cyc_Absyn_Exp*),3);_T19A= Cyc_Toc_fncall_exp_dl(_T1A4,_T1A5);}
# 1964
({__typeof__(Cyc_Toc_cast_it_r(_T199,_T19A))_T71B=Cyc_Toc_cast_it_r(_T199,_T19A);_T195->r= _T71B;});_TL1C9: _TL1C5: goto _TL1C3;
# 1970
_TL1C2: if(elt_typ!=Cyc_Absyn_void_type)goto _TL1CA;_T1A6= Cyc_Absyn_is_lvalue(e2);if(_T1A6)goto _TL1CA;else{goto _TL1CC;}
_TL1CC:{void(*_T71B)(struct Cyc_Absyn_Exp*,struct Cyc_List_List*,struct Cyc_Absyn_Exp*(*)(struct Cyc_Absyn_Exp*,enum Cyc_Absyn_Incrementor*),enum Cyc_Absyn_Incrementor*)=(void(*)(struct Cyc_Absyn_Exp*,struct Cyc_List_List*,struct Cyc_Absyn_Exp*(*)(struct Cyc_Absyn_Exp*,enum Cyc_Absyn_Incrementor*),enum Cyc_Absyn_Incrementor*))Cyc_Toc_lvalue_assign;_T1A7= _T71B;}_T1A8= e2;{enum Cyc_Absyn_Incrementor*_T71B=_cycalloc_atomic(sizeof(enum Cyc_Absyn_Incrementor));*_T71B= incr;_T1A9= (enum Cyc_Absyn_Incrementor*)_T71B;}_T1A7(_T1A8,0,Cyc_Toc_incr_lvalue,_T1A9);_T1AA= e;_T1AB= e2;
*_T1AA= *_T1AB;goto _TL1CB;_TL1CA: _TL1CB: _TL1C3: _TL1B9: goto _LL7;}}}case 4:{struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct*)_T706;_T71A= _T71B->f1;_T715= _T71B->f2;_T714= _T71B->f3;}{struct Cyc_Absyn_Exp*e1=_T71A;struct Cyc_Absyn_PrimopOpt*popt=_T715;struct Cyc_Absyn_Exp*e2=_T714;_T1AC= e1;_T1AD= _T1AC->topt;{
# 1993
void*e1_old_typ=_check_null(_T1AD);_T1AE= e2;_T1AF= _T1AE->topt;{
void*e2_old_typ=_check_null(_T1AF);
int f_tag=0;
void*tagged_member_struct_type=Cyc_Absyn_void_type;_T1B0= nv;_T1B1= _T1B0->ctxt;_T1B2= e1;_T1B3= & f_tag;_T1B4= & tagged_member_struct_type;_T1B5= 
Cyc_Toc_is_tagged_union_project(_T1B1,_T1B2,_T1B3,_T1B4,1);if(!_T1B5)goto _TL1CD;
Cyc_Toc_set_lhs(nv,1);
Cyc_Toc_exp_to_c(nv,e1);
Cyc_Toc_set_lhs(nv,0);
Cyc_Toc_exp_to_c(nv,e2);_T1B6= e;_T1B7= nv;_T1B8= _T1B7->ctxt;_T1B9= e1;_T1BA= e1_old_typ;_T1BB= popt;_T1BC= e2;_T1BD= e2_old_typ;_T1BE= f_tag;_T1BF= tagged_member_struct_type;
({__typeof__(Cyc_Toc_tagged_union_assignop(_T1B8,_T1B9,_T1BA,_T1BB,_T1BC,_T1BD,_T1BE,_T1BF))_T71B=Cyc_Toc_tagged_union_assignop(_T1B8,_T1B9,_T1BA,_T1BB,_T1BC,_T1BD,_T1BE,_T1BF);_T1B6->r= _T71B;});goto _LL7;_TL1CD: {
# 2006
void*ptr_type=Cyc_Absyn_void_type;
void*elt_type=Cyc_Absyn_void_type;
long is_fat=0;_T1C0= e1;_T1C1= & ptr_type;_T1C2= & is_fat;_T1C3= & elt_type;_T1C4= 
Cyc_Tcutil_is_zero_ptr_deref(_T1C0,_T1C1,_T1C2,_T1C3);if(!_T1C4)goto _TL1CF;
Cyc_Toc_zero_ptr_assign_to_c(nv,e,e1,popt,e2,ptr_type,is_fat,elt_type);
return;_TL1CF: {
# 2016
long e1_poly=Cyc_Toc_is_poly_project(e1);
Cyc_Toc_set_lhs(nv,1);
Cyc_Toc_exp_to_c(nv,e1);
Cyc_Toc_set_lhs(nv,0);
Cyc_Toc_exp_to_c(nv,e2);{
# 2022
long done=0;
if(popt==0)goto _TL1D1;{
void*elt_typ=Cyc_Absyn_void_type;_T1C5= old_typ;_T1C6= & elt_typ;_T1C7= 
Cyc_Tcutil_is_fat_pointer_type_elt(_T1C5,_T1C6);if(!_T1C7)goto _TL1D3;{
struct Cyc_Absyn_Exp*change;_T1C8= popt;{
enum Cyc_Absyn_Primop _T71B=_T1C8->v;_T1C9= (int)_T71B;switch(_T1C9){case Cyc_Absyn_Plus:
# 2029
 change= e2;goto _LL92;case Cyc_Absyn_Minus: _T1CA= 
# 2032
Cyc_Absyn_prim1_exp(2U,e2,0U);_T1CB= Cyc_Absyn_sint_type;change= Cyc_Absyn_set_type(_T1CA,_T1CB);goto _LL92;default:{struct Cyc_Warn_String_Warn_Warg_struct _T71C;_T71C.tag= 0;
# 2035
({__typeof__(_tag_fat("bad t ? pointer arithmetic",sizeof(char),27U))_T71D=_tag_fat("bad t ? pointer arithmetic",sizeof(char),27U);_T71C.f1= _T71D;});_T1CC= _T71C;}{struct Cyc_Warn_String_Warn_Warg_struct _T71C=_T1CC;void*_T71D[1];_T71D[0]= & _T71C;{int(*_T71E)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T1CD= _T71E;}_T1CE= _tag_fat(_T71D,sizeof(void*),1);_T1CD(_T1CE);}}_LL92:;}
# 2037
done= 1;{
# 2039
struct Cyc_Absyn_Exp*fn_e=Cyc_Toc__fat_ptr_inplace_plus_e;_T1CF= e;{struct Cyc_Absyn_Exp*_T71B[3];
({__typeof__(Cyc_Toc_push_address_exp(e1))_T71C=Cyc_Toc_push_address_exp(e1);_T71B[0]= _T71C;});_T1D1= nv;_T1D2= _T1D1->ctxt;_T1D3= elt_typ;_T1D4= Cyc_Toc_typ_to_c(_T1D2,_T1D3);_T1D5= Cyc_Absyn_sizeoftype_exp(_T1D4,0U);_T1D6= Cyc_Absyn_uint_type;({__typeof__(Cyc_Absyn_set_type(_T1D5,_T1D6))_T71C=Cyc_Absyn_set_type(_T1D5,_T1D6);_T71B[1]= _T71C;});
_T71B[2]= change;_T1D7= fn_e;_T1D8= _tag_fat(_T71B,sizeof(struct Cyc_Absyn_Exp*),3);_T1D0= Cyc_Toc_fncall_exp_r(_T1D7,_T1D8);}
# 2040
_T1CF->r= _T1D0;}}goto _TL1D4;
# 2042
_TL1D3: _T1D9= old_typ;_T1DA= & elt_typ;_T1DB= Cyc_Tcutil_is_zero_pointer_type_elt(_T1D9,_T1DA);if(!_T1DB)goto _TL1D6;_T1DC= popt;{
# 2045
enum Cyc_Absyn_Primop _T71B=_T1DC->v;if(_T71B!=Cyc_Absyn_Plus)goto _TL1D8;
# 2047
done= 1;_T1DD= 
Cyc_Toc_isCharStar(e1);if(!_T1DD)goto _TL1DA;_T1DE= e;{struct Cyc_Absyn_Exp*_T71C[2];
_T71C[0]= e1;_T71C[1]= e2;_T1E0= Cyc_Toc__zero_arr_inplace_plus_char_e;_T1E1= _tag_fat(_T71C,sizeof(struct Cyc_Absyn_Exp*),2);_T1DF= Cyc_Toc_fncall_exp_r(_T1E0,_T1E1);}_T1DE->r= _T1DF;goto _TL1DB;
# 2051
_TL1DA: _T1E2= e;_T1E3= nv;_T1E4= _T1E3->ctxt;_T1E5= e1_old_typ;_T1E6= 
Cyc_Toc_typ_to_c(_T1E4,_T1E5);{struct Cyc_Absyn_Exp*_T71C[3];_T1E8= nv;_T1E9= _T1E8->ctxt;_T1EA= e1_old_typ;_T1EB= 
# 2054
Cyc_Toc_typ_to_c(_T1E9,_T1EA);_T1EC= Cyc_Tcutil_pointer_elt_type(_T1EB);_T1ED= Cyc_Absyn_sizeoftype_exp(_T1EC,0U);_T1EE= Cyc_Absyn_uint_type;({__typeof__(Cyc_Absyn_set_type(_T1ED,_T1EE))_T71D=Cyc_Absyn_set_type(_T1ED,_T1EE);_T71C[0]= _T71D;});_T71C[1]= e1;
_T71C[2]= e2;_T1EF= Cyc_Toc__zero_arr_inplace_plus_other_e;_T1F0= _tag_fat(_T71C,sizeof(struct Cyc_Absyn_Exp*),3);_T1E7= Cyc_Toc_fncall_exp_dl(_T1EF,_T1F0);}
# 2051
({__typeof__(Cyc_Toc_cast_it_r(_T1E6,_T1E7))_T71C=Cyc_Toc_cast_it_r(_T1E6,_T1E7);_T1E2->r= _T71C;});_TL1DB: goto _LL99;_TL1D8:{struct Cyc_Warn_String_Warn_Warg_struct _T71C;_T71C.tag= 0;
# 2058
({__typeof__(_tag_fat("bad zero-terminated pointer arithmetic",sizeof(char),39U))_T71D=_tag_fat("bad zero-terminated pointer arithmetic",sizeof(char),39U);_T71C.f1= _T71D;});_T1F1= _T71C;}{struct Cyc_Warn_String_Warn_Warg_struct _T71C=_T1F1;void*_T71D[1];_T71D[0]= & _T71C;{int(*_T71E)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T1F2= _T71E;}_T1F3= _tag_fat(_T71D,sizeof(void*),1);_T1F2(_T1F3);}_LL99:;}goto _TL1D7;_TL1D6: _TL1D7: _TL1D4:;}goto _TL1D2;_TL1D1: _TL1D2: _T1F4= done;
# 2061
if(_T1F4)goto _TL1DC;else{goto _TL1DE;}
# 2063
_TL1DE: _T1F5= e1_poly;if(!_T1F5)goto _TL1DF;_T1F6= e2;_T1F7= nv;_T1F8= _T1F7->ctxt;_T1F9= 
Cyc_Toc_void_star_type(_T1F8);_T1FA= Cyc_Toc_deep_copy(e2);({__typeof__(Cyc_Toc_cast_it_r(_T1F9,_T1FA))_T71B=Cyc_Toc_cast_it_r(_T1F9,_T1FA);_T1F6->r= _T71B;});_T1FB= e2;_T1FC= nv;_T1FD= _T1FC->ctxt;
({__typeof__(Cyc_Toc_void_star_type(_T1FD))_T71B=Cyc_Toc_void_star_type(_T1FD);_T1FB->topt= _T71B;});goto _TL1E0;_TL1DF: _TL1E0: _T1FE= 
# 2071
Cyc_Absyn_is_lvalue(e1);if(_T1FE)goto _TL1E1;else{goto _TL1E3;}
_TL1E3:{void(*_T71B)(struct Cyc_Absyn_Exp*,struct Cyc_List_List*,struct Cyc_Absyn_Exp*(*)(struct Cyc_Absyn_Exp*,struct _tuple38*),struct _tuple38*)=(void(*)(struct Cyc_Absyn_Exp*,struct Cyc_List_List*,struct Cyc_Absyn_Exp*(*)(struct Cyc_Absyn_Exp*,struct _tuple38*),struct _tuple38*))Cyc_Toc_lvalue_assign;_T1FF= _T71B;}_T200= e1;{struct _tuple38*_T71B=_cycalloc(sizeof(struct _tuple38));_T71B->f0= popt;_T71B->f1= e2;_T201= (struct _tuple38*)_T71B;}_T1FF(_T200,0,Cyc_Toc_assignop_lvalue,_T201);_T202= e;_T203= e1;
*_T202= *_T203;goto _TL1E2;_TL1E1: _TL1E2: goto _TL1DD;_TL1DC: _TL1DD: goto _LL7;}}}}}}case 6:{struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct*)_T706;_T71A= _T71B->f1;_T715= _T71B->f2;_T714= _T71B->f3;}{struct Cyc_Absyn_Exp*e1=_T71A;struct Cyc_Absyn_Exp*e2=_T715;struct Cyc_Absyn_Exp*e3=_T714;
# 2078
Cyc_Toc_exp_to_c(nv,e1);
Cyc_Toc_exp_to_c(nv,e2);
Cyc_Toc_exp_to_c(nv,e3);goto _LL7;}case 7:{struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*)_T706;_T71A= _T71B->f1;_T715= _T71B->f2;}{struct Cyc_Absyn_Exp*e1=_T71A;struct Cyc_Absyn_Exp*e2=_T715;_T71A= e1;_T715= e2;goto _LL21;}case 8:{struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*)_T706;_T71A= _T71B->f1;_T715= _T71B->f2;}_LL21: {struct Cyc_Absyn_Exp*e1=_T71A;struct Cyc_Absyn_Exp*e2=_T715;_T71A= e1;_T715= e2;goto _LL23;}case 9:{struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct*)_T706;_T71A= _T71B->f1;_T715= _T71B->f2;}_LL23: {struct Cyc_Absyn_Exp*e1=_T71A;struct Cyc_Absyn_Exp*e2=_T715;
# 2087
Cyc_Toc_exp_to_c(nv,e1);
Cyc_Toc_exp_to_c(nv,e2);goto _LL7;}case 10: _T204= (struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*)_T706;_T205= _T204->f3;if(_T205!=0)goto _TL1E4;{struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*)_T706;_T71A= _T71B->f1;_T715= _T71B->f2;}{struct Cyc_Absyn_Exp*e1=_T71A;struct Cyc_List_List*es=_T715;_T206= e1;_T207= _T206->topt;{
# 2091
void*e1_typ=_check_null(_T207);
Cyc_Toc_exp_to_c(nv,e1);
did_inserted_checks= 1;_T208= 
Cyc_Toc_do_null_check(e);if(!_T208)goto _TL1E6;_T209= e1;{struct Cyc_Absyn_Exp*_T71B[1];({__typeof__(
Cyc_Toc_deep_copy(e1))_T71C=Cyc_Toc_deep_copy(e1);_T71B[0]= _T71C;});_T20B= Cyc_Toc__check_null_e;_T20C= _tag_fat(_T71B,sizeof(struct Cyc_Absyn_Exp*),1);_T20A= Cyc_Toc_fncall_exp_dl(_T20B,_T20C);}_T209->r= _T20A->r;goto _TL1E7;_TL1E6: _TL1E7: _T20E= Cyc_List_iter_c;{
void(*_T71B)(void(*)(struct Cyc_Toc_Env*,struct Cyc_Absyn_Exp*),struct Cyc_Toc_Env*,struct Cyc_List_List*)=(void(*)(void(*)(struct Cyc_Toc_Env*,struct Cyc_Absyn_Exp*),struct Cyc_Toc_Env*,struct Cyc_List_List*))_T20E;_T20D= _T71B;}_T20F= nv;_T210= es;_T20D(Cyc_Toc_exp_to_c,_T20F,_T210);goto _LL7;}}_TL1E4:{struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*)_T706;_T71A= _T71B->f1;_T715= _T71B->f2;_T211= _T71B->f3;{struct Cyc_Absyn_VarargCallInfo _T71C=*_T211;_T719= _T71C.num_varargs;_T713= _T71C.injectors;_T712= _T71C.vai;}}{struct Cyc_Absyn_Exp*e1=_T71A;struct Cyc_List_List*es=_T715;int num_varargs=_T719;struct Cyc_List_List*injectors=_T713;struct Cyc_Absyn_VarargInfo*vai=_T712;struct _RegionHandle _T71B=_new_region(0U,"r");struct _RegionHandle*r=& _T71B;_push_region(r);_T212= nv;_T213= _T212->ctxt;{
# 2109
struct _tuple35 _T71C=Cyc_Toc_temp_var_and_exp(_T213);struct Cyc_Absyn_Exp*_T71D;struct _tuple1*_T71E;_T71E= _T71C.f0;_T71D= _T71C.f1;{struct _tuple1*argv=_T71E;struct Cyc_Absyn_Exp*argvexp=_T71D;_T214= 
Cyc_Absyn_signed_int_exp(num_varargs,0U);_T215= Cyc_Absyn_sint_type;{struct Cyc_Absyn_Exp*num_varargs_exp=Cyc_Absyn_set_type(_T214,_T215);_T216= nv;_T217= _T216->ctxt;_T218= vai;_T219= _T218->type;{
void*cva_type=Cyc_Toc_typ_to_c(_T217,_T219);
void*arr_type=Cyc_Absyn_array_type(cva_type,Cyc_Toc_mt_tq,num_varargs_exp,Cyc_Absyn_false_type,0U);
# 2114
int num_args=Cyc_List_length(es);
int num_normargs=num_args - num_varargs;
# 2118
struct Cyc_List_List*new_args=0;{
int i=0;_TL1EB: if(i < num_normargs)goto _TL1E9;else{goto _TL1EA;}
_TL1E9: _T21A= nv;_T21B= _check_null(es);_T21C= _T21B->hd;_T21D= (struct Cyc_Absyn_Exp*)_T21C;Cyc_Toc_exp_to_c(_T21A,_T21D);{struct Cyc_List_List*_T71F=_cycalloc(sizeof(struct Cyc_List_List));_T21F= es;_T220= _T21F->hd;
_T71F->hd= (struct Cyc_Absyn_Exp*)_T220;_T71F->tl= new_args;_T21E= (struct Cyc_List_List*)_T71F;}new_args= _T21E;
# 2119
i= i + 1;_T221= es;es= _T221->tl;goto _TL1EB;_TL1EA:;}{struct Cyc_List_List*_T71F=_cycalloc(sizeof(struct Cyc_List_List));{struct Cyc_Absyn_Exp*_T720[3];
# 2126
if(num_varargs!=0)goto _TL1EC;_T224= Cyc_Absyn_uint_exp(0U,0U);goto _TL1ED;_TL1EC: _T224= argvexp;_TL1ED: _T225= Cyc_Absyn_uint_type;({__typeof__(Cyc_Absyn_set_type(_T224,_T225))_T721=Cyc_Absyn_set_type(_T224,_T225);_T720[0]= _T721;});_T226= 
Cyc_Absyn_sizeoftype_exp(cva_type,0U);_T227= Cyc_Absyn_uint_type;_T228= Cyc_Absyn_set_type(_T226,_T227);_T229= Cyc_Absyn_uint_type;({__typeof__(Cyc_Absyn_set_type(_T228,_T229))_T721=Cyc_Absyn_set_type(_T228,_T229);_T720[1]= _T721;});_T720[2]= num_varargs_exp;_T22A= Cyc_Toc__tag_fat_e;_T22B= _tag_fat(_T720,sizeof(struct Cyc_Absyn_Exp*),3);_T223= Cyc_Toc_fncall_exp_dl(_T22A,_T22B);}_T22C= nv;_T22D= _T22C->ctxt;_T22E= 
Cyc_Toc_fat_ptr_type(_T22D);
# 2124
({__typeof__(Cyc_Absyn_set_type(_T223,_T22E))_T720=Cyc_Absyn_set_type(_T223,_T22E);_T71F->hd= _T720;});
# 2129
_T71F->tl= new_args;_T222= (struct Cyc_List_List*)_T71F;}
# 2123
new_args= _T222;
# 2130
new_args= Cyc_List_imp_rev(new_args);_T22F= e1;_T230= _T22F->topt;{
# 2132
void*e1_typ=_check_null(_T230);
Cyc_Toc_exp_to_c(nv,e1);
did_inserted_checks= 1;_T231= 
Cyc_Toc_do_null_check(e);if(!_T231)goto _TL1EE;_T232= e1;{struct Cyc_Absyn_Exp*_T71F[1];({__typeof__(
Cyc_Toc_deep_copy(e1))_T720=Cyc_Toc_deep_copy(e1);_T71F[0]= _T720;});_T234= Cyc_Toc__check_null_e;_T235= _tag_fat(_T71F,sizeof(struct Cyc_Absyn_Exp*),1);_T233= Cyc_Toc_fncall_exp_dl(_T234,_T235);}_T232->r= _T233->r;goto _TL1EF;_TL1EE: _TL1EF:
 if(num_varargs!=0)goto _TL1F0;_T236= e;_T237= 
Cyc_Absyn_fncall_exp(e1,new_args,0U);_T236->r= _T237->r;_npop_handler(0);goto _LL7;_TL1F0: _T238= 
# 2141
Cyc_Absyn_fncall_exp(e1,new_args,0U);_T239= nv;_T23A= _T239->ctxt;_T23B= e;_T23C= _T23B->topt;_T23D= _check_null(_T23C);_T23E= Cyc_Toc_typ_to_c(_T23A,_T23D);_T23F= Cyc_Absyn_set_type(_T238,_T23E);{struct Cyc_Absyn_Stmt*s=Cyc_Absyn_exp_stmt(_T23F,0U);_T240= vai;_T241= _T240->inject;
# 2144
if(!_T241)goto _TL1F2;{
struct Cyc_Absyn_Datatypedecl*tud;_T242= vai;_T243= _T242->type;_T244= 
Cyc_Tcutil_pointer_elt_type(_T243);{void*_T71F=Cyc_Absyn_compress(_T244);struct Cyc_Absyn_Datatypedecl*_T720;_T245= (int*)_T71F;_T246= *_T245;if(_T246!=0)goto _TL1F4;_T247= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T71F;_T248= _T247->f1;_T249= (int*)_T248;_T24A= *_T249;if(_T24A!=22)goto _TL1F6;_T24B= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T71F;_T24C= _T24B->f1;_T24D= (struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*)_T24C;_T24E= _T24D->f1;_T24F= _T24E.KnownDatatype;_T250= _T24F.tag;if(_T250!=2)goto _TL1F8;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T721=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T71F;_T251= _T721->f1;{struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*_T722=(struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*)_T251;_T252= _T722->f1;_T253= _T252.KnownDatatype;_T254= _T253.val;{struct Cyc_Absyn_Datatypedecl*_T723=*_T254;_T720= _T723;}}}{struct Cyc_Absyn_Datatypedecl*x=_T720;
# 2148
tud= x;goto _LLA1;}_TL1F8: goto _LLA4;_TL1F6: goto _LLA4;_TL1F4: _LLA4:{struct Cyc_Warn_String_Warn_Warg_struct _T721;_T721.tag= 0;
# 2151
({__typeof__(_tag_fat("unknown datatype in vararg with inject",sizeof(char),39U))_T722=_tag_fat("unknown datatype in vararg with inject",sizeof(char),39U);_T721.f1= _T722;});_T255= _T721;}{struct Cyc_Warn_String_Warn_Warg_struct _T721=_T255;void*_T722[1];_T722[0]= & _T721;{int(*_T723)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T256= _T723;}_T257= _tag_fat(_T722,sizeof(void*),1);_T256(_T257);}_LLA1:;}_T259= num_varargs;{unsigned _T71F=(unsigned)_T259;_T25B= r;_T25C= _check_times(_T71F,sizeof(struct _tuple39));{struct _tuple39*_T720=_region_malloc(_T25B,0U,_T25C);{unsigned _T721=_T71F;unsigned i;i= 0;_TL1FD: if(i < _T721)goto _TL1FB;else{goto _TL1FC;}_TL1FB: _T25D= i;_T25E= nv;_T25F= _T25E->ctxt;
# 2154
({__typeof__(Cyc_Toc_temp_var(_T25F))_T722=Cyc_Toc_temp_var(_T25F);_T720[_T25D].f0= _T722;});_T260= i;_T720[_T260].f1= 0;i= i + 1;goto _TL1FD;_TL1FC:;}_T25A= (struct _tuple39*)_T720;}_T258= 
# 2153
_tag_fat(_T25A,sizeof(struct _tuple39),_T71F);}{struct _fat_ptr vs=_T258;
# 2157
struct Cyc_List_List*is2=Cyc_List_rev(injectors);_T261= 
Cyc_List_length(es);{int i=_T261 - 1;{
struct Cyc_List_List*es2=es;_TL201: if(es2!=0)goto _TL1FF;else{goto _TL200;}
_TL1FF: _T262= es2;_T263= _T262->hd;{struct Cyc_Absyn_Exp*arg=(struct Cyc_Absyn_Exp*)_T263;_T264= arg;_T265= _T264->topt;{
void*arg_type=_check_null(_T265);_T266= vs;_T267= i;_T268= _check_fat_subscript(_T266,sizeof(struct _tuple39),_T267);_T269= (struct _tuple39*)_T268;_T26A= *_T269;{
struct _tuple1*var=_T26A.f0;_T26B= 
_check_null(is2);_T26C= _T26B->hd;{struct Cyc_Absyn_Datatypefield*_T71F=(struct Cyc_Absyn_Datatypefield*)_T26C;struct Cyc_List_List*_T720;struct _tuple1*_T721;{struct Cyc_Absyn_Datatypefield _T722=*_T71F;_T721= _T722.name;_T720= _T722.typs;}{struct _tuple1*qv=_T721;struct Cyc_List_List*tqts=_T720;_T26D= nv;_T26E= _T26D->ctxt;_T26F= qv;_T270= tud;_T271= _T270->name;{
struct _tuple1*tdn=Cyc_Toc_collapse_qvars(_T26E,_T26F,_T271);
struct Cyc_Absyn_AppType_Absyn_Type_struct*t;t= _cycalloc(sizeof(struct Cyc_Absyn_AppType_Absyn_Type_struct));_T272= t;_T272->tag= 0;_T273= t;{struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_T722=_cycalloc(sizeof(struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct));_T722->tag= 24;({__typeof__(Cyc_Absyn_UnknownAggr(0U,tdn,0))_T723=Cyc_Absyn_UnknownAggr(0U,tdn,0);_T722->f1= _T723;});_T274= (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*)_T722;}_T273->f1= (void*)_T274;_T275= t;_T275->f2= 0;_T276= vs;_T277= _T276.curr;_T278= (struct _tuple39*)_T277;_T279= i;_T27A= t;
# 2167
_T278[_T279].f1= (void*)_T27A;}}}}}}_T27B= es2;
# 2159
es2= _T27B->tl;_T27C= is2;is2= _T27C->tl;i= i + -1;goto _TL201;_TL200:;}{
# 2172
struct Cyc_List_List*array_args=0;{
int i=num_varargs - 1;_TL205: if(i >= 0)goto _TL203;else{goto _TL204;}
_TL203: _T27D= vs;_T27E= _T27D.curr;_T27F= (struct _tuple39*)_T27E;_T280= i;{struct _tuple39 _T71F=_T27F[_T280];void*_T720;struct _tuple1*_T721;_T721= _T71F.f0;_T720= _T71F.f1;{struct _tuple1*v=_T721;void*t=_T720;_T281= 
Cyc_Absyn_var_exp(v,0U);_T282= _check_null(t);{struct Cyc_Absyn_Exp*e1=Cyc_Absyn_set_type(_T281,_T282);_T283= 
Cyc_Absyn_address_exp(e1,0U);_T284= Cyc_Absyn_cstar_type(t,Cyc_Toc_mt_tq);{struct Cyc_Absyn_Exp*e2=Cyc_Absyn_set_type(_T283,_T284);{struct Cyc_List_List*_T722=_cycalloc(sizeof(struct Cyc_List_List));
_T722->hd= e2;_T722->tl= array_args;_T285= (struct Cyc_List_List*)_T722;}array_args= _T285;}}}}
# 2173
i= i + -1;goto _TL205;_TL204:;}_T286= argv;_T287= arr_type;_T288= 
# 2179
Cyc_Absyn_array_exp(array_args,0U);_T289= arr_type;_T28A= Cyc_Absyn_set_type(_T288,_T289);_T28B= s;s= Cyc_Absyn_declare_stmt(_T286,_T287,_T28A,_T28B,0U);
# 2181
es= Cyc_List_imp_rev(es);
injectors= Cyc_List_imp_rev(injectors);_T28C= 
Cyc_List_length(es);{int i=_T28C - 1;
_TL209: if(es!=0)goto _TL207;else{goto _TL208;}
_TL207: _T28D= es;_T28E= _T28D->hd;{struct Cyc_Absyn_Exp*arg=(struct Cyc_Absyn_Exp*)_T28E;_T28F= arg;_T290= _T28F->topt;{
void*arg_type=_check_null(_T290);_T291= vs;_T292= i;_T293= _check_fat_subscript(_T291,sizeof(struct _tuple39),_T292);_T294= (struct _tuple39*)_T293;_T295= *_T294;{
struct _tuple1*var=_T295.f0;_T296= vs;_T297= _T296.curr;_T298= (struct _tuple39*)_T297;_T299= i;_T29A= _T298[_T299];_T29B= _T29A.f1;{
void*field_typ=_check_null(_T29B);_T29C= 
_check_null(injectors);_T29D= _T29C->hd;{struct Cyc_Absyn_Datatypefield*_T71F=(struct Cyc_Absyn_Datatypefield*)_T29D;struct Cyc_List_List*_T720;struct _tuple1*_T721;{struct Cyc_Absyn_Datatypefield _T722=*_T71F;_T721= _T722.name;_T720= _T722.typs;}{struct _tuple1*qv=_T721;struct Cyc_List_List*tqts=_T720;
Cyc_Toc_exp_to_c(nv,arg);_T29E= 
Cyc_Toc_is_void_star_or_boxed_tvar(field_typ);if(!_T29E)goto _TL20A;
arg= Cyc_Toc_cast_it(field_typ,arg);goto _TL20B;_TL20A: _TL20B: _T29F= nv;_T2A0= _T29F->ctxt;_T2A1= qv;_T2A2= tud;_T2A3= _T2A2->name;{
# 2194
struct _tuple1*tdn=Cyc_Toc_collapse_qvars(_T2A0,_T2A1,_T2A3);{struct _tuple22*_T722[2];_T2A5= Cyc_Toc_tag_sp;_T2A6= 
# 2196
Cyc_Toc_datatype_tag(tud,qv);({__typeof__(Cyc_Toc_make_field(_T2A5,_T2A6))_T723=Cyc_Toc_make_field(_T2A5,_T2A6);_T722[0]= _T723;});_T2A7= Cyc_Absyn_fieldname(1);_T2A8= arg;({__typeof__(Cyc_Toc_make_field(_T2A7,_T2A8))_T723=Cyc_Toc_make_field(_T2A7,_T2A8);_T722[1]= _T723;});_T2A9= _tag_fat(_T722,sizeof(struct _tuple22*),2);_T2A4= Cyc_List_list(_T2A9);}{
# 2195
struct Cyc_List_List*dles=_T2A4;_T2AA= var;_T2AB= 
# 2198
Cyc_Absyn_strctq(tdn);{struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*_T722=_cycalloc(sizeof(struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct));_T722->tag= 28;
_T722->f1= tdn;_T722->f2= 0;_T722->f3= dles;_T722->f4= 0;_T2AC= (struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*)_T722;}_T2AD= (void*)_T2AC;_T2AE= Cyc_Absyn_new_exp(_T2AD,0U);_T2AF= field_typ;_T2B0= Cyc_Absyn_set_type(_T2AE,_T2AF);_T2B1= s;
# 2197
s= Cyc_Absyn_declare_stmt(_T2AA,_T2AB,_T2B0,_T2B1,0U);}}}}}}}}_T2B2= es;
# 2184
es= _T2B2->tl;_T2B3= injectors;injectors= _T2B3->tl;i= i + -1;goto _TL209;_TL208:;}}}}}goto _TL1F3;
# 2204
_TL1F2:{struct Cyc_List_List*array_args=0;
_TL20F: if(es!=0)goto _TL20D;else{goto _TL20E;}
_TL20D: _T2B4= nv;_T2B5= es;_T2B6= _T2B5->hd;_T2B7= (struct Cyc_Absyn_Exp*)_T2B6;Cyc_Toc_exp_to_c(_T2B4,_T2B7);{struct Cyc_List_List*_T71F=_cycalloc(sizeof(struct Cyc_List_List));_T2B9= es;_T2BA= _T2B9->hd;
_T71F->hd= (struct Cyc_Absyn_Exp*)_T2BA;_T71F->tl= array_args;_T2B8= (struct Cyc_List_List*)_T71F;}array_args= _T2B8;_T2BB= es;
# 2205
es= _T2BB->tl;goto _TL20F;_TL20E: _T2BC= 
# 2209
Cyc_List_imp_rev(array_args);_T2BD= Cyc_Absyn_array_exp(_T2BC,0U);_T2BE= arr_type;{struct Cyc_Absyn_Exp*init=Cyc_Absyn_set_type(_T2BD,_T2BE);
s= Cyc_Absyn_declare_stmt(argv,arr_type,init,s,0U);}}_TL1F3: _T2BF= e;
# 2212
({__typeof__(Cyc_Toc_stmt_exp_r(s))_T71F=Cyc_Toc_stmt_exp_r(s);_T2BF->r= _T71F;});}}}}}}_npop_handler(0);goto _LL7;_pop_region();};case 11:{struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct*)_T706;_T71A= _T71B->f1;_T719= _T71B->f2;}{struct Cyc_Absyn_Exp*e1=_T71A;long b=_T719;
# 2217
Cyc_Toc_exp_to_c(nv,e1);_T2C1= b;
if(!_T2C1)goto _TL210;_T2C0= Cyc_Toc__rethrow_e;goto _TL211;_TL210: _T2C0= Cyc_Toc__throw_e;_TL211: {struct Cyc_Absyn_Exp*fn_e=_T2C0;_T2C2= nv;_T2C3= _T2C2->ctxt;_T2C4= old_typ;{
void*ctype=Cyc_Toc_typ_to_c(_T2C3,_T2C4);_T2C5= e;_T2C6= ctype;{struct Cyc_Absyn_Exp*_T71B[1];_T71B[0]= e1;_T2C8= fn_e;_T2C9= _tag_fat(_T71B,sizeof(struct Cyc_Absyn_Exp*),1);_T2C7= Cyc_Toc_fncall_exp_dl(_T2C8,_T2C9);}_T2CA= ctype;_T2CB= 
Cyc_Absyn_set_type(_T2C7,_T2CA);_T2CC= Cyc_Toc_array_to_ptr_cast(_T2C6,_T2CB,0U);_T2C5->r= _T2CC->r;goto _LL7;}}}case 12:{struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct*)_T706;_T71A= _T71B->f1;}{struct Cyc_Absyn_Exp*e1=_T71A;
# 2223
Cyc_Toc_exp_to_c(nv,e1);_T2CD= e;_T2CE= e1;
*_T2CD= *_T2CE;goto _LL7;}case 13:{struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*)_T706;_T71A= _T71B->f1;_T715= _T71B->f2;}{struct Cyc_Absyn_Exp*e1=_T71A;struct Cyc_List_List*ts=_T715;
# 2227
Cyc_Toc_exp_to_c(nv,e1);_T2CF= nv;_T2D0= _T2CF->ctxt;_T2D1= old_typ;{
# 2236
void*tc=Cyc_Toc_typ_to_c(_T2D0,_T2D1);_T2D2= nv;_T2D3= _T2D2->ctxt;_T2D4= e1;_T2D5= _T2D4->topt;_T2D6= 
_check_null(_T2D5);{void*tc1=Cyc_Toc_typ_to_c(_T2D3,_T2D6);_T2D7= 
Cyc_Tcutil_typecmp(tc,tc1);if(_T2D7==0)goto _TL212;_T2D8= nv;_T2D9= _T2D8->ctxt;{
# 2248
struct _tuple35 _T71B=Cyc_Toc_temp_var_and_exp(_T2D9);struct Cyc_Absyn_Exp*_T71C;struct _tuple1*_T71D;_T71D= _T71B.f0;_T71C= _T71B.f1;{struct _tuple1*temp=_T71D;struct Cyc_Absyn_Exp*temp_exp=_T71C;_T2DA= e;_T2DB= temp;_T2DC= tc;_T2DD= 
Cyc_Toc_array_to_ptr_cast(tc,e1,0U);_T2DE= temp_exp;_T2DF= e;_T2E0= _T2DF->loc;_T2E1= 
Cyc_Absyn_exp_stmt(_T2DE,_T2E0);_T2E2= e;_T2E3= _T2E2->loc;_T2E4= 
# 2249
Cyc_Absyn_declare_stmt(_T2DB,_T2DC,_T2DD,_T2E1,_T2E3);({__typeof__(Cyc_Toc_stmt_exp_r(_T2E4))_T71E=Cyc_Toc_stmt_exp_r(_T2E4);_T2DA->r= _T71E;});}}goto _TL213;_TL212: _TL213: goto _LL7;}}}case 14:{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T706;_T2E5= (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T706;_T2E6= & _T2E5->f1;_T71A= (void**)_T2E6;_T715= _T71B->f2;_T719= _T71B->f3;_T711= _T71B->f4;}{void**t=_T71A;struct Cyc_Absyn_Exp*e1=_T715;long user_inserted=_T719;enum Cyc_Absyn_Coercion coercion=_T711;_T2E7= e1;_T2E8= _T2E7->topt;{
# 2254
void*old_t2=_check_null(_T2E8);_T2E9= nv;_T2EA= _T2E9->ctxt;_T2EB= old_t2;{
void*old_t2_c=Cyc_Toc_typ_to_c(_T2EA,_T2EB);_T2EC= t;{
void*new_typ=*_T2EC;_T2ED= nv;_T2EE= _T2ED->ctxt;_T2EF= new_typ;{
void*new_typ_c=Cyc_Toc_typ_to_c(_T2EE,_T2EF);_T2F0= t;
*_T2F0= new_typ_c;
Cyc_Toc_exp_to_c(nv,e1);{struct _tuple40 _T71B;
# 2261
({__typeof__(Cyc_Absyn_compress(old_t2))_T71C=Cyc_Absyn_compress(old_t2);_T71B.f0= _T71C;});({__typeof__(Cyc_Absyn_compress(new_typ))_T71C=Cyc_Absyn_compress(new_typ);_T71B.f1= _T71C;});_T2F1= _T71B;}{struct _tuple40 _T71B=_T2F1;struct Cyc_Absyn_PtrInfo _T71C;struct Cyc_Absyn_PtrInfo _T71D;_T2F2= _T71B.f0;_T2F3= (int*)_T2F2;_T2F4= *_T2F3;if(_T2F4!=4)goto _TL214;_T2F5= _T71B.f1;_T2F6= (int*)_T2F5;_T2F7= *_T2F6;switch(_T2F7){case 4: _T2F8= _T71B.f0;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T71E=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T2F8;_T71D= _T71E->f1;}_T2F9= _T71B.f1;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T71E=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T2F9;_T71C= _T71E->f1;}{struct Cyc_Absyn_PtrInfo p1=_T71D;struct Cyc_Absyn_PtrInfo p2=_T71C;_T2FA= 
# 2263
Cyc_Absyn_bounds_one();_T2FB= p1;_T2FC= _T2FB.ptr_atts;_T2FD= _T2FC.bounds;{struct Cyc_Absyn_Exp*b1=Cyc_Tcutil_get_bounds_exp_constrain(_T2FA,_T2FD,1);_T2FE= 
Cyc_Absyn_bounds_one();_T2FF= p2;_T300= _T2FF.ptr_atts;_T301= _T300.bounds;{struct Cyc_Absyn_Exp*b2=Cyc_Tcutil_get_bounds_exp_constrain(_T2FE,_T301,1);_T302= p1;_T303= _T302.ptr_atts;_T304= _T303.zero_term;{
long zt1=Cyc_Tcutil_force_type2bool(0,_T304);_T305= p2;_T306= _T305.ptr_atts;_T307= _T306.zero_term;{
long zt2=Cyc_Tcutil_force_type2bool(0,_T307);{struct _tuple41 _T71E;
_T71E.f0= b1;_T71E.f1= b2;_T308= _T71E;}{struct _tuple41 _T71E=_T308;_T309= _T71E.f0;if(_T309==0)goto _TL217;_T30A= _T71E.f1;if(_T30A==0)goto _TL219;
# 2271
did_inserted_checks= 1;_T30B= 
Cyc_Toc_do_null_check(e);if(!_T30B)goto _TL21B;_T30C= e;{struct Cyc_Absyn_Exp*_T71F[1];_T71F[0]= e1;_T30E= Cyc_Toc__check_null_e;_T30F= _tag_fat(_T71F,sizeof(struct Cyc_Absyn_Exp*),1);_T30D= Cyc_Toc_fncall_exp_dl(_T30E,_T30F);}
_T30C->r= _T30D->r;goto _TL21C;
_TL21B: _T310= Cyc_Unify_unify(old_t2_c,new_typ_c);if(!_T310)goto _TL21D;_T311= e;_T312= e1;
*_T311= *_T312;goto _TL21E;_TL21D: _TL21E: _TL21C: goto _LLB9;_TL219:{
# 2282
struct Cyc_Absyn_Exp*e2=_check_null(b1);
struct _tuple13 _T71F=Cyc_Evexp_eval_const_uint_exp(e2);long _T720;unsigned _T721;_T721= _T71F.f0;_T720= _T71F.f1;{unsigned i=_T721;long valid=_T720;_T313= 
Cyc_Toc_is_toplevel(nv);if(!_T313)goto _TL21F;_T314= zt1;
# 2288
if(!_T314)goto _TL221;_T315= p2;_T316= _T315.elt_tq;_T317= _T316.real_const;if(_T317)goto _TL221;else{goto _TL223;}_TL223: _T318= zt2;if(_T318)goto _TL221;else{goto _TL224;}
_TL224: _T319= e2;_T31A= Cyc_Absyn_uint_exp(1U,0U);_T31B= Cyc_Absyn_uint_type;_T31C= Cyc_Absyn_set_type(_T31A,_T31B);_T31D= Cyc_Absyn_prim2_exp(2U,_T319,_T31C,0U);_T31E= e2;_T31F= _T31E->topt;_T320= 
_check_null(_T31F);
# 2289
e2= Cyc_Absyn_set_type(_T31D,_T320);goto _TL222;_TL221: _TL222: _T321= e;_T322= nv;_T323= _T322->ctxt;_T324= old_t2;_T325= e2;_T326= e1;_T327= 
# 2291
Cyc_Toc_make_toplevel_dyn_arr(_T323,_T324,_T325,_T326);_T321->r= _T327->r;goto _TL220;
_TL21F: _T328= zt1;if(!_T328)goto _TL225;_T329= nv;_T32A= _T329->ctxt;{
# 2298
struct _tuple35 _T722=Cyc_Toc_temp_var_and_exp(_T32A);struct Cyc_Absyn_Exp*_T723;struct _tuple1*_T724;_T724= _T722.f0;_T723= _T722.f1;{struct _tuple1*x=_T724;struct Cyc_Absyn_Exp*x_exp=_T723;_T32B= x_exp;_T32C= nv;_T32D= _T32C->ctxt;_T32E= old_t2;_T32F= 
Cyc_Toc_typ_to_c(_T32D,_T32E);Cyc_Absyn_set_type(_T32B,_T32F);{
struct Cyc_Absyn_Exp*arg3;_T330= e1;{
# 2303
void*_T725=_T330->r;struct Cyc_Absyn_Vardecl*_T726;_T331= (int*)_T725;_T332= *_T331;switch(_T332){case 0: _T333= (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_T725;_T334= _T333->f1;_T335= _T334.Wstring_c;_T336= _T335.tag;switch(_T336){case 9:
# 2305
 arg3= e2;goto _LLC8;case 10:
# 2308
 arg3= e2;goto _LLC8;default: goto _LLD1;};case 1: _T337= (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T725;_T338= _T337->f1;_T339= (int*)_T338;_T33A= *_T339;switch(_T33A){case 1:{struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T727=(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T725;_T33B= _T727->f1;{struct Cyc_Absyn_Global_b_Absyn_Binding_struct*_T728=(struct Cyc_Absyn_Global_b_Absyn_Binding_struct*)_T33B;_T726= _T728->f1;}}{struct Cyc_Absyn_Vardecl*vd=_T726;_T726= vd;goto _LLD0;}case 4:{struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T727=(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T725;_T33C= _T727->f1;{struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T728=(struct Cyc_Absyn_Local_b_Absyn_Binding_struct*)_T33C;_T726= _T728->f1;}}_LLD0: {struct Cyc_Absyn_Vardecl*vd=_T726;_T33D= vd;_T33E= _T33D->type;_T33F= 
# 2313
Cyc_Tcutil_is_array_type(_T33E);if(_T33F)goto _TL22A;else{goto _TL22C;}
_TL22C: goto _LLD2;_TL22A:
 arg3= e2;goto _LLC8;}default: goto _LLD1;};default: _LLD1: _LLD2: _T340= nv;_T341= _T340->ctxt;_T342= 
# 2320
Cyc_Toc_void_star_type(_T341);_T343= x_exp;x_exp= Cyc_Toc_cast_it(_T342,_T343);_T344= valid;
if(!_T344)goto _TL22D;if(i==1U)goto _TL22D;
arg3= e2;goto _TL22E;
_TL22D: _T345= Cyc_Toc_isCharStar(e1);if(!_T345)goto _TL22F;{struct Cyc_Absyn_Exp*_T727[2];
_T727[0]= x_exp;_T727[1]= e2;_T347= Cyc_Toc__get_zero_arr_size_char_e;_T348= _tag_fat(_T727,sizeof(struct Cyc_Absyn_Exp*),2);_T346= Cyc_Toc_fncall_exp_dl(_T347,_T348);}arg3= _T346;goto _TL230;
# 2326
_TL22F:{struct Cyc_Absyn_Exp*_T727[3];_T34A= nv;_T34B= _T34A->ctxt;_T34C= old_t2;_T34D= 
# 2328
Cyc_Toc_typ_to_c(_T34B,_T34C);_T34E= Cyc_Tcutil_pointer_elt_type(_T34D);_T34F= Cyc_Absyn_sizeoftype_exp(_T34E,0U);_T350= Cyc_Absyn_uint_type;_T351= Cyc_Absyn_set_type(_T34F,_T350);_T352= Cyc_Absyn_uint_type;({__typeof__(Cyc_Absyn_set_type(_T351,_T352))_T728=Cyc_Absyn_set_type(_T351,_T352);_T727[0]= _T728;});
# 2330
_T727[1]= x_exp;_T727[2]= e2;_T353= Cyc_Toc__get_zero_arr_size_other_e;_T354= _tag_fat(_T727,sizeof(struct Cyc_Absyn_Exp*),3);_T349= Cyc_Toc_fncall_exp_dl(_T353,_T354);}
# 2326
arg3= _T349;_TL230: _TL22E: _T355= arg3;
# 2331
_T355->topt= Cyc_Absyn_uint_type;goto _LLC8;}_LLC8:;}{
# 2336
long use_temp=arg3!=e2;_T356= zt2;
if(_T356)goto _TL231;else{goto _TL233;}_TL233: _T357= p2;_T358= _T357.elt_tq;_T359= _T358.real_const;if(_T359)goto _TL231;else{goto _TL234;}
_TL234: _T35A= arg3;_T35B= Cyc_Absyn_uint_exp(1U,0U);_T35C= Cyc_Absyn_uint_type;_T35D= Cyc_Absyn_set_type(_T35B,_T35C);_T35E= Cyc_Absyn_prim2_exp(2U,_T35A,_T35D,0U);_T35F= arg3;_T360= _T35F->topt;_T361= 
_check_null(_T360);
# 2338
arg3= Cyc_Absyn_set_type(_T35E,_T361);goto _TL232;_TL231: _TL232: _T362= nv;_T363= _T362->ctxt;_T364= p1;_T365= _T364.elt_type;_T366= 
# 2340
Cyc_Toc_typ_to_c(_T363,_T365);_T367= Cyc_Absyn_sizeoftype_exp(_T366,0U);_T368= Cyc_Absyn_uint_type;_T369= Cyc_Absyn_set_type(_T367,_T368);_T36A= Cyc_Absyn_uint_type;{struct Cyc_Absyn_Exp*arg2=Cyc_Absyn_set_type(_T369,_T36A);_T36B= use_temp;
if(!_T36B)goto _TL235;{struct Cyc_Absyn_Exp*_T725[3];
_T725[0]= x_exp;_T725[1]= arg2;_T725[2]= arg3;_T36D= Cyc_Toc__tag_fat_e;_T36E= _tag_fat(_T725,sizeof(struct Cyc_Absyn_Exp*),3);_T36C= Cyc_Toc_fncall_exp_dl(_T36D,_T36E);}{struct Cyc_Absyn_Exp*tg_exp=_T36C;_T36F= tg_exp;_T370= nv;_T371= _T370->ctxt;
({__typeof__(Cyc_Toc_fat_ptr_type(_T371))_T725=Cyc_Toc_fat_ptr_type(_T371);_T36F->topt= _T725;});{
struct Cyc_Absyn_Stmt*s=Cyc_Absyn_exp_stmt(tg_exp,0U);_T372= x;_T373= nv;_T374= _T373->ctxt;_T375= old_t2;_T376= 
Cyc_Toc_typ_to_c(_T374,_T375);_T377= e1;_T378= s;s= Cyc_Absyn_declare_stmt(_T372,_T376,_T377,_T378,0U);_T379= e;
({__typeof__(Cyc_Toc_stmt_exp_r(s))_T725=Cyc_Toc_stmt_exp_r(s);_T379->r= _T725;});}}goto _TL236;
# 2348
_TL235: _T37A= e;{struct Cyc_Absyn_Exp*_T725[3];_T725[0]= e1;_T725[1]= arg2;_T725[2]= arg3;_T37C= Cyc_Toc__tag_fat_e;_T37D= _tag_fat(_T725,sizeof(struct Cyc_Absyn_Exp*),3);_T37B= Cyc_Toc_fncall_exp_r(_T37C,_T37D);}_T37A->r= _T37B;_TL236:;}}}}}goto _TL226;
# 2351
_TL225: _T37E= e;{struct Cyc_Absyn_Exp*_T722[3];_T722[0]= e1;_T380= nv;_T381= _T380->ctxt;_T382= p1;_T383= _T382.elt_type;_T384= 
Cyc_Toc_typ_to_c(_T381,_T383);_T385= Cyc_Absyn_sizeoftype_exp(_T384,0U);_T386= Cyc_Absyn_uint_type;_T387= Cyc_Absyn_set_type(_T385,_T386);_T388= Cyc_Absyn_uint_type;({__typeof__(Cyc_Absyn_set_type(_T387,_T388))_T723=Cyc_Absyn_set_type(_T387,_T388);_T722[1]= _T723;});
_T722[2]= e2;_T389= Cyc_Toc__tag_fat_e;_T38A= _tag_fat(_T722,sizeof(struct Cyc_Absyn_Exp*),3);_T37F= Cyc_Toc_fncall_exp_r(_T389,_T38A);}
# 2351
_T37E->r= _T37F;_TL226: _TL220: goto _LLB9;}}_TL217: _T38B= _T71E.f1;if(_T38B==0)goto _TL237;{
# 2365
struct Cyc_Absyn_Exp*new_e2=_check_null(b2);_T38C= zt1;
if(!_T38C)goto _TL239;_T38D= zt2;if(_T38D)goto _TL239;else{goto _TL23B;}
_TL23B: _T38E= b2;_T38F= Cyc_Absyn_uint_exp(1U,0U);_T390= Cyc_Absyn_uint_type;_T391= Cyc_Absyn_set_type(_T38F,_T390);_T392= Cyc_Absyn_add_exp(_T38E,_T391,0U);_T393= Cyc_Absyn_uint_type;new_e2= Cyc_Absyn_set_type(_T392,_T393);goto _TL23A;_TL239: _TL23A: {
struct Cyc_Absyn_Exp*ptr_exp=e1;_T394= p1;_T395= _T394.ptr_atts;_T396= _T395.aqual;_T397= 
# 2375
Cyc_Tcutil_is_noalias_qual(_T396,0);if(!_T397)goto _TL23C;_T398= p1;_T399= _T398.ptr_atts;_T39A= _T399.aqual;_T39B= 
# 2377
Cyc_Tcutil_is_noalias_qual(_T39A,1);
# 2375
if(_T39B)goto _TL23C;else{goto _TL23E;}
# 2379
_TL23E:{struct Cyc_Absyn_Exp*_T71F[1];_T71F[0]= ptr_exp;_T39D= Cyc_Toc__check_fat_at_base_e;_T39E= _tag_fat(_T71F,sizeof(struct Cyc_Absyn_Exp*),1);_T39C= Cyc_Toc_fncall_exp_dl(_T39D,_T39E);}_T39F= nv;_T3A0= _T39F->ctxt;_T3A1= Cyc_Toc_fat_ptr_type(_T3A0);ptr_exp= Cyc_Absyn_set_type(_T39C,_T3A1);goto _TL23D;_TL23C: _TL23D: _T3A2= e;{
# 2381
void*_T71F=_T3A2->annot;_T3A3= (struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct*)_T71F;_T3A4= _T3A3->tag;_T3A5= Cyc_InsertChecks_FatBound;if(_T3A4!=_T3A5)goto _TL23F;goto _LLD7;_TL23F: _T3A6= (struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct*)_T71F;_T3A7= _T3A6->tag;_T3A8= Cyc_InsertChecks_NullAndFatBound;if(_T3A7!=_T3A8)goto _TL241;_LLD7:{struct Cyc_Absyn_Exp*_T720[3];
# 2389
_T720[0]= ptr_exp;_T3AA= nv;_T3AB= _T3AA->ctxt;_T3AC= p1;_T3AD= _T3AC.elt_type;_T3AE= 
Cyc_Toc_typ_to_c(_T3AB,_T3AD);_T3AF= Cyc_Absyn_sizeoftype_exp(_T3AE,0U);_T3B0= Cyc_Absyn_uint_type;_T3B1= Cyc_Absyn_set_type(_T3AF,_T3B0);_T3B2= Cyc_Absyn_uint_type;({__typeof__(Cyc_Absyn_set_type(_T3B1,_T3B2))_T721=Cyc_Absyn_set_type(_T3B1,_T3B2);_T720[1]= _T721;});
_T720[2]= new_e2;_T3B3= Cyc_Toc__untag_fat_ptr_check_bound_e;_T3B4= _tag_fat(_T720,sizeof(struct Cyc_Absyn_Exp*),3);_T3A9= Cyc_Toc_fncall_exp_dl(_T3B3,_T3B4);}_T3B5= 
Cyc_Absyn_cstar_type(Cyc_Absyn_uchar_type,Cyc_Toc_mt_tq);
# 2388
ptr_exp= Cyc_Absyn_set_type(_T3A9,_T3B5);goto _LLD3;_TL241:{struct Cyc_Absyn_Exp*_T720[3];
# 2396
_T720[0]= ptr_exp;_T3B7= nv;_T3B8= _T3B7->ctxt;_T3B9= p1;_T3BA= _T3B9.elt_type;_T3BB= 
Cyc_Toc_typ_to_c(_T3B8,_T3BA);_T3BC= Cyc_Absyn_sizeoftype_exp(_T3BB,0U);_T3BD= Cyc_Absyn_uint_type;_T3BE= Cyc_Absyn_set_type(_T3BC,_T3BD);_T3BF= Cyc_Absyn_uint_type;({__typeof__(Cyc_Absyn_set_type(_T3BE,_T3BF))_T721=Cyc_Absyn_set_type(_T3BE,_T3BF);_T720[1]= _T721;});
_T720[2]= new_e2;_T3C0= Cyc_Toc__untag_fat_ptr_e;_T3C1= _tag_fat(_T720,sizeof(struct Cyc_Absyn_Exp*),3);_T3B6= Cyc_Toc_fncall_exp_dl(_T3C0,_T3C1);}_T3C2= 
Cyc_Absyn_cstar_type(Cyc_Absyn_uchar_type,Cyc_Toc_mt_tq);
# 2395
ptr_exp= Cyc_Absyn_set_type(_T3B6,_T3C2);goto _LLD3;_LLD3:;}
# 2402
did_inserted_checks= 1;_T3C3= 
Cyc_Toc_do_null_check(e);if(!_T3C3)goto _TL243;_T3C4= ptr_exp;{struct Cyc_Absyn_Exp*_T71F[1];({__typeof__(
Cyc_Toc_deep_copy(ptr_exp))_T720=Cyc_Toc_deep_copy(ptr_exp);_T71F[0]= _T720;});_T3C6= Cyc_Toc__check_null_e;_T3C7= _tag_fat(_T71F,sizeof(struct Cyc_Absyn_Exp*),1);_T3C5= Cyc_Toc_fncall_exp_r(_T3C6,_T3C7);}_T3C4->r= _T3C5;goto _TL244;_TL243: _TL244: _T3C8= e;_T3C9= t;_T3CA= *_T3C9;_T3CB= ptr_exp;
({__typeof__(Cyc_Toc_cast_it_r(_T3CA,_T3CB))_T71F=Cyc_Toc_cast_it_r(_T3CA,_T3CB);_T3C8->r= _T71F;});goto _LLB9;}}_TL237: _T3CC= zt1;
# 2410
if(!_T3CC)goto _TL245;_T3CD= zt2;if(_T3CD)goto _TL245;else{goto _TL247;}_TL247: _T3CE= p2;_T3CF= _T3CE.elt_tq;_T3D0= _T3CF.real_const;if(_T3D0)goto _TL245;else{goto _TL248;}
_TL248: _T3D1= Cyc_Toc_is_toplevel(nv);if(!_T3D1)goto _TL249;{
int(*_T71F)(struct _fat_ptr)=(int(*)(struct _fat_ptr))Cyc_Toc_unimp;_T3D2= _T71F;}_T3D3= 
# 2414
_tag_fat("can't coerce a ZEROTERM to a non-const NOZEROTERM pointer at toplevel",sizeof(char),70U);
# 2412
_T3D2(_T3D3);goto _TL24A;_TL249: _TL24A: _T3D4= e;{struct Cyc_Absyn_Exp*_T71F[3];
# 2415
_T71F[0]= e1;_T3D6= nv;_T3D7= _T3D6->ctxt;_T3D8= p1;_T3D9= _T3D8.elt_type;_T3DA= 
Cyc_Toc_typ_to_c(_T3D7,_T3D9);_T3DB= Cyc_Absyn_sizeoftype_exp(_T3DA,0U);_T3DC= Cyc_Absyn_uint_type;_T3DD= Cyc_Absyn_set_type(_T3DB,_T3DC);_T3DE= Cyc_Absyn_uint_type;({__typeof__(Cyc_Absyn_set_type(_T3DD,_T3DE))_T720=Cyc_Absyn_set_type(_T3DD,_T3DE);_T71F[1]= _T720;});_T3DF= 
Cyc_Absyn_uint_exp(1U,0U);_T3E0= Cyc_Absyn_uint_type;({__typeof__(Cyc_Absyn_set_type(_T3DF,_T3E0))_T720=Cyc_Absyn_set_type(_T3DF,_T3E0);_T71F[2]= _T720;});_T3E1= Cyc_Toc__fat_ptr_decrease_size_e;_T3E2= _tag_fat(_T71F,sizeof(struct Cyc_Absyn_Exp*),3);_T3D5= Cyc_Toc_fncall_exp_r(_T3E1,_T3E2);}
# 2415
_T3D4->r= _T3D5;goto _TL246;_TL245: _TL246: goto _LLB9;_LLB9:;}goto _LLB2;}}}}}case 0: _T3E3= _T71B.f1;_T3E4= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3E3;_T3E5= _T3E4->f1;_T3E6= (int*)_T3E5;_T3E7= *_T3E6;if(_T3E7!=1)goto _TL24B;_T3E8= _T71B.f0;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T71E=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T3E8;_T71D= _T71E->f1;}{struct Cyc_Absyn_PtrInfo p1=_T71D;_T3E9= 
# 2423
Cyc_Absyn_bounds_one();_T3EA= p1;_T3EB= _T3EA.ptr_atts;_T3EC= _T3EB.bounds;{struct Cyc_Absyn_Exp*_T71E=Cyc_Tcutil_get_bounds_exp_constrain(_T3E9,_T3EC,1);if(_T71E!=0)goto _TL24D;_T3ED= e1;_T3EE= 
# 2425
Cyc_Toc_deep_copy(e1);_T3EF= Cyc_Toc_curr_sp;({__typeof__(Cyc_Toc_aggrmember_exp_r(_T3EE,_T3EF))_T71F=Cyc_Toc_aggrmember_exp_r(_T3EE,_T3EF);_T3ED->r= _T71F;});_T3F0= e1;
({__typeof__(Cyc_Absyn_cstar_type(Cyc_Absyn_uchar_type,Cyc_Toc_mt_tq))_T71F=Cyc_Absyn_cstar_type(Cyc_Absyn_uchar_type,Cyc_Toc_mt_tq);_T3F0->topt= _T71F;});goto _LLDA;_TL24D: goto _LLDA;_LLDA:;}goto _LLB2;}_TL24B: goto _LLB7;default: goto _LLB7;}goto _TL215;_TL214: _LLB7: _T3F1= 
# 2433
Cyc_Unify_unify(old_t2_c,new_typ_c);if(!_T3F1)goto _TL24F;_T3F2= e;_T3F3= e1;
*_T3F2= *_T3F3;goto _TL250;_TL24F: _TL250: goto _LLB2;_TL215: _LLB2:;}goto _LL7;}}}}}case 15:{struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct*)_T706;_T71A= _T71B->f1;}{struct Cyc_Absyn_Exp*e1=_T71A;
# 2440
Cyc_Toc_set_lhs(nv,1);
Cyc_Toc_exp_to_c(nv,e1);
Cyc_Toc_set_lhs(nv,0);_T3F4= 
Cyc_Absyn_is_lvalue(e1);if(_T3F4)goto _TL251;else{goto _TL253;}
_TL253:{void(*_T71B)(struct Cyc_Absyn_Exp*,struct Cyc_List_List*,struct Cyc_Absyn_Exp*(*)(struct Cyc_Absyn_Exp*,long),long)=(void(*)(struct Cyc_Absyn_Exp*,struct Cyc_List_List*,struct Cyc_Absyn_Exp*(*)(struct Cyc_Absyn_Exp*,long),long))Cyc_Toc_lvalue_assign;_T3F5= _T71B;}_T3F6= e1;_T3F5(_T3F6,0,Cyc_Toc_address_lvalue,1);_T3F7= e;_T3F8= nv;_T3F9= _T3F8->ctxt;_T3FA= old_typ;_T3FB= 
# 2446
Cyc_Toc_typ_to_c(_T3F9,_T3FA);_T3FC= e1;({__typeof__(Cyc_Toc_cast_it_r(_T3FB,_T3FC))_T71B=Cyc_Toc_cast_it_r(_T3FB,_T3FC);_T3F7->r= _T71B;});goto _TL252;
_TL251: _T3FD= & Cyc_Kinds_ak;_T3FE= (struct Cyc_Absyn_Kind*)_T3FD;_T3FF= e1;_T400= _T3FF->topt;_T401= _check_null(_T400);_T402= Cyc_Tcutil_type_kind(_T401);_T403= Cyc_Kinds_kind_leq(_T3FE,_T402);if(!_T403)goto _TL254;_T404= e;_T405= nv;_T406= _T405->ctxt;_T407= old_typ;_T408= 
# 2450
Cyc_Toc_typ_to_c(_T406,_T407);_T409= 
Cyc_Absyn_address_exp(e1,0U);_T40A= e1;_T40B= _T40A->topt;_T40C= _check_null(_T40B);_T40D= Cyc_Toc_mt_tq;_T40E= Cyc_Absyn_cstar_type(_T40C,_T40D);_T40F= Cyc_Absyn_set_type(_T409,_T40E);
# 2450
({__typeof__(Cyc_Toc_cast_it_r(_T408,_T40F))_T71B=Cyc_Toc_cast_it_r(_T408,_T40F);_T404->r= _T71B;});goto _TL255;_TL254: _TL255: _TL252: goto _LL7;}case 16:{struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct*)_T706;_T71A= _T71B->f1;_T715= _T71B->f2;_T714= _T71B->f3;}{struct Cyc_Absyn_Exp*rgnopt=_T71A;struct Cyc_Absyn_Exp*e1=_T715;struct Cyc_Absyn_Exp*qual=_T714;
# 2459
Cyc_Toc_exp_to_c(nv,e1);_T410= nv;_T411= _T410->ctxt;_T412= e1;_T413= _T412->topt;_T414= 
# 2461
_check_null(_T413);{void*elt_typ=Cyc_Toc_typ_to_c(_T411,_T414);{
void*_T71B=Cyc_Absyn_compress(elt_typ);void*_T71C;_T415= (int*)_T71B;_T416= *_T415;if(_T416!=5)goto _TL256;{struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T71D=(struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_T71B;_T417= _T71D->f1;_T71C= _T417.elt_type;}{void*t2=_T71C;_T418= nv;_T419= _T418->ctxt;_T41A= t2;
# 2464
elt_typ= Cyc_Toc_typ_to_c(_T419,_T41A);goto _LLDF;}_TL256: goto _LLDF;_LLDF:;}{
# 2469
struct Cyc_Absyn_Exp*array_len=Cyc_Toc_array_length_exp(e1);
struct _tuple1*lenvar=0;
struct Cyc_Absyn_Exp*lenexp=0;
struct Cyc_Absyn_Exp*mexp;
if(array_len==0)goto _TL258;_T41B= nv;_T41C= _T41B->ctxt;
lenvar= Cyc_Toc_temp_var(_T41C);_T41D= 
Cyc_Absyn_var_exp(lenvar,0U);_T41E= Cyc_Absyn_uint_type;lenexp= Cyc_Absyn_set_type(_T41D,_T41E);{struct Cyc_Absyn_Exp*_T71B[2];
_T71B[0]= lenexp;_T420= Cyc_Absyn_sizeoftype_exp(elt_typ,0U);_T421= Cyc_Absyn_uint_type;({__typeof__(Cyc_Absyn_set_type(_T420,_T421))_T71C=Cyc_Absyn_set_type(_T420,_T421);_T71B[1]= _T71C;});_T422= Cyc_Toc__check_times_e;_T423= _tag_fat(_T71B,sizeof(struct Cyc_Absyn_Exp*),2);_T41F= Cyc_Toc_fncall_exp_dl(_T422,_T423);}mexp= _T41F;_T424= e1;{
# 2480
void*_T71B=_T424->r;void*_T71C;_T425= (int*)_T71B;_T426= *_T425;switch(_T426){case 26:{struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct*_T71D=(struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct*)_T71B;_T427= (struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct*)_T71B;_T428= & _T427->f2;_T71C= (struct Cyc_Absyn_Exp**)_T428;}{struct Cyc_Absyn_Exp**bd=_T71C;_T71C= bd;goto _LLE8;}case 27:{struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct*_T71D=(struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct*)_T71B;_T429= (struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct*)_T71B;_T42A= & _T429->f1;_T71C= (struct Cyc_Absyn_Exp**)_T42A;}_LLE8: {struct Cyc_Absyn_Exp**bd=(struct Cyc_Absyn_Exp**)_T71C;_T42B= bd;
# 2484
({__typeof__(Cyc_Toc_deep_copy(lenexp))_T71D=Cyc_Toc_deep_copy(lenexp);*_T42B= _T71D;});goto _LLE4;}default: goto _LLE4;}_LLE4:;}goto _TL259;
# 2490
_TL258: _T42C= Cyc_Absyn_sizeoftype_exp(elt_typ,0U);_T42D= Cyc_Absyn_uint_type;mexp= Cyc_Absyn_set_type(_T42C,_T42D);_TL259: _T42E= mexp;
_T42E->topt= Cyc_Absyn_uint_type;{
# 2494
struct Cyc_Absyn_Exp*vse=Cyc_Toc_get_varsizeexp(e1);
if(vse==0)goto _TL25B;_T42F= 
Cyc_Absyn_add_exp(mexp,vse,0U);_T430= Cyc_Absyn_uint_type;mexp= Cyc_Absyn_set_type(_T42F,_T430);goto _TL25C;_TL25B: _TL25C:
# 2498
 if(rgnopt==0)goto _TL261;else{goto _TL260;}_TL261: if(qual==0)goto _TL25F;else{goto _TL260;}_TL260: _T431= Cyc_Flags_no_regions;if(_T431)goto _TL25F;else{goto _TL25D;}
_TL25F: _T432= nv;_T433= _T432->ctxt;_T434= elt_typ;_T435= mexp;mexp= Cyc_Toc_malloc_exp(_T433,_T434,_T435);goto _TL25E;
# 2501
_TL25D: if(qual==0)goto _TL262;
Cyc_Toc_exp_to_c(nv,qual);goto _TL263;_TL262: _TL263:
 if(rgnopt==0)goto _TL264;
Cyc_Toc_exp_to_c(nv,rgnopt);_T436= nv;_T437= _T436->ctxt;_T438= rgnopt;
if(qual!=0)goto _TL266;_T43A= nv;_T43B= _T43A->ctxt;_T439= Cyc_Toc_aliasable_qual_exp(_T43B);goto _TL267;_TL266: _T439= qual;_TL267: _T43C= mexp;mexp= Cyc_Toc_rmalloc_exp(_T437,_T438,_T439,_T43C);goto _TL265;
# 2507
_TL264: _T43D= nv;_T43E= _T43D->ctxt;_T43F= qual;_T440= mexp;mexp= Cyc_Toc_aqmalloc_exp(_T43E,_T43F,_T440);_TL265: _TL25E: _T441= mexp;_T442= 
# 2510
Cyc_Absyn_cstar_type(elt_typ,Cyc_Toc_mt_tq);Cyc_Absyn_set_type(_T441,_T442);_T443= e;{struct Cyc_Toc_NewInfo_Absyn_AbsynAnnot_struct*_T71B=_cycalloc(sizeof(struct Cyc_Toc_NewInfo_Absyn_AbsynAnnot_struct));_T71B->tag= Cyc_Toc_NewInfo;
_T71B->f1= mexp;({__typeof__(Cyc_Absyn_cstar_type(elt_typ,Cyc_Toc_mt_tq))_T71C=Cyc_Absyn_cstar_type(elt_typ,Cyc_Toc_mt_tq);_T71B->f2= _T71C;});_T444= (struct Cyc_Toc_NewInfo_Absyn_AbsynAnnot_struct*)_T71B;}_T443->annot= (void*)_T444;_T445= 
Cyc_Tcutil_is_fat_ptr(old_typ);if(!_T445)goto _TL268;_T446= 
Cyc_Toc_deep_copy(e);_T447= Cyc_Absyn_cstar_type(elt_typ,Cyc_Toc_mt_tq);{struct Cyc_Absyn_Exp*e2=Cyc_Absyn_set_type(_T446,_T447);_T448= e;{struct Cyc_Absyn_Exp*_T71B[3];
_T71B[0]= e2;_T44A= Cyc_Absyn_sizeoftype_exp(elt_typ,0U);_T44B= Cyc_Absyn_uint_type;({__typeof__(Cyc_Absyn_set_type(_T44A,_T44B))_T71C=Cyc_Absyn_set_type(_T44A,_T44B);_T71B[1]= _T71C;});_T44C= lenexp;_T44D= (unsigned)_T44C;
if(!_T44D)goto _TL26A;_T71B[2]= lenexp;goto _TL26B;_TL26A: _T44E= Cyc_Absyn_uint_exp(1U,0U);_T44F= Cyc_Absyn_uint_type;({__typeof__(Cyc_Absyn_set_type(_T44E,_T44F))_T71C=Cyc_Absyn_set_type(_T44E,_T44F);_T71B[2]= _T71C;});_TL26B: _T450= Cyc_Toc__tag_fat_e;_T451= _tag_fat(_T71B,sizeof(struct Cyc_Absyn_Exp*),3);_T449= Cyc_Toc_fncall_exp_dl(_T450,_T451);}
# 2514
_T448->r= _T449->r;}goto _TL269;_TL268: _TL269:
# 2518
 if(vse==0)goto _TL26C;_T452= e;_T453= nv;_T454= _T453->ctxt;_T455= old_typ;_T456= 
Cyc_Toc_typ_to_c(_T454,_T455);_T457= Cyc_Toc_deep_copy(e);({__typeof__(Cyc_Toc_cast_it_r(_T456,_T457))_T71B=Cyc_Toc_cast_it_r(_T456,_T457);_T452->r= _T71B;});goto _TL26D;_TL26C: _TL26D: _T458= array_len;_T459= (unsigned)_T458;
if(!_T459)goto _TL26E;_T45A= lenvar;_T45B= Cyc_Absyn_uint_type;_T45C= array_len;_T45D= 
# 2522
Cyc_Toc_deep_copy(e);_T45E= Cyc_Absyn_exp_stmt(_T45D,0U);{
# 2521
struct Cyc_Absyn_Stmt*s=Cyc_Absyn_declare_stmt(_T45A,_T45B,_T45C,_T45E,0U);_T45F= e;
# 2523
({__typeof__(Cyc_Toc_stmt_exp_r(s))_T71B=Cyc_Toc_stmt_exp_r(s);_T45F->r= _T71B;});}goto _TL26F;_TL26E: _TL26F: goto _LL7;}}}}case 18:{struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct*)_T706;_T71A= _T71B->f1;}{struct Cyc_Absyn_Exp*e1=_T71A;
# 2529
Cyc_Toc_exp_to_c(nv,e1);goto _LL7;}case 17:{struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct*)_T706;_T460= _T71B->f1;_T71A= (void*)_T460;}{void*t=_T71A;_T461= e;{struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct*_T71B=_cycalloc(sizeof(struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct));_T71B->tag= 17;_T463= nv;_T464= _T463->ctxt;_T465= t;
# 2532
({__typeof__(Cyc_Toc_typ_to_c(_T464,_T465))_T71C=Cyc_Toc_typ_to_c(_T464,_T465);_T71B->f1= _T71C;});_T462= (struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct*)_T71B;}_T461->r= (void*)_T462;goto _LL7;}case 19:{struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct*)_T706;_T466= _T71B->f1;_T71A= (void*)_T466;_T715= _T71B->f2;}{void*t=_T71A;struct Cyc_List_List*fs=_T715;_T467= e;{struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct*_T71B=_cycalloc(sizeof(struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct));_T71B->tag= 19;_T469= nv;_T46A= _T469->ctxt;_T46B= t;
# 2535
({__typeof__(Cyc_Toc_typ_to_c(_T46A,_T46B))_T71C=Cyc_Toc_typ_to_c(_T46A,_T46B);_T71B->f1= _T71C;});_T71B->f2= fs;_T468= (struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct*)_T71B;}_T467->r= (void*)_T468;goto _LL7;}case 21:{struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*)_T706;_T71A= _T71B->f1;_T715= _T71B->f2;_T719= _T71B->f3;_T718= _T71B->f4;}{struct Cyc_Absyn_Exp*e1=_T71A;struct _fat_ptr*f=_T715;long is_tagged=_T719;long is_read=_T718;
# 2538
long is_poly=Cyc_Toc_is_poly_project(e);_T46C= e1;_T46D= _T46C->topt;{
void*e1_cyc_type=_check_null(_T46D);_T46E= nv;_T46F= _T46E->ctxt;_T470= old_typ;{
void*t=Cyc_Toc_typ_to_c_array(_T46F,_T470);_T472= is_poly;
if(!_T472)goto _TL270;_T473= nv;_T474= _T473->ctxt;_T471= Cyc_Toc_void_star_type(_T474);goto _TL271;_TL270: _T471= t;_TL271: {void*res_type=_T471;
Cyc_Toc_exp_to_c(nv,e1);_T475= is_tagged;
if(!_T475)goto _TL272;_T476= is_read;if(!_T476)goto _TL272;_T477= e;_T478= nv;_T479= _T478->ctxt;_T47A= res_type;_T47B= e1;_T47C= nv;_T47D= _T47C->ctxt;_T47E= e1_cyc_type;_T47F= 
Cyc_Toc_typ_to_c(_T47D,_T47E);_T480= e1_cyc_type;_T481= f;_T482= Cyc_Toc_in_lhs(nv);({__typeof__(Cyc_Toc_check_tagged_union(_T479,_T47A,_T47B,_T47F,_T480,_T481,_T482,Cyc_Toc_member_exp))_T71B=Cyc_Toc_check_tagged_union(_T479,_T47A,_T47B,_T47F,_T480,_T481,_T482,Cyc_Toc_member_exp);_T477->r= _T71B;});goto _TL273;
# 2546
_TL272: _T483= is_tagged;if(!_T483)goto _TL274;_T484= e;_T485= nv;_T486= _T485->ctxt;_T487= e1_cyc_type;_T488= f;
({__typeof__(Cyc_Toc_tagged_union_field_struct(_T486,_T487,_T488))_T71B=Cyc_Toc_tagged_union_field_struct(_T486,_T487,_T488);_T484->topt= _T71B;});goto _TL275;_TL274: _TL275: _TL273: _T489= is_poly;
if(!_T489)goto _TL276;{
struct Cyc_Absyn_Exp*e2=Cyc_Toc_deep_copy(e);_T48A= e2;_T48B= nv;_T48C= _T48B->ctxt;
({__typeof__(Cyc_Toc_void_star_type(_T48C))_T71B=Cyc_Toc_void_star_type(_T48C);_T48A->topt= _T71B;});_T48D= e;
({__typeof__(Cyc_Toc_cast_it_r(t,e2))_T71B=Cyc_Toc_cast_it_r(t,e2);_T48D->r= _T71B;});_T48E= e;
_T48E->topt= t;}goto _TL277;_TL276: _TL277: goto _LL7;}}}}case 22:{struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*)_T706;_T71A= _T71B->f1;_T715= _T71B->f2;_T719= _T71B->f3;_T718= _T71B->f4;}{struct Cyc_Absyn_Exp*e1=_T71A;struct _fat_ptr*f=_T715;long is_tagged=_T719;long is_read=_T718;
# 2556
long is_poly=Cyc_Toc_is_poly_project(e);_T48F= e1;_T490= _T48F->topt;{
void*e1typ=_check_null(_T490);
void*ta;_T491= nv;_T492= _T491->ctxt;_T493= old_typ;{
void*t=Cyc_Toc_typ_to_c_array(_T492,_T493);_T495= is_poly;
if(!_T495)goto _TL278;_T496= nv;_T497= _T496->ctxt;_T494= Cyc_Toc_void_star_type(_T497);goto _TL279;_TL278: _T494= t;_TL279: {void*res_type=_T494;{
void*_T71B=Cyc_Absyn_compress(e1typ);struct Cyc_Absyn_PtrInfo _T71C;_T498= (int*)_T71B;_T499= *_T498;if(_T499!=4)goto _TL27A;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T71D=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T71B;_T71C= _T71D->f1;}{struct Cyc_Absyn_PtrInfo p=_T71C;_T49A= p;
# 2563
ta= _T49A.elt_type;goto _LLEB;}_TL27A:{struct Cyc_Warn_String_Warn_Warg_struct _T71D;_T71D.tag= 0;
# 2566
({__typeof__(_tag_fat("get_ptr_typ: not a pointer!",sizeof(char),28U))_T71E=_tag_fat("get_ptr_typ: not a pointer!",sizeof(char),28U);_T71D.f1= _T71E;});_T49B= _T71D;}{struct Cyc_Warn_String_Warn_Warg_struct _T71D=_T49B;void*_T71E[1];_T71E[0]= & _T71D;{int(*_T71F)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T49C= _T71F;}_T49D= _tag_fat(_T71E,sizeof(void*),1);_T49C(_T49D);}_LLEB:;}
# 2568
did_inserted_checks= 1;_T49E= nv;_T49F= e1;_T4A0= e;_T4A1= _T4A0->annot;
Cyc_Toc_ptr_use_to_c(_T49E,_T49F,_T4A1,0);_T4A2= is_tagged;
if(!_T4A2)goto _TL27C;_T4A3= is_read;if(!_T4A3)goto _TL27C;_T4A4= e;_T4A5= nv;_T4A6= _T4A5->ctxt;_T4A7= res_type;_T4A8= e1;_T4A9= nv;_T4AA= _T4A9->ctxt;_T4AB= e1typ;_T4AC= 
Cyc_Toc_typ_to_c(_T4AA,_T4AB);_T4AD= ta;_T4AE= f;_T4AF= Cyc_Toc_in_lhs(nv);_T4B0= Cyc_Absyn_aggrarrow_exp;({__typeof__(Cyc_Toc_check_tagged_union(_T4A6,_T4A7,_T4A8,_T4AC,_T4AD,_T4AE,_T4AF,_T4B0))_T71B=Cyc_Toc_check_tagged_union(_T4A6,_T4A7,_T4A8,_T4AC,_T4AD,_T4AE,_T4AF,_T4B0);_T4A4->r= _T71B;});goto _TL27D;
_TL27C: _T4B1= is_tagged;if(!_T4B1)goto _TL27E;_T4B2= e;_T4B3= nv;_T4B4= _T4B3->ctxt;_T4B5= ta;_T4B6= f;
({__typeof__(Cyc_Toc_tagged_union_field_struct(_T4B4,_T4B5,_T4B6))_T71B=Cyc_Toc_tagged_union_field_struct(_T4B4,_T4B5,_T4B6);_T4B2->topt= _T71B;});goto _TL27F;_TL27E: _TL27F: _TL27D: _T4B7= is_poly;
# 2575
if(!_T4B7)goto _TL280;_T4B8= is_read;if(!_T4B8)goto _TL280;{
struct Cyc_Absyn_Exp*e2=Cyc_Toc_deep_copy(e);_T4B9= e2;_T4BA= nv;_T4BB= _T4BA->ctxt;
({__typeof__(Cyc_Toc_void_star_type(_T4BB))_T71B=Cyc_Toc_void_star_type(_T4BB);_T4B9->topt= _T71B;});_T4BC= e;
({__typeof__(Cyc_Toc_cast_it_r(t,e2))_T71B=Cyc_Toc_cast_it_r(t,e2);_T4BC->r= _T71B;});_T4BD= e;
_T4BD->topt= t;}goto _TL281;
_TL280: _T4BE= is_poly;if(!_T4BE)goto _TL282;_T4BF= e;_T4C0= nv;_T4C1= _T4C0->ctxt;
({__typeof__(Cyc_Toc_void_star_type(_T4C1))_T71B=Cyc_Toc_void_star_type(_T4C1);_T4BF->topt= _T71B;});goto _TL283;_TL282: _TL283: _TL281: goto _LL7;}}}}case 20:{struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*)_T706;_T71A= _T71B->f1;}{struct Cyc_Absyn_Exp*e1=_T71A;
# 2585
did_inserted_checks= 1;_T4C2= nv;_T4C3= e1;_T4C4= e;_T4C5= _T4C4->annot;
Cyc_Toc_ptr_use_to_c(_T4C2,_T4C3,_T4C5,0);goto _LL7;}case 23:{struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*)_T706;_T71A= _T71B->f1;_T715= _T71B->f2;}{struct Cyc_Absyn_Exp*e1=_T71A;struct Cyc_Absyn_Exp*e2=_T715;
# 2589
did_inserted_checks= 1;_T4C6= nv;_T4C7= e1;_T4C8= e;_T4C9= _T4C8->annot;_T4CA= e2;{
enum Cyc_Toc_PTR_ANS res=Cyc_Toc_ptr_use_to_c(_T4C6,_T4C7,_T4C9,_T4CA);_T4CB= res;_T4CC= (int)_T4CB;
if(_T4CC!=0)goto _TL284;_T4CD= e;
({__typeof__(Cyc_Toc_deref_exp_r(e1))_T71B=Cyc_Toc_deref_exp_r(e1);_T4CD->r= _T71B;});goto _TL285;
_TL284: _T4CE= res;_T4CF= (int)_T4CE;if(_T4CF!=1)goto _TL286;_T4D0= e;_T4D1= e1;
_T4D0->r= _T4D1->r;goto _TL287;_TL286: _TL287: _TL285: goto _LL7;}}case 25:{struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*)_T706;_T71A= _T71B->f1;}{struct Cyc_List_List*dles0=_T71A;{
# 2601
struct Cyc_List_List*dles=dles0;_TL28B: if(dles!=0)goto _TL289;else{goto _TL28A;}
_TL289: _T4D2= nv;_T4D3= dles;_T4D4= _T4D3->hd;_T4D5= (struct _tuple22*)_T4D4;_T4D6= *_T4D5;_T4D7= _T4D6.f1;Cyc_Toc_exp_to_c(_T4D2,_T4D7);_T4D8= dles;
# 2601
dles= _T4D8->tl;goto _TL28B;_TL28A:;}_T4D9= 
# 2603
Cyc_Toc_is_toplevel(nv);if(!_T4D9)goto _TL28C;_T4DA= e;
({__typeof__(Cyc_Toc_unresolvedmem_exp_r(0,dles0))_T71B=Cyc_Toc_unresolvedmem_exp_r(0,dles0);_T4DA->r= _T71B;});goto _TL28D;_TL28C: _TL28D: goto _LL7;}case 26:{struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct*)_T706;_T71A= _T71B->f1;_T715= _T71B->f2;_T714= _T71B->f3;_T719= _T71B->f4;}{struct Cyc_Absyn_Vardecl*vd=_T71A;struct Cyc_Absyn_Exp*e1=_T715;struct Cyc_Absyn_Exp*e2=_T714;long iszeroterm=_T719;
# 2610
Cyc_Toc_exp_to_c(nv,e1);
Cyc_Toc_exp_to_c(nv,e2);_T4DB= 
Cyc_Toc_is_toplevel(nv);if(!_T4DB)goto _TL28E;{
struct _tuple13 _T71B=Cyc_Evexp_eval_const_uint_exp(e1);long _T71C;unsigned _T71D;_T71D= _T71B.f0;_T71C= _T71B.f1;{unsigned sz=_T71D;long known=_T71C;_T4DC= nv;_T4DD= _T4DC->ctxt;_T4DE= e2;_T4DF= _T4DE->topt;_T4E0= 
_check_null(_T4DF);{void*elt_typ=Cyc_Toc_typ_to_c(_T4DD,_T4E0);
struct Cyc_List_List*es=0;_T4E1= 
# 2618
Cyc_Toc_is_zero(e2);if(_T4E1)goto _TL290;else{goto _TL292;}
_TL292: _T4E2= known;if(_T4E2)goto _TL293;else{goto _TL295;}
_TL295:{struct Cyc_Warn_String_Warn_Warg_struct _T71E;_T71E.tag= 0;({__typeof__(_tag_fat("cannot determine value of constant",sizeof(char),35U))_T71F=_tag_fat("cannot determine value of constant",sizeof(char),35U);_T71E.f1= _T71F;});_T4E3= _T71E;}{struct Cyc_Warn_String_Warn_Warg_struct _T71E=_T4E3;void*_T71F[1];_T71F[0]= & _T71E;_T4E4= e1;_T4E5= _T4E4->loc;_T4E6= _tag_fat(_T71F,sizeof(void*),1);Cyc_Warn_err2(_T4E5,_T4E6);}goto _TL294;_TL293: _TL294:{
unsigned i=0U;_TL299: if(i < sz)goto _TL297;else{goto _TL298;}
_TL297:{struct Cyc_List_List*_T71E=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple22*_T71F=_cycalloc(sizeof(struct _tuple22));_T71F->f0= 0;_T71F->f1= e2;_T4E8= (struct _tuple22*)_T71F;}_T71E->hd= _T4E8;_T71E->tl= es;_T4E7= (struct Cyc_List_List*)_T71E;}es= _T4E7;
# 2621
i= i + 1;goto _TL299;_TL298:;}_T4E9= iszeroterm;
# 2625
if(!_T4E9)goto _TL29A;_T4EA= elt_typ;_T4EB= 
Cyc_Absyn_uint_exp(0U,0U);_T4EC= Cyc_Absyn_uint_type;_T4ED= Cyc_Absyn_set_type(_T4EB,_T4EC);{struct Cyc_Absyn_Exp*ezero=Cyc_Toc_cast_it(_T4EA,_T4ED);_T4EE= es;{struct Cyc_List_List*_T71E=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple22*_T71F=_cycalloc(sizeof(struct _tuple22));
_T71F->f0= 0;_T71F->f1= ezero;_T4F0= (struct _tuple22*)_T71F;}_T71E->hd= _T4F0;_T71E->tl= 0;_T4EF= (struct Cyc_List_List*)_T71E;}es= Cyc_List_imp_append(_T4EE,_T4EF);}goto _TL29B;_TL29A: _TL29B: goto _TL291;_TL290: _TL291: _T4F1= e;
# 2630
({__typeof__(Cyc_Toc_unresolvedmem_exp_r(0,es))_T71E=Cyc_Toc_unresolvedmem_exp_r(0,es);_T4F1->r= _T71E;});}}}goto _TL28F;_TL28E: _TL28F: goto _LL7;}case 27:{struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct*)_T706;_T71A= _T71B->f1;_T4F2= _T71B->f2;_T715= (void*)_T4F2;_T719= _T71B->f3;}{struct Cyc_Absyn_Exp*e1=_T71A;void*t1=_T715;long iszeroterm=_T719;_T4F3= 
# 2639
Cyc_Toc_is_toplevel(nv);if(!_T4F3)goto _TL29C;_T4F4= e;
({__typeof__(Cyc_Toc_unresolvedmem_exp_r(0,0))_T71B=Cyc_Toc_unresolvedmem_exp_r(0,0);_T4F4->r= _T71B;});goto _TL29D;
# 2642
_TL29C: Cyc_Toc_exp_to_c(nv,e1);_TL29D: goto _LL7;}case 29:{struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct*)_T706;_T4F5= _T71B->f1;_T71A= (void*)_T4F5;_T713= _T71B->f3;}{void*st=_T71A;struct Cyc_List_List*dles=_T713;{
# 2646
struct Cyc_List_List*dles2=dles;_TL2A1: if(dles2!=0)goto _TL29F;else{goto _TL2A0;}
_TL29F: _T4F6= nv;_T4F7= dles2;_T4F8= _T4F7->hd;_T4F9= (struct _tuple22*)_T4F8;_T4FA= *_T4F9;_T4FB= _T4FA.f1;Cyc_Toc_exp_to_c(_T4F6,_T4FB);_T4FC= dles2;
# 2646
dles2= _T4FC->tl;goto _TL2A1;_TL2A0:;}_T4FD= nv;_T4FE= _T4FD->ctxt;_T4FF= old_typ;{
# 2648
void*strct_typ=Cyc_Toc_typ_to_c(_T4FE,_T4FF);_T500= e;
_T500->topt= strct_typ;_T501= 
Cyc_Toc_is_toplevel(nv);if(_T501)goto _TL2A2;else{goto _TL2A4;}
_TL2A4:{void*_T71B=Cyc_Absyn_compress(strct_typ);union Cyc_Absyn_AggrInfo _T71C;_T502= (int*)_T71B;_T503= *_T502;if(_T503!=0)goto _TL2A5;_T504= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T71B;_T505= _T504->f1;_T506= (int*)_T505;_T507= *_T506;if(_T507!=24)goto _TL2A7;_T508= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T71B;_T509= _T508->f2;if(_T509!=0)goto _TL2A9;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T71D=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T71B;_T50A= _T71D->f1;{struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_T71E=(struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*)_T50A;_T71C= _T71E->f1;}}{union Cyc_Absyn_AggrInfo aggrinfo=_T71C;
# 2653
struct Cyc_Absyn_Aggrdecl*sd=Cyc_Absyn_get_known_aggrdecl(aggrinfo);_T50B= e;{struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*_T71D=_cycalloc(sizeof(struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct));_T71D->tag= 28;_T50D= sd;
_T71D->f1= _T50D->name;_T71D->f2= 0;_T71D->f3= dles;_T71D->f4= sd;_T50C= (struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*)_T71D;}_T50B->r= (void*)_T50C;_T50E= e;
_T50E->topt= strct_typ;goto _LLF3;}_TL2A9: goto _LLF6;_TL2A7: goto _LLF6;_TL2A5: _LLF6:{struct Cyc_Warn_String_Warn_Warg_struct _T71D;_T71D.tag= 0;
# 2658
({__typeof__(_tag_fat("anonStruct type not an aggregate",sizeof(char),33U))_T71E=_tag_fat("anonStruct type not an aggregate",sizeof(char),33U);_T71D.f1= _T71E;});_T50F= _T71D;}{struct Cyc_Warn_String_Warn_Warg_struct _T71D=_T50F;void*_T71E[1];_T71E[0]= & _T71D;{int(*_T71F)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T510= _T71F;}_T511= _tag_fat(_T71E,sizeof(void*),1);_T510(_T511);}_LLF3:;}goto _TL2A3;
# 2661
_TL2A2: _T512= e;({__typeof__(Cyc_Toc_unresolvedmem_exp_r(0,dles))_T71B=Cyc_Toc_unresolvedmem_exp_r(0,dles);_T512->r= _T71B;});_TL2A3: goto _LL7;}}case 28:{struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*)_T706;_T513= (struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*)_T706;_T514= & _T513->f1;_T71A= (struct _tuple1**)_T514;_T713= _T71B->f2;_T710= _T71B->f3;_T70F= _T71B->f4;}{struct _tuple1**tdn=(struct _tuple1**)_T71A;struct Cyc_List_List*exist_ts=_T713;struct Cyc_List_List*dles=_T710;struct Cyc_Absyn_Aggrdecl*sd=_T70F;
# 2667
if(sd==0)goto _TL2AD;else{goto _TL2AE;}_TL2AE: _T515= sd;_T516= _T515->impl;if(_T516==0)goto _TL2AD;else{goto _TL2AB;}
_TL2AD:{struct Cyc_Warn_String_Warn_Warg_struct _T71B;_T71B.tag= 0;({__typeof__(_tag_fat("exp_to_c, Aggregate_e: missing aggrdecl pointer or fields",sizeof(char),58U))_T71C=_tag_fat("exp_to_c, Aggregate_e: missing aggrdecl pointer or fields",sizeof(char),58U);_T71B.f1= _T71C;});_T517= _T71B;}{struct Cyc_Warn_String_Warn_Warg_struct _T71B=_T517;void*_T71C[1];_T71C[0]= & _T71B;{int(*_T71D)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T518= _T71D;}_T519= _tag_fat(_T71C,sizeof(void*),1);_T518(_T519);}goto _TL2AC;_TL2AB: _TL2AC: _T51A= nv;_T51B= _T51A->ctxt;_T51C= old_typ;{
void*new_typ=Cyc_Toc_typ_to_c(_T51B,_T51C);{
void*_T71B=Cyc_Absyn_compress(new_typ);union Cyc_Absyn_AggrInfo _T71C;_T51D= (int*)_T71B;_T51E= *_T51D;if(_T51E!=0)goto _TL2AF;_T51F= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T71B;_T520= _T51F->f1;_T521= (int*)_T520;_T522= *_T521;if(_T522!=24)goto _TL2B1;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T71D=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T71B;_T523= _T71D->f1;{struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_T71E=(struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*)_T523;_T71C= _T71E->f1;}}{union Cyc_Absyn_AggrInfo info=_T71C;_T524= tdn;_T525= 
# 2672
Cyc_Absyn_aggr_kinded_name(info);*_T524= _T525.f1;goto _LLF8;}_TL2B1: goto _LLFB;_TL2AF: _LLFB:{struct Cyc_Warn_String_Warn_Warg_struct _T71D;_T71D.tag= 0;
# 2675
({__typeof__(_tag_fat("exp_to_c, Aggregate_e: bad type translation",sizeof(char),44U))_T71E=_tag_fat("exp_to_c, Aggregate_e: bad type translation",sizeof(char),44U);_T71D.f1= _T71E;});_T526= _T71D;}{struct Cyc_Warn_String_Warn_Warg_struct _T71D=_T526;void*_T71E[1];_T71E[0]= & _T71D;{int(*_T71F)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T527= _T71F;}_T528= _tag_fat(_T71E,sizeof(void*),1);_T527(_T528);}_LLF8:;}_T529= sd;_T52A= _T529->impl;_T52B= 
# 2682
_check_null(_T52A);{struct Cyc_List_List*typ_fields=_T52B->fields;
if(typ_fields!=0)goto _TL2B3;goto _LL7;_TL2B3:
# 2685
 _TL2B8: _T52C= _check_null(typ_fields);_T52D= _T52C->tl;if(_T52D!=0)goto _TL2B6;else{goto _TL2B7;}
_TL2B6: _T52E= typ_fields;
# 2685
typ_fields= _T52E->tl;goto _TL2B8;_TL2B7: _T52F= typ_fields;_T530= _T52F->hd;{
# 2687
struct Cyc_Absyn_Aggrfield*last_typ_field=(struct Cyc_Absyn_Aggrfield*)_T530;_T531= Cyc_Core_heap_region;_T532= e;_T533= _T532->loc;_T534= dles;_T535= sd;_T536= _T535->kind;_T537= sd;_T538= _T537->impl;_T539= _T538->fields;{
struct Cyc_List_List*fields=
Cyc_Tcutil_resolve_aggregate_designators(_T531,_T533,_T534,_T536,_T539);_T53A= 
Cyc_Toc_is_toplevel(nv);if(_T53A)goto _TL2B9;else{goto _TL2BB;}
_TL2BB: loop:{
void*_T71B=Cyc_Absyn_compress(old_typ);struct Cyc_List_List*_T71C;struct Cyc_Absyn_Vardecl*_T71D;_T53B= (int*)_T71B;_T53C= *_T53B;switch(_T53C){case 12:{struct Cyc_Absyn_SubsetType_Absyn_Type_struct*_T71E=(struct Cyc_Absyn_SubsetType_Absyn_Type_struct*)_T71B;_T71D= _T71E->f1;}{struct Cyc_Absyn_Vardecl*vd=_T71D;_T53D= vd;
# 2694
old_typ= _T53D->type;goto loop;}case 0: _T53E= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T71B;_T53F= _T53E->f1;_T540= (int*)_T53F;_T541= *_T540;if(_T541!=24)goto _TL2BD;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T71E=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T71B;_T71C= _T71E->f2;}{struct Cyc_List_List*param_ts=_T71C;{
# 2698
struct Cyc_List_List*fields2=fields;_TL2C2: if(fields2!=0)goto _TL2C0;else{goto _TL2C1;}
_TL2C0: _T542= fields2;_T543= _T542->hd;{struct _tuple42*_T71E=(struct _tuple42*)_T543;struct Cyc_Absyn_Exp*_T71F;struct Cyc_Absyn_Aggrfield*_T720;{struct _tuple42 _T721=*_T71E;_T720= _T721.f0;_T71F= _T721.f1;}{struct Cyc_Absyn_Aggrfield*aggrfield=_T720;struct Cyc_Absyn_Exp*fieldexp=_T71F;_T544= fieldexp;{
void*old_field_typ=_T544->topt;
Cyc_Toc_exp_to_c(nv,fieldexp);_T545= aggrfield;_T546= _T545->type;_T547= 
# 2703
Cyc_Toc_is_void_star_or_boxed_tvar(_T546);if(!_T547)goto _TL2C3;_T548= fieldexp;_T549= _T548->topt;_T54A= 
_check_null(_T549);_T54B= Cyc_Toc_is_pointer_or_boxed_tvar(_T54A);
# 2703
if(_T54B)goto _TL2C3;else{goto _TL2C5;}
# 2705
_TL2C5: _T54C= nv;_T54D= _T54C->ctxt;_T54E= aggrfield;_T54F= _T54E->type;{void*t=Cyc_Toc_typ_to_c(_T54D,_T54F);_T550= fieldexp;_T551= t;_T552= 
Cyc_Toc_deep_copy(fieldexp);_T553= Cyc_Toc_cast_it(_T551,_T552);_T550->r= _T553->r;_T554= fieldexp;
_T554->topt= t;}goto _TL2C4;_TL2C3: _TL2C4: _T555= sd;_T556= _T555->impl;_T557= 
# 2710
_check_null(_T556);_T558= _T557->tagged;if(!_T558)goto _TL2C6;_T559= aggrfield;{
struct _fat_ptr*n=_T559->name;_T55A= 
Cyc_Toc_get_member_offset(sd,n);_T55B= (unsigned)_T55A;_T55C= Cyc_Absyn_uint_exp(_T55B,0U);_T55D= Cyc_Absyn_uint_type;{struct Cyc_Absyn_Exp*tag_exp=Cyc_Absyn_set_type(_T55C,_T55D);
struct _tuple22*tag_dle=Cyc_Toc_make_field(Cyc_Toc_tag_sp,tag_exp);
struct _tuple22*val_dle=Cyc_Toc_make_field(Cyc_Toc_val_sp,fieldexp);
struct _tuple1*s;s= _cycalloc(sizeof(struct _tuple1));_T55E= s;({__typeof__(Cyc_Absyn_Abs_n(0,1))_T721=Cyc_Absyn_Abs_n(0,1);_T55E->f0= _T721;});_T55F= s;{struct _fat_ptr*_T721=_cycalloc(sizeof(struct _fat_ptr));{struct Cyc_String_pa_PrintArg_struct _T722;_T722.tag= 0;_T563= sd;_T564= _T563->name;_T565= *_T564;_T566= _T565.f1;
_T722.f1= *_T566;_T562= _T722;}{struct Cyc_String_pa_PrintArg_struct _T722=_T562;{struct Cyc_String_pa_PrintArg_struct _T723;_T723.tag= 0;_T568= n;_T723.f1= *_T568;_T567= _T723;}{struct Cyc_String_pa_PrintArg_struct _T723=_T567;void*_T724[2];_T724[0]= & _T722;_T724[1]= & _T723;_T569= _tag_fat("_union_%s_%s",sizeof(char),13U);_T56A= _tag_fat(_T724,sizeof(void*),2);_T561= Cyc_aprintf(_T569,_T56A);}}*_T721= _T561;_T560= (struct _fat_ptr*)_T721;}_T55F->f1= _T560;{struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*_T721=_cycalloc(sizeof(struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct));_T721->tag= 28;
_T721->f1= s;_T721->f2= 0;{struct _tuple22*_T722[2];_T722[0]= tag_dle;_T722[1]= val_dle;_T56D= _tag_fat(_T722,sizeof(struct _tuple22*),2);_T56C= Cyc_List_list(_T56D);}_T721->f3= _T56C;_T721->f4= 0;_T56B= (struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*)_T721;}_T56E= (void*)_T56B;{struct Cyc_Absyn_Exp*aggr_exp=Cyc_Absyn_new_exp(_T56E,0U);_T56F= aggr_exp;_T570= nv;_T571= _T570->ctxt;_T572= old_typ;_T573= n;_T574= 
Cyc_Toc_tagged_union_field_struct(_T571,_T572,_T573);Cyc_Absyn_set_type(_T56F,_T574);{
struct _tuple22*u_dle=Cyc_Toc_make_field(n,aggr_exp);_T575= e;{struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*_T721=_cycalloc(sizeof(struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct));_T721->tag= 28;_T577= tdn;
_T721->f1= *_T577;_T721->f2= 0;{struct _tuple22*_T722[1];_T722[0]= u_dle;_T579= _tag_fat(_T722,sizeof(struct _tuple22*),1);_T578= Cyc_List_list(_T579);}_T721->f3= _T578;_T721->f4= sd;_T576= (struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*)_T721;}_T575->r= (void*)_T576;}}}}goto _TL2C7;_TL2C6: _TL2C7: _T57A= 
# 2726
Cyc_Toc_is_abstract_type(old_typ);if(!_T57A)goto _TL2C8;if(last_typ_field!=aggrfield)goto _TL2C8;_T57B= sd;_T57C= _T57B->impl;_T57D= 
_check_null(_T57C);_T57E= _T57D->exist_vars;_T57F= exist_ts;_T580= Cyc_List_zip(_T57E,_T57F);_T581= sd;_T582= _T581->tvs;_T583= param_ts;_T584= Cyc_List_zip(_T582,_T583);{struct Cyc_List_List*inst=Cyc_List_append(_T580,_T584);
struct Cyc_List_List*new_fields=0;_T585= sd;_T586= _T585->impl;_T587= 
_check_null(_T586);{struct Cyc_List_List*fs=_T587->fields;_TL2CD: if(fs!=0)goto _TL2CB;else{goto _TL2CC;}
_TL2CB: _T588= fs;_T589= _T588->hd;{struct Cyc_Absyn_Aggrfield*old_f=(struct Cyc_Absyn_Aggrfield*)_T589;_T58A= inst;_T58B= old_f;_T58C= _T58B->type;{
void*old_ftyp=Cyc_Tcutil_substitute(_T58A,_T58C);_T58D= old_f;_T58E= nv;_T58F= _T58E->ctxt;_T590= 
Cyc_Tcutil_substitute(inst,old_ftyp);_T591= Cyc_Toc_typ_to_c(_T58F,_T590);{struct Cyc_Absyn_Aggrfield*new_f=Cyc_Toc_aggrfield_to_c(_T58D,_T591);{struct Cyc_List_List*_T721=_cycalloc(sizeof(struct Cyc_List_List));
_T721->hd= new_f;_T721->tl= new_fields;_T592= (struct Cyc_List_List*)_T721;}new_fields= _T592;_T593= fs;_T594= _T593->tl;
# 2739
if(_T594!=0)goto _TL2CE;_T595= new_f;_T596= _T595->type;{
void*_T721=Cyc_Absyn_compress(_T596);struct Cyc_Absyn_ArrayInfo _T722;_T597= (int*)_T721;_T598= *_T597;if(_T598!=5)goto _TL2D0;{struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T723=(struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_T721;_T722= _T723->f1;}{struct Cyc_Absyn_ArrayInfo ai=_T722;_T599= ai;_T59A= _T599.num_elts;_T59B= 
# 2742
_check_null(_T59A);_T59C= Cyc_Evexp_c_can_eval(_T59B);if(_T59C)goto _TL2D2;else{goto _TL2D4;}
_TL2D4:{struct Cyc_Absyn_ArrayInfo ai2=ai;_T59D= 
Cyc_Absyn_uint_exp(0U,0U);_T59E= Cyc_Absyn_uint_type;({__typeof__(Cyc_Absyn_set_type(_T59D,_T59E))_T723=Cyc_Absyn_set_type(_T59D,_T59E);ai2.num_elts= _T723;});_T59F= new_f;{struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T723=_cycalloc(sizeof(struct Cyc_Absyn_ArrayType_Absyn_Type_struct));_T723->tag= 5;
# 2746
_T723->f1= ai2;_T5A0= (struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_T723;}_T59F->type= (void*)_T5A0;}goto _TL2D3;_TL2D2: _TL2D3: goto _LL107;}_TL2D0: _T5A1= fieldexp;_T5A2= _T5A1->topt;
# 2752
if(_T5A2!=0)goto _TL2D5;goto _LL107;_TL2D5: _T5A3= fieldexp;_T5A4= _T5A3->topt;{
# 2754
void*_T723=Cyc_Absyn_compress(_T5A4);_T5A5= (int*)_T723;_T5A6= *_T5A5;if(_T5A6!=0)goto _TL2D7;_T5A7= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T723;_T5A8= _T5A7->f1;_T5A9= (int*)_T5A8;_T5AA= *_T5A9;if(_T5AA!=24)goto _TL2D9;_T5AB= new_f;_T5AC= fieldexp;_T5AD= _T5AC->topt;
# 2756
({__typeof__(_check_null(_T5AD))_T724=_check_null(_T5AD);_T5AB->type= _T724;});goto _LL10C;_TL2D9: goto _LL10F;_TL2D7: _LL10F: goto _LL10C;_LL10C:;}goto _LL107;_LL107:;}_T5AE= old_f;_T5AF= _T5AE->type;_T5B0= 
# 2766
Cyc_Tcutil_is_array_type(_T5AF);if(_T5B0)goto _TL2DB;else{goto _TL2DD;}_TL2DD: _T5B1= & Cyc_Kinds_ak;_T5B2= (struct Cyc_Absyn_Kind*)_T5B1;_T5B3= old_f;_T5B4= _T5B3->type;_T5B5= 
Cyc_Tcutil_type_kind(_T5B4);_T5B6= Cyc_Kinds_kind_leq(_T5B2,_T5B5);
# 2766
if(!_T5B6)goto _TL2DB;_T5B7= new_f;{struct Cyc_List_List*_T721=_cycalloc(sizeof(struct Cyc_List_List));{struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct*_T722=_cycalloc(sizeof(struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct));_T722->tag= 7;
# 2768
_T722->f1= 0;_T5B9= (struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct*)_T722;}_T721->hd= (void*)_T5B9;_T5BA= new_f;_T721->tl= _T5BA->attributes;_T5B8= (struct Cyc_List_List*)_T721;}_T5B7->attributes= _T5B8;goto _TL2DC;_TL2DB: _TL2DC: goto _TL2CF;_TL2CE: _TL2CF:;}}}_T5BB= fs;
# 2729
fs= _T5BB->tl;goto _TL2CD;_TL2CC:;}{struct _fat_ptr*_T721=_cycalloc(sizeof(struct _fat_ptr));{struct Cyc_Int_pa_PrintArg_struct _T722;_T722.tag= 1;_T5BF= nv;_T5C0= _T5BF->ctxt;_T5C1= 
# 2772
_check_null(_T5C0);_T5C2= _T5C1->tuple_type_counter;_T5C1->tuple_type_counter= _T5C2 + 1;_T5C3= _T5C2;_T722.f1= (unsigned long)_T5C3;_T5BE= _T722;}{struct Cyc_Int_pa_PrintArg_struct _T722=_T5BE;void*_T723[1];_T723[0]= & _T722;_T5C4= _tag_fat("_genStruct%d",sizeof(char),13U);_T5C5= _tag_fat(_T723,sizeof(void*),1);_T5BD= Cyc_aprintf(_T5C4,_T5C5);}*_T721= _T5BD;_T5BC= (struct _fat_ptr*)_T721;}_T5C6= 
Cyc_List_imp_rev(new_fields);
# 2771
sd= 
Cyc_Toc_make_c_struct_defn(_T5BC,_T5C6);_T5C7= tdn;_T5C8= sd;
# 2774
*_T5C7= _T5C8->name;_T5C9= nv;_T5CA= _T5C9->ctxt;_T5CB= sd;
Cyc_Toc_trans_aggrdecl(_T5CA,_T5CB);_T5CC= e;{struct Cyc_Absyn_Aggrdecl**_T721=_cycalloc(sizeof(struct Cyc_Absyn_Aggrdecl*));
# 2778
*_T721= sd;_T5CD= (struct Cyc_Absyn_Aggrdecl**)_T721;}_T5CE= Cyc_Absyn_KnownAggr(_T5CD);({__typeof__(Cyc_Absyn_aggr_type(_T5CE,0))_T721=Cyc_Absyn_aggr_type(_T5CE,0);_T5CC->topt= _T721;});}goto _TL2C9;_TL2C8: _TL2C9:;}}}_T5CF= fields2;
# 2698
fields2= _T5CF->tl;goto _TL2C2;_TL2C1:;}goto _LLFD;}_TL2BD: goto _LL102;default: _LL102:{struct Cyc_Warn_String_Warn_Warg_struct _T71E;_T71E.tag= 0;
# 2783
({__typeof__(_tag_fat("exp_to_c, Aggregate_e: bad struct type",sizeof(char),39U))_T71F=_tag_fat("exp_to_c, Aggregate_e: bad struct type",sizeof(char),39U);_T71E.f1= _T71F;});_T5D0= _T71E;}{struct Cyc_Warn_String_Warn_Warg_struct _T71E=_T5D0;void*_T71F[1];_T71F[0]= & _T71E;{int(*_T720)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T5D1= _T720;}_T5D2= _tag_fat(_T71F,sizeof(void*),1);_T5D1(_T5D2);}}_LLFD:;}goto _TL2BA;
# 2791
_TL2B9: _T5D3= sd;_T5D4= _T5D3->impl;_T5D5= _check_null(_T5D4);_T5D6= _T5D5->tagged;if(!_T5D6)goto _TL2DE;_T5D7= 
# 2793
_check_null(fields);_T5D8= _T5D7->hd;{struct _tuple42*_T71B=(struct _tuple42*)_T5D8;struct Cyc_Absyn_Exp*_T71C;struct Cyc_Absyn_Aggrfield*_T71D;{struct _tuple42 _T71E=*_T71B;_T71D= _T71E.f0;_T71C= _T71E.f1;}{struct Cyc_Absyn_Aggrfield*field=_T71D;struct Cyc_Absyn_Exp*fieldexp=_T71C;_T5D9= fieldexp;_T5DA= _T5D9->topt;{
void*fieldexp_type=_check_null(_T5DA);_T5DB= field;{
void*fieldtyp=_T5DB->type;
Cyc_Toc_exp_to_c(nv,fieldexp);_T5DC= 
Cyc_Toc_is_void_star_or_boxed_tvar(fieldtyp);if(!_T5DC)goto _TL2E0;_T5DD= Cyc_Toc_is_void_star_or_boxed_tvar(fieldexp_type);if(_T5DD)goto _TL2E0;else{goto _TL2E2;}
_TL2E2: _T5DE= fieldexp;_T5DF= nv;_T5E0= _T5DF->ctxt;_T5E1= Cyc_Toc_void_star_type(_T5E0);_T5E2= Cyc_Toc_deep_copy(fieldexp);({__typeof__(Cyc_Toc_cast_it_r(_T5E1,_T5E2))_T71E=Cyc_Toc_cast_it_r(_T5E1,_T5E2);_T5DE->r= _T71E;});goto _TL2E1;_TL2E0: _TL2E1: _T5E3= sd;_T5E4= field;_T5E5= _T5E4->name;{
# 2800
int i=Cyc_Toc_get_member_offset(_T5E3,_T5E5);_T5E6= 
Cyc_Absyn_signed_int_exp(i,0U);_T5E7= Cyc_Absyn_sint_type;{struct Cyc_Absyn_Exp*field_tag_exp=Cyc_Absyn_set_type(_T5E6,_T5E7);{struct _tuple22*_T71E[2];{struct _tuple22*_T71F=_cycalloc(sizeof(struct _tuple22));
_T71F->f0= 0;_T71F->f1= field_tag_exp;_T5E9= (struct _tuple22*)_T71F;}_T71E[0]= _T5E9;{struct _tuple22*_T71F=_cycalloc(sizeof(struct _tuple22));_T71F->f0= 0;_T71F->f1= fieldexp;_T5EA= (struct _tuple22*)_T71F;}_T71E[1]= _T5EA;_T5EB= _tag_fat(_T71E,sizeof(struct _tuple22*),2);_T5E8= Cyc_List_list(_T5EB);}{struct Cyc_List_List*newdles=_T5E8;
struct Cyc_Absyn_Exp*umem=Cyc_Absyn_unresolvedmem_exp(0,newdles,0U);_T5EC= e;{struct _tuple22*_T71E[1];_T5EE= field;_T5EF= _T5EE->name;_T5F0= umem;({__typeof__(
Cyc_Toc_make_field(_T5EF,_T5F0))_T71F=Cyc_Toc_make_field(_T5EF,_T5F0);_T71E[0]= _T71F;});_T5F1= _tag_fat(_T71E,sizeof(struct _tuple22*),1);_T5ED= Cyc_List_list(_T5F1);}({__typeof__(Cyc_Toc_unresolvedmem_exp_r(0,_T5ED))_T71E=Cyc_Toc_unresolvedmem_exp_r(0,_T5ED);_T5EC->r= _T71E;});}}}}}}}goto _TL2DF;
# 2807
_TL2DE:{struct Cyc_List_List*newdles=0;_T5F2= sd;_T5F3= _T5F2->impl;{
struct Cyc_List_List*sdfields=_T5F3->fields;
_TL2E6: if(sdfields!=0)goto _TL2E4;else{goto _TL2E5;}
_TL2E4:{struct Cyc_List_List*fields2=fields;_TL2EA: if(fields2!=0)goto _TL2E8;else{goto _TL2E9;}
_TL2E8: _T5F4= fields2;_T5F5= _T5F4->hd;_T5F6= (struct _tuple42*)_T5F5;_T5F7= *_T5F6;_T5F8= _T5F7.f0;_T5F9= sdfields;_T5FA= _T5F9->hd;_T5FB= (struct Cyc_Absyn_Aggrfield*)_T5FA;if(_T5F8!=_T5FB)goto _TL2EB;_T5FC= fields2;_T5FD= _T5FC->hd;{
struct _tuple42*_T71B=(struct _tuple42*)_T5FD;struct Cyc_Absyn_Exp*_T71C;struct Cyc_Absyn_Aggrfield*_T71D;{struct _tuple42 _T71E=*_T71B;_T71D= _T71E.f0;_T71C= _T71E.f1;}{struct Cyc_Absyn_Aggrfield*field=_T71D;struct Cyc_Absyn_Exp*fieldexp=_T71C;_T5FE= nv;_T5FF= _T5FE->ctxt;_T600= field;_T601= _T600->type;{
void*fieldtyp=Cyc_Toc_typ_to_c(_T5FF,_T601);_T602= nv;_T603= _T602->ctxt;_T604= fieldexp;_T605= _T604->topt;_T606= 
_check_null(_T605);{void*fieldexp_typ=Cyc_Toc_typ_to_c(_T603,_T606);
Cyc_Toc_exp_to_c(nv,fieldexp);_T607= 
# 2819
Cyc_Unify_unify(fieldtyp,Cyc_Absyn_void_type);if(_T607)goto _TL2ED;else{goto _TL2EF;}_TL2EF: _T608= Cyc_Unify_unify(fieldtyp,fieldexp_typ);if(_T608)goto _TL2ED;else{goto _TL2F0;}
# 2821
_TL2F0: _T609= Cyc_Tcutil_is_arithmetic_type(fieldtyp);if(_T609)goto _TL2F4;else{goto _TL2F3;}_TL2F4: _T60A= Cyc_Tcutil_is_arithmetic_type(fieldexp_typ);if(_T60A)goto _TL2F1;else{goto _TL2F3;}
_TL2F3: _T60B= fieldtyp;_T60C= Cyc_Toc_deep_copy(fieldexp);fieldexp= Cyc_Toc_cast_it(_T60B,_T60C);goto _TL2F2;_TL2F1: _TL2F2: goto _TL2EE;_TL2ED: _TL2EE:{struct Cyc_List_List*_T71E=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple22*_T71F=_cycalloc(sizeof(struct _tuple22));
_T71F->f0= 0;_T71F->f1= fieldexp;_T60E= (struct _tuple22*)_T71F;}_T71E->hd= _T60E;_T71E->tl= newdles;_T60D= (struct Cyc_List_List*)_T71E;}newdles= _T60D;goto _TL2E9;}}}}_TL2EB: _T60F= fields2;
# 2810
fields2= _T60F->tl;goto _TL2EA;_TL2E9:;}_T610= sdfields;
# 2809
sdfields= _T610->tl;goto _TL2E6;_TL2E5: _T611= e;_T612= 
# 2827
Cyc_List_imp_rev(newdles);({__typeof__(Cyc_Toc_unresolvedmem_exp_r(0,_T612))_T71B=Cyc_Toc_unresolvedmem_exp_r(0,_T612);_T611->r= _T71B;});}}_TL2DF: _TL2BA: goto _LL7;}}}}}case 30:{struct Cyc_Absyn_Datatype_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_Datatype_e_Absyn_Raw_exp_struct*)_T706;_T713= _T71B->f1;_T70E= _T71B->f2;_T70D= _T71B->f3;}{struct Cyc_List_List*es=_T713;struct Cyc_Absyn_Datatypedecl*tud=_T70E;struct Cyc_Absyn_Datatypefield*tuf=_T70D;_T613= tuf;{
# 2834
struct Cyc_List_List*tqts=_T613->typs;{
struct Cyc_List_List*es2=es;_TL2F8: if(es2!=0)goto _TL2F6;else{goto _TL2F7;}
_TL2F6: _T614= es2;_T615= _T614->hd;{struct Cyc_Absyn_Exp*cur_e=(struct Cyc_Absyn_Exp*)_T615;_T616= cur_e;_T617= _T616->topt;{
void*cur_e_typ=_check_null(_T617);_T618= nv;_T619= _T618->ctxt;_T61A= 
_check_null(tqts);_T61B= _T61A->hd;_T61C= (struct _tuple28*)_T61B;_T61D= *_T61C;_T61E= _T61D.f1;{void*field_typ=Cyc_Toc_typ_to_c(_T619,_T61E);
Cyc_Toc_exp_to_c(nv,cur_e);_T61F= 
Cyc_Toc_is_void_star_or_boxed_tvar(field_typ);if(!_T61F)goto _TL2F9;_T620= Cyc_Toc_is_pointer_or_boxed_tvar(cur_e_typ);if(_T620)goto _TL2F9;else{goto _TL2FB;}
_TL2FB: _T621= cur_e;_T622= field_typ;_T623= Cyc_Toc_deep_copy(cur_e);_T624= Cyc_Toc_cast_it(_T622,_T623);_T621->r= _T624->r;goto _TL2FA;_TL2F9: _TL2FA:;}}}_T625= es2;
# 2835
es2= _T625->tl;_T626= tqts;tqts= _T626->tl;goto _TL2F8;_TL2F7:;}_T628= tud;_T629= _T628->is_extensible;
# 2844
if(!_T629)goto _TL2FC;_T62A= tuf;_T62B= _T62A->name;_T62C= 
Cyc_Absyn_var_exp(_T62B,0U);_T62D= Cyc_Absyn_cstar_type(Cyc_Absyn_char_type,Cyc_Toc_mt_tq);_T627= Cyc_Absyn_set_type(_T62C,_T62D);goto _TL2FD;_TL2FC: _T62E= tud;_T62F= tuf;_T630= _T62F->name;_T627= 
Cyc_Toc_datatype_tag(_T62E,_T630);_TL2FD: {
# 2844
struct Cyc_Absyn_Exp*tag_exp=_T627;_T631= 
# 2849
Cyc_Toc_is_toplevel(nv);if(_T631)goto _TL2FE;else{goto _TL300;}
# 2851
_TL300:{struct Cyc_List_List*dles=0;{
int i=1;_TL304: if(es!=0)goto _TL302;else{goto _TL303;}
_TL302:{struct Cyc_List_List*_T71B=_cycalloc(sizeof(struct Cyc_List_List));_T633= Cyc_Absyn_fieldname(i);_T634= es;_T635= _T634->hd;_T636= (struct Cyc_Absyn_Exp*)_T635;({__typeof__(Cyc_Toc_make_field(_T633,_T636))_T71C=Cyc_Toc_make_field(_T633,_T636);_T71B->hd= _T71C;});_T71B->tl= dles;_T632= (struct Cyc_List_List*)_T71B;}dles= _T632;_T637= es;
# 2852
es= _T637->tl;i= i + 1;goto _TL304;_TL303:;}{
# 2857
struct _tuple22*tag_dle=Cyc_Toc_make_field(Cyc_Toc_tag_sp,tag_exp);_T638= e;{struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*_T71B=_cycalloc(sizeof(struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct));_T71B->tag= 28;_T63A= nv;_T63B= _T63A->ctxt;_T63C= tuf;_T63D= _T63C->name;_T63E= tud;_T63F= _T63E->name;
({__typeof__(Cyc_Toc_collapse_qvars(_T63B,_T63D,_T63F))_T71C=Cyc_Toc_collapse_qvars(_T63B,_T63D,_T63F);_T71B->f1= _T71C;});_T71B->f2= 0;{struct Cyc_List_List*_T71C=_cycalloc(sizeof(struct Cyc_List_List));
_T71C->hd= tag_dle;({__typeof__(Cyc_List_imp_rev(dles))_T71D=Cyc_List_imp_rev(dles);_T71C->tl= _T71D;});_T640= (struct Cyc_List_List*)_T71C;}_T71B->f3= _T640;_T71B->f4= 0;_T639= (struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*)_T71B;}
# 2858
_T638->r= (void*)_T639;}}goto _TL2FF;
# 2863
_TL2FE:{struct Cyc_List_List*dles=0;
_TL308: if(es!=0)goto _TL306;else{goto _TL307;}
_TL306:{struct Cyc_List_List*_T71B=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple22*_T71C=_cycalloc(sizeof(struct _tuple22));_T71C->f0= 0;_T643= es;_T644= _T643->hd;_T71C->f1= (struct Cyc_Absyn_Exp*)_T644;_T642= (struct _tuple22*)_T71C;}_T71B->hd= _T642;_T71B->tl= dles;_T641= (struct Cyc_List_List*)_T71B;}dles= _T641;_T645= es;
# 2864
es= _T645->tl;goto _TL308;_TL307: _T646= e;{struct Cyc_List_List*_T71B=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple22*_T71C=_cycalloc(sizeof(struct _tuple22));
# 2866
_T71C->f0= 0;_T71C->f1= tag_exp;_T648= (struct _tuple22*)_T71C;}_T71B->hd= _T648;({__typeof__(Cyc_List_imp_rev(dles))_T71C=Cyc_List_imp_rev(dles);_T71B->tl= _T71C;});_T647= (struct Cyc_List_List*)_T71B;}({__typeof__(Cyc_Toc_unresolvedmem_exp_r(0,_T647))_T71B=Cyc_Toc_unresolvedmem_exp_r(0,_T647);_T646->r= _T71B;});}_TL2FF: goto _LL7;}}}case 31: goto _LL51;case 32: _LL51: goto _LL7;case 33:{struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct*)_T706;_T649= _T71B->f1;_T70C= _T649.mknd;_T64A= _T71B->f1;_T714= _T64A.rgn;_T64B= _T71B->f1;_T70B= _T64B.aqual;_T64C= _T71B->f1;_T70A= _T64C.elt_type;_T64D= _T71B->f1;_T709= _T64D.num_elts;_T64E= _T71B->f1;_T719= _T64E.fat_result;_T64F= _T71B->f1;_T718= _T64F.inline_call;}{enum Cyc_Absyn_MallocKind mknd=_T70C;struct Cyc_Absyn_Exp*rgnopt=_T714;struct Cyc_Absyn_Exp*aqopt=_T70B;void**topt=_T70A;struct Cyc_Absyn_Exp*num_elts=_T709;long is_fat=_T719;long inline_call=_T718;_T650= nv;_T651= _T650->ctxt;_T652= 
# 2875
_check_null(topt);_T653= *_T652;{void*t_c=Cyc_Toc_typ_to_c(_T651,_T653);
Cyc_Toc_exp_to_c(nv,num_elts);{
struct _tuple1*x=0;
struct Cyc_Absyn_Exp*pexp;
struct Cyc_Absyn_Exp*num_elts2=num_elts;_T654= is_fat;
if(!_T654)goto _TL309;_T655= nv;_T656= _T655->ctxt;
x= Cyc_Toc_temp_var(_T656);
num_elts2= Cyc_Absyn_var_exp(x,0U);goto _TL30A;_TL309: _TL30A: _T657= mknd;_T658= (int)_T657;
# 2884
if(_T658!=1)goto _TL30B;
if(rgnopt==0)goto _TL311;else{goto _TL310;}_TL311: if(aqopt==0)goto _TL30F;else{goto _TL310;}_TL310: _T659= Cyc_Flags_no_regions;if(_T659)goto _TL30F;else{goto _TL30D;}
_TL30F: _T65A= nv;_T65B= _T65A->ctxt;_T65C= topt;_T65D= *_T65C;_T65E= Cyc_Absyn_sizeoftype_exp(t_c,0U);_T65F= Cyc_Absyn_uint_type;_T660= Cyc_Absyn_set_type(_T65E,_T65F);_T661= num_elts2;pexp= Cyc_Toc_calloc_exp(_T65B,_T65D,_T660,_T661);goto _TL30E;
# 2888
_TL30D: if(aqopt==0)goto _TL312;
Cyc_Toc_exp_to_c(nv,aqopt);goto _TL313;_TL312: _TL313:
 if(rgnopt==0)goto _TL314;
Cyc_Toc_exp_to_c(nv,rgnopt);_T662= nv;_T663= _T662->ctxt;_T664= rgnopt;
if(aqopt!=0)goto _TL316;_T666= nv;_T667= _T666->ctxt;_T665= Cyc_Toc_aliasable_qual_exp(_T667);goto _TL317;_TL316: _T665= aqopt;_TL317: _T668= 
Cyc_Absyn_sizeoftype_exp(t_c,0U);_T669= Cyc_Absyn_uint_type;_T66A= Cyc_Absyn_set_type(_T668,_T669);_T66B= num_elts2;
# 2892
pexp= Cyc_Toc_rcalloc_exp(_T663,_T664,_T665,_T66A,_T66B);goto _TL315;
# 2895
_TL314: _T66C= nv;_T66D= _T66C->ctxt;_T66E= aqopt;_T66F= Cyc_Absyn_sizeoftype_exp(t_c,0U);_T670= Cyc_Absyn_uint_type;_T671= Cyc_Absyn_set_type(_T66F,_T670);_T672= num_elts2;pexp= Cyc_Toc_aqcalloc_exp(_T66D,_T66E,_T671,_T672);_TL315: _TL30E: goto _TL30C;
# 2899
_TL30B: if(rgnopt==0)goto _TL31C;else{goto _TL31B;}_TL31C: if(aqopt==0)goto _TL31A;else{goto _TL31B;}_TL31B: _T673= Cyc_Flags_no_regions;if(_T673)goto _TL31A;else{goto _TL318;}
_TL31A: _T674= nv;_T675= _T674->ctxt;_T676= topt;_T677= *_T676;_T678= num_elts2;pexp= Cyc_Toc_malloc_exp(_T675,_T677,_T678);goto _TL319;
# 2902
_TL318: if(aqopt==0)goto _TL31D;
Cyc_Toc_exp_to_c(nv,aqopt);goto _TL31E;_TL31D: _TL31E:
 if(rgnopt==0)goto _TL31F;
Cyc_Toc_exp_to_c(nv,rgnopt);_T679= mknd;_T67A= (int)_T679;
if(_T67A!=2)goto _TL321;_T67B= nv;_T67C= _T67B->ctxt;_T67D= rgnopt;_T67E= num_elts2;
pexp= Cyc_Toc_rvmalloc_exp(_T67C,_T67D,_T67E);goto _TL322;
# 2909
_TL321: _T680= inline_call;if(!_T680)goto _TL323;_T67F= Cyc_Toc_rmalloc_inline_exp;goto _TL324;_TL323: _T67F= Cyc_Toc_rmalloc_exp;_TL324:{struct Cyc_Absyn_Exp*(*fn_e)(struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*)=_T67F;_T681= nv;_T682= _T681->ctxt;_T683= rgnopt;
if(aqopt!=0)goto _TL325;_T685= nv;_T686= _T685->ctxt;_T684= Cyc_Toc_aliasable_qual_exp(_T686);goto _TL326;_TL325: _T684= aqopt;_TL326: _T687= num_elts2;pexp= fn_e(_T682,_T683,_T684,_T687);}_TL322: goto _TL320;
# 2913
_TL31F: _T688= nv;_T689= _T688->ctxt;_T68A= aqopt;_T68B= num_elts2;pexp= Cyc_Toc_aqmalloc_exp(_T689,_T68A,_T68B);_TL320: _TL319: _TL30C: _T68C= is_fat;
# 2916
if(!_T68C)goto _TL327;_T68E= mknd;_T68F= (int)_T68E;
# 2918
if(_T68F!=1)goto _TL329;_T690= Cyc_Absyn_sizeoftype_exp(t_c,0U);_T691= Cyc_Absyn_uint_type;_T68D= Cyc_Absyn_set_type(_T690,_T691);goto _TL32A;_TL329: _T692= Cyc_Absyn_uint_exp(1U,0U);_T693= Cyc_Absyn_uint_type;_T68D= Cyc_Absyn_set_type(_T692,_T693);_TL32A:{
# 2917
struct Cyc_Absyn_Exp*elt_sz=_T68D;{struct Cyc_Absyn_Exp*_T71B[3];
# 2919
_T71B[0]= pexp;_T71B[1]= elt_sz;_T71B[2]= num_elts2;_T695= Cyc_Toc__tag_fat_e;_T696= _tag_fat(_T71B,sizeof(struct Cyc_Absyn_Exp*),3);_T694= Cyc_Toc_fncall_exp_dl(_T695,_T696);}{struct Cyc_Absyn_Exp*rexp=_T694;_T697= rexp;_T698= nv;_T699= _T698->ctxt;
({__typeof__(Cyc_Toc_fat_ptr_type(_T699))_T71B=Cyc_Toc_fat_ptr_type(_T699);_T697->topt= _T71B;});_T69A= x;_T69B= Cyc_Absyn_uint_type;_T69C= num_elts;_T69D= 
Cyc_Absyn_exp_stmt(rexp,0U);{struct Cyc_Absyn_Stmt*s=Cyc_Absyn_declare_stmt(_T69A,_T69B,_T69C,_T69D,0U);_T69E= e;
({__typeof__(Cyc_Toc_stmt_exp_r(s))_T71B=Cyc_Toc_stmt_exp_r(s);_T69E->r= _T71B;});}}}goto _TL328;
# 2924
_TL327: _T69F= e;_T6A0= nv;_T6A1= _T6A0->ctxt;_T6A2= old_typ;_T6A3= Cyc_Toc_typ_to_c(_T6A1,_T6A2);_T6A4= pexp;({__typeof__(Cyc_Toc_cast_it_r(_T6A3,_T6A4))_T71B=Cyc_Toc_cast_it_r(_T6A3,_T6A4);_T69F->r= _T71B;});_TL328: goto _LL7;}}}case 34:{struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct*)_T706;_T714= _T71B->f1;_T70B= _T71B->f2;}{struct Cyc_Absyn_Exp*e1=_T714;struct Cyc_Absyn_Exp*e2=_T70B;_T6A5= e1;_T6A6= _T6A5->topt;{
# 2939
void*e1_old_typ=_check_null(_T6A6);_T6A7= e2;_T6A8= _T6A7->topt;{
void*e2_old_typ=_check_null(_T6A8);_T6A9= 
Cyc_Tcutil_is_boxed(e1_old_typ);if(_T6A9)goto _TL32B;else{goto _TL32D;}_TL32D: _T6AA= Cyc_Tcutil_is_pointer_type(e1_old_typ);if(_T6AA)goto _TL32B;else{goto _TL32E;}
_TL32E:{struct Cyc_Warn_String_Warn_Warg_struct _T71B;_T71B.tag= 0;({__typeof__(_tag_fat("Swap_e: is_pointer_or_boxed: not a pointer or boxed type",sizeof(char),57U))_T71C=_tag_fat("Swap_e: is_pointer_or_boxed: not a pointer or boxed type",sizeof(char),57U);_T71B.f1= _T71C;});_T6AB= _T71B;}{struct Cyc_Warn_String_Warn_Warg_struct _T71B=_T6AB;void*_T71C[1];_T71C[0]= & _T71B;{int(*_T71D)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T6AC= _T71D;}_T6AD= _tag_fat(_T71C,sizeof(void*),1);_T6AC(_T6AD);}goto _TL32C;_TL32B: _TL32C: _T6AE= e;{
# 2947
unsigned loc=_T6AE->loc;_T6AF= nv;_T6B0= _T6AF->ctxt;{
struct _tuple1*v1=Cyc_Toc_temp_var(_T6B0);
struct Cyc_Absyn_Exp*v1e=Cyc_Absyn_var_exp(v1,loc);_T6B1= v1e;
_T6B1->topt= e1_old_typ;_T6B2= nv;_T6B3= _T6B2->ctxt;{
struct _tuple1*v2=Cyc_Toc_temp_var(_T6B3);
struct Cyc_Absyn_Exp*v2e=Cyc_Absyn_var_exp(v2,loc);_T6B4= v2e;
_T6B4->topt= e2_old_typ;_T6B5= 
# 2955
Cyc_Toc_deep_copy(e1);_T6B6= v2e;_T6B7= loc;{struct Cyc_Absyn_Exp*s1e=Cyc_Absyn_assign_exp(_T6B5,_T6B6,_T6B7);_T6B8= s1e;
_T6B8->topt= e1_old_typ;{
struct Cyc_Absyn_Stmt*s1=Cyc_Absyn_exp_stmt(s1e,loc);_T6B9= 
Cyc_Toc_deep_copy(e2);_T6BA= v1e;_T6BB= loc;{struct Cyc_Absyn_Exp*s2e=Cyc_Absyn_assign_exp(_T6B9,_T6BA,_T6BB);_T6BC= s2e;
_T6BC->topt= e2_old_typ;{
struct Cyc_Absyn_Stmt*s2=Cyc_Absyn_exp_stmt(s2e,loc);_T6BD= v1;_T6BE= e1_old_typ;_T6BF= e1;_T6C0= v2;_T6C1= e2_old_typ;_T6C2= e2;_T6C3= 
# 2964
Cyc_Absyn_seq_stmt(s1,s2,loc);_T6C4= loc;_T6C5= 
# 2963
Cyc_Absyn_declare_stmt(_T6C0,_T6C1,_T6C2,_T6C3,_T6C4);_T6C6= loc;{
# 2962
struct Cyc_Absyn_Stmt*s=Cyc_Absyn_declare_stmt(_T6BD,_T6BE,_T6BF,_T6C5,_T6C6);
# 2966
Cyc_Toc_stmt_to_c(nv,s);_T6C7= e;
({__typeof__(Cyc_Toc_stmt_exp_r(s))_T71B=Cyc_Toc_stmt_exp_r(s);_T6C7->r= _T71B;});goto _LL7;}}}}}}}}}}}case 37:{struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct*)_T706;_T714= _T71B->f1;_T708= _T71B->f2;}{struct Cyc_Absyn_Exp*e1=_T714;struct _fat_ptr*f=_T708;_T6C8= e1;_T6C9= _T6C8->topt;_T6CA= 
# 2971
_check_null(_T6C9);{void*e1_typ=Cyc_Absyn_compress(_T6CA);
Cyc_Toc_exp_to_c(nv,e1);{struct Cyc_Absyn_Aggrdecl*_T71B;_T6CB= e1_typ;_T6CC= (int*)_T6CB;_T6CD= *_T6CC;if(_T6CD!=0)goto _TL32F;_T6CE= e1_typ;_T6CF= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T6CE;_T6D0= _T6CF->f1;_T6D1= (int*)_T6D0;_T6D2= *_T6D1;if(_T6D2!=24)goto _TL331;_T6D3= e1_typ;_T6D4= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T6D3;_T6D5= _T6D4->f1;_T6D6= (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*)_T6D5;_T6D7= _T6D6->f1;_T6D8= _T6D7.KnownAggr;_T6D9= _T6D8.tag;if(_T6D9!=2)goto _TL333;_T6DA= e1_typ;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T71C=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T6DA;_T6DB= _T71C->f1;{struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_T71D=(struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*)_T6DB;_T6DC= _T71D->f1;_T6DD= _T6DC.KnownAggr;_T6DE= _T6DD.val;{struct Cyc_Absyn_Aggrdecl*_T71E=*_T6DE;_T71B= _T71E;}}}{struct Cyc_Absyn_Aggrdecl*ad=_T71B;_T6DF= 
# 2975
Cyc_Toc_get_member_offset(ad,f);_T6E0= Cyc_Absyn_signed_int_exp(_T6DF,0U);_T6E1= Cyc_Absyn_uint_type;{struct Cyc_Absyn_Exp*f_tag=Cyc_Absyn_set_type(_T6E0,_T6E1);_T6E2= 
Cyc_Toc_member_exp(e1,f,0U);_T6E3= nv;_T6E4= _T6E3->ctxt;_T6E5= e1_typ;_T6E6= f;_T6E7= Cyc_Toc_tagged_union_field_struct(_T6E4,_T6E5,_T6E6);{struct Cyc_Absyn_Exp*e1_f=Cyc_Absyn_set_type(_T6E2,_T6E7);_T6E8= 
Cyc_Toc_member_exp(e1_f,Cyc_Toc_tag_sp,0U);_T6E9= Cyc_Absyn_uint_type;{struct Cyc_Absyn_Exp*e1_f_tag=Cyc_Absyn_set_type(_T6E8,_T6E9);_T6EA= e;_T6EB= 
Cyc_Absyn_eq_exp(e1_f_tag,f_tag,0U);_T6EA->r= _T6EB->r;goto _LL117;}}}}_TL333: goto _LL11A;_TL331: goto _LL11A;_TL32F: _LL11A:{struct Cyc_Warn_String_Warn_Warg_struct _T71C;_T71C.tag= 0;
# 2981
({__typeof__(_tag_fat("non-aggregate type in tagcheck",sizeof(char),31U))_T71D=_tag_fat("non-aggregate type in tagcheck",sizeof(char),31U);_T71C.f1= _T71D;});_T6EC= _T71C;}{struct Cyc_Warn_String_Warn_Warg_struct _T71C=_T6EC;void*_T71D[1];_T71D[0]= & _T71C;{int(*_T71E)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T6ED= _T71E;}_T6EE= _tag_fat(_T71D,sizeof(void*),1);_T6ED(_T6EE);}_LL117:;}goto _LL7;}}case 36:{struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct*)_T706;_T707= _T71B->f1;}{struct Cyc_Absyn_Stmt*s=_T707;
# 2985
Cyc_Toc_stmt_to_c(nv,s);goto _LL7;}case 35:{struct Cyc_Warn_String_Warn_Warg_struct _T71B;_T71B.tag= 0;
# 2988
({__typeof__(_tag_fat("UnresolvedMem",sizeof(char),14U))_T71C=_tag_fat("UnresolvedMem",sizeof(char),14U);_T71B.f1= _T71C;});_T6EF= _T71B;}{struct Cyc_Warn_String_Warn_Warg_struct _T71B=_T6EF;void*_T71C[1];_T71C[0]= & _T71B;{int(*_T71D)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T6F0= _T71D;}_T6F1= _tag_fat(_T71C,sizeof(void*),1);_T6F0(_T6F1);}case 24:{struct Cyc_Warn_String_Warn_Warg_struct _T71B;_T71B.tag= 0;
# 2990
({__typeof__(_tag_fat("compoundlit",sizeof(char),12U))_T71C=_tag_fat("compoundlit",sizeof(char),12U);_T71B.f1= _T71C;});_T6F2= _T71B;}{struct Cyc_Warn_String_Warn_Warg_struct _T71B=_T6F2;void*_T71C[1];_T71C[0]= & _T71B;{int(*_T71D)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T6F3= _T71D;}_T6F4= _tag_fat(_T71C,sizeof(void*),1);_T6F3(_T6F4);}case 38:{struct Cyc_Warn_String_Warn_Warg_struct _T71B;_T71B.tag= 0;
# 2992
({__typeof__(_tag_fat("valueof(-)",sizeof(char),11U))_T71C=_tag_fat("valueof(-)",sizeof(char),11U);_T71B.f1= _T71C;});_T6F5= _T71B;}{struct Cyc_Warn_String_Warn_Warg_struct _T71B=_T6F5;void*_T71C[1];_T71C[0]= & _T71B;{int(*_T71D)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T6F6= _T71D;}_T6F7= _tag_fat(_T71C,sizeof(void*),1);_T6F6(_T6F7);}default:{struct Cyc_Absyn_Asm_e_Absyn_Raw_exp_struct*_T71B=(struct Cyc_Absyn_Asm_e_Absyn_Raw_exp_struct*)_T706;_T713= _T71B->f3;_T710= _T71B->f4;}{struct Cyc_List_List*o=_T713;struct Cyc_List_List*i=_T710;_T6F8= nv;_T6F9= _T6F8->ctxt;_T6FA= o;
# 2994
Cyc_Toc_asm_iolist_types_toc(_T6F9,_T6FA);_T6FB= nv;_T6FC= _T6FB->ctxt;_T6FD= i;
Cyc_Toc_asm_iolist_types_toc(_T6FC,_T6FD);goto _LL7;}}_LL7:;}_T6FE= did_inserted_checks;
# 2998
if(_T6FE)goto _TL335;else{goto _TL337;}
_TL337:{struct Cyc_Warn_String_Warn_Warg_struct _T706;_T706.tag= 0;({__typeof__(_tag_fat("Toc did not examine an inserted check: ",sizeof(char),40U))_T707=_tag_fat("Toc did not examine an inserted check: ",sizeof(char),40U);_T706.f1= _T707;});_T6FF= _T706;}{struct Cyc_Warn_String_Warn_Warg_struct _T706=_T6FF;{struct Cyc_Warn_Exp_Warn_Warg_struct _T707;_T707.tag= 4;_T707.f1= e;_T700= _T707;}{struct Cyc_Warn_Exp_Warn_Warg_struct _T707=_T700;void*_T708[2];_T708[0]= & _T706;_T708[1]= & _T707;_T702= Cyc_Warn_impos_loc2;{int(*_T709)(unsigned,struct _fat_ptr)=(int(*)(unsigned,struct _fat_ptr))_T702;_T701= _T709;}_T703= e;_T704= _T703->loc;_T705= _tag_fat(_T708,sizeof(void*),2);_T701(_T704,_T705);}}goto _TL336;_TL335: _TL336:;}}}}struct _tuple43{long f0;struct _fat_ptr*f1;struct _fat_ptr*f2;struct Cyc_Absyn_Switch_clause*f3;};struct _tuple44{struct Cyc_Toc_TocContext*f0;struct _RegionHandle*f1;};
# 3025
static struct _tuple43*Cyc_Toc_gen_labels(struct _tuple44*env,struct Cyc_Absyn_Switch_clause*sc){struct _tuple44*_T0;struct _tuple43*_T1;struct _RegionHandle*_T2;_T0= env;{
# 3027
struct _tuple44 _T3=*_T0;struct _RegionHandle*_T4;struct Cyc_Toc_TocContext*_T5;_T5= _T3.f0;_T4= _T3.f1;{struct Cyc_Toc_TocContext*ctxt=_T5;struct _RegionHandle*r=_T4;_T2= r;{struct _tuple43*_T6=_region_malloc(_T2,0U,sizeof(struct _tuple43));
_T6->f0= 0;({__typeof__(Cyc_Toc_fresh_label(ctxt))_T7=Cyc_Toc_fresh_label(ctxt);_T6->f1= _T7;});({__typeof__(Cyc_Toc_fresh_label(ctxt))_T7=Cyc_Toc_fresh_label(ctxt);_T6->f2= _T7;});_T6->f3= sc;_T1= (struct _tuple43*)_T6;}return _T1;}}}
# 3034
static struct Cyc_Absyn_Exp*Cyc_Toc_compile_path(struct Cyc_Toc_TocContext*ctxt,struct Cyc_List_List*ps,struct Cyc_Absyn_Exp*v){struct Cyc_List_List*_T0;void*_T1;struct Cyc_Tcpat_PathNode*_T2;union Cyc_Tcpat_PatOrWhere _T3;struct _union_PatOrWhere_pattern _T4;unsigned _T5;unsigned _T6;int _T7;struct Cyc_Absyn_Pat*_T8;struct Cyc_Tcpat_PathNode*_T9;struct _union_PatOrWhere_pattern _TA;unsigned _TB;struct _union_PatOrWhere_pattern _TC;void*_TD;void*_TE;void*_TF;int*_T10;unsigned _T11;void*_T12;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T13;void*_T14;int*_T15;unsigned _T16;struct Cyc_Tcpat_PathNode*_T17;int*_T18;unsigned _T19;void*_T1A;struct Cyc_List_List*_T1B;struct Cyc_List_List*_T1C;struct Cyc_List_List*_T1D;struct Cyc_List_List*_T1E;void*_T1F;struct Cyc_Tcpat_PathNode*_T20;int*_T21;int _T22;void*_T23;struct Cyc_List_List*_T24;struct Cyc_Toc_TocContext*_T25;struct Cyc_Absyn_Datatypefield*_T26;struct _tuple1*_T27;struct Cyc_Absyn_Datatypedecl*_T28;struct _tuple1*_T29;struct _tuple1*_T2A;void*_T2B;struct Cyc_Absyn_Tqual _T2C;void*_T2D;struct Cyc_Absyn_Exp*_T2E;struct Cyc_Absyn_Exp*_T2F;unsigned _T30;int _T31;struct _fat_ptr*_T32;struct Cyc_Absyn_Exp*_T33;void*_T34;struct Cyc_Absyn_Exp*_T35;void*_T36;void*_T37;struct Cyc_Absyn_Exp*_T38;unsigned _T39;int _T3A;struct _fat_ptr*_T3B;struct Cyc_Absyn_Exp*_T3C;void*_T3D;void*_T3E;void*_T3F;long _T40;struct Cyc_Absyn_Exp*_T41;void*_T42;struct Cyc_Absyn_Exp*_T43;void*_T44;struct Cyc_List_List*_T45;struct Cyc_Absyn_Exp*_T46;
_TL33B: if(ps!=0)goto _TL339;else{goto _TL33A;}
_TL339: _T0= ps;_T1= _T0->hd;{struct Cyc_Tcpat_PathNode*p=(struct Cyc_Tcpat_PathNode*)_T1;_T2= p;_T3= _T2->orig_pat;_T4= _T3.pattern;_T5= _T4.tag;_T6= _T5==1;_T7= (int)_T6;
# 3040
if(!_T7)goto _TL33C;_T9= p;{union Cyc_Tcpat_PatOrWhere _T47=_T9->orig_pat;_TA= _T47.pattern;_TB= _TA.tag;if(_TB==1)goto _TL33E;_throw_match();goto _TL33F;_TL33E: _TL33F: _TC= _T47.pattern;_T8= _TC.val;}_TD= _T8->topt;{
void*t=_check_null(_TD);_TE= 
Cyc_Toc_typ_to_c_array(ctxt,t);{void*t2=Cyc_Absyn_compress(_TE);_TF= t2;_T10= (int*)_TF;_T11= *_T10;switch(_T11){case 0: _T12= t2;_T13= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T12;_T14= _T13->f1;_T15= (int*)_T14;_T16= *_T15;switch(_T16){case 0: goto _LL4;case 24: _LL4: goto _LL6;default: goto _LL7;};case 7: _LL6: goto _LL0;default: _LL7:
# 3050
 v= Cyc_Toc_cast_it(t2,v);goto _LL0;}_LL0:;}}goto _TL33D;_TL33C: _TL33D: _T17= p;{
# 3054
void*_T47=_T17->access;void*_T48;struct _fat_ptr*_T49;long _T4A;unsigned _T4B;void*_T4C;_T18= (int*)_T47;_T19= *_T18;switch(_T19){case 0: goto _LL9;case 1:{struct Cyc_Tcpat_Deref_Tcpat_Access_struct*_T4D=(struct Cyc_Tcpat_Deref_Tcpat_Access_struct*)_T47;_T1A= _T4D->f1;_T4C= (void*)_T1A;}{void*res_type=_T4C;_T1B= ps;_T1C= _T1B->tl;
# 3063
if(_T1C==0)goto _TL343;_T1D= ps;_T1E= _T1D->tl;_T1F= _T1E->hd;_T20= (struct Cyc_Tcpat_PathNode*)_T1F;{
void*_T4D=_T20->access;void*_T4E;unsigned _T4F;struct Cyc_Absyn_Datatypefield*_T50;struct Cyc_Absyn_Datatypedecl*_T51;_T21= (int*)_T4D;_T22= *_T21;if(_T22!=2)goto _TL345;{struct Cyc_Tcpat_DatatypeField_Tcpat_Access_struct*_T52=(struct Cyc_Tcpat_DatatypeField_Tcpat_Access_struct*)_T4D;_T51= _T52->f1;_T50= _T52->f2;_T4F= _T52->f3;_T23= _T52->f4;_T4E= (void*)_T23;}{struct Cyc_Absyn_Datatypedecl*tud=_T51;struct Cyc_Absyn_Datatypefield*tuf=_T50;unsigned i=_T4F;void*res_type2=_T4E;_T24= ps;
# 3066
ps= _T24->tl;_T25= ctxt;_T26= tuf;_T27= _T26->name;_T28= tud;_T29= _T28->name;_T2A= 
Cyc_Toc_collapse_qvars(_T25,_T27,_T29);_T2B= Cyc_Absyn_strctq(_T2A);_T2C= Cyc_Toc_mt_tq;_T2D= Cyc_Absyn_cstar_type(_T2B,_T2C);_T2E= v;v= Cyc_Toc_cast_it(_T2D,_T2E);_T2F= v;_T30= i + 1U;_T31= (int)_T30;_T32= 
Cyc_Absyn_fieldname(_T31);_T33= Cyc_Absyn_aggrarrow_exp(_T2F,_T32,0U);_T34= Cyc_Toc_typ_to_c_array(ctxt,res_type2);v= Cyc_Absyn_set_type(_T33,_T34);goto _TL338;}_TL345: goto _LL12;_LL12:;}goto _TL344;_TL343: _TL344: _T35= 
# 3073
Cyc_Absyn_deref_exp(v,0U);_T36= Cyc_Toc_typ_to_c_array(ctxt,res_type);v= Cyc_Absyn_set_type(_T35,_T36);goto _LL9;}case 2:{struct Cyc_Tcpat_DatatypeField_Tcpat_Access_struct*_T4D=(struct Cyc_Tcpat_DatatypeField_Tcpat_Access_struct*)_T47;_T4B= _T4D->f3;_T37= _T4D->f4;_T4C= (void*)_T37;}{unsigned i=_T4B;void*res_type=_T4C;_T38= v;_T39= i + 1U;_T3A= (int)_T39;_T3B= 
# 3076
Cyc_Absyn_fieldname(_T3A);_T3C= Cyc_Toc_member_exp(_T38,_T3B,0U);_T3D= Cyc_Toc_typ_to_c_array(ctxt,res_type);v= Cyc_Absyn_set_type(_T3C,_T3D);goto _LL9;}default:{struct Cyc_Tcpat_AggrField_Tcpat_Access_struct*_T4D=(struct Cyc_Tcpat_AggrField_Tcpat_Access_struct*)_T47;_T3E= _T4D->f1;_T4C= (void*)_T3E;_T4A= _T4D->f2;_T49= _T4D->f3;_T3F= _T4D->f4;_T48= (void*)_T3F;}{void*at=_T4C;long tagged=_T4A;struct _fat_ptr*f=_T49;void*res_type=_T48;
# 3079
v= Cyc_Toc_member_exp(v,f,0U);_T40= tagged;
if(!_T40)goto _TL347;_T41= v;_T42= 
# 3082
Cyc_Toc_tagged_union_field_struct(ctxt,at,f);Cyc_Absyn_set_type(_T41,_T42);
v= Cyc_Toc_member_exp(v,Cyc_Toc_val_sp,0U);goto _TL348;_TL347: _TL348: _T43= v;_T44= 
# 3085
Cyc_Toc_typ_to_c_array(ctxt,res_type);v= Cyc_Absyn_set_type(_T43,_T44);goto _LL9;}}_LL9:;}}_TL338: _T45= ps;
# 3035
ps= _T45->tl;goto _TL33B;_TL33A: _T46= v;
# 3089
return _T46;}
# 3094
static struct Cyc_Absyn_Exp*Cyc_Toc_compile_pat_test(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Absyn_Exp*v,void*t){void*_T0;int*_T1;unsigned _T2;void*_T3;struct Cyc_Absyn_Exp*_T4;struct Cyc_Absyn_Exp*_T5;struct Cyc_Absyn_Exp*_T6;void*_T7;struct Cyc_Absyn_Exp*_T8;struct Cyc_Absyn_Exp*_T9;void*_TA;struct Cyc_Absyn_Exp*_TB;struct Cyc_Absyn_Exp*_TC;struct Cyc_Absyn_Exp*_TD;void*_TE;struct Cyc_Absyn_Exp*_TF;struct Cyc_Absyn_Exp*_T10;void*_T11;struct Cyc_Absyn_Exp*_T12;void*_T13;struct Cyc_Absyn_Exp*_T14;struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct*_T15;void*_T16;struct Cyc_Absyn_Exp*_T17;struct Cyc_Absyn_Enumdecl*_T18;struct _tuple1*_T19;struct Cyc_Absyn_Enumdecl*_T1A;void*_T1B;struct Cyc_Absyn_Exp*_T1C;struct Cyc_Absyn_Exp*_T1D;void*_T1E;struct Cyc_Absyn_Exp*_T1F;void*_T20;void*_T21;struct Cyc_Absyn_Exp*_T22;struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct*_T23;void*_T24;struct Cyc_Absyn_Exp*_T25;void*_T26;struct Cyc_Absyn_Exp*_T27;struct Cyc_Absyn_Exp*_T28;void*_T29;struct Cyc_Absyn_Exp*_T2A;void*_T2B;struct Cyc_Absyn_Exp*_T2C;struct Cyc_Absyn_Exp*_T2D;int _T2E;unsigned _T2F;void*_T30;struct Cyc_Absyn_Exp*_T31;struct Cyc_Absyn_Exp*_T32;void*_T33;struct Cyc_Absyn_Exp*_T34;void*_T35;struct Cyc_Absyn_Exp*_T36;unsigned _T37;int _T38;struct Cyc_Absyn_Exp*_T39;void*_T3A;struct Cyc_Absyn_Exp*_T3B;struct Cyc_Absyn_Exp*_T3C;void*_T3D;struct Cyc_Absyn_Exp*_T3E;void*_T3F;struct Cyc_Absyn_Exp*_T40;int*_T41;unsigned _T42;void*_T43;struct Cyc_Absyn_Exp*_T44;struct Cyc_Absyn_Exp*_T45;void*_T46;struct Cyc_Absyn_Exp*_T47;struct Cyc_Absyn_Exp*_T48;void*_T49;struct Cyc_Absyn_Exp*_T4A;struct Cyc_Absyn_Exp*_T4B;void*_T4C;struct Cyc_Absyn_Exp*_T4D;void*_T4E;void*_T4F;struct Cyc_Absyn_Exp*_T50;void*_T51;struct Cyc_Absyn_Exp*_T52;struct Cyc_Absyn_Exp*_T53;void*_T54;struct Cyc_Absyn_Exp*_T55;struct Cyc_Absyn_Exp*_T56;void*_T57;struct Cyc_Absyn_Exp*_T58;void*_T59;struct Cyc_Absyn_Exp*_T5A;int*_T5B;unsigned _T5C;struct Cyc_Toc_TocContext*_T5D;struct Cyc_Absyn_Datatypefield*_T5E;struct _tuple1*_T5F;struct Cyc_Absyn_Datatypedecl*_T60;struct _tuple1*_T61;struct _tuple1*_T62;void*_T63;struct Cyc_Absyn_Tqual _T64;void*_T65;struct Cyc_Absyn_Exp*_T66;struct Cyc_Absyn_Exp*_T67;void*_T68;struct Cyc_Absyn_Exp*_T69;struct Cyc_Absyn_Datatypefield*_T6A;struct _tuple1*_T6B;struct Cyc_Absyn_Exp*_T6C;void*_T6D;struct Cyc_Absyn_Exp*_T6E;struct Cyc_Absyn_Exp*_T6F;struct Cyc_Absyn_Datatypedecl*_T70;struct _fat_ptr*_T71;struct Cyc_Absyn_Datatypefield*_T72;unsigned _T73;int _T74;struct _fat_ptr _T75;struct Cyc_Absyn_Enumfield*_T76;void*_T77;_T0= t;_T1= (int*)_T0;_T2= *_T1;switch(_T2){case 0: _T3= t;{struct Cyc_Tcpat_WhereTest_Tcpat_PatTest_struct*_T78=(struct Cyc_Tcpat_WhereTest_Tcpat_PatTest_struct*)_T3;_T77= _T78->f1;}{struct Cyc_Absyn_Exp*e=_T77;
# 3097
if(e!=0)goto _TL34A;_T4= v;goto _TL34B;_TL34A: _T4= e;_TL34B: return _T4;}case 1: _T5= v;_T6= 
# 3099
Cyc_Absyn_signed_int_exp(0,0U);_T7= Cyc_Toc_void_star_type(ctxt);_T8= Cyc_Absyn_set_type(_T6,_T7);_T9= Cyc_Absyn_eq_exp(_T5,_T8,0U);_TA= Cyc_Absyn_sint_type;_TB= Cyc_Absyn_set_type(_T9,_TA);return _TB;case 2: _TC= v;_TD= 
# 3102
Cyc_Absyn_signed_int_exp(0,0U);_TE= Cyc_Toc_void_star_type(ctxt);_TF= Cyc_Absyn_set_type(_TD,_TE);_T10= Cyc_Absyn_neq_exp(_TC,_TF,0U);_T11= Cyc_Absyn_sint_type;_T12= Cyc_Absyn_set_type(_T10,_T11);return _T12;case 3: _T13= t;{struct Cyc_Tcpat_EqEnum_Tcpat_PatTest_struct*_T78=(struct Cyc_Tcpat_EqEnum_Tcpat_PatTest_struct*)_T13;_T77= _T78->f1;_T76= _T78->f2;}{struct Cyc_Absyn_Enumdecl*ed=_T77;struct Cyc_Absyn_Enumfield*ef=_T76;_T14= v;{struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct*_T78=_cycalloc(sizeof(struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct));_T78->tag= 31;
# 3106
_T78->f1= ed;_T78->f2= ef;_T15= (struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct*)_T78;}_T16= (void*)_T15;_T17= Cyc_Absyn_new_exp(_T16,0U);_T18= ed;_T19= _T18->name;_T1A= ed;_T1B= Cyc_Absyn_enum_type(_T19,_T1A);_T1C= Cyc_Absyn_set_type(_T17,_T1B);_T1D= Cyc_Absyn_eq_exp(_T14,_T1C,0U);_T1E= Cyc_Absyn_sint_type;_T1F= 
# 3105
Cyc_Absyn_set_type(_T1D,_T1E);return _T1F;}case 4: _T20= t;{struct Cyc_Tcpat_EqAnonEnum_Tcpat_PatTest_struct*_T78=(struct Cyc_Tcpat_EqAnonEnum_Tcpat_PatTest_struct*)_T20;_T21= _T78->f1;_T77= (void*)_T21;_T76= _T78->f2;}{void*t=_T77;struct Cyc_Absyn_Enumfield*ef=_T76;_T22= v;{struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct*_T78=_cycalloc(sizeof(struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct));_T78->tag= 32;
# 3109
_T78->f1= t;_T78->f2= ef;_T23= (struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct*)_T78;}_T24= (void*)_T23;_T25= Cyc_Absyn_new_exp(_T24,0U);_T26= Cyc_Absyn_sint_type;_T27= Cyc_Absyn_set_type(_T25,_T26);_T28= Cyc_Absyn_eq_exp(_T22,_T27,0U);_T29= Cyc_Absyn_sint_type;_T2A= Cyc_Absyn_set_type(_T28,_T29);return _T2A;}case 5: _T2B= t;{struct Cyc_Tcpat_EqFloat_Tcpat_PatTest_struct*_T78=(struct Cyc_Tcpat_EqFloat_Tcpat_PatTest_struct*)_T2B;_T75= _T78->f1;_T74= _T78->f2;}{struct _fat_ptr s=_T75;int i=_T74;_T2C= v;_T2D= 
# 3112
Cyc_Absyn_float_exp(s,i,0U);_T2E= i;_T2F= (unsigned)_T2E;_T30= Cyc_Absyn_gen_float_type(_T2F);_T31= Cyc_Absyn_set_type(_T2D,_T30);_T32= Cyc_Absyn_eq_exp(_T2C,_T31,0U);_T33= Cyc_Absyn_sint_type;_T34= Cyc_Absyn_set_type(_T32,_T33);return _T34;}case 6: _T35= t;{struct Cyc_Tcpat_EqConst_Tcpat_PatTest_struct*_T78=(struct Cyc_Tcpat_EqConst_Tcpat_PatTest_struct*)_T35;_T73= _T78->f1;}{unsigned i=_T73;_T36= v;_T37= i;_T38= (int)_T37;_T39= 
# 3114
Cyc_Absyn_signed_int_exp(_T38,0U);_T3A= Cyc_Absyn_sint_type;_T3B= Cyc_Absyn_set_type(_T39,_T3A);_T3C= Cyc_Absyn_eq_exp(_T36,_T3B,0U);_T3D= Cyc_Absyn_sint_type;_T3E= Cyc_Absyn_set_type(_T3C,_T3D);return _T3E;}case 7: _T3F= t;{struct Cyc_Tcpat_EqDatatypeTag_Tcpat_PatTest_struct*_T78=(struct Cyc_Tcpat_EqDatatypeTag_Tcpat_PatTest_struct*)_T3F;_T74= _T78->f1;_T77= _T78->f2;_T72= _T78->f3;}{int i=_T74;struct Cyc_Absyn_Datatypedecl*tud=_T77;struct Cyc_Absyn_Datatypefield*tuf=_T72;
# 3118
LOOP1: _T40= v;{
void*_T78=_T40->r;struct Cyc_Absyn_Exp*_T79;_T41= (int*)_T78;_T42= *_T41;switch(_T42){case 14:{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T7A=(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T78;_T79= _T7A->f2;}{struct Cyc_Absyn_Exp*e=_T79;
# 3121
v= e;goto LOOP1;}case 20:{struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*_T7A=(struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*)_T78;_T79= _T7A->f1;}{struct Cyc_Absyn_Exp*e=_T79;
# 3124
v= e;goto _LL15;}default: goto _LL15;}_LL15:;}_T43= 
# 3134
Cyc_Absyn_cstar_type(Cyc_Absyn_sint_type,Cyc_Toc_mt_tq);_T44= v;v= Cyc_Toc_cast_it(_T43,_T44);_T45= 
Cyc_Absyn_deref_exp(v,0U);_T46= Cyc_Absyn_sint_type;_T47= Cyc_Absyn_set_type(_T45,_T46);_T48= 
Cyc_Absyn_signed_int_exp(i,0U);_T49= Cyc_Absyn_sint_type;_T4A= Cyc_Absyn_set_type(_T48,_T49);_T4B= 
# 3135
Cyc_Absyn_eq_exp(_T47,_T4A,0U);_T4C= Cyc_Absyn_sint_type;_T4D= Cyc_Absyn_set_type(_T4B,_T4C);return _T4D;}case 8: _T4E= t;{struct Cyc_Tcpat_EqTaggedUnion_Tcpat_PatTest_struct*_T78=(struct Cyc_Tcpat_EqTaggedUnion_Tcpat_PatTest_struct*)_T4E;_T4F= _T78->f1;_T77= (void*)_T4F;_T71= _T78->f2;_T74= _T78->f3;}{void*atype=_T77;struct _fat_ptr*f=_T71;int i=_T74;
# 3139
struct Cyc_Absyn_Exp*e0=Cyc_Toc_member_exp(v,f,0U);
void*t=Cyc_Toc_tagged_union_field_struct(ctxt,atype,f);
Cyc_Absyn_set_type(e0,t);_T50= 
Cyc_Toc_member_exp(e0,Cyc_Toc_tag_sp,0U);_T51= Cyc_Absyn_uint_type;{struct Cyc_Absyn_Exp*e=Cyc_Absyn_set_type(_T50,_T51);_T52= e;_T53= 
Cyc_Absyn_signed_int_exp(i,0U);_T54= Cyc_Absyn_sint_type;_T55= Cyc_Absyn_set_type(_T53,_T54);_T56= Cyc_Absyn_eq_exp(_T52,_T55,0U);_T57= Cyc_Absyn_sint_type;_T58= Cyc_Absyn_set_type(_T56,_T57);return _T58;}}default: _T59= t;{struct Cyc_Tcpat_EqExtensibleDatatype_Tcpat_PatTest_struct*_T78=(struct Cyc_Tcpat_EqExtensibleDatatype_Tcpat_PatTest_struct*)_T59;_T70= _T78->f1;_T72= _T78->f2;}{struct Cyc_Absyn_Datatypedecl*tud=_T70;struct Cyc_Absyn_Datatypefield*tuf=_T72;
# 3146
LOOP2: _T5A= v;{
void*_T78=_T5A->r;struct Cyc_Absyn_Exp*_T79;_T5B= (int*)_T78;_T5C= *_T5B;switch(_T5C){case 14:{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T7A=(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T78;_T79= _T7A->f2;}{struct Cyc_Absyn_Exp*e=_T79;
# 3149
v= e;goto LOOP2;}case 20:{struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*_T7A=(struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*)_T78;_T79= _T7A->f1;}{struct Cyc_Absyn_Exp*e=_T79;
# 3152
v= e;goto _LL1C;}default: goto _LL1C;}_LL1C:;}_T5D= ctxt;_T5E= tuf;_T5F= _T5E->name;_T60= tud;_T61= _T60->name;_T62= 
# 3158
Cyc_Toc_collapse_qvars(_T5D,_T5F,_T61);_T63= Cyc_Absyn_strctq(_T62);_T64= Cyc_Toc_mt_tq;_T65= Cyc_Absyn_cstar_type(_T63,_T64);_T66= v;v= Cyc_Toc_cast_it(_T65,_T66);_T67= 
Cyc_Absyn_aggrarrow_exp(v,Cyc_Toc_tag_sp,0U);_T68= Cyc_Absyn_cstar_type(Cyc_Absyn_char_type,Cyc_Toc_mt_tq);_T69= Cyc_Absyn_set_type(_T67,_T68);_T6A= tuf;_T6B= _T6A->name;_T6C= 
Cyc_Absyn_var_exp(_T6B,0U);_T6D= Cyc_Absyn_cstar_type(Cyc_Absyn_char_type,Cyc_Toc_mt_tq);_T6E= Cyc_Absyn_set_type(_T6C,_T6D);_T6F= 
# 3159
Cyc_Absyn_eq_exp(_T69,_T6E,0U);return _T6F;}};}struct Cyc_Toc_OtherTest_Toc_TestKind_struct{int tag;};struct Cyc_Toc_DatatypeTagTest_Toc_TestKind_struct{int tag;};struct Cyc_Toc_WhereTest_Toc_TestKind_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Toc_TaggedUnionTest_Toc_TestKind_struct{int tag;void*f1;struct _fat_ptr*f2;};
# 3171
struct Cyc_Toc_OtherTest_Toc_TestKind_struct Cyc_Toc_OtherTest_val={0};
struct Cyc_Toc_DatatypeTagTest_Toc_TestKind_struct Cyc_Toc_DatatypeTagTest_val={1};struct _tuple45{int f0;void*f1;};
# 3178
static struct _tuple45 Cyc_Toc_admits_switch(struct Cyc_List_List*ss){struct Cyc_Toc_OtherTest_Toc_TestKind_struct*_T0;struct Cyc_Toc_OtherTest_Toc_TestKind_struct*_T1;struct Cyc_List_List*_T2;void*_T3;struct _tuple40*_T4;void*_T5;int*_T6;unsigned _T7;void*_T8;void*_T9;void*_TA;struct Cyc_Toc_OtherTest_Toc_TestKind_struct*_TB;struct Cyc_Toc_OtherTest_Toc_TestKind_struct*_TC;void*_TD;struct Cyc_Toc_TaggedUnionTest_Toc_TestKind_struct*_TE;struct Cyc_Toc_DatatypeTagTest_Toc_TestKind_struct*_TF;struct Cyc_Toc_DatatypeTagTest_Toc_TestKind_struct*_T10;void*_T11;struct Cyc_Absyn_Exp*_T12;struct Cyc_Toc_WhereTest_Toc_TestKind_struct*_T13;struct _tuple45 _T14;struct _tuple45 _T15;struct Cyc_List_List*_T16;struct _tuple45 _T17;
int c=0;_T0= & Cyc_Toc_OtherTest_val;_T1= (struct Cyc_Toc_OtherTest_Toc_TestKind_struct*)_T0;{
void*k=(void*)_T1;
_TL351: if(ss!=0)goto _TL34F;else{goto _TL350;}
_TL34F: _T2= ss;_T3= _T2->hd;_T4= (struct _tuple40*)_T3;{struct _tuple40 _T18=*_T4;void*_T19;_T19= _T18.f0;{void*ptest=_T19;struct Cyc_Absyn_Exp*_T1A;struct _fat_ptr*_T1B;void*_T1C;_T5= ptest;_T6= (int*)_T5;_T7= *_T6;switch(_T7){case 3: goto _LL7;case 4: _LL7: goto _LL9;case 6: _LL9: goto _TL34E;case 8: _T8= ptest;{struct Cyc_Tcpat_EqTaggedUnion_Tcpat_PatTest_struct*_T1D=(struct Cyc_Tcpat_EqTaggedUnion_Tcpat_PatTest_struct*)_T8;_T9= _T1D->f1;_T1C= (void*)_T9;_T1B= _T1D->f2;}{void*t=_T1C;struct _fat_ptr*f=_T1B;_TA= k;_TB= & Cyc_Toc_OtherTest_val;_TC= (struct Cyc_Toc_OtherTest_Toc_TestKind_struct*)_TB;_TD= (void*)_TC;
# 3190
if(_TA!=_TD)goto _TL353;{struct Cyc_Toc_TaggedUnionTest_Toc_TestKind_struct*_T1D=_cycalloc(sizeof(struct Cyc_Toc_TaggedUnionTest_Toc_TestKind_struct));_T1D->tag= 3;
_T1D->f1= t;_T1D->f2= f;_TE= (struct Cyc_Toc_TaggedUnionTest_Toc_TestKind_struct*)_T1D;}k= (void*)_TE;goto _TL354;_TL353: _TL354: goto _TL34E;}case 7: _TF= & Cyc_Toc_DatatypeTagTest_val;_T10= (struct Cyc_Toc_DatatypeTagTest_Toc_TestKind_struct*)_TF;
# 3194
k= (void*)_T10;goto _TL34E;case 0: _T11= ptest;{struct Cyc_Tcpat_WhereTest_Tcpat_PatTest_struct*_T1D=(struct Cyc_Tcpat_WhereTest_Tcpat_PatTest_struct*)_T11;_T1A= _T1D->f1;}_T12= (struct Cyc_Absyn_Exp*)_T1A;if(_T12==0)goto _TL355;{struct Cyc_Absyn_Exp*e=_T1A;{struct Cyc_Toc_WhereTest_Toc_TestKind_struct*_T1D=_cycalloc(sizeof(struct Cyc_Toc_WhereTest_Toc_TestKind_struct));_T1D->tag= 2;
# 3198
_T1D->f1= e;_T13= (struct Cyc_Toc_WhereTest_Toc_TestKind_struct*)_T1D;}k= (void*)_T13;{struct _tuple45 _T1D;
_T1D.f0= 0;_T1D.f1= k;_T14= _T1D;}return _T14;}_TL355: goto _LL13;case 1: _LL13: goto _LL15;case 2: _LL15: goto _LL17;case 5: _LL17: goto _LL19;default: _LL19:{struct _tuple45 _T1D;
# 3205
_T1D.f0= 0;_T1D.f1= k;_T15= _T1D;}return _T15;};}}_TL34E: _T16= ss;
# 3181
ss= _T16->tl;c= c + 1;goto _TL351;_TL350:{struct _tuple45 _T18;
# 3208
_T18.f0= c;_T18.f1= k;_T17= _T18;}return _T17;}}
# 3213
static struct Cyc_Absyn_Pat*Cyc_Toc_compile_pat_test_as_case(void*p){void*_T0;int*_T1;unsigned _T2;void*_T3;struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct*_T4;void*_T5;void*_T6;void*_T7;struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct*_T8;void*_T9;void*_TA;unsigned _TB;void*_TC;void*_TD;struct Cyc_Absyn_Exp*_TE;void*_TF;struct Cyc_Warn_String_Warn_Warg_struct _T10;int(*_T11)(struct _fat_ptr ap);struct _fat_ptr _T12;struct Cyc_Absyn_Exp_p_Absyn_Raw_pat_struct*_T13;void*_T14;struct Cyc_Absyn_Pat*_T15;
struct Cyc_Absyn_Exp*e;{int _T16;unsigned _T17;struct Cyc_Absyn_Enumfield*_T18;void*_T19;_T0= p;_T1= (int*)_T0;_T2= *_T1;switch(_T2){case 3: _T3= p;{struct Cyc_Tcpat_EqEnum_Tcpat_PatTest_struct*_T1A=(struct Cyc_Tcpat_EqEnum_Tcpat_PatTest_struct*)_T3;_T19= _T1A->f1;_T18= _T1A->f2;}{struct Cyc_Absyn_Enumdecl*ed=_T19;struct Cyc_Absyn_Enumfield*ef=_T18;{struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct*_T1A=_cycalloc(sizeof(struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct));_T1A->tag= 31;
# 3217
_T1A->f1= ed;_T1A->f2= ef;_T4= (struct Cyc_Absyn_Enum_e_Absyn_Raw_exp_struct*)_T1A;}_T5= (void*)_T4;e= Cyc_Absyn_new_exp(_T5,0U);goto _LL0;}case 4: _T6= p;{struct Cyc_Tcpat_EqAnonEnum_Tcpat_PatTest_struct*_T1A=(struct Cyc_Tcpat_EqAnonEnum_Tcpat_PatTest_struct*)_T6;_T7= _T1A->f1;_T19= (void*)_T7;_T18= _T1A->f2;}{void*t=_T19;struct Cyc_Absyn_Enumfield*ef=_T18;{struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct*_T1A=_cycalloc(sizeof(struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct));_T1A->tag= 32;
# 3220
_T1A->f1= t;_T1A->f2= ef;_T8= (struct Cyc_Absyn_AnonEnum_e_Absyn_Raw_exp_struct*)_T1A;}_T9= (void*)_T8;e= Cyc_Absyn_new_exp(_T9,0U);goto _LL0;}case 6: _TA= p;{struct Cyc_Tcpat_EqConst_Tcpat_PatTest_struct*_T1A=(struct Cyc_Tcpat_EqConst_Tcpat_PatTest_struct*)_TA;_T17= _T1A->f1;}{unsigned i=_T17;_TB= i;_T16= (int)_TB;goto _LL8;}case 7: _TC= p;{struct Cyc_Tcpat_EqDatatypeTag_Tcpat_PatTest_struct*_T1A=(struct Cyc_Tcpat_EqDatatypeTag_Tcpat_PatTest_struct*)_TC;_T16= _T1A->f1;}_LL8: {int i=_T16;_T16= i;goto _LLA;}case 8: _TD= p;{struct Cyc_Tcpat_EqTaggedUnion_Tcpat_PatTest_struct*_T1A=(struct Cyc_Tcpat_EqTaggedUnion_Tcpat_PatTest_struct*)_TD;_T16= _T1A->f3;}_LLA: {int i=_T16;_TE= 
# 3227
Cyc_Absyn_signed_int_exp(i,0U);_TF= Cyc_Absyn_sint_type;e= Cyc_Absyn_set_type(_TE,_TF);goto _LL0;}default:{struct Cyc_Warn_String_Warn_Warg_struct _T1A;_T1A.tag= 0;
# 3230
({__typeof__(_tag_fat("compile_pat_test_as_case!",sizeof(char),26U))_T1B=_tag_fat("compile_pat_test_as_case!",sizeof(char),26U);_T1A.f1= _T1B;});_T10= _T1A;}{struct Cyc_Warn_String_Warn_Warg_struct _T1A=_T10;void*_T1B[1];_T1B[0]= & _T1A;{int(*_T1C)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T11= _T1C;}_T12= _tag_fat(_T1B,sizeof(void*),1);_T11(_T12);}}_LL0:;}{struct Cyc_Absyn_Exp_p_Absyn_Raw_pat_struct*_T16=_cycalloc(sizeof(struct Cyc_Absyn_Exp_p_Absyn_Raw_pat_struct));_T16->tag= 16;
# 3232
_T16->f1= e;_T13= (struct Cyc_Absyn_Exp_p_Absyn_Raw_pat_struct*)_T16;}_T14= (void*)_T13;_T15= Cyc_Absyn_new_pat(_T14,0U);return _T15;}
# 3236
static struct Cyc_Absyn_Stmt*Cyc_Toc_seq_stmt_opt(struct Cyc_Absyn_Stmt*s1,struct Cyc_Absyn_Stmt*s2){struct Cyc_Absyn_Stmt*_T0;struct Cyc_Absyn_Stmt*_T1;struct Cyc_Absyn_Stmt*_T2;
if(s1!=0)goto _TL358;_T0= s2;
return _T0;_TL358:
 if(s2!=0)goto _TL35A;_T1= s1;
return _T1;_TL35A: _T2= 
Cyc_Absyn_seq_stmt(s1,s2,0U);return _T2;}struct _tuple46{struct Cyc_Absyn_Vardecl*f0;struct Cyc_Absyn_Vardecl*f1;void*f2;long f3;};
# 3251
long Cyc_Toc_vd_in_use(struct Cyc_Absyn_Vardecl*other_vd,struct Cyc_List_List**newdecls){struct Cyc_List_List**_T0;struct Cyc_Absyn_Vardecl*_T1;struct Cyc_List_List*_T2;void*_T3;struct _tuple46*_T4;struct _tuple46 _T5;struct Cyc_Absyn_Vardecl*_T6;struct Cyc_List_List*_T7;_T0= newdecls;{
struct Cyc_List_List*ds=*_T0;_TL35F: if(ds!=0)goto _TL35D;else{goto _TL35E;}
# 3255
_TL35D: _T1= other_vd;_T2= ds;_T3= _T2->hd;_T4= (struct _tuple46*)_T3;_T5= *_T4;_T6= _T5.f1;if(_T1!=_T6)goto _TL360;
return 1;_TL360: _T7= ds;
# 3252
ds= _T7->tl;goto _TL35F;_TL35E:;}
# 3257
return 0;}
# 3260
static long Cyc_Toc_is_usuable_type(void*ctype,void*other){int*_T0;int _T1;struct Cyc_Absyn_PtrInfo _T2;long _T3;long _T4;int _T5;int _T6;
void*_T7=Cyc_Absyn_compress(ctype);struct Cyc_Absyn_Tqual _T8;_T0= (int*)_T7;_T1= *_T0;if(_T1!=4)goto _TL362;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T9=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T7;_T2= _T9->f1;_T8= _T2.elt_tq;}{struct Cyc_Absyn_Tqual tq=_T8;_T3= 
# 3263
Cyc_Absyn_equal_tqual(tq,Cyc_Toc_mt_tq);if(!_T3)goto _TL364;_T4= Cyc_Toc_is_void_star(other);if(!_T4)goto _TL364;
return 1;_TL364: goto _LL4;}_TL362: _LL4: _T5= 
# 3267
Cyc_Tcutil_typecmp(ctype,other);_T6= _T5==0;return _T6;;}
# 3270
static long Cyc_Toc_can_use_voidstar(void*ctype){int*_T0;int _T1;struct Cyc_Absyn_PtrInfo _T2;long _T3;
void*_T4=Cyc_Absyn_compress(ctype);struct Cyc_Absyn_Tqual _T5;_T0= (int*)_T4;_T1= *_T0;if(_T1!=4)goto _TL366;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T6=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T4;_T2= _T6->f1;_T5= _T2.elt_tq;}{struct Cyc_Absyn_Tqual tq=_T5;_T3= 
# 3273
Cyc_Absyn_equal_tqual(tq,Cyc_Toc_mt_tq);return _T3;}_TL366:
# 3275
 return 0;;}struct _tuple47{struct Cyc_Absyn_Vardecl*f0;struct Cyc_Absyn_Vardecl*f1;};struct _tuple48{struct Cyc_List_List*f0;struct Cyc_Absyn_Pat*f1;};
# 3284
static struct Cyc_Absyn_Stmt*Cyc_Toc_extract_pattern_vars(struct Cyc_Toc_TocContext*ctxt,struct _RegionHandle*rgn,struct Cyc_Toc_Env**nv,struct Cyc_List_List**newdecls,struct Cyc_List_List**prevdecls,struct Cyc_Absyn_Exp*lpath,struct Cyc_Absyn_Exp*rpath,struct Cyc_Absyn_Pat*p){struct Cyc_Absyn_Pat*_T0;void*_T1;struct Cyc_Absyn_Pat*_T2;int*_T3;unsigned _T4;struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct*_T5;struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct*_T6;void*_T7;struct Cyc_Absyn_Pat*_T8;struct Cyc_Absyn_Pat*_T9;struct Cyc_Toc_TocContext*_TA;struct Cyc_Absyn_Vardecl*_TB;void*_TC;struct Cyc_List_List**_TD;struct Cyc_List_List*_TE;void*_TF;struct _tuple47*_T10;void*_T11;struct Cyc_Absyn_Vardecl*_T12;void*_T13;long _T14;long _T15;struct Cyc_List_List**_T16;struct Cyc_List_List*_T17;struct _RegionHandle*_T18;struct _tuple46*_T19;struct _RegionHandle*_T1A;struct Cyc_List_List**_T1B;struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T1C;void*_T1D;struct Cyc_Absyn_Exp*_T1E;void*_T1F;struct Cyc_Absyn_Exp*_T20;struct Cyc_Absyn_Exp*_T21;struct Cyc_Absyn_Stmt*_T22;struct Cyc_Toc_TocContext*_T23;struct _RegionHandle*_T24;struct Cyc_Toc_Env**_T25;struct Cyc_List_List**_T26;struct Cyc_List_List**_T27;struct Cyc_Absyn_Exp*_T28;struct Cyc_Absyn_Exp*_T29;struct Cyc_Absyn_Pat*_T2A;struct Cyc_Absyn_Stmt*_T2B;struct Cyc_Absyn_Stmt*_T2C;struct Cyc_List_List*_T2D;struct _tuple1*_T2E;void*_T2F;struct Cyc_List_List**_T30;struct Cyc_List_List*_T31;struct _RegionHandle*_T32;struct _tuple46*_T33;struct _RegionHandle*_T34;struct Cyc_List_List**_T35;struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T36;void*_T37;struct Cyc_Absyn_Exp*_T38;struct Cyc_Absyn_Vardecl*_T39;void*_T3A;struct Cyc_Absyn_Exp*_T3B;struct Cyc_Absyn_Exp*_T3C;struct Cyc_Absyn_Stmt*_T3D;struct Cyc_Toc_TocContext*_T3E;struct _RegionHandle*_T3F;struct Cyc_Toc_Env**_T40;struct Cyc_List_List**_T41;struct Cyc_List_List**_T42;struct Cyc_Absyn_Exp*_T43;struct Cyc_Absyn_Exp*_T44;struct Cyc_Absyn_Pat*_T45;struct Cyc_Absyn_Stmt*_T46;struct Cyc_Absyn_Stmt*_T47;struct Cyc_Toc_TocContext*_T48;struct Cyc_Absyn_Vardecl*_T49;void*_T4A;struct Cyc_List_List**_T4B;struct Cyc_List_List*_T4C;void*_T4D;struct _tuple47*_T4E;void*_T4F;struct Cyc_Absyn_Vardecl*_T50;void*_T51;long _T52;long _T53;struct Cyc_List_List**_T54;struct Cyc_List_List*_T55;struct _RegionHandle*_T56;struct _tuple46*_T57;struct _RegionHandle*_T58;struct Cyc_List_List**_T59;struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T5A;void*_T5B;struct Cyc_Absyn_Exp*_T5C;struct Cyc_Absyn_Vardecl*_T5D;void*_T5E;struct Cyc_Absyn_Exp*_T5F;struct Cyc_Absyn_Exp*_T60;struct Cyc_Absyn_Stmt*_T61;struct Cyc_List_List*_T62;long _T63;struct _tuple1*_T64;void*_T65;struct Cyc_List_List**_T66;struct Cyc_List_List*_T67;struct _RegionHandle*_T68;struct _tuple46*_T69;struct _RegionHandle*_T6A;struct Cyc_List_List**_T6B;struct _tuple1*_T6C;void*_T6D;struct Cyc_List_List**_T6E;struct Cyc_List_List*_T6F;struct _RegionHandle*_T70;struct _tuple46*_T71;struct _RegionHandle*_T72;struct Cyc_List_List**_T73;struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T74;void*_T75;struct Cyc_Absyn_Exp*_T76;struct Cyc_Absyn_Vardecl*_T77;void*_T78;struct Cyc_Absyn_Exp*_T79;struct Cyc_Absyn_Exp*_T7A;struct Cyc_Absyn_Stmt*_T7B;struct Cyc_Absyn_Vardecl*_T7C;struct Cyc_Toc_TocContext*_T7D;struct Cyc_Absyn_Vardecl*_T7E;void*_T7F;struct Cyc_List_List**_T80;struct Cyc_List_List*_T81;void*_T82;struct _tuple47*_T83;void*_T84;struct Cyc_Absyn_Vardecl*_T85;void*_T86;long _T87;long _T88;struct Cyc_List_List**_T89;struct Cyc_List_List*_T8A;struct _RegionHandle*_T8B;struct _tuple46*_T8C;struct _RegionHandle*_T8D;struct Cyc_List_List**_T8E;void*_T8F;struct Cyc_Absyn_Tqual _T90;struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T91;void*_T92;struct Cyc_Absyn_Exp*_T93;struct Cyc_Absyn_Vardecl*_T94;void*_T95;struct Cyc_Absyn_Exp*_T96;struct Cyc_Absyn_Exp*_T97;void*_T98;struct Cyc_Absyn_Exp*_T99;struct Cyc_Absyn_Exp*_T9A;struct Cyc_Absyn_Stmt*_T9B;struct Cyc_Absyn_Stmt*_T9C;struct Cyc_Absyn_Stmt*_T9D;struct Cyc_List_List*_T9E;long _T9F;struct _tuple1*_TA0;void*_TA1;struct Cyc_List_List**_TA2;struct Cyc_List_List*_TA3;struct _RegionHandle*_TA4;struct _tuple46*_TA5;struct _RegionHandle*_TA6;struct Cyc_List_List**_TA7;struct _tuple1*_TA8;void*_TA9;struct Cyc_List_List**_TAA;struct Cyc_List_List*_TAB;struct _RegionHandle*_TAC;struct _tuple46*_TAD;struct _RegionHandle*_TAE;struct Cyc_List_List**_TAF;void*_TB0;struct Cyc_Absyn_Tqual _TB1;struct Cyc_Absyn_Exp*_TB2;struct Cyc_Absyn_Exp*_TB3;void*_TB4;struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_TB5;void*_TB6;struct Cyc_Absyn_Exp*_TB7;struct Cyc_Absyn_Vardecl*_TB8;void*_TB9;struct Cyc_Absyn_Exp*_TBA;struct Cyc_Absyn_Exp*_TBB;struct Cyc_Absyn_Stmt*_TBC;struct Cyc_Absyn_Stmt*_TBD;struct Cyc_Absyn_Stmt*_TBE;struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct*_TBF;struct Cyc_Absyn_Pat*_TC0;struct Cyc_Absyn_Pat*_TC1;void*_TC2;int*_TC3;int _TC4;struct Cyc_Absyn_Pat*_TC5;void*_TC6;struct Cyc_Toc_TocContext*_TC7;struct Cyc_Absyn_Datatypefield*_TC8;struct _tuple1*_TC9;struct Cyc_Absyn_Datatypedecl*_TCA;struct _tuple1*_TCB;void*_TCC;struct Cyc_Absyn_Tqual _TCD;struct Cyc_Absyn_Datatypefield*_TCE;struct _tuple1*_TCF;void*_TD0;struct Cyc_Absyn_Exp*_TD1;struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_TD2;void*_TD3;struct Cyc_Absyn_Exp*_TD4;void*_TD5;struct Cyc_List_List*_TD6;void*_TD7;struct Cyc_Absyn_Pat*_TD8;void*_TD9;struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct*_TDA;struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct*_TDB;void*_TDC;struct Cyc_List_List*_TDD;void*_TDE;struct _tuple28*_TDF;struct _tuple28 _TE0;struct Cyc_Absyn_Pat*_TE1;void*_TE2;struct Cyc_Absyn_Exp*_TE3;struct _fat_ptr*_TE4;struct Cyc_Absyn_Exp*_TE5;struct _fat_ptr*_TE6;void*_TE7;long _TE8;struct Cyc_Absyn_Stmt*_TE9;struct Cyc_Absyn_Stmt*_TEA;struct Cyc_List_List*_TEB;struct Cyc_List_List*_TEC;struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_TED;void*_TEE;struct Cyc_Absyn_Decl*_TEF;struct Cyc_Absyn_Stmt*_TF0;struct Cyc_Absyn_Stmt*_TF1;struct Cyc_Absyn_Pat*_TF2;void*_TF3;struct _tuple1*_TF4;void*_TF5;struct Cyc_Absyn_Exp*_TF6;void*_TF7;struct Cyc_Absyn_Exp*_TF8;struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_TF9;void*_TFA;struct Cyc_Absyn_Exp*_TFB;void*_TFC;struct Cyc_Toc_TocContext*_TFD;struct _RegionHandle*_TFE;struct Cyc_Toc_Env**_TFF;struct Cyc_List_List**_T100;struct Cyc_List_List**_T101;struct Cyc_Absyn_Exp*_T102;void*_T103;struct Cyc_Absyn_Exp*_T104;struct Cyc_Absyn_Exp*_T105;struct Cyc_Absyn_Pat*_T106;struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T107;void*_T108;struct Cyc_Absyn_Decl*_T109;struct Cyc_Absyn_Stmt*_T10A;struct Cyc_Absyn_Stmt*_T10B;struct Cyc_List_List*_T10C;void*_T10D;struct Cyc_Absyn_Pat*_T10E;void*_T10F;struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct*_T110;struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct*_T111;void*_T112;struct Cyc_Absyn_Pat*_T113;void*_T114;struct Cyc_Absyn_Exp*_T115;void*_T116;struct Cyc_Absyn_Exp*_T117;void*_T118;struct Cyc_Absyn_Stmt*_T119;struct Cyc_Absyn_Stmt*_T11A;struct Cyc_List_List*_T11B;struct Cyc_Absyn_Stmt*_T11C;void*_T11D;struct Cyc_Warn_String_Warn_Warg_struct _T11E;int(*_T11F)(struct _fat_ptr ap);struct _fat_ptr _T120;int*_T121;unsigned _T122;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T123;void*_T124;int*_T125;int _T126;void*_T127;struct Cyc_Absyn_Aggrdecl*_T128;struct Cyc_Absyn_AggrdeclImpl*_T129;struct Cyc_Absyn_AggrdeclImpl*_T12A;struct Cyc_Absyn_Aggrdecl*_T12B;struct Cyc_Absyn_AggrdeclImpl*_T12C;struct Cyc_Warn_String_Warn_Warg_struct _T12D;int(*_T12E)(struct _fat_ptr ap);struct _fat_ptr _T12F;struct Cyc_List_List*_T130;void*_T131;struct _tuple48*_T132;struct _tuple48 _T133;struct Cyc_Absyn_Pat*_T134;void*_T135;struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct*_T136;struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct*_T137;void*_T138;struct _tuple48*_T139;struct _tuple48 _T13A;struct Cyc_List_List*_T13B;struct Cyc_Absyn_Pat*_T13C;void*_T13D;struct Cyc_Absyn_Aggrfield*_T13E;struct Cyc_Absyn_Aggrfield*_T13F;long _T140;struct Cyc_Absyn_Exp*_T141;struct Cyc_Absyn_Exp*_T142;long _T143;long _T144;long _T145;struct Cyc_Absyn_Kind*_T146;struct Cyc_Absyn_Kind*_T147;struct Cyc_Absyn_Kind*_T148;long _T149;void*_T14A;struct Cyc_Absyn_Exp*_T14B;void*_T14C;struct Cyc_Absyn_Exp*_T14D;struct Cyc_Absyn_Exp*_T14E;struct Cyc_Absyn_Exp*_T14F;void*_T150;struct Cyc_Absyn_Exp*_T151;void*_T152;struct Cyc_Absyn_Exp*_T153;struct Cyc_Absyn_Exp*_T154;struct Cyc_Absyn_Exp*_T155;struct Cyc_Absyn_Stmt*_T156;struct Cyc_Absyn_Stmt*_T157;struct Cyc_List_List*_T158;struct Cyc_Absyn_Stmt*_T159;struct Cyc_Warn_String_Warn_Warg_struct _T15A;int(*_T15B)(struct _fat_ptr ap);struct _fat_ptr _T15C;struct Cyc_Warn_String_Warn_Warg_struct _T15D;int(*_T15E)(struct _fat_ptr ap);struct _fat_ptr _T15F;struct Cyc_Warn_String_Warn_Warg_struct _T160;int(*_T161)(struct _fat_ptr ap);struct _fat_ptr _T162;_T0= p;_T1= _T0->topt;{
# 3287
void*t=_check_null(_T1);_T2= p;{
void*_T163=_T2->r;struct Cyc_List_List*_T164;struct Cyc_Absyn_Datatypefield*_T165;struct Cyc_Absyn_Pat*_T166;void*_T167;_T3= (int*)_T163;_T4= *_T3;switch(_T4){case 2:{struct Cyc_Absyn_AliasVar_p_Absyn_Raw_pat_struct*_T168=(struct Cyc_Absyn_AliasVar_p_Absyn_Raw_pat_struct*)_T163;_T167= _T168->f2;}{struct Cyc_Absyn_Vardecl*vd=_T167;_T5= & Cyc_Absyn_Wild_p_val;_T6= (struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct*)_T5;_T7= (void*)_T6;{
# 3290
struct Cyc_Absyn_Pat*p2=Cyc_Absyn_new_pat(_T7,0U);_T8= p2;_T9= p;
_T8->topt= _T9->topt;_T167= vd;_T166= p2;goto _LL4;}}case 1:{struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct*_T168=(struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct*)_T163;_T167= _T168->f1;_T166= _T168->f2;}_LL4: {struct Cyc_Absyn_Vardecl*vd=_T167;struct Cyc_Absyn_Pat*p2=_T166;_TA= ctxt;_TB= vd;_TC= _TB->type;{
# 3295
void*ctype=Cyc_Toc_typ_to_c_array(_TA,_TC);_TD= prevdecls;{
# 3297
struct Cyc_List_List*pds=*_TD;_TL36C: if(pds!=0)goto _TL36A;else{goto _TL36B;}
_TL36A: _TE= pds;_TF= _TE->hd;_T10= (struct _tuple47*)_TF;{struct _tuple47 _T168=*_T10;struct Cyc_Absyn_Vardecl*_T169;_T169= _T168.f1;{struct Cyc_Absyn_Vardecl*other_vd=_T169;_T11= ctype;_T12= other_vd;_T13= _T12->type;_T14= 
# 3301
Cyc_Toc_is_usuable_type(_T11,_T13);if(!_T14)goto _TL36D;_T15= Cyc_Toc_vd_in_use(other_vd,newdecls);if(_T15)goto _TL36D;else{goto _TL36F;}
_TL36F: _T16= newdecls;_T18= rgn;{struct Cyc_List_List*_T16A=_region_malloc(_T18,0U,sizeof(struct Cyc_List_List));_T1A= rgn;{struct _tuple46*_T16B=_region_malloc(_T1A,0U,sizeof(struct _tuple46));_T16B->f0= vd;_T16B->f1= other_vd;_T16B->f2= ctype;_T16B->f3= 0;_T19= (struct _tuple46*)_T16B;}_T16A->hd= _T19;_T1B= newdecls;_T16A->tl= *_T1B;_T17= (struct Cyc_List_List*)_T16A;}*_T16= _T17;{struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T16A=_cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));_T16A->tag= 4;
_T16A->f1= other_vd;_T1C= (struct Cyc_Absyn_Local_b_Absyn_Binding_struct*)_T16A;}_T1D= (void*)_T1C;_T1E= Cyc_Absyn_varb_exp(_T1D,0U);_T1F= ctype;{struct Cyc_Absyn_Exp*lhs=Cyc_Absyn_set_type(_T1E,_T1F);_T20= lhs;_T21= 
Cyc_Toc_deep_copy(rpath);{struct Cyc_Absyn_Stmt*s=Cyc_Absyn_assign_stmt(_T20,_T21,0U);_T22= s;_T23= ctxt;_T24= rgn;_T25= nv;_T26= newdecls;_T27= prevdecls;_T28= lpath;_T29= 
# 3306
Cyc_Toc_deep_copy(lhs);_T2A= p2;_T2B= Cyc_Toc_extract_pattern_vars(_T23,_T24,_T25,_T26,_T27,_T28,_T29,_T2A);_T2C= 
# 3305
Cyc_Toc_seq_stmt_opt(_T22,_T2B);return _T2C;}}_TL36D:;}}_T2D= pds;
# 3297
pds= _T2D->tl;goto _TL36C;_TL36B:;}{
# 3311
struct Cyc_Absyn_Vardecl*new_vd;
struct Cyc_Absyn_Exp*lhs;_T2E= 
Cyc_Toc_temp_var(ctxt);_T2F= ctype;new_vd= Cyc_Absyn_new_vardecl(0U,_T2E,_T2F,0,0);_T30= newdecls;_T32= rgn;{struct Cyc_List_List*_T168=_region_malloc(_T32,0U,sizeof(struct Cyc_List_List));_T34= rgn;{struct _tuple46*_T169=_region_malloc(_T34,0U,sizeof(struct _tuple46));
_T169->f0= vd;_T169->f1= new_vd;_T169->f2= ctype;_T169->f3= 0;_T33= (struct _tuple46*)_T169;}_T168->hd= _T33;_T35= newdecls;_T168->tl= *_T35;_T31= (struct Cyc_List_List*)_T168;}*_T30= _T31;{struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T168=_cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));_T168->tag= 4;
_T168->f1= new_vd;_T36= (struct Cyc_Absyn_Local_b_Absyn_Binding_struct*)_T168;}_T37= (void*)_T36;_T38= Cyc_Absyn_varb_exp(_T37,0U);_T39= new_vd;_T3A= _T39->type;{struct Cyc_Absyn_Exp*lhs=Cyc_Absyn_set_type(_T38,_T3A);_T3B= lhs;_T3C= 
Cyc_Toc_deep_copy(rpath);{struct Cyc_Absyn_Stmt*s=Cyc_Absyn_assign_stmt(_T3B,_T3C,0U);_T3D= s;_T3E= ctxt;_T3F= rgn;_T40= nv;_T41= newdecls;_T42= prevdecls;_T43= lpath;_T44= 
# 3318
Cyc_Toc_deep_copy(lhs);_T45= p2;_T46= Cyc_Toc_extract_pattern_vars(_T3E,_T3F,_T40,_T41,_T42,_T43,_T44,_T45);_T47= 
# 3317
Cyc_Toc_seq_stmt_opt(_T3D,_T46);return _T47;}}}}}case 4:{struct Cyc_Absyn_TagInt_p_Absyn_Raw_pat_struct*_T168=(struct Cyc_Absyn_TagInt_p_Absyn_Raw_pat_struct*)_T163;_T167= _T168->f2;}{struct Cyc_Absyn_Vardecl*vd=_T167;_T48= ctxt;_T49= vd;_T4A= _T49->type;{
# 3321
void*ctype=Cyc_Toc_typ_to_c_array(_T48,_T4A);_T4B= prevdecls;{
# 3323
struct Cyc_List_List*pds=*_T4B;_TL373: if(pds!=0)goto _TL371;else{goto _TL372;}
_TL371: _T4C= pds;_T4D= _T4C->hd;_T4E= (struct _tuple47*)_T4D;{struct _tuple47 _T168=*_T4E;struct Cyc_Absyn_Vardecl*_T169;_T169= _T168.f1;{struct Cyc_Absyn_Vardecl*other_vd=_T169;_T4F= ctype;_T50= other_vd;_T51= _T50->type;_T52= 
# 3327
Cyc_Toc_is_usuable_type(_T4F,_T51);if(!_T52)goto _TL374;_T53= Cyc_Toc_vd_in_use(other_vd,newdecls);if(_T53)goto _TL374;else{goto _TL376;}
_TL376: _T54= newdecls;_T56= rgn;{struct Cyc_List_List*_T16A=_region_malloc(_T56,0U,sizeof(struct Cyc_List_List));_T58= rgn;{struct _tuple46*_T16B=_region_malloc(_T58,0U,sizeof(struct _tuple46));_T16B->f0= vd;_T16B->f1= other_vd;_T16B->f2= ctype;_T16B->f3= 0;_T57= (struct _tuple46*)_T16B;}_T16A->hd= _T57;_T59= newdecls;_T16A->tl= *_T59;_T55= (struct Cyc_List_List*)_T16A;}*_T54= _T55;{struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T16A=_cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));_T16A->tag= 4;
_T16A->f1= other_vd;_T5A= (struct Cyc_Absyn_Local_b_Absyn_Binding_struct*)_T16A;}_T5B= (void*)_T5A;_T5C= Cyc_Absyn_varb_exp(_T5B,0U);_T5D= other_vd;_T5E= _T5D->type;{struct Cyc_Absyn_Exp*lhs=Cyc_Absyn_set_type(_T5C,_T5E);_T5F= lhs;_T60= 
Cyc_Toc_deep_copy(rpath);_T61= Cyc_Absyn_assign_stmt(_T5F,_T60,0U);return _T61;}_TL374:;}}_T62= pds;
# 3323
pds= _T62->tl;goto _TL373;_TL372:;}{
# 3334
struct Cyc_Absyn_Vardecl*new_vd;_T63= 
Cyc_Toc_can_use_voidstar(ctype);if(!_T63)goto _TL377;_T64= 
Cyc_Toc_temp_var(ctxt);_T65= Cyc_Toc_void_star_type(ctxt);new_vd= Cyc_Absyn_new_vardecl(0U,_T64,_T65,0,0);_T66= newdecls;_T68= rgn;{struct Cyc_List_List*_T168=_region_malloc(_T68,0U,sizeof(struct Cyc_List_List));_T6A= rgn;{struct _tuple46*_T169=_region_malloc(_T6A,0U,sizeof(struct _tuple46));
_T169->f0= vd;_T169->f1= new_vd;_T169->f2= ctype;_T169->f3= 1;_T69= (struct _tuple46*)_T169;}_T168->hd= _T69;_T6B= newdecls;_T168->tl= *_T6B;_T67= (struct Cyc_List_List*)_T168;}*_T66= _T67;goto _TL378;
# 3339
_TL377: _T6C= Cyc_Toc_temp_var(ctxt);_T6D= ctype;new_vd= Cyc_Absyn_new_vardecl(0U,_T6C,_T6D,0,0);_T6E= newdecls;_T70= rgn;{struct Cyc_List_List*_T168=_region_malloc(_T70,0U,sizeof(struct Cyc_List_List));_T72= rgn;{struct _tuple46*_T169=_region_malloc(_T72,0U,sizeof(struct _tuple46));
_T169->f0= vd;_T169->f1= new_vd;_T169->f2= ctype;_T169->f3= 0;_T71= (struct _tuple46*)_T169;}_T168->hd= _T71;_T73= newdecls;_T168->tl= *_T73;_T6F= (struct Cyc_List_List*)_T168;}*_T6E= _T6F;_TL378:{struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T168=_cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));_T168->tag= 4;
# 3342
_T168->f1= new_vd;_T74= (struct Cyc_Absyn_Local_b_Absyn_Binding_struct*)_T168;}_T75= (void*)_T74;_T76= Cyc_Absyn_varb_exp(_T75,0U);_T77= new_vd;_T78= _T77->type;_T79= Cyc_Absyn_set_type(_T76,_T78);_T7A= 
Cyc_Toc_deep_copy(rpath);_T7B= 
# 3342
Cyc_Absyn_assign_stmt(_T79,_T7A,0U);return _T7B;}}}case 0:
# 3345
 return 0;case 3:{struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct*_T168=(struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct*)_T163;_T167= _T168->f1;_T166= _T168->f2;}{struct Cyc_Absyn_Vardecl*vd=_T167;struct Cyc_Absyn_Pat*p2=_T166;_T7C= vd;
# 3348
({__typeof__(Cyc_Absyn_cstar_type(t,Cyc_Toc_mt_tq))_T168=Cyc_Absyn_cstar_type(t,Cyc_Toc_mt_tq);_T7C->type= _T168;});_T7D= ctxt;_T7E= vd;_T7F= _T7E->type;{
# 3350
void*ctype=Cyc_Toc_typ_to_c_array(_T7D,_T7F);_T80= prevdecls;{
# 3352
struct Cyc_List_List*pds=*_T80;_TL37C: if(pds!=0)goto _TL37A;else{goto _TL37B;}
_TL37A: _T81= pds;_T82= _T81->hd;_T83= (struct _tuple47*)_T82;{struct _tuple47 _T168=*_T83;struct Cyc_Absyn_Vardecl*_T169;_T169= _T168.f1;{struct Cyc_Absyn_Vardecl*other_vd=_T169;_T84= ctype;_T85= other_vd;_T86= _T85->type;_T87= 
# 3356
Cyc_Toc_is_usuable_type(_T84,_T86);if(!_T87)goto _TL37D;_T88= Cyc_Toc_vd_in_use(other_vd,newdecls);if(_T88)goto _TL37D;else{goto _TL37F;}
_TL37F: _T89= newdecls;_T8B= rgn;{struct Cyc_List_List*_T16A=_region_malloc(_T8B,0U,sizeof(struct Cyc_List_List));_T8D= rgn;{struct _tuple46*_T16B=_region_malloc(_T8D,0U,sizeof(struct _tuple46));_T16B->f0= vd;_T16B->f1= other_vd;_T16B->f2= ctype;_T16B->f3= 0;_T8C= (struct _tuple46*)_T16B;}_T16A->hd= _T8C;_T8E= newdecls;_T16A->tl= *_T8E;_T8A= (struct Cyc_List_List*)_T16A;}*_T89= _T8A;_T8F= 
Cyc_Toc_typ_to_c_array(ctxt,t);_T90= Cyc_Toc_mt_tq;{void*ptype=Cyc_Absyn_cstar_type(_T8F,_T90);{struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T16A=_cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));_T16A->tag= 4;
# 3360
_T16A->f1= other_vd;_T91= (struct Cyc_Absyn_Local_b_Absyn_Binding_struct*)_T16A;}_T92= (void*)_T91;_T93= Cyc_Absyn_varb_exp(_T92,0U);_T94= other_vd;_T95= _T94->type;{struct Cyc_Absyn_Exp*vb=Cyc_Absyn_set_type(_T93,_T95);_T96= 
Cyc_Toc_deep_copy(lpath);_T97= Cyc_Toc_push_address_exp(_T96);_T98= ptype;{struct Cyc_Absyn_Exp*ptr=Cyc_Absyn_set_type(_T97,_T98);_T99= vb;_T9A= 
Cyc_Toc_cast_it(ptype,ptr);{struct Cyc_Absyn_Stmt*s=Cyc_Absyn_assign_stmt(_T99,_T9A,0U);_T9B= s;_T9C= 
# 3364
Cyc_Toc_extract_pattern_vars(ctxt,rgn,nv,newdecls,prevdecls,lpath,rpath,p2);_T9D= 
# 3363
Cyc_Toc_seq_stmt_opt(_T9B,_T9C);return _T9D;}}}}_TL37D:;}}_T9E= pds;
# 3352
pds= _T9E->tl;goto _TL37C;_TL37B:;}{
# 3368
struct Cyc_Absyn_Vardecl*new_vd;_T9F= 
Cyc_Toc_can_use_voidstar(ctype);if(!_T9F)goto _TL380;_TA0= 
Cyc_Toc_temp_var(ctxt);_TA1= Cyc_Toc_void_star_type(ctxt);new_vd= Cyc_Absyn_new_vardecl(0U,_TA0,_TA1,0,0);_TA2= newdecls;_TA4= rgn;{struct Cyc_List_List*_T168=_region_malloc(_TA4,0U,sizeof(struct Cyc_List_List));_TA6= rgn;{struct _tuple46*_T169=_region_malloc(_TA6,0U,sizeof(struct _tuple46));
_T169->f0= vd;_T169->f1= new_vd;_T169->f2= ctype;_T169->f3= 1;_TA5= (struct _tuple46*)_T169;}_T168->hd= _TA5;_TA7= newdecls;_T168->tl= *_TA7;_TA3= (struct Cyc_List_List*)_T168;}*_TA2= _TA3;goto _TL381;
# 3373
_TL380: _TA8= Cyc_Toc_temp_var(ctxt);_TA9= ctype;new_vd= Cyc_Absyn_new_vardecl(0U,_TA8,_TA9,0,0);_TAA= newdecls;_TAC= rgn;{struct Cyc_List_List*_T168=_region_malloc(_TAC,0U,sizeof(struct Cyc_List_List));_TAE= rgn;{struct _tuple46*_T169=_region_malloc(_TAE,0U,sizeof(struct _tuple46));
_T169->f0= vd;_T169->f1= new_vd;_T169->f2= ctype;_T169->f3= 0;_TAD= (struct _tuple46*)_T169;}_T168->hd= _TAD;_TAF= newdecls;_T168->tl= *_TAF;_TAB= (struct Cyc_List_List*)_T168;}*_TAA= _TAB;_TL381: _TB0= 
# 3379
Cyc_Toc_typ_to_c_array(ctxt,t);_TB1= Cyc_Toc_mt_tq;{void*ptype=Cyc_Absyn_cstar_type(_TB0,_TB1);_TB2= 
Cyc_Toc_deep_copy(lpath);_TB3= Cyc_Toc_push_address_exp(_TB2);_TB4= ptype;{struct Cyc_Absyn_Exp*ptr=Cyc_Absyn_set_type(_TB3,_TB4);{struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T168=_cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));_T168->tag= 4;
_T168->f1= new_vd;_TB5= (struct Cyc_Absyn_Local_b_Absyn_Binding_struct*)_T168;}_TB6= (void*)_TB5;_TB7= Cyc_Absyn_varb_exp(_TB6,0U);_TB8= new_vd;_TB9= _TB8->type;_TBA= Cyc_Absyn_set_type(_TB7,_TB9);_TBB= 
Cyc_Toc_cast_it(ptype,ptr);{
# 3381
struct Cyc_Absyn_Stmt*s=Cyc_Absyn_assign_stmt(_TBA,_TBB,0U);_TBC= s;_TBD= 
# 3383
Cyc_Toc_extract_pattern_vars(ctxt,rgn,nv,newdecls,prevdecls,lpath,rpath,p2);_TBE= Cyc_Toc_seq_stmt_opt(_TBC,_TBD);return _TBE;}}}}}}case 8: goto _LLE;case 9: _LLE: goto _LL10;case 10: _LL10: goto _LL12;case 11: _LL12: goto _LL14;case 12: _LL14: goto _LL16;case 13: _LL16:
# 3391
 return 0;case 5: _TBF= (struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct*)_T163;_TC0= _TBF->f1;_TC1= (struct Cyc_Absyn_Pat*)_TC0;_TC2= _TC1->r;_TC3= (int*)_TC2;_TC4= *_TC3;if(_TC4!=7)goto _TL382;{struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct*_T168=(struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct*)_T163;_TC5= _T168->f1;{struct Cyc_Absyn_Pat _T169=*_TC5;_TC6= _T169.r;{struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct*_T16A=(struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct*)_TC6;_T167= _T16A->f1;_T165= _T16A->f2;_T164= _T16A->f3;}}}{struct Cyc_Absyn_Datatypedecl*tud=_T167;struct Cyc_Absyn_Datatypefield*tuf=_T165;struct Cyc_List_List*ps=_T164;
# 3395
if(ps!=0)goto _TL384;
return 0;_TL384: _TC7= ctxt;_TC8= tuf;_TC9= _TC8->name;_TCA= tud;_TCB= _TCA->name;{
struct _tuple1*tufstrct=Cyc_Toc_collapse_qvars(_TC7,_TC9,_TCB);_TCC= 
Cyc_Absyn_strctq(tufstrct);_TCD= Cyc_Toc_mt_tq;{void*field_ptr_typ=Cyc_Absyn_cstar_type(_TCC,_TCD);
lpath= Cyc_Toc_cast_it(field_ptr_typ,lpath);{
int cnt=1;_TCE= tuf;{
struct Cyc_List_List*tuf_tqts=_TCE->typs;
struct Cyc_Absyn_Stmt*s=0;_TCF= 
Cyc_Toc_temp_var(ctxt);_TD0= field_ptr_typ;_TD1= Cyc_Toc_cast_it(field_ptr_typ,rpath);{struct Cyc_Absyn_Vardecl*new_vd=Cyc_Absyn_new_vardecl(0U,_TCF,_TD0,_TD1,0);{struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T168=_cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));_T168->tag= 4;
_T168->f1= new_vd;_TD2= (struct Cyc_Absyn_Local_b_Absyn_Binding_struct*)_T168;}_TD3= (void*)_TD2;_TD4= Cyc_Absyn_varb_exp(_TD3,0U);_TD5= field_ptr_typ;{struct Cyc_Absyn_Exp*new_rpath=Cyc_Absyn_set_type(_TD4,_TD5);
_TL389: if(ps!=0)goto _TL387;else{goto _TL388;}
_TL387: _TD6= ps;_TD7= _TD6->hd;{struct Cyc_Absyn_Pat*p2=(struct Cyc_Absyn_Pat*)_TD7;_TD8= p2;_TD9= _TD8->r;_TDA= & Cyc_Absyn_Wild_p_val;_TDB= (struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct*)_TDA;_TDC= (void*)_TDB;
if(_TD9!=_TDC)goto _TL38A;goto _TL386;_TL38A: _TDD= 
# 3409
_check_null(tuf_tqts);_TDE= _TDD->hd;_TDF= (struct _tuple28*)_TDE;_TE0= *_TDF;{void*tuf_typ=_TE0.f1;_TE1= p2;_TE2= _TE1->topt;{
void*t2=_check_null(_TE2);
void*t2c=Cyc_Toc_typ_to_c_array(ctxt,t2);_TE3= 
Cyc_Toc_deep_copy(new_rpath);_TE4= Cyc_Absyn_fieldname(cnt);{struct Cyc_Absyn_Exp*rarrow_exp=Cyc_Absyn_aggrarrow_exp(_TE3,_TE4,0U);_TE5= 
Cyc_Toc_deep_copy(lpath);_TE6= Cyc_Absyn_fieldname(cnt);{struct Cyc_Absyn_Exp*larrow_exp=Cyc_Absyn_aggrarrow_exp(_TE5,_TE6,0U);
Cyc_Absyn_set_type(rarrow_exp,t2c);
Cyc_Absyn_set_type(larrow_exp,t2c);_TE7= 
Cyc_Toc_typ_to_c(ctxt,tuf_typ);_TE8= Cyc_Toc_is_void_star_or_boxed_tvar(_TE7);if(!_TE8)goto _TL38C;
rarrow_exp= Cyc_Toc_cast_it(t2c,rarrow_exp);
larrow_exp= Cyc_Toc_cast_it(t2c,larrow_exp);goto _TL38D;_TL38C: _TL38D: _TE9= s;_TEA= 
# 3421
Cyc_Toc_extract_pattern_vars(ctxt,rgn,nv,newdecls,prevdecls,larrow_exp,rarrow_exp,p2);
# 3420
s= Cyc_Toc_seq_stmt_opt(_TE9,_TEA);}}}}}_TL386: _TEB= ps;
# 3405
ps= _TEB->tl;_TEC= _check_null(tuf_tqts);tuf_tqts= _TEC->tl;cnt= cnt + 1;goto _TL389;_TL388:
# 3423
 if(s==0)goto _TL38E;{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T168=_cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));_T168->tag= 0;
_T168->f1= new_vd;_TED= (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T168;}_TEE= (void*)_TED;_TEF= Cyc_Absyn_new_decl(_TEE,0U);_TF0= s;s= Cyc_Absyn_decl_stmt(_TEF,_TF0,0U);goto _TL38F;_TL38E: _TL38F: _TF1= s;
return _TF1;}}}}}}}_TL382:{struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct*_T168=(struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct*)_T163;_T167= _T168->f1;}{struct Cyc_Absyn_Pat*p2=_T167;_TF2= p2;_TF3= _TF2->topt;{
# 3502
void*t2=_check_null(_TF3);
void*t2c=Cyc_Toc_typ_to_c_array(ctxt,t2);_TF4= 
Cyc_Toc_temp_var(ctxt);_TF5= t2c;_TF6= Cyc_Absyn_deref_exp(rpath,0U);_TF7= t2c;_TF8= Cyc_Absyn_set_type(_TF6,_TF7);{struct Cyc_Absyn_Vardecl*new_vd=Cyc_Absyn_new_vardecl(0U,_TF4,_TF5,_TF8,0);{struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T168=_cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));_T168->tag= 4;
_T168->f1= new_vd;_TF9= (struct Cyc_Absyn_Local_b_Absyn_Binding_struct*)_T168;}_TFA= (void*)_TF9;_TFB= Cyc_Absyn_varb_exp(_TFA,0U);_TFC= t2c;{struct Cyc_Absyn_Exp*rp=Cyc_Absyn_set_type(_TFB,_TFC);_TFD= ctxt;_TFE= rgn;_TFF= nv;_T100= newdecls;_T101= prevdecls;_T102= 
# 3507
Cyc_Absyn_deref_exp(lpath,0U);_T103= t2c;_T104= Cyc_Absyn_set_type(_T102,_T103);_T105= rp;_T106= p2;{
# 3506
struct Cyc_Absyn_Stmt*s=Cyc_Toc_extract_pattern_vars(_TFD,_TFE,_TFF,_T100,_T101,_T104,_T105,_T106);
# 3508
if(s==0)goto _TL390;{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T168=_cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));_T168->tag= 0;
_T168->f1= new_vd;_T107= (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T168;}_T108= (void*)_T107;_T109= Cyc_Absyn_new_decl(_T108,0U);_T10A= s;s= Cyc_Absyn_decl_stmt(_T109,_T10A,0U);goto _TL391;_TL390: _TL391: _T10B= s;
return _T10B;}}}}}case 7:{struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct*_T168=(struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct*)_T163;_T167= _T168->f3;}{struct Cyc_List_List*ps=_T167;
# 3428
struct Cyc_Absyn_Stmt*s=0;{
int cnt=1;_TL395: if(ps!=0)goto _TL393;else{goto _TL394;}
_TL393: _T10C= ps;_T10D= _T10C->hd;{struct Cyc_Absyn_Pat*p2=(struct Cyc_Absyn_Pat*)_T10D;_T10E= p2;_T10F= _T10E->r;_T110= & Cyc_Absyn_Wild_p_val;_T111= (struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct*)_T110;_T112= (void*)_T111;
if(_T10F!=_T112)goto _TL396;goto _TL392;_TL396: _T113= p2;_T114= _T113->topt;{
# 3433
void*t2=_check_null(_T114);
void*t2c=Cyc_Toc_typ_to_c_array(ctxt,t2);
struct _fat_ptr*f=Cyc_Absyn_fieldname(cnt);_T115= 
Cyc_Toc_member_exp(lpath,f,0U);_T116= t2c;{struct Cyc_Absyn_Exp*lp=Cyc_Absyn_set_type(_T115,_T116);_T117= 
Cyc_Toc_member_exp(rpath,f,0U);_T118= t2c;{struct Cyc_Absyn_Exp*rp=Cyc_Absyn_set_type(_T117,_T118);_T119= s;_T11A= 
Cyc_Toc_extract_pattern_vars(ctxt,rgn,nv,newdecls,prevdecls,lp,rp,p2);s= Cyc_Toc_seq_stmt_opt(_T119,_T11A);}}}}_TL392: _T11B= ps;
# 3429
ps= _T11B->tl;cnt= cnt + 1;goto _TL395;_TL394:;}_T11C= s;
# 3440
return _T11C;}case 6:{struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct*_T168=(struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct*)_T163;_T11D= _T168->f1;_T167= (void*)_T11D;_T164= _T168->f4;}{void*topt=_T167;struct Cyc_List_List*dlps=_T164;
# 3443
if(topt!=0)goto _TL398;{struct Cyc_Warn_String_Warn_Warg_struct _T168;_T168.tag= 0;
({__typeof__(_tag_fat("unresolved aggregate pattern!",sizeof(char),30U))_T169=_tag_fat("unresolved aggregate pattern!",sizeof(char),30U);_T168.f1= _T169;});_T11E= _T168;}{struct Cyc_Warn_String_Warn_Warg_struct _T168=_T11E;void*_T169[1];_T169[0]= & _T168;{int(*_T16A)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T11F= _T16A;}_T120= _tag_fat(_T169,sizeof(void*),1);_T11F(_T120);}goto _TL399;_TL398: _TL399: {
void*atype=topt;
struct Cyc_List_List*fields;
long is_tagged=0;{
void*_T168=Cyc_Absyn_compress(atype);struct Cyc_List_List*_T169;long _T16A;enum Cyc_Absyn_AggrKind _T16B;union Cyc_Absyn_AggrInfo _T16C;_T121= (int*)_T168;_T122= *_T121;switch(_T122){case 0: _T123= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T168;_T124= _T123->f1;_T125= (int*)_T124;_T126= *_T125;if(_T126!=24)goto _TL39B;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T16D=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T168;_T127= _T16D->f1;{struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_T16E=(struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*)_T127;_T16C= _T16E->f1;}}{union Cyc_Absyn_AggrInfo info=_T16C;
# 3450
struct Cyc_Absyn_Aggrdecl*ad=Cyc_Absyn_get_known_aggrdecl(info);_T128= ad;_T129= _T128->impl;_T12A= 
_check_null(_T129);fields= _T12A->fields;_T12B= ad;_T12C= _T12B->impl;
is_tagged= _T12C->tagged;goto _LL2E;}_TL39B: goto _LL33;case 7:{struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*_T16D=(struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*)_T168;_T16B= _T16D->f1;_T16A= _T16D->f2;_T169= _T16D->f3;}{enum Cyc_Absyn_AggrKind ak=_T16B;long is_tuple=_T16A;struct Cyc_List_List*fs=_T169;
# 3455
fields= fs;goto _LL2E;}default: _LL33:{struct Cyc_Warn_String_Warn_Warg_struct _T16D;_T16D.tag= 0;
# 3458
({__typeof__(_tag_fat("bad type in aggr pattern",sizeof(char),25U))_T16E=_tag_fat("bad type in aggr pattern",sizeof(char),25U);_T16D.f1= _T16E;});_T12D= _T16D;}{struct Cyc_Warn_String_Warn_Warg_struct _T16D=_T12D;void*_T16E[1];_T16E[0]= & _T16D;{int(*_T16F)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T12E= _T16F;}_T12F= _tag_fat(_T16E,sizeof(void*),1);_T12E(_T12F);}}_LL2E:;}{
# 3460
struct Cyc_Absyn_Stmt*s=0;
_TL3A0: if(dlps!=0)goto _TL39E;else{goto _TL39F;}
_TL39E: _T130= dlps;_T131= _T130->hd;{struct _tuple48*tup=(struct _tuple48*)_T131;_T132= tup;_T133= *_T132;{
struct Cyc_Absyn_Pat*p2=_T133.f1;_T134= p2;_T135= _T134->r;_T136= & Cyc_Absyn_Wild_p_val;_T137= (struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct*)_T136;_T138= (void*)_T137;
if(_T135!=_T138)goto _TL3A1;goto _TL39D;_TL3A1: _T139= tup;_T13A= *_T139;_T13B= _T13A.f0;{
# 3466
struct _fat_ptr*f=Cyc_Absyn_designatorlist_to_fieldname(_T13B);_T13C= p2;_T13D= _T13C->topt;{
void*t2=_check_null(_T13D);
void*t2c=Cyc_Toc_typ_to_c_array(ctxt,t2);_T13E= 
Cyc_Absyn_lookup_field(fields,f);_T13F= _check_null(_T13E);{void*ftype=_T13F->type;
struct Cyc_Absyn_Exp*lmemexp=Cyc_Toc_member_exp(lpath,f,0U);
struct Cyc_Absyn_Exp*rmemexp=Cyc_Toc_member_exp(rpath,f,0U);_T140= is_tagged;
# 3473
if(!_T140)goto _TL3A3;{
void*u=Cyc_Toc_tagged_union_field_struct(ctxt,atype,f);
Cyc_Absyn_set_type(lmemexp,u);
Cyc_Absyn_set_type(rmemexp,u);
lmemexp= Cyc_Toc_member_exp(lmemexp,Cyc_Toc_val_sp,0U);
rmemexp= Cyc_Toc_member_exp(rmemexp,Cyc_Toc_val_sp,0U);}goto _TL3A4;_TL3A3: _TL3A4: _T141= lmemexp;
# 3480
({__typeof__(Cyc_Toc_typ_to_c_array(ctxt,ftype))_T168=Cyc_Toc_typ_to_c_array(ctxt,ftype);_T141->topt= _T168;});_T142= rmemexp;
({__typeof__(Cyc_Toc_typ_to_c_array(ctxt,ftype))_T168=Cyc_Toc_typ_to_c_array(ctxt,ftype);_T142->topt= _T168;});_T143= 
Cyc_Toc_is_void_star_or_boxed_tvar(ftype);if(!_T143)goto _TL3A5;
lmemexp= Cyc_Toc_cast_it(t2c,lmemexp);
rmemexp= Cyc_Toc_cast_it(t2c,rmemexp);goto _TL3A6;
_TL3A5: _T144= Cyc_Tcutil_is_array_type(ftype);if(!_T144)goto _TL3A7;
rmemexp= Cyc_Toc_deep_copy(lmemexp);goto _TL3A8;
_TL3A7: _T145= Cyc_Tcutil_is_array_type(ftype);if(_T145)goto _TL3A9;else{goto _TL3AB;}_TL3AB: _T146= & Cyc_Kinds_ak;_T147= (struct Cyc_Absyn_Kind*)_T146;_T148= Cyc_Tcutil_type_kind(ftype);_T149= Cyc_Kinds_kind_leq(_T147,_T148);if(!_T149)goto _TL3A9;{
# 3490
void*ct=Cyc_Absyn_cstar_type(t2c,Cyc_Toc_mt_tq);_T14A= ct;_T14B= 
Cyc_Absyn_address_exp(lmemexp,0U);_T14C= ct;_T14D= Cyc_Absyn_set_type(_T14B,_T14C);_T14E= Cyc_Toc_cast_it(_T14A,_T14D);lmemexp= Cyc_Absyn_deref_exp(_T14E,0U);_T14F= lmemexp;
_T14F->topt= t2c;_T150= ct;_T151= 
Cyc_Absyn_address_exp(rmemexp,0U);_T152= ct;_T153= Cyc_Absyn_set_type(_T151,_T152);_T154= Cyc_Toc_cast_it(_T150,_T153);rmemexp= Cyc_Absyn_deref_exp(_T154,0U);_T155= lmemexp;
_T155->topt= t2c;}goto _TL3AA;_TL3A9: _TL3AA: _TL3A8: _TL3A6: _T156= s;_T157= 
# 3497
Cyc_Toc_extract_pattern_vars(ctxt,rgn,nv,newdecls,prevdecls,lmemexp,rmemexp,p2);
# 3496
s= Cyc_Toc_seq_stmt_opt(_T156,_T157);}}}}}_TL39D: _T158= dlps;
# 3461
dlps= _T158->tl;goto _TL3A0;_TL39F: _T159= s;
# 3499
return _T159;}}}case 14:{struct Cyc_Warn_String_Warn_Warg_struct _T168;_T168.tag= 0;
# 3513
({__typeof__(_tag_fat("unknownid pat",sizeof(char),14U))_T169=_tag_fat("unknownid pat",sizeof(char),14U);_T168.f1= _T169;});_T15A= _T168;}{struct Cyc_Warn_String_Warn_Warg_struct _T168=_T15A;void*_T169[1];_T169[0]= & _T168;{int(*_T16A)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T15B= _T16A;}_T15C= _tag_fat(_T169,sizeof(void*),1);_T15B(_T15C);}case 15:{struct Cyc_Warn_String_Warn_Warg_struct _T168;_T168.tag= 0;
# 3515
({__typeof__(_tag_fat("unknowncall pat",sizeof(char),16U))_T169=_tag_fat("unknowncall pat",sizeof(char),16U);_T168.f1= _T169;});_T15D= _T168;}{struct Cyc_Warn_String_Warn_Warg_struct _T168=_T15D;void*_T169[1];_T169[0]= & _T168;{int(*_T16A)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T15E= _T16A;}_T15F= _tag_fat(_T169,sizeof(void*),1);_T15E(_T15F);}default:{struct Cyc_Warn_String_Warn_Warg_struct _T168;_T168.tag= 0;
# 3517
({__typeof__(_tag_fat("exp pat",sizeof(char),8U))_T169=_tag_fat("exp pat",sizeof(char),8U);_T168.f1= _T169;});_T160= _T168;}{struct Cyc_Warn_String_Warn_Warg_struct _T168=_T160;void*_T169[1];_T169[0]= & _T168;{int(*_T16A)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T161= _T16A;}_T162= _tag_fat(_T169,sizeof(void*),1);_T161(_T162);}};}}}
# 3524
static void Cyc_Toc_subst_pattern_vars(struct _tuple25*env_pack,struct Cyc_Absyn_Exp*e){struct _tuple25*_T0;struct Cyc_Absyn_Exp*_T1;int*_T2;unsigned _T3;struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T4;void*_T5;int*_T6;unsigned _T7;void*_T8;void*_T9;struct _handler_cons*_TA;int _TB;struct Cyc_Toc_TocContext*_TC;struct Cyc_Absyn_Vardecl*_TD;void*_TE;struct Cyc_Absyn_Vardecl*(*_TF)(struct Cyc_List_List*,struct Cyc_Absyn_Vardecl*);void*(*_T10)(struct Cyc_List_List*,void*);struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T11;struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T12;struct Cyc_Absyn_Vardecl*(*_T13)(struct Cyc_List_List*,struct Cyc_Absyn_Vardecl*);void*(*_T14)(struct Cyc_List_List*,void*);void*_T15;struct Cyc_Absyn_Exp*_T16;struct Cyc_Absyn_Vardecl*_T17;struct Cyc_Absyn_Exp*_T18;struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T19;void*_T1A;struct Cyc_Core_Not_found_exn_struct*_T1B;char*_T1C;char*_T1D;void(*_T1E)(void(*)(struct _tuple25*,struct Cyc_Absyn_Exp*),struct _tuple25*,struct Cyc_List_List*);void(*_T1F)(void(*)(void*,void*),void*,struct Cyc_List_List*);struct _tuple25*_T20;struct Cyc_List_List*_T21;struct _tuple25*_T22;struct Cyc_List_List*_T23;void*_T24;struct _tuple22*_T25;struct _tuple22 _T26;struct Cyc_Absyn_Exp*_T27;struct Cyc_List_List*_T28;struct Cyc_Warn_String_Warn_Warg_struct _T29;int(*_T2A)(struct _fat_ptr);void*(*_T2B)(struct _fat_ptr);struct _fat_ptr _T2C;_T0= env_pack;{
struct _tuple25 _T2D=*_T0;struct Cyc_List_List*_T2E;struct Cyc_Toc_TocContext*_T2F;_T2F= _T2D.f0;_T2E= _T2D.f1;{struct Cyc_Toc_TocContext*ctxt=_T2F;struct Cyc_List_List*env=_T2E;_T1= e;{
void*_T30=_T1->r;struct Cyc_List_List*_T31;struct Cyc_Absyn_Exp*_T32;struct Cyc_Absyn_Exp*_T33;struct Cyc_Absyn_Exp*_T34;struct Cyc_Absyn_Vardecl*_T35;_T2= (int*)_T30;_T3= *_T2;switch(_T3){case 1: _T4= (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T30;_T5= _T4->f1;_T6= (int*)_T5;_T7= *_T6;switch(_T7){case 5:{struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T36=(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T30;_T8= _T36->f1;{struct Cyc_Absyn_Pat_b_Absyn_Binding_struct*_T37=(struct Cyc_Absyn_Pat_b_Absyn_Binding_struct*)_T8;_T35= _T37->f1;}}{struct Cyc_Absyn_Vardecl*vd=_T35;_T35= vd;goto _LL7;}case 4:{struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T36=(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T30;_T9= _T36->f1;{struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T37=(struct Cyc_Absyn_Local_b_Absyn_Binding_struct*)_T9;_T35= _T37->f1;}}_LL7: {struct Cyc_Absyn_Vardecl*vd=_T35;{struct _handler_cons _T36;_TA= & _T36;_push_handler(_TA);{int _T37=0;_TB= setjmp(_T36.handler);if(!_TB)goto _TL3AE;_T37= 1;goto _TL3AF;_TL3AE: _TL3AF: if(_T37)goto _TL3B0;else{goto _TL3B2;}_TL3B2: _TC= ctxt;_TD= vd;_TE= _TD->type;{
# 3533
void*ctype=Cyc_Toc_typ_to_c_array(_TC,_TE);_T10= Cyc_List_assoc;{
struct Cyc_Absyn_Vardecl*(*_T38)(struct Cyc_List_List*,struct Cyc_Absyn_Vardecl*)=(struct Cyc_Absyn_Vardecl*(*)(struct Cyc_List_List*,struct Cyc_Absyn_Vardecl*))_T10;_TF= _T38;}{struct Cyc_Absyn_Vardecl*tmpvd=_TF(env,vd);{struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T38=_cycalloc(sizeof(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct));_T38->tag= 1;{struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T39=_cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));_T39->tag= 4;_T14= Cyc_List_assoc;{
struct Cyc_Absyn_Vardecl*(*_T3A)(struct Cyc_List_List*,struct Cyc_Absyn_Vardecl*)=(struct Cyc_Absyn_Vardecl*(*)(struct Cyc_List_List*,struct Cyc_Absyn_Vardecl*))_T14;_T13= _T3A;}({__typeof__(_T13(env,vd))_T3A=_T13(env,vd);_T39->f1= _T3A;});_T12= (struct Cyc_Absyn_Local_b_Absyn_Binding_struct*)_T39;}_T38->f1= (void*)_T12;_T11= (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T38;}_T15= (void*)_T11;{struct Cyc_Absyn_Exp*e1=Cyc_Absyn_new_exp(_T15,0U);_T16= e1;_T17= tmpvd;
_T16->topt= _T17->type;_T18= e;{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T38=_cycalloc(sizeof(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct));_T38->tag= 14;
_T38->f1= ctype;_T38->f2= e1;_T38->f3= 0;_T38->f4= 1U;_T19= (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T38;}_T18->r= (void*)_T19;}}}_pop_handler();goto _TL3B1;_TL3B0: _T1A= Cyc_Core_get_exn_thrown();{void*_T38=(void*)_T1A;void*_T39;_T1B= (struct Cyc_Core_Not_found_exn_struct*)_T38;_T1C= _T1B->tag;_T1D= Cyc_Core_Not_found;if(_T1C!=_T1D)goto _TL3B3;goto _LL44;_TL3B3: _T39= _T38;{void*exn=_T39;_rethrow(exn);}_LL44:;}_TL3B1:;}}goto _LL3;}default: goto _LL42;};case 6:{struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct*_T36=(struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct*)_T30;_T34= _T36->f1;_T33= _T36->f2;_T32= _T36->f3;}{struct Cyc_Absyn_Exp*e1=_T34;struct Cyc_Absyn_Exp*e2=_T33;struct Cyc_Absyn_Exp*e3=_T32;
# 3544
Cyc_Toc_subst_pattern_vars(env_pack,e1);_T34= e2;_T33= e3;goto _LLB;}case 26:{struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct*_T36=(struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct*)_T30;_T34= _T36->f2;_T33= _T36->f3;}_LLB: {struct Cyc_Absyn_Exp*e1=_T34;struct Cyc_Absyn_Exp*e2=_T33;_T34= e1;_T33= e2;goto _LLD;}case 7:{struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*_T36=(struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*)_T30;_T34= _T36->f1;_T33= _T36->f2;}_LLD: {struct Cyc_Absyn_Exp*e1=_T34;struct Cyc_Absyn_Exp*e2=_T33;_T34= e1;_T33= e2;goto _LLF;}case 8:{struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*_T36=(struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*)_T30;_T34= _T36->f1;_T33= _T36->f2;}_LLF: {struct Cyc_Absyn_Exp*e1=_T34;struct Cyc_Absyn_Exp*e2=_T33;_T34= e1;_T33= e2;goto _LL11;}case 23:{struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*_T36=(struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*)_T30;_T34= _T36->f1;_T33= _T36->f2;}_LL11: {struct Cyc_Absyn_Exp*e1=_T34;struct Cyc_Absyn_Exp*e2=_T33;_T34= e1;_T33= e2;goto _LL13;}case 9:{struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct*_T36=(struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct*)_T30;_T34= _T36->f1;_T33= _T36->f2;}_LL13: {struct Cyc_Absyn_Exp*e1=_T34;struct Cyc_Absyn_Exp*e2=_T33;
# 3555
Cyc_Toc_subst_pattern_vars(env_pack,e1);_T34= e2;goto _LL15;}case 40:{struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct*_T36=(struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct*)_T30;_T34= _T36->f1;}_LL15: {struct Cyc_Absyn_Exp*e=_T34;_T34= e;goto _LL17;}case 12:{struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct*_T36=(struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct*)_T30;_T34= _T36->f1;}_LL17: {struct Cyc_Absyn_Exp*e=_T34;_T34= e;goto _LL19;}case 13:{struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*_T36=(struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*)_T30;_T34= _T36->f1;}_LL19: {struct Cyc_Absyn_Exp*e=_T34;_T34= e;goto _LL1B;}case 14:{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T36=(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T30;_T34= _T36->f2;}_LL1B: {struct Cyc_Absyn_Exp*e=_T34;_T34= e;goto _LL1D;}case 18:{struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct*_T36=(struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct*)_T30;_T34= _T36->f1;}_LL1D: {struct Cyc_Absyn_Exp*e=_T34;_T34= e;goto _LL1F;}case 20:{struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*_T36=(struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*)_T30;_T34= _T36->f1;}_LL1F: {struct Cyc_Absyn_Exp*e=_T34;_T34= e;goto _LL21;}case 21:{struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*_T36=(struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*)_T30;_T34= _T36->f1;}_LL21: {struct Cyc_Absyn_Exp*e=_T34;_T34= e;goto _LL23;}case 22:{struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*_T36=(struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*)_T30;_T34= _T36->f1;}_LL23: {struct Cyc_Absyn_Exp*e=_T34;_T34= e;goto _LL25;}case 27:{struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct*_T36=(struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct*)_T30;_T34= _T36->f1;}_LL25: {struct Cyc_Absyn_Exp*e=_T34;_T34= e;goto _LL27;}case 15:{struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct*_T36=(struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct*)_T30;_T34= _T36->f1;}_LL27: {struct Cyc_Absyn_Exp*e=_T34;
# 3576
Cyc_Toc_subst_pattern_vars(env_pack,e);goto _LL3;}case 4:{struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct*_T36=(struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct*)_T30;_T34= _T36->f1;_T33= _T36->f3;}{struct Cyc_Absyn_Exp*e1=_T34;struct Cyc_Absyn_Exp*e2=_T33;
# 3579
Cyc_Toc_subst_pattern_vars(env_pack,e1);
Cyc_Toc_subst_pattern_vars(env_pack,e2);goto _LL3;}case 10:{struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*_T36=(struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*)_T30;_T34= _T36->f1;_T31= _T36->f2;}{struct Cyc_Absyn_Exp*e=_T34;struct Cyc_List_List*es=_T31;
# 3583
Cyc_Toc_subst_pattern_vars(env_pack,e);_T31= es;goto _LL2D;}case 3:{struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*_T36=(struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*)_T30;_T31= _T36->f2;}_LL2D: {struct Cyc_List_List*es=_T31;_T1F= Cyc_List_iter_c;{
# 3586
void(*_T36)(void(*)(struct _tuple25*,struct Cyc_Absyn_Exp*),struct _tuple25*,struct Cyc_List_List*)=(void(*)(void(*)(struct _tuple25*,struct Cyc_Absyn_Exp*),struct _tuple25*,struct Cyc_List_List*))_T1F;_T1E= _T36;}_T20= env_pack;_T21= es;_T1E(Cyc_Toc_subst_pattern_vars,_T20,_T21);goto _LL3;}case 35:{struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct*_T36=(struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct*)_T30;_T31= _T36->f2;}{struct Cyc_List_List*dles=_T31;_T31= dles;goto _LL31;}case 28:{struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*_T36=(struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*)_T30;_T31= _T36->f3;}_LL31: {struct Cyc_List_List*dles=_T31;_T31= dles;goto _LL33;}case 29:{struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct*_T36=(struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct*)_T30;_T31= _T36->f3;}_LL33: {struct Cyc_List_List*dles=_T31;_T31= dles;goto _LL35;}case 25:{struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*_T36=(struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*)_T30;_T31= _T36->f1;}_LL35: {struct Cyc_List_List*dles=_T31;_T31= dles;goto _LL37;}case 24:{struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct*_T36=(struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct*)_T30;_T31= _T36->f2;}_LL37: {struct Cyc_List_List*dles=_T31;
# 3597
_TL3B8: if(dles!=0)goto _TL3B6;else{goto _TL3B7;}
_TL3B6: _T22= env_pack;_T23= dles;_T24= _T23->hd;_T25= (struct _tuple22*)_T24;_T26= *_T25;_T27= _T26.f1;Cyc_Toc_subst_pattern_vars(_T22,_T27);_T28= dles;
# 3597
dles= _T28->tl;goto _TL3B8;_TL3B7: goto _LL3;}case 37: goto _LL3B;case 11: _LL3B: goto _LL3D;case 33: _LL3D: goto _LL3F;case 16: _LL3F: goto _LL41;case 30: _LL41:{struct Cyc_Warn_String_Warn_Warg_struct _T36;_T36.tag= 0;
# 3605
({__typeof__(_tag_fat("subst_pattern_vars, unexpected exp",sizeof(char),35U))_T37=_tag_fat("subst_pattern_vars, unexpected exp",sizeof(char),35U);_T36.f1= _T37;});_T29= _T36;}{struct Cyc_Warn_String_Warn_Warg_struct _T36=_T29;void*_T37[1];_T37[0]= & _T36;_T2B= Cyc_Warn_impos2;{int(*_T38)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T2B;_T2A= _T38;}_T2C= _tag_fat(_T37,sizeof(void*),1);_T2A(_T2C);}default: _LL42: goto _LL3;}_LL3:;}}}}struct _tuple49{struct Cyc_Toc_Env*f0;struct _fat_ptr*f1;struct Cyc_Absyn_Stmt*f2;};
# 3616
static struct Cyc_Absyn_Stmt*Cyc_Toc_compile_decision_tree(struct Cyc_Toc_TocContext*ctxt,struct _RegionHandle*rgn,struct Cyc_Toc_Env*nv,struct Cyc_List_List**decls,struct Cyc_List_List**bodies,void*dopt,struct Cyc_List_List*lscs,struct Cyc_Absyn_Exp*v){struct Cyc_Absyn_Stmt*_T0;void*_T1;int*_T2;unsigned _T3;struct Cyc_Absyn_Stmt*_T4;void*_T5;struct Cyc_List_List*_T6;void*_T7;long*_T8;struct Cyc_Absyn_Switch_clause*_T9;struct Cyc_Absyn_Stmt*_TA;struct Cyc_Tcpat_Rhs*_TB;struct Cyc_Absyn_Stmt*_TC;long*_TD;long _TE;struct Cyc_Absyn_Stmt*_TF;long*_T10;struct Cyc_Toc_TocContext*_T11;struct _RegionHandle*_T12;struct Cyc_Toc_Env**_T13;struct Cyc_List_List**_T14;struct Cyc_List_List**_T15;struct Cyc_Absyn_Exp*_T16;struct Cyc_Absyn_Exp*_T17;struct Cyc_Absyn_Switch_clause*_T18;struct Cyc_Absyn_Pat*_T19;struct Cyc_Absyn_Switch_clause*_T1A;struct Cyc_List_List*_T1B;void*_T1C;struct _tuple46*_T1D;struct Cyc_List_List**_T1E;struct Cyc_List_List*_T1F;struct _RegionHandle*_T20;struct _tuple47*_T21;struct _RegionHandle*_T22;struct Cyc_List_List**_T23;long _T24;struct Cyc_Absyn_Vardecl*_T25;void*_T26;struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T27;void*_T28;struct Cyc_Absyn_Exp*_T29;struct Cyc_Absyn_Vardecl*_T2A;void*_T2B;struct Cyc_Absyn_Exp*_T2C;struct Cyc_Absyn_Vardecl*_T2D;struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T2E;void*_T2F;struct Cyc_Absyn_Exp*_T30;struct Cyc_Absyn_Vardecl*_T31;void*_T32;struct Cyc_Absyn_Vardecl*_T33;struct Cyc_Absyn_Exp*_T34;struct Cyc_Absyn_Vardecl*_T35;struct Cyc_Absyn_Vardecl*_T36;struct Cyc_Absyn_Decl*_T37;struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T38;struct Cyc_Absyn_Stmt*_T39;struct Cyc_List_List*_T3A;struct Cyc_List_List**_T3B;struct Cyc_List_List*_T3C;struct _RegionHandle*_T3D;struct _tuple49*_T3E;struct _RegionHandle*_T3F;struct Cyc_List_List**_T40;struct Cyc_Absyn_Stmt*_T41;struct Cyc_List_List*_T42;struct Cyc_Warn_String_Warn_Warg_struct _T43;int(*_T44)(struct _fat_ptr ap);struct _fat_ptr _T45;void*_T46;void*_T47;struct Cyc_Toc_TocContext*_T48;struct Cyc_List_List*_T49;struct Cyc_Absyn_Exp*_T4A;struct Cyc_List_List*_T4B;struct Cyc_Absyn_Switch_clause*_T4C;struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct*_T4D;struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct*_T4E;void*_T4F;struct Cyc_List_List*_T50;struct Cyc_List_List*_T51;void*_T52;struct _tuple40*_T53;struct Cyc_List_List*_T54;struct Cyc_Absyn_Switch_clause*_T55;struct Cyc_List_List*_T56;void*_T57;int*_T58;unsigned _T59;struct Cyc_Absyn_Exp*_T5A;int*_T5B;unsigned _T5C;void*_T5D;struct Cyc_Absyn_Exp*_T5E;struct Cyc_Absyn_Exp*_T5F;struct Cyc_Absyn_Exp*_T60;void*_T61;void*_T62;void*_T63;struct Cyc_Absyn_Exp*_T64;void*_T65;struct Cyc_Absyn_Exp*_T66;void*_T67;struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct*_T68;void*_T69;void*_T6A;int*_T6B;int _T6C;void*_T6D;struct Cyc_List_List*_T6E;struct Cyc_List_List*_T6F;struct _tuple40*_T70;struct _tuple40*_T71;void*_T72;int*_T73;int _T74;struct Cyc_List_List*_T75;struct Cyc_List_List*_T76;struct Cyc_List_List*_T77;struct Cyc_List_List*_T78;void*_T79;struct _tuple40*_T7A;void*_T7B;struct Cyc_List_List*_T7C;void*_T7D;long*_T7E;struct Cyc_Absyn_Switch_clause*_T7F;struct Cyc_Absyn_Stmt*_T80;struct Cyc_Tcpat_Rhs*_T81;struct Cyc_Absyn_Stmt*_T82;long*_T83;long _T84;struct Cyc_Absyn_Stmt*_T85;long*_T86;struct Cyc_Toc_TocContext*_T87;struct _RegionHandle*_T88;struct Cyc_Toc_Env**_T89;struct Cyc_List_List**_T8A;struct Cyc_List_List**_T8B;struct Cyc_Absyn_Exp*_T8C;struct Cyc_Absyn_Exp*_T8D;struct Cyc_Absyn_Switch_clause*_T8E;struct Cyc_Absyn_Pat*_T8F;struct Cyc_Absyn_Switch_clause*_T90;struct Cyc_List_List*_T91;void*_T92;struct _tuple46*_T93;struct Cyc_List_List**_T94;struct Cyc_List_List*_T95;struct _RegionHandle*_T96;struct _tuple47*_T97;struct _RegionHandle*_T98;struct Cyc_List_List**_T99;long _T9A;struct Cyc_Absyn_Vardecl*_T9B;void*_T9C;struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T9D;void*_T9E;struct Cyc_Absyn_Exp*_T9F;struct Cyc_Absyn_Vardecl*_TA0;struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_TA1;void*_TA2;struct Cyc_Absyn_Vardecl*_TA3;struct Cyc_Absyn_Exp*_TA4;struct Cyc_Absyn_Vardecl*_TA5;struct Cyc_Absyn_Vardecl*_TA6;struct Cyc_Absyn_Decl*_TA7;struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_TA8;struct Cyc_Absyn_Stmt*_TA9;struct Cyc_List_List*_TAA;struct _tuple25*_TAB;struct Cyc_List_List**_TAC;struct Cyc_Absyn_Exp*_TAD;struct Cyc_List_List**_TAE;struct Cyc_List_List*_TAF;struct _RegionHandle*_TB0;struct _tuple49*_TB1;struct _RegionHandle*_TB2;struct Cyc_List_List**_TB3;struct Cyc_Absyn_Stmt*_TB4;struct Cyc_List_List*_TB5;struct Cyc_Warn_String_Warn_Warg_struct _TB6;int(*_TB7)(struct _fat_ptr ap);struct _fat_ptr _TB8;struct Cyc_Warn_String_Warn_Warg_struct _TB9;int(*_TBA)(struct _fat_ptr ap);struct _fat_ptr _TBB;struct Cyc_List_List*_TBC;void*_TBD;struct _tuple40*_TBE;struct Cyc_List_List*_TBF;struct Cyc_Absyn_Stmt*_TC0;struct Cyc_List_List*_TC1;struct Cyc_List_List*_TC2;void*_TC3;if(dopt!=0)goto _TL3B9;_T0= 
# 3624
Cyc_Absyn_skip_stmt(0U);return _T0;_TL3B9: _T1= dopt;_T2= (int*)_T1;_T3= *_T2;switch(_T3){case 0: _T4= 
# 3626
Cyc_Toc_throw_match_stmt(ctxt);return _T4;case 1: _T5= dopt;{struct Cyc_Tcpat_Success_Tcpat_Decision_struct*_TC4=(struct Cyc_Tcpat_Success_Tcpat_Decision_struct*)_T5;_TC3= _TC4->f1;}{struct Cyc_Tcpat_Rhs*rhs=_TC3;
# 3629
_TL3BF: if(lscs!=0)goto _TL3BD;else{goto _TL3BE;}
_TL3BD: _T6= lscs;_T7= _T6->hd;{struct _tuple43*_TC4=(struct _tuple43*)_T7;struct Cyc_Absyn_Switch_clause*_TC5;struct _fat_ptr*_TC6;struct _fat_ptr*_TC7;void*_TC8;{struct _tuple43 _TC9=*_TC4;_T8= & _TC4->f0;_TC8= (long*)_T8;_TC7= _TC9.f1;_TC6= _TC9.f2;_TC5= _TC9.f3;}{long*already_emitted=(long*)_TC8;struct _fat_ptr*init_lab=_TC7;struct _fat_ptr*code_lab=_TC6;struct Cyc_Absyn_Switch_clause*sc=_TC5;_T9= sc;{
struct Cyc_Absyn_Stmt*body=_T9->body;_TA= body;_TB= rhs;_TC= _TB->rhs;
if(_TA!=_TC)goto _TL3C0;_TD= already_emitted;_TE= *_TD;
# 3634
if(!_TE)goto _TL3C2;_TF= 
Cyc_Absyn_goto_stmt(init_lab,0U);return _TF;_TL3C2: _T10= already_emitted;
*_T10= 1;{
struct Cyc_List_List*newdecls=0;_T11= ctxt;_T12= rgn;_T13= & nv;_T14= & newdecls;_T15= decls;_T16= 
# 3642
Cyc_Toc_deep_copy(v);_T17= 
Cyc_Toc_deep_copy(v);_T18= sc;_T19= _T18->pattern;{
# 3642
struct Cyc_Absyn_Stmt*init_opt=Cyc_Toc_extract_pattern_vars(_T11,_T12,_T13,_T14,_T15,_T16,_T17,_T19);_T1A= sc;{
# 3646
struct Cyc_Absyn_Stmt*res=_T1A->body;{
struct Cyc_List_List*ds=newdecls;_TL3C7: if(ds!=0)goto _TL3C5;else{goto _TL3C6;}
_TL3C5: _T1B= ds;_T1C= _T1B->hd;_T1D= (struct _tuple46*)_T1C;{struct _tuple46 _TC9=*_T1D;long _TCA;void*_TCB;struct Cyc_Absyn_Vardecl*_TCC;struct Cyc_Absyn_Vardecl*_TCD;_TCD= _TC9.f0;_TCC= _TC9.f1;_TCB= _TC9.f2;_TCA= _TC9.f3;{struct Cyc_Absyn_Vardecl*oldv=_TCD;struct Cyc_Absyn_Vardecl*newv=_TCC;void*oldvt=_TCB;long cast=_TCA;_T1E= decls;_T20= rgn;{struct Cyc_List_List*_TCE=_region_malloc(_T20,0U,sizeof(struct Cyc_List_List));_T22= rgn;{struct _tuple47*_TCF=_region_malloc(_T22,0U,sizeof(struct _tuple47));
_TCF->f0= oldv;_TCF->f1= newv;_T21= (struct _tuple47*)_TCF;}_TCE->hd= _T21;_T23= decls;_TCE->tl= *_T23;_T1F= (struct Cyc_List_List*)_TCE;}*_T1E= _T1F;_T24= cast;
if(!_T24)goto _TL3C8;_T25= oldv;_T26= oldvt;{struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_TCE=_cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));_TCE->tag= 4;
# 3652
_TCE->f1= newv;_T27= (struct Cyc_Absyn_Local_b_Absyn_Binding_struct*)_TCE;}_T28= (void*)_T27;_T29= Cyc_Absyn_varb_exp(_T28,0U);_T2A= newv;_T2B= _T2A->type;_T2C= Cyc_Absyn_set_type(_T29,_T2B);
# 3651
({__typeof__(
Cyc_Toc_cast_it(_T26,_T2C))_TCE=Cyc_Toc_cast_it(_T26,_T2C);
# 3651
_T25->initializer= _TCE;});goto _TL3C9;
# 3654
_TL3C8: _T2D= oldv;{struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_TCE=_cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));_TCE->tag= 4;_TCE->f1= newv;_T2E= (struct Cyc_Absyn_Local_b_Absyn_Binding_struct*)_TCE;}_T2F= (void*)_T2E;_T30= Cyc_Absyn_varb_exp(_T2F,0U);_T31= newv;_T32= _T31->type;({__typeof__(Cyc_Absyn_set_type(_T30,_T32))_TCE=Cyc_Absyn_set_type(_T30,_T32);_T2D->initializer= _TCE;});_TL3C9: _T33= oldv;_T34= _T33->initializer;_T35= newv;
_T34->topt= _T35->type;_T36= oldv;
# 3658
_T36->type= oldvt;{struct Cyc_Absyn_Decl*_TCE=_cycalloc(sizeof(struct Cyc_Absyn_Decl));{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_TCF=_cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));_TCF->tag= 0;
# 3660
_TCF->f1= oldv;_T38= (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_TCF;}_TCE->r= (void*)_T38;_TCE->loc= 0U;_T37= (struct Cyc_Absyn_Decl*)_TCE;}_T39= res;res= Cyc_Absyn_decl_stmt(_T37,_T39,0U);}}_T3A= ds;
# 3647
ds= _T3A->tl;goto _TL3C7;_TL3C6:;}
# 3662
res= Cyc_Absyn_label_stmt(code_lab,res,0U);
if(init_opt==0)goto _TL3CA;
res= Cyc_Absyn_seq_stmt(init_opt,res,0U);goto _TL3CB;_TL3CA: _TL3CB:
 res= Cyc_Absyn_label_stmt(init_lab,res,0U);_T3B= bodies;_T3D= rgn;{struct Cyc_List_List*_TC9=_region_malloc(_T3D,0U,sizeof(struct Cyc_List_List));_T3F= rgn;{struct _tuple49*_TCA=_region_malloc(_T3F,0U,sizeof(struct _tuple49));
_TCA->f0= nv;_TCA->f1= code_lab;_TCA->f2= body;_T3E= (struct _tuple49*)_TCA;}_TC9->hd= _T3E;_T40= bodies;_TC9->tl= *_T40;_T3C= (struct Cyc_List_List*)_TC9;}*_T3B= _T3C;_T41= res;
return _T41;}}}_TL3C0:;}}}_T42= lscs;
# 3629
lscs= _T42->tl;goto _TL3BF;_TL3BE:{struct Cyc_Warn_String_Warn_Warg_struct _TC4;_TC4.tag= 0;
# 3670
({__typeof__(_tag_fat("couldn't find rhs!",sizeof(char),19U))_TC5=_tag_fat("couldn't find rhs!",sizeof(char),19U);_TC4.f1= _TC5;});_T43= _TC4;}{struct Cyc_Warn_String_Warn_Warg_struct _TC4=_T43;void*_TC5[1];_TC5[0]= & _TC4;{int(*_TC6)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T44= _TC6;}_T45= _tag_fat(_TC5,sizeof(void*),1);_T44(_T45);}}default: _T46= dopt;{struct Cyc_Tcpat_SwitchDec_Tcpat_Decision_struct*_TC4=(struct Cyc_Tcpat_SwitchDec_Tcpat_Decision_struct*)_T46;_TC2= _TC4->f1;_TC1= _TC4->f2;_T47= _TC4->f3;_TC3= (void*)_T47;}{struct Cyc_List_List*symbolic_path=_TC2;struct Cyc_List_List*switches=_TC1;void*other_decision=_TC3;
# 3673
struct Cyc_Absyn_Stmt*res=Cyc_Toc_compile_decision_tree(ctxt,rgn,nv,decls,bodies,other_decision,lscs,v);_T48= ctxt;_T49= 
# 3675
Cyc_List_rev(symbolic_path);_T4A= Cyc_Toc_deep_copy(v);{struct Cyc_Absyn_Exp*p=Cyc_Toc_compile_path(_T48,_T49,_T4A);
struct Cyc_List_List*ss=Cyc_List_rev(switches);
# 3678
struct _tuple45 _TC4=Cyc_Toc_admits_switch(ss);void*_TC5;int _TC6;_TC6= _TC4.f0;_TC5= _TC4.f1;{int allows_switch=_TC6;void*test_kind=_TC5;
if(allows_switch <= 1)goto _TL3CC;{
# 3682
struct Cyc_List_List*new_lscs;new_lscs= _cycalloc(sizeof(struct Cyc_List_List));_T4B= new_lscs;{struct Cyc_Absyn_Switch_clause*_TC7=_cycalloc(sizeof(struct Cyc_Absyn_Switch_clause));_T4D= & Cyc_Absyn_Wild_p_val;_T4E= (struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct*)_T4D;_T4F= (void*)_T4E;
({__typeof__(Cyc_Absyn_new_pat(_T4F,0U))_TC8=Cyc_Absyn_new_pat(_T4F,0U);_TC7->pattern= _TC8;});_TC7->pat_vars= 0;_TC7->where_clause= 0;_TC7->body= res;_TC7->loc= 0U;_T4C= (struct Cyc_Absyn_Switch_clause*)_TC7;}_T4B->hd= _T4C;_T50= new_lscs;_T50->tl= 0;
# 3685
_TL3D1: if(ss!=0)goto _TL3CF;else{goto _TL3D0;}
_TL3CF: _T51= ss;_T52= _T51->hd;_T53= (struct _tuple40*)_T52;{struct _tuple40 _TC7=*_T53;void*_TC8;void*_TC9;_TC9= _TC7.f0;_TC8= _TC7.f1;{void*pat_test=_TC9;void*dec_tree=_TC8;
# 3688
struct Cyc_Absyn_Pat*case_exp=Cyc_Toc_compile_pat_test_as_case(pat_test);
# 3690
struct Cyc_Absyn_Stmt*s=Cyc_Toc_compile_decision_tree(ctxt,rgn,nv,decls,bodies,dec_tree,lscs,v);{struct Cyc_List_List*_TCA=_cycalloc(sizeof(struct Cyc_List_List));{struct Cyc_Absyn_Switch_clause*_TCB=_cycalloc(sizeof(struct Cyc_Absyn_Switch_clause));
# 3692
_TCB->pattern= case_exp;_TCB->pat_vars= 0;_TCB->where_clause= 0;_TCB->body= s;_TCB->loc= 0U;_T55= (struct Cyc_Absyn_Switch_clause*)_TCB;}_TCA->hd= _T55;_TCA->tl= new_lscs;_T54= (struct Cyc_List_List*)_TCA;}new_lscs= _T54;}}_T56= ss;
# 3685
ss= _T56->tl;goto _TL3D1;_TL3D0:{struct _fat_ptr*_TC7;void*_TC8;_T57= test_kind;_T58= (int*)_T57;_T59= *_T58;switch(_T59){case 1:
# 3696
 LOOP1: _T5A= p;{
void*_TC9=_T5A->r;struct Cyc_Absyn_Exp*_TCA;_T5B= (int*)_TC9;_T5C= *_T5B;switch(_T5C){case 14:{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_TCB=(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_TC9;_TCA= _TCB->f2;}{struct Cyc_Absyn_Exp*e=_TCA;
# 3699
p= e;goto LOOP1;}case 20:{struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*_TCB=(struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*)_TC9;_TCA= _TCB->f1;}{struct Cyc_Absyn_Exp*e=_TCA;
# 3702
p= e;goto _LL1E;}default: goto _LL1E;}_LL1E:;}_T5D= 
# 3707
Cyc_Absyn_cstar_type(Cyc_Absyn_sint_type,Cyc_Toc_mt_tq);_T5E= p;_T5F= Cyc_Toc_cast_it(_T5D,_T5E);_T60= Cyc_Absyn_deref_exp(_T5F,0U);_T61= Cyc_Absyn_uint_type;p= Cyc_Absyn_set_type(_T60,_T61);goto _LL15;case 3: _T62= test_kind;{struct Cyc_Toc_TaggedUnionTest_Toc_TestKind_struct*_TC9=(struct Cyc_Toc_TaggedUnionTest_Toc_TestKind_struct*)_T62;_T63= _TC9->f1;_TC8= (void*)_T63;_TC7= _TC9->f2;}{void*t=_TC8;struct _fat_ptr*f=_TC7;
# 3710
void*t2=Cyc_Toc_tagged_union_field_struct(ctxt,t,f);_T64= 
Cyc_Toc_member_exp(p,f,0U);_T65= t2;p= Cyc_Absyn_set_type(_T64,_T65);_T66= 
Cyc_Toc_member_exp(p,Cyc_Toc_tag_sp,0U);_T67= Cyc_Absyn_uint_type;p= Cyc_Absyn_set_type(_T66,_T67);goto _LL15;}case 2: goto _LL1D;default: _LL1D:
# 3721
 p= Cyc_Toc_cast_it(Cyc_Absyn_sint_type,p);goto _LL15;}_LL15:;}{struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct*_TC7=_cycalloc(sizeof(struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct));_TC7->tag= 10;
# 3724
_TC7->f1= p;_TC7->f2= new_lscs;_TC7->f3= 0;_T68= (struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct*)_TC7;}_T69= (void*)_T68;res= Cyc_Absyn_new_stmt(_T69,0U);}goto _TL3CD;
# 3728
_TL3CC:{struct Cyc_Absyn_Exp*_TC7;_T6A= test_kind;_T6B= (int*)_T6A;_T6C= *_T6B;if(_T6C!=2)goto _TL3D4;_T6D= test_kind;{struct Cyc_Toc_WhereTest_Toc_TestKind_struct*_TC8=(struct Cyc_Toc_WhereTest_Toc_TestKind_struct*)_T6D;_TC7= _TC8->f1;}{struct Cyc_Absyn_Exp*e=_TC7;struct Cyc_Tcpat_Rhs*_TC8;void*_TC9;if(ss==0)goto _TL3D6;_T6E= ss;_T6F= (struct Cyc_List_List*)_T6E;_T70= _T6F->hd;_T71= (struct _tuple40*)_T70;_T72= _T71->f1;_T73= (int*)_T72;_T74= *_T73;if(_T74!=1)goto _TL3D8;_T75= ss;_T76= (struct Cyc_List_List*)_T75;_T77= _T76->tl;if(_T77!=0)goto _TL3DA;_T78= ss;{struct Cyc_List_List _TCA=*_T78;_T79= _TCA.hd;_T7A= (struct _tuple40*)_T79;{struct _tuple40 _TCB=*_T7A;_TC9= _TCB.f0;_T7B= _TCB.f1;{struct Cyc_Tcpat_Success_Tcpat_Decision_struct*_TCC=(struct Cyc_Tcpat_Success_Tcpat_Decision_struct*)_T7B;_TC8= _TCC->f1;}}}{void*pat_test=_TC9;struct Cyc_Tcpat_Rhs*rhs=_TC8;
# 3736
_TL3DF: if(lscs!=0)goto _TL3DD;else{goto _TL3DE;}
_TL3DD: _T7C= lscs;_T7D= _T7C->hd;{struct _tuple43*_TCA=(struct _tuple43*)_T7D;struct Cyc_Absyn_Switch_clause*_TCB;struct _fat_ptr*_TCC;struct _fat_ptr*_TCD;void*_TCE;{struct _tuple43 _TCF=*_TCA;_T7E= & _TCA->f0;_TCE= (long*)_T7E;_TCD= _TCF.f1;_TCC= _TCF.f2;_TCB= _TCF.f3;}{long*already_emitted=(long*)_TCE;struct _fat_ptr*init_lab=_TCD;struct _fat_ptr*code_lab=_TCC;struct Cyc_Absyn_Switch_clause*sc=_TCB;_T7F= sc;{
struct Cyc_Absyn_Stmt*body=_T7F->body;_T80= body;_T81= rhs;_T82= _T81->rhs;
if(_T80!=_T82)goto _TL3E0;_T83= already_emitted;_T84= *_T83;
# 3742
if(!_T84)goto _TL3E2;_T85= 
Cyc_Absyn_goto_stmt(init_lab,0U);return _T85;_TL3E2: _T86= already_emitted;
*_T86= 1;{
struct Cyc_List_List*newdecls=0;_T87= ctxt;_T88= rgn;_T89= & nv;_T8A= & newdecls;_T8B= decls;_T8C= 
# 3748
Cyc_Toc_deep_copy(v);_T8D= Cyc_Toc_deep_copy(v);_T8E= sc;_T8F= _T8E->pattern;{
# 3747
struct Cyc_Absyn_Stmt*init_opt=Cyc_Toc_extract_pattern_vars(_T87,_T88,_T89,_T8A,_T8B,_T8C,_T8D,_T8F);_T90= sc;{
# 3751
struct Cyc_Absyn_Stmt*r=_T90->body;{
struct Cyc_List_List*ds=newdecls;_TL3E7: if(ds!=0)goto _TL3E5;else{goto _TL3E6;}
_TL3E5: _T91= ds;_T92= _T91->hd;_T93= (struct _tuple46*)_T92;{struct _tuple46 _TCF=*_T93;long _TD0;void*_TD1;struct Cyc_Absyn_Vardecl*_TD2;struct Cyc_Absyn_Vardecl*_TD3;_TD3= _TCF.f0;_TD2= _TCF.f1;_TD1= _TCF.f2;_TD0= _TCF.f3;{struct Cyc_Absyn_Vardecl*oldv=_TD3;struct Cyc_Absyn_Vardecl*newv=_TD2;void*oldvt=_TD1;long cast=_TD0;_T94= decls;_T96= rgn;{struct Cyc_List_List*_TD4=_region_malloc(_T96,0U,sizeof(struct Cyc_List_List));_T98= rgn;{struct _tuple47*_TD5=_region_malloc(_T98,0U,sizeof(struct _tuple47));
_TD5->f0= oldv;_TD5->f1= newv;_T97= (struct _tuple47*)_TD5;}_TD4->hd= _T97;_T99= decls;_TD4->tl= *_T99;_T95= (struct Cyc_List_List*)_TD4;}*_T94= _T95;_T9A= cast;
if(!_T9A)goto _TL3E8;_T9B= oldv;_T9C= oldvt;{struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_TD4=_cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));_TD4->tag= 4;
_TD4->f1= newv;_T9D= (struct Cyc_Absyn_Local_b_Absyn_Binding_struct*)_TD4;}_T9E= (void*)_T9D;_T9F= Cyc_Absyn_varb_exp(_T9E,0U);({__typeof__(Cyc_Toc_cast_it(_T9C,_T9F))_TD4=Cyc_Toc_cast_it(_T9C,_T9F);_T9B->initializer= _TD4;});goto _TL3E9;
# 3758
_TL3E8: _TA0= oldv;{struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_TD4=_cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));_TD4->tag= 4;_TD4->f1= newv;_TA1= (struct Cyc_Absyn_Local_b_Absyn_Binding_struct*)_TD4;}_TA2= (void*)_TA1;({__typeof__(Cyc_Absyn_varb_exp(_TA2,0U))_TD4=Cyc_Absyn_varb_exp(_TA2,0U);_TA0->initializer= _TD4;});_TL3E9: _TA3= oldv;_TA4= _TA3->initializer;_TA5= newv;
_TA4->topt= _TA5->type;_TA6= oldv;
# 3762
_TA6->type= oldvt;{struct Cyc_Absyn_Decl*_TD4=_cycalloc(sizeof(struct Cyc_Absyn_Decl));{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_TD5=_cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));_TD5->tag= 0;
# 3764
_TD5->f1= oldv;_TA8= (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_TD5;}_TD4->r= (void*)_TA8;_TD4->loc= 0U;_TA7= (struct Cyc_Absyn_Decl*)_TD4;}_TA9= r;r= Cyc_Absyn_decl_stmt(_TA7,_TA9,0U);}}_TAA= ds;
# 3752
ds= _TAA->tl;goto _TL3E7;_TL3E6:;}
# 3766
r= Cyc_Absyn_label_stmt(code_lab,r,0U);
# 3770
Cyc_Toc_exp_to_c(nv,e);{struct _tuple25*_TCF=_cycalloc(sizeof(struct _tuple25));
# 3772
_TCF->f0= ctxt;_TAC= decls;_TCF->f1= *_TAC;_TAB= (struct _tuple25*)_TCF;}_TAD= e;Cyc_Toc_subst_pattern_vars(_TAB,_TAD);
r= Cyc_Absyn_ifthenelse_stmt(e,r,res,0U);
if(init_opt==0)goto _TL3EA;
r= Cyc_Absyn_seq_stmt(init_opt,r,0U);goto _TL3EB;_TL3EA: _TL3EB:
 r= Cyc_Absyn_label_stmt(init_lab,r,0U);_TAE= bodies;_TB0= rgn;{struct Cyc_List_List*_TCF=_region_malloc(_TB0,0U,sizeof(struct Cyc_List_List));_TB2= rgn;{struct _tuple49*_TD0=_region_malloc(_TB2,0U,sizeof(struct _tuple49));
_TD0->f0= nv;_TD0->f1= code_lab;_TD0->f2= body;_TB1= (struct _tuple49*)_TD0;}_TCF->hd= _TB1;_TB3= bodies;_TCF->tl= *_TB3;_TAF= (struct Cyc_List_List*)_TCF;}*_TAE= _TAF;_TB4= r;
return _TB4;}}}_TL3E0:;}}}_TB5= lscs;
# 3736
lscs= _TB5->tl;goto _TL3DF;_TL3DE:{struct Cyc_Warn_String_Warn_Warg_struct _TCA;_TCA.tag= 0;
# 3781
({__typeof__(_tag_fat("couldn't find rhs!",sizeof(char),19U))_TCB=_tag_fat("couldn't find rhs!",sizeof(char),19U);_TCA.f1= _TCB;});_TB6= _TCA;}{struct Cyc_Warn_String_Warn_Warg_struct _TCA=_TB6;void*_TCB[1];_TCB[0]= & _TCA;{int(*_TCC)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_TB7= _TCC;}_TB8= _tag_fat(_TCB,sizeof(void*),1);_TB7(_TB8);}}goto _TL3DB;_TL3DA: goto _LL2D;_TL3DB: goto _TL3D9;_TL3D8: goto _LL2D;_TL3D9: goto _TL3D7;_TL3D6: _LL2D:{struct Cyc_Warn_String_Warn_Warg_struct _TCA;_TCA.tag= 0;
# 3783
({__typeof__(_tag_fat("bad where clause in match compiler",sizeof(char),35U))_TCB=_tag_fat("bad where clause in match compiler",sizeof(char),35U);_TCA.f1= _TCB;});_TB9= _TCA;}{struct Cyc_Warn_String_Warn_Warg_struct _TCA=_TB9;void*_TCB[1];_TCB[0]= & _TCA;{int(*_TCC)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_TBA= _TCC;}_TBB= _tag_fat(_TCB,sizeof(void*),1);_TBA(_TBB);}_TL3D7:;}goto _TL3D5;_TL3D4:
# 3787
 _TL3EF: if(ss!=0)goto _TL3ED;else{goto _TL3EE;}
_TL3ED: _TBC= ss;_TBD= _TBC->hd;_TBE= (struct _tuple40*)_TBD;{struct _tuple40 _TC8=*_TBE;void*_TC9;void*_TCA;_TCA= _TC8.f0;_TC9= _TC8.f1;{void*pat_test=_TCA;void*dec_tree=_TC9;
struct Cyc_Absyn_Exp*test_exp=Cyc_Toc_compile_pat_test(ctxt,p,pat_test);
struct Cyc_Absyn_Stmt*s=Cyc_Toc_compile_decision_tree(ctxt,rgn,nv,decls,bodies,dec_tree,lscs,v);
res= Cyc_Absyn_ifthenelse_stmt(test_exp,s,res,0U);}}_TBF= ss;
# 3787
ss= _TBF->tl;goto _TL3EF;_TL3EE: _TL3D5:;}_TL3CD: _TC0= res;
# 3795
return _TC0;}}}};}
# 3805
static struct Cyc_Toc_Env**Cyc_Toc_find_case_env(struct Cyc_List_List*bodies,struct Cyc_Absyn_Stmt*s){struct Cyc_List_List*_T0;void*_T1;struct Cyc_Toc_Env**_T2;struct Cyc_Toc_Env**_T3;struct Cyc_List_List*_T4;
# 3807
_TL3F3: if(bodies!=0)goto _TL3F1;else{goto _TL3F2;}
_TL3F1: _T0= bodies;_T1= _T0->hd;{struct _tuple49*_T5=(struct _tuple49*)_T1;struct Cyc_Absyn_Stmt*_T6;void*_T7;{struct _tuple49 _T8=*_T5;_T2= & _T5->f0;_T7= (struct Cyc_Toc_Env**)_T2;_T6= _T8.f2;}{struct Cyc_Toc_Env**nv=(struct Cyc_Toc_Env**)_T7;struct Cyc_Absyn_Stmt*s2=_T6;
if(s2!=s)goto _TL3F4;_T3= nv;
return _T3;_TL3F4:;}}_T4= bodies;
# 3807
bodies= _T4->tl;goto _TL3F3;_TL3F2:
# 3814
 return 0;}
# 3818
static void Cyc_Toc_xlate_switch(struct Cyc_Toc_Env*nv,struct Cyc_Absyn_Stmt*whole_s,struct Cyc_Absyn_Exp*e,struct Cyc_List_List*scs,void*dopt){struct Cyc_Absyn_Exp*_T0;void*_T1;struct Cyc_Absyn_Exp*_T2;int*_T3;int _T4;void*_T5;struct Cyc_Toc_Env*_T6;struct Cyc_Toc_TocContext*_T7;struct _tuple1*_T8;struct Cyc_Toc_Env*_T9;struct Cyc_Toc_TocContext*_TA;void*_TB;void*_TC;struct Cyc_Absyn_Exp*_TD;struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_TE;void*_TF;struct Cyc_Absyn_Exp*_T10;struct Cyc_Absyn_Vardecl*_T11;void*_T12;struct Cyc_Toc_Env*_T13;struct Cyc_Toc_TocContext*_T14;struct Cyc_List_List*(*_T15)(struct _RegionHandle*,struct _tuple43*(*)(struct _tuple44*,struct Cyc_Absyn_Switch_clause*),struct _tuple44*,struct Cyc_List_List*);struct Cyc_List_List*(*_T16)(struct _RegionHandle*,void*(*)(void*,void*),void*,struct Cyc_List_List*);struct _RegionHandle*_T17;struct _tuple44*_T18;struct Cyc_Toc_Env*_T19;struct Cyc_List_List*_T1A;struct Cyc_Toc_Env*_T1B;struct Cyc_Toc_TocContext*_T1C;struct _RegionHandle*_T1D;struct Cyc_Toc_Env*_T1E;struct Cyc_List_List**_T1F;struct Cyc_List_List**_T20;void*_T21;struct Cyc_List_List*_T22;struct Cyc_Absyn_Exp*_T23;struct Cyc_List_List*_T24;void*_T25;struct Cyc_Absyn_Switch_clause*_T26;struct Cyc_Toc_Env**_T27;struct Cyc_List_List*_T28;struct Cyc_List_List*_T29;struct Cyc_List_List*_T2A;struct Cyc_List_List*_T2B;void*_T2C;struct Cyc_List_List*_T2D;struct Cyc_Absyn_Switch_clause*_T2E;struct Cyc_Absyn_Stmt*_T2F;struct Cyc_Toc_Env*_T30;struct Cyc_Absyn_Stmt*_T31;struct Cyc_Absyn_Switch_clause*_T32;struct Cyc_Core_Opt*_T33;struct Cyc_Absyn_Switch_clause*_T34;struct Cyc_Core_Opt*_T35;void*_T36;struct Cyc_List_List*_T37;struct _tuple0 _T38;struct Cyc_List_List*_T39;struct Cyc_List_List*(*_T3A)(struct Cyc_Absyn_Vardecl*(*)(struct Cyc_List_List*,struct Cyc_Absyn_Vardecl*),struct Cyc_List_List*,struct Cyc_List_List*);struct Cyc_List_List*(*_T3B)(void*(*)(void*,void*),void*,struct Cyc_List_List*);struct Cyc_Absyn_Vardecl*(*_T3C)(struct Cyc_List_List*,struct Cyc_Absyn_Vardecl*);void*(*_T3D)(struct Cyc_List_List*,void*);struct Cyc_List_List*_T3E;struct Cyc_List_List*_T3F;struct Cyc_Toc_Env*_T40;struct Cyc_Absyn_Stmt*_T41;struct Cyc_Toc_Env*_T42;struct Cyc_Absyn_Stmt*_T43;struct Cyc_List_List*_T44;struct Cyc_Absyn_Stmt*_T45;struct _fat_ptr*_T46;struct Cyc_Absyn_Stmt*_T47;struct Cyc_Absyn_Stmt*_T48;struct Cyc_List_List*_T49;void*_T4A;struct _tuple47*_T4B;struct Cyc_List_List*_T4C;void*_T4D;struct Cyc_Absyn_Vardecl*_T4E;struct Cyc_Absyn_Vardecl*_T4F;struct Cyc_List_List*_T50;struct Cyc_List_List*_T51;struct _RegionHandle*_T52;struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T53;void*_T54;struct Cyc_Absyn_Decl*_T55;struct Cyc_Absyn_Stmt*_T56;struct Cyc_List_List*_T57;struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T58;void*_T59;struct Cyc_Absyn_Decl*_T5A;struct Cyc_Absyn_Stmt*_T5B;struct Cyc_Absyn_Stmt*_T5C;struct Cyc_Absyn_Stmt*_T5D;_T0= e;_T1= _T0->topt;{
# 3820
void*t=_check_null(_T1);
Cyc_Toc_exp_to_c(nv,e);{
# 3823
struct Cyc_Absyn_Vardecl*v=0;
struct Cyc_Absyn_Exp*vexp=e;_T2= e;{
void*_T5E=_T2->r;void*_T5F;_T3= (int*)_T5E;_T4= *_T3;if(_T4!=1)goto _TL3F6;{struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T60=(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T5E;_T5= _T60->f1;_T5F= (void*)_T5;}{void*b=_T5F;goto _LL0;}_TL3F6: _T6= nv;_T7= _T6->ctxt;{
# 3829
struct _tuple1*x=Cyc_Toc_temp_var(_T7);_T8= x;_T9= nv;_TA= _T9->ctxt;_TB= t;_TC= 
Cyc_Toc_typ_to_c(_TA,_TB);_TD= e;v= Cyc_Absyn_new_vardecl(0U,_T8,_TC,_TD,0);{struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T60=_cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));_T60->tag= 4;
_T60->f1= v;_TE= (struct Cyc_Absyn_Local_b_Absyn_Binding_struct*)_T60;}_TF= (void*)_TE;_T10= Cyc_Absyn_varb_exp(_TF,0U);_T11= v;_T12= _T11->type;vexp= Cyc_Absyn_set_type(_T10,_T12);goto _LL0;}_LL0:;}_T13= nv;_T14= _T13->ctxt;{
# 3834
struct _fat_ptr*end_l=Cyc_Toc_fresh_label(_T14);struct _RegionHandle _T5E=_new_region(0U,"rgn");struct _RegionHandle*rgn=& _T5E;_push_region(rgn);{
# 3836
struct Cyc_Toc_Env*_T5F=Cyc_Toc_share_env(rgn,nv);struct Cyc_Toc_Env*nv=_T5F;_T16= Cyc_List_rmap_c;{
# 3839
struct Cyc_List_List*(*_T60)(struct _RegionHandle*,struct _tuple43*(*)(struct _tuple44*,struct Cyc_Absyn_Switch_clause*),struct _tuple44*,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _RegionHandle*,struct _tuple43*(*)(struct _tuple44*,struct Cyc_Absyn_Switch_clause*),struct _tuple44*,struct Cyc_List_List*))_T16;_T15= _T60;}_T17= rgn;{struct _tuple44*_T60=_cycalloc(sizeof(struct _tuple44));_T19= nv;_T60->f0= _T19->ctxt;_T60->f1= rgn;_T18= (struct _tuple44*)_T60;}_T1A= scs;{struct Cyc_List_List*lscs=_T15(_T17,Cyc_Toc_gen_labels,_T18,_T1A);
# 3843
struct Cyc_List_List*mydecls=0;
struct Cyc_List_List*mybodies=0;_T1B= nv;_T1C= _T1B->ctxt;_T1D= rgn;_T1E= nv;_T1F= & mydecls;_T20= & mybodies;_T21= dopt;_T22= lscs;_T23= vexp;{
struct Cyc_Absyn_Stmt*test_tree=
Cyc_Toc_compile_decision_tree(_T1C,_T1D,_T1E,_T1F,_T20,_T21,_T22,_T23);{
# 3851
struct Cyc_List_List*lscs2=lscs;_TL3FB: if(lscs2!=0)goto _TL3F9;else{goto _TL3FA;}
_TL3F9: _T24= lscs2;_T25= _T24->hd;{struct _tuple43*_T60=(struct _tuple43*)_T25;struct Cyc_Absyn_Switch_clause*_T61;struct _fat_ptr*_T62;{struct _tuple43 _T63=*_T60;_T62= _T63.f2;_T61= _T63.f3;}{struct _fat_ptr*body_lab=_T62;struct Cyc_Absyn_Switch_clause*body_sc=_T61;_T26= body_sc;{
struct Cyc_Absyn_Stmt*s=_T26->body;
# 3855
struct Cyc_Toc_Env**envp=Cyc_Toc_find_case_env(mybodies,s);
# 3858
if(envp!=0)goto _TL3FC;goto _TL3F8;_TL3FC: _T27= envp;{
# 3860
struct Cyc_Toc_Env*env=*_T27;_T28= lscs2;_T29= _T28->tl;
# 3862
if(_T29==0)goto _TL3FE;_T2A= lscs2;_T2B= _T2A->tl;_T2C= _T2B->hd;{
struct _tuple43*_T63=(struct _tuple43*)_T2C;struct Cyc_Absyn_Switch_clause*_T64;struct _fat_ptr*_T65;{struct _tuple43 _T66=*_T63;_T65= _T66.f2;_T64= _T66.f3;}{struct _fat_ptr*fallthru_lab=_T65;struct Cyc_Absyn_Switch_clause*next_sc=_T64;_T2D= mybodies;_T2E= next_sc;_T2F= _T2E->body;{
# 3866
struct Cyc_Toc_Env**next_case_env=Cyc_Toc_find_case_env(_T2D,_T2F);
# 3871
if(next_case_env!=0)goto _TL400;_T30= 
Cyc_Toc_last_switchclause_env(rgn,env,end_l);_T31= s;Cyc_Toc_stmt_to_c(_T30,_T31);goto _TL401;
# 3875
_TL400:{struct Cyc_List_List*vs=0;_T32= next_sc;_T33= _T32->pat_vars;
if(_T33==0)goto _TL402;_T34= next_sc;_T35= _T34->pat_vars;_T36= _T35->v;_T37= (struct Cyc_List_List*)_T36;_T38= 
Cyc_List_split(_T37);_T39= _T38.f0;vs= Cyc_Tcutil_filter_nulls(_T39);_T3B= Cyc_List_map_c;{
struct Cyc_List_List*(*_T66)(struct Cyc_Absyn_Vardecl*(*)(struct Cyc_List_List*,struct Cyc_Absyn_Vardecl*),struct Cyc_List_List*,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct Cyc_Absyn_Vardecl*(*)(struct Cyc_List_List*,struct Cyc_Absyn_Vardecl*),struct Cyc_List_List*,struct Cyc_List_List*))_T3B;_T3A= _T66;}_T3D= Cyc_List_assoc;{struct Cyc_Absyn_Vardecl*(*_T66)(struct Cyc_List_List*,struct Cyc_Absyn_Vardecl*)=(struct Cyc_Absyn_Vardecl*(*)(struct Cyc_List_List*,struct Cyc_Absyn_Vardecl*))_T3D;_T3C= _T66;}_T3E= mydecls;_T3F= Cyc_List_imp_rev(vs);vs= _T3A(_T3C,_T3E,_T3F);goto _TL403;_TL402: _TL403: _T40= 
# 3880
Cyc_Toc_non_last_switchclause_env(rgn,env,end_l,fallthru_lab,vs);_T41= s;Cyc_Toc_stmt_to_c(_T40,_T41);}_TL401:;}}}goto _TL3FF;
# 3883
_TL3FE: _T42= Cyc_Toc_last_switchclause_env(rgn,env,end_l);_T43= s;Cyc_Toc_stmt_to_c(_T42,_T43);_TL3FF:;}}}}_TL3F8: _T44= lscs2;
# 3851
lscs2= _T44->tl;goto _TL3FB;_TL3FA:;}_T45= test_tree;_T46= end_l;_T47= 
# 3887
Cyc_Toc_skip_stmt_dl();_T48= Cyc_Absyn_label_stmt(_T46,_T47,0U);{struct Cyc_Absyn_Stmt*res=Cyc_Absyn_seq_stmt(_T45,_T48,0U);
# 3889
struct Cyc_List_List*added=0;
_TL407: if(mydecls!=0)goto _TL405;else{goto _TL406;}
_TL405: _T49= mydecls;_T4A= _T49->hd;_T4B= (struct _tuple47*)_T4A;{struct _tuple47 _T60=*_T4B;struct Cyc_Absyn_Vardecl*_T61;_T61= _T60.f1;{struct Cyc_Absyn_Vardecl*vd=_T61;{
struct Cyc_List_List*itr=added;_TL40B: if(itr!=0)goto _TL409;else{goto _TL40A;}
_TL409: _T4C= itr;_T4D= _T4C->hd;_T4E= (struct Cyc_Absyn_Vardecl*)_T4D;_T4F= vd;if(_T4E!=_T4F)goto _TL40C;goto bottom;_TL40C: _T50= itr;
# 3892
itr= _T50->tl;goto _TL40B;_TL40A:;}_T52= rgn;{struct Cyc_List_List*_T62=_region_malloc(_T52,0U,sizeof(struct Cyc_List_List));
# 3895
_T62->hd= vd;_T62->tl= added;_T51= (struct Cyc_List_List*)_T62;}added= _T51;{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T62=_cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));_T62->tag= 0;
_T62->f1= vd;_T53= (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T62;}_T54= (void*)_T53;_T55= Cyc_Absyn_new_decl(_T54,0U);_T56= res;res= Cyc_Absyn_decl_stmt(_T55,_T56,0U);
bottom: goto _TL404;}}_TL404: _T57= 
# 3890
_check_null(mydecls);mydecls= _T57->tl;goto _TL407;_TL406:
# 3901
 if(v==0)goto _TL40E;{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T60=_cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));_T60->tag= 0;
_T60->f1= v;_T58= (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T60;}_T59= (void*)_T58;_T5A= Cyc_Absyn_new_decl(_T59,0U);_T5B= res;res= Cyc_Absyn_decl_stmt(_T5A,_T5B,0U);goto _TL40F;_TL40E: _TL40F: _T5C= whole_s;_T5D= res;
# 3904
_T5C->r= _T5D->r;_npop_handler(0);return;}}}}_pop_region();}}}}
# 3912
struct Cyc_Absyn_Stmt*Cyc_Toc_make_npop_handler(int n){struct Cyc_Absyn_Exp*_T0;int _T1;struct Cyc_Absyn_Exp*_T2;void*_T3;struct Cyc_Absyn_Exp*_T4;struct _fat_ptr _T5;void*_T6;struct Cyc_Absyn_Exp*_T7;struct Cyc_Absyn_Stmt*_T8;{struct Cyc_Absyn_Exp*_T9[1];_T1= n - 1;_T2= 
# 3914
Cyc_Absyn_signed_int_exp(_T1,0U);_T3= Cyc_Absyn_sint_type;({__typeof__(Cyc_Absyn_set_type(_T2,_T3))_TA=Cyc_Absyn_set_type(_T2,_T3);_T9[0]= _TA;});_T4= Cyc_Toc__npop_handler_e;_T5= _tag_fat(_T9,sizeof(struct Cyc_Absyn_Exp*),1);_T0= Cyc_Toc_fncall_exp_dl(_T4,_T5);}_T6= Cyc_Absyn_void_type;_T7= Cyc_Absyn_set_type(_T0,_T6);_T8= 
# 3913
Cyc_Absyn_exp_stmt(_T7,0U);return _T8;}
# 3918
void Cyc_Toc_do_npop_before(int n,struct Cyc_Absyn_Stmt*s){struct Cyc_Absyn_Stmt*_T0;struct Cyc_Absyn_Stmt*_T1;struct Cyc_Absyn_Stmt*_T2;void*_T3;struct Cyc_Absyn_Stmt*_T4;
if(n <= 0)goto _TL410;_T0= s;_T1= 
Cyc_Toc_make_npop_handler(n);_T2= s;_T3= _T2->r;_T4= Cyc_Absyn_new_stmt(_T3,0U);({__typeof__(Cyc_Toc_seq_stmt_r(_T1,_T4))_T5=Cyc_Toc_seq_stmt_r(_T1,_T4);_T0->r= _T5;});goto _TL411;_TL410: _TL411:;}
# 3923
void Cyc_Toc_stmt_to_c(struct Cyc_Toc_Env*nv,struct Cyc_Absyn_Stmt*s){struct Cyc_Absyn_Stmt*_T0;int*_T1;unsigned _T2;struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct*_T3;struct Cyc_Absyn_Exp*_T4;struct Cyc_Toc_Env*_T5;struct Cyc_Toc_TocContext*_T6;struct Cyc_Absyn_Stmt*_T7;int _T8;struct Cyc_Absyn_Stmt*_T9;struct Cyc_Toc_Env*_TA;struct Cyc_Toc_TocContext*_TB;struct Cyc_Absyn_Exp*_TC;void*_TD;void*_TE;struct Cyc_Toc_Env*_TF;struct Cyc_Toc_TocContext*_T10;struct Cyc_Absyn_Stmt*_T11;struct Cyc_Toc_Env*_T12;struct Cyc_Toc_TocContext*_T13;struct Cyc_Absyn_Exp*_T14;void*_T15;struct Cyc_Absyn_Exp*_T16;struct Cyc_Absyn_Stmt*_T17;struct Cyc_Absyn_Stmt*_T18;struct _tuple10 _T19;struct _tuple10 _T1A;struct _tuple10 _T1B;struct _tuple10 _T1C;struct Cyc_Toc_Env*_T1D;struct Cyc_Absyn_Stmt*_T1E;struct Cyc_Toc_Env*_T1F;struct Cyc_Absyn_Stmt*_T20;struct _fat_ptr**_T21;struct _fat_ptr*_T22;struct Cyc_Toc_Env*_T23;struct Cyc_Toc_TocContext*_T24;struct Cyc_Absyn_Stmt*_T25;int _T26;struct Cyc_Absyn_Stmt*_T27;struct Cyc_Toc_Env*_T28;struct Cyc_Absyn_Stmt*_T29;struct _fat_ptr**_T2A;struct _fat_ptr*_T2B;struct Cyc_Toc_Env*_T2C;struct Cyc_Toc_TocContext*_T2D;struct Cyc_Absyn_Stmt*_T2E;int _T2F;struct Cyc_Absyn_Stmt*_T30;void*_T31;struct Cyc_Toc_Env*_T32;struct Cyc_Warn_String_Warn_Warg_struct _T33;int(*_T34)(struct _fat_ptr ap);struct _fat_ptr _T35;struct Cyc_Toc_FallthruInfo*_T36;struct Cyc_Toc_Env*_T37;struct Cyc_Toc_TocContext*_T38;struct Cyc_Absyn_Stmt*_T39;int _T3A;struct Cyc_Absyn_Stmt*_T3B;struct Cyc_Toc_Env*_T3C;struct Cyc_List_List*_T3D;void*_T3E;struct Cyc_Absyn_Exp*_T3F;struct Cyc_Absyn_Pat_b_Absyn_Binding_struct*_T40;struct Cyc_List_List*_T41;void*_T42;void*_T43;struct Cyc_Absyn_Exp*_T44;struct Cyc_List_List*_T45;void*_T46;struct Cyc_Absyn_Exp*_T47;struct Cyc_Absyn_Stmt*_T48;struct Cyc_Absyn_Stmt*_T49;struct Cyc_List_List*_T4A;struct Cyc_List_List*_T4B;struct Cyc_Absyn_Stmt*_T4C;struct Cyc_Absyn_Stmt*_T4D;struct Cyc_Absyn_Decl*_T4E;int*_T4F;unsigned _T50;void*_T51;struct Cyc_Absyn_Pat*_T52;int*_T53;int _T54;struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct*_T55;struct Cyc_Absyn_Pat*_T56;struct Cyc_Absyn_Pat*_T57;void*_T58;int*_T59;int _T5A;struct Cyc_Absyn_Vardecl*_T5B;struct _tuple1*_T5C;struct Cyc_Absyn_Exp*_T5D;long _T5E;struct Cyc_Toc_Env*_T5F;struct Cyc_Toc_TocContext*_T60;struct _tuple1*_T61;struct Cyc_Absyn_Vardecl*_T62;void*_T63;struct Cyc_Absyn_Exp*_T64;struct Cyc_Absyn_Vardecl*_T65;struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T66;void*_T67;struct Cyc_Absyn_Vardecl*_T68;struct Cyc_Absyn_Exp*_T69;struct Cyc_Absyn_Vardecl*_T6A;struct Cyc_Absyn_Stmt*_T6B;struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T6C;void*_T6D;struct Cyc_Absyn_Stmt*_T6E;unsigned _T6F;struct Cyc_Absyn_Decl*_T70;struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T71;void*_T72;struct Cyc_Absyn_Stmt*_T73;unsigned _T74;struct Cyc_Absyn_Decl*_T75;struct Cyc_Absyn_Stmt*_T76;struct Cyc_Absyn_Stmt*_T77;unsigned _T78;struct Cyc_Absyn_Stmt*_T79;struct Cyc_Absyn_Stmt*_T7A;unsigned _T7B;struct Cyc_Absyn_Stmt*_T7C;struct Cyc_Absyn_Vardecl*_T7D;struct Cyc_Absyn_Stmt*_T7E;struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T7F;void*_T80;struct Cyc_Absyn_Stmt*_T81;unsigned _T82;struct Cyc_Absyn_Decl*_T83;struct Cyc_Absyn_Stmt*_T84;struct Cyc_Absyn_Stmt*_T85;unsigned _T86;struct Cyc_Absyn_Stmt*_T87;struct Cyc_Absyn_Stmt*_T88;struct Cyc_Toc_Env*_T89;struct Cyc_Absyn_Pat*_T8A;void*_T8B;struct Cyc_Absyn_Exp*_T8C;void*_T8D;void*_T8E;struct Cyc_Absyn_Exp*_T8F;struct Cyc_Absyn_Stmt*_T90;struct Cyc_Absyn_Stmt*_T91;struct Cyc_Warn_String_Warn_Warg_struct _T92;int(*_T93)(struct _fat_ptr ap);struct _fat_ptr _T94;struct Cyc_Absyn_Decl*_T95;struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T96;struct Cyc_List_List*_T97;void*_T98;struct Cyc_List_List*_T99;struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T9A;struct Cyc_List_List*_T9B;void*_T9C;void*_T9D;struct Cyc_Absyn_Stmt*_T9E;struct Cyc_Absyn_Decl*_T9F;struct Cyc_Absyn_Stmt*_TA0;void*_TA1;struct Cyc_Absyn_Stmt*_TA2;struct Cyc_Absyn_Stmt*_TA3;struct Cyc_List_List*_TA4;struct Cyc_Toc_Env*_TA5;struct Cyc_Toc_TocContext*_TA6;struct Cyc_Toc_TocContext*_TA7;struct Cyc_Toc_Env*_TA8;struct Cyc_Toc_TocContext*_TA9;struct Cyc_Toc_TocContext*_TAA;struct Cyc_Toc_Env*_TAB;struct Cyc_Toc_TocContext*_TAC;struct Cyc_Absyn_Vardecl*_TAD;struct Cyc_Absyn_Exp*_TAE;void*_TAF;long _TB0;struct Cyc_Absyn_Stmt*_TB1;struct _tuple1*_TB2;void*_TB3;struct Cyc_Absyn_Exp*_TB4;void*_TB5;struct Cyc_Absyn_Exp*_TB6;struct Cyc_Absyn_Stmt*_TB7;struct Cyc_Absyn_Stmt*_TB8;struct Cyc_Absyn_Exp*_TB9;unsigned _TBA;struct Cyc_Absyn_Exp*_TBB;struct _fat_ptr*_TBC;struct Cyc_Absyn_Stmt*_TBD;struct Cyc_Absyn_Stmt*_TBE;struct Cyc_Absyn_Exp*_TBF;void*_TC0;struct Cyc_Absyn_Exp*_TC1;void*_TC2;struct Cyc_Absyn_Exp*_TC3;long _TC4;struct Cyc_Absyn_Stmt*_TC5;struct _tuple1*_TC6;void*_TC7;struct Cyc_Absyn_Exp*_TC8;struct _tuple1*_TC9;struct _tuple1 _TCA;struct _fat_ptr*_TCB;struct _fat_ptr _TCC;struct Cyc_Absyn_Exp*_TCD;struct _fat_ptr _TCE;void*_TCF;struct Cyc_Absyn_Exp*_TD0;struct _tuple1*_TD1;void*_TD2;struct Cyc_Absyn_Exp*_TD3;void*_TD4;struct Cyc_Absyn_Exp*_TD5;struct Cyc_Absyn_Exp*_TD6;struct Cyc_Absyn_Exp*_TD7;struct _fat_ptr _TD8;void*_TD9;struct Cyc_Absyn_Exp*_TDA;struct Cyc_Absyn_Stmt*_TDB;struct Cyc_Absyn_Stmt*_TDC;struct Cyc_Absyn_Exp*_TDD;struct _fat_ptr _TDE;struct Cyc_Absyn_Exp*_TDF;void*_TE0;struct Cyc_Absyn_Exp*_TE1;struct Cyc_Absyn_Stmt*_TE2;struct Cyc_Absyn_Stmt*_TE3;struct Cyc_Absyn_Stmt*_TE4;struct Cyc_Absyn_Stmt*_TE5;struct Cyc_Absyn_Stmt*_TE6;struct Cyc_Warn_String_Warn_Warg_struct _TE7;int(*_TE8)(struct _fat_ptr);void*(*_TE9)(struct _fat_ptr);struct _fat_ptr _TEA;void*_TEB;struct Cyc_Toc_Env*_TEC;struct Cyc_Toc_TocContext*_TED;struct Cyc_Toc_Env*_TEE;struct Cyc_Toc_TocContext*_TEF;struct Cyc_Toc_Env*_TF0;struct Cyc_Toc_TocContext*_TF1;struct Cyc_Toc_Env*_TF2;struct Cyc_Toc_TocContext*_TF3;void*_TF4;struct Cyc_Toc_Env*_TF5;struct Cyc_Toc_TocContext*_TF6;void*_TF7;struct Cyc_Absyn_Exp*_TF8;struct Cyc_Absyn_Exp*_TF9;struct Cyc_Absyn_Stmt*_TFA;struct Cyc_Absyn_Exp*_TFB;struct _fat_ptr _TFC;struct Cyc_Absyn_Exp*_TFD;void*_TFE;struct Cyc_Absyn_Exp*_TFF;struct Cyc_Absyn_Stmt*_T100;struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct*_T101;void*_T102;struct Cyc_Absyn_Exp*_T103;struct Cyc_Absyn_Exp*_T104;void*_T105;struct Cyc_Absyn_Exp*_T106;struct _fat_ptr _T107;void*_T108;struct Cyc_Absyn_Exp*_T109;struct Cyc_Absyn_Exp*_T10A;void*_T10B;struct Cyc_Absyn_Exp*_T10C;struct _fat_ptr _T10D;void*_T10E;struct Cyc_Absyn_Exp*_T10F;struct Cyc_Absyn_Exp*_T110;void*_T111;struct Cyc_Absyn_Exp*_T112;void*_T113;struct Cyc_Absyn_Stmt*_T114;struct _tuple1*_T115;void*_T116;struct Cyc_Absyn_Stmt*_T117;struct _tuple1*_T118;void*_T119;struct Cyc_Absyn_Exp*_T11A;struct Cyc_Absyn_Exp*_T11B;struct Cyc_Absyn_Exp*_T11C;struct Cyc_Absyn_Exp*_T11D;struct Cyc_Absyn_Stmt*_T11E;struct Cyc_Absyn_Stmt*_T11F;struct Cyc_Absyn_Stmt*_T120;struct Cyc_Absyn_Exp*_T121;void*_T122;struct Cyc_Absyn_Exp*_T123;struct Cyc_Absyn_Stmt*_T124;struct _tuple1*_T125;void*_T126;void*_T127;struct Cyc_Toc_Env*_T128;struct Cyc_Toc_TocContext*_T129;struct Cyc_Absyn_Exp*_T12A;void*_T12B;struct Cyc_Absyn_Exp*_T12C;struct Cyc_Absyn_Exp*_T12D;struct Cyc_Absyn_Stmt*_T12E;struct Cyc_Absyn_Stmt*_T12F;struct Cyc_Absyn_Stmt*_T130;struct Cyc_Absyn_Stmt*_T131;struct Cyc_Absyn_Stmt*_T132;struct Cyc_Absyn_Stmt*_T133;struct Cyc_Absyn_Stmt*_T134;
# 3925
_TL412: if(1)goto _TL413;else{goto _TL414;}
_TL413: _T0= s;{void*_T135=_T0->r;struct Cyc_Absyn_Switch_clause**_T136;struct Cyc_List_List*_T137;struct Cyc_Absyn_Exp*_T138;struct Cyc_Absyn_Stmt*_T139;void*_T13A;void*_T13B;_T1= (int*)_T135;_T2= *_T1;switch(_T2){case 0:
# 3928
 return;case 1:{struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct*_T13C=(struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct*)_T135;_T13B= _T13C->f1;}{struct Cyc_Absyn_Exp*e=_T13B;
# 3930
Cyc_Toc_exp_to_c(nv,e);
return;}case 3: _T3= (struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct*)_T135;_T4= _T3->f1;if(_T4!=0)goto _TL416;_T5= nv;_T6= _T5->ctxt;_T7= s;_T8= 
# 3933
Cyc_Toc_get_npop(_T6,_T7);_T9= s;Cyc_Toc_do_npop_before(_T8,_T9);
return;_TL416:{struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct*_T13C=(struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct*)_T135;_T13B= _T13C->f1;}{struct Cyc_Absyn_Exp*e=_T13B;_TA= nv;_TB= _TA->ctxt;_TC= e;_TD= _TC->topt;_TE= 
# 3937
_check_null(_TD);{void*t=Cyc_Toc_typ_to_c(_TB,_TE);
Cyc_Toc_exp_to_c(nv,e);_TF= nv;_T10= _TF->ctxt;_T11= s;{
int npop=Cyc_Toc_get_npop(_T10,_T11);
if(npop <= 0)goto _TL418;_T12= nv;_T13= _T12->ctxt;{
struct _tuple1*x=Cyc_Toc_temp_var(_T13);_T14= 
Cyc_Absyn_var_exp(x,0U);_T15= t;_T16= Cyc_Absyn_set_type(_T14,_T15);{struct Cyc_Absyn_Stmt*retn_stmt=Cyc_Absyn_return_stmt(_T16,0U);
Cyc_Toc_do_npop_before(npop,retn_stmt);_T17= s;_T18= 
Cyc_Absyn_declare_stmt(x,t,e,retn_stmt,0U);_T17->r= _T18->r;}}goto _TL419;_TL418: _TL419:
# 3946
 return;}}}case 2:{struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*_T13C=(struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct*)_T135;_T13B= _T13C->f1;_T13A= _T13C->f2;}{struct Cyc_Absyn_Stmt*s1=_T13B;struct Cyc_Absyn_Stmt*s2=_T13A;
# 3948
Cyc_Toc_stmt_to_c(nv,s1);
s= s2;goto _TL412;}case 4:{struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct*_T13C=(struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct*)_T135;_T13B= _T13C->f1;_T13A= _T13C->f2;_T139= _T13C->f3;}{struct Cyc_Absyn_Exp*e=_T13B;struct Cyc_Absyn_Stmt*s1=_T13A;struct Cyc_Absyn_Stmt*s2=_T139;
# 3952
Cyc_Toc_exp_to_c(nv,e);
Cyc_Toc_stmt_to_c(nv,s1);
s= s2;goto _TL412;}case 9:{struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct*_T13C=(struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct*)_T135;_T13B= _T13C->f1;_T19= _T13C->f2;_T13A= _T19.f0;_T1A= _T13C->f3;_T138= _T1A.f0;_T139= _T13C->f4;}{struct Cyc_Absyn_Exp*e1=_T13B;struct Cyc_Absyn_Exp*e2=_T13A;struct Cyc_Absyn_Exp*e3=_T138;struct Cyc_Absyn_Stmt*s2=_T139;
# 3957
Cyc_Toc_exp_to_c(nv,e1);
Cyc_Toc_exp_to_c(nv,e2);_T13B= s2;_T13A= e3;goto _LL10;}case 14:{struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct*_T13C=(struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct*)_T135;_T13B= _T13C->f1;_T1B= _T13C->f2;_T13A= _T1B.f0;}_LL10: {struct Cyc_Absyn_Stmt*s2=_T13B;struct Cyc_Absyn_Exp*e=_T13A;_T13B= e;_T13A= s2;goto _LL12;}case 5:{struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct*_T13C=(struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct*)_T135;_T1C= _T13C->f1;_T13B= _T1C.f0;_T13A= _T13C->f2;}_LL12: {struct Cyc_Absyn_Exp*e=_T13B;struct Cyc_Absyn_Stmt*s2=_T13A;
# 3963
Cyc_Toc_exp_to_c(nv,e);{struct _RegionHandle _T13C=_new_region(0U,"temp");struct _RegionHandle*temp=& _T13C;_push_region(temp);_T1D= 
Cyc_Toc_loop_env(temp,nv);_T1E= s2;Cyc_Toc_stmt_to_c(_T1D,_T1E);_npop_handler(0);return;_pop_region();}}case 6:  {struct _fat_ptr**_T13C;_T1F= nv;{struct Cyc_Toc_Env _T13D=*_T1F;_T13C= _T13D.break_lab;}{struct _fat_ptr**b=_T13C;
# 3968
if(b==0)goto _TL41A;_T20= s;_T21= b;_T22= *_T21;
({__typeof__(Cyc_Toc_goto_stmt_r(_T22))_T13D=Cyc_Toc_goto_stmt_r(_T22);_T20->r= _T13D;});goto _TL41B;_TL41A: _TL41B: _T23= nv;_T24= _T23->ctxt;_T25= s;_T26= 
# 3971
Cyc_Toc_get_npop(_T24,_T25);_T27= s;Cyc_Toc_do_npop_before(_T26,_T27);
return;}}case 7:  {struct _fat_ptr**_T13C;_T28= nv;{struct Cyc_Toc_Env _T13D=*_T28;_T13C= _T13D.continue_lab;}{struct _fat_ptr**c=_T13C;
# 3975
if(c==0)goto _TL41C;_T29= s;_T2A= c;_T2B= *_T2A;
({__typeof__(Cyc_Toc_goto_stmt_r(_T2B))_T13D=Cyc_Toc_goto_stmt_r(_T2B);_T29->r= _T13D;});goto _TL41D;_TL41C: _TL41D: goto _LL18;}}case 8: _LL18: _T2C= nv;_T2D= _T2C->ctxt;_T2E= s;_T2F= 
# 3979
Cyc_Toc_get_npop(_T2D,_T2E);_T30= s;Cyc_Toc_do_npop_before(_T2F,_T30);
return;case 13:{struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct*_T13C=(struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct*)_T135;_T13B= _T13C->f1;_T13A= _T13C->f2;}{struct _fat_ptr*lab=_T13B;struct Cyc_Absyn_Stmt*s1=_T13A;
# 3982
s= s1;goto _TL412;}case 10:{struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct*_T13C=(struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct*)_T135;_T13B= _T13C->f1;_T137= _T13C->f2;_T31= _T13C->f3;_T13A= (void*)_T31;}{struct Cyc_Absyn_Exp*e=_T13B;struct Cyc_List_List*scs=_T137;void*dec_tree_opt=_T13A;
# 3985
Cyc_Toc_xlate_switch(nv,s,e,scs,dec_tree_opt);
return;}case 11:{struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct*_T13C=(struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct*)_T135;_T13B= _T13C->f1;_T136= _T13C->f2;}{struct Cyc_List_List*es=_T13B;struct Cyc_Absyn_Switch_clause**dest_clause=_T136;struct Cyc_Toc_FallthruInfo*_T13C;_T32= nv;{struct Cyc_Toc_Env _T13D=*_T32;_T13C= _T13D.fallthru_info;}{struct Cyc_Toc_FallthruInfo*fi=_T13C;
# 3989
if(fi!=0)goto _TL41E;{struct Cyc_Warn_String_Warn_Warg_struct _T13D;_T13D.tag= 0;
({__typeof__(_tag_fat("fallthru in unexpected place",sizeof(char),29U))_T13E=_tag_fat("fallthru in unexpected place",sizeof(char),29U);_T13D.f1= _T13E;});_T33= _T13D;}{struct Cyc_Warn_String_Warn_Warg_struct _T13D=_T33;void*_T13E[1];_T13E[0]= & _T13D;{int(*_T13F)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T34= _T13F;}_T35= _tag_fat(_T13E,sizeof(void*),1);_T34(_T35);}goto _TL41F;_TL41E: _TL41F: _T36= fi;{
struct Cyc_Toc_FallthruInfo _T13D=*_T36;struct Cyc_List_List*_T13E;struct _fat_ptr*_T13F;_T13F= _T13D.label;_T13E= _T13D.binders;{struct _fat_ptr*l=_T13F;struct Cyc_List_List*vs=_T13E;
struct Cyc_Absyn_Stmt*s2=Cyc_Absyn_goto_stmt(l,0U);_T37= nv;_T38= _T37->ctxt;_T39= s;_T3A= 
# 3994
Cyc_Toc_get_npop(_T38,_T39);_T3B= s2;Cyc_Toc_do_npop_before(_T3A,_T3B);{
struct Cyc_List_List*vs2=Cyc_List_rev(vs);
struct Cyc_List_List*es2=Cyc_List_rev(es);
_TL423: if(vs2!=0)goto _TL421;else{goto _TL422;}
_TL421: _T3C= nv;_T3D= _check_null(es2);_T3E= _T3D->hd;_T3F= (struct Cyc_Absyn_Exp*)_T3E;Cyc_Toc_exp_to_c(_T3C,_T3F);{struct Cyc_Absyn_Pat_b_Absyn_Binding_struct*_T140=_cycalloc(sizeof(struct Cyc_Absyn_Pat_b_Absyn_Binding_struct));_T140->tag= 5;_T41= vs2;_T42= _T41->hd;
_T140->f1= (struct Cyc_Absyn_Vardecl*)_T42;_T40= (struct Cyc_Absyn_Pat_b_Absyn_Binding_struct*)_T140;}_T43= (void*)_T40;_T44= Cyc_Absyn_varb_exp(_T43,0U);_T45= es2;_T46= _T45->hd;_T47= (struct Cyc_Absyn_Exp*)_T46;_T48= Cyc_Absyn_assign_stmt(_T44,_T47,0U);_T49= s2;s2= Cyc_Absyn_seq_stmt(_T48,_T49,0U);_T4A= vs2;
# 3997
vs2= _T4A->tl;_T4B= es2;es2= _T4B->tl;goto _TL423;_TL422: _T4C= s;_T4D= s2;
# 4001
_T4C->r= _T4D->r;
return;}}}}}case 12:{struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*_T13C=(struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*)_T135;_T13B= _T13C->f1;_T139= _T13C->f2;}{struct Cyc_Absyn_Decl*d=_T13B;struct Cyc_Absyn_Stmt*body=_T139;_T4E= d;{
# 4007
void*_T13C=_T4E->r;struct Cyc_Absyn_Vardecl*_T13D;struct Cyc_Absyn_Tvar*_T13E;struct Cyc_Absyn_Fndecl*_T13F;struct Cyc_List_List*_T140;struct Cyc_Absyn_Exp*_T141;struct Cyc_Absyn_Pat*_T142;void*_T143;_T4F= (int*)_T13C;_T50= *_T4F;switch(_T50){case 0:{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T144=(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T13C;_T143= _T144->f1;}{struct Cyc_Absyn_Vardecl*vd=_T143;
# 4009
Cyc_Toc_local_decl_to_c(nv,vd,body);goto _LL2F;}case 2:{struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*_T144=(struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct*)_T13C;_T142= _T144->f1;_T141= _T144->f3;_T51= _T144->f4;_T143= (void*)_T51;}{struct Cyc_Absyn_Pat*p=_T142;struct Cyc_Absyn_Exp*e=_T141;void*dec_tree=_T143;_T52= p;{
# 4017
void*_T144=_T52->r;struct Cyc_Absyn_Vardecl*_T145;_T53= (int*)_T144;_T54= *_T53;if(_T54!=1)goto _TL425;_T55= (struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct*)_T144;_T56= _T55->f2;_T57= (struct Cyc_Absyn_Pat*)_T56;_T58= _T57->r;_T59= (int*)_T58;_T5A= *_T59;if(_T5A!=0)goto _TL427;{struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct*_T146=(struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct*)_T144;_T145= _T146->f1;}{struct Cyc_Absyn_Vardecl*vd=_T145;_T5B= vd;_T5C= _T5B->name;_T5D= e;_T5E= 
# 4019
Cyc_Absyn_var_may_appear_exp(_T5C,_T5D);if(!_T5E)goto _TL429;_T5F= nv;_T60= _T5F->ctxt;_T61= 
Cyc_Toc_temp_var(_T60);_T62= vd;_T63= _T62->type;_T64= e;{struct Cyc_Absyn_Vardecl*new_vd=Cyc_Absyn_new_vardecl(0U,_T61,_T63,_T64,0);_T65= vd;{struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T146=_cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));_T146->tag= 4;
_T146->f1= new_vd;_T66= (struct Cyc_Absyn_Local_b_Absyn_Binding_struct*)_T146;}_T67= (void*)_T66;({__typeof__(Cyc_Absyn_varb_exp(_T67,0U))_T146=Cyc_Absyn_varb_exp(_T67,0U);_T65->initializer= _T146;});_T68= vd;_T69= _T68->initializer;_T6A= new_vd;
_T69->topt= _T6A->type;_T6B= s;{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T146=_cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));_T146->tag= 0;
_T146->f1= new_vd;_T6C= (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T146;}_T6D= (void*)_T6C;_T6E= s;_T6F= _T6E->loc;_T70= Cyc_Absyn_new_decl(_T6D,_T6F);{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T146=_cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));_T146->tag= 0;
_T146->f1= vd;_T71= (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T146;}_T72= (void*)_T71;_T73= s;_T74= _T73->loc;_T75= Cyc_Absyn_new_decl(_T72,_T74);_T76= body;_T77= s;_T78= _T77->loc;_T79= Cyc_Absyn_decl_stmt(_T75,_T76,_T78);_T7A= s;_T7B= _T7A->loc;_T7C= 
# 4023
Cyc_Absyn_decl_stmt(_T70,_T79,_T7B);_T6B->r= _T7C->r;}goto _TL42A;
# 4027
_TL429: _T7D= vd;_T7D->initializer= e;_T7E= s;{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T146=_cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));_T146->tag= 0;
_T146->f1= vd;_T7F= (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T146;}_T80= (void*)_T7F;_T81= s;_T82= _T81->loc;_T83= Cyc_Absyn_new_decl(_T80,_T82);_T84= body;_T85= s;_T86= _T85->loc;_T87= Cyc_Absyn_decl_stmt(_T83,_T84,_T86);_T7E->r= _T87->r;_TL42A:
# 4030
 Cyc_Toc_stmt_to_c(nv,s);goto _LL3C;}_TL427: goto _LL3F;_TL425: _LL3F: _T88= s;_T89= nv;_T8A= p;_T8B= dec_tree;_T8C= e;_T8D= _T8C->topt;_T8E= 
# 4037
_check_null(_T8D);_T8F= e;_T90= body;_T91= Cyc_Toc_letdecl_to_c(_T89,_T8A,_T8B,_T8E,_T8F,_T90);_T88->r= _T91->r;goto _LL3C;_LL3C:;}goto _LL2F;}case 3:{struct Cyc_Absyn_Letv_d_Absyn_Raw_decl_struct*_T144=(struct Cyc_Absyn_Letv_d_Absyn_Raw_decl_struct*)_T13C;_T140= _T144->f1;}{struct Cyc_List_List*vds=_T140;
# 4044
struct Cyc_List_List*rvds=Cyc_List_rev(vds);
if(rvds!=0)goto _TL42B;{struct Cyc_Warn_String_Warn_Warg_struct _T144;_T144.tag= 0;
({__typeof__(_tag_fat("empty Letv_d",sizeof(char),13U))_T145=_tag_fat("empty Letv_d",sizeof(char),13U);_T144.f1= _T145;});_T92= _T144;}{struct Cyc_Warn_String_Warn_Warg_struct _T144=_T92;void*_T145[1];_T145[0]= & _T144;{int(*_T146)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T93= _T146;}_T94= _tag_fat(_T145,sizeof(void*),1);_T93(_T94);}goto _TL42C;_TL42B: _TL42C: _T95= d;{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T144=_cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));_T144->tag= 0;_T97= rvds;_T98= _T97->hd;
_T144->f1= (struct Cyc_Absyn_Vardecl*)_T98;_T96= (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T144;}_T95->r= (void*)_T96;_T99= rvds;
rvds= _T99->tl;
_TL430: if(rvds!=0)goto _TL42E;else{goto _TL42F;}
_TL42E:{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T144=_cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));_T144->tag= 0;_T9B= rvds;_T9C= _T9B->hd;_T144->f1= (struct Cyc_Absyn_Vardecl*)_T9C;_T9A= (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T144;}_T9D= (void*)_T9A;{struct Cyc_Absyn_Decl*d2=Cyc_Absyn_new_decl(_T9D,0U);_T9E= s;_T9F= d2;_TA0= s;_TA1= _TA0->r;_TA2= 
Cyc_Absyn_new_stmt(_TA1,0U);_TA3= Cyc_Absyn_decl_stmt(_T9F,_TA2,0U);_T9E->r= _TA3->r;}_TA4= rvds;
# 4049
rvds= _TA4->tl;goto _TL430;_TL42F:
# 4053
 Cyc_Toc_stmt_to_c(nv,s);goto _LL2F;}case 1:{struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*_T144=(struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*)_T13C;_T13F= _T144->f1;}{struct Cyc_Absyn_Fndecl*fd=_T13F;_TA5= nv;_TA6= _TA5->ctxt;_TA7= 
# 4059
_check_null(_TA6);{struct Cyc_Hashtable_Table**old_pop_table=_TA7->fn_pop_table;
Cyc_Toc_fndecl_to_c(nv,fd,0);_TA8= nv;_TA9= _TA8->ctxt;_TAA= 
_check_null(_TA9);_TAA->fn_pop_table= old_pop_table;
Cyc_Toc_stmt_to_c(nv,body);goto _LL2F;}}case 4:{struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct*_T144=(struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct*)_T13C;_T13E= _T144->f1;_T13D= _T144->f2;_T141= _T144->f3;}{struct Cyc_Absyn_Tvar*tv=_T13E;struct Cyc_Absyn_Vardecl*vd=_T13D;struct Cyc_Absyn_Exp*open_exp_opt=_T141;
# 4067
void*rh_struct_typ=Cyc_Absyn_strct(Cyc_Toc__RegionHandle_sp);
void*rh_struct_ptr_typ=Cyc_Absyn_cstar_type(rh_struct_typ,Cyc_Toc_mt_tq);_TAB= nv;_TAC= _TAB->ctxt;{
struct _tuple35 _T144=Cyc_Toc_temp_var_and_exp(_TAC);struct Cyc_Absyn_Exp*_T145;struct _tuple1*_T146;_T146= _T144.f0;_T145= _T144.f1;{struct _tuple1*rh_var=_T146;struct Cyc_Absyn_Exp*rh_exp=_T145;
Cyc_Absyn_set_type(rh_exp,rh_struct_ptr_typ);_TAD= vd;{
struct _tuple1*x_var=_TAD->name;_TAE= 
Cyc_Absyn_var_exp(x_var,0U);_TAF= rh_struct_ptr_typ;{struct Cyc_Absyn_Exp*x_exp=Cyc_Absyn_set_type(_TAE,_TAF);
# 4074
Cyc_Toc_stmt_to_c(nv,body);_TB0= Cyc_Flags_no_regions;
if(!_TB0)goto _TL431;_TB1= s;_TB2= x_var;_TB3= rh_struct_ptr_typ;_TB4= 
# 4077
Cyc_Absyn_signed_int_exp(0,0U);_TB5= Cyc_Absyn_sint_type;_TB6= Cyc_Absyn_set_type(_TB4,_TB5);_TB7= body;_TB8= 
# 4076
Cyc_Absyn_declare_stmt(_TB2,_TB3,_TB6,_TB7,0U);_TB1->r= _TB8->r;goto _TL432;
# 4079
_TL431: _TB9= open_exp_opt;_TBA= (unsigned)_TB9;if(!_TBA)goto _TL433;
# 4081
Cyc_Toc_exp_to_c(nv,open_exp_opt);_TBB= open_exp_opt;{struct _fat_ptr*_T147=_cycalloc(sizeof(struct _fat_ptr));
({__typeof__(_tag_fat("h",sizeof(char),2U))_T148=_tag_fat("h",sizeof(char),2U);*_T147= _T148;});_TBC= (struct _fat_ptr*)_T147;}{struct Cyc_Absyn_Exp*oparrow=Cyc_Absyn_aggrarrow_exp(_TBB,_TBC,0U);
Cyc_Absyn_set_type(oparrow,rh_struct_typ);{
struct Cyc_Absyn_Exp*arg=Cyc_Absyn_address_exp(oparrow,0U);
Cyc_Absyn_set_type(arg,rh_struct_ptr_typ);_TBD= s;_TBE= 
Cyc_Absyn_declare_stmt(x_var,rh_struct_ptr_typ,arg,body,0U);_TBD->r= _TBE->r;}}goto _TL434;
# 4093
_TL433: _TBF= Cyc_Absyn_uint_exp(0U,0U);_TC0= Cyc_Absyn_uint_type;{struct Cyc_Absyn_Exp*_zero_exp=Cyc_Absyn_set_type(_TBF,_TC0);_TC1= 
Cyc_Absyn_uint_exp(1U,0U);_TC2= Cyc_Absyn_uint_type;{struct Cyc_Absyn_Exp*_one_exp=Cyc_Absyn_set_type(_TC1,_TC2);_TC4= Cyc_Flags_no_reaps;
if(!_TC4)goto _TL435;_TC3= _one_exp;goto _TL436;_TL435: _TC3= _zero_exp;_TL436: {struct Cyc_Absyn_Exp*rgn_flag_exp=_TC3;_TC5= s;_TC6= rh_var;_TC7= rh_struct_typ;{struct Cyc_Absyn_Exp*_T147[2];
# 4100
_T147[0]= rgn_flag_exp;_TC9= x_var;_TCA= *_TC9;_TCB= _TCA.f1;_TCC= *_TCB;({__typeof__(Cyc_Absyn_string_exp(_TCC,0U))_T148=Cyc_Absyn_string_exp(_TCC,0U);_T147[1]= _T148;});_TCD= Cyc_Toc__new_region_e;_TCE= _tag_fat(_T147,sizeof(struct Cyc_Absyn_Exp*),2);_TC8= Cyc_Toc_fncall_exp_dl(_TCD,_TCE);}_TCF= rh_struct_typ;_TD0= 
# 4099
Cyc_Absyn_set_type(_TC8,_TCF);_TD1= x_var;_TD2= rh_struct_ptr_typ;_TD3= 
# 4104
Cyc_Absyn_address_exp(rh_exp,0U);_TD4= rh_struct_ptr_typ;_TD5= Cyc_Absyn_set_type(_TD3,_TD4);{struct Cyc_Absyn_Exp*_T147[1];_T147[0]= x_exp;_TD7= Cyc_Toc__push_region_e;_TD8= _tag_fat(_T147,sizeof(struct Cyc_Absyn_Exp*),1);_TD6= Cyc_Toc_fncall_exp_dl(_TD7,_TD8);}_TD9= Cyc_Absyn_void_type;_TDA= 
# 4106
Cyc_Absyn_set_type(_TD6,_TD9);_TDB= Cyc_Absyn_exp_stmt(_TDA,0U);_TDC= body;_TDD= Cyc_Toc__pop_region_e;_TDE= _tag_fat(0U,sizeof(struct Cyc_Absyn_Exp*),0);_TDF= 
# 4110
Cyc_Toc_fncall_exp_dl(_TDD,_TDE);_TE0= Cyc_Absyn_void_type;_TE1= Cyc_Absyn_set_type(_TDF,_TE0);_TE2= Cyc_Absyn_exp_stmt(_TE1,0U);_TE3= 
# 4108
Cyc_Absyn_seq_stmt(_TDC,_TE2,0U);_TE4= 
# 4105
Cyc_Absyn_seq_stmt(_TDB,_TE3,0U);_TE5= 
# 4102
Cyc_Absyn_declare_stmt(_TD1,_TD2,_TD5,_TE4,0U);_TE6= 
# 4097
Cyc_Absyn_declare_stmt(_TC6,_TC7,_TD0,_TE5,0U);
# 4096
_TC5->r= _TE6->r;}}}_TL434: _TL432:
# 4117
 return;}}}}}default:{struct Cyc_Warn_String_Warn_Warg_struct _T144;_T144.tag= 0;
# 4119
({__typeof__(_tag_fat("bad nested declaration within function",sizeof(char),39U))_T145=_tag_fat("bad nested declaration within function",sizeof(char),39U);_T144.f1= _T145;});_TE7= _T144;}{struct Cyc_Warn_String_Warn_Warg_struct _T144=_TE7;void*_T145[1];_T145[0]= & _T144;_TE9= Cyc_Warn_impos2;{int(*_T146)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_TE9;_TE8= _T146;}_TEA= _tag_fat(_T145,sizeof(void*),1);_TE8(_TEA);}}_LL2F:;}
# 4121
return;}default:{struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct*_T13C=(struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct*)_T135;_T139= _T13C->f1;_T137= _T13C->f2;_TEB= _T13C->f3;_T13B= (void*)_TEB;}{struct Cyc_Absyn_Stmt*body=_T139;struct Cyc_List_List*scs=_T137;void*dec_tree=_T13B;_TEC= nv;_TED= _TEC->ctxt;{
# 4135
struct _tuple35 _T13C=Cyc_Toc_temp_var_and_exp(_TED);struct Cyc_Absyn_Exp*_T13D;struct _tuple1*_T13E;_T13E= _T13C.f0;_T13D= _T13C.f1;{struct _tuple1*h_var=_T13E;struct Cyc_Absyn_Exp*h_exp=_T13D;_TEE= nv;_TEF= _TEE->ctxt;{
struct _tuple35 _T13F=Cyc_Toc_temp_var_and_exp(_TEF);struct Cyc_Absyn_Exp*_T140;struct _tuple1*_T141;_T141= _T13F.f0;_T140= _T13F.f1;{struct _tuple1*e_var=_T141;struct Cyc_Absyn_Exp*e_exp=_T140;_TF0= nv;_TF1= _TF0->ctxt;{
struct _tuple35 _T142=Cyc_Toc_temp_var_and_exp(_TF1);struct Cyc_Absyn_Exp*_T143;struct _tuple1*_T144;_T144= _T142.f0;_T143= _T142.f1;{struct _tuple1*was_thrown_var=_T144;struct Cyc_Absyn_Exp*was_thrown_exp=_T143;
void*h_typ=Cyc_Absyn_strct(Cyc_Toc__handler_cons_sp);_TF2= nv;_TF3= _TF2->ctxt;_TF4= 
Cyc_Absyn_exn_type();{void*e_typ=Cyc_Toc_typ_to_c(_TF3,_TF4);_TF5= nv;_TF6= _TF5->ctxt;_TF7= Cyc_Absyn_sint_type;{
void*was_thrown_typ=Cyc_Toc_typ_to_c(_TF6,_TF7);_TF8= was_thrown_exp;
_TF8->topt= was_thrown_typ;_TF9= e_exp;
# 4143
_TF9->topt= e_typ;{struct _RegionHandle _T145=_new_region(0U,"temp");struct _RegionHandle*temp=& _T145;_push_region(temp);
# 4146
Cyc_Toc_stmt_to_c(nv,body);_TFA= body;_TFB= Cyc_Toc__pop_handler_e;_TFC= _tag_fat(0U,sizeof(struct Cyc_Absyn_Exp*),0);_TFD= 
# 4148
Cyc_Toc_fncall_exp_dl(_TFB,_TFC);_TFE= Cyc_Absyn_void_type;_TFF= Cyc_Absyn_set_type(_TFD,_TFE);_T100= Cyc_Absyn_exp_stmt(_TFF,0U);{
# 4147
struct Cyc_Absyn_Stmt*tryandpop_stmt=
Cyc_Absyn_seq_stmt(_TFA,_T100,0U);{struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct*_T146=_cycalloc(sizeof(struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct));_T146->tag= 10;
_T146->f1= e_exp;_T146->f2= scs;_T146->f3= dec_tree;_T101= (struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct*)_T146;}_T102= (void*)_T101;{struct Cyc_Absyn_Stmt*handler_stmt=Cyc_Absyn_new_stmt(_T102,0U);
# 4151
Cyc_Toc_stmt_to_c(nv,handler_stmt);{struct Cyc_Absyn_Exp*_T146[1];_T104= 
# 4155
Cyc_Toc_member_exp(h_exp,Cyc_Toc_handler_sp,0U);_T105= 
Cyc_Absyn_cstar_type(Cyc_Absyn_sint_type,Cyc_Toc_mt_tq);({__typeof__(
# 4155
Cyc_Absyn_set_type(_T104,_T105))_T147=Cyc_Absyn_set_type(_T104,_T105);_T146[0]= _T147;});_T106= Cyc_Toc_setjmp_e;_T107= _tag_fat(_T146,sizeof(struct Cyc_Absyn_Exp*),1);_T103= Cyc_Toc_fncall_exp_dl(_T106,_T107);}_T108= Cyc_Absyn_sint_type;{
# 4154
struct Cyc_Absyn_Exp*setjmp_call=
Cyc_Absyn_set_type(_T103,_T108);{struct Cyc_Absyn_Exp*_T146[1];_T10A= 
# 4159
Cyc_Absyn_address_exp(h_exp,0U);_T10B= 
Cyc_Absyn_cstar_type(h_typ,Cyc_Toc_mt_tq);({__typeof__(
# 4159
Cyc_Absyn_set_type(_T10A,_T10B))_T147=Cyc_Absyn_set_type(_T10A,_T10B);_T146[0]= _T147;});_T10C= Cyc_Toc__push_handler_e;_T10D= _tag_fat(_T146,sizeof(struct Cyc_Absyn_Exp*),1);_T109= Cyc_Toc_fncall_exp_dl(_T10C,_T10D);}_T10E= Cyc_Absyn_void_type;_T10F= Cyc_Absyn_set_type(_T109,_T10E);{
# 4158
struct Cyc_Absyn_Stmt*pushhandler_call=
Cyc_Absyn_exp_stmt(_T10F,0U);_T110= 
# 4163
Cyc_Absyn_int_exp(0U,0,0U);_T111= Cyc_Absyn_sint_type;{struct Cyc_Absyn_Exp*zero_exp=Cyc_Absyn_set_type(_T110,_T111);_T112= 
Cyc_Absyn_int_exp(0U,1,0U);_T113= Cyc_Absyn_sint_type;{struct Cyc_Absyn_Exp*one_exp=Cyc_Absyn_set_type(_T112,_T113);_T114= s;_T115= h_var;_T116= h_typ;_T117= pushhandler_call;_T118= was_thrown_var;_T119= was_thrown_typ;_T11A= zero_exp;_T11B= setjmp_call;_T11C= 
# 4174
Cyc_Toc_deep_copy(was_thrown_exp);_T11D= one_exp;_T11E= Cyc_Absyn_assign_stmt(_T11C,_T11D,0U);_T11F= 
Cyc_Toc_skip_stmt_dl();_T120= 
# 4173
Cyc_Absyn_ifthenelse_stmt(_T11B,_T11E,_T11F,0U);_T121= 
# 4177
Cyc_Absyn_prim1_exp(11U,was_thrown_exp,0U);_T122= Cyc_Absyn_sint_type;_T123= Cyc_Absyn_set_type(_T121,_T122);_T124= tryandpop_stmt;_T125= e_var;_T126= e_typ;_T127= e_typ;_T128= nv;_T129= _T128->ctxt;_T12A= 
# 4182
Cyc_Toc_get_exn_thrown_expression(_T129);_T12B= 
Cyc_Absyn_cstar_type(Cyc_Absyn_void_type,Cyc_Toc_mt_tq);_T12C= 
# 4182
Cyc_Absyn_set_type(_T12A,_T12B);_T12D= 
# 4181
Cyc_Toc_cast_it(_T127,_T12C);_T12E= handler_stmt;_T12F= 
# 4179
Cyc_Absyn_declare_stmt(_T125,_T126,_T12D,_T12E,0U);_T130= 
# 4176
Cyc_Absyn_ifthenelse_stmt(_T123,_T124,_T12F,0U);_T131= 
# 4172
Cyc_Absyn_seq_stmt(_T120,_T130,0U);_T132= 
# 4170
Cyc_Absyn_declare_stmt(_T118,_T119,_T11A,_T131,0U);_T133= 
# 4168
Cyc_Absyn_seq_stmt(_T117,_T132,0U);_T134= 
# 4166
Cyc_Absyn_declare_stmt(_T115,_T116,0,_T133,0U);
# 4165
_T114->r= _T134->r;}}}}}}_npop_handler(0);return;_pop_region();}}}}}}}}}}};}goto _TL412;_TL414:;}
# 4203
static void Cyc_Toc_fndecl_to_c(struct Cyc_Toc_Env*nv,struct Cyc_Absyn_Fndecl*f,long cinclude){struct Cyc_Toc_Env*_T0;struct Cyc_Absyn_Fndecl*_T1;struct Cyc_Absyn_Fndecl*_T2;struct Cyc_Absyn_Fndecl*_T3;struct Cyc_Absyn_Fndecl*_T4;struct Cyc_Absyn_Fndecl*_T5;struct Cyc_Absyn_Fndecl*_T6;struct Cyc_Absyn_Fndecl*_T7;struct Cyc_Absyn_Fndecl*_T8;struct Cyc_Absyn_Fndecl*_T9;struct Cyc_Toc_TocContext*_TA;struct Cyc_Absyn_Fndecl*_TB;struct Cyc_Absyn_FnInfo _TC;void*_TD;struct Cyc_Absyn_Fndecl*_TE;struct Cyc_Toc_TocContext*_TF;struct Cyc_Absyn_Fndecl*_T10;void*_T11;void*_T12;struct Cyc_Absyn_Fndecl*_T13;struct Cyc_Absyn_FnInfo _T14;struct Cyc_List_List*_T15;void*_T16;struct _tuple9*_T17;struct Cyc_Toc_TocContext*_T18;struct Cyc_List_List*_T19;void*_T1A;struct _tuple9*_T1B;struct _tuple9 _T1C;void*_T1D;struct Cyc_List_List*_T1E;long _T1F;struct Cyc_Toc_TocContext*_T20;struct Cyc_Absyn_Fndecl*_T21;struct Cyc_Absyn_Stmt*_T22;struct Cyc_Toc_TocContext*_T23;struct Cyc_Hashtable_Table**_T24;struct Cyc_Hashtable_Table*(*_T25)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Fndecl*);void*(*_T26)(struct Cyc_Hashtable_Table*,void*);struct Cyc_Toc_TocContext*_T27;struct Cyc_Hashtable_Table**_T28;struct Cyc_Hashtable_Table**_T29;struct Cyc_Hashtable_Table*_T2A;struct Cyc_Absyn_Fndecl*_T2B;struct Cyc_Absyn_Fndecl*_T2C;struct Cyc_Absyn_FnInfo _T2D;struct Cyc_Absyn_VarargInfo*_T2E;unsigned _T2F;struct Cyc_Absyn_Fndecl*_T30;struct Cyc_Absyn_FnInfo _T31;struct Cyc_Absyn_VarargInfo*_T32;struct _fat_ptr*_T33;struct Cyc_Absyn_Fndecl*_T34;struct Cyc_Absyn_FnInfo _T35;struct Cyc_Absyn_VarargInfo*_T36;struct Cyc_Toc_TocContext*_T37;void*_T38;struct _tuple1*_T39;struct _tuple1*_T3A;struct Cyc_Absyn_Fndecl*_T3B;struct Cyc_Absyn_Fndecl*_T3C;struct Cyc_Absyn_FnInfo _T3D;struct Cyc_List_List*_T3E;struct Cyc_List_List*_T3F;struct _tuple9*_T40;struct Cyc_Absyn_Fndecl*_T41;struct Cyc_Absyn_Fndecl*_T42;struct Cyc_Core_Opt*_T43;struct Cyc_Core_Opt*_T44;void*_T45;struct Cyc_List_List*_T46;void*_T47;struct Cyc_Absyn_Vardecl*_T48;struct Cyc_Toc_TocContext*_T49;struct Cyc_List_List*_T4A;void*_T4B;struct Cyc_Absyn_Vardecl*_T4C;void*_T4D;struct Cyc_List_List*_T4E;struct Cyc_Toc_Env*_T4F;struct Cyc_Absyn_Fndecl*_T50;struct Cyc_Absyn_Stmt*_T51;_T0= nv;{
struct Cyc_Toc_TocContext*ctxt=_T0->ctxt;_T1= f;
_T1->i.tvars= 0;_T2= f;
_T2->i.effect= 0;_T3= f;
# 4208
_T3->i.qual_bnd= 0;_T4= f;
_T4->i.checks_clause= 0;_T5= f;
_T5->i.requires_clause= 0;_T6= f;
_T6->i.ensures_clause= 0;_T7= f;
_T7->i.throws_clause= 0;_T8= f;
_T8->i.effconstr= 0;_T9= f;_TA= ctxt;_TB= f;_TC= _TB->i;_TD= _TC.ret_type;
({__typeof__(Cyc_Toc_trans_type(_TA,_TD))_T52=Cyc_Toc_trans_type(_TA,_TD);_T9->i.ret_type= _T52;});_TE= f;_TF= ctxt;_T10= f;_T11= _T10->cached_type;_T12= 
_check_null(_T11);({__typeof__(Cyc_Toc_trans_type(_TF,_T12))_T52=Cyc_Toc_trans_type(_TF,_T12);_TE->cached_type= _T52;});{struct _RegionHandle _T52=_new_region(0U,"frgn");struct _RegionHandle*frgn=& _T52;_push_region(frgn);{
# 4217
struct Cyc_Toc_Env*_T53=Cyc_Toc_share_env(frgn,nv);struct Cyc_Toc_Env*nv=_T53;_T13= f;_T14= _T13->i;{
struct Cyc_List_List*args=_T14.args;_TL43A: if(args!=0)goto _TL438;else{goto _TL439;}
_TL438: _T15= args;_T16= _T15->hd;_T17= (struct _tuple9*)_T16;_T18= ctxt;_T19= args;_T1A= _T19->hd;_T1B= (struct _tuple9*)_T1A;_T1C= *_T1B;_T1D= _T1C.f2;({__typeof__(Cyc_Toc_trans_type(_T18,_T1D))_T54=Cyc_Toc_trans_type(_T18,_T1D);(*_T17).f2= _T54;});_T1E= args;
# 4218
args= _T1E->tl;goto _TL43A;_TL439:;}_T1F= cinclude;
# 4222
if(!_T1F)goto _TL43B;_T20= ctxt;_T21= f;_T22= _T21->body;
Cyc_Toc_trans_stmttypes(_T20,_T22);_npop_handler(0);return;_TL43B: _T23= ctxt;{struct Cyc_Hashtable_Table**_T54=_cycalloc(sizeof(struct Cyc_Hashtable_Table*));_T26= Cyc_Hashtable_lookup;{
# 4226
struct Cyc_Hashtable_Table*(*_T55)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Fndecl*)=(struct Cyc_Hashtable_Table*(*)(struct Cyc_Hashtable_Table*,struct Cyc_Absyn_Fndecl*))_T26;_T25= _T55;}_T27= _check_null(ctxt);_T28= _T27->pop_tables;_T29= _check_null(_T28);_T2A= *_T29;_T2B= f;({__typeof__(_T25(_T2A,_T2B))_T55=_T25(_T2A,_T2B);*_T54= _T55;});_T24= (struct Cyc_Hashtable_Table**)_T54;}_T23->fn_pop_table= _T24;_T2C= f;_T2D= _T2C->i;_T2E= _T2D.cyc_varargs;_T2F= (unsigned)_T2E;
if(!_T2F)goto _TL43D;_T30= f;_T31= _T30->i;_T32= _T31.cyc_varargs;_T33= _T32->name;if(_T33==0)goto _TL43D;_T34= f;_T35= _T34->i;_T36= _T35.cyc_varargs;{
struct Cyc_Absyn_VarargInfo _T54=*_T36;long _T55;void*_T56;struct Cyc_Absyn_Tqual _T57;struct _fat_ptr*_T58;_T58= _T54.name;_T57= _T54.tq;_T56= _T54.type;_T55= _T54.inject;{struct _fat_ptr*n=_T58;struct Cyc_Absyn_Tqual tq=_T57;void*t=_T56;long i=_T55;_T37= ctxt;_T38= 
Cyc_Absyn_fatptr_type(t,Cyc_Absyn_heap_rgn_type,Cyc_Absyn_al_qual_type,tq,Cyc_Absyn_false_type,Cyc_Absyn_false_type);{void*t2=Cyc_Toc_trans_type(_T37,_T38);
# 4231
struct _tuple1*x2;x2= _cycalloc(sizeof(struct _tuple1));_T39= x2;({__typeof__(Cyc_Absyn_Loc_n())_T59=Cyc_Absyn_Loc_n();_T39->f0= _T59;});_T3A= x2;_T3A->f1= n;_T3B= f;_T3C= f;_T3D= _T3C->i;_T3E= _T3D.args;{struct Cyc_List_List*_T59=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple9*_T5A=_cycalloc(sizeof(struct _tuple9));
_T5A->f0= n;_T5A->f1= tq;_T5A->f2= t2;_T40= (struct _tuple9*)_T5A;}_T59->hd= _T40;_T59->tl= 0;_T3F= (struct Cyc_List_List*)_T59;}({__typeof__(Cyc_List_append(_T3E,_T3F))_T59=Cyc_List_append(_T3E,_T3F);_T3B->i.args= _T59;});_T41= f;
_T41->i.cyc_varargs= 0;}}}goto _TL43E;_TL43D: _TL43E: _T42= f;_T43= _T42->param_vardecls;_T44= 
# 4236
_check_null(_T43);_T45= _T44->v;{struct Cyc_List_List*arg_vds=(struct Cyc_List_List*)_T45;_TL442: if(arg_vds!=0)goto _TL440;else{goto _TL441;}
_TL440: _T46= arg_vds;_T47= _T46->hd;_T48= (struct Cyc_Absyn_Vardecl*)_T47;_T49= ctxt;_T4A= arg_vds;_T4B= _T4A->hd;_T4C= (struct Cyc_Absyn_Vardecl*)_T4B;_T4D= _T4C->type;({__typeof__(Cyc_Toc_typ_to_c(_T49,_T4D))_T54=Cyc_Toc_typ_to_c(_T49,_T4D);_T48->type= _T54;});_T4E= arg_vds;
# 4236
arg_vds= _T4E->tl;goto _TL442;_TL441:;}_T4F= 
# 4238
Cyc_Toc_clear_toplevel(frgn,nv);_T50= f;_T51= _T50->body;Cyc_Toc_stmt_to_c(_T4F,_T51);}_pop_region();}}}
# 4241
static enum Cyc_Absyn_Scope Cyc_Toc_scope_to_c(enum Cyc_Absyn_Scope s){enum Cyc_Absyn_Scope _T0;int _T1;enum Cyc_Absyn_Scope _T2;_T0= s;_T1= (int)_T0;switch(_T1){case Cyc_Absyn_Abstract:
# 4244
 return 2U;case Cyc_Absyn_ExternC:
# 4246
 return 3U;default: _T2= s;
# 4248
return _T2;};}struct _tuple50{struct Cyc_Toc_TocContext*f0;struct Cyc_Absyn_Aggrdecl*f1;};struct _tuple51{struct Cyc_Toc_TocState*f0;struct _tuple50*f1;};
# 4260
static int Cyc_Toc_aggrdecl_to_c_body(struct _RegionHandle*d,struct _tuple51*env){struct _tuple51*_T0;struct _tuple50*_T1;struct Cyc_Absyn_Aggrdecl*_T2;struct Cyc_Toc_TocState*_T3;struct _tuple20**(*_T4)(struct Cyc_Dict_Dict,struct _tuple1*);void**(*_T5)(struct Cyc_Dict_Dict,void*);struct Cyc_Dict_Dict*_T6;struct Cyc_Dict_Dict _T7;struct _tuple1*_T8;struct _RegionHandle*_T9;struct _tuple20*_TA;struct Cyc_Absyn_Aggrdecl*_TB;enum Cyc_Absyn_AggrKind _TC;int _TD;struct _tuple20*_TE;struct _tuple20*_TF;struct Cyc_Dict_Dict*_T10;struct Cyc_Dict_Dict(*_T11)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple20*);struct Cyc_Dict_Dict(*_T12)(struct Cyc_Dict_Dict,void*,void*);struct Cyc_Dict_Dict*_T13;struct Cyc_Dict_Dict _T14;struct _tuple1*_T15;struct _tuple20*_T16;struct _tuple20**_T17;struct Cyc_Absyn_Aggrdecl*_T18;struct Cyc_Absyn_AggrdeclImpl*_T19;struct Cyc_Dict_Dict*_T1A;struct Cyc_Dict_Dict(*_T1B)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple20*);struct Cyc_Dict_Dict(*_T1C)(struct Cyc_Dict_Dict,void*,void*);struct Cyc_Dict_Dict*_T1D;struct Cyc_Dict_Dict _T1E;struct _tuple1*_T1F;struct _tuple20*_T20;struct _RegionHandle*_T21;struct Cyc_Absyn_Aggrdecl*_T22;struct Cyc_Absyn_Aggrdecl*_T23;struct Cyc_Absyn_Aggrdecl*_T24;struct Cyc_Absyn_Aggrdecl*_T25;struct Cyc_Absyn_Aggrdecl*_T26;struct Cyc_Absyn_Aggrdecl*_T27;struct Cyc_Absyn_Aggrdecl*_T28;struct Cyc_Absyn_Aggrdecl*_T29;struct Cyc_Absyn_Aggrdecl*_T2A;struct Cyc_Absyn_Aggrdecl*_T2B;struct Cyc_Absyn_Aggrdecl*_T2C;struct Cyc_Absyn_AggrdeclImpl*_T2D;long _T2E;struct Cyc_Absyn_Aggrdecl*_T2F;struct Cyc_Absyn_AggrdeclImpl*_T30;struct Cyc_Absyn_Aggrdecl*_T31;struct Cyc_Absyn_AggrdeclImpl*_T32;struct Cyc_Absyn_AggrdeclImpl*_T33;struct Cyc_List_List*_T34;void*_T35;struct Cyc_Absyn_Aggrfield*_T36;struct Cyc_Absyn_Aggrfield*_T37;struct Cyc_Absyn_Kind*_T38;struct Cyc_Absyn_Kind*_T39;struct Cyc_Absyn_Kind*_T3A;long _T3B;struct Cyc_Absyn_Aggrdecl*_T3C;enum Cyc_Absyn_AggrKind _T3D;int _T3E;struct Cyc_List_List*_T3F;struct Cyc_List_List*_T40;struct Cyc_Absyn_Aggrdecl*_T41;enum Cyc_Absyn_AggrKind _T42;int _T43;int*_T44;int _T45;struct Cyc_Absyn_ArrayInfo _T46;struct Cyc_Absyn_ArrayInfo _T47;struct Cyc_Absyn_ArrayInfo _T48;struct Cyc_Absyn_ArrayInfo _T49;struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T4A;struct Cyc_Absyn_Exp*_T4B;void*_T4C;struct Cyc_List_List*_T4D;struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct*_T4E;struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T4F;struct Cyc_Absyn_Exp*_T50;void*_T51;struct Cyc_Absyn_Aggrfield*_T52;struct Cyc_Absyn_Aggrfield*_T53;struct Cyc_Absyn_Aggrfield*_T54;struct Cyc_Absyn_Aggrfield*_T55;struct Cyc_Absyn_Aggrfield*_T56;struct Cyc_Absyn_Aggrfield*_T57;struct Cyc_Absyn_Aggrfield*_T58;struct Cyc_Absyn_Aggrfield*_T59;struct Cyc_Absyn_Aggrdecl*_T5A;struct Cyc_Absyn_AggrdeclImpl*_T5B;struct Cyc_Absyn_AggrdeclImpl*_T5C;long _T5D;struct Cyc_Absyn_Aggrfield*_T5E;struct Cyc_Absyn_Aggrfield*_T5F;struct _fat_ptr _T60;struct Cyc_String_pa_PrintArg_struct _T61;struct Cyc_Absyn_Aggrdecl*_T62;struct _tuple1*_T63;struct _tuple1 _T64;struct _fat_ptr*_T65;struct Cyc_String_pa_PrintArg_struct _T66;struct _fat_ptr*_T67;struct _fat_ptr _T68;struct _fat_ptr _T69;struct _fat_ptr*_T6A;struct Cyc_Absyn_Aggrfield*_T6B;struct Cyc_Absyn_Aggrfield*_T6C;struct Cyc_Absyn_Aggrfield*_T6D;struct Cyc_Absyn_Aggrfield*_T6E;struct Cyc_Absyn_Aggrfield*_T6F;struct Cyc_Absyn_Aggrfield*_T70;struct Cyc_Absyn_Aggrfield*_T71;struct Cyc_Absyn_Aggrfield*_T72;struct Cyc_Absyn_Aggrfield*_T73;struct Cyc_Absyn_Aggrfield*_T74;struct Cyc_Absyn_Aggrfield*_T75;struct Cyc_Absyn_Aggrfield*_T76;struct _fat_ptr*_T77;struct Cyc_List_List*_T78;struct _fat_ptr _T79;struct Cyc_Toc_TocContext*_T7A;struct Cyc_List_List*_T7B;struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T7C;void*_T7D;struct Cyc_Toc_TocContext*_T7E;struct Cyc_Absyn_Aggrfield*_T7F;struct Cyc_List_List*_T80;struct Cyc_List_List*_T81;struct Cyc_Absyn_Aggrdecl*_T82;struct Cyc_Absyn_AggrdeclImpl*_T83;long _T84;struct Cyc_Toc_TocContext*_T85;struct Cyc_List_List*_T86;struct Cyc_Absyn_Decl*_T87;struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T88;struct Cyc_Toc_TocContext*_T89;_T0= env;{
# 4262
struct _tuple51 _T8A=*_T0;struct Cyc_Absyn_Aggrdecl*_T8B;struct Cyc_Toc_TocContext*_T8C;struct Cyc_Toc_TocState*_T8D;_T8D= _T8A.f0;_T1= _T8A.f1;{struct _tuple50 _T8E=*_T1;_T8C= _T8E.f0;_T8B= _T8E.f1;}{struct Cyc_Toc_TocState*s=_T8D;struct Cyc_Toc_TocContext*ctxt=_T8C;struct Cyc_Absyn_Aggrdecl*ad=_T8B;_T2= ad;{
struct _tuple1*n=_T2->name;struct Cyc_Dict_Dict*_T8E;_T3= s;{struct Cyc_Toc_TocState _T8F=*_T3;_T8E= _T8F.aggrs_so_far;}{struct Cyc_Dict_Dict*aggrs_so_far=_T8E;
# 4265
long seen_defn_before;_T5= Cyc_Dict_lookup_opt;{
struct _tuple20**(*_T8F)(struct Cyc_Dict_Dict,struct _tuple1*)=(struct _tuple20**(*)(struct Cyc_Dict_Dict,struct _tuple1*))_T5;_T4= _T8F;}_T6= aggrs_so_far;_T7= *_T6;_T8= n;{struct _tuple20**dopt=_T4(_T7,_T8);
if(dopt!=0)goto _TL444;
seen_defn_before= 0;{
struct _tuple20*v;_T9= d;v= _region_malloc(_T9,0U,sizeof(struct _tuple20));_TA= v;
_TA->f0= ad;_TB= ad;_TC= _TB->kind;_TD= (int)_TC;if(_TD!=0)goto _TL446;_TE= v;({__typeof__(Cyc_Absyn_strctq(n))_T8F=Cyc_Absyn_strctq(n);_TE->f1= _T8F;});goto _TL447;_TL446: _TF= v;({__typeof__(Cyc_Absyn_unionq_type(n))_T8F=Cyc_Absyn_unionq_type(n);_TF->f1= _T8F;});_TL447: _T10= aggrs_so_far;_T12= Cyc_Dict_insert;{
struct Cyc_Dict_Dict(*_T8F)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple20*)=(struct Cyc_Dict_Dict(*)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple20*))_T12;_T11= _T8F;}_T13= aggrs_so_far;_T14= *_T13;_T15= n;_T16= v;({__typeof__(_T11(_T14,_T15,_T16))_T8F=_T11(_T14,_T15,_T16);*_T10= _T8F;});}goto _TL445;
# 4273
_TL444: _T17= dopt;{struct _tuple20*_T8F=*_T17;void*_T90;struct Cyc_Absyn_Aggrdecl*_T91;{struct _tuple20 _T92=*_T8F;_T91= _T92.f0;_T90= _T92.f1;}{struct Cyc_Absyn_Aggrdecl*ad2=_T91;void*t=_T90;_T18= ad2;_T19= _T18->impl;
if(_T19!=0)goto _TL448;_T1A= aggrs_so_far;_T1C= Cyc_Dict_insert;{
struct Cyc_Dict_Dict(*_T92)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple20*)=(struct Cyc_Dict_Dict(*)(struct Cyc_Dict_Dict,struct _tuple1*,struct _tuple20*))_T1C;_T1B= _T92;}_T1D= aggrs_so_far;_T1E= *_T1D;_T1F= n;_T21= d;{struct _tuple20*_T92=_region_malloc(_T21,0U,sizeof(struct _tuple20));_T92->f0= ad;_T92->f1= t;_T20= (struct _tuple20*)_T92;}({__typeof__(_T1B(_T1E,_T1F,_T20))_T92=_T1B(_T1E,_T1F,_T20);*_T1A= _T92;});
seen_defn_before= 0;goto _TL449;
# 4278
_TL448: seen_defn_before= 1;_TL449:;}}_TL445: {
# 4280
struct Cyc_Absyn_Aggrdecl*new_ad;new_ad= _cycalloc(sizeof(struct Cyc_Absyn_Aggrdecl));_T22= new_ad;_T23= ad;_T22->kind= _T23->kind;_T24= new_ad;
_T24->sc= 2U;_T25= new_ad;_T26= ad;
_T25->name= _T26->name;_T27= new_ad;
_T27->tvs= 0;_T28= new_ad;
_T28->impl= 0;_T29= new_ad;
_T29->expected_mem_kind= 0;_T2A= new_ad;_T2B= ad;
_T2A->attributes= _T2B->attributes;_T2C= ad;_T2D= _T2C->impl;
if(_T2D==0)goto _TL44A;_T2E= seen_defn_before;if(_T2E)goto _TL44A;else{goto _TL44C;}
_TL44C: _T2F= new_ad;{struct Cyc_Absyn_AggrdeclImpl*_T8F=_cycalloc(sizeof(struct Cyc_Absyn_AggrdeclImpl));_T8F->exist_vars= 0;
# 4290
_T8F->qual_bnd= 0;
_T8F->fields= 0;
_T8F->tagged= 0;
_T8F->effconstr= 0;_T30= (struct Cyc_Absyn_AggrdeclImpl*)_T8F;}
# 4288
_T2F->impl= _T30;{
# 4294
struct Cyc_List_List*new_fields=0;_T31= ad;_T32= _T31->impl;_T33= 
_check_null(_T32);{struct Cyc_List_List*fields=_T33->fields;_TL450: if(fields!=0)goto _TL44E;else{goto _TL44F;}
# 4298
_TL44E: _T34= fields;_T35= _T34->hd;{struct Cyc_Absyn_Aggrfield*old_field=(struct Cyc_Absyn_Aggrfield*)_T35;_T36= old_field;{
void*old_type=_T36->type;_T37= old_field;{
struct Cyc_List_List*old_atts=_T37->attributes;_T38= & Cyc_Kinds_ak;_T39= (struct Cyc_Absyn_Kind*)_T38;_T3A= 
Cyc_Tcutil_type_kind(old_type);_T3B= Cyc_Kinds_kind_leq(_T39,_T3A);if(!_T3B)goto _TL451;_T3C= ad;_T3D= _T3C->kind;_T3E= (int)_T3D;if(_T3E==0)goto _TL455;else{goto _TL454;}_TL455: _T3F= fields;_T40= _T3F->tl;if(_T40==0)goto _TL453;else{goto _TL454;}_TL454: _T41= ad;_T42= _T41->kind;_T43= (int)_T42;if(_T43==1)goto _TL453;else{goto _TL451;}
# 4311
_TL453:{void*_T8F=Cyc_Absyn_compress(old_type);unsigned _T90;void*_T91;struct Cyc_Absyn_Tqual _T92;void*_T93;_T44= (int*)_T8F;_T45= *_T44;if(_T45!=5)goto _TL456;{struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T94=(struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_T8F;_T46= _T94->f1;_T93= _T46.elt_type;_T47= _T94->f1;_T92= _T47.tq;_T48= _T94->f1;_T91= _T48.zero_term;_T49= _T94->f1;_T90= _T49.zt_loc;}{void*et=_T93;struct Cyc_Absyn_Tqual tq=_T92;void*zt=_T91;unsigned ztl=_T90;{struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T94=_cycalloc(sizeof(struct Cyc_Absyn_ArrayType_Absyn_Type_struct));_T94->tag= 5;
# 4315
_T94->f1.elt_type= et;_T94->f1.tq= tq;_T4B= Cyc_Absyn_uint_exp(0U,0U);_T4C= Cyc_Absyn_uint_type;({__typeof__(Cyc_Absyn_set_type(_T4B,_T4C))_T95=Cyc_Absyn_set_type(_T4B,_T4C);_T94->f1.num_elts= _T95;});_T94->f1.zero_term= zt;_T94->f1.zt_loc= ztl;_T4A= (struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_T94;}
# 4314
old_type= (void*)_T4A;goto _LL9;}_TL456:{struct Cyc_List_List*_T94=_cycalloc(sizeof(struct Cyc_List_List));{struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct*_T95=_cycalloc(sizeof(struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct));_T95->tag= 7;
# 4318
_T95->f1= 0;_T4E= (struct Cyc_Absyn_Aligned_att_Absyn_Attribute_struct*)_T95;}_T94->hd= (void*)_T4E;_T94->tl= old_atts;_T4D= (struct Cyc_List_List*)_T94;}old_atts= _T4D;{struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T94=_cycalloc(sizeof(struct Cyc_Absyn_ArrayType_Absyn_Type_struct));_T94->tag= 5;
# 4320
({__typeof__(Cyc_Toc_void_star_type(ctxt))_T95=Cyc_Toc_void_star_type(ctxt);_T94->f1.elt_type= _T95;});_T94->f1.tq= Cyc_Toc_mt_tq;_T50= Cyc_Absyn_uint_exp(0U,0U);_T51= Cyc_Absyn_uint_type;({__typeof__(Cyc_Absyn_set_type(_T50,_T51))_T95=Cyc_Absyn_set_type(_T50,_T51);_T94->f1.num_elts= _T95;});_T94->f1.zero_term= Cyc_Absyn_false_type;_T94->f1.zt_loc= 0U;_T4F= (struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_T94;}
# 4319
old_type= (void*)_T4F;_LL9:;}goto _TL452;_TL451: _TL452: {
# 4323
struct Cyc_Absyn_Aggrfield*new_field;new_field= _cycalloc(sizeof(struct Cyc_Absyn_Aggrfield));_T52= new_field;_T53= old_field;
_T52->name= _T53->name;_T54= new_field;
_T54->tq= Cyc_Toc_mt_tq;_T55= new_field;
({__typeof__(Cyc_Toc_trans_type(ctxt,old_type))_T8F=Cyc_Toc_trans_type(ctxt,old_type);_T55->type= _T8F;});_T56= new_field;_T57= old_field;
_T56->width= _T57->width;_T58= new_field;
({__typeof__(Cyc_Atts_atts2c(old_atts))_T8F=Cyc_Atts_atts2c(old_atts);_T58->attributes= _T8F;});_T59= new_field;
_T59->requires_clause= 0;_T5A= ad;_T5B= _T5A->impl;_T5C= 
# 4334
_check_null(_T5B);_T5D= _T5C->tagged;if(!_T5D)goto _TL458;_T5E= new_field;{
void*T=_T5E->type;_T5F= new_field;{
struct _fat_ptr*f=_T5F->name;{struct Cyc_String_pa_PrintArg_struct _T8F;_T8F.tag= 0;_T62= ad;_T63= _T62->name;_T64= *_T63;_T65= _T64.f1;
_T8F.f1= *_T65;_T61= _T8F;}{struct Cyc_String_pa_PrintArg_struct _T8F=_T61;{struct Cyc_String_pa_PrintArg_struct _T90;_T90.tag= 0;_T67= f;_T90.f1= *_T67;_T66= _T90;}{struct Cyc_String_pa_PrintArg_struct _T90=_T66;void*_T91[2];_T91[0]= & _T8F;_T91[1]= & _T90;_T68= _tag_fat("_union_%s_%s",sizeof(char),13U);_T69= _tag_fat(_T91,sizeof(void*),2);_T60= Cyc_aprintf(_T68,_T69);}}{struct _fat_ptr s=_T60;
struct _fat_ptr*str;str= _cycalloc(sizeof(struct _fat_ptr));_T6A= str;*_T6A= s;{
struct Cyc_Absyn_Aggrfield*value_field;value_field= _cycalloc(sizeof(struct Cyc_Absyn_Aggrfield));_T6B= value_field;_T6B->name= Cyc_Toc_val_sp;_T6C= value_field;_T6C->tq= Cyc_Toc_mt_tq;_T6D= value_field;_T6D->type= T;_T6E= value_field;_T6E->width= 0;_T6F= value_field;_T6F->attributes= 0;_T70= value_field;_T70->requires_clause= 0;{
struct Cyc_Absyn_Aggrfield*tag_field;tag_field= _cycalloc(sizeof(struct Cyc_Absyn_Aggrfield));_T71= tag_field;_T71->name= Cyc_Toc_tag_sp;_T72= tag_field;_T72->tq= Cyc_Toc_mt_tq;_T73= tag_field;_T73->type= Cyc_Absyn_sint_type;_T74= tag_field;_T74->width= 0;_T75= tag_field;_T75->attributes= 0;_T76= tag_field;_T76->requires_clause= 0;_T77= str;{struct Cyc_Absyn_Aggrfield*_T8F[2];
_T8F[0]= tag_field;_T8F[1]= value_field;_T79= _tag_fat(_T8F,sizeof(struct Cyc_Absyn_Aggrfield*),2);_T78= Cyc_List_list(_T79);}{struct Cyc_Absyn_Aggrdecl*ad2=Cyc_Toc_make_c_struct_defn(_T77,_T78);_T7A= ctxt;{struct Cyc_List_List*_T8F=_cycalloc(sizeof(struct Cyc_List_List));{struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T90=_cycalloc(sizeof(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct));_T90->tag= 5;
_T90->f1= ad2;_T7C= (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*)_T90;}_T7D= (void*)_T7C;({__typeof__(Cyc_Absyn_new_decl(_T7D,0U))_T90=Cyc_Absyn_new_decl(_T7D,0U);_T8F->hd= _T90;});_T7E= _check_null(ctxt);_T8F->tl= _T7E->result_decls;_T7B= (struct Cyc_List_List*)_T8F;}_T7A->result_decls= _T7B;_T7F= new_field;
({__typeof__(Cyc_Absyn_strct(str))_T8F=Cyc_Absyn_strct(str);_T7F->type= _T8F;});}}}}}}goto _TL459;_TL458: _TL459:{struct Cyc_List_List*_T8F=_cycalloc(sizeof(struct Cyc_List_List));
# 4345
_T8F->hd= new_field;_T8F->tl= new_fields;_T80= (struct Cyc_List_List*)_T8F;}new_fields= _T80;}}}}_T81= fields;
# 4295
fields= _T81->tl;goto _TL450;_TL44F:;}_T82= new_ad;_T83= _T82->impl;
# 4347
({__typeof__(Cyc_List_imp_rev(new_fields))_T8F=Cyc_List_imp_rev(new_fields);_T83->fields= _T8F;});}goto _TL44B;_TL44A: _TL44B: _T84= seen_defn_before;
# 4350
if(_T84)goto _TL45A;else{goto _TL45C;}
_TL45C: _T85= ctxt;{struct Cyc_List_List*_T8F=_cycalloc(sizeof(struct Cyc_List_List));{struct Cyc_Absyn_Decl*_T90=_cycalloc(sizeof(struct Cyc_Absyn_Decl));{struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T91=_cycalloc(sizeof(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct));_T91->tag= 5;_T91->f1= new_ad;_T88= (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*)_T91;}_T90->r= (void*)_T88;_T90->loc= 0U;_T87= (struct Cyc_Absyn_Decl*)_T90;}_T8F->hd= _T87;_T89= _check_null(ctxt);_T8F->tl= _T89->result_decls;_T86= (struct Cyc_List_List*)_T8F;}_T85->result_decls= _T86;goto _TL45B;_TL45A: _TL45B:
 return 0;}}}}}}}
# 4354
static void Cyc_Toc_trans_aggrdecl(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Absyn_Aggrdecl*ad){int(*_T0)(struct Cyc_Toc_TocContext*,struct _tuple50*,int(*)(struct _RegionHandle*,struct _tuple51*));struct Cyc_Toc_TocContext*_T1;struct _tuple50*_T2;{
int(*_T3)(struct Cyc_Toc_TocContext*,struct _tuple50*,int(*)(struct _RegionHandle*,struct _tuple51*))=(int(*)(struct Cyc_Toc_TocContext*,struct _tuple50*,int(*)(struct _RegionHandle*,struct _tuple51*)))Cyc_Toc_use_toc_state;_T0= _T3;}_T1= ctxt;{struct _tuple50*_T3=_cycalloc(sizeof(struct _tuple50));_T3->f0= ctxt;_T3->f1= ad;_T2= (struct _tuple50*)_T3;}_T0(_T1,_T2,Cyc_Toc_aggrdecl_to_c_body);}struct _tuple52{struct Cyc_Toc_TocContext*f0;struct Cyc_Absyn_Datatypedecl*f1;};struct _tuple53{struct Cyc_Toc_TocState*f0;struct _tuple52*f1;};
# 4382
static int Cyc_Toc_datatypedecl_to_c_body(struct _RegionHandle*d,struct _tuple53*env){struct _tuple53*_T0;struct Cyc_Toc_TocState*_T1;struct _tuple52*_T2;struct Cyc_Absyn_Datatypedecl*_T3;struct Cyc_Absyn_Datatypedecl*_T4;struct Cyc_Core_Opt*_T5;long(*_T6)(struct Cyc_Set_Set*,struct _tuple1*);long(*_T7)(struct Cyc_Set_Set*,void*);struct Cyc_Set_Set**_T8;struct Cyc_Set_Set*_T9;struct _tuple1*_TA;long _TB;struct Cyc_Set_Set**_TC;struct Cyc_Set_Set*(*_TD)(struct _RegionHandle*,struct Cyc_Set_Set*,struct _tuple1*);struct Cyc_Set_Set*(*_TE)(struct _RegionHandle*,struct Cyc_Set_Set*,void*);struct _RegionHandle*_TF;struct Cyc_Set_Set**_T10;struct Cyc_Set_Set*_T11;struct _tuple1*_T12;struct Cyc_Absyn_Datatypedecl*_T13;struct Cyc_Core_Opt*_T14;struct Cyc_Core_Opt*_T15;void*_T16;struct Cyc_List_List*_T17;void*_T18;struct Cyc_Absyn_Datatypefield*_T19;struct Cyc_Absyn_Aggrfield*_T1A;struct Cyc_Absyn_Aggrfield*_T1B;struct Cyc_List_List*_T1C;void*_T1D;struct _tuple28*_T1E;struct _tuple28 _T1F;struct Cyc_Absyn_Aggrfield*_T20;struct Cyc_Toc_TocContext*_T21;struct Cyc_List_List*_T22;void*_T23;struct _tuple28*_T24;struct _tuple28 _T25;void*_T26;struct Cyc_Absyn_Aggrfield*_T27;struct Cyc_Absyn_Aggrfield*_T28;struct Cyc_Absyn_Aggrfield*_T29;struct Cyc_List_List*_T2A;struct Cyc_List_List*_T2B;struct Cyc_List_List*_T2C;struct Cyc_Absyn_Aggrfield*_T2D;struct _fat_ptr*_T2E;struct Cyc_List_List*_T2F;struct Cyc_Absyn_Aggrdecl*_T30;struct Cyc_Toc_TocContext*_T31;struct Cyc_Absyn_Datatypefield*_T32;struct _tuple1*_T33;struct Cyc_Absyn_Datatypedecl*_T34;struct _tuple1*_T35;struct Cyc_Toc_TocContext*_T36;struct Cyc_List_List*_T37;struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T38;void*_T39;struct Cyc_Toc_TocContext*_T3A;struct Cyc_List_List*_T3B;_T0= env;{
# 4384
struct _tuple53 _T3C=*_T0;struct Cyc_Absyn_Datatypedecl*_T3D;struct Cyc_Toc_TocContext*_T3E;struct Cyc_Set_Set**_T3F;_T1= _T3C.f0;{struct Cyc_Toc_TocState _T40=*_T1;_T3F= _T40.datatypes_so_far;}_T2= _T3C.f1;{struct _tuple52 _T40=*_T2;_T3E= _T40.f0;_T3D= _T40.f1;}{struct Cyc_Set_Set**datatypes_so_far=_T3F;struct Cyc_Toc_TocContext*ctxt=_T3E;struct Cyc_Absyn_Datatypedecl*tud=_T3D;_T3= tud;{
struct _tuple1*n=_T3->name;_T4= tud;_T5= _T4->fields;
if(_T5==0)goto _TL45F;else{goto _TL460;}_TL460: _T7= Cyc_Set_member;{long(*_T40)(struct Cyc_Set_Set*,struct _tuple1*)=(long(*)(struct Cyc_Set_Set*,struct _tuple1*))_T7;_T6= _T40;}_T8= datatypes_so_far;_T9= *_T8;_TA= n;_TB= _T6(_T9,_TA);if(_TB)goto _TL45F;else{goto _TL45D;}
_TL45F: return 0;_TL45D: _TC= datatypes_so_far;_TE= Cyc_Set_rinsert;{
struct Cyc_Set_Set*(*_T40)(struct _RegionHandle*,struct Cyc_Set_Set*,struct _tuple1*)=(struct Cyc_Set_Set*(*)(struct _RegionHandle*,struct Cyc_Set_Set*,struct _tuple1*))_TE;_TD= _T40;}_TF= d;_T10= datatypes_so_far;_T11= *_T10;_T12= n;({__typeof__(_TD(_TF,_T11,_T12))_T40=_TD(_TF,_T11,_T12);*_TC= _T40;});_T13= tud;_T14= _T13->fields;_T15= 
_check_null(_T14);_T16= _T15->v;{struct Cyc_List_List*fields=(struct Cyc_List_List*)_T16;_TL464: if(fields!=0)goto _TL462;else{goto _TL463;}
_TL462: _T17= fields;_T18= _T17->hd;{struct Cyc_Absyn_Datatypefield*f=(struct Cyc_Absyn_Datatypefield*)_T18;
# 4392
struct Cyc_List_List*fs=0;
int i=1;_T19= f;{
struct Cyc_List_List*ts=_T19->typs;_TL468: if(ts!=0)goto _TL466;else{goto _TL467;}
_TL466:{struct Cyc_Absyn_Aggrfield*f;f= _cycalloc(sizeof(struct Cyc_Absyn_Aggrfield));_T1A= f;({__typeof__(Cyc_Absyn_fieldname(i))_T40=Cyc_Absyn_fieldname(i);_T1A->name= _T40;});_T1B= f;_T1C= ts;_T1D= _T1C->hd;_T1E= (struct _tuple28*)_T1D;_T1F= *_T1E;_T1B->tq= _T1F.f0;_T20= f;_T21= ctxt;_T22= ts;_T23= _T22->hd;_T24= (struct _tuple28*)_T23;_T25= *_T24;_T26= _T25.f1;({__typeof__(Cyc_Toc_trans_type(_T21,_T26))_T40=Cyc_Toc_trans_type(_T21,_T26);_T20->type= _T40;});_T27= f;_T27->width= 0;_T28= f;_T28->attributes= 0;_T29= f;_T29->requires_clause= 0;{struct Cyc_List_List*_T40=_cycalloc(sizeof(struct Cyc_List_List));
_T40->hd= f;_T40->tl= fs;_T2A= (struct Cyc_List_List*)_T40;}fs= _T2A;}_T2B= ts;
# 4394
ts= _T2B->tl;i= i + 1;goto _TL468;_TL467:;}{struct Cyc_List_List*_T40=_cycalloc(sizeof(struct Cyc_List_List));{struct Cyc_Absyn_Aggrfield*_T41=_cycalloc(sizeof(struct Cyc_Absyn_Aggrfield));
# 4398
_T41->name= Cyc_Toc_tag_sp;_T41->tq= Cyc_Toc_mt_tq;_T41->type= Cyc_Absyn_sint_type;_T41->width= 0;_T41->attributes= 0;_T41->requires_clause= 0;_T2D= (struct Cyc_Absyn_Aggrfield*)_T41;}_T40->hd= _T2D;({__typeof__(Cyc_List_imp_rev(fs))_T41=Cyc_List_imp_rev(fs);_T40->tl= _T41;});_T2C= (struct Cyc_List_List*)_T40;}fs= _T2C;{struct _fat_ptr*_T40=_cycalloc(sizeof(struct _fat_ptr));
({__typeof__(_tag_fat("",sizeof(char),1U))_T41=_tag_fat("",sizeof(char),1U);*_T40= _T41;});_T2E= (struct _fat_ptr*)_T40;}_T2F= fs;{struct Cyc_Absyn_Aggrdecl*ad=Cyc_Toc_make_c_struct_defn(_T2E,_T2F);_T30= ad;_T31= ctxt;_T32= f;_T33= _T32->name;_T34= tud;_T35= _T34->name;
({__typeof__(Cyc_Toc_collapse_qvars(_T31,_T33,_T35))_T40=Cyc_Toc_collapse_qvars(_T31,_T33,_T35);_T30->name= _T40;});_T36= ctxt;{struct Cyc_List_List*_T40=_cycalloc(sizeof(struct Cyc_List_List));{struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T41=_cycalloc(sizeof(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct));_T41->tag= 5;
_T41->f1= ad;_T38= (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*)_T41;}_T39= (void*)_T38;({__typeof__(Cyc_Absyn_new_decl(_T39,0U))_T41=Cyc_Absyn_new_decl(_T39,0U);_T40->hd= _T41;});_T3A= ctxt;_T40->tl= _T3A->result_decls;_T37= (struct Cyc_List_List*)_T40;}_T36->result_decls= _T37;}}_T3B= fields;
# 4389
fields= _T3B->tl;goto _TL464;_TL463:;}
# 4403
return 0;}}}}
# 4406
static void Cyc_Toc_trans_datatypedecl(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Absyn_Datatypedecl*tud){int(*_T0)(struct Cyc_Toc_TocContext*,struct _tuple52*,int(*)(struct _RegionHandle*,struct _tuple53*));struct Cyc_Toc_TocContext*_T1;struct _tuple52*_T2;{int(*_T3)(struct Cyc_Toc_TocContext*,struct _tuple52*,int(*)(struct _RegionHandle*,struct _tuple53*))=(int(*)(struct Cyc_Toc_TocContext*,struct _tuple52*,int(*)(struct _RegionHandle*,struct _tuple53*)))Cyc_Toc_use_toc_state;_T0= _T3;}_T1= ctxt;{struct _tuple52*_T3=_cycalloc(sizeof(struct _tuple52));_T3->f0= ctxt;_T3->f1= tud;_T2= (struct _tuple52*)_T3;}_T0(_T1,_T2,Cyc_Toc_datatypedecl_to_c_body);}
# 4424
static int Cyc_Toc_xdatatypedecl_to_c_body(struct _RegionHandle*d,struct _tuple53*env){struct _tuple53*_T0;struct _tuple52*_T1;struct Cyc_Absyn_Datatypedecl*_T2;struct Cyc_Core_Opt*_T3;struct Cyc_Toc_TocState*_T4;struct Cyc_Absyn_Datatypedecl*_T5;struct Cyc_Absyn_Datatypedecl*_T6;struct Cyc_Core_Opt*_T7;void*_T8;struct Cyc_List_List*_T9;void*_TA;struct Cyc_Absyn_Datatypefield*_TB;struct _tuple1*_TC;struct _tuple1 _TD;struct _fat_ptr*_TE;struct _fat_ptr _TF;unsigned _T10;struct Cyc_Absyn_Exp*_T11;void*_T12;long*(*_T13)(struct Cyc_Dict_Dict,struct _tuple1*);void**(*_T14)(struct Cyc_Dict_Dict,void*);struct Cyc_Dict_Dict*_T15;struct Cyc_Dict_Dict _T16;struct Cyc_Absyn_Datatypefield*_T17;struct _tuple1*_T18;struct Cyc_Absyn_Datatypefield*_T19;enum Cyc_Absyn_Scope _T1A;int _T1B;struct _fat_ptr*_T1C;struct _fat_ptr _T1D;struct Cyc_Absyn_Datatypefield*_T1E;struct _tuple1*_T1F;void*_T20;struct Cyc_Absyn_Exp*_T21;struct Cyc_Absyn_Vardecl*_T22;struct Cyc_Absyn_Datatypefield*_T23;struct Cyc_Toc_TocContext*_T24;struct Cyc_List_List*_T25;struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T26;void*_T27;struct Cyc_Toc_TocContext*_T28;struct Cyc_Dict_Dict*_T29;struct Cyc_Dict_Dict(*_T2A)(struct Cyc_Dict_Dict,struct _tuple1*,long);struct Cyc_Dict_Dict(*_T2B)(struct Cyc_Dict_Dict,void*,void*);struct Cyc_Dict_Dict*_T2C;struct Cyc_Dict_Dict _T2D;struct Cyc_Absyn_Datatypefield*_T2E;struct _tuple1*_T2F;struct Cyc_Absyn_Datatypefield*_T30;enum Cyc_Absyn_Scope _T31;int _T32;int _T33;struct Cyc_Absyn_Datatypefield*_T34;struct Cyc_Absyn_Aggrfield*_T35;struct Cyc_Absyn_Aggrfield*_T36;struct Cyc_List_List*_T37;void*_T38;struct _tuple28*_T39;struct _tuple28 _T3A;struct Cyc_Absyn_Aggrfield*_T3B;struct Cyc_Toc_TocContext*_T3C;struct Cyc_List_List*_T3D;void*_T3E;struct _tuple28*_T3F;struct _tuple28 _T40;void*_T41;struct Cyc_Absyn_Aggrfield*_T42;struct Cyc_Absyn_Aggrfield*_T43;struct Cyc_Absyn_Aggrfield*_T44;struct Cyc_List_List*_T45;struct Cyc_List_List*_T46;struct Cyc_List_List*_T47;struct Cyc_Absyn_Aggrfield*_T48;struct _fat_ptr*_T49;struct Cyc_List_List*_T4A;struct Cyc_Absyn_Aggrdecl*_T4B;struct Cyc_Toc_TocContext*_T4C;struct Cyc_Absyn_Datatypefield*_T4D;struct _tuple1*_T4E;struct Cyc_Absyn_Datatypedecl*_T4F;struct _tuple1*_T50;struct Cyc_Toc_TocContext*_T51;struct Cyc_List_List*_T52;struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T53;void*_T54;struct Cyc_Toc_TocContext*_T55;long*_T56;long _T57;struct Cyc_Absyn_Datatypefield*_T58;enum Cyc_Absyn_Scope _T59;int _T5A;struct _fat_ptr*_T5B;struct _fat_ptr _T5C;struct Cyc_Absyn_Datatypefield*_T5D;struct _tuple1*_T5E;void*_T5F;struct Cyc_Absyn_Exp*_T60;struct Cyc_Absyn_Vardecl*_T61;struct Cyc_Absyn_Datatypefield*_T62;struct Cyc_Toc_TocContext*_T63;struct Cyc_List_List*_T64;struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T65;void*_T66;struct Cyc_Toc_TocContext*_T67;struct Cyc_Dict_Dict*_T68;struct Cyc_Dict_Dict(*_T69)(struct Cyc_Dict_Dict,struct _tuple1*,long);struct Cyc_Dict_Dict(*_T6A)(struct Cyc_Dict_Dict,void*,void*);struct Cyc_Dict_Dict*_T6B;struct Cyc_Dict_Dict _T6C;struct Cyc_Absyn_Datatypefield*_T6D;struct _tuple1*_T6E;struct Cyc_List_List*_T6F;_T0= env;{
# 4426
struct _tuple53 _T70=*_T0;struct Cyc_Absyn_Datatypedecl*_T71;struct Cyc_Toc_TocContext*_T72;struct Cyc_Toc_TocState*_T73;_T73= _T70.f0;_T1= _T70.f1;{struct _tuple52 _T74=*_T1;_T72= _T74.f0;_T71= _T74.f1;}{struct Cyc_Toc_TocState*s=_T73;struct Cyc_Toc_TocContext*ctxt=_T72;struct Cyc_Absyn_Datatypedecl*xd=_T71;_T2= xd;_T3= _T2->fields;
if(_T3!=0)goto _TL469;
return 0;_TL469: _T4= s;{
struct Cyc_Toc_TocState _T74=*_T4;struct Cyc_Dict_Dict*_T75;_T75= _T74.xdatatypes_so_far;{struct Cyc_Dict_Dict*xdatatypes_so_far=_T75;_T5= xd;{
struct _tuple1*n=_T5->name;_T6= xd;_T7= _T6->fields;_T8= _T7->v;{
struct Cyc_List_List*fs=(struct Cyc_List_List*)_T8;_TL46E: if(fs!=0)goto _TL46C;else{goto _TL46D;}
_TL46C: _T9= fs;_TA= _T9->hd;{struct Cyc_Absyn_Datatypefield*f=(struct Cyc_Absyn_Datatypefield*)_TA;_TB= f;_TC= _TB->name;_TD= *_TC;{
struct _fat_ptr*fn=_TD.f1;_TE= fn;_TF= *_TE;_T10= 
_get_fat_size(_TF,sizeof(char));_T11= Cyc_Absyn_uint_exp(_T10,0U);_T12= Cyc_Absyn_uint_type;{struct Cyc_Absyn_Exp*sz_exp=Cyc_Absyn_set_type(_T11,_T12);
void*tag_typ=Cyc_Absyn_array_type(Cyc_Absyn_char_type,Cyc_Toc_mt_tq,sz_exp,Cyc_Absyn_false_type,0U);_T14= Cyc_Dict_lookup_opt;{
# 4437
long*(*_T76)(struct Cyc_Dict_Dict,struct _tuple1*)=(long*(*)(struct Cyc_Dict_Dict,struct _tuple1*))_T14;_T13= _T76;}_T15= xdatatypes_so_far;_T16= *_T15;_T17= f;_T18= _T17->name;{long*_T76=_T13(_T16,_T18);if(_T76!=0)goto _TL46F;{
# 4439
struct Cyc_Absyn_Exp*initopt=0;_T19= f;_T1A= _T19->sc;_T1B= (int)_T1A;
if(_T1B==3)goto _TL471;_T1C= fn;_T1D= *_T1C;
initopt= Cyc_Absyn_string_exp(_T1D,0U);goto _TL472;_TL471: _TL472: _T1E= f;_T1F= _T1E->name;_T20= tag_typ;_T21= initopt;{
struct Cyc_Absyn_Vardecl*tag_decl=Cyc_Absyn_new_vardecl(0U,_T1F,_T20,_T21,0);_T22= tag_decl;_T23= f;
_T22->sc= _T23->sc;_T24= ctxt;{struct Cyc_List_List*_T77=_cycalloc(sizeof(struct Cyc_List_List));{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T78=_cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));_T78->tag= 0;
_T78->f1= tag_decl;_T26= (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T78;}_T27= (void*)_T26;({__typeof__(Cyc_Absyn_new_decl(_T27,0U))_T78=Cyc_Absyn_new_decl(_T27,0U);_T77->hd= _T78;});_T28= _check_null(ctxt);_T77->tl= _T28->result_decls;_T25= (struct Cyc_List_List*)_T77;}_T24->result_decls= _T25;_T29= xdatatypes_so_far;_T2B= Cyc_Dict_insert;{
struct Cyc_Dict_Dict(*_T77)(struct Cyc_Dict_Dict,struct _tuple1*,long)=(struct Cyc_Dict_Dict(*)(struct Cyc_Dict_Dict,struct _tuple1*,long))_T2B;_T2A= _T77;}_T2C= xdatatypes_so_far;_T2D= *_T2C;_T2E= f;_T2F= _T2E->name;_T30= f;_T31= _T30->sc;_T32= (int)_T31;_T33= _T32!=3;({__typeof__(_T2A(_T2D,_T2F,_T33))_T77=_T2A(_T2D,_T2F,_T33);*_T29= _T77;});{
struct Cyc_List_List*fields=0;
int i=1;_T34= f;{
struct Cyc_List_List*tqts=_T34->typs;_TL476: if(tqts!=0)goto _TL474;else{goto _TL475;}
_TL474:{struct _fat_ptr*field_n=Cyc_Absyn_fieldname(i);
struct Cyc_Absyn_Aggrfield*newf;newf= _cycalloc(sizeof(struct Cyc_Absyn_Aggrfield));_T35= newf;
_T35->name= field_n;_T36= newf;_T37= tqts;_T38= _T37->hd;_T39= (struct _tuple28*)_T38;_T3A= *_T39;_T36->tq= _T3A.f0;_T3B= newf;_T3C= ctxt;_T3D= tqts;_T3E= _T3D->hd;_T3F= (struct _tuple28*)_T3E;_T40= *_T3F;_T41= _T40.f1;({__typeof__(Cyc_Toc_trans_type(_T3C,_T41))_T77=Cyc_Toc_trans_type(_T3C,_T41);_T3B->type= _T77;});_T42= newf;_T42->width= 0;_T43= newf;_T43->attributes= 0;_T44= newf;_T44->requires_clause= 0;{struct Cyc_List_List*_T77=_cycalloc(sizeof(struct Cyc_List_List));
_T77->hd= newf;_T77->tl= fields;_T45= (struct Cyc_List_List*)_T77;}fields= _T45;}_T46= tqts;
# 4448
tqts= _T46->tl;i= i + 1;goto _TL476;_TL475:;}{struct Cyc_List_List*_T77=_cycalloc(sizeof(struct Cyc_List_List));{struct Cyc_Absyn_Aggrfield*_T78=_cycalloc(sizeof(struct Cyc_Absyn_Aggrfield));
# 4455
_T78->name= Cyc_Toc_tag_sp;_T78->tq= Cyc_Toc_mt_tq;({__typeof__(Cyc_Absyn_cstar_type(Cyc_Absyn_char_type,Cyc_Toc_mt_tq))_T79=Cyc_Absyn_cstar_type(Cyc_Absyn_char_type,Cyc_Toc_mt_tq);_T78->type= _T79;});_T78->width= 0;_T78->attributes= 0;_T78->requires_clause= 0;_T48= (struct Cyc_Absyn_Aggrfield*)_T78;}_T77->hd= _T48;
({__typeof__(Cyc_List_imp_rev(fields))_T78=Cyc_List_imp_rev(fields);_T77->tl= _T78;});_T47= (struct Cyc_List_List*)_T77;}
# 4454
fields= _T47;{struct _fat_ptr*_T77=_cycalloc(sizeof(struct _fat_ptr));
# 4457
({__typeof__(_tag_fat("",sizeof(char),1U))_T78=_tag_fat("",sizeof(char),1U);*_T77= _T78;});_T49= (struct _fat_ptr*)_T77;}_T4A= fields;{struct Cyc_Absyn_Aggrdecl*strct_decl=Cyc_Toc_make_c_struct_defn(_T49,_T4A);_T4B= strct_decl;_T4C= ctxt;_T4D= f;_T4E= _T4D->name;_T4F= xd;_T50= _T4F->name;
({__typeof__(Cyc_Toc_collapse_qvars(_T4C,_T4E,_T50))_T77=Cyc_Toc_collapse_qvars(_T4C,_T4E,_T50);_T4B->name= _T77;});_T51= ctxt;{struct Cyc_List_List*_T77=_cycalloc(sizeof(struct Cyc_List_List));{struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T78=_cycalloc(sizeof(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct));_T78->tag= 5;
_T78->f1= strct_decl;_T53= (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*)_T78;}_T54= (void*)_T53;({__typeof__(Cyc_Absyn_new_decl(_T54,0U))_T78=Cyc_Absyn_new_decl(_T54,0U);_T77->hd= _T78;});_T55= ctxt;_T77->tl= _T55->result_decls;_T52= (struct Cyc_List_List*)_T77;}_T51->result_decls= _T52;goto _LL6;}}}}_TL46F: _T56= (long*)_T76;_T57= *_T56;if(_T57!=0)goto _TL477;_T58= f;_T59= _T58->sc;_T5A= (int)_T59;
# 4462
if(_T5A==3)goto _TL479;_T5B= fn;_T5C= *_T5B;{
struct Cyc_Absyn_Exp*initopt=Cyc_Absyn_string_exp(_T5C,0U);_T5D= f;_T5E= _T5D->name;_T5F= tag_typ;_T60= initopt;{
struct Cyc_Absyn_Vardecl*tag_decl=Cyc_Absyn_new_vardecl(0U,_T5E,_T5F,_T60,0);_T61= tag_decl;_T62= f;
_T61->sc= _T62->sc;_T63= ctxt;{struct Cyc_List_List*_T77=_cycalloc(sizeof(struct Cyc_List_List));{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T78=_cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));_T78->tag= 0;
_T78->f1= tag_decl;_T65= (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T78;}_T66= (void*)_T65;({__typeof__(Cyc_Absyn_new_decl(_T66,0U))_T78=Cyc_Absyn_new_decl(_T66,0U);_T77->hd= _T78;});_T67= _check_null(ctxt);_T77->tl= _T67->result_decls;_T64= (struct Cyc_List_List*)_T77;}_T63->result_decls= _T64;_T68= xdatatypes_so_far;_T6A= Cyc_Dict_insert;{
struct Cyc_Dict_Dict(*_T77)(struct Cyc_Dict_Dict,struct _tuple1*,long)=(struct Cyc_Dict_Dict(*)(struct Cyc_Dict_Dict,struct _tuple1*,long))_T6A;_T69= _T77;}_T6B= xdatatypes_so_far;_T6C= *_T6B;_T6D= f;_T6E= _T6D->name;({__typeof__(_T69(_T6C,_T6E,1))_T77=_T69(_T6C,_T6E,1);*_T68= _T77;});}}goto _TL47A;_TL479: _TL47A: goto _LL6;_TL477: goto _LL6;_LL6:;}}}}_T6F= fs;
# 4431
fs= _T6F->tl;goto _TL46E;_TL46D:;}
# 4474
return 0;}}}}}}
# 4477
static void Cyc_Toc_trans_xdatatypedecl(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Absyn_Datatypedecl*xd){int(*_T0)(struct Cyc_Toc_TocContext*,struct _tuple52*,int(*)(struct _RegionHandle*,struct _tuple53*));struct Cyc_Toc_TocContext*_T1;struct _tuple52*_T2;{int(*_T3)(struct Cyc_Toc_TocContext*,struct _tuple52*,int(*)(struct _RegionHandle*,struct _tuple53*))=(int(*)(struct Cyc_Toc_TocContext*,struct _tuple52*,int(*)(struct _RegionHandle*,struct _tuple53*)))Cyc_Toc_use_toc_state;_T0= _T3;}_T1= ctxt;{struct _tuple52*_T3=_cycalloc(sizeof(struct _tuple52));_T3->f0= ctxt;_T3->f1= xd;_T2= (struct _tuple52*)_T3;}_T0(_T1,_T2,Cyc_Toc_xdatatypedecl_to_c_body);}
# 4479
static void Cyc_Toc_trans_enumdecl(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Absyn_Enumdecl*ed){struct Cyc_Absyn_Enumdecl*_T0;struct Cyc_Absyn_Enumdecl*_T1;struct Cyc_Core_Opt*_T2;struct Cyc_Absyn_Enumdecl*_T3;struct Cyc_Core_Opt*_T4;void*_T5;struct Cyc_List_List*_T6;_T0= ed;
_T0->sc= 2U;_T1= ed;_T2= _T1->fields;
if(_T2==0)goto _TL47B;_T3= ed;_T4= _T3->fields;_T5= _T4->v;_T6= (struct Cyc_List_List*)_T5;
Cyc_Toc_enumfields_to_c(_T6);goto _TL47C;_TL47B: _TL47C:;}
# 4485
static void Cyc_Toc_local_decl_to_c(struct Cyc_Toc_Env*nv,struct Cyc_Absyn_Vardecl*vd,struct Cyc_Absyn_Stmt*s){struct Cyc_Absyn_Vardecl*_T0;struct Cyc_Absyn_Vardecl*_T1;struct Cyc_Toc_Env*_T2;struct Cyc_Toc_TocContext*_T3;void*_T4;struct Cyc_Absyn_Vardecl*_T5;enum Cyc_Absyn_Scope _T6;int _T7;long _T8;struct Cyc_Absyn_Vardecl*_T9;struct Cyc_Absyn_Vardecl*_TA;struct Cyc_Absyn_Exp*_TB;struct Cyc_Absyn_Vardecl*_TC;struct Cyc_Absyn_Vardecl*_TD;enum Cyc_Absyn_Scope _TE;int _TF;int*_T10;int _T11;struct Cyc_Absyn_ArrayInfo _T12;struct Cyc_Absyn_ArrayInfo _T13;struct Cyc_Absyn_ArrayInfo _T14;long _T15;struct Cyc_Warn_String_Warn_Warg_struct _T16;int(*_T17)(struct _fat_ptr ap);struct _fat_ptr _T18;struct Cyc_Absyn_Vardecl*_T19;struct _tuple1*_T1A;struct Cyc_Absyn_Exp*_T1B;struct Cyc_Toc_Env*_T1C;struct Cyc_Toc_TocContext*_T1D;void*_T1E;void*_T1F;struct Cyc_Absyn_Exp*_T20;struct Cyc_Absyn_Exp*_T21;int _T22;struct Cyc_Absyn_Exp*_T23;void*_T24;struct Cyc_Absyn_Exp*_T25;struct Cyc_Absyn_Exp*_T26;void*_T27;struct Cyc_Absyn_Exp*_T28;struct Cyc_Absyn_Exp*_T29;void*_T2A;struct Cyc_Absyn_Stmt*_T2B;struct Cyc_Absyn_Exp*_T2C;struct Cyc_Absyn_Stmt*_T2D;struct Cyc_Absyn_Stmt*_T2E;void*_T2F;struct Cyc_Absyn_Stmt*_T30;_T0= vd;{
void*old_typ=_T0->type;_T1= vd;_T2= nv;_T3= _T2->ctxt;_T4= old_typ;
({__typeof__(Cyc_Toc_typ_to_c(_T3,_T4))_T31=Cyc_Toc_typ_to_c(_T3,_T4);_T1->type= _T31;});_T5= vd;_T6= _T5->sc;_T7= (int)_T6;
# 4489
if(_T7!=5)goto _TL47D;_T8= Cyc_Tcutil_is_fat_pointer_type(old_typ);if(!_T8)goto _TL47D;_T9= vd;
_T9->sc= 2U;goto _TL47E;_TL47D: _TL47E:
 Cyc_Toc_stmt_to_c(nv,s);_TA= vd;_TB= _TA->initializer;
if(_TB==0)goto _TL47F;_TC= vd;{
struct Cyc_Absyn_Exp*init=_TC->initializer;_TD= vd;_TE= _TD->sc;_TF= (int)_TE;
if(_TF!=0)goto _TL481;{struct _RegionHandle _T31=_new_region(0U,"temp");struct _RegionHandle*temp=& _T31;_push_region(temp);{
# 4499
struct Cyc_Toc_Env*nv2=Cyc_Toc_set_toplevel(temp,nv);
Cyc_Toc_exp_to_c(nv2,init);}_pop_region();}goto _TL482;
# 4503
_TL481: Cyc_Toc_exp_to_c(nv,init);_TL482:;}goto _TL480;
# 4506
_TL47F:{void*_T31=Cyc_Absyn_compress(old_typ);void*_T32;struct Cyc_Absyn_Exp*_T33;void*_T34;_T10= (int*)_T31;_T11= *_T10;if(_T11!=5)goto _TL483;{struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T35=(struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_T31;_T12= _T35->f1;_T34= _T12.elt_type;_T13= _T35->f1;_T33= _T13.num_elts;_T14= _T35->f1;_T32= _T14.zero_term;}{void*et=_T34;struct Cyc_Absyn_Exp*num_elts_opt=_T33;void*zt=_T32;_T15= 
# 4508
Cyc_Tcutil_force_type2bool(0,zt);if(!_T15)goto _TL485;
if(num_elts_opt!=0)goto _TL487;{struct Cyc_Warn_String_Warn_Warg_struct _T35;_T35.tag= 0;
({__typeof__(_tag_fat("can't initialize zero-terminated array -- size unknown",sizeof(char),55U))_T36=_tag_fat("can't initialize zero-terminated array -- size unknown",sizeof(char),55U);_T35.f1= _T36;});_T16= _T35;}{struct Cyc_Warn_String_Warn_Warg_struct _T35=_T16;void*_T36[1];_T36[0]= & _T35;{int(*_T37)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T17= _T37;}_T18= _tag_fat(_T36,sizeof(void*),1);_T17(_T18);}goto _TL488;_TL487: _TL488: _T19= vd;_T1A= _T19->name;_T1B= 
# 4512
Cyc_Absyn_var_exp(_T1A,0U);_T1C= nv;_T1D= _T1C->ctxt;_T1E= old_typ;_T1F= Cyc_Toc_typ_to_c_array(_T1D,_T1E);_T20= Cyc_Absyn_set_type(_T1B,_T1F);_T21= num_elts_opt;_T22= - 1;_T23= 
Cyc_Absyn_signed_int_exp(_T22,0U);_T24= Cyc_Absyn_sint_type;_T25= Cyc_Absyn_set_type(_T23,_T24);_T26= Cyc_Absyn_add_exp(_T21,_T25,0U);_T27= Cyc_Absyn_sint_type;_T28= Cyc_Absyn_set_type(_T26,_T27);{
# 4511
struct Cyc_Absyn_Exp*lhs=Cyc_Absyn_subscript_exp(_T20,_T28,0U);_T29= 
# 4516
Cyc_Absyn_signed_int_exp(0,0U);_T2A= Cyc_Absyn_sint_type;{struct Cyc_Absyn_Exp*rhs=Cyc_Absyn_set_type(_T29,_T2A);_T2B= s;_T2C= 
Cyc_Absyn_assign_exp(lhs,rhs,0U);_T2D= Cyc_Absyn_exp_stmt(_T2C,0U);_T2E= s;_T2F= _T2E->r;_T30= Cyc_Absyn_new_stmt(_T2F,0U);({__typeof__(Cyc_Toc_seq_stmt_r(_T2D,_T30))_T35=Cyc_Toc_seq_stmt_r(_T2D,_T30);_T2B->r= _T35;});}}goto _TL486;_TL485: _TL486: goto _LL0;}_TL483: goto _LL0;_LL0:;}_TL480:;}}
# 4527
static void*Cyc_Toc_rewrite_decision(void*d,struct Cyc_Absyn_Stmt*success){void*_T0;int*_T1;unsigned _T2;void*_T3;void*_T4;struct Cyc_Tcpat_Rhs*_T5;void*_T6;void*_T7;void*_T8;struct Cyc_Tcpat_SwitchDec_Tcpat_Decision_struct*_T9;void**_TA;void**_TB;void**_TC;void*_TD;struct Cyc_Absyn_Stmt*_TE;struct Cyc_List_List*_TF;void*_T10;void**_T11;void**_T12;void**_T13;void*_T14;struct Cyc_Absyn_Stmt*_T15;struct Cyc_List_List*_T16;void*_T17;struct Cyc_List_List*_T18;struct Cyc_List_List*_T19;void*_T1A;_T0= d;_T1= (int*)_T0;_T2= *_T1;switch(_T2){case 0: _T3= d;
# 4530
return _T3;case 1: _T4= d;{struct Cyc_Tcpat_Success_Tcpat_Decision_struct*_T1B=(struct Cyc_Tcpat_Success_Tcpat_Decision_struct*)_T4;_T1A= _T1B->f1;}{struct Cyc_Tcpat_Rhs*rhs=_T1A;_T5= rhs;
# 4532
_T5->rhs= success;_T6= d;
return _T6;}default: _T7= d;{struct Cyc_Tcpat_SwitchDec_Tcpat_Decision_struct*_T1B=(struct Cyc_Tcpat_SwitchDec_Tcpat_Decision_struct*)_T7;_T19= _T1B->f1;_T18= _T1B->f2;_T8= d;_T9= (struct Cyc_Tcpat_SwitchDec_Tcpat_Decision_struct*)_T8;_TA= & _T9->f3;_T1A= (void**)_TA;}{struct Cyc_List_List*path=_T19;struct Cyc_List_List*sws=_T18;void**d2=(void**)_T1A;_TB= d2;_TC= d2;_TD= *_TC;_TE= success;
# 4535
({__typeof__(Cyc_Toc_rewrite_decision(_TD,_TE))_T1B=Cyc_Toc_rewrite_decision(_TD,_TE);*_TB= _T1B;});
_TL48D: if(sws!=0)goto _TL48B;else{goto _TL48C;}
_TL48B: _TF= sws;_T10= _TF->hd;{struct _tuple40*_T1B=(struct _tuple40*)_T10;void*_T1C;{struct _tuple40 _T1D=*_T1B;_T11= & _T1B->f1;_T1C= (void**)_T11;}{void**d2=(void**)_T1C;_T12= d2;_T13= d2;_T14= *_T13;_T15= success;
({__typeof__(Cyc_Toc_rewrite_decision(_T14,_T15))_T1D=Cyc_Toc_rewrite_decision(_T14,_T15);*_T12= _T1D;});}}_T16= sws;
# 4536
sws= _T16->tl;goto _TL48D;_TL48C: _T17= d;
# 4540
return _T17;}};}
# 4551
static struct Cyc_Absyn_Stmt*Cyc_Toc_letdecl_to_c(struct Cyc_Toc_Env*nv,struct Cyc_Absyn_Pat*p,void*dopt,void*t,struct Cyc_Absyn_Exp*e,struct Cyc_Absyn_Stmt*s){struct Cyc_Absyn_Exp*_T0;void*_T1;struct Cyc_Absyn_Exp*_T2;int*_T3;int _T4;void*_T5;struct Cyc_Toc_Env*_T6;struct Cyc_Toc_TocContext*_T7;struct _tuple1*_T8;struct Cyc_Toc_Env*_T9;struct Cyc_Toc_TocContext*_TA;void*_TB;void*_TC;struct Cyc_Absyn_Exp*_TD;struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_TE;void*_TF;struct Cyc_Absyn_Exp*_T10;struct Cyc_Absyn_Vardecl*_T11;void*_T12;struct Cyc_Toc_Env*_T13;struct Cyc_Toc_TocContext*_T14;struct Cyc_Absyn_Switch_clause*_T15;struct Cyc_Absyn_Switch_clause*_T16;struct Cyc_Absyn_Switch_clause*_T17;struct Cyc_Absyn_Switch_clause*_T18;struct Cyc_Absyn_Switch_clause*_T19;struct Cyc_List_List*(*_T1A)(struct _RegionHandle*,struct _tuple43*(*)(struct _tuple44*,struct Cyc_Absyn_Switch_clause*),struct _tuple44*,struct Cyc_List_List*);struct Cyc_List_List*(*_T1B)(struct _RegionHandle*,void*(*)(void*,void*),void*,struct Cyc_List_List*);struct _RegionHandle*_T1C;struct _tuple44*_T1D;struct Cyc_Toc_Env*_T1E;struct Cyc_List_List*_T1F;struct _RegionHandle*_T20;struct _fat_ptr _T21;struct Cyc_Toc_Env*_T22;struct Cyc_Toc_TocContext*_T23;struct _RegionHandle*_T24;struct Cyc_Toc_Env*_T25;struct Cyc_List_List**_T26;struct Cyc_List_List**_T27;void*_T28;struct Cyc_List_List*_T29;struct Cyc_Absyn_Exp*_T2A;struct Cyc_Warn_String_Warn_Warg_struct _T2B;int(*_T2C)(struct _fat_ptr ap);struct _fat_ptr _T2D;struct Cyc_List_List*_T2E;void*_T2F;struct Cyc_List_List*_T30;struct Cyc_List_List*_T31;void*_T32;struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T33;void*_T34;struct Cyc_Absyn_Decl*_T35;struct Cyc_Absyn_Stmt*_T36;struct Cyc_List_List*_T37;struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T38;void*_T39;struct Cyc_Absyn_Decl*_T3A;struct Cyc_Absyn_Stmt*_T3B;struct _RegionHandle _T3C=_new_region(0U,"rgn");struct _RegionHandle*rgn=& _T3C;_push_region(rgn);{
# 4554
struct Cyc_Toc_Env*_T3D=Cyc_Toc_share_env(rgn,nv);struct Cyc_Toc_Env*nv=_T3D;_T0= e;_T1= _T0->topt;{
void*t=_check_null(_T1);
Cyc_Toc_exp_to_c(nv,e);{
# 4558
struct Cyc_Absyn_Vardecl*v=0;
struct Cyc_Absyn_Exp*vexp=e;_T2= e;{
void*_T3E=_T2->r;void*_T3F;_T3= (int*)_T3E;_T4= *_T3;if(_T4!=1)goto _TL48E;{struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*_T40=(struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct*)_T3E;_T5= _T40->f1;_T3F= (void*)_T5;}{void*b=_T3F;goto _LL0;}_TL48E: _T6= nv;_T7= _T6->ctxt;{
# 4564
struct _tuple1*x=Cyc_Toc_temp_var(_T7);_T8= x;_T9= nv;_TA= _T9->ctxt;_TB= t;_TC= 
Cyc_Toc_typ_to_c(_TA,_TB);_TD= e;v= Cyc_Absyn_new_vardecl(0U,_T8,_TC,_TD,0);{struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T40=_cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));_T40->tag= 4;
_T40->f1= v;_TE= (struct Cyc_Absyn_Local_b_Absyn_Binding_struct*)_T40;}_TF= (void*)_TE;_T10= Cyc_Absyn_varb_exp(_TF,0U);_T11= v;_T12= _T11->type;vexp= Cyc_Absyn_set_type(_T10,_T12);goto _LL0;}_LL0:;}{
# 4569
struct Cyc_Absyn_Exp*path=Cyc_Toc_deep_copy(vexp);_T13= nv;_T14= _T13->ctxt;{
struct _fat_ptr*end_l=Cyc_Toc_fresh_label(_T14);
# 4574
struct Cyc_Absyn_Stmt*succ_stmt=s;
if(dopt==0)goto _TL490;
# 4578
dopt= Cyc_Toc_rewrite_decision(dopt,succ_stmt);goto _TL491;_TL490: _TL491: {
# 4580
struct Cyc_Absyn_Switch_clause*c1;c1= _cycalloc(sizeof(struct Cyc_Absyn_Switch_clause));_T15= c1;_T15->pattern= p;_T16= c1;_T16->pat_vars= 0;_T17= c1;_T17->where_clause= 0;_T18= c1;_T18->body= succ_stmt;_T19= c1;_T19->loc= 0U;_T1B= Cyc_List_rmap_c;{
struct Cyc_List_List*(*_T3E)(struct _RegionHandle*,struct _tuple43*(*)(struct _tuple44*,struct Cyc_Absyn_Switch_clause*),struct _tuple44*,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _RegionHandle*,struct _tuple43*(*)(struct _tuple44*,struct Cyc_Absyn_Switch_clause*),struct _tuple44*,struct Cyc_List_List*))_T1B;_T1A= _T3E;}_T1C= rgn;{struct _tuple44*_T3E=_cycalloc(sizeof(struct _tuple44));_T1E= nv;_T3E->f0= _T1E->ctxt;_T3E->f1= rgn;_T1D= (struct _tuple44*)_T3E;}{struct Cyc_Absyn_Switch_clause*_T3E[1];_T3E[0]= c1;_T20= rgn;_T21= _tag_fat(_T3E,sizeof(struct Cyc_Absyn_Switch_clause*),1);_T1F= Cyc_List_rlist(_T20,_T21);}{struct Cyc_List_List*lscs=_T1A(_T1C,Cyc_Toc_gen_labels,_T1D,_T1F);
# 4585
struct Cyc_List_List*mydecls=0;
struct Cyc_List_List*mybodies=0;_T22= nv;_T23= _T22->ctxt;_T24= rgn;_T25= nv;_T26= & mydecls;_T27= & mybodies;_T28= dopt;_T29= lscs;_T2A= vexp;{
# 4592
struct Cyc_Absyn_Stmt*test_tree=
Cyc_Toc_compile_decision_tree(_T23,_T24,_T25,_T26,_T27,_T28,_T29,_T2A);_TL495:
# 4596
 if(1)goto _TL493;else{goto _TL494;}
_TL493: if(mybodies!=0)goto _TL496;{struct Cyc_Warn_String_Warn_Warg_struct _T3E;_T3E.tag= 0;
({__typeof__(_tag_fat("letdecl_to_c: couldn't find env!",sizeof(char),33U))_T3F=_tag_fat("letdecl_to_c: couldn't find env!",sizeof(char),33U);_T3E.f1= _T3F;});_T2B= _T3E;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E=_T2B;void*_T3F[1];_T3F[0]= & _T3E;{int(*_T40)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T2C= _T40;}_T2D= _tag_fat(_T3F,sizeof(void*),1);_T2C(_T2D);}goto _TL497;_TL496: _TL497: _T2E= mybodies;_T2F= _T2E->hd;{
struct _tuple49*_T3E=(struct _tuple49*)_T2F;struct Cyc_Absyn_Stmt*_T3F;struct Cyc_Toc_Env*_T40;{struct _tuple49 _T41=*_T3E;_T40= _T41.f0;_T3F= _T41.f2;}{struct Cyc_Toc_Env*env=_T40;struct Cyc_Absyn_Stmt*st=_T3F;
if(st!=succ_stmt)goto _TL498;
Cyc_Toc_stmt_to_c(env,s);goto _TL494;_TL498:;}}_T30= mybodies;
# 4596
mybodies= _T30->tl;goto _TL495;_TL494: {
# 4606
struct Cyc_Absyn_Stmt*res=test_tree;
# 4608
_TL49D: if(mydecls!=0)goto _TL49B;else{goto _TL49C;}
_TL49B: _T31= mydecls;_T32= _T31->hd;{struct _tuple47*_T3E=(struct _tuple47*)_T32;struct Cyc_Absyn_Vardecl*_T3F;{struct _tuple47 _T40=*_T3E;_T3F= _T40.f1;}{struct Cyc_Absyn_Vardecl*vd=_T3F;{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T40=_cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));_T40->tag= 0;
_T40->f1= vd;_T33= (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T40;}_T34= (void*)_T33;_T35= Cyc_Absyn_new_decl(_T34,0U);_T36= res;res= Cyc_Absyn_decl_stmt(_T35,_T36,0U);}}_T37= 
# 4608
_check_null(mydecls);mydecls= _T37->tl;goto _TL49D;_TL49C:
# 4612
 if(v==0)goto _TL49E;{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T3E=_cycalloc(sizeof(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct));_T3E->tag= 0;
_T3E->f1= v;_T38= (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T3E;}_T39= (void*)_T38;_T3A= Cyc_Absyn_new_decl(_T39,0U);_T3B= res;res= Cyc_Absyn_decl_stmt(_T3A,_T3B,0U);goto _TL49F;_TL49E: _TL49F: {struct Cyc_Absyn_Stmt*_T3E=res;_npop_handler(0);return _T3E;}}}}}}}}}}_pop_region();}
# 4619
static long Cyc_Toc_types_to_c_f1(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;int*_T1;unsigned _T2;struct _tuple9*_T3;struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct*_T4;struct _tuple9*_T5;void**_T6;struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct*_T7;void**_T8;struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T9;void**_TA;struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct*_TB;void**_TC;void**_TD;struct Cyc_Toc_TocContext*_TE;void**_TF;void*_T10;struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct*_T11;struct Cyc_Absyn_MallocInfo*_T12;struct Cyc_Absyn_MallocInfo*_T13;void**_T14;struct Cyc_Absyn_MallocInfo*_T15;void**_T16;struct Cyc_Toc_TocContext*_T17;struct Cyc_Absyn_MallocInfo*_T18;void**_T19;void*_T1A;_T0= e;{
void*_T1B=_T0->r;void*_T1C;_T1= (int*)_T1B;_T2= *_T1;switch(_T2){case 24:{struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct*_T1D=(struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct*)_T1B;_T3= _T1D->f1;{struct _tuple9 _T1E=*_T3;_T4= (struct Cyc_Absyn_CompoundLit_e_Absyn_Raw_exp_struct*)_T1B;_T5= _T4->f1;_T6= & _T5->f2;_T1C= (void**)_T6;}}{void**t=_T1C;_T1C= t;goto _LL4;}case 19:{struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct*_T1D=(struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct*)_T1B;_T7= (struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct*)_T1B;_T8= & _T7->f1;_T1C= (void**)_T8;}_LL4: {void**t=_T1C;_T1C= t;goto _LL6;}case 14:{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T1D=(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T1B;_T9= (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T1B;_TA= & _T9->f1;_T1C= (void**)_TA;}_LL6: {void**t=_T1C;_T1C= t;goto _LL8;}case 17:{struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct*_T1D=(struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct*)_T1B;_TB= (struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct*)_T1B;_TC= & _TB->f1;_T1C= (void**)_TC;}_LL8: {void**t=_T1C;_TD= t;_TE= ctxt;_TF= t;_T10= *_TF;
# 4628
({__typeof__(Cyc_Toc_typ_to_c(_TE,_T10))_T1D=Cyc_Toc_typ_to_c(_TE,_T10);*_TD= _T1D;});goto _LL0;}case 33:{struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct*_T1D=(struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct*)_T1B;_T11= (struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct*)_T1B;_T12= & _T11->f1;_T1C= (struct Cyc_Absyn_MallocInfo*)_T12;}{struct Cyc_Absyn_MallocInfo*m=(struct Cyc_Absyn_MallocInfo*)_T1C;_T13= m;_T14= _T13->elt_type;
# 4631
if(_T14==0)goto _TL4A1;_T15= m;{void**_T1D=_cycalloc(sizeof(void*));_T17= ctxt;_T18= m;_T19= _T18->elt_type;_T1A= *_T19;
({__typeof__(Cyc_Toc_typ_to_c(_T17,_T1A))_T1E=Cyc_Toc_typ_to_c(_T17,_T1A);*_T1D= _T1E;});_T16= (void**)_T1D;}_T15->elt_type= _T16;goto _TL4A2;_TL4A1: _TL4A2: goto _LL0;}default: goto _LL0;}_LL0:;}
# 4637
return 1;}
# 4639
static long Cyc_Toc_types_to_c_f2(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Absyn_Stmt*s){struct Cyc_Absyn_Stmt*_T0;int*_T1;unsigned _T2;struct Cyc_Absyn_Decl*_T3;int*_T4;unsigned _T5;struct Cyc_Absyn_Vardecl*_T6;struct Cyc_Toc_TocContext*_T7;struct Cyc_Absyn_Vardecl*_T8;void*_T9;struct Cyc_Absyn_Fndecl*_TA;struct Cyc_Toc_TocContext*_TB;struct Cyc_Absyn_Fndecl*_TC;struct Cyc_Absyn_FnInfo _TD;void*_TE;struct Cyc_Absyn_Fndecl*_TF;struct Cyc_Absyn_FnInfo _T10;struct Cyc_List_List*_T11;void*_T12;struct _tuple9*_T13;struct Cyc_Toc_TocContext*_T14;struct Cyc_List_List*_T15;void*_T16;struct _tuple9*_T17;struct _tuple9 _T18;void*_T19;struct Cyc_List_List*_T1A;struct Cyc_Absyn_Enumdecl*_T1B;struct Cyc_Core_Opt*_T1C;struct Cyc_Absyn_Enumdecl*_T1D;struct Cyc_Core_Opt*_T1E;void*_T1F;struct Cyc_List_List*_T20;void*_T21;struct Cyc_Absyn_Enumfield*_T22;struct Cyc_Absyn_Exp*_T23;struct Cyc_Toc_TocContext*_T24;struct Cyc_List_List*_T25;void*_T26;struct Cyc_Absyn_Enumfield*_T27;struct Cyc_Absyn_Exp*_T28;struct Cyc_List_List*_T29;struct Cyc_Absyn_Typedefdecl*_T2A;struct Cyc_Toc_TocContext*_T2B;struct Cyc_Absyn_Typedefdecl*_T2C;void*_T2D;void*_T2E;struct Cyc_Absyn_Stmt*_T2F;struct Cyc_Absyn_Skip_s_Absyn_Raw_stmt_struct*_T30;_T0= s;{
void*_T31=_T0->r;struct Cyc_Absyn_Decl*_T32;_T1= (int*)_T31;_T2= *_T1;switch(_T2){case 12:{struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*_T33=(struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*)_T31;_T32= _T33->f1;}{struct Cyc_Absyn_Decl*d=_T32;_T3= d;{
# 4642
void*_T33=_T3->r;struct Cyc_Absyn_Typedefdecl*_T34;struct Cyc_Absyn_Enumdecl*_T35;struct Cyc_Absyn_Aggrdecl*_T36;struct Cyc_Absyn_Fndecl*_T37;struct Cyc_Absyn_Vardecl*_T38;_T4= (int*)_T33;_T5= *_T4;switch(_T5){case 0:{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T39=(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T33;_T38= _T39->f1;}{struct Cyc_Absyn_Vardecl*vd=_T38;_T6= vd;_T7= ctxt;_T8= vd;_T9= _T8->type;
# 4644
({__typeof__(Cyc_Toc_typ_to_c(_T7,_T9))_T39=Cyc_Toc_typ_to_c(_T7,_T9);_T6->type= _T39;});goto _LL7;}case 1:{struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*_T39=(struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*)_T33;_T37= _T39->f1;}{struct Cyc_Absyn_Fndecl*fd=_T37;_TA= fd;_TB= ctxt;_TC= fd;_TD= _TC->i;_TE= _TD.ret_type;
# 4647
({__typeof__(Cyc_Toc_typ_to_c(_TB,_TE))_T39=Cyc_Toc_typ_to_c(_TB,_TE);_TA->i.ret_type= _T39;});_TF= fd;_T10= _TF->i;{
struct Cyc_List_List*args=_T10.args;_TL4A8: if(args!=0)goto _TL4A6;else{goto _TL4A7;}
_TL4A6: _T11= args;_T12= _T11->hd;_T13= (struct _tuple9*)_T12;_T14= ctxt;_T15= args;_T16= _T15->hd;_T17= (struct _tuple9*)_T16;_T18= *_T17;_T19= _T18.f2;({__typeof__(Cyc_Toc_typ_to_c(_T14,_T19))_T39=Cyc_Toc_typ_to_c(_T14,_T19);(*_T13).f2= _T39;});_T1A= args;
# 4648
args= _T1A->tl;goto _TL4A8;_TL4A7:;}goto _LL7;}case 5:{struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T39=(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*)_T33;_T36= _T39->f1;}{struct Cyc_Absyn_Aggrdecl*ad=_T36;
# 4652
Cyc_Toc_trans_aggrdecl(ctxt,ad);goto _LL7;}case 7:{struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*_T39=(struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*)_T33;_T35= _T39->f1;}{struct Cyc_Absyn_Enumdecl*ed=_T35;_T1B= ed;_T1C= _T1B->fields;
# 4655
if(_T1C==0)goto _TL4A9;_T1D= ed;_T1E= _T1D->fields;_T1F= _T1E->v;{
struct Cyc_List_List*fs=(struct Cyc_List_List*)_T1F;_TL4AE: if(fs!=0)goto _TL4AC;else{goto _TL4AD;}
_TL4AC: _T20= fs;_T21= _T20->hd;_T22= (struct Cyc_Absyn_Enumfield*)_T21;_T23= _T22->tag;if(_T23==0)goto _TL4AF;_T24= ctxt;_T25= fs;_T26= _T25->hd;_T27= (struct Cyc_Absyn_Enumfield*)_T26;_T28= _T27->tag;
Cyc_Toc_trans_exptypes(_T24,_T28);goto _TL4B0;_TL4AF: _TL4B0: _T29= fs;
# 4656
fs= _T29->tl;goto _TL4AE;_TL4AD:;}goto _TL4AA;_TL4A9: _TL4AA: goto _LL7;}case 8:{struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct*_T39=(struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct*)_T33;_T34= _T39->f1;}{struct Cyc_Absyn_Typedefdecl*td=_T34;_T2A= td;_T2B= ctxt;_T2C= td;_T2D= _T2C->defn;_T2E= 
# 4661
_check_null(_T2D);({__typeof__(Cyc_Toc_typ_to_c(_T2B,_T2E))_T39=Cyc_Toc_typ_to_c(_T2B,_T2E);_T2A->defn= _T39;});goto _LL7;}default: goto _LL7;}_LL7:;}goto _LL0;}case 11: _T2F= s;{struct Cyc_Absyn_Skip_s_Absyn_Raw_stmt_struct*_T33=_cycalloc(sizeof(struct Cyc_Absyn_Skip_s_Absyn_Raw_stmt_struct));
# 4669
_T33->tag= 0;_T30= (struct Cyc_Absyn_Skip_s_Absyn_Raw_stmt_struct*)_T33;}_T2F->r= (void*)_T30;goto _LL0;default: goto _LL0;}_LL0:;}
# 4674
return 1;}
# 4677
static void Cyc_Toc_trans_exptypes(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Absyn_Exp*e){void(*_T0)(long(*)(struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Exp*),long(*)(struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Stmt*),struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Exp*);void(*_T1)(long(*)(void*,struct Cyc_Absyn_Exp*),long(*)(void*,struct Cyc_Absyn_Stmt*),void*,struct Cyc_Absyn_Exp*);struct Cyc_Toc_TocContext*_T2;struct Cyc_Absyn_Exp*_T3;_T1= Cyc_Absyn_visit_exp;{void(*_T4)(long(*)(struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Exp*),long(*)(struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Stmt*),struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Exp*)=(void(*)(long(*)(struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Exp*),long(*)(struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Stmt*),struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Exp*))_T1;_T0= _T4;}_T2= ctxt;_T3= e;_T0(Cyc_Toc_types_to_c_f1,Cyc_Toc_types_to_c_f2,_T2,_T3);}
static void Cyc_Toc_trans_stmttypes(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Absyn_Stmt*s){void(*_T0)(long(*)(struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Exp*),long(*)(struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Stmt*),struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Stmt*);void(*_T1)(long(*)(void*,struct Cyc_Absyn_Exp*),long(*)(void*,struct Cyc_Absyn_Stmt*),void*,struct Cyc_Absyn_Stmt*);struct Cyc_Toc_TocContext*_T2;struct Cyc_Absyn_Stmt*_T3;_T1= Cyc_Absyn_visit_stmt;{void(*_T4)(long(*)(struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Exp*),long(*)(struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Stmt*),struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Stmt*)=(void(*)(long(*)(struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Exp*),long(*)(struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Stmt*),struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Stmt*))_T1;_T0= _T4;}_T2= ctxt;_T3= s;_T0(Cyc_Toc_types_to_c_f1,Cyc_Toc_types_to_c_f2,_T2,_T3);}
# 4681
static void Cyc_Toc_decls_to_c(struct Cyc_Toc_Env*nv,struct Cyc_List_List*ds,long cinclude){struct Cyc_Toc_Env*_T0;struct Cyc_Toc_TocContext*_T1;struct Cyc_List_List*_T2;void*_T3;struct Cyc_Absyn_Decl*_T4;int*_T5;unsigned _T6;struct Cyc_Absyn_Vardecl*_T7;struct Cyc_Absyn_Vardecl*_T8;enum Cyc_Absyn_Scope _T9;int _TA;struct _tuple1*_TB;struct _tuple1*_TC;struct _tuple1 _TD;struct Cyc_Absyn_Vardecl*_TE;struct Cyc_Absyn_Exp*_TF;struct Cyc_Absyn_Vardecl*_T10;enum Cyc_Absyn_Scope _T11;int _T12;struct Cyc_Absyn_Vardecl*_T13;long _T14;struct Cyc_Toc_TocContext*_T15;struct Cyc_Absyn_Vardecl*_T16;struct Cyc_Absyn_Exp*_T17;struct Cyc_Toc_Env*_T18;struct Cyc_Absyn_Vardecl*_T19;struct Cyc_Absyn_Exp*_T1A;struct Cyc_Absyn_Vardecl*_T1B;struct Cyc_Absyn_Vardecl*_T1C;struct Cyc_Absyn_Vardecl*_T1D;enum Cyc_Absyn_Scope _T1E;struct Cyc_Absyn_Vardecl*_T1F;struct Cyc_Toc_TocContext*_T20;struct Cyc_Absyn_Vardecl*_T21;void*_T22;struct Cyc_Toc_TocContext*_T23;struct Cyc_List_List*_T24;struct Cyc_Toc_TocContext*_T25;struct Cyc_Absyn_Fndecl*_T26;enum Cyc_Absyn_Scope _T27;int _T28;struct Cyc_Absyn_Fndecl*_T29;struct _tuple1*_T2A;struct Cyc_Absyn_Fndecl*_T2B;struct _tuple1*_T2C;struct _tuple1 _T2D;struct Cyc_Absyn_Fndecl*_T2E;struct Cyc_Toc_TocContext*_T2F;struct Cyc_List_List*_T30;struct Cyc_Toc_TocContext*_T31;struct Cyc_Warn_String_Warn_Warg_struct _T32;int(*_T33)(struct _fat_ptr ap);struct _fat_ptr _T34;struct Cyc_Warn_String_Warn_Warg_struct _T35;int(*_T36)(struct _fat_ptr ap);struct _fat_ptr _T37;struct Cyc_Absyn_Datatypedecl*_T38;long _T39;struct Cyc_Toc_TocContext*_T3A;struct Cyc_List_List*_T3B;struct Cyc_Toc_TocContext*_T3C;struct Cyc_Absyn_Typedefdecl*_T3D;struct Cyc_Absyn_Typedefdecl*_T3E;void*_T3F;struct Cyc_Absyn_Typedefdecl*_T40;struct Cyc_Toc_TocContext*_T41;struct Cyc_Absyn_Typedefdecl*_T42;void*_T43;struct Cyc_Absyn_Typedefdecl*_T44;int*_T45;int _T46;struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*_T47;struct Cyc_Absyn_TypeDecl*_T48;struct Cyc_Absyn_TypeDecl*_T49;void*_T4A;int*_T4B;int _T4C;struct Cyc_Absyn_TypeDecl*_T4D;void*_T4E;struct Cyc_Absyn_Decl*_T4F;struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*_T50;struct Cyc_Absyn_Decl*_T51;struct Cyc_Toc_TocContext*_T52;struct Cyc_List_List*_T53;struct Cyc_Toc_TocContext*_T54;struct Cyc_Absyn_Typedefdecl*_T55;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T56;struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct*_T57;struct Cyc_Absyn_Enumdecl*_T58;struct Cyc_Absyn_Typedefdecl*_T59;void*_T5A;struct Cyc_Absyn_Typedefdecl*_T5B;struct Cyc_Core_Opt*_T5C;struct Cyc_Core_Opt*_T5D;void*_T5E;struct Cyc_Absyn_Kind*_T5F;enum Cyc_Absyn_KindQual _T60;int _T61;long _T62;struct Cyc_Toc_TocContext*_T63;struct Cyc_List_List*_T64;struct Cyc_Toc_TocContext*_T65;struct Cyc_List_List*_T66;_T0= nv;{
struct Cyc_Toc_TocContext*ctxt=_T0->ctxt;
_TL4B4: if(ds!=0)goto _TL4B2;else{goto _TL4B3;}
_TL4B2: _T1= _check_null(ctxt);_T1->fresh_label_counter= 0;_T2= ds;_T3= _T2->hd;{
struct Cyc_Absyn_Decl*d=(struct Cyc_Absyn_Decl*)_T3;_T4= d;{
void*_T67=_T4->r;struct Cyc_List_List*_T68;struct Cyc_Absyn_Typedefdecl*_T69;struct Cyc_Absyn_Enumdecl*_T6A;struct Cyc_Absyn_Datatypedecl*_T6B;struct Cyc_Absyn_Aggrdecl*_T6C;struct Cyc_Absyn_Fndecl*_T6D;struct Cyc_Absyn_Vardecl*_T6E;_T5= (int*)_T67;_T6= *_T5;switch(_T6){case 0:{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T6F=(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T67;_T6E= _T6F->f1;}{struct Cyc_Absyn_Vardecl*vd=_T6E;_T7= vd;{
# 4688
struct _tuple1*c_name=_T7->name;_T8= vd;_T9= _T8->sc;_TA= (int)_T9;
# 4690
if(_TA!=4)goto _TL4B6;{struct _tuple1*_T6F=_cycalloc(sizeof(struct _tuple1));
({__typeof__(Cyc_Absyn_Abs_n(0,1))_T70=Cyc_Absyn_Abs_n(0,1);_T6F->f0= _T70;});_TC= c_name;_TD= *_TC;_T6F->f1= _TD.f1;_TB= (struct _tuple1*)_T6F;}c_name= _TB;goto _TL4B7;_TL4B6: _TL4B7: _TE= vd;_TF= _TE->initializer;
if(_TF==0)goto _TL4B8;_T10= vd;_T11= _T10->sc;_T12= (int)_T11;
if(_T12!=4)goto _TL4BA;_T13= vd;
_T13->sc= 2U;goto _TL4BB;_TL4BA: _TL4BB: _T14= cinclude;
if(!_T14)goto _TL4BC;_T15= ctxt;_T16= vd;_T17= _T16->initializer;
Cyc_Toc_trans_exptypes(_T15,_T17);goto _TL4BD;
# 4698
_TL4BC: _T18= nv;_T19= vd;_T1A= _T19->initializer;Cyc_Toc_exp_to_c(_T18,_T1A);_TL4BD: goto _TL4B9;_TL4B8: _TL4B9: _T1B= vd;
# 4700
_T1B->name= c_name;_T1C= vd;_T1D= vd;_T1E= _T1D->sc;
({__typeof__(Cyc_Toc_scope_to_c(_T1E))_T6F=Cyc_Toc_scope_to_c(_T1E);_T1C->sc= _T6F;});_T1F= vd;_T20= ctxt;_T21= vd;_T22= _T21->type;
({__typeof__(Cyc_Toc_trans_type(_T20,_T22))_T6F=Cyc_Toc_trans_type(_T20,_T22);_T1F->type= _T6F;});_T23= ctxt;{struct Cyc_List_List*_T6F=_cycalloc(sizeof(struct Cyc_List_List));
_T6F->hd= d;_T25= ctxt;_T6F->tl= _T25->result_decls;_T24= (struct Cyc_List_List*)_T6F;}_T23->result_decls= _T24;goto _LL0;}}case 1:{struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*_T6F=(struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*)_T67;_T6D= _T6F->f1;}{struct Cyc_Absyn_Fndecl*fd=_T6D;_T26= fd;_T27= _T26->sc;_T28= (int)_T27;
# 4707
if(_T28!=4)goto _TL4BE;_T29= fd;{struct _tuple1*_T6F=_cycalloc(sizeof(struct _tuple1));
# 4709
({__typeof__(Cyc_Absyn_Abs_n(0,1))_T70=Cyc_Absyn_Abs_n(0,1);_T6F->f0= _T70;});_T2B= fd;_T2C= _T2B->name;_T2D= *_T2C;_T6F->f1= _T2D.f1;_T2A= (struct _tuple1*)_T6F;}_T29->name= _T2A;_T2E= fd;
_T2E->sc= 2U;goto _TL4BF;_TL4BE: _TL4BF:
# 4712
 Cyc_Toc_fndecl_to_c(nv,fd,cinclude);_T2F= ctxt;{struct Cyc_List_List*_T6F=_cycalloc(sizeof(struct Cyc_List_List));
_T6F->hd= d;_T31= ctxt;_T6F->tl= _T31->result_decls;_T30= (struct Cyc_List_List*)_T6F;}_T2F->result_decls= _T30;goto _LL0;}case 2: goto _LL8;case 3: _LL8:{struct Cyc_Warn_String_Warn_Warg_struct _T6F;_T6F.tag= 0;
# 4717
({__typeof__(_tag_fat("letdecl at toplevel",sizeof(char),20U))_T70=_tag_fat("letdecl at toplevel",sizeof(char),20U);_T6F.f1= _T70;});_T32= _T6F;}{struct Cyc_Warn_String_Warn_Warg_struct _T6F=_T32;void*_T70[1];_T70[0]= & _T6F;{int(*_T71)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T33= _T71;}_T34= _tag_fat(_T70,sizeof(void*),1);_T33(_T34);}case 4:{struct Cyc_Warn_String_Warn_Warg_struct _T6F;_T6F.tag= 0;
# 4719
({__typeof__(_tag_fat("region decl at toplevel",sizeof(char),24U))_T70=_tag_fat("region decl at toplevel",sizeof(char),24U);_T6F.f1= _T70;});_T35= _T6F;}{struct Cyc_Warn_String_Warn_Warg_struct _T6F=_T35;void*_T70[1];_T70[0]= & _T6F;{int(*_T71)(struct _fat_ptr ap)=(int(*)(struct _fat_ptr ap))Cyc_Toc_toc_impos;_T36= _T71;}_T37= _tag_fat(_T70,sizeof(void*),1);_T36(_T37);}case 5:{struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*_T6F=(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct*)_T67;_T6C= _T6F->f1;}{struct Cyc_Absyn_Aggrdecl*sd=_T6C;
# 4721
Cyc_Toc_trans_aggrdecl(ctxt,sd);goto _LL0;}case 6:{struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct*_T6F=(struct Cyc_Absyn_Datatype_d_Absyn_Raw_decl_struct*)_T67;_T6B= _T6F->f1;}{struct Cyc_Absyn_Datatypedecl*tud=_T6B;_T38= tud;_T39= _T38->is_extensible;
# 4724
if(!_T39)goto _TL4C0;Cyc_Toc_trans_xdatatypedecl(ctxt,tud);goto _TL4C1;_TL4C0: Cyc_Toc_trans_datatypedecl(ctxt,tud);_TL4C1: goto _LL0;}case 7:{struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*_T6F=(struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*)_T67;_T6A= _T6F->f1;}{struct Cyc_Absyn_Enumdecl*ed=_T6A;
# 4727
Cyc_Toc_trans_enumdecl(ctxt,ed);_T3A= ctxt;{struct Cyc_List_List*_T6F=_cycalloc(sizeof(struct Cyc_List_List));
_T6F->hd= d;_T3C= ctxt;_T6F->tl= _T3C->result_decls;_T3B= (struct Cyc_List_List*)_T6F;}_T3A->result_decls= _T3B;goto _LL0;}case 8:{struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct*_T6F=(struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct*)_T67;_T69= _T6F->f1;}{struct Cyc_Absyn_Typedefdecl*td=_T69;_T3D= td;
# 4731
_T3D->tvs= 0;_T3E= td;_T3F= _T3E->defn;
if(_T3F==0)goto _TL4C2;_T40= td;_T41= ctxt;_T42= td;_T43= _T42->defn;
({__typeof__(Cyc_Toc_trans_type(_T41,_T43))_T6F=Cyc_Toc_trans_type(_T41,_T43);_T40->defn= _T6F;});_T44= td;{
# 4736
void*_T6F=_T44->defn;unsigned _T70;struct Cyc_Absyn_Enumdecl*_T71;if(_T6F==0)goto _TL4C4;_T45= (int*)_T6F;_T46= *_T45;if(_T46!=10)goto _TL4C6;_T47= (struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*)_T6F;_T48= _T47->f1;_T49= (struct Cyc_Absyn_TypeDecl*)_T48;_T4A= _T49->r;_T4B= (int*)_T4A;_T4C= *_T4B;if(_T4C!=1)goto _TL4C8;{struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*_T72=(struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*)_T6F;_T4D= _T72->f1;{struct Cyc_Absyn_TypeDecl _T73=*_T4D;_T4E= _T73.r;{struct Cyc_Absyn_Enum_td_Absyn_Raw_typedecl_struct*_T74=(struct Cyc_Absyn_Enum_td_Absyn_Raw_typedecl_struct*)_T4E;_T71= _T74->f1;}_T70= _T73.loc;}}{struct Cyc_Absyn_Enumdecl*ed2=_T71;unsigned loc=_T70;
# 4738
struct Cyc_Absyn_Decl*ed;ed= _cycalloc(sizeof(struct Cyc_Absyn_Decl));_T4F= ed;{struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*_T72=_cycalloc(sizeof(struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct));_T72->tag= 7;_T72->f1= ed2;_T50= (struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct*)_T72;}_T4F->r= (void*)_T50;_T51= ed;_T51->loc= loc;_T52= ctxt;{struct Cyc_List_List*_T72=_cycalloc(sizeof(struct Cyc_List_List));
_T72->hd= ed;_T54= ctxt;_T72->tl= _T54->result_decls;_T53= (struct Cyc_List_List*)_T72;}_T52->result_decls= _T53;_T55= td;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T72=_cycalloc(sizeof(struct Cyc_Absyn_AppType_Absyn_Type_struct));_T72->tag= 0;{struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct*_T73=_cycalloc(sizeof(struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct));_T73->tag= 19;_T58= ed2;
_T73->f1= _T58->name;_T73->f2= ed2;_T57= (struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct*)_T73;}_T72->f1= (void*)_T57;_T72->f2= 0;_T56= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T72;}_T55->defn= (void*)_T56;goto _LL23;}_TL4C8: goto _LL26;_TL4C6: goto _LL26;_TL4C4: _LL26: goto _LL23;_LL23:;}goto _TL4C3;
# 4746
_TL4C2: _T59= td;_T5B= td;_T5C= _T5B->kind;_T5D= _check_null(_T5C);_T5E= _T5D->v;_T5F= (struct Cyc_Absyn_Kind*)_T5E;_T60= _T5F->kind;_T61= (int)_T60;if(_T61!=2)goto _TL4CA;_T5A= Cyc_Toc_void_star_type(ctxt);goto _TL4CB;_TL4CA: _T5A= Cyc_Absyn_void_type;_TL4CB: _T59->defn= _T5A;_TL4C3: _T62= Cyc_Flags_noexpand_r;
# 4750
if(!_T62)goto _TL4CC;_T63= ctxt;{struct Cyc_List_List*_T6F=_cycalloc(sizeof(struct Cyc_List_List));
_T6F->hd= d;_T65= ctxt;_T6F->tl= _T65->result_decls;_T64= (struct Cyc_List_List*)_T6F;}_T63->result_decls= _T64;goto _TL4CD;_TL4CC: _TL4CD: goto _LL0;}case 13: goto _LL16;case 14: _LL16: goto _LL18;case 15: _LL18: goto _LL1A;case 16: _LL1A: goto _LL0;case 9:{struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct*_T6F=(struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct*)_T67;_T68= _T6F->f2;}{struct Cyc_List_List*ds2=_T68;_T68= ds2;goto _LL1E;}case 10:{struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct*_T6F=(struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct*)_T67;_T68= _T6F->f2;}_LL1E: {struct Cyc_List_List*ds2=_T68;_T68= ds2;goto _LL20;}case 11:{struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct*_T6F=(struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct*)_T67;_T68= _T6F->f1;}_LL20: {struct Cyc_List_List*ds2=_T68;
# 4763
Cyc_Toc_decls_to_c(nv,ds2,cinclude);goto _LL0;}default:{struct Cyc_Absyn_ExternCinclude_d_Absyn_Raw_decl_struct*_T6F=(struct Cyc_Absyn_ExternCinclude_d_Absyn_Raw_decl_struct*)_T67;_T68= _T6F->f1;}{struct Cyc_List_List*ds2=_T68;
# 4766
Cyc_Toc_decls_to_c(nv,ds2,1);goto _LL0;}}_LL0:;}}_T66= ds;
# 4683
ds= _T66->tl;goto _TL4B4;_TL4B3:;}}
# 4774
struct Cyc_Toc_TocContext*Cyc_Toc_Toc_Ctx_create (void){struct Cyc_Toc_TocContext*_T0;struct Cyc_Toc_TocContext*_T1;struct Cyc_Toc_TocContext*_T2;struct Cyc_Toc_TocContext*_T3;struct Cyc_Toc_TocContext*_T4;struct Cyc_Toc_TocContext*_T5;struct Cyc_Toc_TocContext*_T6;struct Cyc_Toc_TocContext*_T7;struct Cyc_Toc_TocContext*_T8;struct Cyc_Toc_TocContext*_T9;struct Cyc_Toc_TocContext*_TA;struct Cyc_Toc_TocContext*_TB;struct Cyc_Toc_TocContext*_TC;struct Cyc_Toc_TocContext*_TD;struct Cyc_Toc_TocContext*_TE;struct Cyc_Core_DynamicRegion*_TF;struct Cyc_Toc_TocContext*_T10;struct Cyc_Toc_TocStateWrap*_T11;unsigned _T12;struct Cyc_Toc_TocContext*_T13;struct _fat_ptr**_T14;struct _fat_ptr**_T15;unsigned _T16;struct _fat_ptr*_T17;struct _fat_ptr*_T18;struct _fat_ptr*_T19;struct _fat_ptr*_T1A;struct _fat_ptr*_T1B;struct _fat_ptr*_T1C;struct _fat_ptr*_T1D;struct _fat_ptr*_T1E;struct _fat_ptr*_T1F;struct _fat_ptr*_T20;struct _fat_ptr*_T21;struct _fat_ptr*_T22;struct _fat_ptr*_T23;struct _fat_ptr*_T24;struct _fat_ptr*_T25;struct _fat_ptr*_T26;struct _fat_ptr*_T27;struct _fat_ptr*_T28;struct _fat_ptr*_T29;struct _fat_ptr*_T2A;struct _fat_ptr*_T2B;struct _fat_ptr*_T2C;struct _fat_ptr*_T2D;struct _fat_ptr*_T2E;struct _fat_ptr*_T2F;struct _fat_ptr*_T30;struct _fat_ptr*_T31;struct _fat_ptr*_T32;struct _fat_ptr*_T33;struct _fat_ptr*_T34;struct _fat_ptr*_T35;struct _fat_ptr*_T36;struct _fat_ptr*_T37;struct _fat_ptr*_T38;struct _fat_ptr*_T39;struct _fat_ptr*_T3A;struct _fat_ptr*_T3B;struct _fat_ptr*_T3C;struct _fat_ptr*_T3D;struct _fat_ptr*_T3E;struct _fat_ptr*_T3F;struct _fat_ptr*_T40;struct _fat_ptr*_T41;struct _fat_ptr*_T42;struct _fat_ptr*_T43;struct Cyc_Toc_TocContext*_T44;
struct Cyc_Toc_TocContext*ctxt;ctxt= _cycalloc(sizeof(struct Cyc_Toc_TocContext));_T0= ctxt;
_T0->result_decls= 0;_T1= ctxt;
_T1->pop_tables= 0;_T2= ctxt;
_T2->fn_pop_table= 0;_T3= ctxt;
_T3->tuple_type_counter= 0;_T4= ctxt;
_T4->temp_var_counter= 0;_T5= ctxt;
_T5->fresh_label_counter= 0;_T6= ctxt;
_T6->toc_state= 0;_T7= ctxt;
_T7->tagged_union_cache= 0;_T8= ctxt;
_T8->void_star_type_cache= 0;_T9= ctxt;
_T9->fat_ptr_type_cache= 0;_TA= ctxt;
_TA->rgn_type_cache= 0;_TB= ctxt;
_TB->aqualt_type_cache= 0;_TC= ctxt;
_TC->aliasable_qual_exp_cache= 0;_TD= ctxt;
_TD->get_exn_thrown_exp_cache= 0;_TE= ctxt;
({__typeof__(_tag_fat(0,0,0))_T45=_tag_fat(0,0,0);_TE->globals= _T45;});{
# 4794
struct Cyc_Core_NewDynamicRegion _T45=Cyc_Core__new_rckey(0U,"internal-error","internal-error",0);struct Cyc_Core_DynamicRegion*_T46;_T46= _T45.key;{struct Cyc_Core_DynamicRegion*dyn=_T46;
struct Cyc_Toc_TocState*ts;_TF= dyn;{struct _RegionHandle*h=& _TF->h;
# 4798
ts= Cyc_Toc_empty_toc_state(h);}_T10= ctxt;_T12= Cyc_Core_unique_qual;{struct Cyc_Toc_TocStateWrap*_T47=_aqual_malloc(_T12,sizeof(struct Cyc_Toc_TocStateWrap));
# 4800
_T47->dyn= dyn;_T47->state= ts;_T11= (struct Cyc_Toc_TocStateWrap*)_T47;}_T10->toc_state= _T11;{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__throw_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc_setjmp_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__push_handler_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__pop_handler_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__exn_thrown_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__npop_handler_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__check_null_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__check_known_subscript_null_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__check_known_subscript_notnull_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__check_fat_subscript_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__fat_ptr_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__tag_fat_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__untag_fat_ptr_check_bound_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__untag_fat_ptr_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__check_fat_at_base_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__get_fat_size_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__fat_ptr_decrease_size_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__get_zero_arr_size_char_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__get_zero_arr_size_other_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__fat_ptr_plus_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__zero_arr_plus_char_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__zero_arr_plus_other_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__fat_ptr_inplace_plus_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__zero_arr_inplace_plus_char_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__zero_arr_inplace_plus_other_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__fat_ptr_inplace_plus_post_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__zero_arr_inplace_plus_post_char_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__zero_arr_inplace_plus_post_other_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__cycalloc_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__cyccalloc_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__cycalloc_atomic_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__cyccalloc_atomic_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__region_malloc_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__region_calloc_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__region_vmalloc_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__aqual_malloc_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__aqual_calloc_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__fast_region_malloc_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__check_times_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__new_region_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__push_region_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__pop_region_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__throw_arraybounds_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__throw_match_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__rethrow_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}{struct _union_Nmspace_C_n*_T47=& Cyc_Toc__throw_assert_pr.f0.C_n;_T47->tag= 3;_T47->val= 0;}_T13= ctxt;{unsigned _T47=45;_T16= _check_times(_T47,sizeof(struct _fat_ptr*));{struct _fat_ptr**_T48=_cycalloc(_T16);_T17= & Cyc_Toc__throw_str;
# 4849
_T48[0]= (struct _fat_ptr*)_T17;_T18= & Cyc_Toc_setjmp_str;
_T48[1]= (struct _fat_ptr*)_T18;_T19= & Cyc_Toc__push_handler_str;
_T48[2]= (struct _fat_ptr*)_T19;_T1A= & Cyc_Toc__pop_handler_str;
_T48[3]= (struct _fat_ptr*)_T1A;_T1B= & Cyc_Toc__exn_thrown_str;
_T48[4]= (struct _fat_ptr*)_T1B;_T1C= & Cyc_Toc__npop_handler_str;
_T48[5]= (struct _fat_ptr*)_T1C;_T1D= & Cyc_Toc__check_null_str;
_T48[6]= (struct _fat_ptr*)_T1D;_T1E= & Cyc_Toc__check_known_subscript_null_str;
_T48[7]= (struct _fat_ptr*)_T1E;_T1F= & Cyc_Toc__check_known_subscript_notnull_str;
_T48[8]= (struct _fat_ptr*)_T1F;_T20= & Cyc_Toc__check_fat_subscript_str;
_T48[9]= (struct _fat_ptr*)_T20;_T21= & Cyc_Toc__tag_fat_str;
_T48[10]= (struct _fat_ptr*)_T21;_T22= & Cyc_Toc__untag_fat_ptr_check_bound_str;
_T48[11]= (struct _fat_ptr*)_T22;_T23= & Cyc_Toc__untag_fat_ptr_str;
_T48[12]= (struct _fat_ptr*)_T23;_T24= & Cyc_Toc__check_fat_at_base_str;
_T48[13]= (struct _fat_ptr*)_T24;_T25= & Cyc_Toc__get_fat_size_str;
_T48[14]= (struct _fat_ptr*)_T25;_T26= & Cyc_Toc__get_zero_arr_size_char_str;
_T48[15]= (struct _fat_ptr*)_T26;_T27= & Cyc_Toc__get_zero_arr_size_other_str;
_T48[16]= (struct _fat_ptr*)_T27;_T28= & Cyc_Toc__fat_ptr_plus_str;
_T48[17]= (struct _fat_ptr*)_T28;_T29= & Cyc_Toc__zero_arr_plus_char_str;
_T48[18]= (struct _fat_ptr*)_T29;_T2A= & Cyc_Toc__zero_arr_plus_other_str;
_T48[19]= (struct _fat_ptr*)_T2A;_T2B= & Cyc_Toc__fat_ptr_inplace_plus_str;
_T48[20]= (struct _fat_ptr*)_T2B;_T2C= & Cyc_Toc__zero_arr_inplace_plus_char_str;
_T48[21]= (struct _fat_ptr*)_T2C;_T2D= & Cyc_Toc__zero_arr_inplace_plus_other_str;
_T48[22]= (struct _fat_ptr*)_T2D;_T2E= & Cyc_Toc__fat_ptr_inplace_plus_post_str;
_T48[23]= (struct _fat_ptr*)_T2E;_T2F= & Cyc_Toc__zero_arr_inplace_plus_post_char_str;
_T48[24]= (struct _fat_ptr*)_T2F;_T30= & Cyc_Toc__zero_arr_inplace_plus_post_other_str;
_T48[25]= (struct _fat_ptr*)_T30;_T31= & Cyc_Toc__cycalloc_str;
_T48[26]= (struct _fat_ptr*)_T31;_T32= & Cyc_Toc__cyccalloc_str;
_T48[27]= (struct _fat_ptr*)_T32;_T33= & Cyc_Toc__cycalloc_atomic_str;
_T48[28]= (struct _fat_ptr*)_T33;_T34= & Cyc_Toc__cyccalloc_atomic_str;
_T48[29]= (struct _fat_ptr*)_T34;_T35= & Cyc_Toc__region_malloc_str;
_T48[30]= (struct _fat_ptr*)_T35;_T36= & Cyc_Toc__region_calloc_str;
_T48[31]= (struct _fat_ptr*)_T36;_T37= & Cyc_Toc__check_times_str;
_T48[32]= (struct _fat_ptr*)_T37;_T38= & Cyc_Toc__new_region_str;
_T48[33]= (struct _fat_ptr*)_T38;_T39= & Cyc_Toc__push_region_str;
_T48[34]= (struct _fat_ptr*)_T39;_T3A= & Cyc_Toc__pop_region_str;
_T48[35]= (struct _fat_ptr*)_T3A;_T3B= & Cyc_Toc__throw_arraybounds_str;
_T48[36]= (struct _fat_ptr*)_T3B;_T3C= & Cyc_Toc__fat_ptr_decrease_size_str;
_T48[37]= (struct _fat_ptr*)_T3C;_T3D= & Cyc_Toc__throw_match_str;
_T48[38]= (struct _fat_ptr*)_T3D;_T3E= & Cyc_Toc__fast_region_malloc_str;
_T48[39]= (struct _fat_ptr*)_T3E;_T3F= & Cyc_Toc__region_vmalloc_str;
_T48[40]= (struct _fat_ptr*)_T3F;_T40= & Cyc_Toc__aqual_malloc_str;
_T48[41]= (struct _fat_ptr*)_T40;_T41= & Cyc_Toc__aqual_calloc_str;
_T48[42]= (struct _fat_ptr*)_T41;_T42= & Cyc_Toc__throw_assert_str;
_T48[43]= (struct _fat_ptr*)_T42;_T43= & Cyc_Toc__rethrow_str;
_T48[44]= (struct _fat_ptr*)_T43;_T15= (struct _fat_ptr**)_T48;}_T14= _T15;}
# 4849
({__typeof__(_tag_fat(_T14,sizeof(struct _fat_ptr*),45U))_T47=_tag_fat(_T14,sizeof(struct _fat_ptr*),45U);_T13->globals= _T47;});_T44= ctxt;
# 4894
return _T44;}}}
# 4897
void Cyc_Toc_Toc_Ctx_destroy(struct Cyc_Toc_TocContext*ctxt){struct Cyc_Toc_TocContext*_T0;struct Cyc_Toc_TocContext*_T1;struct Cyc_Toc_TocStateWrap*_T2;struct Cyc_Core_DynamicRegion*_T3;struct Cyc_Toc_TocState*_T4;void(*_T5)(struct Cyc_Toc_TocStateWrap*);void(*_T6)(void*);
struct Cyc_Toc_TocStateWrap*ts=0;{
struct Cyc_Toc_TocStateWrap*_T7=ts;_T0= ctxt;{struct Cyc_Toc_TocStateWrap*_T8=_T0->toc_state;ts= _T8;_T1= ctxt;_T1->toc_state= _T7;}}_T2= 
_check_null(ts);{struct Cyc_Toc_TocStateWrap _T7=*_T2;struct Cyc_Toc_TocState*_T8;struct Cyc_Core_DynamicRegion*_T9;_T9= _T7.dyn;_T8= _T7.state;{struct Cyc_Core_DynamicRegion*dyn=_T9;struct Cyc_Toc_TocState*s=_T8;_T3= dyn;{struct _RegionHandle*h=& _T3->h;_T4= s;{
# 4904
struct Cyc_Toc_TocState _TA=*_T4;struct Cyc_Xarray_Xarray*_TB;_TB= _TA.temp_labels;{struct Cyc_Xarray_Xarray*tls=_TB;
Cyc_Xarray_reuse(tls);}}}
# 4909
Cyc_Core_free_rckey(dyn);_T6= Cyc_Core_ufree;{
void(*_TA)(struct Cyc_Toc_TocStateWrap*)=(void(*)(struct Cyc_Toc_TocStateWrap*))_T6;_T5= _TA;}_T5(ts);}}}
# 4916
struct Cyc_List_List*Cyc_Toc_toc(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Hashtable_Table*pop_tables,struct Cyc_List_List*ds){struct Cyc_Toc_TocContext*_T0;struct Cyc_Toc_TocContext*_T1;struct Cyc_Hashtable_Table**_T2;struct Cyc_Toc_TocContext*_T3;struct Cyc_Toc_Env*_T4;struct Cyc_List_List*_T5;struct Cyc_Toc_TocContext*_T6;struct Cyc_List_List*_T7;_T0= 
_check_null(ctxt);_T0->result_decls= 0;_T1= ctxt;{struct Cyc_Hashtable_Table**_T8=_cycalloc(sizeof(struct Cyc_Hashtable_Table*));
*_T8= pop_tables;_T2= (struct Cyc_Hashtable_Table**)_T8;}_T1->pop_tables= _T2;_T3= ctxt;
_T3->fn_pop_table= 0;{struct _RegionHandle _T8=_new_region(0U,"start");struct _RegionHandle*start=& _T8;_push_region(start);_T4= 
# 4922
Cyc_Toc_empty_env(start,ctxt);_T5= ds;Cyc_Toc_decls_to_c(_T4,_T5,0);_T6= ctxt;_T7= _T6->result_decls;{struct Cyc_List_List*_T9=
Cyc_List_imp_rev(_T7);_npop_handler(0);return _T9;}_pop_region();}}
