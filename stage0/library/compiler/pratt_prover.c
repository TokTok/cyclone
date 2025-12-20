#include <cyc_include.h>

# 121 "./cyclone/library/std/core.h"
 int Cyc_Core_ptrcmp(void*,void*);struct Cyc_List_List{void*hd;struct Cyc_List_List*tl;};struct _union_Nmspace_Abs_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_Rel_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_C_n{int tag;struct Cyc_List_List*val;};struct _union_Nmspace_Loc_n{int tag;int val;};union Cyc_Absyn_Nmspace{struct _union_Nmspace_Abs_n Abs_n;struct _union_Nmspace_Rel_n Rel_n;struct _union_Nmspace_C_n C_n;struct _union_Nmspace_Loc_n Loc_n;};struct _tuple0{union Cyc_Absyn_Nmspace f0;struct _fat_ptr*f1;};
# 148 "cyclone/library/compiler/absyn.h"
enum Cyc_Absyn_Scope{Cyc_Absyn_Static =0U,Cyc_Absyn_Abstract =1U,Cyc_Absyn_Public =2U,Cyc_Absyn_Extern =3U,Cyc_Absyn_ExternC =4U,Cyc_Absyn_Register =5U,Cyc_Absyn_Noreturn =6U};struct Cyc_Absyn_Tqual{long print_const: 1;long q_volatile: 1;long q_restrict: 1;long real_const: 1;unsigned loc;};
# 170
enum Cyc_Absyn_Size_of{Cyc_Absyn_Char_sz =0U,Cyc_Absyn_Short_sz =1U,Cyc_Absyn_Int_sz =2U,Cyc_Absyn_Long_sz =3U,Cyc_Absyn_LongLong_sz =4U,Cyc_Absyn_Int128_sz =5U};
# 180
enum Cyc_Absyn_Sign{Cyc_Absyn_Signed =0U,Cyc_Absyn_Unsigned =1U,Cyc_Absyn_None =2U};struct Cyc_Absyn_IntCon_Absyn_TyCon_struct{int tag;enum Cyc_Absyn_Sign f1;enum Cyc_Absyn_Size_of f2;};struct Cyc_Absyn_AppType_Absyn_Type_struct{int tag;void*f1;struct Cyc_List_List*f2;};struct Cyc_Absyn_ValueofType_Absyn_Type_struct{int tag;struct Cyc_Absyn_Exp*f1;};
# 596 "cyclone/library/compiler/absyn.h"
enum Cyc_Absyn_Primop{Cyc_Absyn_Plus =0U,Cyc_Absyn_Times =1U,Cyc_Absyn_Minus =2U,Cyc_Absyn_Div =3U,Cyc_Absyn_Mod =4U,Cyc_Absyn_Eq =5U,Cyc_Absyn_Neq =6U,Cyc_Absyn_Gt =7U,Cyc_Absyn_Lt =8U,Cyc_Absyn_Gte =9U,Cyc_Absyn_Lte =10U,Cyc_Absyn_Not =11U,Cyc_Absyn_Bitnot =12U,Cyc_Absyn_Bitand =13U,Cyc_Absyn_Bitor =14U,Cyc_Absyn_Bitxor =15U,Cyc_Absyn_Bitlshift =16U,Cyc_Absyn_Bitlrshift =17U,Cyc_Absyn_Numelts =18U,Cyc_Absyn_Tagof =19U,Cyc_Absyn_UDiv =20U,Cyc_Absyn_UMod =21U,Cyc_Absyn_UGt =22U,Cyc_Absyn_ULt =23U,Cyc_Absyn_UGte =24U,Cyc_Absyn_ULte =25U};
# 656
enum Cyc_Absyn_Coercion{Cyc_Absyn_Unknown_coercion =0U,Cyc_Absyn_No_coercion =1U,Cyc_Absyn_Null_to_NonNull =2U,Cyc_Absyn_Subset_coercion =3U,Cyc_Absyn_Other_coercion =4U};struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct{int tag;void*f1;struct Cyc_Absyn_Exp*f2;long f3;enum Cyc_Absyn_Coercion f4;};struct Cyc_Absyn_Exp{void*topt;void*r;unsigned loc;void*annot;};struct Cyc_Absyn_Vardecl{enum Cyc_Absyn_Scope sc;struct _tuple0*name;unsigned varloc;struct Cyc_Absyn_Tqual tq;void*type;struct Cyc_Absyn_Exp*initializer;void*rgn;struct Cyc_List_List*attributes;long escapes;long is_proto;struct Cyc_Absyn_Exp*rename;};
# 1066
void*Cyc_Absyn_compress(void*);
# 1242
struct Cyc_Absyn_Exp*Cyc_Absyn_valueof_exp(void*,unsigned);struct Cyc___cycFILE;
# 53 "./cyclone/library/std/cycboot.h"
extern struct Cyc___cycFILE*Cyc_stderr;struct Cyc_String_pa_PrintArg_struct{int tag;struct _fat_ptr f1;};struct Cyc_Int_pa_PrintArg_struct{int tag;unsigned long f1;};
# 75
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
# 100
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 74 "cyclone/library/compiler/absynpp.h"
struct _fat_ptr Cyc_Absynpp_prim2string(enum Cyc_Absyn_Primop);struct Cyc_Hashtable_Table;
# 42 "./cyclone/library/std/hashtable.h"
extern struct Cyc_Hashtable_Table*Cyc_Hashtable_create(int,int(*)(void*,void*),int(*)(void*));
# 53
extern void Cyc_Hashtable_insert(struct Cyc_Hashtable_Table*,void*,void*);struct Cyc_Set_Set;
# 50 "./cyclone/library/std/set.h"
extern struct Cyc_Set_Set*Cyc_Set_empty(int(*)(void*,void*));
# 62
extern struct Cyc_List_List*Cyc_Set_to_list(struct Cyc_Set_Set*);
# 64
extern struct Cyc_Set_Set*Cyc_Set_insert(struct Cyc_Set_Set*,void*);
# 83
extern struct Cyc_Set_Set*Cyc_Set_diff(struct Cyc_Set_Set*,struct Cyc_Set_Set*);
# 101
extern long Cyc_Set_member(struct Cyc_Set_Set*,void*);
# 115
extern void*Cyc_Set_fold(void*(*)(void*,void*),struct Cyc_Set_Set*,void*);struct Cyc_AssnDef_Uint_AssnDef_Term_struct{int tag;unsigned f1;void*f2;};struct Cyc_AssnDef_LogicVar_AssnDef_Term_struct{int tag;struct Cyc_Absyn_Vardecl*f1;int f2;void*f3;};struct Cyc_AssnDef_Unop_AssnDef_Term_struct{int tag;enum Cyc_Absyn_Primop f1;void*f2;void*f3;};struct Cyc_AssnDef_Binop_AssnDef_Term_struct{int tag;enum Cyc_Absyn_Primop f1;void*f2;void*f3;void*f4;};struct Cyc_AssnDef_Cast_AssnDef_Term_struct{int tag;void*f1;void*f2;};struct Cyc_AssnDef_Select_AssnDef_Term_struct{int tag;void*f1;void*f2;void*f3;};struct Cyc_AssnDef_Update_AssnDef_Term_struct{int tag;void*f1;void*f2;void*f3;};struct Cyc_AssnDef_Aggr_AssnDef_Term_struct{int tag;long f1;unsigned f2;struct Cyc_List_List*f3;void*f4;};struct Cyc_AssnDef_Proj_AssnDef_Term_struct{int tag;void*f1;unsigned f2;void*f3;};struct Cyc_AssnDef_AggrUpdate_AssnDef_Term_struct{int tag;void*f1;unsigned f2;void*f3;};struct Cyc_AssnDef_Addr_AssnDef_Term_struct{int tag;struct Cyc_Absyn_Vardecl*f1;void*f2;void*f3;};struct Cyc_AssnDef_Alloc_AssnDef_Term_struct{int tag;struct Cyc_Absyn_Exp*f1;int f2;void*f3;void*f4;void*f5;};struct Cyc_AssnDef_Offsetf_AssnDef_Term_struct{int tag;void*f1;unsigned f2;void*f3;};struct Cyc_AssnDef_Offseti_AssnDef_Term_struct{int tag;void*f1;void*f2;void*f3;};struct Cyc_AssnDef_Tagof_AssnDef_Term_struct{int tag;void*f1;};
# 144 "cyclone/library/compiler/assndef.h"
extern int Cyc_AssnDef_termcmp(void*,void*);
extern int Cyc_AssnDef_termhash(void*);
extern unsigned Cyc_AssnDef_term_size(void*);
extern struct _fat_ptr Cyc_AssnDef_term2string(void*);
# 161
extern void*Cyc_AssnDef_zero (void);
# 165
extern void*Cyc_AssnDef_uint(unsigned);
extern void*Cyc_AssnDef_cnst(struct Cyc_Absyn_Exp*);
extern void*Cyc_AssnDef_select(void*,void*,void*);
extern void*Cyc_AssnDef_update(void*,void*,void*);
# 171
extern void*Cyc_AssnDef_binop(enum Cyc_Absyn_Primop,void*,void*,void*);
# 174
extern void*Cyc_AssnDef_tagof_tm(void*);
extern void*Cyc_AssnDef_proj(void*,unsigned,void*);
extern void*Cyc_AssnDef_aggr_update(void*,unsigned,void*);
# 184
extern void*Cyc_AssnDef_numelts_term(void*);
# 190
extern void*Cyc_AssnDef_fresh_var(struct Cyc_Absyn_Vardecl*,void*);
# 205
extern void*Cyc_AssnDef_get_term_type(void*);
# 219
enum Cyc_AssnDef_Primreln{Cyc_AssnDef_Eq =0U,Cyc_AssnDef_Neq =1U,Cyc_AssnDef_SLt =2U,Cyc_AssnDef_SLte =3U,Cyc_AssnDef_ULt =4U,Cyc_AssnDef_ULte =5U};struct Cyc_AssnDef_True_AssnDef_Assn_struct{int tag;};struct Cyc_AssnDef_Prim_AssnDef_Assn_struct{int tag;void*f1;enum Cyc_AssnDef_Primreln f2;void*f3;};struct Cyc_AssnDef_And_AssnDef_Assn_struct{int tag;void*f1;void*f2;};struct Cyc_AssnDef_Or_AssnDef_Assn_struct{int tag;void*f1;void*f2;};
# 239
int Cyc_AssnDef_assncmp(void*,void*);
# 241
extern struct _fat_ptr Cyc_AssnDef_assn2dag(void*);
# 243
extern struct Cyc_AssnDef_True_AssnDef_Assn_struct Cyc_AssnDef_true_assn;
# 246
extern void*Cyc_AssnDef_and(void*,void*);
extern void*Cyc_AssnDef_or(void*,void*);
extern void*Cyc_AssnDef_not(void*);
# 252
extern void*Cyc_AssnDef_slt(void*,void*);
# 254
extern void*Cyc_AssnDef_ult(void*,void*);
# 360
extern void*Cyc_AssnDef_widen(void*);
# 370
extern struct Cyc_Hashtable_Table*Cyc_AssnDef_empty_term_table (void);
extern void*Cyc_AssnDef_subst_table(struct Cyc_Hashtable_Table*,void*);struct _tuple11{unsigned f0;long f1;};
# 29 "cyclone/library/compiler/evexp.h"
extern struct _tuple11 Cyc_Evexp_eval_const_uint_exp(struct Cyc_Absyn_Exp*);
# 92 "cyclone/library/compiler/flags.h"
extern long Cyc_Flags_print_unprovable;
# 144
extern unsigned Cyc_Flags_max_vc_paths;
# 148
extern unsigned Cyc_Flags_max_vc_term_size;
# 38 "cyclone/library/compiler/tcutil.h"
long Cyc_Tcutil_is_signed_type(void*);
# 42
long Cyc_Tcutil_is_array_type(void*);
# 48
long Cyc_Tcutil_is_nullable_pointer_type(void*,long);
# 73
struct Cyc_Absyn_Exp*Cyc_Tcutil_get_type_bound(void*);
# 128
int Cyc_Tcutil_typecmp(void*,void*);
# 221
long Cyc_Tcutil_is_pure_exp(struct Cyc_Absyn_Exp*);struct Cyc___cycFILE;
# 98 "bazel-out/k8-fastbuild/bin/cyclone/library/std/libc/stdio.h"
extern struct Cyc___cycFILE*Cyc_stderr;
# 127
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
# 161
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 51 "cyclone/library/compiler/warn.h"
void*Cyc_Warn_impos(struct _fat_ptr,struct _fat_ptr);
# 32 "cyclone/library/compiler/pratt_prover.cyc"
extern void**Cyc_Hashtable_lookup_ptr_opt(struct Cyc_Hashtable_Table*,void*);
# 45
static const int Cyc_PrattProver_INT_MIN=(- 2147483647)- 1;
# 48
static const long long Cyc_PrattProver_LLONG_MIN=(- 9223372036854775807ULL)- (long long)1;struct Cyc_PrattProver_Node;struct Cyc_PrattProver_Distance{struct Cyc_PrattProver_Distance*next;struct Cyc_PrattProver_Node*target;int dist;};struct _union_ShortestPathInfo_Infinity{int tag;int val;};struct _union_ShortestPathInfo_Shortest{int tag;int val;};struct _union_ShortestPathInfo_Current{int tag;int val;};union Cyc_PrattProver_ShortestPathInfo{struct _union_ShortestPathInfo_Infinity Infinity;struct _union_ShortestPathInfo_Shortest Shortest;struct _union_ShortestPathInfo_Current Current;};
# 193
union Cyc_PrattProver_ShortestPathInfo Cyc_PrattProver_infinity={.Infinity={1,0}};struct Cyc_PrattProver_Node{struct Cyc_PrattProver_Node*next;void*rep;long broken_as_signed: 1;long broken_as_unsigned: 1;struct Cyc_PrattProver_Distance*unsigned_distances;struct Cyc_PrattProver_Distance*signed_distances;int signeddistFromS;int unsigneddistFromS;union Cyc_PrattProver_ShortestPathInfo shortest_path_info;};struct Cyc_PrattProver_Graph{struct Cyc_PrattProver_Graph*next;struct Cyc_PrattProver_Node*rows;struct Cyc_Hashtable_Table*map;long changed;};
# 220
static unsigned Cyc_PrattProver_num_graphs(struct Cyc_PrattProver_Graph*gs){struct Cyc_PrattProver_Graph*_T0;unsigned _T1;
unsigned c=0U;
_TL3: if(gs!=0)goto _TL1;else{goto _TL2;}
_TL1: c= c + 1;_T0= gs;
# 222
gs= _T0->next;goto _TL3;_TL2: _T1= c;
# 224
return _T1;}
# 227
static struct Cyc_Hashtable_Table*Cyc_PrattProver_empty_map(unsigned n){unsigned _T0;int _T1;int(*_T2)(void*,void*);int(*_T3)(void*);struct Cyc_Hashtable_Table*_T4;_T0= n;_T1= (int)_T0;_T2= Cyc_Core_ptrcmp;_T3= Cyc_AssnDef_termhash;_T4= 
Cyc_Hashtable_create(_T1,_T2,_T3);return _T4;}
# 233
static struct Cyc_PrattProver_Graph*Cyc_PrattProver_true_graph (void){struct Cyc_PrattProver_Graph*_T0;{struct Cyc_PrattProver_Graph*_T1=_cycalloc(sizeof(struct Cyc_PrattProver_Graph));_T1->next= 0;_T1->rows= 0;({__typeof__(Cyc_PrattProver_empty_map(17U))_T2=Cyc_PrattProver_empty_map(17U);_T1->map= _T2;});_T1->changed= 0;_T0= (struct Cyc_PrattProver_Graph*)_T1;}return _T0;}
# 235
static int Cyc_PrattProver_constraints_added=0;
static int Cyc_PrattProver_graphs_copied=0;
static int Cyc_PrattProver_max_lookup=0;
static int Cyc_PrattProver_already_seen_hits=0;
# 240
static void Cyc_PrattProver_print_shortestpathinfo(union Cyc_PrattProver_ShortestPathInfo info){union Cyc_PrattProver_ShortestPathInfo _T0;struct _union_ShortestPathInfo_Shortest _T1;unsigned _T2;struct Cyc___cycFILE*_T3;struct _fat_ptr _T4;struct _fat_ptr _T5;union Cyc_PrattProver_ShortestPathInfo _T6;struct _union_ShortestPathInfo_Shortest _T7;struct Cyc_Int_pa_PrintArg_struct _T8;int _T9;struct Cyc___cycFILE*_TA;struct _fat_ptr _TB;struct _fat_ptr _TC;union Cyc_PrattProver_ShortestPathInfo _TD;struct _union_ShortestPathInfo_Current _TE;struct Cyc_Int_pa_PrintArg_struct _TF;int _T10;struct Cyc___cycFILE*_T11;struct _fat_ptr _T12;struct _fat_ptr _T13;{int _T14;_T0= info;_T1= _T0.Shortest;_T2= _T1.tag;switch(_T2){case 1: _T3= Cyc_stderr;_T4= 
# 243
_tag_fat("not reachable from s\n",sizeof(char),22U);_T5= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T3,_T4,_T5);goto _LL0;case 2: _T6= info;_T7= _T6.Shortest;_T14= _T7.val;{int d=_T14;{struct Cyc_Int_pa_PrintArg_struct _T15;_T15.tag= 1;_T9= d;
# 246
_T15.f1= (unsigned long)_T9;_T8= _T15;}{struct Cyc_Int_pa_PrintArg_struct _T15=_T8;void*_T16[1];_T16[0]= & _T15;_TA= Cyc_stderr;_TB= _tag_fat("shortest distance from s is %d\n",sizeof(char),32U);_TC= _tag_fat(_T16,sizeof(void*),1);Cyc_fprintf(_TA,_TB,_TC);}goto _LL0;}default: _TD= info;_TE= _TD.Current;_T14= _TE.val;{int d=_T14;{struct Cyc_Int_pa_PrintArg_struct _T15;_T15.tag= 1;_T10= d;
# 249
_T15.f1= (unsigned long)_T10;_TF= _T15;}{struct Cyc_Int_pa_PrintArg_struct _T15=_TF;void*_T16[1];_T16[0]= & _T15;_T11= Cyc_stderr;_T12= _tag_fat("current distance from s is %d\n",sizeof(char),31U);_T13= _tag_fat(_T16,sizeof(void*),1);Cyc_fprintf(_T11,_T12,_T13);}goto _LL0;}}_LL0:;}
# 252
return;}
# 255
void Cyc_PrattProver_print_graph(struct Cyc_PrattProver_Graph*g){struct Cyc___cycFILE*_T0;struct _fat_ptr _T1;struct _fat_ptr _T2;struct Cyc_PrattProver_Graph*_T3;struct Cyc_PrattProver_Node*_T4;struct Cyc___cycFILE*_T5;struct _fat_ptr _T6;struct _fat_ptr _T7;struct Cyc_PrattProver_Graph*_T8;struct Cyc_String_pa_PrintArg_struct _T9;struct Cyc_String_pa_PrintArg_struct _TA;struct Cyc_PrattProver_Distance*_TB;struct Cyc_PrattProver_Node*_TC;void*_TD;struct Cyc_Int_pa_PrintArg_struct _TE;struct Cyc_PrattProver_Distance*_TF;int _T10;struct Cyc___cycFILE*_T11;struct _fat_ptr _T12;struct _fat_ptr _T13;struct Cyc_PrattProver_Distance*_T14;struct Cyc_String_pa_PrintArg_struct _T15;struct Cyc_String_pa_PrintArg_struct _T16;struct Cyc_PrattProver_Distance*_T17;struct Cyc_PrattProver_Node*_T18;void*_T19;struct Cyc_Int_pa_PrintArg_struct _T1A;struct Cyc_PrattProver_Distance*_T1B;int _T1C;struct Cyc___cycFILE*_T1D;struct _fat_ptr _T1E;struct _fat_ptr _T1F;struct Cyc_PrattProver_Distance*_T20;struct Cyc_PrattProver_Node*_T21;struct Cyc___cycFILE*_T22;struct _fat_ptr _T23;struct _fat_ptr _T24;_T0= Cyc_stderr;_T1= 
_tag_fat("{",sizeof(char),2U);_T2= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T0,_T1,_T2);_T3= g;_T4= _T3->rows;
if(_T4!=0)goto _TL5;_T5= Cyc_stderr;_T6= 
_tag_fat("<true>",sizeof(char),7U);_T7= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T5,_T6,_T7);goto _TL6;
# 260
_TL5: _T8= g;{struct Cyc_PrattProver_Node*rs=_T8->rows;_TLA: if(rs!=0)goto _TL8;else{goto _TL9;}
_TL8:{struct Cyc_PrattProver_Node*_T25=rs;struct Cyc_PrattProver_Distance*_T26;struct Cyc_PrattProver_Distance*_T27;void*_T28;{struct Cyc_PrattProver_Node _T29=*_T25;_T28= _T29.rep;_T27= _T29.unsigned_distances;_T26= _T29.signed_distances;}{void*rep=_T28;struct Cyc_PrattProver_Distance*uds=_T27;struct Cyc_PrattProver_Distance*sds=_T26;
struct _fat_ptr s=Cyc_AssnDef_term2string(rep);
# 270
_TLE: if(uds!=0)goto _TLC;else{goto _TLD;}
_TLC:{struct Cyc_String_pa_PrintArg_struct _T29;_T29.tag= 0;_T29.f1= s;_T9= _T29;}{struct Cyc_String_pa_PrintArg_struct _T29=_T9;{struct Cyc_String_pa_PrintArg_struct _T2A;_T2A.tag= 0;_TB= uds;_TC= _TB->target;_TD= _TC->rep;({__typeof__(Cyc_AssnDef_term2string(_TD))_T2B=Cyc_AssnDef_term2string(_TD);_T2A.f1= _T2B;});_TA= _T2A;}{struct Cyc_String_pa_PrintArg_struct _T2A=_TA;{struct Cyc_Int_pa_PrintArg_struct _T2B;_T2B.tag= 1;_TF= uds;_T10= _TF->dist;_T2B.f1= (unsigned long)_T10;_TE= _T2B;}{struct Cyc_Int_pa_PrintArg_struct _T2B=_TE;void*_T2C[3];_T2C[0]= & _T29;_T2C[1]= & _T2A;_T2C[2]= & _T2B;_T11= Cyc_stderr;_T12= _tag_fat("  %s - %s U<= %d\n ",sizeof(char),19U);_T13= _tag_fat(_T2C,sizeof(void*),3);Cyc_fprintf(_T11,_T12,_T13);}}}_T14= uds;
# 270
uds= _T14->next;goto _TLE;_TLD:
# 272
 _TL12: if(sds!=0)goto _TL10;else{goto _TL11;}
_TL10:{struct Cyc_String_pa_PrintArg_struct _T29;_T29.tag= 0;_T29.f1= s;_T15= _T29;}{struct Cyc_String_pa_PrintArg_struct _T29=_T15;{struct Cyc_String_pa_PrintArg_struct _T2A;_T2A.tag= 0;_T17= sds;_T18= _T17->target;_T19= _T18->rep;({__typeof__(Cyc_AssnDef_term2string(_T19))_T2B=Cyc_AssnDef_term2string(_T19);_T2A.f1= _T2B;});_T16= _T2A;}{struct Cyc_String_pa_PrintArg_struct _T2A=_T16;{struct Cyc_Int_pa_PrintArg_struct _T2B;_T2B.tag= 1;_T1B= sds;_T1C= _T1B->dist;_T2B.f1= (unsigned long)_T1C;_T1A= _T2B;}{struct Cyc_Int_pa_PrintArg_struct _T2B=_T1A;void*_T2C[3];_T2C[0]= & _T29;_T2C[1]= & _T2A;_T2C[2]= & _T2B;_T1D= Cyc_stderr;_T1E= _tag_fat("  %s - %s S<= %d\n ",sizeof(char),19U);_T1F= _tag_fat(_T2C,sizeof(void*),3);Cyc_fprintf(_T1D,_T1E,_T1F);}}}_T20= sds;
# 272
sds= _T20->next;goto _TL12;_TL11:;}}_T21= rs;
# 260
rs= _T21->next;goto _TLA;_TL9:;}_TL6: _T22= Cyc_stderr;_T23= 
# 276
_tag_fat("}\n",sizeof(char),3U);_T24= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T22,_T23,_T24);}
# 280
void Cyc_PrattProver_print_graphs(struct Cyc_PrattProver_Graph*g){struct Cyc___cycFILE*_T0;struct _fat_ptr _T1;struct _fat_ptr _T2;struct Cyc___cycFILE*_T3;struct _fat_ptr _T4;struct _fat_ptr _T5;struct Cyc_Int_pa_PrintArg_struct _T6;int _T7;struct Cyc___cycFILE*_T8;struct _fat_ptr _T9;struct _fat_ptr _TA;struct Cyc_PrattProver_Graph*_TB;struct Cyc___cycFILE*_TC;struct _fat_ptr _TD;struct _fat_ptr _TE;_T0= Cyc_stderr;_T1= 
_tag_fat("Graphs:-----------\n",sizeof(char),20U);_T2= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T0,_T1,_T2);
if(g!=0)goto _TL13;_T3= Cyc_stderr;_T4= 
_tag_fat("<false>\n",sizeof(char),9U);_T5= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T3,_T4,_T5);goto _TL14;
# 285
_TL13:{int i=0;_TL18: if(g!=0)goto _TL16;else{goto _TL17;}
_TL16:{struct Cyc_Int_pa_PrintArg_struct _TF;_TF.tag= 1;_T7= i;_TF.f1= (unsigned long)_T7;_T6= _TF;}{struct Cyc_Int_pa_PrintArg_struct _TF=_T6;void*_T10[1];_T10[0]= & _TF;_T8= Cyc_stderr;_T9= _tag_fat("graph %d:\n",sizeof(char),11U);_TA= _tag_fat(_T10,sizeof(void*),1);Cyc_fprintf(_T8,_T9,_TA);}
Cyc_PrattProver_print_graph(g);
# 285
i= i + 1;_TB= g;g= _TB->next;goto _TL18;_TL17:;}_TL14: _TC= Cyc_stderr;_TD= 
# 290
_tag_fat("------------------\n",sizeof(char),20U);_TE= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_TC,_TD,_TE);}char Cyc_PrattProver_Inconsistent[13U]="Inconsistent";struct Cyc_PrattProver_Inconsistent_exn_struct{char*tag;};
# 295
struct Cyc_PrattProver_Inconsistent_exn_struct Cyc_PrattProver_inconsistent={Cyc_PrattProver_Inconsistent};
# 298
static struct Cyc_PrattProver_Node*Cyc_PrattProver_term2node(struct Cyc_PrattProver_Graph*,void*);
static void Cyc_PrattProver_set_distance(struct Cyc_PrattProver_Graph*,void*,void*,int,long);
static void Cyc_PrattProver_add_constraint(struct Cyc_PrattProver_Graph*,void*,enum Cyc_AssnDef_Primreln,void*);
static void Cyc_PrattProver_add_eq(struct Cyc_PrattProver_Graph*,void*,void*);struct _tuple14{long f0;unsigned f1;void*f2;};
static struct _tuple14 Cyc_PrattProver_subst_term_with_const(struct Cyc_PrattProver_Graph*,void*);
# 305
static struct Cyc_Absyn_Exp*Cyc_PrattProver_strip_cast(struct Cyc_Absyn_Exp*e){struct Cyc_Absyn_Exp*_T0;int*_T1;int _T2;void*_T3;int*_T4;int _T5;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T6;void*_T7;int*_T8;int _T9;void*_TA;enum Cyc_Absyn_Size_of _TB;int _TC;enum Cyc_Absyn_Size_of _TD;int _TE;struct Cyc_Absyn_Exp*_TF;
LOOP: _T0= e;{
void*_T10=_T0->r;struct Cyc_Absyn_Exp*_T11;void*_T12;_T1= (int*)_T10;_T2= *_T1;if(_T2!=14)goto _TL19;{struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*_T13=(struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct*)_T10;_T3= _T13->f1;_T12= (void*)_T3;_T11= _T13->f2;}{void*tp2=_T12;struct Cyc_Absyn_Exp*e2=_T11;{
# 309
void*_T13=Cyc_Absyn_compress(tp2);enum Cyc_Absyn_Size_of _T14;_T4= (int*)_T13;_T5= *_T4;if(_T5!=0)goto _TL1B;_T6= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T13;_T7= _T6->f1;_T8= (int*)_T7;_T9= *_T8;if(_T9!=1)goto _TL1D;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T15=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T13;_TA= _T15->f1;{struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*_T16=(struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*)_TA;_T14= _T16->f2;}}{enum Cyc_Absyn_Size_of s=_T14;_TB= s;_TC= (int)_TB;
# 311
if(_TC==2)goto _TL21;else{goto _TL22;}_TL22: _TD= s;_TE= (int)_TD;if(_TE==3)goto _TL21;else{goto _TL1F;}
_TL21: e= e2;goto LOOP;_TL1F: goto _LL5;}_TL1D: goto _LL8;_TL1B: _LL8: goto _LL5;_LL5:;}goto _LL0;}_TL19: goto _LL0;_LL0:;}_TF= e;
# 323
return _TF;}
# 330
static void Cyc_PrattProver_add_type_info(struct Cyc_PrattProver_Graph*g,void*term){void*_T0;int*_T1;unsigned _T2;void*_T3;struct Cyc_AssnDef_Unop_AssnDef_Term_struct*_T4;enum Cyc_Absyn_Primop _T5;void*_T6;void*_T7;struct Cyc_PrattProver_Graph*_T8;void*_T9;void*_TA;int _TB;void*_TC;void*_TD;struct Cyc_PrattProver_Graph*_TE;void*_TF;void*_T10;long _T11;long _T12;long _T13;long _T14;int*_T15;int _T16;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T17;void*_T18;int*_T19;unsigned _T1A;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T1B;void*_T1C;struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*_T1D;enum Cyc_Absyn_Sign _T1E;struct Cyc_Absyn_AppType_Absyn_Type_struct*_T1F;struct Cyc_List_List*_T20;struct Cyc_List_List*_T21;void*_T22;int*_T23;int _T24;struct Cyc_Absyn_Exp*_T25;
# 334
void*z=Cyc_AssnDef_zero();
Cyc_PrattProver_set_distance(g,term,z,2147483647,1);
Cyc_PrattProver_set_distance(g,z,term,0,0);{void*_T26;_T0= term;_T1= (int*)_T0;_T2= *_T1;switch(_T2){case 3: _T3= term;_T4= (struct Cyc_AssnDef_Unop_AssnDef_Term_struct*)_T3;_T5= _T4->f1;if(_T5!=Cyc_Absyn_Numelts)goto _TL24;_T6= term;{struct Cyc_AssnDef_Unop_AssnDef_Term_struct*_T27=(struct Cyc_AssnDef_Unop_AssnDef_Term_struct*)_T6;_T7= _T27->f2;_T26= (void*)_T7;}{void*x=_T26;_T8= g;_T9= term;_TA= z;_TB= 2147483647 - 1;
# 340
Cyc_PrattProver_set_distance(_T8,_T9,_TA,_TB,0);
# 342
Cyc_PrattProver_term2node(g,x);goto _LL0;}_TL24: goto _LL7;case 12: _TC= term;{struct Cyc_AssnDef_Alloc_AssnDef_Term_struct*_T27=(struct Cyc_AssnDef_Alloc_AssnDef_Term_struct*)_TC;_TD= _T27->f3;_T26= (void*)_TD;}{void*n=_T26;
# 346
Cyc_PrattProver_add_constraint(g,z,4U,term);_TE= g;_TF= 
Cyc_AssnDef_numelts_term(term);_T10= n;Cyc_PrattProver_add_constraint(_TE,_TF,5U,_T10);goto _LL0;}case 11:
# 351
 Cyc_PrattProver_add_constraint(g,z,4U,term);goto _LL0;default: _LL7: goto _LL0;}_LL0:;}{
# 356
void*topt=Cyc_AssnDef_get_term_type(term);
if(topt==0)goto _TL26;{
void*t=topt;
struct Cyc_Absyn_Exp*eopt=Cyc_Tcutil_get_type_bound(t);
if(eopt==0)goto _TL28;_T11= Cyc_Tcutil_is_pure_exp(eopt);if(!_T11)goto _TL28;{
void*t1=Cyc_AssnDef_numelts_term(term);
# 363
struct Cyc_Absyn_Exp*e=Cyc_PrattProver_strip_cast(eopt);
# 365
void*t2;
struct _tuple11 _T26=Cyc_Evexp_eval_const_uint_exp(e);long _T27;unsigned _T28;_T28= _T26.f0;_T27= _T26.f1;{unsigned cn=_T28;long known=_T27;_T12= known;
if(!_T12)goto _TL2A;
t2= Cyc_AssnDef_uint(cn);goto _TL2B;
# 370
_TL2A: t2= Cyc_AssnDef_cnst(e);_TL2B: _T13= 
# 374
Cyc_Tcutil_is_nullable_pointer_type(t,0);if(_T13)goto _TL2C;else{goto _TL2E;}
_TL2E: Cyc_PrattProver_add_constraint(g,t2,5U,t1);
Cyc_PrattProver_add_constraint(g,t2,3U,t1);
Cyc_PrattProver_add_constraint(g,z,4U,term);_T14= 
# 379
Cyc_Tcutil_is_array_type(t);if(!_T14)goto _TL2F;
Cyc_PrattProver_add_constraint(g,t1,5U,t2);
Cyc_PrattProver_add_constraint(g,t1,3U,t2);goto _TL30;_TL2F: _TL30: goto _TL2D;_TL2C: _TL2D:;}}goto _TL29;_TL28: _TL29: {
# 385
void*_T26=Cyc_Absyn_compress(t);void*_T27;_T15= (int*)_T26;_T16= *_T15;if(_T16!=0)goto _TL31;_T17= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T26;_T18= _T17->f1;_T19= (int*)_T18;_T1A= *_T19;switch(_T1A){case 1: _T1B= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T26;_T1C= _T1B->f1;_T1D= (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct*)_T1C;_T1E= _T1D->f1;if(_T1E!=Cyc_Absyn_Unsigned)goto _TL34;
# 387
Cyc_PrattProver_add_constraint(g,z,5U,term);goto _LLC;_TL34: goto _LL11;case 5: _T1F= (struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T26;_T20= _T1F->f2;if(_T20==0)goto _TL36;{struct Cyc_Absyn_AppType_Absyn_Type_struct*_T28=(struct Cyc_Absyn_AppType_Absyn_Type_struct*)_T26;_T21= _T28->f2;{struct Cyc_List_List _T29=*_T21;_T22= _T29.hd;_T27= (void*)_T22;}}{void*v=_T27;{
# 390
void*_T28=Cyc_Absyn_compress(v);void*_T29;_T23= (int*)_T28;_T24= *_T23;if(_T24!=9)goto _TL38;{struct Cyc_Absyn_ValueofType_Absyn_Type_struct*_T2A=(struct Cyc_Absyn_ValueofType_Absyn_Type_struct*)_T28;_T29= _T2A->f1;}{struct Cyc_Absyn_Exp*e=_T29;
# 392
void*c=Cyc_AssnDef_cnst(e);
Cyc_PrattProver_add_eq(g,term,c);goto _LL13;}_TL38: _T29= _T28;{void*v2=_T29;_T25= 
# 396
Cyc_Absyn_valueof_exp(v2,0U);{void*c=Cyc_AssnDef_cnst(_T25);
Cyc_PrattProver_add_eq(g,term,c);goto _LL13;}}_LL13:;}goto _LLC;}_TL36: goto _LL11;default: goto _LL11;}goto _TL32;_TL31: _LL11: goto _LLC;_TL32: _LLC:;}}goto _TL27;_TL26: _TL27:;}}
# 409
static struct Cyc_PrattProver_Node*Cyc_PrattProver_term2node(struct Cyc_PrattProver_Graph*g,void*t){struct Cyc_PrattProver_Node**(*_T0)(struct Cyc_Hashtable_Table*,void*);void**(*_T1)(struct Cyc_Hashtable_Table*,void*);struct Cyc_PrattProver_Graph*_T2;struct Cyc_Hashtable_Table*_T3;void*_T4;struct Cyc_PrattProver_Node**_T5;struct Cyc_PrattProver_Node*_T6;unsigned _T7;unsigned _T8;void*_T9;struct Cyc_PrattProver_Graph*_TA;struct Cyc_PrattProver_Graph*_TB;struct Cyc_PrattProver_Node*_TC;void(*_TD)(struct Cyc_Hashtable_Table*,void*,struct Cyc_PrattProver_Node*);void(*_TE)(struct Cyc_Hashtable_Table*,void*,void*);struct Cyc_PrattProver_Graph*_TF;struct Cyc_Hashtable_Table*_T10;void*_T11;struct Cyc_PrattProver_Node*_T12;struct Cyc_PrattProver_Node*_T13;struct Cyc_PrattProver_Node*_T14;struct Cyc_PrattProver_Node*_T15;void*_T16;int*_T17;int _T18;void*_T19;struct Cyc_AssnDef_Binop_AssnDef_Term_struct*_T1A;enum Cyc_Absyn_Primop _T1B;void*_T1C;struct Cyc_AssnDef_Binop_AssnDef_Term_struct*_T1D;void*_T1E;int*_T1F;int _T20;void*_T21;void*_T22;void*_T23;struct Cyc_PrattProver_Node*_T24;struct Cyc_PrattProver_Node**_T25;struct Cyc_PrattProver_Node*_T26;struct Cyc_PrattProver_Node**_T27;void(*_T28)(struct Cyc_Hashtable_Table*,void*,struct Cyc_PrattProver_Node*);void(*_T29)(struct Cyc_Hashtable_Table*,void*,void*);struct Cyc_PrattProver_Graph*_T2A;struct Cyc_Hashtable_Table*_T2B;void*_T2C;struct Cyc_PrattProver_Node*_T2D;struct Cyc_PrattProver_Node**_T2E;struct Cyc_PrattProver_Node*_T2F;_T1= Cyc_Hashtable_lookup_ptr_opt;{
# 411
struct Cyc_PrattProver_Node**(*_T30)(struct Cyc_Hashtable_Table*,void*)=(struct Cyc_PrattProver_Node**(*)(struct Cyc_Hashtable_Table*,void*))_T1;_T0= _T30;}_T2= g;_T3= _T2->map;_T4= t;{struct Cyc_PrattProver_Node**nopt=_T0(_T3,_T4);
if(nopt==0)goto _TL3A;_T5= nopt;_T6= *_T5;
return _T6;_TL3A: _T7= 
# 415
Cyc_AssnDef_term_size(t);_T8= Cyc_Flags_max_vc_term_size;if(_T7 <= _T8)goto _TL3C;_T9= 
Cyc_AssnDef_get_term_type(t);t= Cyc_AssnDef_fresh_var(0,_T9);goto _TL3D;_TL3C: _TL3D: _TA= g;{
struct Cyc_PrattProver_Node**prev=& _TA->rows;_TB= g;{
struct Cyc_PrattProver_Node*r=_TB->rows;_TL41: if(r!=0)goto _TL3F;else{goto _TL40;}
# 421
_TL3F:{struct Cyc_PrattProver_Node*n=r;_TC= n;{
void*rep=_TC->rep;
int c=Cyc_AssnDef_termcmp(t,rep);
if(c <= 1)goto _TL42;goto _TL40;_TL42:
# 426
 if(c!=0)goto _TL44;_TE= Cyc_Hashtable_insert;{
void(*_T30)(struct Cyc_Hashtable_Table*,void*,struct Cyc_PrattProver_Node*)=(void(*)(struct Cyc_Hashtable_Table*,void*,struct Cyc_PrattProver_Node*))_TE;_TD= _T30;}_TF= g;_T10= _TF->map;_T11= t;_T12= n;_TD(_T10,_T11,_T12);_T13= n;
return _T13;_TL44: _T14= n;
# 430
prev= & _T14->next;}}_T15= r;
# 418
r= _T15->next;goto _TL41;_TL40:;}{
# 432
struct Cyc_PrattProver_Node*n;{unsigned _T30;void*_T31;_T16= t;_T17= (int*)_T16;_T18= *_T17;if(_T18!=4)goto _TL46;_T19= t;_T1A= (struct Cyc_AssnDef_Binop_AssnDef_Term_struct*)_T19;_T1B= _T1A->f1;if(_T1B!=Cyc_Absyn_Plus)goto _TL48;_T1C= t;_T1D= (struct Cyc_AssnDef_Binop_AssnDef_Term_struct*)_T1C;_T1E= _T1D->f3;_T1F= (int*)_T1E;_T20= *_T1F;if(_T20!=0)goto _TL4A;_T21= t;{struct Cyc_AssnDef_Binop_AssnDef_Term_struct*_T32=(struct Cyc_AssnDef_Binop_AssnDef_Term_struct*)_T21;_T22= _T32->f2;_T31= (void*)_T22;_T23= _T32->f3;{struct Cyc_AssnDef_Uint_AssnDef_Term_struct*_T33=(struct Cyc_AssnDef_Uint_AssnDef_Term_struct*)_T23;_T30= _T33->f1;}}{void*t1=_T31;unsigned c2=_T30;{struct Cyc_PrattProver_Node*_T32=_cycalloc(sizeof(struct Cyc_PrattProver_Node));_T25= prev;
# 435
_T32->next= *_T25;_T32->rep= t;_T32->broken_as_signed= 0;_T32->broken_as_unsigned= 0;_T32->unsigned_distances= 0;_T32->signed_distances= 0;_T32->signeddistFromS= 0;_T32->unsigneddistFromS= 0;_T32->shortest_path_info= Cyc_PrattProver_infinity;_T24= (struct Cyc_PrattProver_Node*)_T32;}n= _T24;goto _LL0;}_TL4A: goto _LL3;_TL48: goto _LL3;_TL46: _LL3:{struct Cyc_PrattProver_Node*_T32=_cycalloc(sizeof(struct Cyc_PrattProver_Node));_T27= prev;
# 438
_T32->next= *_T27;_T32->rep= t;_T32->broken_as_signed= 1;_T32->broken_as_unsigned= 1;_T32->unsigned_distances= 0;_T32->signed_distances= 0;_T32->signeddistFromS= 0;_T32->unsigneddistFromS= 0;_T32->shortest_path_info= Cyc_PrattProver_infinity;_T26= (struct Cyc_PrattProver_Node*)_T32;}n= _T26;goto _LL0;_LL0:;}_T29= Cyc_Hashtable_insert;{
# 441
void(*_T30)(struct Cyc_Hashtable_Table*,void*,struct Cyc_PrattProver_Node*)=(void(*)(struct Cyc_Hashtable_Table*,void*,struct Cyc_PrattProver_Node*))_T29;_T28= _T30;}_T2A= g;_T2B= _T2A->map;_T2C= t;_T2D= n;_T28(_T2B,_T2C,_T2D);_T2E= prev;
*_T2E= n;
Cyc_PrattProver_add_type_info(g,t);_T2F= n;
return _T2F;}}}}
# 451
static int*Cyc_PrattProver_lookup_dist(struct Cyc_PrattProver_Node*source,struct Cyc_PrattProver_Node*target,long is_signed){int*_T0;struct Cyc_PrattProver_Distance*_T1;long _T2;struct Cyc_PrattProver_Node*_T3;struct Cyc_PrattProver_Node*_T4;struct Cyc_PrattProver_Distance*_T5;struct Cyc_PrattProver_Node*_T6;struct Cyc_PrattProver_Node*_T7;struct Cyc_PrattProver_Distance*_T8;int*_T9;struct Cyc_PrattProver_Distance*_TA;
static int zero=0;
if(source!=target)goto _TL4C;_T0= & zero;
return _T0;_TL4C: _T2= is_signed;
if(!_T2)goto _TL4E;_T3= source;_T1= _T3->signed_distances;goto _TL4F;_TL4E: _T4= source;_T1= _T4->unsigned_distances;_TL4F: {struct Cyc_PrattProver_Distance*ds=_T1;
_TL53: if(ds!=0)goto _TL51;else{goto _TL52;}
_TL51: _T5= ds;_T6= _T5->target;_T7= target;if(_T6!=_T7)goto _TL54;_T8= ds;_T9= & _T8->dist;
return _T9;_TL54: _TA= ds;
# 456
ds= _TA->next;goto _TL53;_TL52:
# 459
 return 0;}}
# 465
static long Cyc_PrattProver_eq_nodes(struct Cyc_PrattProver_Node*r,struct Cyc_PrattProver_Node*t,long is_signed){int _T0;int*_T1;int _T2;int*_T3;int _T4;
if(r!=t)goto _TL56;
return 1;_TL56: {
int*rt_dist=Cyc_PrattProver_lookup_dist(r,t,is_signed);
int*tr_dist=Cyc_PrattProver_lookup_dist(t,r,is_signed);
if(rt_dist==0)goto _TL58;_T1= rt_dist;_T2= *_T1;if(_T2!=0)goto _TL58;if(tr_dist==0)goto _TL58;_T3= tr_dist;_T4= *_T3;_T0= _T4==0;goto _TL59;_TL58: _T0= 0;_TL59: return _T0;}}
# 474
static long Cyc_PrattProver_equal_nodes(struct Cyc_PrattProver_Node*s,struct Cyc_PrattProver_Node*r){int _T0;long _T1;_T1= 
Cyc_PrattProver_eq_nodes(s,r,0);if(!_T1)goto _TL5A;_T0= 1;goto _TL5B;_TL5A: _T0= Cyc_PrattProver_eq_nodes(s,r,1);_TL5B: return _T0;}struct _tuple15{void*f0;void*f1;};
# 478
static long Cyc_PrattProver_equal_terms(struct Cyc_PrattProver_Graph*g,void*t1,void*t2){long _T0;long _T1;long _T2;struct _tuple15 _T3;void*_T4;int*_T5;unsigned _T6;void*_T7;int*_T8;int _T9;void*_TA;void*_TB;void*_TC;void*_TD;enum Cyc_Absyn_Primop _TE;int _TF;enum Cyc_Absyn_Primop _T10;int _T11;long _T12;void*_T13;int*_T14;int _T15;void*_T16;void*_T17;void*_T18;void*_T19;void*_T1A;void*_T1B;enum Cyc_Absyn_Primop _T1C;int _T1D;enum Cyc_Absyn_Primop _T1E;int _T1F;int _T20;long _T21;void*_T22;int*_T23;int _T24;void*_T25;void*_T26;void*_T27;void*_T28;void*_T29;void*_T2A;int _T2B;int _T2C;void*_T2D;int*_T2E;int _T2F;void*_T30;void*_T31;void*_T32;void*_T33;void*_T34;void*_T35;int _T36;long _T37;void*_T38;int*_T39;int _T3A;void*_T3B;void*_T3C;void*_T3D;void*_T3E;void*_T3F;void*_T40;void*_T41;void*_T42;int _T43;long _T44;long _T45;void*_T46;int*_T47;int _T48;void*_T49;void*_T4A;void*_T4B;void*_T4C;int _T4D;void*_T4E;int*_T4F;int _T50;void*_T51;void*_T52;void*_T53;void*_T54;void*_T55;void*_T56;int _T57;long _T58;void*_T59;int*_T5A;int _T5B;void*_T5C;void*_T5D;struct Cyc_PrattProver_Graph*_T5E;struct Cyc_List_List*_T5F;void*_T60;struct Cyc_List_List*_T61;void*_T62;long _T63;struct Cyc_List_List*_T64;struct Cyc_List_List*_T65;int _T66;void*_T67;int*_T68;int _T69;void*_T6A;void*_T6B;void*_T6C;void*_T6D;long _T6E;
if(t1!=t2)goto _TL5C;
return 1;_TL5C: {
struct _tuple14 _T6F=Cyc_PrattProver_subst_term_with_const(g,t1);unsigned _T70;long _T71;_T71= _T6F.f0;_T70= _T6F.f1;{long ok1=_T71;unsigned c1=_T70;
struct _tuple14 _T72=Cyc_PrattProver_subst_term_with_const(g,t2);unsigned _T73;long _T74;_T74= _T72.f0;_T73= _T72.f1;{long ok2=_T74;unsigned c2=_T73;_T0= ok1;
if(!_T0)goto _TL5E;_T1= ok2;if(!_T1)goto _TL5E;if(c1!=c2)goto _TL5E;
return 1;_TL5E: {
struct Cyc_PrattProver_Node*n1=Cyc_PrattProver_term2node(g,t1);
struct Cyc_PrattProver_Node*n2=Cyc_PrattProver_term2node(g,t2);_T2= 
Cyc_PrattProver_equal_nodes(n1,n2);if(!_T2)goto _TL60;
return 1;_TL60:{struct _tuple15 _T75;
_T75.f0= t1;_T75.f1= t2;_T3= _T75;}{struct _tuple15 _T75=_T3;long _T76;long _T77;unsigned _T78;unsigned _T79;void*_T7A;void*_T7B;void*_T7C;void*_T7D;void*_T7E;enum Cyc_Absyn_Primop _T7F;void*_T80;enum Cyc_Absyn_Primop _T81;_T4= _T75.f0;_T5= (int*)_T4;_T6= *_T5;switch(_T6){case 3: _T7= _T75.f1;_T8= (int*)_T7;_T9= *_T8;if(_T9!=3)goto _TL63;_TA= _T75.f0;{struct Cyc_AssnDef_Unop_AssnDef_Term_struct*_T82=(struct Cyc_AssnDef_Unop_AssnDef_Term_struct*)_TA;_T81= _T82->f1;_TB= _T82->f2;_T80= (void*)_TB;}_TC= _T75.f1;{struct Cyc_AssnDef_Unop_AssnDef_Term_struct*_T82=(struct Cyc_AssnDef_Unop_AssnDef_Term_struct*)_TC;_T7F= _T82->f1;_TD= _T82->f2;_T7E= (void*)_TD;}_TE= (enum Cyc_Absyn_Primop)_T81;_TF= (int)_TE;_T10= (enum Cyc_Absyn_Primop)_T7F;_T11= (int)_T10;if(_TF!=_T11)goto _TL65;{enum Cyc_Absyn_Primop p11=_T81;void*t11=_T80;enum Cyc_Absyn_Primop p21=_T7F;void*t21=_T7E;_T12= 
# 491
Cyc_PrattProver_equal_terms(g,t11,t21);return _T12;}_TL65: goto _LL19;_TL63: goto _LL19;case 4: _T13= _T75.f1;_T14= (int*)_T13;_T15= *_T14;if(_T15!=4)goto _TL67;_T16= _T75.f0;{struct Cyc_AssnDef_Binop_AssnDef_Term_struct*_T82=(struct Cyc_AssnDef_Binop_AssnDef_Term_struct*)_T16;_T81= _T82->f1;_T17= _T82->f2;_T80= (void*)_T17;_T18= _T82->f3;_T7E= (void*)_T18;}_T19= _T75.f1;{struct Cyc_AssnDef_Binop_AssnDef_Term_struct*_T82=(struct Cyc_AssnDef_Binop_AssnDef_Term_struct*)_T19;_T7F= _T82->f1;_T1A= _T82->f2;_T7D= (void*)_T1A;_T1B= _T82->f3;_T7C= (void*)_T1B;}_T1C= (enum Cyc_Absyn_Primop)_T81;_T1D= (int)_T1C;_T1E= (enum Cyc_Absyn_Primop)_T7F;_T1F= (int)_T1E;if(_T1D!=_T1F)goto _TL69;{enum Cyc_Absyn_Primop p11=_T81;void*t11=_T80;void*t12=_T7E;enum Cyc_Absyn_Primop p21=_T7F;void*t21=_T7D;void*t22=_T7C;_T21= 
# 493
Cyc_PrattProver_equal_terms(g,t11,t21);if(!_T21)goto _TL6B;_T20= Cyc_PrattProver_equal_terms(g,t12,t22);goto _TL6C;_TL6B: _T20= 0;_TL6C: return _T20;}_TL69: goto _LL19;_TL67: goto _LL19;case 5: _T22= _T75.f1;_T23= (int*)_T22;_T24= *_T23;if(_T24!=5)goto _TL6D;_T25= _T75.f0;{struct Cyc_AssnDef_Cast_AssnDef_Term_struct*_T82=(struct Cyc_AssnDef_Cast_AssnDef_Term_struct*)_T25;_T26= _T82->f1;_T80= (void*)_T26;_T27= _T82->f2;_T7E= (void*)_T27;}_T28= _T75.f1;{struct Cyc_AssnDef_Cast_AssnDef_Term_struct*_T82=(struct Cyc_AssnDef_Cast_AssnDef_Term_struct*)_T28;_T29= _T82->f1;_T7D= (void*)_T29;_T2A= _T82->f2;_T7C= (void*)_T2A;}{void*tp1=_T80;void*t11=_T7E;void*tp2=_T7D;void*t21=_T7C;_T2C= 
# 495
Cyc_Tcutil_typecmp(tp1,tp2);if(_T2C!=0)goto _TL6F;_T2B= Cyc_PrattProver_equal_terms(g,t11,t21);goto _TL70;_TL6F: _T2B= 0;_TL70: return _T2B;}_TL6D: goto _LL19;case 6: _T2D= _T75.f1;_T2E= (int*)_T2D;_T2F= *_T2E;if(_T2F!=6)goto _TL71;_T30= _T75.f0;{struct Cyc_AssnDef_Select_AssnDef_Term_struct*_T82=(struct Cyc_AssnDef_Select_AssnDef_Term_struct*)_T30;_T31= _T82->f1;_T80= (void*)_T31;_T32= _T82->f2;_T7E= (void*)_T32;}_T33= _T75.f1;{struct Cyc_AssnDef_Select_AssnDef_Term_struct*_T82=(struct Cyc_AssnDef_Select_AssnDef_Term_struct*)_T33;_T34= _T82->f1;_T7D= (void*)_T34;_T35= _T82->f2;_T7C= (void*)_T35;}{void*t11=_T80;void*t12=_T7E;void*t21=_T7D;void*t22=_T7C;_T37= 
# 497
Cyc_PrattProver_equal_terms(g,t11,t21);if(!_T37)goto _TL73;_T36= Cyc_PrattProver_equal_terms(g,t12,t22);goto _TL74;_TL73: _T36= 0;_TL74: return _T36;}_TL71: goto _LL19;case 7: _T38= _T75.f1;_T39= (int*)_T38;_T3A= *_T39;if(_T3A!=7)goto _TL75;_T3B= _T75.f0;{struct Cyc_AssnDef_Update_AssnDef_Term_struct*_T82=(struct Cyc_AssnDef_Update_AssnDef_Term_struct*)_T3B;_T3C= _T82->f1;_T80= (void*)_T3C;_T3D= _T82->f2;_T7E= (void*)_T3D;_T3E= _T82->f3;_T7D= (void*)_T3E;}_T3F= _T75.f1;{struct Cyc_AssnDef_Update_AssnDef_Term_struct*_T82=(struct Cyc_AssnDef_Update_AssnDef_Term_struct*)_T3F;_T40= _T82->f1;_T7C= (void*)_T40;_T41= _T82->f2;_T7B= (void*)_T41;_T42= _T82->f3;_T7A= (void*)_T42;}{void*t11=_T80;void*t12=_T7E;void*t13=_T7D;void*t21=_T7C;void*t22=_T7B;void*t23=_T7A;_T44= 
# 499
Cyc_PrattProver_equal_terms(g,t11,t21);if(!_T44)goto _TL77;_T45= Cyc_PrattProver_equal_terms(g,t12,t22);if(!_T45)goto _TL77;_T43= Cyc_PrattProver_equal_terms(g,t13,t23);goto _TL78;_TL77: _T43= 0;_TL78: return _T43;}_TL75: goto _LL19;case 9: _T46= _T75.f1;_T47= (int*)_T46;_T48= *_T47;if(_T48!=9)goto _TL79;_T49= _T75.f0;{struct Cyc_AssnDef_Proj_AssnDef_Term_struct*_T82=(struct Cyc_AssnDef_Proj_AssnDef_Term_struct*)_T49;_T4A= _T82->f1;_T80= (void*)_T4A;_T79= _T82->f2;}_T4B= _T75.f1;{struct Cyc_AssnDef_Proj_AssnDef_Term_struct*_T82=(struct Cyc_AssnDef_Proj_AssnDef_Term_struct*)_T4B;_T4C= _T82->f1;_T7E= (void*)_T4C;_T78= _T82->f2;}{void*t1=_T80;unsigned i1=_T79;void*t2=_T7E;unsigned i2=_T78;
# 501
if(i1!=i2)goto _TL7B;_T4D= Cyc_PrattProver_equal_terms(g,t1,t2);goto _TL7C;_TL7B: _T4D= 0;_TL7C: return _T4D;}_TL79: goto _LL19;case 10: _T4E= _T75.f1;_T4F= (int*)_T4E;_T50= *_T4F;if(_T50!=10)goto _TL7D;_T51= _T75.f0;{struct Cyc_AssnDef_AggrUpdate_AssnDef_Term_struct*_T82=(struct Cyc_AssnDef_AggrUpdate_AssnDef_Term_struct*)_T51;_T52= _T82->f1;_T80= (void*)_T52;_T79= _T82->f2;_T53= _T82->f3;_T7E= (void*)_T53;}_T54= _T75.f1;{struct Cyc_AssnDef_AggrUpdate_AssnDef_Term_struct*_T82=(struct Cyc_AssnDef_AggrUpdate_AssnDef_Term_struct*)_T54;_T55= _T82->f1;_T7D= (void*)_T55;_T78= _T82->f2;_T56= _T82->f3;_T7C= (void*)_T56;}{void*t1=_T80;unsigned i1=_T79;void*v1=_T7E;void*t2=_T7D;unsigned i2=_T78;void*v2=_T7C;
# 503
if(i1!=i2)goto _TL7F;_T58= Cyc_PrattProver_equal_terms(g,t1,t2);if(!_T58)goto _TL7F;_T57= Cyc_PrattProver_equal_terms(g,v1,v2);goto _TL80;_TL7F: _T57= 0;_TL80: return _T57;}_TL7D: goto _LL19;case 8: _T59= _T75.f1;_T5A= (int*)_T59;_T5B= *_T5A;if(_T5B!=8)goto _TL81;_T5C= _T75.f0;{struct Cyc_AssnDef_Aggr_AssnDef_Term_struct*_T82=(struct Cyc_AssnDef_Aggr_AssnDef_Term_struct*)_T5C;_T77= _T82->f1;_T79= _T82->f2;_T80= _T82->f3;}_T5D= _T75.f1;{struct Cyc_AssnDef_Aggr_AssnDef_Term_struct*_T82=(struct Cyc_AssnDef_Aggr_AssnDef_Term_struct*)_T5D;_T76= _T82->f1;_T78= _T82->f2;_T7E= _T82->f3;}{long is_union1=_T77;unsigned tag1=_T79;struct Cyc_List_List*ts1=_T80;long is_union2=_T76;unsigned tag2=_T78;struct Cyc_List_List*ts2=_T7E;
# 505
_TL86: if(ts1!=0)goto _TL87;else{goto _TL85;}_TL87: if(ts2!=0)goto _TL84;else{goto _TL85;}
_TL84: _T5E= g;_T5F= ts1;_T60= _T5F->hd;_T61= ts2;_T62= _T61->hd;_T63= Cyc_PrattProver_equal_terms(_T5E,_T60,_T62);if(_T63)goto _TL88;else{goto _TL8A;}
_TL8A: return 0;_TL88: _T64= ts1;
# 505
ts1= _T64->tl;_T65= ts2;ts2= _T65->tl;goto _TL86;_TL85:
# 508
 if(tag1!=tag2)goto _TL8B;_T66= is_union1==is_union2;goto _TL8C;_TL8B: _T66= 0;_TL8C: return _T66;}_TL81: goto _LL19;case 15: _T67= _T75.f1;_T68= (int*)_T67;_T69= *_T68;if(_T69!=15)goto _TL8D;_T6A= _T75.f0;{struct Cyc_AssnDef_Tagof_AssnDef_Term_struct*_T82=(struct Cyc_AssnDef_Tagof_AssnDef_Term_struct*)_T6A;_T6B= _T82->f1;_T80= (void*)_T6B;}_T6C= _T75.f1;{struct Cyc_AssnDef_Tagof_AssnDef_Term_struct*_T82=(struct Cyc_AssnDef_Tagof_AssnDef_Term_struct*)_T6C;_T6D= _T82->f1;_T7E= (void*)_T6D;}{void*t1=_T80;void*t2=_T7E;_T6E= 
# 510
Cyc_PrattProver_equal_terms(g,t1,t2);return _T6E;}_TL8D: goto _LL19;default: _LL19:
# 512
 return 0;};}
# 514
return 0;}}}}}
# 518
static struct Cyc_PrattProver_Graph*Cyc_PrattProver_graph_append(struct Cyc_PrattProver_Graph*g1,struct Cyc_PrattProver_Graph*g2){struct Cyc_PrattProver_Graph*_T0;struct Cyc_PrattProver_Graph*_T1;struct Cyc_PrattProver_Graph*_T2;struct Cyc_PrattProver_Graph*_T3;struct Cyc_PrattProver_Graph*_T4;struct Cyc_PrattProver_Graph*_T5;
if(g1!=0)goto _TL8F;_T0= g2;
return _T0;_TL8F:
 if(g2!=0)goto _TL91;_T1= g1;
return _T1;_TL91: {
struct Cyc_PrattProver_Graph*p=g1;_T2= p;{
struct Cyc_PrattProver_Graph*x=_T2->next;_TL96: if(x!=0)goto _TL94;else{goto _TL95;}
_TL94:
# 524
 p= x;_T3= p;x= _T3->next;goto _TL96;_TL95:;}_T4= p;
# 526
_T4->next= g2;_T5= g1;
return _T5;}}struct _tuple16{long f0;int f1;};
# 531
inline static struct _tuple16 Cyc_PrattProver_is_signed_int_overflow(int c1,int c2){int _T0;int _T1;struct _tuple16 _T2;int _T3;int _T4;struct _tuple16 _T5;struct _tuple16 _T6;
if(c2 >= 0)goto _TL97;_T0= c1;_T1= Cyc_PrattProver_INT_MIN - c2;
if(_T0 >= _T1)goto _TL99;{struct _tuple16 _T7;
_T7.f0= 1;_T7.f1= - 1;_T2= _T7;}return _T2;_TL99: goto _TL98;
# 537
_TL97: _T3= c1;_T4= 2147483647 - c2;if(_T3 <= _T4)goto _TL9B;{struct _tuple16 _T7;
_T7.f0= 1;_T7.f1= 1;_T5= _T7;}return _T5;_TL9B: _TL98:{struct _tuple16 _T7;
# 542
_T7.f0= 0;_T7.f1= c1 + c2;_T6= _T7;}return _T6;}
# 550
inline static struct _tuple16 Cyc_PrattProver_is_signed_int_plusminus_overflow(int c1,int c2,int c3){int _T0;int _T1;struct _tuple16 _T2;int _T3;int _T4;struct _tuple16 _T5;struct _tuple16 _T6;long _T7;struct _tuple16 _T8;int _T9;int _TA;struct _tuple16 _TB;
# 552
if(c2 >= 0)goto _TLA1;else{goto _TLA0;}_TLA1: if(c3 >= 0)goto _TL9F;else{goto _TLA0;}_TLA0: if(c2 < 0)goto _TLA2;else{goto _TL9D;}_TLA2: if(c3 <= 0)goto _TL9F;else{goto _TL9D;}
_TL9F: _T0= c1;_T1= c2 - c3;_T2= Cyc_PrattProver_is_signed_int_overflow(_T0,_T1);return _T2;_TL9D:
# 555
 if(c1 >= 0)goto _TLA7;else{goto _TLA6;}_TLA7: if(c3 >= 0)goto _TLA5;else{goto _TLA6;}_TLA6: if(c1 < 0)goto _TLA8;else{goto _TLA3;}_TLA8: if(c3 <= 0)goto _TLA5;else{goto _TLA3;}
_TLA5: _T3= c2;_T4= c1 - c3;_T5= Cyc_PrattProver_is_signed_int_overflow(_T3,_T4);return _T5;_TLA3:
# 560
 if(c3!=Cyc_PrattProver_INT_MIN)goto _TLA9;{struct _tuple16 _TC;
_TC.f0= 1;_TC.f1= 1;_T6= _TC;}return _T6;_TLA9: {
# 563
struct _tuple16 _TC=Cyc_PrattProver_is_signed_int_overflow(c1,c2);int _TD;long _TE;_TE= _TC.f0;_TD= _TC.f1;{long flag=_TE;int sum=_TD;_T7= flag;
if(!_T7)goto _TLAB;{struct _tuple16 _TF;
_TF.f0= 1;_TF.f1= sum;_T8= _TF;}return _T8;
# 567
_TLAB: _T9= sum;_TA= - c3;_TB= Cyc_PrattProver_is_signed_int_overflow(_T9,_TA);return _TB;}}}struct _tuple17{long f0;long long f1;};
# 573
inline static struct _tuple17 Cyc_PrattProver_is_signed_longlong_overflow(long long c1,long long c2){long long _T0;long long _T1;struct _tuple17 _T2;long long _T3;long long _T4;struct _tuple17 _T5;struct _tuple17 _T6;
# 575
if(c2 >= 0)goto _TLAD;_T0= c1;_T1= Cyc_PrattProver_LLONG_MIN - c2;
if(_T0 >= _T1)goto _TLAF;{struct _tuple17 _T7;
_T7.f0= 1;_T7.f1= -1;_T2= _T7;}return _T2;_TLAF: goto _TLAE;
# 580
_TLAD: _T3= c1;_T4= 9223372036854775807ULL - c2;if(_T3 <= _T4)goto _TLB1;{struct _tuple17 _T7;
_T7.f0= 1;_T7.f1= 1;_T5= _T7;}return _T5;_TLB1: _TLAE:{struct _tuple17 _T7;
# 585
_T7.f0= 0;_T7.f1= c1 + c2;_T6= _T7;}return _T6;}
# 593
inline static struct _tuple17 Cyc_PrattProver_is_signed_longlong_plusminus_overflow(long long c1,long long c2,long long c3){long long _T0;long long _T1;struct _tuple17 _T2;long long _T3;long long _T4;struct _tuple17 _T5;struct _tuple17 _T6;long _T7;struct _tuple17 _T8;long long _T9;long long _TA;struct _tuple17 _TB;
# 597
if(c2 >= 0)goto _TLB7;else{goto _TLB6;}_TLB7: if(c3 >= 0)goto _TLB5;else{goto _TLB6;}_TLB6: if(c2 <= 0)goto _TLB8;else{goto _TLB3;}_TLB8: if(c3 <= 0)goto _TLB5;else{goto _TLB3;}
_TLB5: _T0= c1;_T1= c2 - c3;_T2= Cyc_PrattProver_is_signed_longlong_overflow(_T0,_T1);return _T2;_TLB3:
# 600
 if(c1 >= 0)goto _TLBD;else{goto _TLBC;}_TLBD: if(c3 >= 0)goto _TLBB;else{goto _TLBC;}_TLBC: if(c1 <= 0)goto _TLBE;else{goto _TLB9;}_TLBE: if(c3 <= 0)goto _TLBB;else{goto _TLB9;}
_TLBB: _T3= c2;_T4= c1 - c3;_T5= Cyc_PrattProver_is_signed_longlong_overflow(_T3,_T4);return _T5;_TLB9:
# 605
 if(c3!=Cyc_PrattProver_LLONG_MIN)goto _TLBF;{struct _tuple17 _TC;
_TC.f0= 1;_TC.f1= 1;_T6= _TC;}return _T6;_TLBF: {
# 608
struct _tuple17 _TC=Cyc_PrattProver_is_signed_longlong_overflow(c1,c2);long long _TD;long _TE;_TE= _TC.f0;_TD= _TC.f1;{long flag=_TE;long long sum=_TD;_T7= flag;
if(!_T7)goto _TLC1;{struct _tuple17 _TF;
_TF.f0= 1;_TF.f1= sum;_T8= _TF;}return _T8;
# 612
_TLC1: _T9= sum;_TA= - c3;_TB= Cyc_PrattProver_is_signed_longlong_overflow(_T9,_TA);return _TB;}}}
# 616
static void Cyc_PrattProver_new_distance(struct Cyc_PrattProver_Node*source,struct Cyc_PrattProver_Node*target,long is_signed,int d){struct Cyc_PrattProver_Distance*_T0;struct Cyc_PrattProver_Distance*_T1;struct Cyc_PrattProver_Distance*_T2;long _T3;struct Cyc_PrattProver_Distance*_T4;struct Cyc_PrattProver_Node*_T5;struct Cyc_PrattProver_Node*_T6;struct Cyc_PrattProver_Distance*_T7;struct Cyc_PrattProver_Node*_T8;struct Cyc_PrattProver_Node*_T9;
struct Cyc_PrattProver_Distance*dist;dist= _cycalloc(sizeof(struct Cyc_PrattProver_Distance));_T0= dist;_T0->next= 0;_T1= dist;_T1->target= target;_T2= dist;_T2->dist= d;_T3= is_signed;
if(!_T3)goto _TLC3;_T4= dist;_T5= source;
_T4->next= _T5->signed_distances;_T6= source;
_T6->signed_distances= dist;goto _TLC4;
# 622
_TLC3: _T7= dist;_T8= source;_T7->next= _T8->unsigned_distances;_T9= source;
_T9->unsigned_distances= dist;_TLC4:;}
# 627
inline static void Cyc_PrattProver_set_dist(struct Cyc_PrattProver_Graph*g,struct Cyc_PrattProver_Node*i,struct Cyc_PrattProver_Node*j,int dist,long is_signed){struct Cyc_PrattProver_Inconsistent_exn_struct*_T0;struct Cyc_PrattProver_Inconsistent_exn_struct*_T1;int*_T2;int _T3;int _T4;int*_T5;struct Cyc_PrattProver_Graph*_T6;int*_T7;int _T8;int _T9;struct Cyc_PrattProver_Inconsistent_exn_struct*_TA;struct Cyc_PrattProver_Inconsistent_exn_struct*_TB;
# 634
if(i!=j)goto _TLC5;
if(dist >= 0)goto _TLC7;_T0= & Cyc_PrattProver_inconsistent;_T1= (struct Cyc_PrattProver_Inconsistent_exn_struct*)_T0;_throw(_T1);goto _TLC8;
# 638
_TLC7: return;_TLC8: goto _TLC6;_TLC5: _TLC6: {
# 640
int*ij_dist=Cyc_PrattProver_lookup_dist(i,j,is_signed);
# 646
if(ij_dist==0)goto _TLC9;_T2= ij_dist;_T3= *_T2;_T4= dist;
if(_T3 >= _T4)goto _TLCB;
return;_TLCB: _T5= ij_dist;
*_T5= dist;goto _TLCA;
# 651
_TLC9: Cyc_PrattProver_new_distance(i,j,is_signed,dist);_TLCA: _T6= g;
# 653
_T6->changed= 1;{
# 657
int*ji_dist=Cyc_PrattProver_lookup_dist(j,i,is_signed);
if(ji_dist==0)goto _TLCD;_T7= ji_dist;_T8= *_T7;_T9= dist;{
struct _tuple16 _TC=Cyc_PrattProver_is_signed_int_overflow(_T8,_T9);int _TD;long _TE;_TE= _TC.f0;_TD= _TC.f1;{long overflow=_TE;int sum=_TD;
if(sum >= 0)goto _TLCF;_TA= & Cyc_PrattProver_inconsistent;_TB= (struct Cyc_PrattProver_Inconsistent_exn_struct*)_TA;_throw(_TB);goto _TLD0;_TLCF: _TLD0:;}}goto _TLCE;_TLCD: _TLCE:
# 667
 return;}}}
# 670
static int Cyc_PrattProver_num_of_nodes(struct Cyc_PrattProver_Graph*g){struct Cyc_PrattProver_Graph*_T0;struct Cyc_PrattProver_Node*_T1;int _T2;
int n=0;_T0= g;{
struct Cyc_PrattProver_Node*node=_T0->rows;_TLD4: if(node!=0)goto _TLD2;else{goto _TLD3;}
_TLD2: n= n + 1;_T1= node;
# 672
node= _T1->next;goto _TLD4;_TLD3:;}_T2= n;
# 675
return _T2;}
# 687
static void Cyc_PrattProver_bellman_ford(int dummy,struct Cyc_PrattProver_Graph*g){struct Cyc_PrattProver_Graph*_T0;struct Cyc_PrattProver_Node*_T1;struct Cyc_PrattProver_Node*_T2;struct Cyc_PrattProver_Node*_T3;struct Cyc_PrattProver_Graph*_T4;struct Cyc_PrattProver_Node*_T5;struct Cyc_PrattProver_Node*_T6;struct Cyc_PrattProver_Distance*_T7;struct Cyc_PrattProver_Distance*_T8;struct Cyc_PrattProver_Node*_T9;long _TA;struct Cyc_PrattProver_Distance*_TB;struct Cyc_PrattProver_Node*_TC;long _TD;struct Cyc_PrattProver_Distance*_TE;struct Cyc_PrattProver_Node*_TF;struct Cyc_PrattProver_Distance*_T10;struct Cyc_PrattProver_Node*_T11;struct Cyc_PrattProver_Node*_T12;struct Cyc_PrattProver_Distance*_T13;struct Cyc_PrattProver_Distance*_T14;struct Cyc_PrattProver_Node*_T15;long _T16;struct Cyc_PrattProver_Distance*_T17;struct Cyc_PrattProver_Node*_T18;long _T19;struct Cyc_PrattProver_Distance*_T1A;struct Cyc_PrattProver_Node*_T1B;struct Cyc_PrattProver_Distance*_T1C;struct Cyc_PrattProver_Node*_T1D;struct Cyc_PrattProver_Graph*_T1E;struct Cyc_PrattProver_Node*_T1F;struct Cyc_PrattProver_Node*_T20;struct Cyc_PrattProver_Distance*_T21;struct Cyc_PrattProver_Distance*_T22;struct Cyc_PrattProver_Node*_T23;long _T24;long _T25;struct Cyc_PrattProver_Inconsistent_exn_struct*_T26;struct Cyc_PrattProver_Inconsistent_exn_struct*_T27;struct Cyc_PrattProver_Distance*_T28;struct Cyc_PrattProver_Node*_T29;struct Cyc_PrattProver_Node*_T2A;struct Cyc_PrattProver_Distance*_T2B;struct Cyc_PrattProver_Distance*_T2C;struct Cyc_PrattProver_Node*_T2D;long _T2E;long _T2F;struct Cyc_PrattProver_Inconsistent_exn_struct*_T30;struct Cyc_PrattProver_Inconsistent_exn_struct*_T31;struct Cyc_PrattProver_Distance*_T32;struct Cyc_PrattProver_Node*_T33;
# 691
int n=Cyc_PrattProver_num_of_nodes(g);_T0= g;{
# 693
struct Cyc_PrattProver_Node*node=_T0->rows;_TLD8: if(node!=0)goto _TLD6;else{goto _TLD7;}
_TLD6: _T1= node;_T1->signeddistFromS= 0;_T2= node;
_T2->unsigneddistFromS= 0;_T3= node;
# 693
node= _T3->next;goto _TLD8;_TLD7:;}{
# 700
int i=0;_TLDC: if(i < n)goto _TLDA;else{goto _TLDB;}
# 702
_TLDA: _T4= g;{struct Cyc_PrattProver_Node*node=_T4->rows;_TLE0: if(node!=0)goto _TLDE;else{goto _TLDF;}
_TLDE: _T5= node;{int du_unsigned=_T5->unsigneddistFromS;_T6= node;{
struct Cyc_PrattProver_Distance*dists=_T6->unsigned_distances;_TLE4: if(dists!=0)goto _TLE2;else{goto _TLE3;}
_TLE2: _T7= dists;{int uv_unsigned=_T7->dist;_T8= dists;_T9= _T8->target;{
int dv_unsigned=_T9->unsigneddistFromS;
# 709
if(dv_unsigned!=Cyc_PrattProver_INT_MIN)goto _TLE5;goto _TLE1;_TLE5: {
# 711
struct _tuple16 _T34=Cyc_PrattProver_is_signed_int_overflow(du_unsigned,uv_unsigned);int _T35;long _T36;_T36= _T34.f0;_T35= _T34.f1;{long overflow=_T36;int sum=_T35;_TA= overflow;
# 713
if(_TA)goto _TLE7;else{goto _TLE9;}_TLE9: if(sum >= dv_unsigned)goto _TLE7;_TB= dists;_TC= _TB->target;
_TC->unsigneddistFromS= sum;goto _TLE8;_TLE7: _TLE8: _TD= overflow;
# 716
if(!_TD)goto _TLEA;if(sum >= 0)goto _TLEA;_TE= dists;_TF= _TE->target;
_TF->unsigneddistFromS= Cyc_PrattProver_INT_MIN;goto _TLEB;_TLEA: _TLEB:;}}}}_TLE1: _T10= dists;
# 704
dists= _T10->next;goto _TLE4;_TLE3:;}_T11= node;{
# 719
int du_signed=_T11->signeddistFromS;_T12= node;{
struct Cyc_PrattProver_Distance*dists=_T12->signed_distances;_TLEF: if(dists!=0)goto _TLED;else{goto _TLEE;}
_TLED: _T13= dists;{int uv_signed=_T13->dist;_T14= dists;_T15= _T14->target;{
int dv_signed=_T15->signeddistFromS;
# 725
if(dv_signed!=Cyc_PrattProver_INT_MIN)goto _TLF0;goto _TLEC;_TLF0: {
# 727
struct _tuple16 _T34=Cyc_PrattProver_is_signed_int_overflow(du_signed,uv_signed);int _T35;long _T36;_T36= _T34.f0;_T35= _T34.f1;{long overflow=_T36;int sum=_T35;_T16= overflow;
# 729
if(_T16)goto _TLF2;else{goto _TLF4;}_TLF4: if(sum >= dv_signed)goto _TLF2;_T17= dists;_T18= _T17->target;
_T18->signeddistFromS= sum;goto _TLF3;_TLF2: _TLF3: _T19= overflow;
# 732
if(!_T19)goto _TLF5;if(sum >= 0)goto _TLF5;_T1A= dists;_T1B= _T1A->target;
_T1B->signeddistFromS= Cyc_PrattProver_INT_MIN;goto _TLF6;_TLF5: _TLF6:;}}}}_TLEC: _T1C= dists;
# 720
dists= _T1C->next;goto _TLEF;_TLEE:;}}}_T1D= node;
# 702
node= _T1D->next;goto _TLE0;_TLDF:;}
# 700
i= i + 1;goto _TLDC;_TLDB:;}_T1E= g;{
# 741
struct Cyc_PrattProver_Node*node=_T1E->rows;_TLFA: if(node!=0)goto _TLF8;else{goto _TLF9;}
_TLF8: _T1F= node;{int du_unsigned=_T1F->unsigneddistFromS;_T20= node;{
struct Cyc_PrattProver_Distance*dists=_T20->unsigned_distances;_TLFE: if(dists!=0)goto _TLFC;else{goto _TLFD;}
_TLFC: _T21= dists;{int uv_unsigned=_T21->dist;_T22= dists;_T23= _T22->target;{
int dv_unsigned=_T23->unsigneddistFromS;
# 748
if(dv_unsigned!=Cyc_PrattProver_INT_MIN)goto _TLFF;goto _TLFB;_TLFF: {
# 750
struct _tuple16 _T34=Cyc_PrattProver_is_signed_int_overflow(du_unsigned,uv_unsigned);int _T35;long _T36;_T36= _T34.f0;_T35= _T34.f1;{long overflow=_T36;int sum=_T35;_T24= overflow;
# 752
if(_T24)goto _TL104;else{goto _TL105;}_TL105: if(sum < dv_unsigned)goto _TL103;else{goto _TL104;}_TL104: _T25= overflow;if(_T25)goto _TL106;else{goto _TL101;}_TL106: if(sum < 0)goto _TL103;else{goto _TL101;}
# 756
_TL103: _T26= & Cyc_PrattProver_inconsistent;_T27= (struct Cyc_PrattProver_Inconsistent_exn_struct*)_T26;_throw(_T27);goto _TL102;_TL101: _TL102:;}}}}_TLFB: _T28= dists;
# 743
dists= _T28->next;goto _TLFE;_TLFD:;}_T29= node;{
# 759
int du_signed=_T29->signeddistFromS;_T2A= node;{
struct Cyc_PrattProver_Distance*dists=_T2A->signed_distances;_TL10A: if(dists!=0)goto _TL108;else{goto _TL109;}
_TL108: _T2B= dists;{int uv_signed=_T2B->dist;_T2C= dists;_T2D= _T2C->target;{
int dv_signed=_T2D->signeddistFromS;
# 765
if(dv_signed!=Cyc_PrattProver_INT_MIN)goto _TL10B;goto _TL107;_TL10B: {
# 767
struct _tuple16 _T34=Cyc_PrattProver_is_signed_int_overflow(du_signed,uv_signed);int _T35;long _T36;_T36= _T34.f0;_T35= _T34.f1;{long overflow=_T36;int sum=_T35;_T2E= overflow;
if(_T2E)goto _TL110;else{goto _TL111;}_TL111: if(sum < dv_signed)goto _TL10F;else{goto _TL110;}_TL110: _T2F= overflow;if(_T2F)goto _TL112;else{goto _TL10D;}_TL112: if(sum < 0)goto _TL10F;else{goto _TL10D;}
# 772
_TL10F: _T30= & Cyc_PrattProver_inconsistent;_T31= (struct Cyc_PrattProver_Inconsistent_exn_struct*)_T30;_throw(_T31);goto _TL10E;_TL10D: _TL10E:;}}}}_TL107: _T32= dists;
# 760
dists= _T32->next;goto _TL10A;_TL109:;}}}_T33= node;
# 741
node= _T33->next;goto _TLFA;_TLF9:;}
# 776
return;}
# 807
static struct Cyc_PrattProver_Node*Cyc_PrattProver_extract_min(struct Cyc_List_List**q){struct Cyc_List_List**_T0;int _T1;struct Cyc_List_List*_T2;void*_T3;struct Cyc_PrattProver_Node*_T4;struct _union_ShortestPathInfo_Current _T5;unsigned _T6;struct _union_ShortestPathInfo_Current _T7;struct Cyc_List_List*_T8;struct Cyc_List_List*_T9;void*_TA;struct Cyc_PrattProver_Node*_TB;struct _union_ShortestPathInfo_Current _TC;unsigned _TD;struct _union_ShortestPathInfo_Current _TE;int(*_TF)(struct _fat_ptr,struct _fat_ptr);void*(*_T10)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T11;struct _fat_ptr _T12;struct Cyc_List_List*_T13;struct Cyc_List_List**_T14;struct Cyc_List_List*_T15;struct Cyc_List_List*_T16;void*_T17;struct Cyc_PrattProver_Node*_T18;struct Cyc_List_List*_T19;struct Cyc_List_List*_T1A;struct Cyc_List_List*_T1B;void*_T1C;struct Cyc_PrattProver_Node*_T1D;_T0= q;{
struct Cyc_List_List*min=*_T0;
if(min!=0)goto _TL113;
return 0;_TL113: {
struct Cyc_List_List*minprev=0;_T2= min;_T3= _T2->hd;_T4= (struct Cyc_PrattProver_Node*)_T3;{union Cyc_PrattProver_ShortestPathInfo _T1E=_T4->shortest_path_info;_T5= _T1E.Current;_T6= _T5.tag;if(_T6==3)goto _TL115;_throw_match();goto _TL116;_TL115: _TL116: _T7= _T1E.Current;_T1= _T7.val;}{
int d=_T1;
struct Cyc_List_List*xprev=min;_T8= min;{
struct Cyc_List_List*x=_T8->tl;_TL11A: if(x!=0)goto _TL118;else{goto _TL119;}
_TL118: _T9= x;_TA= _T9->hd;{struct Cyc_PrattProver_Node*n=(struct Cyc_PrattProver_Node*)_TA;_TB= n;{
union Cyc_PrattProver_ShortestPathInfo _T1E=_TB->shortest_path_info;int _T1F;_TC= _T1E.Current;_TD= _TC.tag;if(_TD!=3)goto _TL11B;_TE= _T1E.Current;_T1F= _TE.val;{int dn=_T1F;
# 818
if(dn >= d)goto _TL11D;
min= x;
d= dn;
minprev= xprev;goto _TL11E;_TL11D: _TL11E: goto _LL0;}_TL11B: _T10= Cyc_Warn_impos;{
# 825
int(*_T20)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T10;_TF= _T20;}_T11= _tag_fat("pratt_prover::extract_min!",sizeof(char),27U);_T12= _tag_fat(0U,sizeof(void*),0);_TF(_T11,_T12);_LL0:;}
# 827
xprev= x;}_T13= x;
# 814
x= _T13->tl;goto _TL11A;_TL119:;}
# 830
if(minprev!=0)goto _TL11F;_T14= q;_T15= min;
*_T14= _T15->tl;_T16= min;_T17= _T16->hd;_T18= (struct Cyc_PrattProver_Node*)_T17;
return _T18;
# 834
_TL11F: _T19= minprev;_T1A= min;_T19->tl= _T1A->tl;_T1B= min;_T1C= _T1B->hd;_T1D= (struct Cyc_PrattProver_Node*)_T1C;
return _T1D;}}}}
# 841
static void Cyc_PrattProver_relaxation(struct Cyc_PrattProver_Node*u,struct Cyc_List_List**q,long is_signed){int _T0;struct Cyc_PrattProver_Node*_T1;struct _union_ShortestPathInfo_Shortest _T2;unsigned _T3;struct _union_ShortestPathInfo_Shortest _T4;long _T5;struct Cyc_PrattProver_Node*_T6;struct Cyc_PrattProver_Node*_T7;struct Cyc_PrattProver_Distance*_T8;struct Cyc_PrattProver_Node*_T9;struct _union_ShortestPathInfo_Current _TA;unsigned _TB;struct _union_ShortestPathInfo_Current _TC;struct Cyc_PrattProver_Distance*_TD;long _TE;struct Cyc_PrattProver_Distance*_TF;struct Cyc_PrattProver_Node*_T10;union Cyc_PrattProver_ShortestPathInfo _T11;struct Cyc_PrattProver_Distance*_T12;long _T13;struct Cyc_List_List**_T14;struct Cyc_List_List*_T15;struct Cyc_PrattProver_Distance*_T16;struct Cyc_List_List**_T17;struct Cyc_PrattProver_Distance*_T18;struct Cyc_PrattProver_Node*_T19;union Cyc_PrattProver_ShortestPathInfo _T1A;struct Cyc_PrattProver_Distance*_T1B;
struct Cyc_PrattProver_Distance*dists;
int su;_T1= u;{union Cyc_PrattProver_ShortestPathInfo _T1C=_T1->shortest_path_info;_T2= _T1C.Shortest;_T3= _T2.tag;if(_T3==2)goto _TL121;_throw_match();goto _TL122;_TL121: _TL122: _T4= _T1C.Shortest;_T0= _T4.val;}{
int su=_T0;_T5= is_signed;
if(!_T5)goto _TL123;_T6= u;
dists= _T6->signed_distances;goto _TL124;
# 848
_TL123: _T7= u;dists= _T7->unsigned_distances;_TL124:
 _TL128: if(dists!=0)goto _TL126;else{goto _TL127;}
_TL126: _T8= dists;_T9= _T8->target;{union Cyc_PrattProver_ShortestPathInfo _T1C=_T9->shortest_path_info;int _T1D;_TA= _T1C.Current;_TB= _TA.tag;switch(_TB){case 2: goto _LL0;case 3: _TC= _T1C.Current;_T1D= _TC.val;{int sv=_T1D;_TD= dists;{
# 855
int uv=_TD->dist;
struct _tuple16 _T1E=Cyc_PrattProver_is_signed_int_overflow(su,uv);int _T1F;long _T20;_T20= _T1E.f0;_T1F= _T1E.f1;{long overflow=_T20;int sum=_T1F;_TE= overflow;
if(_TE)goto _TL12A;else{goto _TL12C;}_TL12C: if(sum >= sv)goto _TL12A;_TF= dists;_T10= _TF->target;{union Cyc_PrattProver_ShortestPathInfo _T21;_T21.Current.tag= 3U;
_T21.Current.val= sum;_T11= _T21;}_T10->shortest_path_info= _T11;goto _TL12B;_TL12A: _TL12B: goto _LL0;}}}default: _T12= dists;{
# 861
int uv=_T12->dist;
struct _tuple16 _T1E=Cyc_PrattProver_is_signed_int_overflow(su,uv);int _T1F;long _T20;_T20= _T1E.f0;_T1F= _T1E.f1;{long overflow=_T20;int sum=_T1F;_T13= overflow;
if(_T13)goto _TL12D;else{goto _TL12F;}
# 865
_TL12F: _T14= q;{struct Cyc_List_List*_T21=_cycalloc(sizeof(struct Cyc_List_List));_T16= dists;_T21->hd= _T16->target;_T17= q;_T21->tl= *_T17;_T15= (struct Cyc_List_List*)_T21;}*_T14= _T15;_T18= dists;_T19= _T18->target;{union Cyc_PrattProver_ShortestPathInfo _T21;_T21.Current.tag= 3U;
_T21.Current.val= sum;_T1A= _T21;}_T19->shortest_path_info= _T1A;goto _TL12E;_TL12D: _TL12E: goto _LL0;}}}_LL0:;}_T1B= dists;
# 849
dists= _T1B->next;goto _TL128;_TL127:
# 871
 return;}}
# 877
static void Cyc_PrattProver_set_shortest_dist_from_s(struct Cyc_PrattProver_Node*s,struct Cyc_PrattProver_Graph*g,long is_signed){struct Cyc_PrattProver_Graph*_T0;struct Cyc_PrattProver_Node*_T1;struct _union_ShortestPathInfo_Shortest _T2;unsigned _T3;struct _union_ShortestPathInfo_Shortest _T4;struct Cyc_PrattProver_Node*_T5;struct Cyc_PrattProver_Node*_T6;_T0= g;{
struct Cyc_PrattProver_Node*node=_T0->rows;_TL133: if(node!=0)goto _TL131;else{goto _TL132;}
_TL131: _T1= node;{union Cyc_PrattProver_ShortestPathInfo _T7=_T1->shortest_path_info;int _T8;_T2= _T7.Shortest;_T3= _T2.tag;if(_T3!=2)goto _TL134;_T4= _T7.Shortest;_T8= _T4.val;{int d=_T8;
# 881
Cyc_PrattProver_set_dist(g,s,node,d,is_signed);_T5= node;
_T5->shortest_path_info= Cyc_PrattProver_infinity;goto _LL0;}_TL134: goto _LL0;_LL0:;}_T6= node;
# 878
node= _T6->next;goto _TL133;_TL132:;}}
# 891
static void Cyc_PrattProver_dijkstra(struct Cyc_PrattProver_Node*s,struct Cyc_PrattProver_Graph*g){struct Cyc_PrattProver_Node*_T0;union Cyc_PrattProver_ShortestPathInfo _T1;struct Cyc_PrattProver_Node*_T2;struct _union_ShortestPathInfo_Current _T3;unsigned _T4;struct _union_ShortestPathInfo_Current _T5;struct Cyc_PrattProver_Node*_T6;int(*_T7)(struct _fat_ptr,struct _fat_ptr);void*(*_T8)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T9;struct _fat_ptr _TA;struct Cyc_PrattProver_Node*_TB;struct Cyc_List_List**_TC;struct Cyc_List_List**_TD;struct Cyc_PrattProver_Node*_TE;union Cyc_PrattProver_ShortestPathInfo _TF;struct Cyc_PrattProver_Node*_T10;struct _union_ShortestPathInfo_Current _T11;unsigned _T12;struct _union_ShortestPathInfo_Current _T13;struct Cyc_PrattProver_Node*_T14;int(*_T15)(struct _fat_ptr,struct _fat_ptr);void*(*_T16)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T17;struct _fat_ptr _T18;struct Cyc_PrattProver_Node*_T19;struct Cyc_List_List**_T1A;struct Cyc_List_List**_T1B;
# 896
struct Cyc_List_List*q=0;
# 898
struct Cyc_PrattProver_Node*current_shortest_node=s;_T0= s;{union Cyc_PrattProver_ShortestPathInfo _T1C;_T1C.Current.tag= 3U;
_T1C.Current.val= 0;_T1= _T1C;}_T0->shortest_path_info= _T1;
# 901
_TL136: _T2= current_shortest_node;{union Cyc_PrattProver_ShortestPathInfo _T1C=_T2->shortest_path_info;int _T1D;_T3= _T1C.Current;_T4= _T3.tag;if(_T4!=3)goto _TL138;_T5= _T1C.Current;_T1D= _T5.val;{int d=_T1D;_T6= current_shortest_node;{struct _union_ShortestPathInfo_Shortest*_T1E=& _T6->shortest_path_info.Shortest;_T1E->tag= 2;_T1E->val= d;}goto _LL0;}_TL138: _T8= Cyc_Warn_impos;{
# 906
int(*_T1E)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T8;_T7= _T1E;}_T9= _tag_fat("pratt_prover oops -- node is not current!",sizeof(char),42U);_TA= _tag_fat(0U,sizeof(void*),0);_T7(_T9,_TA);_LL0:;}_TB= current_shortest_node;_TC= & q;
# 908
Cyc_PrattProver_relaxation(_TB,_TC,0);_TD= & q;
current_shortest_node= Cyc_PrattProver_extract_min(_TD);
# 900
if(current_shortest_node!=0)goto _TL136;else{goto _TL137;}_TL137:
# 912
 Cyc_PrattProver_set_shortest_dist_from_s(s,g,0);
# 915
current_shortest_node= s;_TE= s;{union Cyc_PrattProver_ShortestPathInfo _T1C;_T1C.Current.tag= 3U;
_T1C.Current.val= 0;_TF= _T1C;}_TE->shortest_path_info= _TF;
# 918
_TL13A: _T10= current_shortest_node;{union Cyc_PrattProver_ShortestPathInfo _T1C=_T10->shortest_path_info;int _T1D;_T11= _T1C.Current;_T12= _T11.tag;if(_T12!=3)goto _TL13C;_T13= _T1C.Current;_T1D= _T13.val;{int d=_T1D;_T14= current_shortest_node;{struct _union_ShortestPathInfo_Shortest*_T1E=& _T14->shortest_path_info.Shortest;_T1E->tag= 2;_T1E->val= d;}goto _LL5;}_TL13C: _T16= Cyc_Warn_impos;{
# 923
int(*_T1E)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T16;_T15= _T1E;}_T17= _tag_fat("pratt_prover oops -- node is not current!",sizeof(char),42U);_T18= _tag_fat(0U,sizeof(void*),0);_T15(_T17,_T18);_LL5:;}_T19= current_shortest_node;_T1A= & q;
# 925
Cyc_PrattProver_relaxation(_T19,_T1A,1);_T1B= & q;
current_shortest_node= Cyc_PrattProver_extract_min(_T1B);
# 917
if(current_shortest_node!=0)goto _TL13A;else{goto _TL13B;}_TL13B:
# 929
 Cyc_PrattProver_set_shortest_dist_from_s(s,g,1);
return;}
# 940
static void Cyc_PrattProver_johnson(int dummy,struct Cyc_PrattProver_Graph*g){struct Cyc_PrattProver_Graph*_T0;long _T1;struct Cyc_PrattProver_Graph*_T2;struct Cyc_PrattProver_Node*_T3;struct Cyc_PrattProver_Node*_T4;struct Cyc_PrattProver_Distance*_T5;struct Cyc_PrattProver_Distance*_T6;struct Cyc_PrattProver_Node*_T7;long _T8;struct Cyc_PrattProver_Distance*_T9;struct Cyc_PrattProver_Node*_TA;struct Cyc_PrattProver_Distance*_TB;struct Cyc_PrattProver_Distance*_TC;struct Cyc_PrattProver_Distance*_TD;struct Cyc_PrattProver_Distance*_TE;struct Cyc_PrattProver_Node*_TF;struct Cyc_PrattProver_Node*_T10;struct Cyc_PrattProver_Distance*_T11;struct Cyc_PrattProver_Distance*_T12;struct Cyc_PrattProver_Node*_T13;long _T14;struct Cyc_PrattProver_Distance*_T15;struct Cyc_PrattProver_Distance*_T16;struct Cyc_PrattProver_Node*_T17;struct Cyc_PrattProver_Distance*_T18;struct Cyc_PrattProver_Distance*_T19;struct Cyc_PrattProver_Distance*_T1A;struct Cyc_PrattProver_Distance*_T1B;struct Cyc_PrattProver_Node*_T1C;struct Cyc_PrattProver_Graph*_T1D;struct Cyc_PrattProver_Node*_T1E;struct Cyc_PrattProver_Graph*_T1F;struct Cyc_PrattProver_Node*_T20;struct Cyc_PrattProver_Node*_T21;struct Cyc_PrattProver_Distance*_T22;struct Cyc_PrattProver_Distance*_T23;struct Cyc_PrattProver_Node*_T24;long _T25;struct Cyc_PrattProver_Distance*_T26;struct Cyc_PrattProver_Node*_T27;struct Cyc_PrattProver_Distance*_T28;struct Cyc_PrattProver_Distance*_T29;struct Cyc_PrattProver_Distance*_T2A;struct Cyc_PrattProver_Distance*_T2B;struct Cyc_PrattProver_Distance*_T2C;struct Cyc_PrattProver_Node*_T2D;struct Cyc_PrattProver_Node*_T2E;struct Cyc_PrattProver_Distance*_T2F;struct Cyc_PrattProver_Distance*_T30;struct Cyc_PrattProver_Node*_T31;long _T32;struct Cyc_PrattProver_Distance*_T33;struct Cyc_PrattProver_Node*_T34;struct Cyc_PrattProver_Distance*_T35;struct Cyc_PrattProver_Distance*_T36;struct Cyc_PrattProver_Distance*_T37;struct Cyc_PrattProver_Distance*_T38;struct Cyc_PrattProver_Distance*_T39;struct Cyc_PrattProver_Node*_T3A;_T0= g;_T1= _T0->changed;
# 946
if(_T1)goto _TL13E;else{goto _TL140;}
_TL140: return;_TL13E:
# 955
 Cyc_PrattProver_bellman_ford(0,g);_T2= g;{
# 962
struct Cyc_PrattProver_Node*node=_T2->rows;_TL144: if(node!=0)goto _TL142;else{goto _TL143;}
_TL142: _T3= node;{int du_unsigned=_T3->unsigneddistFromS;
struct Cyc_PrattProver_Distance*pre_dists;struct Cyc_PrattProver_Distance*dists;
pre_dists= 0;_T4= node;dists= _T4->unsigned_distances;_TL148: if(dists!=0)goto _TL146;else{goto _TL147;}
# 967
_TL146: _T5= dists;{int uv_unsigned=_T5->dist;_T6= dists;_T7= _T6->target;{
int dv_unsigned=_T7->unsigneddistFromS;
# 972
struct _tuple16 _T3B=
Cyc_PrattProver_is_signed_int_plusminus_overflow(uv_unsigned,du_unsigned,dv_unsigned);int _T3C;long _T3D;_T3D= _T3B.f0;_T3C= _T3B.f1;{long overflow=_T3D;int sum=_T3C;_T8= overflow;
if(_T8)goto _TL149;else{goto _TL14B;}
_TL14B: _T9= dists;_T9->dist= sum;goto _TL14A;
# 979
_TL149: if(pre_dists!=0)goto _TL14C;_TA= node;_TB= dists;
_TA->unsigned_distances= _TB->next;goto _TL14D;
# 982
_TL14C: _TC= pre_dists;_TD= dists;_TC->next= _TD->next;_TL14D: _TL14A:;}}}
# 966
pre_dists= dists;_TE= dists;dists= _TE->next;goto _TL148;_TL147: _TF= node;{
# 985
int du_signed=_TF->signeddistFromS;
pre_dists= 0;_T10= node;dists= _T10->signed_distances;_TL151: if(dists!=0)goto _TL14F;else{goto _TL150;}
# 988
_TL14F: _T11= dists;{int uv_signed=_T11->dist;_T12= dists;_T13= _T12->target;{
int dv_signed=_T13->signeddistFromS;
# 991
struct _tuple16 _T3B=Cyc_PrattProver_is_signed_int_plusminus_overflow(uv_signed,du_signed,dv_signed);int _T3C;long _T3D;_T3D= _T3B.f0;_T3C= _T3B.f1;{long overflow=_T3D;int sum=_T3C;_T14= overflow;
if(_T14)goto _TL152;else{goto _TL154;}
_TL154: _T15= dists;_T15->dist= sum;goto _TL153;
# 995
_TL152: _T16= dists;_T16->dist= 0;
if(pre_dists!=0)goto _TL155;_T17= node;_T18= dists;
_T17->signed_distances= _T18->next;goto _TL156;
# 999
_TL155: _T19= pre_dists;_T1A= dists;_T19->next= _T1A->next;_TL156: _TL153:;}}}
# 987
pre_dists= dists;_T1B= dists;dists= _T1B->next;goto _TL151;_TL150:;}}_T1C= node;
# 962
node= _T1C->next;goto _TL144;_TL143:;}_T1D= g;{
# 1010
struct Cyc_PrattProver_Node*node=_T1D->rows;_TL15A: if(node!=0)goto _TL158;else{goto _TL159;}
_TL158: Cyc_PrattProver_dijkstra(node,g);_T1E= node;
# 1010
node= _T1E->next;goto _TL15A;_TL159:;}_T1F= g;{
# 1020
struct Cyc_PrattProver_Node*node=_T1F->rows;_TL15E: if(node!=0)goto _TL15C;else{goto _TL15D;}
_TL15C: _T20= node;{int du_unsigned=_T20->unsigneddistFromS;
struct Cyc_PrattProver_Distance*pre_dists;struct Cyc_PrattProver_Distance*dists;
pre_dists= 0;_T21= node;dists= _T21->unsigned_distances;_TL162: if(dists!=0)goto _TL160;else{goto _TL161;}
# 1025
_TL160: _T22= dists;{int uv_unsigned=_T22->dist;_T23= dists;_T24= _T23->target;{
int dv_unsigned=_T24->unsigneddistFromS;
struct _tuple16 _T3B=
Cyc_PrattProver_is_signed_int_plusminus_overflow(uv_unsigned,dv_unsigned,du_unsigned);int _T3C;long _T3D;_T3D= _T3B.f0;_T3C= _T3B.f1;{long overflow=_T3D;int sum=_T3C;_T25= overflow;
if(_T25)goto _TL163;else{goto _TL165;}
_TL165: _T26= dists;_T26->dist= sum;goto _TL164;
_TL163: if(sum <= 0)goto _TL166;
# 1033
if(pre_dists!=0)goto _TL168;_T27= node;_T28= dists;
_T27->unsigned_distances= _T28->next;goto _TL169;
# 1036
_TL168: _T29= pre_dists;_T2A= dists;_T29->next= _T2A->next;_TL169: goto _TL167;
# 1039
_TL166: _T2B= dists;_T2B->dist= Cyc_PrattProver_INT_MIN;_TL167: _TL164:;}}}
# 1024
pre_dists= dists;_T2C= dists;dists= _T2C->next;goto _TL162;_TL161: _T2D= node;{
# 1042
int du_signed=_T2D->signeddistFromS;
pre_dists= 0;_T2E= node;dists= _T2E->signed_distances;_TL16D: if(dists!=0)goto _TL16B;else{goto _TL16C;}
# 1045
_TL16B: _T2F= dists;{int uv_signed=_T2F->dist;_T30= dists;_T31= _T30->target;{
int dv_signed=_T31->signeddistFromS;
# 1048
struct _tuple16 _T3B=Cyc_PrattProver_is_signed_int_plusminus_overflow(uv_signed,dv_signed,du_signed);int _T3C;long _T3D;_T3D= _T3B.f0;_T3C= _T3B.f1;{long overflow=_T3D;int sum=_T3C;_T32= overflow;
if(_T32)goto _TL16E;else{goto _TL170;}
_TL170: _T33= dists;_T33->dist= sum;goto _TL16F;
_TL16E: if(sum <= 0)goto _TL171;
# 1054
if(pre_dists!=0)goto _TL173;_T34= node;_T35= dists;
_T34->unsigned_distances= _T35->next;goto _TL174;
# 1057
_TL173: _T36= pre_dists;_T37= dists;_T36->next= _T37->next;_TL174: goto _TL172;
# 1060
_TL171: _T38= dists;_T38->dist= Cyc_PrattProver_INT_MIN;_TL172: _TL16F:;}}}
# 1044
pre_dists= dists;_T39= dists;dists= _T39->next;goto _TL16D;_TL16C:;}}_T3A= node;
# 1020
node= _T3A->next;goto _TL15E;_TL15D:;}
# 1068
return;}
# 1071
static void Cyc_PrattProver_set_distance(struct Cyc_PrattProver_Graph*g,void*it,void*jt,int dist,long is_signed){
struct Cyc_PrattProver_Node*i=Cyc_PrattProver_term2node(g,it);
struct Cyc_PrattProver_Node*j=Cyc_PrattProver_term2node(g,jt);
Cyc_PrattProver_set_dist(g,i,j,dist,is_signed);}
# 1078
static struct Cyc_PrattProver_Distance*Cyc_PrattProver_copy_distances(struct Cyc_PrattProver_Graph*newg,struct Cyc_PrattProver_Distance*_ds){struct Cyc_PrattProver_Distance*_T0;struct Cyc_PrattProver_Node*_T1;struct Cyc_PrattProver_Distance*_T2;struct Cyc_PrattProver_Distance*_T3;struct Cyc_PrattProver_Distance*_T4;struct Cyc_PrattProver_Distance*_T5;
struct Cyc_PrattProver_Distance*res=0;
struct Cyc_PrattProver_Distance*ds=_ds;
_TL178: if(ds!=0)goto _TL176;else{goto _TL177;}
_TL176: _T0= ds;_T1= _T0->target;{void*t=_T1->rep;{struct Cyc_PrattProver_Distance*_T6=_cycalloc(sizeof(struct Cyc_PrattProver_Distance));
_T6->next= res;({__typeof__(Cyc_PrattProver_term2node(newg,t))_T7=Cyc_PrattProver_term2node(newg,t);_T6->target= _T7;});_T3= ds;_T6->dist= _T3->dist;_T2= (struct Cyc_PrattProver_Distance*)_T6;}res= _T2;}_T4= ds;
# 1081
ds= _T4->next;goto _TL178;_TL177: _T5= res;
# 1085
return _T5;}
# 1089
static struct Cyc_PrattProver_Node*Cyc_PrattProver_revnodes(struct Cyc_PrattProver_Node*n){struct Cyc_PrattProver_Node*_T0;struct Cyc_PrattProver_Node*_T1;struct Cyc_PrattProver_Node*_T2;struct Cyc_PrattProver_Node*_T3;struct Cyc_PrattProver_Node*_T4;
if(n!=0)goto _TL179;
return 0;_TL179: {
struct Cyc_PrattProver_Node*first=n;_T0= n;{
struct Cyc_PrattProver_Node*second=_T0->next;_T1= n;
_T1->next= 0;
_TL17B: if(second!=0)goto _TL17C;else{goto _TL17D;}
_TL17C: _T2= second;{struct Cyc_PrattProver_Node*temp=_T2->next;_T3= second;
_T3->next= first;
first= second;
second= temp;}goto _TL17B;_TL17D: _T4= first;
# 1101
return _T4;}}}
# 1106
static struct Cyc_PrattProver_Graph*Cyc_PrattProver_copy_graphs(struct Cyc_PrattProver_Graph*_gopt){struct Cyc_PrattProver_Graph*_T0;struct Cyc_PrattProver_Graph*_T1;struct Cyc_PrattProver_Graph*_T2;struct Cyc_PrattProver_Graph*_T3;struct Cyc_PrattProver_Graph*_T4;struct Cyc_PrattProver_Graph*_T5;struct Cyc_PrattProver_Node*_T6;struct Cyc_PrattProver_Node*_T7;struct Cyc_PrattProver_Node*_T8;struct Cyc_PrattProver_Node*_T9;void(*_TA)(struct Cyc_Hashtable_Table*,void*,struct Cyc_PrattProver_Node*);void(*_TB)(struct Cyc_Hashtable_Table*,void*,void*);struct Cyc_PrattProver_Graph*_TC;struct Cyc_Hashtable_Table*_TD;struct Cyc_PrattProver_Node*_TE;void*_TF;struct Cyc_PrattProver_Node*_T10;struct Cyc_PrattProver_Node*_T11;struct Cyc_PrattProver_Graph*_T12;struct Cyc_PrattProver_Graph*_T13;struct Cyc_PrattProver_Node*_T14;struct Cyc_PrattProver_Graph*_T15;struct Cyc_PrattProver_Node*_T16;struct Cyc_PrattProver_Distance*_T17;struct Cyc_PrattProver_Node*_T18;struct Cyc_PrattProver_Graph*_T19;struct Cyc_PrattProver_Node*_T1A;struct Cyc_PrattProver_Distance*_T1B;struct Cyc_PrattProver_Node*_T1C;struct Cyc_PrattProver_Node*_T1D;struct Cyc_PrattProver_Graph*_T1E;struct Cyc_PrattProver_Graph*_T1F;
struct Cyc_PrattProver_Graph*res=0;
struct Cyc_PrattProver_Graph*gopt=_gopt;
_TL181: if(gopt!=0)goto _TL17F;else{goto _TL180;}
_TL17F: Cyc_PrattProver_graphs_copied= Cyc_PrattProver_graphs_copied + 1;{
struct Cyc_PrattProver_Graph*g=gopt;
# 1113
struct Cyc_PrattProver_Graph*newg;newg= _cycalloc(sizeof(struct Cyc_PrattProver_Graph));_T0= newg;
_T0->next= res;_T1= newg;_T1->rows= 0;_T2= newg;({__typeof__(Cyc_PrattProver_empty_map(17U))_T20=Cyc_PrattProver_empty_map(17U);_T2->map= _T20;});_T3= newg;_T4= g;_T3->changed= _T4->changed;
res= newg;{
# 1117
struct Cyc_PrattProver_Node*newrs=0;_T5= g;{
struct Cyc_PrattProver_Node*rs=_T5->rows;_TL185: if(rs!=0)goto _TL183;else{goto _TL184;}
_TL183:{struct Cyc_PrattProver_Node*_T20=_cycalloc(sizeof(struct Cyc_PrattProver_Node));_T20->next= newrs;_T7= rs;_T20->rep= _T7->rep;_T8= rs;_T20->broken_as_signed= _T8->broken_as_signed;_T9= rs;_T20->broken_as_unsigned= _T9->broken_as_unsigned;_T20->unsigned_distances= 0;_T20->signed_distances= 0;_T20->signeddistFromS= 0;
_T20->unsigneddistFromS= 0;_T20->shortest_path_info= Cyc_PrattProver_infinity;_T6= (struct Cyc_PrattProver_Node*)_T20;}
# 1119
newrs= _T6;_TB= Cyc_Hashtable_insert;{
# 1121
void(*_T20)(struct Cyc_Hashtable_Table*,void*,struct Cyc_PrattProver_Node*)=(void(*)(struct Cyc_Hashtable_Table*,void*,struct Cyc_PrattProver_Node*))_TB;_TA= _T20;}_TC= newg;_TD= _TC->map;_TE= rs;_TF= _TE->rep;_T10= newrs;_TA(_TD,_TF,_T10);_T11= rs;
# 1118
rs= _T11->next;goto _TL185;_TL184:;}
# 1123
newrs= Cyc_PrattProver_revnodes(newrs);_T12= newg;
_T12->rows= newrs;_T13= g;{
# 1126
struct Cyc_PrattProver_Node*rs=_T13->rows;_TL189: if(rs!=0)goto _TL187;else{goto _TL188;}
_TL187: _T14= _check_null(newrs);_T15= newg;_T16= rs;_T17= _T16->unsigned_distances;({__typeof__(Cyc_PrattProver_copy_distances(_T15,_T17))_T20=Cyc_PrattProver_copy_distances(_T15,_T17);_T14->unsigned_distances= _T20;});_T18= newrs;_T19= newg;_T1A= rs;_T1B= _T1A->signed_distances;
({__typeof__(Cyc_PrattProver_copy_distances(_T19,_T1B))_T20=Cyc_PrattProver_copy_distances(_T19,_T1B);_T18->signed_distances= _T20;});_T1C= rs;
# 1126
rs= _T1C->next;_T1D= newrs;newrs= _T1D->next;goto _TL189;_TL188:;}}}_T1E= gopt;
# 1109
gopt= _T1E->next;goto _TL181;_TL180: _T1F= res;
# 1131
return _T1F;}
# 1135
static long Cyc_PrattProver_graphs_change=0;
# 1140
static struct Cyc_PrattProver_Graph*Cyc_PrattProver_app_graphs(void(*f)(void*,struct Cyc_PrattProver_Graph*),void*e,struct Cyc_PrattProver_Graph*gs){struct _handler_cons*_T0;int _T1;void*_T2;struct Cyc_PrattProver_Inconsistent_exn_struct*_T3;char*_T4;char*_T5;struct Cyc_PrattProver_Graph*_T6;struct Cyc_PrattProver_Graph*_T7;struct Cyc_PrattProver_Graph*_T8;struct Cyc_PrattProver_Graph*_T9;struct Cyc_PrattProver_Graph*_TA;
struct Cyc_PrattProver_Graph*prev=0;{
struct Cyc_PrattProver_Graph*g=gs;_TL18D: if(g!=0)goto _TL18B;else{goto _TL18C;}
_TL18B:{struct _handler_cons _TB;_T0= & _TB;_push_handler(_T0);{int _TC=0;_T1= setjmp(_TB.handler);if(!_T1)goto _TL18E;_TC= 1;goto _TL18F;_TL18E: _TL18F: if(_TC)goto _TL190;else{goto _TL192;}_TL192:
 f(e,g);
prev= g;_pop_handler();goto _TL191;_TL190: _T2= Cyc_Core_get_exn_thrown();{void*_TD=(void*)_T2;void*_TE;_T3= (struct Cyc_PrattProver_Inconsistent_exn_struct*)_TD;_T4= _T3->tag;_T5= Cyc_PrattProver_Inconsistent;if(_T4!=_T5)goto _TL193;
# 1148
Cyc_PrattProver_graphs_change= 1;
if(prev!=0)goto _TL195;_T6= g;
gs= _T6->next;goto _TL196;
# 1152
_TL195: _T7= prev;_T8= g;_T7->next= _T8->next;_TL196: goto _LL0;_TL193: _TE= _TD;{void*exn=_TE;_rethrow(exn);}_LL0:;}_TL191:;}}_T9= g;
# 1142
g= _T9->next;goto _TL18D;_TL18C:;}_TA= gs;
# 1157
return _TA;}
# 1160
static long Cyc_PrattProver_is_relation(enum Cyc_Absyn_Primop p){enum Cyc_Absyn_Primop _T0;int _T1;_T0= p;_T1= (int)_T0;switch(_T1){case Cyc_Absyn_Gt: goto _LL4;case Cyc_Absyn_Lt: _LL4: goto _LL6;case Cyc_Absyn_Gte: _LL6: goto _LL8;case Cyc_Absyn_Lte: _LL8: goto _LLA;case Cyc_Absyn_UGt: _LLA: goto _LLC;case Cyc_Absyn_ULt: _LLC: goto _LLE;case Cyc_Absyn_UGte: _LLE: goto _LL10;case Cyc_Absyn_ULte: _LL10:
# 1170
 return 1;default:
# 1172
 return 0;};}
# 1176
static unsigned Cyc_PrattProver_eval_binop(enum Cyc_Absyn_Primop p,unsigned c1,unsigned c2){enum Cyc_Absyn_Primop _T0;int _T1;unsigned _T2;unsigned _T3;unsigned _T4;unsigned _T5;unsigned _T6;unsigned _T7;int _T8;unsigned _T9;int _TA;int _TB;unsigned _TC;unsigned _TD;int _TE;unsigned _TF;int _T10;int _T11;unsigned _T12;int _T13;unsigned _T14;int _T15;unsigned _T16;unsigned _T17;unsigned _T18;unsigned _T19;unsigned _T1A;unsigned _T1B;int(*_T1C)(struct _fat_ptr,struct _fat_ptr);void*(*_T1D)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T1E;struct Cyc_String_pa_PrintArg_struct _T1F;struct _fat_ptr _T20;struct _fat_ptr _T21;struct _fat_ptr _T22;_T0= p;_T1= (int)_T0;switch(_T1){case Cyc_Absyn_Plus: _T2= c1 + c2;
# 1182
return _T2;case Cyc_Absyn_Times: _T3= c1 * c2;
# 1184
return _T3;case Cyc_Absyn_Minus: _T4= c1 - c2;
# 1186
return _T4;case Cyc_Absyn_UDiv: _T5= c1 / c2;
# 1188
return _T5;case Cyc_Absyn_UMod: _T6= c1 % c2;
# 1190
return _T6;case Cyc_Absyn_Div: _T7= c1;_T8= (int)_T7;_T9= c2;_TA= (int)_T9;_TB= _T8 / _TA;_TC= (unsigned)_TB;
# 1192
return _TC;case Cyc_Absyn_Mod: _TD= c1;_TE= (int)_TD;_TF= c2;_T10= (int)_TF;_T11= _TE % _T10;_T12= (unsigned)_T11;
# 1194
return _T12;case Cyc_Absyn_Eq: _T13= c1==c2;_T14= (unsigned)_T13;
# 1196
return _T14;case Cyc_Absyn_Neq: _T15= c1!=c2;_T16= (unsigned)_T15;
# 1198
return _T16;case Cyc_Absyn_Bitand: _T17= c1 & c2;
# 1200
return _T17;case Cyc_Absyn_Bitor: _T18= c1 | c2;
# 1202
return _T18;case Cyc_Absyn_Bitxor: _T19= c1 ^ c2;
# 1204
return _T19;case Cyc_Absyn_Bitlshift: _T1A= c1 << c2;
# 1206
return _T1A;case Cyc_Absyn_Bitlrshift: _T1B= c1 >> c2;
# 1208
return _T1B;default: _T1D= Cyc_Warn_impos;{
# 1210
int(*_T23)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T1D;_T1C= _T23;}{struct Cyc_String_pa_PrintArg_struct _T23;_T23.tag= 0;({__typeof__(Cyc_Absynpp_prim2string(p))_T24=Cyc_Absynpp_prim2string(p);_T23.f1= _T24;});_T1F= _T23;}{struct Cyc_String_pa_PrintArg_struct _T23=_T1F;void*_T24[1];_T24[0]= & _T23;_T20= _tag_fat("Invalid binop %s during constant evaluation",sizeof(char),44U);_T21= _tag_fat(_T24,sizeof(void*),1);_T1E= Cyc_aprintf(_T20,_T21);}_T22= _tag_fat(0U,sizeof(void*),0);_T1C(_T1E,_T22);}
# 1212
return 0U;}
# 1215
static unsigned Cyc_PrattProver_eval_unop(enum Cyc_Absyn_Primop p,unsigned c){enum Cyc_Absyn_Primop _T0;int _T1;unsigned _T2;int _T3;int _T4;unsigned _T5;unsigned _T6;unsigned _T7;unsigned _T8;int(*_T9)(struct _fat_ptr,struct _fat_ptr);void*(*_TA)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _TB;struct Cyc_String_pa_PrintArg_struct _TC;struct _fat_ptr _TD;struct _fat_ptr _TE;struct _fat_ptr _TF;_T0= p;_T1= (int)_T0;switch(_T1){case Cyc_Absyn_Not: _T2= c;_T3= (int)_T2;_T4= !_T3;_T5= (unsigned)_T4;
# 1218
return _T5;case Cyc_Absyn_Bitnot: _T6= ~ c;
# 1220
return _T6;case Cyc_Absyn_Plus: _T7= c;
# 1222
return _T7;case Cyc_Absyn_Minus: _T8= - c;
# 1224
return _T8;default: _TA= Cyc_Warn_impos;{
# 1226
int(*_T10)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_TA;_T9= _T10;}{struct Cyc_String_pa_PrintArg_struct _T10;_T10.tag= 0;({__typeof__(Cyc_Absynpp_prim2string(p))_T11=Cyc_Absynpp_prim2string(p);_T10.f1= _T11;});_TC= _T10;}{struct Cyc_String_pa_PrintArg_struct _T10=_TC;void*_T11[1];_T11[0]= & _T10;_TD= _tag_fat("Invalid unop %s during constant evaluation",sizeof(char),43U);_TE= _tag_fat(_T11,sizeof(void*),1);_TB= Cyc_aprintf(_TD,_TE);}_TF= _tag_fat(0U,sizeof(void*),0);_T9(_TB,_TF);}
# 1228
return 0U;}struct _tuple18{long f0;unsigned f1;};
# 1231
static struct _tuple18 Cyc_PrattProver_eq_node_const(struct Cyc_PrattProver_Node*n,struct Cyc_PrattProver_Node*z,long is_signed){int*_T0;int _T1;int _T2;int*_T3;int _T4;struct _tuple18 _T5;int*_T6;int _T7;struct _tuple18 _T8;
int*n2z=Cyc_PrattProver_lookup_dist(n,z,is_signed);
int*z2n=Cyc_PrattProver_lookup_dist(z,n,is_signed);
# 1237
if(n2z==0)goto _TL19A;if(z2n==0)goto _TL19A;_T0= z2n;_T1= *_T0;_T2= - _T1;_T3= n2z;_T4= *_T3;if(_T2!=_T4)goto _TL19A;{struct _tuple18 _T9;
_T9.f0= 1;_T6= n2z;_T7= *_T6;_T9.f1= (unsigned)_T7;_T5= _T9;}return _T5;_TL19A:{struct _tuple18 _T9;
_T9.f0= 0;_T9.f1= 2989U;_T8= _T9;}return _T8;}
# 1244
static struct _tuple18 Cyc_PrattProver_equal_node_const(struct Cyc_PrattProver_Node*n,struct Cyc_PrattProver_Node*z){long _T0;struct _tuple18 _T1;struct _tuple18 _T2;
struct _tuple18 _T3=Cyc_PrattProver_eq_node_const(n,z,1);unsigned _T4;long _T5;_T5= _T3.f0;_T4= _T3.f1;{long ok=_T5;unsigned c=_T4;_T0= ok;
if(_T0)goto _TL19C;else{goto _TL19E;}
_TL19E: _T1= Cyc_PrattProver_eq_node_const(n,z,0);return _T1;
# 1249
_TL19C:{struct _tuple18 _T6;_T6.f0= ok;_T6.f1= c;_T2= _T6;}return _T2;}}
# 1253
static struct _tuple14 Cyc_PrattProver_subst_term_with_const(struct Cyc_PrattProver_Graph*g,void*t){void*_T0;int*_T1;unsigned _T2;void*_T3;struct _tuple14 _T4;void*_T5;void*_T6;void*_T7;void*_T8;long _T9;long _TA;enum Cyc_Absyn_Primop _TB;void*_TC;void*_TD;void*_TE;long _TF;enum Cyc_Absyn_Primop _T10;void*_T11;void*_T12;void*_T13;long _T14;long _T15;struct _tuple14 _T16;void*_T17;void*_T18;void*_T19;enum Cyc_Absyn_Primop _T1A;int _T1B;long _T1C;struct Cyc_PrattProver_Graph*_T1D;void*_T1E;unsigned _T1F;void*_T20;struct _tuple14 _T21;struct Cyc_PrattProver_Graph*_T22;void*_T23;long _T24;struct _tuple14 _T25;struct _tuple14 _T26;
void*newterm=0;{void*_T27;void*_T28;void*_T29;enum Cyc_Absyn_Primop _T2A;unsigned _T2B;_T0= t;_T1= (int*)_T0;_T2= *_T1;switch(_T2){case 0: _T3= t;{struct Cyc_AssnDef_Uint_AssnDef_Term_struct*_T2C=(struct Cyc_AssnDef_Uint_AssnDef_Term_struct*)_T3;_T2B= _T2C->f1;}{unsigned c=_T2B;{struct _tuple14 _T2C;
# 1257
_T2C.f0= 1;_T2C.f1= c;_T2C.f2= 0;_T4= _T2C;}return _T4;}case 4: _T5= t;{struct Cyc_AssnDef_Binop_AssnDef_Term_struct*_T2C=(struct Cyc_AssnDef_Binop_AssnDef_Term_struct*)_T5;_T2A= _T2C->f1;_T6= _T2C->f2;_T29= (void*)_T6;_T7= _T2C->f3;_T28= (void*)_T7;_T8= _T2C->f4;_T27= (void*)_T8;}{enum Cyc_Absyn_Primop p=_T2A;void*t1=_T29;void*t2=_T28;void*topt=_T27;_T9= 
# 1262
Cyc_PrattProver_is_relation(p);if(!_T9)goto _TL1A0;goto _LL0;_TL1A0: {
# 1264
struct _tuple14 _T2C=Cyc_PrattProver_subst_term_with_const(g,t1);void*_T2D;unsigned _T2E;long _T2F;_T2F= _T2C.f0;_T2E= _T2C.f1;_T2D= _T2C.f2;{long ok1=_T2F;unsigned c1=_T2E;void*nt1=_T2D;
struct _tuple14 _T30=Cyc_PrattProver_subst_term_with_const(g,t2);void*_T31;unsigned _T32;long _T33;_T33= _T30.f0;_T32= _T30.f1;_T31= _T30.f2;{long ok2=_T33;unsigned c2=_T32;void*nt2=_T31;
# 1268
if(nt1==0)goto _TL1A2;
newterm= Cyc_AssnDef_binop(p,nt1,t2,topt);
Cyc_PrattProver_add_eq(g,t,newterm);goto _TL1A3;_TL1A2: _TL1A3:
# 1272
 if(nt2==0)goto _TL1A4;
newterm= Cyc_AssnDef_binop(p,t1,nt2,topt);
Cyc_PrattProver_add_eq(g,t,newterm);goto _TL1A5;_TL1A4: _TL1A5: _TA= ok1;
# 1276
if(!_TA)goto _TL1A6;_TB= p;_TC= 
Cyc_AssnDef_uint(c1);_TD= t2;_TE= topt;newterm= Cyc_AssnDef_binop(_TB,_TC,_TD,_TE);
Cyc_PrattProver_add_eq(g,t,newterm);goto _TL1A7;_TL1A6: _TL1A7: _TF= ok2;
# 1280
if(!_TF)goto _TL1A8;_T10= p;_T11= t1;_T12= 
Cyc_AssnDef_uint(c2);_T13= topt;newterm= Cyc_AssnDef_binop(_T10,_T11,_T12,_T13);
Cyc_PrattProver_add_eq(g,t,newterm);goto _TL1A9;_TL1A8: _TL1A9: _T14= ok1;
# 1284
if(!_T14)goto _TL1AA;_T15= ok2;if(!_T15)goto _TL1AA;{struct _tuple14 _T34;
_T34.f0= 1;({__typeof__(Cyc_PrattProver_eval_binop(p,c1,c2))_T35=Cyc_PrattProver_eval_binop(p,c1,c2);_T34.f1= _T35;});_T34.f2= 0;_T16= _T34;}return _T16;_TL1AA: goto _LL0;}}}}case 3: _T17= t;{struct Cyc_AssnDef_Unop_AssnDef_Term_struct*_T2C=(struct Cyc_AssnDef_Unop_AssnDef_Term_struct*)_T17;_T2A= _T2C->f1;_T18= _T2C->f2;_T29= (void*)_T18;_T19= _T2C->f3;_T28= (void*)_T19;}{enum Cyc_Absyn_Primop p=_T2A;void*t1=_T29;void*topt=_T28;_T1A= p;_T1B= (int)_T1A;
# 1289
if(_T1B!=18)goto _TL1AC;goto _LL0;_TL1AC: {
# 1291
struct _tuple14 _T2C=Cyc_PrattProver_subst_term_with_const(g,t1);unsigned _T2D;long _T2E;_T2E= _T2C.f0;_T2D= _T2C.f1;{long ok1=_T2E;unsigned c1=_T2D;_T1C= ok1;
if(!_T1C)goto _TL1AE;_T1D= g;_T1E= t;_T1F= 
Cyc_PrattProver_eval_unop(p,c1);_T20= Cyc_AssnDef_uint(_T1F);Cyc_PrattProver_add_eq(_T1D,_T1E,_T20);{struct _tuple14 _T2F;
_T2F.f0= 1;({__typeof__(Cyc_PrattProver_eval_unop(p,c1))_T30=Cyc_PrattProver_eval_unop(p,c1);_T2F.f1= _T30;});_T2F.f2= 0;_T21= _T2F;}return _T21;_TL1AE: goto _LL0;}}}default: goto _LL0;}_LL0:;}
# 1300
if(t!=newterm)goto _TL1B0;
newterm= 0;goto _TL1B1;_TL1B0: _TL1B1: {
struct Cyc_PrattProver_Node*n_node=Cyc_PrattProver_term2node(g,t);_T22= g;_T23= 
Cyc_AssnDef_zero();{struct Cyc_PrattProver_Node*z_node=Cyc_PrattProver_term2node(_T22,_T23);
struct _tuple18 _T27=Cyc_PrattProver_equal_node_const(n_node,z_node);unsigned _T28;long _T29;_T29= _T27.f0;_T28= _T27.f1;{long ok=_T29;unsigned c=_T28;_T24= ok;
if(!_T24)goto _TL1B2;{struct _tuple14 _T2A;
_T2A.f0= 1;_T2A.f1= c;_T2A.f2= newterm;_T25= _T2A;}return _T25;_TL1B2:{struct _tuple14 _T2A;
_T2A.f0= 0;_T2A.f1= 2989U;_T2A.f2= newterm;_T26= _T2A;}return _T26;}}}}
# 1313
inline static long Cyc_PrattProver_better_term(void*t1,void*t2){struct _tuple15 _T0;void*_T1;int*_T2;int _T3;void*_T4;int*_T5;int _T6;void*_T7;void*_T8;int _T9;void*_TA;int*_TB;int _TC;void*_TD;int*_TE;int _TF;void*_T10;int*_T11;int _T12;void*_T13;int*_T14;int _T15;void*_T16;int*_T17;int _T18;void*_T19;int*_T1A;int _T1B;void*_T1C;int*_T1D;int _T1E;void*_T1F;int*_T20;int _T21;void*_T22;int*_T23;int _T24;void*_T25;int*_T26;int _T27;void*_T28;int*_T29;unsigned _T2A;void*_T2B;int*_T2C;int _T2D;void*_T2E;void*_T2F;void*_T30;void*_T31;void*_T32;int*_T33;int _T34;void*_T35;void*_T36;void*_T37;void*_T38;void*_T39;void*_T3A;long _T3B;
loop:{struct _tuple15 _T3C;
_T3C.f0= t1;_T3C.f1= t2;_T0= _T3C;}{struct _tuple15 _T3C=_T0;void*_T3D;void*_T3E;void*_T3F;void*_T40;int _T41;int _T42;_T1= _T3C.f0;_T2= (int*)_T1;_T3= *_T2;if(_T3!=2)goto _TL1B4;_T4= _T3C.f1;_T5= (int*)_T4;_T6= *_T5;if(_T6!=2)goto _TL1B6;_T7= _T3C.f0;{struct Cyc_AssnDef_LogicVar_AssnDef_Term_struct*_T43=(struct Cyc_AssnDef_LogicVar_AssnDef_Term_struct*)_T7;_T42= _T43->f2;}_T8= _T3C.f1;{struct Cyc_AssnDef_LogicVar_AssnDef_Term_struct*_T43=(struct Cyc_AssnDef_LogicVar_AssnDef_Term_struct*)_T8;_T41= _T43->f2;}{int i=_T42;int j=_T41;_T9= i < j;
# 1319
return _T9;}_TL1B6:
# 1323
 return 0;_TL1B4: _TA= _T3C.f1;_TB= (int*)_TA;_TC= *_TB;if(_TC!=2)goto _TL1B8;
# 1321
return 1;_TL1B8: _TD= _T3C.f0;_TE= (int*)_TD;_TF= *_TE;if(_TF!=0)goto _TL1BA;_T10= _T3C.f1;_T11= (int*)_T10;_T12= *_T11;if(_T12!=0)goto _TL1BC;
# 1326
return 0;_TL1BC:
# 1328
 return 1;_TL1BA: _T13= _T3C.f1;_T14= (int*)_T13;_T15= *_T14;if(_T15!=0)goto _TL1BE;
# 1330
return 0;_TL1BE: _T16= _T3C.f0;_T17= (int*)_T16;_T18= *_T17;if(_T18!=11)goto _TL1C0;_T19= _T3C.f1;_T1A= (int*)_T19;_T1B= *_T1A;if(_T1B!=11)goto _TL1C2;
# 1333
return 0;_TL1C2:
# 1335
 return 1;_TL1C0: _T1C= _T3C.f1;_T1D= (int*)_T1C;_T1E= *_T1D;if(_T1E!=11)goto _TL1C4;
# 1337
return 0;_TL1C4: _T1F= _T3C.f0;_T20= (int*)_T1F;_T21= *_T20;if(_T21!=12)goto _TL1C6;_T22= _T3C.f1;_T23= (int*)_T22;_T24= *_T23;if(_T24!=12)goto _TL1C8;
# 1340
return 0;_TL1C8:
# 1342
 return 1;_TL1C6: _T25= _T3C.f1;_T26= (int*)_T25;_T27= *_T26;if(_T27!=12)goto _TL1CA;
# 1344
return 0;_TL1CA: _T28= _T3C.f0;_T29= (int*)_T28;_T2A= *_T29;switch(_T2A){case 13: _T2B= _T3C.f1;_T2C= (int*)_T2B;_T2D= *_T2C;if(_T2D!=13)goto _TL1CD;_T2E= _T3C.f0;{struct Cyc_AssnDef_Offsetf_AssnDef_Term_struct*_T43=(struct Cyc_AssnDef_Offsetf_AssnDef_Term_struct*)_T2E;_T2F= _T43->f1;_T40= (void*)_T2F;}_T30= _T3C.f1;{struct Cyc_AssnDef_Offsetf_AssnDef_Term_struct*_T43=(struct Cyc_AssnDef_Offsetf_AssnDef_Term_struct*)_T30;_T31= _T43->f1;_T3F= (void*)_T31;}{void*t1a=_T40;void*t2a=_T3F;
# 1347
t1= t1a;
t2= t2a;goto loop;}_TL1CD: goto _LL1D;case 14: _T32= _T3C.f1;_T33= (int*)_T32;_T34= *_T33;if(_T34!=14)goto _TL1CF;_T35= _T3C.f0;{struct Cyc_AssnDef_Offseti_AssnDef_Term_struct*_T43=(struct Cyc_AssnDef_Offseti_AssnDef_Term_struct*)_T35;_T36= _T43->f1;_T40= (void*)_T36;_T37= _T43->f2;_T3F= (void*)_T37;}_T38= _T3C.f1;{struct Cyc_AssnDef_Offseti_AssnDef_Term_struct*_T43=(struct Cyc_AssnDef_Offseti_AssnDef_Term_struct*)_T38;_T39= _T43->f1;_T3E= (void*)_T39;_T3A= _T43->f2;_T3D= (void*)_T3A;}{void*t1a=_T40;void*t1b=_T3F;void*t2a=_T3E;void*t2b=_T3D;_T3B= 
# 1351
Cyc_PrattProver_better_term(t1a,t2a);if(_T3B)goto _TL1D1;else{goto _TL1D3;}
_TL1D3: return 0;_TL1D1:
 t1= t1b;
t2= t2b;goto loop;}_TL1CF: goto _LL1D;default: _LL1D:
# 1357
 return 0;};}}
# 1362
static long Cyc_PrattProver_occurs_i(void*t1,void*t2,struct Cyc_Set_Set**seen){struct Cyc_Set_Set**_T0;struct Cyc_Set_Set*_T1;void*_T2;long _T3;struct Cyc_Set_Set**_T4;struct Cyc_Set_Set**_T5;struct Cyc_Set_Set*_T6;void*_T7;void*_T8;int*_T9;unsigned _TA;void*_TB;void*_TC;void*_TD;void*_TE;void*_TF;long _T10;void*_T11;void*_T12;void*_T13;void*_T14;void*_T15;long _T16;void*_T17;void*_T18;void*_T19;void*_T1A;long _T1B;long _T1C;void*_T1D;void*_T1E;struct Cyc_List_List*_T1F;void*_T20;struct Cyc_Set_Set**_T21;long _T22;struct Cyc_List_List*_T23;void*_T24;void*_T25;void*_T26;void*_T27;void*_T28;long _T29;void*_T2A;void*_T2B;void*_T2C;void*_T2D;void*_T2E;long _T2F;void*_T30;void*_T31;void*_T32;void*_T33;void*_T34;long _T35;void*_T36;void*_T37;
loop:
 if(t1!=t2)goto _TL1D4;
return 1;_TL1D4: _T0= seen;_T1= *_T0;_T2= t2;_T3= 
Cyc_Set_member(_T1,_T2);if(!_T3)goto _TL1D6;
return 0;_TL1D6: _T4= seen;_T5= seen;_T6= *_T5;_T7= t2;
({__typeof__(Cyc_Set_insert(_T6,_T7))_T38=Cyc_Set_insert(_T6,_T7);*_T4= _T38;});{void*_T38;void*_T39;void*_T3A;_T8= t2;_T9= (int*)_T8;_TA= *_T9;switch(_TA){case 3: _TB= t2;{struct Cyc_AssnDef_Unop_AssnDef_Term_struct*_T3B=(struct Cyc_AssnDef_Unop_AssnDef_Term_struct*)_TB;_TC= _T3B->f2;_T3A= (void*)_TC;}{void*s=_T3A;
# 1371
t2= s;goto loop;}case 4: _TD= t2;{struct Cyc_AssnDef_Binop_AssnDef_Term_struct*_T3B=(struct Cyc_AssnDef_Binop_AssnDef_Term_struct*)_TD;_TE= _T3B->f2;_T3A= (void*)_TE;_TF= _T3B->f3;_T39= (void*)_TF;}{void*s1=_T3A;void*s2=_T39;_T10= 
# 1374
Cyc_PrattProver_occurs_i(t1,s1,seen);if(!_T10)goto _TL1D9;
return 1;_TL1D9:
 t2= s2;goto loop;}case 5: _T11= t2;{struct Cyc_AssnDef_Cast_AssnDef_Term_struct*_T3B=(struct Cyc_AssnDef_Cast_AssnDef_Term_struct*)_T11;_T12= _T3B->f2;_T3A= (void*)_T12;}{void*s=_T3A;
# 1379
t2= s;goto loop;}case 6: _T13= t2;{struct Cyc_AssnDef_Select_AssnDef_Term_struct*_T3B=(struct Cyc_AssnDef_Select_AssnDef_Term_struct*)_T13;_T14= _T3B->f1;_T3A= (void*)_T14;_T15= _T3B->f2;_T39= (void*)_T15;}{void*s1=_T3A;void*s2=_T39;_T16= 
# 1382
Cyc_PrattProver_occurs_i(t1,s1,seen);if(!_T16)goto _TL1DB;
return 1;_TL1DB:
 t2= s2;goto loop;}case 7: _T17= t2;{struct Cyc_AssnDef_Update_AssnDef_Term_struct*_T3B=(struct Cyc_AssnDef_Update_AssnDef_Term_struct*)_T17;_T18= _T3B->f1;_T3A= (void*)_T18;_T19= _T3B->f2;_T39= (void*)_T19;_T1A= _T3B->f3;_T38= (void*)_T1A;}{void*s1=_T3A;void*s2=_T39;void*s3=_T38;_T1B= 
# 1387
Cyc_PrattProver_occurs_i(t1,s1,seen);if(_T1B)goto _TL1DF;else{goto _TL1E0;}_TL1E0: _T1C= Cyc_PrattProver_occurs_i(t2,s2,seen);if(_T1C)goto _TL1DF;else{goto _TL1DD;}
_TL1DF: return 1;_TL1DD:
 t2= s3;goto loop;}case 8: _T1D= t2;{struct Cyc_AssnDef_Aggr_AssnDef_Term_struct*_T3B=(struct Cyc_AssnDef_Aggr_AssnDef_Term_struct*)_T1D;_T3A= _T3B->f3;}{struct Cyc_List_List*ss=_T3A;
# 1392
_TL1E4: if(ss!=0)goto _TL1E2;else{goto _TL1E3;}
_TL1E2: _T1E= t1;_T1F= ss;_T20= _T1F->hd;_T21= seen;_T22= Cyc_PrattProver_occurs_i(_T1E,_T20,_T21);if(!_T22)goto _TL1E5;
return 1;_TL1E5: _T23= ss;
# 1392
ss= _T23->tl;goto _TL1E4;_TL1E3:
# 1395
 return 0;}case 9: _T24= t2;{struct Cyc_AssnDef_Proj_AssnDef_Term_struct*_T3B=(struct Cyc_AssnDef_Proj_AssnDef_Term_struct*)_T24;_T25= _T3B->f1;_T3A= (void*)_T25;}{void*s=_T3A;
# 1397
t2= s;goto loop;}case 10: _T26= t2;{struct Cyc_AssnDef_AggrUpdate_AssnDef_Term_struct*_T3B=(struct Cyc_AssnDef_AggrUpdate_AssnDef_Term_struct*)_T26;_T27= _T3B->f1;_T3A= (void*)_T27;_T28= _T3B->f3;_T39= (void*)_T28;}{void*s1=_T3A;void*s2=_T39;_T29= 
# 1400
Cyc_PrattProver_occurs_i(t1,s1,seen);if(!_T29)goto _TL1E7;
return 1;_TL1E7:
 t2= s2;goto loop;}case 11: _T2A= t2;{struct Cyc_AssnDef_Addr_AssnDef_Term_struct*_T3B=(struct Cyc_AssnDef_Addr_AssnDef_Term_struct*)_T2A;_T2B= _T3B->f2;_T3A= (void*)_T2B;}{void*s=_T3A;
# 1405
t2= s;goto loop;}case 12: _T2C= t2;{struct Cyc_AssnDef_Alloc_AssnDef_Term_struct*_T3B=(struct Cyc_AssnDef_Alloc_AssnDef_Term_struct*)_T2C;_T2D= _T3B->f3;_T3A= (void*)_T2D;_T2E= _T3B->f4;_T39= (void*)_T2E;}{void*s1=_T3A;void*s2=_T39;_T2F= 
# 1408
Cyc_PrattProver_occurs_i(t1,s1,seen);if(!_T2F)goto _TL1E9;
return 1;_TL1E9:
 t2= s2;goto loop;}case 13: _T30= t2;{struct Cyc_AssnDef_Offsetf_AssnDef_Term_struct*_T3B=(struct Cyc_AssnDef_Offsetf_AssnDef_Term_struct*)_T30;_T31= _T3B->f1;_T3A= (void*)_T31;}{void*s=_T3A;
# 1413
t2= s;goto loop;}case 14: _T32= t2;{struct Cyc_AssnDef_Offseti_AssnDef_Term_struct*_T3B=(struct Cyc_AssnDef_Offseti_AssnDef_Term_struct*)_T32;_T33= _T3B->f1;_T3A= (void*)_T33;_T34= _T3B->f2;_T39= (void*)_T34;}{void*s1=_T3A;void*s2=_T39;_T35= 
# 1416
Cyc_PrattProver_occurs_i(t1,s1,seen);if(!_T35)goto _TL1EB;
return 1;_TL1EB:
 t2= s2;goto loop;}case 15: _T36= t2;{struct Cyc_AssnDef_Tagof_AssnDef_Term_struct*_T3B=(struct Cyc_AssnDef_Tagof_AssnDef_Term_struct*)_T36;_T37= _T3B->f1;_T3A= (void*)_T37;}{void*s=_T3A;
# 1421
t2= s;goto loop;}default:
# 1424
 return 0;};}}
# 1428
static long Cyc_PrattProver_occurs(void*t1,void*t2){int(*_T0)(void*,void*);void*_T1;void*_T2;struct Cyc_Set_Set**_T3;long _T4;_T0= Cyc_AssnDef_termcmp;{
struct Cyc_Set_Set*seen=Cyc_Set_empty(_T0);_T1= t1;_T2= t2;_T3= & seen;_T4= 
Cyc_PrattProver_occurs_i(_T1,_T2,_T3);return _T4;}}
# 1433
inline static long Cyc_PrattProver_is_var_term(void*t){void*_T0;int*_T1;int _T2;_T0= t;_T1= (int*)_T0;_T2= *_T1;if(_T2!=2)goto _TL1ED;
# 1436
return 1;_TL1ED:
# 1438
 return 0;;}
# 1446
static void Cyc_PrattProver_subst_close_graph(long vars_only,struct Cyc_PrattProver_Graph*g){struct Cyc_PrattProver_Graph*_T0;void*_T1;struct Cyc_PrattProver_Graph*_T2;struct Cyc_PrattProver_Node*_T3;long _T4;long _T5;int*_T6;int _T7;int*_T8;int _T9;int _TA;int*_TB;int _TC;unsigned _TD;int*_TE;int _TF;int*_T10;int _T11;int _T12;int*_T13;int _T14;unsigned _T15;struct Cyc_PrattProver_Graph*_T16;struct Cyc_PrattProver_Node*_T17;long _T18;long _T19;long _T1A;struct Cyc_PrattProver_Node*_T1B;long _T1C;struct Cyc_PrattProver_Node*_T1D;long _T1E;struct Cyc_PrattProver_Graph*_T1F;struct Cyc_PrattProver_Node*_T20;struct Cyc_PrattProver_Node*_T21;_T0= g;_T1= 
# 1453
Cyc_AssnDef_zero();{struct Cyc_PrattProver_Node*z_node=Cyc_PrattProver_term2node(_T0,_T1);
struct Cyc_Hashtable_Table*eq=Cyc_AssnDef_empty_term_table();
long changed=0;_T2= g;{
struct Cyc_PrattProver_Node*rs=_T2->rows;_TL1F2: if(rs!=0)goto _TL1F0;else{goto _TL1F1;}
_TL1F0: _T3= rs;{void*t1=_T3->rep;_T4= vars_only;
if(!_T4)goto _TL1F3;_T5= Cyc_PrattProver_is_var_term(t1);if(_T5)goto _TL1F3;else{goto _TL1F5;}
_TL1F5: goto _TL1EF;_TL1F3: {
void*best=t1;
# 1462
int*dzero=Cyc_PrattProver_lookup_dist(rs,z_node,0);
int*zerod=Cyc_PrattProver_lookup_dist(z_node,rs,0);
if(dzero==0)goto _TL1F6;if(zerod==0)goto _TL1F6;_T6= dzero;_T7= *_T6;_T8= zerod;_T9= *_T8;_TA= - _T9;if(_T7!=_TA)goto _TL1F6;_TB= dzero;_TC= *_TB;_TD= (unsigned)_TC;
best= Cyc_AssnDef_uint(_TD);goto _TL1F7;
# 1467
_TL1F6: dzero= Cyc_PrattProver_lookup_dist(rs,z_node,1);
zerod= Cyc_PrattProver_lookup_dist(z_node,rs,1);
if(dzero==0)goto _TL1F8;if(zerod==0)goto _TL1F8;_TE= dzero;_TF= *_TE;_T10= zerod;_T11= *_T10;_T12= - _T11;if(_TF!=_T12)goto _TL1F8;_T13= dzero;_T14= *_T13;_T15= (unsigned)_T14;
best= Cyc_AssnDef_uint(_T15);goto _TL1F9;_TL1F8: _TL1F9: _TL1F7: _T16= g;{
# 1474
struct Cyc_PrattProver_Node*ts=_T16->rows;_TL1FD: if(ts!=0)goto _TL1FB;else{goto _TL1FC;}
_TL1FB: _T17= ts;{void*t2=_T17->rep;_T18= 
Cyc_PrattProver_better_term(t2,best);if(!_T18)goto _TL1FE;_T19= Cyc_PrattProver_eq_nodes(rs,ts,0);if(!_T19)goto _TL1FE;_T1A= Cyc_PrattProver_occurs(best,t2);if(_T1A)goto _TL1FE;else{goto _TL200;}
_TL200: best= t2;goto _TL1FF;_TL1FE: _TL1FF:;}_T1B= ts;
# 1474
ts= _T1B->next;goto _TL1FD;_TL1FC:;}
# 1480
if(t1==best)goto _TL201;
# 1482
best= Cyc_AssnDef_subst_table(eq,best);_T1C= 
# 1485
Cyc_PrattProver_occurs(t1,best);if(_T1C)goto _TL203;else{goto _TL205;}
_TL205: changed= 1;
# 1490
Cyc_Hashtable_insert(eq,t1,best);goto _TL204;_TL203: _TL204: goto _TL202;_TL201: _TL202:;}}_TL1EF: _T1D= rs;
# 1456
rs= _T1D->next;goto _TL1F2;_TL1F1:;}_T1E= changed;
# 1494
if(_T1E)goto _TL206;else{goto _TL208;}
_TL208: return;_TL206: _T1F= g;{
# 1501
struct Cyc_PrattProver_Node*rs2=_T1F->rows;_TL20C: if(rs2!=0)goto _TL20A;else{goto _TL20B;}
_TL20A: _T20= rs2;{void*t=_T20->rep;
void*t2=Cyc_AssnDef_subst_table(eq,t);
if(t==t2)goto _TL20D;
Cyc_PrattProver_add_eq(g,t,t2);goto _TL20E;_TL20D: _TL20E:;}_T21= rs2;
# 1501
rs2= _T21->next;goto _TL20C;_TL20B:;}}}
# 1510
static struct Cyc_PrattProver_Graph*Cyc_PrattProver_subst_close_graphs(struct Cyc_PrattProver_Graph*gs){struct Cyc_PrattProver_Graph*(*_T0)(void(*)(long,struct Cyc_PrattProver_Graph*),long,struct Cyc_PrattProver_Graph*);struct Cyc_PrattProver_Graph*_T1;struct Cyc_PrattProver_Graph*_T2;{struct Cyc_PrattProver_Graph*(*_T3)(void(*)(long,struct Cyc_PrattProver_Graph*),long,struct Cyc_PrattProver_Graph*)=(struct Cyc_PrattProver_Graph*(*)(void(*)(long,struct Cyc_PrattProver_Graph*),long,struct Cyc_PrattProver_Graph*))Cyc_PrattProver_app_graphs;_T0= _T3;}_T1= gs;_T2= _T0(Cyc_PrattProver_subst_close_graph,0,_T1);return _T2;}
# 1512
static long Cyc_PrattProver_address_disjoint(struct Cyc_PrattProver_Graph*,void*,void*);
# 1515
static long Cyc_PrattProver_neq_terms(struct Cyc_PrattProver_Graph*g,void*t1,void*t2){struct _tuple15 _T0;void*_T1;int*_T2;int _T3;void*_T4;int*_T5;int _T6;void*_T7;void*_T8;int _T9;void*_TA;struct Cyc_PrattProver_Graph*_TB;void*_TC;unsigned _TD;int _TE;unsigned _TF;int*_T10;int _T11;unsigned _T12;int _T13;int _T14;unsigned _T15;int _T16;unsigned _T17;int*_T18;int _T19;unsigned _T1A;int _T1B;int _T1C;int*_T1D;int _T1E;unsigned _T1F;int _T20;int _T21;int _T22;int*_T23;int _T24;unsigned _T25;int _T26;int _T27;int _T28;void*_T29;int*_T2A;int _T2B;void*_T2C;int*_T2D;int _T2E;int _T2F;int*_T30;int _T31;int _T32;int*_T33;int _T34;int _T35;int*_T36;int _T37;int _T38;long _T39;{struct _tuple15 _T3A;
_T3A.f0= t1;_T3A.f1= t2;_T0= _T3A;}{struct _tuple15 _T3A=_T0;void*_T3B;unsigned _T3C;unsigned _T3D;_T1= _T3A.f0;_T2= (int*)_T1;_T3= *_T2;if(_T3!=0)goto _TL20F;_T4= _T3A.f1;_T5= (int*)_T4;_T6= *_T5;if(_T6!=0)goto _TL211;_T7= _T3A.f0;{struct Cyc_AssnDef_Uint_AssnDef_Term_struct*_T3E=(struct Cyc_AssnDef_Uint_AssnDef_Term_struct*)_T7;_T3D= _T3E->f1;}_T8= _T3A.f1;{struct Cyc_AssnDef_Uint_AssnDef_Term_struct*_T3E=(struct Cyc_AssnDef_Uint_AssnDef_Term_struct*)_T8;_T3C= _T3E->f1;}{unsigned i=_T3D;unsigned j=_T3C;_T9= i!=j;
# 1518
return _T9;}_TL211: _TA= _T3A.f0;{struct Cyc_AssnDef_Uint_AssnDef_Term_struct*_T3E=(struct Cyc_AssnDef_Uint_AssnDef_Term_struct*)_TA;_T3D= _T3E->f1;}_T3B= _T3A.f1;_LL6:{unsigned i=_T3D;void*t=_T3B;
# 1525
struct Cyc_PrattProver_Node*n=Cyc_PrattProver_term2node(g,t);_TB= g;_TC= 
Cyc_AssnDef_zero();{struct Cyc_PrattProver_Node*z=Cyc_PrattProver_term2node(_TB,_TC);
int*nzud=Cyc_PrattProver_lookup_dist(n,z,0);_TD= i;_TE= Cyc_PrattProver_INT_MIN;_TF= (unsigned)_TE;
if(_TD==_TF)goto _TL213;if(nzud==0)goto _TL213;_T10= nzud;_T11= *_T10;_T12= i;_T13= (int)_T12;_T14= _T13 - 1;if(_T11 >= _T14)goto _TL213;
return 1;_TL213: {
int*nzsd=Cyc_PrattProver_lookup_dist(n,z,1);_T15= i;_T16= Cyc_PrattProver_INT_MIN;_T17= (unsigned)_T16;
if(_T15==_T17)goto _TL215;if(nzsd==0)goto _TL215;_T18= nzsd;_T19= *_T18;_T1A= i;_T1B= (int)_T1A;_T1C= _T1B - 1;if(_T19 >= _T1C)goto _TL215;
return 1;_TL215: {
int*znud=Cyc_PrattProver_lookup_dist(z,n,0);
if(i==2147483647U)goto _TL217;if(znud==0)goto _TL217;_T1D= znud;_T1E= *_T1D;_T1F= i;_T20= (int)_T1F;_T21= _T20 + 1;_T22= - _T21;if(_T1E >= _T22)goto _TL217;
return 1;_TL217: {
int*znsd=Cyc_PrattProver_lookup_dist(z,n,1);
if(i==2147483647U)goto _TL219;if(znsd==0)goto _TL219;_T23= znsd;_T24= *_T23;_T25= i;_T26= (int)_T25;_T27= _T26 + 1;_T28= - _T27;if(_T24 >= _T28)goto _TL219;
return 1;_TL219:
 return 0;}}}}}_TL20F: _T29= _T3A.f1;_T2A= (int*)_T29;_T2B= *_T2A;if(_T2B!=0)goto _TL21B;_T3B= _T3A.f0;_T2C= _T3A.f1;{struct Cyc_AssnDef_Uint_AssnDef_Term_struct*_T3E=(struct Cyc_AssnDef_Uint_AssnDef_Term_struct*)_T2C;_T3D= _T3E->f1;}{void*t=_T3B;unsigned i=_T3D;_T3D= i;_T3B= t;goto _LL6;}_TL21B:{
# 1545
struct Cyc_PrattProver_Node*n1=Cyc_PrattProver_term2node(g,t1);
struct Cyc_PrattProver_Node*n2=Cyc_PrattProver_term2node(g,t2);
int*n12ud=Cyc_PrattProver_lookup_dist(n1,n2,0);
if(n12ud==0)goto _TL21D;_T2D= n12ud;_T2E= *_T2D;_T2F= - 1;if(_T2E >= _T2F)goto _TL21D;
return 1;_TL21D: {
int*n21ud=Cyc_PrattProver_lookup_dist(n2,n1,0);
if(n21ud==0)goto _TL21F;_T30= n21ud;_T31= *_T30;_T32= - 1;if(_T31 >= _T32)goto _TL21F;
return 1;_TL21F: {
int*n12sd=Cyc_PrattProver_lookup_dist(n1,n2,1);
if(n12sd==0)goto _TL221;_T33= n12sd;_T34= *_T33;_T35= - 1;if(_T34 >= _T35)goto _TL221;
return 1;_TL221: {
int*n21sd=Cyc_PrattProver_lookup_dist(n2,n1,1);
if(n21sd==0)goto _TL223;_T36= n21sd;_T37= *_T36;_T38= - 1;if(_T37 >= _T38)goto _TL223;
return 1;_TL223: _T39= 
Cyc_PrattProver_address_disjoint(g,t1,t2);return _T39;}}}};}}
# 1569
static long Cyc_PrattProver_address_disjoint(struct Cyc_PrattProver_Graph*g,void*a1,void*a2){struct _tuple15 _T0;void*_T1;int*_T2;unsigned _T3;void*_T4;int*_T5;unsigned _T6;void*_T7;void*_T8;int _T9;void*_TA;int*_TB;unsigned _TC;void*_TD;void*_TE;void*_TF;void*_T10;void*_T11;void*_T12;int _T13;void*_T14;int*_T15;int _T16;void*_T17;void*_T18;void*_T19;void*_T1A;long _T1B;void*_T1C;void*_T1D;void*_T1E;int*_T1F;int _T20;void*_T21;void*_T22;void*_T23;int*_T24;int _T25;void*_T26;int*_T27;int _T28;void*_T29;void*_T2A;void*_T2B;void*_T2C;void*_T2D;void*_T2E;long _T2F;long _T30;void*_T31;void*_T32;void*_T33;int*_T34;int _T35;void*_T36;void*_T37;
LOOP:{struct _tuple15 _T38;
_T38.f0= a1;_T38.f1= a2;_T0= _T38;}{struct _tuple15 _T38=_T0;unsigned _T39;unsigned _T3A;void*_T3B;void*_T3C;int _T3D;void*_T3E;void*_T3F;int _T40;void*_T41;void*_T42;_T1= _T38.f0;_T2= (int*)_T1;_T3= *_T2;switch(_T3){case 11: _T4= _T38.f1;_T5= (int*)_T4;_T6= *_T5;switch(_T6){case 11: _T7= _T38.f0;{struct Cyc_AssnDef_Addr_AssnDef_Term_struct*_T43=(struct Cyc_AssnDef_Addr_AssnDef_Term_struct*)_T7;_T42= _T43->f1;}_T8= _T38.f1;{struct Cyc_AssnDef_Addr_AssnDef_Term_struct*_T43=(struct Cyc_AssnDef_Addr_AssnDef_Term_struct*)_T8;_T41= _T43->f1;}{struct Cyc_Absyn_Vardecl*x=_T42;struct Cyc_Absyn_Vardecl*y=_T41;_T9= x!=y;
# 1573
return _T9;}case 12:
# 1575
 return 1;case 13: goto _LLD;case 14: goto _LL13;default: goto _LL15;};case 12: _TA= _T38.f1;_TB= (int*)_TA;_TC= *_TB;switch(_TC){case 11:
# 1577
 return 1;case 12: _TD= _T38.f0;{struct Cyc_AssnDef_Alloc_AssnDef_Term_struct*_T43=(struct Cyc_AssnDef_Alloc_AssnDef_Term_struct*)_TD;_T42= _T43->f1;_T40= _T43->f2;_TE= _T43->f3;_T41= (void*)_TE;_TF= _T43->f4;_T3F= (void*)_TF;}_T10= _T38.f1;{struct Cyc_AssnDef_Alloc_AssnDef_Term_struct*_T43=(struct Cyc_AssnDef_Alloc_AssnDef_Term_struct*)_T10;_T3E= _T43->f1;_T3D= _T43->f2;_T11= _T43->f3;_T3C= (void*)_T11;_T12= _T43->f4;_T3B= (void*)_T12;}{struct Cyc_Absyn_Exp*e1=_T42;int i1=_T40;void*t1=_T41;void*nv1=_T3F;struct Cyc_Absyn_Exp*e2=_T3E;int i2=_T3D;void*t2=_T3C;void*nv2=_T3B;
# 1579
if(e1!=e2)goto _TL22A;else{goto _TL22B;}_TL22B: if(i1!=i2)goto _TL22A;else{goto _TL228;}_TL22A: _T13= 1;goto _TL229;_TL228: _T13= Cyc_PrattProver_neq_terms(g,t1,t2);_TL229: return _T13;}case 13: goto _LLD;case 14: goto _LL13;default: goto _LL15;};case 13: _T14= _T38.f1;_T15= (int*)_T14;_T16= *_T15;if(_T16!=13)goto _TL22C;_T17= _T38.f0;{struct Cyc_AssnDef_Offsetf_AssnDef_Term_struct*_T43=(struct Cyc_AssnDef_Offsetf_AssnDef_Term_struct*)_T17;_T18= _T43->f1;_T42= (void*)_T18;_T3A= _T43->f2;}_T19= _T38.f1;{struct Cyc_AssnDef_Offsetf_AssnDef_Term_struct*_T43=(struct Cyc_AssnDef_Offsetf_AssnDef_Term_struct*)_T19;_T1A= _T43->f1;_T41= (void*)_T1A;_T39= _T43->f2;}{void*t1=_T42;unsigned i1=_T3A;void*t2=_T41;unsigned i2=_T39;_T1B= 
# 1581
Cyc_PrattProver_equal_terms(g,t1,t2);if(!_T1B)goto _TL22E;if(i1==i2)goto _TL22E;
return 1;_TL22E:
 a1= t1;
a2= t2;goto LOOP;}_TL22C: _T1C= _T38.f0;{struct Cyc_AssnDef_Offsetf_AssnDef_Term_struct*_T43=(struct Cyc_AssnDef_Offsetf_AssnDef_Term_struct*)_T1C;_T1D= _T43->f1;_T42= (void*)_T1D;}{void*t1=_T42;
# 1587
a1= t1;goto LOOP;}default: _T1E= _T38.f1;_T1F= (int*)_T1E;_T20= *_T1F;if(_T20!=13)goto _TL230;_LLD: _T21= _T38.f1;{struct Cyc_AssnDef_Offsetf_AssnDef_Term_struct*_T43=(struct Cyc_AssnDef_Offsetf_AssnDef_Term_struct*)_T21;_T22= _T43->f1;_T42= (void*)_T22;}{void*t2=_T42;
# 1590
a2= t2;goto LOOP;}_TL230: _T23= _T38.f0;_T24= (int*)_T23;_T25= *_T24;if(_T25!=14)goto _TL232;_T26= _T38.f1;_T27= (int*)_T26;_T28= *_T27;if(_T28!=14)goto _TL234;_T29= _T38.f0;{struct Cyc_AssnDef_Offseti_AssnDef_Term_struct*_T43=(struct Cyc_AssnDef_Offseti_AssnDef_Term_struct*)_T29;_T2A= _T43->f1;_T42= (void*)_T2A;_T2B= _T43->f2;_T41= (void*)_T2B;}_T2C= _T38.f1;{struct Cyc_AssnDef_Offseti_AssnDef_Term_struct*_T43=(struct Cyc_AssnDef_Offseti_AssnDef_Term_struct*)_T2C;_T2D= _T43->f1;_T3F= (void*)_T2D;_T2E= _T43->f2;_T3E= (void*)_T2E;}{void*t1=_T42;void*t2=_T41;void*t3=_T3F;void*t4=_T3E;_T2F= 
# 1593
Cyc_PrattProver_equal_terms(g,t1,t3);if(!_T2F)goto _TL236;_T30= Cyc_PrattProver_neq_terms(g,t2,t4);if(!_T30)goto _TL236;
return 1;_TL236:
 a1= t1;
a2= t2;goto LOOP;}_TL234: _T31= _T38.f0;{struct Cyc_AssnDef_Offseti_AssnDef_Term_struct*_T43=(struct Cyc_AssnDef_Offseti_AssnDef_Term_struct*)_T31;_T32= _T43->f1;_T42= (void*)_T32;}{void*t1=_T42;
# 1599
a1= t1;goto LOOP;}_TL232: _T33= _T38.f1;_T34= (int*)_T33;_T35= *_T34;if(_T35!=14)goto _TL238;_LL13: _T36= _T38.f1;{struct Cyc_AssnDef_Offseti_AssnDef_Term_struct*_T43=(struct Cyc_AssnDef_Offseti_AssnDef_Term_struct*)_T36;_T37= _T43->f1;_T42= (void*)_T37;}{void*t2=_T42;
# 1602
a2= t2;goto LOOP;}_TL238: _LL15:
# 1605
 return 0;};}}
# 1611
static void Cyc_PrattProver_reduce_terms(int dummy,struct Cyc_PrattProver_Graph*g){struct Cyc_PrattProver_Graph*_T0;struct Cyc_PrattProver_Node*_T1;void*_T2;int*_T3;unsigned _T4;void*_T5;struct Cyc_AssnDef_Select_AssnDef_Term_struct*_T6;void*_T7;int*_T8;int _T9;void*_TA;void*_TB;void*_TC;void*_TD;void*_TE;void*_TF;void*_T10;long _T11;long _T12;struct Cyc_PrattProver_Graph*_T13;void*_T14;void*_T15;void*_T16;struct Cyc_AssnDef_Update_AssnDef_Term_struct*_T17;void*_T18;int*_T19;int _T1A;void*_T1B;void*_T1C;void*_T1D;void*_T1E;void*_T1F;void*_T20;void*_T21;long _T22;struct Cyc_PrattProver_Graph*_T23;void*_T24;void*_T25;long _T26;int _T27;struct Cyc_PrattProver_Graph*_T28;void*_T29;void*_T2A;void*_T2B;void*_T2C;void*_T2D;void*_T2E;void*_T2F;void*_T30;struct Cyc_PrattProver_Graph*_T31;struct Cyc_PrattProver_Node*_T32;void*_T33;int*_T34;int _T35;long _T36;struct Cyc_PrattProver_Graph*_T37;void*_T38;void*_T39;struct Cyc_PrattProver_Node*_T3A;void*_T3B;void*_T3C;void*_T3D;struct Cyc_PrattProver_Graph*_T3E;struct Cyc_PrattProver_Node*_T3F;void*_T40;int*_T41;int _T42;long _T43;struct Cyc_PrattProver_Graph*_T44;void*_T45;void*_T46;struct Cyc_PrattProver_Node*_T47;void*_T48;void*_T49;struct Cyc_PrattProver_Graph*_T4A;struct Cyc_PrattProver_Node*_T4B;void*_T4C;int*_T4D;int _T4E;long _T4F;struct Cyc_PrattProver_Graph*_T50;void*_T51;void*_T52;struct Cyc_PrattProver_Node*_T53;struct Cyc_PrattProver_Node*_T54;_T0= g;{
struct Cyc_PrattProver_Node*rs=_T0->rows;_TL23D: if(rs!=0)goto _TL23B;else{goto _TL23C;}
_TL23B: _T1= rs;{void*t=_T1->rep;unsigned _T55;void*_T56;void*_T57;void*_T58;void*_T59;void*_T5A;_T2= t;_T3= (int*)_T2;_T4= *_T3;switch(_T4){case 6: _T5= t;_T6= (struct Cyc_AssnDef_Select_AssnDef_Term_struct*)_T5;_T7= _T6->f1;_T8= (int*)_T7;_T9= *_T8;if(_T9!=7)goto _TL23F;_TA= t;{struct Cyc_AssnDef_Select_AssnDef_Term_struct*_T5B=(struct Cyc_AssnDef_Select_AssnDef_Term_struct*)_TA;_TB= _T5B->f1;{struct Cyc_AssnDef_Update_AssnDef_Term_struct*_T5C=(struct Cyc_AssnDef_Update_AssnDef_Term_struct*)_TB;_TC= _T5C->f1;_T5A= (void*)_TC;_TD= _T5C->f2;_T59= (void*)_TD;_TE= _T5C->f3;_T58= (void*)_TE;}_TF= _T5B->f2;_T57= (void*)_TF;_T10= _T5B->f3;_T56= (void*)_T10;}{void*m=_T5A;void*a1=_T59;void*v=_T58;void*a2=_T57;void*topt=_T56;_T11= 
# 1617
Cyc_PrattProver_equal_terms(g,a1,a2);if(!_T11)goto _TL241;
Cyc_PrattProver_add_eq(g,t,v);goto _TL242;
# 1620
_TL241: _T12= Cyc_PrattProver_address_disjoint(g,a1,a2);if(!_T12)goto _TL243;_T13= g;_T14= t;_T15= 
Cyc_AssnDef_select(m,a2,topt);Cyc_PrattProver_add_eq(_T13,_T14,_T15);goto _TL244;_TL243: _TL244: _TL242: goto _LL0;}_TL23F: goto _LLB;case 7: _T16= t;_T17= (struct Cyc_AssnDef_Update_AssnDef_Term_struct*)_T16;_T18= _T17->f1;_T19= (int*)_T18;_T1A= *_T19;if(_T1A!=7)goto _TL245;_T1B= t;{struct Cyc_AssnDef_Update_AssnDef_Term_struct*_T5B=(struct Cyc_AssnDef_Update_AssnDef_Term_struct*)_T1B;_T1C= _T5B->f1;{struct Cyc_AssnDef_Update_AssnDef_Term_struct*_T5C=(struct Cyc_AssnDef_Update_AssnDef_Term_struct*)_T1C;_T1D= _T5C->f1;_T5A= (void*)_T1D;_T1E= _T5C->f2;_T59= (void*)_T1E;_T1F= _T5C->f3;_T58= (void*)_T1F;}_T20= _T5B->f2;_T57= (void*)_T20;_T21= _T5B->f3;_T56= (void*)_T21;}{void*m=_T5A;void*a1=_T59;void*v1=_T58;void*a2=_T57;void*v2=_T56;_T22= 
# 1626
Cyc_PrattProver_equal_terms(g,a1,a2);if(!_T22)goto _TL247;_T23= g;_T24= t;_T25= 
Cyc_AssnDef_update(m,a2,v2);Cyc_PrattProver_add_eq(_T23,_T24,_T25);goto _TL248;
# 1630
_TL247: _T26= Cyc_PrattProver_address_disjoint(g,a1,a2);if(!_T26)goto _TL249;_T27= Cyc_AssnDef_termcmp(a1,a2);if(_T27 >= 0)goto _TL249;_T28= g;_T29= t;_T2A= 
Cyc_AssnDef_update(m,a2,v2);_T2B= a1;_T2C= v1;_T2D= Cyc_AssnDef_update(_T2A,_T2B,_T2C);Cyc_PrattProver_add_eq(_T28,_T29,_T2D);goto _TL24A;_TL249: _TL24A: _TL248: goto _LL0;}_TL245: goto _LLB;case 9: _T2E= t;{struct Cyc_AssnDef_Proj_AssnDef_Term_struct*_T5B=(struct Cyc_AssnDef_Proj_AssnDef_Term_struct*)_T2E;_T2F= _T5B->f1;_T5A= (void*)_T2F;_T55= _T5B->f2;_T30= _T5B->f3;_T59= (void*)_T30;}{void*t1=_T5A;unsigned i=_T55;void*topt=_T59;_T31= g;{
# 1636
struct Cyc_PrattProver_Node*ts=_T31->rows;_TL24E: if(ts!=0)goto _TL24C;else{goto _TL24D;}
_TL24C: _T32= ts;{void*u=_T32->rep;_T33= u;_T34= (int*)_T33;_T35= *_T34;if(_T35!=8)goto _TL24F;_T36= 
# 1640
Cyc_PrattProver_eq_nodes(rs,ts,0);if(!_T36)goto _TL251;_T37= g;_T38= t;_T39= 
Cyc_AssnDef_proj(u,i,topt);Cyc_PrattProver_add_eq(_T37,_T38,_T39);goto Found1;_TL251: goto _LLD;_TL24F: goto _LLD;_LLD:;}_T3A= ts;
# 1636
ts= _T3A->next;goto _TL24E;_TL24D:;}
# 1649
Found1: goto _LL0;}case 10: _T3B= t;{struct Cyc_AssnDef_AggrUpdate_AssnDef_Term_struct*_T5B=(struct Cyc_AssnDef_AggrUpdate_AssnDef_Term_struct*)_T3B;_T3C= _T5B->f1;_T5A= (void*)_T3C;_T55= _T5B->f2;_T3D= _T5B->f3;_T59= (void*)_T3D;}{void*t1=_T5A;unsigned i=_T55;void*t2=_T59;_T3E= g;{
# 1653
struct Cyc_PrattProver_Node*ts=_T3E->rows;_TL256: if(ts!=0)goto _TL254;else{goto _TL255;}
_TL254: _T3F= ts;{void*u=_T3F->rep;_T40= u;_T41= (int*)_T40;_T42= *_T41;if(_T42!=8)goto _TL257;_T43= 
# 1657
Cyc_PrattProver_eq_nodes(rs,ts,0);if(!_T43)goto _TL259;_T44= g;_T45= t;_T46= 
Cyc_AssnDef_aggr_update(u,i,t2);Cyc_PrattProver_add_eq(_T44,_T45,_T46);goto Found2;_TL259: goto _LL12;_TL257: goto _LL12;_LL12:;}_T47= ts;
# 1653
ts= _T47->next;goto _TL256;_TL255:;}
# 1666
Found2: goto _LL0;}case 15: _T48= t;{struct Cyc_AssnDef_Tagof_AssnDef_Term_struct*_T5B=(struct Cyc_AssnDef_Tagof_AssnDef_Term_struct*)_T48;_T49= _T5B->f1;_T5A= (void*)_T49;}{void*t1=_T5A;_T4A= g;{
# 1670
struct Cyc_PrattProver_Node*ts=_T4A->rows;_TL25E: if(ts!=0)goto _TL25C;else{goto _TL25D;}
_TL25C: _T4B= ts;{void*u=_T4B->rep;_T4C= u;_T4D= (int*)_T4C;_T4E= *_T4D;if(_T4E!=8)goto _TL25F;_T4F= 
# 1674
Cyc_PrattProver_eq_nodes(rs,ts,0);if(!_T4F)goto _TL261;_T50= g;_T51= t;_T52= 
Cyc_AssnDef_tagof_tm(u);Cyc_PrattProver_add_eq(_T50,_T51,_T52);goto Found3;_TL261: goto _LL17;_TL25F: goto _LL17;_LL17:;}_T53= ts;
# 1670
ts= _T53->next;goto _TL25E;_TL25D:;}
# 1683
Found3: goto _LL0;}default: _LLB: goto _LL0;}_LL0:;}_T54= rs;
# 1612
rs= _T54->next;goto _TL23D;_TL23C:;}}
# 1691
static struct Cyc_PrattProver_Graph*Cyc_PrattProver_reduce_close_graphs(struct Cyc_PrattProver_Graph*gs){struct Cyc_PrattProver_Graph*(*_T0)(void(*)(int,struct Cyc_PrattProver_Graph*),int,struct Cyc_PrattProver_Graph*);struct Cyc_PrattProver_Graph*_T1;struct Cyc_PrattProver_Graph*_T2;{struct Cyc_PrattProver_Graph*(*_T3)(void(*)(int,struct Cyc_PrattProver_Graph*),int,struct Cyc_PrattProver_Graph*)=(struct Cyc_PrattProver_Graph*(*)(void(*)(int,struct Cyc_PrattProver_Graph*),int,struct Cyc_PrattProver_Graph*))Cyc_PrattProver_app_graphs;_T0= _T3;}_T1= gs;_T2= _T0(Cyc_PrattProver_reduce_terms,0,_T1);return _T2;}struct _tuple19{long f0;void*f1;int f2;};
# 1695
static struct _tuple19 Cyc_PrattProver_break_term(struct Cyc_PrattProver_Graph*g,void*t,long is_signed){void*_T0;int*_T1;int _T2;void*_T3;struct Cyc_AssnDef_Binop_AssnDef_Term_struct*_T4;enum Cyc_Absyn_Primop _T5;void*_T6;struct Cyc_AssnDef_Binop_AssnDef_Term_struct*_T7;void*_T8;int*_T9;int _TA;void*_TB;void*_TC;void*_TD;unsigned _TE;int _TF;long _T10;struct Cyc_PrattProver_Node*_T11;struct Cyc_PrattProver_Graph*_T12;void*_T13;struct Cyc_PrattProver_Node*_T14;int*_T15;int _T16;unsigned _T17;int _T18;struct _tuple19 _T19;unsigned _T1A;struct Cyc_PrattProver_Node*_T1B;struct Cyc_PrattProver_Graph*_T1C;void*_T1D;struct Cyc_PrattProver_Node*_T1E;int*_T1F;int _T20;struct _tuple19 _T21;unsigned _T22;long _T23;struct Cyc_PrattProver_Graph*_T24;void*_T25;struct Cyc_PrattProver_Node*_T26;struct Cyc_PrattProver_Node*_T27;int*_T28;int _T29;unsigned _T2A;int _T2B;unsigned _T2C;unsigned _T2D;int _T2E;struct _tuple19 _T2F;unsigned _T30;struct Cyc_PrattProver_Graph*_T31;void*_T32;struct Cyc_PrattProver_Node*_T33;struct Cyc_PrattProver_Node*_T34;int*_T35;int _T36;unsigned _T37;int _T38;struct _tuple19 _T39;unsigned _T3A;struct _tuple19 _T3B;{unsigned _T3C;void*_T3D;_T0= t;_T1= (int*)_T0;_T2= *_T1;if(_T2!=4)goto _TL263;_T3= t;_T4= (struct Cyc_AssnDef_Binop_AssnDef_Term_struct*)_T3;_T5= _T4->f1;if(_T5!=Cyc_Absyn_Plus)goto _TL265;_T6= t;_T7= (struct Cyc_AssnDef_Binop_AssnDef_Term_struct*)_T6;_T8= _T7->f3;_T9= (int*)_T8;_TA= *_T9;if(_TA!=0)goto _TL267;_TB= t;{struct Cyc_AssnDef_Binop_AssnDef_Term_struct*_T3E=(struct Cyc_AssnDef_Binop_AssnDef_Term_struct*)_TB;_TC= _T3E->f2;_T3D= (void*)_TC;_TD= _T3E->f3;{struct Cyc_AssnDef_Uint_AssnDef_Term_struct*_T3F=(struct Cyc_AssnDef_Uint_AssnDef_Term_struct*)_TD;_T3C= _T3F->f1;}}{void*t1=_T3D;unsigned c2=_T3C;_TE= c2;_TF= (int)_TE;
# 1698
if(_TF < 0)goto _TL269;_T10= is_signed;
if(!_T10)goto _TL26B;_T11= 
Cyc_PrattProver_term2node(g,t1);_T12= g;_T13= Cyc_AssnDef_zero();_T14= Cyc_PrattProver_term2node(_T12,_T13);{int*dist=Cyc_PrattProver_lookup_dist(_T11,_T14,1);
# 1703
if(dist==0)goto _TL26D;_T15= dist;_T16= *_T15;_T17= 2147483647U - c2;_T18= (int)_T17;if(_T16 > _T18)goto _TL26D;{struct _tuple19 _T3E;
_T3E.f0= 1;_T3E.f1= t1;_T1A= c2;_T3E.f2= (int)_T1A;_T19= _T3E;}return _T19;_TL26D:;}goto _TL26C;
# 1711
_TL26B: _T1B= Cyc_PrattProver_term2node(g,t1);_T1C= g;_T1D= Cyc_AssnDef_zero();_T1E= Cyc_PrattProver_term2node(_T1C,_T1D);{int*dist=Cyc_PrattProver_lookup_dist(_T1B,_T1E,0);
if(dist==0)goto _TL26F;_T1F= dist;_T20= *_T1F;if(_T20 > 2147483647)goto _TL26F;{struct _tuple19 _T3E;
_T3E.f0= 1;_T3E.f1= t1;_T22= c2;_T3E.f2= (int)_T22;_T21= _T3E;}return _T21;_TL26F:;}_TL26C: goto _TL26A;
# 1717
_TL269: _T23= is_signed;if(!_T23)goto _TL271;_T24= g;_T25= 
# 1720
Cyc_AssnDef_zero();_T26= Cyc_PrattProver_term2node(_T24,_T25);_T27= Cyc_PrattProver_term2node(g,t1);{int*dist=Cyc_PrattProver_lookup_dist(_T26,_T27,1);
if(dist==0)goto _TL273;_T28= dist;_T29= *_T28;_T2A= c2;_T2B= Cyc_PrattProver_INT_MIN;_T2C= (unsigned)_T2B;_T2D= _T2A - _T2C;_T2E= (int)_T2D;if(_T29 > _T2E)goto _TL273;{struct _tuple19 _T3E;
_T3E.f0= 1;_T3E.f1= t1;_T30= c2;_T3E.f2= (int)_T30;_T2F= _T3E;}return _T2F;_TL273:;}goto _TL272;
# 1726
_TL271: _T31= g;_T32= Cyc_AssnDef_zero();_T33= Cyc_PrattProver_term2node(_T31,_T32);_T34= Cyc_PrattProver_term2node(g,t1);{int*dist=Cyc_PrattProver_lookup_dist(_T33,_T34,0);
if(dist==0)goto _TL275;_T35= dist;_T36= *_T35;_T37= c2;_T38= (int)_T37;if(_T36 > _T38)goto _TL275;{struct _tuple19 _T3E;
_T3E.f0= 1;_T3E.f1= t1;_T3A= c2;_T3E.f2= (int)_T3A;_T39= _T3E;}return _T39;_TL275:;}_TL272: _TL26A: goto _LL0;}_TL267: goto _LL3;_TL265: goto _LL3;_TL263: _LL3: goto _LL0;_LL0:;}{struct _tuple19 _T3C;
# 1736
_T3C.f0= 0;_T3C.f1= t;_T3C.f2= 0;_T3B= _T3C;}return _T3B;}
# 1739
static void Cyc_PrattProver_break_term_in_graph(int dummy,struct Cyc_PrattProver_Graph*g){struct Cyc_PrattProver_Graph*_T0;struct Cyc_PrattProver_Node*_T1;long _T2;struct Cyc_PrattProver_Graph*_T3;struct Cyc_PrattProver_Node*_T4;void*_T5;long _T6;struct Cyc_PrattProver_Node*_T7;struct Cyc_PrattProver_Graph*_T8;struct Cyc_PrattProver_Node*_T9;void*_TA;void*_TB;int _TC;struct Cyc_PrattProver_Graph*_TD;void*_TE;struct Cyc_PrattProver_Node*_TF;void*_T10;int _T11;struct Cyc_PrattProver_Node*_T12;long _T13;struct Cyc_PrattProver_Graph*_T14;struct Cyc_PrattProver_Node*_T15;void*_T16;long _T17;struct Cyc_PrattProver_Node*_T18;struct Cyc_PrattProver_Graph*_T19;struct Cyc_PrattProver_Node*_T1A;void*_T1B;void*_T1C;int _T1D;struct Cyc_PrattProver_Graph*_T1E;void*_T1F;struct Cyc_PrattProver_Node*_T20;void*_T21;int _T22;struct Cyc_PrattProver_Graph*_T23;struct Cyc_PrattProver_Node*_T24;void*_T25;long _T26;struct Cyc_PrattProver_Node*_T27;int*_T28;int _T29;struct Cyc_AssnDef_Binop_AssnDef_Term_struct*_T2A;enum Cyc_Absyn_Primop _T2B;struct Cyc_AssnDef_Binop_AssnDef_Term_struct*_T2C;void*_T2D;int*_T2E;int _T2F;void*_T30;void*_T31;struct Cyc_PrattProver_Node*_T32;struct Cyc_PrattProver_Node*_T33;struct Cyc_PrattProver_Graph*_T34;void*_T35;unsigned _T36;void*_T37;struct Cyc_PrattProver_Node*_T38;_T0= g;{
struct Cyc_PrattProver_Node*rs=_T0->rows;_TL27A: if(rs!=0)goto _TL278;else{goto _TL279;}
_TL278: _T1= rs;_T2= _T1->broken_as_signed;if(_T2)goto _TL27B;else{goto _TL27D;}
_TL27D: _T3= g;_T4= rs;_T5= _T4->rep;{struct _tuple19 _T39=Cyc_PrattProver_break_term(_T3,_T5,1);int _T3A;void*_T3B;long _T3C;_T3C= _T39.f0;_T3B= _T39.f1;_T3A= _T39.f2;{long ok=_T3C;void*t1=_T3B;int c1=_T3A;_T6= ok;
if(!_T6)goto _TL27E;_T7= rs;
_T7->broken_as_signed= 1;_T8= g;_T9= rs;_TA= _T9->rep;_TB= t1;_TC= c1;
Cyc_PrattProver_set_distance(_T8,_TA,_TB,_TC,1);
# 1748
if(c1==Cyc_PrattProver_INT_MIN)goto _TL280;_TD= g;_TE= t1;_TF= rs;_T10= _TF->rep;_T11= - c1;
Cyc_PrattProver_set_distance(_TD,_TE,_T10,_T11,1);goto _TL281;_TL280: _TL281: goto _TL27F;_TL27E: _TL27F:;}}goto _TL27C;_TL27B: _TL27C: _T12= rs;_T13= _T12->broken_as_unsigned;
# 1752
if(_T13)goto _TL282;else{goto _TL284;}
_TL284: _T14= g;_T15= rs;_T16= _T15->rep;{struct _tuple19 _T39=Cyc_PrattProver_break_term(_T14,_T16,0);int _T3A;void*_T3B;long _T3C;_T3C= _T39.f0;_T3B= _T39.f1;_T3A= _T39.f2;{long ok=_T3C;void*t1=_T3B;int c1=_T3A;_T17= ok;
if(!_T17)goto _TL285;_T18= rs;
_T18->broken_as_unsigned= 1;_T19= g;_T1A= rs;_T1B= _T1A->rep;_T1C= t1;_T1D= c1;
Cyc_PrattProver_set_distance(_T19,_T1B,_T1C,_T1D,0);
# 1759
if(c1==Cyc_PrattProver_INT_MIN)goto _TL287;_T1E= g;_T1F= t1;_T20= rs;_T21= _T20->rep;_T22= - c1;
Cyc_PrattProver_set_distance(_T1E,_T1F,_T21,_T22,0);goto _TL288;_TL287: _TL288: goto _TL286;_TL285: _TL286:;}}goto _TL283;_TL282: _TL283: _T23= g;_T24= rs;_T25= _T24->rep;{
# 1763
struct _tuple14 _T39=Cyc_PrattProver_subst_term_with_const(_T23,_T25);unsigned _T3A;long _T3B;_T3B= _T39.f0;_T3A= _T39.f1;{long ok=_T3B;unsigned c1=_T3A;_T26= ok;
# 1765
if(!_T26)goto _TL289;_T27= rs;{
void*_T3C=_T27->rep;unsigned _T3D;void*_T3E;_T28= (int*)_T3C;_T29= *_T28;if(_T29!=4)goto _TL28B;_T2A= (struct Cyc_AssnDef_Binop_AssnDef_Term_struct*)_T3C;_T2B= _T2A->f1;if(_T2B!=Cyc_Absyn_Plus)goto _TL28D;_T2C= (struct Cyc_AssnDef_Binop_AssnDef_Term_struct*)_T3C;_T2D= _T2C->f3;_T2E= (int*)_T2D;_T2F= *_T2E;if(_T2F!=0)goto _TL28F;{struct Cyc_AssnDef_Binop_AssnDef_Term_struct*_T3F=(struct Cyc_AssnDef_Binop_AssnDef_Term_struct*)_T3C;_T30= _T3F->f2;_T3E= (void*)_T30;_T31= _T3F->f3;{struct Cyc_AssnDef_Uint_AssnDef_Term_struct*_T40=(struct Cyc_AssnDef_Uint_AssnDef_Term_struct*)_T31;_T3D= _T40->f1;}}{void*t1=_T3E;unsigned c2=_T3D;_T32= rs;
# 1768
_T32->broken_as_signed= 1;_T33= rs;
_T33->broken_as_unsigned= 1;_T34= g;_T35= t1;_T36= c1 - c2;_T37= 
Cyc_AssnDef_uint(_T36);Cyc_PrattProver_add_eq(_T34,_T35,_T37);goto _LL9;}_TL28F: goto _LLC;_TL28D: goto _LLC;_TL28B: _LLC: goto _LL9;_LL9:;}goto _TL28A;_TL289: _TL28A:;}}_T38= rs;
# 1740
rs= _T38->next;goto _TL27A;_TL279:;}}
# 1779
static struct Cyc_PrattProver_Graph*Cyc_PrattProver_break_term_in_graphs(struct Cyc_PrattProver_Graph*gs){struct Cyc_PrattProver_Graph*(*_T0)(void(*)(int,struct Cyc_PrattProver_Graph*),int,struct Cyc_PrattProver_Graph*);struct Cyc_PrattProver_Graph*_T1;struct Cyc_PrattProver_Graph*_T2;{
struct Cyc_PrattProver_Graph*(*_T3)(void(*)(int,struct Cyc_PrattProver_Graph*),int,struct Cyc_PrattProver_Graph*)=(struct Cyc_PrattProver_Graph*(*)(void(*)(int,struct Cyc_PrattProver_Graph*),int,struct Cyc_PrattProver_Graph*))Cyc_PrattProver_app_graphs;_T0= _T3;}_T1= gs;_T2= _T0(Cyc_PrattProver_break_term_in_graph,0,_T1);return _T2;}
# 1787
static int Cyc_PrattProver_range_of_term(struct Cyc_PrattProver_Graph*g,struct Cyc_PrattProver_Node*t){struct Cyc_PrattProver_Graph*_T0;void*_T1;int*_T2;int _T3;int _T4;int _T5;int*_T6;int _T7;int*_T8;int _T9;int*_TA;int _TB;int _TC;_T0= g;_T1= 
Cyc_AssnDef_zero();{struct Cyc_PrattProver_Node*zero_node=Cyc_PrattProver_term2node(_T0,_T1);
# 1790
int*dist=Cyc_PrattProver_lookup_dist(zero_node,t,0);
if(dist==0)goto _TL291;_T2= dist;_T3= *_T2;_T4= Cyc_PrattProver_INT_MIN;if(_T3 > _T4)goto _TL291;_T5= - 1;
return _T5;_TL291: {
# 1794
int*dist=Cyc_PrattProver_lookup_dist(t,zero_node,0);
if(dist==0)goto _TL293;_T6= dist;_T7= *_T6;if(_T7 > 2147483647)goto _TL293;
return 1;_TL293: {
# 1798
int*dist=Cyc_PrattProver_lookup_dist(zero_node,t,1);
if(dist==0)goto _TL295;_T8= dist;_T9= *_T8;if(_T9 > 0)goto _TL295;
return 1;_TL295: {
# 1802
int*dist=Cyc_PrattProver_lookup_dist(t,zero_node,1);
if(dist==0)goto _TL297;_TA= dist;_TB= *_TA;if(_TB > -1)goto _TL297;_TC= - 1;
return _TC;_TL297:
# 1806
 return 0;}}}}}
# 1817
static void Cyc_PrattProver_associate_ud_sd_in_graph(int dummy,struct Cyc_PrattProver_Graph*g){struct Cyc_PrattProver_Graph*_T0;struct Cyc_PrattProver_Node*_T1;struct Cyc_PrattProver_Graph*_T2;struct Cyc_PrattProver_Distance*_T3;struct Cyc_PrattProver_Node*_T4;struct Cyc_PrattProver_Graph*_T5;struct Cyc_PrattProver_Node*_T6;void*_T7;struct Cyc_PrattProver_Distance*_T8;struct Cyc_PrattProver_Node*_T9;void*_TA;struct Cyc_PrattProver_Distance*_TB;int _TC;struct Cyc_PrattProver_Distance*_TD;struct Cyc_PrattProver_Node*_TE;struct Cyc_PrattProver_Graph*_TF;struct Cyc_PrattProver_Distance*_T10;struct Cyc_PrattProver_Node*_T11;struct Cyc_PrattProver_Graph*_T12;struct Cyc_PrattProver_Node*_T13;void*_T14;struct Cyc_PrattProver_Distance*_T15;struct Cyc_PrattProver_Node*_T16;void*_T17;struct Cyc_PrattProver_Distance*_T18;int _T19;struct Cyc_PrattProver_Distance*_T1A;struct Cyc_PrattProver_Node*_T1B;
int range_of_src;int range_of_tgt;_T0= g;{
struct Cyc_PrattProver_Node*rs=_T0->rows;_TL29C: if(rs!=0)goto _TL29A;else{goto _TL29B;}
_TL29A: range_of_src= Cyc_PrattProver_range_of_term(g,rs);
if(range_of_src==0)goto _TL29D;_T1= rs;{
struct Cyc_PrattProver_Distance*uds=_T1->unsigned_distances;_TL2A2: if(uds!=0)goto _TL2A0;else{goto _TL2A1;}
_TL2A0: _T2= g;_T3= uds;_T4= _T3->target;range_of_tgt= Cyc_PrattProver_range_of_term(_T2,_T4);
if(range_of_src!=range_of_tgt)goto _TL2A3;_T5= g;_T6= rs;_T7= _T6->rep;_T8= uds;_T9= _T8->target;_TA= _T9->rep;_TB= uds;_TC= _TB->dist;
Cyc_PrattProver_set_distance(_T5,_T7,_TA,_TC,1);goto _TL2A4;_TL2A3: _TL2A4: _TD= uds;
# 1822
uds= _TD->next;goto _TL2A2;_TL2A1:;}_TE= rs;{
# 1828
struct Cyc_PrattProver_Distance*sds=_TE->signed_distances;_TL2A8: if(sds!=0)goto _TL2A6;else{goto _TL2A7;}
_TL2A6: _TF= g;_T10= sds;_T11= _T10->target;range_of_tgt= Cyc_PrattProver_range_of_term(_TF,_T11);
if(range_of_src!=range_of_tgt)goto _TL2A9;_T12= g;_T13= rs;_T14= _T13->rep;_T15= sds;_T16= _T15->target;_T17= _T16->rep;_T18= sds;_T19= _T18->dist;
Cyc_PrattProver_set_distance(_T12,_T14,_T17,_T19,0);goto _TL2AA;_TL2A9: _TL2AA: _T1A= sds;
# 1828
sds= _T1A->next;goto _TL2A8;_TL2A7:;}goto _TL29E;_TL29D: _TL29E: _T1B= rs;
# 1819
rs= _T1B->next;goto _TL29C;_TL29B:;}
# 1836
return;}
# 1839
static struct Cyc_PrattProver_Graph*Cyc_PrattProver_associate_ud_sd_in_graphs(struct Cyc_PrattProver_Graph*gs){struct Cyc_PrattProver_Graph*(*_T0)(void(*)(int,struct Cyc_PrattProver_Graph*),int,struct Cyc_PrattProver_Graph*);struct Cyc_PrattProver_Graph*_T1;struct Cyc_PrattProver_Graph*_T2;{
struct Cyc_PrattProver_Graph*(*_T3)(void(*)(int,struct Cyc_PrattProver_Graph*),int,struct Cyc_PrattProver_Graph*)=(struct Cyc_PrattProver_Graph*(*)(void(*)(int,struct Cyc_PrattProver_Graph*),int,struct Cyc_PrattProver_Graph*))Cyc_PrattProver_app_graphs;_T0= _T3;}_T1= gs;_T2= _T0(Cyc_PrattProver_associate_ud_sd_in_graph,0,_T1);return _T2;}
# 1846
static void Cyc_PrattProver_add_constraint(struct Cyc_PrattProver_Graph*g,void*t1,enum Cyc_AssnDef_Primreln p,void*t2){struct _tuple15 _T0;void*_T1;int*_T2;int _T3;void*_T4;int*_T5;int _T6;void*_T7;void*_T8;enum Cyc_AssnDef_Primreln _T9;int _TA;unsigned _TB;int _TC;unsigned _TD;int _TE;unsigned _TF;int _T10;unsigned _T11;int _T12;int(*_T13)(struct _fat_ptr,struct _fat_ptr);void*(*_T14)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T15;struct _fat_ptr _T16;struct Cyc_PrattProver_Inconsistent_exn_struct*_T17;struct Cyc_PrattProver_Inconsistent_exn_struct*_T18;void*_T19;enum Cyc_AssnDef_Primreln _T1A;int _T1B;struct Cyc_PrattProver_Inconsistent_exn_struct*_T1C;struct Cyc_PrattProver_Inconsistent_exn_struct*_T1D;struct Cyc_PrattProver_Graph*_T1E;void*_T1F;void*_T20;int _T21;struct Cyc_PrattProver_Graph*_T22;void*_T23;void*_T24;unsigned _T25;int _T26;int _T27;struct Cyc_PrattProver_Inconsistent_exn_struct*_T28;struct Cyc_PrattProver_Inconsistent_exn_struct*_T29;unsigned _T2A;int _T2B;unsigned _T2C;struct Cyc_PrattProver_Graph*_T2D;void*_T2E;void*_T2F;unsigned _T30;int _T31;int _T32;int(*_T33)(struct _fat_ptr,struct _fat_ptr);void*(*_T34)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T35;struct _fat_ptr _T36;void*_T37;int*_T38;int _T39;void*_T3A;enum Cyc_AssnDef_Primreln _T3B;int _T3C;struct Cyc_PrattProver_Inconsistent_exn_struct*_T3D;struct Cyc_PrattProver_Inconsistent_exn_struct*_T3E;struct Cyc_PrattProver_Graph*_T3F;void*_T40;void*_T41;unsigned _T42;int _T43;unsigned _T44;int _T45;unsigned _T46;struct Cyc_PrattProver_Inconsistent_exn_struct*_T47;struct Cyc_PrattProver_Inconsistent_exn_struct*_T48;struct Cyc_PrattProver_Graph*_T49;void*_T4A;void*_T4B;unsigned _T4C;int _T4D;int(*_T4E)(struct _fat_ptr,struct _fat_ptr);void*(*_T4F)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T50;struct _fat_ptr _T51;enum Cyc_AssnDef_Primreln _T52;int _T53;int(*_T54)(struct _fat_ptr,struct _fat_ptr);void*(*_T55)(struct _fat_ptr,struct _fat_ptr);struct _fat_ptr _T56;struct _fat_ptr _T57;
Cyc_PrattProver_constraints_added= Cyc_PrattProver_constraints_added + 1;{struct _tuple15 _T58;
_T58.f0= t1;_T58.f1= t2;_T0= _T58;}{struct _tuple15 _T58=_T0;unsigned _T59;unsigned _T5A;_T1= _T58.f0;_T2= (int*)_T1;_T3= *_T2;if(_T3!=0)goto _TL2AB;_T4= _T58.f1;_T5= (int*)_T4;_T6= *_T5;if(_T6!=0)goto _TL2AD;_T7= _T58.f0;{struct Cyc_AssnDef_Uint_AssnDef_Term_struct*_T5B=(struct Cyc_AssnDef_Uint_AssnDef_Term_struct*)_T7;_T5A= _T5B->f1;}_T8= _T58.f1;{struct Cyc_AssnDef_Uint_AssnDef_Term_struct*_T5B=(struct Cyc_AssnDef_Uint_AssnDef_Term_struct*)_T8;_T59= _T5B->f1;}{unsigned c1=_T5A;unsigned c2=_T59;_T9= p;_TA= (int)_T9;switch(_TA){case Cyc_AssnDef_ULt:
# 1852
 if(c1 >= c2)goto _TL2B0;
return;_TL2B0: goto _LL9;case Cyc_AssnDef_ULte:
# 1856
 if(c1 > c2)goto _TL2B2;
return;_TL2B2: goto _LL9;case Cyc_AssnDef_SLt: _TB= c1;_TC= (int)_TB;_TD= c2;_TE= (int)_TD;
# 1860
if(_TC >= _TE)goto _TL2B4;
return;_TL2B4: goto _LL9;case Cyc_AssnDef_SLte: _TF= c1;_T10= (int)_TF;_T11= c2;_T12= (int)_T11;
# 1864
if(_T10 > _T12)goto _TL2B6;
return;_TL2B6: goto _LL9;default: _T14= Cyc_Warn_impos;{
# 1868
int(*_T5B)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T14;_T13= _T5B;}_T15= _tag_fat("Vcgen: found bad primop in add_constraint",sizeof(char),42U);_T16= _tag_fat(0U,sizeof(void*),0);_T13(_T15,_T16);}_LL9: _T17= & Cyc_PrattProver_inconsistent;_T18= (struct Cyc_PrattProver_Inconsistent_exn_struct*)_T17;_throw(_T18);}goto _TL2AE;_TL2AD: _T19= _T58.f0;{struct Cyc_AssnDef_Uint_AssnDef_Term_struct*_T5B=(struct Cyc_AssnDef_Uint_AssnDef_Term_struct*)_T19;_T5A= _T5B->f1;}{unsigned c1=_T5A;_T1A= p;_T1B= (int)_T1A;switch(_T1B){case Cyc_AssnDef_ULt:
# 1915
 if(c1!=4294967295U)goto _TL2B9;_T1C= & Cyc_PrattProver_inconsistent;_T1D= (struct Cyc_PrattProver_Inconsistent_exn_struct*)_T1C;_throw(_T1D);goto _TL2BA;_TL2B9: _TL2BA:
# 1921
 c1= c1 + 1U;goto _LL23;case Cyc_AssnDef_ULte: _LL23:
# 1928
 if(c1 <= 2147483647U)goto _TL2BB;_T1E= g;_T1F= 
Cyc_AssnDef_zero();_T20= t2;_T21= Cyc_PrattProver_INT_MIN;Cyc_PrattProver_set_distance(_T1E,_T1F,_T20,_T21,0);goto _TL2BC;
# 1931
_TL2BB: _T22= g;_T23= Cyc_AssnDef_zero();_T24= t2;_T25= c1;_T26= (int)_T25;_T27= - _T26;Cyc_PrattProver_set_distance(_T22,_T23,_T24,_T27,0);_TL2BC:
 return;case Cyc_AssnDef_SLt:
# 1935
 if(c1!=2147483647U)goto _TL2BD;_T28= & Cyc_PrattProver_inconsistent;_T29= (struct Cyc_PrattProver_Inconsistent_exn_struct*)_T28;_throw(_T29);goto _TL2BE;_TL2BD: _TL2BE:
# 1941
 c1= c1 + 1U;goto _LL27;case Cyc_AssnDef_SLte: _LL27: _T2A= c1;_T2B= Cyc_PrattProver_INT_MIN;_T2C= (unsigned)_T2B;
# 1946
if(_T2A!=_T2C)goto _TL2BF;
return;_TL2BF: _T2D= g;_T2E= 
Cyc_AssnDef_zero();_T2F= t2;_T30= c1;_T31= (int)_T30;_T32= - _T31;Cyc_PrattProver_set_distance(_T2D,_T2E,_T2F,_T32,1);return Cyc_PrattProver_set_distance(_T2D,_T2E,_T2F,_T32,1);default: _T34= Cyc_Warn_impos;{
# 1950
int(*_T5B)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T34;_T33= _T5B;}_T35= _tag_fat("Vcgen: found bad primop in add_constraint",sizeof(char),42U);_T36= _tag_fat(0U,sizeof(void*),0);_T33(_T35,_T36);};}_TL2AE: goto _TL2AC;_TL2AB: _T37= _T58.f1;_T38= (int*)_T37;_T39= *_T38;if(_T39!=0)goto _TL2C1;_T3A= _T58.f1;{struct Cyc_AssnDef_Uint_AssnDef_Term_struct*_T5B=(struct Cyc_AssnDef_Uint_AssnDef_Term_struct*)_T3A;_T5A= _T5B->f1;}{unsigned c2=_T5A;_T3B= p;_T3C= (int)_T3B;switch(_T3C){case Cyc_AssnDef_ULt:
# 1879
 if(c2!=0U)goto _TL2C4;_T3D= & Cyc_PrattProver_inconsistent;_T3E= (struct Cyc_PrattProver_Inconsistent_exn_struct*)_T3D;_throw(_T3E);goto _TL2C5;_TL2C4: _TL2C5:
# 1885
 c2= c2 - 1U;goto _LL18;case Cyc_AssnDef_ULte: _LL18:
# 1890
 if(c2 > 2147483647U)goto _TL2C6;_T3F= g;_T40= t1;_T41= 
Cyc_AssnDef_zero();_T42= c2;_T43= (int)_T42;Cyc_PrattProver_set_distance(_T3F,_T40,_T41,_T43,0);goto _TL2C7;_TL2C6: _TL2C7:
 return;case Cyc_AssnDef_SLt: _T44= c2;_T45= Cyc_PrattProver_INT_MIN;_T46= (unsigned)_T45;
# 1895
if(_T44!=_T46)goto _TL2C8;_T47= & Cyc_PrattProver_inconsistent;_T48= (struct Cyc_PrattProver_Inconsistent_exn_struct*)_T47;_throw(_T48);goto _TL2C9;_TL2C8: _TL2C9:
# 1901
 c2= c2 - 1U;goto _LL1C;case Cyc_AssnDef_SLte: _LL1C: _T49= g;_T4A= t1;_T4B= 
# 1905
Cyc_AssnDef_zero();_T4C= c2;_T4D= (int)_T4C;Cyc_PrattProver_set_distance(_T49,_T4A,_T4B,_T4D,1);
return;default: _T4F= Cyc_Warn_impos;{
# 1908
int(*_T5B)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T4F;_T4E= _T5B;}_T50= _tag_fat("Vcgen: found bad primop in add_constraint",sizeof(char),42U);_T51= _tag_fat(0U,sizeof(void*),0);_T4E(_T50,_T51);};}goto _TL2C2;_TL2C1: goto _LL0;_TL2C2: _TL2AC: _LL0:;}_T52= p;_T53= (int)_T52;switch(_T53){case Cyc_AssnDef_ULt:
# 1960
 Cyc_PrattProver_set_distance(g,t1,t2,-1,0);return Cyc_PrattProver_set_distance(g,t1,t2,-1,0);case Cyc_AssnDef_ULte:
# 1963
 Cyc_PrattProver_set_distance(g,t1,t2,0,0);return Cyc_PrattProver_set_distance(g,t1,t2,0,0);case Cyc_AssnDef_SLt:
# 1966
 Cyc_PrattProver_set_distance(g,t1,t2,-1,1);return Cyc_PrattProver_set_distance(g,t1,t2,-1,1);case Cyc_AssnDef_SLte:
# 1969
 Cyc_PrattProver_set_distance(g,t1,t2,0,1);return Cyc_PrattProver_set_distance(g,t1,t2,0,1);default: _T55= Cyc_Warn_impos;{
# 1971
int(*_T58)(struct _fat_ptr,struct _fat_ptr)=(int(*)(struct _fat_ptr,struct _fat_ptr))_T55;_T54= _T58;}_T56= _tag_fat("Vcgen:found bad primop in add_constraint",sizeof(char),41U);_T57= _tag_fat(0U,sizeof(void*),0);_T54(_T56,_T57);};}
# 1976
static void Cyc_PrattProver_add_eq(struct Cyc_PrattProver_Graph*g,void*t1,void*t2){
if(t1!=t2)goto _TL2CB;
return;_TL2CB:
 Cyc_PrattProver_add_constraint(g,t1,5U,t2);
Cyc_PrattProver_add_constraint(g,t2,5U,t1);
Cyc_PrattProver_add_constraint(g,t1,3U,t2);
Cyc_PrattProver_add_constraint(g,t2,3U,t1);}struct _tuple20{void*f0;enum Cyc_AssnDef_Primreln f1;void*f2;};
# 1985
static void Cyc_PrattProver_add_prim(struct _tuple20*p,struct Cyc_PrattProver_Graph*g){struct _tuple20*_T0;enum Cyc_AssnDef_Primreln _T1;int _T2;_T0= p;{
struct _tuple20 _T3=*_T0;void*_T4;enum Cyc_AssnDef_Primreln _T5;void*_T6;_T6= _T3.f0;_T5= _T3.f1;_T4= _T3.f2;{void*t1=_T6;enum Cyc_AssnDef_Primreln p=_T5;void*t2=_T4;_T1= p;_T2= (int)_T1;
if(_T2!=0)goto _TL2CD;
Cyc_PrattProver_add_eq(g,t1,t2);goto _TL2CE;
# 1990
_TL2CD: Cyc_PrattProver_add_constraint(g,t1,p,t2);_TL2CE:;}}}char Cyc_PrattProver_TooLarge[9U]="TooLarge";struct Cyc_PrattProver_TooLarge_exn_struct{char*tag;};
# 1994
struct Cyc_PrattProver_TooLarge_exn_struct Cyc_PrattProver_too_large={Cyc_PrattProver_TooLarge};
# 1996
static struct Cyc_Set_Set*Cyc_PrattProver_get_pointer_terms(void*t,struct Cyc_Set_Set*s){long _T0;struct Cyc_Absyn_Exp*_T1;void*_T2;int*_T3;unsigned _T4;void*_T5;void*_T6;void*_T7;void*_T8;void*_T9;void*_TA;void*_TB;struct Cyc_Set_Set*_TC;
LOOP: {
void*topt=Cyc_AssnDef_get_term_type(t);
if(topt==0)goto _TL2CF;_T0= Cyc_Tcutil_is_nullable_pointer_type(topt,0);if(!_T0)goto _TL2CF;_T1= 
Cyc_Tcutil_get_type_bound(topt);
# 1999
if(_T1==0)goto _TL2CF;
# 2001
s= Cyc_Set_insert(s,t);goto _TL2D0;_TL2CF: _TL2D0:{void*_TD;void*_TE;_T2= t;_T3= (int*)_T2;_T4= *_T3;switch(_T4){case 5: _T5= t;{struct Cyc_AssnDef_Cast_AssnDef_Term_struct*_TF=(struct Cyc_AssnDef_Cast_AssnDef_Term_struct*)_T5;_T6= _TF->f2;_TE= (void*)_T6;}{void*t1=_TE;
# 2004
t= t1;goto LOOP;}case 3: _T7= t;{struct Cyc_AssnDef_Unop_AssnDef_Term_struct*_TF=(struct Cyc_AssnDef_Unop_AssnDef_Term_struct*)_T7;_T8= _TF->f2;_TE= (void*)_T8;}{void*t1=_TE;
# 2007
t= t1;goto LOOP;}case 4: _T9= t;{struct Cyc_AssnDef_Binop_AssnDef_Term_struct*_TF=(struct Cyc_AssnDef_Binop_AssnDef_Term_struct*)_T9;_TA= _TF->f2;_TE= (void*)_TA;_TB= _TF->f3;_TD= (void*)_TB;}{void*t1=_TE;void*t2=_TD;
# 2010
s= Cyc_PrattProver_get_pointer_terms(t1,s);
t= t2;goto LOOP;}default: goto _LL0;}_LL0:;}_TC= s;
# 2016
return _TC;}}
# 2019
static struct Cyc_Set_Set*Cyc_PrattProver_get_graph_pointer_terms(struct Cyc_PrattProver_Graph*_g,struct Cyc_Set_Set*s){struct Cyc_PrattProver_Graph*_T0;struct Cyc_PrattProver_Node*_T1;void*_T2;struct Cyc_Set_Set*_T3;struct Cyc_PrattProver_Node*_T4;struct Cyc_PrattProver_Graph*_T5;struct Cyc_Set_Set*_T6;
struct Cyc_PrattProver_Graph*g=_g;
_TL2D5: if(g!=0)goto _TL2D3;else{goto _TL2D4;}
_TL2D3: _T0= g;{struct Cyc_PrattProver_Node*rs=_T0->rows;_TL2D9: if(rs!=0)goto _TL2D7;else{goto _TL2D8;}
_TL2D7: _T1= rs;_T2= _T1->rep;_T3= s;s= Cyc_PrattProver_get_pointer_terms(_T2,_T3);_T4= rs;
# 2022
rs= _T4->next;goto _TL2D9;_TL2D8:;}_T5= g;
# 2021
g= _T5->next;goto _TL2D5;_TL2D4: _T6= s;
# 2024
return _T6;}struct _tuple21{void*f0;void*f1;void*f2;};
# 2027
static void Cyc_PrattProver_add_ptr_info(struct _tuple21*env,struct Cyc_PrattProver_Graph*g){struct _tuple21*_T0;struct Cyc_PrattProver_Graph*_T1;void*_T2;struct Cyc_PrattProver_Node*_T3;struct Cyc_PrattProver_Node*_T4;int*_T5;int _T6;int _T7;_T0= env;{
struct _tuple21 _T8=*_T0;void*_T9;void*_TA;void*_TB;_TB= _T8.f0;_TA= _T8.f1;_T9= _T8.f2;{void*t=_TB;void*tnumelts=_TA;void*bnd=_T9;_T1= g;_T2= 
# 2030
Cyc_AssnDef_zero();_T3= Cyc_PrattProver_term2node(_T1,_T2);_T4= Cyc_PrattProver_term2node(g,t);{int*dist=Cyc_PrattProver_lookup_dist(_T3,_T4,0);
if(dist==0)goto _TL2DA;_T5= dist;_T6= *_T5;_T7= - 1;if(_T6 > _T7)goto _TL2DA;
Cyc_PrattProver_add_constraint(g,bnd,5U,tnumelts);
Cyc_PrattProver_add_constraint(g,bnd,3U,tnumelts);goto _TL2DB;_TL2DA: _TL2DB:;}}}}
# 2037
static struct Cyc_PrattProver_Graph*Cyc_PrattProver_add_ptr_type_info(void*t,struct Cyc_PrattProver_Graph*gs){void*_T0;struct Cyc_Absyn_Exp*_T1;struct Cyc_Absyn_Exp*_T2;struct _tuple21 _T3;struct Cyc_PrattProver_Graph*(*_T4)(void(*)(struct _tuple21*,struct Cyc_PrattProver_Graph*),struct _tuple21*,struct Cyc_PrattProver_Graph*);struct _tuple21*_T5;struct Cyc_PrattProver_Graph*_T6;struct Cyc_PrattProver_Graph*_T7;_T0= 
Cyc_AssnDef_get_term_type(t);{void*type=_check_null(_T0);_T1= 
Cyc_Tcutil_get_type_bound(type);_T2= _check_null(_T1);{struct Cyc_Absyn_Exp*e=Cyc_PrattProver_strip_cast(_T2);
void*bnd=Cyc_AssnDef_cnst(e);
void*tnumelts=Cyc_AssnDef_numelts_term(t);{struct _tuple21 _T8;
_T8.f0= t;_T8.f1= tnumelts;_T8.f2= bnd;_T3= _T8;}{struct _tuple21 env=_T3;{
struct Cyc_PrattProver_Graph*(*_T8)(void(*)(struct _tuple21*,struct Cyc_PrattProver_Graph*),struct _tuple21*,struct Cyc_PrattProver_Graph*)=(struct Cyc_PrattProver_Graph*(*)(void(*)(struct _tuple21*,struct Cyc_PrattProver_Graph*),struct _tuple21*,struct Cyc_PrattProver_Graph*))Cyc_PrattProver_app_graphs;_T4= _T8;}_T5= & env;_T6= gs;_T7= _T4(Cyc_PrattProver_add_ptr_info,_T5,_T6);return _T7;}}}}
# 2050
static struct Cyc_PrattProver_Graph*Cyc_PrattProver_add_type_assns(struct Cyc_PrattProver_Graph*gs){struct Cyc_PrattProver_Graph*_T0;int(*_T1)(void*,void*);struct Cyc_Set_Set*_T2;struct Cyc_PrattProver_Graph*(*_T3)(struct Cyc_PrattProver_Graph*(*)(void*,struct Cyc_PrattProver_Graph*),struct Cyc_Set_Set*,struct Cyc_PrattProver_Graph*);void*(*_T4)(void*(*)(void*,void*),struct Cyc_Set_Set*,void*);struct Cyc_Set_Set*_T5;struct Cyc_PrattProver_Graph*_T6;struct Cyc_PrattProver_Graph*_T7;_T0= gs;_T1= Cyc_AssnDef_termcmp;_T2= 
Cyc_Set_empty(_T1);{struct Cyc_Set_Set*ptrs=Cyc_PrattProver_get_graph_pointer_terms(_T0,_T2);_T4= Cyc_Set_fold;{
struct Cyc_PrattProver_Graph*(*_T8)(struct Cyc_PrattProver_Graph*(*)(void*,struct Cyc_PrattProver_Graph*),struct Cyc_Set_Set*,struct Cyc_PrattProver_Graph*)=(struct Cyc_PrattProver_Graph*(*)(struct Cyc_PrattProver_Graph*(*)(void*,struct Cyc_PrattProver_Graph*),struct Cyc_Set_Set*,struct Cyc_PrattProver_Graph*))_T4;_T3= _T8;}_T5= ptrs;_T6= gs;_T7= _T3(Cyc_PrattProver_add_ptr_type_info,_T5,_T6);return _T7;}}
# 2056
static void Cyc_PrattProver_add_numelts_info(int dummy,struct Cyc_PrattProver_Graph*g){struct Cyc_PrattProver_Graph*_T0;void*_T1;struct Cyc_PrattProver_Graph*_T2;struct Cyc_PrattProver_Node*_T3;int*_T4;int _T5;struct Cyc_AssnDef_Unop_AssnDef_Term_struct*_T6;enum Cyc_Absyn_Primop _T7;struct Cyc_AssnDef_Unop_AssnDef_Term_struct*_T8;void*_T9;int*_TA;int _TB;struct Cyc_AssnDef_Unop_AssnDef_Term_struct*_TC;void*_TD;struct Cyc_AssnDef_Offseti_AssnDef_Term_struct*_TE;void*_TF;int*_T10;int _T11;void*_T12;void*_T13;void*_T14;unsigned _T15;int*_T16;struct Cyc_PrattProver_Graph*_T17;int _T18;unsigned _T19;void*_T1A;struct Cyc_PrattProver_Node*_T1B;void*_T1C;struct Cyc_PrattProver_Node*_T1D;_T0= g;_T1= 
Cyc_AssnDef_zero();{struct Cyc_PrattProver_Node*zeronode=Cyc_PrattProver_term2node(_T0,_T1);_T2= g;{
# 2059
struct Cyc_PrattProver_Node*n=_T2->rows;_TL2DF: if(n!=0)goto _TL2DD;else{goto _TL2DE;}
_TL2DD: _T3= n;{void*_T1E=_T3->rep;unsigned _T1F;void*_T20;_T4= (int*)_T1E;_T5= *_T4;if(_T5!=3)goto _TL2E0;_T6= (struct Cyc_AssnDef_Unop_AssnDef_Term_struct*)_T1E;_T7= _T6->f1;if(_T7!=Cyc_Absyn_Numelts)goto _TL2E2;_T8= (struct Cyc_AssnDef_Unop_AssnDef_Term_struct*)_T1E;_T9= _T8->f2;_TA= (int*)_T9;_TB= *_TA;if(_TB!=14)goto _TL2E4;_TC= (struct Cyc_AssnDef_Unop_AssnDef_Term_struct*)_T1E;_TD= _TC->f2;_TE= (struct Cyc_AssnDef_Offseti_AssnDef_Term_struct*)_TD;_TF= _TE->f2;_T10= (int*)_TF;_T11= *_T10;if(_T11!=0)goto _TL2E6;{struct Cyc_AssnDef_Unop_AssnDef_Term_struct*_T21=(struct Cyc_AssnDef_Unop_AssnDef_Term_struct*)_T1E;_T12= _T21->f2;{struct Cyc_AssnDef_Offseti_AssnDef_Term_struct*_T22=(struct Cyc_AssnDef_Offseti_AssnDef_Term_struct*)_T12;_T13= _T22->f1;_T20= (void*)_T13;_T14= _T22->f2;{struct Cyc_AssnDef_Uint_AssnDef_Term_struct*_T23=(struct Cyc_AssnDef_Uint_AssnDef_Term_struct*)_T14;_T1F= _T23->f1;}}}{void*x=_T20;unsigned uk=_T1F;_T15= uk;{
# 2062
int k=(int)_T15;
if(k <= 0)goto _TL2E8;{
# 2065
void*numelts_x=Cyc_AssnDef_numelts_term(x);
struct Cyc_PrattProver_Node*n_numelts_x=Cyc_PrattProver_term2node(g,numelts_x);
# 2068
int*dist_opt=Cyc_PrattProver_lookup_dist(zeronode,n_numelts_x,0);
if(dist_opt==0)goto _TL2EA;_T16= dist_opt;{
# 2073
int j=*_T16;
# 2075
int negj=- j;
# 2077
if(negj <= 0)goto _TL2EC;{
int c=negj - 1;
# 2080
if(k > c)goto _TL2EE;_T17= g;_T18= c - k;_T19= (unsigned)_T18;_T1A= 
# 2082
Cyc_AssnDef_uint(_T19);_T1B= n;_T1C= _T1B->rep;Cyc_PrattProver_add_constraint(_T17,_T1A,4U,_T1C);goto _TL2EF;_TL2EE: _TL2EF:;}goto _TL2ED;_TL2EC: _TL2ED:;}goto _TL2EB;_TL2EA: _TL2EB:;}goto _TL2E9;_TL2E8: _TL2E9: goto _LL0;}}_TL2E6: goto _LL3;_TL2E4: goto _LL3;_TL2E2: goto _LL3;_TL2E0: _LL3: goto _LL0;_LL0:;}_T1D= n;
# 2059
n= _T1D->next;goto _TL2DF;_TL2DE:;}}}
# 2094
static struct Cyc_PrattProver_Graph*Cyc_PrattProver_add_numelts_info_graphs(struct Cyc_PrattProver_Graph*gs){struct Cyc_PrattProver_Graph*(*_T0)(void(*)(int,struct Cyc_PrattProver_Graph*),int,struct Cyc_PrattProver_Graph*);struct Cyc_PrattProver_Graph*_T1;struct Cyc_PrattProver_Graph*_T2;{
struct Cyc_PrattProver_Graph*(*_T3)(void(*)(int,struct Cyc_PrattProver_Graph*),int,struct Cyc_PrattProver_Graph*)=(struct Cyc_PrattProver_Graph*(*)(void(*)(int,struct Cyc_PrattProver_Graph*),int,struct Cyc_PrattProver_Graph*))Cyc_PrattProver_app_graphs;_T0= _T3;}_T1= gs;_T2= _T0(Cyc_PrattProver_add_numelts_info,0,_T1);return _T2;}
# 2102
struct Cyc_Set_Set*Cyc_PrattProver_filter_implies(struct Cyc_Set_Set*a1,struct Cyc_Set_Set*a2){int(*_T0)(void*,void*);struct Cyc_Set_Set*_T1;struct _handler_cons*_T2;int _T3;struct Cyc_List_List*_T4;void*_T5;int*_T6;int _T7;void*_T8;struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T9;void*_TA;int*_TB;int _TC;void*_TD;struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_TE;void*_TF;struct Cyc_AssnDef_Uint_AssnDef_Term_struct*_T10;unsigned _T11;void*_T12;struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T13;enum Cyc_AssnDef_Primreln _T14;void*_T15;void*_T16;void*_T17;struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T18;enum Cyc_AssnDef_Primreln _T19;void*_T1A;struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T1B;void*_T1C;int*_T1D;int _T1E;void*_T1F;struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T20;void*_T21;struct Cyc_AssnDef_Uint_AssnDef_Term_struct*_T22;unsigned _T23;void*_T24;struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T25;enum Cyc_AssnDef_Primreln _T26;void*_T27;struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T28;void*_T29;int*_T2A;int _T2B;void*_T2C;struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T2D;void*_T2E;struct Cyc_AssnDef_Uint_AssnDef_Term_struct*_T2F;unsigned _T30;void*_T31;void*_T32;long _T33;void*_T34;void*_T35;void*_T36;void*_T37;void*_T38;enum Cyc_AssnDef_Primreln _T39;int _T3A;struct Cyc_List_List*_T3B;void*_T3C;struct Cyc_PrattProver_Inconsistent_exn_struct*_T3D;char*_T3E;char*_T3F;int(*_T40)(void*,void*);struct Cyc_List_List*_T41;void*_T42;int*_T43;int _T44;void*_T45;struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T46;void*_T47;int*_T48;int _T49;void*_T4A;struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T4B;void*_T4C;struct Cyc_AssnDef_Uint_AssnDef_Term_struct*_T4D;unsigned _T4E;void*_T4F;struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T50;enum Cyc_AssnDef_Primreln _T51;void*_T52;void*_T53;void*_T54;struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T55;enum Cyc_AssnDef_Primreln _T56;void*_T57;struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T58;void*_T59;int*_T5A;int _T5B;void*_T5C;struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T5D;void*_T5E;struct Cyc_AssnDef_Uint_AssnDef_Term_struct*_T5F;unsigned _T60;void*_T61;struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T62;enum Cyc_AssnDef_Primreln _T63;void*_T64;struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T65;void*_T66;int*_T67;int _T68;void*_T69;struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T6A;void*_T6B;struct Cyc_AssnDef_Uint_AssnDef_Term_struct*_T6C;unsigned _T6D;void*_T6E;void*_T6F;long _T70;void*_T71;void*_T72;void*_T73;void*_T74;void*_T75;struct Cyc_List_List*_T76;struct Cyc_List_List*_T77;struct Cyc_PrattProver_Graph*_T78;struct _handler_cons*_T79;int _T7A;enum Cyc_AssnDef_Primreln _T7B;int _T7C;void*_T7D;struct Cyc_PrattProver_Inconsistent_exn_struct*_T7E;char*_T7F;char*_T80;struct Cyc_List_List*_T81;struct Cyc_Set_Set*_T82;
# 2104
a2= Cyc_Set_diff(a2,a1);{
struct Cyc_List_List*a2s=Cyc_Set_to_list(a2);
# 2107
if(a2s!=0)goto _TL2F0;_T0= Cyc_AssnDef_assncmp;_T1= 
Cyc_Set_empty(_T0);return _T1;_TL2F0: {
struct Cyc_PrattProver_Graph*g=Cyc_PrattProver_true_graph();
struct Cyc_List_List*a1s=Cyc_Set_to_list(a1);{struct _handler_cons _T83;_T2= & _T83;_push_handler(_T2);{int _T84=0;_T3= setjmp(_T83.handler);if(!_T3)goto _TL2F2;_T84= 1;goto _TL2F3;_TL2F2: _TL2F3: if(_T84)goto _TL2F4;else{goto _TL2F6;}_TL2F6:
# 2115
 _TL2FA: if(a1s!=0)goto _TL2F8;else{goto _TL2F9;}
_TL2F8: _T4= a1s;{void*a=_T4->hd;
# 2118
LOOP: {void*_T85;enum Cyc_AssnDef_Primreln _T86;void*_T87;_T5= a;_T6= (int*)_T5;_T7= *_T6;if(_T7!=2)goto _TL2FB;_T8= a;_T9= (struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T8;_TA= _T9->f1;_TB= (int*)_TA;_TC= *_TB;if(_TC!=0)goto _TL2FD;_TD= a;_TE= (struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_TD;_TF= _TE->f1;_T10= (struct Cyc_AssnDef_Uint_AssnDef_Term_struct*)_TF;_T11= _T10->f1;if(_T11!=0)goto _TL2FF;_T12= a;_T13= (struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T12;_T14= _T13->f2;if(_T14!=Cyc_AssnDef_Neq)goto _TL301;_T15= a;{struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T88=(struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T15;_T16= _T88->f3;_T87= (void*)_T16;}{void*t2=_T87;_T87= t2;goto _LL4;}_TL301: goto _LL7;_TL2FF: _T17= a;_T18= (struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T17;_T19= _T18->f2;if(_T19!=Cyc_AssnDef_Neq)goto _TL303;_T1A= a;_T1B= (struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T1A;_T1C= _T1B->f3;_T1D= (int*)_T1C;_T1E= *_T1D;if(_T1E!=0)goto _TL305;_T1F= a;_T20= (struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T1F;_T21= _T20->f3;_T22= (struct Cyc_AssnDef_Uint_AssnDef_Term_struct*)_T21;_T23= _T22->f1;if(_T23!=0)goto _TL307;goto _LL3;_TL307: goto _LL5;_TL305: goto _LL5;_TL303: goto _LL7;_TL2FD: _T24= a;_T25= (struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T24;_T26= _T25->f2;if(_T26!=Cyc_AssnDef_Neq)goto _TL309;_T27= a;_T28= (struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T27;_T29= _T28->f3;_T2A= (int*)_T29;_T2B= *_T2A;if(_T2B!=0)goto _TL30B;_T2C= a;_T2D= (struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T2C;_T2E= _T2D->f3;_T2F= (struct Cyc_AssnDef_Uint_AssnDef_Term_struct*)_T2E;_T30= _T2F->f1;if(_T30!=0)goto _TL30D;_LL3: _T31= a;{struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T88=(struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T31;_T32= _T88->f1;_T87= (void*)_T32;}_LL4:{void*t1=_T87;
# 2126
void*topt=Cyc_AssnDef_get_term_type(t1);
if(topt==0)goto _TL311;else{goto _TL312;}_TL312: _T33= Cyc_Tcutil_is_signed_type(topt);if(_T33)goto _TL311;else{goto _TL30F;}
_TL311: goto _TL2F7;_TL30F: _T34= 
Cyc_AssnDef_zero();_T35= t1;a= Cyc_AssnDef_ult(_T34,_T35);goto LOOP;}_TL30D: goto _LL5;_TL30B: _LL5: goto _TL2F7;_TL309: _LL7: _T36= a;{struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T88=(struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T36;_T37= _T88->f1;_T87= (void*)_T37;_T86= _T88->f2;_T38= _T88->f3;_T85= (void*)_T38;}{void*t1=_T87;enum Cyc_AssnDef_Primreln p=_T86;void*t2=_T85;_T39= p;_T3A= (int)_T39;
# 2134
if(_T3A!=0)goto _TL313;
# 2137
Cyc_PrattProver_add_eq(g,t1,t2);goto _TL314;
# 2141
_TL313: Cyc_PrattProver_add_constraint(g,t1,p,t2);_TL314: goto _TL2F7;}_TL2FB: goto _TL2F7;;}}_TL2F7: _T3B= a1s;
# 2115
a1s= _T3B->tl;goto _TL2FA;_TL2F9:
# 2151
 Cyc_PrattProver_associate_ud_sd_in_graph(0,g);
Cyc_PrattProver_break_term_in_graph(0,g);
Cyc_PrattProver_subst_close_graph(1,g);
Cyc_PrattProver_subst_close_graph(0,g);
Cyc_PrattProver_reduce_terms(0,g);
Cyc_PrattProver_johnson(0,g);
Cyc_PrattProver_add_type_assns(g);
Cyc_PrattProver_add_numelts_info(0,g);_pop_handler();goto _TL2F5;_TL2F4: _T3C= Cyc_Core_get_exn_thrown();{void*_T85=(void*)_T3C;void*_T86;_T3D= (struct Cyc_PrattProver_Inconsistent_exn_struct*)_T85;_T3E= _T3D->tag;_T3F= Cyc_PrattProver_Inconsistent;if(_T3E!=_T3F)goto _TL315;
# 2162
return 0;_TL315: _T86= _T85;{void*exn=_T86;_rethrow(exn);};}_TL2F5:;}}_T40= Cyc_AssnDef_assncmp;{
# 2165
struct Cyc_Set_Set*res=Cyc_Set_empty(_T40);
_TL31A: if(a2s!=0)goto _TL318;else{goto _TL319;}
_TL318: _T41= a2s;{void*orig_a=_T41->hd;
void*a=Cyc_AssnDef_not(orig_a);
# 2170
LOOP2: {void*_T83;enum Cyc_AssnDef_Primreln _T84;void*_T85;_T42= a;_T43= (int*)_T42;_T44= *_T43;if(_T44!=2)goto _TL31B;_T45= a;_T46= (struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T45;_T47= _T46->f1;_T48= (int*)_T47;_T49= *_T48;if(_T49!=0)goto _TL31D;_T4A= a;_T4B= (struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T4A;_T4C= _T4B->f1;_T4D= (struct Cyc_AssnDef_Uint_AssnDef_Term_struct*)_T4C;_T4E= _T4D->f1;if(_T4E!=0)goto _TL31F;_T4F= a;_T50= (struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T4F;_T51= _T50->f2;if(_T51!=Cyc_AssnDef_Neq)goto _TL321;_T52= a;{struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T86=(struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T52;_T53= _T86->f3;_T85= (void*)_T53;}{void*t2=_T85;_T85= t2;goto _LL14;}_TL321: goto _LL17;_TL31F: _T54= a;_T55= (struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T54;_T56= _T55->f2;if(_T56!=Cyc_AssnDef_Neq)goto _TL323;_T57= a;_T58= (struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T57;_T59= _T58->f3;_T5A= (int*)_T59;_T5B= *_T5A;if(_T5B!=0)goto _TL325;_T5C= a;_T5D= (struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T5C;_T5E= _T5D->f3;_T5F= (struct Cyc_AssnDef_Uint_AssnDef_Term_struct*)_T5E;_T60= _T5F->f1;if(_T60!=0)goto _TL327;goto _LL13;_TL327: goto _LL15;_TL325: goto _LL15;_TL323: goto _LL17;_TL31D: _T61= a;_T62= (struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T61;_T63= _T62->f2;if(_T63!=Cyc_AssnDef_Neq)goto _TL329;_T64= a;_T65= (struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T64;_T66= _T65->f3;_T67= (int*)_T66;_T68= *_T67;if(_T68!=0)goto _TL32B;_T69= a;_T6A= (struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T69;_T6B= _T6A->f3;_T6C= (struct Cyc_AssnDef_Uint_AssnDef_Term_struct*)_T6B;_T6D= _T6C->f1;if(_T6D!=0)goto _TL32D;_LL13: _T6E= a;{struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T86=(struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T6E;_T6F= _T86->f1;_T85= (void*)_T6F;}_LL14:{void*t1=_T85;
# 2178
void*topt=Cyc_AssnDef_get_term_type(t1);
if(topt==0)goto _TL331;else{goto _TL332;}_TL332: _T70= Cyc_Tcutil_is_signed_type(topt);if(_T70)goto _TL331;else{goto _TL32F;}
_TL331: res= Cyc_Set_insert(res,orig_a);goto _TL317;_TL32F: _T71= 
# 2183
Cyc_AssnDef_zero();_T72= t1;a= Cyc_AssnDef_ult(_T71,_T72);goto LOOP2;}_TL32D: goto _LL15;_TL32B: _LL15:
# 2186
 res= Cyc_Set_insert(res,orig_a);goto _TL317;_TL329: _LL17: _T73= a;{struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T86=(struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T73;_T74= _T86->f1;_T85= (void*)_T74;_T84= _T86->f2;_T75= _T86->f3;_T83= (void*)_T75;}{void*t1=_T85;enum Cyc_AssnDef_Primreln p=_T84;void*t2=_T83;
# 2189
struct Cyc_PrattProver_Graph*g2;_T76= a2s;_T77= _T76->tl;
if(_T77==0)goto _TL333;_T78= 
Cyc_PrattProver_copy_graphs(g);g2= _check_null(_T78);goto _TL334;
# 2193
_TL333: g2= g;_TL334:{struct _handler_cons _T86;_T79= & _T86;_push_handler(_T79);{int _T87=0;_T7A= setjmp(_T86.handler);if(!_T7A)goto _TL335;_T87= 1;goto _TL336;_TL335: _TL336: if(_T87)goto _TL337;else{goto _TL339;}_TL339: _T7B= p;_T7C= (int)_T7B;
# 2196
if(_T7C!=0)goto _TL33A;
# 2199
Cyc_PrattProver_add_eq(g2,t1,t2);goto _TL33B;
# 2203
_TL33A: Cyc_PrattProver_add_constraint(g2,t1,p,t2);_TL33B: _pop_handler();goto _TL338;_TL337: _T7D= Cyc_Core_get_exn_thrown();{void*_T88=(void*)_T7D;void*_T89;_T7E= (struct Cyc_PrattProver_Inconsistent_exn_struct*)_T88;_T7F= _T7E->tag;_T80= Cyc_PrattProver_Inconsistent;if(_T7F!=_T80)goto _TL33C;goto _TL317;_TL33C: _T89= _T88;{void*exn=_T89;_rethrow(exn);};}_TL338:;}}goto _LL1A;}_TL31B: _LL1A:
# 2226
 res= Cyc_Set_insert(res,orig_a);goto _TL317;;}}_TL317: _T81= a2s;
# 2166
a2s= _T81->tl;goto _TL31A;_TL319: _T82= res;
# 2230
return _T82;}}}}struct _tuple22{struct Cyc_PrattProver_Graph*f0;struct Cyc_List_List*f1;};
# 2234
static long Cyc_PrattProver_inconsist(void*a){struct _handler_cons*_T0;int _T1;void*_T2;int*_T3;unsigned _T4;void*_T5;void*_T6;void*_T7;struct Cyc_List_List*_T8;void*_T9;void*_TA;void*_TB;int _TC;unsigned _TD;unsigned _TE;struct Cyc_PrattProver_Graph*_TF;struct Cyc_List_List*_T10;struct _tuple22*_T11;struct Cyc_List_List*_T12;void*_T13;struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T14;void*_T15;int*_T16;int _T17;void*_T18;struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T19;void*_T1A;struct Cyc_AssnDef_Uint_AssnDef_Term_struct*_T1B;unsigned _T1C;void*_T1D;struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T1E;enum Cyc_AssnDef_Primreln _T1F;void*_T20;void*_T21;void*_T22;struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T23;enum Cyc_AssnDef_Primreln _T24;void*_T25;struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T26;void*_T27;int*_T28;int _T29;void*_T2A;struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T2B;void*_T2C;struct Cyc_AssnDef_Uint_AssnDef_Term_struct*_T2D;unsigned _T2E;void*_T2F;struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T30;enum Cyc_AssnDef_Primreln _T31;void*_T32;struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T33;void*_T34;int*_T35;int _T36;void*_T37;struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T38;void*_T39;struct Cyc_AssnDef_Uint_AssnDef_Term_struct*_T3A;unsigned _T3B;void*_T3C;void*_T3D;long _T3E;void*_T3F;void*_T40;void*_T41;void*_T42;void*_T43;void*_T44;void*_T45;void*_T46;void*_T47;void*_T48;void*_T49;void*_T4A;void*_T4B;void*_T4C;enum Cyc_AssnDef_Primreln _T4D;int _T4E;struct Cyc_List_List*_T4F;struct Cyc_List_List*_T50;struct Cyc_PrattProver_Inconsistent_exn_struct*_T51;struct Cyc_PrattProver_Inconsistent_exn_struct*_T52;void*_T53;struct Cyc_PrattProver_Inconsistent_exn_struct*_T54;char*_T55;char*_T56;struct Cyc_List_List*_T57;void*_T58;struct Cyc_AssnDef_True_AssnDef_Assn_struct*_T59;struct Cyc_AssnDef_True_AssnDef_Assn_struct*_T5A;struct Cyc_List_List*_T5B;
# 2236
struct Cyc_PrattProver_Graph*g=Cyc_PrattProver_true_graph();
# 2239
struct Cyc_List_List*ands=0;
# 2242
struct Cyc_List_List*ors=0;
# 2244
int paths=0;
# 2249
_TL33E: if(1)goto _TL33F;else{goto _TL340;}
_TL33F:{struct _handler_cons _T5C;_T0= & _T5C;_push_handler(_T0);{int _T5D=0;_T1= setjmp(_T5C.handler);if(!_T1)goto _TL341;_T5D= 1;goto _TL342;_TL341: _TL342: if(_T5D)goto _TL343;else{goto _TL345;}_TL345:
 _TL346: if(1)goto _TL347;else{goto _TL348;}
_TL347:{enum Cyc_AssnDef_Primreln _T5E;void*_T5F;void*_T60;_T2= a;_T3= (int*)_T2;_T4= *_T3;switch(_T4){case 3: _T5= a;{struct Cyc_AssnDef_And_AssnDef_Assn_struct*_T61=(struct Cyc_AssnDef_And_AssnDef_Assn_struct*)_T5;_T6= _T61->f1;_T60= (void*)_T6;_T7= _T61->f2;_T5F= (void*)_T7;}{void*a1=_T60;void*a2=_T5F;
# 2258
a= a2;{struct Cyc_List_List*_T61=_cycalloc(sizeof(struct Cyc_List_List));
_T61->hd= a1;_T61->tl= ands;_T8= (struct Cyc_List_List*)_T61;}ands= _T8;goto _TL346;}case 4: _T9= a;{struct Cyc_AssnDef_Or_AssnDef_Assn_struct*_T61=(struct Cyc_AssnDef_Or_AssnDef_Assn_struct*)_T9;_TA= _T61->f1;_T60= (void*)_TA;_TB= _T61->f2;_T5F= (void*)_TB;}{void*a1=_T60;void*a2=_T5F;
# 2263
paths= paths + 1;_TC= paths;_TD= (unsigned)_TC;_TE= Cyc_Flags_max_vc_paths;
if(_TD <= _TE)goto _TL34A;
# 2266
a= Cyc_AssnDef_widen(a);
paths= paths + -1;goto _TL346;_TL34A: _TF= 
# 2273
Cyc_PrattProver_copy_graphs(g);{struct Cyc_PrattProver_Graph*g2=_check_null(_TF);{struct Cyc_List_List*_T61=_cycalloc(sizeof(struct Cyc_List_List));{struct _tuple22*_T62=_cycalloc(sizeof(struct _tuple22));
_T62->f0= g2;{struct Cyc_List_List*_T63=_cycalloc(sizeof(struct Cyc_List_List));_T63->hd= a2;_T63->tl= ands;_T12= (struct Cyc_List_List*)_T63;}_T62->f1= _T12;_T11= (struct _tuple22*)_T62;}_T61->hd= _T11;_T61->tl= ors;_T10= (struct Cyc_List_List*)_T61;}ors= _T10;
a= a1;goto _TL346;}}case 2: _T13= a;_T14= (struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T13;_T15= _T14->f1;_T16= (int*)_T15;_T17= *_T16;if(_T17!=0)goto _TL34C;_T18= a;_T19= (struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T18;_T1A= _T19->f1;_T1B= (struct Cyc_AssnDef_Uint_AssnDef_Term_struct*)_T1A;_T1C= _T1B->f1;if(_T1C!=0)goto _TL34E;_T1D= a;_T1E= (struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T1D;_T1F= _T1E->f2;if(_T1F!=Cyc_AssnDef_Neq)goto _TL350;_T20= a;{struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T61=(struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T20;_T21= _T61->f3;_T60= (void*)_T21;}{void*t2=_T60;_T60= t2;goto _LL8;}_TL350: goto _LLB;_TL34E: _T22= a;_T23= (struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T22;_T24= _T23->f2;if(_T24!=Cyc_AssnDef_Neq)goto _TL352;_T25= a;_T26= (struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T25;_T27= _T26->f3;_T28= (int*)_T27;_T29= *_T28;if(_T29!=0)goto _TL354;_T2A= a;_T2B= (struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T2A;_T2C= _T2B->f3;_T2D= (struct Cyc_AssnDef_Uint_AssnDef_Term_struct*)_T2C;_T2E= _T2D->f1;if(_T2E!=0)goto _TL356;goto _LL7;_TL356: goto _LL9;_TL354: goto _LL9;_TL352: goto _LLB;_TL34C: _T2F= a;_T30= (struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T2F;_T31= _T30->f2;if(_T31!=Cyc_AssnDef_Neq)goto _TL358;_T32= a;_T33= (struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T32;_T34= _T33->f3;_T35= (int*)_T34;_T36= *_T35;if(_T36!=0)goto _TL35A;_T37= a;_T38= (struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T37;_T39= _T38->f3;_T3A= (struct Cyc_AssnDef_Uint_AssnDef_Term_struct*)_T39;_T3B= _T3A->f1;if(_T3B!=0)goto _TL35C;_LL7: _T3C= a;{struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T61=(struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T3C;_T3D= _T61->f1;_T60= (void*)_T3D;}_LL8:{void*t1=_T60;
# 2283
void*topt=Cyc_AssnDef_get_term_type(t1);
if(topt==0)goto _TL360;else{goto _TL361;}_TL361: _T3E= Cyc_Tcutil_is_signed_type(topt);if(_T3E)goto _TL360;else{goto _TL35E;}
_TL360: _T60= t1;_T5F= Cyc_AssnDef_zero();goto _LLA;_TL35E: _T3F= 
Cyc_AssnDef_zero();_T40= t1;a= Cyc_AssnDef_ult(_T3F,_T40);goto _TL346;}_TL35C: goto _LL9;_TL35A: _LL9: _T41= a;{struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T61=(struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T41;_T42= _T61->f1;_T60= (void*)_T42;_T43= _T61->f3;_T5F= (void*)_T43;}_LLA:{void*t1=_T60;void*t2=_T5F;_T44= 
# 2290
Cyc_AssnDef_slt(t1,t2);_T45= Cyc_AssnDef_slt(t2,t1);_T46= Cyc_AssnDef_or(_T44,_T45);_T47= Cyc_AssnDef_ult(t1,t2);_T48= Cyc_AssnDef_ult(t2,t1);_T49= Cyc_AssnDef_or(_T47,_T48);a= Cyc_AssnDef_and(_T46,_T49);goto _TL346;}_TL358: _LLB: _T4A= a;{struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*_T61=(struct Cyc_AssnDef_Prim_AssnDef_Assn_struct*)_T4A;_T4B= _T61->f1;_T60= (void*)_T4B;_T5E= _T61->f2;_T4C= _T61->f3;_T5F= (void*)_T4C;}{void*t1=_T60;enum Cyc_AssnDef_Primreln p=_T5E;void*t2=_T5F;_T4D= p;_T4E= (int)_T4D;
# 2293
if(_T4E!=0)goto _TL362;
# 2296
Cyc_PrattProver_add_eq(g,t1,t2);goto _TL363;
# 2300
_TL362: Cyc_PrattProver_add_constraint(g,t1,p,t2);_TL363: goto _LLE;}case 0: _LLE:
# 2307
 if(ands==0)goto _TL364;_T4F= ands;
a= _T4F->hd;_T50= ands;
ands= _T50->tl;goto _TL346;_TL364:
# 2325
 Cyc_PrattProver_associate_ud_sd_in_graph(0,g);
# 2330
Cyc_PrattProver_break_term_in_graph(0,g);
# 2337
Cyc_PrattProver_subst_close_graph(1,g);
# 2339
Cyc_PrattProver_subst_close_graph(0,g);
# 2345
Cyc_PrattProver_reduce_terms(0,g);
# 2350
Cyc_PrattProver_johnson(0,g);
# 2355
Cyc_PrattProver_add_type_assns(g);
# 2360
Cyc_PrattProver_add_numelts_info(0,g);
# 2365
Cyc_PrattProver_break_term_in_graph(0,g);
# 2370
Cyc_PrattProver_associate_ud_sd_in_graph(0,g);{long _T61=0;_npop_handler(0);return _T61;}default: _T51= & Cyc_PrattProver_inconsistent;_T52= (struct Cyc_PrattProver_Inconsistent_exn_struct*)_T51;_throw(_T52);};}goto _TL346;_TL348: _pop_handler();goto _TL344;_TL343: _T53= Cyc_Core_get_exn_thrown();{void*_T5E=(void*)_T53;void*_T5F;_T54= (struct Cyc_PrattProver_Inconsistent_exn_struct*)_T5E;_T55= _T54->tag;_T56= Cyc_PrattProver_Inconsistent;if(_T55!=_T56)goto _TL366;
# 2387
if(ors!=0)goto _TL368;
# 2389
return 1;_TL368: _T57= ors;_T58= _T57->hd;{
# 2392
struct _tuple22*_T60=(struct _tuple22*)_T58;struct Cyc_List_List*_T61;struct Cyc_PrattProver_Graph*_T62;{struct _tuple22 _T63=*_T60;_T62= _T63.f0;_T61= _T63.f1;}{struct Cyc_PrattProver_Graph*g2=_T62;struct Cyc_List_List*ands2=_T61;
g= g2;
ands= ands2;_T59= & Cyc_AssnDef_true_assn;_T5A= (struct Cyc_AssnDef_True_AssnDef_Assn_struct*)_T59;
a= (void*)_T5A;_T5B= ors;
ors= _T5B->tl;goto _LL11;}}_TL366: _T5F= _T5E;{void*exn=_T5F;_rethrow(exn);}_LL11:;}_TL344:;}}goto _TL33E;_TL340:;}
# 2402
static long Cyc_PrattProver_paths_exhausted=0;
# 2404
long Cyc_PrattProver_constraint_prove(void*ctxt,void*a){long _T0;long _T1;struct Cyc___cycFILE*_T2;struct _fat_ptr _T3;struct _fat_ptr _T4;struct Cyc_String_pa_PrintArg_struct _T5;struct Cyc___cycFILE*_T6;struct _fat_ptr _T7;struct _fat_ptr _T8;long _T9;struct Cyc___cycFILE*_TA;struct _fat_ptr _TB;struct _fat_ptr _TC;struct Cyc___cycFILE*_TD;struct _fat_ptr _TE;struct _fat_ptr _TF;long _T10;
# 2406
void*nota=Cyc_AssnDef_not(a);
# 2408
void*b=Cyc_AssnDef_and(ctxt,nota);
long res=Cyc_PrattProver_inconsist(b);_T0= res;
if(_T0)goto _TL36A;else{goto _TL36C;}_TL36C: _T1= Cyc_Flags_print_unprovable;if(!_T1)goto _TL36A;_T2= Cyc_stderr;_T3= 
_tag_fat("unable to prove inconsistency of \n",sizeof(char),35U);_T4= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T2,_T3,_T4);{struct Cyc_String_pa_PrintArg_struct _T11;_T11.tag= 0;
({__typeof__(Cyc_AssnDef_assn2dag(b))_T12=Cyc_AssnDef_assn2dag(b);_T11.f1= _T12;});_T5= _T11;}{struct Cyc_String_pa_PrintArg_struct _T11=_T5;void*_T12[1];_T12[0]= & _T11;_T6= Cyc_stderr;_T7= _tag_fat("%s",sizeof(char),3U);_T8= _tag_fat(_T12,sizeof(void*),1);Cyc_fprintf(_T6,_T7,_T8);}_T9= Cyc_PrattProver_paths_exhausted;
if(!_T9)goto _TL36D;_TA= Cyc_stderr;_TB= 
_tag_fat("(paths exhausted)",sizeof(char),18U);_TC= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_TA,_TB,_TC);goto _TL36E;_TL36D: _TL36E: _TD= Cyc_stderr;_TE= 
# 2416
_tag_fat("\n",sizeof(char),2U);_TF= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_TD,_TE,_TF);goto _TL36B;_TL36A: _TL36B: _T10= res;
# 2418
return _T10;}
