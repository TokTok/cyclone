#include <cyc_include.h>
 struct Cyc_Core_Opt{void*v;};struct Cyc_Core_DynamicRegion;struct Cyc_List_List{void*hd;struct Cyc_List_List*tl;};
# 179 "./cyclone/library/std/list.h"
extern struct Cyc_List_List*Cyc_List_imp_rev(struct Cyc_List_List*);struct Cyc_AssnDef_ExistAssnFn;struct _union_Nmspace_Abs_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_Rel_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_C_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_Loc_n{int tag;int val;};union Cyc_Absyn_Nmspace{struct _union_Nmspace_Abs_n Abs_n;struct _union_Nmspace_Rel_n Rel_n;struct _union_Nmspace_C_n C_n;struct _union_Nmspace_Loc_n Loc_n;};struct _tuple0{union Cyc_Absyn_Nmspace f0;struct _fat_ptr*f1;};
# 148 "cyclone/library/compiler/absyn.h"
enum Cyc_Absyn_Scope{Cyc_Absyn_Static =0U,Cyc_Absyn_Abstract =1U,Cyc_Absyn_Public =2U,Cyc_Absyn_Extern =3U,Cyc_Absyn_ExternC =4U,Cyc_Absyn_Register =5U,Cyc_Absyn_Noreturn =6U};struct Cyc_Absyn_Tqual{long print_const: 1;long q_volatile: 1;long q_restrict: 1;long real_const: 1;unsigned loc;};
# 180
enum Cyc_Absyn_Sign{Cyc_Absyn_Signed =0U,Cyc_Absyn_Unsigned =1U,Cyc_Absyn_None =2U};
# 186
enum Cyc_Absyn_AggrKind{Cyc_Absyn_StructA =0U,Cyc_Absyn_UnionA =1U};struct Cyc_Absyn_VarargInfo{struct _fat_ptr*name;struct Cyc_Absyn_Tqual tq;void*type;long inject;};struct Cyc_Absyn_FnInfo{struct Cyc_List_List*tvars;void*effect;struct Cyc_Absyn_Tqual ret_tqual;void*ret_type;struct Cyc_List_List*args;long c_varargs;struct Cyc_Absyn_VarargInfo*cyc_varargs;struct Cyc_List_List*qual_bnd;struct Cyc_List_List*attributes;struct Cyc_Absyn_Exp*checks_clause;struct Cyc_AssnDef_ExistAssnFn*checks_assn;struct Cyc_Absyn_Exp*requires_clause;struct Cyc_AssnDef_ExistAssnFn*requires_assn;struct Cyc_Absyn_Exp*ensures_clause;struct Cyc_AssnDef_ExistAssnFn*ensures_assn;struct Cyc_Absyn_Exp*throws_clause;struct Cyc_AssnDef_ExistAssnFn*throws_assn;struct Cyc_Absyn_Vardecl*return_value;struct Cyc_List_List*arg_vardecls;struct Cyc_List_List*effconstr;};struct Cyc_Absyn_ArrayInfo{void*elt_type;struct Cyc_Absyn_Tqual tq;struct Cyc_Absyn_Exp*num_elts;void*zero_term;unsigned zt_loc;};struct Cyc_Absyn_ArrayType_Absyn_Type_struct{int tag;struct Cyc_Absyn_ArrayInfo f1;};struct _union_Cnst_Null_c{int tag;int val;};struct _tuple3{enum Cyc_Absyn_Sign f0;char f1;};struct _union_Cnst_Char_c{int tag;struct _tuple3 val;};struct _union_Cnst_Wchar_c{int tag;struct _fat_ptr val;};struct _tuple4{enum Cyc_Absyn_Sign f0;short f1;};struct _union_Cnst_Short_c{int tag;struct _tuple4 val;};struct _tuple5{enum Cyc_Absyn_Sign f0;int f1;};struct _union_Cnst_Int_c{int tag;struct _tuple5 val;};struct _tuple6{enum Cyc_Absyn_Sign f0;long long f1;};struct _union_Cnst_LongLong_c{int tag;struct _tuple6 val;};struct _union_Cnst_Int128_c{int tag;struct _tuple6 val;};struct _tuple7{struct _fat_ptr f0;int f1;};struct _union_Cnst_Float_c{int tag;struct _tuple7 val;};struct _union_Cnst_String_c{int tag;struct _fat_ptr val;};struct _union_Cnst_Wstring_c{int tag;struct _fat_ptr val;};union Cyc_Absyn_Cnst{struct _union_Cnst_Null_c Null_c;struct _union_Cnst_Char_c Char_c;struct _union_Cnst_Wchar_c Wchar_c;struct _union_Cnst_Short_c Short_c;struct _union_Cnst_Int_c Int_c;struct _union_Cnst_LongLong_c LongLong_c;struct _union_Cnst_Int128_c Int128_c;struct _union_Cnst_Float_c Float_c;struct _union_Cnst_String_c String_c;struct _union_Cnst_Wstring_c Wstring_c;};
# 600 "cyclone/library/compiler/absyn.h"
enum Cyc_Absyn_Primop{Cyc_Absyn_Plus =0U,Cyc_Absyn_Times =1U,Cyc_Absyn_Minus =2U,Cyc_Absyn_Div =3U,Cyc_Absyn_Mod =4U,Cyc_Absyn_Eq =5U,Cyc_Absyn_Neq =6U,Cyc_Absyn_Gt =7U,Cyc_Absyn_Lt =8U,Cyc_Absyn_Gte =9U,Cyc_Absyn_Lte =10U,Cyc_Absyn_Not =11U,Cyc_Absyn_Bitnot =12U,Cyc_Absyn_Bitand =13U,Cyc_Absyn_Bitor =14U,Cyc_Absyn_Bitxor =15U,Cyc_Absyn_Bitlshift =16U,Cyc_Absyn_Bitlrshift =17U,Cyc_Absyn_Numelts =18U,Cyc_Absyn_Tagof =19U,Cyc_Absyn_UDiv =20U,Cyc_Absyn_UMod =21U,Cyc_Absyn_UGt =22U,Cyc_Absyn_ULt =23U,Cyc_Absyn_UGte =24U,Cyc_Absyn_ULte =25U};struct Cyc_Absyn_PrimopOpt{enum Cyc_Absyn_Primop v;};
# 635
enum Cyc_Absyn_Incrementor{Cyc_Absyn_PreInc =0U,Cyc_Absyn_PostInc =1U,Cyc_Absyn_PreDec =2U,Cyc_Absyn_PostDec =3U};struct Cyc_Absyn_VarargCallInfo{int num_varargs;struct Cyc_List_List*injectors;struct Cyc_Absyn_VarargInfo*vai;};
# 660
enum Cyc_Absyn_Coercion{Cyc_Absyn_Unknown_coercion =0U,Cyc_Absyn_No_coercion =1U,Cyc_Absyn_Null_to_NonNull =2U,Cyc_Absyn_Subset_coercion =3U,Cyc_Absyn_Other_coercion =4U};struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct{int tag;union Cyc_Absyn_Cnst f1;};struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct{int tag;enum Cyc_Absyn_Primop f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_PrimopOpt*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;enum Cyc_Absyn_Incrementor f2;};struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_List_List*f2;struct Cyc_Absyn_VarargCallInfo*f3;long f4;};struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct{int tag;void*f1;struct Cyc_Absyn_Exp*f2;long f3;enum Cyc_Absyn_Coercion f4;};struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;struct Cyc_Absyn_Exp*f3;};struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _fat_ptr*f2;long f3;long f4;};struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct _fat_ptr*f2;long f3;long f4;};struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;struct Cyc_Absyn_Exp*f2;};struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct{int tag;struct Cyc_List_List*f1;};struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Vardecl*f1;struct Cyc_Absyn_Exp*f2;struct Cyc_Absyn_Exp*f3;long f4;};struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Exp*f1;void*f2;long f3;};struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct{int tag;struct _tuple0*f1;struct Cyc_List_List*f2;struct Cyc_List_List*f3;struct Cyc_Absyn_Aggrdecl*f4;};struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct{int tag;struct Cyc_Absyn_Stmt*f1;};struct Cyc_Absyn_Exp{void*topt;void*r;unsigned loc;void*annot;};struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct{int tag;struct Cyc_Absyn_Decl*f1;struct Cyc_Absyn_Stmt*f2;};struct Cyc_Absyn_Stmt{void*r;unsigned loc;void*annot;};struct Cyc_Absyn_Local_b_Absyn_Binding_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};struct Cyc_Absyn_Vardecl{enum Cyc_Absyn_Scope sc;struct _tuple0*name;unsigned varloc;struct Cyc_Absyn_Tqual tq;void*type;struct Cyc_Absyn_Exp*initializer;void*rgn;struct Cyc_List_List*attributes;long escapes;long is_proto;struct Cyc_Absyn_Exp*rename;};struct Cyc_Absyn_Fndecl{enum Cyc_Absyn_Scope sc;long is_inline;struct _tuple0*name;struct Cyc_Absyn_Stmt*body;struct Cyc_Absyn_FnInfo i;void*cached_type;struct Cyc_Core_Opt*param_vardecls;struct Cyc_Absyn_Vardecl*fn_vardecl;enum Cyc_Absyn_Scope orig_scope;long escapes;};struct Cyc_Absyn_AggrdeclImpl{struct Cyc_List_List*exist_vars;struct Cyc_List_List*qual_bnd;struct Cyc_List_List*fields;long tagged;struct Cyc_List_List*effconstr;};struct Cyc_Absyn_Aggrdecl{enum Cyc_Absyn_AggrKind kind;enum Cyc_Absyn_Scope sc;struct _tuple0*name;struct Cyc_List_List*tvs;struct Cyc_Absyn_AggrdeclImpl*impl;struct Cyc_List_List*attributes;long expected_mem_kind;};struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Vardecl*f1;};struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct{int tag;struct Cyc_Absyn_Fndecl*f1;};struct Cyc_Absyn_Decl{void*r;unsigned loc;};
# 1070
void*Cyc_Absyn_compress(void*);
# 1088
extern void*Cyc_Absyn_char_type;extern void*Cyc_Absyn_uint_type;
# 1090
extern void*Cyc_Absyn_sint_type;
# 1151
void*Cyc_Absyn_cstar_type(void*,struct Cyc_Absyn_Tqual);
# 1156
void*Cyc_Absyn_strctq(struct _tuple0*);
void*Cyc_Absyn_unionq_type(struct _tuple0*);
# 1191
struct Cyc_Absyn_Exp*Cyc_Absyn_signed_int_exp(int,unsigned);
# 1193
struct Cyc_Absyn_Exp*Cyc_Absyn_char_exp(char,unsigned);
# 1198
struct Cyc_Absyn_Exp*Cyc_Absyn_var_exp(struct _tuple0*,unsigned);
struct Cyc_Absyn_Exp*Cyc_Absyn_varb_exp(void*,unsigned);
# 1214
struct Cyc_Absyn_Exp*Cyc_Absyn_lt_exp(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*,unsigned);
# 1222
struct Cyc_Absyn_Exp*Cyc_Absyn_assign_exp(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*,unsigned);
struct Cyc_Absyn_Exp*Cyc_Absyn_increment_exp(struct Cyc_Absyn_Exp*,enum Cyc_Absyn_Incrementor,unsigned);
# 1227
struct Cyc_Absyn_Exp*Cyc_Absyn_seq_exp(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*,unsigned);
# 1234
struct Cyc_Absyn_Exp*Cyc_Absyn_cast_exp(void*,struct Cyc_Absyn_Exp*,long,enum Cyc_Absyn_Coercion,unsigned);
# 1239
struct Cyc_Absyn_Exp*Cyc_Absyn_deref_exp(struct Cyc_Absyn_Exp*,unsigned);
struct Cyc_Absyn_Exp*Cyc_Absyn_aggrmember_exp(struct Cyc_Absyn_Exp*,struct _fat_ptr*,unsigned);
struct Cyc_Absyn_Exp*Cyc_Absyn_aggrarrow_exp(struct Cyc_Absyn_Exp*,struct _fat_ptr*,unsigned);
struct Cyc_Absyn_Exp*Cyc_Absyn_subscript_exp(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*,unsigned);
# 1244
struct Cyc_Absyn_Exp*Cyc_Absyn_stmt_exp(struct Cyc_Absyn_Stmt*,unsigned);
# 1259
struct Cyc_Absyn_Exp*Cyc_Absyn_set_type(struct Cyc_Absyn_Exp*,void*);
# 1264
struct Cyc_Absyn_Stmt*Cyc_Absyn_exp_stmt(struct Cyc_Absyn_Exp*,unsigned);
struct Cyc_Absyn_Stmt*Cyc_Absyn_seq_stmt(struct Cyc_Absyn_Stmt*,struct Cyc_Absyn_Stmt*,unsigned);
# 1272
struct Cyc_Absyn_Stmt*Cyc_Absyn_for_stmt(struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Stmt*,unsigned);
# 1275
struct Cyc_Absyn_Stmt*Cyc_Absyn_decl_stmt(struct Cyc_Absyn_Decl*,struct Cyc_Absyn_Stmt*,unsigned);
struct Cyc_Absyn_Stmt*Cyc_Absyn_declare_stmt(struct _tuple0*,void*,struct Cyc_Absyn_Exp*,struct Cyc_Absyn_Stmt*,unsigned);
# 1356
struct _fat_ptr*Cyc_Absyn_designatorlist_to_fieldname(struct Cyc_List_List*);
# 1359
void Cyc_Absyn_visit_stmt(long(*)(void*,struct Cyc_Absyn_Exp*),long(*)(void*,struct Cyc_Absyn_Stmt*),void*,struct Cyc_Absyn_Stmt*);struct Cyc_Hashtable_Table;struct Cyc_Dict_T;struct Cyc_Dict_Dict{int(*rel)(void*,void*);struct _RegionHandle*r;const struct Cyc_Dict_T*t;};struct Cyc_Set_Set;struct Cyc_Xarray_Xarray{struct _fat_ptr elmts;int num_elmts;};struct Cyc_Toc_TocState{struct Cyc_List_List**tuple_types;struct Cyc_List_List**anon_aggr_types;struct Cyc_Dict_Dict*aggrs_so_far;struct Cyc_List_List**abs_struct_types;struct Cyc_Set_Set**datatypes_so_far;struct Cyc_Dict_Dict*xdatatypes_so_far;struct Cyc_Dict_Dict*qvar_tags;struct Cyc_Xarray_Xarray*temp_labels;};struct Cyc_Toc_TocStateWrap{struct Cyc_Core_DynamicRegion*dyn;struct Cyc_Toc_TocState*state;};struct Cyc_Toc_TocContext{struct Cyc_List_List*result_decls;struct Cyc_Hashtable_Table**pop_tables;struct Cyc_Hashtable_Table**fn_pop_table;int tuple_type_counter;int temp_var_counter;int fresh_label_counter;struct Cyc_Toc_TocStateWrap*toc_state;struct Cyc_List_List*tagged_union_cache;void*void_star_type_cache;void*fat_ptr_type_cache;void*rgn_type_cache;void*aqualt_type_cache;struct Cyc_Absyn_Exp*aliasable_qual_exp_cache;struct Cyc_Absyn_Exp*get_exn_thrown_exp_cache;struct _fat_ptr globals;};
# 122 "cyclone/library/compiler/toc.h"
struct _tuple0*Cyc_Toc_temp_var(struct Cyc_Toc_TocContext*);extern char Cyc_Toc_NewInfo[8U];struct Cyc_Toc_NewInfo_Absyn_AbsynAnnot_struct{char*tag;struct Cyc_Absyn_Exp*f1;void*f2;};
# 42 "cyclone/library/compiler/tcutil.h"
long Cyc_Tcutil_is_array_type(void*);
# 95
struct Cyc_Absyn_Exp*Cyc_Tcutil_deep_copy_exp(long,struct Cyc_Absyn_Exp*);
# 128
int Cyc_Tcutil_typecmp(void*,void*);
# 51 "cyclone/library/compiler/warn.h"
void*Cyc_Warn_impos(struct _fat_ptr,struct _fat_ptr);struct Cyc_Warn_String_Warn_Warg_struct{int tag;struct _fat_ptr f1;};struct Cyc_Warn_Exp_Warn_Warg_struct{int tag;struct Cyc_Absyn_Exp*f1;};
# 82
void*Cyc_Warn_impos2(struct _fat_ptr);
# 50 "cyclone/library/compiler/remove_aggregates.cyc"
static struct Cyc_Absyn_Exp*Cyc_RemoveAggrs_deep_copy(struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;_T0= Cyc_Tcutil_deep_copy_exp(1,e);return _T0;}
# 54
static struct Cyc_Absyn_Exp*Cyc_RemoveAggrs_member_exp(struct Cyc_Absyn_Exp*e,struct _fat_ptr*f,unsigned loc){struct Cyc_Absyn_Exp*_T0;int*_T1;int _T2;struct Cyc_Absyn_Exp*_T3;struct Cyc_Absyn_Exp*_T4;_T0= e;{
void*_T5=_T0->r;struct Cyc_Absyn_Exp*_T6;_T1= (int*)_T5;_T2= *_T1;if(_T2!=20)goto _TL0;{struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*_T7=(struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*)_T5;_T6= _T7->f1;}{struct Cyc_Absyn_Exp*e1=_T6;_T3= 
# 57
Cyc_Absyn_aggrarrow_exp(e1,f,loc);return _T3;}_TL0: _T4= 
# 59
Cyc_Absyn_aggrmember_exp(e,f,loc);return _T4;;}}
# 65
enum Cyc_RemoveAggrs_ExpContext{Cyc_RemoveAggrs_Initializer =0U,Cyc_RemoveAggrs_NewDest =1U,Cyc_RemoveAggrs_AggrField =2U,Cyc_RemoveAggrs_Other =3U};struct Cyc_RemoveAggrs_Env{enum Cyc_RemoveAggrs_ExpContext ctxt;struct Cyc_Absyn_Exp*dest;};
# 76
static struct Cyc_RemoveAggrs_Env Cyc_RemoveAggrs_other_env={Cyc_RemoveAggrs_Other,0};
# 78
static struct Cyc_RemoveAggrs_Env Cyc_RemoveAggrs_no_init(struct Cyc_RemoveAggrs_Env env){struct Cyc_RemoveAggrs_Env _T0;struct Cyc_RemoveAggrs_Env _T1;enum Cyc_RemoveAggrs_ExpContext _T2;int _T3;_T1= env;_T2= _T1.ctxt;_T3= (int)_T2;if(_T3!=0)goto _TL2;_T0= Cyc_RemoveAggrs_other_env;goto _TL3;_TL2: _T0= env;_TL3: return _T0;}
# 80
enum Cyc_RemoveAggrs_ExpResult{Cyc_RemoveAggrs_WasArray =0U,Cyc_RemoveAggrs_UsedInitializer =1U,Cyc_RemoveAggrs_OtherRes =2U};struct Cyc_RemoveAggrs_Result{enum Cyc_RemoveAggrs_ExpResult res;};
# 84
static struct Cyc_RemoveAggrs_Result Cyc_RemoveAggrs_remove_aggrs_exp(struct Cyc_Toc_TocContext*,struct Cyc_RemoveAggrs_Env,struct Cyc_Absyn_Exp*);
static void Cyc_RemoveAggrs_remove_aggrs_stmt(struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Stmt*);
# 87
static void Cyc_RemoveAggrs_noarray_remove_aggrs_exp(struct Cyc_Toc_TocContext*ctxt,struct Cyc_RemoveAggrs_Env env,struct Cyc_Absyn_Exp*e){enum Cyc_RemoveAggrs_ExpResult _T0;int _T1;struct Cyc_Warn_String_Warn_Warg_struct _T2;struct Cyc_Warn_Exp_Warn_Warg_struct _T3;int(*_T4)(struct _fat_ptr);void*(*_T5)(struct _fat_ptr);struct _fat_ptr _T6;
struct Cyc_RemoveAggrs_Result _T7=Cyc_RemoveAggrs_remove_aggrs_exp(ctxt,env,e);enum Cyc_RemoveAggrs_ExpResult _T8;_T8= _T7.res;{enum Cyc_RemoveAggrs_ExpResult r=_T8;_T0= r;_T1= (int)_T0;
if(_T1!=0)goto _TL4;{struct Cyc_Warn_String_Warn_Warg_struct _T9;_T9.tag= 0;
({__typeof__(_tag_fat("remove_aggrs_exp -- unexpected array or comprehension: ",sizeof(char),56U))_TA=_tag_fat("remove_aggrs_exp -- unexpected array or comprehension: ",sizeof(char),56U);_T9.f1= _TA;});_T2= _T9;}{struct Cyc_Warn_String_Warn_Warg_struct _T9=_T2;{struct Cyc_Warn_Exp_Warn_Warg_struct _TA;_TA.tag= 4;_TA.f1= e;_T3= _TA;}{struct Cyc_Warn_Exp_Warn_Warg_struct _TA=_T3;void*_TB[2];_TB[0]= & _T9;_TB[1]= & _TA;_T5= Cyc_Warn_impos2;{int(*_TC)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T5;_T4= _TC;}_T6= _tag_fat(_TB,sizeof(void*),2);_T4(_T6);}}goto _TL5;_TL4: _TL5:;}}
# 93
static long Cyc_RemoveAggrs_can_use_initializer(struct Cyc_Absyn_Exp*e,void*t){int _T0;struct Cyc_Absyn_Exp*_T1;void*_T2;unsigned _T3;struct Cyc_Absyn_Exp*_T4;void*_T5;long _T6;struct Cyc_Absyn_Exp*_T7;void*_T8;void*_T9;void*_TA;int _TB;_T1= e;_T2= _T1->topt;_T3= (unsigned)_T2;
if(!_T3)goto _TL6;_T4= e;_T5= _T4->topt;_T6= Cyc_Tcutil_is_array_type(_T5);if(_T6)goto _TL6;else{goto _TL8;}_TL8: _T7= e;_T8= _T7->topt;_T9= 
_check_null(_T8);_TA= t;_TB= Cyc_Tcutil_typecmp(_T9,_TA);_T0= _TB==0;goto _TL7;_TL6: _T0= 0;_TL7:
# 94
 return _T0;}struct _tuple13{struct Cyc_List_List*f0;struct Cyc_Absyn_Exp*f1;};
