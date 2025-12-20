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
# 656
enum Cyc_Absyn_Coercion{Cyc_Absyn_Unknown_coercion =0U,Cyc_Absyn_No_coercion =1U,Cyc_Absyn_Null_to_NonNull =2U,Cyc_Absyn_Subset_coercion =3U,Cyc_Absyn_Other_coercion =4U};struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct{int tag;void*f1;struct Cyc_Absyn_Exp*f2;long f3;enum Cyc_Absyn_Coercion f4;};struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct{int tag;void*f1;};struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct{int tag;void*f1;struct Cyc_List_List*f2;};struct _tuple9{struct _fat_ptr*f0;struct Cyc_Absyn_Tqual f1;void*f2;};struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct{int tag;void*f1;};struct Cyc_Absyn_Exp{void*topt;void*r;unsigned loc;void*annot;};struct Cyc_Absyn_Stmt{void*r;unsigned loc;void*annot;};struct Cyc_Absyn_Vardecl{enum Cyc_Absyn_Scope sc;struct _tuple1*name;unsigned varloc;struct Cyc_Absyn_Tqual tq;void*type;struct Cyc_Absyn_Exp*initializer;void*rgn;struct Cyc_List_List*attributes;long escapes;long is_proto;struct Cyc_Absyn_Exp*rename;};struct Cyc_Absyn_Fndecl{enum Cyc_Absyn_Scope sc;long is_inline;struct _tuple1*name;struct Cyc_Absyn_Stmt*body;struct Cyc_Absyn_FnInfo i;void*cached_type;struct Cyc_Core_Opt*param_vardecls;struct Cyc_Absyn_Vardecl*fn_vardecl;enum Cyc_Absyn_Scope orig_scope;long escapes;};struct Cyc_Absyn_Aggrfield{struct _fat_ptr*name;struct Cyc_Absyn_Tqual tq;void*type;struct Cyc_Absyn_Exp*width;struct Cyc_List_List*attributes;struct Cyc_Absyn_Exp*requires_clause;};struct Cyc_Absyn_AggrdeclImpl{struct Cyc_List_List*exist_vars;struct Cyc_List_List*qual_bnd;struct Cyc_List_List*fields;long tagged;struct Cyc_List_List*effconstr;};struct Cyc_Absyn_Aggrdecl{enum Cyc_Absyn_AggrKind kind;enum Cyc_Absyn_Scope sc;struct _tuple1*name;struct Cyc_List_List*tvs;struct Cyc_Absyn_AggrdeclImpl*impl;struct Cyc_List_List*attributes;long expected_mem_kind;};struct Cyc_Absyn_Datatypefield{struct _tuple1*name;struct Cyc_List_List*typs;unsigned loc;enum Cyc_Absyn_Scope sc;};struct Cyc_Absyn_Datatypedecl{enum Cyc_Absyn_Scope sc;struct _tuple1*name;struct Cyc_List_List*tvs;struct Cyc_Core_Opt*fields;long is_extensible;};struct Cyc_Absyn_Enumfield{struct _tuple1*name;struct Cyc_Absyn_Exp*tag;unsigned loc;};struct Cyc_Absyn_Enumdecl{enum Cyc_Absyn_Scope sc;struct _tuple1*name;struct Cyc_Core_Opt*fields;};struct Cyc_Absyn_Typedefdecl{struct _tuple1*name;struct Cyc_Absyn_Tqual tq;struct Cyc_List_List*tvs;struct Cyc_Core_Opt*kind;void*defn;struct Cyc_List_List*atts;long extern_c;};
# 1045
int Cyc_Absyn_qvar_cmp(struct _tuple1*,struct _tuple1*);
# 1048
int Cyc_Absyn_tvar_cmp(struct Cyc_Absyn_Tvar*,struct Cyc_Absyn_Tvar*);
# 1066
void*Cyc_Absyn_compress(void*);
# 1070
long Cyc_Absyn_type2bool(long,void*);
# 1079
void*Cyc_Absyn_new_evar(struct Cyc_Core_Opt*,struct Cyc_Core_Opt*);
# 1093
extern void*Cyc_Absyn_heap_rgn_type;
# 1095
extern void*Cyc_Absyn_al_qual_type;extern void*Cyc_Absyn_un_qual_type;extern void*Cyc_Absyn_rc_qual_type;extern void*Cyc_Absyn_rtd_qual_type;
# 1099
extern void*Cyc_Absyn_true_type;extern void*Cyc_Absyn_false_type;
# 1101
extern void*Cyc_Absyn_void_type;extern void*Cyc_Absyn_var_type(struct Cyc_Absyn_Tvar*);extern void*Cyc_Absyn_aqual_var_type(void*,void*);extern void*Cyc_Absyn_join_eff(struct Cyc_List_List*);extern void*Cyc_Absyn_regionsof_eff(void*);
# 1119
struct _tuple1*Cyc_Absyn_datatype_print_arg_qvar (void);
struct _tuple1*Cyc_Absyn_datatype_scanf_arg_qvar (void);
# 1129
void*Cyc_Absyn_bounds_one (void);
# 1132
void*Cyc_Absyn_fatconst (void);
void*Cyc_Absyn_thinconst (void);
# 1164
void*Cyc_Absyn_aqualsof_type(void*);
# 1188
struct Cyc_Absyn_Exp*Cyc_Absyn_uint_exp(unsigned,unsigned);
# 1356
void Cyc_Absyn_visit_exp(long(*)(void*,struct Cyc_Absyn_Exp*),long(*)(void*,struct Cyc_Absyn_Stmt*),void*,struct Cyc_Absyn_Exp*);
# 78 "cyclone/library/compiler/attributes.h"
long Cyc_Atts_fntype_att(void*);
# 82
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
long Cyc_Kinds_constrain_kinds(void*,void*);
# 38 "cyclone/library/compiler/tc.h"
void Cyc_Tc_tcAggrdecl(struct Cyc_Tcenv_Tenv*,unsigned,struct Cyc_Absyn_Aggrdecl*);
void Cyc_Tc_tcDatatypedecl(struct Cyc_Tcenv_Tenv*,unsigned,struct Cyc_Absyn_Datatypedecl*);
void Cyc_Tc_tcEnumdecl(struct Cyc_Tcenv_Tenv*,unsigned,struct Cyc_Absyn_Enumdecl*);
# 26 "cyclone/library/compiler/tcexp.h"
void*Cyc_Tcexp_tcExp(struct Cyc_Tcenv_Tenv*,void**,struct Cyc_Absyn_Exp*);
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
void*Cyc_Warn_impos2(struct _fat_ptr);struct Cyc_Tctyp_CVTEnv{unsigned loc;struct Cyc_Tcenv_Tenv*te;struct Cyc_List_List*kind_env;long fn_result;long def_aliasable;long inst_type_evar;long generalize_evars;long allow_aqual_bounds;struct Cyc_List_List*free_vars;struct Cyc_List_List*free_evars;struct Cyc_List_List*free_qualvars;};
# 97 "cyclone/library/compiler/tctyp.cyc"
static struct Cyc_Tctyp_CVTEnv Cyc_Tctyp_i_check_type(struct Cyc_Tctyp_CVTEnv,struct Cyc_Absyn_Kind*,void*,long,long);struct _tuple16{void*f0;long f1;};
# 103
static struct Cyc_List_List*Cyc_Tctyp_add_free_evar(struct Cyc_List_List*es,void*e,long b){int*_T0;int _T1;struct Cyc_List_List*_T2;void*_T3;long*_T4;int*_T5;int _T6;long _T7;long*_T8;long _T9;long*_TA;struct Cyc_List_List*_TB;struct Cyc_List_List*_TC;struct Cyc_List_List*_TD;struct _tuple16*_TE;struct Cyc_List_List*_TF;
void*_T10=Cyc_Absyn_compress(e);int _T11;_T0= (int*)_T10;_T1= *_T0;if(_T1!=1)goto _TL0;{struct Cyc_Absyn_Evar_Absyn_Type_struct*_T12=(struct Cyc_Absyn_Evar_Absyn_Type_struct*)_T10;_T11= _T12->f3;}{int i=_T11;{
# 106
struct Cyc_List_List*es2=es;_TL5: if(es2!=0)goto _TL3;else{goto _TL4;}
_TL3: _T2= es2;_T3= _T2->hd;{struct _tuple16*_T12=(struct _tuple16*)_T3;void*_T13;void*_T14;{struct _tuple16 _T15=*_T12;_T14= _T15.f0;_T4= & _T12->f1;_T13= (long*)_T4;}{void*t=_T14;long*b2=(long*)_T13;
void*_T15=Cyc_Absyn_compress(t);int _T16;_T5= (int*)_T15;_T6= *_T5;if(_T6!=1)goto _TL6;{struct Cyc_Absyn_Evar_Absyn_Type_struct*_T17=(struct Cyc_Absyn_Evar_Absyn_Type_struct*)_T15;_T16= _T17->f3;}{int j=_T16;
# 110
if(i!=j)goto _TL8;_T7= b;_T8= b2;_T9= *_T8;
if(_T7==_T9)goto _TLA;_TA= b2;
*_TA= 1;goto _TLB;_TLA: _TLB: _TB= es;
return _TB;_TL8: goto _LL8;}_TL6: goto _LL8;_LL8:;}}_TC= es2;
# 106
es2= _TC->tl;goto _TL5;_TL4:;}{struct Cyc_List_List*_T12=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple16*_T13=_cycalloc(sizeof(struct _tuple16));
# 120
_T13->f0= e;_T13->f1= b;_TE= (struct _tuple16*)_T13;}_T12->hd= _TE;_T12->tl= es;_TD= (struct Cyc_List_List*)_T12;}return _TD;}_TL0: _TF= es;
# 122
return _TF;;}
# 127
static struct Cyc_List_List*Cyc_Tctyp_add_bound_tvar(struct Cyc_List_List*tvs,struct Cyc_Absyn_Tvar*tv){struct Cyc_Absyn_Tvar*_T0;int _T1;int _T2;struct Cyc_Warn_String_Warn_Warg_struct _T3;struct Cyc_Warn_Tvar_Warn_Warg_struct _T4;struct Cyc_Warn_String_Warn_Warg_struct _T5;int(*_T6)(struct _fat_ptr);void*(*_T7)(struct _fat_ptr);struct _fat_ptr _T8;struct Cyc_List_List*_T9;_T0= tv;_T1= _T0->identity;_T2= - 1;
if(_T1!=_T2)goto _TLC;{struct Cyc_Warn_String_Warn_Warg_struct _TA;_TA.tag= 0;
({__typeof__(_tag_fat("bound tvar id for ",sizeof(char),19U))_TB=_tag_fat("bound tvar id for ",sizeof(char),19U);_TA.f1= _TB;});_T3= _TA;}{struct Cyc_Warn_String_Warn_Warg_struct _TA=_T3;{struct Cyc_Warn_Tvar_Warn_Warg_struct _TB;_TB.tag= 7;_TB.f1= tv;_T4= _TB;}{struct Cyc_Warn_Tvar_Warn_Warg_struct _TB=_T4;{struct Cyc_Warn_String_Warn_Warg_struct _TC;_TC.tag= 0;({__typeof__(_tag_fat(" is NULL",sizeof(char),9U))_TD=_tag_fat(" is NULL",sizeof(char),9U);_TC.f1= _TD;});_T5= _TC;}{struct Cyc_Warn_String_Warn_Warg_struct _TC=_T5;void*_TD[3];_TD[0]= & _TA;_TD[1]= & _TB;_TD[2]= & _TC;_T7= Cyc_Warn_impos2;{int(*_TE)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T7;_T6= _TE;}_T8= _tag_fat(_TD,sizeof(void*),3);_T6(_T8);}}}goto _TLD;_TLC: _TLD:{struct Cyc_List_List*_TA=_cycalloc(sizeof(struct Cyc_List_List));
_TA->hd= tv;_TA->tl= tvs;_T9= (struct Cyc_List_List*)_TA;}return _T9;}
# 132
static struct Cyc_List_List*Cyc_Tctyp_remove_bound_tvars(struct Cyc_List_List*tvs,struct Cyc_List_List*btvs,struct Cyc_Absyn_Tvar*(*get)(void*)){struct Cyc_List_List*_T0;void*_T1;struct Cyc_Absyn_Tvar*_T2;int _T3;struct Cyc_List_List*_T4;void*_T5;struct Cyc_Absyn_Tvar*_T6;int _T7;struct Cyc_List_List*_T8;struct Cyc_List_List*_T9;struct Cyc_List_List*_TA;struct Cyc_List_List*_TB;struct Cyc_List_List*_TC;
struct Cyc_List_List*r=0;
_TL11: if(tvs!=0)goto _TLF;else{goto _TL10;}
_TLF:{struct Cyc_List_List*b=btvs;
_TL15: if(b!=0)goto _TL13;else{goto _TL14;}
_TL13: _T0= tvs;_T1= _T0->hd;_T2= get(_T1);_T3= _T2->identity;_T4= b;_T5= _T4->hd;_T6= (struct Cyc_Absyn_Tvar*)_T5;_T7= _T6->identity;if(_T3!=_T7)goto _TL16;goto _TL14;_TL16: _T8= b;
# 136
b= _T8->tl;goto _TL15;_TL14:
# 139
 if(b!=0)goto _TL18;{struct Cyc_List_List*_TD=_cycalloc(sizeof(struct Cyc_List_List));_TA= tvs;
_TD->hd= _TA->hd;_TD->tl= r;_T9= (struct Cyc_List_List*)_TD;}r= _T9;goto _TL19;_TL18: _TL19:;}_TB= tvs;
# 134
tvs= _TB->tl;goto _TL11;_TL10:
# 142
 r= Cyc_List_imp_rev(r);_TC= r;
return _TC;}
# 150
static void Cyc_Tctyp_check_free_evars(struct Cyc_List_List*free_evars,void*in_typ,unsigned loc){struct Cyc_List_List*_T0;void*_T1;struct _tuple16*_T2;struct _tuple16 _T3;int*_T4;int _T5;struct Cyc_Absyn_Kind*_T6;enum Cyc_Absyn_KindQual _T7;int _T8;struct Cyc_Warn_String_Warn_Warg_struct _T9;struct Cyc_Warn_Typ_Warn_Warg_struct _TA;struct Cyc_Warn_String_Warn_Warg_struct _TB;struct Cyc_Warn_Typ_Warn_Warg_struct _TC;unsigned _TD;struct _fat_ptr _TE;long _TF;struct Cyc_Warn_String_Warn_Warg_struct _T10;struct Cyc_Warn_Typ_Warn_Warg_struct _T11;struct Cyc_Warn_String_Warn_Warg_struct _T12;struct Cyc_Warn_String_Warn_Warg_struct _T13;struct Cyc_Warn_String_Warn_Warg_struct _T14;int(*_T15)(struct _fat_ptr);void*(*_T16)(struct _fat_ptr);struct _fat_ptr _T17;struct Cyc_List_List*_T18;
_TL1D: if(free_evars!=0)goto _TL1B;else{goto _TL1C;}
_TL1B: _T0= free_evars;_T1= _T0->hd;_T2= (struct _tuple16*)_T1;_T3= *_T2;{void*e=_T3.f0;{
void*_T19=Cyc_Absyn_compress(e);_T4= (int*)_T19;_T5= *_T4;if(_T5!=1)goto _TL1E;goto _LL0;_TL1E: goto _TL1A;_LL0:;}{
# 159
void*t;
struct _fat_ptr s;{
struct Cyc_Absyn_Kind*_T19=Cyc_Tcutil_type_kind(e);_T6= (struct Cyc_Absyn_Kind*)_T19;_T7= _T6->kind;_T8= (int)_T7;switch(_T8){case Cyc_Absyn_EffKind:
# 169
 t= Cyc_Absyn_heap_rgn_type;
s= _tag_fat("{`H}",sizeof(char),5U);goto _LL5;case Cyc_Absyn_BoolKind:
# 173
 t= Cyc_Absyn_false_type;
s= _tag_fat("@false",sizeof(char),7U);goto _LL5;case Cyc_Absyn_PtrBndKind:
# 177
 t= Cyc_Absyn_bounds_one();
s= _tag_fat("bounds_one",sizeof(char),11U);goto _LL5;case Cyc_Absyn_AqualKind:
# 181
 t= Cyc_Absyn_al_qual_type;
s= _tag_fat("aliasable",sizeof(char),10U);goto _LL5;default:{struct Cyc_Warn_String_Warn_Warg_struct _T1A;_T1A.tag= 0;
# 185
({__typeof__(_tag_fat("hidden type variable ",sizeof(char),22U))_T1B=_tag_fat("hidden type variable ",sizeof(char),22U);_T1A.f1= _T1B;});_T9= _T1A;}{struct Cyc_Warn_String_Warn_Warg_struct _T1A=_T9;{struct Cyc_Warn_Typ_Warn_Warg_struct _T1B;_T1B.tag= 2;_T1B.f1= e;_TA= _T1B;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T1B=_TA;{struct Cyc_Warn_String_Warn_Warg_struct _T1C;_T1C.tag= 0;({__typeof__(_tag_fat(" isn't abstracted in type ",sizeof(char),27U))_T1D=_tag_fat(" isn't abstracted in type ",sizeof(char),27U);_T1C.f1= _T1D;});_TB= _T1C;}{struct Cyc_Warn_String_Warn_Warg_struct _T1C=_TB;{struct Cyc_Warn_Typ_Warn_Warg_struct _T1D;_T1D.tag= 2;_T1D.f1= in_typ;_TC= _T1D;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T1D=_TC;void*_T1E[4];_T1E[0]= & _T1A;_T1E[1]= & _T1B;_T1E[2]= & _T1C;_T1E[3]= & _T1D;_TD= loc;_TE= _tag_fat(_T1E,sizeof(void*),4);Cyc_Warn_err2(_TD,_TE);}}}}
return;}_LL5:;}_TF= 
# 188
Cyc_Unify_unify(e,t);if(_TF)goto _TL21;else{goto _TL23;}
_TL23:{struct Cyc_Warn_String_Warn_Warg_struct _T19;_T19.tag= 0;({__typeof__(_tag_fat("can't unify evar ",sizeof(char),18U))_T1A=_tag_fat("can't unify evar ",sizeof(char),18U);_T19.f1= _T1A;});_T10= _T19;}{struct Cyc_Warn_String_Warn_Warg_struct _T19=_T10;{struct Cyc_Warn_Typ_Warn_Warg_struct _T1A;_T1A.tag= 2;_T1A.f1= e;_T11= _T1A;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T1A=_T11;{struct Cyc_Warn_String_Warn_Warg_struct _T1B;_T1B.tag= 0;({__typeof__(_tag_fat(" with ",sizeof(char),7U))_T1C=_tag_fat(" with ",sizeof(char),7U);_T1B.f1= _T1C;});_T12= _T1B;}{struct Cyc_Warn_String_Warn_Warg_struct _T1B=_T12;{struct Cyc_Warn_String_Warn_Warg_struct _T1C;_T1C.tag= 0;_T1C.f1= s;_T13= _T1C;}{struct Cyc_Warn_String_Warn_Warg_struct _T1C=_T13;{struct Cyc_Warn_String_Warn_Warg_struct _T1D;_T1D.tag= 0;({__typeof__(_tag_fat("!",sizeof(char),2U))_T1E=_tag_fat("!",sizeof(char),2U);_T1D.f1= _T1E;});_T14= _T1D;}{struct Cyc_Warn_String_Warn_Warg_struct _T1D=_T14;void*_T1E[5];_T1E[0]= & _T19;_T1E[1]= & _T1A;_T1E[2]= & _T1B;_T1E[3]= & _T1C;_T1E[4]= & _T1D;_T16= Cyc_Warn_impos2;{int(*_T1F)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T16;_T15= _T1F;}_T17= _tag_fat(_T1E,sizeof(void*),5);_T15(_T17);}}}}}goto _TL22;_TL21: _TL22:;}}_TL1A: _T18= free_evars;
# 151
free_evars= _T18->tl;goto _TL1D;_TL1C:;}
# 198
static struct Cyc_List_List*Cyc_Tctyp_add_free_tvar(unsigned loc,struct Cyc_List_List*tvs,struct Cyc_Absyn_Tvar*tv,long allow_aqual_bounds){struct Cyc_List_List*_T0;void*_T1;struct Cyc_Absyn_Tvar*_T2;struct _fat_ptr*_T3;struct Cyc_Absyn_Tvar*_T4;struct _fat_ptr*_T5;int _T6;struct Cyc_List_List*_T7;void*_T8;struct Cyc_Absyn_Tvar*_T9;struct Cyc_Absyn_Tvar*_TA;long _TB;struct Cyc_Warn_String_Warn_Warg_struct _TC;struct Cyc_Warn_Tvar_Warn_Warg_struct _TD;struct Cyc_Warn_String_Warn_Warg_struct _TE;struct Cyc_Warn_KindBound_Warn_Warg_struct _TF;struct Cyc_Warn_String_Warn_Warg_struct _T10;struct Cyc_Warn_KindBound_Warn_Warg_struct _T11;unsigned _T12;struct _fat_ptr _T13;struct Cyc_Absyn_Tvar*_T14;void*_T15;long _T16;struct Cyc_Warn_String_Warn_Warg_struct _T17;struct Cyc_Warn_Tvar_Warn_Warg_struct _T18;struct Cyc_Warn_String_Warn_Warg_struct _T19;unsigned _T1A;struct _fat_ptr _T1B;struct Cyc_List_List*_T1C;void*_T1D;struct Cyc_Absyn_Tvar*_T1E;void*_T1F;struct Cyc_List_List*_T20;void*_T21;struct Cyc_Absyn_Tvar*_T22;struct Cyc_Absyn_Tvar*_T23;struct Cyc_Absyn_Tvar*_T24;void*_T25;struct Cyc_Absyn_Tvar*_T26;void*_T27;struct Cyc_List_List*_T28;void*_T29;struct Cyc_Absyn_Tvar*_T2A;void*_T2B;int _T2C;struct Cyc_Warn_String_Warn_Warg_struct _T2D;struct Cyc_Warn_Tvar_Warn_Warg_struct _T2E;struct Cyc_Warn_String_Warn_Warg_struct _T2F;struct Cyc_Warn_TypOpt_Warn_Warg_struct _T30;struct Cyc_Absyn_Tvar*_T31;struct Cyc_Warn_String_Warn_Warg_struct _T32;struct Cyc_Warn_TypOpt_Warn_Warg_struct _T33;struct Cyc_List_List*_T34;void*_T35;struct Cyc_Absyn_Tvar*_T36;unsigned _T37;struct _fat_ptr _T38;struct Cyc_Absyn_Tvar*_T39;int _T3A;int _T3B;struct Cyc_Absyn_Tvar*_T3C;struct Cyc_List_List*_T3D;void*_T3E;struct Cyc_Absyn_Tvar*_T3F;struct Cyc_Absyn_Tvar*_T40;int _T41;struct Cyc_List_List*_T42;void*_T43;struct Cyc_Absyn_Tvar*_T44;int _T45;struct Cyc_Warn_String_Warn_Warg_struct _T46;int(*_T47)(struct _fat_ptr);void*(*_T48)(struct _fat_ptr);struct _fat_ptr _T49;struct Cyc_List_List*_T4A;struct Cyc_List_List*_T4B;struct Cyc_Absyn_Tvar*_T4C;struct Cyc_List_List*_T4D;{
# 200
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
# 211
if(!_T2C)goto _TL32;{struct Cyc_Warn_String_Warn_Warg_struct _T4E;_T4E.tag= 0;
# 213
({__typeof__(_tag_fat("type variable ",sizeof(char),15U))_T4F=_tag_fat("type variable ",sizeof(char),15U);_T4E.f1= _T4F;});_T2D= _T4E;}{struct Cyc_Warn_String_Warn_Warg_struct _T4E=_T2D;{struct Cyc_Warn_Tvar_Warn_Warg_struct _T4F;_T4F.tag= 7;_T4F.f1= tv;_T2E= _T4F;}{struct Cyc_Warn_Tvar_Warn_Warg_struct _T4F=_T2E;{struct Cyc_Warn_String_Warn_Warg_struct _T50;_T50.tag= 0;({__typeof__(_tag_fat(" used with inconsistent alias qualifier bounds ",sizeof(char),48U))_T51=_tag_fat(" used with inconsistent alias qualifier bounds ",sizeof(char),48U);_T50.f1= _T51;});_T2F= _T50;}{struct Cyc_Warn_String_Warn_Warg_struct _T50=_T2F;{struct Cyc_Warn_TypOpt_Warn_Warg_struct _T51;_T51.tag= 3;_T31= tv;
_T51.f1= _T31->aquals_bound;_T30= _T51;}{struct Cyc_Warn_TypOpt_Warn_Warg_struct _T51=_T30;{struct Cyc_Warn_String_Warn_Warg_struct _T52;_T52.tag= 0;({__typeof__(_tag_fat(" and ",sizeof(char),6U))_T53=_tag_fat(" and ",sizeof(char),6U);_T52.f1= _T53;});_T32= _T52;}{struct Cyc_Warn_String_Warn_Warg_struct _T52=_T32;{struct Cyc_Warn_TypOpt_Warn_Warg_struct _T53;_T53.tag= 3;_T34= tvs2;_T35= _T34->hd;_T36= (struct Cyc_Absyn_Tvar*)_T35;_T53.f1= _T36->aquals_bound;_T33= _T53;}{struct Cyc_Warn_TypOpt_Warn_Warg_struct _T53=_T33;void*_T54[6];_T54[0]= & _T4E;_T54[1]= & _T4F;_T54[2]= & _T50;_T54[3]= & _T51;_T54[4]= & _T52;_T54[5]= & _T53;_T37= loc;_T38= _tag_fat(_T54,sizeof(void*),6);Cyc_Warn_err2(_T37,_T38);}}}}}}goto _TL33;_TL32: _TL33: _TL31: _T39= tv;_T3A= _T39->identity;_T3B= - 1;
if(_T3A!=_T3B)goto _TL34;_T3C= tv;_T3D= tvs2;_T3E= _T3D->hd;_T3F= (struct Cyc_Absyn_Tvar*)_T3E;
_T3C->identity= _T3F->identity;goto _TL35;
_TL34: _T40= tv;_T41= _T40->identity;_T42= tvs2;_T43= _T42->hd;_T44= (struct Cyc_Absyn_Tvar*)_T43;_T45= _T44->identity;if(_T41==_T45)goto _TL36;{struct Cyc_Warn_String_Warn_Warg_struct _T4E;_T4E.tag= 0;
({__typeof__(_tag_fat("same type variable has different identity!",sizeof(char),43U))_T4F=_tag_fat("same type variable has different identity!",sizeof(char),43U);_T4E.f1= _T4F;});_T46= _T4E;}{struct Cyc_Warn_String_Warn_Warg_struct _T4E=_T46;void*_T4F[1];_T4F[0]= & _T4E;_T48= Cyc_Warn_impos2;{int(*_T50)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T48;_T47= _T50;}_T49= _tag_fat(_T4F,sizeof(void*),1);_T47(_T49);}goto _TL37;_TL36: _TL37: _TL35: _T4A= tvs;
return _T4A;}}_TL28: _T4B= tvs2;
# 200
tvs2= _T4B->tl;goto _TL27;_TL26:;}_T4C= tv;
# 221
({__typeof__(Cyc_Tcutil_new_tvar_id())_T4E=Cyc_Tcutil_new_tvar_id();_T4C->identity= _T4E;});{struct Cyc_List_List*_T4E=_cycalloc(sizeof(struct Cyc_List_List));
_T4E->hd= tv;_T4E->tl= tvs;_T4D= (struct Cyc_List_List*)_T4E;}return _T4D;}
# 225
static long Cyc_Tctyp_cmp_fqv(struct _tuple16*te1,struct _tuple16*te2){struct _tuple16*_T0;struct _tuple16 _T1;struct _tuple16*_T2;struct _tuple16 _T3;int _T4;int _T5;_T0= te1;_T1= *_T0;{
void*t1=_T1.f0;_T2= te2;_T3= *_T2;{
void*t2=_T3.f0;_T4= 
Cyc_Tcutil_typecmp(t1,t2);_T5= _T4==0;return _T5;}}}
# 232
static struct Cyc_List_List*Cyc_Tctyp_fast_add_free_tvar(struct Cyc_List_List*tvs,struct Cyc_Absyn_Tvar*tv){struct Cyc_Absyn_Tvar*_T0;int _T1;int _T2;struct Cyc_Warn_String_Warn_Warg_struct _T3;int(*_T4)(struct _fat_ptr);void*(*_T5)(struct _fat_ptr);struct _fat_ptr _T6;struct Cyc_List_List*_T7;void*_T8;struct Cyc_Absyn_Tvar*_T9;int _TA;int _TB;struct Cyc_Warn_String_Warn_Warg_struct _TC;int(*_TD)(struct _fat_ptr);void*(*_TE)(struct _fat_ptr);struct _fat_ptr _TF;struct Cyc_Absyn_Tvar*_T10;int _T11;struct Cyc_Absyn_Tvar*_T12;int _T13;struct Cyc_List_List*_T14;struct Cyc_List_List*_T15;struct Cyc_List_List*_T16;_T0= tv;_T1= _T0->identity;_T2= - 1;
if(_T1!=_T2)goto _TL38;{struct Cyc_Warn_String_Warn_Warg_struct _T17;_T17.tag= 0;
({__typeof__(_tag_fat("fast_add_free_tvar: bad identity in tv",sizeof(char),39U))_T18=_tag_fat("fast_add_free_tvar: bad identity in tv",sizeof(char),39U);_T17.f1= _T18;});_T3= _T17;}{struct Cyc_Warn_String_Warn_Warg_struct _T17=_T3;void*_T18[1];_T18[0]= & _T17;_T5= Cyc_Warn_impos2;{int(*_T19)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T5;_T4= _T19;}_T6= _tag_fat(_T18,sizeof(void*),1);_T4(_T6);}goto _TL39;_TL38: _TL39:{
struct Cyc_List_List*tvs2=tvs;_TL3D: if(tvs2!=0)goto _TL3B;else{goto _TL3C;}
_TL3B: _T7= tvs2;_T8= _T7->hd;{struct Cyc_Absyn_Tvar*tv2=(struct Cyc_Absyn_Tvar*)_T8;_T9= tv2;_TA= _T9->identity;_TB= - 1;
if(_TA!=_TB)goto _TL3E;{struct Cyc_Warn_String_Warn_Warg_struct _T17;_T17.tag= 0;
({__typeof__(_tag_fat("fast_add_free_tvar: bad identity in tvs2",sizeof(char),41U))_T18=_tag_fat("fast_add_free_tvar: bad identity in tvs2",sizeof(char),41U);_T17.f1= _T18;});_TC= _T17;}{struct Cyc_Warn_String_Warn_Warg_struct _T17=_TC;void*_T18[1];_T18[0]= & _T17;_TE= Cyc_Warn_impos2;{int(*_T19)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_TE;_TD= _T19;}_TF= _tag_fat(_T18,sizeof(void*),1);_TD(_TF);}goto _TL3F;_TL3E: _TL3F: _T10= tv2;_T11= _T10->identity;_T12= tv;_T13= _T12->identity;
if(_T11!=_T13)goto _TL40;_T14= tvs;
return _T14;_TL40:;}_T15= tvs2;
# 235
tvs2= _T15->tl;goto _TL3D;_TL3C:;}{struct Cyc_List_List*_T17=_cycalloc(sizeof(struct Cyc_List_List));
# 242
_T17->hd= tv;_T17->tl= tvs;_T16= (struct Cyc_List_List*)_T17;}return _T16;}
# 248
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
# 251
tvs2= _T1A->tl;goto _TL47;_TL46:;}{struct Cyc_List_List*_T1D=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple15*_T1E=_cycalloc(sizeof(struct _tuple15));
# 260
_T1E->f0= tv;_T1E->f1= b;_T1C= (struct _tuple15*)_T1E;}_T1D->hd= _T1C;_T1D->tl= tvs;_T1B= (struct Cyc_List_List*)_T1D;}return _T1B;}
# 267
static long Cyc_Tctyp_check_type_visit_f1(struct Cyc_Tctyp_CVTEnv*env,struct Cyc_Absyn_Exp*e){struct Cyc_Tctyp_CVTEnv*_T0;struct Cyc_Absyn_Exp*_T1;struct Cyc_Absyn_Exp*_T2;int*_T3;unsigned _T4;void*_T5;struct Cyc_Tctyp_CVTEnv*_T6;struct Cyc_Tctyp_CVTEnv*_T7;struct Cyc_Tctyp_CVTEnv _T8;struct Cyc_Absyn_Kind*_T9;struct Cyc_Absyn_Kind*_TA;void*_TB;void*_TC;void*_TD;struct Cyc_Tctyp_CVTEnv*_TE;struct Cyc_Tctyp_CVTEnv*_TF;struct Cyc_Tctyp_CVTEnv _T10;struct Cyc_Absyn_Kind*_T11;struct Cyc_Absyn_Kind*_T12;void*_T13;void*_T14;struct Cyc_Tctyp_CVTEnv*_T15;struct Cyc_Tctyp_CVTEnv*_T16;struct Cyc_Tctyp_CVTEnv _T17;struct Cyc_Absyn_Kind*_T18;struct Cyc_Absyn_Kind*_T19;void*_T1A;_T0= env;_T1= e;
# 270
_T0->loc= _T1->loc;_T2= e;{
void*_T1B=_T2->r;void*_T1C;_T3= (int*)_T1B;_T4= *_T3;switch(_T4){case 14:{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T1D=(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T1B;_T5= _T1D->f1;_T1C= (void*)_T5;}{void*t=_T1C;_T6= env;_T7= env;_T8= *_T7;_T9= & Cyc_Kinds_ak;_TA= (struct Cyc_Absyn_Kind*)_T9;_TB= t;
# 273
({__typeof__(Cyc_Tctyp_i_check_type(_T8,_TA,_TB,1,0))_T1D=Cyc_Tctyp_i_check_type(_T8,_TA,_TB,1,0);*_T6= _T1D;});goto _LL0;}case 19:{struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct*_T1D=(struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct*)_T1B;_TC= _T1D->f1;_T1C= (void*)_TC;}{void*t=_T1C;_T1C= t;goto _LL6;}case 17:{struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct*_T1D=(struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct*)_T1B;_TD= _T1D->f1;_T1C= (void*)_TD;}_LL6: {void*t=_T1C;_TE= env;_TF= env;_T10= *_TF;_T11= & Cyc_Kinds_ak;_T12= (struct Cyc_Absyn_Kind*)_T11;_T13= t;
# 278
({__typeof__(Cyc_Tctyp_i_check_type(_T10,_T12,_T13,1,0))_T1D=Cyc_Tctyp_i_check_type(_T10,_T12,_T13,1,0);*_TE= _T1D;});goto _LL0;}case 38:{struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct*_T1D=(struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct*)_T1B;_T14= _T1D->f1;_T1C= (void*)_T14;}{void*t=_T1C;_T15= env;_T16= env;_T17= *_T16;_T18= & Cyc_Kinds_ik;_T19= (struct Cyc_Absyn_Kind*)_T18;_T1A= t;
# 281
({__typeof__(Cyc_Tctyp_i_check_type(_T17,_T19,_T1A,1,0))_T1D=Cyc_Tctyp_i_check_type(_T17,_T19,_T1A,1,0);*_T15= _T1D;});goto _LL0;}default: goto _LL0;}_LL0:;}
# 286
return 1;}
# 288
static long Cyc_Tctyp_check_type_visit_f2(struct Cyc_Tctyp_CVTEnv*env,struct Cyc_Absyn_Stmt*s){int(*_T0)(unsigned,struct _fat_ptr,struct _fat_ptr);void*(*_T1)(unsigned,struct _fat_ptr,struct _fat_ptr);struct Cyc_Absyn_Stmt*_T2;unsigned _T3;struct _fat_ptr _T4;struct _fat_ptr _T5;_T1= Cyc_Warn_impos_loc;{
int(*_T6)(unsigned,struct _fat_ptr,struct _fat_ptr)=(int(*)(unsigned,struct _fat_ptr,struct _fat_ptr))_T1;_T0= _T6;}_T2= s;_T3= _T2->loc;_T4= _tag_fat("statement inside expression inside type",sizeof(char),40U);_T5= _tag_fat(0U,sizeof(void*),0);_T0(_T3,_T4,_T5);}
# 291
static struct Cyc_Tctyp_CVTEnv Cyc_Tctyp_i_check_type_level_exp(struct Cyc_Absyn_Exp*e,struct Cyc_Tctyp_CVTEnv env){void(*_T0)(long(*)(struct Cyc_Tctyp_CVTEnv*,struct Cyc_Absyn_Exp*),long(*)(struct Cyc_Tctyp_CVTEnv*,struct Cyc_Absyn_Stmt*),struct Cyc_Tctyp_CVTEnv*,struct Cyc_Absyn_Exp*);void(*_T1)(long(*)(void*,struct Cyc_Absyn_Exp*),long(*)(void*,struct Cyc_Absyn_Stmt*),void*,struct Cyc_Absyn_Exp*);struct Cyc_Tctyp_CVTEnv*_T2;struct Cyc_Tctyp_CVTEnv*_T3;struct Cyc_Absyn_Exp*_T4;struct Cyc_Tctyp_CVTEnv _T5;_T1= Cyc_Absyn_visit_exp;{
void(*_T6)(long(*)(struct Cyc_Tctyp_CVTEnv*,struct Cyc_Absyn_Exp*),long(*)(struct Cyc_Tctyp_CVTEnv*,struct Cyc_Absyn_Stmt*),struct Cyc_Tctyp_CVTEnv*,struct Cyc_Absyn_Exp*)=(void(*)(long(*)(struct Cyc_Tctyp_CVTEnv*,struct Cyc_Absyn_Exp*),long(*)(struct Cyc_Tctyp_CVTEnv*,struct Cyc_Absyn_Stmt*),struct Cyc_Tctyp_CVTEnv*,struct Cyc_Absyn_Exp*))_T1;_T0= _T6;}_T2= & env;_T3= (struct Cyc_Tctyp_CVTEnv*)_T2;_T4= e;_T0(Cyc_Tctyp_check_type_visit_f1,Cyc_Tctyp_check_type_visit_f2,_T3,_T4);_T5= env;
return _T5;}
# 335
static struct Cyc_Tctyp_CVTEnv Cyc_Tctyp_check_type_inst(struct Cyc_Tctyp_CVTEnv env,struct Cyc_List_List**targsp,struct Cyc_List_List*tvs,struct Cyc_Absyn_Kind*expected_kind,long allow_abs_aggr,struct _tuple1*typname,struct Cyc_Absyn_Typedefdecl*td){struct Cyc_List_List**_T0;struct Cyc_Tctyp_CVTEnv _T1;struct Cyc_Tctyp_CVTEnv _T2;struct Cyc_List_List*_T3;struct Cyc_List_List*_T4;void*_T5;struct _tuple0 _T6;struct Cyc_Absyn_Tvar*_T7;void*_T8;void*_T9;int*_TA;unsigned _TB;void*_TC;int*_TD;int _TE;void*_TF;struct Cyc_Tctyp_CVTEnv _T10;unsigned _T11;struct Cyc_Tctyp_CVTEnv _T12;struct Cyc_List_List*_T13;struct Cyc_Absyn_Tvar*_T14;struct Cyc_Tctyp_CVTEnv _T15;long _T16;struct Cyc_Tctyp_CVTEnv _T17;struct Cyc_List_List*_T18;struct Cyc_Absyn_Tvar*_T19;void*_T1A;struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*_T1B;struct Cyc_Absyn_Kind*_T1C;struct Cyc_Absyn_Kind*_T1D;enum Cyc_Absyn_KindQual _T1E;void*_T1F;int*_T20;int _T21;void*_T22;struct Cyc_List_List*_T23;void*_T24;struct Cyc_Tctyp_CVTEnv _T25;struct Cyc_Absyn_Kind*_T26;struct Cyc_Absyn_Kind*_T27;struct Cyc_List_List*_T28;void*_T29;long _T2A;struct Cyc_Absyn_Tvar*_T2B;struct Cyc_Absyn_Kind*_T2C;struct Cyc_Absyn_Kind*_T2D;struct Cyc_Tctyp_CVTEnv _T2E;unsigned _T2F;void*_T30;struct Cyc_List_List*_T31;struct Cyc_List_List*_T32;struct Cyc_Warn_String_Warn_Warg_struct _T33;struct Cyc_Warn_Qvar_Warn_Warg_struct _T34;struct Cyc_Tctyp_CVTEnv _T35;unsigned _T36;struct _fat_ptr _T37;struct Cyc_List_List*_T38;struct Cyc_List_List*_T39;void*_T3A;struct Cyc_Absyn_Tvar*_T3B;struct Cyc_Absyn_Kind*_T3C;struct Cyc_Absyn_Kind*_T3D;struct Cyc_List_List*_T3E;struct Cyc_List_List**_T3F;struct Cyc_List_List**_T40;struct Cyc_List_List*_T41;struct Cyc_List_List*_T42;struct Cyc_Tctyp_CVTEnv _T43;_T0= targsp;{
# 339
struct Cyc_List_List*targs=*_T0;_T1= env;{
long old_inst_evar=_T1.inst_type_evar;_T2= env;
env.inst_type_evar= _T2.generalize_evars;
_TL52: if(targs!=0)goto _TL53;else{goto _TL51;}_TL53: if(tvs!=0)goto _TL50;else{goto _TL51;}
_TL50: _T3= targs;{void*t=_T3->hd;_T4= tvs;_T5= _T4->hd;{
struct Cyc_Absyn_Tvar*tv=(struct Cyc_Absyn_Tvar*)_T5;{struct _tuple0 _T44;_T7= tv;_T8= _T7->kind;
# 347
({__typeof__(Cyc_Kinds_compress_kb(_T8))_T45=Cyc_Kinds_compress_kb(_T8);_T44.f0= _T45;});_T44.f1= t;_T6= _T44;}{struct _tuple0 _T44=_T6;struct Cyc_Absyn_Tvar*_T45;_T9= _T44.f0;_TA= (int*)_T9;_TB= *_TA;switch(_TB){case 1: _TC= _T44.f1;_TD= (int*)_TC;_TE= *_TD;if(_TE!=2)goto _TL55;_TF= _T44.f1;{struct Cyc_Absyn_VarType_Absyn_Type_struct*_T46=(struct Cyc_Absyn_VarType_Absyn_Type_struct*)_TF;_T45= _T46->f1;}{struct Cyc_Absyn_Tvar*tv2=_T45;_T10= env;_T11= _T10.loc;_T12= env;_T13= _T12.kind_env;_T14= tv2;_T15= env;_T16= _T15.allow_aqual_bounds;
# 349
({__typeof__(Cyc_Tctyp_add_free_tvar(_T11,_T13,_T14,_T16))_T46=Cyc_Tctyp_add_free_tvar(_T11,_T13,_T14,_T16);env.kind_env= _T46;});_T17= env;_T18= _T17.free_vars;_T19= tv2;
({__typeof__(Cyc_Tctyp_fast_add_free_tvar_bool(_T18,_T19,1))_T46=Cyc_Tctyp_fast_add_free_tvar_bool(_T18,_T19,1);env.free_vars= _T46;});goto _TL4F;}_TL55: goto _LL5;case 0: _T1A= _T44.f0;_T1B= (struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*)_T1A;_T1C= _T1B->f1;_T1D= (struct Cyc_Absyn_Kind*)_T1C;_T1E= _T1D->kind;if(_T1E!=Cyc_Absyn_AqualKind)goto _TL57;_T1F= _T44.f1;_T20= (int*)_T1F;_T21= *_T20;if(_T21!=2)goto _TL59;_T22= _T44.f1;{struct Cyc_Absyn_VarType_Absyn_Type_struct*_T46=(struct Cyc_Absyn_VarType_Absyn_Type_struct*)_T22;_T45= _T46->f1;}{struct Cyc_Absyn_Tvar*tv2=_T45;_T23= targs;_T24= 
# 354
Cyc_Absyn_aqual_var_type(t,Cyc_Absyn_al_qual_type);_T23->hd= (void*)_T24;_T25= env;_T26= & Cyc_Kinds_aqk;_T27= (struct Cyc_Absyn_Kind*)_T26;_T28= targs;_T29= _T28->hd;_T2A= allow_abs_aggr;
env= Cyc_Tctyp_i_check_type(_T25,_T27,_T29,1,_T2A);goto _TL4F;}_TL59: goto _LL5;_TL57: goto _LL5;default: _LL5: goto _LL0;}_LL0:;}_T2B= tv;_T2C= & Cyc_Kinds_bk;_T2D= (struct Cyc_Absyn_Kind*)_T2C;{
# 360
struct Cyc_Absyn_Kind*k=Cyc_Kinds_tvar_kind(_T2B,_T2D);
env= Cyc_Tctyp_i_check_type(env,k,t,1,allow_abs_aggr);_T2E= env;_T2F= _T2E.loc;_T30= t;
Cyc_Tcutil_check_no_qual(_T2F,_T30);}}}_TL4F: _T31= targs;
# 342
targs= _T31->tl;_T32= tvs;tvs= _T32->tl;goto _TL52;_TL51:
# 364
 if(targs==0)goto _TL5B;{struct Cyc_Warn_String_Warn_Warg_struct _T44;_T44.tag= 0;
({__typeof__(_tag_fat("too many type arguments for ",sizeof(char),29U))_T45=_tag_fat("too many type arguments for ",sizeof(char),29U);_T44.f1= _T45;});_T33= _T44;}{struct Cyc_Warn_String_Warn_Warg_struct _T44=_T33;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T45;_T45.tag= 1;_T45.f1= typname;_T34= _T45;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T45=_T34;void*_T46[2];_T46[0]= & _T44;_T46[1]= & _T45;_T35= env;_T36= _T35.loc;_T37= _tag_fat(_T46,sizeof(void*),2);Cyc_Warn_err2(_T36,_T37);}}goto _TL5C;_TL5B: _TL5C: {
# 367
struct Cyc_List_List*hidden_ts=0;
_TL60: if(tvs!=0)goto _TL5E;else{goto _TL5F;}
_TL5E:{void*e=Cyc_Absyn_new_evar(0,0);{struct Cyc_List_List*_T44=_cycalloc(sizeof(struct Cyc_List_List));
_T44->hd= e;_T44->tl= hidden_ts;_T38= (struct Cyc_List_List*)_T44;}hidden_ts= _T38;_T39= tvs;_T3A= _T39->hd;_T3B= (struct Cyc_Absyn_Tvar*)_T3A;_T3C= & Cyc_Kinds_bk;_T3D= (struct Cyc_Absyn_Kind*)_T3C;{
# 372
struct Cyc_Absyn_Kind*k=Cyc_Kinds_tvar_kind(_T3B,_T3D);
env= Cyc_Tctyp_i_check_type(env,k,e,1,allow_abs_aggr);}}_T3E= tvs;
# 368
tvs= _T3E->tl;goto _TL60;_TL5F: _T3F= targsp;_T40= targsp;_T41= *_T40;_T42= 
# 375
Cyc_List_imp_rev(hidden_ts);({__typeof__(Cyc_List_imp_append(_T41,_T42))_T44=Cyc_List_imp_append(_T41,_T42);*_T3F= _T44;});
env.inst_type_evar= old_inst_evar;_T43= env;
return _T43;}}}}struct _tuple17{struct Cyc_Tctyp_CVTEnv f0;struct Cyc_AssnDef_AssnMap f1;};
# 381
static struct _tuple17 Cyc_Tctyp_check_clause(struct Cyc_Tctyp_CVTEnv env,struct _fat_ptr clause_name,struct Cyc_Absyn_Exp*clause){struct _tuple17 _T0;struct Cyc_Tctyp_CVTEnv _T1;struct Cyc_Tcenv_Tenv*_T2;struct Cyc_Absyn_Exp*_T3;long _T4;struct Cyc_Warn_String_Warn_Warg_struct _T5;struct Cyc_Warn_String_Warn_Warg_struct _T6;struct Cyc_Warn_TypOpt_Warn_Warg_struct _T7;struct Cyc_Absyn_Exp*_T8;struct Cyc_Warn_String_Warn_Warg_struct _T9;struct Cyc_Tctyp_CVTEnv _TA;unsigned _TB;struct _fat_ptr _TC;struct _tuple17 _TD;
# 383
if(clause!=0)goto _TL61;{struct _tuple17 _TE;
_TE.f0= env;({__typeof__(Cyc_AssnDef_true_assnmap())_TF=Cyc_AssnDef_true_assnmap();_TE.f1= _TF;});_T0= _TE;}return _T0;_TL61: _T1= env;_T2= _T1.te;_T3= clause;
Cyc_Tcexp_tcExp(_T2,0,_T3);_T4= 
Cyc_Tcutil_is_integral(clause);if(_T4)goto _TL63;else{goto _TL65;}
_TL65:{struct Cyc_Warn_String_Warn_Warg_struct _TE;_TE.tag= 0;_TE.f1= clause_name;_T5= _TE;}{struct Cyc_Warn_String_Warn_Warg_struct _TE=_T5;{struct Cyc_Warn_String_Warn_Warg_struct _TF;_TF.tag= 0;({__typeof__(_tag_fat(" clause has type ",sizeof(char),18U))_T10=_tag_fat(" clause has type ",sizeof(char),18U);_TF.f1= _T10;});_T6= _TF;}{struct Cyc_Warn_String_Warn_Warg_struct _TF=_T6;{struct Cyc_Warn_TypOpt_Warn_Warg_struct _T10;_T10.tag= 3;_T8= clause;_T10.f1= _T8->topt;_T7= _T10;}{struct Cyc_Warn_TypOpt_Warn_Warg_struct _T10=_T7;{struct Cyc_Warn_String_Warn_Warg_struct _T11;_T11.tag= 0;({__typeof__(_tag_fat(" instead of integral type",sizeof(char),26U))_T12=_tag_fat(" instead of integral type",sizeof(char),26U);_T11.f1= _T12;});_T9= _T11;}{struct Cyc_Warn_String_Warn_Warg_struct _T11=_T9;void*_T12[4];_T12[0]= & _TE;_T12[1]= & _TF;_T12[2]= & _T10;_T12[3]= & _T11;_TA= env;_TB= _TA.loc;_TC= _tag_fat(_T12,sizeof(void*),4);Cyc_Warn_err2(_TB,_TC);}}}}goto _TL64;_TL63: _TL64:
 env= Cyc_Tctyp_i_check_type_level_exp(clause,env);{
struct Cyc_AssnDef_AssnMap assnmap=Cyc_Vcgen_clause2assn(clause);{struct _tuple17 _TE;
_TE.f0= env;_TE.f1= assnmap;_TD= _TE;}return _TD;}}
# 394
static struct Cyc_Tctyp_CVTEnv Cyc_Tctyp_i_check_aggr(struct Cyc_Tctyp_CVTEnv env,struct Cyc_Absyn_Kind*expected_kind,union Cyc_Absyn_AggrInfo*info,struct Cyc_List_List**targs,long allow_abs_aggr){struct Cyc_Tctyp_CVTEnv _T0;struct Cyc_Tctyp_CVTEnv _T1;union Cyc_Absyn_AggrInfo*_T2;struct _union_AggrInfo_UnknownAggr _T3;unsigned _T4;struct _union_AggrInfo_UnknownAggr _T5;struct _tuple3 _T6;struct _union_AggrInfo_UnknownAggr _T7;struct _tuple3 _T8;struct _union_AggrInfo_UnknownAggr _T9;struct _tuple3 _TA;struct _handler_cons*_TB;int _TC;struct Cyc_Absyn_Aggrdecl**_TD;struct Cyc_Absyn_Aggrdecl*_TE;enum Cyc_Absyn_AggrKind _TF;int _T10;enum Cyc_Absyn_AggrKind _T11;int _T12;struct Cyc_Absyn_Aggrdecl*_T13;enum Cyc_Absyn_AggrKind _T14;int _T15;struct Cyc_Warn_String_Warn_Warg_struct _T16;struct Cyc_Warn_Qvar_Warn_Warg_struct _T17;struct Cyc_Warn_String_Warn_Warg_struct _T18;struct Cyc_Warn_Qvar_Warn_Warg_struct _T19;unsigned _T1A;struct _fat_ptr _T1B;struct Cyc_Warn_String_Warn_Warg_struct _T1C;struct Cyc_Warn_Qvar_Warn_Warg_struct _T1D;struct Cyc_Warn_String_Warn_Warg_struct _T1E;struct Cyc_Warn_Qvar_Warn_Warg_struct _T1F;unsigned _T20;struct _fat_ptr _T21;struct Cyc_Core_Opt*_T22;unsigned _T23;struct Cyc_Core_Opt*_T24;void*_T25;long _T26;struct Cyc_Absyn_Aggrdecl*_T27;struct Cyc_Absyn_AggrdeclImpl*_T28;unsigned _T29;struct Cyc_Absyn_Aggrdecl*_T2A;struct Cyc_Absyn_AggrdeclImpl*_T2B;long _T2C;struct Cyc_Warn_String_Warn_Warg_struct _T2D;struct Cyc_Warn_Qvar_Warn_Warg_struct _T2E;unsigned _T2F;struct _fat_ptr _T30;union Cyc_Absyn_AggrInfo*_T31;void*_T32;struct Cyc_Dict_Absent_exn_struct*_T33;char*_T34;char*_T35;struct Cyc_Tcenv_Tenv*_T36;unsigned _T37;struct Cyc_Absyn_Aggrdecl*_T38;union Cyc_Absyn_AggrInfo*_T39;struct Cyc_List_List**_T3A;struct Cyc_List_List*_T3B;struct Cyc_Warn_String_Warn_Warg_struct _T3C;struct Cyc_Warn_Qvar_Warn_Warg_struct _T3D;struct Cyc_Warn_String_Warn_Warg_struct _T3E;unsigned _T3F;struct _fat_ptr _T40;struct Cyc_Tctyp_CVTEnv _T41;struct Cyc_Absyn_Aggrdecl**_T42;struct _union_AggrInfo_KnownAggr _T43;struct Cyc_Absyn_Aggrdecl**_T44;struct Cyc_Tctyp_CVTEnv _T45;struct Cyc_List_List**_T46;struct Cyc_Absyn_Aggrdecl*_T47;struct Cyc_List_List*_T48;struct Cyc_Absyn_Kind*_T49;long _T4A;struct Cyc_Absyn_Aggrdecl*_T4B;struct _tuple1*_T4C;long _T4D;struct Cyc_Absyn_Aggrdecl*_T4E;struct Cyc_Absyn_AggrdeclImpl*_T4F;struct Cyc_Absyn_Kind*_T50;struct Cyc_Absyn_Kind*_T51;struct Cyc_Absyn_Kind*_T52;long _T53;struct Cyc_Absyn_Aggrdecl*_T54;struct Cyc_Tctyp_CVTEnv _T55;struct Cyc_Tcenv_Tenv*_T56;unsigned _T57;_T0= env;_T57= _T0.loc;_T1= env;_T56= _T1.te;{unsigned loc=_T57;struct Cyc_Tcenv_Tenv*te=_T56;_T2= info;{
# 397
union Cyc_Absyn_AggrInfo _T58=*_T2;struct Cyc_Absyn_Aggrdecl*_T59;struct Cyc_Core_Opt*_T5A;struct _tuple1*_T5B;enum Cyc_Absyn_AggrKind _T5C;_T3= _T58.UnknownAggr;_T4= _T3.tag;if(_T4!=1)goto _TL66;_T5= _T58.UnknownAggr;_T6= _T5.val;_T5C= _T6.f0;_T7= _T58.UnknownAggr;_T8= _T7.val;_T5B= _T8.f1;_T9= _T58.UnknownAggr;_TA= _T9.val;_T5A= _TA.f2;{enum Cyc_Absyn_AggrKind k=_T5C;struct _tuple1*n=_T5B;struct Cyc_Core_Opt*tgd=_T5A;
# 399
struct Cyc_Absyn_Aggrdecl**adp;{struct _handler_cons _T5D;_TB= & _T5D;_push_handler(_TB);{int _T5E=0;_TC= setjmp(_T5D.handler);if(!_TC)goto _TL68;_T5E= 1;goto _TL69;_TL68: _TL69: if(_T5E)goto _TL6A;else{goto _TL6C;}_TL6C:
# 401
 adp= Cyc_Tcenv_lookup_aggrdecl(te,loc,n);_TD= adp;{
struct Cyc_Absyn_Aggrdecl*ad=*_TD;_TE= ad;_TF= _TE->kind;_T10= (int)_TF;_T11= k;_T12= (int)_T11;
if(_T10==_T12)goto _TL6D;_T13= ad;_T14= _T13->kind;_T15= (int)_T14;
if(_T15!=0)goto _TL6F;{struct Cyc_Warn_String_Warn_Warg_struct _T5F;_T5F.tag= 0;
({__typeof__(_tag_fat("expecting struct ",sizeof(char),18U))_T60=_tag_fat("expecting struct ",sizeof(char),18U);_T5F.f1= _T60;});_T16= _T5F;}{struct Cyc_Warn_String_Warn_Warg_struct _T5F=_T16;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T60;_T60.tag= 1;_T60.f1= n;_T17= _T60;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T60=_T17;{struct Cyc_Warn_String_Warn_Warg_struct _T61;_T61.tag= 0;({__typeof__(_tag_fat("instead of union ",sizeof(char),18U))_T62=_tag_fat("instead of union ",sizeof(char),18U);_T61.f1= _T62;});_T18= _T61;}{struct Cyc_Warn_String_Warn_Warg_struct _T61=_T18;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T62;_T62.tag= 1;_T62.f1= n;_T19= _T62;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T62=_T19;void*_T63[4];_T63[0]= & _T5F;_T63[1]= & _T60;_T63[2]= & _T61;_T63[3]= & _T62;_T1A= loc;_T1B= _tag_fat(_T63,sizeof(void*),4);Cyc_Warn_err2(_T1A,_T1B);}}}}goto _TL70;
# 407
_TL6F:{struct Cyc_Warn_String_Warn_Warg_struct _T5F;_T5F.tag= 0;({__typeof__(_tag_fat("expecting union ",sizeof(char),17U))_T60=_tag_fat("expecting union ",sizeof(char),17U);_T5F.f1= _T60;});_T1C= _T5F;}{struct Cyc_Warn_String_Warn_Warg_struct _T5F=_T1C;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T60;_T60.tag= 1;_T60.f1= n;_T1D= _T60;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T60=_T1D;{struct Cyc_Warn_String_Warn_Warg_struct _T61;_T61.tag= 0;({__typeof__(_tag_fat("instead of struct ",sizeof(char),19U))_T62=_tag_fat("instead of struct ",sizeof(char),19U);_T61.f1= _T62;});_T1E= _T61;}{struct Cyc_Warn_String_Warn_Warg_struct _T61=_T1E;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T62;_T62.tag= 1;_T62.f1= n;_T1F= _T62;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T62=_T1F;void*_T63[4];_T63[0]= & _T5F;_T63[1]= & _T60;_T63[2]= & _T61;_T63[3]= & _T62;_T20= loc;_T21= _tag_fat(_T63,sizeof(void*),4);Cyc_Warn_err2(_T20,_T21);}}}}_TL70: goto _TL6E;_TL6D: _TL6E: _T22= tgd;_T23= (unsigned)_T22;
# 409
if(!_T23)goto _TL71;_T24= tgd;_T25= _T24->v;_T26= (long)_T25;if(!_T26)goto _TL71;_T27= ad;_T28= _T27->impl;_T29= (unsigned)_T28;if(_T29)goto _TL74;else{goto _TL73;}_TL74: _T2A= ad;_T2B= _T2A->impl;_T2C= _T2B->tagged;if(_T2C)goto _TL71;else{goto _TL73;}
_TL73:{struct Cyc_Warn_String_Warn_Warg_struct _T5F;_T5F.tag= 0;({__typeof__(_tag_fat("@tagged qualfiers don't agree on union ",sizeof(char),40U))_T60=_tag_fat("@tagged qualfiers don't agree on union ",sizeof(char),40U);_T5F.f1= _T60;});_T2D= _T5F;}{struct Cyc_Warn_String_Warn_Warg_struct _T5F=_T2D;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T60;_T60.tag= 1;_T60.f1= n;_T2E= _T60;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T60=_T2E;void*_T61[2];_T61[0]= & _T5F;_T61[1]= & _T60;_T2F= loc;_T30= _tag_fat(_T61,sizeof(void*),2);Cyc_Warn_err2(_T2F,_T30);}}goto _TL72;_TL71: _TL72: _T31= info;
# 412
({__typeof__(Cyc_Absyn_KnownAggr(adp))_T5F=Cyc_Absyn_KnownAggr(adp);*_T31= _T5F;});}_pop_handler();goto _TL6B;_TL6A: _T32= Cyc_Core_get_exn_thrown();{void*_T5F=(void*)_T32;void*_T60;_T33= (struct Cyc_Dict_Absent_exn_struct*)_T5F;_T34= _T33->tag;_T35= Cyc_Dict_Absent;if(_T34!=_T35)goto _TL75;_T36= te;_T37= loc;{struct Cyc_Absyn_Aggrdecl*_T61=_cycalloc(sizeof(struct Cyc_Absyn_Aggrdecl));
# 417
_T61->kind= k;_T61->sc= 3U;_T61->name= n;_T61->tvs= 0;_T61->impl= 0;_T61->attributes= 0;_T61->expected_mem_kind= 0;_T38= (struct Cyc_Absyn_Aggrdecl*)_T61;}Cyc_Tc_tcAggrdecl(_T36,_T37,_T38);
adp= Cyc_Tcenv_lookup_aggrdecl(te,loc,n);_T39= info;
({__typeof__(Cyc_Absyn_KnownAggr(adp))_T61=Cyc_Absyn_KnownAggr(adp);*_T39= _T61;});_T3A= targs;_T3B= *_T3A;
# 421
if(_T3B==0)goto _TL77;{struct Cyc_Warn_String_Warn_Warg_struct _T61;_T61.tag= 0;
({__typeof__(_tag_fat("declare parameterized type ",sizeof(char),28U))_T62=_tag_fat("declare parameterized type ",sizeof(char),28U);_T61.f1= _T62;});_T3C= _T61;}{struct Cyc_Warn_String_Warn_Warg_struct _T61=_T3C;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T62;_T62.tag= 1;_T62.f1= n;_T3D= _T62;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T62=_T3D;{struct Cyc_Warn_String_Warn_Warg_struct _T63;_T63.tag= 0;({__typeof__(_tag_fat(" before using",sizeof(char),14U))_T64=_tag_fat(" before using",sizeof(char),14U);_T63.f1= _T64;});_T3E= _T63;}{struct Cyc_Warn_String_Warn_Warg_struct _T63=_T3E;void*_T64[3];_T64[0]= & _T61;_T64[1]= & _T62;_T64[2]= & _T63;_T3F= loc;_T40= _tag_fat(_T64,sizeof(void*),3);Cyc_Warn_err2(_T3F,_T40);}}}_T41= env;
return _T41;_TL77: goto _LL8;_TL75: _T60= _T5F;{void*exn=_T60;_rethrow(exn);}_LL8:;}_TL6B:;}}_T42= adp;_T59= *_T42;goto _LL7;}_TL66: _T43= _T58.KnownAggr;_T44= _T43.val;{struct Cyc_Absyn_Aggrdecl*_T5D=*_T44;_T59= _T5D;}_LL7:{struct Cyc_Absyn_Aggrdecl*ad=_T59;_T45= env;_T46= targs;_T47= ad;_T48= _T47->tvs;_T49= expected_kind;_T4A= allow_abs_aggr;_T4B= ad;_T4C= _T4B->name;
# 429
env= Cyc_Tctyp_check_type_inst(_T45,_T46,_T48,_T49,_T4A,_T4C,0);_T4D= allow_abs_aggr;
if(!_T4D)goto _TL79;_T4E= ad;_T4F= _T4E->impl;if(_T4F!=0)goto _TL79;_T50= & Cyc_Kinds_ak;_T51= (struct Cyc_Absyn_Kind*)_T50;_T52= expected_kind;_T53= Cyc_Kinds_kind_leq(_T51,_T52);if(_T53)goto _TL79;else{goto _TL7B;}
# 434
_TL7B: _T54= ad;_T54->expected_mem_kind= 1;goto _TL7A;_TL79: _TL7A: _T55= env;
return _T55;};}}}
# 440
static struct Cyc_Tctyp_CVTEnv Cyc_Tctyp_i_check_datatype(struct Cyc_Tctyp_CVTEnv env,struct Cyc_Absyn_Kind*expected_kind,union Cyc_Absyn_DatatypeInfo*info,struct Cyc_List_List**targsp,long allow_abs_aggr){struct Cyc_Tctyp_CVTEnv _T0;struct Cyc_Tctyp_CVTEnv _T1;struct Cyc_List_List**_T2;union Cyc_Absyn_DatatypeInfo*_T3;struct _union_DatatypeInfo_UnknownDatatype _T4;unsigned _T5;struct _union_DatatypeInfo_UnknownDatatype _T6;struct Cyc_Absyn_UnknownDatatypeInfo _T7;struct _union_DatatypeInfo_UnknownDatatype _T8;struct Cyc_Absyn_UnknownDatatypeInfo _T9;struct _handler_cons*_TA;int _TB;void*_TC;struct Cyc_Dict_Absent_exn_struct*_TD;char*_TE;char*_TF;struct Cyc_Tcenv_Tenv*_T10;unsigned _T11;struct Cyc_Absyn_Datatypedecl*_T12;struct Cyc_Warn_String_Warn_Warg_struct _T13;struct Cyc_Warn_Qvar_Warn_Warg_struct _T14;struct Cyc_Warn_String_Warn_Warg_struct _T15;unsigned _T16;struct _fat_ptr _T17;struct Cyc_Tctyp_CVTEnv _T18;long _T19;struct Cyc_Absyn_Datatypedecl**_T1A;struct Cyc_Absyn_Datatypedecl*_T1B;long _T1C;struct Cyc_Warn_String_Warn_Warg_struct _T1D;struct Cyc_Warn_Qvar_Warn_Warg_struct _T1E;struct Cyc_Warn_String_Warn_Warg_struct _T1F;unsigned _T20;struct _fat_ptr _T21;union Cyc_Absyn_DatatypeInfo*_T22;struct Cyc_Absyn_Datatypedecl**_T23;struct _union_DatatypeInfo_KnownDatatype _T24;struct Cyc_Absyn_Datatypedecl**_T25;struct Cyc_Tctyp_CVTEnv _T26;struct Cyc_List_List**_T27;struct Cyc_Absyn_Datatypedecl*_T28;struct Cyc_List_List*_T29;struct Cyc_Absyn_Kind*_T2A;long _T2B;struct Cyc_Absyn_Datatypedecl*_T2C;struct _tuple1*_T2D;struct Cyc_Tctyp_CVTEnv _T2E;struct Cyc_Tcenv_Tenv*_T2F;unsigned _T30;_T0= env;_T30= _T0.loc;_T1= env;_T2F= _T1.te;{unsigned loc=_T30;struct Cyc_Tcenv_Tenv*te=_T2F;_T2= targsp;{
# 443
struct Cyc_List_List*targs=*_T2;_T3= info;{
union Cyc_Absyn_DatatypeInfo _T31=*_T3;struct Cyc_Absyn_Datatypedecl*_T32;long _T33;struct _tuple1*_T34;_T4= _T31.UnknownDatatype;_T5= _T4.tag;if(_T5!=1)goto _TL7C;_T6= _T31.UnknownDatatype;_T7= _T6.val;_T34= _T7.name;_T8= _T31.UnknownDatatype;_T9= _T8.val;_T33= _T9.is_extensible;{struct _tuple1*n=_T34;long is_x=_T33;
# 446
struct Cyc_Absyn_Datatypedecl**tudp;{struct _handler_cons _T35;_TA= & _T35;_push_handler(_TA);{int _T36=0;_TB= setjmp(_T35.handler);if(!_TB)goto _TL7E;_T36= 1;goto _TL7F;_TL7E: _TL7F: if(_T36)goto _TL80;else{goto _TL82;}_TL82:
# 448
 tudp= Cyc_Tcenv_lookup_datatypedecl(te,loc,n);_pop_handler();goto _TL81;_TL80: _TC= Cyc_Core_get_exn_thrown();{void*_T37=(void*)_TC;void*_T38;_TD= (struct Cyc_Dict_Absent_exn_struct*)_T37;_TE= _TD->tag;_TF= Cyc_Dict_Absent;if(_TE!=_TF)goto _TL83;_T10= te;_T11= loc;{struct Cyc_Absyn_Datatypedecl*_T39=_cycalloc(sizeof(struct Cyc_Absyn_Datatypedecl));
# 453
_T39->sc= 3U;_T39->name= n;_T39->tvs= 0;_T39->fields= 0;_T39->is_extensible= is_x;_T12= (struct Cyc_Absyn_Datatypedecl*)_T39;}Cyc_Tc_tcDatatypedecl(_T10,_T11,_T12);
tudp= Cyc_Tcenv_lookup_datatypedecl(te,loc,n);
# 456
if(targs==0)goto _TL85;{struct Cyc_Warn_String_Warn_Warg_struct _T39;_T39.tag= 0;
({__typeof__(_tag_fat("declare parameterized datatype ",sizeof(char),32U))_T3A=_tag_fat("declare parameterized datatype ",sizeof(char),32U);_T39.f1= _T3A;});_T13= _T39;}{struct Cyc_Warn_String_Warn_Warg_struct _T39=_T13;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T3A;_T3A.tag= 1;_T3A.f1= n;_T14= _T3A;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T3A=_T14;{struct Cyc_Warn_String_Warn_Warg_struct _T3B;_T3B.tag= 0;({__typeof__(_tag_fat(" before using",sizeof(char),14U))_T3C=_tag_fat(" before using",sizeof(char),14U);_T3B.f1= _T3C;});_T15= _T3B;}{struct Cyc_Warn_String_Warn_Warg_struct _T3B=_T15;void*_T3C[3];_T3C[0]= & _T39;_T3C[1]= & _T3A;_T3C[2]= & _T3B;_T16= loc;_T17= _tag_fat(_T3C,sizeof(void*),3);Cyc_Warn_err2(_T16,_T17);}}}_T18= env;
return _T18;_TL85: goto _LL8;_TL83: _T38= _T37;{void*exn=_T38;_rethrow(exn);}_LL8:;}_TL81:;}}_T19= is_x;
# 464
if(!_T19)goto _TL87;_T1A= tudp;_T1B= *_T1A;_T1C= _T1B->is_extensible;if(_T1C)goto _TL87;else{goto _TL89;}
_TL89:{struct Cyc_Warn_String_Warn_Warg_struct _T35;_T35.tag= 0;({__typeof__(_tag_fat("datatype ",sizeof(char),10U))_T36=_tag_fat("datatype ",sizeof(char),10U);_T35.f1= _T36;});_T1D= _T35;}{struct Cyc_Warn_String_Warn_Warg_struct _T35=_T1D;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T36;_T36.tag= 1;_T36.f1= n;_T1E= _T36;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T36=_T1E;{struct Cyc_Warn_String_Warn_Warg_struct _T37;_T37.tag= 0;({__typeof__(_tag_fat(" was not declared @extensible",sizeof(char),30U))_T38=_tag_fat(" was not declared @extensible",sizeof(char),30U);_T37.f1= _T38;});_T1F= _T37;}{struct Cyc_Warn_String_Warn_Warg_struct _T37=_T1F;void*_T38[3];_T38[0]= & _T35;_T38[1]= & _T36;_T38[2]= & _T37;_T20= loc;_T21= _tag_fat(_T38,sizeof(void*),3);Cyc_Warn_err2(_T20,_T21);}}}goto _TL88;_TL87: _TL88: _T22= info;
({__typeof__(Cyc_Absyn_KnownDatatype(tudp))_T35=Cyc_Absyn_KnownDatatype(tudp);*_T22= _T35;});_T23= tudp;_T32= *_T23;goto _LL7;}_TL7C: _T24= _T31.KnownDatatype;_T25= _T24.val;{struct Cyc_Absyn_Datatypedecl*_T35=*_T25;_T32= _T35;}_LL7:{struct Cyc_Absyn_Datatypedecl*tud=_T32;_T26= env;_T27= targsp;_T28= tud;_T29= _T28->tvs;_T2A= expected_kind;_T2B= allow_abs_aggr;_T2C= tud;_T2D= _T2C->name;_T2E= 
# 469
Cyc_Tctyp_check_type_inst(_T26,_T27,_T29,_T2A,_T2B,_T2D,0);return _T2E;};}}}}
# 474
static struct Cyc_Tctyp_CVTEnv Cyc_Tctyp_i_check_datatype_field(struct Cyc_Tctyp_CVTEnv env,struct Cyc_Absyn_Kind*expected_kind,union Cyc_Absyn_DatatypeFieldInfo*info,struct Cyc_List_List**targsp,long allow_abs_aggr){union Cyc_Absyn_DatatypeFieldInfo*_T0;struct _union_DatatypeFieldInfo_UnknownDatatypefield _T1;unsigned _T2;struct _union_DatatypeFieldInfo_UnknownDatatypefield _T3;struct Cyc_Absyn_UnknownDatatypeFieldInfo _T4;struct _union_DatatypeFieldInfo_UnknownDatatypefield _T5;struct Cyc_Absyn_UnknownDatatypeFieldInfo _T6;struct _union_DatatypeFieldInfo_UnknownDatatypefield _T7;struct Cyc_Absyn_UnknownDatatypeFieldInfo _T8;struct Cyc_Tctyp_CVTEnv _T9;struct Cyc_Tcenv_Tenv*_TA;struct Cyc_Tctyp_CVTEnv _TB;unsigned _TC;struct _tuple1*_TD;struct Cyc_Absyn_Datatypedecl**_TE;struct Cyc_Absyn_Datatypedecl*_TF;struct Cyc_Core_Opt*_T10;struct Cyc_Core_Opt*_T11;void*_T12;struct Cyc_Warn_String_Warn_Warg_struct _T13;int(*_T14)(struct _fat_ptr);void*(*_T15)(struct _fat_ptr);struct _fat_ptr _T16;struct Cyc_List_List*_T17;void*_T18;struct Cyc_Absyn_Datatypefield*_T19;struct _tuple1*_T1A;struct _tuple1*_T1B;int _T1C;struct Cyc_List_List*_T1D;void*_T1E;struct Cyc_List_List*_T1F;union Cyc_Absyn_DatatypeFieldInfo*_T20;struct _union_DatatypeFieldInfo_KnownDatatypefield _T21;struct _tuple2 _T22;struct _union_DatatypeFieldInfo_KnownDatatypefield _T23;struct _tuple2 _T24;struct Cyc_Tctyp_CVTEnv _T25;struct Cyc_List_List**_T26;struct Cyc_Absyn_Datatypedecl*_T27;struct Cyc_List_List*_T28;struct Cyc_Absyn_Kind*_T29;long _T2A;struct Cyc_Absyn_Datatypefield*_T2B;struct _tuple1*_T2C;struct Cyc_Tctyp_CVTEnv _T2D;_T0= info;{
# 477
union Cyc_Absyn_DatatypeFieldInfo _T2E=*_T0;struct Cyc_Absyn_Datatypefield*_T2F;struct Cyc_Absyn_Datatypedecl*_T30;long _T31;struct _tuple1*_T32;struct _tuple1*_T33;_T1= _T2E.UnknownDatatypefield;_T2= _T1.tag;if(_T2!=1)goto _TL8A;_T3= _T2E.UnknownDatatypefield;_T4= _T3.val;_T33= _T4.datatype_name;_T5= _T2E.UnknownDatatypefield;_T6= _T5.val;_T32= _T6.field_name;_T7= _T2E.UnknownDatatypefield;_T8= _T7.val;_T31= _T8.is_extensible;{struct _tuple1*tname=_T33;struct _tuple1*fname=_T32;long is_x=_T31;_T9= env;_TA= _T9.te;_TB= env;_TC= _TB.loc;_TD= tname;_TE= 
# 480
Cyc_Tcenv_lookup_datatypedecl(_TA,_TC,_TD);{struct Cyc_Absyn_Datatypedecl*tud=*_TE;
struct Cyc_Absyn_Datatypefield*tuf;_TF= tud;_T10= _TF->fields;_T11= 
# 485
_check_null(_T10);_T12= _T11->v;{struct Cyc_List_List*fs=(struct Cyc_List_List*)_T12;_TL8F: if(1)goto _TL8D;else{goto _TL8E;}
_TL8D: if(fs!=0)goto _TL90;{struct Cyc_Warn_String_Warn_Warg_struct _T34;_T34.tag= 0;
({__typeof__(_tag_fat("Tcutil found a bad datatypefield",sizeof(char),33U))_T35=_tag_fat("Tcutil found a bad datatypefield",sizeof(char),33U);_T34.f1= _T35;});_T13= _T34;}{struct Cyc_Warn_String_Warn_Warg_struct _T34=_T13;void*_T35[1];_T35[0]= & _T34;_T15= Cyc_Warn_impos2;{int(*_T36)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T15;_T14= _T36;}_T16= _tag_fat(_T35,sizeof(void*),1);_T14(_T16);}goto _TL91;_TL90: _TL91: _T17= fs;_T18= _T17->hd;_T19= (struct Cyc_Absyn_Datatypefield*)_T18;_T1A= _T19->name;_T1B= fname;_T1C= 
Cyc_Absyn_qvar_cmp(_T1A,_T1B);if(_T1C!=0)goto _TL92;_T1D= fs;_T1E= _T1D->hd;
tuf= (struct Cyc_Absyn_Datatypefield*)_T1E;goto _TL8E;_TL92: _T1F= fs;
# 485
fs= _T1F->tl;goto _TL8F;_TL8E:;}_T20= info;
# 493
({__typeof__(Cyc_Absyn_KnownDatatypefield(tud,tuf))_T34=Cyc_Absyn_KnownDatatypefield(tud,tuf);*_T20= _T34;});_T30= tud;_T2F= tuf;goto _LL4;}}_TL8A: _T21= _T2E.KnownDatatypefield;_T22= _T21.val;_T30= _T22.f0;_T23= _T2E.KnownDatatypefield;_T24= _T23.val;_T2F= _T24.f1;_LL4:{struct Cyc_Absyn_Datatypedecl*tud=_T30;struct Cyc_Absyn_Datatypefield*tuf=_T2F;_T25= env;_T26= targsp;_T27= tud;_T28= _T27->tvs;_T29= expected_kind;_T2A= allow_abs_aggr;_T2B= tuf;_T2C= _T2B->name;_T2D= 
# 496
Cyc_Tctyp_check_type_inst(_T25,_T26,_T28,_T29,_T2A,_T2C,0);return _T2D;};}}
# 501
static struct Cyc_Tctyp_CVTEnv Cyc_Tctyp_i_check_unary_app(struct Cyc_Tctyp_CVTEnv env,struct Cyc_Absyn_Kind*k,struct Cyc_List_List*ts,long put_in_effect,struct _fat_ptr s){int _T0;struct Cyc_Warn_String_Warn_Warg_struct _T1;struct Cyc_Warn_String_Warn_Warg_struct _T2;int(*_T3)(struct _fat_ptr);void*(*_T4)(struct _fat_ptr);struct _fat_ptr _T5;struct Cyc_Tctyp_CVTEnv _T6;struct Cyc_Absyn_Kind*_T7;struct Cyc_List_List*_T8;void*_T9;long _TA;struct Cyc_Tctyp_CVTEnv _TB;_T0= 
# 503
Cyc_List_length(ts);if(_T0==1)goto _TL94;{struct Cyc_Warn_String_Warn_Warg_struct _TC;_TC.tag= 0;
_TC.f1= s;_T1= _TC;}{struct Cyc_Warn_String_Warn_Warg_struct _TC=_T1;{struct Cyc_Warn_String_Warn_Warg_struct _TD;_TD.tag= 0;({__typeof__(_tag_fat(" has wrong number of arguments",sizeof(char),31U))_TE=_tag_fat(" has wrong number of arguments",sizeof(char),31U);_TD.f1= _TE;});_T2= _TD;}{struct Cyc_Warn_String_Warn_Warg_struct _TD=_T2;void*_TE[2];_TE[0]= & _TC;_TE[1]= & _TD;_T4= Cyc_Warn_impos2;{int(*_TF)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T4;_T3= _TF;}_T5= _tag_fat(_TE,sizeof(void*),2);_T3(_T5);}}goto _TL95;_TL94: _TL95: _T6= env;_T7= k;_T8= 
_check_null(ts);_T9= _T8->hd;_TA= put_in_effect;_TB= Cyc_Tctyp_i_check_type(_T6,_T7,_T9,_TA,1);return _TB;}
# 508
static struct Cyc_Tctyp_CVTEnv Cyc_Tctyp_i_check_type_app(struct Cyc_Tctyp_CVTEnv env,struct Cyc_Absyn_Kind*expected_kind,void*c,struct Cyc_List_List**targsp,long put_in_effect,long allow_abs_aggr,void*apptype){struct Cyc_Tctyp_CVTEnv _T0;struct Cyc_Tctyp_CVTEnv _T1;struct Cyc_List_List**_T2;void*_T3;int*_T4;unsigned _T5;struct Cyc_Warn_Typ_Warn_Warg_struct _T6;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T7;struct Cyc_Warn_String_Warn_Warg_struct _T8;int(*_T9)(struct _fat_ptr);void*(*_TA)(struct _fat_ptr);struct _fat_ptr _TB;struct Cyc_Tctyp_CVTEnv _TC;struct Cyc_Warn_Typ_Warn_Warg_struct _TD;struct Cyc_Absyn_AppType_Absyn_Type_struct*_TE;struct Cyc_Warn_String_Warn_Warg_struct _TF;int(*_T10)(struct _fat_ptr);void*(*_T11)(struct _fat_ptr);struct _fat_ptr _T12;struct Cyc_Absyn_Kind*_T13;struct Cyc_Absyn_Kind*_T14;struct Cyc_Absyn_Kind*_T15;struct Cyc_Warn_String_Warn_Warg_struct _T16;struct Cyc_Warn_Kind_Warn_Warg_struct _T17;struct Cyc_Warn_String_Warn_Warg_struct _T18;unsigned _T19;struct _fat_ptr _T1A;struct Cyc_Tctyp_CVTEnv _T1B;struct Cyc_List_List*_T1C;struct Cyc_List_List*_T1D;struct Cyc_Warn_String_Warn_Warg_struct _T1E;int(*_T1F)(struct _fat_ptr);void*(*_T20)(struct _fat_ptr);struct _fat_ptr _T21;struct Cyc_Tctyp_CVTEnv _T22;struct Cyc_Absyn_Kind*_T23;struct Cyc_Absyn_Kind*_T24;struct Cyc_List_List*_T25;void*_T26;struct Cyc_Tctyp_CVTEnv _T27;int _T28;struct Cyc_Warn_String_Warn_Warg_struct _T29;int(*_T2A)(struct _fat_ptr);void*(*_T2B)(struct _fat_ptr);struct _fat_ptr _T2C;struct Cyc_Tctyp_CVTEnv _T2D;struct Cyc_Absyn_Kind*_T2E;struct Cyc_Absyn_Kind*_T2F;struct Cyc_List_List*_T30;void*_T31;struct Cyc_Tctyp_CVTEnv _T32;struct Cyc_Tcenv_Tenv*_T33;struct Cyc_List_List*_T34;struct Cyc_List_List*_T35;void*_T36;void*_T37;unsigned _T38;struct Cyc_List_List*_T39;struct Cyc_List_List*_T3A;struct Cyc_List_List*_T3B;void*_T3C;struct Cyc_Tctyp_CVTEnv _T3D;struct Cyc_Absyn_Kind*_T3E;struct Cyc_Absyn_Kind*_T3F;struct Cyc_List_List*_T40;struct Cyc_List_List*_T41;struct Cyc_List_List*_T42;void*_T43;struct Cyc_List_List*_T44;struct _tuple16*_T45;struct Cyc_Tctyp_CVTEnv _T46;struct Cyc_Tctyp_CVTEnv _T47;struct Cyc_Tctyp_CVTEnv _T48;struct Cyc_Absyn_Kind*_T49;struct Cyc_Absyn_Kind*_T4A;struct Cyc_List_List*_T4B;void*_T4C;struct Cyc_List_List*_T4D;struct Cyc_Tctyp_CVTEnv _T4E;struct Cyc_Tctyp_CVTEnv _T4F;struct Cyc_Absyn_Kind*_T50;struct Cyc_Absyn_Kind*_T51;struct Cyc_List_List*_T52;void*_T53;struct Cyc_List_List*_T54;struct Cyc_Tctyp_CVTEnv _T55;void*_T56;void*_T57;struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct*_T58;struct Cyc_Absyn_Enumdecl**_T59;struct Cyc_Warn_String_Warn_Warg_struct _T5A;int(*_T5B)(struct _fat_ptr);void*(*_T5C)(struct _fat_ptr);struct _fat_ptr _T5D;struct Cyc_Absyn_Enumdecl**_T5E;struct Cyc_Absyn_Enumdecl*_T5F;struct Cyc_Absyn_Enumdecl**_T60;struct Cyc_Absyn_Enumdecl*_T61;struct Cyc_Core_Opt*_T62;struct _handler_cons*_T63;int _T64;struct Cyc_Absyn_Enumdecl**_T65;struct Cyc_Absyn_Enumdecl**_T66;void*_T67;struct Cyc_Dict_Absent_exn_struct*_T68;char*_T69;char*_T6A;struct Cyc_Tcenv_Tenv*_T6B;unsigned _T6C;struct Cyc_Absyn_Enumdecl*_T6D;struct Cyc_Absyn_Enumdecl**_T6E;struct Cyc_Absyn_Enumdecl**_T6F;struct Cyc_Tctyp_CVTEnv _T70;void*_T71;struct Cyc_Warn_String_Warn_Warg_struct _T72;int(*_T73)(struct _fat_ptr);void*(*_T74)(struct _fat_ptr);struct _fat_ptr _T75;struct Cyc_List_List*_T76;void*_T77;long(*_T78)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*);long(*_T79)(int(*)(void*,void*),struct Cyc_List_List*,void*);int(*_T7A)(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_List_List*_T7B;struct Cyc_Absyn_Enumfield*_T7C;struct _tuple1*_T7D;struct _tuple1 _T7E;struct _fat_ptr*_T7F;long _T80;struct Cyc_Warn_String_Warn_Warg_struct _T81;struct Cyc_Warn_Qvar_Warn_Warg_struct _T82;struct Cyc_Absyn_Enumfield*_T83;struct Cyc_Absyn_Enumfield*_T84;unsigned _T85;struct _fat_ptr _T86;struct Cyc_List_List*_T87;struct Cyc_Absyn_Enumfield*_T88;struct _tuple1*_T89;struct _tuple1 _T8A;struct Cyc_Absyn_Enumfield*_T8B;struct Cyc_Absyn_Exp*_T8C;struct Cyc_Absyn_Enumfield*_T8D;unsigned _T8E;struct Cyc_Absyn_Enumfield*_T8F;unsigned _T90;struct Cyc_Absyn_Enumfield*_T91;struct Cyc_Absyn_Exp*_T92;long _T93;struct Cyc_Warn_String_Warn_Warg_struct _T94;struct Cyc_Warn_Qvar_Warn_Warg_struct _T95;struct Cyc_Absyn_Enumfield*_T96;struct Cyc_Warn_String_Warn_Warg_struct _T97;unsigned _T98;struct _fat_ptr _T99;struct Cyc_Absyn_Enumfield*_T9A;struct Cyc_Absyn_Exp*_T9B;struct Cyc_Absyn_Exp*_T9C;struct _tuple14 _T9D;unsigned _T9E;struct Cyc_List_List*_T9F;struct Cyc_Tctyp_CVTEnv _TA0;struct Cyc_Tctyp_CVTEnv _TA1;struct Cyc_Absyn_Kind*_TA2;struct Cyc_Absyn_Kind*_TA3;struct Cyc_List_List*_TA4;struct _fat_ptr _TA5;struct Cyc_Tctyp_CVTEnv _TA6;struct Cyc_Tctyp_CVTEnv _TA7;struct Cyc_Absyn_Kind*_TA8;struct Cyc_Absyn_Kind*_TA9;struct Cyc_List_List*_TAA;struct _fat_ptr _TAB;struct Cyc_Tctyp_CVTEnv _TAC;struct Cyc_Tctyp_CVTEnv _TAD;struct Cyc_Absyn_Kind*_TAE;struct Cyc_Absyn_Kind*_TAF;struct Cyc_List_List*_TB0;struct _fat_ptr _TB1;struct Cyc_Tctyp_CVTEnv _TB2;struct Cyc_Tctyp_CVTEnv _TB3;struct Cyc_Absyn_Kind*_TB4;struct Cyc_Absyn_Kind*_TB5;struct Cyc_List_List*_TB6;struct _fat_ptr _TB7;struct Cyc_Tctyp_CVTEnv _TB8;struct Cyc_Tctyp_CVTEnv _TB9;struct Cyc_Absyn_Kind*_TBA;struct Cyc_Absyn_Kind*_TBB;struct Cyc_List_List*_TBC;struct _fat_ptr _TBD;struct Cyc_Tctyp_CVTEnv _TBE;void*_TBF;void*_TC0;struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_TC1;union Cyc_Absyn_AggrInfo*_TC2;struct Cyc_Tctyp_CVTEnv _TC3;void*_TC4;void*_TC5;struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*_TC6;union Cyc_Absyn_DatatypeInfo*_TC7;struct Cyc_Tctyp_CVTEnv _TC8;void*_TC9;void*_TCA;struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct*_TCB;union Cyc_Absyn_DatatypeFieldInfo*_TCC;struct Cyc_Tctyp_CVTEnv _TCD;struct Cyc_Tcenv_Tenv*_TCE;unsigned _TCF;_T0= env;_TCF= _T0.loc;_T1= env;_TCE= _T1.te;{unsigned loc=_TCF;struct Cyc_Tcenv_Tenv*te=_TCE;_T2= targsp;{
# 511
struct Cyc_List_List*ts=*_T2;void*_TD0;void*_TD1;_T3= c;_T4= (int*)_T3;_T5= *_T4;switch(_T5){case 1: goto _LL7;case 2: _LL7: goto _LL9;case 0: _LL9: goto _LLB;case 8: _LLB: goto _LLD;case 7: _LLD: goto _LLF;case 6: _LLF: goto _LL11;case 12: _LL11: goto _LL13;case 11: _LL13: goto _LL15;case 14: _LL15: goto _LL17;case 21: _LL17:
# 524
 if(ts==0)goto _TL97;{struct Cyc_Warn_Typ_Warn_Warg_struct _TD2;_TD2.tag= 2;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_TD3=_cycalloc(sizeof(struct Cyc_Absyn_AppType_Absyn_Type_struct));_TD3->tag= 0;
_TD3->f1= c;_TD3->f2= ts;_T7= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_TD3;}_TD2.f1= (void*)_T7;_T6= _TD2;}{struct Cyc_Warn_Typ_Warn_Warg_struct _TD2=_T6;{struct Cyc_Warn_String_Warn_Warg_struct _TD3;_TD3.tag= 0;({__typeof__(_tag_fat(" applied to argument(s)",sizeof(char),24U))_TD4=_tag_fat(" applied to argument(s)",sizeof(char),24U);_TD3.f1= _TD4;});_T8= _TD3;}{struct Cyc_Warn_String_Warn_Warg_struct _TD3=_T8;void*_TD4[2];_TD4[0]= & _TD2;_TD4[1]= & _TD3;_TA= Cyc_Warn_impos2;{int(*_TD5)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_TA;_T9= _TD5;}_TB= _tag_fat(_TD4,sizeof(void*),2);_T9(_TB);}}goto _TL98;_TL97: _TL98: _TC= env;
return _TC;case 16:
# 528
 if(ts==0)goto _TL99;{struct Cyc_Warn_Typ_Warn_Warg_struct _TD2;_TD2.tag= 2;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_TD3=_cycalloc(sizeof(struct Cyc_Absyn_AppType_Absyn_Type_struct));_TD3->tag= 0;
_TD3->f1= c;_TD3->f2= ts;_TE= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_TD3;}_TD2.f1= (void*)_TE;_TD= _TD2;}{struct Cyc_Warn_Typ_Warn_Warg_struct _TD2=_TD;{struct Cyc_Warn_String_Warn_Warg_struct _TD3;_TD3.tag= 0;({__typeof__(_tag_fat(" applied to argument(s)",sizeof(char),24U))_TD4=_tag_fat(" applied to argument(s)",sizeof(char),24U);_TD3.f1= _TD4;});_TF= _TD3;}{struct Cyc_Warn_String_Warn_Warg_struct _TD3=_TF;void*_TD4[2];_TD4[0]= & _TD2;_TD4[1]= & _TD3;_T11= Cyc_Warn_impos2;{int(*_TD5)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T11;_T10= _TD5;}_T12= _tag_fat(_TD4,sizeof(void*),2);_T10(_T12);}}goto _TL9A;_TL99: _TL9A: _T13= expected_kind;_T14= & Cyc_Kinds_aqk;_T15= (struct Cyc_Absyn_Kind*)_T14;
if(_T13==_T15)goto _TL9B;{struct Cyc_Warn_String_Warn_Warg_struct _TD2;_TD2.tag= 0;
({__typeof__(_tag_fat("Kind Q used where kind ",sizeof(char),24U))_TD3=_tag_fat("Kind Q used where kind ",sizeof(char),24U);_TD2.f1= _TD3;});_T16= _TD2;}{struct Cyc_Warn_String_Warn_Warg_struct _TD2=_T16;{struct Cyc_Warn_Kind_Warn_Warg_struct _TD3;_TD3.tag= 9;_TD3.f1= expected_kind;_T17= _TD3;}{struct Cyc_Warn_Kind_Warn_Warg_struct _TD3=_T17;{struct Cyc_Warn_String_Warn_Warg_struct _TD4;_TD4.tag= 0;({__typeof__(_tag_fat(" was expected",sizeof(char),14U))_TD5=_tag_fat(" was expected",sizeof(char),14U);_TD4.f1= _TD5;});_T18= _TD4;}{struct Cyc_Warn_String_Warn_Warg_struct _TD4=_T18;void*_TD5[3];_TD5[0]= & _TD2;_TD5[1]= & _TD3;_TD5[2]= & _TD4;_T19= loc;_T1A= _tag_fat(_TD5,sizeof(void*),3);Cyc_Warn_err2(_T19,_T1A);}}}goto _TL9C;_TL9B: _TL9C: _T1B= env;
return _T1B;case 15:
# 534
 if(ts==0)goto _TL9F;else{goto _TLA0;}_TLA0: _T1C= ts;_T1D= _T1C->tl;if(_T1D!=0)goto _TL9F;else{goto _TL9D;}
_TL9F:{struct Cyc_Warn_String_Warn_Warg_struct _TD2;_TD2.tag= 0;({__typeof__(_tag_fat("aquals expects a single argument",sizeof(char),33U))_TD3=_tag_fat("aquals expects a single argument",sizeof(char),33U);_TD2.f1= _TD3;});_T1E= _TD2;}{struct Cyc_Warn_String_Warn_Warg_struct _TD2=_T1E;void*_TD3[1];_TD3[0]= & _TD2;_T20= Cyc_Warn_impos2;{int(*_TD4)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T20;_T1F= _TD4;}_T21= _tag_fat(_TD3,sizeof(void*),1);_T1F(_T21);}goto _TL9E;_TL9D: _TL9E: _T22= env;_T23= & Cyc_Kinds_ak;_T24= (struct Cyc_Absyn_Kind*)_T23;_T25= ts;_T26= _T25->hd;_T27= 
Cyc_Tctyp_i_check_type(_T22,_T24,_T26,0,0);return _T27;case 17: _T28= 
# 538
Cyc_List_length(ts);if(_T28==2)goto _TLA1;{struct Cyc_Warn_String_Warn_Warg_struct _TD2;_TD2.tag= 0;
({__typeof__(_tag_fat("aquals expects two arguments",sizeof(char),29U))_TD3=_tag_fat("aquals expects two arguments",sizeof(char),29U);_TD2.f1= _TD3;});_T29= _TD2;}{struct Cyc_Warn_String_Warn_Warg_struct _TD2=_T29;void*_TD3[1];_TD3[0]= & _TD2;_T2B= Cyc_Warn_impos2;{int(*_TD4)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T2B;_T2A= _TD4;}_T2C= _tag_fat(_TD3,sizeof(void*),1);_T2A(_T2C);}goto _TLA2;_TLA1: _TLA2: _T2D= env;_T2E= & Cyc_Kinds_aqk;_T2F= (struct Cyc_Absyn_Kind*)_T2E;_T30= 
_check_null(ts);_T31= _T30->hd;env= Cyc_Tctyp_i_check_type(_T2D,_T2F,_T31,0,0);_T32= env;_T33= _T32.te;_T34= 
Cyc_Tcenv_curr_aquals_bounds(_T33);_T35= ts;_T36= _T35->hd;{void*ctx_bnd=Cyc_Tcutil_lookup_aquals_opt(_T34,_T36);_T37= ctx_bnd;_T38= (unsigned)_T37;
if(!_T38)goto _TLA3;_T39= ts;_T3A= _T39->tl;_T3B= 
_check_null(_T3A);_T3C= ctx_bnd;_T3B->hd= (void*)_T3C;goto _TLA4;
# 545
_TLA3: _T3D= env;_T3E= & Cyc_Kinds_aqk;_T3F= (struct Cyc_Absyn_Kind*)_T3E;_T40= ts;_T41= _T40->tl;_T42= _check_null(_T41);_T43= _T42->hd;env= Cyc_Tctyp_i_check_type(_T3D,_T3F,_T43,0,0);_TLA4:{struct Cyc_List_List*_TD2=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple16*_TD3=_cycalloc(sizeof(struct _tuple16));
# 547
_TD3->f0= apptype;_TD3->f1= 0;_T45= (struct _tuple16*)_TD3;}_TD2->hd= _T45;_T46= env;
_TD2->tl= _T46.free_qualvars;_T44= (struct Cyc_List_List*)_TD2;}
# 547
env.free_qualvars= _T44;_T47= env;
# 549
return _T47;}case 3:
# 551
 _TLA8: if(ts!=0)goto _TLA6;else{goto _TLA7;}
_TLA6: _T48= env;_T49= & Cyc_Kinds_mk;_T4A= (struct Cyc_Absyn_Kind*)_T49;_T4B= ts;_T4C= _T4B->hd;env= Cyc_Tctyp_i_check_type(_T48,_T4A,_T4C,1,1);_T4D= ts;
# 551
ts= _T4D->tl;goto _TLA8;_TLA7: _T4E= env;
# 553
return _T4E;case 9:
# 555
 _TLAC: if(ts!=0)goto _TLAA;else{goto _TLAB;}
_TLAA: _T4F= env;_T50= & Cyc_Kinds_ek;_T51= (struct Cyc_Absyn_Kind*)_T50;_T52= ts;_T53= _T52->hd;env= Cyc_Tctyp_i_check_type(_T4F,_T51,_T53,1,1);_T54= ts;
# 555
ts= _T54->tl;goto _TLAC;_TLAB: _T55= env;
# 557
return _T55;case 19: _T56= c;{struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct*_TD2=(struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct*)_T56;_TD1= _TD2->f1;_T57= c;_T58= (struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct*)_T57;_T59= & _T58->f2;_TD0= (struct Cyc_Absyn_Enumdecl**)_T59;}{struct _tuple1*n=_TD1;struct Cyc_Absyn_Enumdecl**edp=(struct Cyc_Absyn_Enumdecl**)_TD0;
# 559
if(ts==0)goto _TLAD;{struct Cyc_Warn_String_Warn_Warg_struct _TD2;_TD2.tag= 0;
({__typeof__(_tag_fat("enum applied to argument(s)",sizeof(char),28U))_TD3=_tag_fat("enum applied to argument(s)",sizeof(char),28U);_TD2.f1= _TD3;});_T5A= _TD2;}{struct Cyc_Warn_String_Warn_Warg_struct _TD2=_T5A;void*_TD3[1];_TD3[0]= & _TD2;_T5C= Cyc_Warn_impos2;{int(*_TD4)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T5C;_T5B= _TD4;}_T5D= _tag_fat(_TD3,sizeof(void*),1);_T5B(_T5D);}goto _TLAE;_TLAD: _TLAE: _T5E= edp;_T5F= *_T5E;
if(_T5F==0)goto _TLB1;else{goto _TLB2;}_TLB2: _T60= edp;_T61= *_T60;_T62= _T61->fields;if(_T62==0)goto _TLB1;else{goto _TLAF;}
_TLB1:{struct _handler_cons _TD2;_T63= & _TD2;_push_handler(_T63);{int _TD3=0;_T64= setjmp(_TD2.handler);if(!_T64)goto _TLB3;_TD3= 1;goto _TLB4;_TLB3: _TLB4: if(_TD3)goto _TLB5;else{goto _TLB7;}_TLB7: _T65= edp;_T66= 
Cyc_Tcenv_lookup_enumdecl(te,loc,n);*_T65= *_T66;_pop_handler();goto _TLB6;_TLB5: _T67= Cyc_Core_get_exn_thrown();{void*_TD4=(void*)_T67;void*_TD5;_T68= (struct Cyc_Dict_Absent_exn_struct*)_TD4;_T69= _T68->tag;_T6A= Cyc_Dict_Absent;if(_T69!=_T6A)goto _TLB8;_T6B= te;_T6C= loc;{struct Cyc_Absyn_Enumdecl*_TD6=_cycalloc(sizeof(struct Cyc_Absyn_Enumdecl));
# 566
_TD6->sc= 3U;_TD6->name= n;_TD6->fields= 0;_T6D= (struct Cyc_Absyn_Enumdecl*)_TD6;}Cyc_Tc_tcEnumdecl(_T6B,_T6C,_T6D);_T6E= edp;_T6F= 
Cyc_Tcenv_lookup_enumdecl(te,loc,n);*_T6E= *_T6F;goto _LL36;_TLB8: _TD5= _TD4;{void*exn=_TD5;_rethrow(exn);}_LL36:;}_TLB6:;}}goto _TLB0;_TLAF: _TLB0: _T70= env;
# 571
return _T70;}case 20: _T71= c;{struct Cyc_Absyn_AnonEnumCon_Absyn_TyCon_struct*_TD2=(struct Cyc_Absyn_AnonEnumCon_Absyn_TyCon_struct*)_T71;_TD1= _TD2->f1;}{struct Cyc_List_List*fs=_TD1;
# 573
if(ts==0)goto _TLBA;{struct Cyc_Warn_String_Warn_Warg_struct _TD2;_TD2.tag= 0;
({__typeof__(_tag_fat("enum applied to argument(s)",sizeof(char),28U))_TD3=_tag_fat("enum applied to argument(s)",sizeof(char),28U);_TD2.f1= _TD3;});_T72= _TD2;}{struct Cyc_Warn_String_Warn_Warg_struct _TD2=_T72;void*_TD3[1];_TD3[0]= & _TD2;_T74= Cyc_Warn_impos2;{int(*_TD4)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T74;_T73= _TD4;}_T75= _tag_fat(_TD3,sizeof(void*),1);_T73(_T75);}goto _TLBB;_TLBA: _TLBB: {
# 576
struct Cyc_List_List*prev_fields=0;
unsigned tag_count=0U;
_TLBF: if(fs!=0)goto _TLBD;else{goto _TLBE;}
_TLBD: _T76= fs;_T77= _T76->hd;{struct Cyc_Absyn_Enumfield*f=(struct Cyc_Absyn_Enumfield*)_T77;_T79= Cyc_List_mem;{
long(*_TD2)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*)=(long(*)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*))_T79;_T78= _TD2;}_T7A= Cyc_strptrcmp;_T7B= prev_fields;_T7C= f;_T7D= _T7C->name;_T7E= *_T7D;_T7F= _T7E.f1;_T80= _T78(_T7A,_T7B,_T7F);if(!_T80)goto _TLC0;{struct Cyc_Warn_String_Warn_Warg_struct _TD2;_TD2.tag= 0;
({__typeof__(_tag_fat("duplicate enum field name ",sizeof(char),27U))_TD3=_tag_fat("duplicate enum field name ",sizeof(char),27U);_TD2.f1= _TD3;});_T81= _TD2;}{struct Cyc_Warn_String_Warn_Warg_struct _TD2=_T81;{struct Cyc_Warn_Qvar_Warn_Warg_struct _TD3;_TD3.tag= 1;_T83= f;_TD3.f1= _T83->name;_T82= _TD3;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _TD3=_T82;void*_TD4[2];_TD4[0]= & _TD2;_TD4[1]= & _TD3;_T84= f;_T85= _T84->loc;_T86= _tag_fat(_TD4,sizeof(void*),2);Cyc_Warn_err2(_T85,_T86);}}goto _TLC1;
# 583
_TLC0:{struct Cyc_List_List*_TD2=_cycalloc(sizeof(struct Cyc_List_List));_T88= f;_T89= _T88->name;_T8A= *_T89;_TD2->hd= _T8A.f1;_TD2->tl= prev_fields;_T87= (struct Cyc_List_List*)_TD2;}prev_fields= _T87;_TLC1: _T8B= f;_T8C= _T8B->tag;
if(_T8C!=0)goto _TLC2;_T8D= f;_T8E= tag_count;_T8F= f;_T90= _T8F->loc;
({__typeof__(Cyc_Absyn_uint_exp(_T8E,_T90))_TD2=Cyc_Absyn_uint_exp(_T8E,_T90);_T8D->tag= _TD2;});goto _TLC3;
_TLC2: _T91= f;_T92= _T91->tag;_T93= Cyc_Tcutil_is_const_exp(_T92);if(_T93)goto _TLC4;else{goto _TLC6;}
_TLC6:{struct Cyc_Warn_String_Warn_Warg_struct _TD2;_TD2.tag= 0;({__typeof__(_tag_fat("enum field ",sizeof(char),12U))_TD3=_tag_fat("enum field ",sizeof(char),12U);_TD2.f1= _TD3;});_T94= _TD2;}{struct Cyc_Warn_String_Warn_Warg_struct _TD2=_T94;{struct Cyc_Warn_Qvar_Warn_Warg_struct _TD3;_TD3.tag= 1;_T96= f;_TD3.f1= _T96->name;_T95= _TD3;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _TD3=_T95;{struct Cyc_Warn_String_Warn_Warg_struct _TD4;_TD4.tag= 0;({__typeof__(_tag_fat(": expression is not constant",sizeof(char),29U))_TD5=_tag_fat(": expression is not constant",sizeof(char),29U);_TD4.f1= _TD5;});_T97= _TD4;}{struct Cyc_Warn_String_Warn_Warg_struct _TD4=_T97;void*_TD5[3];_TD5[0]= & _TD2;_TD5[1]= & _TD3;_TD5[2]= & _TD4;_T98= loc;_T99= _tag_fat(_TD5,sizeof(void*),3);Cyc_Warn_err2(_T98,_T99);}}}goto _TLC5;_TLC4: _TLC5: _TLC3: _T9A= f;_T9B= _T9A->tag;_T9C= 
_check_null(_T9B);_T9D= Cyc_Evexp_eval_const_uint_exp(_T9C);_T9E= _T9D.f0;tag_count= 1U + _T9E;}_T9F= fs;
# 578
fs= _T9F->tl;goto _TLBF;_TLBE: _TA0= env;
# 590
return _TA0;}}case 10: _TA1= env;_TA2= & Cyc_Kinds_ak;_TA3= (struct Cyc_Absyn_Kind*)_TA2;_TA4= ts;_TA5= 
# 592
_tag_fat("regions",sizeof(char),8U);_TA6= Cyc_Tctyp_i_check_unary_app(_TA1,_TA3,_TA4,1,_TA5);return _TA6;case 4: _TA7= env;_TA8= & Cyc_Kinds_ek;_TA9= (struct Cyc_Absyn_Kind*)_TA8;_TAA= ts;_TAB= 
# 594
_tag_fat("region_t",sizeof(char),9U);_TAC= Cyc_Tctyp_i_check_unary_app(_TA7,_TA9,_TAA,1,_TAB);return _TAC;case 18: _TAD= env;_TAE= & Cyc_Kinds_aqk;_TAF= (struct Cyc_Absyn_Kind*)_TAE;_TB0= ts;_TB1= 
# 597
_tag_fat("aqual_t",sizeof(char),8U);_TB2= Cyc_Tctyp_i_check_unary_app(_TAD,_TAF,_TB0,1,_TB1);return _TB2;case 5: _TB3= env;_TB4= & Cyc_Kinds_ik;_TB5= (struct Cyc_Absyn_Kind*)_TB4;_TB6= ts;_TB7= 
# 601
_tag_fat("tag_t",sizeof(char),6U);_TB8= Cyc_Tctyp_i_check_unary_app(_TB3,_TB5,_TB6,0,_TB7);return _TB8;case 13: _TB9= env;_TBA= & Cyc_Kinds_ik;_TBB= (struct Cyc_Absyn_Kind*)_TBA;_TBC= ts;_TBD= 
# 603
_tag_fat("@thin",sizeof(char),6U);_TBE= Cyc_Tctyp_i_check_unary_app(_TB9,_TBB,_TBC,0,_TBD);return _TBE;case 24: _TBF= c;{struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*_TD2=(struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*)_TBF;_TC0= c;_TC1= (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct*)_TC0;_TC2= & _TC1->f1;_TD1= (union Cyc_Absyn_AggrInfo*)_TC2;}{union Cyc_Absyn_AggrInfo*info=_TD1;_TC3= 
# 605
Cyc_Tctyp_i_check_aggr(env,expected_kind,info,targsp,allow_abs_aggr);return _TC3;}case 22: _TC4= c;{struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*_TD2=(struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*)_TC4;_TC5= c;_TC6= (struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*)_TC5;_TC7= & _TC6->f1;_TD1= (union Cyc_Absyn_DatatypeInfo*)_TC7;}{union Cyc_Absyn_DatatypeInfo*info=_TD1;_TC8= 
# 607
Cyc_Tctyp_i_check_datatype(env,expected_kind,info,targsp,allow_abs_aggr);return _TC8;}default: _TC9= c;{struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct*_TD2=(struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct*)_TC9;_TCA= c;_TCB= (struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct*)_TCA;_TCC= & _TCB->f1;_TD1= (union Cyc_Absyn_DatatypeFieldInfo*)_TCC;}{union Cyc_Absyn_DatatypeFieldInfo*info=(union Cyc_Absyn_DatatypeFieldInfo*)_TD1;_TCD= 
# 609
Cyc_Tctyp_i_check_datatype_field(env,expected_kind,info,targsp,allow_abs_aggr);return _TCD;}};}}}
# 613
static int Cyc_Tctyp_bnd_qual_cmp(void*tvt1,void*tvt2){struct _tuple0 _T0;void*_T1;int*_T2;unsigned _T3;void*_T4;int*_T5;unsigned _T6;void*_T7;void*_T8;int _T9;void*_TA;int*_TB;unsigned _TC;void*_TD;void*_TE;int _TF;struct Cyc_Core_Opt*_T10;void*_T11;struct Cyc_Absyn_Kind*_T12;struct Cyc_Core_Opt*_T13;void*_T14;struct Cyc_Absyn_Kind*_T15;long _T16;void*_T17;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T18;void*_T19;int*_T1A;int _T1B;void*_T1C;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T1D;struct Cyc_List_List*_T1E;void*_T1F;int*_T20;unsigned _T21;void*_T22;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T23;void*_T24;int*_T25;int _T26;void*_T27;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T28;struct Cyc_List_List*_T29;void*_T2A;struct Cyc_List_List*_T2B;void*_T2C;void*_T2D;struct Cyc_List_List*_T2E;void*_T2F;int _T30;void*_T31;int*_T32;unsigned _T33;void*_T34;int*_T35;unsigned _T36;struct Cyc_Warn_String_Warn_Warg_struct _T37;struct Cyc_Warn_Typ_Warn_Warg_struct _T38;struct Cyc_Warn_String_Warn_Warg_struct _T39;struct Cyc_Warn_Typ_Warn_Warg_struct _T3A;int(*_T3B)(struct _fat_ptr);void*(*_T3C)(struct _fat_ptr);struct _fat_ptr _T3D;{struct _tuple0 _T3E;
({__typeof__(Cyc_Absyn_compress(tvt1))_T3F=Cyc_Absyn_compress(tvt1);_T3E.f0= _T3F;});({__typeof__(Cyc_Absyn_compress(tvt2))_T3F=Cyc_Absyn_compress(tvt2);_T3E.f1= _T3F;});_T0= _T3E;}{struct _tuple0 _T3E=_T0;int _T3F;int _T40;void*_T41;void*_T42;_T1= _T3E.f0;_T2= (int*)_T1;_T3= *_T2;switch(_T3){case 2: _T4= _T3E.f1;_T5= (int*)_T4;_T6= *_T5;switch(_T6){case 2: _T7= _T3E.f0;{struct Cyc_Absyn_VarType_Absyn_Type_struct*_T43=(struct Cyc_Absyn_VarType_Absyn_Type_struct*)_T7;_T42= _T43->f1;}_T8= _T3E.f1;{struct Cyc_Absyn_VarType_Absyn_Type_struct*_T43=(struct Cyc_Absyn_VarType_Absyn_Type_struct*)_T8;_T41= _T43->f1;}{struct Cyc_Absyn_Tvar*tv1=_T42;struct Cyc_Absyn_Tvar*tv2=_T41;_T9= 
# 616
Cyc_Absyn_tvar_cmp(tv1,tv2);return _T9;}case 1: goto _LLA;case 0: _LL10: goto _LL12;default: goto _LL13;};case 1: _TA= _T3E.f1;_TB= (int*)_TA;_TC= *_TB;switch(_TC){case 1: _TD= _T3E.f0;{struct Cyc_Absyn_Evar_Absyn_Type_struct*_T43=(struct Cyc_Absyn_Evar_Absyn_Type_struct*)_TD;_T42= _T43->f1;_T40= _T43->f3;}_TE= _T3E.f1;{struct Cyc_Absyn_Evar_Absyn_Type_struct*_T43=(struct Cyc_Absyn_Evar_Absyn_Type_struct*)_TE;_T41= _T43->f1;_T3F= _T43->f3;}{struct Cyc_Core_Opt*k1=_T42;int i1=_T40;struct Cyc_Core_Opt*k2=_T41;int i2=_T3F;
# 618
if(i1!=i2)goto _TLCA;_T10= _check_null(k1);_T11= _T10->v;_T12= (struct Cyc_Absyn_Kind*)_T11;_T13= _check_null(k2);_T14= _T13->v;_T15= (struct Cyc_Absyn_Kind*)_T14;_T16= Cyc_Kinds_kind_eq(_T12,_T15);if(!_T16)goto _TLCA;_TF= 0;goto _TLCB;_TLCA: _TF= 1;_TLCB: return _TF;}case 2: _LLA: goto _LLC;case 0: _LLC: goto _LLE;default: goto _LL13;};case 0: _T17= _T3E.f0;_T18= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T17;_T19= _T18->f1;_T1A= (int*)_T19;_T1B= *_T1A;if(_T1B!=15)goto _TLCC;_T1C= _T3E.f0;_T1D= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T1C;_T1E= _T1D->f2;if(_T1E==0)goto _TLCE;_T1F= _T3E.f1;_T20= (int*)_T1F;_T21= *_T20;switch(_T21){case 0: _T22= _T3E.f1;_T23= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T22;_T24= _T23->f1;_T25= (int*)_T24;_T26= *_T25;if(_T26!=15)goto _TLD1;_T27= _T3E.f1;_T28= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T27;_T29= _T28->f2;if(_T29==0)goto _TLD3;_T2A= _T3E.f0;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T43=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T2A;_T2B= _T43->f2;{struct Cyc_List_List _T44=*_T2B;_T2C= _T44.hd;_T42= (void*)_T2C;}}_T2D= _T3E.f1;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T43=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T2D;_T2E= _T43->f2;{struct Cyc_List_List _T44=*_T2E;_T2F= _T44.hd;_T41= (void*)_T2F;}}{void*tv11=_T42;void*tv21=_T41;_T30= 
# 620
Cyc_Tctyp_bnd_qual_cmp(tv11,tv21);return _T30;}_TLD3: goto _LL13;_TLD1: goto _LL13;case 1: goto _LLD;case 2: goto _LL11;default: goto _LL13;}goto _TLCF;_TLCE: _T31= _T3E.f1;_T32= (int*)_T31;_T33= *_T32;switch(_T33){case 1: goto _LLD;case 2: goto _LL11;default: goto _LL13;}_TLCF: goto _TLCD;_TLCC: _T34= _T3E.f1;_T35= (int*)_T34;_T36= *_T35;switch(_T36){case 1: _LLD: _LLE: goto _LL10;case 2: _LL11: _LL12:
# 627
 return 1;default: goto _LL13;}_TLCD:;default: _LL13:{struct Cyc_Warn_String_Warn_Warg_struct _T43;_T43.tag= 0;
# 629
({__typeof__(_tag_fat("Expect only tvars, evars or aquals in qualifier bounds: ",sizeof(char),57U))_T44=_tag_fat("Expect only tvars, evars or aquals in qualifier bounds: ",sizeof(char),57U);_T43.f1= _T44;});_T37= _T43;}{struct Cyc_Warn_String_Warn_Warg_struct _T43=_T37;{struct Cyc_Warn_Typ_Warn_Warg_struct _T44;_T44.tag= 2;_T44.f1= tvt1;_T38= _T44;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T44=_T38;{struct Cyc_Warn_String_Warn_Warg_struct _T45;_T45.tag= 0;({__typeof__(_tag_fat(",",sizeof(char),2U))_T46=_tag_fat(",",sizeof(char),2U);_T45.f1= _T46;});_T39= _T45;}{struct Cyc_Warn_String_Warn_Warg_struct _T45=_T39;{struct Cyc_Warn_Typ_Warn_Warg_struct _T46;_T46.tag= 2;_T46.f1= tvt2;_T3A= _T46;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T46=_T3A;void*_T47[4];_T47[0]= & _T43;_T47[1]= & _T44;_T47[2]= & _T45;_T47[3]= & _T46;_T3C= Cyc_Warn_impos2;{int(*_T48)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T3C;_T3B= _T48;}_T3D= _tag_fat(_T47,sizeof(void*),4);_T3B(_T3D);}}}}};}}
# 634
static long Cyc_Tctyp_aqualvar_unconstrained(struct _tuple16*t){struct _tuple16*_T0;struct _tuple16 _T1;void*_T2;int*_T3;int _T4;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T5;void*_T6;int*_T7;unsigned _T8;struct Cyc_Warn_String_Warn_Warg_struct _T9;struct Cyc_Warn_Typ_Warn_Warg_struct _TA;struct _tuple16*_TB;struct _tuple16 _TC;int(*_TD)(struct _fat_ptr);void*(*_TE)(struct _fat_ptr);struct _fat_ptr _TF;_T0= t;_T1= *_T0;_T2= _T1.f0;{
void*_T10=Cyc_Absyn_compress(_T2);_T3= (int*)_T10;_T4= *_T3;if(_T4!=0)goto _TLD7;_T5= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T10;_T6= _T5->f1;_T7= (int*)_T6;_T8= *_T7;switch(_T8){case 16:
# 637
 return 0;case 17:
# 639
 return 1;default: goto _LL5;}goto _TLD8;_TLD7: _LL5:{struct Cyc_Warn_String_Warn_Warg_struct _T11;_T11.tag= 0;
# 641
({__typeof__(_tag_fat("Expect only Aqual types -- got ",sizeof(char),32U))_T12=_tag_fat("Expect only Aqual types -- got ",sizeof(char),32U);_T11.f1= _T12;});_T9= _T11;}{struct Cyc_Warn_String_Warn_Warg_struct _T11=_T9;{struct Cyc_Warn_Typ_Warn_Warg_struct _T12;_T12.tag= 2;_TB= t;_TC= *_TB;_T12.f1= _TC.f0;_TA= _T12;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T12=_TA;void*_T13[2];_T13[0]= & _T11;_T13[1]= & _T12;_TE= Cyc_Warn_impos2;{int(*_T14)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_TE;_TD= _T14;}_TF= _tag_fat(_T13,sizeof(void*),2);_TD(_TF);}}_TLD8:;}}
# 645
static int Cyc_Tctyp_aqualsof_var_bnd(void*bndv,void*var){void*_T0;int*_T1;int _T2;void*_T3;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T4;void*_T5;int*_T6;int _T7;void*_T8;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T9;struct Cyc_List_List*_TA;void*_TB;struct Cyc_List_List*_TC;void*_TD;int _TE;void*_TF;_T0= bndv;_T1= (int*)_T0;_T2= *_T1;if(_T2!=0)goto _TLDA;_T3= bndv;_T4= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3;_T5= _T4->f1;_T6= (int*)_T5;_T7= *_T6;if(_T7!=15)goto _TLDC;_T8= bndv;_T9= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T8;_TA= _T9->f2;if(_TA==0)goto _TLDE;_TB= bndv;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T10=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_TB;_TC= _T10->f2;{struct Cyc_List_List _T11=*_TC;_TD= _T11.hd;_TF= (void*)_TD;}}{void*vv=_TF;_TE= 
# 648
Cyc_Tcutil_typecmp(var,vv);return _TE;}_TLDE: goto _LL3;_TLDC: goto _LL3;_TLDA: _LL3:
# 650
 return 1;;}
# 656
static void Cyc_Tctyp_constrain_vars(unsigned loc,struct Cyc_Tctyp_CVTEnv env,struct Cyc_List_List*vars,struct Cyc_List_List**qb,void*def,long make_ex_aliasable){struct Cyc_List_List*_T0;void*_T1;long _T2;void*_T3;int*_T4;unsigned _T5;void*_T6;struct Cyc_Absyn_Tvar*_T7;void*_T8;struct Cyc_Absyn_Tvar*_T9;struct Cyc_Absyn_Kind*_TA;struct Cyc_Core_Opt _TB;void*_TC;struct Cyc_Absyn_Kind*_TD;unsigned _TE;struct Cyc_Core_Opt _TF;void*_T10;struct Cyc_Absyn_Kind*_T11;void*_T12;struct Cyc_Absyn_Evar_Absyn_Type_struct*_T13;struct Cyc_Core_Opt*_T14;void*_T15;struct Cyc_Core_Opt*_T16;void*_T17;struct Cyc_Absyn_Kind*_T18;enum Cyc_Absyn_KindQual _T19;int _T1A;struct Cyc_Absyn_Kind*_T1B;enum Cyc_Absyn_KindQual _T1C;int _T1D;struct Cyc_Absyn_Kind*_T1E;enum Cyc_Absyn_KindQual _T1F;int _T20;struct _handler_cons*_T21;int _T22;struct Cyc_List_List**_T23;struct Cyc_List_List*_T24;void*_T25;long _T26;int _T27;struct Cyc_Warn_String_Warn_Warg_struct _T28;struct Cyc_Warn_Typ_Warn_Warg_struct _T29;unsigned _T2A;struct _fat_ptr _T2B;void*_T2C;struct Cyc_Core_Not_found_exn_struct*_T2D;char*_T2E;char*_T2F;long _T30;long _T31;struct Cyc_List_List**_T32;struct Cyc_List_List*_T33;struct _tuple0*_T34;struct Cyc_List_List**_T35;struct Cyc_List_List**_T36;struct Cyc_List_List*_T37;struct _tuple0*_T38;struct Cyc_List_List**_T39;struct Cyc_Absyn_Kind*_T3A;enum Cyc_Absyn_KindQual _T3B;int _T3C;struct _handler_cons*_T3D;int _T3E;struct Cyc_List_List**_T3F;struct Cyc_List_List*_T40;void*_T41;long _T42;int _T43;struct Cyc_Warn_String_Warn_Warg_struct _T44;struct Cyc_Warn_Typ_Warn_Warg_struct _T45;unsigned _T46;struct _fat_ptr _T47;void*_T48;struct Cyc_Core_Not_found_exn_struct*_T49;char*_T4A;char*_T4B;long _T4C;long _T4D;struct Cyc_List_List**_T4E;struct Cyc_List_List*_T4F;struct _tuple0*_T50;struct Cyc_List_List**_T51;struct Cyc_List_List**_T52;struct Cyc_List_List*_T53;struct _tuple0*_T54;struct Cyc_List_List**_T55;void*_T56;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T57;void*_T58;int*_T59;int _T5A;void*_T5B;struct Cyc_List_List*_T5C;void*_T5D;int*_T5E;int _T5F;void*_T60;struct Cyc_Absyn_Tvar*_T61;void*_T62;unsigned _T63;struct Cyc_Absyn_Tvar*_T64;struct _handler_cons*_T65;int _T66;struct Cyc_List_List**_T67;struct Cyc_List_List*_T68;void*_T69;long _T6A;int _T6B;struct Cyc_Warn_String_Warn_Warg_struct _T6C;struct Cyc_Warn_Typ_Warn_Warg_struct _T6D;unsigned _T6E;struct _fat_ptr _T6F;struct Cyc_List_List*_T70;struct Cyc_List_List*_T71;struct Cyc_List_List*_T72;void*_T73;void*_T74;struct Cyc_Core_Not_found_exn_struct*_T75;char*_T76;char*_T77;int*_T78;unsigned _T79;long _T7A;long _T7B;struct Cyc_List_List**_T7C;struct Cyc_List_List*_T7D;struct _tuple0*_T7E;struct Cyc_List_List**_T7F;struct Cyc_List_List*_T80;struct Cyc_List_List*_T81;struct Cyc_List_List*_T82;void*_T83;struct Cyc_List_List**_T84;struct Cyc_List_List*_T85;struct _tuple0*_T86;struct Cyc_List_List**_T87;struct Cyc_List_List*_T88;struct Cyc_List_List*_T89;struct Cyc_List_List*_T8A;void*_T8B;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T8C;void*_T8D;int*_T8E;int _T8F;struct Cyc_Warn_String_Warn_Warg_struct _T90;int(*_T91)(struct _fat_ptr);void*(*_T92)(struct _fat_ptr);struct _fat_ptr _T93;struct Cyc_Warn_String_Warn_Warg_struct _T94;struct Cyc_Warn_Typ_Warn_Warg_struct _T95;int(*_T96)(struct _fat_ptr);void*(*_T97)(struct _fat_ptr);struct _fat_ptr _T98;struct Cyc_List_List*_T99;
# 659
_TLE3: if(vars!=0)goto _TLE1;else{goto _TLE2;}
_TLE1: _T0= vars;_T1= _T0->hd;{struct _tuple16*_T9A=(struct _tuple16*)_T1;long _T9B;void*_T9C;{struct _tuple16 _T9D=*_T9A;_T9C= _T9D.f0;_T9B= _T9D.f1;}{void*v=_T9C;long existential=_T9B;_T2= make_ex_aliasable;
if(_T2)goto _TLE4;else{goto _TLE6;}
_TLE6: existential= 0;goto _TLE5;_TLE4: _TLE5: {
void*adef=def;
long explicit_bound_set=0;struct Cyc_List_List*_T9D;struct Cyc_Absyn_Kind*_T9E;struct Cyc_Absyn_Tvar*_T9F;_T3= v;_T4= (int*)_T3;_T5= *_T4;switch(_T5){case 2: _T6= v;{struct Cyc_Absyn_VarType_Absyn_Type_struct*_TA0=(struct Cyc_Absyn_VarType_Absyn_Type_struct*)_T6;_T9F= _TA0->f1;}{struct Cyc_Absyn_Tvar*tv=_T9F;_T7= tv;_T8= _T7->aquals_bound;
# 667
if(_T8==0)goto _TLE8;_T9= tv;
adef= _T9->aquals_bound;
explicit_bound_set= 1;goto _TLE9;_TLE8: _TLE9: {
# 671
struct Cyc_Core_Opt ko=Cyc_Kinds_tvar_kind_opt(tv);_TB= ko;_TC= _TB.v;_TD= (struct Cyc_Absyn_Kind*)_TC;_TE= (unsigned)_TD;
if(!_TE)goto _TLEA;_TF= ko;_T10= _TF.v;_TA= (struct Cyc_Absyn_Kind*)_T10;goto _TLEB;_TLEA: _T11= & Cyc_Kinds_ek;_TA= (struct Cyc_Absyn_Kind*)_T11;_TLEB: _T9E= _TA;goto _LL7;}}case 1: _T12= v;_T13= (struct Cyc_Absyn_Evar_Absyn_Type_struct*)_T12;_T14= _T13->f1;if(_T14==0)goto _TLEC;_T15= v;{struct Cyc_Absyn_Evar_Absyn_Type_struct*_TA0=(struct Cyc_Absyn_Evar_Absyn_Type_struct*)_T15;_T16= _TA0->f1;{struct Cyc_Core_Opt _TA1=*_T16;_T17= _TA1.v;_T9E= (struct Cyc_Absyn_Kind*)_T17;}}_LL7:{struct Cyc_Absyn_Kind*k=_T9E;_T18= k;_T19= _T18->kind;_T1A= (int)_T19;
# 675
if(_T1A==2)goto _TLF0;else{goto _TLF2;}_TLF2: _T1B= k;_T1C= _T1B->kind;_T1D= (int)_T1C;if(_T1D==0)goto _TLF0;else{goto _TLF1;}_TLF1: _T1E= k;_T1F= _T1E->kind;_T20= (int)_T1F;if(_T20==1)goto _TLF0;else{goto _TLEE;}
_TLF0:{struct _handler_cons _TA0;_T21= & _TA0;_push_handler(_T21);{int _TA1=0;_T22= setjmp(_TA0.handler);if(!_T22)goto _TLF3;_TA1= 1;goto _TLF4;_TLF3: _TLF4: if(_TA1)goto _TLF5;else{goto _TLF7;}_TLF7: _T23= qb;_T24= *_T23;_T25= v;{
void*xbnd=Cyc_List_assoc_cmp(Cyc_Tctyp_aqualsof_var_bnd,_T24,_T25);_T26= explicit_bound_set;
if(!_T26)goto _TLF8;_T27= Cyc_Tcutil_typecmp(adef,xbnd);if(!_T27)goto _TLF8;{struct Cyc_Warn_String_Warn_Warg_struct _TA2;_TA2.tag= 0;
({__typeof__(_tag_fat("Inconsistent aqual bounds on type ",sizeof(char),35U))_TA3=_tag_fat("Inconsistent aqual bounds on type ",sizeof(char),35U);_TA2.f1= _TA3;});_T28= _TA2;}{struct Cyc_Warn_String_Warn_Warg_struct _TA2=_T28;{struct Cyc_Warn_Typ_Warn_Warg_struct _TA3;_TA3.tag= 2;_TA3.f1= v;_T29= _TA3;}{struct Cyc_Warn_Typ_Warn_Warg_struct _TA3=_T29;void*_TA4[2];_TA4[0]= & _TA2;_TA4[1]= & _TA3;_T2A= loc;_T2B= _tag_fat(_TA4,sizeof(void*),2);Cyc_Warn_warn2(_T2A,_T2B);}}goto _TLF9;_TLF8: _TLF9:;}_pop_handler();goto _TLF6;_TLF5: _T2C= Cyc_Core_get_exn_thrown();{void*_TA2=(void*)_T2C;void*_TA3;_T2D= (struct Cyc_Core_Not_found_exn_struct*)_TA2;_T2E= _T2D->tag;_T2F= Cyc_Core_Not_found;if(_T2E!=_T2F)goto _TLFA;{
# 682
void*aqt=Cyc_Absyn_aqualsof_type(v);_T30= existential;
if(!_T30)goto _TLFC;_T31= explicit_bound_set;if(_T31)goto _TLFC;else{goto _TLFE;}
_TLFE: _T32= qb;{struct Cyc_List_List*_TA4=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple0*_TA5=_cycalloc(sizeof(struct _tuple0));_TA5->f0= aqt;_TA5->f1= Cyc_Absyn_al_qual_type;_T34= (struct _tuple0*)_TA5;}_TA4->hd= _T34;_T35= qb;_TA4->tl= *_T35;_T33= (struct Cyc_List_List*)_TA4;}*_T32= _T33;goto _TLFD;
# 686
_TLFC: _T36= qb;{struct Cyc_List_List*_TA4=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple0*_TA5=_cycalloc(sizeof(struct _tuple0));_TA5->f0= aqt;_TA5->f1= adef;_T38= (struct _tuple0*)_TA5;}_TA4->hd= _T38;_T39= qb;_TA4->tl= *_T39;_T37= (struct Cyc_List_List*)_TA4;}*_T36= _T37;_TLFD: goto _LLC;}_TLFA: _TA3= _TA2;{void*exn=_TA3;_rethrow(exn);}_LLC:;}_TLF6:;}}goto _TLEF;
# 689
_TLEE: _T3A= k;_T3B= _T3A->kind;_T3C= (int)_T3B;if(_T3C!=7)goto _TLFF;{struct _handler_cons _TA0;_T3D= & _TA0;_push_handler(_T3D);{int _TA1=0;_T3E= setjmp(_TA0.handler);if(!_T3E)goto _TL101;_TA1= 1;goto _TL102;_TL101: _TL102: if(_TA1)goto _TL103;else{goto _TL105;}_TL105: _T3F= qb;_T40= *_T3F;_T41= v;{
# 691
void*xbnd=Cyc_List_assoc_cmp(Cyc_Tctyp_bnd_qual_cmp,_T40,_T41);_T42= explicit_bound_set;
if(!_T42)goto _TL106;_T43= Cyc_Tcutil_typecmp(adef,xbnd);if(!_T43)goto _TL106;{struct Cyc_Warn_String_Warn_Warg_struct _TA2;_TA2.tag= 0;
({__typeof__(_tag_fat("Inconsistent aqual bounds on type ",sizeof(char),35U))_TA3=_tag_fat("Inconsistent aqual bounds on type ",sizeof(char),35U);_TA2.f1= _TA3;});_T44= _TA2;}{struct Cyc_Warn_String_Warn_Warg_struct _TA2=_T44;{struct Cyc_Warn_Typ_Warn_Warg_struct _TA3;_TA3.tag= 2;_TA3.f1= v;_T45= _TA3;}{struct Cyc_Warn_Typ_Warn_Warg_struct _TA3=_T45;void*_TA4[2];_TA4[0]= & _TA2;_TA4[1]= & _TA3;_T46= loc;_T47= _tag_fat(_TA4,sizeof(void*),2);Cyc_Warn_warn2(_T46,_T47);}}goto _TL107;_TL106: _TL107:;}_pop_handler();goto _TL104;_TL103: _T48= Cyc_Core_get_exn_thrown();{void*_TA2=(void*)_T48;void*_TA3;_T49= (struct Cyc_Core_Not_found_exn_struct*)_TA2;_T4A= _T49->tag;_T4B= Cyc_Core_Not_found;if(_T4A!=_T4B)goto _TL108;_T4C= existential;
# 696
if(!_T4C)goto _TL10A;_T4D= explicit_bound_set;if(_T4D)goto _TL10A;else{goto _TL10C;}
_TL10C: _T4E= qb;{struct Cyc_List_List*_TA4=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple0*_TA5=_cycalloc(sizeof(struct _tuple0));_TA5->f0= v;_TA5->f1= Cyc_Absyn_al_qual_type;_T50= (struct _tuple0*)_TA5;}_TA4->hd= _T50;_T51= qb;_TA4->tl= *_T51;_T4F= (struct Cyc_List_List*)_TA4;}*_T4E= _T4F;goto _TL10B;
# 699
_TL10A: _T52= qb;{struct Cyc_List_List*_TA4=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple0*_TA5=_cycalloc(sizeof(struct _tuple0));_TA5->f0= v;_TA5->f1= adef;_T54= (struct _tuple0*)_TA5;}_TA4->hd= _T54;_T55= qb;_TA4->tl= *_T55;_T53= (struct Cyc_List_List*)_TA4;}*_T52= _T53;_TL10B: goto _LL11;_TL108: _TA3= _TA2;{void*exn=_TA3;_rethrow(exn);}_LL11:;}_TL104:;}}goto _TL100;_TLFF: _TL100: _TLEF: goto _LL3;}_TLEC: goto _LLA;case 0: _T56= v;_T57= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T56;_T58= _T57->f1;_T59= (int*)_T58;_T5A= *_T59;if(_T5A!=17)goto _TL10D;_T5B= v;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_TA0=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T5B;_T9D= _TA0->f2;}{struct Cyc_List_List*tv_bnd=_T9D;_T5C= 
# 705
_check_null(tv_bnd);{void*tv=_T5C->hd;{struct Cyc_Absyn_Tvar*_TA0;_T5D= tv;_T5E= (int*)_T5D;_T5F= *_T5E;if(_T5F!=2)goto _TL10F;_T60= tv;{struct Cyc_Absyn_VarType_Absyn_Type_struct*_TA1=(struct Cyc_Absyn_VarType_Absyn_Type_struct*)_T60;_TA0= _TA1->f1;}{struct Cyc_Absyn_Tvar*tv=_TA0;_T61= tv;_T62= _T61->aquals_bound;_T63= (unsigned)_T62;
# 708
if(!_T63)goto _TL111;_T64= tv;
adef= _T64->aquals_bound;
explicit_bound_set= 1;goto _TL112;_TL111: _TL112: goto _LL16;}_TL10F: goto _LL16;_LL16:;}{struct _handler_cons _TA0;_T65= & _TA0;_push_handler(_T65);{int _TA1=0;_T66= setjmp(_TA0.handler);if(!_T66)goto _TL113;_TA1= 1;goto _TL114;_TL113: _TL114: if(_TA1)goto _TL115;else{goto _TL117;}_TL117: _T67= qb;_T68= *_T67;_T69= tv;{
# 717
void*x_bnd=Cyc_List_assoc_cmp(Cyc_Tctyp_bnd_qual_cmp,_T68,_T69);_T6A= explicit_bound_set;
if(!_T6A)goto _TL118;_T6B= Cyc_Tcutil_typecmp(x_bnd,adef);if(!_T6B)goto _TL118;{struct Cyc_Warn_String_Warn_Warg_struct _TA2;_TA2.tag= 0;
({__typeof__(_tag_fat("Inconsistent aqual bounds on type ",sizeof(char),35U))_TA3=_tag_fat("Inconsistent aqual bounds on type ",sizeof(char),35U);_TA2.f1= _TA3;});_T6C= _TA2;}{struct Cyc_Warn_String_Warn_Warg_struct _TA2=_T6C;{struct Cyc_Warn_Typ_Warn_Warg_struct _TA3;_TA3.tag= 2;_TA3.f1= v;_T6D= _TA3;}{struct Cyc_Warn_Typ_Warn_Warg_struct _TA3=_T6D;void*_TA4[2];_TA4[0]= & _TA2;_TA4[1]= & _TA3;_T6E= loc;_T6F= _tag_fat(_TA4,sizeof(void*),2);Cyc_Warn_warn2(_T6E,_T6F);}}goto _TL119;_TL118: _TL119: _T70= tv_bnd;_T71= _T70->tl;_T72= 
_check_null(_T71);_T73= x_bnd;_T72->hd= (void*)_T73;}_pop_handler();goto _TL116;_TL115: _T74= Cyc_Core_get_exn_thrown();{void*_TA2=(void*)_T74;void*_TA3;_T75= (struct Cyc_Core_Not_found_exn_struct*)_TA2;_T76= _T75->tag;_T77= Cyc_Core_Not_found;if(_T76!=_T77)goto _TL11A;{
# 724
void*_TA4=Cyc_Absyn_compress(tv);_T78= (int*)_TA4;_T79= *_T78;switch(_T79){case 1: goto _LL24;case 2: _LL24: _T7A= existential;
# 727
if(!_T7A)goto _TL11D;_T7B= explicit_bound_set;if(_T7B)goto _TL11D;else{goto _TL11F;}
_TL11F: _T7C= qb;{struct Cyc_List_List*_TA5=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple0*_TA6=_cycalloc(sizeof(struct _tuple0));_TA6->f0= tv;_TA6->f1= Cyc_Absyn_al_qual_type;_T7E= (struct _tuple0*)_TA6;}_TA5->hd= _T7E;_T7F= qb;_TA5->tl= *_T7F;_T7D= (struct Cyc_List_List*)_TA5;}*_T7C= _T7D;_T80= tv_bnd;_T81= _T80->tl;_T82= 
_check_null(_T81);_T83= Cyc_Absyn_al_qual_type;_T82->hd= (void*)_T83;goto _TL11E;
# 731
_TL11D: _T84= qb;{struct Cyc_List_List*_TA5=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple0*_TA6=_cycalloc(sizeof(struct _tuple0));_TA6->f0= tv;_TA6->f1= adef;_T86= (struct _tuple0*)_TA6;}_TA5->hd= _T86;_T87= qb;_TA5->tl= *_T87;_T85= (struct Cyc_List_List*)_TA5;}*_T84= _T85;_T88= tv_bnd;_T89= _T88->tl;_T8A= 
_check_null(_T89);_T8B= adef;_T8A->hd= (void*)_T8B;_TL11E: goto _LL20;case 0: _T8C= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_TA4;_T8D= _T8C->f1;_T8E= (int*)_T8D;_T8F= *_T8E;if(_T8F!=15)goto _TL120;{struct Cyc_Warn_String_Warn_Warg_struct _TA5;_TA5.tag= 0;
# 736
({__typeof__(_tag_fat("aquals bounds must be present",sizeof(char),30U))_TA6=_tag_fat("aquals bounds must be present",sizeof(char),30U);_TA5.f1= _TA6;});_T90= _TA5;}{struct Cyc_Warn_String_Warn_Warg_struct _TA5=_T90;void*_TA6[1];_TA6[0]= & _TA5;_T92= Cyc_Warn_impos2;{int(*_TA7)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T92;_T91= _TA7;}_T93= _tag_fat(_TA6,sizeof(void*),1);_T91(_T93);}goto _TL121;_TL120: goto _LL27;_TL121:;default: _LL27: goto _LL20;}_LL20:;}goto _LL1B;_TL11A: _TA3= _TA2;{void*exn=_TA3;_rethrow(exn);}_LL1B:;}_TL116:;}}goto _LL3;}}_TL10D: goto _LLA;default: _LLA:{struct Cyc_Warn_String_Warn_Warg_struct _TA0;_TA0.tag= 0;
# 745
({__typeof__(_tag_fat("Expect only tvars, evars and aqual_vars -- got ",sizeof(char),48U))_TA1=_tag_fat("Expect only tvars, evars and aqual_vars -- got ",sizeof(char),48U);_TA0.f1= _TA1;});_T94= _TA0;}{struct Cyc_Warn_String_Warn_Warg_struct _TA0=_T94;{struct Cyc_Warn_Typ_Warn_Warg_struct _TA1;_TA1.tag= 2;_TA1.f1= v;_T95= _TA1;}{struct Cyc_Warn_Typ_Warn_Warg_struct _TA1=_T95;void*_TA2[2];_TA2[0]= & _TA0;_TA2[1]= & _TA1;_T97= Cyc_Warn_impos2;{int(*_TA3)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T97;_T96= _TA3;}_T98= _tag_fat(_TA2,sizeof(void*),2);_T96(_T98);}}goto _LL3;}_LL3:;}}}_T99= vars;
# 659
vars= _T99->tl;goto _TLE3;_TLE2:;}
# 751
static struct _tuple16*Cyc_Tctyp_tvar2type(struct _tuple15*in){struct _tuple15*_T0;struct _tuple16*_T1;long _T2;struct Cyc_Absyn_Tvar*_T3;_T0= in;{struct _tuple15 _T4=*_T0;_T3= _T4.f0;_T2= _T4.f1;}{struct Cyc_Absyn_Tvar*tv=_T3;long b=_T2;
# 753
void*t=Cyc_Absyn_var_type(tv);{struct _tuple16*_T4=_cycalloc(sizeof(struct _tuple16));
_T4->f0= t;_T4->f1= b;_T1= (struct _tuple16*)_T4;}return _T1;}}
# 757
static long Cyc_Tctyp_evar_unconstrained(struct _tuple16*evb){struct _tuple16*_T0;struct _tuple16 _T1;void*_T2;int*_T3;int _T4;_T0= evb;_T1= *_T0;_T2= _T1.f0;{
void*_T5=Cyc_Absyn_compress(_T2);_T3= (int*)_T5;_T4= *_T3;if(_T4!=1)goto _TL122;
# 760
return 1;_TL122:
# 762
 return 0;;}}
# 767
static void Cyc_Tctyp_update_qualifier_bounds(unsigned loc,struct Cyc_Tctyp_CVTEnv env,struct Cyc_List_List*flagged_tvars,struct Cyc_List_List**qb,void*def){struct Cyc_Tctyp_CVTEnv _T0;struct Cyc_Tctyp_CVTEnv _T1;unsigned _T2;struct Cyc_Tctyp_CVTEnv _T3;struct Cyc_List_List*(*_T4)(struct _tuple16*(*)(struct _tuple15*),struct Cyc_List_List*);struct Cyc_List_List*(*_T5)(void*(*)(void*),struct Cyc_List_List*);struct Cyc_List_List*_T6;struct Cyc_List_List*_T7;struct Cyc_List_List**_T8;void*_T9;unsigned _TA;struct Cyc_Tctyp_CVTEnv _TB;struct Cyc_List_List*(*_TC)(struct _tuple16*(*)(struct _tuple15*),struct Cyc_List_List*);struct Cyc_List_List*(*_TD)(void*(*)(void*),struct Cyc_List_List*);struct Cyc_Tctyp_CVTEnv _TE;struct Cyc_List_List*_TF;struct Cyc_List_List*_T10;struct Cyc_List_List**_T11;void*_T12;unsigned _T13;struct Cyc_Tctyp_CVTEnv _T14;struct Cyc_List_List*(*_T15)(long(*)(struct _tuple16*),struct Cyc_List_List*);struct Cyc_List_List*(*_T16)(long(*)(void*),struct Cyc_List_List*);struct Cyc_List_List*_T17;struct Cyc_List_List*_T18;struct Cyc_List_List**_T19;void*_T1A;unsigned _T1B;struct Cyc_Tctyp_CVTEnv _T1C;struct Cyc_List_List*(*_T1D)(long(*)(struct _tuple16*),struct Cyc_List_List*);struct Cyc_List_List*(*_T1E)(long(*)(void*),struct Cyc_List_List*);struct Cyc_List_List*_T1F;struct Cyc_List_List*_T20;struct Cyc_List_List**_T21;void*_T22;_T0= env;{
# 770
struct Cyc_List_List*freeqvs=_T0.free_qualvars;_T1= env;{
struct Cyc_List_List*freeevs=_T1.free_evars;_T2= loc;_T3= env;_T5= Cyc_List_map;{
struct Cyc_List_List*(*_T23)(struct _tuple16*(*)(struct _tuple15*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _tuple16*(*)(struct _tuple15*),struct Cyc_List_List*))_T5;_T4= _T23;}_T6= flagged_tvars;_T7= _T4(Cyc_Tctyp_tvar2type,_T6);_T8= qb;_T9= def;Cyc_Tctyp_constrain_vars(_T2,_T3,_T7,_T8,_T9,1);_TA= loc;_TB= env;_TD= Cyc_List_map;{
struct Cyc_List_List*(*_T23)(struct _tuple16*(*)(struct _tuple15*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _tuple16*(*)(struct _tuple15*),struct Cyc_List_List*))_TD;_TC= _T23;}_TE= env;_TF= _TE.free_vars;_T10= _TC(Cyc_Tctyp_tvar2type,_TF);_T11= qb;_T12= def;Cyc_Tctyp_constrain_vars(_TA,_TB,_T10,_T11,_T12,0);_T13= loc;_T14= env;_T16= Cyc_List_filter;{
# 775
struct Cyc_List_List*(*_T23)(long(*)(struct _tuple16*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(long(*)(struct _tuple16*),struct Cyc_List_List*))_T16;_T15= _T23;}_T17= freeevs;_T18= _T15(Cyc_Tctyp_evar_unconstrained,_T17);_T19= qb;_T1A= def;Cyc_Tctyp_constrain_vars(_T13,_T14,_T18,_T19,_T1A,0);_T1B= loc;_T1C= env;_T1E= Cyc_List_filter;{
struct Cyc_List_List*(*_T23)(long(*)(struct _tuple16*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(long(*)(struct _tuple16*),struct Cyc_List_List*))_T1E;_T1D= _T23;}_T1F= freeqvs;_T20= _T1D(Cyc_Tctyp_aqualvar_unconstrained,_T1F);_T21= qb;_T22= def;Cyc_Tctyp_constrain_vars(_T1B,_T1C,_T20,_T21,_T22,0);}}}
# 779
static long Cyc_Tctyp_ok_as_assn_exp(long*ok,struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;int*_T1;unsigned _T2;long*_T3;long*_T4;long _T5;_T0= e;{
void*_T6=_T0->r;_T1= (int*)_T6;_T2= *_T1;switch(_T2){case 4: goto _LL4;case 5: _LL4: goto _LL6;case 10: _LL6: goto _LL8;case 11: _LL8: goto _LLA;case 16: _LLA: goto _LLC;case 20: _LLC: goto _LLE;case 22: _LLE: goto _LL10;case 23: _LL10: goto _LL12;case 33: _LL12: goto _LL14;case 34: _LL14: goto _LL16;case 39: _LL16: _T3= ok;
# 792
*_T3= 0;
return 0;default: _T4= ok;_T5= *_T4;
# 795
return _T5;};}}
# 798
static long Cyc_Tctyp_ok_as_assn_stmt(long*ok,struct Cyc_Absyn_Stmt*s){long*_T0;_T0= ok;
*_T0= 0;
return 0;}
# 804
static long Cyc_Tctyp_ok_as_assn(struct Cyc_Absyn_Exp*e){void(*_T0)(long(*)(long*,struct Cyc_Absyn_Exp*),long(*)(long*,struct Cyc_Absyn_Stmt*),long*,struct Cyc_Absyn_Exp*);void(*_T1)(long(*)(void*,struct Cyc_Absyn_Exp*),long(*)(void*,struct Cyc_Absyn_Stmt*),void*,struct Cyc_Absyn_Exp*);long*_T2;struct Cyc_Absyn_Exp*_T3;long _T4;
long ok=1;_T1= Cyc_Absyn_visit_exp;{
void(*_T5)(long(*)(long*,struct Cyc_Absyn_Exp*),long(*)(long*,struct Cyc_Absyn_Stmt*),long*,struct Cyc_Absyn_Exp*)=(void(*)(long(*)(long*,struct Cyc_Absyn_Exp*),long(*)(long*,struct Cyc_Absyn_Stmt*),long*,struct Cyc_Absyn_Exp*))_T1;_T0= _T5;}_T2= & ok;_T3= e;_T0(Cyc_Tctyp_ok_as_assn_exp,Cyc_Tctyp_ok_as_assn_stmt,_T2,_T3);_T4= ok;
return _T4;}
# 812
static void Cyc_Tctyp_check_constrain_ptrbnd(unsigned loc,void*t,struct Cyc_Absyn_Kind*expected_kind){struct Cyc_Absyn_Kind*_T0;enum Cyc_Absyn_KindQual _T1;int _T2;int*_T3;int _T4;struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T5;void**_T6;void**_T7;void*_T8;long _T9;unsigned _TA;void**_TB;void*_TC;void*_TD;void*_TE;long _TF;struct Cyc_Warn_String_Warn_Warg_struct _T10;struct Cyc_Warn_Typ_Warn_Warg_struct _T11;struct Cyc_Warn_String_Warn_Warg_struct _T12;struct Cyc_Warn_Kind_Warn_Warg_struct _T13;struct Cyc_Warn_String_Warn_Warg_struct _T14;struct Cyc_Warn_Kind_Warn_Warg_struct _T15;unsigned _T16;struct _fat_ptr _T17;void**_T18;void*_T19;void*_T1A;void*_T1B;_T0= expected_kind;_T1= _T0->kind;_T2= (int)_T1;
if(_T2!=2)goto _TL125;{
void*_T1C=Cyc_Absyn_compress(t);void*_T1D;_T3= (int*)_T1C;_T4= *_T3;if(_T4!=4)goto _TL127;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T1E=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T1C;_T5= (struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T1C;_T6= & _T5->f1.ptr_atts.bounds;_T1D= (void**)_T6;}{void**b=(void**)_T1D;_T7= b;_T8= *_T7;_T9= 
# 818
Cyc_Tcutil_is_cvar_type(_T8);if(!_T9)goto _TL129;_TA= loc;_TB= b;_TC= *_TB;_TD= 
Cyc_Absyn_thinconst();_TE= Cyc_BansheeIf_equality_constraint(_TC,_TD);_TF= Cyc_BansheeIf_add_constraint(_TA,_TE);if(_TF)goto _TL12B;else{goto _TL12D;}
_TL12D:{struct Cyc_Warn_String_Warn_Warg_struct _T1E;_T1E.tag= 0;({__typeof__(_tag_fat("type ",sizeof(char),6U))_T1F=_tag_fat("type ",sizeof(char),6U);_T1E.f1= _T1F;});_T10= _T1E;}{struct Cyc_Warn_String_Warn_Warg_struct _T1E=_T10;{struct Cyc_Warn_Typ_Warn_Warg_struct _T1F;_T1F.tag= 2;_T1F.f1= t;_T11= _T1F;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T1F=_T11;{struct Cyc_Warn_String_Warn_Warg_struct _T20;_T20.tag= 0;({__typeof__(_tag_fat(" has kind ",sizeof(char),11U))_T21=_tag_fat(" has kind ",sizeof(char),11U);_T20.f1= _T21;});_T12= _T20;}{struct Cyc_Warn_String_Warn_Warg_struct _T20=_T12;{struct Cyc_Warn_Kind_Warn_Warg_struct _T21;_T21.tag= 9;({__typeof__(Cyc_Tcutil_type_kind(t))_T22=Cyc_Tcutil_type_kind(t);_T21.f1= _T22;});_T13= _T21;}{struct Cyc_Warn_Kind_Warn_Warg_struct _T21=_T13;{struct Cyc_Warn_String_Warn_Warg_struct _T22;_T22.tag= 0;({__typeof__(_tag_fat(" but as used here needs kind ",sizeof(char),30U))_T23=_tag_fat(" but as used here needs kind ",sizeof(char),30U);_T22.f1= _T23;});_T14= _T22;}{struct Cyc_Warn_String_Warn_Warg_struct _T22=_T14;{struct Cyc_Warn_Kind_Warn_Warg_struct _T23;_T23.tag= 9;
_T23.f1= expected_kind;_T15= _T23;}{struct Cyc_Warn_Kind_Warn_Warg_struct _T23=_T15;void*_T24[6];_T24[0]= & _T1E;_T24[1]= & _T1F;_T24[2]= & _T20;_T24[3]= & _T21;_T24[4]= & _T22;_T24[5]= & _T23;_T16= loc;_T17= _tag_fat(_T24,sizeof(void*),6);Cyc_Warn_err2(_T16,_T17);}}}}}}goto _TL12C;
# 823
_TL12B: _T18= b;_T19= *_T18;_T1A= Cyc_Absyn_compress(_T19);_T1B= Cyc_Absyn_bounds_one();if(_T1A!=_T1B)goto _TL12E;goto _TL12F;_TL12E: _throw_assert();_TL12F: _TL12C: goto _TL12A;_TL129: _TL12A: goto _LL0;}_TL127: goto _LL0;_LL0:;}goto _TL126;_TL125: _TL126:;}struct _tuple18{enum Cyc_Absyn_Format_Type f0;void*f1;};struct _tuple19{struct Cyc_Absyn_Tvar*f0;void*f1;};
# 833
static struct Cyc_Tctyp_CVTEnv Cyc_Tctyp_i_check_type(struct Cyc_Tctyp_CVTEnv env,struct Cyc_Absyn_Kind*expected_kind,void*t,long put_in_effect,long allow_abs_aggr){struct Cyc_Tctyp_CVTEnv _T0;struct Cyc_Tctyp_CVTEnv _T1;int*_T2;unsigned _T3;void*_T4;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T5;struct Cyc_List_List**_T6;struct Cyc_Absyn_Cvar_Absyn_Type_struct*_T7;struct Cyc_Core_Opt**_T8;struct Cyc_Warn_String_Warn_Warg_struct _T9;struct Cyc_Warn_Typ_Warn_Warg_struct _TA;unsigned _TB;struct _fat_ptr _TC;struct Cyc_Core_Opt**_TD;struct Cyc_Core_Opt*_TE;struct Cyc_Absyn_Kind*_TF;struct Cyc_Core_Opt**_T10;struct Cyc_Core_Opt*_T11;void*_T12;struct Cyc_Absyn_Kind*_T13;long _T14;struct Cyc_Core_Opt**_T15;struct Cyc_Core_Opt*_T16;struct Cyc_Core_Opt*_T17;void*_T18;struct Cyc_Absyn_Kind*_T19;struct Cyc_Absyn_Kind*_T1A;long _T1B;struct Cyc_Core_Opt**_T1C;struct Cyc_Absyn_Evar_Absyn_Type_struct*_T1D;struct Cyc_Core_Opt**_T1E;struct Cyc_Absyn_Evar_Absyn_Type_struct*_T1F;void**_T20;struct Cyc_Core_Opt**_T21;struct Cyc_Core_Opt*_T22;struct Cyc_Absyn_Kind*_T23;struct Cyc_Core_Opt**_T24;struct Cyc_Core_Opt*_T25;void*_T26;struct Cyc_Absyn_Kind*_T27;long _T28;struct Cyc_Core_Opt**_T29;struct Cyc_Core_Opt*_T2A;struct Cyc_Core_Opt*_T2B;void*_T2C;struct Cyc_Absyn_Kind*_T2D;struct Cyc_Absyn_Kind*_T2E;long _T2F;struct Cyc_Core_Opt**_T30;struct Cyc_Tctyp_CVTEnv _T31;long _T32;struct Cyc_Tctyp_CVTEnv _T33;long _T34;struct Cyc_Absyn_Kind*_T35;enum Cyc_Absyn_KindQual _T36;int _T37;struct Cyc_Tcenv_Tenv*_T38;long _T39;void**_T3A;struct Cyc_Absyn_Kind*_T3B;enum Cyc_Absyn_KindQual _T3C;int _T3D;struct Cyc_Tcenv_Tenv*_T3E;long _T3F;void**_T40;struct Cyc_Tctyp_CVTEnv _T41;long _T42;struct Cyc_Absyn_Kind*_T43;enum Cyc_Absyn_KindQual _T44;int _T45;struct Cyc_Tcenv_Tenv*_T46;long _T47;void**_T48;struct Cyc_Tctyp_CVTEnv _T49;long _T4A;struct Cyc_Absyn_Kind*_T4B;enum Cyc_Absyn_KindQual _T4C;int _T4D;struct Cyc_Absyn_Kind*_T4E;enum Cyc_Absyn_KindQual _T4F;int _T50;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T51;void*_T52;void**_T53;struct Cyc_Tctyp_CVTEnv _T54;struct Cyc_List_List*_T55;void*_T56;long _T57;struct Cyc_Absyn_Tvar*_T58;void*_T59;int*_T5A;int _T5B;struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*_T5C;struct Cyc_Core_Opt**_T5D;struct Cyc_Core_Opt**_T5E;struct Cyc_Core_Opt*_T5F;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T60;unsigned _T61;struct Cyc_Tctyp_CVTEnv _T62;struct Cyc_List_List*_T63;struct Cyc_Absyn_Tvar*_T64;struct Cyc_Tctyp_CVTEnv _T65;long _T66;struct Cyc_Tctyp_CVTEnv _T67;struct Cyc_List_List*_T68;struct Cyc_Absyn_Tvar*_T69;long _T6A;struct Cyc_Absyn_Tvar*_T6B;void*_T6C;int*_T6D;int _T6E;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T6F;struct Cyc_Core_Opt**_T70;long _T71;struct Cyc_Core_Opt**_T72;struct Cyc_Core_Opt*_T73;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T74;struct Cyc_Absyn_TypeDecl*_T75;struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*_T76;void***_T77;void*_T78;void*_T79;int*_T7A;unsigned _T7B;void*_T7C;struct Cyc_Tctyp_CVTEnv _T7D;struct Cyc_Tcenv_Tenv*_T7E;long _T7F;struct Cyc_Absyn_Aggrdecl*_T80;void*_T81;struct Cyc_Tctyp_CVTEnv _T82;struct Cyc_Tcenv_Tenv*_T83;long _T84;struct Cyc_Absyn_Enumdecl*_T85;void*_T86;void***_T87;void**_T88;struct Cyc_Tctyp_CVTEnv _T89;struct Cyc_Absyn_PtrInfo _T8A;struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T8B;struct Cyc_Absyn_Tqual*_T8C;struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T8D;void**_T8E;struct Cyc_Absyn_PtrInfo _T8F;struct Cyc_Absyn_PtrAtts _T90;struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T91;void**_T92;struct Cyc_Absyn_PtrInfo _T93;struct Cyc_Absyn_PtrAtts _T94;struct Cyc_Absyn_PtrInfo _T95;struct Cyc_Absyn_PtrAtts _T96;struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T97;void**_T98;void**_T99;void**_T9A;int*_T9B;int _T9C;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T9D;void*_T9E;int*_T9F;unsigned _TA0;void**_TA1;void**_TA2;void*_TA3;void**_TA4;void*_TA5;void**_TA6;int*_TA7;int _TA8;struct Cyc_Absyn_AppType_Absyn_Type_struct*_TA9;void*_TAA;int*_TAB;int _TAC;struct Cyc_Absyn_AppType_Absyn_Type_struct*_TAD;struct Cyc_List_List*_TAE;struct Cyc_Absyn_AppType_Absyn_Type_struct*_TAF;struct Cyc_List_List*_TB0;struct Cyc_List_List*_TB1;void*_TB2;int*_TB3;int _TB4;struct Cyc_List_List*_TB5;struct Cyc_Warn_String_Warn_Warg_struct _TB6;unsigned _TB7;struct _fat_ptr _TB8;void**_TB9;struct Cyc_Tctyp_CVTEnv _TBA;struct Cyc_Absyn_Kind*_TBB;struct Cyc_Absyn_Kind*_TBC;void*_TBD;struct Cyc_Tctyp_CVTEnv _TBE;struct Cyc_Absyn_Kind*_TBF;struct Cyc_Absyn_Kind*_TC0;void**_TC1;void*_TC2;struct Cyc_Tctyp_CVTEnv _TC3;struct Cyc_Absyn_Kind*_TC4;struct Cyc_Absyn_Kind*_TC5;void*_TC6;struct Cyc_Tctyp_CVTEnv _TC7;struct Cyc_Absyn_Kind*_TC8;struct Cyc_Absyn_Kind*_TC9;void*_TCA;struct Cyc_Tctyp_CVTEnv _TCB;struct Cyc_Absyn_Kind*_TCC;struct Cyc_Absyn_Kind*_TCD;void**_TCE;void*_TCF;long _TD0;struct Cyc_Tctyp_CVTEnv _TD1;struct Cyc_Absyn_Kind*_TD2;struct Cyc_Absyn_Kind*_TD3;void*_TD4;void**_TD5;int*_TD6;int _TD7;struct Cyc_Absyn_AppType_Absyn_Type_struct*_TD8;void*_TD9;int*_TDA;int _TDB;struct Cyc_Absyn_AppType_Absyn_Type_struct*_TDC;struct Cyc_List_List*_TDD;struct Cyc_Absyn_AppType_Absyn_Type_struct*_TDE;struct Cyc_List_List*_TDF;struct Cyc_List_List*_TE0;void*_TE1;int*_TE2;int _TE3;struct Cyc_List_List*_TE4;struct Cyc_Tctyp_CVTEnv _TE5;long _TE6;void**_TE7;struct Cyc_List_List*_TE8;void*_TE9;struct Cyc_Tctyp_CVTEnv _TEA;struct Cyc_Absyn_Kind*_TEB;struct Cyc_Absyn_Kind*_TEC;void**_TED;void*_TEE;struct Cyc_Absyn_Tqual*_TEF;struct Cyc_Tctyp_CVTEnv _TF0;unsigned _TF1;struct Cyc_Absyn_Tqual*_TF2;long _TF3;void*_TF4;void*_TF5;void*_TF6;long _TF7;long _TF8;long _TF9;struct Cyc_Warn_String_Warn_Warg_struct _TFA;struct Cyc_Warn_Typ_Warn_Warg_struct _TFB;struct Cyc_Warn_String_Warn_Warg_struct _TFC;unsigned _TFD;struct _fat_ptr _TFE;void**_TFF;void*_T100;long _T101;void*_T102;void**_T103;void*_T104;long _T105;long _T106;struct Cyc_Warn_String_Warn_Warg_struct _T107;unsigned _T108;struct _fat_ptr _T109;struct Cyc_Tcenv_Tenv*_T10A;struct Cyc_Absyn_Exp*_T10B;long _T10C;struct Cyc_Warn_String_Warn_Warg_struct _T10D;unsigned _T10E;struct _fat_ptr _T10F;struct Cyc_Tcenv_Tenv*_T110;struct Cyc_Absyn_Exp*_T111;struct Cyc_Absyn_ArrayInfo _T112;struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T113;struct Cyc_Absyn_Tqual*_T114;struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T115;struct Cyc_Absyn_Exp**_T116;struct Cyc_Absyn_ArrayInfo _T117;struct Cyc_Absyn_ArrayInfo _T118;struct Cyc_Absyn_Exp**_T119;struct Cyc_Tctyp_CVTEnv _T11A;struct Cyc_Absyn_Kind*_T11B;struct Cyc_Absyn_Kind*_T11C;void*_T11D;long _T11E;struct Cyc_Absyn_Tqual*_T11F;unsigned _T120;struct Cyc_Absyn_Tqual*_T121;long _T122;void*_T123;long _T124;long _T125;struct Cyc_Warn_String_Warn_Warg_struct _T126;struct Cyc_Warn_Typ_Warn_Warg_struct _T127;struct Cyc_Warn_String_Warn_Warg_struct _T128;unsigned _T129;struct _fat_ptr _T12A;long _T12B;struct Cyc_Warn_String_Warn_Warg_struct _T12C;unsigned _T12D;struct _fat_ptr _T12E;struct Cyc_Absyn_Exp**_T12F;struct Cyc_Tcenv_Tenv*_T130;struct Cyc_Absyn_Exp*_T131;long _T132;struct Cyc_Warn_String_Warn_Warg_struct _T133;unsigned _T134;struct _fat_ptr _T135;long _T136;long _T137;struct Cyc_Warn_String_Warn_Warg_struct _T138;unsigned _T139;struct _fat_ptr _T13A;struct Cyc_Absyn_FnType_Absyn_Type_struct*_T13B;struct Cyc_List_List**_T13C;struct Cyc_Absyn_FnType_Absyn_Type_struct*_T13D;void**_T13E;struct Cyc_Absyn_FnType_Absyn_Type_struct*_T13F;struct Cyc_Absyn_Tqual*_T140;struct Cyc_Absyn_FnInfo _T141;struct Cyc_Absyn_FnInfo _T142;struct Cyc_Absyn_FnInfo _T143;struct Cyc_Absyn_FnInfo _T144;struct Cyc_Absyn_FnType_Absyn_Type_struct*_T145;struct Cyc_List_List**_T146;struct Cyc_Absyn_FnInfo _T147;struct Cyc_Absyn_FnInfo _T148;struct Cyc_Absyn_FnType_Absyn_Type_struct*_T149;struct Cyc_AssnDef_ExistAssnFn**_T14A;struct Cyc_Absyn_FnInfo _T14B;struct Cyc_Absyn_FnType_Absyn_Type_struct*_T14C;struct Cyc_AssnDef_ExistAssnFn**_T14D;struct Cyc_Absyn_FnInfo _T14E;struct Cyc_Absyn_FnType_Absyn_Type_struct*_T14F;struct Cyc_AssnDef_ExistAssnFn**_T150;struct Cyc_Absyn_FnInfo _T151;struct Cyc_Absyn_FnType_Absyn_Type_struct*_T152;struct Cyc_AssnDef_ExistAssnFn**_T153;struct Cyc_Absyn_FnInfo _T154;struct Cyc_Absyn_FnInfo _T155;struct Cyc_Absyn_FnInfo _T156;struct Cyc_List_List*_T157;int*_T158;unsigned _T159;struct Cyc_List_List*_T15A;void*_T15B;long _T15C;struct Cyc_Warn_String_Warn_Warg_struct _T15D;struct Cyc_Warn_Attribute_Warn_Warg_struct _T15E;struct Cyc_List_List*_T15F;unsigned _T160;struct _fat_ptr _T161;struct Cyc_List_List*_T162;int _T163;int _T164;int _T165;struct Cyc_Warn_String_Warn_Warg_struct _T166;unsigned _T167;struct _fat_ptr _T168;struct Cyc_Warn_String_Warn_Warg_struct _T169;unsigned _T16A;struct _fat_ptr _T16B;unsigned _T16C;struct Cyc_List_List**_T16D;struct Cyc_List_List*_T16E;struct Cyc_List_List**_T16F;struct Cyc_List_List*_T170;void*_T171;struct Cyc_Absyn_Tvar*_T172;struct Cyc_Tctyp_CVTEnv _T173;struct Cyc_List_List*_T174;struct Cyc_List_List*_T175;void*_T176;struct Cyc_Absyn_Tvar*_T177;struct Cyc_List_List*_T178;void*_T179;struct Cyc_Absyn_Tvar*_T17A;void*_T17B;int*_T17C;int _T17D;struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*_T17E;struct Cyc_Absyn_Kind*_T17F;struct Cyc_Absyn_Kind*_T180;enum Cyc_Absyn_KindQual _T181;struct Cyc_Warn_String_Warn_Warg_struct _T182;struct Cyc_Warn_Tvar_Warn_Warg_struct _T183;struct Cyc_List_List*_T184;void*_T185;unsigned _T186;struct _fat_ptr _T187;struct Cyc_List_List*_T188;struct Cyc_Tctyp_CVTEnv _T189;struct Cyc_Tctyp_CVTEnv _T18A;struct Cyc_Tctyp_CVTEnv _T18B;struct Cyc_Tctyp_CVTEnv _T18C;struct Cyc_Absyn_Kind*_T18D;struct Cyc_Absyn_Kind*_T18E;void*_T18F;struct Cyc_Absyn_Tqual*_T190;unsigned _T191;struct Cyc_Absyn_Tqual*_T192;long _T193;void*_T194;struct Cyc_List_List*_T195;void*_T196;struct _tuple9*_T197;struct _tuple9 _T198;struct Cyc_Tctyp_CVTEnv _T199;struct Cyc_Absyn_Kind*_T19A;struct Cyc_Absyn_Kind*_T19B;void*_T19C;unsigned _T19D;struct _tuple9*_T19E;struct _tuple9 _T19F;struct Cyc_Absyn_Tqual _T1A0;long _T1A1;void*_T1A2;struct _tuple9*_T1A3;long _T1A4;struct Cyc_Tctyp_CVTEnv _T1A5;struct Cyc_Absyn_Kind*_T1A6;struct Cyc_Absyn_Kind*_T1A7;void*_T1A8;struct Cyc_Core_Opt*_T1A9;struct Cyc_Core_Opt*_T1AA;void*_T1AB;void*_T1AC;struct Cyc_Tctyp_CVTEnv _T1AD;struct Cyc_Absyn_Kind*_T1AE;struct Cyc_Absyn_Kind*_T1AF;void*_T1B0;struct _tuple9*_T1B1;struct Cyc_List_List*_T1B2;long _T1B3;struct Cyc_Warn_String_Warn_Warg_struct _T1B4;int(*_T1B5)(struct _fat_ptr);void*(*_T1B6)(struct _fat_ptr);struct _fat_ptr _T1B7;struct Cyc_Absyn_VarargInfo*_T1B8;struct Cyc_Tctyp_CVTEnv _T1B9;struct Cyc_Absyn_Kind*_T1BA;struct Cyc_Absyn_Kind*_T1BB;void*_T1BC;struct Cyc_Absyn_VarargInfo*_T1BD;unsigned _T1BE;struct Cyc_Absyn_VarargInfo*_T1BF;struct Cyc_Absyn_Tqual _T1C0;long _T1C1;void*_T1C2;long _T1C3;int*_T1C4;int _T1C5;struct Cyc_Absyn_PtrInfo _T1C6;struct Cyc_Absyn_PtrInfo _T1C7;struct Cyc_Absyn_PtrAtts _T1C8;struct Cyc_Absyn_PtrInfo _T1C9;struct Cyc_Absyn_PtrAtts _T1CA;int*_T1CB;int _T1CC;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T1CD;void*_T1CE;int*_T1CF;int _T1D0;long _T1D1;struct Cyc_Warn_String_Warn_Warg_struct _T1D2;unsigned _T1D3;struct _fat_ptr _T1D4;void*_T1D5;void*_T1D6;long _T1D7;long _T1D8;unsigned _T1D9;void*_T1DA;void*_T1DB;void*_T1DC;long _T1DD;struct Cyc_Warn_String_Warn_Warg_struct _T1DE;unsigned _T1DF;struct _fat_ptr _T1E0;struct Cyc_Warn_String_Warn_Warg_struct _T1E1;unsigned _T1E2;struct _fat_ptr _T1E3;struct Cyc_Warn_String_Warn_Warg_struct _T1E4;unsigned _T1E5;struct _fat_ptr _T1E6;long _T1E7;long _T1E8;int _T1E9;int _T1EA;struct Cyc_Warn_String_Warn_Warg_struct _T1EB;unsigned _T1EC;struct _fat_ptr _T1ED;struct _tuple9*(*_T1EE)(struct Cyc_List_List*,int);void*(*_T1EF)(struct Cyc_List_List*,int);struct Cyc_List_List*_T1F0;int _T1F1;struct _tuple9*_T1F2;int*_T1F3;int _T1F4;struct Cyc_Absyn_PtrInfo _T1F5;struct Cyc_Absyn_PtrInfo _T1F6;struct Cyc_Absyn_PtrAtts _T1F7;long _T1F8;struct Cyc_Warn_String_Warn_Warg_struct _T1F9;unsigned _T1FA;struct _fat_ptr _T1FB;long _T1FC;void*_T1FD;void*_T1FE;long _T1FF;struct Cyc_Warn_String_Warn_Warg_struct _T200;unsigned _T201;struct _fat_ptr _T202;long _T203;struct Cyc_Warn_String_Warn_Warg_struct _T204;unsigned _T205;struct _fat_ptr _T206;long _T207;unsigned _T208;void*_T209;void*_T20A;void*_T20B;void*_T20C;long _T20D;struct Cyc_Warn_String_Warn_Warg_struct _T20E;unsigned _T20F;struct _fat_ptr _T210;unsigned _T211;void*_T212;void*_T213;void*_T214;void*_T215;long _T216;struct Cyc_Warn_String_Warn_Warg_struct _T217;unsigned _T218;struct _fat_ptr _T219;struct Cyc_Warn_String_Warn_Warg_struct _T21A;unsigned _T21B;struct _fat_ptr _T21C;long _T21D;struct _tuple18 _T21E;struct Cyc_Absyn_VarargInfo*_T21F;void*_T220;void*_T221;enum Cyc_Absyn_Format_Type _T222;int _T223;void*_T224;int*_T225;int _T226;void*_T227;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T228;void*_T229;int*_T22A;int _T22B;void*_T22C;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T22D;void*_T22E;struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*_T22F;union Cyc_Absyn_DatatypeInfo _T230;struct _union_DatatypeInfo_KnownDatatype _T231;unsigned _T232;void*_T233;void*_T234;union Cyc_Absyn_DatatypeInfo _T235;struct _union_DatatypeInfo_KnownDatatype _T236;struct Cyc_Absyn_Datatypedecl**_T237;struct Cyc_Absyn_Datatypedecl*_T238;struct _tuple1*_T239;struct _tuple1*_T23A;int _T23B;void*_T23C;int*_T23D;int _T23E;void*_T23F;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T240;void*_T241;int*_T242;int _T243;void*_T244;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T245;void*_T246;struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*_T247;union Cyc_Absyn_DatatypeInfo _T248;struct _union_DatatypeInfo_KnownDatatype _T249;unsigned _T24A;void*_T24B;void*_T24C;union Cyc_Absyn_DatatypeInfo _T24D;struct _union_DatatypeInfo_KnownDatatype _T24E;struct Cyc_Absyn_Datatypedecl**_T24F;struct Cyc_Absyn_Datatypedecl*_T250;struct _tuple1*_T251;struct _tuple1*_T252;int _T253;long _T254;struct Cyc_Warn_String_Warn_Warg_struct _T255;unsigned _T256;struct _fat_ptr _T257;struct Cyc_List_List**_T258;struct Cyc_List_List*_T259;void*_T25A;struct Cyc_Tctyp_CVTEnv _T25B;struct Cyc_Absyn_Kind*_T25C;struct Cyc_Absyn_Kind*_T25D;void*_T25E;struct Cyc_Tctyp_CVTEnv _T25F;struct Cyc_Absyn_Kind*_T260;struct Cyc_Absyn_Kind*_T261;void*_T262;struct Cyc_List_List*_T263;struct Cyc_List_List*_T264;int*_T265;unsigned _T266;void*_T267;struct Cyc_Tctyp_CVTEnv _T268;struct Cyc_Absyn_Kind*_T269;struct Cyc_Absyn_Kind*_T26A;void*_T26B;void*_T26C;void*_T26D;void*_T26E;void*_T26F;struct Cyc_Tctyp_CVTEnv _T270;struct Cyc_Absyn_Kind*_T271;struct Cyc_Absyn_Kind*_T272;void*_T273;struct Cyc_Tctyp_CVTEnv _T274;struct Cyc_Absyn_Kind*_T275;struct Cyc_Absyn_Kind*_T276;void*_T277;struct Cyc_List_List*_T278;struct Cyc_Tctyp_CVTEnv _T279;struct Cyc_Tcenv_Tenv*_T27A;struct Cyc_Tcenv_Tenv*_T27B;struct Cyc_Tcenv_Tenv*_T27C;struct Cyc_Tcenv_Tenv*_T27D;struct Cyc_Tcenv_Tenv*_T27E;struct Cyc_Tcenv_Tenv*_T27F;struct Cyc_Tcenv_Tenv*_T280;struct Cyc_List_List*_T281;struct Cyc_List_List*_T282;long _T283;struct Cyc_Absyn_VarargInfo*_T284;unsigned _T285;struct Cyc_Warn_String_Warn_Warg_struct _T286;unsigned _T287;struct _fat_ptr _T288;struct Cyc_Tctyp_CVTEnv _T289;struct _fat_ptr _T28A;struct Cyc_Absyn_Exp*_T28B;struct Cyc_AssnDef_ExistAssnFn**_T28C;struct Cyc_Tctyp_CVTEnv _T28D;struct _fat_ptr _T28E;struct Cyc_Absyn_Exp*_T28F;struct Cyc_AssnDef_ExistAssnFn**_T290;struct Cyc_List_List*_T291;struct Cyc_List_List*_T292;struct Cyc_List_List*_T293;struct Cyc_Tctyp_CVTEnv _T294;struct _fat_ptr _T295;struct Cyc_Absyn_Exp*_T296;struct Cyc_AssnDef_ExistAssnFn**_T297;struct Cyc_AssnDef_AssnMap _T298;struct Cyc_List_List*_T299;struct Cyc_Tctyp_CVTEnv _T29A;struct _fat_ptr _T29B;struct Cyc_Absyn_Exp*_T29C;struct Cyc_AssnDef_ExistAssnFn**_T29D;void**_T29E;void*_T29F;struct Cyc_Tctyp_CVTEnv _T2A0;struct Cyc_Absyn_Kind*_T2A1;struct Cyc_Absyn_Kind*_T2A2;void**_T2A3;void*_T2A4;void*_T2A5;void**_T2A6;void*_T2A7;void*_T2A8;long _T2A9;void**_T2AA;struct Cyc_List_List*_T2AB;void**_T2AC;void*_T2AD;struct _fat_ptr _T2AE;void*_T2AF;struct Cyc_List_List*_T2B0;struct Cyc_List_List*_T2B1;struct Cyc_Tctyp_CVTEnv _T2B2;struct Cyc_List_List*_T2B3;void*_T2B4;struct _tuple15*_T2B5;long _T2B6;struct Cyc_Absyn_Tvar*_T2B7;void*_T2B8;int*_T2B9;unsigned _T2BA;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T2BB;struct Cyc_Absyn_Kind*_T2BC;struct Cyc_Absyn_Kind*_T2BD;enum Cyc_Absyn_KindQual _T2BE;int _T2BF;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T2C0;struct Cyc_Core_Opt**_T2C1;struct Cyc_Core_Opt**_T2C2;struct Cyc_Absyn_Kind*_T2C3;struct Cyc_Absyn_Kind*_T2C4;struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*_T2C5;struct Cyc_Absyn_Kind*_T2C6;struct Cyc_Absyn_Kind*_T2C7;enum Cyc_Absyn_KindQual _T2C8;int _T2C9;struct Cyc_List_List*_T2CA;struct Cyc_List_List*_T2CB;void*_T2CC;struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*_T2CD;struct Cyc_Core_Opt**_T2CE;struct Cyc_Core_Opt**_T2CF;struct Cyc_Core_Opt*_T2D0;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T2D1;struct Cyc_Absyn_Kind*_T2D2;struct Cyc_List_List*_T2D3;struct Cyc_Tctyp_CVTEnv _T2D4;struct Cyc_List_List*_T2D5;void*_T2D6;struct _tuple16*_T2D7;long _T2D8;struct Cyc_Absyn_Kind*_T2D9;enum Cyc_Absyn_KindQual _T2DA;int _T2DB;struct Cyc_List_List*_T2DC;struct Cyc_List_List*_T2DD;struct Cyc_List_List*_T2DE;void**_T2DF;struct Cyc_List_List**_T2E0;struct Cyc_List_List*_T2E1;struct Cyc_List_List**_T2E2;struct Cyc_List_List*_T2E3;void*_T2E4;struct Cyc_Absyn_Tvar*_T2E5;void*_T2E6;int*_T2E7;unsigned _T2E8;struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*_T2E9;struct Cyc_Core_Opt**_T2EA;struct Cyc_Warn_String_Warn_Warg_struct _T2EB;struct Cyc_Warn_Tvar_Warn_Warg_struct _T2EC;struct Cyc_List_List*_T2ED;void*_T2EE;struct Cyc_Warn_String_Warn_Warg_struct _T2EF;unsigned _T2F0;struct _fat_ptr _T2F1;struct Cyc_Core_Opt**_T2F2;struct Cyc_Absyn_Kind*_T2F3;struct Cyc_Absyn_Kind*_T2F4;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T2F5;struct Cyc_Core_Opt**_T2F6;struct Cyc_Absyn_Kind*_T2F7;struct Cyc_Absyn_Kind*_T2F8;enum Cyc_Absyn_KindQual _T2F9;int _T2FA;struct Cyc_Core_Opt**_T2FB;struct Cyc_Absyn_Kind*_T2FC;struct Cyc_Absyn_Kind*_T2FD;struct Cyc_Core_Opt**_T2FE;struct Cyc_Absyn_Kind*_T2FF;struct Cyc_Absyn_Kind*_T300;struct Cyc_Core_Opt**_T301;struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*_T302;struct Cyc_Absyn_Kind*_T303;struct Cyc_Absyn_Kind*_T304;enum Cyc_Absyn_KindQual _T305;struct Cyc_Warn_String_Warn_Warg_struct _T306;unsigned _T307;struct _fat_ptr _T308;struct Cyc_List_List*_T309;struct Cyc_List_List*(*_T30A)(struct Cyc_List_List*,struct Cyc_List_List*,struct Cyc_Absyn_Tvar*(*)(struct Cyc_Absyn_Tvar*));struct Cyc_Tctyp_CVTEnv _T30B;struct Cyc_List_List*_T30C;struct Cyc_List_List**_T30D;struct Cyc_List_List*_T30E;struct Cyc_Absyn_Tvar*(*_T30F)(struct Cyc_Absyn_Tvar*);void*(*_T310)(void*);struct Cyc_List_List*(*_T311)(struct Cyc_List_List*,struct Cyc_List_List*,struct Cyc_Absyn_Tvar*(*)(struct _tuple15*));struct Cyc_Tctyp_CVTEnv _T312;struct Cyc_List_List*_T313;struct Cyc_List_List**_T314;struct Cyc_List_List*_T315;struct Cyc_Absyn_Tvar*(*_T316)(struct _tuple15*);void*(*_T317)(struct _tuple0*);struct Cyc_Tctyp_CVTEnv _T318;struct Cyc_List_List*_T319;void*_T31A;struct _tuple15*_T31B;struct Cyc_Tctyp_CVTEnv _T31C;struct Cyc_List_List*_T31D;struct Cyc_Absyn_Tvar*_T31E;long _T31F;struct Cyc_List_List*_T320;struct Cyc_Tctyp_CVTEnv _T321;struct Cyc_List_List*_T322;void*_T323;struct _tuple16*_T324;struct Cyc_Tctyp_CVTEnv _T325;struct Cyc_List_List*_T326;void*_T327;long _T328;struct Cyc_List_List*_T329;struct Cyc_Tctyp_CVTEnv _T32A;struct Cyc_List_List*_T32B;unsigned _T32C;struct Cyc_Tctyp_CVTEnv _T32D;long(*_T32E)(long(*)(struct _tuple16*,struct _tuple16*),struct _tuple16*,struct Cyc_List_List*);long(*_T32F)(long(*)(void*,void*),void*,struct Cyc_List_List*);struct Cyc_List_List*_T330;void*_T331;struct _tuple16*_T332;struct Cyc_Tctyp_CVTEnv _T333;struct Cyc_List_List*_T334;long _T335;struct Cyc_List_List*_T336;struct Cyc_List_List*_T337;void*_T338;struct Cyc_Tctyp_CVTEnv _T339;struct Cyc_List_List*_T33A;struct Cyc_Tctyp_CVTEnv _T33B;struct Cyc_List_List*_T33C;void*_T33D;struct Cyc_Absyn_Tqual*_T33E;long(*_T33F)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*);long(*_T340)(int(*)(void*,void*),struct Cyc_List_List*,void*);int(*_T341)(struct _fat_ptr*,struct _fat_ptr*);struct Cyc_List_List*_T342;struct _fat_ptr*_T343;long _T344;struct Cyc_Warn_String_Warn_Warg_struct _T345;struct Cyc_Warn_String_Warn_Warg_struct _T346;struct _fat_ptr*_T347;unsigned _T348;struct _fat_ptr _T349;struct _fat_ptr*_T34A;struct _fat_ptr _T34B;struct _fat_ptr _T34C;int _T34D;struct Cyc_List_List*_T34E;struct Cyc_Tctyp_CVTEnv _T34F;struct Cyc_Absyn_Kind*_T350;struct Cyc_Absyn_Kind*_T351;void*_T352;struct Cyc_Absyn_Tqual*_T353;unsigned _T354;struct Cyc_Absyn_Tqual*_T355;long _T356;void*_T357;enum Cyc_Absyn_AggrKind _T358;int _T359;struct Cyc_Warn_String_Warn_Warg_struct _T35A;unsigned _T35B;struct _fat_ptr _T35C;struct Cyc_Tcenv_Tenv*_T35D;struct Cyc_Absyn_Exp*_T35E;long _T35F;struct Cyc_Warn_String_Warn_Warg_struct _T360;struct Cyc_Warn_TypOpt_Warn_Warg_struct _T361;struct Cyc_Absyn_Exp*_T362;struct Cyc_Warn_String_Warn_Warg_struct _T363;unsigned _T364;struct _fat_ptr _T365;struct Cyc_List_List*_T366;struct Cyc_Absyn_SubsetType_Absyn_Type_struct*_T367;struct Cyc_AssnDef_ExistAssnFn**_T368;struct Cyc_Tctyp_CVTEnv _T369;struct Cyc_Absyn_Kind*_T36A;struct Cyc_Absyn_Vardecl*_T36B;void*_T36C;long _T36D;long _T36E;struct Cyc_List_List*_T36F;struct _tuple9*_T370;struct Cyc_Absyn_Vardecl*_T371;struct _tuple1*_T372;struct Cyc_Absyn_Vardecl*_T373;struct Cyc_Absyn_Vardecl*_T374;struct Cyc_List_List*_T375;struct Cyc_Tctyp_CVTEnv _T376;struct Cyc_Tcenv_Tenv*_T377;struct Cyc_Tcenv_Tenv*_T378;struct Cyc_Tcenv_Tenv*_T379;struct Cyc_Tcenv_Tenv*_T37A;struct Cyc_Tcenv_Tenv*_T37B;struct Cyc_Tcenv_Tenv*_T37C;struct Cyc_Tcenv_Tenv*_T37D;struct Cyc_List_List*_T37E;struct Cyc_List_List*_T37F;long _T380;struct Cyc_Warn_String_Warn_Warg_struct _T381;struct Cyc_Absyn_Exp*_T382;unsigned _T383;struct _fat_ptr _T384;struct Cyc_Tctyp_CVTEnv _T385;struct _fat_ptr _T386;struct Cyc_Absyn_Exp*_T387;struct Cyc_AssnDef_ExistAssnFn**_T388;struct Cyc_Absyn_TypedefType_Absyn_Type_struct*_T389;struct Cyc_List_List**_T38A;struct Cyc_Absyn_TypedefType_Absyn_Type_struct*_T38B;struct Cyc_Absyn_Typedefdecl**_T38C;struct Cyc_Absyn_TypedefType_Absyn_Type_struct*_T38D;void**_T38E;struct _handler_cons*_T38F;int _T390;void*_T391;struct Cyc_Dict_Absent_exn_struct*_T392;char*_T393;char*_T394;struct Cyc_Warn_String_Warn_Warg_struct _T395;struct Cyc_Warn_Qvar_Warn_Warg_struct _T396;unsigned _T397;struct _fat_ptr _T398;struct Cyc_Tctyp_CVTEnv _T399;struct Cyc_Absyn_Typedefdecl**_T39A;struct Cyc_Tctyp_CVTEnv _T39B;struct Cyc_List_List**_T39C;struct Cyc_Absyn_Typedefdecl*_T39D;struct Cyc_List_List*_T39E;struct Cyc_Absyn_Kind*_T39F;long _T3A0;struct _tuple1*_T3A1;struct Cyc_Absyn_Typedefdecl*_T3A2;struct Cyc_Absyn_Typedefdecl*_T3A3;void*_T3A4;unsigned _T3A5;struct Cyc_Absyn_Typedefdecl*_T3A6;void*_T3A7;struct Cyc_Absyn_Kind*_T3A8;struct Cyc_Absyn_Typedefdecl*_T3A9;struct Cyc_List_List**_T3AA;struct Cyc_List_List*_T3AB;struct _tuple19*_T3AC;struct Cyc_List_List*_T3AD;void*_T3AE;struct Cyc_List_List*_T3AF;struct Cyc_List_List*_T3B0;struct Cyc_List_List*_T3B1;void**_T3B2;struct Cyc_List_List*_T3B3;struct Cyc_Absyn_Typedefdecl*_T3B4;void*_T3B5;void*_T3B6;struct Cyc_Absyn_Kind*_T3B7;struct Cyc_Absyn_Kind*_T3B8;long _T3B9;struct Cyc_Warn_String_Warn_Warg_struct _T3BA;struct Cyc_Warn_Typ_Warn_Warg_struct _T3BB;struct Cyc_Warn_String_Warn_Warg_struct _T3BC;struct Cyc_Warn_Kind_Warn_Warg_struct _T3BD;struct Cyc_Warn_String_Warn_Warg_struct _T3BE;struct Cyc_Warn_Kind_Warn_Warg_struct _T3BF;unsigned _T3C0;struct _fat_ptr _T3C1;struct Cyc_Tctyp_CVTEnv _T3C2;struct Cyc_Tcenv_Tenv*_T3C3;unsigned _T3C4;_T0= env;_T3C4= _T0.loc;_T1= env;_T3C3= _T1.te;{unsigned loc=_T3C4;struct Cyc_Tcenv_Tenv*te=_T3C3;{
# 836
void*_T3C5=Cyc_Absyn_compress(t);struct _tuple1*_T3C6;enum Cyc_Absyn_AggrKind _T3C7;struct Cyc_List_List*_T3C8;struct Cyc_List_List*_T3C9;struct Cyc_Absyn_Vardecl*_T3CA;void*_T3CB;struct Cyc_Absyn_Exp*_T3CC;struct Cyc_Absyn_Exp*_T3CD;struct Cyc_Absyn_Exp*_T3CE;struct Cyc_Absyn_Exp*_T3CF;struct Cyc_List_List*_T3D0;struct Cyc_Absyn_VarargInfo*_T3D1;long _T3D2;struct Cyc_List_List*_T3D3;unsigned _T3D4;void*_T3D5;void*_T3D6;void*_T3D7;void*_T3D8;void*_T3D9;void*_T3DA;const char*_T3DB;void*_T3DC;void*_T3DD;_T2= (int*)_T3C5;_T3= *_T2;switch(_T3){case 0:{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T3DE=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3C5;_T4= _T3DE->f1;_T3DD= (void*)_T4;_T5= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3C5;_T6= & _T5->f2;_T3DC= (struct Cyc_List_List**)_T6;}{void*c=_T3DD;struct Cyc_List_List**targsp=_T3DC;
# 838
env= Cyc_Tctyp_i_check_type_app(env,expected_kind,c,targsp,put_in_effect,allow_abs_aggr,t);goto _LL3;}case 3:{struct Cyc_Absyn_Cvar_Absyn_Type_struct*_T3DE=(struct Cyc_Absyn_Cvar_Absyn_Type_struct*)_T3C5;_T7= (struct Cyc_Absyn_Cvar_Absyn_Type_struct*)_T3C5;_T8= & _T7->f1;_T3DD= (struct Cyc_Core_Opt**)_T8;_T3DB= _T3DE->f5;}{struct Cyc_Core_Opt**k=_T3DD;const char*name=_T3DB;
# 842
if(name!=0)goto _TL131;{struct Cyc_Warn_String_Warn_Warg_struct _T3DE;_T3DE.tag= 0;
({__typeof__(_tag_fat("Unnamed Cvar ",sizeof(char),14U))_T3DF=_tag_fat("Unnamed Cvar ",sizeof(char),14U);_T3DE.f1= _T3DF;});_T9= _T3DE;}{struct Cyc_Warn_String_Warn_Warg_struct _T3DE=_T9;{struct Cyc_Warn_Typ_Warn_Warg_struct _T3DF;_T3DF.tag= 2;_T3DF.f1= t;_TA= _T3DF;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T3DF=_TA;void*_T3E0[2];_T3E0[0]= & _T3DE;_T3E0[1]= & _T3DF;_TB= loc;_TC= _tag_fat(_T3E0,sizeof(void*),2);Cyc_Warn_err2(_TB,_TC);}}goto _TL132;_TL131: _TL132: _TD= k;_TE= *_TD;
# 845
if(_TE==0)goto _TL135;else{goto _TL136;}_TL136: _TF= expected_kind;_T10= k;_T11= *_T10;_T12= _T11->v;_T13= (struct Cyc_Absyn_Kind*)_T12;_T14= 
Cyc_Kinds_kind_leq(_TF,_T13);
# 845
if(_T14)goto _TL137;else{goto _TL133;}_TL137: _T15= k;_T16= *_T15;_T17= 
_check_null(_T16);_T18= _T17->v;_T19= (struct Cyc_Absyn_Kind*)_T18;_T1A= expected_kind;_T1B= Cyc_Kinds_kind_leq(_T19,_T1A);
# 845
if(_T1B)goto _TL133;else{goto _TL135;}
# 847
_TL135: _T1C= k;({__typeof__(Cyc_Kinds_kind_to_opt(expected_kind))_T3DE=Cyc_Kinds_kind_to_opt(expected_kind);*_T1C= _T3DE;});goto _TL134;_TL133: _TL134: goto _LL3;}case 1:{struct Cyc_Absyn_Evar_Absyn_Type_struct*_T3DE=(struct Cyc_Absyn_Evar_Absyn_Type_struct*)_T3C5;_T1D= (struct Cyc_Absyn_Evar_Absyn_Type_struct*)_T3C5;_T1E= & _T1D->f1;_T3DD= (struct Cyc_Core_Opt**)_T1E;_T1F= (struct Cyc_Absyn_Evar_Absyn_Type_struct*)_T3C5;_T20= & _T1F->f2;_T3DC= (void**)_T20;}{struct Cyc_Core_Opt**k=_T3DD;void**ref=_T3DC;_T21= k;_T22= *_T21;
# 851
if(_T22==0)goto _TL13A;else{goto _TL13B;}_TL13B: _T23= expected_kind;_T24= k;_T25= *_T24;_T26= _T25->v;_T27= (struct Cyc_Absyn_Kind*)_T26;_T28= 
Cyc_Kinds_kind_leq(_T23,_T27);
# 851
if(_T28)goto _TL13C;else{goto _TL138;}_TL13C: _T29= k;_T2A= *_T29;_T2B= 
_check_null(_T2A);_T2C= _T2B->v;_T2D= (struct Cyc_Absyn_Kind*)_T2C;_T2E= expected_kind;_T2F= Cyc_Kinds_kind_leq(_T2D,_T2E);
# 851
if(_T2F)goto _TL138;else{goto _TL13A;}
# 853
_TL13A: _T30= k;({__typeof__(Cyc_Kinds_kind_to_opt(expected_kind))_T3DE=Cyc_Kinds_kind_to_opt(expected_kind);*_T30= _T3DE;});goto _TL139;_TL138: _TL139: _T31= env;_T32= _T31.fn_result;
# 855
if(!_T32)goto _TL13D;_T33= env;_T34= _T33.generalize_evars;if(!_T34)goto _TL13D;_T35= expected_kind;_T36= _T35->kind;_T37= (int)_T36;
if(_T37!=3)goto _TL13F;_T38= te;_T39= _T38->tempest_generalize;if(_T39)goto _TL13F;else{goto _TL141;}
_TL141: _T3A= ref;*_T3A= Cyc_Absyn_heap_rgn_type;goto _LL3;
# 859
_TL13F: _T3B= expected_kind;_T3C= _T3B->kind;_T3D= (int)_T3C;if(_T3D!=7)goto _TL142;_T3E= te;_T3F= _T3E->tempest_generalize;if(_T3F)goto _TL142;else{goto _TL144;}
_TL144: _T40= ref;*_T40= Cyc_Absyn_al_qual_type;goto _LL3;_TL142: goto _TL13E;_TL13D: _TL13E: _T41= env;_T42= _T41.inst_type_evar;
# 865
if(!_T42)goto _TL145;_T43= expected_kind;_T44= _T43->kind;_T45= (int)_T44;if(_T45!=7)goto _TL145;_T46= te;_T47= _T46->tempest_generalize;if(_T47)goto _TL145;else{goto _TL147;}
_TL147: _T48= ref;*_T48= Cyc_Absyn_al_qual_type;goto _LL3;_TL145: _T49= env;_T4A= _T49.generalize_evars;
# 870
if(!_T4A)goto _TL148;_T4B= expected_kind;_T4C= _T4B->kind;_T4D= (int)_T4C;if(_T4D==5)goto _TL148;_T4E= expected_kind;_T4F= _T4E->kind;_T50= (int)_T4F;if(_T50==6)goto _TL148;{struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T3DE=_cycalloc(sizeof(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct));_T3DE->tag= 2;
# 873
_T3DE->f1= 0;_T3DE->f2= expected_kind;_T51= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3DE;}_T52= (void*)_T51;{struct Cyc_Absyn_Tvar*v=Cyc_Tcutil_new_tvar(_T52);_T53= ref;
({__typeof__(Cyc_Absyn_var_type(v))_T3DE=Cyc_Absyn_var_type(v);*_T53= _T3DE;});_T3DD= v;goto _LLB;}_TL148: _T54= env;_T55= _T54.free_evars;_T56= t;_T57= put_in_effect;
# 877
({__typeof__(Cyc_Tctyp_add_free_evar(_T55,_T56,_T57))_T3DE=Cyc_Tctyp_add_free_evar(_T55,_T56,_T57);env.free_evars= _T3DE;});goto _LL3;}case 2:{struct Cyc_Absyn_VarType_Absyn_Type_struct*_T3DE=(struct Cyc_Absyn_VarType_Absyn_Type_struct*)_T3C5;_T3DD= _T3DE->f1;}_LLB: {struct Cyc_Absyn_Tvar*v=_T3DD;_T58= v;_T59= _T58->kind;{
# 880
void*_T3DE=Cyc_Kinds_compress_kb(_T59);void*_T3DF;_T5A= (int*)_T3DE;_T5B= *_T5A;if(_T5B!=1)goto _TL14A;{struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*_T3E0=(struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*)_T3DE;_T5C= (struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*)_T3DE;_T5D= & _T5C->f1;_T3DF= (struct Cyc_Core_Opt**)_T5D;}{struct Cyc_Core_Opt**f=(struct Cyc_Core_Opt**)_T3DF;_T5E= f;{struct Cyc_Core_Opt*_T3E0=_cycalloc(sizeof(struct Cyc_Core_Opt));{struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T3E1=_cycalloc(sizeof(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct));_T3E1->tag= 2;
# 882
_T3E1->f1= 0;_T3E1->f2= expected_kind;_T60= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3E1;}_T3E0->v= (void*)_T60;_T5F= (struct Cyc_Core_Opt*)_T3E0;}*_T5E= _T5F;goto _LL1E;}_TL14A: goto _LL1E;_LL1E:;}_T61= loc;_T62= env;_T63= _T62.kind_env;_T64= v;_T65= env;_T66= _T65.allow_aqual_bounds;
# 889
({__typeof__(Cyc_Tctyp_add_free_tvar(_T61,_T63,_T64,_T66))_T3DE=Cyc_Tctyp_add_free_tvar(_T61,_T63,_T64,_T66);env.kind_env= _T3DE;});_T67= env;_T68= _T67.free_vars;_T69= v;_T6A= put_in_effect;
# 892
({__typeof__(Cyc_Tctyp_fast_add_free_tvar_bool(_T68,_T69,_T6A))_T3DE=Cyc_Tctyp_fast_add_free_tvar_bool(_T68,_T69,_T6A);env.free_vars= _T3DE;});_T6B= v;_T6C= _T6B->kind;{
# 894
void*_T3DE=Cyc_Kinds_compress_kb(_T6C);struct Cyc_Absyn_Kind*_T3DF;void*_T3E0;_T6D= (int*)_T3DE;_T6E= *_T6D;if(_T6E!=2)goto _TL14C;{struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T3E1=(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3DE;_T6F= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3DE;_T70= & _T6F->f1;_T3E0= (struct Cyc_Core_Opt**)_T70;_T3DF= _T3E1->f2;}{struct Cyc_Core_Opt**f=(struct Cyc_Core_Opt**)_T3E0;struct Cyc_Absyn_Kind*k=_T3DF;_T71= 
# 896
Cyc_Kinds_kind_leq(expected_kind,k);if(!_T71)goto _TL14E;_T72= f;{struct Cyc_Core_Opt*_T3E1=_cycalloc(sizeof(struct Cyc_Core_Opt));{struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T3E2=_cycalloc(sizeof(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct));_T3E2->tag= 2;
_T3E2->f1= 0;_T3E2->f2= expected_kind;_T74= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3E2;}_T3E1->v= (void*)_T74;_T73= (struct Cyc_Core_Opt*)_T3E1;}*_T72= _T73;goto _TL14F;_TL14E: _TL14F: goto _LL23;}_TL14C: goto _LL23;_LL23:;}goto _LL3;}case 10:{struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*_T3DE=(struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*)_T3C5;_T75= _T3DE->f1;{struct Cyc_Absyn_TypeDecl _T3DF=*_T75;_T3DD= _T3DF.r;}_T76= (struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct*)_T3C5;_T77= & _T76->f2;_T3DC= (void***)_T77;}{void*td=_T3DD;void***topt=_T3DC;_T78= 
# 907
Cyc_Absyn_compress(t);{void*new_typ=Cyc_Tcutil_copy_type(_T78);{struct Cyc_Absyn_Datatypedecl*_T3DE;struct Cyc_Absyn_Enumdecl*_T3DF;struct Cyc_Absyn_Aggrdecl*_T3E0;_T79= td;_T7A= (int*)_T79;_T7B= *_T7A;switch(_T7B){case 0: _T7C= td;{struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct*_T3E1=(struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct*)_T7C;_T3E0= _T3E1->f1;}{struct Cyc_Absyn_Aggrdecl*ad=_T3E0;_T7D= env;_T7E= _T7D.te;_T7F= _T7E->in_extern_c_include;
# 910
if(!_T7F)goto _TL151;_T80= ad;
_T80->sc= 4U;goto _TL152;_TL151: _TL152:
 Cyc_Tc_tcAggrdecl(te,loc,ad);goto _LL28;}case 1: _T81= td;{struct Cyc_Absyn_Enum_td_Absyn_Raw_typedecl_struct*_T3E1=(struct Cyc_Absyn_Enum_td_Absyn_Raw_typedecl_struct*)_T81;_T3DF= _T3E1->f1;}{struct Cyc_Absyn_Enumdecl*ed=_T3DF;_T82= env;_T83= _T82.te;_T84= _T83->in_extern_c_include;
# 915
if(!_T84)goto _TL153;_T85= ed;
_T85->sc= 4U;goto _TL154;_TL153: _TL154:
 Cyc_Tc_tcEnumdecl(te,loc,ed);goto _LL28;}default: _T86= td;{struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct*_T3E1=(struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct*)_T86;_T3DE= _T3E1->f1;}{struct Cyc_Absyn_Datatypedecl*dd=_T3DE;
# 920
Cyc_Tc_tcDatatypedecl(te,loc,dd);goto _LL28;}}_LL28:;}_T87= topt;{void**_T3DE=_cycalloc(sizeof(void*));
# 923
*_T3DE= new_typ;_T88= (void**)_T3DE;}*_T87= _T88;_T89= 
Cyc_Tctyp_i_check_type(env,expected_kind,new_typ,put_in_effect,allow_abs_aggr);return _T89;}}case 4:{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T3DE=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T3C5;_T8A= _T3DE->f1;_T3DD= _T8A.elt_type;_T8B= (struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T3C5;_T8C= & _T8B->f1.elt_tq;_T3DC= (struct Cyc_Absyn_Tqual*)_T8C;_T8D= (struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T3C5;_T8E= & _T8D->f1.ptr_atts.eff;_T3DA= (void**)_T8E;_T8F= _T3DE->f1;_T90= _T8F.ptr_atts;_T3D9= _T90.nullable;_T91= (struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T3C5;_T92= & _T91->f1.ptr_atts.bounds;_T3D8= (void**)_T92;_T93= _T3DE->f1;_T94= _T93.ptr_atts;_T3D7= _T94.zero_term;_T95= _T3DE->f1;_T96= _T95.ptr_atts;_T3D6= _T96.autoreleased;_T97= (struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T3C5;_T98= & _T97->f1.ptr_atts.aqual;_T3D5= (void**)_T98;}{void*t1=_T3DD;struct Cyc_Absyn_Tqual*tqp=_T3DC;void**eff_type=_T3DA;void*nullable=_T3D9;void**b=_T3D8;void*zt=_T3D7;void*rel=_T3D6;void**aq=_T3D5;_T99= aq;{
# 930
void*override_aq=*_T99;_T9A= eff_type;{
void*_T3DE=*_T9A;_T9B= (int*)_T3DE;_T9C= *_T9B;if(_T9C!=0)goto _TL155;_T9D= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3DE;_T9E= _T9D->f1;_T9F= (int*)_T9E;_TA0= *_T9F;switch(_TA0){case 7: _TA1= eff_type;
# 933
*_TA1= Cyc_Absyn_heap_rgn_type;
override_aq= Cyc_Absyn_un_qual_type;goto _LL2F;case 8: _TA2= eff_type;
# 937
*_TA2= Cyc_Absyn_heap_rgn_type;
override_aq= Cyc_Absyn_rc_qual_type;goto _LL2F;default: goto _LL34;}goto _TL156;_TL155: _LL34: goto _LL2F;_TL156: _LL2F:;}_TA3= override_aq;_TA4= aq;_TA5= *_TA4;
# 943
if(_TA3==_TA5)goto _TL158;_TA6= aq;{
void*_T3DE=*_TA6;struct Cyc_List_List*_T3DF;_TA7= (int*)_T3DE;_TA8= *_TA7;if(_TA8!=0)goto _TL15A;_TA9= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3DE;_TAA= _TA9->f1;_TAB= (int*)_TAA;_TAC= *_TAB;if(_TAC!=17)goto _TL15C;_TAD= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3DE;_TAE= _TAD->f2;if(_TAE==0)goto _TL15E;_TAF= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3DE;_TB0= _TAF->f2;_TB1= (struct Cyc_List_List*)_TB0;_TB2= _TB1->hd;_TB3= (int*)_TB2;_TB4= *_TB3;if(_TB4!=1)goto _TL160;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T3E0=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3DE;_TB5= _T3E0->f2;{struct Cyc_List_List _T3E1=*_TB5;_T3DF= _T3E1.tl;}}{struct Cyc_List_List*bnd=_T3DF;goto _LL36;}_TL160: goto _LL39;_TL15E: goto _LL39;_TL15C: goto _LL39;_TL15A: _LL39:{struct Cyc_Warn_String_Warn_Warg_struct _T3E0;_T3E0.tag= 0;
# 948
({__typeof__(_tag_fat("`U and `RC shorthands override explicit aqual",sizeof(char),46U))_T3E1=_tag_fat("`U and `RC shorthands override explicit aqual",sizeof(char),46U);_T3E0.f1= _T3E1;});_TB6= _T3E0;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E0=_TB6;void*_T3E1[1];_T3E1[0]= & _T3E0;_TB7= loc;_TB8= _tag_fat(_T3E1,sizeof(void*),1);Cyc_Warn_warn2(_TB7,_TB8);}_LL36:;}_TB9= aq;
# 950
*_TB9= override_aq;goto _TL159;_TL158: _TL159:
# 952
 Cyc_Tctyp_check_constrain_ptrbnd(loc,t,expected_kind);_TBA= env;_TBB= & Cyc_Kinds_ak;_TBC= (struct Cyc_Absyn_Kind*)_TBB;_TBD= t1;
env= Cyc_Tctyp_i_check_type(_TBA,_TBC,_TBD,1,1);_TBE= env;_TBF= & Cyc_Kinds_ek;_TC0= (struct Cyc_Absyn_Kind*)_TBF;_TC1= eff_type;_TC2= *_TC1;
# 955
env= Cyc_Tctyp_i_check_type(_TBE,_TC0,_TC2,1,1);_TC3= env;_TC4= & Cyc_Kinds_boolk;_TC5= (struct Cyc_Absyn_Kind*)_TC4;_TC6= zt;
env= Cyc_Tctyp_i_check_type(_TC3,_TC5,_TC6,0,1);_TC7= env;_TC8= & Cyc_Kinds_boolk;_TC9= (struct Cyc_Absyn_Kind*)_TC8;_TCA= nullable;
env= Cyc_Tctyp_i_check_type(_TC7,_TC9,_TCA,0,1);_TCB= env;_TCC= & Cyc_Kinds_ptrbk;_TCD= (struct Cyc_Absyn_Kind*)_TCC;_TCE= b;_TCF= *_TCE;_TD0= allow_abs_aggr;
env= Cyc_Tctyp_i_check_type(_TCB,_TCD,_TCF,0,_TD0);_TD1= env;_TD2= & Cyc_Kinds_boolk;_TD3= (struct Cyc_Absyn_Kind*)_TD2;_TD4= rel;
env= Cyc_Tctyp_i_check_type(_TD1,_TD3,_TD4,0,1);_TD5= aq;{
void*_T3DE=*_TD5;struct Cyc_List_List*_T3DF;_TD6= (int*)_T3DE;_TD7= *_TD6;if(_TD7!=0)goto _TL162;_TD8= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3DE;_TD9= _TD8->f1;_TDA= (int*)_TD9;_TDB= *_TDA;if(_TDB!=17)goto _TL164;_TDC= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3DE;_TDD= _TDC->f2;if(_TDD==0)goto _TL166;_TDE= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3DE;_TDF= _TDE->f2;_TE0= (struct Cyc_List_List*)_TDF;_TE1= _TE0->hd;_TE2= (int*)_TE1;_TE3= *_TE2;if(_TE3!=1)goto _TL168;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T3E0=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3DE;_TE4= _T3E0->f2;{struct Cyc_List_List _T3E1=*_TE4;_T3DF= _T3E1.tl;}}{struct Cyc_List_List*bnd=_T3DF;_TE5= env;_TE6= _TE5.def_aliasable;
# 964
if(!_TE6)goto _TL16A;_TE7= aq;
*_TE7= Cyc_Absyn_al_qual_type;goto _TL16B;
# 967
_TL16A: _TE8= _check_null(bnd);_TE9= Cyc_Absyn_rtd_qual_type;_TE8->hd= (void*)_TE9;_TL16B: goto _LL3B;}_TL168: goto _LL3E;_TL166: goto _LL3E;_TL164: goto _LL3E;_TL162: _LL3E: goto _LL3B;_LL3B:;}_TEA= env;_TEB= & Cyc_Kinds_aqk;_TEC= (struct Cyc_Absyn_Kind*)_TEB;_TED= aq;_TEE= *_TED;
# 974
env= Cyc_Tctyp_i_check_type(_TEA,_TEC,_TEE,0,1);_TEF= tqp;_TF0= env;_TF1= _TF0.loc;_TF2= tqp;_TF3= _TF2->print_const;_TF4= t1;
({__typeof__(Cyc_Tcutil_extract_const_from_typedef(_TF1,_TF3,_TF4))_T3DE=Cyc_Tcutil_extract_const_from_typedef(_TF1,_TF3,_TF4);_TEF->real_const= _T3DE;});_TF5= zt;_TF7= 
# 979
Cyc_Tcutil_is_char_type(t1);if(!_TF7)goto _TL16C;_TF6= Cyc_Absyn_true_type;goto _TL16D;_TL16C: _TF6= Cyc_Absyn_false_type;_TL16D: Cyc_Unify_unify(_TF5,_TF6);{
long is_zero_terminated=Cyc_Absyn_type2bool(0,zt);_TF8= is_zero_terminated;
if(!_TF8)goto _TL16E;_TF9= Cyc_Tcutil_admits_zero(t1);if(_TF9)goto _TL16E;else{goto _TL170;}
_TL170:{struct Cyc_Warn_String_Warn_Warg_struct _T3DE;_T3DE.tag= 0;({__typeof__(_tag_fat("cannot have a pointer to zero-terminated ",sizeof(char),42U))_T3DF=_tag_fat("cannot have a pointer to zero-terminated ",sizeof(char),42U);_T3DE.f1= _T3DF;});_TFA= _T3DE;}{struct Cyc_Warn_String_Warn_Warg_struct _T3DE=_TFA;{struct Cyc_Warn_Typ_Warn_Warg_struct _T3DF;_T3DF.tag= 2;_T3DF.f1= t1;_TFB= _T3DF;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T3DF=_TFB;{struct Cyc_Warn_String_Warn_Warg_struct _T3E0;_T3E0.tag= 0;({__typeof__(_tag_fat(" elements",sizeof(char),10U))_T3E1=_tag_fat(" elements",sizeof(char),10U);_T3E0.f1= _T3E1;});_TFC= _T3E0;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E0=_TFC;void*_T3E1[3];_T3E1[0]= & _T3DE;_T3E1[1]= & _T3DF;_T3E1[2]= & _T3E0;_TFD= loc;_TFE= _tag_fat(_T3E1,sizeof(void*),3);Cyc_Warn_err2(_TFD,_TFE);}}}goto _TL16F;_TL16E: _TL16F: _TFF= b;_T100= *_TFF;_T101= 
# 985
Cyc_Tcutil_is_cvar_type(_T100);if(_T101)goto _TL171;else{goto _TL173;}
_TL173: _T102= Cyc_Absyn_bounds_one();_T103= b;_T104= *_T103;{struct Cyc_Absyn_Exp*e=Cyc_Tcutil_get_bounds_exp(_T102,_T104);
if(e==0)goto _TL174;{
struct _tuple14 _T3DE=Cyc_Evexp_eval_const_uint_exp(e);long _T3DF;unsigned _T3E0;_T3E0= _T3DE.f0;_T3DF= _T3DE.f1;{unsigned sz=_T3E0;long known=_T3DF;_T105= is_zero_terminated;
if(!_T105)goto _TL176;_T106= known;if(_T106)goto _TL179;else{goto _TL178;}_TL179: if(sz < 1U)goto _TL178;else{goto _TL176;}
_TL178:{struct Cyc_Warn_String_Warn_Warg_struct _T3E1;_T3E1.tag= 0;({__typeof__(_tag_fat("zero-terminated pointer cannot point to empty sequence",sizeof(char),55U))_T3E2=_tag_fat("zero-terminated pointer cannot point to empty sequence",sizeof(char),55U);_T3E1.f1= _T3E2;});_T107= _T3E1;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E1=_T107;void*_T3E2[1];_T3E2[0]= & _T3E1;_T108= loc;_T109= _tag_fat(_T3E2,sizeof(void*),1);Cyc_Warn_err2(_T108,_T109);}goto _TL177;_TL176: _TL177:;}}goto _TL175;_TL174: _TL175:;}goto _TL172;_TL171: _TL172: goto _LL3;}}}case 9:{struct Cyc_Absyn_ValueofType_Absyn_Type_struct*_T3DE=(struct Cyc_Absyn_ValueofType_Absyn_Type_struct*)_T3C5;_T3DD= _T3DE->f1;}{struct Cyc_Absyn_Exp*e=_T3DD;_T10A= 
# 998
Cyc_Tcenv_allow_valueof(te);_T10B= e;Cyc_Tcexp_tcExp(_T10A,0,_T10B);_T10C= 
Cyc_Tcutil_coerce_uint_type(e);if(_T10C)goto _TL17A;else{goto _TL17C;}
_TL17C:{struct Cyc_Warn_String_Warn_Warg_struct _T3DE;_T3DE.tag= 0;({__typeof__(_tag_fat("valueof_t requires an int expression",sizeof(char),37U))_T3DF=_tag_fat("valueof_t requires an int expression",sizeof(char),37U);_T3DE.f1= _T3DF;});_T10D= _T3DE;}{struct Cyc_Warn_String_Warn_Warg_struct _T3DE=_T10D;void*_T3DF[1];_T3DF[0]= & _T3DE;_T10E= loc;_T10F= _tag_fat(_T3DF,sizeof(void*),1);Cyc_Warn_err2(_T10E,_T10F);}goto _TL17B;_TL17A: _TL17B:
 env= Cyc_Tctyp_i_check_type_level_exp(e,env);goto _LL3;}case 11:{struct Cyc_Absyn_TypeofType_Absyn_Type_struct*_T3DE=(struct Cyc_Absyn_TypeofType_Absyn_Type_struct*)_T3C5;_T3DD= _T3DE->f1;}{struct Cyc_Absyn_Exp*e=_T3DD;_T110= 
# 1007
Cyc_Tcenv_allow_valueof(te);_T111= e;Cyc_Tcexp_tcExp(_T110,0,_T111);goto _LL3;}case 5:{struct Cyc_Absyn_ArrayType_Absyn_Type_struct*_T3DE=(struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_T3C5;_T112= _T3DE->f1;_T3DD= _T112.elt_type;_T113= (struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_T3C5;_T114= & _T113->f1.tq;_T3DC= (struct Cyc_Absyn_Tqual*)_T114;_T115= (struct Cyc_Absyn_ArrayType_Absyn_Type_struct*)_T3C5;_T116= & _T115->f1.num_elts;_T3DA= (struct Cyc_Absyn_Exp**)_T116;_T117= _T3DE->f1;_T3D9= _T117.zero_term;_T118= _T3DE->f1;_T3D4= _T118.zt_loc;}{void*t1=_T3DD;struct Cyc_Absyn_Tqual*tqp=_T3DC;struct Cyc_Absyn_Exp**eptr=_T3DA;void*zt=_T3D9;unsigned ztl=_T3D4;_T119= eptr;{
# 1012
struct Cyc_Absyn_Exp*e=*_T119;_T11A= env;_T11B= & Cyc_Kinds_mk;_T11C= (struct Cyc_Absyn_Kind*)_T11B;_T11D= t1;_T11E= allow_abs_aggr;
env= Cyc_Tctyp_i_check_type(_T11A,_T11C,_T11D,1,_T11E);_T11F= tqp;_T120= loc;_T121= tqp;_T122= _T121->print_const;_T123= t1;
({__typeof__(Cyc_Tcutil_extract_const_from_typedef(_T120,_T122,_T123))_T3DE=Cyc_Tcutil_extract_const_from_typedef(_T120,_T122,_T123);_T11F->real_const= _T3DE;});{
# 1016
long is_zero_terminated=Cyc_Tcutil_force_type2bool(0,zt);_T124= is_zero_terminated;
if(!_T124)goto _TL17D;_T125= 
# 1019
Cyc_Tcutil_admits_zero(t1);if(_T125)goto _TL17F;else{goto _TL181;}
_TL181:{struct Cyc_Warn_String_Warn_Warg_struct _T3DE;_T3DE.tag= 0;({__typeof__(_tag_fat("cannot have a zero-terminated array of ",sizeof(char),40U))_T3DF=_tag_fat("cannot have a zero-terminated array of ",sizeof(char),40U);_T3DE.f1= _T3DF;});_T126= _T3DE;}{struct Cyc_Warn_String_Warn_Warg_struct _T3DE=_T126;{struct Cyc_Warn_Typ_Warn_Warg_struct _T3DF;_T3DF.tag= 2;_T3DF.f1= t1;_T127= _T3DF;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T3DF=_T127;{struct Cyc_Warn_String_Warn_Warg_struct _T3E0;_T3E0.tag= 0;({__typeof__(_tag_fat(" elements",sizeof(char),10U))_T3E1=_tag_fat(" elements",sizeof(char),10U);_T3E0.f1= _T3E1;});_T128= _T3E0;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E0=_T128;void*_T3E1[3];_T3E1[0]= & _T3DE;_T3E1[1]= & _T3DF;_T3E1[2]= & _T3E0;_T129= loc;_T12A= _tag_fat(_T3E1,sizeof(void*),3);Cyc_Warn_err2(_T129,_T12A);}}}goto _TL180;_TL17F: _TL180: goto _TL17E;_TL17D: _TL17E:
# 1024
 if(e!=0)goto _TL182;_T12B= is_zero_terminated;
# 1027
if(_T12B)goto _TL184;else{goto _TL186;}
# 1029
_TL186:{struct Cyc_Warn_String_Warn_Warg_struct _T3DE;_T3DE.tag= 0;({__typeof__(_tag_fat("array bound defaults to 1 here",sizeof(char),31U))_T3DF=_tag_fat("array bound defaults to 1 here",sizeof(char),31U);_T3DE.f1= _T3DF;});_T12C= _T3DE;}{struct Cyc_Warn_String_Warn_Warg_struct _T3DE=_T12C;void*_T3DF[1];_T3DF[0]= & _T3DE;_T12D= loc;_T12E= _tag_fat(_T3DF,sizeof(void*),1);Cyc_Warn_warn2(_T12D,_T12E);}goto _TL185;_TL184: _TL185: _T12F= eptr;
e= Cyc_Absyn_uint_exp(1U,0U);*_T12F= e;goto _TL183;_TL182: _TL183: _T130= 
# 1032
Cyc_Tcenv_allow_valueof(te);_T131= e;Cyc_Tcexp_tcExp(_T130,0,_T131);_T132= 
Cyc_Tcutil_coerce_uint_type(e);if(_T132)goto _TL187;else{goto _TL189;}
_TL189:{struct Cyc_Warn_String_Warn_Warg_struct _T3DE;_T3DE.tag= 0;({__typeof__(_tag_fat("array bounds expression is not an unsigned int",sizeof(char),47U))_T3DF=_tag_fat("array bounds expression is not an unsigned int",sizeof(char),47U);_T3DE.f1= _T3DF;});_T133= _T3DE;}{struct Cyc_Warn_String_Warn_Warg_struct _T3DE=_T133;void*_T3DF[1];_T3DF[0]= & _T3DE;_T134= loc;_T135= _tag_fat(_T3DF,sizeof(void*),1);Cyc_Warn_err2(_T134,_T135);}goto _TL188;_TL187: _TL188:
 env= Cyc_Tctyp_i_check_type_level_exp(e,env);{
struct _tuple14 _T3DE=Cyc_Evexp_eval_const_uint_exp(e);long _T3DF;unsigned _T3E0;_T3E0= _T3DE.f0;_T3DF= _T3DE.f1;{unsigned sz=_T3E0;long known=_T3DF;_T136= is_zero_terminated;
# 1038
if(!_T136)goto _TL18A;_T137= known;if(!_T137)goto _TL18A;if(sz >= 1U)goto _TL18A;{struct Cyc_Warn_String_Warn_Warg_struct _T3E1;_T3E1.tag= 0;
({__typeof__(_tag_fat("zero terminated array cannot have zero elements",sizeof(char),48U))_T3E2=_tag_fat("zero terminated array cannot have zero elements",sizeof(char),48U);_T3E1.f1= _T3E2;});_T138= _T3E1;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E1=_T138;void*_T3E2[1];_T3E2[0]= & _T3E1;_T139= loc;_T13A= _tag_fat(_T3E2,sizeof(void*),1);Cyc_Warn_warn2(_T139,_T13A);}goto _TL18B;_TL18A: _TL18B: goto _LL3;}}}}}case 6:{struct Cyc_Absyn_FnType_Absyn_Type_struct*_T3DE=(struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T3C5;_T13B= (struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T3C5;_T13C= & _T13B->f1.tvars;_T3DD= (struct Cyc_List_List**)_T13C;_T13D= (struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T3C5;_T13E= & _T13D->f1.effect;_T3DC= (void**)_T13E;_T13F= (struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T3C5;_T140= & _T13F->f1.ret_tqual;_T3DA= (struct Cyc_Absyn_Tqual*)_T140;_T141= _T3DE->f1;_T3D9= _T141.ret_type;_T142= _T3DE->f1;_T3D3= _T142.args;_T143= _T3DE->f1;_T3D2= _T143.c_varargs;_T144= _T3DE->f1;_T3D1= _T144.cyc_varargs;_T145= (struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T3C5;_T146= & _T145->f1.qual_bnd;_T3D8= (struct Cyc_List_List**)_T146;_T147= _T3DE->f1;_T3D0= _T147.attributes;_T148= _T3DE->f1;_T3CF= _T148.checks_clause;_T149= (struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T3C5;_T14A= & _T149->f1.checks_assn;_T3D7= (struct Cyc_AssnDef_ExistAssnFn**)_T14A;_T14B= _T3DE->f1;_T3CE= _T14B.requires_clause;_T14C= (struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T3C5;_T14D= & _T14C->f1.requires_assn;_T3D6= (struct Cyc_AssnDef_ExistAssnFn**)_T14D;_T14E= _T3DE->f1;_T3CD= _T14E.ensures_clause;_T14F= (struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T3C5;_T150= & _T14F->f1.ensures_assn;_T3D5= (struct Cyc_AssnDef_ExistAssnFn**)_T150;_T151= _T3DE->f1;_T3CC= _T151.throws_clause;_T152= (struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T3C5;_T153= & _T152->f1.throws_assn;_T3CB= (struct Cyc_AssnDef_ExistAssnFn**)_T153;_T154= _T3DE->f1;_T3CA= _T154.return_value;_T155= _T3DE->f1;_T3C9= _T155.arg_vardecls;_T156= _T3DE->f1;_T3C8= _T156.effconstr;}{struct Cyc_List_List**btvs=_T3DD;void**eff=_T3DC;struct Cyc_Absyn_Tqual*rtq=_T3DA;void*tr=_T3D9;struct Cyc_List_List*args=_T3D3;long c_vararg=_T3D2;struct Cyc_Absyn_VarargInfo*cyc_vararg=_T3D1;struct Cyc_List_List**qb=(struct Cyc_List_List**)_T3D8;struct Cyc_List_List*atts=_T3D0;struct Cyc_Absyn_Exp*chk=_T3CF;struct Cyc_AssnDef_ExistAssnFn**chk_relns=(struct Cyc_AssnDef_ExistAssnFn**)_T3D7;struct Cyc_Absyn_Exp*req=_T3CE;struct Cyc_AssnDef_ExistAssnFn**req_relns=(struct Cyc_AssnDef_ExistAssnFn**)_T3D6;struct Cyc_Absyn_Exp*ens=_T3CD;struct Cyc_AssnDef_ExistAssnFn**ens_relns=(struct Cyc_AssnDef_ExistAssnFn**)_T3D5;struct Cyc_Absyn_Exp*thrws=_T3CC;struct Cyc_AssnDef_ExistAssnFn**thrws_relns=(struct Cyc_AssnDef_ExistAssnFn**)_T3CB;struct Cyc_Absyn_Vardecl*return_vd=_T3CA;struct Cyc_List_List*arg_vds=_T3C9;struct Cyc_List_List*effc=_T3C8;
# 1052
int num_formats=0;
int is_cdecl=0;
int is_stdcall=0;
int is_fastcall=0;
enum Cyc_Absyn_Format_Type ft=0U;
int fmt_desc_arg=- 1;
int fmt_arg_start=- 1;
_TL18F: if(atts!=0)goto _TL18D;else{goto _TL18E;}
_TL18D: _T157= atts;{void*_T3DE=_T157->hd;int _T3DF;int _T3E0;enum Cyc_Absyn_Format_Type _T3E1;_T158= (int*)_T3DE;_T159= *_T158;switch(_T159){case 1:
# 1062
 is_stdcall= 1;goto _LL46;case 2:
# 1065
 is_cdecl= 1;goto _LL46;case 3:
# 1068
 is_fastcall= 1;goto _LL46;case 20:{struct Cyc_Absyn_Format_att_Absyn_Attribute_struct*_T3E2=(struct Cyc_Absyn_Format_att_Absyn_Attribute_struct*)_T3DE;_T3E1= _T3E2->f1;_T3E0= _T3E2->f2;_T3DF= _T3E2->f3;}{enum Cyc_Absyn_Format_Type fmttype=_T3E1;int i=_T3E0;int j=_T3DF;
# 1071
num_formats= num_formats + 1;
ft= fmttype;
fmt_desc_arg= i;
fmt_arg_start= j;goto _LL46;}default: _T15A= atts;_T15B= _T15A->hd;_T15C= 
# 1077
Cyc_Atts_fntype_att(_T15B);if(_T15C)goto _TL191;else{goto _TL193;}
_TL193:{struct Cyc_Warn_String_Warn_Warg_struct _T3E2;_T3E2.tag= 0;({__typeof__(_tag_fat("bad function type attribute ",sizeof(char),29U))_T3E3=_tag_fat("bad function type attribute ",sizeof(char),29U);_T3E2.f1= _T3E3;});_T15D= _T3E2;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E2=_T15D;{struct Cyc_Warn_Attribute_Warn_Warg_struct _T3E3;_T3E3.tag= 10;_T15F= atts;_T3E3.f1= _T15F->hd;_T15E= _T3E3;}{struct Cyc_Warn_Attribute_Warn_Warg_struct _T3E3=_T15E;void*_T3E4[2];_T3E4[0]= & _T3E2;_T3E4[1]= & _T3E3;_T160= loc;_T161= _tag_fat(_T3E4,sizeof(void*),2);Cyc_Warn_err2(_T160,_T161);}}goto _TL192;_TL191: _TL192:;}_LL46:;}_T162= atts;
# 1059
atts= _T162->tl;goto _TL18F;_TL18E: _T163= is_stdcall + is_cdecl;_T164= is_fastcall;_T165= _T163 + _T164;
# 1080
if(_T165 <= 1)goto _TL194;{struct Cyc_Warn_String_Warn_Warg_struct _T3DE;_T3DE.tag= 0;
({__typeof__(_tag_fat("function can't have multiple calling conventions",sizeof(char),49U))_T3DF=_tag_fat("function can't have multiple calling conventions",sizeof(char),49U);_T3DE.f1= _T3DF;});_T166= _T3DE;}{struct Cyc_Warn_String_Warn_Warg_struct _T3DE=_T166;void*_T3DF[1];_T3DF[0]= & _T3DE;_T167= loc;_T168= _tag_fat(_T3DF,sizeof(void*),1);Cyc_Warn_err2(_T167,_T168);}goto _TL195;_TL194: _TL195:
 if(num_formats <= 1)goto _TL196;{struct Cyc_Warn_String_Warn_Warg_struct _T3DE;_T3DE.tag= 0;
({__typeof__(_tag_fat("function can't have multiple format attributes",sizeof(char),47U))_T3DF=_tag_fat("function can't have multiple format attributes",sizeof(char),47U);_T3DE.f1= _T3DF;});_T169= _T3DE;}{struct Cyc_Warn_String_Warn_Warg_struct _T3DE=_T169;void*_T3DF[1];_T3DF[0]= & _T3DE;_T16A= loc;_T16B= _tag_fat(_T3DF,sizeof(void*),1);Cyc_Warn_err2(_T16A,_T16B);}goto _TL197;_TL196: _TL197: _T16C= loc;_T16D= btvs;_T16E= *_T16D;
# 1087
Cyc_Tcutil_check_unique_tvars(_T16C,_T16E);_T16F= btvs;{
struct Cyc_List_List*b=*_T16F;_TL19B: if(b!=0)goto _TL199;else{goto _TL19A;}
_TL199: _T170= b;_T171= _T170->hd;_T172= (struct Cyc_Absyn_Tvar*)_T171;({__typeof__(Cyc_Tcutil_new_tvar_id())_T3DE=Cyc_Tcutil_new_tvar_id();_T172->identity= _T3DE;});_T173= env;_T174= _T173.kind_env;_T175= b;_T176= _T175->hd;_T177= (struct Cyc_Absyn_Tvar*)_T176;
({__typeof__(Cyc_Tctyp_add_bound_tvar(_T174,_T177))_T3DE=Cyc_Tctyp_add_bound_tvar(_T174,_T177);env.kind_env= _T3DE;});_T178= b;_T179= _T178->hd;_T17A= (struct Cyc_Absyn_Tvar*)_T179;_T17B= _T17A->kind;{
void*_T3DE=Cyc_Kinds_compress_kb(_T17B);_T17C= (int*)_T3DE;_T17D= *_T17C;if(_T17D!=0)goto _TL19C;_T17E= (struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*)_T3DE;_T17F= _T17E->f1;_T180= (struct Cyc_Absyn_Kind*)_T17F;_T181= _T180->kind;if(_T181!=Cyc_Absyn_MemKind)goto _TL19E;{struct Cyc_Warn_String_Warn_Warg_struct _T3DF;_T3DF.tag= 0;
# 1093
({__typeof__(_tag_fat("function abstracts Mem type variable ",sizeof(char),38U))_T3E0=_tag_fat("function abstracts Mem type variable ",sizeof(char),38U);_T3DF.f1= _T3E0;});_T182= _T3DF;}{struct Cyc_Warn_String_Warn_Warg_struct _T3DF=_T182;{struct Cyc_Warn_Tvar_Warn_Warg_struct _T3E0;_T3E0.tag= 7;_T184= b;_T185= _T184->hd;_T3E0.f1= (struct Cyc_Absyn_Tvar*)_T185;_T183= _T3E0;}{struct Cyc_Warn_Tvar_Warn_Warg_struct _T3E0=_T183;void*_T3E1[2];_T3E1[0]= & _T3DF;_T3E1[1]= & _T3E0;_T186= loc;_T187= _tag_fat(_T3E1,sizeof(void*),2);Cyc_Warn_err2(_T186,_T187);}}goto _LL51;_TL19E: goto _LL54;_TL19C: _LL54: goto _LL51;_LL51:;}_T188= b;
# 1088
b= _T188->tl;goto _TL19B;_TL19A:;}{struct Cyc_Tctyp_CVTEnv _T3DE;
# 1101
_T3DE.loc= loc;_T3DE.te= te;_T18A= env;_T3DE.kind_env= _T18A.kind_env;_T3DE.fn_result= 1;_T3DE.def_aliasable= 1;_T3DE.inst_type_evar= 0;_T18B= env;_T3DE.generalize_evars= _T18B.generalize_evars;
_T3DE.allow_aqual_bounds= 1;_T3DE.free_vars= 0;_T3DE.free_evars= 0;_T3DE.free_qualvars= 0;_T189= _T3DE;}{
# 1101
struct Cyc_Tctyp_CVTEnv new_env=_T189;_T18C= new_env;_T18D= & Cyc_Kinds_mk;_T18E= (struct Cyc_Absyn_Kind*)_T18D;_T18F= tr;
# 1103
new_env= Cyc_Tctyp_i_check_type(_T18C,_T18E,_T18F,1,1);_T190= rtq;_T191= loc;_T192= rtq;_T193= _T192->print_const;_T194= tr;
({__typeof__(Cyc_Tcutil_extract_const_from_typedef(_T191,_T193,_T194))_T3DE=Cyc_Tcutil_extract_const_from_typedef(_T191,_T193,_T194);_T190->real_const= _T3DE;});
new_env.fn_result= 0;{
# 1110
struct Cyc_List_List*a=args;_TL1A3: if(a!=0)goto _TL1A1;else{goto _TL1A2;}
_TL1A1: _T195= a;_T196= _T195->hd;{struct _tuple9*trip=(struct _tuple9*)_T196;_T197= trip;_T198= *_T197;{
void*t=_T198.f2;_T199= new_env;_T19A= & Cyc_Kinds_mk;_T19B= (struct Cyc_Absyn_Kind*)_T19A;_T19C= t;
new_env= Cyc_Tctyp_i_check_type(_T199,_T19B,_T19C,1,1);_T19D= loc;_T19E= trip;_T19F= *_T19E;_T1A0= _T19F.f1;_T1A1= _T1A0.print_const;_T1A2= t;{
long ec=Cyc_Tcutil_extract_const_from_typedef(_T19D,_T1A1,_T1A2);_T1A3= trip;
(*_T1A3).f1.real_const= ec;_T1A4= 
# 1118
Cyc_Tcutil_is_array_type(t);if(!_T1A4)goto _TL1A4;{
# 1120
void*ptr_rgn=Cyc_Absyn_new_evar(0,0);_T1A5= new_env;_T1A6= & Cyc_Kinds_ek;_T1A7= (struct Cyc_Absyn_Kind*)_T1A6;_T1A8= ptr_rgn;
new_env= Cyc_Tctyp_i_check_type(_T1A5,_T1A7,_T1A8,1,1);_T1A9= & Cyc_Kinds_aqko;_T1AA= (struct Cyc_Core_Opt*)_T1A9;_T1AB= 
Cyc_Absyn_new_evar(_T1AA,0);_T1AC= Cyc_Absyn_al_qual_type;{void*aqt=Cyc_Absyn_aqual_var_type(_T1AB,_T1AC);_T1AD= new_env;_T1AE= & Cyc_Kinds_aqk;_T1AF= (struct Cyc_Absyn_Kind*)_T1AE;_T1B0= aqt;
# 1124
new_env= Cyc_Tctyp_i_check_type(_T1AD,_T1AF,_T1B0,1,1);_T1B1= trip;
({__typeof__(Cyc_Tcutil_promote_array(t,ptr_rgn,aqt,0))_T3DE=Cyc_Tcutil_promote_array(t,ptr_rgn,aqt,0);(*_T1B1).f2= _T3DE;});}}goto _TL1A5;_TL1A4: _TL1A5:;}}}_T1B2= a;
# 1110
a= _T1B2->tl;goto _TL1A3;_TL1A2:;}
# 1129
if(cyc_vararg==0)goto _TL1A6;_T1B3= c_vararg;
if(!_T1B3)goto _TL1A8;{struct Cyc_Warn_String_Warn_Warg_struct _T3DE;_T3DE.tag= 0;
({__typeof__(_tag_fat("both c_vararg and cyc_vararg",sizeof(char),29U))_T3DF=_tag_fat("both c_vararg and cyc_vararg",sizeof(char),29U);_T3DE.f1= _T3DF;});_T1B4= _T3DE;}{struct Cyc_Warn_String_Warn_Warg_struct _T3DE=_T1B4;void*_T3DF[1];_T3DF[0]= & _T3DE;_T1B6= Cyc_Warn_impos2;{int(*_T3E0)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_T1B6;_T1B5= _T3E0;}_T1B7= _tag_fat(_T3DF,sizeof(void*),1);_T1B5(_T1B7);}goto _TL1A9;_TL1A8: _TL1A9: _T1B8= cyc_vararg;{
struct Cyc_Absyn_VarargInfo _T3DE=*_T1B8;long _T3DF;void*_T3E0;_T3E0= _T3DE.type;_T3DF= _T3DE.inject;{void*vt=_T3E0;long vi=_T3DF;_T1B9= new_env;_T1BA= & Cyc_Kinds_mk;_T1BB= (struct Cyc_Absyn_Kind*)_T1BA;_T1BC= vt;
new_env= Cyc_Tctyp_i_check_type(_T1B9,_T1BB,_T1BC,1,1);_T1BD= cyc_vararg;_T1BE= loc;_T1BF= cyc_vararg;_T1C0= _T1BF->tq;_T1C1= _T1C0.print_const;_T1C2= vt;
({__typeof__(Cyc_Tcutil_extract_const_from_typedef(_T1BE,_T1C1,_T1C2))_T3E1=Cyc_Tcutil_extract_const_from_typedef(_T1BE,_T1C1,_T1C2);_T1BD->tq.real_const= _T3E1;});_T1C3= vi;
# 1136
if(!_T1C3)goto _TL1AA;{
void*_T3E1=Cyc_Absyn_compress(vt);void*_T3E2;void*_T3E3;void*_T3E4;_T1C4= (int*)_T3E1;_T1C5= *_T1C4;if(_T1C5!=4)goto _TL1AC;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T3E5=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T3E1;_T1C6= _T3E5->f1;_T3E4= _T1C6.elt_type;_T1C7= _T3E5->f1;_T1C8= _T1C7.ptr_atts;_T3E3= _T1C8.bounds;_T1C9= _T3E5->f1;_T1CA= _T1C9.ptr_atts;_T3E2= _T1CA.zero_term;}{void*et=_T3E4;void*bs=_T3E3;void*zt=_T3E2;{
# 1139
void*_T3E5=Cyc_Absyn_compress(et);_T1CB= (int*)_T3E5;_T1CC= *_T1CB;if(_T1CC!=0)goto _TL1AE;_T1CD= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T3E5;_T1CE= _T1CD->f1;_T1CF= (int*)_T1CE;_T1D0= *_T1CF;if(_T1D0!=22)goto _TL1B0;_T1D1= 
# 1141
Cyc_Tcutil_force_type2bool(0,zt);if(!_T1D1)goto _TL1B2;{struct Cyc_Warn_String_Warn_Warg_struct _T3E6;_T3E6.tag= 0;
({__typeof__(_tag_fat("can't inject into a zeroterm pointer",sizeof(char),37U))_T3E7=_tag_fat("can't inject into a zeroterm pointer",sizeof(char),37U);_T3E6.f1= _T3E7;});_T1D2= _T3E6;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E6=_T1D2;void*_T3E7[1];_T3E7[0]= & _T3E6;_T1D3= loc;_T1D4= _tag_fat(_T3E7,sizeof(void*),1);Cyc_Warn_err2(_T1D3,_T1D4);}goto _TL1B3;_TL1B2: _TL1B3: _T1D5= 
Cyc_Absyn_bounds_one();_T1D6= bs;_T1D7= Cyc_Unify_unify(_T1D5,_T1D6);if(_T1D7)goto _TL1B4;else{goto _TL1B6;}
_TL1B6: _T1D8= Cyc_Tcutil_is_cvar_type(bs);if(_T1D8)goto _TL1BA;else{goto _TL1B9;}_TL1BA: _T1D9= loc;_T1DA= bs;_T1DB= 
# 1146
Cyc_Absyn_thinconst();_T1DC= Cyc_BansheeIf_equality_constraint(_T1DA,_T1DB);_T1DD= 
# 1145
Cyc_BansheeIf_add_constraint(_T1D9,_T1DC);
# 1144
if(_T1DD)goto _TL1B7;else{goto _TL1B9;}
# 1147
_TL1B9:{struct Cyc_Warn_String_Warn_Warg_struct _T3E6;_T3E6.tag= 0;({__typeof__(_tag_fat("can't inject into a fat pointer to datatype",sizeof(char),44U))_T3E7=_tag_fat("can't inject into a fat pointer to datatype",sizeof(char),44U);_T3E6.f1= _T3E7;});_T1DE= _T3E6;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E6=_T1DE;void*_T3E7[1];_T3E7[0]= & _T3E6;_T1DF= loc;_T1E0= _tag_fat(_T3E7,sizeof(void*),1);Cyc_Warn_err2(_T1DF,_T1E0);}goto _TL1B8;_TL1B7: _TL1B8: goto _TL1B5;_TL1B4: _TL1B5: goto _LL5E;_TL1B0: goto _LL61;_TL1AE: _LL61:{struct Cyc_Warn_String_Warn_Warg_struct _T3E6;_T3E6.tag= 0;
# 1152
({__typeof__(_tag_fat("can't inject a non-datatype type",sizeof(char),33U))_T3E7=_tag_fat("can't inject a non-datatype type",sizeof(char),33U);_T3E6.f1= _T3E7;});_T1E1= _T3E6;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E6=_T1E1;void*_T3E7[1];_T3E7[0]= & _T3E6;_T1E2= loc;_T1E3= _tag_fat(_T3E7,sizeof(void*),1);Cyc_Warn_err2(_T1E2,_T1E3);}goto _LL5E;_LL5E:;}goto _LL59;}_TL1AC:{struct Cyc_Warn_String_Warn_Warg_struct _T3E5;_T3E5.tag= 0;
# 1157
({__typeof__(_tag_fat("expecting a datatype pointer type",sizeof(char),34U))_T3E6=_tag_fat("expecting a datatype pointer type",sizeof(char),34U);_T3E5.f1= _T3E6;});_T1E4= _T3E5;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E5=_T1E4;void*_T3E6[1];_T3E6[0]= & _T3E5;_T1E5= loc;_T1E6= _tag_fat(_T3E6,sizeof(void*),1);Cyc_Warn_err2(_T1E5,_T1E6);}goto _LL59;_LL59:;}goto _TL1AB;_TL1AA: _TL1AB:;}}goto _TL1A7;_TL1A6: _TL1A7:
# 1162
 if(num_formats <= 0)goto _TL1BB;{
int num_args=Cyc_List_length(args);
if(fmt_desc_arg < 0)goto _TL1BF;else{goto _TL1C3;}_TL1C3: if(fmt_desc_arg > num_args)goto _TL1BF;else{goto _TL1C2;}_TL1C2: if(fmt_arg_start < 0)goto _TL1BF;else{goto _TL1C1;}_TL1C1: if(cyc_vararg==0)goto _TL1C5;else{goto _TL1C0;}_TL1C5: _T1E7= c_vararg;if(_T1E7)goto _TL1C0;else{goto _TL1C4;}_TL1C4: if(fmt_arg_start!=0)goto _TL1BF;else{goto _TL1C0;}_TL1C0: if(cyc_vararg!=0)goto _TL1C6;else{goto _TL1C7;}_TL1C7: _T1E8= c_vararg;if(_T1E8)goto _TL1C6;else{goto _TL1BD;}_TL1C6: _T1E9= fmt_arg_start;_T1EA= num_args + 1;if(_T1E9!=_T1EA)goto _TL1BF;else{goto _TL1BD;}
# 1168
_TL1BF:{struct Cyc_Warn_String_Warn_Warg_struct _T3DE;_T3DE.tag= 0;({__typeof__(_tag_fat("bad format descriptor",sizeof(char),22U))_T3DF=_tag_fat("bad format descriptor",sizeof(char),22U);_T3DE.f1= _T3DF;});_T1EB= _T3DE;}{struct Cyc_Warn_String_Warn_Warg_struct _T3DE=_T1EB;void*_T3DF[1];_T3DF[0]= & _T3DE;_T1EC= loc;_T1ED= _tag_fat(_T3DF,sizeof(void*),1);Cyc_Warn_err2(_T1EC,_T1ED);}goto _TL1BE;
# 1171
_TL1BD: _T1EF= Cyc_List_nth;{struct _tuple9*(*_T3DE)(struct Cyc_List_List*,int)=(struct _tuple9*(*)(struct Cyc_List_List*,int))_T1EF;_T1EE= _T3DE;}_T1F0= args;_T1F1= fmt_desc_arg - 1;_T1F2= _T1EE(_T1F0,_T1F1);{struct _tuple9 _T3DE=*_T1F2;void*_T3DF;_T3DF= _T3DE.f2;{void*t=_T3DF;{
# 1174
void*_T3E0=Cyc_Absyn_compress(t);void*_T3E1;void*_T3E2;_T1F3= (int*)_T3E0;_T1F4= *_T1F3;if(_T1F4!=4)goto _TL1C8;{struct Cyc_Absyn_PointerType_Absyn_Type_struct*_T3E3=(struct Cyc_Absyn_PointerType_Absyn_Type_struct*)_T3E0;_T1F5= _T3E3->f1;_T3E2= _T1F5.elt_type;_T1F6= _T3E3->f1;_T1F7= _T1F6.ptr_atts;_T3E1= _T1F7.bounds;}{void*et=_T3E2;void*b=_T3E1;_T1F8= 
# 1177
Cyc_Tcutil_is_char_type(et);if(_T1F8)goto _TL1CA;else{goto _TL1CC;}
_TL1CC:{struct Cyc_Warn_String_Warn_Warg_struct _T3E3;_T3E3.tag= 0;({__typeof__(_tag_fat("format descriptor is not a string",sizeof(char),34U))_T3E4=_tag_fat("format descriptor is not a string",sizeof(char),34U);_T3E3.f1= _T3E4;});_T1F9= _T3E3;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E3=_T1F9;void*_T3E4[1];_T3E4[0]= & _T3E3;_T1FA= loc;_T1FB= _tag_fat(_T3E4,sizeof(void*),1);Cyc_Warn_err2(_T1FA,_T1FB);}goto _TL1CB;
# 1180
_TL1CA: _T1FC= Cyc_Tcutil_is_cvar_type(b);if(_T1FC)goto _TL1CD;else{goto _TL1CF;}
_TL1CF: _T1FD= Cyc_Absyn_bounds_one();_T1FE= b;{struct Cyc_Absyn_Exp*e=Cyc_Tcutil_get_bounds_exp(_T1FD,_T1FE);
if(e!=0)goto _TL1D0;_T1FF= c_vararg;if(!_T1FF)goto _TL1D0;{struct Cyc_Warn_String_Warn_Warg_struct _T3E3;_T3E3.tag= 0;
({__typeof__(_tag_fat("format descriptor is not a char * type",sizeof(char),39U))_T3E4=_tag_fat("format descriptor is not a char * type",sizeof(char),39U);_T3E3.f1= _T3E4;});_T200= _T3E3;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E3=_T200;void*_T3E4[1];_T3E4[0]= & _T3E3;_T201= loc;_T202= _tag_fat(_T3E4,sizeof(void*),1);Cyc_Warn_err2(_T201,_T202);}goto _TL1D1;
_TL1D0: if(e==0)goto _TL1D2;_T203= c_vararg;if(_T203)goto _TL1D2;else{goto _TL1D4;}
_TL1D4:{struct Cyc_Warn_String_Warn_Warg_struct _T3E3;_T3E3.tag= 0;({__typeof__(_tag_fat("format descriptor is not a char ? type",sizeof(char),39U))_T3E4=_tag_fat("format descriptor is not a char ? type",sizeof(char),39U);_T3E3.f1= _T3E4;});_T204= _T3E3;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E3=_T204;void*_T3E4[1];_T3E4[0]= & _T3E3;_T205= loc;_T206= _tag_fat(_T3E4,sizeof(void*),1);Cyc_Warn_err2(_T205,_T206);}goto _TL1D3;_TL1D2: _TL1D3: _TL1D1:;}goto _TL1CE;
# 1187
_TL1CD: _T207= c_vararg;if(!_T207)goto _TL1D5;_T208= loc;_T209= 
Cyc_Tcutil_ptrbnd_cvar_equivalent(b);_T20A= _check_null(_T209);_T20B= 
Cyc_Absyn_thinconst();_T20C= 
# 1188
Cyc_BansheeIf_equality_constraint(_T20A,_T20B);_T20D= Cyc_BansheeIf_add_constraint(_T208,_T20C);if(_T20D)goto _TL1D7;else{goto _TL1D9;}
# 1190
_TL1D9:{struct Cyc_Warn_String_Warn_Warg_struct _T3E3;_T3E3.tag= 0;({__typeof__(_tag_fat("format descriptor is not a char ? type",sizeof(char),39U))_T3E4=_tag_fat("format descriptor is not a char ? type",sizeof(char),39U);_T3E3.f1= _T3E4;});_T20E= _T3E3;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E3=_T20E;void*_T3E4[1];_T3E4[0]= & _T3E3;_T20F= loc;_T210= _tag_fat(_T3E4,sizeof(void*),1);Cyc_Warn_err2(_T20F,_T210);}goto _TL1D8;_TL1D7: _TL1D8: goto _TL1D6;
# 1193
_TL1D5: _T211= loc;_T212= Cyc_Tcutil_ptrbnd_cvar_equivalent(b);_T213= _check_null(_T212);_T214= 
Cyc_Absyn_fatconst();_T215= 
# 1193
Cyc_BansheeIf_equality_constraint(_T213,_T214);_T216= Cyc_BansheeIf_add_constraint(_T211,_T215);if(_T216)goto _TL1DA;else{goto _TL1DC;}
# 1195
_TL1DC:{struct Cyc_Warn_String_Warn_Warg_struct _T3E3;_T3E3.tag= 0;({__typeof__(_tag_fat("format descriptor is not a char * type",sizeof(char),39U))_T3E4=_tag_fat("format descriptor is not a char * type",sizeof(char),39U);_T3E3.f1= _T3E4;});_T217= _T3E3;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E3=_T217;void*_T3E4[1];_T3E4[0]= & _T3E3;_T218= loc;_T219= _tag_fat(_T3E4,sizeof(void*),1);Cyc_Warn_err2(_T218,_T219);}goto _TL1DB;_TL1DA: _TL1DB: _TL1D6: _TL1CE: _TL1CB: goto _LL66;}_TL1C8:{struct Cyc_Warn_String_Warn_Warg_struct _T3E3;_T3E3.tag= 0;
# 1202
({__typeof__(_tag_fat("format descriptor is not a string type",sizeof(char),39U))_T3E4=_tag_fat("format descriptor is not a string type",sizeof(char),39U);_T3E3.f1= _T3E4;});_T21A= _T3E3;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E3=_T21A;void*_T3E4[1];_T3E4[0]= & _T3E3;_T21B= loc;_T21C= _tag_fat(_T3E4,sizeof(void*),1);Cyc_Warn_err2(_T21B,_T21C);}goto _LL66;_LL66:;}
# 1205
if(fmt_arg_start==0)goto _TL1DD;_T21D= c_vararg;if(_T21D)goto _TL1DD;else{goto _TL1DF;}
# 1209
_TL1DF:{long problem;{struct _tuple18 _T3E0;
_T3E0.f0= ft;_T21F= _check_null(cyc_vararg);_T220= _T21F->type;_T221= Cyc_Tcutil_pointer_elt_type(_T220);({__typeof__(Cyc_Absyn_compress(_T221))_T3E1=Cyc_Absyn_compress(_T221);_T3E0.f1= _T3E1;});_T21E= _T3E0;}{struct _tuple18 _T3E0=_T21E;struct Cyc_Absyn_Datatypedecl*_T3E1;_T222= _T3E0.f0;_T223= (int)_T222;switch(_T223){case Cyc_Absyn_Printf_ft: _T224= _T3E0.f1;_T225= (int*)_T224;_T226= *_T225;if(_T226!=0)goto _TL1E1;_T227= _T3E0.f1;_T228= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T227;_T229= _T228->f1;_T22A= (int*)_T229;_T22B= *_T22A;if(_T22B!=22)goto _TL1E3;_T22C= _T3E0.f1;_T22D= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T22C;_T22E= _T22D->f1;_T22F= (struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*)_T22E;_T230= _T22F->f1;_T231= _T230.KnownDatatype;_T232= _T231.tag;if(_T232!=2)goto _TL1E5;_T233= _T3E0.f1;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T3E2=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T233;_T234= _T3E2->f1;{struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*_T3E3=(struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*)_T234;_T235= _T3E3->f1;_T236= _T235.KnownDatatype;_T237= _T236.val;{struct Cyc_Absyn_Datatypedecl*_T3E4=*_T237;_T3E1= _T3E4;}}}{struct Cyc_Absyn_Datatypedecl*tud=_T3E1;_T238= tud;_T239= _T238->name;_T23A= 
# 1212
Cyc_Absyn_datatype_print_arg_qvar();_T23B= Cyc_Absyn_qvar_cmp(_T239,_T23A);problem= _T23B!=0;goto _LL6B;}_TL1E5: goto _LL70;_TL1E3: goto _LL70;_TL1E1: goto _LL70;case Cyc_Absyn_Scanf_ft: _T23C= _T3E0.f1;_T23D= (int*)_T23C;_T23E= *_T23D;if(_T23E!=0)goto _TL1E7;_T23F= _T3E0.f1;_T240= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T23F;_T241= _T240->f1;_T242= (int*)_T241;_T243= *_T242;if(_T243!=22)goto _TL1E9;_T244= _T3E0.f1;_T245= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T244;_T246= _T245->f1;_T247= (struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*)_T246;_T248= _T247->f1;_T249= _T248.KnownDatatype;_T24A= _T249.tag;if(_T24A!=2)goto _TL1EB;_T24B= _T3E0.f1;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T3E2=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T24B;_T24C= _T3E2->f1;{struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*_T3E3=(struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct*)_T24C;_T24D= _T3E3->f1;_T24E= _T24D.KnownDatatype;_T24F= _T24E.val;{struct Cyc_Absyn_Datatypedecl*_T3E4=*_T24F;_T3E1= _T3E4;}}}{struct Cyc_Absyn_Datatypedecl*tud=_T3E1;_T250= tud;_T251= _T250->name;_T252= 
# 1215
Cyc_Absyn_datatype_scanf_arg_qvar();_T253= Cyc_Absyn_qvar_cmp(_T251,_T252);problem= _T253!=0;goto _LL6B;}_TL1EB: goto _LL70;_TL1E9: goto _LL70;_TL1E7: goto _LL70;default: _LL70:
# 1218
 problem= 1;goto _LL6B;}_LL6B:;}_T254= problem;
# 1221
if(!_T254)goto _TL1ED;{struct Cyc_Warn_String_Warn_Warg_struct _T3E0;_T3E0.tag= 0;
({__typeof__(_tag_fat("format attribute and vararg types don't match",sizeof(char),46U))_T3E1=_tag_fat("format attribute and vararg types don't match",sizeof(char),46U);_T3E0.f1= _T3E1;});_T255= _T3E0;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E0=_T255;void*_T3E1[1];_T3E1[0]= & _T3E0;_T256= loc;_T257= _tag_fat(_T3E1,sizeof(void*),1);Cyc_Warn_err2(_T256,_T257);}goto _TL1EE;_TL1ED: _TL1EE:;}goto _TL1DE;_TL1DD: _TL1DE:;}}_TL1BE:;}goto _TL1BC;_TL1BB: _TL1BC: _T258= qb;{
# 1227
struct Cyc_List_List*qbit=*_T258;_TL1F2: if(qbit!=0)goto _TL1F0;else{goto _TL1F1;}
# 1230
_TL1F0: _T259= qbit;_T25A= _T259->hd;{struct _tuple0*_T3DE=(struct _tuple0*)_T25A;void*_T3DF;void*_T3E0;{struct _tuple0 _T3E1=*_T3DE;_T3E0= _T3E1.f0;_T3DF= _T3E1.f1;}{void*tv=_T3E0;void*bnd=_T3DF;_T25B= new_env;_T25C= & Cyc_Kinds_aqk;_T25D= (struct Cyc_Absyn_Kind*)_T25C;_T25E= bnd;
new_env= Cyc_Tctyp_i_check_type(_T25B,_T25D,_T25E,0,0);_T25F= new_env;_T260= & Cyc_Kinds_aqk;_T261= (struct Cyc_Absyn_Kind*)_T260;_T262= tv;
# 1234
new_env= Cyc_Tctyp_i_check_type(_T25F,_T261,_T262,0,0);}}_T263= qbit;
# 1228
qbit= _T263->tl;goto _TL1F2;_TL1F1:;}{
# 1238
struct Cyc_List_List*ec=effc;_TL1F6: if(ec!=0)goto _TL1F4;else{goto _TL1F5;}
_TL1F4: _T264= ec;{void*_T3DE=_T264->hd;void*_T3DF;void*_T3E0;_T265= (int*)_T3DE;_T266= *_T265;switch(_T266){case 0:{struct Cyc_Absyn_SingleConstraint_Absyn_EffConstraint_struct*_T3E1=(struct Cyc_Absyn_SingleConstraint_Absyn_EffConstraint_struct*)_T3DE;_T267= _T3E1->f1;_T3E0= (void*)_T267;}{void*t=_T3E0;_T268= new_env;_T269= & Cyc_Kinds_ek;_T26A= (struct Cyc_Absyn_Kind*)_T269;_T26B= t;
# 1241
new_env= Cyc_Tctyp_i_check_type(_T268,_T26A,_T26B,1,1);goto _LL75;}case 1:{struct Cyc_Absyn_DisjointConstraint_Absyn_EffConstraint_struct*_T3E1=(struct Cyc_Absyn_DisjointConstraint_Absyn_EffConstraint_struct*)_T3DE;_T26C= _T3E1->f1;_T3E0= (void*)_T26C;_T26D= _T3E1->f2;_T3DF= (void*)_T26D;}{void*t1=_T3E0;void*t2=_T3DF;_T3E0= t1;_T3DF= t2;goto _LL7B;}default:{struct Cyc_Absyn_SubsetConstraint_Absyn_EffConstraint_struct*_T3E1=(struct Cyc_Absyn_SubsetConstraint_Absyn_EffConstraint_struct*)_T3DE;_T26E= _T3E1->f1;_T3E0= (void*)_T26E;_T26F= _T3E1->f2;_T3DF= (void*)_T26F;}_LL7B: {void*t1=_T3E0;void*t2=_T3DF;_T270= new_env;_T271= & Cyc_Kinds_ek;_T272= (struct Cyc_Absyn_Kind*)_T271;_T273= t1;
# 1246
new_env= Cyc_Tctyp_i_check_type(_T270,_T272,_T273,1,1);_T274= new_env;_T275= & Cyc_Kinds_ek;_T276= (struct Cyc_Absyn_Kind*)_T275;_T277= t2;
new_env= Cyc_Tctyp_i_check_type(_T274,_T276,_T277,1,1);goto _LL75;}}_LL75:;}_T278= ec;
# 1238
ec= _T278->tl;goto _TL1F6;_TL1F5:;}{
# 1255
struct Cyc_Tcenv_Fenv*fenv=Cyc_Tcenv_bogus_fenv(tr,args);_T279= new_env;{
struct Cyc_Tcenv_Tenv*old_te=_T279.te;{struct Cyc_Tcenv_Tenv*_T3DE=_cycalloc(sizeof(struct Cyc_Tcenv_Tenv));_T27B= te;
_T3DE->ns= _T27B->ns;_T27C= te;
_T3DE->ae= _T27C->ae;
_T3DE->le= fenv;
_T3DE->allow_valueof= 1;_T27D= te;
_T3DE->in_extern_c_include= _T27D->in_extern_c_include;_T27E= te;
_T3DE->in_tempest= _T27E->in_tempest;_T27F= te;
_T3DE->tempest_generalize= _T27F->tempest_generalize;_T280= te;
_T3DE->in_extern_c_inc_repeat= _T280->in_extern_c_inc_repeat;_T27A= (struct Cyc_Tcenv_Tenv*)_T3DE;}
# 1257
new_env.te= _T27A;{
# 1265
struct Cyc_List_List*vds;vds= _cycalloc(sizeof(struct Cyc_List_List));_T281= vds;_T281->hd= Cyc_AssnDef_memory;_T282= vds;_T282->tl= arg_vds;
if(chk==0)goto _TL1F8;_T283= c_vararg;
if(_T283)goto _TL1FC;else{goto _TL1FD;}_TL1FD: _T284= cyc_vararg;_T285= (unsigned)_T284;if(_T285)goto _TL1FC;else{goto _TL1FA;}
_TL1FC:{struct Cyc_Warn_String_Warn_Warg_struct _T3DE;_T3DE.tag= 0;({__typeof__(_tag_fat("we do not yet support @checks on vararg functions",sizeof(char),50U))_T3DF=_tag_fat("we do not yet support @checks on vararg functions",sizeof(char),50U);_T3DE.f1= _T3DF;});_T286= _T3DE;}{struct Cyc_Warn_String_Warn_Warg_struct _T3DE=_T286;void*_T3DF[1];_T3DF[0]= & _T3DE;_T287= loc;_T288= _tag_fat(_T3DF,sizeof(void*),1);Cyc_Warn_err2(_T287,_T288);}goto _TL1FB;_TL1FA: _TL1FB: _T289= new_env;_T28A= 
_tag_fat("@checks",sizeof(char),8U);_T28B= chk;{struct _tuple17 _T3DE=Cyc_Tctyp_check_clause(_T289,_T28A,_T28B);struct Cyc_AssnDef_AssnMap _T3DF;struct Cyc_Tctyp_CVTEnv _T3E0;_T3E0= _T3DE.f0;_T3DF= _T3DE.f1;{struct Cyc_Tctyp_CVTEnv nenv=_T3E0;struct Cyc_AssnDef_AssnMap chk_assn=_T3DF;
new_env= nenv;_T28C= chk_relns;
({__typeof__(Cyc_AssnDef_assnmap2existassnfn(chk_assn,vds))_T3E1=Cyc_AssnDef_assnmap2existassnfn(chk_assn,vds);*_T28C= _T3E1;});}}goto _TL1F9;_TL1F8: _TL1F9:
# 1273
 if(req==0)goto _TL1FE;_T28D= new_env;_T28E= 
_tag_fat("@requires",sizeof(char),10U);_T28F= req;{struct _tuple17 _T3DE=Cyc_Tctyp_check_clause(_T28D,_T28E,_T28F);struct Cyc_AssnDef_AssnMap _T3DF;struct Cyc_Tctyp_CVTEnv _T3E0;_T3E0= _T3DE.f0;_T3DF= _T3DE.f1;{struct Cyc_Tctyp_CVTEnv nenv=_T3E0;struct Cyc_AssnDef_AssnMap req_assn=_T3DF;
new_env= nenv;_T290= req_relns;
({__typeof__(Cyc_AssnDef_assnmap2existassnfn(req_assn,vds))_T3E1=Cyc_AssnDef_assnmap2existassnfn(req_assn,vds);*_T290= _T3E1;});}}goto _TL1FF;_TL1FE: _TL1FF: {
# 1279
struct Cyc_List_List*vds;vds= _cycalloc(sizeof(struct Cyc_List_List));_T291= vds;_T291->hd= Cyc_AssnDef_memory;_T292= vds;{struct Cyc_List_List*_T3DE=_cycalloc(sizeof(struct Cyc_List_List));
_T3DE->hd= Cyc_AssnDef_pre_memory;_T3DE->tl= arg_vds;_T293= (struct Cyc_List_List*)_T3DE;}_T292->tl= _T293;
if(ens==0)goto _TL200;_T294= new_env;_T295= 
_tag_fat("@ensures",sizeof(char),9U);_T296= ens;{struct _tuple17 _T3DE=Cyc_Tctyp_check_clause(_T294,_T295,_T296);struct Cyc_AssnDef_AssnMap _T3DF;struct Cyc_Tctyp_CVTEnv _T3E0;_T3E0= _T3DE.f0;_T3DF= _T3DE.f1;{struct Cyc_Tctyp_CVTEnv nenv=_T3E0;struct Cyc_AssnDef_AssnMap ens_assn=_T3DF;
new_env= nenv;_T297= ens_relns;_T298= ens_assn;{struct Cyc_List_List*_T3E1=_cycalloc(sizeof(struct Cyc_List_List));
_T3E1->hd= return_vd;_T3E1->tl= vds;_T299= (struct Cyc_List_List*)_T3E1;}({__typeof__(Cyc_AssnDef_assnmap2existassnfn(_T298,_T299))_T3E1=Cyc_AssnDef_assnmap2existassnfn(_T298,_T299);*_T297= _T3E1;});}}goto _TL201;_TL200: _TL201:
# 1286
 if(thrws==0)goto _TL202;_T29A= new_env;_T29B= 
_tag_fat("@throws",sizeof(char),8U);_T29C= thrws;{struct _tuple17 _T3DE=Cyc_Tctyp_check_clause(_T29A,_T29B,_T29C);struct Cyc_AssnDef_AssnMap _T3DF;struct Cyc_Tctyp_CVTEnv _T3E0;_T3E0= _T3DE.f0;_T3DF= _T3DE.f1;{struct Cyc_Tctyp_CVTEnv nenv=_T3E0;struct Cyc_AssnDef_AssnMap thrws_assn=_T3DF;
new_env= nenv;_T29D= thrws_relns;
({__typeof__(Cyc_AssnDef_assnmap2existassnfn(thrws_assn,vds))_T3E1=Cyc_AssnDef_assnmap2existassnfn(thrws_assn,vds);*_T29D= _T3E1;});}}goto _TL203;_TL202: _TL203:
# 1291
 new_env.te= old_te;_T29E= eff;_T29F= *_T29E;
# 1293
if(_T29F==0)goto _TL204;_T2A0= new_env;_T2A1= & Cyc_Kinds_ek;_T2A2= (struct Cyc_Absyn_Kind*)_T2A1;_T2A3= eff;_T2A4= *_T2A3;
new_env= Cyc_Tctyp_i_check_type(_T2A0,_T2A2,_T2A4,1,1);_T2A5= Cyc_Absyn_heap_rgn_type;_T2A6= eff;_T2A7= *_T2A6;_T2A8= 
_check_null(_T2A7);_T2A9= Cyc_Tcutil_type_in_effect(0,_T2A5,_T2A8);if(_T2A9)goto _TL206;else{goto _TL208;}
_TL208: _T2AA= eff;{void*_T3DE[2];_T3DE[0]= Cyc_Absyn_heap_rgn_type;_T2AC= eff;_T2AD= *_T2AC;({__typeof__(_check_null(_T2AD))_T3DF=_check_null(_T2AD);_T3DE[1]= _T3DF;});_T2AE= _tag_fat(_T3DE,sizeof(void*),2);_T2AB= Cyc_List_list(_T2AE);}_T2AF= Cyc_Absyn_join_eff(_T2AB);({__typeof__(Cyc_Tcutil_normalize_effect(_T2AF))_T3DE=Cyc_Tcutil_normalize_effect(_T2AF);*_T2AA= _T3DE;});goto _TL207;_TL206: _TL207: goto _TL205;
# 1299
_TL204:{struct Cyc_List_List*effect;effect= _cycalloc(sizeof(struct Cyc_List_List));_T2B0= effect;_T2B0->hd= Cyc_Absyn_heap_rgn_type;_T2B1= effect;_T2B1->tl= 0;_T2B2= new_env;{
# 1304
struct Cyc_List_List*tvs=_T2B2.free_vars;_TL20C: if(tvs!=0)goto _TL20A;else{goto _TL20B;}
_TL20A: _T2B3= tvs;_T2B4= _T2B3->hd;_T2B5= (struct _tuple15*)_T2B4;{struct _tuple15 _T3DE=*_T2B5;long _T3DF;struct Cyc_Absyn_Tvar*_T3E0;_T3E0= _T3DE.f0;_T3DF= _T3DE.f1;{struct Cyc_Absyn_Tvar*tv=_T3E0;long put_in_eff=_T3DF;_T2B6= put_in_eff;
if(_T2B6)goto _TL20D;else{goto _TL20F;}
_TL20F: goto _TL209;_TL20D: _T2B7= tv;_T2B8= _T2B7->kind;{
void*_T3E1=Cyc_Kinds_compress_kb(_T2B8);void*_T3E2;_T2B9= (int*)_T3E1;_T2BA= *_T2B9;switch(_T2BA){case 2: _T2BB= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3E1;_T2BC= _T2BB->f2;_T2BD= (struct Cyc_Absyn_Kind*)_T2BC;_T2BE= _T2BD->kind;_T2BF= (int)_T2BE;switch(_T2BF){case Cyc_Absyn_BoolKind: goto _LL8F;case Cyc_Absyn_PtrBndKind: _LL8F: goto _LL91;case Cyc_Absyn_IntKind: _LL91: goto _LL93;case Cyc_Absyn_AqualKind: _LL93: goto _LL95;case Cyc_Absyn_EffKind:{struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T3E3=(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3E1;_T2C0= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3E1;_T2C1= & _T2C0->f1;_T3E2= (struct Cyc_Core_Opt**)_T2C1;}{struct Cyc_Core_Opt**f=_T3E2;_T2C2= f;_T2C3= & Cyc_Kinds_ek;_T2C4= (struct Cyc_Absyn_Kind*)_T2C3;
# 1319
({__typeof__(Cyc_Kinds_kind_to_bound_opt(_T2C4))_T3E3=Cyc_Kinds_kind_to_bound_opt(_T2C4);*_T2C2= _T3E3;});goto _LL9F;}default: goto _LLA2;};case 0: _T2C5= (struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*)_T3E1;_T2C6= _T2C5->f1;_T2C7= (struct Cyc_Absyn_Kind*)_T2C6;_T2C8= _T2C7->kind;_T2C9= (int)_T2C8;switch(_T2C9){case Cyc_Absyn_BoolKind: _LL95: goto _LL97;case Cyc_Absyn_PtrBndKind: _LL97: goto _LL99;case Cyc_Absyn_IntKind: _LL99: goto _LL9B;case Cyc_Absyn_AqualKind: _LL9B: goto _LL8B;case Cyc_Absyn_EffKind: _LL9F:{struct Cyc_List_List*_T3E3=_cycalloc(sizeof(struct Cyc_List_List));
# 1322
({__typeof__(Cyc_Absyn_var_type(tv))_T3E4=Cyc_Absyn_var_type(tv);_T3E3->hd= _T3E4;});_T3E3->tl= effect;_T2CA= (struct Cyc_List_List*)_T3E3;}effect= _T2CA;goto _LL8B;default: _LLA2: _LLA3:{struct Cyc_List_List*_T3E3=_cycalloc(sizeof(struct Cyc_List_List));_T2CC= 
# 1330
Cyc_Absyn_var_type(tv);({__typeof__(Cyc_Absyn_regionsof_eff(_T2CC))_T3E4=Cyc_Absyn_regionsof_eff(_T2CC);_T3E3->hd= _T3E4;});_T3E3->tl= effect;_T2CB= (struct Cyc_List_List*)_T3E3;}effect= _T2CB;goto _LL8B;};default:{struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*_T3E3=(struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*)_T3E1;_T2CD= (struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*)_T3E1;_T2CE= & _T2CD->f1;_T3E2= (struct Cyc_Core_Opt**)_T2CE;}{struct Cyc_Core_Opt**f=(struct Cyc_Core_Opt**)_T3E2;_T2CF= f;{struct Cyc_Core_Opt*_T3E3=_cycalloc(sizeof(struct Cyc_Core_Opt));{struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T3E4=_cycalloc(sizeof(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct));_T3E4->tag= 2;
# 1325
_T3E4->f1= 0;_T2D2= & Cyc_Kinds_ak;_T3E4->f2= (struct Cyc_Absyn_Kind*)_T2D2;_T2D1= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3E4;}_T3E3->v= (void*)_T2D1;_T2D0= (struct Cyc_Core_Opt*)_T3E3;}*_T2CF= _T2D0;goto _LLA3;}}_LL8B:;}}}_TL209: _T2D3= tvs;
# 1304
tvs= _T2D3->tl;goto _TL20C;_TL20B:;}_T2D4= new_env;{
# 1335
struct Cyc_List_List*ts=_T2D4.free_evars;_TL216: if(ts!=0)goto _TL214;else{goto _TL215;}
_TL214: _T2D5= ts;_T2D6= _T2D5->hd;_T2D7= (struct _tuple16*)_T2D6;{struct _tuple16 _T3DE=*_T2D7;long _T3DF;void*_T3E0;_T3E0= _T3DE.f0;_T3DF= _T3DE.f1;{void*tv=_T3E0;long put_in_eff=_T3DF;_T2D8= put_in_eff;
if(_T2D8)goto _TL217;else{goto _TL219;}
_TL219: goto _TL213;_TL217: {
struct Cyc_Absyn_Kind*_T3E1=Cyc_Tcutil_type_kind(tv);_T2D9= (struct Cyc_Absyn_Kind*)_T3E1;_T2DA= _T2D9->kind;_T2DB= (int)_T2DA;switch(_T2DB){case Cyc_Absyn_IntKind: goto _LLAB;case Cyc_Absyn_BoolKind: _LLAB: goto _LLAD;case Cyc_Absyn_PtrBndKind: _LLAD: goto _LLAF;case Cyc_Absyn_AqualKind: _LLAF: goto _LLA7;case Cyc_Absyn_EffKind:{struct Cyc_List_List*_T3E2=_cycalloc(sizeof(struct Cyc_List_List));
# 1348
_T3E2->hd= tv;_T3E2->tl= effect;_T2DC= (struct Cyc_List_List*)_T3E2;}effect= _T2DC;goto _LLA7;default:{struct Cyc_List_List*_T3E2=_cycalloc(sizeof(struct Cyc_List_List));
# 1351
({__typeof__(Cyc_Absyn_regionsof_eff(tv))_T3E3=Cyc_Absyn_regionsof_eff(tv);_T3E2->hd= _T3E3;});_T3E2->tl= effect;_T2DD= (struct Cyc_List_List*)_T3E2;}effect= _T2DD;goto _LLA7;}_LLA7:;}}}_TL213: _T2DE= ts;
# 1335
ts= _T2DE->tl;goto _TL216;_TL215:;}_T2DF= eff;
# 1355
({__typeof__(Cyc_Absyn_join_eff(effect))_T3DE=Cyc_Absyn_join_eff(effect);*_T2DF= _T3DE;});}_TL205: _T2E0= btvs;_T2E1= *_T2E0;
# 1361
if(_T2E1==0)goto _TL21B;_T2E2= btvs;{
struct Cyc_List_List*bs=*_T2E2;_TL220: if(bs!=0)goto _TL21E;else{goto _TL21F;}
_TL21E: _T2E3= bs;_T2E4= _T2E3->hd;_T2E5= (struct Cyc_Absyn_Tvar*)_T2E4;_T2E6= _T2E5->kind;{void*_T3DE=Cyc_Kinds_compress_kb(_T2E6);struct Cyc_Absyn_Kind*_T3DF;void*_T3E0;_T2E7= (int*)_T3DE;_T2E8= *_T2E7;switch(_T2E8){case 1:{struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*_T3E1=(struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*)_T3DE;_T2E9= (struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*)_T3DE;_T2EA= & _T2E9->f1;_T3E0= (struct Cyc_Core_Opt**)_T2EA;}{struct Cyc_Core_Opt**f=_T3E0;{struct Cyc_Warn_String_Warn_Warg_struct _T3E1;_T3E1.tag= 0;
# 1365
({__typeof__(_tag_fat("type variable ",sizeof(char),15U))_T3E2=_tag_fat("type variable ",sizeof(char),15U);_T3E1.f1= _T3E2;});_T2EB= _T3E1;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E1=_T2EB;{struct Cyc_Warn_Tvar_Warn_Warg_struct _T3E2;_T3E2.tag= 7;_T2ED= bs;_T2EE= _T2ED->hd;_T3E2.f1= (struct Cyc_Absyn_Tvar*)_T2EE;_T2EC= _T3E2;}{struct Cyc_Warn_Tvar_Warn_Warg_struct _T3E2=_T2EC;{struct Cyc_Warn_String_Warn_Warg_struct _T3E3;_T3E3.tag= 0;({__typeof__(_tag_fat(" unconstrained, assuming boxed",sizeof(char),31U))_T3E4=_tag_fat(" unconstrained, assuming boxed",sizeof(char),31U);_T3E3.f1= _T3E4;});_T2EF= _T3E3;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E3=_T2EF;void*_T3E4[3];_T3E4[0]= & _T3E1;_T3E4[1]= & _T3E2;_T3E4[2]= & _T3E3;_T2F0= loc;_T2F1= _tag_fat(_T3E4,sizeof(void*),3);Cyc_Warn_warn2(_T2F0,_T2F1);}}}_T2F2= f;_T2F3= & Cyc_Kinds_bk;_T2F4= (struct Cyc_Absyn_Kind*)_T2F3;
({__typeof__(Cyc_Kinds_kind_to_bound_opt(_T2F4))_T3E1=Cyc_Kinds_kind_to_bound_opt(_T2F4);*_T2F2= _T3E1;});goto _LLB4;}case 2:{struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T3E1=(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3DE;_T2F5= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T3DE;_T2F6= & _T2F5->f1;_T3E0= (struct Cyc_Core_Opt**)_T2F6;_T3DF= _T3E1->f2;}{struct Cyc_Core_Opt**f=(struct Cyc_Core_Opt**)_T3E0;struct Cyc_Absyn_Kind*k=_T3DF;_T2F7= k;_T2F8= (struct Cyc_Absyn_Kind*)_T2F7;_T2F9= _T2F8->kind;_T2FA= (int)_T2F9;switch(_T2FA){case Cyc_Absyn_BoxKind: goto _LLC1;case Cyc_Absyn_MemKind: _LLC1: goto _LLC3;case Cyc_Absyn_AnyKind: _LLC3: _T2FB= f;_T2FC= & Cyc_Kinds_bk;_T2FD= (struct Cyc_Absyn_Kind*)_T2FC;
# 1373
({__typeof__(Cyc_Kinds_kind_to_bound_opt(_T2FD))_T3E1=Cyc_Kinds_kind_to_bound_opt(_T2FD);*_T2FB= _T3E1;});goto _LLBD;case Cyc_Absyn_EffKind: _T2FE= f;_T2FF= & Cyc_Kinds_ek;_T300= (struct Cyc_Absyn_Kind*)_T2FF;
# 1376
({__typeof__(Cyc_Kinds_kind_to_bound_opt(_T300))_T3E1=Cyc_Kinds_kind_to_bound_opt(_T300);*_T2FE= _T3E1;});goto _LLBD;default: _T301= f;
# 1379
({__typeof__(Cyc_Kinds_kind_to_bound_opt(k))_T3E1=Cyc_Kinds_kind_to_bound_opt(k);*_T301= _T3E1;});goto _LLBD;}_LLBD: goto _LLB4;}default: _T302= (struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*)_T3DE;_T303= _T302->f1;_T304= (struct Cyc_Absyn_Kind*)_T303;_T305= _T304->kind;if(_T305!=Cyc_Absyn_MemKind)goto _TL223;{struct Cyc_Warn_String_Warn_Warg_struct _T3E1;_T3E1.tag= 0;
# 1384
({__typeof__(_tag_fat("functions can't abstract M types",sizeof(char),33U))_T3E2=_tag_fat("functions can't abstract M types",sizeof(char),33U);_T3E1.f1= _T3E2;});_T306= _T3E1;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E1=_T306;void*_T3E2[1];_T3E2[0]= & _T3E1;_T307= loc;_T308= _tag_fat(_T3E2,sizeof(void*),1);Cyc_Warn_err2(_T307,_T308);}goto _LLB4;_TL223: goto _LLB4;}_LLB4:;}_T309= bs;
# 1362
bs= _T309->tl;goto _TL220;_TL21F:;}goto _TL21C;_TL21B: _TL21C:{
# 1391
struct Cyc_List_List*(*_T3DE)(struct Cyc_List_List*,struct Cyc_List_List*,struct Cyc_Absyn_Tvar*(*)(struct Cyc_Absyn_Tvar*))=(struct Cyc_List_List*(*)(struct Cyc_List_List*,struct Cyc_List_List*,struct Cyc_Absyn_Tvar*(*)(struct Cyc_Absyn_Tvar*)))Cyc_Tctyp_remove_bound_tvars;_T30A= _T3DE;}_T30B= new_env;_T30C= _T30B.kind_env;_T30D= btvs;_T30E= *_T30D;_T310= Cyc_Core_identity;{struct Cyc_Absyn_Tvar*(*_T3DE)(struct Cyc_Absyn_Tvar*)=(struct Cyc_Absyn_Tvar*(*)(struct Cyc_Absyn_Tvar*))_T310;_T30F= _T3DE;}({__typeof__(_T30A(_T30C,_T30E,_T30F))_T3DE=_T30A(_T30C,_T30E,_T30F);env.kind_env= _T3DE;});{
struct Cyc_List_List*(*_T3DE)(struct Cyc_List_List*,struct Cyc_List_List*,struct Cyc_Absyn_Tvar*(*)(struct _tuple15*))=(struct Cyc_List_List*(*)(struct Cyc_List_List*,struct Cyc_List_List*,struct Cyc_Absyn_Tvar*(*)(struct _tuple15*)))Cyc_Tctyp_remove_bound_tvars;_T311= _T3DE;}_T312= new_env;_T313= _T312.free_vars;_T314= btvs;_T315= *_T314;_T317= Cyc_Core_fst;{struct Cyc_Absyn_Tvar*(*_T3DE)(struct _tuple15*)=(struct Cyc_Absyn_Tvar*(*)(struct _tuple15*))_T317;_T316= _T3DE;}({__typeof__(_T311(_T313,_T315,_T316))_T3DE=_T311(_T313,_T315,_T316);new_env.free_vars= _T3DE;});_T318= new_env;{
# 1394
struct Cyc_List_List*tvs=_T318.free_vars;_TL228: if(tvs!=0)goto _TL226;else{goto _TL227;}
_TL226: _T319= tvs;_T31A= _T319->hd;_T31B= (struct _tuple15*)_T31A;{struct _tuple15 _T3DE=*_T31B;long _T3DF;struct Cyc_Absyn_Tvar*_T3E0;_T3E0= _T3DE.f0;_T3DF= _T3DE.f1;{struct Cyc_Absyn_Tvar*t=_T3E0;long b=_T3DF;_T31C= env;_T31D= _T31C.free_vars;_T31E= t;_T31F= b;
({__typeof__(Cyc_Tctyp_fast_add_free_tvar_bool(_T31D,_T31E,_T31F))_T3E1=Cyc_Tctyp_fast_add_free_tvar_bool(_T31D,_T31E,_T31F);env.free_vars= _T3E1;});}}_T320= tvs;
# 1394
tvs= _T320->tl;goto _TL228;_TL227:;}_T321= new_env;{
# 1399
struct Cyc_List_List*evs=_T321.free_evars;_TL22C: if(evs!=0)goto _TL22A;else{goto _TL22B;}
_TL22A: _T322= evs;_T323= _T322->hd;_T324= (struct _tuple16*)_T323;{struct _tuple16 _T3DE=*_T324;long _T3DF;void*_T3E0;_T3E0= _T3DE.f0;_T3DF= _T3DE.f1;{void*e=_T3E0;long b=_T3DF;_T325= env;_T326= _T325.free_evars;_T327= e;_T328= b;
({__typeof__(Cyc_Tctyp_add_free_evar(_T326,_T327,_T328))_T3E1=Cyc_Tctyp_add_free_evar(_T326,_T327,_T328);env.free_evars= _T3E1;});}}_T329= evs;
# 1399
evs= _T329->tl;goto _TL22C;_TL22B:;}_T32A= env;_T32B= _T32A.free_qualvars;_T32C= (unsigned)_T32B;
# 1403
if(!_T32C)goto _TL22D;_T32D= new_env;{
# 1406
struct Cyc_List_List*it=_T32D.free_qualvars;_TL232: if(it!=0)goto _TL230;else{goto _TL231;}
_TL230: _T32F= Cyc_List_exists_c;{long(*_T3DE)(long(*)(struct _tuple16*,struct _tuple16*),struct _tuple16*,struct Cyc_List_List*)=(long(*)(long(*)(struct _tuple16*,struct _tuple16*),struct _tuple16*,struct Cyc_List_List*))_T32F;_T32E= _T3DE;}_T330= it;_T331= _T330->hd;_T332= (struct _tuple16*)_T331;_T333= env;_T334= _T333.free_qualvars;_T335= _T32E(Cyc_Tctyp_cmp_fqv,_T332,_T334);if(_T335)goto _TL233;else{goto _TL235;}
_TL235:{struct Cyc_List_List*_T3DE=_cycalloc(sizeof(struct Cyc_List_List));_T337= it;_T338= _T337->hd;_T3DE->hd= (struct _tuple16*)_T338;_T339= env;_T3DE->tl= _T339.free_qualvars;_T336= (struct Cyc_List_List*)_T3DE;}env.free_qualvars= _T336;goto _TL234;_TL233: _TL234: _T33A= it;
# 1406
it= _T33A->tl;goto _TL232;_TL231:;}goto _TL22E;
# 1411
_TL22D: _T33B= new_env;env.free_qualvars= _T33B.free_qualvars;_TL22E: goto _LL3;}}}}}}case 7:{struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*_T3DE=(struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct*)_T3C5;_T3C7= _T3DE->f1;_T3D2= _T3DE->f2;_T3DD= _T3DE->f3;}{enum Cyc_Absyn_AggrKind k=_T3C7;long is_tuple=_T3D2;struct Cyc_List_List*fs=_T3DD;
# 1416
struct Cyc_List_List*prev_fields=0;
_TL239: if(fs!=0)goto _TL237;else{goto _TL238;}
_TL237: _T33C= fs;_T33D= _T33C->hd;{struct Cyc_Absyn_Aggrfield*_T3DE=(struct Cyc_Absyn_Aggrfield*)_T33D;struct Cyc_Absyn_Exp*_T3DF;struct Cyc_List_List*_T3E0;struct Cyc_Absyn_Exp*_T3E1;void*_T3E2;void*_T3E3;struct _fat_ptr*_T3E4;{struct Cyc_Absyn_Aggrfield _T3E5=*_T3DE;_T3E4= _T3E5.name;_T33E= & _T3DE->tq;_T3E3= (struct Cyc_Absyn_Tqual*)_T33E;_T3E2= _T3E5.type;_T3E1= _T3E5.width;_T3E0= _T3E5.attributes;_T3DF= _T3E5.requires_clause;}{struct _fat_ptr*fn=_T3E4;struct Cyc_Absyn_Tqual*tqp=(struct Cyc_Absyn_Tqual*)_T3E3;void*t=_T3E2;struct Cyc_Absyn_Exp*width=_T3E1;struct Cyc_List_List*atts=_T3E0;struct Cyc_Absyn_Exp*requires_clause=_T3DF;_T340= Cyc_List_mem;{
long(*_T3E5)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*)=(long(*)(int(*)(struct _fat_ptr*,struct _fat_ptr*),struct Cyc_List_List*,struct _fat_ptr*))_T340;_T33F= _T3E5;}_T341= Cyc_strptrcmp;_T342= prev_fields;_T343= fn;_T344= _T33F(_T341,_T342,_T343);if(!_T344)goto _TL23A;{struct Cyc_Warn_String_Warn_Warg_struct _T3E5;_T3E5.tag= 0;
({__typeof__(_tag_fat("duplicate field ",sizeof(char),17U))_T3E6=_tag_fat("duplicate field ",sizeof(char),17U);_T3E5.f1= _T3E6;});_T345= _T3E5;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E5=_T345;{struct Cyc_Warn_String_Warn_Warg_struct _T3E6;_T3E6.tag= 0;_T347= fn;_T3E6.f1= *_T347;_T346= _T3E6;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E6=_T346;void*_T3E7[2];_T3E7[0]= & _T3E5;_T3E7[1]= & _T3E6;_T348= loc;_T349= _tag_fat(_T3E7,sizeof(void*),2);Cyc_Warn_err2(_T348,_T349);}}goto _TL23B;_TL23A: _TL23B: _T34A= fn;_T34B= *_T34A;_T34C= 
_tag_fat("",sizeof(char),1U);_T34D= Cyc_strcmp(_T34B,_T34C);if(_T34D==0)goto _TL23C;{struct Cyc_List_List*_T3E5=_cycalloc(sizeof(struct Cyc_List_List));
_T3E5->hd= fn;_T3E5->tl= prev_fields;_T34E= (struct Cyc_List_List*)_T3E5;}prev_fields= _T34E;goto _TL23D;_TL23C: _TL23D: _T34F= env;_T350= & Cyc_Kinds_mk;_T351= (struct Cyc_Absyn_Kind*)_T350;_T352= t;
env= Cyc_Tctyp_i_check_type(_T34F,_T351,_T352,1,0);_T353= tqp;_T354= loc;_T355= tqp;_T356= _T355->print_const;_T357= t;
({__typeof__(Cyc_Tcutil_extract_const_from_typedef(_T354,_T356,_T357))_T3E5=Cyc_Tcutil_extract_const_from_typedef(_T354,_T356,_T357);_T353->real_const= _T3E5;});
Cyc_Tcutil_check_bitfield(loc,t,width,fn);
Cyc_Atts_check_field_atts(loc,fn,atts);
if(requires_clause==0)goto _TL23E;_T358= k;_T359= (int)_T358;
# 1429
if(_T359==1)goto _TL240;{struct Cyc_Warn_String_Warn_Warg_struct _T3E5;_T3E5.tag= 0;
({__typeof__(_tag_fat("@requires clause is only allowed on union members",sizeof(char),50U))_T3E6=_tag_fat("@requires clause is only allowed on union members",sizeof(char),50U);_T3E5.f1= _T3E6;});_T35A= _T3E5;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E5=_T35A;void*_T3E6[1];_T3E6[0]= & _T3E5;_T35B= loc;_T35C= _tag_fat(_T3E6,sizeof(void*),1);Cyc_Warn_err2(_T35B,_T35C);}goto _TL241;_TL240: _TL241: _T35D= 
Cyc_Tcenv_allow_valueof(te);_T35E= requires_clause;Cyc_Tcexp_tcExp(_T35D,0,_T35E);_T35F= 
Cyc_Tcutil_is_integral(requires_clause);if(_T35F)goto _TL242;else{goto _TL244;}
_TL244:{struct Cyc_Warn_String_Warn_Warg_struct _T3E5;_T3E5.tag= 0;({__typeof__(_tag_fat("@requires clause has type ",sizeof(char),27U))_T3E6=_tag_fat("@requires clause has type ",sizeof(char),27U);_T3E5.f1= _T3E6;});_T360= _T3E5;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E5=_T360;{struct Cyc_Warn_TypOpt_Warn_Warg_struct _T3E6;_T3E6.tag= 3;_T362= requires_clause;_T3E6.f1= _T362->topt;_T361= _T3E6;}{struct Cyc_Warn_TypOpt_Warn_Warg_struct _T3E6=_T361;{struct Cyc_Warn_String_Warn_Warg_struct _T3E7;_T3E7.tag= 0;
({__typeof__(_tag_fat(" instead of integral type",sizeof(char),26U))_T3E8=_tag_fat(" instead of integral type",sizeof(char),26U);_T3E7.f1= _T3E8;});_T363= _T3E7;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E7=_T363;void*_T3E8[3];_T3E8[0]= & _T3E5;_T3E8[1]= & _T3E6;_T3E8[2]= & _T3E7;_T364= loc;_T365= _tag_fat(_T3E8,sizeof(void*),3);Cyc_Warn_err2(_T364,_T365);}}}goto _TL243;_TL242: _TL243:
 env= Cyc_Tctyp_i_check_type_level_exp(requires_clause,env);goto _TL23F;_TL23E: _TL23F:;}}_T366= fs;
# 1417
fs= _T366->tl;goto _TL239;_TL238: goto _LL3;}case 12:{struct Cyc_Absyn_SubsetType_Absyn_Type_struct*_T3DE=(struct Cyc_Absyn_SubsetType_Absyn_Type_struct*)_T3C5;_T3DD= _T3DE->f1;_T3DC= _T3DE->f2;_T367= (struct Cyc_Absyn_SubsetType_Absyn_Type_struct*)_T3C5;_T368= & _T367->f3;_T3DA= (struct Cyc_AssnDef_ExistAssnFn**)_T368;}{struct Cyc_Absyn_Vardecl*vd=_T3DD;struct Cyc_Absyn_Exp*e=_T3DC;struct Cyc_AssnDef_ExistAssnFn**a=_T3DA;_T369= env;_T36A= expected_kind;_T36B= vd;_T36C= _T36B->type;_T36D= put_in_effect;_T36E= allow_abs_aggr;
# 1441
env= Cyc_Tctyp_i_check_type(_T369,_T36A,_T36C,_T36D,_T36E);{
struct Cyc_List_List*args;args= _cycalloc(sizeof(struct Cyc_List_List));_T36F= args;{struct _tuple9*_T3DE=_cycalloc(sizeof(struct _tuple9));_T371= vd;_T372= _T371->name;
_T3DE->f0= _T372->f1;_T373= vd;_T3DE->f1= _T373->tq;_T374= vd;_T3DE->f2= _T374->type;_T370= (struct _tuple9*)_T3DE;}_T36F->hd= _T370;_T375= args;_T375->tl= 0;{
struct Cyc_Tcenv_Fenv*fenv=Cyc_Tcenv_bogus_fenv(Cyc_Absyn_void_type,args);_T376= env;{
struct Cyc_Tcenv_Tenv*old_te=_T376.te;{struct Cyc_Tcenv_Tenv*_T3DE=_cycalloc(sizeof(struct Cyc_Tcenv_Tenv));_T378= te;
_T3DE->ns= _T378->ns;_T379= te;
_T3DE->ae= _T379->ae;
_T3DE->le= fenv;
_T3DE->allow_valueof= 1;_T37A= te;
_T3DE->in_extern_c_include= _T37A->in_extern_c_include;_T37B= te;
_T3DE->in_tempest= _T37B->in_tempest;_T37C= te;
_T3DE->tempest_generalize= _T37C->tempest_generalize;_T37D= te;
_T3DE->in_extern_c_inc_repeat= _T37D->in_extern_c_inc_repeat;_T377= (struct Cyc_Tcenv_Tenv*)_T3DE;}
# 1446
env.te= _T377;{
# 1454
struct Cyc_List_List*vds;vds= _cycalloc(sizeof(struct Cyc_List_List));_T37E= vds;_T37E->hd= vd;_T37F= vds;_T37F->tl= 0;_T380= 
Cyc_Tctyp_ok_as_assn(e);if(_T380)goto _TL245;else{goto _TL247;}
_TL247:{struct Cyc_Warn_String_Warn_Warg_struct _T3DE;_T3DE.tag= 0;
# 1458
({__typeof__(_tag_fat("@subset predicate is not a valid assertion\n\t[may access memory or throw exception]",sizeof(char),83U))_T3DF=_tag_fat("@subset predicate is not a valid assertion\n\t[may access memory or throw exception]",sizeof(char),83U);_T3DE.f1= _T3DF;});_T381= _T3DE;}{struct Cyc_Warn_String_Warn_Warg_struct _T3DE=_T381;void*_T3DF[1];_T3DF[0]= & _T3DE;_T382= e;_T383= _T382->loc;_T384= _tag_fat(_T3DF,sizeof(void*),1);Cyc_Warn_err2(_T383,_T384);}goto _TL246;_TL245: _TL246: _T385= env;_T386= 
_tag_fat("@subset",sizeof(char),8U);_T387= e;{struct _tuple17 _T3DE=Cyc_Tctyp_check_clause(_T385,_T386,_T387);struct Cyc_AssnDef_AssnMap _T3DF;struct Cyc_Tctyp_CVTEnv _T3E0;_T3E0= _T3DE.f0;_T3DF= _T3DE.f1;{struct Cyc_Tctyp_CVTEnv nenv=_T3E0;struct Cyc_AssnDef_AssnMap assn=_T3DF;
env= nenv;_T388= a;
({__typeof__(Cyc_AssnDef_assnmap2existassnfn(assn,vds))_T3E1=Cyc_AssnDef_assnmap2existassnfn(assn,vds);*_T388= _T3E1;});
env.te= old_te;goto _LL3;}}}}}}}default:{struct Cyc_Absyn_TypedefType_Absyn_Type_struct*_T3DE=(struct Cyc_Absyn_TypedefType_Absyn_Type_struct*)_T3C5;_T3C6= _T3DE->f1;_T389= (struct Cyc_Absyn_TypedefType_Absyn_Type_struct*)_T3C5;_T38A= & _T389->f2;_T3DD= (struct Cyc_List_List**)_T38A;_T38B= (struct Cyc_Absyn_TypedefType_Absyn_Type_struct*)_T3C5;_T38C= & _T38B->f3;_T3DC= (struct Cyc_Absyn_Typedefdecl**)_T38C;_T38D= (struct Cyc_Absyn_TypedefType_Absyn_Type_struct*)_T3C5;_T38E= & _T38D->f4;_T3DA= (void**)_T38E;}{struct _tuple1*tdn=_T3C6;struct Cyc_List_List**targs_ref=(struct Cyc_List_List**)_T3DD;struct Cyc_Absyn_Typedefdecl**tdopt=(struct Cyc_Absyn_Typedefdecl**)_T3DC;void**toptp=(void**)_T3DA;
# 1467
struct Cyc_Absyn_Typedefdecl*td;{struct _handler_cons _T3DE;_T38F= & _T3DE;_push_handler(_T38F);{int _T3DF=0;_T390= setjmp(_T3DE.handler);if(!_T390)goto _TL248;_T3DF= 1;goto _TL249;_TL248: _TL249: if(_T3DF)goto _TL24A;else{goto _TL24C;}_TL24C:
# 1469
 td= Cyc_Tcenv_lookup_typedefdecl(te,loc,tdn);_pop_handler();goto _TL24B;_TL24A: _T391= Cyc_Core_get_exn_thrown();{void*_T3E0=(void*)_T391;void*_T3E1;_T392= (struct Cyc_Dict_Absent_exn_struct*)_T3E0;_T393= _T392->tag;_T394= Cyc_Dict_Absent;if(_T393!=_T394)goto _TL24D;{struct Cyc_Warn_String_Warn_Warg_struct _T3E2;_T3E2.tag= 0;
# 1472
({__typeof__(_tag_fat("unbound typedef name ",sizeof(char),22U))_T3E3=_tag_fat("unbound typedef name ",sizeof(char),22U);_T3E2.f1= _T3E3;});_T395= _T3E2;}{struct Cyc_Warn_String_Warn_Warg_struct _T3E2=_T395;{struct Cyc_Warn_Qvar_Warn_Warg_struct _T3E3;_T3E3.tag= 1;_T3E3.f1= tdn;_T396= _T3E3;}{struct Cyc_Warn_Qvar_Warn_Warg_struct _T3E3=_T396;void*_T3E4[2];_T3E4[0]= & _T3E2;_T3E4[1]= & _T3E3;_T397= loc;_T398= _tag_fat(_T3E4,sizeof(void*),2);Cyc_Warn_err2(_T397,_T398);}}_T399= env;
return _T399;_TL24D: _T3E1= _T3E0;{void*exn=_T3E1;_rethrow(exn);};}_TL24B:;}}_T39A= tdopt;
# 1475
*_T39A= td;_T39B= env;_T39C= targs_ref;_T39D= td;_T39E= _T39D->tvs;_T39F= expected_kind;_T3A0= allow_abs_aggr;_T3A1= tdn;_T3A2= td;
env= Cyc_Tctyp_check_type_inst(_T39B,_T39C,_T39E,_T39F,_T3A0,_T3A1,_T3A2);_T3A3= td;_T3A4= _T3A3->defn;
if(_T3A4==0)goto _TL24F;_T3A5= loc;_T3A6= td;_T3A7= _T3A6->defn;_T3A8= expected_kind;
Cyc_Tctyp_check_constrain_ptrbnd(_T3A5,_T3A7,_T3A8);{
struct Cyc_List_List*inst=0;_T3A9= td;{
struct Cyc_List_List*tvs=_T3A9->tvs;_T3AA= targs_ref;{
struct Cyc_List_List*ts=*_T3AA;
_TL254: if(tvs!=0)goto _TL252;else{goto _TL253;}
_TL252:{struct Cyc_List_List*_T3DE=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple19*_T3DF=_cycalloc(sizeof(struct _tuple19));_T3AD= tvs;_T3AE= _T3AD->hd;_T3DF->f0= (struct Cyc_Absyn_Tvar*)_T3AE;_T3AF= _check_null(ts);_T3DF->f1= _T3AF->hd;_T3AC= (struct _tuple19*)_T3DF;}_T3DE->hd= _T3AC;_T3DE->tl= inst;_T3AB= (struct Cyc_List_List*)_T3DE;}inst= _T3AB;_T3B0= tvs;
# 1482
tvs= _T3B0->tl;_T3B1= ts;ts= _T3B1->tl;goto _TL254;_TL253: _T3B2= toptp;_T3B3= inst;_T3B4= td;_T3B5= _T3B4->defn;_T3B6= 
# 1484
_check_null(_T3B5);({__typeof__(Cyc_Tcutil_substitute(_T3B3,_T3B6))_T3DE=Cyc_Tcutil_substitute(_T3B3,_T3B6);*_T3B2= _T3DE;});}}}goto _TL250;_TL24F: _TL250: goto _LL3;}}_LL3:;}_T3B7= 
# 1488
Cyc_Tcutil_type_kind(t);_T3B8= expected_kind;_T3B9= Cyc_Kinds_kind_leq(_T3B7,_T3B8);if(_T3B9)goto _TL255;else{goto _TL257;}
_TL257:{struct Cyc_Warn_String_Warn_Warg_struct _T3C5;_T3C5.tag= 0;({__typeof__(_tag_fat("type ",sizeof(char),6U))_T3C6=_tag_fat("type ",sizeof(char),6U);_T3C5.f1= _T3C6;});_T3BA= _T3C5;}{struct Cyc_Warn_String_Warn_Warg_struct _T3C5=_T3BA;{struct Cyc_Warn_Typ_Warn_Warg_struct _T3C6;_T3C6.tag= 2;_T3C6.f1= t;_T3BB= _T3C6;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T3C6=_T3BB;{struct Cyc_Warn_String_Warn_Warg_struct _T3C7;_T3C7.tag= 0;({__typeof__(_tag_fat(" has kind ",sizeof(char),11U))_T3C8=_tag_fat(" has kind ",sizeof(char),11U);_T3C7.f1= _T3C8;});_T3BC= _T3C7;}{struct Cyc_Warn_String_Warn_Warg_struct _T3C7=_T3BC;{struct Cyc_Warn_Kind_Warn_Warg_struct _T3C8;_T3C8.tag= 9;({__typeof__(Cyc_Tcutil_type_kind(t))_T3C9=Cyc_Tcutil_type_kind(t);_T3C8.f1= _T3C9;});_T3BD= _T3C8;}{struct Cyc_Warn_Kind_Warn_Warg_struct _T3C8=_T3BD;{struct Cyc_Warn_String_Warn_Warg_struct _T3C9;_T3C9.tag= 0;({__typeof__(_tag_fat(" but as used here needs kind ",sizeof(char),30U))_T3CA=_tag_fat(" but as used here needs kind ",sizeof(char),30U);_T3C9.f1= _T3CA;});_T3BE= _T3C9;}{struct Cyc_Warn_String_Warn_Warg_struct _T3C9=_T3BE;{struct Cyc_Warn_Kind_Warn_Warg_struct _T3CA;_T3CA.tag= 9;
_T3CA.f1= expected_kind;_T3BF= _T3CA;}{struct Cyc_Warn_Kind_Warn_Warg_struct _T3CA=_T3BF;void*_T3CB[6];_T3CB[0]= & _T3C5;_T3CB[1]= & _T3C6;_T3CB[2]= & _T3C7;_T3CB[3]= & _T3C8;_T3CB[4]= & _T3C9;_T3CB[5]= & _T3CA;_T3C0= loc;_T3C1= _tag_fat(_T3CB,sizeof(void*),6);Cyc_Warn_err2(_T3C0,_T3C1);}}}}}}goto _TL256;_TL255: _TL256: _T3C2= env;
# 1492
return _T3C2;}}
# 1495
static struct Cyc_Tctyp_CVTEnv Cyc_Tctyp_check_valid_type(struct Cyc_Tctyp_CVTEnv cvt,struct Cyc_Absyn_Kind*expected_kind,long allow_abs_aggr,void*t){struct Cyc_Tctyp_CVTEnv _T0;struct Cyc_Tctyp_CVTEnv _T1;struct Cyc_List_List*_T2;struct Cyc_List_List*_T3;void*_T4;struct _tuple15*_T5;struct _tuple15 _T6;struct Cyc_Absyn_Tvar*_T7;struct Cyc_List_List*_T8;struct Cyc_Tctyp_CVTEnv _T9;struct Cyc_List_List*_TA;void*_TB;struct _tuple16*_TC;int*_TD;int _TE;struct Cyc_Absyn_Evar_Absyn_Type_struct*_TF;struct Cyc_Core_Opt**_T10;struct Cyc_Core_Opt**_T11;struct Cyc_Core_Opt*_T12;struct Cyc_Core_Opt**_T13;struct Cyc_Core_Opt*_T14;struct Cyc_Core_Opt**_T15;struct Cyc_Core_Opt*_T16;void*_T17;long(*_T18)(int(*)(struct Cyc_Absyn_Tvar*,struct Cyc_Absyn_Tvar*),struct Cyc_List_List*,struct Cyc_Absyn_Tvar*);long(*_T19)(int(*)(void*,void*),struct Cyc_List_List*,void*);int(*_T1A)(struct Cyc_Absyn_Tvar*,struct Cyc_Absyn_Tvar*);struct Cyc_List_List*_T1B;struct Cyc_List_List*_T1C;void*_T1D;struct Cyc_Absyn_Tvar*_T1E;long _T1F;struct Cyc_List_List*_T20;struct Cyc_List_List*_T21;void*_T22;struct Cyc_List_List*_T23;struct Cyc_Core_Opt**_T24;struct Cyc_Core_Opt*_T25;struct Cyc_List_List*_T26;struct Cyc_Tctyp_CVTEnv _T27;_T0= cvt;{
# 1497
struct Cyc_List_List*kind_env=_T0.kind_env;
cvt= Cyc_Tctyp_i_check_type(cvt,expected_kind,t,1,allow_abs_aggr);_T1= cvt;{
# 1500
struct Cyc_List_List*vs=_T1.free_vars;_TL25B: if(vs!=0)goto _TL259;else{goto _TL25A;}
_TL259: _T2= kind_env;_T3= vs;_T4= _T3->hd;_T5= (struct _tuple15*)_T4;_T6= *_T5;_T7= _T6.f0;({__typeof__(Cyc_Tctyp_fast_add_free_tvar(_T2,_T7))_T28=Cyc_Tctyp_fast_add_free_tvar(_T2,_T7);cvt.kind_env= _T28;});_T8= vs;
# 1500
vs= _T8->tl;goto _TL25B;_TL25A:;}_T9= cvt;{
# 1506
struct Cyc_List_List*evs=_T9.free_evars;_TL25F: if(evs!=0)goto _TL25D;else{goto _TL25E;}
_TL25D: _TA= evs;_TB= _TA->hd;_TC= (struct _tuple16*)_TB;{struct _tuple16 _T28=*_TC;void*_T29;_T29= _T28.f0;{void*e=_T29;
void*_T2A=Cyc_Absyn_compress(e);void*_T2B;_TD= (int*)_T2A;_TE= *_TD;if(_TE!=1)goto _TL260;{struct Cyc_Absyn_Evar_Absyn_Type_struct*_T2C=(struct Cyc_Absyn_Evar_Absyn_Type_struct*)_T2A;_TF= (struct Cyc_Absyn_Evar_Absyn_Type_struct*)_T2A;_T10= & _TF->f4;_T2B= (struct Cyc_Core_Opt**)_T10;}{struct Cyc_Core_Opt**s=(struct Cyc_Core_Opt**)_T2B;_T11= s;_T12= *_T11;
# 1510
if(_T12!=0)goto _TL262;_T13= s;{struct Cyc_Core_Opt*_T2C=_cycalloc(sizeof(struct Cyc_Core_Opt));
_T2C->v= kind_env;_T14= (struct Cyc_Core_Opt*)_T2C;}*_T13= _T14;goto _TL263;
# 1514
_TL262:{struct Cyc_List_List*result=0;_T15= s;_T16= *_T15;_T17= _T16->v;{
struct Cyc_List_List*tvs=(struct Cyc_List_List*)_T17;_TL267: if(tvs!=0)goto _TL265;else{goto _TL266;}
_TL265: _T19= Cyc_List_mem;{long(*_T2C)(int(*)(struct Cyc_Absyn_Tvar*,struct Cyc_Absyn_Tvar*),struct Cyc_List_List*,struct Cyc_Absyn_Tvar*)=(long(*)(int(*)(struct Cyc_Absyn_Tvar*,struct Cyc_Absyn_Tvar*),struct Cyc_List_List*,struct Cyc_Absyn_Tvar*))_T19;_T18= _T2C;}_T1A= Cyc_Tcutil_fast_tvar_cmp;_T1B= kind_env;_T1C= tvs;_T1D= _T1C->hd;_T1E= (struct Cyc_Absyn_Tvar*)_T1D;_T1F= _T18(_T1A,_T1B,_T1E);if(!_T1F)goto _TL268;{struct Cyc_List_List*_T2C=_cycalloc(sizeof(struct Cyc_List_List));_T21= tvs;_T22= _T21->hd;
_T2C->hd= (struct Cyc_Absyn_Tvar*)_T22;_T2C->tl= result;_T20= (struct Cyc_List_List*)_T2C;}result= _T20;goto _TL269;_TL268: _TL269: _T23= tvs;
# 1515
tvs= _T23->tl;goto _TL267;_TL266:;}_T24= s;{struct Cyc_Core_Opt*_T2C=_cycalloc(sizeof(struct Cyc_Core_Opt));
# 1518
_T2C->v= result;_T25= (struct Cyc_Core_Opt*)_T2C;}*_T24= _T25;}_TL263: goto _LL3;}_TL260: goto _LL3;_LL3:;}}_T26= evs;
# 1506
evs= _T26->tl;goto _TL25F;_TL25E:;}_T27= cvt;
# 1525
return _T27;}}
# 1532
void Cyc_Tctyp_check_valid_toplevel_type(unsigned loc,struct Cyc_Tcenv_Tenv*te,void*t){int _T0;long _T1;int _T2;struct Cyc_Tcenv_Tenv*_T3;long _T4;struct Cyc_Tcenv_Tenv*_T5;struct Cyc_Absyn_Kind*_T6;long _T7;struct Cyc_Absyn_Kind*_T8;struct Cyc_Absyn_Kind*_T9;struct Cyc_Tctyp_CVTEnv _TA;struct Cyc_Absyn_Kind*_TB;void*_TC;struct Cyc_List_List*(*_TD)(struct Cyc_Absyn_Tvar*(*)(struct _tuple15*),struct Cyc_List_List*);struct Cyc_List_List*(*_TE)(void*(*)(void*),struct Cyc_List_List*);struct Cyc_Absyn_Tvar*(*_TF)(struct _tuple15*);void*(*_T10)(struct _tuple0*);struct Cyc_Tctyp_CVTEnv _T11;struct Cyc_List_List*_T12;struct Cyc_Tctyp_CVTEnv _T13;struct Cyc_Tctyp_CVTEnv _T14;struct Cyc_List_List*_T15;unsigned _T16;struct Cyc_List_List*_T17;void*_T18;struct Cyc_Absyn_Tvar*_T19;struct Cyc_List_List*_T1A;void*_T1B;struct Cyc_Absyn_Tvar*_T1C;int _T1D;struct Cyc_List_List*_T1E;struct Cyc_List_List*_T1F;struct Cyc_List_List*_T20;void*_T21;struct Cyc_List_List*_T22;struct Cyc_List_List*_T23;void*_T24;struct Cyc_Absyn_Tvar*_T25;void*_T26;int*_T27;unsigned _T28;struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*_T29;struct Cyc_Core_Opt**_T2A;struct Cyc_Core_Opt**_T2B;struct Cyc_Absyn_Kind*_T2C;struct Cyc_Absyn_Kind*_T2D;struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T2E;struct Cyc_Core_Opt**_T2F;struct Cyc_Absyn_Kind*_T30;struct Cyc_Absyn_Kind*_T31;enum Cyc_Absyn_KindQual _T32;int _T33;struct Cyc_Core_Opt**_T34;struct Cyc_Absyn_Kind*_T35;struct Cyc_Absyn_Kind*_T36;struct Cyc_Core_Opt**_T37;struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*_T38;struct Cyc_Absyn_Kind*_T39;struct Cyc_Absyn_Kind*_T3A;enum Cyc_Absyn_KindQual _T3B;struct Cyc_Absyn_Kind*_T3C;struct Cyc_Warn_String_Warn_Warg_struct _T3D;struct Cyc_Warn_Tvar_Warn_Warg_struct _T3E;struct Cyc_List_List*_T3F;void*_T40;struct Cyc_Warn_String_Warn_Warg_struct _T41;struct Cyc_Warn_Kind_Warn_Warg_struct _T42;struct Cyc_Absyn_Kind*_T43;unsigned _T44;struct _fat_ptr _T45;struct Cyc_List_List*_T46;int*_T47;int _T48;struct Cyc_Absyn_FnType_Absyn_Type_struct*_T49;struct Cyc_List_List**_T4A;struct Cyc_Absyn_FnType_Absyn_Type_struct*_T4B;struct Cyc_List_List**_T4C;unsigned _T4D;struct Cyc_Tctyp_CVTEnv _T4E;struct Cyc_List_List*(*_T4F)(struct _tuple15*(*)(long,struct Cyc_Absyn_Tvar*),long,struct Cyc_List_List*);struct Cyc_List_List*(*_T50)(void*(*)(void*,void*),void*,struct Cyc_List_List*);struct _tuple15*(*_T51)(long,struct Cyc_Absyn_Tvar*);struct Cyc_List_List**_T52;struct Cyc_List_List*_T53;struct Cyc_List_List*_T54;struct Cyc_List_List**_T55;void*_T56;struct Cyc_List_List**_T57;struct Cyc_List_List*_T58;struct Cyc_List_List**_T59;struct Cyc_List_List*(*_T5A)(long(*)(struct Cyc_Absyn_Tvar*),struct Cyc_List_List*);struct Cyc_List_List*(*_T5B)(long(*)(void*),struct Cyc_List_List*);long(*_T5C)(struct Cyc_Absyn_Tvar*);struct Cyc_List_List*_T5D;struct Cyc_Warn_String_Warn_Warg_struct _T5E;struct Cyc_Warn_Tvar_Warn_Warg_struct _T5F;struct Cyc_List_List*_T60;void*_T61;struct Cyc_Warn_String_Warn_Warg_struct _T62;struct Cyc_Warn_Typ_Warn_Warg_struct _T63;unsigned _T64;struct _fat_ptr _T65;long _T66;struct Cyc_Tcenv_Tenv*_T67;long _T68;int*_T69;int _T6A;struct Cyc_Absyn_FnInfo _T6B;long(*_T6C)(long(*)(struct Cyc_Absyn_Tvar*),struct Cyc_List_List*);long(*_T6D)(long(*)(void*),struct Cyc_List_List*);long(*_T6E)(struct Cyc_Absyn_Tvar*);struct Cyc_List_List*_T6F;long _T70;struct Cyc_Warn_String_Warn_Warg_struct _T71;struct Cyc_Warn_String_Warn_Warg_struct _T72;struct Cyc_Warn_String_Warn_Warg_struct _T73;struct Cyc_Warn_Typ_Warn_Warg_struct _T74;unsigned _T75;struct _fat_ptr _T76;_T1= 
Cyc_Tcutil_is_function_type(t);if(!_T1)goto _TL26A;_T3= te;_T4= _T3->in_tempest;if(_T4)goto _TL26C;else{goto _TL26E;}_TL26E: _T2= 1;goto _TL26D;_TL26C: _T5= te;_T2= _T5->tempest_generalize;_TL26D: _T0= _T2;goto _TL26B;_TL26A: _T0= 0;_TL26B: {long generalize_evars=_T0;_T7= 
Cyc_Tcutil_is_function_type(t);if(!_T7)goto _TL26F;_T8= & Cyc_Kinds_ak;_T6= (struct Cyc_Absyn_Kind*)_T8;goto _TL270;_TL26F: _T9= & Cyc_Kinds_mk;_T6= (struct Cyc_Absyn_Kind*)_T9;_TL270: {struct Cyc_Absyn_Kind*expected_kind=_T6;
struct Cyc_List_List*te_vars=Cyc_Tcenv_lookup_type_vars(te);{struct Cyc_Tctyp_CVTEnv _T77;
# 1537
_T77.loc= loc;_T77.te= te;_T77.kind_env= te_vars;_T77.fn_result= 0;_T77.def_aliasable= 0;_T77.inst_type_evar= 0;_T77.generalize_evars= generalize_evars;_T77.allow_aqual_bounds= 1;_T77.free_vars= 0;_T77.free_evars= 0;_T77.free_qualvars= 0;_TA= _T77;}_TB= expected_kind;_TC= t;{
# 1536
struct Cyc_Tctyp_CVTEnv cvt=Cyc_Tctyp_check_valid_type(_TA,_TB,1,_TC);_TE= Cyc_List_map;{
# 1539
struct Cyc_List_List*(*_T77)(struct Cyc_Absyn_Tvar*(*)(struct _tuple15*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct Cyc_Absyn_Tvar*(*)(struct _tuple15*),struct Cyc_List_List*))_TE;_TD= _T77;}_T10= Cyc_Core_fst;{struct Cyc_Absyn_Tvar*(*_T77)(struct _tuple15*)=(struct Cyc_Absyn_Tvar*(*)(struct _tuple15*))_T10;_TF= _T77;}_T11= cvt;_T12= _T11.free_vars;{struct Cyc_List_List*free_tvars=_TD(_TF,_T12);_T13= cvt;{
struct Cyc_List_List*free_evars=_T13.free_evars;_T14= cvt;{
struct Cyc_List_List*free_qualvars=_T14.free_qualvars;
# 1543
if(te_vars==0)goto _TL271;{
struct Cyc_List_List*res=0;{
struct Cyc_List_List*fs=free_tvars;_TL276: _T15= fs;_T16= (unsigned)_T15;if(_T16)goto _TL274;else{goto _TL275;}
_TL274:{struct Cyc_List_List*ts=te_vars;
_TL27A: if(ts!=0)goto _TL278;else{goto _TL279;}
_TL278: _T17= fs;_T18= _T17->hd;_T19= (struct Cyc_Absyn_Tvar*)_T18;_T1A= ts;_T1B= _T1A->hd;_T1C= (struct Cyc_Absyn_Tvar*)_T1B;_T1D= Cyc_Absyn_tvar_cmp(_T19,_T1C);if(_T1D!=0)goto _TL27B;goto _TL279;_TL27B: _T1E= ts;
# 1547
ts= _T1E->tl;goto _TL27A;_TL279:
# 1550
 if(ts!=0)goto _TL27D;{struct Cyc_List_List*_T77=_cycalloc(sizeof(struct Cyc_List_List));_T20= fs;_T21= _T20->hd;
_T77->hd= (struct Cyc_Absyn_Tvar*)_T21;_T77->tl= res;_T1F= (struct Cyc_List_List*)_T77;}res= _T1F;goto _TL27E;_TL27D: _TL27E:;}_T22= fs;
# 1545
fs= _T22->tl;goto _TL276;_TL275:;}
# 1553
free_tvars= Cyc_List_imp_rev(res);}goto _TL272;_TL271: _TL272:{
# 1558
struct Cyc_List_List*x=free_tvars;_TL282: if(x!=0)goto _TL280;else{goto _TL281;}
_TL280: _T23= x;_T24= _T23->hd;_T25= (struct Cyc_Absyn_Tvar*)_T24;_T26= _T25->kind;{void*_T77=Cyc_Kinds_compress_kb(_T26);enum Cyc_Absyn_AliasHint _T78;struct Cyc_Absyn_Kind*_T79;void*_T7A;_T27= (int*)_T77;_T28= *_T27;switch(_T28){case 1:{struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*_T7B=(struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*)_T77;_T29= (struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct*)_T77;_T2A= & _T29->f1;_T7A= (struct Cyc_Core_Opt**)_T2A;}{struct Cyc_Core_Opt**f=_T7A;_T2B= f;_T2C= & Cyc_Kinds_bk;_T2D= (struct Cyc_Absyn_Kind*)_T2C;
# 1561
({__typeof__(Cyc_Kinds_kind_to_bound_opt(_T2D))_T7B=Cyc_Kinds_kind_to_bound_opt(_T2D);*_T2B= _T7B;});goto _LL0;}case 2:{struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*_T7B=(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T77;_T2E= (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct*)_T77;_T2F= & _T2E->f1;_T7A= (struct Cyc_Core_Opt**)_T2F;_T79= _T7B->f2;}{struct Cyc_Core_Opt**f=(struct Cyc_Core_Opt**)_T7A;struct Cyc_Absyn_Kind*k=_T79;_T30= k;_T31= (struct Cyc_Absyn_Kind*)_T30;_T32= _T31->kind;_T33= (int)_T32;switch(_T33){case Cyc_Absyn_BoxKind: goto _LLD;case Cyc_Absyn_MemKind: _LLD: _T34= f;_T35= & Cyc_Kinds_bk;_T36= (struct Cyc_Absyn_Kind*)_T35;
# 1567
({__typeof__(Cyc_Kinds_kind_to_bound_opt(_T36))_T7B=Cyc_Kinds_kind_to_bound_opt(_T36);*_T34= _T7B;});goto _LL9;default: _T37= f;
# 1570
({__typeof__(Cyc_Kinds_kind_to_bound_opt(k))_T7B=Cyc_Kinds_kind_to_bound_opt(k);*_T37= _T7B;});goto _LL9;}_LL9: goto _LL0;}default: _T38= (struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*)_T77;_T39= _T38->f1;_T3A= (struct Cyc_Absyn_Kind*)_T39;_T3B= _T3A->kind;if(_T3B!=Cyc_Absyn_MemKind)goto _TL285;{struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*_T7B=(struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct*)_T77;_T3C= _T7B->f1;{struct Cyc_Absyn_Kind _T7C=*_T3C;_T78= _T7C.aliashint;}}{enum Cyc_Absyn_AliasHint a=_T78;{struct Cyc_Warn_String_Warn_Warg_struct _T7B;_T7B.tag= 0;
# 1575
({__typeof__(_tag_fat("type variable ",sizeof(char),15U))_T7C=_tag_fat("type variable ",sizeof(char),15U);_T7B.f1= _T7C;});_T3D= _T7B;}{struct Cyc_Warn_String_Warn_Warg_struct _T7B=_T3D;{struct Cyc_Warn_Tvar_Warn_Warg_struct _T7C;_T7C.tag= 7;_T3F= x;_T40= _T3F->hd;_T7C.f1= (struct Cyc_Absyn_Tvar*)_T40;_T3E= _T7C;}{struct Cyc_Warn_Tvar_Warn_Warg_struct _T7C=_T3E;{struct Cyc_Warn_String_Warn_Warg_struct _T7D;_T7D.tag= 0;({__typeof__(_tag_fat(" cannot have kind ",sizeof(char),19U))_T7E=_tag_fat(" cannot have kind ",sizeof(char),19U);_T7D.f1= _T7E;});_T41= _T7D;}{struct Cyc_Warn_String_Warn_Warg_struct _T7D=_T41;{struct Cyc_Warn_Kind_Warn_Warg_struct _T7E;_T7E.tag= 9;{struct Cyc_Absyn_Kind*_T7F=_cycalloc(sizeof(struct Cyc_Absyn_Kind));_T7F->kind= 1U;_T7F->aliashint= a;_T43= (struct Cyc_Absyn_Kind*)_T7F;}_T7E.f1= _T43;_T42= _T7E;}{struct Cyc_Warn_Kind_Warn_Warg_struct _T7E=_T42;void*_T7F[4];_T7F[0]= & _T7B;_T7F[1]= & _T7C;_T7F[2]= & _T7D;_T7F[3]= & _T7E;_T44= loc;_T45= _tag_fat(_T7F,sizeof(void*),4);Cyc_Warn_err2(_T44,_T45);}}}}goto _LL0;}_TL285: goto _LL0;}_LL0:;}_T46= x;
# 1558
x= _T46->tl;goto _TL282;_TL281:;}
# 1582
if(free_tvars!=0)goto _TL289;else{goto _TL28B;}_TL28B: if(free_evars!=0)goto _TL289;else{goto _TL28A;}_TL28A: if(free_qualvars!=0)goto _TL289;else{goto _TL287;}
_TL289:{void*_T77=Cyc_Absyn_compress(t);void*_T78;void*_T79;_T47= (int*)_T77;_T48= *_T47;if(_T48!=6)goto _TL28C;{struct Cyc_Absyn_FnType_Absyn_Type_struct*_T7A=(struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T77;_T49= (struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T77;_T4A= & _T49->f1.tvars;_T79= (struct Cyc_List_List**)_T4A;_T4B= (struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T77;_T4C= & _T4B->f1.qual_bnd;_T78= (struct Cyc_List_List**)_T4C;}{struct Cyc_List_List**btvs=(struct Cyc_List_List**)_T79;struct Cyc_List_List**qb=(struct Cyc_List_List**)_T78;_T4D= loc;_T4E= cvt;_T50= Cyc_List_map_c;{
# 1586
struct Cyc_List_List*(*_T7A)(struct _tuple15*(*)(long,struct Cyc_Absyn_Tvar*),long,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _tuple15*(*)(long,struct Cyc_Absyn_Tvar*),long,struct Cyc_List_List*))_T50;_T4F= _T7A;}_T51= Cyc_Tcutil_tvar_bool_pair;_T52= btvs;_T53= *_T52;_T54= _T4F(_T51,0,_T53);_T55= qb;_T56= Cyc_Absyn_al_qual_type;Cyc_Tctyp_update_qualifier_bounds(_T4D,_T4E,_T54,_T55,_T56);_T57= btvs;_T58= *_T57;
# 1588
if(_T58!=0)goto _TL28E;_T59= btvs;_T5B= Cyc_List_filter;{
# 1590
struct Cyc_List_List*(*_T7A)(long(*)(struct Cyc_Absyn_Tvar*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(long(*)(struct Cyc_Absyn_Tvar*),struct Cyc_List_List*))_T5B;_T5A= _T7A;}_T5C= Cyc_CurRgn_is_not_curr_rgn;_T5D= free_tvars;({__typeof__(_T5A(_T5C,_T5D))_T7A=_T5A(_T5C,_T5D);*_T59= _T7A;});
free_tvars= 0;goto _TL28F;_TL28E: _TL28F: goto _LL10;}_TL28C: goto _LL10;_LL10:;}
# 1597
if(free_tvars==0)goto _TL290;{struct Cyc_Warn_String_Warn_Warg_struct _T77;_T77.tag= 0;
({__typeof__(_tag_fat("unbound type variable ",sizeof(char),23U))_T78=_tag_fat("unbound type variable ",sizeof(char),23U);_T77.f1= _T78;});_T5E= _T77;}{struct Cyc_Warn_String_Warn_Warg_struct _T77=_T5E;{struct Cyc_Warn_Tvar_Warn_Warg_struct _T78;_T78.tag= 7;_T60= free_tvars;_T61= _T60->hd;_T78.f1= (struct Cyc_Absyn_Tvar*)_T61;_T5F= _T78;}{struct Cyc_Warn_Tvar_Warn_Warg_struct _T78=_T5F;{struct Cyc_Warn_String_Warn_Warg_struct _T79;_T79.tag= 0;({__typeof__(_tag_fat(" when checking ",sizeof(char),16U))_T7A=_tag_fat(" when checking ",sizeof(char),16U);_T79.f1= _T7A;});_T62= _T79;}{struct Cyc_Warn_String_Warn_Warg_struct _T79=_T62;{struct Cyc_Warn_Typ_Warn_Warg_struct _T7A;_T7A.tag= 2;_T7A.f1= t;_T63= _T7A;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T7A=_T63;void*_T7B[4];_T7B[0]= & _T77;_T7B[1]= & _T78;_T7B[2]= & _T79;_T7B[3]= & _T7A;_T64= loc;_T65= _tag_fat(_T7B,sizeof(void*),4);Cyc_Warn_err2(_T64,_T65);}}}}goto _TL291;_TL290: _TL291: _T66= 
Cyc_Tcutil_is_function_type(t);if(_T66)goto _TL295;else{goto _TL294;}_TL295: _T67= te;_T68= _T67->in_tempest;if(_T68)goto _TL292;else{goto _TL294;}
_TL294: Cyc_Tctyp_check_free_evars(free_evars,t,loc);goto _TL293;_TL292: _TL293: goto _TL288;_TL287: _TL288: {
# 1603
void*_T77=Cyc_Absyn_compress(t);struct Cyc_List_List*_T78;_T69= (int*)_T77;_T6A= *_T69;if(_T6A!=6)goto _TL296;{struct Cyc_Absyn_FnType_Absyn_Type_struct*_T79=(struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T77;_T6B= _T79->f1;_T78= _T6B.tvars;}{struct Cyc_List_List*btvs=_T78;_T6D= Cyc_List_exists;{
# 1605
long(*_T79)(long(*)(struct Cyc_Absyn_Tvar*),struct Cyc_List_List*)=(long(*)(long(*)(struct Cyc_Absyn_Tvar*),struct Cyc_List_List*))_T6D;_T6C= _T79;}_T6E= Cyc_CurRgn_is_curr_rgn;_T6F= btvs;_T70= _T6C(_T6E,_T6F);if(!_T70)goto _TL298;{struct Cyc_Warn_String_Warn_Warg_struct _T79;_T79.tag= 0;
# 1607
({__typeof__(_tag_fat("cannot abstract current region ",sizeof(char),32U))_T7A=_tag_fat("cannot abstract current region ",sizeof(char),32U);_T79.f1= _T7A;});_T71= _T79;}{struct Cyc_Warn_String_Warn_Warg_struct _T79=_T71;{struct Cyc_Warn_String_Warn_Warg_struct _T7A;_T7A.tag= 0;_T7A.f1= Cyc_CurRgn_curr_rgn_name;_T72= _T7A;}{struct Cyc_Warn_String_Warn_Warg_struct _T7A=_T72;{struct Cyc_Warn_String_Warn_Warg_struct _T7B;_T7B.tag= 0;({__typeof__(_tag_fat(" in ",sizeof(char),5U))_T7C=_tag_fat(" in ",sizeof(char),5U);_T7B.f1= _T7C;});_T73= _T7B;}{struct Cyc_Warn_String_Warn_Warg_struct _T7B=_T73;{struct Cyc_Warn_Typ_Warn_Warg_struct _T7C;_T7C.tag= 2;_T7C.f1= t;_T74= _T7C;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T7C=_T74;void*_T7D[4];_T7D[0]= & _T79;_T7D[1]= & _T7A;_T7D[2]= & _T7B;_T7D[3]= & _T7C;_T75= loc;_T76= _tag_fat(_T7D,sizeof(void*),4);Cyc_Warn_err2(_T75,_T76);}}}}goto _TL299;_TL298: _TL299: goto _LL15;}_TL296: goto _LL15;_LL15:;}}}}}}}}
# 1618
void Cyc_Tctyp_check_fndecl_valid_type(unsigned loc,struct Cyc_Tcenv_Tenv*te,struct Cyc_Absyn_Fndecl*fd){int*_T0;int _T1;struct Cyc_Absyn_Fndecl*_T2;struct Cyc_Absyn_FnInfo _T3;struct Cyc_Absyn_Fndecl*_T4;struct Cyc_Absyn_Fndecl*_T5;struct Cyc_Absyn_Fndecl*_T6;unsigned _T7;struct Cyc_Absyn_FnInfo _T8;struct Cyc_Absyn_Tqual _T9;long _TA;struct Cyc_Absyn_FnInfo _TB;void*_TC;struct Cyc_Warn_String_Warn_Warg_struct _TD;int(*_TE)(struct _fat_ptr);void*(*_TF)(struct _fat_ptr);struct _fat_ptr _T10;struct Cyc_Absyn_Fndecl*_T11;struct Cyc_Absyn_FnInfo _T12;struct Cyc_List_List*_T13;struct Cyc_List_List*_T14;void*_T15;struct _tuple9*_T16;struct _tuple9 _T17;struct _fat_ptr*_T18;struct Cyc_List_List*_T19;struct Cyc_List_List*_T1A;unsigned _T1B;struct _fat_ptr _T1C;struct Cyc_Absyn_Fndecl*_T1D;
void*t=Cyc_Tcutil_fndecl2type(fd);
# 1621
Cyc_Tctyp_check_valid_toplevel_type(loc,te,t);{
void*_T1E=Cyc_Absyn_compress(t);struct Cyc_Absyn_FnInfo _T1F;_T0= (int*)_T1E;_T1= *_T0;if(_T1!=6)goto _TL29A;{struct Cyc_Absyn_FnType_Absyn_Type_struct*_T20=(struct Cyc_Absyn_FnType_Absyn_Type_struct*)_T1E;_T1F= _T20->f1;}{struct Cyc_Absyn_FnInfo i=_T1F;_T2= fd;_T3= _T2->i;{
# 1624
struct Cyc_List_List*atts=_T3.attributes;_T4= fd;
_T4->i= i;_T5= fd;
_T5->i.attributes= atts;_T6= fd;_T7= loc;_T8= i;_T9= _T8.ret_tqual;_TA= _T9.print_const;_TB= i;_TC= _TB.ret_type;
({__typeof__(
Cyc_Tcutil_extract_const_from_typedef(_T7,_TA,_TC))_T20=Cyc_Tcutil_extract_const_from_typedef(_T7,_TA,_TC);
# 1627
_T6->i.ret_tqual.real_const= _T20;});goto _LL0;}}_TL29A:{struct Cyc_Warn_String_Warn_Warg_struct _T20;_T20.tag= 0;
# 1631
({__typeof__(_tag_fat("check_fndecl_valid_type: not a FnType",sizeof(char),38U))_T21=_tag_fat("check_fndecl_valid_type: not a FnType",sizeof(char),38U);_T20.f1= _T21;});_TD= _T20;}{struct Cyc_Warn_String_Warn_Warg_struct _T20=_TD;void*_T21[1];_T21[0]= & _T20;_TF= Cyc_Warn_impos2;{int(*_T22)(struct _fat_ptr)=(int(*)(struct _fat_ptr))_TF;_TE= _T22;}_T10= _tag_fat(_T21,sizeof(void*),1);_TE(_T10);}_LL0:;}{
# 1633
struct Cyc_List_List*argnames=0;_T11= fd;_T12= _T11->i;{
struct Cyc_List_List*args=_T12.args;_TL29F: if(args!=0)goto _TL29D;else{goto _TL29E;}
_TL29D:{struct Cyc_List_List*_T1E=_cycalloc(sizeof(struct Cyc_List_List));_T14= args;_T15= _T14->hd;_T16= (struct _tuple9*)_T15;_T17= *_T16;_T18= _T17.f0;({__typeof__(_check_null(_T18))_T1F=_check_null(_T18);_T1E->hd= _T1F;});_T1E->tl= argnames;_T13= (struct Cyc_List_List*)_T1E;}argnames= _T13;_T19= args;
# 1634
args= _T19->tl;goto _TL29F;_TL29E:;}_T1A= argnames;_T1B= loc;_T1C= 
# 1636
_tag_fat("function declaration has repeated parameter",sizeof(char),44U);Cyc_Tcutil_check_unique_vars(_T1A,_T1B,_T1C);_T1D= fd;
# 1638
_T1D->cached_type= t;}}
# 1647
void Cyc_Tctyp_check_type(unsigned loc,struct Cyc_Tcenv_Tenv*te,struct Cyc_List_List*bound_tvars,struct Cyc_Absyn_Kind*expected_kind,long allow_evars,long allow_abs_aggr,void*t){struct Cyc_Tctyp_CVTEnv _T0;struct Cyc_Absyn_Kind*_T1;long _T2;void*_T3;struct Cyc_List_List*(*_T4)(struct Cyc_List_List*,struct Cyc_List_List*,struct Cyc_Absyn_Tvar*(*)(struct _tuple15*));struct Cyc_Tctyp_CVTEnv _T5;struct Cyc_List_List*_T6;struct Cyc_List_List*_T7;struct Cyc_Absyn_Tvar*(*_T8)(struct _tuple15*);void*(*_T9)(struct _tuple0*);struct Cyc_Warn_String_Warn_Warg_struct _TA;struct Cyc_Warn_Tvar_Warn_Warg_struct _TB;struct Cyc_List_List*_TC;void*_TD;struct _tuple15*_TE;struct _tuple15 _TF;struct Cyc_Warn_String_Warn_Warg_struct _T10;struct Cyc_Warn_Typ_Warn_Warg_struct _T11;unsigned _T12;struct _fat_ptr _T13;struct Cyc_List_List*_T14;long _T15;struct Cyc_Tctyp_CVTEnv _T16;struct Cyc_List_List*_T17;void*_T18;unsigned _T19;{struct Cyc_Tctyp_CVTEnv _T1A;
# 1650
_T1A.loc= loc;_T1A.te= te;_T1A.kind_env= bound_tvars;_T1A.fn_result= 0;_T1A.def_aliasable= 0;_T1A.inst_type_evar= 0;_T1A.generalize_evars= 0;_T1A.allow_aqual_bounds= 0;_T1A.free_vars= 0;_T1A.free_evars= 0;_T1A.free_qualvars= 0;_T0= _T1A;}_T1= expected_kind;_T2= allow_abs_aggr;_T3= t;{
# 1649
struct Cyc_Tctyp_CVTEnv cvt=Cyc_Tctyp_check_valid_type(_T0,_T1,_T2,_T3);{
# 1652
struct Cyc_List_List*(*_T1A)(struct Cyc_List_List*,struct Cyc_List_List*,struct Cyc_Absyn_Tvar*(*)(struct _tuple15*))=(struct Cyc_List_List*(*)(struct Cyc_List_List*,struct Cyc_List_List*,struct Cyc_Absyn_Tvar*(*)(struct _tuple15*)))Cyc_Tctyp_remove_bound_tvars;_T4= _T1A;}_T5= cvt;_T6= _T5.free_vars;_T7= bound_tvars;_T9= Cyc_Core_fst;{struct Cyc_Absyn_Tvar*(*_T1A)(struct _tuple15*)=(struct Cyc_Absyn_Tvar*(*)(struct _tuple15*))_T9;_T8= _T1A;}{struct Cyc_List_List*free_tvs=_T4(_T6,_T7,_T8);
_TL2A3: if(free_tvs!=0)goto _TL2A1;else{goto _TL2A2;}
_TL2A1:{struct Cyc_Warn_String_Warn_Warg_struct _T1A;_T1A.tag= 0;({__typeof__(_tag_fat("unbound type variable ",sizeof(char),23U))_T1B=_tag_fat("unbound type variable ",sizeof(char),23U);_T1A.f1= _T1B;});_TA= _T1A;}{struct Cyc_Warn_String_Warn_Warg_struct _T1A=_TA;{struct Cyc_Warn_Tvar_Warn_Warg_struct _T1B;_T1B.tag= 7;_TC= free_tvs;_TD= _TC->hd;_TE= (struct _tuple15*)_TD;_TF= *_TE;_T1B.f1= _TF.f0;_TB= _T1B;}{struct Cyc_Warn_Tvar_Warn_Warg_struct _T1B=_TB;{struct Cyc_Warn_String_Warn_Warg_struct _T1C;_T1C.tag= 0;({__typeof__(_tag_fat(" in type ",sizeof(char),10U))_T1D=_tag_fat(" in type ",sizeof(char),10U);_T1C.f1= _T1D;});_T10= _T1C;}{struct Cyc_Warn_String_Warn_Warg_struct _T1C=_T10;{struct Cyc_Warn_Typ_Warn_Warg_struct _T1D;_T1D.tag= 2;_T1D.f1= t;_T11= _T1D;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T1D=_T11;void*_T1E[4];_T1E[0]= & _T1A;_T1E[1]= & _T1B;_T1E[2]= & _T1C;_T1E[3]= & _T1D;_T12= loc;_T13= _tag_fat(_T1E,sizeof(void*),4);Cyc_Warn_err2(_T12,_T13);}}}}_T14= free_tvs;
# 1653
free_tvs= _T14->tl;goto _TL2A3;_TL2A2: _T15= allow_evars;
# 1655
if(_T15)goto _TL2A4;else{goto _TL2A6;}
_TL2A6: _T16= cvt;_T17= _T16.free_evars;_T18= t;_T19= loc;Cyc_Tctyp_check_free_evars(_T17,_T18,_T19);goto _TL2A5;_TL2A4: _TL2A5:;}}}
# 1660
void Cyc_Tctyp_check_type_with_bounds(unsigned loc,struct Cyc_Tcenv_Tenv*te,struct Cyc_List_List*flagged_tvars,struct Cyc_List_List**qual_bnd,struct Cyc_Absyn_Kind*expected_kind,long allow_evars,long allow_abs_aggr,void*t){struct Cyc_List_List*(*_T0)(struct Cyc_Absyn_Tvar*(*)(struct _tuple15*),struct Cyc_List_List*);struct Cyc_List_List*(*_T1)(void*(*)(void*),struct Cyc_List_List*);struct Cyc_Absyn_Tvar*(*_T2)(struct _tuple15*);void*(*_T3)(struct _tuple0*);struct Cyc_List_List*_T4;struct Cyc_Tctyp_CVTEnv _T5;struct Cyc_Absyn_Kind*_T6;long _T7;void*_T8;struct Cyc_List_List**_T9;struct Cyc_List_List*_TA;void*_TB;struct Cyc_Tctyp_CVTEnv _TC;struct Cyc_Absyn_Kind*_TD;struct Cyc_Absyn_Kind*_TE;long _TF;void*_T10;struct Cyc_Tctyp_CVTEnv _T11;struct Cyc_Absyn_Kind*_T12;struct Cyc_Absyn_Kind*_T13;long _T14;void*_T15;struct Cyc_List_List*_T16;struct Cyc_List_List*(*_T17)(struct Cyc_List_List*,struct Cyc_List_List*,struct Cyc_Absyn_Tvar*(*)(struct _tuple15*));struct Cyc_Tctyp_CVTEnv _T18;struct Cyc_List_List*_T19;struct Cyc_List_List*_T1A;struct Cyc_Absyn_Tvar*(*_T1B)(struct _tuple15*);void*(*_T1C)(struct _tuple0*);struct Cyc_Warn_String_Warn_Warg_struct _T1D;struct Cyc_Warn_Tvar_Warn_Warg_struct _T1E;struct Cyc_List_List*_T1F;void*_T20;struct _tuple15*_T21;struct _tuple15 _T22;struct Cyc_Warn_String_Warn_Warg_struct _T23;struct Cyc_Warn_Typ_Warn_Warg_struct _T24;unsigned _T25;struct _fat_ptr _T26;struct Cyc_List_List*_T27;long _T28;struct Cyc_Tctyp_CVTEnv _T29;struct Cyc_List_List*_T2A;void*_T2B;unsigned _T2C;_T1= Cyc_List_map;{
# 1663
struct Cyc_List_List*(*_T2D)(struct Cyc_Absyn_Tvar*(*)(struct _tuple15*),struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct Cyc_Absyn_Tvar*(*)(struct _tuple15*),struct Cyc_List_List*))_T1;_T0= _T2D;}_T3= Cyc_Core_fst;{struct Cyc_Absyn_Tvar*(*_T2D)(struct _tuple15*)=(struct Cyc_Absyn_Tvar*(*)(struct _tuple15*))_T3;_T2= _T2D;}_T4= flagged_tvars;{struct Cyc_List_List*bound_tvars=_T0(_T2,_T4);{struct Cyc_Tctyp_CVTEnv _T2D;
# 1665
_T2D.loc= loc;_T2D.te= te;_T2D.kind_env= bound_tvars;_T2D.fn_result= 0;_T2D.def_aliasable= 0;_T2D.inst_type_evar= 0;_T2D.generalize_evars= 0;_T2D.allow_aqual_bounds= 1;_T2D.free_vars= 0;_T2D.free_evars= 0;_T2D.free_qualvars= 0;_T5= _T2D;}_T6= expected_kind;_T7= allow_abs_aggr;_T8= t;{
# 1664
struct Cyc_Tctyp_CVTEnv cvt=Cyc_Tctyp_check_valid_type(_T5,_T6,_T7,_T8);_T9= qual_bnd;{
# 1669
struct Cyc_List_List*qbit=*_T9;_TL2AA: if(qbit!=0)goto _TL2A8;else{goto _TL2A9;}
_TL2A8: _TA= qbit;_TB= _TA->hd;{struct _tuple0*_T2D=(struct _tuple0*)_TB;void*_T2E;void*_T2F;{struct _tuple0 _T30=*_T2D;_T2F= _T30.f0;_T2E= _T30.f1;}{void*tv=_T2F;void*bnd=_T2E;_TC= cvt;_TD= & Cyc_Kinds_aqk;_TE= (struct Cyc_Absyn_Kind*)_TD;_TF= allow_abs_aggr;_T10= tv;
cvt= Cyc_Tctyp_check_valid_type(_TC,_TE,_TF,_T10);_T11= cvt;_T12= & Cyc_Kinds_aqk;_T13= (struct Cyc_Absyn_Kind*)_T12;_T14= allow_abs_aggr;_T15= bnd;
cvt= Cyc_Tctyp_check_valid_type(_T11,_T13,_T14,_T15);}}_T16= qbit;
# 1669
qbit= _T16->tl;goto _TL2AA;_TL2A9:;}{
# 1675
struct Cyc_List_List*(*_T2D)(struct Cyc_List_List*,struct Cyc_List_List*,struct Cyc_Absyn_Tvar*(*)(struct _tuple15*))=(struct Cyc_List_List*(*)(struct Cyc_List_List*,struct Cyc_List_List*,struct Cyc_Absyn_Tvar*(*)(struct _tuple15*)))Cyc_Tctyp_remove_bound_tvars;_T17= _T2D;}_T18= cvt;_T19= _T18.free_vars;_T1A= bound_tvars;_T1C= Cyc_Core_fst;{struct Cyc_Absyn_Tvar*(*_T2D)(struct _tuple15*)=(struct Cyc_Absyn_Tvar*(*)(struct _tuple15*))_T1C;_T1B= _T2D;}{struct Cyc_List_List*free_tvs=_T17(_T19,_T1A,_T1B);
_TL2AE: if(free_tvs!=0)goto _TL2AC;else{goto _TL2AD;}
_TL2AC:{struct Cyc_Warn_String_Warn_Warg_struct _T2D;_T2D.tag= 0;({__typeof__(_tag_fat("unbound type variable ",sizeof(char),23U))_T2E=_tag_fat("unbound type variable ",sizeof(char),23U);_T2D.f1= _T2E;});_T1D= _T2D;}{struct Cyc_Warn_String_Warn_Warg_struct _T2D=_T1D;{struct Cyc_Warn_Tvar_Warn_Warg_struct _T2E;_T2E.tag= 7;_T1F= free_tvs;_T20= _T1F->hd;_T21= (struct _tuple15*)_T20;_T22= *_T21;_T2E.f1= _T22.f0;_T1E= _T2E;}{struct Cyc_Warn_Tvar_Warn_Warg_struct _T2E=_T1E;{struct Cyc_Warn_String_Warn_Warg_struct _T2F;_T2F.tag= 0;({__typeof__(_tag_fat(" in type ",sizeof(char),10U))_T30=_tag_fat(" in type ",sizeof(char),10U);_T2F.f1= _T30;});_T23= _T2F;}{struct Cyc_Warn_String_Warn_Warg_struct _T2F=_T23;{struct Cyc_Warn_Typ_Warn_Warg_struct _T30;_T30.tag= 2;_T30.f1= t;_T24= _T30;}{struct Cyc_Warn_Typ_Warn_Warg_struct _T30=_T24;void*_T31[4];_T31[0]= & _T2D;_T31[1]= & _T2E;_T31[2]= & _T2F;_T31[3]= & _T30;_T25= loc;_T26= _tag_fat(_T31,sizeof(void*),4);Cyc_Warn_err2(_T25,_T26);}}}}_T27= free_tvs;
# 1676
free_tvs= _T27->tl;goto _TL2AE;_TL2AD: _T28= allow_evars;
# 1678
if(_T28)goto _TL2AF;else{goto _TL2B1;}
_TL2B1: _T29= cvt;_T2A= _T29.free_evars;_T2B= t;_T2C= loc;Cyc_Tctyp_check_free_evars(_T2A,_T2B,_T2C);goto _TL2B0;_TL2AF: _TL2B0:
 Cyc_Tctyp_update_qualifier_bounds(loc,cvt,flagged_tvars,qual_bnd,Cyc_Absyn_rtd_qual_type);}}}}
