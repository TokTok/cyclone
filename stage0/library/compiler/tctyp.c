#include <cyc_include.h>
 struct Cyc_Core_Opt{void*v;};struct _tuple0{void*f0;void*f1;};
# 106 "./cyclone/library/std/core.h"
void*Cyc_Core_fst(struct _tuple0*);
# 112
void*Cyc_Core_identity(void*);extern char Cyc_Core_Not_found[10U];struct Cyc_Core_Not_found_exn_struct{char*tag;};struct Cyc_List_List{void*hd;struct Cyc_List_List*tl;};
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
# 196
extern struct Cyc_List_List*Cyc_List_imp_append(struct Cyc_List_List*,struct Cyc_List_List*);
# 239
extern void*Cyc_List_nth(struct Cyc_List_List*,int);
# 255
extern long Cyc_List_exists(long(*)(void*),struct Cyc_List_List*);
# 258
extern long Cyc_List_exists_c(long(*)(void*,void*),void*,struct Cyc_List_List*);
# 317
extern long Cyc_List_mem(int(*)(void*,void*),struct Cyc_List_List*,void*);
# 331
extern void*Cyc_List_assoc_cmp(int(*)(void*,void*),struct Cyc_List_List*,void*);
# 386
extern struct Cyc_List_List*Cyc_List_filter(long(*)(void*),struct Cyc_List_List*);
# 51 "./cyclone/library/std/string.h"
extern int Cyc_strcmp(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_strptrcmp(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_AssnDef_ExistAssnFn;struct _union_Nmspace_Abs_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_Rel_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_C_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_Loc_n{int tag;int val;};union Cyc_Absyn_Nmspace{struct _union_Nmspace_Abs_n Abs_n;struct _union_Nmspace_Rel_n Rel_n;struct _union_Nmspace_C_n C_n;struct _union_Nmspace_Loc_n Loc_n;};struct _tuple1{union Cyc_Absyn_Nmspace f0;struct _fat_ptr*f1;};
# 148 "cyclone/library/compiler/absyn.h"
enum Cyc_Absyn_Scope{Cyc_Absyn_Static =0U,Cyc_Absyn_Abstract =1U,Cyc_Absyn_Public =2U,Cyc_Absyn_Extern =3U,Cyc_Absyn_ExternC =4U,Cyc_Absyn_Register =5U,Cyc_Absyn_Noreturn =6U};struct Cyc_Absyn_Tqual{long print_const: 1;long q_volatile: 1;long q_restrict: 1;long real_const: 1;unsigned loc;};
# 186
enum Cyc_Absyn_AggrKind{Cyc_Absyn_StructA =0U,Cyc_Absyn_UnionA =1U};
# 210 "cyclone/library/compiler/absyn.h"
enum Cyc_Absyn_AliasHint{Cyc_Absyn_UniqueHint =0U,Cyc_Absyn_RefcntHint =1U,Cyc_Absyn_RestrictedHint =2U,Cyc_Absyn_NoHint =3U};
# 217
enum Cyc_Absyn_KindQual{Cyc_Absyn_AnyKind =0U,Cyc_Absyn_MemKind =1U,Cyc_Absyn_BoxKind =2U,Cyc_Absyn_EffKind =3U,Cyc_Absyn_IntKind =4U,Cyc_Absyn_BoolKind =5U,Cyc_Absyn_PtrBndKind =6U,Cyc_Absyn_AqualKind =7U};struct Cyc_Absyn_Kind{enum Cyc_Absyn_KindQual kind;enum Cyc_Absyn_AliasHint aliashint;};struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct{int tag;struct Cyc_Absyn_Kind*f1;};struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct{int tag;struct Cyc_Core_Opt*f1;};struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct{int tag;struct Cyc_Core_Opt*f1;struct Cyc_Absyn_Kind*f2;};struct Cyc_Absyn_Tvar{struct _fat_ptr*name;int identity;void*kind;void*aquals_bound;};struct Cyc_Absyn_PtrLoc{unsigned ptr_loc;unsigned rgn_loc;unsigned zt_loc;};struct Cyc_Absyn_PtrAtts{void*eff;void*nullable;void*bounds;void*zero_term;struct Cyc_Absyn_PtrLoc*ptrloc;void*autoreleased;void*aqual;};struct Cyc_Absyn_PtrInfo{void*elt_type;struct Cyc_Absyn_Tqual elt_tq;struct Cyc_Absyn_PtrAtts ptr_atts;};struct Cyc_Absyn_VarargInfo{struct _fat_ptr*name;struct Cyc_Absyn_Tqual tq;void*type;long inject;};struct Cyc_Absyn_FnInfo{struct Cyc_List_List*tvars;void*effect;struct Cyc_Absyn_Tqual ret_tqual;void*ret_type;struct Cyc_List_List*args;long c_varargs;struct Cyc_Absyn_VarargInfo*cyc_varargs;struct Cyc_List_List*qual_bnd;struct Cyc_List_List*attributes;struct Cyc_Absyn_Exp*checks_clause;struct Cyc_AssnDef_ExistAssnFn*checks_assn;struct Cyc_Absyn_Exp*requires_clause;struct Cyc_AssnDef_ExistAssnFn*requires_assn;struct Cyc_Absyn_Exp*ensures_clause;struct Cyc_AssnDef_ExistAssnFn*ensures_assn;struct Cyc_Absyn_Exp*throws_clause;struct Cyc_AssnDef_ExistAssnFn*throws_assn;struct Cyc_Absyn_Vardecl*return_value;struct Cyc_List_List*arg_vardecls;struct Cyc_List_List*effconstr;};struct Cyc_Absyn_UnknownDatatypeInfo{struct _tuple1*name;long is_extensible;};struct _union_DatatypeInfo_UnknownDatatype{int tag;struct Cyc_Absyn_UnknownDatatypeInfo val;};struct _union_DatatypeInfo_KnownDatatype{int tag;struct Cyc_Absyn_Datatypedecl**val;};union Cyc_Absyn_DatatypeInfo{struct _union_DatatypeInfo_UnknownDatatype UnknownDatatype;struct _union_DatatypeInfo_KnownDatatype KnownDatatype;};
# 350
union Cyc_Absyn_DatatypeInfo Cyc_Absyn_KnownDatatype(struct Cyc_Absyn_Datatypedecl**);struct Cyc_Absyn_UnknownDatatypeFieldInfo{struct _tuple1*datatype_name;struct _tuple1*field_name;long is_extensible;};struct _union_DatatypeFieldInfo_UnknownDatatypefield{int tag;struct Cyc_Absyn_UnknownDatatypeFieldInfo val;};struct _tuple2{struct Cyc_Absyn_Datatypedecl*f0;struct Cyc_Absyn_Datatypefield*f1;};struct _union_DatatypeFieldInfo_KnownDatatypefield{int tag;struct _tuple2 val;};union Cyc_Absyn_DatatypeFieldInfo{struct _union_DatatypeFieldInfo_UnknownDatatypefield UnknownDatatypefield;struct _union_DatatypeFieldInfo_KnownDatatypefield KnownDatatypefield;};
# 365
union Cyc_Absyn_DatatypeFieldInfo Cyc_Absyn_KnownDatatypefield(struct Cyc_Absyn_Datatypedecl*,struct Cyc_Absyn_Datatypefield*);struct _tuple3{enum Cyc_Absyn_AggrKind f0;struct _tuple1*f1;struct Cyc_Core_Opt*f2;};struct _union_AggrInfo_UnknownAggr{int tag;struct _tuple3 val;};struct _union_AggrInfo_KnownAggr{int tag;struct Cyc_Absyn_Aggrdecl**val;};union Cyc_Absyn_AggrInfo{struct _union_AggrInfo_UnknownAggr UnknownAggr;struct _union_AggrInfo_KnownAggr KnownAggr;};
# 373
union Cyc_Absyn_AggrInfo Cyc_Absyn_KnownAggr(struct Cyc_Absyn_Aggrdecl**);struct Cyc_Absyn_ArrayInfo{void*elt_type;struct Cyc_Absyn_Tqual tq;struct Cyc_Absyn_Exp*num_elts;void*zero_term;unsigned zt_loc;};struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct{int tag;struct Cyc_Absyn_Aggrdecl*f1;};struct Cyc_Absyn_Enum_td_Absyn_Raw_typedecl_struct{int tag;struct Cyc_Absyn_Enumdecl*f1;};struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct{int tag;struct Cyc_Absyn_Datatypedecl*f1;};struct Cyc_Absyn_TypeDecl{void*r;unsigned loc;};struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct{int tag;struct _tuple1*f1;struct Cyc_Absyn_Enumdecl*f2;};struct Cyc_Absyn_AnonEnumCon_Absyn_TyCon_struct{int tag;struct Cyc_List_List*f1;};struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct{int tag;union Cyc_Absyn_DatatypeInfo f1;};struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct{int tag;union Cyc_Absyn_DatatypeFieldInfo f1;};struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct{int tag;union Cyc_Absyn_AggrInfo f1;};struct Cyc_Absyn_SingleConstraint_Absyn_EffConstraint_struct{int tag;void*f1;};struct Cyc_Absyn_DisjointConstraint_Absyn_EffConstraint_struct{int tag;void*f1;void*f2;};struct Cyc_Absyn_SubsetConstraint_Absyn_EffConstraint_struct{int tag;void*f1;void*f2;};struct Cyc_Absyn_AppType_Absyn_Type_struct{int tag;void*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_Evar_Absyn_Type_struct{int tag;struct Cyc_Core_Opt*f1;void*f2;int f3;struct Cyc_Core_Opt*f4;};struct Cyc_Absyn_VarType_Absyn_Type_struct{int tag;struct Cyc_Absyn_Tvar*f1;};struct Cyc_Absyn_Cvar_Absyn_Type_struct{int tag;struct Cyc_Core_Opt*f1;void*f2;int f3;void*f4;const char*f5;const char*f6;long f7;};struct Cyc_Absyn_PointerType_Absyn_Type_struct{int tag;struct Cyc_Absyn_PtrInfo f1;};struct Cyc_Absyn_ArrayType_Absyn_Type_struct{int tag;struct Cyc_Absyn_ArrayInfo f1;};struct Cyc_Absyn_FnType_Absyn_Type_struct{int tag;struct Cyc_Absyn_FnInfo f1;};struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct{int tag;enum Cyc_Absyn_AggrKind f1;long f2;struct Cyc_List_List*f3;};struct Cyc_Absyn_TypedefType_Absyn_Type_struct{int tag;struct _tuple1*f1;struct Cyc_List_List*f2;struct Cyc_Absyn_Typedefdecl*f3;void*f4;};struct Cyc_Absyn_ValueofType_Absyn_Type_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct{int tag;struct Cyc_Absyn_TypeDecl*f1;void**f2;};struct Cyc_Absyn_TypeofType_Absyn_Type_struct{int tag;struct Cyc_Absyn_Exp*f1;};struct Cyc_Absyn_SubsetType_Absyn_Type_struct{int tag;struct Cyc_Absyn_Vardecl*f1;struct Cyc_Absyn_Exp*f2;struct Cyc_AssnDef_ExistAssnFn*f3;};
# 493
enum Cyc_Absyn_Format_Type{Cyc_Absyn_Printf_ft =0U,Cyc_Absyn_Scanf_ft =1U};struct Cyc_Absyn_Format_att_Absyn_Attribute_struct{int tag;enum Cyc_Absyn_Format_Type f1;int f2;int f3;};
# 660
enum Cyc_Absyn_Coercion{Cyc_Absyn_Unknown_coercion =0U,Cyc_Absyn_No_coercion =1U,Cyc_Absyn_Null_to_NonNull =2U,Cyc_Absyn_Subset_coercion =3U,Cyc_Absyn_Other_coercion =4U};struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct{int tag;void*f1;struct Cyc_Absyn_Exp*f2;long f3;enum Cyc_Absyn_Coercion f4;};struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct{int tag;void*f1;};struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct{int tag;void*f1;struct Cyc_List_List*f2;};struct _tuple9{struct _fat_ptr*f0;struct Cyc_Absyn_Tqual f1;void*f2;};struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct{int tag;void*f1;};struct Cyc_Absyn_Exp{void*topt;void*r;unsigned loc;void*annot;};struct Cyc_Absyn_Stmt{void*r;unsigned loc;void*annot;};struct Cyc_Absyn_Vardecl{enum Cyc_Absyn_Scope sc;struct _tuple1*name;unsigned varloc;struct Cyc_Absyn_Tqual tq;void*type;struct Cyc_Absyn_Exp*initializer;void*rgn;struct Cyc_List_List*attributes;long escapes;long is_proto;struct Cyc_Absyn_Exp*rename;};struct Cyc_Absyn_Fndecl{enum Cyc_Absyn_Scope sc;long is_inline;struct _tuple1*name;struct Cyc_Absyn_Stmt*body;struct Cyc_Absyn_FnInfo i;void*cached_type;struct Cyc_Core_Opt*param_vardecls;struct Cyc_Absyn_Vardecl*fn_vardecl;enum Cyc_Absyn_Scope orig_scope;long escapes;};struct Cyc_Absyn_Aggrfield{struct _fat_ptr*name;struct Cyc_Absyn_Tqual tq;void*type;struct Cyc_Absyn_Exp*width;struct Cyc_List_List*attributes;struct Cyc_Absyn_Exp*requires_clause;};struct Cyc_Absyn_AggrdeclImpl{struct Cyc_List_List*exist_vars;struct Cyc_List_List*qual_bnd;struct Cyc_List_List*fields;long tagged;struct Cyc_List_List*effconstr;};struct Cyc_Absyn_Aggrdecl{enum Cyc_Absyn_AggrKind kind;enum Cyc_Absyn_Scope sc;struct _tuple1*name;struct Cyc_List_List*tvs;struct Cyc_Absyn_AggrdeclImpl*impl;struct Cyc_List_List*attributes;long expected_mem_kind;};struct Cyc_Absyn_Datatypefield{struct _tuple1*name;struct Cyc_List_List*typs;unsigned loc;enum Cyc_Absyn_Scope sc;};struct Cyc_Absyn_Datatypedecl{enum Cyc_Absyn_Scope sc;struct _tuple1*name;struct Cyc_List_List*tvs;struct Cyc_Core_Opt*fields;long is_extensible;};struct Cyc_Absyn_Enumfield{struct _tuple1*name;struct Cyc_Absyn_Exp*tag;unsigned loc;};struct Cyc_Absyn_Enumdecl{enum Cyc_Absyn_Scope sc;struct _tuple1*name;struct Cyc_Core_Opt*fields;};struct Cyc_Absyn_Typedefdecl{struct _tuple1*name;struct Cyc_Absyn_Tqual tq;struct Cyc_List_List*tvs;struct Cyc_Core_Opt*kind;void*defn;struct Cyc_List_List*atts;long extern_c;};
# 1049
int Cyc_Absyn_qvar_cmp(struct _tuple1*,struct _tuple1*);
# 1052
int Cyc_Absyn_tvar_cmp(struct Cyc_Absyn_Tvar*,struct Cyc_Absyn_Tvar*);
# 1070
void*Cyc_Absyn_compress(void*);
# 1074
long Cyc_Absyn_type2bool(long,void*);
# 1083
void*Cyc_Absyn_new_evar(struct Cyc_Core_Opt*,struct Cyc_Core_Opt*);
# 1097
extern void*Cyc_Absyn_heap_rgn_type;
# 1099
extern void*Cyc_Absyn_al_qual_type;extern void*Cyc_Absyn_un_qual_type;extern void*Cyc_Absyn_rc_qual_type;extern void*Cyc_Absyn_rtd_qual_type;
# 1103
extern void*Cyc_Absyn_true_type;extern void*Cyc_Absyn_false_type;
# 1105
extern void*Cyc_Absyn_void_type;extern void*Cyc_Absyn_var_type(struct Cyc_Absyn_Tvar*);extern void*Cyc_Absyn_aqual_var_type(void*,void*);extern void*Cyc_Absyn_join_eff(struct Cyc_List_List*);extern void*Cyc_Absyn_regionsof_eff(void*);
# 1123
struct _tuple1*Cyc_Absyn_datatype_print_arg_qvar (void);
struct _tuple1*Cyc_Absyn_datatype_scanf_arg_qvar (void);
# 1133
void*Cyc_Absyn_bounds_one (void);
# 1136
void*Cyc_Absyn_fatconst (void);
void*Cyc_Absyn_thinconst (void);
# 1168
void*Cyc_Absyn_aqualsof_type(void*);
# 1192
struct Cyc_Absyn_Exp*Cyc_Absyn_uint_exp(unsigned,unsigned);
# 1360
void Cyc_Absyn_visit_exp(long(*)(void*,struct Cyc_Absyn_Exp*),long(*)(void*,struct Cyc_Absyn_Stmt*),void*,struct Cyc_Absyn_Exp*);
# 82 "cyclone/library/compiler/attributes.h"
long Cyc_Atts_fntype_att(void*);
# 86
void Cyc_Atts_check_field_atts(unsigned,struct _fat_ptr*,struct Cyc_List_List*);
# 20 "cyclone/library/compiler/bansheeif.h"
void*Cyc_BansheeIf_equality_constraint(void*,void*);
# 32
long Cyc_BansheeIf_add_constraint(unsigned,void*);struct Cyc_Dict_T;struct Cyc_Dict_Dict{int(*rel)(void*,void*);struct _RegionHandle*r;const struct Cyc_Dict_T*t;};extern char Cyc_Dict_Absent[7U];struct Cyc_Dict_Absent_exn_struct{char*tag;};struct Cyc_Tcenv_Genv{struct Cyc_Dict_Dict aggrdecls;struct Cyc_Dict_Dict datatypedecls;struct Cyc_Dict_Dict enumdecls;struct Cyc_Dict_Dict typedefs;struct Cyc_Dict_Dict ordinaries;};struct Cyc_Tcenv_Fenv;struct Cyc_Tcenv_Tenv{struct Cyc_List_List*ns;struct Cyc_Tcenv_Genv*ae;struct Cyc_Tcenv_Fenv*le;long allow_valueof: 1;long in_extern_c_include: 1;long in_tempest: 1;long tempest_generalize: 1;long in_extern_c_inc_repeat: 1;};
# 72 "cyclone/library/compiler/tcenv.h"
struct Cyc_Tcenv_Fenv*Cyc_Tcenv_bogus_fenv(void*,struct Cyc_List_List*);
# 76
struct Cyc_Absyn_Aggrdecl**Cyc_Tcenv_lookup_aggrdecl(struct Cyc_Tcenv_Tenv*,unsigned,struct _tuple1*);
struct Cyc_Absyn_Datatypedecl**Cyc_Tcenv_lookup_datatypedecl(struct Cyc_Tcenv_Tenv*,unsigned,struct _tuple1*);
# 79
struct Cyc_Absyn_Enumdecl**Cyc_Tcenv_lookup_enumdecl(struct Cyc_Tcenv_Tenv*,unsigned,struct _tuple1*);
struct Cyc_Absyn_Typedefdecl*Cyc_Tcenv_lookup_typedefdecl(struct Cyc_Tcenv_Tenv*,unsigned,struct _tuple1*);
# 82
struct Cyc_Tcenv_Tenv*Cyc_Tcenv_allow_valueof(struct Cyc_Tcenv_Tenv*);
# 98
struct Cyc_List_List*Cyc_Tcenv_lookup_type_vars(struct Cyc_Tcenv_Tenv*);
# 141
struct Cyc_List_List*Cyc_Tcenv_curr_aquals_bounds(struct Cyc_Tcenv_Tenv*);
# 29 "cyclone/library/compiler/currgn.h"
extern struct _fat_ptr Cyc_CurRgn_curr_rgn_name;
# 35
long Cyc_CurRgn_is_curr_rgn(struct Cyc_Absyn_Tvar*);
long Cyc_CurRgn_is_not_curr_rgn(struct Cyc_Absyn_Tvar*);struct _tuple14{unsigned f0;long f1;};
# 29 "cyclone/library/compiler/evexp.h"
extern struct _tuple14 Cyc_Evexp_eval_const_uint_exp(struct Cyc_Absyn_Exp*);
# 31 "cyclone/library/compiler/kinds.h"
extern struct Cyc_Absyn_Kind Cyc_Kinds_ak;
extern struct Cyc_Absyn_Kind Cyc_Kinds_bk;
extern struct Cyc_Absyn_Kind Cyc_Kinds_mk;
extern struct Cyc_Absyn_Kind Cyc_Kinds_ek;
extern struct Cyc_Absyn_Kind Cyc_Kinds_ik;
extern struct Cyc_Absyn_Kind Cyc_Kinds_boolk;
extern struct Cyc_Absyn_Kind Cyc_Kinds_ptrbk;
extern struct Cyc_Absyn_Kind Cyc_Kinds_aqk;
# 66 "cyclone/library/compiler/kinds.h"
extern struct Cyc_Core_Opt Cyc_Kinds_aqko;
# 84 "cyclone/library/compiler/kinds.h"
struct Cyc_Core_Opt*Cyc_Kinds_kind_to_opt(struct Cyc_Absyn_Kind*);
# 91
struct Cyc_Absyn_Kind*Cyc_Kinds_tvar_kind(struct Cyc_Absyn_Tvar*,struct Cyc_Absyn_Kind*);
struct Cyc_Core_Opt Cyc_Kinds_tvar_kind_opt(struct Cyc_Absyn_Tvar*);
# 97
void*Cyc_Kinds_compress_kb(void*);
# 101
long Cyc_Kinds_kind_leq(struct Cyc_Absyn_Kind*,struct Cyc_Absyn_Kind*);
long Cyc_Kinds_kind_eq(struct Cyc_Absyn_Kind*,struct Cyc_Absyn_Kind*);
# 105
struct Cyc_Core_Opt*Cyc_Kinds_kind_to_bound_opt(struct Cyc_Absyn_Kind*);
long Cyc_Kinds_constrain_kinds(void*,void*);struct Cyc_Tc_TcContext{long debug;struct _fat_ptr tc_msg;};
# 44 "cyclone/library/compiler/tc.h"
void Cyc_Tc_tcAggrdecl(struct Cyc_Tc_TcContext*,struct Cyc_Tcenv_Tenv*,unsigned,struct Cyc_Absyn_Aggrdecl*);
void Cyc_Tc_tcDatatypedecl(struct Cyc_Tc_TcContext*,struct Cyc_Tcenv_Tenv*,unsigned,struct Cyc_Absyn_Datatypedecl*);
void Cyc_Tc_tcEnumdecl(struct Cyc_Tc_TcContext*,struct Cyc_Tcenv_Tenv*,unsigned,struct Cyc_Absyn_Enumdecl*);
# 27 "cyclone/library/compiler/tcexp.h"
void*Cyc_Tcexp_tcExp(struct Cyc_Tc_TcContext*,struct Cyc_Tcenv_Tenv*,void**,struct Cyc_Absyn_Exp*);
# 31 "cyclone/library/compiler/tcutil.h"
long Cyc_Tcutil_is_char_type(void*);
# 39
long Cyc_Tcutil_is_function_type(void*);
# 42
long Cyc_Tcutil_is_array_type(void*);
# 59
void*Cyc_Tcutil_pointer_elt_type(void*);
# 69
struct Cyc_Absyn_Exp*Cyc_Tcutil_get_bounds_exp(void*,void*);
# 82
struct Cyc_Absyn_Exp*Cyc_Tcutil_get_bounds_exp(void*,void*);
# 85
long Cyc_Tcutil_is_integral(struct Cyc_Absyn_Exp*);
# 92
void*Cyc_Tcutil_copy_type(void*);
# 99
struct Cyc_Absyn_Kind*Cyc_Tcutil_type_kind(void*);
# 101
long Cyc_Tcutil_coerce_uint_type(struct Cyc_Absyn_Exp*);
# 128
int Cyc_Tcutil_typecmp(void*,void*);
# 131
void*Cyc_Tcutil_substitute(struct Cyc_List_List*,void*);
# 155
void*Cyc_Tcutil_fndecl2type(struct Cyc_Absyn_Fndecl*);
# 164
void Cyc_Tcutil_check_bitfield(unsigned,void*,struct Cyc_Absyn_Exp*,struct _fat_ptr*);
# 166
void Cyc_Tcutil_check_unique_vars(struct Cyc_List_List*,unsigned,struct _fat_ptr);
void Cyc_Tcutil_check_unique_tvars(unsigned,struct Cyc_List_List*);
# 205
void*Cyc_Tcutil_normalize_effect(void*);
# 208
struct Cyc_Absyn_Tvar*Cyc_Tcutil_new_tvar(void*);
# 210
int Cyc_Tcutil_new_tvar_id (void);
# 219
long Cyc_Tcutil_is_const_exp(struct Cyc_Absyn_Exp*);
# 225
long Cyc_Tcutil_extract_const_from_typedef(unsigned,long,void*);
# 228
void Cyc_Tcutil_check_no_qual(unsigned,void*);
# 239
void*Cyc_Tcutil_promote_array(void*,void*,void*,long);
# 246
long Cyc_Tcutil_force_type2bool(long,void*);
# 254
long Cyc_Tcutil_admits_zero(void*);
int Cyc_Tcutil_fast_tvar_cmp(struct Cyc_Absyn_Tvar*,struct Cyc_Absyn_Tvar*);
# 262
void*Cyc_Tcutil_lookup_aquals_opt(struct Cyc_List_List*,void*);struct _tuple15{struct Cyc_Absyn_Tvar*f0;long f1;};
# 266
struct _tuple15*Cyc_Tcutil_tvar_bool_pair(long,struct Cyc_Absyn_Tvar*);
# 268
long Cyc_Tcutil_type_in_effect(long,void*,void*);
# 270
long Cyc_Tcutil_is_cvar_type(void*);
void*Cyc_Tcutil_ptrbnd_cvar_equivalent(void*);
# 29 "cyclone/library/compiler/unify.h"
long Cyc_Unify_unify(void*,void*);struct Cyc_Set_Set;
# 152 "cyclone/library/compiler/assndef.h"
extern struct Cyc_Absyn_Vardecl*Cyc_AssnDef_memory;
extern struct Cyc_Absyn_Vardecl*Cyc_AssnDef_pre_memory;struct Cyc_AssnDef_AssnFn{struct Cyc_List_List*actuals;void*assn;};struct Cyc_AssnDef_ExistAssnFn{struct Cyc_AssnDef_AssnFn*af;struct Cyc_Set_Set*existvars;};struct Cyc_AssnDef_AssnMap{void*assn;struct Cyc_Dict_Dict map;};
# 286
extern struct Cyc_AssnDef_ExistAssnFn*Cyc_AssnDef_assnmap2existassnfn(struct Cyc_AssnDef_AssnMap,struct Cyc_List_List*);
# 296
extern struct Cyc_AssnDef_AssnMap Cyc_AssnDef_true_assnmap (void);
# 40 "cyclone/library/compiler/vcgen.h"
extern struct Cyc_AssnDef_AssnMap Cyc_Vcgen_clause2assn(struct Cyc_Absyn_Exp*);
# 56 "cyclone/library/compiler/warn.h"
void*Cyc_Warn_impos_loc(unsigned,struct _fat_ptr,struct _fat_ptr);struct Cyc_Warn_String_Warn_Warg_struct{int tag;struct _fat_ptr f1;};struct Cyc_Warn_Qvar_Warn_Warg_struct{int tag;struct _tuple1*f1;};struct Cyc_Warn_Typ_Warn_Warg_struct{int tag;void*f1;};struct Cyc_Warn_TypOpt_Warn_Warg_struct{int tag;void*f1;};struct Cyc_Warn_Tvar_Warn_Warg_struct{int tag;struct Cyc_Absyn_Tvar*f1;};struct Cyc_Warn_KindBound_Warn_Warg_struct{int tag;void*f1;};struct Cyc_Warn_Kind_Warn_Warg_struct{int tag;struct Cyc_Absyn_Kind*f1;};struct Cyc_Warn_Attribute_Warn_Warg_struct{int tag;void*f1;};
# 79
void Cyc_Warn_err2(unsigned,struct _fat_ptr);
void Cyc_Warn_warn2(unsigned,struct _fat_ptr);
# 82
void*Cyc_Warn_impos2(struct _fat_ptr);struct Cyc_Tctyp_CVTEnv{struct Cyc_Tc_TcContext*ctx;unsigned loc;struct Cyc_Tcenv_Tenv*te;struct Cyc_List_List*kind_env;long fn_result;long def_aliasable;long inst_type_evar;long generalize_evars;long allow_aqual_bounds;struct Cyc_List_List*free_vars;struct Cyc_List_List*free_evars;struct Cyc_List_List*free_qualvars;};
# 98 "cyclone/library/compiler/tctyp.cyc"
static struct Cyc_Tctyp_CVTEnv Cyc_Tctyp_i_check_type(struct Cyc_Tctyp_CVTEnv,struct Cyc_Absyn_Kind*,void*,long,long);struct _tuple16{void*f0;long f1;};
# 104
static struct Cyc_List_List*Cyc_Tctyp_add_free_evar(struct Cyc_List_List*es,void*e,long b){int*_T0;int _T1;struct Cyc_List_List*_T2;void*_T3;long*_T4;int*_T5;int _T6;long _T7;long*_T8;long _T9;long*_TA;struct Cyc_List_List*_TB;struct Cyc_List_List*_TC;struct Cyc_List_List*_TD;struct _tuple16*_TE;struct Cyc_List_List*_TF;
void*_T10=Cyc_Absyn_compress(e);int _T11;_T0= (int*)_T10;_T1= *_T0;if(_T1!=1)goto _TL0;{struct Cyc_Absyn_Evar_Absyn_Type_struct*_T12=(struct Cyc_Absyn_Evar_Absyn_Type_struct*)_T10;_T11= _T12->f3;}{int i=_T11;{
# 107
struct Cyc_List_List*es2=es;_TL5: if(es2!=0)goto _TL3;else{goto _TL4;}
_TL3: _T2= es2;_T3= _T2->hd;{struct _tuple16*_T12=(struct _tuple16*)_T3;void*_T13;void*_T14;{struct _tuple16 _T15=*_T12;_T14= _T15.f0;_T4= & _T12->f1;_T13= (long*)_T4;}{void*t=_T14;long*b2=(long*)_T13;
void*_T15=Cyc_Absyn_compress(t);int _T16;_T5= (int*)_T15;_T6= *_T5;if(_T6!=1)goto _TL6;{struct Cyc_Absyn_Evar_Absyn_Type_struct*_T17=(struct Cyc_Absyn_Evar_Absyn_Type_struct*)_T15;_T16= _T17->f3;}{int j=_T16;
# 111
if(i!=j)goto _TL8;_T7= b;_T8= b2;_T9= *_T8;
if(_T7==_T9)goto _TLA;_TA= b2;
*_TA= 1;goto _TLB;_TLA: _TLB: _TB= es;
return _TB;_TL8: goto _LL8;}_TL6: goto _LL8;_LL8:;}}_TC= es2;
# 107
es2= _TC->tl;goto _TL5;_TL4:;}{struct Cyc_List_List*_T12=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple16*_T13=_cycalloc(sizeof(struct _tuple16));
# 121
_T13->f0= e;_T13->f1= b;_TE= (struct _tuple16*)_T13;}_T12->hd= _TE;_T12->tl= es;_TD= (struct Cyc_List_List*)_T12;}return _TD;}_TL0: _TF= es;
# 123
return _TF;;}
# 128
static struct Cyc_List_List*Cyc_Tctyp_add_bound_tvar(struct Cyc_List_List*tvs,struct Cyc_Absyn_Tvar*tv){struct Cyc_Absyn_Tvar*_T0;int _T1;int _T2;struct Cyc_Warn_String_Warn_Warg_struct _T3;struct Cyc_Warn_Tvar_Warn_Warg_struct _T4;struct Cyc_Warn_String_Warn_Warg_struct _T5;int(*_T6)(struct _fat_ptr);void*(*_T7)(struct _fat_ptr);struct _fat_ptr _T8;struct Cyc_List_List*_T9;_T0= tv;_T1= _T0->identity;_T2= - 1;
if(_T1!=_T2)goto _TLC;{struct Cyc_Warn_String_Warn_Warg_struct _TA;_TA.tag= 0;
({__typeof__(_tag_fat("bound tvar id for ",sizeof(char),19U))_TB=_tag_fat("bound tvar id for ",sizeof(char),19U);_TA.f1= _TB;});_T3= _TA;}{struct Cyc_Warn_String_Warn_Warg_struct _TA=_T3;{struct Cyc_Warn_Tvar_Warn_Warg_struct _TB;_TB.tag= 7;_TB.f1= tv;_T4= _TB;}{struct Cyc_Warn_Tvar_Warn_Warg_struct _TB=_T4;{struct Cyc_Warn_String_Warn_Warg_struct _TC;_TC.tag= 0;({__typeof__(_tag_fat(" is NULL",sizeof(char),9U))_TD=_tag_fat(" is NULL",sizeof(char),9U);_TC.f1= _TD;});_T5= _TC;}{struct Cyc_Warn_String_Warn_Warg_struct _TC=_T5;void*_TD[3];_TD[0]= & _TA;_TD[1]= & _TB;_TD[2]= & _TC;_T7= Cyc_Warn_impos2;{int(*_TE)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T7;_T6= _TE;}_T8= _tag_fat(_TD,sizeof(void*),3);_T6(_T8);}}}goto _TLD;_TLC: _TLD:{struct Cyc_List_List*_TA=_cycalloc(sizeof(struct Cyc_List_List));
_TA->hd= tv;_TA->tl= tvs;_T9= (struct Cyc_List_List*)_TA;}return _T9;}
# 133
static struct Cyc_List_List*Cyc_Tctyp_remove_bound_tvars(struct Cyc_List_List*tvs,struct Cyc_List_List*btvs,struct Cyc_Absyn_Tvar*(*get)(void*)){struct Cyc_List_List*_T0;void*_T1;struct Cyc_Absyn_Tvar*_T2;int _T3;struct Cyc_List_List*_T4;void*_T5;struct Cyc_Absyn_Tvar*_T6;int _T7;struct Cyc_List_List*_T8;struct Cyc_List_List*_T9;struct Cyc_List_List*_TA;struct Cyc_List_List*_TB;struct Cyc_List_List*_TC;
struct Cyc_List_List*r=0;
_TL11: if(tvs!=0)goto _TLF;else{goto _TL10;}
_TLF:{struct Cyc_List_List*b=btvs;
_TL15: if(b!=0)goto _TL13;else{goto _TL14;}
_TL13: _T0= tvs;_T1= _T0->hd;_T2= get(_T1);_T3= _T2->identity;_T4= b;_T5= _T4->hd;_T6= (struct Cyc_Absyn_Tvar*)_T5;_T7= _T6->identity;if(_T3!=_T7)goto _TL16;goto _TL14;_TL16: _T8= b;
# 137
b= _T8->tl;goto _TL15;_TL14:
# 140
 if(b!=0)goto _TL18;{struct Cyc_List_List*_TD=_cycalloc(sizeof(struct Cyc_List_List));_TA= tvs;
_TD->hd= _TA->hd;_TD->tl= r;_T9= (struct Cyc_List_List*)_TD;}r= _T9;goto _TL19;_TL18: _TL19:;}_TB= tvs;
# 135
tvs= _TB->tl;goto _TL11;_TL10:
# 143
 r= Cyc_List_imp_rev(r);_TC= r;
return _TC;}
# 151
static void Cyc_Tctyp_check_free_evars(struct Cyc_List_List*free_evars,void*in_typ,unsigned loc){struct Cyc_List_List*_T0;void*_T1;struct _tuple16*_T2;struct _tuple16 _T3;int*_T4;int _T5;struct Cyc_Absyn_Kind*_T6;enum Cyc_Absyn_KindQual _T7;int _T8;struct Cyc_Warn_String_Warn_Warg_struct _T9;struct Cyc_Warn_Typ_Warn_Warg_struct _TA;struct Cyc_Warn_String_Warn_Warg_struct _TB;struct Cyc_Warn_Typ_Warn_Warg_struct _TC;unsigned _TD;struct _fat_ptr _TE;long _TF;struct Cyc_Warn_String_Warn_Warg_struct _T10;struct Cyc_Warn_Typ_Warn_Warg_struct _T11;struct Cyc_Warn_String_Warn_Warg_struct _T12;struct Cyc_Warn_String_Warn_Warg_struct _T13;struct Cyc_Warn_String_Warn_Warg_struct _T14;int(*_T15)(struct _fat_ptr);void*(*_T16)(struct _fat_ptr);struct _fat_ptr _T17;struct Cyc_List_List*_T18;
_TL1D: if(free_evars!=0)goto _TL1B;else{goto _TL1C;}
_TL1B: _T0= free_evars;_T1= _T0->hd;_T2= (struct _tuple16*)_T1;_T3= *_T2;{void*e=_T3.f0;{
void*_T19=Cyc_Absyn_compress(e);_T4= (int*)_T19;_T5= *_T4;if(_T5!=1)goto _TL1E;goto _LL0;_TL1E: goto _TL1A;_LL0:;}{
# 160
void*t;
struct _fat_ptr s;{
struct Cyc_Absyn_Kind*_T19=Cyc_Tcutil_type_kind(e);_T6= (struct Cyc_Absyn_Kind*)_T19;_T7= _T6->kind;_T8= (int)_T7;switch(_T8){case Cyc_Absyn_EffKind:
# 170
 t= Cyc_Absyn_heap_rgn_type;
s= _tag_fat("{`H}",sizeof(char),5U);goto _LL5;case Cyc_Absyn_BoolKind:
# 174
 t= Cyc_Absyn_false_type;
s= _tag_fat("@false",sizeof(char),7U);goto _LL5;case Cyc_Absyn_PtrBndKind:
# 178
 t= Cyc_Absyn_bounds_one();
s= _tag_fat("bounds_one",sizeof(char),11U);goto _LL5;case Cyc_Absyn_AqualKind:
# 182
 t= Cyc_Absyn_al_qual_type;
s= _tag_fat("aliasable",sizeof(char),10U);goto _LL5;default:{struct Cyc_Warn_String_Warn_Warg_struct _T1A;_T1A.tag= 0;
# 186
({__typeof__(_tag_fat("hidden type variable ",sizeof(char),22U))_T1B=_tag_fat("hidden type variable ",sizeof(char),22U);_T1A.f1= _T1B;});_T9= _T1A;}{struct Cyc_Warn_String_Warn_Warg_struct _T1A=_T9;{struct Cyc_Warn_Typ_Warn_Warg_struct _T1B;_T1B.tag= 2;_T1B.f1= e;_TA= _T1B;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T1B=_TA;{struct Cyc_Warn_String_Warn_Warg_struct _T1C;_T1C.tag= 0;({__typeof__(_tag_fat(" isn't abstracted in type ",sizeof(char),27U))_T1D=_tag_fat(" isn't abstracted in type ",sizeof(char),27U);_T1C.f1= _T1D;});_TB= _T1C;}{struct Cyc_Warn_String_Warn_Warg_struct _T1C=_TB;{struct Cyc_Warn_Typ_Warn_Warg_struct _T1D;_T1D.tag= 2;_T1D.f1= in_typ;_TC= _T1D;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T1D=_TC;void*_T1E[4];_T1E[0]= & _T1A;_T1E[1]= & _T1B;_T1E[2]= & _T1C;_T1E[3]= & _T1D;_TD= loc;_TE= _tag_fat(_T1E,sizeof(void*),4);Cyc_Warn_err2(_TD,_TE);}}}}
return;}_LL5:;}_TF= 
# 189
Cyc_Unify_unify(e,t);if(_TF)goto _TL21;else{goto _TL23;}
_TL23:{struct Cyc_Warn_String_Warn_Warg_struct _T19;_T19.tag= 0;({__typeof__(_tag_fat("can't unify evar ",sizeof(char),18U))_T1A=_tag_fat("can't unify evar ",sizeof(char),18U);_T19.f1= _T1A;});_T10= _T19;}{struct Cyc_Warn_String_Warn_Warg_struct _T19=_T10;{struct Cyc_Warn_Typ_Warn_Warg_struct _T1A;_T1A.tag= 2;_T1A.f1= e;_T11= _T1A;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T1A=_T11;{struct Cyc_Warn_String_Warn_Warg_struct _T1B;_T1B.tag= 0;({__typeof__(_tag_fat(" with ",sizeof(char),7U))_T1C=_tag_fat(" with ",sizeof(char),7U);_T1B.f1= _T1C;});_T12= _T1B;}{struct Cyc_Warn_String_Warn_Warg_struct _T1B=_T12;{struct Cyc_Warn_String_Warn_Warg_struct _T1C;_T1C.tag= 0;_T1C.f1= s;_T13= _T1C;}{struct Cyc_Warn_String_Warn_Warg_struct _T1C=_T13;{struct Cyc_Warn_String_Warn_Warg_struct _T1D;_T1D.tag= 0;({__typeof__(_tag_fat("!",sizeof(char),2U))_T1E=_tag_fat("!",sizeof(char),2U);_T1D.f1= _T1E;});_T14= _T1D;}{struct Cyc_Warn_String_Warn_Warg_struct _T1D=_T14;void*_T1E[5];_T1E[0]= & _T19;_T1E[1]= & _T1A;_T1E[2]= & _T1B;_T1E[3]= & _T1C;_T1E[4]= & _T1D;_T16= Cyc_Warn_impos2;{int(*_T1F)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T16;_T15= _T1F;}_T17= _tag_fat(_T1E,sizeof(void*),5);_T15(_T17);}}}}}goto _TL22;_TL21: _TL22:;}}_TL1A: _T18= free_evars;
# 152
free_evars= _T18->tl;goto _TL1D;_TL1C:;}
# 199
static struct Cyc_List_List*Cyc_Tctyp_add_free_tvar(unsigned loc,struct Cyc_List_List*tvs,struct Cyc_Absyn_Tvar*tv,long allow_aqual_bounds){struct Cyc_List_List*_T0;void*_T1;struct Cyc_Absyn_Tvar*_T2;struct _fat_ptr*_T3;struct Cyc_Absyn_Tvar*_T4;struct _fat_ptr*_T5;int _T6;struct Cyc_List_List*_T7;void*_T8;struct Cyc_Absyn_Tvar*_T9;struct Cyc_Absyn_Tvar*_TA;long _TB;struct Cyc_Warn_String_Warn_Warg_struct _TC;struct Cyc_Warn_Tvar_Warn_Warg_struct _TD;struct Cyc_Warn_String_Warn_Warg_struct _TE;struct Cyc_Warn_KindBound_Warn_Warg_struct _TF;struct Cyc_Warn_String_Warn_Warg_struct _T10;struct Cyc_Warn_KindBound_Warn_Warg_struct _T11;unsigned _T12;struct _fat_ptr _T13;struct Cyc_Absyn_Tvar*_T14;void*_T15;long _T16;struct Cyc_Warn_String_Warn_Warg_struct _T17;struct Cyc_Warn_Tvar_Warn_Warg_struct _T18;struct Cyc_Warn_String_Warn_Warg_struct _T19;unsigned _T1A;struct _fat_ptr _T1B;struct Cyc_List_List*_T1C;void*_T1D;struct Cyc_Absyn_Tvar*_T1E;void*_T1F;struct Cyc_List_List*_T20;void*_T21;struct Cyc_Absyn_Tvar*_T22;struct Cyc_Absyn_Tvar*_T23;struct Cyc_Absyn_Tvar*_T24;void*_T25;struct Cyc_Absyn_Tvar*_T26;void*_T27;struct Cyc_List_List*_T28;void*_T29;struct Cyc_Absyn_Tvar*_T2A;void*_T2B;int _T2C;struct Cyc_Warn_String_Warn_Warg_struct _T2D;struct Cyc_Warn_Tvar_Warn_Warg_struct _T2E;struct Cyc_Warn_String_Warn_Warg_struct _T2F;struct Cyc_Warn_TypOpt_Warn_Warg_struct _T30;struct Cyc_Absyn_Tvar*_T31;struct Cyc_Warn_String_Warn_Warg_struct _T32;struct Cyc_Warn_TypOpt_Warn_Warg_struct _T33;struct Cyc_List_List*_T34;void*_T35;struct Cyc_Absyn_Tvar*_T36;unsigned _T37;struct _fat_ptr _T38;struct Cyc_Absyn_Tvar*_T39;int _T3A;int _T3B;struct Cyc_Absyn_Tvar*_T3C;struct Cyc_List_List*_T3D;void*_T3E;struct Cyc_Absyn_Tvar*_T3F;struct Cyc_Absyn_Tvar*_T40;int _T41;struct Cyc_List_List*_T42;void*_T43;struct Cyc_Absyn_Tvar*_T44;int _T45;struct Cyc_Warn_String_Warn_Warg_struct _T46;int(*_T47)(struct _fat_ptr);void*(*_T48)(struct _fat_ptr);struct _fat_ptr _T49;struct Cyc_List_List*_T4A;struct Cyc_List_List*_T4B;struct Cyc_Absyn_Tvar*_T4C;struct Cyc_List_List*_T4D;{
# 201
struct Cyc_List_List*tvs2=tvs;_TL27: if(tvs2!=0)goto _TL25;else{goto _TL26;}
_TL25: _T0= tvs2;_T1= _T0->hd;_T2= (struct Cyc_Absyn_Tvar*)_T1;_T3= _T2->name;_T4= tv;_T5= _T4->name;_T6= Cyc_strptrcmp(_T3,_T5);if(_T6!=0)goto _TL28;_T7= tvs2;_T8= _T7->hd;_T9= (struct Cyc_Absyn_Tvar*)_T8;{
void*k1=_T9->kind;_TA= tv;{
void*k2=_TA->kind;_TB= 
Cyc_Kinds_constrain_kinds(k1,k2);if(_TB)goto _TL2A;else{goto _TL2C;}
_TL2C:{struct Cyc_Warn_String_Warn_Warg_struct _T4E;_T4E.tag= 0;({__typeof__(_tag_fat("type variable ",sizeof(char),15U))_T4F=_tag_fat("type variable ",sizeof(char),15U);_T4E.f1= _T4F;});_TC= _T4E;}{struct Cyc_Warn_String_Warn_Warg_struct _T4E=_TC;{struct Cyc_Warn_Tvar_Warn_Warg_struct _T4F;_T4F.tag= 7;_T4F.f1= tv;_TD= _T4F;}{struct Cyc_Warn_Tvar_Warn_Warg_struct _T4F=_TD;{struct Cyc_Warn_String_Warn_Warg_struct _T50;_T50.tag= 0;({__typeof__(_tag_fat(" used with inconsistent kinds ",sizeof(char),31U))_T51=_tag_fat(" used with inconsistent kinds ",sizeof(char),31U);_T50.f1= _T51;});_TE= _T50;}{struct Cyc_Warn_String_Warn_Warg_struct _T50=_TE;{struct Cyc_Warn_KindBound_Warn_Warg_struct _T51;_T51.tag= 8;_T51.f1= k1;_TF= _T51;}{struct Cyc_Warn_KindBound_Warn_Warg_struct _T51=_TF;{struct Cyc_Warn_String_Warn_Warg_struct _T52;_T52.tag= 0;({__typeof__(_tag_fat(" and ",sizeof(char),6U))_T53=_tag_fat(" and ",sizeof(char),6U);_T52.f1= _T53;});_T10= _T52;}{struct Cyc_Warn_String_Warn_Warg_struct _T52=_T10;{struct Cyc_Warn_KindBound_Warn_Warg_struct _T53;_T53.tag= 8;_T53.f1= k2;_T11= _T53;}{struct Cyc_Warn_KindBound_Warn_Warg_struct _T53=_T11;void*_T54[6];_T54[0]= & _T4E;_T54[1]= & _T4F;_T54[2]= & _T50;_T54[3]= & _T51;_T54[4]= & _T52;_T54[5]= & _T53;_T12= loc;_T13= _tag_fat(_T54,sizeof(void*),6);Cyc_Warn_err2(_T12,_T13);}}}}}}goto _TL2B;_TL2A: _TL2B: _T14= tv;_T15= _T14->aquals_bound;
if(_T15==0)goto _TL2D;_T16= allow_aqual_bounds;if(_T16)goto _TL2D;else{goto _TL2F;}
_TL2F:{struct Cyc_Warn_String_Warn_Warg_struct _T4E;_T4E.tag= 0;({__typeof__(_tag_fat("alias bound appears on type variable ",sizeof(char),38U))_T4F=_tag_fat("alias bound appears on type variable ",sizeof(char),38U);_T4E.f1= _T4F;});_T17= _T4E;}{struct Cyc_Warn_String_Warn_Warg_struct _T4E=_T17;{struct Cyc_Warn_Tvar_Warn_Warg_struct _T4F;_T4F.tag= 7;_T4F.f1= tv;_T18= _T4F;}{struct Cyc_Warn_Tvar_Warn_Warg_struct _T4F=_T18;{struct Cyc_Warn_String_Warn_Warg_struct _T50;_T50.tag= 0;
({__typeof__(_tag_fat(" which is not in a function declaration or aggregate field",sizeof(char),59U))_T51=_tag_fat(" which is not in a function declaration or aggregate field",sizeof(char),59U);_T50.f1= _T51;});_T19= _T50;}{struct Cyc_Warn_String_Warn_Warg_struct _T50=_T19;void*_T51[3];_T51[0]= & _T4E;_T51[1]= & _T4F;_T51[2]= & _T50;_T1A= loc;_T1B= _tag_fat(_T51,sizeof(void*),3);Cyc_Warn_err2(_T1A,_T1B);}}}goto _TL2E;_TL2D: _TL2E: _T1C= tvs2;_T1D= _T1C->hd;_T1E= (struct Cyc_Absyn_Tvar*)_T1D;_T1F= _T1E->aquals_bound;
if(_T1F!=0)goto _TL30;_T20= tvs2;_T21= _T20->hd;_T22= (struct Cyc_Absyn_Tvar*)_T21;_T23= tv;
_T22->aquals_bound= _T23->aquals_bound;goto _TL31;
_TL30: _T24= tv;_T25= _T24->aquals_bound;if(_T25==0)goto _TL32;_T26= tv;_T27= _T26->aquals_bound;_T28= tvs2;_T29= _T28->hd;_T2A= (struct Cyc_Absyn_Tvar*)_T29;_T2B= _T2A->aquals_bound;_T2C= 
Cyc_Tcutil_typecmp(_T27,_T2B);
# 212
if(!_T2C)goto _TL32;{struct Cyc_Warn_String_Warn_Warg_struct _T4E;_T4E.tag= 0;
# 214
({__typeof__(_tag_fat("type variable ",sizeof(char),15U))_T4F=_tag_fat("type variable ",sizeof(char),15U);_T4E.f1= _T4F;});_T2D= _T4E;}{struct Cyc_Warn_String_Warn_Warg_struct _T4E=_T2D;{struct Cyc_Warn_Tvar_Warn_Warg_struct _T4F;_T4F.tag= 7;_T4F.f1= tv;_T2E= _T4F;}{struct Cyc_Warn_Tvar_Warn_Warg_struct _T4F=_T2E;{struct Cyc_Warn_String_Warn_Warg_struct _T50;_T50.tag= 0;({__typeof__(_tag_fat(" used with inconsistent alias qualifier bounds ",sizeof(char),48U))_T51=_tag_fat(" used with inconsistent alias qualifier bounds ",sizeof(char),48U);_T50.f1= _T51;});_T2F= _T50;}{struct Cyc_Warn_String_Warn_Warg_struct _T50=_T2F;{struct Cyc_Warn_TypOpt_Warn_Warg_struct _T51;_T51.tag= 3;_T31= tv;
_T51.f1= _T31->aquals_bound;_T30= _T51;}{struct Cyc_Warn_TypOpt_Warn_Warg_struct _T51=_T30;{struct Cyc_Warn_String_Warn_Warg_struct _T52;_T52.tag= 0;({__typeof__(_tag_fat(" and ",sizeof(char),6U))_T53=_tag_fat(" and ",sizeof(char),6U);_T52.f1= _T53;});_T32= _T52;}{struct Cyc_Warn_String_Warn_Warg_struct _T52=_T32;{struct Cyc_Warn_TypOpt_Warn_Warg_struct _T53;_T53.tag= 3;_T34= tvs2;_T35= _T34->hd;_T36= (struct Cyc_Absyn_Tvar*)_T35;_T53.f1= _T36->aquals_bound;_T33= _T53;}{struct Cyc_Warn_TypOpt_Warn_Warg_struct _T53=_T33;void*_T54[6];_T54[0]= & _T4E;_T54[1]= & _T4F;_T54[2]= & _T50;_T54[3]= & _T51;_T54[4]= & _T52;_T54[5]= & _T53;_T37= loc;_T38= _tag_fat(_T54,sizeof(void*),6);Cyc_Warn_err2(_T37,_T38);}}}}}}goto _TL33;_TL32: _TL33: _TL31: _T39= tv;_T3A= _T39->identity;_T3B= - 1;
if(_T3A!=_T3B)goto _TL34;_T3C= tv;_T3D= tvs2;_T3E= _T3D->hd;_T3F= (struct Cyc_Absyn_Tvar*)_T3E;
_T3C->identity= _T3F->identity;goto _TL35;
_TL34: _T40= tv;_T41= _T40->identity;_T42= tvs2;_T43= _T42->hd;_T44= (struct Cyc_Absyn_Tvar*)_T43;_T45= _T44->identity;if(_T41==_T45)goto _TL36;{struct Cyc_Warn_String_Warn_Warg_struct _T4E;_T4E.tag= 0;
({__typeof__(_tag_fat("same type variable has different identity!",sizeof(char),43U))_T4F=_tag_fat("same type variable has different identity!",sizeof(char),43U);_T4E.f1= _T4F;});_T46= _T4E;}{struct Cyc_Warn_String_Warn_Warg_struct _T4E=_T46;void*_T4F[1];_T4F[0]= & _T4E;_T48= Cyc_Warn_impos2;{int(*_T50)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T48;_T47= _T50;}_T49= _tag_fat(_T4F,sizeof(void*),1);_T47(_T49);}goto _TL37;_TL36: _TL37: _TL35: _T4A= tvs;
return _T4A;}}_TL28: _T4B= tvs2;
# 201
tvs2= _T4B->tl;goto _TL27;_TL26:;}_T4C= tv;
# 222
({__typeof__(Cyc_Tcutil_new_tvar_id())_T4E=Cyc_Tcutil_new_tvar_id();_T4C->identity= _T4E;});{struct Cyc_List_List*_T4E=_cycalloc(sizeof(struct Cyc_List_List));
_T4E->hd= tv;_T4E->tl= tvs;_T4D= (struct Cyc_List_List*)_T4E;}return _T4D;}
# 226
static long Cyc_Tctyp_cmp_fqv(struct _tuple16*te1,struct _tuple16*te2){struct _tuple16*_T0;struct _tuple16 _T1;struct _tuple16*_T2;struct _tuple16 _T3;int _T4;int _T5;_T0= te1;_T1= *_T0;{
void*t1=_T1.f0;_T2= te2;_T3= *_T2;{
void*t2=_T3.f0;_T4= 
Cyc_Tcutil_typecmp(t1,t2);_T5= _T4==0;return _T5;}}}
# 233
static struct Cyc_List_List*Cyc_Tctyp_fast_add_free_tvar(struct Cyc_List_List*tvs,struct Cyc_Absyn_Tvar*tv){struct Cyc_Absyn_Tvar*_T0;int _T1;int _T2;struct Cyc_Warn_String_Warn_Warg_struct _T3;int(*_T4)(struct _fat_ptr);void*(*_T5)(struct _fat_ptr);struct _fat_ptr _T6;struct Cyc_List_List*_T7;void*_T8;struct Cyc_Absyn_Tvar*_T9;int _TA;int _TB;struct Cyc_Warn_String_Warn_Warg_struct _TC;int(*_TD)(struct _fat_ptr);void*(*_TE)(struct _fat_ptr);struct _fat_ptr _TF;struct Cyc_Absyn_Tvar*_T10;int _T11;struct Cyc_Absyn_Tvar*_T12;int _T13;struct Cyc_List_List*_T14;struct Cyc_List_List*_T15;struct Cyc_List_List*_T16;_T0= tv;_T1= _T0->identity;_T2= - 1;
if(_T1!=_T2)goto _TL38;{struct Cyc_Warn_String_Warn_Warg_struct _T17;_T17.tag= 0;
({__typeof__(_tag_fat("fast_add_free_tvar: bad identity in tv",sizeof(char),39U))_T18=_tag_fat("fast_add_free_tvar: bad identity in tv",sizeof(char),39U);_T17.f1= _T18;});_T3= _T17;}{struct Cyc_Warn_String_Warn_Warg_struct _T17=_T3;void*_T18[1];_T18[0]= & _T17;_T5= Cyc_Warn_impos2;{int(*_T19)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T5;_T4= _T19;}_T6= _tag_fat(_T18,sizeof(void*),1);_T4(_T6);}goto _TL39;_TL38: _TL39:{
struct Cyc_List_List*tvs2=tvs;_TL3D: if(tvs2!=0)goto _TL3B;else{goto _TL3C;}
_TL3B: _T7= tvs2;_T8= _T7->hd;{struct Cyc_Absyn_Tvar*tv2=(struct Cyc_Absyn_Tvar*)_T8;_T9= tv2;_TA= _T9->identity;_TB= - 1;
if(_TA!=_TB)goto _TL3E;{struct Cyc_Warn_String_Warn_Warg_struct _T17;_T17.tag= 0;
({__typeof__(_tag_fat("fast_add_free_tvar: bad identity in tvs2",sizeof(char),41U))_T18=_tag_fat("fast_add_free_tvar: bad identity in tvs2",sizeof(char),41U);_T17.f1= _T18;});_TC= _T17;}{struct Cyc_Warn_String_Warn_Warg_struct _T17=_TC;void*_T18[1];_T18[0]= & _T17;_TE= Cyc_Warn_impos2;{int(*_T19)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_TE;_TD= _T19;}_TF= _tag_fat(_T18,sizeof(void*),1);_TD(_TF);}goto _TL3F;_TL3E: _TL3F: _T10= tv2;_T11= _T10->identity;_T12= tv;_T13= _T12->identity;
if(_T11!=_T13)goto _TL40;_T14= tvs;
return _T14;_TL40:;}_T15= tvs2;
# 236
tvs2= _T15->tl;goto _TL3D;_TL3C:;}{struct Cyc_List_List*_T17=_cycalloc(sizeof(struct Cyc_List_List));
# 243
_T17->hd= tv;_T17->tl= tvs;_T16= (struct Cyc_List_List*)_T17;}return _T16;}
# 249
static struct Cyc_List_List*Cyc_Tctyp_fast_add_free_tvar_bool(struct Cyc_List_List*tvs,struct Cyc_Absyn_Tvar*tv,long b){struct Cyc_Absyn_Tvar*_T0;int _T1;int _T2;struct Cyc_Warn_String_Warn_Warg_struct _T3;int(*_T4)(struct _fat_ptr);void*(*_T5)(struct _fat_ptr);struct _fat_ptr _T6;struct Cyc_List_List*_T7;void*_T8;long*_T9;struct Cyc_Absyn_Tvar*_TA;int _TB;int _TC;struct Cyc_Warn_String_Warn_Warg_struct _TD;int(*_TE)(struct _fat_ptr);void*(*_TF)(struct _fat_ptr);struct _fat_ptr _T10;struct Cyc_Absyn_Tvar*_T11;int _T12;struct Cyc_Absyn_Tvar*_T13;int _T14;long*_T15;int _T16;long*_T17;long _T18;struct Cyc_List_List*_T19;struct Cyc_List_List*_T1A;struct Cyc_List_List*_T1B;struct _tuple15*_T1C;_T0= tv;_T1= _T0->identity;_T2= - 1;
if(_T1!=_T2)goto _TL42;{struct Cyc_Warn_String_Warn_Warg_struct _T1D;_T1D.tag= 0;
({__typeof__(_tag_fat("fast_add_free_tvar_bool: bad identity in tv",sizeof(char),44U))_T1E=_tag_fat("fast_add_free_tvar_bool: bad identity in tv",sizeof(char),44U);_T1D.f1= _T1E;});_T3= _T1D;}{struct Cyc_Warn_String_Warn_Warg_struct _T1D=_T3;void*_T1E[1];_T1E[0]= & _T1D;_T5= Cyc_Warn_impos2;{int(*_T1F)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T5;_T4= _T1F;}_T6= _tag_fat(_T1E,sizeof(void*),1);_T4(_T6);}goto _TL43;_TL42: _TL43:{
struct Cyc_List_List*tvs2=tvs;_TL47: if(tvs2!=0)goto _TL45;else{goto _TL46;}
_TL45: _T7= tvs2;_T8= _T7->hd;{struct _tuple15*_T1D=(struct _tuple15*)_T8;void*_T1E;struct Cyc_Absyn_Tvar*_T1F;{struct _tuple15 _T20=*_T1D;_T1F= _T20.f0;_T9= & _T1D->f1;_T1E= (long*)_T9;}{struct Cyc_Absyn_Tvar*tv2=_T1F;long*b2=(long*)_T1E;_TA= tv2;_TB= _TA->identity;_TC= - 1;
if(_TB!=_TC)goto _TL48;{struct Cyc_Warn_String_Warn_Warg_struct _T20;_T20.tag= 0;
({__typeof__(_tag_fat("fast_add_free_tvar_bool: bad identity in tvs2",sizeof(char),46U))_T21=_tag_fat("fast_add_free_tvar_bool: bad identity in tvs2",sizeof(char),46U);_T20.f1= _T21;});_TD= _T20;}{struct Cyc_Warn_String_Warn_Warg_struct _T20=_TD;void*_T21[1];_T21[0]= & _T20;_TF= Cyc_Warn_impos2;{int(*_T22)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_TF;_TE= _T22;}_T10= _tag_fat(_T21,sizeof(void*),1);_TE(_T10);}goto _TL49;_TL48: _TL49: _T11= tv2;_T12= _T11->identity;_T13= tv;_T14= _T13->identity;
if(_T12!=_T14)goto _TL4A;_T15= b2;_T17= b2;_T18= *_T17;
if(!_T18)goto _TL4C;_T16= 1;goto _TL4D;_TL4C: _T16= b;_TL4D:*_T15= _T16;_T19= tvs;
return _T19;_TL4A:;}}_T1A= tvs2;
# 252
tvs2= _T1A->tl;goto _TL47;_TL46:;}{struct Cyc_List_List*_T1D=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple15*_T1E=_cycalloc(sizeof(struct _tuple15));
# 261
_T1E->f0= tv;_T1E->f1= b;_T1C= (struct _tuple15*)_T1E;}_T1D->hd= _T1C;_T1D->tl= tvs;_T1B= (struct Cyc_List_List*)_T1D;}return _T1B;}
# 268
static long Cyc_Tctyp_check_type_visit_f1(struct Cyc_Tctyp_CVTEnv*env,struct Cyc_Absyn_Exp*e){struct Cyc_Tctyp_CVTEnv*_T0;struct Cyc_Absyn_Exp*_T1;struct Cyc_Absyn_Exp*_T2;int*_T3;unsigned _T4;void*_T5;struct Cyc_Tctyp_CVTEnv*_T6;struct Cyc_Tctyp_CVTEnv*_T7;struct Cyc_Tctyp_CVTEnv _T8;struct Cyc_Absyn_Kind*_T9;struct Cyc_Absyn_Kind*_TA;void*_TB;void*_TC;void*_TD;struct Cyc_Tctyp_CVTEnv*_TE;struct Cyc_Tctyp_CVTEnv*_TF;struct Cyc_Tctyp_CVTEnv _T10;struct Cyc_Absyn_Kind*_T11;struct Cyc_Absyn_Kind*_T12;void*_T13;void*_T14;struct Cyc_Tctyp_CVTEnv*_T15;struct Cyc_Tctyp_CVTEnv*_T16;struct Cyc_Tctyp_CVTEnv _T17;struct Cyc_Absyn_Kind*_T18;struct Cyc_Absyn_Kind*_T19;void*_T1A;_T0= env;_T1= e;
# 271
_T0->loc= _T1->loc;_T2= e;{
void*_T1B=_T2->r;void*_T1C;_T3= (int*)_T1B;_T4= *_T3;switch(_T4){case 14:{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T1D=(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T1B;_T5= _T1D->f1;_T1C= (void*)_T5;}{void*t=_T1C;_T6= env;_T7= env;_T8= *_T7;_T9= & Cyc_Kinds_ak;_TA= (struct Cyc_Absyn_Kind*)_T9;_TB= t;
# 274
({__typeof__(Cyc_Tctyp_i_check_type(_T8,_TA,_TB,1,0))_T1D=Cyc_Tctyp_i_check_type(_T8,_TA,_TB,1,0);*_T6= _T1D;});goto _LL0;}case 19:{struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct*_T1D=(struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct*)_T1B;_TC= _T1D->f1;_T1C= (void*)_TC;}{void*t=_T1C;_T1C= t;goto _LL6;}case 17:{struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct*_T1D=(struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct*)_T1B;_TD= _T1D->f1;_T1C= (void*)_TD;}_LL6: {void*t=_T1C;_TE= env;_TF= env;_T10= *_TF;_T11= & Cyc_Kinds_ak;_T12= (struct Cyc_Absyn_Kind*)_T11;_T13= t;
# 279
({__typeof__(Cyc_Tctyp_i_check_type(_T10,_T12,_T13,1,0))_T1D=Cyc_Tctyp_i_check_type(_T10,_T12,_T13,1,0);*_TE= _T1D;});goto _LL0;}case 38:{struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct*_T1D=(struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct*)_T1B;_T14= _T1D->f1;_T1C= (void*)_T14;}{void*t=_T1C;_T15= env;_T16= env;_T17= *_T16;_T18= & Cyc_Kinds_ik;_T19= (struct Cyc_Absyn_Kind*)_T18;_T1A= t;
# 282
({__typeof__(Cyc_Tctyp_i_check_type(_T17,_T19,_T1A,1,0))_T1D=Cyc_Tctyp_i_check_type(_T17,_T19,_T1A,1,0);*_T15= _T1D;});goto _LL0;}default: goto _LL0;}_LL0:;}
# 287
return 1;}
# 289
static long Cyc_Tctyp_check_type_visit_f2(struct Cyc_Tctyp_CVTEnv*env,struct Cyc_Absyn_Stmt*s){int(*_T0)(unsigned,struct _fat_ptr,struct _fat_ptr);void*(*_T1)(unsigned,struct _fat_ptr,struct _fat_ptr);struct Cyc_Absyn_Stmt*_T2;unsigned _T3;struct _fat_ptr _T4;struct _fat_ptr _T5;_T1= Cyc_Warn_impos_loc;{
int(*_T6)(unsigned,struct _fat_ptr,struct _fat_ptr)=(int(*)(unsigned,struct _fat_ptr,struct _fat_ptr))_T1;_T0= _T6;}_T2= s;_T3= _T2->loc;_T4= _tag_fat("statement inside expression inside type",sizeof(char),40U);_T5= _tag_fat(0U,sizeof(void*),0);_T0(_T3,_T4,_T5);}
# 292
static struct Cyc_Tctyp_CVTEnv Cyc_Tctyp_i_check_type_level_exp(struct Cyc_Absyn_Exp*e,struct Cyc_Tctyp_CVTEnv env){void(*_T0)(long(*)(struct Cyc_Tctyp_CVTEnv*,struct Cyc_Absyn_Exp*),long(*)(struct Cyc_Tctyp_CVTEnv*,struct Cyc_Absyn_Stmt*),struct Cyc_Tctyp_CVTEnv*,struct Cyc_Absyn_Exp*);void(*_T1)(long(*)(void*,struct Cyc_Absyn_Exp*),long(*)(void*,struct Cyc_Absyn_Stmt*),void*,struct Cyc_Absyn_Exp*);struct Cyc_Tctyp_CVTEnv*_T2;struct Cyc_Tctyp_CVTEnv*_T3;struct Cyc_Absyn_Exp*_T4;struct Cyc_Tctyp_CVTEnv _T5;_T1= Cyc_Absyn_visit_exp;{
void(*_T6)(long(*)(struct Cyc_Tctyp_CVTEnv*,struct Cyc_Absyn_Exp*),long(*)(struct Cyc_Tctyp_CVTEnv*,struct Cyc_Absyn_Stmt*),struct Cyc_Tctyp_CVTEnv*,struct Cyc_Absyn_Exp*)=(void(*)(long(*)(struct Cyc_Tctyp_CVTEnv*,struct Cyc_Absyn_Exp*),long(*)(struct Cyc_Tctyp_CVTEnv*,struct Cyc_Absyn_Stmt*),struct Cyc_Tctyp_CVTEnv*,struct Cyc_Absyn_Exp*))_T1;_T0= _T6;}_T2= & env;_T3= (struct Cyc_Tctyp_CVTEnv*)_T2;_T4= e;_T0(Cyc_Tctyp_check_type_visit_f1,Cyc_Tctyp_check_type_visit_f2,_T3,_T4);_T5= env;
return _T5;}
# 336
static struct Cyc_Tctyp_CVTEnv Cyc_Tctyp_check_type_inst(struct Cyc_Tctyp_CVTEnv env,struct Cyc_List_List**targsp,struct Cyc_List_List*tvs,struct Cyc_Absyn_Kind*expected_kind,long allow_abs_aggr,struct _tuple1*typname,struct Cyc_Absyn_Typedefdecl*td){struct Cyc_List_List**_T0;struct Cyc_Tctyp_CVTEnv _T1;struct Cyc_Tctyp_CVTEnv _T2;struct Cyc_List_List*_T3;struct Cyc_List_List*_T4;void*_T5;struct _tuple0 _T6;struct Cyc_Absyn_Tvar*_T7;void*_T8;void*_T9;int*_TA;unsigned _TB;void*_TC;int*_TD;int _TE;void*_TF;struct Cyc_Tctyp_CVTEnv _T10;unsigned _T11;struct Cyc_Tctyp_CVTEnv _T12;struct Cyc_List_List*_T13;struct Cyc_Absyn_Tvar*_T14;struct Cyc_Tctyp_CVTEnv _T15;long _T16;struct Cyc_Tctyp_CVTEnv _T17;struct Cyc_List_List*_T18;struct Cyc_Absyn_Tvar*_T19;void*_T1A;struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*_T1B;struct Cyc_Absyn_Kind*_T1C;struct Cyc_Absyn_Kind*_T1D;enum Cyc_Absyn_KindQual _T1E;void*_T1F;int*_T20;int _T21;void*_T22;struct Cyc_List_List*_T23;void*_T24;struct Cyc_Tctyp_CVTEnv _T25;struct Cyc_Absyn_Kind*_T26;struct Cyc_Absyn_Kind*_T27;struct Cyc_List_List*_T28;void*_T29;long _T2A;struct Cyc_Absyn_Tvar*_T2B;struct Cyc_Absyn_Kind*_T2C;struct Cyc_Absyn_Kind*_T2D;struct Cyc_Tctyp_CVTEnv _T2E;unsigned _T2F;void*_T30;struct Cyc_List_List*_T31;struct Cyc_List_List*_T32;struct Cyc_Warn_String_Warn_Warg_struct _T33;struct Cyc_Warn_Qvar_Warn_Warg_struct _T34;struct Cyc_Tctyp_CVTEnv _T35;unsigned _T36;struct _fat_ptr _T37;struct Cyc_List_List*_T38;struct Cyc_List_List*_T39;void*_T3A;struct Cyc_Absyn_Tvar*_T3B;struct Cyc_Absyn_Kind*_T3C;struct Cyc_Absyn_Kind*_T3D;struct Cyc_List_List*_T3E;struct Cyc_List_List**_T3F;struct Cyc_List_List**_T40;struct Cyc_List_List*_T41;struct Cyc_List_List*_T42;struct Cyc_Tctyp_CVTEnv _T43;_T0= targsp;{
# 340
struct Cyc_List_List*targs=*_T0;_T1= env;{
long old_inst_evar=_T1.inst_type_evar;_T2= env;
env.inst_type_evar= _T2.generalize_evars;
_TL52: if(targs!=0)goto _TL53;else{goto _TL51;}_TL53: if(tvs!=0)goto _TL50;else{goto _TL51;}
_TL50: _T3= targs;{void*t=_T3->hd;_T4= tvs;_T5= _T4->hd;{
struct Cyc_Absyn_Tvar*tv=(struct Cyc_Absyn_Tvar*)_T5;{struct _tuple0 _T44;_T7= tv;_T8= _T7->kind;
# 348
({__typeof__(Cyc_Kinds_compress_kb(_T8))_T45=Cyc_Kinds_compress_kb(_T8);_T44.f0= _T45;});_T44.f1= t;_T6= _T44;}{struct _tuple0 _T44=_T6;struct Cyc_Absyn_Tvar*_T45;_T9= _T44.f0;_TA= (int*)_T9;_TB= *_TA;switch(_TB){case 1: _TC= _T44.f1;_TD= (int*)_TC;_TE= *_TD;if(_TE!=2)goto _TL55;_TF= _T44.f1;{struct Cyc_Absyn_VarType_Absyn_Type_struct*_T46=(struct Cyc_Absyn_VarType_Absyn_Type_struct*)_TF;_T45= _T46->f1;}{struct Cyc_Absyn_Tvar*tv2=_T45;_T10= env;_T11= _T10.loc;_T12= env;_T13= _T12.kind_env;_T14= tv2;_T15= env;_T16= _T15.allow_aqual_bounds;
# 350
({__typeof__(Cyc_Tctyp_add_free_tvar(_T11,_T13,_T14,_T16))_T46=Cyc_Tctyp_add_free_tvar(_T11,_T13,_T14,_T16);env.kind_env= _T46;});_T17= env;_T18= _T17.free_vars;_T19= tv2;
({__typeof__(Cyc_Tctyp_fast_add_free_tvar_bool(_T18,_T19,1))_T46=Cyc_Tctyp_fast_add_free_tvar_bool(_T18,_T19,1);env.free_vars= _T46;});goto _TL4F;}_TL55: goto _LL5;case 0: _T1A= _T44.f0;_T1B= (struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*)_T1A;_T1C= _T1B->f1;_T1D= (struct Cyc_Absyn_Kind*)_T1C;_T1E= _T1D->kind;if(_T1E!=Cyc_Absyn_AqualKind)goto _TL57;_T1F= _T44.f1;_T20= (int*)_T1F;_T21= *_T20;if(_T21!=2)goto _TL59;_T22= _T44.f1;{struct Cyc_Absyn_VarType_Absyn_Type_struct*_T46=(struct Cyc_Absyn_VarType_Absyn_Type_struct*)_T22;_T45= _T46->f1;}{struct Cyc_Absyn_Tvar*tv2=_T45;_T23= targs;_T24= 
# 355
Cyc_Absyn_aqual_var_type(t,Cyc_Absyn_al_qual_type);_T23->hd= (void*)_T24;_T25= env;_T26= & Cyc_Kinds_aqk;_T27= (struct Cyc_Absyn_Kind*)_T26;_T28= targs;_T29= _T28->hd;_T2A= allow_abs_aggr;
env= Cyc_Tctyp_i_check_type(_T25,_T27,_T29,1,_T2A);goto _TL4F;}_TL59: goto _LL5;_TL57: goto _LL5;default: _LL5: goto _LL0;}_LL0:;}_T2B= tv;_T2C= & Cyc_Kinds_bk;_T2D= (struct Cyc_Absyn_Kind*)_T2C;{
# 361
struct Cyc_Absyn_Kind*k=Cyc_Kinds_tvar_kind(_T2B,_T2D);
env= Cyc_Tctyp_i_check_type(env,k,t,1,allow_abs_aggr);_T2E= env;_T2F= _T2E.loc;_T30= t;
Cyc_Tcutil_check_no_qual(_T2F,_T30);}}}_TL4F: _T31= targs;
# 343
targs= _T31->tl;_T32= tvs;tvs= _T32->tl;goto _TL52;_TL51:
# 365
 if(targs==0)goto _TL5B;{struct Cyc_Warn_String_Warn_Warg_struct _T44;_T44.tag= 0;
({__typeof__(_tag_fat("too many type arguments for ",sizeof(char),29U))_T45=_tag_fat("too many type arguments for ",sizeof(char),29U);_T44.f1= _T45;});_T33= _T44;}{struct Cyc_Warn_String_Warn_Warg_struct _T44=_T33;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T45;_T45.tag= 1;_T45.f1= typname;_T34= _T45;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T45=_T34;void*_T46[2];_T46[0]= & _T44;_T46[1]= & _T45;_T35= env;_T36= _T35.loc;_T37= _tag_fat(_T46,sizeof(void*),2);Cyc_Warn_err2(_T36,_T37);}}goto _TL5C;_TL5B: _TL5C: {
# 368
struct Cyc_List_List*hidden_ts=0;
_TL60: if(tvs!=0)goto _TL5E;else{goto _TL5F;}
_TL5E:{void*e=Cyc_Absyn_new_evar(0,0);{struct Cyc_List_List*_T44=_cycalloc(sizeof(struct Cyc_List_List));
_T44->hd= e;_T44->tl= hidden_ts;_T38= (struct Cyc_List_List*)_T44;}hidden_ts= _T38;_T39= tvs;_T3A= _T39->hd;_T3B= (struct Cyc_Absyn_Tvar*)_T3A;_T3C= & Cyc_Kinds_bk;_T3D= (struct Cyc_Absyn_Kind*)_T3C;{
# 373
struct Cyc_Absyn_Kind*k=Cyc_Kinds_tvar_kind(_T3B,_T3D);
env= Cyc_Tctyp_i_check_type(env,k,e,1,allow_abs_aggr);}}_T3E= tvs;
# 369
tvs= _T3E->tl;goto _TL60;_TL5F: _T3F= targsp;_T40= targsp;_T41= *_T40;_T42= 
# 376
Cyc_List_imp_rev(hidden_ts);({__typeof__(Cyc_List_imp_append(_T41,_T42))_T44=Cyc_List_imp_append(_T41,_T42);*_T3F= _T44;});
env.inst_type_evar= old_inst_evar;_T43= env;
return _T43;}}}}struct _tuple17{struct Cyc_Tctyp_CVTEnv f0;struct Cyc_AssnDef_AssnMap f1;};
# 382
static struct _tuple17 Cyc_Tctyp_check_clause(struct Cyc_Tctyp_CVTEnv env,struct _fat_ptr clause_name,struct Cyc_Absyn_Exp*clause){struct _tuple17 _T0;struct Cyc_Tctyp_CVTEnv _T1;struct Cyc_Tc_TcContext*_T2;struct Cyc_Tctyp_CVTEnv _T3;struct Cyc_Tcenv_Tenv*_T4;struct Cyc_Absyn_Exp*_T5;long _T6;struct Cyc_Warn_String_Warn_Warg_struct _T7;struct Cyc_Warn_String_Warn_Warg_struct _T8;struct Cyc_Warn_TypOpt_Warn_Warg_struct _T9;struct Cyc_Absyn_Exp*_TA;struct Cyc_Warn_String_Warn_Warg_struct _TB;struct Cyc_Tctyp_CVTEnv _TC;unsigned _TD;struct _fat_ptr _TE;struct _tuple17 _TF;
# 384
if(clause!=0)goto _TL61;{struct _tuple17 _T10;
_T10.f0= env;({__typeof__(Cyc_AssnDef_true_assnmap())_T11=Cyc_AssnDef_true_assnmap();_T10.f1= _T11;});_T0= _T10;}return _T0;_TL61: _T1= env;_T2= _T1.ctx;_T3= env;_T4= _T3.te;_T5= clause;
Cyc_Tcexp_tcExp(_T2,_T4,0,_T5);_T6= 
Cyc_Tcutil_is_integral(clause);if(_T6)goto _TL63;else{goto _TL65;}
_TL65:{struct Cyc_Warn_String_Warn_Warg_struct _T10;_T10.tag= 0;_T10.f1= clause_name;_T7= _T10;}{struct Cyc_Warn_String_Warn_Warg_struct _T10=_T7;{struct Cyc_Warn_String_Warn_Warg_struct _T11;_T11.tag= 0;({__typeof__(_tag_fat(" clause has type ",sizeof(char),18U))_T12=_tag_fat(" clause has type ",sizeof(char),18U);_T11.f1= _T12;});_T8= _T11;}{struct Cyc_Warn_String_Warn_Warg_struct _T11=_T8;{struct Cyc_Warn_TypOpt_Warn_Warg_struct _T12;_T12.tag= 3;_TA= clause;_T12.f1= _TA->topt;_T9= _T12;}{struct Cyc_Warn_TypOpt_Warn_Warg_struct _T12=_T9;{struct Cyc_Warn_String_Warn_Warg_struct _T13;_T13.tag= 0;({__typeof__(_tag_fat(" instead of integral type",sizeof(char),26U))_T14=_tag_fat(" instead of integral type",sizeof(char),26U);_T13.f1= _T14;});_TB= _T13;}{struct Cyc_Warn_String_Warn_Warg_struct _T13=_TB;void*_T14[4];_T14[0]= & _T10;_T14[1]= & _T11;_T14[2]= & _T12;_T14[3]= & _T13;_TC= env;_TD= _TC.loc;_TE= _tag_fat(_T14,sizeof(void*),4);Cyc_Warn_err2(_TD,_TE);}}}}goto _TL64;_TL63: _TL64:
 env= Cyc_Tctyp_i_check_type_level_exp(clause,env);{
struct Cyc_AssnDef_AssnMap assnmap=Cyc_Vcgen_clause2assn(clause);{struct _tuple17 _T10;
_T10.f0= env;_T10.f1= assnmap;_TF= _T10;}return _TF;}}
# 395
static struct Cyc_Tctyp_CVTEnv Cyc_Tctyp_i_check_aggr(struct Cyc_Tctyp_CVTEnv env,struct Cyc_Absyn_Kind*expected_kind,union Cyc_Absyn_AggrInfo*info,struct Cyc_List_List**targs,long allow_abs_aggr){struct Cyc_Tctyp_CVTEnv _T0;struct Cyc_Tctyp_CVTEnv _T1;struct Cyc_Tctyp_CVTEnv _T2;union Cyc_Absyn_AggrInfo*_T3;struct _union_AggrInfo_UnknownAggr _T4;unsigned _T5;struct _union_AggrInfo_UnknownAggr _T6;struct _tuple3 _T7;struct _union_AggrInfo_UnknownAggr _T8;struct _tuple3 _T9;struct _union_AggrInfo_UnknownAggr _TA;struct _tuple3 _TB;struct _handler_cons*_TC;int _TD;struct Cyc_Absyn_Aggrdecl**_TE;struct Cyc_Absyn_Aggrdecl*_TF;enum Cyc_Absyn_AggrKind _T10;int _T11;enum Cyc_Absyn_AggrKind _T12;int _T13;struct Cyc_Absyn_Aggrdecl*_T14;enum Cyc_Absyn_AggrKind _T15;int _T16;struct Cyc_Warn_String_Warn_Warg_struct _T17;struct Cyc_Warn_Qvar_Warn_Warg_struct _T18;struct Cyc_Warn_String_Warn_Warg_struct _T19;struct Cyc_Warn_Qvar_Warn_Warg_struct _T1A;unsigned _T1B;struct _fat_ptr _T1C;struct Cyc_Warn_String_Warn_Warg_struct _T1D;struct Cyc_Warn_Qvar_Warn_Warg_struct _T1E;struct Cyc_Warn_String_Warn_Warg_struct _T1F;struct Cyc_Warn_Qvar_Warn_Warg_struct _T20;unsigned _T21;struct _fat_ptr _T22;struct Cyc_Core_Opt*_T23;unsigned _T24;struct Cyc_Core_Opt*_T25;void*_T26;long _T27;struct Cyc_Absyn_Aggrdecl*_T28;struct Cyc_Absyn_AggrdeclImpl*_T29;unsigned _T2A;struct Cyc_Absyn_Aggrdecl*_T2B;struct Cyc_Absyn_AggrdeclImpl*_T2C;long _T2D;struct Cyc_Warn_String_Warn_Warg_struct _T2E;struct Cyc_Warn_Qvar_Warn_Warg_struct _T2F;unsigned _T30;struct _fat_ptr _T31;union Cyc_Absyn_AggrInfo*_T32;void*_T33;struct Cyc_Dict_Absent_exn_struct*_T34;char*_T35;char*_T36;struct Cyc_Tc_TcContext*_T37;struct Cyc_Tcenv_Tenv*_T38;unsigned _T39;struct Cyc_Absyn_Aggrdecl*_T3A;union Cyc_Absyn_AggrInfo*_T3B;struct Cyc_List_List**_T3C;struct Cyc_List_List*_T3D;struct Cyc_Warn_String_Warn_Warg_struct _T3E;struct Cyc_Warn_Qvar_Warn_Warg_struct _T3F;struct Cyc_Warn_String_Warn_Warg_struct _T40;unsigned _T41;struct _fat_ptr _T42;struct Cyc_Tctyp_CVTEnv _T43;struct Cyc_Absyn_Aggrdecl**_T44;struct _union_AggrInfo_KnownAggr _T45;struct Cyc_Absyn_Aggrdecl**_T46;struct Cyc_Tctyp_CVTEnv _T47;struct Cyc_List_List**_T48;struct Cyc_Absyn_Aggrdecl*_T49;struct Cyc_List_List*_T4A;struct Cyc_Absyn_Kind*_T4B;long _T4C;struct Cyc_Absyn_Aggrdecl*_T4D;struct _tuple1*_T4E;long _T4F;struct Cyc_Absyn_Aggrdecl*_T50;struct Cyc_Absyn_AggrdeclImpl*_T51;struct Cyc_Absyn_Kind*_T52;struct Cyc_Absyn_Kind*_T53;struct Cyc_Absyn_Kind*_T54;long _T55;struct Cyc_Absyn_Aggrdecl*_T56;struct Cyc_Tctyp_CVTEnv _T57;struct Cyc_Tcenv_Tenv*_T58;unsigned _T59;struct Cyc_Tc_TcContext*_T5A;_T0= env;_T5A= _T0.ctx;_T1= env;_T59= _T1.loc;_T2= env;_T58= _T2.te;{struct Cyc_Tc_TcContext*ctx=_T5A;unsigned loc=_T59;struct Cyc_Tcenv_Tenv*te=_T58;_T3= info;{
# 398
union Cyc_Absyn_AggrInfo _T5B=*_T3;struct Cyc_Absyn_Aggrdecl*_T5C;struct Cyc_Core_Opt*_T5D;struct _tuple1*_T5E;enum Cyc_Absyn_AggrKind _T5F;_T4= _T5B.UnknownAggr;_T5= _T4.tag;if(_T5!=1)goto _TL66;_T6= _T5B.UnknownAggr;_T7= _T6.val;_T5F= _T7.f0;_T8= _T5B.UnknownAggr;_T9= _T8.val;_T5E= _T9.f1;_TA= _T5B.UnknownAggr;_TB= _TA.val;_T5D= _TB.f2;{enum Cyc_Absyn_AggrKind k=_T5F;struct _tuple1*n=_T5E;struct Cyc_Core_Opt*tgd=_T5D;
# 400
struct Cyc_Absyn_Aggrdecl**adp;{struct _handler_cons _T60;_TC= & _T60;_push_handler(_TC);{int _T61=0;_TD= setjmp(_T60.handler);if(!_TD)goto _TL68;_T61= 1;goto _TL69;_TL68: _TL69: if(_T61)goto _TL6A;else{goto _TL6C;}_TL6C:
# 402
 adp= Cyc_Tcenv_lookup_aggrdecl(te,loc,n);_TE= adp;{
struct Cyc_Absyn_Aggrdecl*ad=*_TE;_TF= ad;_T10= _TF->kind;_T11= (int)_T10;_T12= k;_T13= (int)_T12;
if(_T11==_T13)goto _TL6D;_T14= ad;_T15= _T14->kind;_T16= (int)_T15;
if(_T16!=0)goto _TL6F;{struct Cyc_Warn_String_Warn_Warg_struct _T62;_T62.tag= 0;
({__typeof__(_tag_fat("expecting struct ",sizeof(char),18U))_T63=_tag_fat("expecting struct ",sizeof(char),18U);_T62.f1= _T63;});_T17= _T62;}{struct Cyc_Warn_String_Warn_Warg_struct _T62=_T17;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T63;_T63.tag= 1;_T63.f1= n;_T18= _T63;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T63=_T18;{struct Cyc_Warn_String_Warn_Warg_struct _T64;_T64.tag= 0;({__typeof__(_tag_fat("instead of union ",sizeof(char),18U))_T65=_tag_fat("instead of union ",sizeof(char),18U);_T64.f1= _T65;});_T19= _T64;}{struct Cyc_Warn_String_Warn_Warg_struct _T64=_T19;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T65;_T65.tag= 1;_T65.f1= n;_T1A= _T65;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T65=_T1A;void*_T66[4];_T66[0]= & _T62;_T66[1]= & _T63;_T66[2]= & _T64;_T66[3]= & _T65;_T1B= loc;_T1C= _tag_fat(_T66,sizeof(void*),4);Cyc_Warn_err2(_T1B,_T1C);}}}}goto _TL70;
# 408
_TL6F:{struct Cyc_Warn_String_Warn_Warg_struct _T62;_T62.tag= 0;({__typeof__(_tag_fat("expecting union ",sizeof(char),17U))_T63=_tag_fat("expecting union ",sizeof(char),17U);_T62.f1= _T63;});_T1D= _T62;}{struct Cyc_Warn_String_Warn_Warg_struct _T62=_T1D;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T63;_T63.tag= 1;_T63.f1= n;_T1E= _T63;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T63=_T1E;{struct Cyc_Warn_String_Warn_Warg_struct _T64;_T64.tag= 0;({__typeof__(_tag_fat("instead of struct ",sizeof(char),19U))_T65=_tag_fat("instead of struct ",sizeof(char),19U);_T64.f1= _T65;});_T1F= _T64;}{struct Cyc_Warn_String_Warn_Warg_struct _T64=_T1F;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T65;_T65.tag= 1;_T65.f1= n;_T20= _T65;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T65=_T20;void*_T66[4];_T66[0]= & _T62;_T66[1]= & _T63;_T66[2]= & _T64;_T66[3]= & _T65;_T21= loc;_T22= _tag_fat(_T66,sizeof(void*),4);Cyc_Warn_err2(_T21,_T22);}}}}_TL70: goto _TL6E;_TL6D: _TL6E: _T23= tgd;_T24= (unsigned)_T23;
# 410
if(!_T24)goto _TL71;_T25= tgd;_T26= _T25->v;_T27= (long)_T26;if(!_T27)goto _TL71;_T28= ad;_T29= _T28->impl;_T2A= (unsigned)_T29;if(_T2A)goto _TL74;else{goto _TL73;}_TL74: _T2B= ad;_T2C= _T2B->impl;_T2D= _T2C->tagged;if(_T2D)goto _TL71;else{goto _TL73;}
_TL73:{struct Cyc_Warn_String_Warn_Warg_struct _T62;_T62.tag= 0;({__typeof__(_tag_fat("@tagged qualfiers don't agree on union ",sizeof(char),40U))_T63=_tag_fat("@tagged qualfiers don't agree on union ",sizeof(char),40U);_T62.f1= _T63;});_T2E= _T62;}{struct Cyc_Warn_String_Warn_Warg_struct _T62=_T2E;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T63;_T63.tag= 1;_T63.f1= n;_T2F= _T63;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T63=_T2F;void*_T64[2];_T64[0]= & _T62;_T64[1]= & _T63;_T30= loc;_T31= _tag_fat(_T64,sizeof(void*),2);Cyc_Warn_err2(_T30,_T31);}}goto _TL72;_TL71: _TL72: _T32= info;
# 413
({__typeof__(Cyc_Absyn_KnownAggr(adp))_T62=Cyc_Absyn_KnownAggr(adp);*_T32= _T62;});}_pop_handler();goto _TL6B;_TL6A: _T33= Cyc_Core_get_exn_thrown();{void*_T62=(void*)_T33;void*_T63;_T34= (struct Cyc_Dict_Absent_exn_struct*)_T62;_T35= _T34->tag;_T36= Cyc_Dict_Absent;if(_T35!=_T36)goto _TL75;_T37= ctx;_T38= te;_T39= loc;{struct Cyc_Absyn_Aggrdecl*_T64=_cycalloc(sizeof(struct Cyc_Absyn_Aggrdecl));
# 418
_T64->kind= k;_T64->sc= 3U;_T64->name= n;_T64->tvs= 0;_T64->impl= 0;_T64->attributes= 0;_T64->expected_mem_kind= 0;_T3A= (struct Cyc_Absyn_Aggrdecl*)_T64;}Cyc_Tc_tcAggrdecl(_T37,_T38,_T39,_T3A);
adp= Cyc_Tcenv_lookup_aggrdecl(te,loc,n);_T3B= info;
({__typeof__(Cyc_Absyn_KnownAggr(adp))_T64=Cyc_Absyn_KnownAggr(adp);*_T3B= _T64;});_T3C= targs;_T3D= *_T3C;
# 422
if(_T3D==0)goto _TL77;{struct Cyc_Warn_String_Warn_Warg_struct _T64;_T64.tag= 0;
({__typeof__(_tag_fat("declare parameterized type ",sizeof(char),28U))_T65=_tag_fat("declare parameterized type ",sizeof(char),28U);_T64.f1= _T65;});_T3E= _T64;}{struct Cyc_Warn_String_Warn_Warg_struct _T64=_T3E;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T65;_T65.tag= 1;_T65.f1= n;_T3F= _T65;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T65=_T3F;{struct Cyc_Warn_String_Warn_Warg_struct _T66;_T66.tag= 0;({__typeof__(_tag_fat(" before using",sizeof(char),14U))_T67=_tag_fat(" before using",sizeof(char),14U);_T66.f1= _T67;});_T40= _T66;}{struct Cyc_Warn_String_Warn_Warg_struct _T66=_T40;void*_T67[3];_T67[0]= & _T64;_T67[1]= & _T65;_T67[2]= & _T66;_T41= loc;_T42= _tag_fat(_T67,sizeof(void*),3);Cyc_Warn_err2(_T41,_T42);}}}_T43= env;
return _T43;_TL77: goto _LL8;_TL75: _T63= _T62;{void*exn=_T63;_rethrow(exn);}_LL8:;}_TL6B:;}}_T44= adp;_T5C= *_T44;goto _LL7;}_TL66: _T45= _T5B.KnownAggr;_T46= _T45.val;{struct Cyc_Absyn_Aggrdecl*_T60=*_T46;_T5C= _T60;}_LL7:{struct Cyc_Absyn_Aggrdecl*ad=_T5C;_T47= env;_T48= targs;_T49= ad;_T4A= _T49->tvs;_T4B= expected_kind;_T4C= allow_abs_aggr;_T4D= ad;_T4E= _T4D->name;
# 430
env= Cyc_Tctyp_check_type_inst(_T47,_T48,_T4A,_T4B,_T4C,_T4E,0);_T4F= allow_abs_aggr;
if(!_T4F)goto _TL79;_T50= ad;_T51= _T50->impl;if(_T51!=0)goto _TL79;_T52= & Cyc_Kinds_ak;_T53= (struct Cyc_Absyn_Kind*)_T52;_T54= expected_kind;_T55= Cyc_Kinds_kind_leq(_T53,_T54);if(_T55)goto _TL79;else{goto _TL7B;}
# 435
_TL7B: _T56= ad;_T56->expected_mem_kind= 1;goto _TL7A;_TL79: _TL7A: _T57= env;
return _T57;};}}}
# 441
static struct Cyc_Tctyp_CVTEnv Cyc_Tctyp_i_check_datatype(struct Cyc_Tctyp_CVTEnv env,struct Cyc_Absyn_Kind*expected_kind,union Cyc_Absyn_DatatypeInfo*info,struct Cyc_List_List**targsp,long allow_abs_aggr){struct Cyc_Tctyp_CVTEnv _T0;struct Cyc_Tctyp_CVTEnv _T1;struct Cyc_Tctyp_CVTEnv _T2;struct Cyc_List_List**_T3;union Cyc_Absyn_DatatypeInfo*_T4;struct _union_DatatypeInfo_UnknownDatatype _T5;unsigned _T6;struct _union_DatatypeInfo_UnknownDatatype _T7;struct Cyc_Absyn_UnknownDatatypeInfo _T8;struct _union_DatatypeInfo_UnknownDatatype _T9;struct Cyc_Absyn_UnknownDatatypeInfo _TA;struct _handler_cons*_TB;int _TC;void*_TD;struct Cyc_Dict_Absent_exn_struct*_TE;char*_TF;char*_T10;struct Cyc_Tc_TcContext*_T11;struct Cyc_Tcenv_Tenv*_T12;unsigned _T13;struct Cyc_Absyn_Datatypedecl*_T14;struct Cyc_Warn_String_Warn_Warg_struct _T15;struct Cyc_Warn_Qvar_Warn_Warg_struct _T16;struct Cyc_Warn_String_Warn_Warg_struct _T17;unsigned _T18;struct _fat_ptr _T19;struct Cyc_Tctyp_CVTEnv _T1A;long _T1B;struct Cyc_Absyn_Datatypedecl**_T1C;struct Cyc_Absyn_Datatypedecl*_T1D;long _T1E;struct Cyc_Warn_String_Warn_Warg_struct _T1F;struct Cyc_Warn_Qvar_Warn_Warg_struct _T20;struct Cyc_Warn_String_Warn_Warg_struct _T21;unsigned _T22;struct _fat_ptr _T23;union Cyc_Absyn_DatatypeInfo*_T24;struct Cyc_Absyn_Datatypedecl**_T25;struct _union_DatatypeInfo_KnownDatatype _T26;struct Cyc_Absyn_Datatypedecl**_T27;struct Cyc_Tctyp_CVTEnv _T28;struct Cyc_List_List**_T29;struct Cyc_Absyn_Datatypedecl*_T2A;struct Cyc_List_List*_T2B;struct Cyc_Absyn_Kind*_T2C;long _T2D;struct Cyc_Absyn_Datatypedecl*_T2E;struct _tuple1*_T2F;struct Cyc_Tctyp_CVTEnv _T30;struct Cyc_Tcenv_Tenv*_T31;unsigned _T32;struct Cyc_Tc_TcContext*_T33;_T0= env;_T33= _T0.ctx;_T1= env;_T32= _T1.loc;_T2= env;_T31= _T2.te;{struct Cyc_Tc_TcContext*ctx=_T33;unsigned loc=_T32;struct Cyc_Tcenv_Tenv*te=_T31;_T3= targsp;{
# 444
struct Cyc_List_List*targs=*_T3;_T4= info;{
union Cyc_Absyn_DatatypeInfo _T34=*_T4;struct Cyc_Absyn_Datatypedecl*_T35;long _T36;struct _tuple1*_T37;_T5= _T34.UnknownDatatype;_T6= _T5.tag;if(_T6!=1)goto _TL7C;_T7= _T34.UnknownDatatype;_T8= _T7.val;_T37= _T8.name;_T9= _T34.UnknownDatatype;_TA= _T9.val;_T36= _TA.is_extensible;{struct _tuple1*n=_T37;long is_x=_T36;
# 447
struct Cyc_Absyn_Datatypedecl**tudp;{struct _handler_cons _T38;_TB= & _T38;_push_handler(_TB);{int _T39=0;_TC= setjmp(_T38.handler);if(!_TC)goto _TL7E;_T39= 1;goto _TL7F;_TL7E: _TL7F: if(_T39)goto _TL80;else{goto _TL82;}_TL82:
# 449
 tudp= Cyc_Tcenv_lookup_datatypedecl(te,loc,n);_pop_handler();goto _TL81;_TL80: _TD= Cyc_Core_get_exn_thrown();{void*_T3A=(void*)_TD;void*_T3B;_TE= (struct Cyc_Dict_Absent_exn_struct*)_T3A;_TF= _TE->tag;_T10= Cyc_Dict_Absent;if(_TF!=_T10)goto _TL83;_T11= ctx;_T12= te;_T13= loc;{struct Cyc_Absyn_Datatypedecl*_T3C=_cycalloc(sizeof(struct Cyc_Absyn_Datatypedecl));
# 454
_T3C->sc= 3U;_T3C->name= n;_T3C->tvs= 0;_T3C->fields= 0;_T3C->is_extensible= is_x;_T14= (struct Cyc_Absyn_Datatypedecl*)_T3C;}Cyc_Tc_tcDatatypedecl(_T11,_T12,_T13,_T14);
tudp= Cyc_Tcenv_lookup_datatypedecl(te,loc,n);
# 457
if(targs==0)goto _TL85;{struct Cyc_Warn_String_Warn_Warg_struct _T3C;_T3C.tag= 0;
({__typeof__(_tag_fat("declare parameterized datatype ",sizeof(char),32U))_T3D=_tag_fat("declare parameterized datatype ",sizeof(char),32U);_T3C.f1= _T3D;});_T15= _T3C;}{struct Cyc_Warn_String_Warn_Warg_struct _T3C=_T15;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T3D;_T3D.tag= 1;_T3D.f1= n;_T16= _T3D;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T3D=_T16;{struct Cyc_Warn_String_Warn_Warg_struct _T3E;_T3E.tag= 0;({__typeof__(_tag_fat(" before using",sizeof(char),14U))_T3F=_tag_fat(" before using",sizeof(char),14U);_T3E.f1= _T3F;});_T17= _T3E;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E=_T17;void*_T3F[3];_T3F[0]= & _T3C;_T3F[1]= & _T3D;_T3F[2]= & _T3E;_T18= loc;_T19= _tag_fat(_T3F,sizeof(void*),3);Cyc_Warn_err2(_T18,_T19);}}}_T1A= env;
return _T1A;_TL85: goto _LL8;_TL83: _T3B= _T3A;{void*exn=_T3B;_rethrow(exn);}_LL8:;}_TL81:;}}_T1B= is_x;
# 465
if(!_T1B)goto _TL87;_T1C= tudp;_T1D= *_T1C;_T1E= _T1D->is_extensible;if(_T1E)goto _TL87;else{goto _TL89;}
_TL89:{struct Cyc_Warn_String_Warn_Warg_struct _T38;_T38.tag= 0;({__typeof__(_tag_fat("datatype ",sizeof(char),10U))_T39=_tag_fat("datatype ",sizeof(char),10U);_T38.f1= _T39;});_T1F= _T38;}{struct Cyc_Warn_String_Warn_Warg_struct _T38=_T1F;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T39;_T39.tag= 1;_T39.f1= n;_T20= _T39;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T39=_T20;{struct Cyc_Warn_String_Warn_Warg_struct _T3A;_T3A.tag= 0;({__typeof__(_tag_fat(" was not declared @extensible",sizeof(char),30U))_T3B=_tag_fat(" was not declared @extensible",sizeof(char),30U);_T3A.f1= _T3B;});_T21= _T3A;}{struct Cyc_Warn_String_Warn_Warg_struct _T3A=_T21;void*_T3B[3];_T3B[0]= & _T38;_T3B[1]= & _T39;_T3B[2]= & _T3A;_T22= loc;_T23= _tag_fat(_T3B,sizeof(void*),3);Cyc_Warn_err2(_T22,_T23);}}}goto _TL88;_TL87: _TL88: _T24= info;
({__typeof__(Cyc_Absyn_KnownDatatype(tudp))_T38=Cyc_Absyn_KnownDatatype(tudp);*_T24= _T38;});_T25= tudp;_T35= *_T25;goto _LL7;}_TL7C: _T26= _T34.KnownDatatype;_T27= _T26.val;{struct Cyc_Absyn_Datatypedecl*_T38=*_T27;_T35= _T38;}_LL7:{struct Cyc_Absyn_Datatypedecl*tud=_T35;_T28= env;_T29= targsp;_T2A= tud;_T2B= _T2A->tvs;_T2C= expected_kind;_T2D= allow_abs_aggr;_T2E= tud;_T2F= _T2E->name;_T30= 
# 470
Cyc_Tctyp_check_type_inst(_T28,_T29,_T2B,_T2C,_T2D,_T2F,0);return _T30;};}}}}
# 475
static struct Cyc_Tctyp_CVTEnv Cyc_Tctyp_i_check_datatype_field(struct Cyc_Tctyp_CVTEnv env,struct Cyc_Absyn_Kind*expected_kind,union Cyc_Absyn_DatatypeFieldInfo*info,struct Cyc_List_List**targsp,long allow_abs_aggr){union Cyc_Absyn_DatatypeFieldInfo*_T0;struct _union_DatatypeFieldInfo_UnknownDatatypefield _T1;unsigned _T2;struct _union_DatatypeFieldInfo_UnknownDatatypefield _T3;struct Cyc_Absyn_UnknownDatatypeFieldInfo _T4;struct _union_DatatypeFieldInfo_UnknownDatatypefield _T5;struct Cyc_Absyn_UnknownDatatypeFieldInfo _T6;struct _union_DatatypeFieldInfo_UnknownDatatypefield _T7;struct Cyc_Absyn_UnknownDatatypeFieldInfo _T8;struct Cyc_Tctyp_CVTEnv _T9;struct Cyc_Tcenv_Tenv*_TA;struct Cyc_Tctyp_CVTEnv _TB;unsigned _TC;struct _tuple1*_TD;struct Cyc_Absyn_Datatypedecl**_TE;struct Cyc_Absyn_Datatypedecl*_TF;struct Cyc_Core_Opt*_T10;struct Cyc_Core_Opt*_T11;void*_T12;struct Cyc_Warn_String_Warn_Warg_struct _T13;int(*_T14)(struct _fat_ptr);void*(*_T15)(struct _fat_ptr);struct _fat_ptr _T16;struct Cyc_List_List*_T17;void*_T18;struct Cyc_Absyn_Datatypefield*_T19;struct _tuple1*_T1A;struct _tuple1*_T1B;int _T1C;struct Cyc_List_List*_T1D;void*_T1E;struct Cyc_List_List*_T1F;union Cyc_Absyn_DatatypeFieldInfo*_T20;struct _union_DatatypeFieldInfo_KnownDatatypefield _T21;struct _tuple2 _T22;struct _union_DatatypeFieldInfo_KnownDatatypefield _T23;struct _tuple2 _T24;struct Cyc_Tctyp_CVTEnv _T25;struct Cyc_List_List**_T26;struct Cyc_Absyn_Datatypedecl*_T27;struct Cyc_List_List*_T28;struct Cyc_Absyn_Kind*_T29;long _T2A;struct Cyc_Absyn_Datatypefield*_T2B;struct _tuple1*_T2C;struct Cyc_Tctyp_CVTEnv _T2D;_T0= info;{
# 478
union Cyc_Absyn_DatatypeFieldInfo _T2E=*_T0;struct Cyc_Absyn_Datatypefield*_T2F;struct Cyc_Absyn_Datatypedecl*_T30;long _T31;struct _tuple1*_T32;struct _tuple1*_T33;_T1= _T2E.UnknownDatatypefield;_T2= _T1.tag;if(_T2!=1)goto _TL8A;_T3= _T2E.UnknownDatatypefield;_T4= _T3.val;_T33= _T4.datatype_name;_T5= _T2E.UnknownDatatypefield;_T6= _T5.val;_T32= _T6.field_name;_T7= _T2E.UnknownDatatypefield;_T8= _T7.val;_T31= _T8.is_extensible;{struct _tuple1*tname=_T33;struct _tuple1*fname=_T32;long is_x=_T31;_T9= env;_TA= _T9.te;_TB= env;_TC= _TB.loc;_TD= tname;_TE= 
# 481
Cyc_Tcenv_lookup_datatypedecl(_TA,_TC,_TD);{struct Cyc_Absyn_Datatypedecl*tud=*_TE;
struct Cyc_Absyn_Datatypefield*tuf;_TF= tud;_T10= _TF->fields;_T11= 
# 486
_check_null(_T10);_T12= _T11->v;{struct Cyc_List_List*fs=(struct Cyc_List_List*)_T12;_TL8F: if(1)goto _TL8D;else{goto _TL8E;}
_TL8D: if(fs!=0)goto _TL90;{struct Cyc_Warn_String_Warn_Warg_struct _T34;_T34.tag= 0;
({__typeof__(_tag_fat("Tcutil found a bad datatypefield",sizeof(char),33U))_T35=_tag_fat("Tcutil found a bad datatypefield",sizeof(char),33U);_T34.f1= _T35;});_T13= _T34;}{struct Cyc_Warn_String_Warn_Warg_struct _T34=_T13;void*_T35[1];_T35[0]= & _T34;_T15= Cyc_Warn_impos2;{int(*_T36)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T15;_T14= _T36;}_T16= _tag_fat(_T35,sizeof(void*),1);_T14(_T16);}goto _TL91;_TL90: _TL91: _T17= fs;_T18= _T17->hd;_T19= (struct Cyc_Absyn_Datatypefield*)_T18;_T1A= _T19->name;_T1B= fname;_T1C= 
Cyc_Absyn_qvar_cmp(_T1A,_T1B);if(_T1C!=0)goto _TL92;_T1D= fs;_T1E= _T1D->hd;
tuf= (struct Cyc_Absyn_Datatypefield*)_T1E;goto _TL8E;_TL92: _T1F= fs;
# 486
fs= _T1F->tl;goto _TL8F;_TL8E:;}_T20= info;
# 494
({__typeof__(Cyc_Absyn_KnownDatatypefield(tud,tuf))_T34=Cyc_Absyn_KnownDatatypefield(tud,tuf);*_T20= _T34;});_T30= tud;_T2F= tuf;goto _LL4;}}_TL8A: _T21= _T2E.KnownDatatypefield;_T22= _T21.val;_T30= _T22.f0;_T23= _T2E.KnownDatatypefield;_T24= _T23.val;_T2F= _T24.f1;_LL4:{struct Cyc_Absyn_Datatypedecl*tud=_T30;struct Cyc_Absyn_Datatypefield*tuf=_T2F;_T25= env;_T26= targsp;_T27= tud;_T28= _T27->tvs;_T29= expected_kind;_T2A= allow_abs_aggr;_T2B= tuf;_T2C= _T2B->name;_T2D= 
# 497
Cyc_Tctyp_check_type_inst(_T25,_T26,_T28,_T29,_T2A,_T2C,0);return _T2D;};}}
# 502
static struct Cyc_Tctyp_CVTEnv Cyc_Tctyp_i_check_unary_app(struct Cyc_Tctyp_CVTEnv env,struct Cyc_Absyn_Kind*k,struct Cyc_List_List*ts,long put_in_effect,struct _fat_ptr s){int _T0;struct Cyc_Warn_String_Warn_Warg_struct _T1;struct Cyc_Warn_String_Warn_Warg_struct _T2;int(*_T3)(struct _fat_ptr);void*(*_T4)(struct _fat_ptr);struct _fat_ptr _T5;struct Cyc_Tctyp_CVTEnv _T6;struct Cyc_Absyn_Kind*_T7;struct Cyc_List_List*_T8;void*_T9;long _TA;struct Cyc_Tctyp_CVTEnv _TB;_T0= 
# 504
Cyc_List_length(ts);if(_T0==1)goto _TL94;{struct Cyc_Warn_String_Warn_Warg_struct _TC;_TC.tag= 0;
_TC.f1= s;_T1= _TC;}{struct Cyc_Warn_String_Warn_Warg_struct _TC=_T1;{struct Cyc_Warn_String_Warn_Warg_struct _TD;_TD.tag= 0;({__typeof__(_tag_fat(" has wrong number of arguments",sizeof(char),31U))_TE=_tag_fat(" has wrong number of arguments",sizeof(char),31U);_TD.f1= _TE;});_T2= _TD;}{struct Cyc_Warn_String_Warn_Warg_struct _TD=_T2;void*_TE[2];_TE[0]= & _TC;_TE[1]= & _TD;_T4= Cyc_Warn_impos2;{int(*_TF)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T4;_T3= _TF;}_T5= _tag_fat(_TE,sizeof(void*),2);_T3(_T5);}}goto _TL95;_TL94: _TL95: _T6= env;_T7= k;_T8= 
_check_null(ts);_T9= _T8->hd;_TA= put_in_effect;_TB= Cyc_Tctyp_i_check_type(_T6,_T7,_T9,_TA,1);return _TB;}
# 509
static struct Cyc_Tctyp_CVTEnv Cyc_Tctyp_i_check_type_app(struct Cyc_Tctyp_CVTEnv env,struct Cyc_Absyn_Kind*expected_kind,void*c,struct Cyc_List_List**targsp,long put_in_effect,long allow_abs_aggr,void*apptype){struct Cyc_Tctyp_CVTEnv _T0;struct Cyc_Tctyp_CVTEnv _T1;struct Cyc_Tctyp_CVTEnv _T2;struct Cyc_List_List**_T3;void*_T4;int*_T5;unsigned _T6;struct Cyc_Warn_Typ_Warn_Warg_struct _T7;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T8;struct Cyc_Warn_String_Warn_Warg_struct _T9;int(*_TA)(struct _fat_ptr);void*(*_TB)(struct _fat_ptr);struct _fat_ptr _TC;struct Cyc_Tctyp_CVTEnv _TD;struct Cyc_Warn_Typ_Warn_Warg_struct _TE;struct Cyc_Absyn_AppType_Absyn_Type_struct*_TF;struct Cyc_Warn_String_Warn_Warg_struct _T10;int(*_T11)(struct _fat_ptr);void*(*_T12)(struct _fat_ptr);struct _fat_ptr _T13;struct Cyc_Absyn_Kind*_T14;struct Cyc_Absyn_Kind*_T15;struct Cyc_Absyn_Kind*_T16;struct Cyc_Warn_String_Warn_Warg_struct _T17;struct Cyc_Warn_Kind_Warn_Warg_struct _T18;struct Cyc_Warn_String_Warn_Warg_struct _T19;unsigned _T1A;struct _fat_ptr _T1B;struct Cyc_Tctyp_CVTEnv _T1C;struct Cyc_List_List*_T1D;struct Cyc_List_List*_T1E;struct Cyc_Warn_String_Warn_Warg_struct _T1F;int(*_T20)(struct _fat_ptr);void*(*_T21)(struct _fat_ptr);struct _fat_ptr _T22;struct Cyc_Tctyp_CVTEnv _T23;struct Cyc_Absyn_Kind*_T24;struct Cyc_Absyn_Kind*_T25;struct Cyc_List_List*_T26;void*_T27;struct Cyc_Tctyp_CVTEnv _T28;int _T29;struct Cyc_Warn_String_Warn_Warg_struct _T2A;int(*_T2B)(struct _fat_ptr);void*(*_T2C)(struct _fat_ptr);struct _fat_ptr _T2D;struct Cyc_Tctyp_CVTEnv _T2E;struct Cyc_Absyn_Kind*_T2F;struct Cyc_Absyn_Kind*_T30;struct Cyc_List_List*_T31;void*_T32;struct Cyc_Tctyp_CVTEnv _T33;struct Cyc_Tcenv_Tenv*_T34;struct Cyc_List_List*_T35;struct Cyc_List_List*_T36;void*_T37;void*_T38;unsigned _T39;struct Cyc_List_List*_T3A;struct Cyc_List_List*_T3B;struct Cyc_List_List*_T3C;void*_T3D;struct Cyc_Tctyp_CVTEnv _T3E;struct Cyc_Absyn_Kind*_T3F;struct Cyc_Absyn_Kind*_T40;struct Cyc_List_List*_T41;struct Cyc_List_List*_T42;struct Cyc_List_List*_T43;void*_T44;struct Cyc_List_List*_T45;struct _tuple16*_T46;struct Cyc_Tctyp_CVTEnv _T47;struct Cyc_Tctyp_CVTEnv _T48;struct Cyc_Tctyp_CVTEnv _T49;struct Cyc_Absyn_Kind*_T4A;struct Cyc_Absyn_Kind*_T4B;struct Cyc_List_List*_T4C;void*_T4D;struct Cyc_List_List*_T4E;struct Cyc_Tctyp_CVTEnv _T4F;struct Cyc_Tctyp_CVTEnv _T50;struct Cyc_Absyn_Kind*_T51;struct Cyc_Absyn_Kind*_T52;struct Cyc_List_List*_T53;void*_T54;struct Cyc_List_List*_T55;struct Cyc_Tctyp_CVTEnv _T56;void*_T57;void*_T58;struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct*_T59;struct Cyc_Absyn_Enumdecl**_T5A;struct Cyc_Warn_String_Warn_Warg_struct _T5B;int(*_T5C)(struct _fat_ptr);void*(*_T5D)(struct _fat_ptr);struct _fat_ptr _T5E;struct Cyc_Absyn_Enumdecl**_T5F;struct Cyc_Absyn_Enumdecl*_T60;struct Cyc_Absyn_Enumdecl**_T61;struct Cyc_Absyn_Enumdecl*_T62;struct Cyc_Core_Opt*_T63;struct _handler_cons*_T64;int _T65;struct Cyc_Absyn_Enumdecl**_T66;struct Cyc_Absyn_Enumdecl**_T67;void*_T68;struct Cyc_Dict_Absent_exn_struct*_T69;char*_T6A;char*_T6B;struct Cyc_Tc_TcContext*_T6C;struct Cyc_Tcenv_Tenv*_T6D;unsigned _T6E;struct Cyc_Absyn_Enumdecl*_T6F;struct Cyc_Absyn_Enumdecl**_T70;struct Cyc_Absyn_Enumdecl**_T71;struct Cyc_Tctyp_CVTEnv _T72;void*_T73;struct Cyc_Warn_String_Warn_Warg_struct _T74;int(*_T75)(struct _fat_ptr);void*(*_T76)(struct _fat_ptr);struct _fat_ptr _T77;struct Cyc_List_List*_T78;void*_T79;long(*_T7A)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*);long(*_T7B)(int(*)(void*,void*),struct Cyc_List_List*,void*);int(*_T7C)(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_List_List*_T7D;struct Cyc_Absyn_Enumfield*_T7E;struct _tuple1*_T7F;struct _tuple1 _T80;struct _fat_ptr*_T81;long _T82;struct Cyc_Warn_String_Warn_Warg_struct _T83;struct Cyc_Warn_Qvar_Warn_Warg_struct _T84;struct Cyc_Absyn_Enumfield*_T85;struct Cyc_Absyn_Enumfield*_T86;unsigned _T87;struct _fat_ptr _T88;struct Cyc_List_List*_T89;struct Cyc_Absyn_Enumfield*_T8A;struct _tuple1*_T8B;struct _tuple1 _T8C;struct Cyc_Absyn_Enumfield*_T8D;struct Cyc_Absyn_Exp*_T8E;struct Cyc_Absyn_Enumfield*_T8F;unsigned _T90;struct Cyc_Absyn_Enumfield*_T91;unsigned _T92;struct Cyc_Absyn_Enumfield*_T93;struct Cyc_Absyn_Exp*_T94;long _T95;struct Cyc_Warn_String_Warn_Warg_struct _T96;struct Cyc_Warn_Qvar_Warn_Warg_struct _T97;struct Cyc_Absyn_Enumfield*_T98;struct Cyc_Warn_String_Warn_Warg_struct _T99;unsigned _T9A;struct _fat_ptr _T9B;struct Cyc_Absyn_Enumfield*_T9C;struct Cyc_Absyn_Exp*_T9D;struct Cyc_Absyn_Exp*_T9E;struct _tuple14 _T9F;unsigned _TA0;struct Cyc_List_List*_TA1;struct Cyc_Tctyp_CVTEnv _TA2;struct Cyc_Tctyp_CVTEnv _TA3;struct Cyc_Absyn_Kind*_TA4;struct Cyc_Absyn_Kind*_TA5;struct Cyc_List_List*_TA6;struct _fat_ptr _TA7;struct Cyc_Tctyp_CVTEnv _TA8;struct Cyc_Tctyp_CVTEnv _TA9;struct Cyc_Absyn_Kind*_TAA;struct Cyc_Absyn_Kind*_TAB;struct Cyc_List_List*_TAC;struct _fat_ptr _TAD;struct Cyc_Tctyp_CVTEnv _TAE;struct Cyc_Tctyp_CVTEnv _TAF;struct Cyc_Absyn_Kind*_TB0;struct Cyc_Absyn_Kind*_TB1;struct Cyc_List_List*_TB2;struct _fat_ptr _TB3;struct Cyc_Tctyp_CVTEnv _TB4;struct Cyc_Tctyp_CVTEnv _TB5;struct Cyc_Absyn_Kind*_TB6;struct Cyc_Absyn_Kind*_TB7;struct Cyc_List_List*_TB8;struct _fat_ptr _TB9;struct Cyc_Tctyp_CVTEnv _TBA;struct Cyc_Tctyp_CVTEnv _TBB;struct Cyc_Absyn_Kind*_TBC;struct Cyc_Absyn_Kind*_TBD;struct Cyc_List_List*_TBE;struct _fat_ptr _TBF;struct Cyc_Tctyp_CVTEnv _TC0;void*_TC1;void*_TC2;struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_TC3;union Cyc_Absyn_AggrInfo*_TC4;struct Cyc_Tctyp_CVTEnv _TC5;void*_TC6;void*_TC7;struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*_TC8;union Cyc_Absyn_DatatypeInfo*_TC9;struct Cyc_Tctyp_CVTEnv _TCA;void*_TCB;void*_TCC;struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct*_TCD;union Cyc_Absyn_DatatypeFieldInfo*_TCE;struct Cyc_Tctyp_CVTEnv _TCF;struct Cyc_Tcenv_Tenv*_TD0;unsigned _TD1;struct Cyc_Tc_TcContext*_TD2;_T0= env;_TD2= _T0.ctx;_T1= env;_TD1= _T1.loc;_T2= env;_TD0= _T2.te;{struct Cyc_Tc_TcContext*ctx=_TD2;unsigned loc=_TD1;struct Cyc_Tcenv_Tenv*te=_TD0;_T3= targsp;{
# 512
struct Cyc_List_List*ts=*_T3;void*_TD3;void*_TD4;_T4= c;_T5= (int*)_T4;_T6= *_T5;switch(_T6){case 1: goto _LL7;case 2: _LL7: goto _LL9;case 0: _LL9: goto _LLB;case 8: _LLB: goto _LLD;case 7: _LLD: goto _LLF;case 6: _LLF: goto _LL11;case 12: _LL11: goto _LL13;case 11: _LL13: goto _LL15;case 14: _LL15: goto _LL17;case 21: _LL17:
# 525
 if(ts==0)goto _TL97;{struct Cyc_Warn_Typ_Warn_Warg_struct _TD5;_TD5.tag= 2;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_TD6=_cycalloc(sizeof(struct Cyc_Absyn_AppType_Absyn_Type_struct));_TD6->tag= 0;
_TD6->f1= c;_TD6->f2= ts;_T8= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_TD6;}_TD5.f1= (void*)_T8;_T7= _TD5;}{struct Cyc_Warn_Typ_Warn_Warg_struct _TD5=_T7;{struct Cyc_Warn_String_Warn_Warg_struct _TD6;_TD6.tag= 0;({__typeof__(_tag_fat(" applied to argument(s)",sizeof(char),24U))_TD7=_tag_fat(" applied to argument(s)",sizeof(char),24U);_TD6.f1= _TD7;});_T9= _TD6;}{struct Cyc_Warn_String_Warn_Warg_struct _TD6=_T9;void*_TD7[2];_TD7[0]= & _TD5;_TD7[1]= & _TD6;_TB= Cyc_Warn_impos2;{int(*_TD8)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_TB;_TA= _TD8;}_TC= _tag_fat(_TD7,sizeof(void*),2);_TA(_TC);}}goto _TL98;_TL97: _TL98: _TD= env;
return _TD;case 16:
# 529
 if(ts==0)goto _TL99;{struct Cyc_Warn_Typ_Warn_Warg_struct _TD5;_TD5.tag= 2;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_TD6=_cycalloc(sizeof(struct Cyc_Absyn_AppType_Absyn_Type_struct));_TD6->tag= 0;
_TD6->f1= c;_TD6->f2= ts;_TF= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_TD6;}_TD5.f1= (void*)_TF;_TE= _TD5;}{struct Cyc_Warn_Typ_Warn_Warg_struct _TD5=_TE;{struct Cyc_Warn_String_Warn_Warg_struct _TD6;_TD6.tag= 0;({__typeof__(_tag_fat(" applied to argument(s)",sizeof(char),24U))_TD7=_tag_fat(" applied to argument(s)",sizeof(char),24U);_TD6.f1= _TD7;});_T10= _TD6;}{struct Cyc_Warn_String_Warn_Warg_struct _TD6=_T10;void*_TD7[2];_TD7[0]= & _TD5;_TD7[1]= & _TD6;_T12= Cyc_Warn_impos2;{int(*_TD8)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T12;_T11= _TD8;}_T13= _tag_fat(_TD7,sizeof(void*),2);_T11(_T13);}}goto _TL9A;_TL99: _TL9A: _T14= expected_kind;_T15= & Cyc_Kinds_aqk;_T16= (struct Cyc_Absyn_Kind*)_T15;
if(_T14==_T16)goto _TL9B;{struct Cyc_Warn_String_Warn_Warg_struct _TD5;_TD5.tag= 0;
({__typeof__(_tag_fat("Kind Q used where kind ",sizeof(char),24U))_TD6=_tag_fat("Kind Q used where kind ",sizeof(char),24U);_TD5.f1= _TD6;});_T17= _TD5;}{struct Cyc_Warn_String_Warn_Warg_struct _TD5=_T17;{struct Cyc_Warn_Kind_Warn_Warg_struct _TD6;_TD6.tag= 9;_TD6.f1= expected_kind;_T18= _TD6;}{struct Cyc_Warn_Kind_Warn_Warg_struct _TD6=_T18;{struct Cyc_Warn_String_Warn_Warg_struct _TD7;_TD7.tag= 0;({__typeof__(_tag_fat(" was expected",sizeof(char),14U))_TD8=_tag_fat(" was expected",sizeof(char),14U);_TD7.f1= _TD8;});_T19= _TD7;}{struct Cyc_Warn_String_Warn_Warg_struct _TD7=_T19;void*_TD8[3];_TD8[0]= & _TD5;_TD8[1]= & _TD6;_TD8[2]= & _TD7;_T1A= loc;_T1B= _tag_fat(_TD8,sizeof(void*),3);Cyc_Warn_err2(_T1A,_T1B);}}}goto _TL9C;_TL9B: _TL9C: _T1C= env;
return _T1C;case 15:
# 535
 if(ts==0)goto _TL9F;else{goto _TLA0;}_TLA0: _T1D= ts;_T1E= _T1D->tl;if(_T1E!=0)goto _TL9F;else{goto _TL9D;}
_TL9F:{struct Cyc_Warn_String_Warn_Warg_struct _TD5;_TD5.tag= 0;({__typeof__(_tag_fat("aquals expects a single argument",sizeof(char),33U))_TD6=_tag_fat("aquals expects a single argument",sizeof(char),33U);_TD5.f1= _TD6;});_T1F= _TD5;}{struct Cyc_Warn_String_Warn_Warg_struct _TD5=_T1F;void*_TD6[1];_TD6[0]= & _TD5;_T21= Cyc_Warn_impos2;{int(*_TD7)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T21;_T20= _TD7;}_T22= _tag_fat(_TD6,sizeof(void*),1);_T20(_T22);}goto _TL9E;_TL9D: _TL9E: _T23= env;_T24= & Cyc_Kinds_ak;_T25= (struct Cyc_Absyn_Kind*)_T24;_T26= ts;_T27= _T26->hd;_T28= 
Cyc_Tctyp_i_check_type(_T23,_T25,_T27,0,0);return _T28;case 17: _T29= 
# 539
Cyc_List_length(ts);if(_T29==2)goto _TLA1;{struct Cyc_Warn_String_Warn_Warg_struct _TD5;_TD5.tag= 0;
({__typeof__(_tag_fat("aquals expects two arguments",sizeof(char),29U))_TD6=_tag_fat("aquals expects two arguments",sizeof(char),29U);_TD5.f1= _TD6;});_T2A= _TD5;}{struct Cyc_Warn_String_Warn_Warg_struct _TD5=_T2A;void*_TD6[1];_TD6[0]= & _TD5;_T2C= Cyc_Warn_impos2;{int(*_TD7)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T2C;_T2B= _TD7;}_T2D= _tag_fat(_TD6,sizeof(void*),1);_T2B(_T2D);}goto _TLA2;_TLA1: _TLA2: _T2E= env;_T2F= & Cyc_Kinds_aqk;_T30= (struct Cyc_Absyn_Kind*)_T2F;_T31= 
_check_null(ts);_T32= _T31->hd;env= Cyc_Tctyp_i_check_type(_T2E,_T30,_T32,0,0);_T33= env;_T34= _T33.te;_T35= 
Cyc_Tcenv_curr_aquals_bounds(_T34);_T36= ts;_T37= _T36->hd;{void*ctx_bnd=Cyc_Tcutil_lookup_aquals_opt(_T35,_T37);_T38= ctx_bnd;_T39= (unsigned)_T38;
if(!_T39)goto _TLA3;_T3A= ts;_T3B= _T3A->tl;_T3C= 
_check_null(_T3B);_T3D= ctx_bnd;_T3C->hd= (void*)_T3D;goto _TLA4;
# 546
_TLA3: _T3E= env;_T3F= & Cyc_Kinds_aqk;_T40= (struct Cyc_Absyn_Kind*)_T3F;_T41= ts;_T42= _T41->tl;_T43= _check_null(_T42);_T44= _T43->hd;env= Cyc_Tctyp_i_check_type(_T3E,_T40,_T44,0,0);_TLA4:{struct Cyc_List_List*_TD5=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple16*_TD6=_cycalloc(sizeof(struct _tuple16));
# 548
_TD6->f0= apptype;_TD6->f1= 0;_T46= (struct _tuple16*)_TD6;}_TD5->hd= _T46;_T47= env;
_TD5->tl= _T47.free_qualvars;_T45= (struct Cyc_List_List*)_TD5;}
# 548
env.free_qualvars= _T45;_T48= env;
# 550
return _T48;}case 3:
# 552
 _TLA8: if(ts!=0)goto _TLA6;else{goto _TLA7;}
_TLA6: _T49= env;_T4A= & Cyc_Kinds_mk;_T4B= (struct Cyc_Absyn_Kind*)_T4A;_T4C= ts;_T4D= _T4C->hd;env= Cyc_Tctyp_i_check_type(_T49,_T4B,_T4D,1,1);_T4E= ts;
# 552
ts= _T4E->tl;goto _TLA8;_TLA7: _T4F= env;
# 554
return _T4F;case 9:
# 556
 _TLAC: if(ts!=0)goto _TLAA;else{goto _TLAB;}
_TLAA: _T50= env;_T51= & Cyc_Kinds_ek;_T52= (struct Cyc_Absyn_Kind*)_T51;_T53= ts;_T54= _T53->hd;env= Cyc_Tctyp_i_check_type(_T50,_T52,_T54,1,1);_T55= ts;
# 556
ts= _T55->tl;goto _TLAC;_TLAB: _T56= env;
# 558
return _T56;case 19: _T57= c;{struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct*_TD5=(struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct*)_T57;_TD4= _TD5->f1;_T58= c;_T59= (struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct*)_T58;_T5A= & _T59->f2;_TD3= (struct Cyc_Absyn_Enumdecl**)_T5A;}{struct _tuple1*n=_TD4;struct Cyc_Absyn_Enumdecl**edp=(struct Cyc_Absyn_Enumdecl**)_TD3;
# 560
if(ts==0)goto _TLAD;{struct Cyc_Warn_String_Warn_Warg_struct _TD5;_TD5.tag= 0;
({__typeof__(_tag_fat("enum applied to argument(s)",sizeof(char),28U))_TD6=_tag_fat("enum applied to argument(s)",sizeof(char),28U);_TD5.f1= _TD6;});_T5B= _TD5;}{struct Cyc_Warn_String_Warn_Warg_struct _TD5=_T5B;void*_TD6[1];_TD6[0]= & _TD5;_T5D= Cyc_Warn_impos2;{int(*_TD7)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T5D;_T5C= _TD7;}_T5E= _tag_fat(_TD6,sizeof(void*),1);_T5C(_T5E);}goto _TLAE;_TLAD: _TLAE: _T5F= edp;_T60= *_T5F;
if(_T60==0)goto _TLB1;else{goto _TLB2;}_TLB2: _T61= edp;_T62= *_T61;_T63= _T62->fields;if(_T63==0)goto _TLB1;else{goto _TLAF;}
_TLB1:{struct _handler_cons _TD5;_T64= & _TD5;_push_handler(_T64);{int _TD6=0;_T65= setjmp(_TD5.handler);if(!_T65)goto _TLB3;_TD6= 1;goto _TLB4;_TLB3: _TLB4: if(_TD6)goto _TLB5;else{goto _TLB7;}_TLB7: _T66= edp;_T67= 
Cyc_Tcenv_lookup_enumdecl(te,loc,n);*_T66= *_T67;_pop_handler();goto _TLB6;_TLB5: _T68= Cyc_Core_get_exn_thrown();{void*_TD7=(void*)_T68;void*_TD8;_T69= (struct Cyc_Dict_Absent_exn_struct*)_TD7;_T6A= _T69->tag;_T6B= Cyc_Dict_Absent;if(_T6A!=_T6B)goto _TLB8;_T6C= ctx;_T6D= te;_T6E= loc;{struct Cyc_Absyn_Enumdecl*_TD9=_cycalloc(sizeof(struct Cyc_Absyn_Enumdecl));
# 567
_TD9->sc= 3U;_TD9->name= n;_TD9->fields= 0;_T6F= (struct Cyc_Absyn_Enumdecl*)_TD9;}Cyc_Tc_tcEnumdecl(_T6C,_T6D,_T6E,_T6F);_T70= edp;_T71= 
Cyc_Tcenv_lookup_enumdecl(te,loc,n);*_T70= *_T71;goto _LL36;_TLB8: _TD8= _TD7;{void*exn=_TD8;_rethrow(exn);}_LL36:;}_TLB6:;}}goto _TLB0;_TLAF: _TLB0: _T72= env;
# 572
return _T72;}case 20: _T73= c;{struct Cyc_Absyn_AnonEnumCon_Absyn_TyCon_struct*_TD5=(struct Cyc_Absyn_AnonEnumCon_Absyn_TyCon_struct*)_T73;_TD4= _TD5->f1;}{struct Cyc_List_List*fs=_TD4;
# 574
if(ts==0)goto _TLBA;{struct Cyc_Warn_String_Warn_Warg_struct _TD5;_TD5.tag= 0;
({__typeof__(_tag_fat("enum applied to argument(s)",sizeof(char),28U))_TD6=_tag_fat("enum applied to argument(s)",sizeof(char),28U);_TD5.f1= _TD6;});_T74= _TD5;}{struct Cyc_Warn_String_Warn_Warg_struct _TD5=_T74;void*_TD6[1];_TD6[0]= & _TD5;_T76= Cyc_Warn_impos2;{int(*_TD7)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T76;_T75= _TD7;}_T77= _tag_fat(_TD6,sizeof(void*),1);_T75(_T77);}goto _TLBB;_TLBA: _TLBB: {
# 577
struct Cyc_List_List*prev_fields=0;
unsigned tag_count=0U;
_TLBF: if(fs!=0)goto _TLBD;else{goto _TLBE;}
_TLBD: _T78= fs;_T79= _T78->hd;{struct Cyc_Absyn_Enumfield*f=(struct Cyc_Absyn_Enumfield*)_T79;_T7B= Cyc_List_mem;{
long(*_TD5)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*)=(long(*)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*))_T7B;_T7A= _TD5;}_T7C= Cyc_strptrcmp;_T7D= prev_fields;_T7E= f;_T7F= _T7E->name;_T80= *_T7F;_T81= _T80.f1;_T82= _T7A(_T7C,_T7D,_T81);if(!_T82)goto _TLC0;{struct Cyc_Warn_String_Warn_Warg_struct _TD5;_TD5.tag= 0;
({__typeof__(_tag_fat("duplicate enum field name ",sizeof(char),27U))_TD6=_tag_fat("duplicate enum field name ",sizeof(char),27U);_TD5.f1= _TD6;});_T83= _TD5;}{struct Cyc_Warn_String_Warn_Warg_struct _TD5=_T83;{struct Cyc_Warn_Qvar_Warn_Warg_struct _TD6;_TD6.tag= 1;_T85= f;_TD6.f1= _T85->name;_T84= _TD6;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _TD6=_T84;void*_TD7[2];_TD7[0]= & _TD5;_TD7[1]= & _TD6;_T86= f;_T87= _T86->loc;_T88= _tag_fat(_TD7,sizeof(void*),2);Cyc_Warn_err2(_T87,_T88);}}goto _TLC1;
# 584
_TLC0:{struct Cyc_List_List*_TD5=_cycalloc(sizeof(struct Cyc_List_List));_T8A= f;_T8B= _T8A->name;_T8C= *_T8B;_TD5->hd= _T8C.f1;_TD5->tl= prev_fields;_T89= (struct Cyc_List_List*)_TD5;}prev_fields= _T89;_TLC1: _T8D= f;_T8E= _T8D->tag;
if(_T8E!=0)goto _TLC2;_T8F= f;_T90= tag_count;_T91= f;_T92= _T91->loc;
({__typeof__(Cyc_Absyn_uint_exp(_T90,_T92))_TD5=Cyc_Absyn_uint_exp(_T90,_T92);_T8F->tag= _TD5;});goto _TLC3;
_TLC2: _T93= f;_T94= _T93->tag;_T95= Cyc_Tcutil_is_const_exp(_T94);if(_T95)goto _TLC4;else{goto _TLC6;}
_TLC6:{struct Cyc_Warn_String_Warn_Warg_struct _TD5;_TD5.tag= 0;({__typeof__(_tag_fat("enum field ",sizeof(char),12U))_TD6=_tag_fat("enum field ",sizeof(char),12U);_TD5.f1= _TD6;});_T96= _TD5;}{struct Cyc_Warn_String_Warn_Warg_struct _TD5=_T96;{struct Cyc_Warn_Qvar_Warn_Warg_struct _TD6;_TD6.tag= 1;_T98= f;_TD6.f1= _T98->name;_T97= _TD6;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _TD6=_T97;{struct Cyc_Warn_String_Warn_Warg_struct _TD7;_TD7.tag= 0;({__typeof__(_tag_fat(": expression is not constant",sizeof(char),29U))_TD8=_tag_fat(": expression is not constant",sizeof(char),29U);_TD7.f1= _TD8;});_T99= _TD7;}{struct Cyc_Warn_String_Warn_Warg_struct _TD7=_T99;void*_TD8[3];_TD8[0]= & _TD5;_TD8[1]= & _TD6;_TD8[2]= & _TD7;_T9A= loc;_T9B= _tag_fat(_TD8,sizeof(void*),3);Cyc_Warn_err2(_T9A,_T9B);}}}goto _TLC5;_TLC4: _TLC5: _TLC3: _T9C= f;_T9D= _T9C->tag;_T9E= 
_check_null(_T9D);_T9F= Cyc_Evexp_eval_const_uint_exp(_T9E);_TA0= _T9F.f0;tag_count= 1U + _TA0;}_TA1= fs;
# 579
fs= _TA1->tl;goto _TLBF;_TLBE: _TA2= env;
# 591
return _TA2;}}case 10: _TA3= env;_TA4= & Cyc_Kinds_ak;_TA5= (struct Cyc_Absyn_Kind*)_TA4;_TA6= ts;_TA7= 
# 593
_tag_fat("regions",sizeof(char),8U);_TA8= Cyc_Tctyp_i_check_unary_app(_TA3,_TA5,_TA6,1,_TA7);return _TA8;case 4: _TA9= env;_TAA= & Cyc_Kinds_ek;_TAB= (struct Cyc_Absyn_Kind*)_TAA;_TAC= ts;_TAD= 
# 595
_tag_fat("region_t",sizeof(char),9U);_TAE= Cyc_Tctyp_i_check_unary_app(_TA9,_TAB,_TAC,1,_TAD);return _TAE;case 18: _TAF= env;_TB0= & Cyc_Kinds_aqk;_TB1= (struct Cyc_Absyn_Kind*)_TB0;_TB2= ts;_TB3= 
# 598
_tag_fat("aqual_t",sizeof(char),8U);_TB4= Cyc_Tctyp_i_check_unary_app(_TAF,_TB1,_TB2,1,_TB3);return _TB4;case 5: _TB5= env;_TB6= & Cyc_Kinds_ik;_TB7= (struct Cyc_Absyn_Kind*)_TB6;_TB8= ts;_TB9= 
# 602
_tag_fat("tag_t",sizeof(char),6U);_TBA= Cyc_Tctyp_i_check_unary_app(_TB5,_TB7,_TB8,0,_TB9);return _TBA;case 13: _TBB= env;_TBC= & Cyc_Kinds_ik;_TBD= (struct Cyc_Absyn_Kind*)_TBC;_TBE= ts;_TBF= 
# 604
_tag_fat("@thin",sizeof(char),6U);_TC0= Cyc_Tctyp_i_check_unary_app(_TBB,_TBD,_TBE,0,_TBF);return _TC0;case 24: _TC1= c;{struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_TD5=(struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*)_TC1;_TC2= c;_TC3= (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*)_TC2;_TC4= & _TC3->f1;_TD4= (union Cyc_Absyn_AggrInfo*)_TC4;}{union Cyc_Absyn_AggrInfo*info=_TD4;_TC5= 
# 606
Cyc_Tctyp_i_check_aggr(env,expected_kind,info,targsp,allow_abs_aggr);return _TC5;}case 22: _TC6= c;{struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*_TD5=(struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*)_TC6;_TC7= c;_TC8= (struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*)_TC7;_TC9= & _TC8->f1;_TD4= (union Cyc_Absyn_DatatypeInfo*)_TC9;}{union Cyc_Absyn_DatatypeInfo*info=_TD4;_TCA= 
# 608
Cyc_Tctyp_i_check_datatype(env,expected_kind,info,targsp,allow_abs_aggr);return _TCA;}default: _TCB= c;{struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct*_TD5=(struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct*)_TCB;_TCC= c;_TCD= (struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct*)_TCC;_TCE= & _TCD->f1;_TD4= (union Cyc_Absyn_DatatypeFieldInfo*)_TCE;}{union Cyc_Absyn_DatatypeFieldInfo*info=(union Cyc_Absyn_DatatypeFieldInfo*)_TD4;_TCF= 
# 610
Cyc_Tctyp_i_check_datatype_field(env,expected_kind,info,targsp,allow_abs_aggr);return _TCF;}};}}}
# 614
static int Cyc_Tctyp_bnd_qual_cmp(void*tvt1,void*tvt2){struct _tuple0 _T0;void*_T1;int*_T2;unsigned _T3;void*_T4;int*_T5;unsigned _T6;void*_T7;void*_T8;int _T9;void*_TA;int*_TB;unsigned _TC;void*_TD;void*_TE;int _TF;struct Cyc_Core_Opt*_T10;void*_T11;struct Cyc_Absyn_Kind*_T12;struct Cyc_Core_Opt*_T13;void*_T14;struct Cyc_Absyn_Kind*_T15;long _T16;void*_T17;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T18;void*_T19;int*_T1A;int _T1B;void*_T1C;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T1D;struct Cyc_List_List*_T1E;void*_T1F;int*_T20;unsigned _T21;void*_T22;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T23;void*_T24;int*_T25;int _T26;void*_T27;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T28;struct Cyc_List_List*_T29;void*_T2A;struct Cyc_List_List*_T2B;void*_T2C;void*_T2D;struct Cyc_List_List*_T2E;void*_T2F;int _T30;void*_T31;int*_T32;unsigned _T33;void*_T34;int*_T35;unsigned _T36;struct Cyc_Warn_String_Warn_Warg_struct _T37;struct Cyc_Warn_Typ_Warn_Warg_struct _T38;struct Cyc_Warn_String_Warn_Warg_struct _T39;struct Cyc_Warn_Typ_Warn_Warg_struct _T3A;int(*_T3B)(struct _fat_ptr);void*(*_T3C)(struct _fat_ptr);struct _fat_ptr _T3D;{struct _tuple0 _T3E;
({__typeof__(Cyc_Absyn_compress(tvt1))_T3F=Cyc_Absyn_compress(tvt1);_T3E.f0= _T3F;});({__typeof__(Cyc_Absyn_compress(tvt2))_T3F=Cyc_Absyn_compress(tvt2);_T3E.f1= _T3F;});_T0= _T3E;}{struct _tuple0 _T3E=_T0;int _T3F;int _T40;void*_T41;void*_T42;_T1= _T3E.f0;_T2= (int*)_T1;_T3= *_T2;switch(_T3){case 2: _T4= _T3E.f1;_T5= (int*)_T4;_T6= *_T5;switch(_T6){case 2: _T7= _T3E.f0;{struct Cyc_Absyn_VarType_Absyn_Type_struct*_T43=(struct Cyc_Absyn_VarType_Absyn_Type_struct*)_T7;_T42= _T43->f1;}_T8= _T3E.f1;{struct Cyc_Absyn_VarType_Absyn_Type_struct*_T43=(struct Cyc_Absyn_VarType_Absyn_Type_struct*)_T8;_T41= _T43->f1;}{struct Cyc_Absyn_Tvar*tv1=_T42;struct Cyc_Absyn_Tvar*tv2=_T41;_T9= 
# 617
Cyc_Absyn_tvar_cmp(tv1,tv2);return _T9;}case 1: goto _LLA;case 0: _LL10: goto _LL12;default: goto _LL13;};case 1: _TA= _T3E.f1;_TB= (int*)_TA;_TC= *_TB;switch(_TC){case 1: _TD= _T3E.f0;{struct Cyc_Absyn_Evar_Absyn_Type_struct*_T43=(struct Cyc_Absyn_Evar_Absyn_Type_struct*)_TD;_T42= _T43->f1;_T40= _T43->f3;}_TE= _T3E.f1;{struct Cyc_Absyn_Evar_Absyn_Type_struct*_T43=(struct Cyc_Absyn_Evar_Absyn_Type_struct*)_TE;_T41= _T43->f1;_T3F= _T43->f3;}{struct Cyc_Core_Opt*k1=_T42;int i1=_T40;struct Cyc_Core_Opt*k2=_T41;int i2=_T3F;
# 619
if(i1!=i2)goto _TLCA;_T10= _check_null(k1);_T11= _T10->v;_T12= (struct Cyc_Absyn_Kind*)_T11;_T13= _check_null(k2);_T14= _T13->v;_T15= (struct Cyc_Absyn_Kind*)_T14;_T16= Cyc_Kinds_kind_eq(_T12,_T15);if(!_T16)goto _TLCA;_TF= 0;goto _TLCB;_TLCA: _TF= 1;_TLCB: return _TF;}case 2: _LLA: goto _LLC;case 0: _LLC: goto _LLE;default: goto _LL13;};case 0: _T17= _T3E.f0;_T18= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T17;_T19= _T18->f1;_T1A= (int*)_T19;_T1B= *_T1A;if(_T1B!=15)goto _TLCC;_T1C= _T3E.f0;_T1D= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T1C;_T1E= _T1D->f2;if(_T1E==0)goto _TLCE;_T1F= _T3E.f1;_T20= (int*)_T1F;_T21= *_T20;switch(_T21){case 0: _T22= _T3E.f1;_T23= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T22;_T24= _T23->f1;_T25= (int*)_T24;_T26= *_T25;if(_T26!=15)goto _TLD1;_T27= _T3E.f1;_T28= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T27;_T29= _T28->f2;if(_T29==0)goto _TLD3;_T2A= _T3E.f0;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T43=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T2A;_T2B= _T43->f2;{struct Cyc_List_List _T44=*_T2B;_T2C= _T44.hd;_T42= (void*)_T2C;}}_T2D= _T3E.f1;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T43=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T2D;_T2E= _T43->f2;{struct Cyc_List_List _T44=*_T2E;_T2F= _T44.hd;_T41= (void*)_T2F;}}{void*tv11=_T42;void*tv21=_T41;_T30= 
# 621
Cyc_Tctyp_bnd_qual_cmp(tv11,tv21);return _T30;}_TLD3: goto _LL13;_TLD1: goto _LL13;case 1: goto _LLD;case 2: goto _LL11;default: goto _LL13;}goto _TLCF;_TLCE: _T31= _T3E.f1;_T32= (int*)_T31;_T33= *_T32;switch(_T33){case 1: goto _LLD;case 2: goto _LL11;default: goto _LL13;}_TLCF: goto _TLCD;_TLCC: _T34= _T3E.f1;_T35= (int*)_T34;_T36= *_T35;switch(_T36){case 1: _LLD: _LLE: goto _LL10;case 2: _LL11: _LL12:
# 628
 return 1;default: goto _LL13;}_TLCD:;default: _LL13:{struct Cyc_Warn_String_Warn_Warg_struct _T43;_T43.tag= 0;
# 630
({__typeof__(_tag_fat("Expect only tvars, evars or aquals in qualifier bounds: ",sizeof(char),57U))_T44=_tag_fat("Expect only tvars, evars or aquals in qualifier bounds: ",sizeof(char),57U);_T43.f1= _T44;});_T37= _T43;}{struct Cyc_Warn_String_Warn_Warg_struct _T43=_T37;{struct Cyc_Warn_Typ_Warn_Warg_struct _T44;_T44.tag= 2;_T44.f1= tvt1;_T38= _T44;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T44=_T38;{struct Cyc_Warn_String_Warn_Warg_struct _T45;_T45.tag= 0;({__typeof__(_tag_fat(",",sizeof(char),2U))_T46=_tag_fat(",",sizeof(char),2U);_T45.f1= _T46;});_T39= _T45;}{struct Cyc_Warn_String_Warn_Warg_struct _T45=_T39;{struct Cyc_Warn_Typ_Warn_Warg_struct _T46;_T46.tag= 2;_T46.f1= tvt2;_T3A= _T46;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T46=_T3A;void*_T47[4];_T47[0]= & _T43;_T47[1]= & _T44;_T47[2]= & _T45;_T47[3]= & _T46;_T3C= Cyc_Warn_impos2;{int(*_T48)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T3C;_T3B= _T48;}_T3D= _tag_fat(_T47,sizeof(void*),4);_T3B(_T3D);}}}}};}}
# 635
static long Cyc_Tctyp_aqualvar_unconstrained(struct _tuple16*t){struct _tuple16*_T0;struct _tuple16 _T1;void*_T2;int*_T3;int _T4;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T5;void*_T6;int*_T7;unsigned _T8;struct Cyc_Warn_String_Warn_Warg_struct _T9;struct Cyc_Warn_Typ_Warn_Warg_struct _TA;struct _tuple16*_TB;struct _tuple16 _TC;int(*_TD)(struct _fat_ptr);void*(*_TE)(struct _fat_ptr);struct _fat_ptr _TF;_T0= t;_T1= *_T0;_T2= _T1.f0;{
void*_T10=Cyc_Absyn_compress(_T2);_T3= (int*)_T10;_T4= *_T3;if(_T4!=0)goto _TLD7;_T5= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T10;_T6= _T5->f1;_T7= (int*)_T6;_T8= *_T7;switch(_T8){case 16:
# 638
 return 0;case 17:
# 640
 return 1;default: goto _LL5;}goto _TLD8;_TLD7: _LL5:{struct Cyc_Warn_String_Warn_Warg_struct _T11;_T11.tag= 0;
# 642
({__typeof__(_tag_fat("Expect only Aqual types -- got ",sizeof(char),32U))_T12=_tag_fat("Expect only Aqual types -- got ",sizeof(char),32U);_T11.f1= _T12;});_T9= _T11;}{struct Cyc_Warn_String_Warn_Warg_struct _T11=_T9;{struct Cyc_Warn_Typ_Warn_Warg_struct _T12;_T12.tag= 2;_TB= t;_TC= *_TB;_T12.f1= _TC.f0;_TA= _T12;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T12=_TA;void*_T13[2];_T13[0]= & _T11;_T13[1]= & _T12;_TE= Cyc_Warn_impos2;{int(*_T14)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_TE;_TD= _T14;}_TF= _tag_fat(_T13,sizeof(void*),2);_TD(_TF);}}_TLD8:;}}
# 646
static int Cyc_Tctyp_aqualsof_var_bnd(void*bndv,void*var){void*_T0;int*_T1;int _T2;void*_T3;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T4;void*_T5;int*_T6;int _T7;void*_T8;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T9;struct Cyc_List_List*_TA;void*_TB;struct Cyc_List_List*_TC;void*_TD;int _TE;void*_TF;_T0= bndv;_T1= (int*)_T0;_T2= *_T1;if(_T2!=0)goto _TLDA;_T3= bndv;_T4= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3;_T5= _T4->f1;_T6= (int*)_T5;_T7= *_T6;if(_T7!=15)goto _TLDC;_T8= bndv;_T9= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T8;_TA= _T9->f2;if(_TA==0)goto _TLDE;_TB= bndv;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T10=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_TB;_TC= _T10->f2;{struct Cyc_List_List _T11=*_TC;_TD= _T11.hd;_TF= (void*)_TD;}}{void*vv=_TF;_TE= 
# 649
Cyc_Tcutil_typecmp(var,vv);return _TE;}_TLDE: goto _LL3;_TLDC: goto _LL3;_TLDA: _LL3:
# 651
 return 1;;}
# 657
static void Cyc_Tctyp_constrain_vars(unsigned loc,struct Cyc_Tctyp_CVTEnv env,struct Cyc_List_List*vars,struct Cyc_List_List**qb,void*def,long make_ex_aliasable){struct Cyc_List_List*_T0;void*_T1;long _T2;void*_T3;int*_T4;unsigned _T5;void*_T6;struct Cyc_Absyn_Tvar*_T7;void*_T8;struct Cyc_Absyn_Tvar*_T9;struct Cyc_Absyn_Kind*_TA;struct Cyc_Core_Opt _TB;void*_TC;struct Cyc_Absyn_Kind*_TD;unsigned _TE;struct Cyc_Core_Opt _TF;void*_T10;struct Cyc_Absyn_Kind*_T11;void*_T12;struct Cyc_Absyn_Evar_Absyn_Type_struct*_T13;struct Cyc_Core_Opt*_T14;void*_T15;struct Cyc_Core_Opt*_T16;void*_T17;struct Cyc_Absyn_Kind*_T18;enum Cyc_Absyn_KindQual _T19;int _T1A;struct Cyc_Absyn_Kind*_T1B;enum Cyc_Absyn_KindQual _T1C;int _T1D;struct Cyc_Absyn_Kind*_T1E;enum Cyc_Absyn_KindQual _T1F;int _T20;struct _handler_cons*_T21;int _T22;struct Cyc_List_List**_T23;struct Cyc_List_List*_T24;void*_T25;long _T26;int _T27;struct Cyc_Warn_String_Warn_Warg_struct _T28;struct Cyc_Warn_Typ_Warn_Warg_struct _T29;unsigned _T2A;struct _fat_ptr _T2B;void*_T2C;struct Cyc_Core_Not_found_exn_struct*_T2D;char*_T2E;char*_T2F;long _T30;long _T31;struct Cyc_List_List**_T32;struct Cyc_List_List*_T33;struct _tuple0*_T34;struct Cyc_List_List**_T35;struct Cyc_List_List**_T36;struct Cyc_List_List*_T37;struct _tuple0*_T38;struct Cyc_List_List**_T39;struct Cyc_Absyn_Kind*_T3A;enum Cyc_Absyn_KindQual _T3B;int _T3C;struct _handler_cons*_T3D;int _T3E;struct Cyc_List_List**_T3F;struct Cyc_List_List*_T40;void*_T41;long _T42;int _T43;struct Cyc_Warn_String_Warn_Warg_struct _T44;struct Cyc_Warn_Typ_Warn_Warg_struct _T45;unsigned _T46;struct _fat_ptr _T47;void*_T48;struct Cyc_Core_Not_found_exn_struct*_T49;char*_T4A;char*_T4B;long _T4C;long _T4D;struct Cyc_List_List**_T4E;struct Cyc_List_List*_T4F;struct _tuple0*_T50;struct Cyc_List_List**_T51;struct Cyc_List_List**_T52;struct Cyc_List_List*_T53;struct _tuple0*_T54;struct Cyc_List_List**_T55;void*_T56;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T57;void*_T58;int*_T59;int _T5A;void*_T5B;struct Cyc_List_List*_T5C;void*_T5D;int*_T5E;int _T5F;void*_T60;struct Cyc_Absyn_Tvar*_T61;void*_T62;unsigned _T63;struct Cyc_Absyn_Tvar*_T64;struct _handler_cons*_T65;int _T66;struct Cyc_List_List**_T67;struct Cyc_List_List*_T68;void*_T69;long _T6A;int _T6B;struct Cyc_Warn_String_Warn_Warg_struct _T6C;struct Cyc_Warn_Typ_Warn_Warg_struct _T6D;unsigned _T6E;struct _fat_ptr _T6F;struct Cyc_List_List*_T70;struct Cyc_List_List*_T71;struct Cyc_List_List*_T72;void*_T73;void*_T74;struct Cyc_Core_Not_found_exn_struct*_T75;char*_T76;char*_T77;int*_T78;unsigned _T79;long _T7A;long _T7B;struct Cyc_List_List**_T7C;struct Cyc_List_List*_T7D;struct _tuple0*_T7E;struct Cyc_List_List**_T7F;struct Cyc_List_List*_T80;struct Cyc_List_List*_T81;struct Cyc_List_List*_T82;void*_T83;struct Cyc_List_List**_T84;struct Cyc_List_List*_T85;struct _tuple0*_T86;struct Cyc_List_List**_T87;struct Cyc_List_List*_T88;struct Cyc_List_List*_T89;struct Cyc_List_List*_T8A;void*_T8B;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T8C;void*_T8D;int*_T8E;int _T8F;struct Cyc_Warn_String_Warn_Warg_struct _T90;int(*_T91)(struct _fat_ptr);void*(*_T92)(struct _fat_ptr);struct _fat_ptr _T93;struct Cyc_Warn_String_Warn_Warg_struct _T94;struct Cyc_Warn_Typ_Warn_Warg_struct _T95;int(*_T96)(struct _fat_ptr);void*(*_T97)(struct _fat_ptr);struct _fat_ptr _T98;struct Cyc_List_List*_T99;
# 660
_TLE3: if(vars!=0)goto _TLE1;else{goto _TLE2;}
_TLE1: _T0= vars;_T1= _T0->hd;{struct _tuple16*_T9A=(struct _tuple16*)_T1;long _T9B;void*_T9C;{struct _tuple16 _T9D=*_T9A;_T9C= _T9D.f0;_T9B= _T9D.f1;}{void*v=_T9C;long existential=_T9B;_T2= make_ex_aliasable;
if(_T2)goto _TLE4;else{goto _TLE6;}
_TLE6: existential= 0;goto _TLE5;_TLE4: _TLE5: {
void*adef=def;
long explicit_bound_set=0;struct Cyc_List_List*_T9D;struct Cyc_Absyn_Kind*_T9E;struct Cyc_Absyn_Tvar*_T9F;_T3= v;_T4= (int*)_T3;_T5= *_T4;switch(_T5){case 2: _T6= v;{struct Cyc_Absyn_VarType_Absyn_Type_struct*_TA0=(struct Cyc_Absyn_VarType_Absyn_Type_struct*)_T6;_T9F= _TA0->f1;}{struct Cyc_Absyn_Tvar*tv=_T9F;_T7= tv;_T8= _T7->aquals_bound;
# 668
if(_T8==0)goto _TLE8;_T9= tv;
adef= _T9->aquals_bound;
explicit_bound_set= 1;goto _TLE9;_TLE8: _TLE9: {
# 672
struct Cyc_Core_Opt ko=Cyc_Kinds_tvar_kind_opt(tv);_TB= ko;_TC= _TB.v;_TD= (struct Cyc_Absyn_Kind*)_TC;_TE= (unsigned)_TD;
if(!_TE)goto _TLEA;_TF= ko;_T10= _TF.v;_TA= (struct Cyc_Absyn_Kind*)_T10;goto _TLEB;_TLEA: _T11= & Cyc_Kinds_ek;_TA= (struct Cyc_Absyn_Kind*)_T11;_TLEB: _T9E= _TA;goto _LL7;}}case 1: _T12= v;_T13= (struct Cyc_Absyn_Evar_Absyn_Type_struct*)_T12;_T14= _T13->f1;if(_T14==0)goto _TLEC;_T15= v;{struct Cyc_Absyn_Evar_Absyn_Type_struct*_TA0=(struct Cyc_Absyn_Evar_Absyn_Type_struct*)_T15;_T16= _TA0->f1;{struct Cyc_Core_Opt _TA1=*_T16;_T17= _TA1.v;_T9E= (struct Cyc_Absyn_Kind*)_T17;}}_LL7:{struct Cyc_Absyn_Kind*k=_T9E;_T18= k;_T19= _T18->kind;_T1A= (int)_T19;
# 676
if(_T1A==2)goto _TLF0;else{goto _TLF2;}_TLF2: _T1B= k;_T1C= _T1B->kind;_T1D= (int)_T1C;if(_T1D==0)goto _TLF0;else{goto _TLF1;}_TLF1: _T1E= k;_T1F= _T1E->kind;_T20= (int)_T1F;if(_T20==1)goto _TLF0;else{goto _TLEE;}
_TLF0:{struct _handler_cons _TA0;_T21= & _TA0;_push_handler(_T21);{int _TA1=0;_T22= setjmp(_TA0.handler);if(!_T22)goto _TLF3;_TA1= 1;goto _TLF4;_TLF3: _TLF4: if(_TA1)goto _TLF5;else{goto _TLF7;}_TLF7: _T23= qb;_T24= *_T23;_T25= v;{
void*xbnd=Cyc_List_assoc_cmp(Cyc_Tctyp_aqualsof_var_bnd,_T24,_T25);_T26= explicit_bound_set;
if(!_T26)goto _TLF8;_T27= Cyc_Tcutil_typecmp(adef,xbnd);if(!_T27)goto _TLF8;{struct Cyc_Warn_String_Warn_Warg_struct _TA2;_TA2.tag= 0;
({__typeof__(_tag_fat("Inconsistent aqual bounds on type ",sizeof(char),35U))_TA3=_tag_fat("Inconsistent aqual bounds on type ",sizeof(char),35U);_TA2.f1= _TA3;});_T28= _TA2;}{struct Cyc_Warn_String_Warn_Warg_struct _TA2=_T28;{struct Cyc_Warn_Typ_Warn_Warg_struct _TA3;_TA3.tag= 2;_TA3.f1= v;_T29= _TA3;}{struct Cyc_Warn_Typ_Warn_Warg_struct _TA3=_T29;void*_TA4[2];_TA4[0]= & _TA2;_TA4[1]= & _TA3;_T2A= loc;_T2B= _tag_fat(_TA4,sizeof(void*),2);Cyc_Warn_warn2(_T2A,_T2B);}}goto _TLF9;_TLF8: _TLF9:;}_pop_handler();goto _TLF6;_TLF5: _T2C= Cyc_Core_get_exn_thrown();{void*_TA2=(void*)_T2C;void*_TA3;_T2D= (struct Cyc_Core_Not_found_exn_struct*)_TA2;_T2E= _T2D->tag;_T2F= Cyc_Core_Not_found;if(_T2E!=_T2F)goto _TLFA;{
# 683
void*aqt=Cyc_Absyn_aqualsof_type(v);_T30= existential;
if(!_T30)goto _TLFC;_T31= explicit_bound_set;if(_T31)goto _TLFC;else{goto _TLFE;}
_TLFE: _T32= qb;{struct Cyc_List_List*_TA4=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple0*_TA5=_cycalloc(sizeof(struct _tuple0));_TA5->f0= aqt;_TA5->f1= Cyc_Absyn_al_qual_type;_T34= (struct _tuple0*)_TA5;}_TA4->hd= _T34;_T35= qb;_TA4->tl= *_T35;_T33= (struct Cyc_List_List*)_TA4;}*_T32= _T33;goto _TLFD;
# 687
_TLFC: _T36= qb;{struct Cyc_List_List*_TA4=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple0*_TA5=_cycalloc(sizeof(struct _tuple0));_TA5->f0= aqt;_TA5->f1= adef;_T38= (struct _tuple0*)_TA5;}_TA4->hd= _T38;_T39= qb;_TA4->tl= *_T39;_T37= (struct Cyc_List_List*)_TA4;}*_T36= _T37;_TLFD: goto _LLC;}_TLFA: _TA3= _TA2;{void*exn=_TA3;_rethrow(exn);}_LLC:;}_TLF6:;}}goto _TLEF;
# 690
_TLEE: _T3A= k;_T3B= _T3A->kind;_T3C= (int)_T3B;if(_T3C!=7)goto _TLFF;{struct _handler_cons _TA0;_T3D= & _TA0;_push_handler(_T3D);{int _TA1=0;_T3E= setjmp(_TA0.handler);if(!_T3E)goto _TL101;_TA1= 1;goto _TL102;_TL101: _TL102: if(_TA1)goto _TL103;else{goto _TL105;}_TL105: _T3F= qb;_T40= *_T3F;_T41= v;{
# 692
void*xbnd=Cyc_List_assoc_cmp(Cyc_Tctyp_bnd_qual_cmp,_T40,_T41);_T42= explicit_bound_set;
if(!_T42)goto _TL106;_T43= Cyc_Tcutil_typecmp(adef,xbnd);if(!_T43)goto _TL106;{struct Cyc_Warn_String_Warn_Warg_struct _TA2;_TA2.tag= 0;
({__typeof__(_tag_fat("Inconsistent aqual bounds on type ",sizeof(char),35U))_TA3=_tag_fat("Inconsistent aqual bounds on type ",sizeof(char),35U);_TA2.f1= _TA3;});_T44= _TA2;}{struct Cyc_Warn_String_Warn_Warg_struct _TA2=_T44;{struct Cyc_Warn_Typ_Warn_Warg_struct _TA3;_TA3.tag= 2;_TA3.f1= v;_T45= _TA3;}{struct Cyc_Warn_Typ_Warn_Warg_struct _TA3=_T45;void*_TA4[2];_TA4[0]= & _TA2;_TA4[1]= & _TA3;_T46= loc;_T47= _tag_fat(_TA4,sizeof(void*),2);Cyc_Warn_warn2(_T46,_T47);}}goto _TL107;_TL106: _TL107:;}_pop_handler();goto _TL104;_TL103: _T48= Cyc_Core_get_exn_thrown();{void*_TA2=(void*)_T48;void*_TA3;_T49= (struct Cyc_Core_Not_found_exn_struct*)_TA2;_T4A= _T49->tag;_T4B= Cyc_Core_Not_found;if(_T4A!=_T4B)goto _TL108;_T4C= existential;
# 697
if(!_T4C)goto _TL10A;_T4D= explicit_bound_set;if(_T4D)goto _TL10A;else{goto _TL10C;}
_TL10C: _T4E= qb;{struct Cyc_List_List*_TA4=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple0*_TA5=_cycalloc(sizeof(struct _tuple0));_TA5->f0= v;_TA5->f1= Cyc_Absyn_al_qual_type;_T50= (struct _tuple0*)_TA5;}_TA4->hd= _T50;_T51= qb;_TA4->tl= *_T51;_T4F= (struct Cyc_List_List*)_TA4;}*_T4E= _T4F;goto _TL10B;
# 700
_TL10A: _T52= qb;{struct Cyc_List_List*_TA4=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple0*_TA5=_cycalloc(sizeof(struct _tuple0));_TA5->f0= v;_TA5->f1= adef;_T54= (struct _tuple0*)_TA5;}_TA4->hd= _T54;_T55= qb;_TA4->tl= *_T55;_T53= (struct Cyc_List_List*)_TA4;}*_T52= _T53;_TL10B: goto _LL11;_TL108: _TA3= _TA2;{void*exn=_TA3;_rethrow(exn);}_LL11:;}_TL104:;}}goto _TL100;_TLFF: _TL100: _TLEF: goto _LL3;}_TLEC: goto _LLA;case 0: _T56= v;_T57= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T56;_T58= _T57->f1;_T59= (int*)_T58;_T5A= *_T59;if(_T5A!=17)goto _TL10D;_T5B= v;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_TA0=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T5B;_T9D= _TA0->f2;}{struct Cyc_List_List*tv_bnd=_T9D;_T5C= 
# 706
_check_null(tv_bnd);{void*tv=_T5C->hd;{struct Cyc_Absyn_Tvar*_TA0;_T5D= tv;_T5E= (int*)_T5D;_T5F= *_T5E;if(_T5F!=2)goto _TL10F;_T60= tv;{struct Cyc_Absyn_VarType_Absyn_Type_struct*_TA1=(struct Cyc_Absyn_VarType_Absyn_Type_struct*)_T60;_TA0= _TA1->f1;}{struct Cyc_Absyn_Tvar*tv=_TA0;_T61= tv;_T62= _T61->aquals_bound;_T63= (unsigned)_T62;
# 709
if(!_T63)goto _TL111;_T64= tv;
adef= _T64->aquals_bound;
explicit_bound_set= 1;goto _TL112;_TL111: _TL112: goto _LL16;}_TL10F: goto _LL16;_LL16:;}{struct _handler_cons _TA0;_T65= & _TA0;_push_handler(_T65);{int _TA1=0;_T66= setjmp(_TA0.handler);if(!_T66)goto _TL113;_TA1= 1;goto _TL114;_TL113: _TL114: if(_TA1)goto _TL115;else{goto _TL117;}_TL117: _T67= qb;_T68= *_T67;_T69= tv;{
# 718
void*x_bnd=Cyc_List_assoc_cmp(Cyc_Tctyp_bnd_qual_cmp,_T68,_T69);_T6A= explicit_bound_set;
if(!_T6A)goto _TL118;_T6B= Cyc_Tcutil_typecmp(x_bnd,adef);if(!_T6B)goto _TL118;{struct Cyc_Warn_String_Warn_Warg_struct _TA2;_TA2.tag= 0;
({__typeof__(_tag_fat("Inconsistent aqual bounds on type ",sizeof(char),35U))_TA3=_tag_fat("Inconsistent aqual bounds on type ",sizeof(char),35U);_TA2.f1= _TA3;});_T6C= _TA2;}{struct Cyc_Warn_String_Warn_Warg_struct _TA2=_T6C;{struct Cyc_Warn_Typ_Warn_Warg_struct _TA3;_TA3.tag= 2;_TA3.f1= v;_T6D= _TA3;}{struct Cyc_Warn_Typ_Warn_Warg_struct _TA3=_T6D;void*_TA4[2];_TA4[0]= & _TA2;_TA4[1]= & _TA3;_T6E= loc;_T6F= _tag_fat(_TA4,sizeof(void*),2);Cyc_Warn_warn2(_T6E,_T6F);}}goto _TL119;_TL118: _TL119: _T70= tv_bnd;_T71= _T70->tl;_T72= 
_check_null(_T71);_T73= x_bnd;_T72->hd= (void*)_T73;}_pop_handler();goto _TL116;_TL115: _T74= Cyc_Core_get_exn_thrown();{void*_TA2=(void*)_T74;void*_TA3;_T75= (struct Cyc_Core_Not_found_exn_struct*)_TA2;_T76= _T75->tag;_T77= Cyc_Core_Not_found;if(_T76!=_T77)goto _TL11A;{
# 725
void*_TA4=Cyc_Absyn_compress(tv);_T78= (int*)_TA4;_T79= *_T78;switch(_T79){case 1: goto _LL24;case 2: _LL24: _T7A= existential;
# 728
if(!_T7A)goto _TL11D;_T7B= explicit_bound_set;if(_T7B)goto _TL11D;else{goto _TL11F;}
_TL11F: _T7C= qb;{struct Cyc_List_List*_TA5=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple0*_TA6=_cycalloc(sizeof(struct _tuple0));_TA6->f0= tv;_TA6->f1= Cyc_Absyn_al_qual_type;_T7E= (struct _tuple0*)_TA6;}_TA5->hd= _T7E;_T7F= qb;_TA5->tl= *_T7F;_T7D= (struct Cyc_List_List*)_TA5;}*_T7C= _T7D;_T80= tv_bnd;_T81= _T80->tl;_T82= 
_check_null(_T81);_T83= Cyc_Absyn_al_qual_type;_T82->hd= (void*)_T83;goto _TL11E;
# 732
_TL11D: _T84= qb;{struct Cyc_List_List*_TA5=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple0*_TA6=_cycalloc(sizeof(struct _tuple0));_TA6->f0= tv;_TA6->f1= adef;_T86= (struct _tuple0*)_TA6;}_TA5->hd= _T86;_T87= qb;_TA5->tl= *_T87;_T85= (struct Cyc_List_List*)_TA5;}*_T84= _T85;_T88= tv_bnd;_T89= _T88->tl;_T8A= 
_check_null(_T89);_T8B= adef;_T8A->hd= (void*)_T8B;_TL11E: goto _LL20;case 0: _T8C= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_TA4;_T8D= _T8C->f1;_T8E= (int*)_T8D;_T8F= *_T8E;if(_T8F!=15)goto _TL120;{struct Cyc_Warn_String_Warn_Warg_struct _TA5;_TA5.tag= 0;
# 737
({__typeof__(_tag_fat("aquals bounds must be present",sizeof(char),30U))_TA6=_tag_fat("aquals bounds must be present",sizeof(char),30U);_TA5.f1= _TA6;});_T90= _TA5;}{struct Cyc_Warn_String_Warn_Warg_struct _TA5=_T90;void*_TA6[1];_TA6[0]= & _TA5;_T92= Cyc_Warn_impos2;{int(*_TA7)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T92;_T91= _TA7;}_T93= _tag_fat(_TA6,sizeof(void*),1);_T91(_T93);}goto _TL121;_TL120: goto _LL27;_TL121:;default: _LL27: goto _LL20;}_LL20:;}goto _LL1B;_TL11A: _TA3= _TA2;{void*exn=_TA3;_rethrow(exn);}_LL1B:;}_TL116:;}}goto _LL3;}}_TL10D: goto _LLA;default: _LLA:{struct Cyc_Warn_String_Warn_Warg_struct _TA0;_TA0.tag= 0;
# 746
({__typeof__(_tag_fat("Expect only tvars, evars and aqual_vars -- got ",sizeof(char),48U))_TA1=_tag_fat("Expect only tvars, evars and aqual_vars -- got ",sizeof(char),48U);_TA0.f1= _TA1;});_T94= _TA0;}{struct Cyc_Warn_String_Warn_Warg_struct _TA0=_T94;{struct Cyc_Warn_Typ_Warn_Warg_struct _TA1;_TA1.tag= 2;_TA1.f1= v;_T95= _TA1;}{struct Cyc_Warn_Typ_Warn_Warg_struct _TA1=_T95;void*_TA2[2];_TA2[0]= & _TA0;_TA2[1]= & _TA1;_T97= Cyc_Warn_impos2;{int(*_TA3)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T97;_T96= _TA3;}_T98= _tag_fat(_TA2,sizeof(void*),2);_T96(_T98);}}goto _LL3;}_LL3:;}}}_T99= vars;
# 660
vars= _T99->tl;goto _TLE3;_TLE2:;}
# 752
static struct _tuple16*Cyc_Tctyp_tvar2type(struct _tuple15*in){struct _tuple15*_T0;struct _tuple16*_T1;long _T2;struct Cyc_Absyn_Tvar*_T3;_T0= in;{struct _tuple15 _T4=*_T0;_T3= _T4.f0;_T2= _T4.f1;}{struct Cyc_Absyn_Tvar*tv=_T3;long b=_T2;
# 754
void*t=Cyc_Absyn_var_type(tv);{struct _tuple16*_T4=_cycalloc(sizeof(struct _tuple16));
_T4->f0= t;_T4->f1= b;_T1= (struct _tuple16*)_T4;}return _T1;}}
# 758
static long Cyc_Tctyp_evar_unconstrained(struct _tuple16*evb){struct _tuple16*_T0;struct _tuple16 _T1;void*_T2;int*_T3;int _T4;_T0= evb;_T1= *_T0;_T2= _T1.f0;{
void*_T5=Cyc_Absyn_compress(_T2);_T3= (int*)_T5;_T4= *_T3;if(_T4!=1)goto _TL122;
# 761
return 1;_TL122:
# 763
 return 0;;}}
# 768
static void Cyc_Tctyp_update_qualifier_bounds(unsigned loc,struct Cyc_Tctyp_CVTEnv env,struct Cyc_List_List*flagged_tvars,struct Cyc_List_List**qb,void*def){struct Cyc_Tctyp_CVTEnv _T0;struct Cyc_Tctyp_CVTEnv _T1;unsigned _T2;struct Cyc_Tctyp_CVTEnv _T3;struct Cyc_List_List*(*_T4)(struct _tuple16*(*)(struct _tuple15*),struct Cyc_List_List*);struct Cyc_List_List*(*_T5)(void*(*)(void*),struct Cyc_List_List*);struct Cyc_List_List*_T6;struct Cyc_List_List*_T7;struct Cyc_List_List**_T8;void*_T9;unsigned _TA;struct Cyc_Tctyp_CVTEnv _TB;struct Cyc_List_List*(*_TC)(struct _tuple16*(*)(struct _tuple15*),struct Cyc_List_List*);struct Cyc_List_List*(*_TD)(void*(*)(void*),struct Cyc_List_List*);struct Cyc_Tctyp_CVTEnv _TE;struct Cyc_List_List*_TF;struct Cyc_List_List*_T10;struct Cyc_List_List**_T11;void*_T12;unsigned _T13;struct Cyc_Tctyp_CVTEnv _T14;struct Cyc_List_List*(*_T15)(long(*)(struct _tuple16*),struct Cyc_List_List*);struct Cyc_List_List*(*_T16)(long(*)(void*),struct Cyc_List_List*);struct Cyc_List_List*_T17;struct Cyc_List_List*_T18;struct Cyc_List_List**_T19;void*_T1A;unsigned _T1B;struct Cyc_Tctyp_CVTEnv _T1C;struct Cyc_List_List*(*_T1D)(long(*)(struct _tuple16*),struct Cyc_List_List*);struct Cyc_List_List*(*_T1E)(long(*)(void*),struct Cyc_List_List*);struct Cyc_List_List*_T1F;struct Cyc_List_List*_T20;struct Cyc_List_List**_T21;void*_T22;_T0= env;{
# 771
struct Cyc_List_List*freeqvs=_T0.free_qualvars;_T1= env;{
struct Cyc_List_List*freeevs=_T1.free_evars;_T2= loc;_T3= env;_T5= Cyc_List_map;{
struct Cyc_List_List*(*_T23)(struct _tuple16*(*)(struct _tuple15*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _tuple16*(*)(struct _tuple15*),struct Cyc_List_List*))_T5;_T4= _T23;}_T6= flagged_tvars;_T7= _T4(Cyc_Tctyp_tvar2type,_T6);_T8= qb;_T9= def;Cyc_Tctyp_constrain_vars(_T2,_T3,_T7,_T8,_T9,1);_TA= loc;_TB= env;_TD= Cyc_List_map;{
struct Cyc_List_List*(*_T23)(struct _tuple16*(*)(struct _tuple15*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _tuple16*(*)(struct _tuple15*),struct Cyc_List_List*))_TD;_TC= _T23;}_TE= env;_TF= _TE.free_vars;_T10= _TC(Cyc_Tctyp_tvar2type,_TF);_T11= qb;_T12= def;Cyc_Tctyp_constrain_vars(_TA,_TB,_T10,_T11,_T12,0);_T13= loc;_T14= env;_T16= Cyc_List_filter;{
# 776
struct Cyc_List_List*(*_T23)(long(*)(struct _tuple16*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(long(*)(struct _tuple16*),struct Cyc_List_List*))_T16;_T15= _T23;}_T17= freeevs;_T18= _T15(Cyc_Tctyp_evar_unconstrained,_T17);_T19= qb;_T1A= def;Cyc_Tctyp_constrain_vars(_T13,_T14,_T18,_T19,_T1A,0);_T1B= loc;_T1C= env;_T1E= Cyc_List_filter;{
struct Cyc_List_List*(*_T23)(long(*)(struct _tuple16*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(long(*)(struct _tuple16*),struct Cyc_List_List*))_T1E;_T1D= _T23;}_T1F= freeqvs;_T20= _T1D(Cyc_Tctyp_aqualvar_unconstrained,_T1F);_T21= qb;_T22= def;Cyc_Tctyp_constrain_vars(_T1B,_T1C,_T20,_T21,_T22,0);}}}
# 780
static long Cyc_Tctyp_ok_as_assn_exp(long*ok,struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;int*_T1;unsigned _T2;long*_T3;long*_T4;long _T5;_T0= e;{
void*_T6=_T0->r;_T1= (int*)_T6;_T2= *_T1;switch(_T2){case 4: goto _LL4;case 5: _LL4: goto _LL6;case 10: _LL6: goto _LL8;case 11: _LL8: goto _LLA;case 16: _LLA: goto _LLC;case 20: _LLC: goto _LLE;case 22: _LLE: goto _LL10;case 23: _LL10: goto _LL12;case 33: _LL12: goto _LL14;case 34: _LL14: goto _LL16;case 39: _LL16: _T3= ok;
# 793
*_T3= 0;
return 0;default: _T4= ok;_T5= *_T4;
# 796
return _T5;};}}
# 799
static long Cyc_Tctyp_ok_as_assn_stmt(long*ok,struct Cyc_Absyn_Stmt*s){long*_T0;_T0= ok;
*_T0= 0;
return 0;}
# 805
static long Cyc_Tctyp_ok_as_assn(struct Cyc_Absyn_Exp*e){void(*_T0)(long(*)(long*,struct Cyc_Absyn_Exp*),long(*)(long*,struct Cyc_Absyn_Stmt*),long*,struct Cyc_Absyn_Exp*);void(*_T1)(long(*)(void*,struct Cyc_Absyn_Exp*),long(*)(void*,struct Cyc_Absyn_Stmt*),void*,struct Cyc_Absyn_Exp*);long*_T2;struct Cyc_Absyn_Exp*_T3;long _T4;
long ok=1;_T1= Cyc_Absyn_visit_exp;{
void(*_T5)(long(*)(long*,struct Cyc_Absyn_Exp*),long(*)(long*,struct Cyc_Absyn_Stmt*),long*,struct Cyc_Absyn_Exp*)=(void(*)(long(*)(long*,struct Cyc_Absyn_Exp*),long(*)(long*,struct Cyc_Absyn_Stmt*),long*,struct Cyc_Absyn_Exp*))_T1;_T0= _T5;}_T2= & ok;_T3= e;_T0(Cyc_Tctyp_ok_as_assn_exp,Cyc_Tctyp_ok_as_assn_stmt,_T2,_T3);_T4= ok;
return _T4;}
# 813
static void Cyc_Tctyp_check_constrain_ptrbnd(unsigned loc,void*t,struct Cyc_Absyn_Kind*expected_kind){struct Cyc_Absyn_Kind*_T0;enum Cyc_Absyn_KindQual _T1;int _T2;int*_T3;int _T4;struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T5;void**_T6;void**_T7;void*_T8;long _T9;unsigned _TA;void**_TB;void*_TC;void*_TD;void*_TE;long _TF;struct Cyc_Warn_String_Warn_Warg_struct _T10;struct Cyc_Warn_Typ_Warn_Warg_struct _T11;struct Cyc_Warn_String_Warn_Warg_struct _T12;struct Cyc_Warn_Kind_Warn_Warg_struct _T13;struct Cyc_Warn_String_Warn_Warg_struct _T14;struct Cyc_Warn_Kind_Warn_Warg_struct _T15;unsigned _T16;struct _fat_ptr _T17;void**_T18;void*_T19;void*_T1A;void*_T1B;_T0= expected_kind;_T1= _T0->kind;_T2= (int)_T1;
if(_T2!=2)goto _TL125;{
void*_T1C=Cyc_Absyn_compress(t);void*_T1D;_T3= (int*)_T1C;_T4= *_T3;if(_T4!=4)goto _TL127;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T1E=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T1C;_T5= (struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T1C;_T6= & _T5->f1.ptr_atts.bounds;_T1D= (void**)_T6;}{void**b=(void**)_T1D;_T7= b;_T8= *_T7;_T9= 
# 819
Cyc_Tcutil_is_cvar_type(_T8);if(!_T9)goto _TL129;_TA= loc;_TB= b;_TC= *_TB;_TD= 
Cyc_Absyn_thinconst();_TE= Cyc_BansheeIf_equality_constraint(_TC,_TD);_TF= Cyc_BansheeIf_add_constraint(_TA,_TE);if(_TF)goto _TL12B;else{goto _TL12D;}
_TL12D:{struct Cyc_Warn_String_Warn_Warg_struct _T1E;_T1E.tag= 0;({__typeof__(_tag_fat("type ",sizeof(char),6U))_T1F=_tag_fat("type ",sizeof(char),6U);_T1E.f1= _T1F;});_T10= _T1E;}{struct Cyc_Warn_String_Warn_Warg_struct _T1E=_T10;{struct Cyc_Warn_Typ_Warn_Warg_struct _T1F;_T1F.tag= 2;_T1F.f1= t;_T11= _T1F;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T1F=_T11;{struct Cyc_Warn_String_Warn_Warg_struct _T20;_T20.tag= 0;({__typeof__(_tag_fat(" has kind ",sizeof(char),11U))_T21=_tag_fat(" has kind ",sizeof(char),11U);_T20.f1= _T21;});_T12= _T20;}{struct Cyc_Warn_String_Warn_Warg_struct _T20=_T12;{struct Cyc_Warn_Kind_Warn_Warg_struct _T21;_T21.tag= 9;({__typeof__(Cyc_Tcutil_type_kind(t))_T22=Cyc_Tcutil_type_kind(t);_T21.f1= _T22;});_T13= _T21;}{struct Cyc_Warn_Kind_Warn_Warg_struct _T21=_T13;{struct Cyc_Warn_String_Warn_Warg_struct _T22;_T22.tag= 0;({__typeof__(_tag_fat(" but as used here needs kind ",sizeof(char),30U))_T23=_tag_fat(" but as used here needs kind ",sizeof(char),30U);_T22.f1= _T23;});_T14= _T22;}{struct Cyc_Warn_String_Warn_Warg_struct _T22=_T14;{struct Cyc_Warn_Kind_Warn_Warg_struct _T23;_T23.tag= 9;
_T23.f1= expected_kind;_T15= _T23;}{struct Cyc_Warn_Kind_Warn_Warg_struct _T23=_T15;void*_T24[6];_T24[0]= & _T1E;_T24[1]= & _T1F;_T24[2]= & _T20;_T24[3]= & _T21;_T24[4]= & _T22;_T24[5]= & _T23;_T16= loc;_T17= _tag_fat(_T24,sizeof(void*),6);Cyc_Warn_err2(_T16,_T17);}}}}}}goto _TL12C;
# 824
_TL12B: _T18= b;_T19= *_T18;_T1A= Cyc_Absyn_compress(_T19);_T1B= Cyc_Absyn_bounds_one();if(_T1A!=_T1B)goto _TL12E;goto _TL12F;_TL12E: _throw_assert();_TL12F: _TL12C: goto _TL12A;_TL129: _TL12A: goto _LL0;}_TL127: goto _LL0;_LL0:;}goto _TL126;_TL125: _TL126:;}struct _tuple18{enum Cyc_Absyn_Format_Type f0;void*f1;};struct _tuple19{struct Cyc_Absyn_Tvar*f0;void*f1;};
# 834
static struct Cyc_Tctyp_CVTEnv Cyc_Tctyp_i_check_type(struct Cyc_Tctyp_CVTEnv env,struct Cyc_Absyn_Kind*expected_kind,void*t,long put_in_effect,long allow_abs_aggr){struct Cyc_Tctyp_CVTEnv _T0;struct Cyc_Tctyp_CVTEnv _T1;struct Cyc_Tctyp_CVTEnv _T2;int*_T3;unsigned _T4;void*_T5;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T6;struct Cyc_List_List**_T7;struct Cyc_Absyn_Cvar_Absyn_Type_struct*_T8;struct Cyc_Core_Opt**_T9;struct Cyc_Warn_String_Warn_Warg_struct _TA;struct Cyc_Warn_Typ_Warn_Warg_struct _TB;unsigned _TC;struct _fat_ptr _TD;struct Cyc_Core_Opt**_TE;struct Cyc_Core_Opt*_TF;struct Cyc_Absyn_Kind*_T10;struct Cyc_Core_Opt**_T11;struct Cyc_Core_Opt*_T12;void*_T13;struct Cyc_Absyn_Kind*_T14;long _T15;struct Cyc_Core_Opt**_T16;struct Cyc_Core_Opt*_T17;struct Cyc_Core_Opt*_T18;void*_T19;struct Cyc_Absyn_Kind*_T1A;struct Cyc_Absyn_Kind*_T1B;long _T1C;struct Cyc_Core_Opt**_T1D;struct Cyc_Absyn_Evar_Absyn_Type_struct*_T1E;struct Cyc_Core_Opt**_T1F;struct Cyc_Absyn_Evar_Absyn_Type_struct*_T20;void**_T21;struct Cyc_Core_Opt**_T22;struct Cyc_Core_Opt*_T23;struct Cyc_Absyn_Kind*_T24;struct Cyc_Core_Opt**_T25;struct Cyc_Core_Opt*_T26;void*_T27;struct Cyc_Absyn_Kind*_T28;long _T29;struct Cyc_Core_Opt**_T2A;struct Cyc_Core_Opt*_T2B;struct Cyc_Core_Opt*_T2C;void*_T2D;struct Cyc_Absyn_Kind*_T2E;struct Cyc_Absyn_Kind*_T2F;long _T30;struct Cyc_Core_Opt**_T31;struct Cyc_Tctyp_CVTEnv _T32;long _T33;struct Cyc_Tctyp_CVTEnv _T34;long _T35;struct Cyc_Absyn_Kind*_T36;enum Cyc_Absyn_KindQual _T37;int _T38;struct Cyc_Tcenv_Tenv*_T39;long _T3A;void**_T3B;struct Cyc_Absyn_Kind*_T3C;enum Cyc_Absyn_KindQual _T3D;int _T3E;struct Cyc_Tcenv_Tenv*_T3F;long _T40;void**_T41;struct Cyc_Tctyp_CVTEnv _T42;long _T43;struct Cyc_Absyn_Kind*_T44;enum Cyc_Absyn_KindQual _T45;int _T46;struct Cyc_Tcenv_Tenv*_T47;long _T48;void**_T49;struct Cyc_Tctyp_CVTEnv _T4A;long _T4B;struct Cyc_Absyn_Kind*_T4C;enum Cyc_Absyn_KindQual _T4D;int _T4E;struct Cyc_Absyn_Kind*_T4F;enum Cyc_Absyn_KindQual _T50;int _T51;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T52;void*_T53;void**_T54;struct Cyc_Tctyp_CVTEnv _T55;struct Cyc_List_List*_T56;void*_T57;long _T58;struct Cyc_Absyn_Tvar*_T59;void*_T5A;int*_T5B;int _T5C;struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*_T5D;struct Cyc_Core_Opt**_T5E;struct Cyc_Core_Opt**_T5F;struct Cyc_Core_Opt*_T60;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T61;unsigned _T62;struct Cyc_Tctyp_CVTEnv _T63;struct Cyc_List_List*_T64;struct Cyc_Absyn_Tvar*_T65;struct Cyc_Tctyp_CVTEnv _T66;long _T67;struct Cyc_Tctyp_CVTEnv _T68;struct Cyc_List_List*_T69;struct Cyc_Absyn_Tvar*_T6A;long _T6B;struct Cyc_Absyn_Tvar*_T6C;void*_T6D;int*_T6E;int _T6F;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T70;struct Cyc_Core_Opt**_T71;long _T72;struct Cyc_Core_Opt**_T73;struct Cyc_Core_Opt*_T74;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T75;struct Cyc_Absyn_TypeDecl*_T76;struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*_T77;void***_T78;void*_T79;void*_T7A;int*_T7B;unsigned _T7C;void*_T7D;struct Cyc_Tctyp_CVTEnv _T7E;struct Cyc_Tcenv_Tenv*_T7F;long _T80;struct Cyc_Absyn_Aggrdecl*_T81;void*_T82;struct Cyc_Tctyp_CVTEnv _T83;struct Cyc_Tcenv_Tenv*_T84;long _T85;struct Cyc_Absyn_Enumdecl*_T86;void*_T87;void***_T88;void**_T89;struct Cyc_Tctyp_CVTEnv _T8A;struct Cyc_Absyn_PtrInfo _T8B;struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T8C;struct Cyc_Absyn_Tqual*_T8D;struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T8E;void**_T8F;struct Cyc_Absyn_PtrInfo _T90;struct Cyc_Absyn_PtrAtts _T91;struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T92;void**_T93;struct Cyc_Absyn_PtrInfo _T94;struct Cyc_Absyn_PtrAtts _T95;struct Cyc_Absyn_PtrInfo _T96;struct Cyc_Absyn_PtrAtts _T97;struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T98;void**_T99;void**_T9A;void**_T9B;int*_T9C;int _T9D;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T9E;void*_T9F;int*_TA0;unsigned _TA1;void**_TA2;void**_TA3;void*_TA4;void**_TA5;void*_TA6;void**_TA7;int*_TA8;int _TA9;struct Cyc_Absyn_AppType_Absyn_Type_struct*_TAA;void*_TAB;int*_TAC;int _TAD;struct Cyc_Absyn_AppType_Absyn_Type_struct*_TAE;struct Cyc_List_List*_TAF;struct Cyc_Absyn_AppType_Absyn_Type_struct*_TB0;struct Cyc_List_List*_TB1;struct Cyc_List_List*_TB2;void*_TB3;int*_TB4;int _TB5;struct Cyc_List_List*_TB6;struct Cyc_Warn_String_Warn_Warg_struct _TB7;unsigned _TB8;struct _fat_ptr _TB9;void**_TBA;struct Cyc_Tctyp_CVTEnv _TBB;struct Cyc_Absyn_Kind*_TBC;struct Cyc_Absyn_Kind*_TBD;void*_TBE;struct Cyc_Tctyp_CVTEnv _TBF;struct Cyc_Absyn_Kind*_TC0;struct Cyc_Absyn_Kind*_TC1;void**_TC2;void*_TC3;struct Cyc_Tctyp_CVTEnv _TC4;struct Cyc_Absyn_Kind*_TC5;struct Cyc_Absyn_Kind*_TC6;void*_TC7;struct Cyc_Tctyp_CVTEnv _TC8;struct Cyc_Absyn_Kind*_TC9;struct Cyc_Absyn_Kind*_TCA;void*_TCB;struct Cyc_Tctyp_CVTEnv _TCC;struct Cyc_Absyn_Kind*_TCD;struct Cyc_Absyn_Kind*_TCE;void**_TCF;void*_TD0;long _TD1;struct Cyc_Tctyp_CVTEnv _TD2;struct Cyc_Absyn_Kind*_TD3;struct Cyc_Absyn_Kind*_TD4;void*_TD5;void**_TD6;int*_TD7;int _TD8;struct Cyc_Absyn_AppType_Absyn_Type_struct*_TD9;void*_TDA;int*_TDB;int _TDC;struct Cyc_Absyn_AppType_Absyn_Type_struct*_TDD;struct Cyc_List_List*_TDE;struct Cyc_Absyn_AppType_Absyn_Type_struct*_TDF;struct Cyc_List_List*_TE0;struct Cyc_List_List*_TE1;void*_TE2;int*_TE3;int _TE4;struct Cyc_List_List*_TE5;struct Cyc_Tctyp_CVTEnv _TE6;long _TE7;void**_TE8;struct Cyc_List_List*_TE9;void*_TEA;struct Cyc_Tctyp_CVTEnv _TEB;struct Cyc_Absyn_Kind*_TEC;struct Cyc_Absyn_Kind*_TED;void**_TEE;void*_TEF;struct Cyc_Absyn_Tqual*_TF0;struct Cyc_Tctyp_CVTEnv _TF1;unsigned _TF2;struct Cyc_Absyn_Tqual*_TF3;long _TF4;void*_TF5;void*_TF6;void*_TF7;long _TF8;long _TF9;long _TFA;struct Cyc_Warn_String_Warn_Warg_struct _TFB;struct Cyc_Warn_Typ_Warn_Warg_struct _TFC;struct Cyc_Warn_String_Warn_Warg_struct _TFD;unsigned _TFE;struct _fat_ptr _TFF;void**_T100;void*_T101;long _T102;void*_T103;void**_T104;void*_T105;long _T106;long _T107;struct Cyc_Warn_String_Warn_Warg_struct _T108;unsigned _T109;struct _fat_ptr _T10A;struct Cyc_Tc_TcContext*_T10B;struct Cyc_Tcenv_Tenv*_T10C;struct Cyc_Absyn_Exp*_T10D;long _T10E;struct Cyc_Warn_String_Warn_Warg_struct _T10F;unsigned _T110;struct _fat_ptr _T111;struct Cyc_Tc_TcContext*_T112;struct Cyc_Tcenv_Tenv*_T113;struct Cyc_Absyn_Exp*_T114;struct Cyc_Absyn_ArrayInfo _T115;struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T116;struct Cyc_Absyn_Tqual*_T117;struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T118;struct Cyc_Absyn_Exp**_T119;struct Cyc_Absyn_ArrayInfo _T11A;struct Cyc_Absyn_ArrayInfo _T11B;struct Cyc_Absyn_Exp**_T11C;struct Cyc_Tctyp_CVTEnv _T11D;struct Cyc_Absyn_Kind*_T11E;struct Cyc_Absyn_Kind*_T11F;void*_T120;long _T121;struct Cyc_Absyn_Tqual*_T122;unsigned _T123;struct Cyc_Absyn_Tqual*_T124;long _T125;void*_T126;long _T127;long _T128;struct Cyc_Warn_String_Warn_Warg_struct _T129;struct Cyc_Warn_Typ_Warn_Warg_struct _T12A;struct Cyc_Warn_String_Warn_Warg_struct _T12B;unsigned _T12C;struct _fat_ptr _T12D;long _T12E;struct Cyc_Warn_String_Warn_Warg_struct _T12F;unsigned _T130;struct _fat_ptr _T131;struct Cyc_Absyn_Exp**_T132;struct Cyc_Tc_TcContext*_T133;struct Cyc_Tcenv_Tenv*_T134;struct Cyc_Absyn_Exp*_T135;long _T136;struct Cyc_Warn_String_Warn_Warg_struct _T137;unsigned _T138;struct _fat_ptr _T139;long _T13A;long _T13B;struct Cyc_Warn_String_Warn_Warg_struct _T13C;unsigned _T13D;struct _fat_ptr _T13E;struct Cyc_Absyn_FnType_Absyn_Type_struct*_T13F;struct Cyc_List_List**_T140;struct Cyc_Absyn_FnType_Absyn_Type_struct*_T141;void**_T142;struct Cyc_Absyn_FnType_Absyn_Type_struct*_T143;struct Cyc_Absyn_Tqual*_T144;struct Cyc_Absyn_FnInfo _T145;struct Cyc_Absyn_FnInfo _T146;struct Cyc_Absyn_FnInfo _T147;struct Cyc_Absyn_FnInfo _T148;struct Cyc_Absyn_FnType_Absyn_Type_struct*_T149;struct Cyc_List_List**_T14A;struct Cyc_Absyn_FnInfo _T14B;struct Cyc_Absyn_FnInfo _T14C;struct Cyc_Absyn_FnType_Absyn_Type_struct*_T14D;struct Cyc_AssnDef_ExistAssnFn**_T14E;struct Cyc_Absyn_FnInfo _T14F;struct Cyc_Absyn_FnType_Absyn_Type_struct*_T150;struct Cyc_AssnDef_ExistAssnFn**_T151;struct Cyc_Absyn_FnInfo _T152;struct Cyc_Absyn_FnType_Absyn_Type_struct*_T153;struct Cyc_AssnDef_ExistAssnFn**_T154;struct Cyc_Absyn_FnInfo _T155;struct Cyc_Absyn_FnType_Absyn_Type_struct*_T156;struct Cyc_AssnDef_ExistAssnFn**_T157;struct Cyc_Absyn_FnInfo _T158;struct Cyc_Absyn_FnInfo _T159;struct Cyc_Absyn_FnInfo _T15A;struct Cyc_List_List*_T15B;int*_T15C;unsigned _T15D;struct Cyc_List_List*_T15E;void*_T15F;long _T160;struct Cyc_Warn_String_Warn_Warg_struct _T161;struct Cyc_Warn_Attribute_Warn_Warg_struct _T162;struct Cyc_List_List*_T163;unsigned _T164;struct _fat_ptr _T165;struct Cyc_List_List*_T166;int _T167;int _T168;int _T169;struct Cyc_Warn_String_Warn_Warg_struct _T16A;unsigned _T16B;struct _fat_ptr _T16C;struct Cyc_Warn_String_Warn_Warg_struct _T16D;unsigned _T16E;struct _fat_ptr _T16F;unsigned _T170;struct Cyc_List_List**_T171;struct Cyc_List_List*_T172;struct Cyc_List_List**_T173;struct Cyc_List_List*_T174;void*_T175;struct Cyc_Absyn_Tvar*_T176;struct Cyc_Tctyp_CVTEnv _T177;struct Cyc_List_List*_T178;struct Cyc_List_List*_T179;void*_T17A;struct Cyc_Absyn_Tvar*_T17B;struct Cyc_List_List*_T17C;void*_T17D;struct Cyc_Absyn_Tvar*_T17E;void*_T17F;int*_T180;int _T181;struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*_T182;struct Cyc_Absyn_Kind*_T183;struct Cyc_Absyn_Kind*_T184;enum Cyc_Absyn_KindQual _T185;struct Cyc_Warn_String_Warn_Warg_struct _T186;struct Cyc_Warn_Tvar_Warn_Warg_struct _T187;struct Cyc_List_List*_T188;void*_T189;unsigned _T18A;struct _fat_ptr _T18B;struct Cyc_List_List*_T18C;struct Cyc_Tctyp_CVTEnv _T18D;struct Cyc_Tctyp_CVTEnv _T18E;struct Cyc_Tctyp_CVTEnv _T18F;struct Cyc_Tctyp_CVTEnv _T190;struct Cyc_Tctyp_CVTEnv _T191;struct Cyc_Absyn_Kind*_T192;struct Cyc_Absyn_Kind*_T193;void*_T194;struct Cyc_Absyn_Tqual*_T195;unsigned _T196;struct Cyc_Absyn_Tqual*_T197;long _T198;void*_T199;struct Cyc_List_List*_T19A;void*_T19B;struct _tuple9*_T19C;struct _tuple9 _T19D;struct Cyc_Tctyp_CVTEnv _T19E;struct Cyc_Absyn_Kind*_T19F;struct Cyc_Absyn_Kind*_T1A0;void*_T1A1;unsigned _T1A2;struct _tuple9*_T1A3;struct _tuple9 _T1A4;struct Cyc_Absyn_Tqual _T1A5;long _T1A6;void*_T1A7;struct _tuple9*_T1A8;long _T1A9;struct Cyc_Tctyp_CVTEnv _T1AA;struct Cyc_Absyn_Kind*_T1AB;struct Cyc_Absyn_Kind*_T1AC;void*_T1AD;struct Cyc_Core_Opt*_T1AE;struct Cyc_Core_Opt*_T1AF;void*_T1B0;void*_T1B1;struct Cyc_Tctyp_CVTEnv _T1B2;struct Cyc_Absyn_Kind*_T1B3;struct Cyc_Absyn_Kind*_T1B4;void*_T1B5;struct _tuple9*_T1B6;struct Cyc_List_List*_T1B7;long _T1B8;struct Cyc_Warn_String_Warn_Warg_struct _T1B9;int(*_T1BA)(struct _fat_ptr);void*(*_T1BB)(struct _fat_ptr);struct _fat_ptr _T1BC;struct Cyc_Absyn_VarargInfo*_T1BD;struct Cyc_Tctyp_CVTEnv _T1BE;struct Cyc_Absyn_Kind*_T1BF;struct Cyc_Absyn_Kind*_T1C0;void*_T1C1;struct Cyc_Absyn_VarargInfo*_T1C2;unsigned _T1C3;struct Cyc_Absyn_VarargInfo*_T1C4;struct Cyc_Absyn_Tqual _T1C5;long _T1C6;void*_T1C7;long _T1C8;int*_T1C9;int _T1CA;struct Cyc_Absyn_PtrInfo _T1CB;struct Cyc_Absyn_PtrInfo _T1CC;struct Cyc_Absyn_PtrAtts _T1CD;struct Cyc_Absyn_PtrInfo _T1CE;struct Cyc_Absyn_PtrAtts _T1CF;int*_T1D0;int _T1D1;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T1D2;void*_T1D3;int*_T1D4;int _T1D5;long _T1D6;struct Cyc_Warn_String_Warn_Warg_struct _T1D7;unsigned _T1D8;struct _fat_ptr _T1D9;void*_T1DA;void*_T1DB;long _T1DC;long _T1DD;unsigned _T1DE;void*_T1DF;void*_T1E0;void*_T1E1;long _T1E2;struct Cyc_Warn_String_Warn_Warg_struct _T1E3;unsigned _T1E4;struct _fat_ptr _T1E5;struct Cyc_Warn_String_Warn_Warg_struct _T1E6;unsigned _T1E7;struct _fat_ptr _T1E8;struct Cyc_Warn_String_Warn_Warg_struct _T1E9;unsigned _T1EA;struct _fat_ptr _T1EB;long _T1EC;long _T1ED;int _T1EE;int _T1EF;struct Cyc_Warn_String_Warn_Warg_struct _T1F0;unsigned _T1F1;struct _fat_ptr _T1F2;struct _tuple9*(*_T1F3)(struct Cyc_List_List*,int);void*(*_T1F4)(struct Cyc_List_List*,int);struct Cyc_List_List*_T1F5;int _T1F6;struct _tuple9*_T1F7;int*_T1F8;int _T1F9;struct Cyc_Absyn_PtrInfo _T1FA;struct Cyc_Absyn_PtrInfo _T1FB;struct Cyc_Absyn_PtrAtts _T1FC;long _T1FD;struct Cyc_Warn_String_Warn_Warg_struct _T1FE;unsigned _T1FF;struct _fat_ptr _T200;long _T201;void*_T202;void*_T203;long _T204;struct Cyc_Warn_String_Warn_Warg_struct _T205;unsigned _T206;struct _fat_ptr _T207;long _T208;struct Cyc_Warn_String_Warn_Warg_struct _T209;unsigned _T20A;struct _fat_ptr _T20B;long _T20C;unsigned _T20D;void*_T20E;void*_T20F;void*_T210;void*_T211;long _T212;struct Cyc_Warn_String_Warn_Warg_struct _T213;unsigned _T214;struct _fat_ptr _T215;unsigned _T216;void*_T217;void*_T218;void*_T219;void*_T21A;long _T21B;struct Cyc_Warn_String_Warn_Warg_struct _T21C;unsigned _T21D;struct _fat_ptr _T21E;struct Cyc_Warn_String_Warn_Warg_struct _T21F;unsigned _T220;struct _fat_ptr _T221;long _T222;struct _tuple18 _T223;struct Cyc_Absyn_VarargInfo*_T224;void*_T225;void*_T226;enum Cyc_Absyn_Format_Type _T227;int _T228;void*_T229;int*_T22A;int _T22B;void*_T22C;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T22D;void*_T22E;int*_T22F;int _T230;void*_T231;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T232;void*_T233;struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*_T234;union Cyc_Absyn_DatatypeInfo _T235;struct _union_DatatypeInfo_KnownDatatype _T236;unsigned _T237;void*_T238;void*_T239;union Cyc_Absyn_DatatypeInfo _T23A;struct _union_DatatypeInfo_KnownDatatype _T23B;struct Cyc_Absyn_Datatypedecl**_T23C;struct Cyc_Absyn_Datatypedecl*_T23D;struct _tuple1*_T23E;struct _tuple1*_T23F;int _T240;void*_T241;int*_T242;int _T243;void*_T244;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T245;void*_T246;int*_T247;int _T248;void*_T249;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T24A;void*_T24B;struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*_T24C;union Cyc_Absyn_DatatypeInfo _T24D;struct _union_DatatypeInfo_KnownDatatype _T24E;unsigned _T24F;void*_T250;void*_T251;union Cyc_Absyn_DatatypeInfo _T252;struct _union_DatatypeInfo_KnownDatatype _T253;struct Cyc_Absyn_Datatypedecl**_T254;struct Cyc_Absyn_Datatypedecl*_T255;struct _tuple1*_T256;struct _tuple1*_T257;int _T258;long _T259;struct Cyc_Warn_String_Warn_Warg_struct _T25A;unsigned _T25B;struct _fat_ptr _T25C;struct Cyc_List_List**_T25D;struct Cyc_List_List*_T25E;void*_T25F;struct Cyc_Tctyp_CVTEnv _T260;struct Cyc_Absyn_Kind*_T261;struct Cyc_Absyn_Kind*_T262;void*_T263;struct Cyc_Tctyp_CVTEnv _T264;struct Cyc_Absyn_Kind*_T265;struct Cyc_Absyn_Kind*_T266;void*_T267;struct Cyc_List_List*_T268;struct Cyc_List_List*_T269;int*_T26A;unsigned _T26B;void*_T26C;struct Cyc_Tctyp_CVTEnv _T26D;struct Cyc_Absyn_Kind*_T26E;struct Cyc_Absyn_Kind*_T26F;void*_T270;void*_T271;void*_T272;void*_T273;void*_T274;struct Cyc_Tctyp_CVTEnv _T275;struct Cyc_Absyn_Kind*_T276;struct Cyc_Absyn_Kind*_T277;void*_T278;struct Cyc_Tctyp_CVTEnv _T279;struct Cyc_Absyn_Kind*_T27A;struct Cyc_Absyn_Kind*_T27B;void*_T27C;struct Cyc_List_List*_T27D;struct Cyc_Tctyp_CVTEnv _T27E;struct Cyc_Tcenv_Tenv*_T27F;struct Cyc_Tcenv_Tenv*_T280;struct Cyc_Tcenv_Tenv*_T281;struct Cyc_Tcenv_Tenv*_T282;struct Cyc_Tcenv_Tenv*_T283;struct Cyc_Tcenv_Tenv*_T284;struct Cyc_Tcenv_Tenv*_T285;struct Cyc_List_List*_T286;struct Cyc_List_List*_T287;long _T288;struct Cyc_Absyn_VarargInfo*_T289;unsigned _T28A;struct Cyc_Warn_String_Warn_Warg_struct _T28B;unsigned _T28C;struct _fat_ptr _T28D;struct Cyc_Tctyp_CVTEnv _T28E;struct _fat_ptr _T28F;struct Cyc_Absyn_Exp*_T290;struct Cyc_AssnDef_ExistAssnFn**_T291;struct Cyc_Tctyp_CVTEnv _T292;struct _fat_ptr _T293;struct Cyc_Absyn_Exp*_T294;struct Cyc_AssnDef_ExistAssnFn**_T295;struct Cyc_List_List*_T296;struct Cyc_List_List*_T297;struct Cyc_List_List*_T298;struct Cyc_Tctyp_CVTEnv _T299;struct _fat_ptr _T29A;struct Cyc_Absyn_Exp*_T29B;struct Cyc_AssnDef_ExistAssnFn**_T29C;struct Cyc_AssnDef_AssnMap _T29D;struct Cyc_List_List*_T29E;struct Cyc_Tctyp_CVTEnv _T29F;struct _fat_ptr _T2A0;struct Cyc_Absyn_Exp*_T2A1;struct Cyc_AssnDef_ExistAssnFn**_T2A2;void**_T2A3;void*_T2A4;struct Cyc_Tctyp_CVTEnv _T2A5;struct Cyc_Absyn_Kind*_T2A6;struct Cyc_Absyn_Kind*_T2A7;void**_T2A8;void*_T2A9;void*_T2AA;void**_T2AB;void*_T2AC;void*_T2AD;long _T2AE;void**_T2AF;struct Cyc_List_List*_T2B0;void**_T2B1;void*_T2B2;struct _fat_ptr _T2B3;void*_T2B4;struct Cyc_List_List*_T2B5;struct Cyc_List_List*_T2B6;struct Cyc_Tctyp_CVTEnv _T2B7;struct Cyc_List_List*_T2B8;void*_T2B9;struct _tuple15*_T2BA;long _T2BB;struct Cyc_Absyn_Tvar*_T2BC;void*_T2BD;int*_T2BE;unsigned _T2BF;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T2C0;struct Cyc_Absyn_Kind*_T2C1;struct Cyc_Absyn_Kind*_T2C2;enum Cyc_Absyn_KindQual _T2C3;int _T2C4;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T2C5;struct Cyc_Core_Opt**_T2C6;struct Cyc_Core_Opt**_T2C7;struct Cyc_Absyn_Kind*_T2C8;struct Cyc_Absyn_Kind*_T2C9;struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*_T2CA;struct Cyc_Absyn_Kind*_T2CB;struct Cyc_Absyn_Kind*_T2CC;enum Cyc_Absyn_KindQual _T2CD;int _T2CE;struct Cyc_List_List*_T2CF;struct Cyc_List_List*_T2D0;void*_T2D1;struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*_T2D2;struct Cyc_Core_Opt**_T2D3;struct Cyc_Core_Opt**_T2D4;struct Cyc_Core_Opt*_T2D5;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T2D6;struct Cyc_Absyn_Kind*_T2D7;struct Cyc_List_List*_T2D8;struct Cyc_Tctyp_CVTEnv _T2D9;struct Cyc_List_List*_T2DA;void*_T2DB;struct _tuple16*_T2DC;long _T2DD;struct Cyc_Absyn_Kind*_T2DE;enum Cyc_Absyn_KindQual _T2DF;int _T2E0;struct Cyc_List_List*_T2E1;struct Cyc_List_List*_T2E2;struct Cyc_List_List*_T2E3;void**_T2E4;struct Cyc_List_List**_T2E5;struct Cyc_List_List*_T2E6;struct Cyc_List_List**_T2E7;struct Cyc_List_List*_T2E8;void*_T2E9;struct Cyc_Absyn_Tvar*_T2EA;void*_T2EB;int*_T2EC;unsigned _T2ED;struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*_T2EE;struct Cyc_Core_Opt**_T2EF;struct Cyc_Warn_String_Warn_Warg_struct _T2F0;struct Cyc_Warn_Tvar_Warn_Warg_struct _T2F1;struct Cyc_List_List*_T2F2;void*_T2F3;struct Cyc_Warn_String_Warn_Warg_struct _T2F4;unsigned _T2F5;struct _fat_ptr _T2F6;struct Cyc_Core_Opt**_T2F7;struct Cyc_Absyn_Kind*_T2F8;struct Cyc_Absyn_Kind*_T2F9;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T2FA;struct Cyc_Core_Opt**_T2FB;struct Cyc_Absyn_Kind*_T2FC;struct Cyc_Absyn_Kind*_T2FD;enum Cyc_Absyn_KindQual _T2FE;int _T2FF;struct Cyc_Core_Opt**_T300;struct Cyc_Absyn_Kind*_T301;struct Cyc_Absyn_Kind*_T302;struct Cyc_Core_Opt**_T303;struct Cyc_Absyn_Kind*_T304;struct Cyc_Absyn_Kind*_T305;struct Cyc_Core_Opt**_T306;struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*_T307;struct Cyc_Absyn_Kind*_T308;struct Cyc_Absyn_Kind*_T309;enum Cyc_Absyn_KindQual _T30A;struct Cyc_Warn_String_Warn_Warg_struct _T30B;unsigned _T30C;struct _fat_ptr _T30D;struct Cyc_List_List*_T30E;struct Cyc_List_List*(*_T30F)(struct Cyc_List_List*,struct Cyc_List_List*,struct Cyc_Absyn_Tvar*(*)(struct Cyc_Absyn_Tvar*));struct Cyc_Tctyp_CVTEnv _T310;struct Cyc_List_List*_T311;struct Cyc_List_List**_T312;struct Cyc_List_List*_T313;struct Cyc_Absyn_Tvar*(*_T314)(struct Cyc_Absyn_Tvar*);void*(*_T315)(void*);struct Cyc_List_List*(*_T316)(struct Cyc_List_List*,struct Cyc_List_List*,struct Cyc_Absyn_Tvar*(*)(struct _tuple15*));struct Cyc_Tctyp_CVTEnv _T317;struct Cyc_List_List*_T318;struct Cyc_List_List**_T319;struct Cyc_List_List*_T31A;struct Cyc_Absyn_Tvar*(*_T31B)(struct _tuple15*);void*(*_T31C)(struct _tuple0*);struct Cyc_Tctyp_CVTEnv _T31D;struct Cyc_List_List*_T31E;void*_T31F;struct _tuple15*_T320;struct Cyc_Tctyp_CVTEnv _T321;struct Cyc_List_List*_T322;struct Cyc_Absyn_Tvar*_T323;long _T324;struct Cyc_List_List*_T325;struct Cyc_Tctyp_CVTEnv _T326;struct Cyc_List_List*_T327;void*_T328;struct _tuple16*_T329;struct Cyc_Tctyp_CVTEnv _T32A;struct Cyc_List_List*_T32B;void*_T32C;long _T32D;struct Cyc_List_List*_T32E;struct Cyc_Tctyp_CVTEnv _T32F;struct Cyc_List_List*_T330;unsigned _T331;struct Cyc_Tctyp_CVTEnv _T332;long(*_T333)(long(*)(struct _tuple16*,struct _tuple16*),struct _tuple16*,struct Cyc_List_List*);long(*_T334)(long(*)(void*,void*),void*,struct Cyc_List_List*);struct Cyc_List_List*_T335;void*_T336;struct _tuple16*_T337;struct Cyc_Tctyp_CVTEnv _T338;struct Cyc_List_List*_T339;long _T33A;struct Cyc_List_List*_T33B;struct Cyc_List_List*_T33C;void*_T33D;struct Cyc_Tctyp_CVTEnv _T33E;struct Cyc_List_List*_T33F;struct Cyc_Tctyp_CVTEnv _T340;struct Cyc_List_List*_T341;void*_T342;struct Cyc_Absyn_Tqual*_T343;long(*_T344)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*);long(*_T345)(int(*)(void*,void*),struct Cyc_List_List*,void*);int(*_T346)(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_List_List*_T347;struct _fat_ptr*_T348;long _T349;struct Cyc_Warn_String_Warn_Warg_struct _T34A;struct Cyc_Warn_String_Warn_Warg_struct _T34B;struct _fat_ptr*_T34C;unsigned _T34D;struct _fat_ptr _T34E;struct _fat_ptr*_T34F;struct _fat_ptr _T350;struct _fat_ptr _T351;int _T352;struct Cyc_List_List*_T353;struct Cyc_Tctyp_CVTEnv _T354;struct Cyc_Absyn_Kind*_T355;struct Cyc_Absyn_Kind*_T356;void*_T357;struct Cyc_Absyn_Tqual*_T358;unsigned _T359;struct Cyc_Absyn_Tqual*_T35A;long _T35B;void*_T35C;enum Cyc_Absyn_AggrKind _T35D;int _T35E;struct Cyc_Warn_String_Warn_Warg_struct _T35F;unsigned _T360;struct _fat_ptr _T361;struct Cyc_Tc_TcContext*_T362;struct Cyc_Tcenv_Tenv*_T363;struct Cyc_Absyn_Exp*_T364;long _T365;struct Cyc_Warn_String_Warn_Warg_struct _T366;struct Cyc_Warn_TypOpt_Warn_Warg_struct _T367;struct Cyc_Absyn_Exp*_T368;struct Cyc_Warn_String_Warn_Warg_struct _T369;unsigned _T36A;struct _fat_ptr _T36B;struct Cyc_List_List*_T36C;struct Cyc_Absyn_SubsetType_Absyn_Type_struct*_T36D;struct Cyc_AssnDef_ExistAssnFn**_T36E;struct Cyc_Tctyp_CVTEnv _T36F;struct Cyc_Absyn_Kind*_T370;struct Cyc_Absyn_Vardecl*_T371;void*_T372;long _T373;long _T374;struct Cyc_List_List*_T375;struct _tuple9*_T376;struct Cyc_Absyn_Vardecl*_T377;struct _tuple1*_T378;struct Cyc_Absyn_Vardecl*_T379;struct Cyc_Absyn_Vardecl*_T37A;struct Cyc_List_List*_T37B;struct Cyc_Tctyp_CVTEnv _T37C;struct Cyc_Tcenv_Tenv*_T37D;struct Cyc_Tcenv_Tenv*_T37E;struct Cyc_Tcenv_Tenv*_T37F;struct Cyc_Tcenv_Tenv*_T380;struct Cyc_Tcenv_Tenv*_T381;struct Cyc_Tcenv_Tenv*_T382;struct Cyc_Tcenv_Tenv*_T383;struct Cyc_List_List*_T384;struct Cyc_List_List*_T385;long _T386;struct Cyc_Warn_String_Warn_Warg_struct _T387;struct Cyc_Absyn_Exp*_T388;unsigned _T389;struct _fat_ptr _T38A;struct Cyc_Tctyp_CVTEnv _T38B;struct _fat_ptr _T38C;struct Cyc_Absyn_Exp*_T38D;struct Cyc_AssnDef_ExistAssnFn**_T38E;struct Cyc_Absyn_TypedefType_Absyn_Type_struct*_T38F;struct Cyc_List_List**_T390;struct Cyc_Absyn_TypedefType_Absyn_Type_struct*_T391;struct Cyc_Absyn_Typedefdecl**_T392;struct Cyc_Absyn_TypedefType_Absyn_Type_struct*_T393;void**_T394;struct _handler_cons*_T395;int _T396;void*_T397;struct Cyc_Dict_Absent_exn_struct*_T398;char*_T399;char*_T39A;struct Cyc_Warn_String_Warn_Warg_struct _T39B;struct Cyc_Warn_Qvar_Warn_Warg_struct _T39C;unsigned _T39D;struct _fat_ptr _T39E;struct Cyc_Tctyp_CVTEnv _T39F;struct Cyc_Absyn_Typedefdecl**_T3A0;struct Cyc_Tctyp_CVTEnv _T3A1;struct Cyc_List_List**_T3A2;struct Cyc_Absyn_Typedefdecl*_T3A3;struct Cyc_List_List*_T3A4;struct Cyc_Absyn_Kind*_T3A5;long _T3A6;struct _tuple1*_T3A7;struct Cyc_Absyn_Typedefdecl*_T3A8;struct Cyc_Absyn_Typedefdecl*_T3A9;void*_T3AA;unsigned _T3AB;struct Cyc_Absyn_Typedefdecl*_T3AC;void*_T3AD;struct Cyc_Absyn_Kind*_T3AE;struct Cyc_Absyn_Typedefdecl*_T3AF;struct Cyc_List_List**_T3B0;struct Cyc_List_List*_T3B1;struct _tuple19*_T3B2;struct Cyc_List_List*_T3B3;void*_T3B4;struct Cyc_List_List*_T3B5;struct Cyc_List_List*_T3B6;struct Cyc_List_List*_T3B7;void**_T3B8;struct Cyc_List_List*_T3B9;struct Cyc_Absyn_Typedefdecl*_T3BA;void*_T3BB;void*_T3BC;struct Cyc_Absyn_Kind*_T3BD;struct Cyc_Absyn_Kind*_T3BE;long _T3BF;struct Cyc_Warn_String_Warn_Warg_struct _T3C0;struct Cyc_Warn_Typ_Warn_Warg_struct _T3C1;struct Cyc_Warn_String_Warn_Warg_struct _T3C2;struct Cyc_Warn_Kind_Warn_Warg_struct _T3C3;struct Cyc_Warn_String_Warn_Warg_struct _T3C4;struct Cyc_Warn_Kind_Warn_Warg_struct _T3C5;unsigned _T3C6;struct _fat_ptr _T3C7;struct Cyc_Tctyp_CVTEnv _T3C8;struct Cyc_Tcenv_Tenv*_T3C9;unsigned _T3CA;struct Cyc_Tc_TcContext*_T3CB;_T0= env;_T3CB= _T0.ctx;_T1= env;_T3CA= _T1.loc;_T2= env;_T3C9= _T2.te;{struct Cyc_Tc_TcContext*ctx=_T3CB;unsigned loc=_T3CA;struct Cyc_Tcenv_Tenv*te=_T3C9;{
# 837
void*_T3CC=Cyc_Absyn_compress(t);struct _tuple1*_T3CD;enum Cyc_Absyn_AggrKind _T3CE;struct Cyc_List_List*_T3CF;struct Cyc_List_List*_T3D0;struct Cyc_Absyn_Vardecl*_T3D1;void*_T3D2;struct Cyc_Absyn_Exp*_T3D3;struct Cyc_Absyn_Exp*_T3D4;struct Cyc_Absyn_Exp*_T3D5;struct Cyc_Absyn_Exp*_T3D6;struct Cyc_List_List*_T3D7;struct Cyc_Absyn_VarargInfo*_T3D8;long _T3D9;struct Cyc_List_List*_T3DA;unsigned _T3DB;void*_T3DC;void*_T3DD;void*_T3DE;void*_T3DF;void*_T3E0;void*_T3E1;const char*_T3E2;void*_T3E3;void*_T3E4;_T3= (int*)_T3CC;_T4= *_T3;switch(_T4){case 0:{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T3E5=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3CC;_T5= _T3E5->f1;_T3E4= (void*)_T5;_T6= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3CC;_T7= & _T6->f2;_T3E3= (struct Cyc_List_List**)_T7;}{void*c=_T3E4;struct Cyc_List_List**targsp=_T3E3;
# 839
env= Cyc_Tctyp_i_check_type_app(env,expected_kind,c,targsp,put_in_effect,allow_abs_aggr,t);goto _LL3;}case 3:{struct Cyc_Absyn_Cvar_Absyn_Type_struct*_T3E5=(struct Cyc_Absyn_Cvar_Absyn_Type_struct*)_T3CC;_T8= (struct Cyc_Absyn_Cvar_Absyn_Type_struct*)_T3CC;_T9= & _T8->f1;_T3E4= (struct Cyc_Core_Opt**)_T9;_T3E2= _T3E5->f5;}{struct Cyc_Core_Opt**k=_T3E4;const char*name=_T3E2;
# 843
if(name!=0)goto _TL131;{struct Cyc_Warn_String_Warn_Warg_struct _T3E5;_T3E5.tag= 0;
({__typeof__(_tag_fat("Unnamed Cvar ",sizeof(char),14U))_T3E6=_tag_fat("Unnamed Cvar ",sizeof(char),14U);_T3E5.f1= _T3E6;});_TA= _T3E5;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E5=_TA;{struct Cyc_Warn_Typ_Warn_Warg_struct _T3E6;_T3E6.tag= 2;_T3E6.f1= t;_TB= _T3E6;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T3E6=_TB;void*_T3E7[2];_T3E7[0]= & _T3E5;_T3E7[1]= & _T3E6;_TC= loc;_TD= _tag_fat(_T3E7,sizeof(void*),2);Cyc_Warn_err2(_TC,_TD);}}goto _TL132;_TL131: _TL132: _TE= k;_TF= *_TE;
# 846
if(_TF==0)goto _TL135;else{goto _TL136;}_TL136: _T10= expected_kind;_T11= k;_T12= *_T11;_T13= _T12->v;_T14= (struct Cyc_Absyn_Kind*)_T13;_T15= 
Cyc_Kinds_kind_leq(_T10,_T14);
# 846
if(_T15)goto _TL137;else{goto _TL133;}_TL137: _T16= k;_T17= *_T16;_T18= 
_check_null(_T17);_T19= _T18->v;_T1A= (struct Cyc_Absyn_Kind*)_T19;_T1B= expected_kind;_T1C= Cyc_Kinds_kind_leq(_T1A,_T1B);
# 846
if(_T1C)goto _TL133;else{goto _TL135;}
# 848
_TL135: _T1D= k;({__typeof__(Cyc_Kinds_kind_to_opt(expected_kind))_T3E5=Cyc_Kinds_kind_to_opt(expected_kind);*_T1D= _T3E5;});goto _TL134;_TL133: _TL134: goto _LL3;}case 1:{struct Cyc_Absyn_Evar_Absyn_Type_struct*_T3E5=(struct Cyc_Absyn_Evar_Absyn_Type_struct*)_T3CC;_T1E= (struct Cyc_Absyn_Evar_Absyn_Type_struct*)_T3CC;_T1F= & _T1E->f1;_T3E4= (struct Cyc_Core_Opt**)_T1F;_T20= (struct Cyc_Absyn_Evar_Absyn_Type_struct*)_T3CC;_T21= & _T20->f2;_T3E3= (void**)_T21;}{struct Cyc_Core_Opt**k=_T3E4;void**ref=_T3E3;_T22= k;_T23= *_T22;
# 852
if(_T23==0)goto _TL13A;else{goto _TL13B;}_TL13B: _T24= expected_kind;_T25= k;_T26= *_T25;_T27= _T26->v;_T28= (struct Cyc_Absyn_Kind*)_T27;_T29= 
Cyc_Kinds_kind_leq(_T24,_T28);
# 852
if(_T29)goto _TL13C;else{goto _TL138;}_TL13C: _T2A= k;_T2B= *_T2A;_T2C= 
_check_null(_T2B);_T2D= _T2C->v;_T2E= (struct Cyc_Absyn_Kind*)_T2D;_T2F= expected_kind;_T30= Cyc_Kinds_kind_leq(_T2E,_T2F);
# 852
if(_T30)goto _TL138;else{goto _TL13A;}
# 854
_TL13A: _T31= k;({__typeof__(Cyc_Kinds_kind_to_opt(expected_kind))_T3E5=Cyc_Kinds_kind_to_opt(expected_kind);*_T31= _T3E5;});goto _TL139;_TL138: _TL139: _T32= env;_T33= _T32.fn_result;
# 856
if(!_T33)goto _TL13D;_T34= env;_T35= _T34.generalize_evars;if(!_T35)goto _TL13D;_T36= expected_kind;_T37= _T36->kind;_T38= (int)_T37;
if(_T38!=3)goto _TL13F;_T39= te;_T3A= _T39->tempest_generalize;if(_T3A)goto _TL13F;else{goto _TL141;}
_TL141: _T3B= ref;*_T3B= Cyc_Absyn_heap_rgn_type;goto _LL3;
# 860
_TL13F: _T3C= expected_kind;_T3D= _T3C->kind;_T3E= (int)_T3D;if(_T3E!=7)goto _TL142;_T3F= te;_T40= _T3F->tempest_generalize;if(_T40)goto _TL142;else{goto _TL144;}
_TL144: _T41= ref;*_T41= Cyc_Absyn_al_qual_type;goto _LL3;_TL142: goto _TL13E;_TL13D: _TL13E: _T42= env;_T43= _T42.inst_type_evar;
# 866
if(!_T43)goto _TL145;_T44= expected_kind;_T45= _T44->kind;_T46= (int)_T45;if(_T46!=7)goto _TL145;_T47= te;_T48= _T47->tempest_generalize;if(_T48)goto _TL145;else{goto _TL147;}
_TL147: _T49= ref;*_T49= Cyc_Absyn_al_qual_type;goto _LL3;_TL145: _T4A= env;_T4B= _T4A.generalize_evars;
# 871
if(!_T4B)goto _TL148;_T4C= expected_kind;_T4D= _T4C->kind;_T4E= (int)_T4D;if(_T4E==5)goto _TL148;_T4F= expected_kind;_T50= _T4F->kind;_T51= (int)_T50;if(_T51==6)goto _TL148;{struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T3E5=_cycalloc(sizeof(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct));_T3E5->tag= 2;
# 874
_T3E5->f1= 0;_T3E5->f2= expected_kind;_T52= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3E5;}_T53= (void*)_T52;{struct Cyc_Absyn_Tvar*v=Cyc_Tcutil_new_tvar(_T53);_T54= ref;
({__typeof__(Cyc_Absyn_var_type(v))_T3E5=Cyc_Absyn_var_type(v);*_T54= _T3E5;});_T3E4= v;goto _LLB;}_TL148: _T55= env;_T56= _T55.free_evars;_T57= t;_T58= put_in_effect;
# 878
({__typeof__(Cyc_Tctyp_add_free_evar(_T56,_T57,_T58))_T3E5=Cyc_Tctyp_add_free_evar(_T56,_T57,_T58);env.free_evars= _T3E5;});goto _LL3;}case 2:{struct Cyc_Absyn_VarType_Absyn_Type_struct*_T3E5=(struct Cyc_Absyn_VarType_Absyn_Type_struct*)_T3CC;_T3E4= _T3E5->f1;}_LLB: {struct Cyc_Absyn_Tvar*v=_T3E4;_T59= v;_T5A= _T59->kind;{
# 881
void*_T3E5=Cyc_Kinds_compress_kb(_T5A);void*_T3E6;_T5B= (int*)_T3E5;_T5C= *_T5B;if(_T5C!=1)goto _TL14A;{struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*_T3E7=(struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*)_T3E5;_T5D= (struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*)_T3E5;_T5E= & _T5D->f1;_T3E6= (struct Cyc_Core_Opt**)_T5E;}{struct Cyc_Core_Opt**f=(struct Cyc_Core_Opt**)_T3E6;_T5F= f;{struct Cyc_Core_Opt*_T3E7=_cycalloc(sizeof(struct Cyc_Core_Opt));{struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T3E8=_cycalloc(sizeof(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct));_T3E8->tag= 2;
# 883
_T3E8->f1= 0;_T3E8->f2= expected_kind;_T61= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3E8;}_T3E7->v= (void*)_T61;_T60= (struct Cyc_Core_Opt*)_T3E7;}*_T5F= _T60;goto _LL1E;}_TL14A: goto _LL1E;_LL1E:;}_T62= loc;_T63= env;_T64= _T63.kind_env;_T65= v;_T66= env;_T67= _T66.allow_aqual_bounds;
# 890
({__typeof__(Cyc_Tctyp_add_free_tvar(_T62,_T64,_T65,_T67))_T3E5=Cyc_Tctyp_add_free_tvar(_T62,_T64,_T65,_T67);env.kind_env= _T3E5;});_T68= env;_T69= _T68.free_vars;_T6A= v;_T6B= put_in_effect;
# 893
({__typeof__(Cyc_Tctyp_fast_add_free_tvar_bool(_T69,_T6A,_T6B))_T3E5=Cyc_Tctyp_fast_add_free_tvar_bool(_T69,_T6A,_T6B);env.free_vars= _T3E5;});_T6C= v;_T6D= _T6C->kind;{
# 895
void*_T3E5=Cyc_Kinds_compress_kb(_T6D);struct Cyc_Absyn_Kind*_T3E6;void*_T3E7;_T6E= (int*)_T3E5;_T6F= *_T6E;if(_T6F!=2)goto _TL14C;{struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T3E8=(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3E5;_T70= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3E5;_T71= & _T70->f1;_T3E7= (struct Cyc_Core_Opt**)_T71;_T3E6= _T3E8->f2;}{struct Cyc_Core_Opt**f=(struct Cyc_Core_Opt**)_T3E7;struct Cyc_Absyn_Kind*k=_T3E6;_T72= 
# 897
Cyc_Kinds_kind_leq(expected_kind,k);if(!_T72)goto _TL14E;_T73= f;{struct Cyc_Core_Opt*_T3E8=_cycalloc(sizeof(struct Cyc_Core_Opt));{struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T3E9=_cycalloc(sizeof(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct));_T3E9->tag= 2;
_T3E9->f1= 0;_T3E9->f2= expected_kind;_T75= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3E9;}_T3E8->v= (void*)_T75;_T74= (struct Cyc_Core_Opt*)_T3E8;}*_T73= _T74;goto _TL14F;_TL14E: _TL14F: goto _LL23;}_TL14C: goto _LL23;_LL23:;}goto _LL3;}case 10:{struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*_T3E5=(struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*)_T3CC;_T76= _T3E5->f1;{struct Cyc_Absyn_TypeDecl _T3E6=*_T76;_T3E4= _T3E6.r;}_T77= (struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*)_T3CC;_T78= & _T77->f2;_T3E3= (void***)_T78;}{void*td=_T3E4;void***topt=_T3E3;_T79= 
# 908
Cyc_Absyn_compress(t);{void*new_typ=Cyc_Tcutil_copy_type(_T79);{struct Cyc_Absyn_Datatypedecl*_T3E5;struct Cyc_Absyn_Enumdecl*_T3E6;struct Cyc_Absyn_Aggrdecl*_T3E7;_T7A= td;_T7B= (int*)_T7A;_T7C= *_T7B;switch(_T7C){case 0: _T7D= td;{struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct*_T3E8=(struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct*)_T7D;_T3E7= _T3E8->f1;}{struct Cyc_Absyn_Aggrdecl*ad=_T3E7;_T7E= env;_T7F= _T7E.te;_T80= _T7F->in_extern_c_include;
# 911
if(!_T80)goto _TL151;_T81= ad;
_T81->sc= 4U;goto _TL152;_TL151: _TL152:
 Cyc_Tc_tcAggrdecl(ctx,te,loc,ad);goto _LL28;}case 1: _T82= td;{struct Cyc_Absyn_Enum_td_Absyn_Raw_typedecl_struct*_T3E8=(struct Cyc_Absyn_Enum_td_Absyn_Raw_typedecl_struct*)_T82;_T3E6= _T3E8->f1;}{struct Cyc_Absyn_Enumdecl*ed=_T3E6;_T83= env;_T84= _T83.te;_T85= _T84->in_extern_c_include;
# 916
if(!_T85)goto _TL153;_T86= ed;
_T86->sc= 4U;goto _TL154;_TL153: _TL154:
 Cyc_Tc_tcEnumdecl(ctx,te,loc,ed);goto _LL28;}default: _T87= td;{struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct*_T3E8=(struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct*)_T87;_T3E5= _T3E8->f1;}{struct Cyc_Absyn_Datatypedecl*dd=_T3E5;
# 921
Cyc_Tc_tcDatatypedecl(ctx,te,loc,dd);goto _LL28;}}_LL28:;}_T88= topt;{void**_T3E5=_cycalloc(sizeof(void*));
# 924
*_T3E5= new_typ;_T89= (void**)_T3E5;}*_T88= _T89;_T8A= 
Cyc_Tctyp_i_check_type(env,expected_kind,new_typ,put_in_effect,allow_abs_aggr);return _T8A;}}case 4:{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T3E5=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T3CC;_T8B= _T3E5->f1;_T3E4= _T8B.elt_type;_T8C= (struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T3CC;_T8D= & _T8C->f1.elt_tq;_T3E3= (struct Cyc_Absyn_Tqual*)_T8D;_T8E= (struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T3CC;_T8F= & _T8E->f1.ptr_atts.eff;_T3E1= (void**)_T8F;_T90= _T3E5->f1;_T91= _T90.ptr_atts;_T3E0= _T91.nullable;_T92= (struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T3CC;_T93= & _T92->f1.ptr_atts.bounds;_T3DF= (void**)_T93;_T94= _T3E5->f1;_T95= _T94.ptr_atts;_T3DE= _T95.zero_term;_T96= _T3E5->f1;_T97= _T96.ptr_atts;_T3DD= _T97.autoreleased;_T98= (struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T3CC;_T99= & _T98->f1.ptr_atts.aqual;_T3DC= (void**)_T99;}{void*t1=_T3E4;struct Cyc_Absyn_Tqual*tqp=_T3E3;void**eff_type=_T3E1;void*nullable=_T3E0;void**b=_T3DF;void*zt=_T3DE;void*rel=_T3DD;void**aq=_T3DC;_T9A= aq;{
# 931
void*override_aq=*_T9A;_T9B= eff_type;{
void*_T3E5=*_T9B;_T9C= (int*)_T3E5;_T9D= *_T9C;if(_T9D!=0)goto _TL155;_T9E= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3E5;_T9F= _T9E->f1;_TA0= (int*)_T9F;_TA1= *_TA0;switch(_TA1){case 7: _TA2= eff_type;
# 934
*_TA2= Cyc_Absyn_heap_rgn_type;
override_aq= Cyc_Absyn_un_qual_type;goto _LL2F;case 8: _TA3= eff_type;
# 938
*_TA3= Cyc_Absyn_heap_rgn_type;
override_aq= Cyc_Absyn_rc_qual_type;goto _LL2F;default: goto _LL34;}goto _TL156;_TL155: _LL34: goto _LL2F;_TL156: _LL2F:;}_TA4= override_aq;_TA5= aq;_TA6= *_TA5;
# 944
if(_TA4==_TA6)goto _TL158;_TA7= aq;{
void*_T3E5=*_TA7;struct Cyc_List_List*_T3E6;_TA8= (int*)_T3E5;_TA9= *_TA8;if(_TA9!=0)goto _TL15A;_TAA= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3E5;_TAB= _TAA->f1;_TAC= (int*)_TAB;_TAD= *_TAC;if(_TAD!=17)goto _TL15C;_TAE= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3E5;_TAF= _TAE->f2;if(_TAF==0)goto _TL15E;_TB0= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3E5;_TB1= _TB0->f2;_TB2= (struct Cyc_List_List*)_TB1;_TB3= _TB2->hd;_TB4= (int*)_TB3;_TB5= *_TB4;if(_TB5!=1)goto _TL160;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T3E7=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3E5;_TB6= _T3E7->f2;{struct Cyc_List_List _T3E8=*_TB6;_T3E6= _T3E8.tl;}}{struct Cyc_List_List*bnd=_T3E6;goto _LL36;}_TL160: goto _LL39;_TL15E: goto _LL39;_TL15C: goto _LL39;_TL15A: _LL39:{struct Cyc_Warn_String_Warn_Warg_struct _T3E7;_T3E7.tag= 0;
# 949
({__typeof__(_tag_fat("`U and `RC shorthands override explicit aqual",sizeof(char),46U))_T3E8=_tag_fat("`U and `RC shorthands override explicit aqual",sizeof(char),46U);_T3E7.f1= _T3E8;});_TB7= _T3E7;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E7=_TB7;void*_T3E8[1];_T3E8[0]= & _T3E7;_TB8= loc;_TB9= _tag_fat(_T3E8,sizeof(void*),1);Cyc_Warn_warn2(_TB8,_TB9);}_LL36:;}_TBA= aq;
# 951
*_TBA= override_aq;goto _TL159;_TL158: _TL159:
# 953
 Cyc_Tctyp_check_constrain_ptrbnd(loc,t,expected_kind);_TBB= env;_TBC= & Cyc_Kinds_ak;_TBD= (struct Cyc_Absyn_Kind*)_TBC;_TBE= t1;
env= Cyc_Tctyp_i_check_type(_TBB,_TBD,_TBE,1,1);_TBF= env;_TC0= & Cyc_Kinds_ek;_TC1= (struct Cyc_Absyn_Kind*)_TC0;_TC2= eff_type;_TC3= *_TC2;
# 956
env= Cyc_Tctyp_i_check_type(_TBF,_TC1,_TC3,1,1);_TC4= env;_TC5= & Cyc_Kinds_boolk;_TC6= (struct Cyc_Absyn_Kind*)_TC5;_TC7= zt;
env= Cyc_Tctyp_i_check_type(_TC4,_TC6,_TC7,0,1);_TC8= env;_TC9= & Cyc_Kinds_boolk;_TCA= (struct Cyc_Absyn_Kind*)_TC9;_TCB= nullable;
env= Cyc_Tctyp_i_check_type(_TC8,_TCA,_TCB,0,1);_TCC= env;_TCD= & Cyc_Kinds_ptrbk;_TCE= (struct Cyc_Absyn_Kind*)_TCD;_TCF= b;_TD0= *_TCF;_TD1= allow_abs_aggr;
env= Cyc_Tctyp_i_check_type(_TCC,_TCE,_TD0,0,_TD1);_TD2= env;_TD3= & Cyc_Kinds_boolk;_TD4= (struct Cyc_Absyn_Kind*)_TD3;_TD5= rel;
env= Cyc_Tctyp_i_check_type(_TD2,_TD4,_TD5,0,1);_TD6= aq;{
void*_T3E5=*_TD6;struct Cyc_List_List*_T3E6;_TD7= (int*)_T3E5;_TD8= *_TD7;if(_TD8!=0)goto _TL162;_TD9= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3E5;_TDA= _TD9->f1;_TDB= (int*)_TDA;_TDC= *_TDB;if(_TDC!=17)goto _TL164;_TDD= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3E5;_TDE= _TDD->f2;if(_TDE==0)goto _TL166;_TDF= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3E5;_TE0= _TDF->f2;_TE1= (struct Cyc_List_List*)_TE0;_TE2= _TE1->hd;_TE3= (int*)_TE2;_TE4= *_TE3;if(_TE4!=1)goto _TL168;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T3E7=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3E5;_TE5= _T3E7->f2;{struct Cyc_List_List _T3E8=*_TE5;_T3E6= _T3E8.tl;}}{struct Cyc_List_List*bnd=_T3E6;_TE6= env;_TE7= _TE6.def_aliasable;
# 965
if(!_TE7)goto _TL16A;_TE8= aq;
*_TE8= Cyc_Absyn_al_qual_type;goto _TL16B;
# 968
_TL16A: _TE9= _check_null(bnd);_TEA= Cyc_Absyn_rtd_qual_type;_TE9->hd= (void*)_TEA;_TL16B: goto _LL3B;}_TL168: goto _LL3E;_TL166: goto _LL3E;_TL164: goto _LL3E;_TL162: _LL3E: goto _LL3B;_LL3B:;}_TEB= env;_TEC= & Cyc_Kinds_aqk;_TED= (struct Cyc_Absyn_Kind*)_TEC;_TEE= aq;_TEF= *_TEE;
# 975
env= Cyc_Tctyp_i_check_type(_TEB,_TED,_TEF,0,1);_TF0= tqp;_TF1= env;_TF2= _TF1.loc;_TF3= tqp;_TF4= _TF3->print_const;_TF5= t1;
({__typeof__(Cyc_Tcutil_extract_const_from_typedef(_TF2,_TF4,_TF5))_T3E5=Cyc_Tcutil_extract_const_from_typedef(_TF2,_TF4,_TF5);_TF0->real_const= _T3E5;});_TF6= zt;_TF8= 
# 980
Cyc_Tcutil_is_char_type(t1);if(!_TF8)goto _TL16C;_TF7= Cyc_Absyn_true_type;goto _TL16D;_TL16C: _TF7= Cyc_Absyn_false_type;_TL16D: Cyc_Unify_unify(_TF6,_TF7);{
long is_zero_terminated=Cyc_Absyn_type2bool(0,zt);_TF9= is_zero_terminated;
if(!_TF9)goto _TL16E;_TFA= Cyc_Tcutil_admits_zero(t1);if(_TFA)goto _TL16E;else{goto _TL170;}
_TL170:{struct Cyc_Warn_String_Warn_Warg_struct _T3E5;_T3E5.tag= 0;({__typeof__(_tag_fat("cannot have a pointer to zero-terminated ",sizeof(char),42U))_T3E6=_tag_fat("cannot have a pointer to zero-terminated ",sizeof(char),42U);_T3E5.f1= _T3E6;});_TFB= _T3E5;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E5=_TFB;{struct Cyc_Warn_Typ_Warn_Warg_struct _T3E6;_T3E6.tag= 2;_T3E6.f1= t1;_TFC= _T3E6;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T3E6=_TFC;{struct Cyc_Warn_String_Warn_Warg_struct _T3E7;_T3E7.tag= 0;({__typeof__(_tag_fat(" elements",sizeof(char),10U))_T3E8=_tag_fat(" elements",sizeof(char),10U);_T3E7.f1= _T3E8;});_TFD= _T3E7;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E7=_TFD;void*_T3E8[3];_T3E8[0]= & _T3E5;_T3E8[1]= & _T3E6;_T3E8[2]= & _T3E7;_TFE= loc;_TFF= _tag_fat(_T3E8,sizeof(void*),3);Cyc_Warn_err2(_TFE,_TFF);}}}goto _TL16F;_TL16E: _TL16F: _T100= b;_T101= *_T100;_T102= 
# 986
Cyc_Tcutil_is_cvar_type(_T101);if(_T102)goto _TL171;else{goto _TL173;}
_TL173: _T103= Cyc_Absyn_bounds_one();_T104= b;_T105= *_T104;{struct Cyc_Absyn_Exp*e=Cyc_Tcutil_get_bounds_exp(_T103,_T105);
if(e==0)goto _TL174;{
struct _tuple14 _T3E5=Cyc_Evexp_eval_const_uint_exp(e);long _T3E6;unsigned _T3E7;_T3E7= _T3E5.f0;_T3E6= _T3E5.f1;{unsigned sz=_T3E7;long known=_T3E6;_T106= is_zero_terminated;
if(!_T106)goto _TL176;_T107= known;if(_T107)goto _TL179;else{goto _TL178;}_TL179: if(sz < 1U)goto _TL178;else{goto _TL176;}
_TL178:{struct Cyc_Warn_String_Warn_Warg_struct _T3E8;_T3E8.tag= 0;({__typeof__(_tag_fat("zero-terminated pointer cannot point to empty sequence",sizeof(char),55U))_T3E9=_tag_fat("zero-terminated pointer cannot point to empty sequence",sizeof(char),55U);_T3E8.f1= _T3E9;});_T108= _T3E8;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E8=_T108;void*_T3E9[1];_T3E9[0]= & _T3E8;_T109= loc;_T10A= _tag_fat(_T3E9,sizeof(void*),1);Cyc_Warn_err2(_T109,_T10A);}goto _TL177;_TL176: _TL177:;}}goto _TL175;_TL174: _TL175:;}goto _TL172;_TL171: _TL172: goto _LL3;}}}case 9:{struct Cyc_Absyn_ValueofType_Absyn_Type_struct*_T3E5=(struct Cyc_Absyn_ValueofType_Absyn_Type_struct*)_T3CC;_T3E4= _T3E5->f1;}{struct Cyc_Absyn_Exp*e=_T3E4;_T10B= ctx;_T10C= 
# 999
Cyc_Tcenv_allow_valueof(te);_T10D= e;Cyc_Tcexp_tcExp(_T10B,_T10C,0,_T10D);_T10E= 
Cyc_Tcutil_coerce_uint_type(e);if(_T10E)goto _TL17A;else{goto _TL17C;}
_TL17C:{struct Cyc_Warn_String_Warn_Warg_struct _T3E5;_T3E5.tag= 0;({__typeof__(_tag_fat("valueof_t requires an int expression",sizeof(char),37U))_T3E6=_tag_fat("valueof_t requires an int expression",sizeof(char),37U);_T3E5.f1= _T3E6;});_T10F= _T3E5;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E5=_T10F;void*_T3E6[1];_T3E6[0]= & _T3E5;_T110= loc;_T111= _tag_fat(_T3E6,sizeof(void*),1);Cyc_Warn_err2(_T110,_T111);}goto _TL17B;_TL17A: _TL17B:
 env= Cyc_Tctyp_i_check_type_level_exp(e,env);goto _LL3;}case 11:{struct Cyc_Absyn_TypeofType_Absyn_Type_struct*_T3E5=(struct Cyc_Absyn_TypeofType_Absyn_Type_struct*)_T3CC;_T3E4= _T3E5->f1;}{struct Cyc_Absyn_Exp*e=_T3E4;_T112= ctx;_T113= 
# 1008
Cyc_Tcenv_allow_valueof(te);_T114= e;Cyc_Tcexp_tcExp(_T112,_T113,0,_T114);goto _LL3;}case 5:{struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T3E5=(struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_T3CC;_T115= _T3E5->f1;_T3E4= _T115.elt_type;_T116= (struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_T3CC;_T117= & _T116->f1.tq;_T3E3= (struct Cyc_Absyn_Tqual*)_T117;_T118= (struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_T3CC;_T119= & _T118->f1.num_elts;_T3E1= (struct Cyc_Absyn_Exp**)_T119;_T11A= _T3E5->f1;_T3E0= _T11A.zero_term;_T11B= _T3E5->f1;_T3DB= _T11B.zt_loc;}{void*t1=_T3E4;struct Cyc_Absyn_Tqual*tqp=_T3E3;struct Cyc_Absyn_Exp**eptr=_T3E1;void*zt=_T3E0;unsigned ztl=_T3DB;_T11C= eptr;{
# 1013
struct Cyc_Absyn_Exp*e=*_T11C;_T11D= env;_T11E= & Cyc_Kinds_mk;_T11F= (struct Cyc_Absyn_Kind*)_T11E;_T120= t1;_T121= allow_abs_aggr;
env= Cyc_Tctyp_i_check_type(_T11D,_T11F,_T120,1,_T121);_T122= tqp;_T123= loc;_T124= tqp;_T125= _T124->print_const;_T126= t1;
({__typeof__(Cyc_Tcutil_extract_const_from_typedef(_T123,_T125,_T126))_T3E5=Cyc_Tcutil_extract_const_from_typedef(_T123,_T125,_T126);_T122->real_const= _T3E5;});{
# 1017
long is_zero_terminated=Cyc_Tcutil_force_type2bool(0,zt);_T127= is_zero_terminated;
if(!_T127)goto _TL17D;_T128= 
# 1020
Cyc_Tcutil_admits_zero(t1);if(_T128)goto _TL17F;else{goto _TL181;}
_TL181:{struct Cyc_Warn_String_Warn_Warg_struct _T3E5;_T3E5.tag= 0;({__typeof__(_tag_fat("cannot have a zero-terminated array of ",sizeof(char),40U))_T3E6=_tag_fat("cannot have a zero-terminated array of ",sizeof(char),40U);_T3E5.f1= _T3E6;});_T129= _T3E5;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E5=_T129;{struct Cyc_Warn_Typ_Warn_Warg_struct _T3E6;_T3E6.tag= 2;_T3E6.f1= t1;_T12A= _T3E6;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T3E6=_T12A;{struct Cyc_Warn_String_Warn_Warg_struct _T3E7;_T3E7.tag= 0;({__typeof__(_tag_fat(" elements",sizeof(char),10U))_T3E8=_tag_fat(" elements",sizeof(char),10U);_T3E7.f1= _T3E8;});_T12B= _T3E7;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E7=_T12B;void*_T3E8[3];_T3E8[0]= & _T3E5;_T3E8[1]= & _T3E6;_T3E8[2]= & _T3E7;_T12C= loc;_T12D= _tag_fat(_T3E8,sizeof(void*),3);Cyc_Warn_err2(_T12C,_T12D);}}}goto _TL180;_TL17F: _TL180: goto _TL17E;_TL17D: _TL17E:
# 1025
 if(e!=0)goto _TL182;_T12E= is_zero_terminated;
# 1028
if(_T12E)goto _TL184;else{goto _TL186;}
# 1030
_TL186:{struct Cyc_Warn_String_Warn_Warg_struct _T3E5;_T3E5.tag= 0;({__typeof__(_tag_fat("array bound defaults to 1 here",sizeof(char),31U))_T3E6=_tag_fat("array bound defaults to 1 here",sizeof(char),31U);_T3E5.f1= _T3E6;});_T12F= _T3E5;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E5=_T12F;void*_T3E6[1];_T3E6[0]= & _T3E5;_T130= loc;_T131= _tag_fat(_T3E6,sizeof(void*),1);Cyc_Warn_warn2(_T130,_T131);}goto _TL185;_TL184: _TL185: _T132= eptr;
e= Cyc_Absyn_uint_exp(1U,0U);*_T132= e;goto _TL183;_TL182: _TL183: _T133= ctx;_T134= 
# 1033
Cyc_Tcenv_allow_valueof(te);_T135= e;Cyc_Tcexp_tcExp(_T133,_T134,0,_T135);_T136= 
Cyc_Tcutil_coerce_uint_type(e);if(_T136)goto _TL187;else{goto _TL189;}
_TL189:{struct Cyc_Warn_String_Warn_Warg_struct _T3E5;_T3E5.tag= 0;({__typeof__(_tag_fat("array bounds expression is not an unsigned int",sizeof(char),47U))_T3E6=_tag_fat("array bounds expression is not an unsigned int",sizeof(char),47U);_T3E5.f1= _T3E6;});_T137= _T3E5;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E5=_T137;void*_T3E6[1];_T3E6[0]= & _T3E5;_T138= loc;_T139= _tag_fat(_T3E6,sizeof(void*),1);Cyc_Warn_err2(_T138,_T139);}goto _TL188;_TL187: _TL188:
 env= Cyc_Tctyp_i_check_type_level_exp(e,env);{
struct _tuple14 _T3E5=Cyc_Evexp_eval_const_uint_exp(e);long _T3E6;unsigned _T3E7;_T3E7= _T3E5.f0;_T3E6= _T3E5.f1;{unsigned sz=_T3E7;long known=_T3E6;_T13A= is_zero_terminated;
# 1039
if(!_T13A)goto _TL18A;_T13B= known;if(!_T13B)goto _TL18A;if(sz >= 1U)goto _TL18A;{struct Cyc_Warn_String_Warn_Warg_struct _T3E8;_T3E8.tag= 0;
({__typeof__(_tag_fat("zero terminated array cannot have zero elements",sizeof(char),48U))_T3E9=_tag_fat("zero terminated array cannot have zero elements",sizeof(char),48U);_T3E8.f1= _T3E9;});_T13C= _T3E8;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E8=_T13C;void*_T3E9[1];_T3E9[0]= & _T3E8;_T13D= loc;_T13E= _tag_fat(_T3E9,sizeof(void*),1);Cyc_Warn_warn2(_T13D,_T13E);}goto _TL18B;_TL18A: _TL18B: goto _LL3;}}}}}case 6:{struct Cyc_Absyn_FnType_Absyn_Type_struct*_T3E5=(struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T3CC;_T13F= (struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T3CC;_T140= & _T13F->f1.tvars;_T3E4= (struct Cyc_List_List**)_T140;_T141= (struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T3CC;_T142= & _T141->f1.effect;_T3E3= (void**)_T142;_T143= (struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T3CC;_T144= & _T143->f1.ret_tqual;_T3E1= (struct Cyc_Absyn_Tqual*)_T144;_T145= _T3E5->f1;_T3E0= _T145.ret_type;_T146= _T3E5->f1;_T3DA= _T146.args;_T147= _T3E5->f1;_T3D9= _T147.c_varargs;_T148= _T3E5->f1;_T3D8= _T148.cyc_varargs;_T149= (struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T3CC;_T14A= & _T149->f1.qual_bnd;_T3DF= (struct Cyc_List_List**)_T14A;_T14B= _T3E5->f1;_T3D7= _T14B.attributes;_T14C= _T3E5->f1;_T3D6= _T14C.checks_clause;_T14D= (struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T3CC;_T14E= & _T14D->f1.checks_assn;_T3DE= (struct Cyc_AssnDef_ExistAssnFn**)_T14E;_T14F= _T3E5->f1;_T3D5= _T14F.requires_clause;_T150= (struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T3CC;_T151= & _T150->f1.requires_assn;_T3DD= (struct Cyc_AssnDef_ExistAssnFn**)_T151;_T152= _T3E5->f1;_T3D4= _T152.ensures_clause;_T153= (struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T3CC;_T154= & _T153->f1.ensures_assn;_T3DC= (struct Cyc_AssnDef_ExistAssnFn**)_T154;_T155= _T3E5->f1;_T3D3= _T155.throws_clause;_T156= (struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T3CC;_T157= & _T156->f1.throws_assn;_T3D2= (struct Cyc_AssnDef_ExistAssnFn**)_T157;_T158= _T3E5->f1;_T3D1= _T158.return_value;_T159= _T3E5->f1;_T3D0= _T159.arg_vardecls;_T15A= _T3E5->f1;_T3CF= _T15A.effconstr;}{struct Cyc_List_List**btvs=_T3E4;void**eff=_T3E3;struct Cyc_Absyn_Tqual*rtq=_T3E1;void*tr=_T3E0;struct Cyc_List_List*args=_T3DA;long c_vararg=_T3D9;struct Cyc_Absyn_VarargInfo*cyc_vararg=_T3D8;struct Cyc_List_List**qb=(struct Cyc_List_List**)_T3DF;struct Cyc_List_List*atts=_T3D7;struct Cyc_Absyn_Exp*chk=_T3D6;struct Cyc_AssnDef_ExistAssnFn**chk_relns=(struct Cyc_AssnDef_ExistAssnFn**)_T3DE;struct Cyc_Absyn_Exp*req=_T3D5;struct Cyc_AssnDef_ExistAssnFn**req_relns=(struct Cyc_AssnDef_ExistAssnFn**)_T3DD;struct Cyc_Absyn_Exp*ens=_T3D4;struct Cyc_AssnDef_ExistAssnFn**ens_relns=(struct Cyc_AssnDef_ExistAssnFn**)_T3DC;struct Cyc_Absyn_Exp*thrws=_T3D3;struct Cyc_AssnDef_ExistAssnFn**thrws_relns=(struct Cyc_AssnDef_ExistAssnFn**)_T3D2;struct Cyc_Absyn_Vardecl*return_vd=_T3D1;struct Cyc_List_List*arg_vds=_T3D0;struct Cyc_List_List*effc=_T3CF;
# 1053
int num_formats=0;
int is_cdecl=0;
int is_stdcall=0;
int is_fastcall=0;
enum Cyc_Absyn_Format_Type ft=0U;
int fmt_desc_arg=- 1;
int fmt_arg_start=- 1;
_TL18F: if(atts!=0)goto _TL18D;else{goto _TL18E;}
_TL18D: _T15B= atts;{void*_T3E5=_T15B->hd;int _T3E6;int _T3E7;enum Cyc_Absyn_Format_Type _T3E8;_T15C= (int*)_T3E5;_T15D= *_T15C;switch(_T15D){case 1:
# 1063
 is_stdcall= 1;goto _LL46;case 2:
# 1066
 is_cdecl= 1;goto _LL46;case 3:
# 1069
 is_fastcall= 1;goto _LL46;case 20:{struct Cyc_Absyn_Format_att_Absyn_Attribute_struct*_T3E9=(struct Cyc_Absyn_Format_att_Absyn_Attribute_struct*)_T3E5;_T3E8= _T3E9->f1;_T3E7= _T3E9->f2;_T3E6= _T3E9->f3;}{enum Cyc_Absyn_Format_Type fmttype=_T3E8;int i=_T3E7;int j=_T3E6;
# 1072
num_formats= num_formats + 1;
ft= fmttype;
fmt_desc_arg= i;
fmt_arg_start= j;goto _LL46;}default: _T15E= atts;_T15F= _T15E->hd;_T160= 
# 1078
Cyc_Atts_fntype_att(_T15F);if(_T160)goto _TL191;else{goto _TL193;}
_TL193:{struct Cyc_Warn_String_Warn_Warg_struct _T3E9;_T3E9.tag= 0;({__typeof__(_tag_fat("bad function type attribute ",sizeof(char),29U))_T3EA=_tag_fat("bad function type attribute ",sizeof(char),29U);_T3E9.f1= _T3EA;});_T161= _T3E9;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E9=_T161;{struct Cyc_Warn_Attribute_Warn_Warg_struct _T3EA;_T3EA.tag= 10;_T163= atts;_T3EA.f1= _T163->hd;_T162= _T3EA;}{struct Cyc_Warn_Attribute_Warn_Warg_struct _T3EA=_T162;void*_T3EB[2];_T3EB[0]= & _T3E9;_T3EB[1]= & _T3EA;_T164= loc;_T165= _tag_fat(_T3EB,sizeof(void*),2);Cyc_Warn_err2(_T164,_T165);}}goto _TL192;_TL191: _TL192:;}_LL46:;}_T166= atts;
# 1060
atts= _T166->tl;goto _TL18F;_TL18E: _T167= is_stdcall + is_cdecl;_T168= is_fastcall;_T169= _T167 + _T168;
# 1081
if(_T169 <= 1)goto _TL194;{struct Cyc_Warn_String_Warn_Warg_struct _T3E5;_T3E5.tag= 0;
({__typeof__(_tag_fat("function can't have multiple calling conventions",sizeof(char),49U))_T3E6=_tag_fat("function can't have multiple calling conventions",sizeof(char),49U);_T3E5.f1= _T3E6;});_T16A= _T3E5;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E5=_T16A;void*_T3E6[1];_T3E6[0]= & _T3E5;_T16B= loc;_T16C= _tag_fat(_T3E6,sizeof(void*),1);Cyc_Warn_err2(_T16B,_T16C);}goto _TL195;_TL194: _TL195:
 if(num_formats <= 1)goto _TL196;{struct Cyc_Warn_String_Warn_Warg_struct _T3E5;_T3E5.tag= 0;
({__typeof__(_tag_fat("function can't have multiple format attributes",sizeof(char),47U))_T3E6=_tag_fat("function can't have multiple format attributes",sizeof(char),47U);_T3E5.f1= _T3E6;});_T16D= _T3E5;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E5=_T16D;void*_T3E6[1];_T3E6[0]= & _T3E5;_T16E= loc;_T16F= _tag_fat(_T3E6,sizeof(void*),1);Cyc_Warn_err2(_T16E,_T16F);}goto _TL197;_TL196: _TL197: _T170= loc;_T171= btvs;_T172= *_T171;
# 1088
Cyc_Tcutil_check_unique_tvars(_T170,_T172);_T173= btvs;{
struct Cyc_List_List*b=*_T173;_TL19B: if(b!=0)goto _TL199;else{goto _TL19A;}
_TL199: _T174= b;_T175= _T174->hd;_T176= (struct Cyc_Absyn_Tvar*)_T175;({__typeof__(Cyc_Tcutil_new_tvar_id())_T3E5=Cyc_Tcutil_new_tvar_id();_T176->identity= _T3E5;});_T177= env;_T178= _T177.kind_env;_T179= b;_T17A= _T179->hd;_T17B= (struct Cyc_Absyn_Tvar*)_T17A;
({__typeof__(Cyc_Tctyp_add_bound_tvar(_T178,_T17B))_T3E5=Cyc_Tctyp_add_bound_tvar(_T178,_T17B);env.kind_env= _T3E5;});_T17C= b;_T17D= _T17C->hd;_T17E= (struct Cyc_Absyn_Tvar*)_T17D;_T17F= _T17E->kind;{
void*_T3E5=Cyc_Kinds_compress_kb(_T17F);_T180= (int*)_T3E5;_T181= *_T180;if(_T181!=0)goto _TL19C;_T182= (struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*)_T3E5;_T183= _T182->f1;_T184= (struct Cyc_Absyn_Kind*)_T183;_T185= _T184->kind;if(_T185!=Cyc_Absyn_MemKind)goto _TL19E;{struct Cyc_Warn_String_Warn_Warg_struct _T3E6;_T3E6.tag= 0;
# 1094
({__typeof__(_tag_fat("function abstracts Mem type variable ",sizeof(char),38U))_T3E7=_tag_fat("function abstracts Mem type variable ",sizeof(char),38U);_T3E6.f1= _T3E7;});_T186= _T3E6;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E6=_T186;{struct Cyc_Warn_Tvar_Warn_Warg_struct _T3E7;_T3E7.tag= 7;_T188= b;_T189= _T188->hd;_T3E7.f1= (struct Cyc_Absyn_Tvar*)_T189;_T187= _T3E7;}{struct Cyc_Warn_Tvar_Warn_Warg_struct _T3E7=_T187;void*_T3E8[2];_T3E8[0]= & _T3E6;_T3E8[1]= & _T3E7;_T18A= loc;_T18B= _tag_fat(_T3E8,sizeof(void*),2);Cyc_Warn_err2(_T18A,_T18B);}}goto _LL51;_TL19E: goto _LL54;_TL19C: _LL54: goto _LL51;_LL51:;}_T18C= b;
# 1089
b= _T18C->tl;goto _TL19B;_TL19A:;}{struct Cyc_Tctyp_CVTEnv _T3E5;_T18E= env;
# 1102
_T3E5.ctx= _T18E.ctx;_T3E5.loc= loc;_T3E5.te= te;_T18F= env;_T3E5.kind_env= _T18F.kind_env;_T3E5.fn_result= 1;_T3E5.def_aliasable= 1;_T3E5.inst_type_evar= 0;_T190= env;_T3E5.generalize_evars= _T190.generalize_evars;
_T3E5.allow_aqual_bounds= 1;_T3E5.free_vars= 0;_T3E5.free_evars= 0;_T3E5.free_qualvars= 0;_T18D= _T3E5;}{
# 1102
struct Cyc_Tctyp_CVTEnv new_env=_T18D;_T191= new_env;_T192= & Cyc_Kinds_mk;_T193= (struct Cyc_Absyn_Kind*)_T192;_T194= tr;
# 1104
new_env= Cyc_Tctyp_i_check_type(_T191,_T193,_T194,1,1);_T195= rtq;_T196= loc;_T197= rtq;_T198= _T197->print_const;_T199= tr;
({__typeof__(Cyc_Tcutil_extract_const_from_typedef(_T196,_T198,_T199))_T3E5=Cyc_Tcutil_extract_const_from_typedef(_T196,_T198,_T199);_T195->real_const= _T3E5;});
new_env.fn_result= 0;{
# 1111
struct Cyc_List_List*a=args;_TL1A3: if(a!=0)goto _TL1A1;else{goto _TL1A2;}
_TL1A1: _T19A= a;_T19B= _T19A->hd;{struct _tuple9*trip=(struct _tuple9*)_T19B;_T19C= trip;_T19D= *_T19C;{
void*t=_T19D.f2;_T19E= new_env;_T19F= & Cyc_Kinds_mk;_T1A0= (struct Cyc_Absyn_Kind*)_T19F;_T1A1= t;
new_env= Cyc_Tctyp_i_check_type(_T19E,_T1A0,_T1A1,1,1);_T1A2= loc;_T1A3= trip;_T1A4= *_T1A3;_T1A5= _T1A4.f1;_T1A6= _T1A5.print_const;_T1A7= t;{
long ec=Cyc_Tcutil_extract_const_from_typedef(_T1A2,_T1A6,_T1A7);_T1A8= trip;
(*_T1A8).f1.real_const= ec;_T1A9= 
# 1119
Cyc_Tcutil_is_array_type(t);if(!_T1A9)goto _TL1A4;{
# 1121
void*ptr_rgn=Cyc_Absyn_new_evar(0,0);_T1AA= new_env;_T1AB= & Cyc_Kinds_ek;_T1AC= (struct Cyc_Absyn_Kind*)_T1AB;_T1AD= ptr_rgn;
new_env= Cyc_Tctyp_i_check_type(_T1AA,_T1AC,_T1AD,1,1);_T1AE= & Cyc_Kinds_aqko;_T1AF= (struct Cyc_Core_Opt*)_T1AE;_T1B0= 
Cyc_Absyn_new_evar(_T1AF,0);_T1B1= Cyc_Absyn_al_qual_type;{void*aqt=Cyc_Absyn_aqual_var_type(_T1B0,_T1B1);_T1B2= new_env;_T1B3= & Cyc_Kinds_aqk;_T1B4= (struct Cyc_Absyn_Kind*)_T1B3;_T1B5= aqt;
# 1125
new_env= Cyc_Tctyp_i_check_type(_T1B2,_T1B4,_T1B5,1,1);_T1B6= trip;
({__typeof__(Cyc_Tcutil_promote_array(t,ptr_rgn,aqt,0))_T3E5=Cyc_Tcutil_promote_array(t,ptr_rgn,aqt,0);(*_T1B6).f2= _T3E5;});}}goto _TL1A5;_TL1A4: _TL1A5:;}}}_T1B7= a;
# 1111
a= _T1B7->tl;goto _TL1A3;_TL1A2:;}
# 1130
if(cyc_vararg==0)goto _TL1A6;_T1B8= c_vararg;
if(!_T1B8)goto _TL1A8;{struct Cyc_Warn_String_Warn_Warg_struct _T3E5;_T3E5.tag= 0;
({__typeof__(_tag_fat("both c_vararg and cyc_vararg",sizeof(char),29U))_T3E6=_tag_fat("both c_vararg and cyc_vararg",sizeof(char),29U);_T3E5.f1= _T3E6;});_T1B9= _T3E5;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E5=_T1B9;void*_T3E6[1];_T3E6[0]= & _T3E5;_T1BB= Cyc_Warn_impos2;{int(*_T3E7)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T1BB;_T1BA= _T3E7;}_T1BC= _tag_fat(_T3E6,sizeof(void*),1);_T1BA(_T1BC);}goto _TL1A9;_TL1A8: _TL1A9: _T1BD= cyc_vararg;{
struct Cyc_Absyn_VarargInfo _T3E5=*_T1BD;long _T3E6;void*_T3E7;_T3E7= _T3E5.type;_T3E6= _T3E5.inject;{void*vt=_T3E7;long vi=_T3E6;_T1BE= new_env;_T1BF= & Cyc_Kinds_mk;_T1C0= (struct Cyc_Absyn_Kind*)_T1BF;_T1C1= vt;
new_env= Cyc_Tctyp_i_check_type(_T1BE,_T1C0,_T1C1,1,1);_T1C2= cyc_vararg;_T1C3= loc;_T1C4= cyc_vararg;_T1C5= _T1C4->tq;_T1C6= _T1C5.print_const;_T1C7= vt;
({__typeof__(Cyc_Tcutil_extract_const_from_typedef(_T1C3,_T1C6,_T1C7))_T3E8=Cyc_Tcutil_extract_const_from_typedef(_T1C3,_T1C6,_T1C7);_T1C2->tq.real_const= _T3E8;});_T1C8= vi;
# 1137
if(!_T1C8)goto _TL1AA;{
void*_T3E8=Cyc_Absyn_compress(vt);void*_T3E9;void*_T3EA;void*_T3EB;_T1C9= (int*)_T3E8;_T1CA= *_T1C9;if(_T1CA!=4)goto _TL1AC;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T3EC=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T3E8;_T1CB= _T3EC->f1;_T3EB= _T1CB.elt_type;_T1CC= _T3EC->f1;_T1CD= _T1CC.ptr_atts;_T3EA= _T1CD.bounds;_T1CE= _T3EC->f1;_T1CF= _T1CE.ptr_atts;_T3E9= _T1CF.zero_term;}{void*et=_T3EB;void*bs=_T3EA;void*zt=_T3E9;{
# 1140
void*_T3EC=Cyc_Absyn_compress(et);_T1D0= (int*)_T3EC;_T1D1= *_T1D0;if(_T1D1!=0)goto _TL1AE;_T1D2= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3EC;_T1D3= _T1D2->f1;_T1D4= (int*)_T1D3;_T1D5= *_T1D4;if(_T1D5!=22)goto _TL1B0;_T1D6= 
# 1142
Cyc_Tcutil_force_type2bool(0,zt);if(!_T1D6)goto _TL1B2;{struct Cyc_Warn_String_Warn_Warg_struct _T3ED;_T3ED.tag= 0;
({__typeof__(_tag_fat("can't inject into a zeroterm pointer",sizeof(char),37U))_T3EE=_tag_fat("can't inject into a zeroterm pointer",sizeof(char),37U);_T3ED.f1= _T3EE;});_T1D7= _T3ED;}{struct Cyc_Warn_String_Warn_Warg_struct _T3ED=_T1D7;void*_T3EE[1];_T3EE[0]= & _T3ED;_T1D8= loc;_T1D9= _tag_fat(_T3EE,sizeof(void*),1);Cyc_Warn_err2(_T1D8,_T1D9);}goto _TL1B3;_TL1B2: _TL1B3: _T1DA= 
Cyc_Absyn_bounds_one();_T1DB= bs;_T1DC= Cyc_Unify_unify(_T1DA,_T1DB);if(_T1DC)goto _TL1B4;else{goto _TL1B6;}
_TL1B6: _T1DD= Cyc_Tcutil_is_cvar_type(bs);if(_T1DD)goto _TL1BA;else{goto _TL1B9;}_TL1BA: _T1DE= loc;_T1DF= bs;_T1E0= 
# 1147
Cyc_Absyn_thinconst();_T1E1= Cyc_BansheeIf_equality_constraint(_T1DF,_T1E0);_T1E2= 
# 1146
Cyc_BansheeIf_add_constraint(_T1DE,_T1E1);
# 1145
if(_T1E2)goto _TL1B7;else{goto _TL1B9;}
# 1148
_TL1B9:{struct Cyc_Warn_String_Warn_Warg_struct _T3ED;_T3ED.tag= 0;({__typeof__(_tag_fat("can't inject into a fat pointer to datatype",sizeof(char),44U))_T3EE=_tag_fat("can't inject into a fat pointer to datatype",sizeof(char),44U);_T3ED.f1= _T3EE;});_T1E3= _T3ED;}{struct Cyc_Warn_String_Warn_Warg_struct _T3ED=_T1E3;void*_T3EE[1];_T3EE[0]= & _T3ED;_T1E4= loc;_T1E5= _tag_fat(_T3EE,sizeof(void*),1);Cyc_Warn_err2(_T1E4,_T1E5);}goto _TL1B8;_TL1B7: _TL1B8: goto _TL1B5;_TL1B4: _TL1B5: goto _LL5E;_TL1B0: goto _LL61;_TL1AE: _LL61:{struct Cyc_Warn_String_Warn_Warg_struct _T3ED;_T3ED.tag= 0;
# 1153
({__typeof__(_tag_fat("can't inject a non-datatype type",sizeof(char),33U))_T3EE=_tag_fat("can't inject a non-datatype type",sizeof(char),33U);_T3ED.f1= _T3EE;});_T1E6= _T3ED;}{struct Cyc_Warn_String_Warn_Warg_struct _T3ED=_T1E6;void*_T3EE[1];_T3EE[0]= & _T3ED;_T1E7= loc;_T1E8= _tag_fat(_T3EE,sizeof(void*),1);Cyc_Warn_err2(_T1E7,_T1E8);}goto _LL5E;_LL5E:;}goto _LL59;}_TL1AC:{struct Cyc_Warn_String_Warn_Warg_struct _T3EC;_T3EC.tag= 0;
# 1158
({__typeof__(_tag_fat("expecting a datatype pointer type",sizeof(char),34U))_T3ED=_tag_fat("expecting a datatype pointer type",sizeof(char),34U);_T3EC.f1= _T3ED;});_T1E9= _T3EC;}{struct Cyc_Warn_String_Warn_Warg_struct _T3EC=_T1E9;void*_T3ED[1];_T3ED[0]= & _T3EC;_T1EA= loc;_T1EB= _tag_fat(_T3ED,sizeof(void*),1);Cyc_Warn_err2(_T1EA,_T1EB);}goto _LL59;_LL59:;}goto _TL1AB;_TL1AA: _TL1AB:;}}goto _TL1A7;_TL1A6: _TL1A7:
# 1163
 if(num_formats <= 0)goto _TL1BB;{
int num_args=Cyc_List_length(args);
if(fmt_desc_arg < 0)goto _TL1BF;else{goto _TL1C3;}_TL1C3: if(fmt_desc_arg > num_args)goto _TL1BF;else{goto _TL1C2;}_TL1C2: if(fmt_arg_start < 0)goto _TL1BF;else{goto _TL1C1;}_TL1C1: if(cyc_vararg==0)goto _TL1C5;else{goto _TL1C0;}_TL1C5: _T1EC= c_vararg;if(_T1EC)goto _TL1C0;else{goto _TL1C4;}_TL1C4: if(fmt_arg_start!=0)goto _TL1BF;else{goto _TL1C0;}_TL1C0: if(cyc_vararg!=0)goto _TL1C6;else{goto _TL1C7;}_TL1C7: _T1ED= c_vararg;if(_T1ED)goto _TL1C6;else{goto _TL1BD;}_TL1C6: _T1EE= fmt_arg_start;_T1EF= num_args + 1;if(_T1EE!=_T1EF)goto _TL1BF;else{goto _TL1BD;}
# 1169
_TL1BF:{struct Cyc_Warn_String_Warn_Warg_struct _T3E5;_T3E5.tag= 0;({__typeof__(_tag_fat("bad format descriptor",sizeof(char),22U))_T3E6=_tag_fat("bad format descriptor",sizeof(char),22U);_T3E5.f1= _T3E6;});_T1F0= _T3E5;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E5=_T1F0;void*_T3E6[1];_T3E6[0]= & _T3E5;_T1F1= loc;_T1F2= _tag_fat(_T3E6,sizeof(void*),1);Cyc_Warn_err2(_T1F1,_T1F2);}goto _TL1BE;
# 1172
_TL1BD: _T1F4= Cyc_List_nth;{struct _tuple9*(*_T3E5)(struct Cyc_List_List*,int)=(struct _tuple9*(*)(struct Cyc_List_List*,int))_T1F4;_T1F3= _T3E5;}_T1F5= args;_T1F6= fmt_desc_arg - 1;_T1F7= _T1F3(_T1F5,_T1F6);{struct _tuple9 _T3E5=*_T1F7;void*_T3E6;_T3E6= _T3E5.f2;{void*t=_T3E6;{
# 1175
void*_T3E7=Cyc_Absyn_compress(t);void*_T3E8;void*_T3E9;_T1F8= (int*)_T3E7;_T1F9= *_T1F8;if(_T1F9!=4)goto _TL1C8;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T3EA=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T3E7;_T1FA= _T3EA->f1;_T3E9= _T1FA.elt_type;_T1FB= _T3EA->f1;_T1FC= _T1FB.ptr_atts;_T3E8= _T1FC.bounds;}{void*et=_T3E9;void*b=_T3E8;_T1FD= 
# 1178
Cyc_Tcutil_is_char_type(et);if(_T1FD)goto _TL1CA;else{goto _TL1CC;}
_TL1CC:{struct Cyc_Warn_String_Warn_Warg_struct _T3EA;_T3EA.tag= 0;({__typeof__(_tag_fat("format descriptor is not a string",sizeof(char),34U))_T3EB=_tag_fat("format descriptor is not a string",sizeof(char),34U);_T3EA.f1= _T3EB;});_T1FE= _T3EA;}{struct Cyc_Warn_String_Warn_Warg_struct _T3EA=_T1FE;void*_T3EB[1];_T3EB[0]= & _T3EA;_T1FF= loc;_T200= _tag_fat(_T3EB,sizeof(void*),1);Cyc_Warn_err2(_T1FF,_T200);}goto _TL1CB;
# 1181
_TL1CA: _T201= Cyc_Tcutil_is_cvar_type(b);if(_T201)goto _TL1CD;else{goto _TL1CF;}
_TL1CF: _T202= Cyc_Absyn_bounds_one();_T203= b;{struct Cyc_Absyn_Exp*e=Cyc_Tcutil_get_bounds_exp(_T202,_T203);
if(e!=0)goto _TL1D0;_T204= c_vararg;if(!_T204)goto _TL1D0;{struct Cyc_Warn_String_Warn_Warg_struct _T3EA;_T3EA.tag= 0;
({__typeof__(_tag_fat("format descriptor is not a char * type",sizeof(char),39U))_T3EB=_tag_fat("format descriptor is not a char * type",sizeof(char),39U);_T3EA.f1= _T3EB;});_T205= _T3EA;}{struct Cyc_Warn_String_Warn_Warg_struct _T3EA=_T205;void*_T3EB[1];_T3EB[0]= & _T3EA;_T206= loc;_T207= _tag_fat(_T3EB,sizeof(void*),1);Cyc_Warn_err2(_T206,_T207);}goto _TL1D1;
_TL1D0: if(e==0)goto _TL1D2;_T208= c_vararg;if(_T208)goto _TL1D2;else{goto _TL1D4;}
_TL1D4:{struct Cyc_Warn_String_Warn_Warg_struct _T3EA;_T3EA.tag= 0;({__typeof__(_tag_fat("format descriptor is not a char ? type",sizeof(char),39U))_T3EB=_tag_fat("format descriptor is not a char ? type",sizeof(char),39U);_T3EA.f1= _T3EB;});_T209= _T3EA;}{struct Cyc_Warn_String_Warn_Warg_struct _T3EA=_T209;void*_T3EB[1];_T3EB[0]= & _T3EA;_T20A= loc;_T20B= _tag_fat(_T3EB,sizeof(void*),1);Cyc_Warn_err2(_T20A,_T20B);}goto _TL1D3;_TL1D2: _TL1D3: _TL1D1:;}goto _TL1CE;
# 1188
_TL1CD: _T20C= c_vararg;if(!_T20C)goto _TL1D5;_T20D= loc;_T20E= 
Cyc_Tcutil_ptrbnd_cvar_equivalent(b);_T20F= _check_null(_T20E);_T210= 
Cyc_Absyn_thinconst();_T211= 
# 1189
Cyc_BansheeIf_equality_constraint(_T20F,_T210);_T212= Cyc_BansheeIf_add_constraint(_T20D,_T211);if(_T212)goto _TL1D7;else{goto _TL1D9;}
# 1191
_TL1D9:{struct Cyc_Warn_String_Warn_Warg_struct _T3EA;_T3EA.tag= 0;({__typeof__(_tag_fat("format descriptor is not a char ? type",sizeof(char),39U))_T3EB=_tag_fat("format descriptor is not a char ? type",sizeof(char),39U);_T3EA.f1= _T3EB;});_T213= _T3EA;}{struct Cyc_Warn_String_Warn_Warg_struct _T3EA=_T213;void*_T3EB[1];_T3EB[0]= & _T3EA;_T214= loc;_T215= _tag_fat(_T3EB,sizeof(void*),1);Cyc_Warn_err2(_T214,_T215);}goto _TL1D8;_TL1D7: _TL1D8: goto _TL1D6;
# 1194
_TL1D5: _T216= loc;_T217= Cyc_Tcutil_ptrbnd_cvar_equivalent(b);_T218= _check_null(_T217);_T219= 
Cyc_Absyn_fatconst();_T21A= 
# 1194
Cyc_BansheeIf_equality_constraint(_T218,_T219);_T21B= Cyc_BansheeIf_add_constraint(_T216,_T21A);if(_T21B)goto _TL1DA;else{goto _TL1DC;}
# 1196
_TL1DC:{struct Cyc_Warn_String_Warn_Warg_struct _T3EA;_T3EA.tag= 0;({__typeof__(_tag_fat("format descriptor is not a char * type",sizeof(char),39U))_T3EB=_tag_fat("format descriptor is not a char * type",sizeof(char),39U);_T3EA.f1= _T3EB;});_T21C= _T3EA;}{struct Cyc_Warn_String_Warn_Warg_struct _T3EA=_T21C;void*_T3EB[1];_T3EB[0]= & _T3EA;_T21D= loc;_T21E= _tag_fat(_T3EB,sizeof(void*),1);Cyc_Warn_err2(_T21D,_T21E);}goto _TL1DB;_TL1DA: _TL1DB: _TL1D6: _TL1CE: _TL1CB: goto _LL66;}_TL1C8:{struct Cyc_Warn_String_Warn_Warg_struct _T3EA;_T3EA.tag= 0;
# 1203
({__typeof__(_tag_fat("format descriptor is not a string type",sizeof(char),39U))_T3EB=_tag_fat("format descriptor is not a string type",sizeof(char),39U);_T3EA.f1= _T3EB;});_T21F= _T3EA;}{struct Cyc_Warn_String_Warn_Warg_struct _T3EA=_T21F;void*_T3EB[1];_T3EB[0]= & _T3EA;_T220= loc;_T221= _tag_fat(_T3EB,sizeof(void*),1);Cyc_Warn_err2(_T220,_T221);}goto _LL66;_LL66:;}
# 1206
if(fmt_arg_start==0)goto _TL1DD;_T222= c_vararg;if(_T222)goto _TL1DD;else{goto _TL1DF;}
# 1210
_TL1DF:{long problem;{struct _tuple18 _T3E7;
_T3E7.f0= ft;_T224= _check_null(cyc_vararg);_T225= _T224->type;_T226= Cyc_Tcutil_pointer_elt_type(_T225);({__typeof__(Cyc_Absyn_compress(_T226))_T3E8=Cyc_Absyn_compress(_T226);_T3E7.f1= _T3E8;});_T223= _T3E7;}{struct _tuple18 _T3E7=_T223;struct Cyc_Absyn_Datatypedecl*_T3E8;_T227= _T3E7.f0;_T228= (int)_T227;switch(_T228){case Cyc_Absyn_Printf_ft: _T229= _T3E7.f1;_T22A= (int*)_T229;_T22B= *_T22A;if(_T22B!=0)goto _TL1E1;_T22C= _T3E7.f1;_T22D= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T22C;_T22E= _T22D->f1;_T22F= (int*)_T22E;_T230= *_T22F;if(_T230!=22)goto _TL1E3;_T231= _T3E7.f1;_T232= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T231;_T233= _T232->f1;_T234= (struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*)_T233;_T235= _T234->f1;_T236= _T235.KnownDatatype;_T237= _T236.tag;if(_T237!=2)goto _TL1E5;_T238= _T3E7.f1;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T3E9=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T238;_T239= _T3E9->f1;{struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*_T3EA=(struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*)_T239;_T23A= _T3EA->f1;_T23B= _T23A.KnownDatatype;_T23C= _T23B.val;{struct Cyc_Absyn_Datatypedecl*_T3EB=*_T23C;_T3E8= _T3EB;}}}{struct Cyc_Absyn_Datatypedecl*tud=_T3E8;_T23D= tud;_T23E= _T23D->name;_T23F= 
# 1213
Cyc_Absyn_datatype_print_arg_qvar();_T240= Cyc_Absyn_qvar_cmp(_T23E,_T23F);problem= _T240!=0;goto _LL6B;}_TL1E5: goto _LL70;_TL1E3: goto _LL70;_TL1E1: goto _LL70;case Cyc_Absyn_Scanf_ft: _T241= _T3E7.f1;_T242= (int*)_T241;_T243= *_T242;if(_T243!=0)goto _TL1E7;_T244= _T3E7.f1;_T245= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T244;_T246= _T245->f1;_T247= (int*)_T246;_T248= *_T247;if(_T248!=22)goto _TL1E9;_T249= _T3E7.f1;_T24A= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T249;_T24B= _T24A->f1;_T24C= (struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*)_T24B;_T24D= _T24C->f1;_T24E= _T24D.KnownDatatype;_T24F= _T24E.tag;if(_T24F!=2)goto _TL1EB;_T250= _T3E7.f1;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T3E9=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T250;_T251= _T3E9->f1;{struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*_T3EA=(struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*)_T251;_T252= _T3EA->f1;_T253= _T252.KnownDatatype;_T254= _T253.val;{struct Cyc_Absyn_Datatypedecl*_T3EB=*_T254;_T3E8= _T3EB;}}}{struct Cyc_Absyn_Datatypedecl*tud=_T3E8;_T255= tud;_T256= _T255->name;_T257= 
# 1216
Cyc_Absyn_datatype_scanf_arg_qvar();_T258= Cyc_Absyn_qvar_cmp(_T256,_T257);problem= _T258!=0;goto _LL6B;}_TL1EB: goto _LL70;_TL1E9: goto _LL70;_TL1E7: goto _LL70;default: _LL70:
# 1219
 problem= 1;goto _LL6B;}_LL6B:;}_T259= problem;
# 1222
if(!_T259)goto _TL1ED;{struct Cyc_Warn_String_Warn_Warg_struct _T3E7;_T3E7.tag= 0;
({__typeof__(_tag_fat("format attribute and vararg types don't match",sizeof(char),46U))_T3E8=_tag_fat("format attribute and vararg types don't match",sizeof(char),46U);_T3E7.f1= _T3E8;});_T25A= _T3E7;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E7=_T25A;void*_T3E8[1];_T3E8[0]= & _T3E7;_T25B= loc;_T25C= _tag_fat(_T3E8,sizeof(void*),1);Cyc_Warn_err2(_T25B,_T25C);}goto _TL1EE;_TL1ED: _TL1EE:;}goto _TL1DE;_TL1DD: _TL1DE:;}}_TL1BE:;}goto _TL1BC;_TL1BB: _TL1BC: _T25D= qb;{
# 1228
struct Cyc_List_List*qbit=*_T25D;_TL1F2: if(qbit!=0)goto _TL1F0;else{goto _TL1F1;}
# 1231
_TL1F0: _T25E= qbit;_T25F= _T25E->hd;{struct _tuple0*_T3E5=(struct _tuple0*)_T25F;void*_T3E6;void*_T3E7;{struct _tuple0 _T3E8=*_T3E5;_T3E7= _T3E8.f0;_T3E6= _T3E8.f1;}{void*tv=_T3E7;void*bnd=_T3E6;_T260= new_env;_T261= & Cyc_Kinds_aqk;_T262= (struct Cyc_Absyn_Kind*)_T261;_T263= bnd;
new_env= Cyc_Tctyp_i_check_type(_T260,_T262,_T263,0,0);_T264= new_env;_T265= & Cyc_Kinds_aqk;_T266= (struct Cyc_Absyn_Kind*)_T265;_T267= tv;
# 1235
new_env= Cyc_Tctyp_i_check_type(_T264,_T266,_T267,0,0);}}_T268= qbit;
# 1229
qbit= _T268->tl;goto _TL1F2;_TL1F1:;}{
# 1239
struct Cyc_List_List*ec=effc;_TL1F6: if(ec!=0)goto _TL1F4;else{goto _TL1F5;}
_TL1F4: _T269= ec;{void*_T3E5=_T269->hd;void*_T3E6;void*_T3E7;_T26A= (int*)_T3E5;_T26B= *_T26A;switch(_T26B){case 0:{struct Cyc_Absyn_SingleConstraint_Absyn_EffConstraint_struct*_T3E8=(struct Cyc_Absyn_SingleConstraint_Absyn_EffConstraint_struct*)_T3E5;_T26C= _T3E8->f1;_T3E7= (void*)_T26C;}{void*t=_T3E7;_T26D= new_env;_T26E= & Cyc_Kinds_ek;_T26F= (struct Cyc_Absyn_Kind*)_T26E;_T270= t;
# 1242
new_env= Cyc_Tctyp_i_check_type(_T26D,_T26F,_T270,1,1);goto _LL75;}case 1:{struct Cyc_Absyn_DisjointConstraint_Absyn_EffConstraint_struct*_T3E8=(struct Cyc_Absyn_DisjointConstraint_Absyn_EffConstraint_struct*)_T3E5;_T271= _T3E8->f1;_T3E7= (void*)_T271;_T272= _T3E8->f2;_T3E6= (void*)_T272;}{void*t1=_T3E7;void*t2=_T3E6;_T3E7= t1;_T3E6= t2;goto _LL7B;}default:{struct Cyc_Absyn_SubsetConstraint_Absyn_EffConstraint_struct*_T3E8=(struct Cyc_Absyn_SubsetConstraint_Absyn_EffConstraint_struct*)_T3E5;_T273= _T3E8->f1;_T3E7= (void*)_T273;_T274= _T3E8->f2;_T3E6= (void*)_T274;}_LL7B: {void*t1=_T3E7;void*t2=_T3E6;_T275= new_env;_T276= & Cyc_Kinds_ek;_T277= (struct Cyc_Absyn_Kind*)_T276;_T278= t1;
# 1247
new_env= Cyc_Tctyp_i_check_type(_T275,_T277,_T278,1,1);_T279= new_env;_T27A= & Cyc_Kinds_ek;_T27B= (struct Cyc_Absyn_Kind*)_T27A;_T27C= t2;
new_env= Cyc_Tctyp_i_check_type(_T279,_T27B,_T27C,1,1);goto _LL75;}}_LL75:;}_T27D= ec;
# 1239
ec= _T27D->tl;goto _TL1F6;_TL1F5:;}{
# 1256
struct Cyc_Tcenv_Fenv*fenv=Cyc_Tcenv_bogus_fenv(tr,args);_T27E= new_env;{
struct Cyc_Tcenv_Tenv*old_te=_T27E.te;{struct Cyc_Tcenv_Tenv*_T3E5=_cycalloc(sizeof(struct Cyc_Tcenv_Tenv));_T280= te;
_T3E5->ns= _T280->ns;_T281= te;
_T3E5->ae= _T281->ae;
_T3E5->le= fenv;
_T3E5->allow_valueof= 1;_T282= te;
_T3E5->in_extern_c_include= _T282->in_extern_c_include;_T283= te;
_T3E5->in_tempest= _T283->in_tempest;_T284= te;
_T3E5->tempest_generalize= _T284->tempest_generalize;_T285= te;
_T3E5->in_extern_c_inc_repeat= _T285->in_extern_c_inc_repeat;_T27F= (struct Cyc_Tcenv_Tenv*)_T3E5;}
# 1258
new_env.te= _T27F;{
# 1266
struct Cyc_List_List*vds;vds= _cycalloc(sizeof(struct Cyc_List_List));_T286= vds;_T286->hd= Cyc_AssnDef_memory;_T287= vds;_T287->tl= arg_vds;
if(chk==0)goto _TL1F8;_T288= c_vararg;
if(_T288)goto _TL1FC;else{goto _TL1FD;}_TL1FD: _T289= cyc_vararg;_T28A= (unsigned)_T289;if(_T28A)goto _TL1FC;else{goto _TL1FA;}
_TL1FC:{struct Cyc_Warn_String_Warn_Warg_struct _T3E5;_T3E5.tag= 0;({__typeof__(_tag_fat("we do not yet support @checks on vararg functions",sizeof(char),50U))_T3E6=_tag_fat("we do not yet support @checks on vararg functions",sizeof(char),50U);_T3E5.f1= _T3E6;});_T28B= _T3E5;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E5=_T28B;void*_T3E6[1];_T3E6[0]= & _T3E5;_T28C= loc;_T28D= _tag_fat(_T3E6,sizeof(void*),1);Cyc_Warn_err2(_T28C,_T28D);}goto _TL1FB;_TL1FA: _TL1FB: _T28E= new_env;_T28F= 
_tag_fat("@checks",sizeof(char),8U);_T290= chk;{struct _tuple17 _T3E5=Cyc_Tctyp_check_clause(_T28E,_T28F,_T290);struct Cyc_AssnDef_AssnMap _T3E6;struct Cyc_Tctyp_CVTEnv _T3E7;_T3E7= _T3E5.f0;_T3E6= _T3E5.f1;{struct Cyc_Tctyp_CVTEnv nenv=_T3E7;struct Cyc_AssnDef_AssnMap chk_assn=_T3E6;
new_env= nenv;_T291= chk_relns;
({__typeof__(Cyc_AssnDef_assnmap2existassnfn(chk_assn,vds))_T3E8=Cyc_AssnDef_assnmap2existassnfn(chk_assn,vds);*_T291= _T3E8;});}}goto _TL1F9;_TL1F8: _TL1F9:
# 1274
 if(req==0)goto _TL1FE;_T292= new_env;_T293= 
_tag_fat("@requires",sizeof(char),10U);_T294= req;{struct _tuple17 _T3E5=Cyc_Tctyp_check_clause(_T292,_T293,_T294);struct Cyc_AssnDef_AssnMap _T3E6;struct Cyc_Tctyp_CVTEnv _T3E7;_T3E7= _T3E5.f0;_T3E6= _T3E5.f1;{struct Cyc_Tctyp_CVTEnv nenv=_T3E7;struct Cyc_AssnDef_AssnMap req_assn=_T3E6;
new_env= nenv;_T295= req_relns;
({__typeof__(Cyc_AssnDef_assnmap2existassnfn(req_assn,vds))_T3E8=Cyc_AssnDef_assnmap2existassnfn(req_assn,vds);*_T295= _T3E8;});}}goto _TL1FF;_TL1FE: _TL1FF: {
# 1280
struct Cyc_List_List*vds;vds= _cycalloc(sizeof(struct Cyc_List_List));_T296= vds;_T296->hd= Cyc_AssnDef_memory;_T297= vds;{struct Cyc_List_List*_T3E5=_cycalloc(sizeof(struct Cyc_List_List));
_T3E5->hd= Cyc_AssnDef_pre_memory;_T3E5->tl= arg_vds;_T298= (struct Cyc_List_List*)_T3E5;}_T297->tl= _T298;
if(ens==0)goto _TL200;_T299= new_env;_T29A= 
_tag_fat("@ensures",sizeof(char),9U);_T29B= ens;{struct _tuple17 _T3E5=Cyc_Tctyp_check_clause(_T299,_T29A,_T29B);struct Cyc_AssnDef_AssnMap _T3E6;struct Cyc_Tctyp_CVTEnv _T3E7;_T3E7= _T3E5.f0;_T3E6= _T3E5.f1;{struct Cyc_Tctyp_CVTEnv nenv=_T3E7;struct Cyc_AssnDef_AssnMap ens_assn=_T3E6;
new_env= nenv;_T29C= ens_relns;_T29D= ens_assn;{struct Cyc_List_List*_T3E8=_cycalloc(sizeof(struct Cyc_List_List));
_T3E8->hd= return_vd;_T3E8->tl= vds;_T29E= (struct Cyc_List_List*)_T3E8;}({__typeof__(Cyc_AssnDef_assnmap2existassnfn(_T29D,_T29E))_T3E8=Cyc_AssnDef_assnmap2existassnfn(_T29D,_T29E);*_T29C= _T3E8;});}}goto _TL201;_TL200: _TL201:
# 1287
 if(thrws==0)goto _TL202;_T29F= new_env;_T2A0= 
_tag_fat("@throws",sizeof(char),8U);_T2A1= thrws;{struct _tuple17 _T3E5=Cyc_Tctyp_check_clause(_T29F,_T2A0,_T2A1);struct Cyc_AssnDef_AssnMap _T3E6;struct Cyc_Tctyp_CVTEnv _T3E7;_T3E7= _T3E5.f0;_T3E6= _T3E5.f1;{struct Cyc_Tctyp_CVTEnv nenv=_T3E7;struct Cyc_AssnDef_AssnMap thrws_assn=_T3E6;
new_env= nenv;_T2A2= thrws_relns;
({__typeof__(Cyc_AssnDef_assnmap2existassnfn(thrws_assn,vds))_T3E8=Cyc_AssnDef_assnmap2existassnfn(thrws_assn,vds);*_T2A2= _T3E8;});}}goto _TL203;_TL202: _TL203:
# 1292
 new_env.te= old_te;_T2A3= eff;_T2A4= *_T2A3;
# 1294
if(_T2A4==0)goto _TL204;_T2A5= new_env;_T2A6= & Cyc_Kinds_ek;_T2A7= (struct Cyc_Absyn_Kind*)_T2A6;_T2A8= eff;_T2A9= *_T2A8;
new_env= Cyc_Tctyp_i_check_type(_T2A5,_T2A7,_T2A9,1,1);_T2AA= Cyc_Absyn_heap_rgn_type;_T2AB= eff;_T2AC= *_T2AB;_T2AD= 
_check_null(_T2AC);_T2AE= Cyc_Tcutil_type_in_effect(0,_T2AA,_T2AD);if(_T2AE)goto _TL206;else{goto _TL208;}
_TL208: _T2AF= eff;{void*_T3E5[2];_T3E5[0]= Cyc_Absyn_heap_rgn_type;_T2B1= eff;_T2B2= *_T2B1;({__typeof__(_check_null(_T2B2))_T3E6=_check_null(_T2B2);_T3E5[1]= _T3E6;});_T2B3= _tag_fat(_T3E5,sizeof(void*),2);_T2B0= Cyc_List_list(_T2B3);}_T2B4= Cyc_Absyn_join_eff(_T2B0);({__typeof__(Cyc_Tcutil_normalize_effect(_T2B4))_T3E5=Cyc_Tcutil_normalize_effect(_T2B4);*_T2AF= _T3E5;});goto _TL207;_TL206: _TL207: goto _TL205;
# 1300
_TL204:{struct Cyc_List_List*effect;effect= _cycalloc(sizeof(struct Cyc_List_List));_T2B5= effect;_T2B5->hd= Cyc_Absyn_heap_rgn_type;_T2B6= effect;_T2B6->tl= 0;_T2B7= new_env;{
# 1305
struct Cyc_List_List*tvs=_T2B7.free_vars;_TL20C: if(tvs!=0)goto _TL20A;else{goto _TL20B;}
_TL20A: _T2B8= tvs;_T2B9= _T2B8->hd;_T2BA= (struct _tuple15*)_T2B9;{struct _tuple15 _T3E5=*_T2BA;long _T3E6;struct Cyc_Absyn_Tvar*_T3E7;_T3E7= _T3E5.f0;_T3E6= _T3E5.f1;{struct Cyc_Absyn_Tvar*tv=_T3E7;long put_in_eff=_T3E6;_T2BB= put_in_eff;
if(_T2BB)goto _TL20D;else{goto _TL20F;}
_TL20F: goto _TL209;_TL20D: _T2BC= tv;_T2BD= _T2BC->kind;{
void*_T3E8=Cyc_Kinds_compress_kb(_T2BD);void*_T3E9;_T2BE= (int*)_T3E8;_T2BF= *_T2BE;switch(_T2BF){case 2: _T2C0= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3E8;_T2C1= _T2C0->f2;_T2C2= (struct Cyc_Absyn_Kind*)_T2C1;_T2C3= _T2C2->kind;_T2C4= (int)_T2C3;switch(_T2C4){case Cyc_Absyn_BoolKind: goto _LL8F;case Cyc_Absyn_PtrBndKind: _LL8F: goto _LL91;case Cyc_Absyn_IntKind: _LL91: goto _LL93;case Cyc_Absyn_AqualKind: _LL93: goto _LL95;case Cyc_Absyn_EffKind:{struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T3EA=(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3E8;_T2C5= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3E8;_T2C6= & _T2C5->f1;_T3E9= (struct Cyc_Core_Opt**)_T2C6;}{struct Cyc_Core_Opt**f=_T3E9;_T2C7= f;_T2C8= & Cyc_Kinds_ek;_T2C9= (struct Cyc_Absyn_Kind*)_T2C8;
# 1320
({__typeof__(Cyc_Kinds_kind_to_bound_opt(_T2C9))_T3EA=Cyc_Kinds_kind_to_bound_opt(_T2C9);*_T2C7= _T3EA;});goto _LL9F;}default: goto _LLA2;};case 0: _T2CA= (struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*)_T3E8;_T2CB= _T2CA->f1;_T2CC= (struct Cyc_Absyn_Kind*)_T2CB;_T2CD= _T2CC->kind;_T2CE= (int)_T2CD;switch(_T2CE){case Cyc_Absyn_BoolKind: _LL95: goto _LL97;case Cyc_Absyn_PtrBndKind: _LL97: goto _LL99;case Cyc_Absyn_IntKind: _LL99: goto _LL9B;case Cyc_Absyn_AqualKind: _LL9B: goto _LL8B;case Cyc_Absyn_EffKind: _LL9F:{struct Cyc_List_List*_T3EA=_cycalloc(sizeof(struct Cyc_List_List));
# 1323
({__typeof__(Cyc_Absyn_var_type(tv))_T3EB=Cyc_Absyn_var_type(tv);_T3EA->hd= _T3EB;});_T3EA->tl= effect;_T2CF= (struct Cyc_List_List*)_T3EA;}effect= _T2CF;goto _LL8B;default: _LLA2: _LLA3:{struct Cyc_List_List*_T3EA=_cycalloc(sizeof(struct Cyc_List_List));_T2D1= 
# 1331
Cyc_Absyn_var_type(tv);({__typeof__(Cyc_Absyn_regionsof_eff(_T2D1))_T3EB=Cyc_Absyn_regionsof_eff(_T2D1);_T3EA->hd= _T3EB;});_T3EA->tl= effect;_T2D0= (struct Cyc_List_List*)_T3EA;}effect= _T2D0;goto _LL8B;};default:{struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*_T3EA=(struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*)_T3E8;_T2D2= (struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*)_T3E8;_T2D3= & _T2D2->f1;_T3E9= (struct Cyc_Core_Opt**)_T2D3;}{struct Cyc_Core_Opt**f=(struct Cyc_Core_Opt**)_T3E9;_T2D4= f;{struct Cyc_Core_Opt*_T3EA=_cycalloc(sizeof(struct Cyc_Core_Opt));{struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T3EB=_cycalloc(sizeof(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct));_T3EB->tag= 2;
# 1326
_T3EB->f1= 0;_T2D7= & Cyc_Kinds_ak;_T3EB->f2= (struct Cyc_Absyn_Kind*)_T2D7;_T2D6= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3EB;}_T3EA->v= (void*)_T2D6;_T2D5= (struct Cyc_Core_Opt*)_T3EA;}*_T2D4= _T2D5;goto _LLA3;}}_LL8B:;}}}_TL209: _T2D8= tvs;
# 1305
tvs= _T2D8->tl;goto _TL20C;_TL20B:;}_T2D9= new_env;{
# 1336
struct Cyc_List_List*ts=_T2D9.free_evars;_TL216: if(ts!=0)goto _TL214;else{goto _TL215;}
_TL214: _T2DA= ts;_T2DB= _T2DA->hd;_T2DC= (struct _tuple16*)_T2DB;{struct _tuple16 _T3E5=*_T2DC;long _T3E6;void*_T3E7;_T3E7= _T3E5.f0;_T3E6= _T3E5.f1;{void*tv=_T3E7;long put_in_eff=_T3E6;_T2DD= put_in_eff;
if(_T2DD)goto _TL217;else{goto _TL219;}
_TL219: goto _TL213;_TL217: {
struct Cyc_Absyn_Kind*_T3E8=Cyc_Tcutil_type_kind(tv);_T2DE= (struct Cyc_Absyn_Kind*)_T3E8;_T2DF= _T2DE->kind;_T2E0= (int)_T2DF;switch(_T2E0){case Cyc_Absyn_IntKind: goto _LLAB;case Cyc_Absyn_BoolKind: _LLAB: goto _LLAD;case Cyc_Absyn_PtrBndKind: _LLAD: goto _LLAF;case Cyc_Absyn_AqualKind: _LLAF: goto _LLA7;case Cyc_Absyn_EffKind:{struct Cyc_List_List*_T3E9=_cycalloc(sizeof(struct Cyc_List_List));
# 1349
_T3E9->hd= tv;_T3E9->tl= effect;_T2E1= (struct Cyc_List_List*)_T3E9;}effect= _T2E1;goto _LLA7;default:{struct Cyc_List_List*_T3E9=_cycalloc(sizeof(struct Cyc_List_List));
# 1352
({__typeof__(Cyc_Absyn_regionsof_eff(tv))_T3EA=Cyc_Absyn_regionsof_eff(tv);_T3E9->hd= _T3EA;});_T3E9->tl= effect;_T2E2= (struct Cyc_List_List*)_T3E9;}effect= _T2E2;goto _LLA7;}_LLA7:;}}}_TL213: _T2E3= ts;
# 1336
ts= _T2E3->tl;goto _TL216;_TL215:;}_T2E4= eff;
# 1356
({__typeof__(Cyc_Absyn_join_eff(effect))_T3E5=Cyc_Absyn_join_eff(effect);*_T2E4= _T3E5;});}_TL205: _T2E5= btvs;_T2E6= *_T2E5;
# 1362
if(_T2E6==0)goto _TL21B;_T2E7= btvs;{
struct Cyc_List_List*bs=*_T2E7;_TL220: if(bs!=0)goto _TL21E;else{goto _TL21F;}
_TL21E: _T2E8= bs;_T2E9= _T2E8->hd;_T2EA= (struct Cyc_Absyn_Tvar*)_T2E9;_T2EB= _T2EA->kind;{void*_T3E5=Cyc_Kinds_compress_kb(_T2EB);struct Cyc_Absyn_Kind*_T3E6;void*_T3E7;_T2EC= (int*)_T3E5;_T2ED= *_T2EC;switch(_T2ED){case 1:{struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*_T3E8=(struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*)_T3E5;_T2EE= (struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*)_T3E5;_T2EF= & _T2EE->f1;_T3E7= (struct Cyc_Core_Opt**)_T2EF;}{struct Cyc_Core_Opt**f=_T3E7;{struct Cyc_Warn_String_Warn_Warg_struct _T3E8;_T3E8.tag= 0;
# 1366
({__typeof__(_tag_fat("type variable ",sizeof(char),15U))_T3E9=_tag_fat("type variable ",sizeof(char),15U);_T3E8.f1= _T3E9;});_T2F0= _T3E8;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E8=_T2F0;{struct Cyc_Warn_Tvar_Warn_Warg_struct _T3E9;_T3E9.tag= 7;_T2F2= bs;_T2F3= _T2F2->hd;_T3E9.f1= (struct Cyc_Absyn_Tvar*)_T2F3;_T2F1= _T3E9;}{struct Cyc_Warn_Tvar_Warn_Warg_struct _T3E9=_T2F1;{struct Cyc_Warn_String_Warn_Warg_struct _T3EA;_T3EA.tag= 0;({__typeof__(_tag_fat(" unconstrained, assuming boxed",sizeof(char),31U))_T3EB=_tag_fat(" unconstrained, assuming boxed",sizeof(char),31U);_T3EA.f1= _T3EB;});_T2F4= _T3EA;}{struct Cyc_Warn_String_Warn_Warg_struct _T3EA=_T2F4;void*_T3EB[3];_T3EB[0]= & _T3E8;_T3EB[1]= & _T3E9;_T3EB[2]= & _T3EA;_T2F5= loc;_T2F6= _tag_fat(_T3EB,sizeof(void*),3);Cyc_Warn_warn2(_T2F5,_T2F6);}}}_T2F7= f;_T2F8= & Cyc_Kinds_bk;_T2F9= (struct Cyc_Absyn_Kind*)_T2F8;
({__typeof__(Cyc_Kinds_kind_to_bound_opt(_T2F9))_T3E8=Cyc_Kinds_kind_to_bound_opt(_T2F9);*_T2F7= _T3E8;});goto _LLB4;}case 2:{struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T3E8=(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3E5;_T2FA= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3E5;_T2FB= & _T2FA->f1;_T3E7= (struct Cyc_Core_Opt**)_T2FB;_T3E6= _T3E8->f2;}{struct Cyc_Core_Opt**f=(struct Cyc_Core_Opt**)_T3E7;struct Cyc_Absyn_Kind*k=_T3E6;_T2FC= k;_T2FD= (struct Cyc_Absyn_Kind*)_T2FC;_T2FE= _T2FD->kind;_T2FF= (int)_T2FE;switch(_T2FF){case Cyc_Absyn_BoxKind: goto _LLC1;case Cyc_Absyn_MemKind: _LLC1: goto _LLC3;case Cyc_Absyn_AnyKind: _LLC3: _T300= f;_T301= & Cyc_Kinds_bk;_T302= (struct Cyc_Absyn_Kind*)_T301;
# 1374
({__typeof__(Cyc_Kinds_kind_to_bound_opt(_T302))_T3E8=Cyc_Kinds_kind_to_bound_opt(_T302);*_T300= _T3E8;});goto _LLBD;case Cyc_Absyn_EffKind: _T303= f;_T304= & Cyc_Kinds_ek;_T305= (struct Cyc_Absyn_Kind*)_T304;
# 1377
({__typeof__(Cyc_Kinds_kind_to_bound_opt(_T305))_T3E8=Cyc_Kinds_kind_to_bound_opt(_T305);*_T303= _T3E8;});goto _LLBD;default: _T306= f;
# 1380
({__typeof__(Cyc_Kinds_kind_to_bound_opt(k))_T3E8=Cyc_Kinds_kind_to_bound_opt(k);*_T306= _T3E8;});goto _LLBD;}_LLBD: goto _LLB4;}default: _T307= (struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*)_T3E5;_T308= _T307->f1;_T309= (struct Cyc_Absyn_Kind*)_T308;_T30A= _T309->kind;if(_T30A!=Cyc_Absyn_MemKind)goto _TL223;{struct Cyc_Warn_String_Warn_Warg_struct _T3E8;_T3E8.tag= 0;
# 1385
({__typeof__(_tag_fat("functions can't abstract M types",sizeof(char),33U))_T3E9=_tag_fat("functions can't abstract M types",sizeof(char),33U);_T3E8.f1= _T3E9;});_T30B= _T3E8;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E8=_T30B;void*_T3E9[1];_T3E9[0]= & _T3E8;_T30C= loc;_T30D= _tag_fat(_T3E9,sizeof(void*),1);Cyc_Warn_err2(_T30C,_T30D);}goto _LLB4;_TL223: goto _LLB4;}_LLB4:;}_T30E= bs;
# 1363
bs= _T30E->tl;goto _TL220;_TL21F:;}goto _TL21C;_TL21B: _TL21C:{
# 1392
struct Cyc_List_List*(*_T3E5)(struct Cyc_List_List*,struct Cyc_List_List*,struct Cyc_Absyn_Tvar*(*)(struct Cyc_Absyn_Tvar*))=(struct Cyc_List_List*(*)(struct Cyc_List_List*,struct Cyc_List_List*,struct Cyc_Absyn_Tvar*(*)(struct Cyc_Absyn_Tvar*)))Cyc_Tctyp_remove_bound_tvars;_T30F= _T3E5;}_T310= new_env;_T311= _T310.kind_env;_T312= btvs;_T313= *_T312;_T315= Cyc_Core_identity;{struct Cyc_Absyn_Tvar*(*_T3E5)(struct Cyc_Absyn_Tvar*)=(struct Cyc_Absyn_Tvar*(*)(struct Cyc_Absyn_Tvar*))_T315;_T314= _T3E5;}({__typeof__(_T30F(_T311,_T313,_T314))_T3E5=_T30F(_T311,_T313,_T314);env.kind_env= _T3E5;});{
struct Cyc_List_List*(*_T3E5)(struct Cyc_List_List*,struct Cyc_List_List*,struct Cyc_Absyn_Tvar*(*)(struct _tuple15*))=(struct Cyc_List_List*(*)(struct Cyc_List_List*,struct Cyc_List_List*,struct Cyc_Absyn_Tvar*(*)(struct _tuple15*)))Cyc_Tctyp_remove_bound_tvars;_T316= _T3E5;}_T317= new_env;_T318= _T317.free_vars;_T319= btvs;_T31A= *_T319;_T31C= Cyc_Core_fst;{struct Cyc_Absyn_Tvar*(*_T3E5)(struct _tuple15*)=(struct Cyc_Absyn_Tvar*(*)(struct _tuple15*))_T31C;_T31B= _T3E5;}({__typeof__(_T316(_T318,_T31A,_T31B))_T3E5=_T316(_T318,_T31A,_T31B);new_env.free_vars= _T3E5;});_T31D= new_env;{
# 1395
struct Cyc_List_List*tvs=_T31D.free_vars;_TL228: if(tvs!=0)goto _TL226;else{goto _TL227;}
_TL226: _T31E= tvs;_T31F= _T31E->hd;_T320= (struct _tuple15*)_T31F;{struct _tuple15 _T3E5=*_T320;long _T3E6;struct Cyc_Absyn_Tvar*_T3E7;_T3E7= _T3E5.f0;_T3E6= _T3E5.f1;{struct Cyc_Absyn_Tvar*t=_T3E7;long b=_T3E6;_T321= env;_T322= _T321.free_vars;_T323= t;_T324= b;
({__typeof__(Cyc_Tctyp_fast_add_free_tvar_bool(_T322,_T323,_T324))_T3E8=Cyc_Tctyp_fast_add_free_tvar_bool(_T322,_T323,_T324);env.free_vars= _T3E8;});}}_T325= tvs;
# 1395
tvs= _T325->tl;goto _TL228;_TL227:;}_T326= new_env;{
# 1400
struct Cyc_List_List*evs=_T326.free_evars;_TL22C: if(evs!=0)goto _TL22A;else{goto _TL22B;}
_TL22A: _T327= evs;_T328= _T327->hd;_T329= (struct _tuple16*)_T328;{struct _tuple16 _T3E5=*_T329;long _T3E6;void*_T3E7;_T3E7= _T3E5.f0;_T3E6= _T3E5.f1;{void*e=_T3E7;long b=_T3E6;_T32A= env;_T32B= _T32A.free_evars;_T32C= e;_T32D= b;
({__typeof__(Cyc_Tctyp_add_free_evar(_T32B,_T32C,_T32D))_T3E8=Cyc_Tctyp_add_free_evar(_T32B,_T32C,_T32D);env.free_evars= _T3E8;});}}_T32E= evs;
# 1400
evs= _T32E->tl;goto _TL22C;_TL22B:;}_T32F= env;_T330= _T32F.free_qualvars;_T331= (unsigned)_T330;
# 1404
if(!_T331)goto _TL22D;_T332= new_env;{
# 1407
struct Cyc_List_List*it=_T332.free_qualvars;_TL232: if(it!=0)goto _TL230;else{goto _TL231;}
_TL230: _T334= Cyc_List_exists_c;{long(*_T3E5)(long(*)(struct _tuple16*,struct _tuple16*),struct _tuple16*,struct Cyc_List_List*)=(long(*)(long(*)(struct _tuple16*,struct _tuple16*),struct _tuple16*,struct Cyc_List_List*))_T334;_T333= _T3E5;}_T335= it;_T336= _T335->hd;_T337= (struct _tuple16*)_T336;_T338= env;_T339= _T338.free_qualvars;_T33A= _T333(Cyc_Tctyp_cmp_fqv,_T337,_T339);if(_T33A)goto _TL233;else{goto _TL235;}
_TL235:{struct Cyc_List_List*_T3E5=_cycalloc(sizeof(struct Cyc_List_List));_T33C= it;_T33D= _T33C->hd;_T3E5->hd= (struct _tuple16*)_T33D;_T33E= env;_T3E5->tl= _T33E.free_qualvars;_T33B= (struct Cyc_List_List*)_T3E5;}env.free_qualvars= _T33B;goto _TL234;_TL233: _TL234: _T33F= it;
# 1407
it= _T33F->tl;goto _TL232;_TL231:;}goto _TL22E;
# 1412
_TL22D: _T340= new_env;env.free_qualvars= _T340.free_qualvars;_TL22E: goto _LL3;}}}}}}case 7:{struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*_T3E5=(struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*)_T3CC;_T3CE= _T3E5->f1;_T3D9= _T3E5->f2;_T3E4= _T3E5->f3;}{enum Cyc_Absyn_AggrKind k=_T3CE;long is_tuple=_T3D9;struct Cyc_List_List*fs=_T3E4;
# 1417
struct Cyc_List_List*prev_fields=0;
_TL239: if(fs!=0)goto _TL237;else{goto _TL238;}
_TL237: _T341= fs;_T342= _T341->hd;{struct Cyc_Absyn_Aggrfield*_T3E5=(struct Cyc_Absyn_Aggrfield*)_T342;struct Cyc_Absyn_Exp*_T3E6;struct Cyc_List_List*_T3E7;struct Cyc_Absyn_Exp*_T3E8;void*_T3E9;void*_T3EA;struct _fat_ptr*_T3EB;{struct Cyc_Absyn_Aggrfield _T3EC=*_T3E5;_T3EB= _T3EC.name;_T343= & _T3E5->tq;_T3EA= (struct Cyc_Absyn_Tqual*)_T343;_T3E9= _T3EC.type;_T3E8= _T3EC.width;_T3E7= _T3EC.attributes;_T3E6= _T3EC.requires_clause;}{struct _fat_ptr*fn=_T3EB;struct Cyc_Absyn_Tqual*tqp=(struct Cyc_Absyn_Tqual*)_T3EA;void*t=_T3E9;struct Cyc_Absyn_Exp*width=_T3E8;struct Cyc_List_List*atts=_T3E7;struct Cyc_Absyn_Exp*requires_clause=_T3E6;_T345= Cyc_List_mem;{
long(*_T3EC)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*)=(long(*)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*))_T345;_T344= _T3EC;}_T346= Cyc_strptrcmp;_T347= prev_fields;_T348= fn;_T349= _T344(_T346,_T347,_T348);if(!_T349)goto _TL23A;{struct Cyc_Warn_String_Warn_Warg_struct _T3EC;_T3EC.tag= 0;
({__typeof__(_tag_fat("duplicate field ",sizeof(char),17U))_T3ED=_tag_fat("duplicate field ",sizeof(char),17U);_T3EC.f1= _T3ED;});_T34A= _T3EC;}{struct Cyc_Warn_String_Warn_Warg_struct _T3EC=_T34A;{struct Cyc_Warn_String_Warn_Warg_struct _T3ED;_T3ED.tag= 0;_T34C= fn;_T3ED.f1= *_T34C;_T34B= _T3ED;}{struct Cyc_Warn_String_Warn_Warg_struct _T3ED=_T34B;void*_T3EE[2];_T3EE[0]= & _T3EC;_T3EE[1]= & _T3ED;_T34D= loc;_T34E= _tag_fat(_T3EE,sizeof(void*),2);Cyc_Warn_err2(_T34D,_T34E);}}goto _TL23B;_TL23A: _TL23B: _T34F= fn;_T350= *_T34F;_T351= 
_tag_fat("",sizeof(char),1U);_T352= Cyc_strcmp(_T350,_T351);if(_T352==0)goto _TL23C;{struct Cyc_List_List*_T3EC=_cycalloc(sizeof(struct Cyc_List_List));
_T3EC->hd= fn;_T3EC->tl= prev_fields;_T353= (struct Cyc_List_List*)_T3EC;}prev_fields= _T353;goto _TL23D;_TL23C: _TL23D: _T354= env;_T355= & Cyc_Kinds_mk;_T356= (struct Cyc_Absyn_Kind*)_T355;_T357= t;
env= Cyc_Tctyp_i_check_type(_T354,_T356,_T357,1,0);_T358= tqp;_T359= loc;_T35A= tqp;_T35B= _T35A->print_const;_T35C= t;
({__typeof__(Cyc_Tcutil_extract_const_from_typedef(_T359,_T35B,_T35C))_T3EC=Cyc_Tcutil_extract_const_from_typedef(_T359,_T35B,_T35C);_T358->real_const= _T3EC;});
Cyc_Tcutil_check_bitfield(loc,t,width,fn);
Cyc_Atts_check_field_atts(loc,fn,atts);
if(requires_clause==0)goto _TL23E;_T35D= k;_T35E= (int)_T35D;
# 1430
if(_T35E==1)goto _TL240;{struct Cyc_Warn_String_Warn_Warg_struct _T3EC;_T3EC.tag= 0;
({__typeof__(_tag_fat("@requires clause is only allowed on union members",sizeof(char),50U))_T3ED=_tag_fat("@requires clause is only allowed on union members",sizeof(char),50U);_T3EC.f1= _T3ED;});_T35F= _T3EC;}{struct Cyc_Warn_String_Warn_Warg_struct _T3EC=_T35F;void*_T3ED[1];_T3ED[0]= & _T3EC;_T360= loc;_T361= _tag_fat(_T3ED,sizeof(void*),1);Cyc_Warn_err2(_T360,_T361);}goto _TL241;_TL240: _TL241: _T362= ctx;_T363= 
Cyc_Tcenv_allow_valueof(te);_T364= requires_clause;Cyc_Tcexp_tcExp(_T362,_T363,0,_T364);_T365= 
Cyc_Tcutil_is_integral(requires_clause);if(_T365)goto _TL242;else{goto _TL244;}
_TL244:{struct Cyc_Warn_String_Warn_Warg_struct _T3EC;_T3EC.tag= 0;({__typeof__(_tag_fat("@requires clause has type ",sizeof(char),27U))_T3ED=_tag_fat("@requires clause has type ",sizeof(char),27U);_T3EC.f1= _T3ED;});_T366= _T3EC;}{struct Cyc_Warn_String_Warn_Warg_struct _T3EC=_T366;{struct Cyc_Warn_TypOpt_Warn_Warg_struct _T3ED;_T3ED.tag= 3;_T368= requires_clause;_T3ED.f1= _T368->topt;_T367= _T3ED;}{struct Cyc_Warn_TypOpt_Warn_Warg_struct _T3ED=_T367;{struct Cyc_Warn_String_Warn_Warg_struct _T3EE;_T3EE.tag= 0;
({__typeof__(_tag_fat(" instead of integral type",sizeof(char),26U))_T3EF=_tag_fat(" instead of integral type",sizeof(char),26U);_T3EE.f1= _T3EF;});_T369= _T3EE;}{struct Cyc_Warn_String_Warn_Warg_struct _T3EE=_T369;void*_T3EF[3];_T3EF[0]= & _T3EC;_T3EF[1]= & _T3ED;_T3EF[2]= & _T3EE;_T36A= loc;_T36B= _tag_fat(_T3EF,sizeof(void*),3);Cyc_Warn_err2(_T36A,_T36B);}}}goto _TL243;_TL242: _TL243:
 env= Cyc_Tctyp_i_check_type_level_exp(requires_clause,env);goto _TL23F;_TL23E: _TL23F:;}}_T36C= fs;
# 1418
fs= _T36C->tl;goto _TL239;_TL238: goto _LL3;}case 12:{struct Cyc_Absyn_SubsetType_Absyn_Type_struct*_T3E5=(struct Cyc_Absyn_SubsetType_Absyn_Type_struct*)_T3CC;_T3E4= _T3E5->f1;_T3E3= _T3E5->f2;_T36D= (struct Cyc_Absyn_SubsetType_Absyn_Type_struct*)_T3CC;_T36E= & _T36D->f3;_T3E1= (struct Cyc_AssnDef_ExistAssnFn**)_T36E;}{struct Cyc_Absyn_Vardecl*vd=_T3E4;struct Cyc_Absyn_Exp*e=_T3E3;struct Cyc_AssnDef_ExistAssnFn**a=_T3E1;_T36F= env;_T370= expected_kind;_T371= vd;_T372= _T371->type;_T373= put_in_effect;_T374= allow_abs_aggr;
# 1442
env= Cyc_Tctyp_i_check_type(_T36F,_T370,_T372,_T373,_T374);{
struct Cyc_List_List*args;args= _cycalloc(sizeof(struct Cyc_List_List));_T375= args;{struct _tuple9*_T3E5=_cycalloc(sizeof(struct _tuple9));_T377= vd;_T378= _T377->name;
_T3E5->f0= _T378->f1;_T379= vd;_T3E5->f1= _T379->tq;_T37A= vd;_T3E5->f2= _T37A->type;_T376= (struct _tuple9*)_T3E5;}_T375->hd= _T376;_T37B= args;_T37B->tl= 0;{
struct Cyc_Tcenv_Fenv*fenv=Cyc_Tcenv_bogus_fenv(Cyc_Absyn_void_type,args);_T37C= env;{
struct Cyc_Tcenv_Tenv*old_te=_T37C.te;{struct Cyc_Tcenv_Tenv*_T3E5=_cycalloc(sizeof(struct Cyc_Tcenv_Tenv));_T37E= te;
_T3E5->ns= _T37E->ns;_T37F= te;
_T3E5->ae= _T37F->ae;
_T3E5->le= fenv;
_T3E5->allow_valueof= 1;_T380= te;
_T3E5->in_extern_c_include= _T380->in_extern_c_include;_T381= te;
_T3E5->in_tempest= _T381->in_tempest;_T382= te;
_T3E5->tempest_generalize= _T382->tempest_generalize;_T383= te;
_T3E5->in_extern_c_inc_repeat= _T383->in_extern_c_inc_repeat;_T37D= (struct Cyc_Tcenv_Tenv*)_T3E5;}
# 1447
env.te= _T37D;{
# 1455
struct Cyc_List_List*vds;vds= _cycalloc(sizeof(struct Cyc_List_List));_T384= vds;_T384->hd= vd;_T385= vds;_T385->tl= 0;_T386= 
Cyc_Tctyp_ok_as_assn(e);if(_T386)goto _TL245;else{goto _TL247;}
_TL247:{struct Cyc_Warn_String_Warn_Warg_struct _T3E5;_T3E5.tag= 0;
# 1459
({__typeof__(_tag_fat("@subset predicate is not a valid assertion\n\t[may access memory or throw exception]",sizeof(char),83U))_T3E6=_tag_fat("@subset predicate is not a valid assertion\n\t[may access memory or throw exception]",sizeof(char),83U);_T3E5.f1= _T3E6;});_T387= _T3E5;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E5=_T387;void*_T3E6[1];_T3E6[0]= & _T3E5;_T388= e;_T389= _T388->loc;_T38A= _tag_fat(_T3E6,sizeof(void*),1);Cyc_Warn_err2(_T389,_T38A);}goto _TL246;_TL245: _TL246: _T38B= env;_T38C= 
_tag_fat("@subset",sizeof(char),8U);_T38D= e;{struct _tuple17 _T3E5=Cyc_Tctyp_check_clause(_T38B,_T38C,_T38D);struct Cyc_AssnDef_AssnMap _T3E6;struct Cyc_Tctyp_CVTEnv _T3E7;_T3E7= _T3E5.f0;_T3E6= _T3E5.f1;{struct Cyc_Tctyp_CVTEnv nenv=_T3E7;struct Cyc_AssnDef_AssnMap assn=_T3E6;
env= nenv;_T38E= a;
({__typeof__(Cyc_AssnDef_assnmap2existassnfn(assn,vds))_T3E8=Cyc_AssnDef_assnmap2existassnfn(assn,vds);*_T38E= _T3E8;});
env.te= old_te;goto _LL3;}}}}}}}default:{struct Cyc_Absyn_TypedefType_Absyn_Type_struct*_T3E5=(struct Cyc_Absyn_TypedefType_Absyn_Type_struct*)_T3CC;_T3CD= _T3E5->f1;_T38F= (struct Cyc_Absyn_TypedefType_Absyn_Type_struct*)_T3CC;_T390= & _T38F->f2;_T3E4= (struct Cyc_List_List**)_T390;_T391= (struct Cyc_Absyn_TypedefType_Absyn_Type_struct*)_T3CC;_T392= & _T391->f3;_T3E3= (struct Cyc_Absyn_Typedefdecl**)_T392;_T393= (struct Cyc_Absyn_TypedefType_Absyn_Type_struct*)_T3CC;_T394= & _T393->f4;_T3E1= (void**)_T394;}{struct _tuple1*tdn=_T3CD;struct Cyc_List_List**targs_ref=(struct Cyc_List_List**)_T3E4;struct Cyc_Absyn_Typedefdecl**tdopt=(struct Cyc_Absyn_Typedefdecl**)_T3E3;void**toptp=(void**)_T3E1;
# 1468
struct Cyc_Absyn_Typedefdecl*td;{struct _handler_cons _T3E5;_T395= & _T3E5;_push_handler(_T395);{int _T3E6=0;_T396= setjmp(_T3E5.handler);if(!_T396)goto _TL248;_T3E6= 1;goto _TL249;_TL248: _TL249: if(_T3E6)goto _TL24A;else{goto _TL24C;}_TL24C:
# 1470
 td= Cyc_Tcenv_lookup_typedefdecl(te,loc,tdn);_pop_handler();goto _TL24B;_TL24A: _T397= Cyc_Core_get_exn_thrown();{void*_T3E7=(void*)_T397;void*_T3E8;_T398= (struct Cyc_Dict_Absent_exn_struct*)_T3E7;_T399= _T398->tag;_T39A= Cyc_Dict_Absent;if(_T399!=_T39A)goto _TL24D;{struct Cyc_Warn_String_Warn_Warg_struct _T3E9;_T3E9.tag= 0;
# 1473
({__typeof__(_tag_fat("unbound typedef name ",sizeof(char),22U))_T3EA=_tag_fat("unbound typedef name ",sizeof(char),22U);_T3E9.f1= _T3EA;});_T39B= _T3E9;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E9=_T39B;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T3EA;_T3EA.tag= 1;_T3EA.f1= tdn;_T39C= _T3EA;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T3EA=_T39C;void*_T3EB[2];_T3EB[0]= & _T3E9;_T3EB[1]= & _T3EA;_T39D= loc;_T39E= _tag_fat(_T3EB,sizeof(void*),2);Cyc_Warn_err2(_T39D,_T39E);}}_T39F= env;
return _T39F;_TL24D: _T3E8= _T3E7;{void*exn=_T3E8;_rethrow(exn);};}_TL24B:;}}_T3A0= tdopt;
# 1476
*_T3A0= td;_T3A1= env;_T3A2= targs_ref;_T3A3= td;_T3A4= _T3A3->tvs;_T3A5= expected_kind;_T3A6= allow_abs_aggr;_T3A7= tdn;_T3A8= td;
env= Cyc_Tctyp_check_type_inst(_T3A1,_T3A2,_T3A4,_T3A5,_T3A6,_T3A7,_T3A8);_T3A9= td;_T3AA= _T3A9->defn;
if(_T3AA==0)goto _TL24F;_T3AB= loc;_T3AC= td;_T3AD= _T3AC->defn;_T3AE= expected_kind;
Cyc_Tctyp_check_constrain_ptrbnd(_T3AB,_T3AD,_T3AE);{
struct Cyc_List_List*inst=0;_T3AF= td;{
struct Cyc_List_List*tvs=_T3AF->tvs;_T3B0= targs_ref;{
struct Cyc_List_List*ts=*_T3B0;
_TL254: if(tvs!=0)goto _TL252;else{goto _TL253;}
_TL252:{struct Cyc_List_List*_T3E5=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple19*_T3E6=_cycalloc(sizeof(struct _tuple19));_T3B3= tvs;_T3B4= _T3B3->hd;_T3E6->f0= (struct Cyc_Absyn_Tvar*)_T3B4;_T3B5= _check_null(ts);_T3E6->f1= _T3B5->hd;_T3B2= (struct _tuple19*)_T3E6;}_T3E5->hd= _T3B2;_T3E5->tl= inst;_T3B1= (struct Cyc_List_List*)_T3E5;}inst= _T3B1;_T3B6= tvs;
# 1483
tvs= _T3B6->tl;_T3B7= ts;ts= _T3B7->tl;goto _TL254;_TL253: _T3B8= toptp;_T3B9= inst;_T3BA= td;_T3BB= _T3BA->defn;_T3BC= 
# 1485
_check_null(_T3BB);({__typeof__(Cyc_Tcutil_substitute(_T3B9,_T3BC))_T3E5=Cyc_Tcutil_substitute(_T3B9,_T3BC);*_T3B8= _T3E5;});}}}goto _TL250;_TL24F: _TL250: goto _LL3;}}_LL3:;}_T3BD= 
# 1489
Cyc_Tcutil_type_kind(t);_T3BE= expected_kind;_T3BF= Cyc_Kinds_kind_leq(_T3BD,_T3BE);if(_T3BF)goto _TL255;else{goto _TL257;}
_TL257:{struct Cyc_Warn_String_Warn_Warg_struct _T3CC;_T3CC.tag= 0;({__typeof__(_tag_fat("type ",sizeof(char),6U))_T3CD=_tag_fat("type ",sizeof(char),6U);_T3CC.f1= _T3CD;});_T3C0= _T3CC;}{struct Cyc_Warn_String_Warn_Warg_struct _T3CC=_T3C0;{struct Cyc_Warn_Typ_Warn_Warg_struct _T3CD;_T3CD.tag= 2;_T3CD.f1= t;_T3C1= _T3CD;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T3CD=_T3C1;{struct Cyc_Warn_String_Warn_Warg_struct _T3CE;_T3CE.tag= 0;({__typeof__(_tag_fat(" has kind ",sizeof(char),11U))_T3CF=_tag_fat(" has kind ",sizeof(char),11U);_T3CE.f1= _T3CF;});_T3C2= _T3CE;}{struct Cyc_Warn_String_Warn_Warg_struct _T3CE=_T3C2;{struct Cyc_Warn_Kind_Warn_Warg_struct _T3CF;_T3CF.tag= 9;({__typeof__(Cyc_Tcutil_type_kind(t))_T3D0=Cyc_Tcutil_type_kind(t);_T3CF.f1= _T3D0;});_T3C3= _T3CF;}{struct Cyc_Warn_Kind_Warn_Warg_struct _T3CF=_T3C3;{struct Cyc_Warn_String_Warn_Warg_struct _T3D0;_T3D0.tag= 0;({__typeof__(_tag_fat(" but as used here needs kind ",sizeof(char),30U))_T3D1=_tag_fat(" but as used here needs kind ",sizeof(char),30U);_T3D0.f1= _T3D1;});_T3C4= _T3D0;}{struct Cyc_Warn_String_Warn_Warg_struct _T3D0=_T3C4;{struct Cyc_Warn_Kind_Warn_Warg_struct _T3D1;_T3D1.tag= 9;
_T3D1.f1= expected_kind;_T3C5= _T3D1;}{struct Cyc_Warn_Kind_Warn_Warg_struct _T3D1=_T3C5;void*_T3D2[6];_T3D2[0]= & _T3CC;_T3D2[1]= & _T3CD;_T3D2[2]= & _T3CE;_T3D2[3]= & _T3CF;_T3D2[4]= & _T3D0;_T3D2[5]= & _T3D1;_T3C6= loc;_T3C7= _tag_fat(_T3D2,sizeof(void*),6);Cyc_Warn_err2(_T3C6,_T3C7);}}}}}}goto _TL256;_TL255: _TL256: _T3C8= env;
# 1493
return _T3C8;}}
# 1496
static struct Cyc_Tctyp_CVTEnv Cyc_Tctyp_check_valid_type(struct Cyc_Tctyp_CVTEnv cvt,struct Cyc_Absyn_Kind*expected_kind,long allow_abs_aggr,void*t){struct Cyc_Tctyp_CVTEnv _T0;struct Cyc_Tctyp_CVTEnv _T1;struct Cyc_List_List*_T2;struct Cyc_List_List*_T3;void*_T4;struct _tuple15*_T5;struct _tuple15 _T6;struct Cyc_Absyn_Tvar*_T7;struct Cyc_List_List*_T8;struct Cyc_Tctyp_CVTEnv _T9;struct Cyc_List_List*_TA;void*_TB;struct _tuple16*_TC;int*_TD;int _TE;struct Cyc_Absyn_Evar_Absyn_Type_struct*_TF;struct Cyc_Core_Opt**_T10;struct Cyc_Core_Opt**_T11;struct Cyc_Core_Opt*_T12;struct Cyc_Core_Opt**_T13;struct Cyc_Core_Opt*_T14;struct Cyc_Core_Opt**_T15;struct Cyc_Core_Opt*_T16;void*_T17;long(*_T18)(int(*)(struct Cyc_Absyn_Tvar*,struct Cyc_Absyn_Tvar*),struct Cyc_List_List*,struct Cyc_Absyn_Tvar*);long(*_T19)(int(*)(void*,void*),struct Cyc_List_List*,void*);int(*_T1A)(struct Cyc_Absyn_Tvar*,struct Cyc_Absyn_Tvar*);struct Cyc_List_List*_T1B;struct Cyc_List_List*_T1C;void*_T1D;struct Cyc_Absyn_Tvar*_T1E;long _T1F;struct Cyc_List_List*_T20;struct Cyc_List_List*_T21;void*_T22;struct Cyc_List_List*_T23;struct Cyc_Core_Opt**_T24;struct Cyc_Core_Opt*_T25;struct Cyc_List_List*_T26;struct Cyc_Tctyp_CVTEnv _T27;_T0= cvt;{
# 1498
struct Cyc_List_List*kind_env=_T0.kind_env;
cvt= Cyc_Tctyp_i_check_type(cvt,expected_kind,t,1,allow_abs_aggr);_T1= cvt;{
# 1501
struct Cyc_List_List*vs=_T1.free_vars;_TL25B: if(vs!=0)goto _TL259;else{goto _TL25A;}
_TL259: _T2= kind_env;_T3= vs;_T4= _T3->hd;_T5= (struct _tuple15*)_T4;_T6= *_T5;_T7= _T6.f0;({__typeof__(Cyc_Tctyp_fast_add_free_tvar(_T2,_T7))_T28=Cyc_Tctyp_fast_add_free_tvar(_T2,_T7);cvt.kind_env= _T28;});_T8= vs;
# 1501
vs= _T8->tl;goto _TL25B;_TL25A:;}_T9= cvt;{
# 1507
struct Cyc_List_List*evs=_T9.free_evars;_TL25F: if(evs!=0)goto _TL25D;else{goto _TL25E;}
_TL25D: _TA= evs;_TB= _TA->hd;_TC= (struct _tuple16*)_TB;{struct _tuple16 _T28=*_TC;void*_T29;_T29= _T28.f0;{void*e=_T29;
void*_T2A=Cyc_Absyn_compress(e);void*_T2B;_TD= (int*)_T2A;_TE= *_TD;if(_TE!=1)goto _TL260;{struct Cyc_Absyn_Evar_Absyn_Type_struct*_T2C=(struct Cyc_Absyn_Evar_Absyn_Type_struct*)_T2A;_TF= (struct Cyc_Absyn_Evar_Absyn_Type_struct*)_T2A;_T10= & _TF->f4;_T2B= (struct Cyc_Core_Opt**)_T10;}{struct Cyc_Core_Opt**s=(struct Cyc_Core_Opt**)_T2B;_T11= s;_T12= *_T11;
# 1511
if(_T12!=0)goto _TL262;_T13= s;{struct Cyc_Core_Opt*_T2C=_cycalloc(sizeof(struct Cyc_Core_Opt));
_T2C->v= kind_env;_T14= (struct Cyc_Core_Opt*)_T2C;}*_T13= _T14;goto _TL263;
# 1515
_TL262:{struct Cyc_List_List*result=0;_T15= s;_T16= *_T15;_T17= _T16->v;{
struct Cyc_List_List*tvs=(struct Cyc_List_List*)_T17;_TL267: if(tvs!=0)goto _TL265;else{goto _TL266;}
_TL265: _T19= Cyc_List_mem;{long(*_T2C)(int(*)(struct Cyc_Absyn_Tvar*,struct Cyc_Absyn_Tvar*),struct Cyc_List_List*,struct Cyc_Absyn_Tvar*)=(long(*)(int(*)(struct Cyc_Absyn_Tvar*,struct Cyc_Absyn_Tvar*),struct Cyc_List_List*,struct Cyc_Absyn_Tvar*))_T19;_T18= _T2C;}_T1A= Cyc_Tcutil_fast_tvar_cmp;_T1B= kind_env;_T1C= tvs;_T1D= _T1C->hd;_T1E= (struct Cyc_Absyn_Tvar*)_T1D;_T1F= _T18(_T1A,_T1B,_T1E);if(!_T1F)goto _TL268;{struct Cyc_List_List*_T2C=_cycalloc(sizeof(struct Cyc_List_List));_T21= tvs;_T22= _T21->hd;
_T2C->hd= (struct Cyc_Absyn_Tvar*)_T22;_T2C->tl= result;_T20= (struct Cyc_List_List*)_T2C;}result= _T20;goto _TL269;_TL268: _TL269: _T23= tvs;
# 1516
tvs= _T23->tl;goto _TL267;_TL266:;}_T24= s;{struct Cyc_Core_Opt*_T2C=_cycalloc(sizeof(struct Cyc_Core_Opt));
# 1519
_T2C->v= result;_T25= (struct Cyc_Core_Opt*)_T2C;}*_T24= _T25;}_TL263: goto _LL3;}_TL260: goto _LL3;_LL3:;}}_T26= evs;
# 1507
evs= _T26->tl;goto _TL25F;_TL25E:;}_T27= cvt;
# 1526
return _T27;}}
# 1533
void Cyc_Tctyp_check_valid_toplevel_type(struct Cyc_Tc_TcContext*ctx,unsigned loc,struct Cyc_Tcenv_Tenv*te,void*t){int _T0;long _T1;int _T2;struct Cyc_Tcenv_Tenv*_T3;long _T4;struct Cyc_Tcenv_Tenv*_T5;struct Cyc_Absyn_Kind*_T6;long _T7;struct Cyc_Absyn_Kind*_T8;struct Cyc_Absyn_Kind*_T9;struct Cyc_Tctyp_CVTEnv _TA;struct Cyc_Absyn_Kind*_TB;void*_TC;struct Cyc_List_List*(*_TD)(struct Cyc_Absyn_Tvar*(*)(struct _tuple15*),struct Cyc_List_List*);struct Cyc_List_List*(*_TE)(void*(*)(void*),struct Cyc_List_List*);struct Cyc_Absyn_Tvar*(*_TF)(struct _tuple15*);void*(*_T10)(struct _tuple0*);struct Cyc_Tctyp_CVTEnv _T11;struct Cyc_List_List*_T12;struct Cyc_Tctyp_CVTEnv _T13;struct Cyc_Tctyp_CVTEnv _T14;struct Cyc_List_List*_T15;unsigned _T16;struct Cyc_List_List*_T17;void*_T18;struct Cyc_Absyn_Tvar*_T19;struct Cyc_List_List*_T1A;void*_T1B;struct Cyc_Absyn_Tvar*_T1C;int _T1D;struct Cyc_List_List*_T1E;struct Cyc_List_List*_T1F;struct Cyc_List_List*_T20;void*_T21;struct Cyc_List_List*_T22;struct Cyc_List_List*_T23;void*_T24;struct Cyc_Absyn_Tvar*_T25;void*_T26;int*_T27;unsigned _T28;struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*_T29;struct Cyc_Core_Opt**_T2A;struct Cyc_Core_Opt**_T2B;struct Cyc_Absyn_Kind*_T2C;struct Cyc_Absyn_Kind*_T2D;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T2E;struct Cyc_Core_Opt**_T2F;struct Cyc_Absyn_Kind*_T30;struct Cyc_Absyn_Kind*_T31;enum Cyc_Absyn_KindQual _T32;int _T33;struct Cyc_Core_Opt**_T34;struct Cyc_Absyn_Kind*_T35;struct Cyc_Absyn_Kind*_T36;struct Cyc_Core_Opt**_T37;struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*_T38;struct Cyc_Absyn_Kind*_T39;struct Cyc_Absyn_Kind*_T3A;enum Cyc_Absyn_KindQual _T3B;struct Cyc_Absyn_Kind*_T3C;struct Cyc_Warn_String_Warn_Warg_struct _T3D;struct Cyc_Warn_Tvar_Warn_Warg_struct _T3E;struct Cyc_List_List*_T3F;void*_T40;struct Cyc_Warn_String_Warn_Warg_struct _T41;struct Cyc_Warn_Kind_Warn_Warg_struct _T42;struct Cyc_Absyn_Kind*_T43;unsigned _T44;struct _fat_ptr _T45;struct Cyc_List_List*_T46;int*_T47;int _T48;struct Cyc_Absyn_FnType_Absyn_Type_struct*_T49;struct Cyc_List_List**_T4A;struct Cyc_Absyn_FnType_Absyn_Type_struct*_T4B;struct Cyc_List_List**_T4C;unsigned _T4D;struct Cyc_Tctyp_CVTEnv _T4E;struct Cyc_List_List*(*_T4F)(struct _tuple15*(*)(long,struct Cyc_Absyn_Tvar*),long,struct Cyc_List_List*);struct Cyc_List_List*(*_T50)(void*(*)(void*,void*),void*,struct Cyc_List_List*);struct _tuple15*(*_T51)(long,struct Cyc_Absyn_Tvar*);struct Cyc_List_List**_T52;struct Cyc_List_List*_T53;struct Cyc_List_List*_T54;struct Cyc_List_List**_T55;void*_T56;struct Cyc_List_List**_T57;struct Cyc_List_List*_T58;struct Cyc_List_List**_T59;struct Cyc_List_List*(*_T5A)(long(*)(struct Cyc_Absyn_Tvar*),struct Cyc_List_List*);struct Cyc_List_List*(*_T5B)(long(*)(void*),struct Cyc_List_List*);long(*_T5C)(struct Cyc_Absyn_Tvar*);struct Cyc_List_List*_T5D;struct Cyc_Warn_String_Warn_Warg_struct _T5E;struct Cyc_Warn_Tvar_Warn_Warg_struct _T5F;struct Cyc_List_List*_T60;void*_T61;struct Cyc_Warn_String_Warn_Warg_struct _T62;struct Cyc_Warn_Typ_Warn_Warg_struct _T63;unsigned _T64;struct _fat_ptr _T65;long _T66;struct Cyc_Tcenv_Tenv*_T67;long _T68;int*_T69;int _T6A;struct Cyc_Absyn_FnInfo _T6B;long(*_T6C)(long(*)(struct Cyc_Absyn_Tvar*),struct Cyc_List_List*);long(*_T6D)(long(*)(void*),struct Cyc_List_List*);long(*_T6E)(struct Cyc_Absyn_Tvar*);struct Cyc_List_List*_T6F;long _T70;struct Cyc_Warn_String_Warn_Warg_struct _T71;struct Cyc_Warn_String_Warn_Warg_struct _T72;struct Cyc_Warn_String_Warn_Warg_struct _T73;struct Cyc_Warn_Typ_Warn_Warg_struct _T74;unsigned _T75;struct _fat_ptr _T76;_T1= 
Cyc_Tcutil_is_function_type(t);if(!_T1)goto _TL26A;_T3= te;_T4= _T3->in_tempest;if(_T4)goto _TL26C;else{goto _TL26E;}_TL26E: _T2= 1;goto _TL26D;_TL26C: _T5= te;_T2= _T5->tempest_generalize;_TL26D: _T0= _T2;goto _TL26B;_TL26A: _T0= 0;_TL26B: {long generalize_evars=_T0;_T7= 
Cyc_Tcutil_is_function_type(t);if(!_T7)goto _TL26F;_T8= & Cyc_Kinds_ak;_T6= (struct Cyc_Absyn_Kind*)_T8;goto _TL270;_TL26F: _T9= & Cyc_Kinds_mk;_T6= (struct Cyc_Absyn_Kind*)_T9;_TL270: {struct Cyc_Absyn_Kind*expected_kind=_T6;
struct Cyc_List_List*te_vars=Cyc_Tcenv_lookup_type_vars(te);{struct Cyc_Tctyp_CVTEnv _T77;
# 1538
_T77.ctx= ctx;_T77.loc= loc;_T77.te= te;_T77.kind_env= te_vars;_T77.fn_result= 0;_T77.def_aliasable= 0;_T77.inst_type_evar= 0;_T77.generalize_evars= generalize_evars;_T77.allow_aqual_bounds= 1;_T77.free_vars= 0;_T77.free_evars= 0;_T77.free_qualvars= 0;_TA= _T77;}_TB= expected_kind;_TC= t;{
# 1537
struct Cyc_Tctyp_CVTEnv cvt=Cyc_Tctyp_check_valid_type(_TA,_TB,1,_TC);_TE= Cyc_List_map;{
# 1540
struct Cyc_List_List*(*_T77)(struct Cyc_Absyn_Tvar*(*)(struct _tuple15*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct Cyc_Absyn_Tvar*(*)(struct _tuple15*),struct Cyc_List_List*))_TE;_TD= _T77;}_T10= Cyc_Core_fst;{struct Cyc_Absyn_Tvar*(*_T77)(struct _tuple15*)=(struct Cyc_Absyn_Tvar*(*)(struct _tuple15*))_T10;_TF= _T77;}_T11= cvt;_T12= _T11.free_vars;{struct Cyc_List_List*free_tvars=_TD(_TF,_T12);_T13= cvt;{
struct Cyc_List_List*free_evars=_T13.free_evars;_T14= cvt;{
struct Cyc_List_List*free_qualvars=_T14.free_qualvars;
# 1544
if(te_vars==0)goto _TL271;{
struct Cyc_List_List*res=0;{
struct Cyc_List_List*fs=free_tvars;_TL276: _T15= fs;_T16= (unsigned)_T15;if(_T16)goto _TL274;else{goto _TL275;}
_TL274:{struct Cyc_List_List*ts=te_vars;
_TL27A: if(ts!=0)goto _TL278;else{goto _TL279;}
_TL278: _T17= fs;_T18= _T17->hd;_T19= (struct Cyc_Absyn_Tvar*)_T18;_T1A= ts;_T1B= _T1A->hd;_T1C= (struct Cyc_Absyn_Tvar*)_T1B;_T1D= Cyc_Absyn_tvar_cmp(_T19,_T1C);if(_T1D!=0)goto _TL27B;goto _TL279;_TL27B: _T1E= ts;
# 1548
ts= _T1E->tl;goto _TL27A;_TL279:
# 1551
 if(ts!=0)goto _TL27D;{struct Cyc_List_List*_T77=_cycalloc(sizeof(struct Cyc_List_List));_T20= fs;_T21= _T20->hd;
_T77->hd= (struct Cyc_Absyn_Tvar*)_T21;_T77->tl= res;_T1F= (struct Cyc_List_List*)_T77;}res= _T1F;goto _TL27E;_TL27D: _TL27E:;}_T22= fs;
# 1546
fs= _T22->tl;goto _TL276;_TL275:;}
# 1554
free_tvars= Cyc_List_imp_rev(res);}goto _TL272;_TL271: _TL272:{
# 1559
struct Cyc_List_List*x=free_tvars;_TL282: if(x!=0)goto _TL280;else{goto _TL281;}
_TL280: _T23= x;_T24= _T23->hd;_T25= (struct Cyc_Absyn_Tvar*)_T24;_T26= _T25->kind;{void*_T77=Cyc_Kinds_compress_kb(_T26);enum Cyc_Absyn_AliasHint _T78;struct Cyc_Absyn_Kind*_T79;void*_T7A;_T27= (int*)_T77;_T28= *_T27;switch(_T28){case 1:{struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*_T7B=(struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*)_T77;_T29= (struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*)_T77;_T2A= & _T29->f1;_T7A= (struct Cyc_Core_Opt**)_T2A;}{struct Cyc_Core_Opt**f=_T7A;_T2B= f;_T2C= & Cyc_Kinds_bk;_T2D= (struct Cyc_Absyn_Kind*)_T2C;
# 1562
({__typeof__(Cyc_Kinds_kind_to_bound_opt(_T2D))_T7B=Cyc_Kinds_kind_to_bound_opt(_T2D);*_T2B= _T7B;});goto _LL0;}case 2:{struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T7B=(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T77;_T2E= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T77;_T2F= & _T2E->f1;_T7A= (struct Cyc_Core_Opt**)_T2F;_T79= _T7B->f2;}{struct Cyc_Core_Opt**f=(struct Cyc_Core_Opt**)_T7A;struct Cyc_Absyn_Kind*k=_T79;_T30= k;_T31= (struct Cyc_Absyn_Kind*)_T30;_T32= _T31->kind;_T33= (int)_T32;switch(_T33){case Cyc_Absyn_BoxKind: goto _LLD;case Cyc_Absyn_MemKind: _LLD: _T34= f;_T35= & Cyc_Kinds_bk;_T36= (struct Cyc_Absyn_Kind*)_T35;
# 1568
({__typeof__(Cyc_Kinds_kind_to_bound_opt(_T36))_T7B=Cyc_Kinds_kind_to_bound_opt(_T36);*_T34= _T7B;});goto _LL9;default: _T37= f;
# 1571
({__typeof__(Cyc_Kinds_kind_to_bound_opt(k))_T7B=Cyc_Kinds_kind_to_bound_opt(k);*_T37= _T7B;});goto _LL9;}_LL9: goto _LL0;}default: _T38= (struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*)_T77;_T39= _T38->f1;_T3A= (struct Cyc_Absyn_Kind*)_T39;_T3B= _T3A->kind;if(_T3B!=Cyc_Absyn_MemKind)goto _TL285;{struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*_T7B=(struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*)_T77;_T3C= _T7B->f1;{struct Cyc_Absyn_Kind _T7C=*_T3C;_T78= _T7C.aliashint;}}{enum Cyc_Absyn_AliasHint a=_T78;{struct Cyc_Warn_String_Warn_Warg_struct _T7B;_T7B.tag= 0;
# 1576
({__typeof__(_tag_fat("type variable ",sizeof(char),15U))_T7C=_tag_fat("type variable ",sizeof(char),15U);_T7B.f1= _T7C;});_T3D= _T7B;}{struct Cyc_Warn_String_Warn_Warg_struct _T7B=_T3D;{struct Cyc_Warn_Tvar_Warn_Warg_struct _T7C;_T7C.tag= 7;_T3F= x;_T40= _T3F->hd;_T7C.f1= (struct Cyc_Absyn_Tvar*)_T40;_T3E= _T7C;}{struct Cyc_Warn_Tvar_Warn_Warg_struct _T7C=_T3E;{struct Cyc_Warn_String_Warn_Warg_struct _T7D;_T7D.tag= 0;({__typeof__(_tag_fat(" cannot have kind ",sizeof(char),19U))_T7E=_tag_fat(" cannot have kind ",sizeof(char),19U);_T7D.f1= _T7E;});_T41= _T7D;}{struct Cyc_Warn_String_Warn_Warg_struct _T7D=_T41;{struct Cyc_Warn_Kind_Warn_Warg_struct _T7E;_T7E.tag= 9;{struct Cyc_Absyn_Kind*_T7F=_cycalloc(sizeof(struct Cyc_Absyn_Kind));_T7F->kind= 1U;_T7F->aliashint= a;_T43= (struct Cyc_Absyn_Kind*)_T7F;}_T7E.f1= _T43;_T42= _T7E;}{struct Cyc_Warn_Kind_Warn_Warg_struct _T7E=_T42;void*_T7F[4];_T7F[0]= & _T7B;_T7F[1]= & _T7C;_T7F[2]= & _T7D;_T7F[3]= & _T7E;_T44= loc;_T45= _tag_fat(_T7F,sizeof(void*),4);Cyc_Warn_err2(_T44,_T45);}}}}goto _LL0;}_TL285: goto _LL0;}_LL0:;}_T46= x;
# 1559
x= _T46->tl;goto _TL282;_TL281:;}
# 1583
if(free_tvars!=0)goto _TL289;else{goto _TL28B;}_TL28B: if(free_evars!=0)goto _TL289;else{goto _TL28A;}_TL28A: if(free_qualvars!=0)goto _TL289;else{goto _TL287;}
_TL289:{void*_T77=Cyc_Absyn_compress(t);void*_T78;void*_T79;_T47= (int*)_T77;_T48= *_T47;if(_T48!=6)goto _TL28C;{struct Cyc_Absyn_FnType_Absyn_Type_struct*_T7A=(struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T77;_T49= (struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T77;_T4A= & _T49->f1.tvars;_T79= (struct Cyc_List_List**)_T4A;_T4B= (struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T77;_T4C= & _T4B->f1.qual_bnd;_T78= (struct Cyc_List_List**)_T4C;}{struct Cyc_List_List**btvs=(struct Cyc_List_List**)_T79;struct Cyc_List_List**qb=(struct Cyc_List_List**)_T78;_T4D= loc;_T4E= cvt;_T50= Cyc_List_map_c;{
# 1587
struct Cyc_List_List*(*_T7A)(struct _tuple15*(*)(long,struct Cyc_Absyn_Tvar*),long,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _tuple15*(*)(long,struct Cyc_Absyn_Tvar*),long,struct Cyc_List_List*))_T50;_T4F= _T7A;}_T51= Cyc_Tcutil_tvar_bool_pair;_T52= btvs;_T53= *_T52;_T54= _T4F(_T51,0,_T53);_T55= qb;_T56= Cyc_Absyn_al_qual_type;Cyc_Tctyp_update_qualifier_bounds(_T4D,_T4E,_T54,_T55,_T56);_T57= btvs;_T58= *_T57;
# 1589
if(_T58!=0)goto _TL28E;_T59= btvs;_T5B= Cyc_List_filter;{
# 1591
struct Cyc_List_List*(*_T7A)(long(*)(struct Cyc_Absyn_Tvar*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(long(*)(struct Cyc_Absyn_Tvar*),struct Cyc_List_List*))_T5B;_T5A= _T7A;}_T5C= Cyc_CurRgn_is_not_curr_rgn;_T5D= free_tvars;({__typeof__(_T5A(_T5C,_T5D))_T7A=_T5A(_T5C,_T5D);*_T59= _T7A;});
free_tvars= 0;goto _TL28F;_TL28E: _TL28F: goto _LL10;}_TL28C: goto _LL10;_LL10:;}
# 1598
if(free_tvars==0)goto _TL290;{struct Cyc_Warn_String_Warn_Warg_struct _T77;_T77.tag= 0;
({__typeof__(_tag_fat("unbound type variable ",sizeof(char),23U))_T78=_tag_fat("unbound type variable ",sizeof(char),23U);_T77.f1= _T78;});_T5E= _T77;}{struct Cyc_Warn_String_Warn_Warg_struct _T77=_T5E;{struct Cyc_Warn_Tvar_Warn_Warg_struct _T78;_T78.tag= 7;_T60= free_tvars;_T61= _T60->hd;_T78.f1= (struct Cyc_Absyn_Tvar*)_T61;_T5F= _T78;}{struct Cyc_Warn_Tvar_Warn_Warg_struct _T78=_T5F;{struct Cyc_Warn_String_Warn_Warg_struct _T79;_T79.tag= 0;({__typeof__(_tag_fat(" when checking ",sizeof(char),16U))_T7A=_tag_fat(" when checking ",sizeof(char),16U);_T79.f1= _T7A;});_T62= _T79;}{struct Cyc_Warn_String_Warn_Warg_struct _T79=_T62;{struct Cyc_Warn_Typ_Warn_Warg_struct _T7A;_T7A.tag= 2;_T7A.f1= t;_T63= _T7A;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T7A=_T63;void*_T7B[4];_T7B[0]= & _T77;_T7B[1]= & _T78;_T7B[2]= & _T79;_T7B[3]= & _T7A;_T64= loc;_T65= _tag_fat(_T7B,sizeof(void*),4);Cyc_Warn_err2(_T64,_T65);}}}}goto _TL291;_TL290: _TL291: _T66= 
Cyc_Tcutil_is_function_type(t);if(_T66)goto _TL295;else{goto _TL294;}_TL295: _T67= te;_T68= _T67->in_tempest;if(_T68)goto _TL292;else{goto _TL294;}
_TL294: Cyc_Tctyp_check_free_evars(free_evars,t,loc);goto _TL293;_TL292: _TL293: goto _TL288;_TL287: _TL288: {
# 1604
void*_T77=Cyc_Absyn_compress(t);struct Cyc_List_List*_T78;_T69= (int*)_T77;_T6A= *_T69;if(_T6A!=6)goto _TL296;{struct Cyc_Absyn_FnType_Absyn_Type_struct*_T79=(struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T77;_T6B= _T79->f1;_T78= _T6B.tvars;}{struct Cyc_List_List*btvs=_T78;_T6D= Cyc_List_exists;{
# 1606
long(*_T79)(long(*)(struct Cyc_Absyn_Tvar*),struct Cyc_List_List*)=(long(*)(long(*)(struct Cyc_Absyn_Tvar*),struct Cyc_List_List*))_T6D;_T6C= _T79;}_T6E= Cyc_CurRgn_is_curr_rgn;_T6F= btvs;_T70= _T6C(_T6E,_T6F);if(!_T70)goto _TL298;{struct Cyc_Warn_String_Warn_Warg_struct _T79;_T79.tag= 0;
# 1608
({__typeof__(_tag_fat("cannot abstract current region ",sizeof(char),32U))_T7A=_tag_fat("cannot abstract current region ",sizeof(char),32U);_T79.f1= _T7A;});_T71= _T79;}{struct Cyc_Warn_String_Warn_Warg_struct _T79=_T71;{struct Cyc_Warn_String_Warn_Warg_struct _T7A;_T7A.tag= 0;_T7A.f1= Cyc_CurRgn_curr_rgn_name;_T72= _T7A;}{struct Cyc_Warn_String_Warn_Warg_struct _T7A=_T72;{struct Cyc_Warn_String_Warn_Warg_struct _T7B;_T7B.tag= 0;({__typeof__(_tag_fat(" in ",sizeof(char),5U))_T7C=_tag_fat(" in ",sizeof(char),5U);_T7B.f1= _T7C;});_T73= _T7B;}{struct Cyc_Warn_String_Warn_Warg_struct _T7B=_T73;{struct Cyc_Warn_Typ_Warn_Warg_struct _T7C;_T7C.tag= 2;_T7C.f1= t;_T74= _T7C;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T7C=_T74;void*_T7D[4];_T7D[0]= & _T79;_T7D[1]= & _T7A;_T7D[2]= & _T7B;_T7D[3]= & _T7C;_T75= loc;_T76= _tag_fat(_T7D,sizeof(void*),4);Cyc_Warn_err2(_T75,_T76);}}}}goto _TL299;_TL298: _TL299: goto _LL15;}_TL296: goto _LL15;_LL15:;}}}}}}}}
# 1619
void Cyc_Tctyp_check_fndecl_valid_type(struct Cyc_Tc_TcContext*ctx,unsigned loc,struct Cyc_Tcenv_Tenv*te,struct Cyc_Absyn_Fndecl*fd){int*_T0;int _T1;struct Cyc_Absyn_Fndecl*_T2;struct Cyc_Absyn_FnInfo _T3;struct Cyc_Absyn_Fndecl*_T4;struct Cyc_Absyn_Fndecl*_T5;struct Cyc_Absyn_Fndecl*_T6;unsigned _T7;struct Cyc_Absyn_FnInfo _T8;struct Cyc_Absyn_Tqual _T9;long _TA;struct Cyc_Absyn_FnInfo _TB;void*_TC;struct Cyc_Warn_String_Warn_Warg_struct _TD;int(*_TE)(struct _fat_ptr);void*(*_TF)(struct _fat_ptr);struct _fat_ptr _T10;struct Cyc_Absyn_Fndecl*_T11;struct Cyc_Absyn_FnInfo _T12;struct Cyc_List_List*_T13;struct Cyc_List_List*_T14;void*_T15;struct _tuple9*_T16;struct _tuple9 _T17;struct _fat_ptr*_T18;struct Cyc_List_List*_T19;struct Cyc_List_List*_T1A;unsigned _T1B;struct _fat_ptr _T1C;struct Cyc_Absyn_Fndecl*_T1D;
void*t=Cyc_Tcutil_fndecl2type(fd);
# 1622
Cyc_Tctyp_check_valid_toplevel_type(ctx,loc,te,t);{
void*_T1E=Cyc_Absyn_compress(t);struct Cyc_Absyn_FnInfo _T1F;_T0= (int*)_T1E;_T1= *_T0;if(_T1!=6)goto _TL29A;{struct Cyc_Absyn_FnType_Absyn_Type_struct*_T20=(struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T1E;_T1F= _T20->f1;}{struct Cyc_Absyn_FnInfo i=_T1F;_T2= fd;_T3= _T2->i;{
# 1625
struct Cyc_List_List*atts=_T3.attributes;_T4= fd;
_T4->i= i;_T5= fd;
_T5->i.attributes= atts;_T6= fd;_T7= loc;_T8= i;_T9= _T8.ret_tqual;_TA= _T9.print_const;_TB= i;_TC= _TB.ret_type;
({__typeof__(
Cyc_Tcutil_extract_const_from_typedef(_T7,_TA,_TC))_T20=Cyc_Tcutil_extract_const_from_typedef(_T7,_TA,_TC);
# 1628
_T6->i.ret_tqual.real_const= _T20;});goto _LL0;}}_TL29A:{struct Cyc_Warn_String_Warn_Warg_struct _T20;_T20.tag= 0;
# 1632
({__typeof__(_tag_fat("check_fndecl_valid_type: not a FnType",sizeof(char),38U))_T21=_tag_fat("check_fndecl_valid_type: not a FnType",sizeof(char),38U);_T20.f1= _T21;});_TD= _T20;}{struct Cyc_Warn_String_Warn_Warg_struct _T20=_TD;void*_T21[1];_T21[0]= & _T20;_TF= Cyc_Warn_impos2;{int(*_T22)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_TF;_TE= _T22;}_T10= _tag_fat(_T21,sizeof(void*),1);_TE(_T10);}_LL0:;}{
# 1634
struct Cyc_List_List*argnames=0;_T11= fd;_T12= _T11->i;{
struct Cyc_List_List*args=_T12.args;_TL29F: if(args!=0)goto _TL29D;else{goto _TL29E;}
_TL29D:{struct Cyc_List_List*_T1E=_cycalloc(sizeof(struct Cyc_List_List));_T14= args;_T15= _T14->hd;_T16= (struct _tuple9*)_T15;_T17= *_T16;_T18= _T17.f0;({__typeof__(_check_null(_T18))_T1F=_check_null(_T18);_T1E->hd= _T1F;});_T1E->tl= argnames;_T13= (struct Cyc_List_List*)_T1E;}argnames= _T13;_T19= args;
# 1635
args= _T19->tl;goto _TL29F;_TL29E:;}_T1A= argnames;_T1B= loc;_T1C= 
# 1637
_tag_fat("function declaration has repeated parameter",sizeof(char),44U);Cyc_Tcutil_check_unique_vars(_T1A,_T1B,_T1C);_T1D= fd;
# 1639
_T1D->cached_type= t;}}
# 1648
void Cyc_Tctyp_check_type(struct Cyc_Tc_TcContext*ctx,unsigned loc,struct Cyc_Tcenv_Tenv*te,struct Cyc_List_List*bound_tvars,struct Cyc_Absyn_Kind*expected_kind,long allow_evars,long allow_abs_aggr,void*t){struct Cyc_Tctyp_CVTEnv _T0;struct Cyc_Absyn_Kind*_T1;long _T2;void*_T3;struct Cyc_List_List*(*_T4)(struct Cyc_List_List*,struct Cyc_List_List*,struct Cyc_Absyn_Tvar*(*)(struct _tuple15*));struct Cyc_Tctyp_CVTEnv _T5;struct Cyc_List_List*_T6;struct Cyc_List_List*_T7;struct Cyc_Absyn_Tvar*(*_T8)(struct _tuple15*);void*(*_T9)(struct _tuple0*);struct Cyc_Warn_String_Warn_Warg_struct _TA;struct Cyc_Warn_Tvar_Warn_Warg_struct _TB;struct Cyc_List_List*_TC;void*_TD;struct _tuple15*_TE;struct _tuple15 _TF;struct Cyc_Warn_String_Warn_Warg_struct _T10;struct Cyc_Warn_Typ_Warn_Warg_struct _T11;unsigned _T12;struct _fat_ptr _T13;struct Cyc_List_List*_T14;long _T15;struct Cyc_Tctyp_CVTEnv _T16;struct Cyc_List_List*_T17;void*_T18;unsigned _T19;{struct Cyc_Tctyp_CVTEnv _T1A;
# 1651
_T1A.ctx= ctx;_T1A.loc= loc;_T1A.te= te;_T1A.kind_env= bound_tvars;_T1A.fn_result= 0;_T1A.def_aliasable= 0;_T1A.inst_type_evar= 0;_T1A.generalize_evars= 0;_T1A.allow_aqual_bounds= 0;_T1A.free_vars= 0;_T1A.free_evars= 0;_T1A.free_qualvars= 0;_T0= _T1A;}_T1= expected_kind;_T2= allow_abs_aggr;_T3= t;{
# 1650
struct Cyc_Tctyp_CVTEnv cvt=Cyc_Tctyp_check_valid_type(_T0,_T1,_T2,_T3);{
# 1653
struct Cyc_List_List*(*_T1A)(struct Cyc_List_List*,struct Cyc_List_List*,struct Cyc_Absyn_Tvar*(*)(struct _tuple15*))=(struct Cyc_List_List*(*)(struct Cyc_List_List*,struct Cyc_List_List*,struct Cyc_Absyn_Tvar*(*)(struct _tuple15*)))Cyc_Tctyp_remove_bound_tvars;_T4= _T1A;}_T5= cvt;_T6= _T5.free_vars;_T7= bound_tvars;_T9= Cyc_Core_fst;{struct Cyc_Absyn_Tvar*(*_T1A)(struct _tuple15*)=(struct Cyc_Absyn_Tvar*(*)(struct _tuple15*))_T9;_T8= _T1A;}{struct Cyc_List_List*free_tvs=_T4(_T6,_T7,_T8);
_TL2A3: if(free_tvs!=0)goto _TL2A1;else{goto _TL2A2;}
_TL2A1:{struct Cyc_Warn_String_Warn_Warg_struct _T1A;_T1A.tag= 0;({__typeof__(_tag_fat("unbound type variable ",sizeof(char),23U))_T1B=_tag_fat("unbound type variable ",sizeof(char),23U);_T1A.f1= _T1B;});_TA= _T1A;}{struct Cyc_Warn_String_Warn_Warg_struct _T1A=_TA;{struct Cyc_Warn_Tvar_Warn_Warg_struct _T1B;_T1B.tag= 7;_TC= free_tvs;_TD= _TC->hd;_TE= (struct _tuple15*)_TD;_TF= *_TE;_T1B.f1= _TF.f0;_TB= _T1B;}{struct Cyc_Warn_Tvar_Warn_Warg_struct _T1B=_TB;{struct Cyc_Warn_String_Warn_Warg_struct _T1C;_T1C.tag= 0;({__typeof__(_tag_fat(" in type ",sizeof(char),10U))_T1D=_tag_fat(" in type ",sizeof(char),10U);_T1C.f1= _T1D;});_T10= _T1C;}{struct Cyc_Warn_String_Warn_Warg_struct _T1C=_T10;{struct Cyc_Warn_Typ_Warn_Warg_struct _T1D;_T1D.tag= 2;_T1D.f1= t;_T11= _T1D;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T1D=_T11;void*_T1E[4];_T1E[0]= & _T1A;_T1E[1]= & _T1B;_T1E[2]= & _T1C;_T1E[3]= & _T1D;_T12= loc;_T13= _tag_fat(_T1E,sizeof(void*),4);Cyc_Warn_err2(_T12,_T13);}}}}_T14= free_tvs;
# 1654
free_tvs= _T14->tl;goto _TL2A3;_TL2A2: _T15= allow_evars;
# 1656
if(_T15)goto _TL2A4;else{goto _TL2A6;}
_TL2A6: _T16= cvt;_T17= _T16.free_evars;_T18= t;_T19= loc;Cyc_Tctyp_check_free_evars(_T17,_T18,_T19);goto _TL2A5;_TL2A4: _TL2A5:;}}}
# 1661
void Cyc_Tctyp_check_type_with_bounds(struct Cyc_Tc_TcContext*ctx,unsigned loc,struct Cyc_Tcenv_Tenv*te,struct Cyc_List_List*flagged_tvars,struct Cyc_List_List**qual_bnd,struct Cyc_Absyn_Kind*expected_kind,long allow_evars,long allow_abs_aggr,void*t){struct Cyc_List_List*(*_T0)(struct Cyc_Absyn_Tvar*(*)(struct _tuple15*),struct Cyc_List_List*);struct Cyc_List_List*(*_T1)(void*(*)(void*),struct Cyc_List_List*);struct Cyc_Absyn_Tvar*(*_T2)(struct _tuple15*);void*(*_T3)(struct _tuple0*);struct Cyc_List_List*_T4;struct Cyc_Tctyp_CVTEnv _T5;struct Cyc_Absyn_Kind*_T6;long _T7;void*_T8;struct Cyc_List_List**_T9;struct Cyc_List_List*_TA;void*_TB;struct Cyc_Tctyp_CVTEnv _TC;struct Cyc_Absyn_Kind*_TD;struct Cyc_Absyn_Kind*_TE;long _TF;void*_T10;struct Cyc_Tctyp_CVTEnv _T11;struct Cyc_Absyn_Kind*_T12;struct Cyc_Absyn_Kind*_T13;long _T14;void*_T15;struct Cyc_List_List*_T16;struct Cyc_List_List*(*_T17)(struct Cyc_List_List*,struct Cyc_List_List*,struct Cyc_Absyn_Tvar*(*)(struct _tuple15*));struct Cyc_Tctyp_CVTEnv _T18;struct Cyc_List_List*_T19;struct Cyc_List_List*_T1A;struct Cyc_Absyn_Tvar*(*_T1B)(struct _tuple15*);void*(*_T1C)(struct _tuple0*);struct Cyc_Warn_String_Warn_Warg_struct _T1D;struct Cyc_Warn_Tvar_Warn_Warg_struct _T1E;struct Cyc_List_List*_T1F;void*_T20;struct _tuple15*_T21;struct _tuple15 _T22;struct Cyc_Warn_String_Warn_Warg_struct _T23;struct Cyc_Warn_Typ_Warn_Warg_struct _T24;unsigned _T25;struct _fat_ptr _T26;struct Cyc_List_List*_T27;long _T28;struct Cyc_Tctyp_CVTEnv _T29;struct Cyc_List_List*_T2A;void*_T2B;unsigned _T2C;_T1= Cyc_List_map;{
# 1664
struct Cyc_List_List*(*_T2D)(struct Cyc_Absyn_Tvar*(*)(struct _tuple15*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct Cyc_Absyn_Tvar*(*)(struct _tuple15*),struct Cyc_List_List*))_T1;_T0= _T2D;}_T3= Cyc_Core_fst;{struct Cyc_Absyn_Tvar*(*_T2D)(struct _tuple15*)=(struct Cyc_Absyn_Tvar*(*)(struct _tuple15*))_T3;_T2= _T2D;}_T4= flagged_tvars;{struct Cyc_List_List*bound_tvars=_T0(_T2,_T4);{struct Cyc_Tctyp_CVTEnv _T2D;
# 1666
_T2D.ctx= ctx;_T2D.loc= loc;_T2D.te= te;_T2D.kind_env= bound_tvars;_T2D.fn_result= 0;_T2D.def_aliasable= 0;_T2D.inst_type_evar= 0;_T2D.generalize_evars= 0;_T2D.allow_aqual_bounds= 1;_T2D.free_vars= 0;_T2D.free_evars= 0;_T2D.free_qualvars= 0;_T5= _T2D;}_T6= expected_kind;_T7= allow_abs_aggr;_T8= t;{
# 1665
struct Cyc_Tctyp_CVTEnv cvt=Cyc_Tctyp_check_valid_type(_T5,_T6,_T7,_T8);_T9= qual_bnd;{
# 1670
struct Cyc_List_List*qbit=*_T9;_TL2AA: if(qbit!=0)goto _TL2A8;else{goto _TL2A9;}
_TL2A8: _TA= qbit;_TB= _TA->hd;{struct _tuple0*_T2D=(struct _tuple0*)_TB;void*_T2E;void*_T2F;{struct _tuple0 _T30=*_T2D;_T2F= _T30.f0;_T2E= _T30.f1;}{void*tv=_T2F;void*bnd=_T2E;_TC= cvt;_TD= & Cyc_Kinds_aqk;_TE= (struct Cyc_Absyn_Kind*)_TD;_TF= allow_abs_aggr;_T10= tv;
cvt= Cyc_Tctyp_check_valid_type(_TC,_TE,_TF,_T10);_T11= cvt;_T12= & Cyc_Kinds_aqk;_T13= (struct Cyc_Absyn_Kind*)_T12;_T14= allow_abs_aggr;_T15= bnd;
cvt= Cyc_Tctyp_check_valid_type(_T11,_T13,_T14,_T15);}}_T16= qbit;
# 1670
qbit= _T16->tl;goto _TL2AA;_TL2A9:;}{
# 1676
struct Cyc_List_List*(*_T2D)(struct Cyc_List_List*,struct Cyc_List_List*,struct Cyc_Absyn_Tvar*(*)(struct _tuple15*))=(struct Cyc_List_List*(*)(struct Cyc_List_List*,struct Cyc_List_List*,struct Cyc_Absyn_Tvar*(*)(struct _tuple15*)))Cyc_Tctyp_remove_bound_tvars;_T17= _T2D;}_T18= cvt;_T19= _T18.free_vars;_T1A= bound_tvars;_T1C= Cyc_Core_fst;{struct Cyc_Absyn_Tvar*(*_T2D)(struct _tuple15*)=(struct Cyc_Absyn_Tvar*(*)(struct _tuple15*))_T1C;_T1B= _T2D;}{struct Cyc_List_List*free_tvs=_T17(_T19,_T1A,_T1B);
_TL2AE: if(free_tvs!=0)goto _TL2AC;else{goto _TL2AD;}
_TL2AC:{struct Cyc_Warn_String_Warn_Warg_struct _T2D;_T2D.tag= 0;({__typeof__(_tag_fat("unbound type variable ",sizeof(char),23U))_T2E=_tag_fat("unbound type variable ",sizeof(char),23U);_T2D.f1= _T2E;});_T1D= _T2D;}{struct Cyc_Warn_String_Warn_Warg_struct _T2D=_T1D;{struct Cyc_Warn_Tvar_Warn_Warg_struct _T2E;_T2E.tag= 7;_T1F= free_tvs;_T20= _T1F->hd;_T21= (struct _tuple15*)_T20;_T22= *_T21;_T2E.f1= _T22.f0;_T1E= _T2E;}{struct Cyc_Warn_Tvar_Warn_Warg_struct _T2E=_T1E;{struct Cyc_Warn_String_Warn_Warg_struct _T2F;_T2F.tag= 0;({__typeof__(_tag_fat(" in type ",sizeof(char),10U))_T30=_tag_fat(" in type ",sizeof(char),10U);_T2F.f1= _T30;});_T23= _T2F;}{struct Cyc_Warn_String_Warn_Warg_struct _T2F=_T23;{struct Cyc_Warn_Typ_Warn_Warg_struct _T30;_T30.tag= 2;_T30.f1= t;_T24= _T30;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T30=_T24;void*_T31[4];_T31[0]= & _T2D;_T31[1]= & _T2E;_T31[2]= & _T2F;_T31[3]= & _T30;_T25= loc;_T26= _tag_fat(_T31,sizeof(void*),4);Cyc_Warn_err2(_T25,_T26);}}}}_T27= free_tvs;
# 1677
free_tvs= _T27->tl;goto _TL2AE;_TL2AD: _T28= allow_evars;
# 1679
if(_T28)goto _TL2AF;else{goto _TL2B1;}
_TL2B1: _T29= cvt;_T2A= _T29.free_evars;_T2B= t;_T2C= loc;Cyc_Tctyp_check_free_evars(_T2A,_T2B,_T2C);goto _TL2B0;_TL2AF: _TL2B0:
 Cyc_Tctyp_update_qualifier_bounds(loc,cvt,flagged_tvars,qual_bnd,Cyc_Absyn_rtd_qual_type);}}}}