# 98
static struct Cyc_RemoveAggrs_Result Cyc_RemoveAggrs_remove_aggrs_exp(struct Cyc_Toc_TocContext*ctxt,struct Cyc_RemoveAggrs_Env env,struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;int*_T1;unsigned _T2;struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T3;union Cyc_Absyn_Cnst _T4;struct _union_Cnst_String_c _T5;unsigned _T6;union Cyc_Absyn_Cnst _T7;struct _union_Cnst_String_c _T8;struct Cyc_RemoveAggrs_Env _T9;enum Cyc_RemoveAggrs_ExpContext _TA;int _TB;struct Cyc_Absyn_Exp*_TC;void*_TD;void*_TE;long _TF;struct _fat_ptr _T10;struct _fat_ptr _T11;unsigned char*_T12;const char*_T13;const char*_T14;unsigned _T15;int _T16;char _T17;struct Cyc_Absyn_Exp*_T18;struct Cyc_List_List*_T19;struct _tuple13*_T1A;struct Cyc_Absyn_Exp*_T1B;struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*_T1C;struct Cyc_RemoveAggrs_Result _T1D;struct Cyc_Absyn_Exp*_T1E;struct Cyc_Toc_NewInfo_Absyn_AbsynAnnot_struct*_T1F;char*_T20;char*_T21;void*_T22;struct Cyc_RemoveAggrs_Env _T23;enum Cyc_RemoveAggrs_ExpContext _T24;int _T25;struct Cyc_RemoveAggrs_Env _T26;struct Cyc_Absyn_Exp*_T27;struct Cyc_Absyn_Exp*_T28;void*_T29;long _T2A;struct Cyc_Toc_TocContext*_T2B;struct Cyc_RemoveAggrs_Env _T2C;struct Cyc_RemoveAggrs_Env _T2D;struct Cyc_Absyn_Exp*_T2E;struct Cyc_Absyn_Exp*_T2F;struct Cyc_RemoveAggrs_Env _T30;struct Cyc_Absyn_Exp*_T31;struct Cyc_Absyn_Exp*_T32;struct Cyc_Absyn_Exp*_T33;struct Cyc_RemoveAggrs_Env _T34;struct Cyc_Absyn_Exp*_T35;void*_T36;void*_T37;struct Cyc_Absyn_Exp*_T38;struct Cyc_Absyn_Exp*_T39;struct Cyc_Absyn_Exp*_T3A;struct Cyc_Absyn_Exp*_T3B;struct Cyc_Absyn_Exp*_T3C;struct Cyc_Absyn_Exp*_T3D;void*_T3E;struct Cyc_Toc_TocContext*_T3F;struct Cyc_RemoveAggrs_Env _T40;struct Cyc_Absyn_Exp*_T41;struct Cyc_Absyn_Exp*_T42;void*_T43;struct Cyc_Absyn_Exp*_T44;void*_T45;struct Cyc_Absyn_Exp*_T46;struct Cyc_Absyn_Exp*_T47;struct Cyc_Absyn_Exp*_T48;void*_T49;void*_T4A;struct _tuple0*_T4B;void*_T4C;struct Cyc_Absyn_Exp*_T4D;struct Cyc_Absyn_Stmt*_T4E;struct Cyc_Absyn_Stmt*_T4F;struct Cyc_Absyn_Stmt*_T50;struct Cyc_Absyn_Exp*_T51;struct Cyc_Absyn_Exp*_T52;int(*_T53)(struct _fat_ptr,struct _fat_ptr);void*(*_T54)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T55;struct _fat_ptr _T56;int _T57;struct Cyc_RemoveAggrs_Env _T58;enum Cyc_RemoveAggrs_ExpContext _T59;int _T5A;struct Cyc_RemoveAggrs_Env _T5B;enum Cyc_RemoveAggrs_ExpContext _T5C;int _T5D;void*(*_T5E)(struct _tuple0*);struct Cyc_Absyn_Aggrdecl*_T5F;unsigned _T60;struct Cyc_Absyn_Aggrdecl*_T61;enum Cyc_Absyn_AggrKind _T62;int _T63;long _T64;struct _tuple0**_T65;struct _tuple0**_T66;struct _tuple0*_T67;struct Cyc_Absyn_Exp*_T68;void*_T69;struct Cyc_RemoveAggrs_Env _T6A;struct Cyc_Absyn_Exp*_T6B;struct Cyc_RemoveAggrs_Env _T6C;enum Cyc_RemoveAggrs_ExpContext _T6D;int _T6E;struct Cyc_Absyn_Exp*_T6F;void*_T70;struct Cyc_List_List*_T71;void*_T72;struct Cyc_Absyn_Exp*_T73;struct _fat_ptr*_T74;struct Cyc_Absyn_Exp*_T75;struct Cyc_Absyn_Exp*_T76;void*_T77;void*_T78;struct Cyc_Toc_TocContext*_T79;struct Cyc_RemoveAggrs_Env _T7A;struct Cyc_Absyn_Exp*_T7B;struct Cyc_List_List*_T7C;int(*_T7D)(struct _fat_ptr,struct _fat_ptr);void*(*_T7E)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T7F;struct _fat_ptr _T80;struct Cyc_List_List*_T81;void*_T82;struct _tuple13*_T83;struct _tuple13 _T84;struct Cyc_List_List*_T85;struct Cyc_List_List*_T86;void*_T87;struct _tuple13*_T88;struct _tuple13 _T89;struct Cyc_Absyn_Exp*_T8A;void*_T8B;struct Cyc_Warn_String_Warn_Warg_struct _T8C;struct Cyc_Warn_Exp_Warn_Warg_struct _T8D;struct Cyc_Warn_String_Warn_Warg_struct _T8E;int(*_T8F)(struct _fat_ptr);void*(*_T90)(struct _fat_ptr);struct _fat_ptr _T91;struct Cyc_Absyn_Exp*_T92;struct Cyc_Absyn_Exp*_T93;void*_T94;void*_T95;struct Cyc_List_List*_T96;long _T97;struct Cyc_Absyn_Exp*_T98;struct _tuple0**_T99;struct _tuple0*_T9A;void*_T9B;struct Cyc_Absyn_Stmt*_T9C;struct Cyc_Absyn_Stmt*_T9D;struct Cyc_Absyn_Stmt*_T9E;struct Cyc_Absyn_Stmt*_T9F;struct Cyc_Absyn_Exp*_TA0;struct Cyc_Absyn_Exp*_TA1;struct Cyc_Absyn_Exp*_TA2;struct Cyc_Absyn_Exp*_TA3;struct Cyc_Absyn_Exp*_TA4;struct Cyc_Absyn_Exp*_TA5;struct Cyc_Absyn_Exp*_TA6;void*_TA7;struct Cyc_Absyn_Exp*_TA8;struct Cyc_RemoveAggrs_Env _TA9;int(*_TAA)(struct _fat_ptr,struct _fat_ptr);void*(*_TAB)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _TAC;struct _fat_ptr _TAD;struct Cyc_RemoveAggrs_Env _TAE;struct Cyc_Absyn_Exp*_TAF;struct Cyc_Absyn_Exp*_TB0;void*_TB1;void*_TB2;int*_TB3;int _TB4;struct Cyc_Absyn_ArrayInfo _TB5;void*_TB6;struct Cyc_Absyn_ArrayInfo _TB7;struct Cyc_Absyn_Tqual _TB8;struct Cyc_Absyn_Exp*_TB9;void*_TBA;struct Cyc_List_List*_TBB;void*_TBC;struct Cyc_Absyn_Exp*_TBD;struct Cyc_Absyn_Exp*_TBE;void*_TBF;struct Cyc_Absyn_Exp*_TC0;struct Cyc_Absyn_Exp*_TC1;void*_TC2;struct Cyc_Toc_TocContext*_TC3;struct Cyc_RemoveAggrs_Env _TC4;struct Cyc_Absyn_Exp*_TC5;struct Cyc_List_List*_TC6;struct Cyc_List_List*_TC7;void*_TC8;struct _tuple13*_TC9;struct _tuple13 _TCA;struct Cyc_List_List*_TCB;struct Cyc_List_List*_TCC;void*_TCD;struct _tuple13*_TCE;struct _tuple13 _TCF;struct Cyc_Absyn_Exp*_TD0;struct Cyc_Absyn_Exp*_TD1;void*_TD2;void*_TD3;struct Cyc_List_List*_TD4;struct Cyc_Absyn_Exp*_TD5;struct Cyc_Absyn_Exp*_TD6;struct Cyc_Absyn_Exp*_TD7;struct Cyc_Absyn_Exp*_TD8;struct Cyc_RemoveAggrs_Env _TD9;int(*_TDA)(struct _fat_ptr,struct _fat_ptr);void*(*_TDB)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _TDC;struct _fat_ptr _TDD;struct Cyc_Absyn_Vardecl*_TDE;struct Cyc_Absyn_Exp*_TDF;void*_TE0;struct Cyc_Absyn_Exp*_TE1;struct Cyc_Absyn_Exp*_TE2;void*_TE3;struct Cyc_Absyn_Exp*_TE4;struct Cyc_Absyn_Exp*_TE5;void*_TE6;struct Cyc_Absyn_Exp*_TE7;struct Cyc_Absyn_Exp*_TE8;void*_TE9;struct Cyc_Absyn_Exp*_TEA;struct Cyc_Absyn_Exp*_TEB;void*_TEC;struct Cyc_Absyn_Exp*_TED;struct Cyc_RemoveAggrs_Env _TEE;struct Cyc_Absyn_Exp*_TEF;struct Cyc_Absyn_Exp*_TF0;void*_TF1;void*_TF2;int*_TF3;int _TF4;struct Cyc_Absyn_ArrayInfo _TF5;void*_TF6;struct Cyc_Absyn_ArrayInfo _TF7;struct Cyc_Absyn_Tqual _TF8;struct Cyc_Absyn_Exp*_TF9;void*_TFA;struct Cyc_RemoveAggrs_Env _TFB;struct Cyc_Absyn_Exp*_TFC;struct Cyc_Absyn_Exp*_TFD;void*_TFE;struct Cyc_Absyn_Exp*_TFF;struct Cyc_Toc_TocContext*_T100;struct Cyc_RemoveAggrs_Env _T101;struct Cyc_Absyn_Exp*_T102;struct Cyc_Absyn_Exp*_T103;struct Cyc_Absyn_Exp*_T104;struct Cyc_Absyn_Exp*_T105;struct Cyc_Absyn_Stmt*_T106;long _T107;struct Cyc_RemoveAggrs_Env _T108;struct Cyc_Absyn_Exp*_T109;struct Cyc_Absyn_Exp*_T10A;struct Cyc_Absyn_Exp*_T10B;void*_T10C;struct Cyc_Absyn_Exp*_T10D;struct Cyc_Absyn_Exp*_T10E;struct Cyc_Absyn_Exp*_T10F;void*_T110;struct Cyc_Absyn_Exp*_T111;struct Cyc_Absyn_Stmt*_T112;struct Cyc_Absyn_Stmt*_T113;struct Cyc_Absyn_Exp*_T114;struct _tuple0*_T115;void*_T116;struct Cyc_Absyn_Exp*_T117;struct Cyc_Absyn_Stmt*_T118;struct Cyc_Absyn_Stmt*_T119;struct Cyc_Absyn_Exp*_T11A;void*_T11B;struct Cyc_Absyn_Exp*_T11C;struct Cyc_Absyn_Stmt*_T11D;struct Cyc_Absyn_Stmt*_T11E;struct Cyc_Absyn_Exp*_T11F;struct Cyc_Absyn_Exp*_T120;struct Cyc_RemoveAggrs_Env _T121;struct Cyc_Warn_String_Warn_Warg_struct _T122;int(*_T123)(struct _fat_ptr);void*(*_T124)(struct _fat_ptr);struct _fat_ptr _T125;struct Cyc_Absyn_Exp*_T126;struct Cyc_Absyn_Exp*_T127;struct Cyc_Toc_TocContext*_T128;struct Cyc_RemoveAggrs_Env _T129;struct Cyc_Absyn_Exp*_T12A;struct Cyc_Toc_TocContext*_T12B;struct Cyc_RemoveAggrs_Env _T12C;struct Cyc_Absyn_Exp*_T12D;struct Cyc_RemoveAggrs_Env _T12E;struct Cyc_RemoveAggrs_Env _T12F;struct Cyc_RemoveAggrs_Env _T130;struct Cyc_Absyn_Exp*_T131;struct Cyc_RemoveAggrs_Env _T132;struct Cyc_Absyn_Exp*_T133;struct Cyc_Toc_TocContext*_T134;struct Cyc_RemoveAggrs_Env _T135;struct Cyc_Absyn_Exp*_T136;struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*_T137;struct Cyc_Absyn_VarargCallInfo*_T138;struct Cyc_Toc_TocContext*_T139;struct Cyc_RemoveAggrs_Env _T13A;struct Cyc_List_List*_T13B;void*_T13C;struct Cyc_Absyn_Exp*_T13D;struct Cyc_List_List*_T13E;struct Cyc_Warn_String_Warn_Warg_struct _T13F;struct Cyc_Warn_Exp_Warn_Warg_struct _T140;int(*_T141)(struct _fat_ptr);void*(*_T142)(struct _fat_ptr);struct _fat_ptr _T143;struct Cyc_RemoveAggrs_Env _T144;enum Cyc_RemoveAggrs_ExpContext _T145;int _T146;long _T147;struct Cyc_Absyn_Exp*_T148;struct Cyc_RemoveAggrs_Env _T149;struct Cyc_Absyn_Exp*_T14A;struct Cyc_Absyn_Exp*_T14B;struct Cyc_Absyn_Exp*_T14C;struct Cyc_Absyn_Exp*_T14D;struct Cyc_RemoveAggrs_Env _T14E;enum Cyc_RemoveAggrs_ExpContext _T14F;int _T150;long _T151;struct Cyc_Absyn_Exp*_T152;struct Cyc_RemoveAggrs_Env _T153;struct Cyc_Absyn_Exp*_T154;struct Cyc_Absyn_Exp*_T155;struct Cyc_Absyn_Exp*_T156;struct Cyc_Absyn_Exp*_T157;void*_T158;void*_T159;struct Cyc_Absyn_Exp*_T15A;struct Cyc_Absyn_Exp*_T15B;struct Cyc_Absyn_Exp*_T15C;struct Cyc_RemoveAggrs_Result _T15D;
enum Cyc_RemoveAggrs_ExpResult res=2U;
long did_assign=0;_T0= e;{
# 102
void*_T15E=_T0->r;struct Cyc_Absyn_Stmt*_T15F;struct Cyc_Absyn_Exp*_T160;long _T161;struct Cyc_Absyn_Exp*_T162;struct Cyc_Absyn_Vardecl*_T163;struct Cyc_Absyn_Aggrdecl*_T164;struct Cyc_List_List*_T165;struct _tuple0*_T166;struct Cyc_Absyn_Exp*_T167;struct _fat_ptr _T168;_T1= (int*)_T15E;_T2= *_T1;switch(_T2){case 0: _T3= (struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_T15E;_T4= _T3->f1;_T5= _T4.String_c;_T6= _T5.tag;if(_T6!=9)goto _TLA;{struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*_T169=(struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct*)_T15E;_T7= _T169->f1;_T8= _T7.String_c;_T168= _T8.val;}{struct _fat_ptr s=_T168;_T9= env;_TA= _T9.ctxt;_TB= (int)_TA;
# 105
if(_TB!=2)goto _TLC;_TC= e;_TD= _TC->topt;_TE= _check_null(_TD);_TF= Cyc_Tcutil_is_array_type(_TE);if(!_TF)goto _TLC;{
struct Cyc_List_List*dles=0;_T10= s;{
unsigned n=_get_fat_size(_T10,sizeof(char));{
unsigned i=0U;_TL11: if(i < n)goto _TLF;else{goto _TL10;}
_TLF: _T11= s;_T12= _T11.curr;_T13= (const char*)_T12;_T14= _check_null(_T13);_T15= i;_T16= (int)_T15;_T17= _T14[_T16];{struct Cyc_Absyn_Exp*c=Cyc_Absyn_char_exp(_T17,0U);_T18= c;
_T18->topt= Cyc_Absyn_char_type;{struct Cyc_List_List*_T169=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple13*_T16A=_cycalloc(sizeof(struct _tuple13));
_T16A->f0= 0;_T16A->f1= c;_T1A= (struct _tuple13*)_T16A;}_T169->hd= _T1A;_T169->tl= dles;_T19= (struct Cyc_List_List*)_T169;}dles= _T19;}
# 108
i= i + 1;goto _TL11;_TL10:;}
# 113
dles= Cyc_List_imp_rev(dles);_T1B= e;{struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*_T169=_cycalloc(sizeof(struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct));_T169->tag= 25;
_T169->f1= dles;_T1C= (struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*)_T169;}_T1B->r= (void*)_T1C;_T1D= 
Cyc_RemoveAggrs_remove_aggrs_exp(ctxt,env,e);return _T1D;}}_TLC: goto _LL0;}_TLA: goto _LL6;case 17: _LL6: goto _LL8;case 19: _LL8: goto _LLA;case 32: _LLA: goto _LLC;case 31: _LLC: goto _LLE;case 39: _LLE: goto _LL10;case 1: _LL10: goto _LL0;case 16:{struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct*_T169=(struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct*)_T15E;_T167= _T169->f2;}{struct Cyc_Absyn_Exp*e1=_T167;_T1E= e;{
# 128
void*_T169=_T1E->annot;void*_T16A;struct Cyc_Absyn_Exp*_T16B;_T1F= (struct Cyc_Toc_NewInfo_Absyn_AbsynAnnot_struct*)_T169;_T20= _T1F->tag;_T21= Cyc_Toc_NewInfo;if(_T20!=_T21)goto _TL12;{struct Cyc_Toc_NewInfo_Absyn_AbsynAnnot_struct*_T16C=(struct Cyc_Toc_NewInfo_Absyn_AbsynAnnot_struct*)_T169;_T16B= _T16C->f1;_T22= _T16C->f2;_T16A= (void*)_T22;}{struct Cyc_Absyn_Exp*mexp=_T16B;void*typ=_T16A;_T23= env;_T24= _T23.ctxt;_T25= (int)_T24;
# 131
if(_T25!=0)goto _TL14;_T26= env;_T27= _T26.dest;_T28= _check_null(_T27);_T29= typ;_T2A= Cyc_RemoveAggrs_can_use_initializer(_T28,_T29);if(!_T2A)goto _TL14;_T2B= ctxt;{struct Cyc_RemoveAggrs_Env _T16C;
_T16C.ctxt= 1U;_T2D= env;_T16C.dest= _T2D.dest;_T2C= _T16C;}_T2E= e1;Cyc_RemoveAggrs_remove_aggrs_exp(_T2B,_T2C,_T2E);_T2F= e;_T30= env;_T31= _T30.dest;_T32= mexp;_T33= 
Cyc_Absyn_assign_exp(_T31,_T32,0U);_T34= env;_T35= _T34.dest;_T36= _T35->topt;_T37= _check_null(_T36);_T38= Cyc_Absyn_set_type(_T33,_T37);_T39= e1;_T3A= Cyc_Absyn_seq_exp(_T38,_T39,0U);_T2F->r= _T3A->r;_T3B= e;_T3C= e1;
# 136
_T3B->topt= _T3C->topt;
res= 1U;goto _LL41;_TL14: {
# 140
struct _tuple0*xvar=Cyc_Toc_temp_var(ctxt);_T3D= 
Cyc_Absyn_var_exp(xvar,0U);_T3E= typ;{struct Cyc_Absyn_Exp*xexp=Cyc_Absyn_set_type(_T3D,_T3E);_T3F= ctxt;{struct Cyc_RemoveAggrs_Env _T16C;
_T16C.ctxt= 1U;_T16C.dest= xexp;_T40= _T16C;}_T41= e1;Cyc_RemoveAggrs_remove_aggrs_exp(_T3F,_T40,_T41);{
struct Cyc_Absyn_Exp*body_exp=xexp;_T42= e;_T43= _T42->topt;
if(_T43==0)goto _TL16;_T44= e;_T45= _T44->topt;_T46= xexp;_T47= 
# 146
Cyc_Absyn_cast_exp(_T45,_T46,0,1U,0U);_T48= e;_T49= _T48->topt;_T4A= _check_null(_T49);
# 145
body_exp= 
Cyc_Absyn_set_type(_T47,_T4A);goto _TL17;_TL16: _TL17: _T4B= xvar;_T4C= typ;_T4D= mexp;_T4E= 
# 148
Cyc_Absyn_exp_stmt(e1,0U);_T4F= Cyc_Absyn_exp_stmt(body_exp,0U);_T50= Cyc_Absyn_seq_stmt(_T4E,_T4F,0U);{
# 147
struct Cyc_Absyn_Stmt*s=Cyc_Absyn_declare_stmt(_T4B,_T4C,_T4D,_T50,0U);_T51= e;_T52= 
# 149
Cyc_Absyn_stmt_exp(s,0U);_T51->r= _T52->r;goto _LL41;}}}}}_TL12: _T54= Cyc_Warn_impos;{
# 152
int(*_T16C)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T54;_T53= _T16C;}_T55= _tag_fat("removeAggrs: toc did not set a new-destination",sizeof(char),47U);_T56= _tag_fat(0U,sizeof(void*),0);_T53(_T55,_T56);_LL41:;}goto _LL0;}case 28:{struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*_T169=(struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct*)_T15E;_T166= _T169->f1;_T165= _T169->f3;_T164= _T169->f4;}{struct _tuple0*tdn=_T166;struct Cyc_List_List*dles=_T165;struct Cyc_Absyn_Aggrdecl*sdopt=_T164;
# 157
did_assign= 1;_T58= env;_T59= _T58.ctxt;_T5A= (int)_T59;
if(_T5A==2)goto _TL18;_T5B= env;_T5C= _T5B.ctxt;_T5D= (int)_T5C;_T57= _T5D!=1;goto _TL19;_TL18: _T57= 0;_TL19: {long do_stmt_exp=_T57;
struct Cyc_Absyn_Exp*dest;
struct _tuple0**v;_T5F= sdopt;_T60= (unsigned)_T5F;
if(!_T60)goto _TL1A;_T61= sdopt;_T62= _T61->kind;_T63= (int)_T62;if(_T63!=1)goto _TL1A;_T5E= Cyc_Absyn_unionq_type;goto _TL1B;_TL1A: _T5E= Cyc_Absyn_strctq;_TL1B: {void*(*f)(struct _tuple0*)=_T5E;
void*ty=f(tdn);_T64= do_stmt_exp;
if(!_T64)goto _TL1C;{struct _tuple0**_T169=_cycalloc(sizeof(struct _tuple0*));
({__typeof__(Cyc_Toc_temp_var(ctxt))_T16A=Cyc_Toc_temp_var(ctxt);*_T169= _T16A;});_T65= (struct _tuple0**)_T169;}v= _T65;_T66= v;_T67= *_T66;_T68= 
Cyc_Absyn_var_exp(_T67,0U);_T69= ty;dest= Cyc_Absyn_set_type(_T68,_T69);goto _TL1D;
# 167
_TL1C: v= 0;_T6A= env;_T6B= _T6A.dest;
dest= _check_null(_T6B);_T6C= env;_T6D= _T6C.ctxt;_T6E= (int)_T6D;
if(_T6E!=1)goto _TL1E;_T6F= 
Cyc_Absyn_deref_exp(dest,0U);_T70= ty;dest= Cyc_Absyn_set_type(_T6F,_T70);goto _TL1F;_TL1E: _TL1F: _TL1D:{
# 173
struct Cyc_List_List*dles2=dles;_TL23: if(dles2!=0)goto _TL21;else{goto _TL22;}
_TL21: _T71= dles2;_T72= _T71->hd;{struct _tuple13*_T169=(struct _tuple13*)_T72;struct Cyc_Absyn_Exp*_T16A;struct Cyc_List_List*_T16B;{struct _tuple13 _T16C=*_T169;_T16B= _T16C.f0;_T16A= _T16C.f1;}{struct Cyc_List_List*ds=_T16B;struct Cyc_Absyn_Exp*field_exp=_T16A;
struct _fat_ptr*f=Cyc_Absyn_designatorlist_to_fieldname(ds);_T73= 
Cyc_RemoveAggrs_deep_copy(dest);_T74= f;_T75= Cyc_RemoveAggrs_member_exp(_T73,_T74,0U);_T76= field_exp;_T77= _T76->topt;_T78= _check_null(_T77);{struct Cyc_Absyn_Exp*field_dest=Cyc_Absyn_set_type(_T75,_T78);_T79= ctxt;{struct Cyc_RemoveAggrs_Env _T16C;
_T16C.ctxt= 2U;_T16C.dest= field_dest;_T7A= _T16C;}_T7B= field_exp;Cyc_RemoveAggrs_remove_aggrs_exp(_T79,_T7A,_T7B);}}}_T7C= dles2;
# 173
dles2= _T7C->tl;goto _TL23;_TL22:;}
# 180
if(dles!=0)goto _TL24;_T7E= Cyc_Warn_impos;{
int(*_T169)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T7E;_T7D= _T169;}_T7F= _tag_fat("zero-field aggregate",sizeof(char),21U);_T80= _tag_fat(0U,sizeof(void*),0);_T7D(_T7F,_T80);goto _TL25;_TL24: _TL25: _T81= dles;_T82= _T81->hd;_T83= (struct _tuple13*)_T82;_T84= *_T83;{
# 183
struct Cyc_Absyn_Exp*init_e=_T84.f1;_T85= dles;
dles= _T85->tl;_TL29: if(dles!=0)goto _TL27;else{goto _TL28;}
_TL27: _T86= dles;_T87= _T86->hd;_T88= (struct _tuple13*)_T87;_T89= *_T88;{struct Cyc_Absyn_Exp*e2=_T89.f1;_T8A= e2;_T8B= _T8A->topt;
if(_T8B!=0)goto _TL2A;{struct Cyc_Warn_String_Warn_Warg_struct _T169;_T169.tag= 0;
({__typeof__(_tag_fat("expression ",sizeof(char),12U))_T16A=_tag_fat("expression ",sizeof(char),12U);_T169.f1= _T16A;});_T8C= _T169;}{struct Cyc_Warn_String_Warn_Warg_struct _T169=_T8C;{struct Cyc_Warn_Exp_Warn_Warg_struct _T16A;_T16A.tag= 4;_T16A.f1= e2;_T8D= _T16A;}{struct Cyc_Warn_Exp_Warn_Warg_struct _T16A=_T8D;{struct Cyc_Warn_String_Warn_Warg_struct _T16B;_T16B.tag= 0;({__typeof__(_tag_fat(" missing type!",sizeof(char),15U))_T16C=_tag_fat(" missing type!",sizeof(char),15U);_T16B.f1= _T16C;});_T8E= _T16B;}{struct Cyc_Warn_String_Warn_Warg_struct _T16B=_T8E;void*_T16C[3];_T16C[0]= & _T169;_T16C[1]= & _T16A;_T16C[2]= & _T16B;_T90= Cyc_Warn_impos2;{int(*_T16D)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T90;_T8F= _T16D;}_T91= _tag_fat(_T16C,sizeof(void*),3);_T8F(_T91);}}}goto _TL2B;_TL2A: _TL2B: _T92= 
Cyc_Absyn_seq_exp(init_e,e2,0U);_T93= e2;_T94= _T93->topt;_T95= _check_null(_T94);init_e= Cyc_Absyn_set_type(_T92,_T95);}_T96= dles;
# 184
dles= _T96->tl;goto _TL29;_TL28: _T97= do_stmt_exp;
# 190
if(!_T97)goto _TL2C;_T98= e;_T99= 
_check_null(v);_T9A= *_T99;_T9B= ty;_T9C= 
Cyc_Absyn_exp_stmt(init_e,0U);_T9D= Cyc_Absyn_exp_stmt(dest,0U);_T9E= Cyc_Absyn_seq_stmt(_T9C,_T9D,0U);_T9F= 
# 191
Cyc_Absyn_declare_stmt(_T9A,_T9B,0,_T9E,0U);_TA0= Cyc_Absyn_stmt_exp(_T9F,0U);_T98->r= _TA0->r;goto _TL2D;
# 196
_TL2C: _TA1= e;_TA2= init_e;_TA1->r= _TA2->r;_TA3= e;_TA4= init_e;
_TA3->topt= _TA4->topt;_TL2D: goto _LL0;}}}}case 25:{struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*_T169=(struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct*)_T15E;_T165= _T169->f1;}{struct Cyc_List_List*dles=_T165;
# 205
res= 0U;
if(dles!=0)goto _TL2E;_TA5= e;_TA6= 
Cyc_Absyn_signed_int_exp(0,0U);_TA7= Cyc_Absyn_sint_type;_TA8= Cyc_Absyn_set_type(_TA6,_TA7);*_TA5= *_TA8;goto _LL0;_TL2E: _TA9= env;{
# 210
enum Cyc_RemoveAggrs_ExpContext _T169=_TA9.ctxt;if(_T169!=Cyc_RemoveAggrs_Other)goto _TL30;_TAB= Cyc_Warn_impos;{
# 212
int(*_T16A)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_TAB;_TAA= _T16A;}_TAC= _tag_fat("remove-aggrs: Array_e in bad position",sizeof(char),38U);_TAD= _tag_fat(0U,sizeof(void*),0);_TAA(_TAC,_TAD);goto _TL31;_TL30: goto _LL49;_TL31: _LL49:;}
# 216
did_assign= 1;_TAE= env;_TAF= _TAE.dest;{
struct Cyc_Absyn_Exp*dest=_check_null(_TAF);
void*dest_type;_TB0= dest;_TB1= _TB0->topt;_TB2= 
_check_null(_TB1);{void*_T169=Cyc_Absyn_compress(_TB2);struct Cyc_Absyn_ArrayInfo _T16A;_TB3= (int*)_T169;_TB4= *_TB3;if(_TB4!=5)goto _TL32;{struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T16B=(struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_T169;_T16A= _T16B->f1;}{struct Cyc_Absyn_ArrayInfo ai=_T16A;_TB5= ai;_TB6= _TB5.elt_type;_TB7= ai;_TB8= _TB7.tq;
# 221
dest_type= Cyc_Absyn_cstar_type(_TB6,_TB8);goto _LL4E;}_TL32: _TB9= dest;_TBA= _TB9->topt;
# 224
dest_type= _check_null(_TBA);goto _LL4E;_LL4E:;}{
# 228
int i=0;{
struct Cyc_List_List*dles2=dles;_TL37: if(dles2!=0)goto _TL35;else{goto _TL36;}
# 232
_TL35: _TBB= dles2;_TBC= _TBB->hd;{struct _tuple13*_T169=(struct _tuple13*)_TBC;struct Cyc_Absyn_Exp*_T16A;{struct _tuple13 _T16B=*_T169;_T16A= _T16B.f1;}{struct Cyc_Absyn_Exp*field_exp=_T16A;_TBD= 
# 234
Cyc_RemoveAggrs_deep_copy(dest);_TBE= Cyc_Absyn_signed_int_exp(i,0U);_TBF= Cyc_Absyn_sint_type;_TC0= Cyc_Absyn_set_type(_TBE,_TBF);_TC1= Cyc_Absyn_subscript_exp(_TBD,_TC0,0U);_TC2= dest_type;{
# 233
struct Cyc_Absyn_Exp*fielddest=
Cyc_Absyn_set_type(_TC1,_TC2);_TC3= ctxt;{struct Cyc_RemoveAggrs_Env _T16B;
# 236
_T16B.ctxt= 2U;_T16B.dest= fielddest;_TC4= _T16B;}_TC5= field_exp;Cyc_RemoveAggrs_remove_aggrs_exp(_TC3,_TC4,_TC5);}}}_TC6= dles2;
# 229
dles2= _TC6->tl;i= i + 1;goto _TL37;_TL36:;}_TC7= dles;_TC8= _TC7->hd;_TC9= (struct _tuple13*)_TC8;_TCA= *_TC9;{
# 238
struct Cyc_Absyn_Exp*init_e=_TCA.f1;_TCB= dles;
dles= _TCB->tl;_TL3B: if(dles!=0)goto _TL39;else{goto _TL3A;}
_TL39: _TCC= dles;_TCD= _TCC->hd;_TCE= (struct _tuple13*)_TCD;_TCF= *_TCE;{struct Cyc_Absyn_Exp*e2=_TCF.f1;_TD0= 
Cyc_Absyn_seq_exp(init_e,e2,0U);_TD1= e2;_TD2= _TD1->topt;_TD3= _check_null(_TD2);init_e= Cyc_Absyn_set_type(_TD0,_TD3);}_TD4= dles;
# 239
dles= _TD4->tl;goto _TL3B;_TL3A: _TD5= e;_TD6= init_e;
# 243
_TD5->r= _TD6->r;_TD7= e;_TD8= init_e;
_TD7->topt= _TD8->topt;goto _LL0;}}}}case 26:{struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct*_T169=(struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct*)_T15E;_T163= _T169->f1;_T167= _T169->f2;_T162= _T169->f3;_T161= _T169->f4;}{struct Cyc_Absyn_Vardecl*vd=_T163;struct Cyc_Absyn_Exp*bd=_T167;struct Cyc_Absyn_Exp*body=_T162;long zero_term=_T161;
# 250
did_assign= 1;
res= 0U;_TD9= env;{
enum Cyc_RemoveAggrs_ExpContext _T169=_TD9.ctxt;if(_T169!=Cyc_RemoveAggrs_Other)goto _TL3C;_TDB= Cyc_Warn_impos;{
# 254
int(*_T16A)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_TDB;_TDA= _T16A;}_TDC= _tag_fat("remove-aggrs: comprehension in bad position",sizeof(char),44U);_TDD= _tag_fat(0U,sizeof(void*),0);_TDA(_TDC,_TDD);goto _TL3D;_TL3C: goto _LL56;_TL3D: _LL56:;}{
# 258
struct _tuple0*max=Cyc_Toc_temp_var(ctxt);_TDE= vd;{
struct _tuple0*i=_TDE->name;_TDF= 
Cyc_Absyn_var_exp(i,0U);_TE0= Cyc_Absyn_sint_type;_TE1= Cyc_Absyn_set_type(_TDF,_TE0);_TE2= 
Cyc_Absyn_signed_int_exp(0,0U);_TE3= Cyc_Absyn_sint_type;_TE4= Cyc_Absyn_set_type(_TE2,_TE3);{
# 260
struct Cyc_Absyn_Exp*ea=Cyc_Absyn_assign_exp(_TE1,_TE4,0U);_TE5= 
# 263
Cyc_Absyn_var_exp(i,0U);_TE6= Cyc_Absyn_uint_type;_TE7= Cyc_Absyn_set_type(_TE5,_TE6);_TE8= Cyc_Absyn_var_exp(max,0U);_TE9= Cyc_Absyn_uint_type;_TEA= Cyc_Absyn_set_type(_TE8,_TE9);{
# 262
struct Cyc_Absyn_Exp*eb=
Cyc_Absyn_lt_exp(_TE7,_TEA,0U);_TEB= 
Cyc_Absyn_var_exp(i,0U);_TEC= Cyc_Absyn_uint_type;_TED= Cyc_Absyn_set_type(_TEB,_TEC);{struct Cyc_Absyn_Exp*ec=Cyc_Absyn_increment_exp(_TED,0U,0U);_TEE= env;_TEF= _TEE.dest;{
struct Cyc_Absyn_Exp*dest=_check_null(_TEF);
void*dest_type;_TF0= dest;_TF1= _TF0->topt;_TF2= 
_check_null(_TF1);{void*_T169=Cyc_Absyn_compress(_TF2);struct Cyc_Absyn_ArrayInfo _T16A;_TF3= (int*)_T169;_TF4= *_TF3;if(_TF4!=5)goto _TL3E;{struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T16B=(struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_T169;_T16A= _T16B->f1;}{struct Cyc_Absyn_ArrayInfo ai=_T16A;_TF5= ai;_TF6= _TF5.elt_type;_TF7= ai;_TF8= _TF7.tq;
# 269
dest_type= Cyc_Absyn_cstar_type(_TF6,_TF8);goto _LL5B;}_TL3E: _TF9= dest;_TFA= _TF9->topt;
# 272
dest_type= _check_null(_TFA);_LL5B:;}_TFB= env;_TFC= _TFB.dest;_TFD= 
# 274
Cyc_Absyn_var_exp(i,0U);_TFE= Cyc_Absyn_uint_type;_TFF= Cyc_Absyn_set_type(_TFD,_TFE);{struct Cyc_Absyn_Exp*lval=Cyc_Absyn_subscript_exp(_TFC,_TFF,0U);
Cyc_Absyn_set_type(lval,dest_type);_T100= ctxt;{struct Cyc_RemoveAggrs_Env _T169;
_T169.ctxt= 2U;({__typeof__(Cyc_RemoveAggrs_deep_copy(lval))_T16A=Cyc_RemoveAggrs_deep_copy(lval);_T169.dest= _T16A;});_T101= _T169;}_T102= body;Cyc_RemoveAggrs_remove_aggrs_exp(_T100,_T101,_T102);_T103= ea;_T104= eb;_T105= ec;_T106= 
Cyc_Absyn_exp_stmt(body,0U);{struct Cyc_Absyn_Stmt*s=Cyc_Absyn_for_stmt(_T103,_T104,_T105,_T106,0U);_T107= zero_term;
if(!_T107)goto _TL40;_T108= env;_T109= _T108.dest;_T10A= 
# 286
Cyc_RemoveAggrs_deep_copy(_T109);_T10B= Cyc_Absyn_var_exp(max,0U);_T10C= Cyc_Absyn_sint_type;_T10D= Cyc_Absyn_set_type(_T10B,_T10C);_T10E= Cyc_Absyn_subscript_exp(_T10A,_T10D,0U);_T10F= 
Cyc_Absyn_signed_int_exp(0,0U);_T110= Cyc_Absyn_sint_type;_T111= Cyc_Absyn_set_type(_T10F,_T110);{
# 285
struct Cyc_Absyn_Exp*ex=Cyc_Absyn_assign_exp(_T10E,_T111,0U);_T112= s;_T113= 
# 288
Cyc_Absyn_exp_stmt(ex,0U);s= Cyc_Absyn_seq_stmt(_T112,_T113,0U);}goto _TL41;_TL40: _TL41:
# 292
 Cyc_RemoveAggrs_noarray_remove_aggrs_exp(ctxt,Cyc_RemoveAggrs_other_env,bd);_T114= e;_T115= max;_T116= Cyc_Absyn_uint_type;_T117= bd;_T118= 
# 294
Cyc_Absyn_declare_stmt(i,Cyc_Absyn_uint_type,0,s,0U);_T119= 
# 293
Cyc_Absyn_declare_stmt(_T115,_T116,_T117,_T118,0U);_T11A= 
# 295
Cyc_Absyn_signed_int_exp(0,0U);_T11B= Cyc_Absyn_sint_type;_T11C= Cyc_Absyn_set_type(_T11A,_T11B);_T11D= Cyc_Absyn_exp_stmt(_T11C,0U);_T11E= 
# 293
Cyc_Absyn_seq_stmt(_T119,_T11D,0U);_T11F= Cyc_Absyn_stmt_exp(_T11E,0U);_T114->r= _T11F->r;_T120= e;
# 298
_T120->topt= Cyc_Absyn_sint_type;goto _LL0;}}}}}}}}}case 27:{struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct*_T169=(struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct*)_T15E;_T167= _T169->f1;}{struct Cyc_Absyn_Exp*bd=_T167;
# 302
did_assign= 1;
res= 0U;_T121= env;{
enum Cyc_RemoveAggrs_ExpContext _T169=_T121.ctxt;if(_T169!=Cyc_RemoveAggrs_Other)goto _TL42;{struct Cyc_Warn_String_Warn_Warg_struct _T16A;_T16A.tag= 0;
# 306
({__typeof__(_tag_fat("remove-aggrs: no-init-comp in bad position",sizeof(char),43U))_T16B=_tag_fat("remove-aggrs: no-init-comp in bad position",sizeof(char),43U);_T16A.f1= _T16B;});_T122= _T16A;}{struct Cyc_Warn_String_Warn_Warg_struct _T16A=_T122;void*_T16B[1];_T16B[0]= & _T16A;_T124= Cyc_Warn_impos2;{int(*_T16C)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T124;_T123= _T16C;}_T125= _tag_fat(_T16B,sizeof(void*),1);_T123(_T125);}goto _TL43;_TL42: goto _LL60;_TL43: _LL60:;}_T126= e;_T127= bd;
# 311
*_T126= *_T127;goto _LL0;}case 4:{struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct*_T169=(struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct*)_T15E;_T167= _T169->f1;_T162= _T169->f3;}{struct Cyc_Absyn_Exp*e1=_T167;struct Cyc_Absyn_Exp*e2=_T162;
# 315
Cyc_RemoveAggrs_noarray_remove_aggrs_exp(ctxt,Cyc_RemoveAggrs_other_env,e1);
Cyc_RemoveAggrs_remove_aggrs_exp(ctxt,Cyc_RemoveAggrs_other_env,e2);goto _LL0;}case 9:{struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct*_T169=(struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct*)_T15E;_T167= _T169->f1;_T162= _T169->f2;}{struct Cyc_Absyn_Exp*e1=_T167;struct Cyc_Absyn_Exp*e2=_T162;
# 319
did_assign= 1;
Cyc_RemoveAggrs_noarray_remove_aggrs_exp(ctxt,Cyc_RemoveAggrs_other_env,e1);_T128= ctxt;_T129= 
Cyc_RemoveAggrs_no_init(env);_T12A= e2;Cyc_RemoveAggrs_noarray_remove_aggrs_exp(_T128,_T129,_T12A);goto _LL0;}case 6:{struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct*_T169=(struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct*)_T15E;_T167= _T169->f1;_T162= _T169->f2;_T160= _T169->f3;}{struct Cyc_Absyn_Exp*e1=_T167;struct Cyc_Absyn_Exp*e2=_T162;struct Cyc_Absyn_Exp*e3=_T160;
# 324
did_assign= 1;
Cyc_RemoveAggrs_noarray_remove_aggrs_exp(ctxt,Cyc_RemoveAggrs_other_env,e1);_T12B= ctxt;_T12C= 
Cyc_RemoveAggrs_no_init(env);_T12D= e2;Cyc_RemoveAggrs_noarray_remove_aggrs_exp(_T12B,_T12C,_T12D);{struct Cyc_RemoveAggrs_Env _T169;_T12F= env;
_T169.ctxt= _T12F.ctxt;_T130= env;_T131= _T130.dest;if(_T131!=0)goto _TL44;_T169.dest= 0;goto _TL45;_TL44: _T132= env;_T133= _T132.dest;({__typeof__(Cyc_RemoveAggrs_deep_copy(_T133))_T16A=Cyc_RemoveAggrs_deep_copy(_T133);_T169.dest= _T16A;});_TL45: _T12E= _T169;}{struct Cyc_RemoveAggrs_Env env3=_T12E;_T134= ctxt;_T135= 
Cyc_RemoveAggrs_no_init(env3);_T136= e3;Cyc_RemoveAggrs_noarray_remove_aggrs_exp(_T134,_T135,_T136);goto _LL0;}}case 10: _T137= (struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*)_T15E;_T138= _T137->f3;if(_T138!=0)goto _TL46;{struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*_T169=(struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct*)_T15E;_T167= _T169->f1;_T165= _T169->f2;}{struct Cyc_Absyn_Exp*e=_T167;struct Cyc_List_List*es=_T165;
# 332
Cyc_RemoveAggrs_noarray_remove_aggrs_exp(ctxt,Cyc_RemoveAggrs_other_env,e);_T165= es;goto _LL24;}_TL46: goto _LL3F;case 3:{struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*_T169=(struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct*)_T15E;_T165= _T169->f2;}_LL24: {struct Cyc_List_List*es=_T165;
# 335
_TL4B: if(es!=0)goto _TL49;else{goto _TL4A;}
_TL49: _T139= ctxt;_T13A= Cyc_RemoveAggrs_other_env;_T13B= es;_T13C= _T13B->hd;_T13D= (struct Cyc_Absyn_Exp*)_T13C;Cyc_RemoveAggrs_noarray_remove_aggrs_exp(_T139,_T13A,_T13D);_T13E= es;
# 335
es= _T13E->tl;goto _TL4B;_TL4A: goto _LL0;}case 23:{struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*_T169=(struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct*)_T15E;_T167= _T169->f1;_T162= _T169->f2;}{struct Cyc_Absyn_Exp*e1=_T167;struct Cyc_Absyn_Exp*e2=_T162;_T167= e1;_T162= e2;goto _LL28;}case 7:{struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*_T169=(struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct*)_T15E;_T167= _T169->f1;_T162= _T169->f2;}_LL28: {struct Cyc_Absyn_Exp*e1=_T167;struct Cyc_Absyn_Exp*e2=_T162;_T167= e1;_T162= e2;goto _LL2A;}case 8:{struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*_T169=(struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct*)_T15E;_T167= _T169->f1;_T162= _T169->f2;}_LL2A: {struct Cyc_Absyn_Exp*e1=_T167;struct Cyc_Absyn_Exp*e2=_T162;
# 344
Cyc_RemoveAggrs_noarray_remove_aggrs_exp(ctxt,Cyc_RemoveAggrs_other_env,e1);
Cyc_RemoveAggrs_noarray_remove_aggrs_exp(ctxt,Cyc_RemoveAggrs_other_env,e2);goto _LL0;}case 13:{struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*_T169=(struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct*)_T15E;_T167= _T169->f1;}{struct Cyc_Absyn_Exp*e1=_T167;_T167= e1;goto _LL2E;}case 12:{struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct*_T169=(struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct*)_T15E;_T167= _T169->f1;}_LL2E: {struct Cyc_Absyn_Exp*e1=_T167;_T167= e1;goto _LL30;}case 14:{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T169=(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T15E;_T167= _T169->f2;}_LL30: {struct Cyc_Absyn_Exp*e1=_T167;_T167= e1;goto _LL32;}case 15:{struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct*_T169=(struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct*)_T15E;_T167= _T169->f1;}_LL32: {struct Cyc_Absyn_Exp*e1=_T167;_T167= e1;goto _LL34;}case 20:{struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*_T169=(struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct*)_T15E;_T167= _T169->f1;}_LL34: {struct Cyc_Absyn_Exp*e1=_T167;_T167= e1;goto _LL36;}case 21:{struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*_T169=(struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct*)_T15E;_T167= _T169->f1;}_LL36: {struct Cyc_Absyn_Exp*e1=_T167;_T167= e1;goto _LL38;}case 22:{struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*_T169=(struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct*)_T15E;_T167= _T169->f1;}_LL38: {struct Cyc_Absyn_Exp*e1=_T167;_T167= e1;goto _LL3A;}case 18:{struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct*_T169=(struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct*)_T15E;_T167= _T169->f1;}_LL3A: {struct Cyc_Absyn_Exp*e1=_T167;_T167= e1;goto _LL3C;}case 5:{struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*_T169=(struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct*)_T15E;_T167= _T169->f1;}_LL3C: {struct Cyc_Absyn_Exp*e1=_T167;
# 366
Cyc_RemoveAggrs_noarray_remove_aggrs_exp(ctxt,Cyc_RemoveAggrs_other_env,e1);goto _LL0;}case 36:{struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct*_T169=(struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct*)_T15E;_T15F= _T169->f1;}{struct Cyc_Absyn_Stmt*s=_T15F;
# 371
Cyc_RemoveAggrs_remove_aggrs_stmt(ctxt,s);goto _LL0;}default: _LL3F:{struct Cyc_Warn_String_Warn_Warg_struct _T169;_T169.tag= 0;
# 375
({__typeof__(_tag_fat("bad exp after translation to C: ",sizeof(char),33U))_T16A=_tag_fat("bad exp after translation to C: ",sizeof(char),33U);_T169.f1= _T16A;});_T13F= _T169;}{struct Cyc_Warn_String_Warn_Warg_struct _T169=_T13F;{struct Cyc_Warn_Exp_Warn_Warg_struct _T16A;_T16A.tag= 4;_T16A.f1= e;_T140= _T16A;}{struct Cyc_Warn_Exp_Warn_Warg_struct _T16A=_T140;void*_T16B[2];_T16B[0]= & _T169;_T16B[1]= & _T16A;_T142= Cyc_Warn_impos2;{int(*_T16C)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T142;_T141= _T16C;}_T143= _tag_fat(_T16B,sizeof(void*),2);_T141(_T143);}}}_LL0:;}_T144= env;_T145= _T144.ctxt;_T146= (int)_T145;
# 377
if(_T146!=2)goto _TL4C;_T147= did_assign;if(_T147)goto _TL4C;else{goto _TL4E;}
_TL4E: _T148= e;_T149= env;_T14A= _T149.dest;_T14B= _check_null(_T14A);_T14C= Cyc_RemoveAggrs_deep_copy(e);_T14D= Cyc_Absyn_assign_exp(_T14B,_T14C,0U);_T148->r= _T14D->r;goto _TL4D;_TL4C: _TL4D: _T14E= env;_T14F= _T14E.ctxt;_T150= (int)_T14F;
if(_T150!=1)goto _TL4F;_T151= did_assign;if(_T151)goto _TL4F;else{goto _TL51;}
_TL51: _T152= e;_T153= env;_T154= _T153.dest;_T155= 
_check_null(_T154);_T156= Cyc_Absyn_deref_exp(_T155,0U);_T157= e;_T158= _T157->topt;_T159= _check_null(_T158);_T15A= Cyc_Absyn_set_type(_T156,_T159);_T15B= Cyc_RemoveAggrs_deep_copy(e);_T15C= Cyc_Absyn_assign_exp(_T15A,_T15B,0U);
# 380
_T152->r= _T15C->r;goto _TL50;_TL4F: _TL50:{struct Cyc_RemoveAggrs_Result _T15E;
# 383
_T15E.res= res;_T15D= _T15E;}return _T15D;}
# 390
static long Cyc_RemoveAggrs_remove_aggrs_stmt_f1(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Absyn_Exp*e){
Cyc_RemoveAggrs_remove_aggrs_exp(ctxt,Cyc_RemoveAggrs_other_env,e);
return 0;}
# 394
static long Cyc_RemoveAggrs_remove_aggrs_stmt_f2(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Absyn_Stmt*s){struct Cyc_Absyn_Stmt*_T0;int*_T1;int _T2;struct Cyc_Absyn_Decl*_T3;int*_T4;unsigned _T5;struct Cyc_Absyn_Vardecl*_T6;enum Cyc_Absyn_Scope _T7;int _T8;struct Cyc_Absyn_Vardecl*_T9;struct Cyc_Absyn_Exp*_TA;struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_TB;void*_TC;struct Cyc_Absyn_Exp*_TD;struct Cyc_Absyn_Vardecl*_TE;struct Cyc_Toc_TocContext*_TF;struct Cyc_RemoveAggrs_Env _T10;struct Cyc_Absyn_Vardecl*_T11;struct Cyc_Absyn_Exp*_T12;struct Cyc_Absyn_Exp*_T13;enum Cyc_RemoveAggrs_ExpResult _T14;int _T15;enum Cyc_RemoveAggrs_ExpResult _T16;int _T17;struct Cyc_Absyn_Stmt*_T18;struct Cyc_Absyn_Decl*_T19;struct Cyc_Absyn_Vardecl*_T1A;struct Cyc_Absyn_Exp*_T1B;struct Cyc_Absyn_Exp*_T1C;struct Cyc_Absyn_Stmt*_T1D;struct Cyc_Absyn_Stmt*_T1E;struct Cyc_Absyn_Stmt*_T1F;struct Cyc_Absyn_Stmt*_T20;struct Cyc_Absyn_Vardecl*_T21;struct Cyc_Toc_TocContext*_T22;struct Cyc_Absyn_Fndecl*_T23;struct Cyc_Absyn_Stmt*_T24;int(*_T25)(struct _fat_ptr,struct _fat_ptr);void*(*_T26)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T27;struct _fat_ptr _T28;_T0= s;{
void*_T29=_T0->r;struct Cyc_Absyn_Stmt*_T2A;struct Cyc_Absyn_Decl*_T2B;_T1= (int*)_T29;_T2= *_T1;if(_T2!=12)goto _TL52;{struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*_T2C=(struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct*)_T29;_T2B= _T2C->f1;_T2A= _T2C->f2;}{struct Cyc_Absyn_Decl*d=_T2B;struct Cyc_Absyn_Stmt*s2=_T2A;
# 397
Cyc_RemoveAggrs_remove_aggrs_stmt(ctxt,s2);_T3= d;{
void*_T2C=_T3->r;struct Cyc_Absyn_Fndecl*_T2D;struct Cyc_Absyn_Vardecl*_T2E;_T4= (int*)_T2C;_T5= *_T4;switch(_T5){case 0:{struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*_T2F=(struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct*)_T2C;_T2E= _T2F->f1;}{struct Cyc_Absyn_Vardecl*vd=_T2E;_T6= vd;_T7= _T6->sc;_T8= (int)_T7;
# 400
if(_T8!=0)goto _TL55;
return 0;_TL55: _T9= vd;_TA= _T9->initializer;
# 409
if(_TA==0)goto _TL57;{struct Cyc_Absyn_Local_b_Absyn_Binding_struct*_T2F=_cycalloc(sizeof(struct Cyc_Absyn_Local_b_Absyn_Binding_struct));_T2F->tag= 4;
_T2F->f1= vd;_TB= (struct Cyc_Absyn_Local_b_Absyn_Binding_struct*)_T2F;}_TC= (void*)_TB;{struct Cyc_Absyn_Exp*var_exp=Cyc_Absyn_varb_exp(_TC,0U);_TD= var_exp;_TE= vd;
_TD->topt= _TE->type;_TF= ctxt;{struct Cyc_RemoveAggrs_Env _T2F;
_T2F.ctxt= 0U;_T2F.dest= var_exp;_T10= _T2F;}_T11= vd;_T12= _T11->initializer;_T13= _check_null(_T12);{struct Cyc_RemoveAggrs_Result _T2F=Cyc_RemoveAggrs_remove_aggrs_exp(_TF,_T10,_T13);enum Cyc_RemoveAggrs_ExpResult _T30;_T30= _T2F.res;{enum Cyc_RemoveAggrs_ExpResult r=_T30;_T14= r;_T15= (int)_T14;
if(_T15==0)goto _TL5B;else{goto _TL5C;}_TL5C: _T16= r;_T17= (int)_T16;if(_T17==1)goto _TL5B;else{goto _TL59;}
_TL5B: _T18= s;_T19= d;_T1A= vd;_T1B= _T1A->initializer;_T1C= _check_null(_T1B);_T1D= Cyc_Absyn_exp_stmt(_T1C,0U);_T1E= s2;_T1F= Cyc_Absyn_seq_stmt(_T1D,_T1E,0U);_T20= Cyc_Absyn_decl_stmt(_T19,_T1F,0U);_T18->r= _T20->r;_T21= vd;
_T21->initializer= 0;goto _TL5A;_TL59: _TL5A:;}}}goto _TL58;_TL57: _TL58:
# 418
 return 0;}case 1:{struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*_T2F=(struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*)_T2C;_T2D= _T2F->f1;}{struct Cyc_Absyn_Fndecl*fd=_T2D;_T22= ctxt;_T23= fd;_T24= _T23->body;
# 420
Cyc_RemoveAggrs_remove_aggrs_stmt(_T22,_T24);
return 0;}default: _T26= Cyc_Warn_impos;{
# 423
int(*_T2F)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T26;_T25= _T2F;}_T27= _tag_fat("bad local declaration after xlation to C",sizeof(char),41U);_T28= _tag_fat(0U,sizeof(void*),0);_T25(_T27,_T28);};}}goto _TL53;_TL52:
# 426
 return 1;_TL53:;}}
# 429
static void Cyc_RemoveAggrs_remove_aggrs_stmt(struct Cyc_Toc_TocContext*ctxt,struct Cyc_Absyn_Stmt*s){void(*_T0)(long(*)(struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Exp*),long(*)(struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Stmt*),struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Stmt*);void(*_T1)(long(*)(void*,struct Cyc_Absyn_Exp*),long(*)(void*,struct Cyc_Absyn_Stmt*),void*,struct Cyc_Absyn_Stmt*);struct Cyc_Toc_TocContext*_T2;struct Cyc_Absyn_Stmt*_T3;_T1= Cyc_Absyn_visit_stmt;{
void(*_T4)(long(*)(struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Exp*),long(*)(struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Stmt*),struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Stmt*)=(void(*)(long(*)(struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Exp*),long(*)(struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Stmt*),struct Cyc_Toc_TocContext*,struct Cyc_Absyn_Stmt*))_T1;_T0= _T4;}_T2= ctxt;_T3= s;_T0(Cyc_RemoveAggrs_remove_aggrs_stmt_f1,Cyc_RemoveAggrs_remove_aggrs_stmt_f2,_T2,_T3);}
# 433
struct Cyc_List_List*Cyc_RemoveAggrs_remove_aggrs(struct Cyc_Toc_TocContext*ctxt,struct Cyc_List_List*ds){struct Cyc_List_List*_T0;void*_T1;struct Cyc_Absyn_Decl*_T2;int*_T3;unsigned _T4;struct Cyc_Absyn_Fndecl*_T5;enum Cyc_Absyn_Scope _T6;int _T7;struct Cyc_Toc_TocContext*_T8;struct Cyc_Absyn_Fndecl*_T9;struct Cyc_Absyn_Stmt*_TA;int(*_TB)(struct _fat_ptr,struct _fat_ptr);void*(*_TC)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _TD;struct _fat_ptr _TE;int(*_TF)(struct _fat_ptr,struct _fat_ptr);void*(*_T10)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T11;struct _fat_ptr _T12;struct Cyc_List_List*_T13;struct Cyc_List_List*_T14;{
struct Cyc_List_List*ds2=ds;_TL60: if(ds2!=0)goto _TL5E;else{goto _TL5F;}
_TL5E: _T0= ds2;_T1= _T0->hd;_T2= (struct Cyc_Absyn_Decl*)_T1;{void*_T15=_T2->r;struct Cyc_Absyn_Fndecl*_T16;_T3= (int*)_T15;_T4= *_T3;switch(_T4){case 1:{struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*_T17=(struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct*)_T15;_T16= _T17->f1;}{struct Cyc_Absyn_Fndecl*fd=_T16;_T5= fd;_T6= _T5->orig_scope;_T7= (int)_T6;
# 437
if(_T7==4)goto _TL62;_T8= ctxt;_T9= fd;_TA= _T9->body;
Cyc_RemoveAggrs_remove_aggrs_stmt(_T8,_TA);goto _TL63;_TL62: _TL63: goto _LL0;}case 0: goto _LL6;case 5: _LL6: goto _LL8;case 7: _LL8: goto _LLA;case 8: _LLA: goto _LL0;case 4: goto _LLE;case 6: _LLE: goto _LL10;case 2: _LL10: goto _LL12;case 3: _LL12: _TC= Cyc_Warn_impos;{
# 449
int(*_T17)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_TC;_TB= _T17;}_TD= _tag_fat("Cyclone decl after xlation to C",sizeof(char),32U);_TE= _tag_fat(0U,sizeof(void*),0);_TB(_TD,_TE);case 9: goto _LL16;case 10: _LL16: goto _LL18;case 11: _LL18: goto _LL1A;case 12: _LL1A: goto _LL1C;case 13: _LL1C: goto _LL1E;case 14: _LL1E: goto _LL20;case 15: _LL20: goto _LL22;default: _LL22: _T10= Cyc_Warn_impos;{
# 458
int(*_T17)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T10;_TF= _T17;}_T11= _tag_fat("translation unit after xlation to C",sizeof(char),36U);_T12= _tag_fat(0U,sizeof(void*),0);_TF(_T11,_T12);}_LL0:;}_T13= ds2;
# 434
ds2= _T13->tl;goto _TL60;_TL5F:;}_T14= ds;
# 460
return _T14;}
