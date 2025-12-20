#include <cyc_include.h>
 struct Cyc___cycFILE;struct Cyc_String_pa_PrintArg_struct{int tag;struct _fat_ptr f1;};struct Cyc_Int_pa_PrintArg_struct{int tag;unsigned long f1;};
# 161 "bazel-out/k8-fastbuild/bin/cyclone/library/std/libc/stdio.h"
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 220
extern int Cyc_getc(struct Cyc___cycFILE*);
# 239
extern int Cyc_putc(int,struct Cyc___cycFILE*);
# 255
extern void Cyc_rewind(struct Cyc___cycFILE*);struct Cyc___cycFILE;
# 100 "./cyclone/library/std/cycboot.h"
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 142
extern int Cyc_getc(struct Cyc___cycFILE*);
# 161
extern int Cyc_putc(int,struct Cyc___cycFILE*);
# 40 "./cyclone/library/std/string.h"
extern unsigned long Cyc_strlen(struct _fat_ptr);
# 27 "cyclone/tools/bison/files.h"
extern struct Cyc___cycFILE*Cyc_finput;
# 30
extern struct Cyc___cycFILE*Cyc_ftable;
extern struct Cyc___cycFILE*Cyc_fattrs;
# 33
extern struct Cyc___cycFILE*Cyc_fattrs0;
extern struct Cyc___cycFILE*Cyc_fguard;
extern struct Cyc___cycFILE*Cyc_faction;
# 40
extern struct _fat_ptr Cyc_spec_name_prefix;
# 45
extern struct _fat_ptr Cyc_infile;
# 49
extern struct _fat_ptr Cyc_attrsfile;
# 76 "cyclone/tools/bison/gram.h"
extern int Cyc_nitems;
extern int Cyc_nrules;
extern int Cyc_nsyms;
extern int Cyc_ntokens;
extern int Cyc_nvars;
# 82
extern struct _fat_ptr Cyc_ritem;
extern struct _fat_ptr Cyc_rlhs;
extern struct _fat_ptr Cyc_rrhs;
# 90
extern struct _fat_ptr Cyc_rline;
# 109
extern struct _fat_ptr Cyc_token_translations;
extern int Cyc_translations;
extern int Cyc_max_user_token_number;
# 117
extern int Cyc_semantic_parser;
# 121
extern int Cyc_pure_parser;
# 125
extern int Cyc_error_token_number;struct Cyc_core_tag{struct Cyc_core_tag*next;struct Cyc_core_tag*link;short number;short accessing_symbol;short nitems;struct _fat_ptr items;};struct Cyc_shifts_tag{struct Cyc_shifts_tag*next;short number;short nshifts;struct _fat_ptr shifts;};struct Cyc_errs_tag{short nerrs;struct _fat_ptr errs;};struct Cyc_reductions_tag{struct Cyc_reductions_tag*next;short number;short nreds;struct _fat_ptr rules;};
# 135 "cyclone/tools/bison/state.h"
extern int Cyc_nstates;
extern struct Cyc_core_tag*Cyc_first_state;
extern struct Cyc_shifts_tag*Cyc_first_shift;
extern struct Cyc_reductions_tag*Cyc_first_reduction;
# 114 "cyclone/tools/bison/output.cyc"
extern int Cyc_debugflag;
extern int Cyc_nolinesflag;
extern int Cyc_noparserflag;
extern int Cyc_toknumflag;
# 119
extern struct _fat_ptr Cyc_tags;
extern struct _fat_ptr Cyc_user_toknums;
extern int Cyc_tokensetsize;
extern int Cyc_final_state;
extern struct _fat_ptr Cyc_state_table;
extern struct _fat_ptr Cyc_shift_table;
extern struct _fat_ptr Cyc_err_table;
extern struct _fat_ptr Cyc_reduction_table;
extern struct _fat_ptr Cyc_accessing_symbol;
extern struct _fat_ptr Cyc_LA;
extern struct _fat_ptr Cyc_LAruleno;
extern struct _fat_ptr Cyc_lookaheads;
extern struct _fat_ptr Cyc_consistent;
extern struct _fat_ptr Cyc_goto_map;
extern struct _fat_ptr Cyc_from_state;
extern struct _fat_ptr Cyc_to_state;
# 136
void Cyc_output_token_translations (void);
void Cyc_output_gram (void);
void Cyc_output_stos (void);
void Cyc_output_rule_data (void);
void Cyc_output_defines (void);
void Cyc_output_actions (void);
void Cyc_token_actions (void);
void Cyc_save_row(int);
void Cyc_goto_actions (void);
void Cyc_save_column(int,int);
void Cyc_sort_actions (void);
void Cyc_pack_table (void);
void Cyc_output_base (void);
void Cyc_output_table (void);
void Cyc_output_check (void);
void Cyc_output_parser (void);
void Cyc_output_program (void);
# 154
void Cyc_free_shifts (void);
void Cyc_free_reductions (void);
void Cyc_free_itemsets (void);
int Cyc_action_row(int);
int Cyc_default_goto(int);
int Cyc_matching_state(int);
int Cyc_pack_vector(int);
# 162
extern void Cyc_berror(struct _fat_ptr);
extern void Cyc_fatals(struct _fat_ptr,struct _fat_ptr);
extern struct _fat_ptr Cyc_int_to_string(int);
extern void Cyc_reader_output_yylsp(struct Cyc___cycFILE*);
extern int Cyc_lineno;
# 168
static int Cyc_nvectors;
static int Cyc_nentries;
static struct _fat_ptr Cyc_froms;
static struct _fat_ptr Cyc_tos;
static struct _fat_ptr Cyc_tally;
static struct _fat_ptr Cyc_width;
static struct _fat_ptr Cyc_actrow;
static struct _fat_ptr Cyc_state_count;
static struct _fat_ptr Cyc_order;
static struct _fat_ptr Cyc_base;
static struct _fat_ptr Cyc_pos;
static struct _fat_ptr Cyc_table;
static struct _fat_ptr Cyc_check;
static int Cyc_lowzero;
static int Cyc_high;
# 205 "cyclone/tools/bison/output.cyc"
void Cyc_output_headers (void){int _T0;struct Cyc_String_pa_PrintArg_struct _T1;struct Cyc___cycFILE*_T2;struct _fat_ptr _T3;struct _fat_ptr _T4;int _T5;struct _fat_ptr _T6;unsigned char*_T7;unsigned _T8;struct Cyc_String_pa_PrintArg_struct _T9;struct Cyc___cycFILE*_TA;struct _fat_ptr _TB;struct _fat_ptr _TC;struct Cyc_String_pa_PrintArg_struct _TD;struct Cyc___cycFILE*_TE;struct _fat_ptr _TF;struct _fat_ptr _T10;struct Cyc_String_pa_PrintArg_struct _T11;struct Cyc___cycFILE*_T12;struct _fat_ptr _T13;struct _fat_ptr _T14;struct Cyc_String_pa_PrintArg_struct _T15;struct Cyc___cycFILE*_T16;struct _fat_ptr _T17;struct _fat_ptr _T18;struct Cyc_String_pa_PrintArg_struct _T19;struct Cyc___cycFILE*_T1A;struct _fat_ptr _T1B;struct _fat_ptr _T1C;struct Cyc_String_pa_PrintArg_struct _T1D;struct Cyc___cycFILE*_T1E;struct _fat_ptr _T1F;struct _fat_ptr _T20;struct Cyc_String_pa_PrintArg_struct _T21;struct Cyc___cycFILE*_T22;struct _fat_ptr _T23;struct _fat_ptr _T24;_T0= Cyc_semantic_parser;
# 208
if(!_T0)goto _TL0;{struct Cyc_String_pa_PrintArg_struct _T25;_T25.tag= 0;
_T25.f1= Cyc_attrsfile;_T1= _T25;}{struct Cyc_String_pa_PrintArg_struct _T25=_T1;void*_T26[1];_T26[0]= & _T25;_T2= _check_null(Cyc_fguard);_T3= _tag_fat("\n#include \"%s\"\nextern int yyerror;\nextern int yycost;\nextern m_string_t yymsg;\nextern YYSTYPE yyval;\n\nyyguard(int n, YYSTYPE yyvsp, YYLTYPE yylsp)\n{\n  yyerror = 0;\nyycost = 0;\n  yymsg = 0;\nswitch (n)\n    {",sizeof(char),206U);_T4= _tag_fat(_T26,sizeof(void*),1);Cyc_fprintf(_T2,_T3,_T4);}goto _TL1;_TL0: _TL1: _T5= Cyc_noparserflag;
# 211
if(!_T5)goto _TL2;
return;_TL2: _T6= Cyc_spec_name_prefix;_T7= _T6.curr;_T8= (unsigned)_T7;
# 225
if(!_T8)goto _TL4;{struct Cyc_String_pa_PrintArg_struct _T25;_T25.tag= 0;
# 227
_T25.f1= Cyc_spec_name_prefix;_T9= _T25;}{struct Cyc_String_pa_PrintArg_struct _T25=_T9;void*_T26[1];_T26[0]= & _T25;_TA= _check_null(Cyc_ftable);_TB= _tag_fat("#define yyparse %sparse\n",sizeof(char),25U);_TC= _tag_fat(_T26,sizeof(void*),1);Cyc_fprintf(_TA,_TB,_TC);}{struct Cyc_String_pa_PrintArg_struct _T25;_T25.tag= 0;
_T25.f1= Cyc_spec_name_prefix;_TD= _T25;}{struct Cyc_String_pa_PrintArg_struct _T25=_TD;void*_T26[1];_T26[0]= & _T25;_TE= _check_null(Cyc_ftable);_TF= _tag_fat("#define yylex %slex\n",sizeof(char),21U);_T10= _tag_fat(_T26,sizeof(void*),1);Cyc_fprintf(_TE,_TF,_T10);}{struct Cyc_String_pa_PrintArg_struct _T25;_T25.tag= 0;
_T25.f1= Cyc_spec_name_prefix;_T11= _T25;}{struct Cyc_String_pa_PrintArg_struct _T25=_T11;void*_T26[1];_T26[0]= & _T25;_T12= _check_null(Cyc_ftable);_T13= _tag_fat("#define yyerror %serror\n",sizeof(char),25U);_T14= _tag_fat(_T26,sizeof(void*),1);Cyc_fprintf(_T12,_T13,_T14);}{struct Cyc_String_pa_PrintArg_struct _T25;_T25.tag= 0;
_T25.f1= Cyc_spec_name_prefix;_T15= _T25;}{struct Cyc_String_pa_PrintArg_struct _T25=_T15;void*_T26[1];_T26[0]= & _T25;_T16= _check_null(Cyc_ftable);_T17= _tag_fat("#define yylval %slval\n",sizeof(char),23U);_T18= _tag_fat(_T26,sizeof(void*),1);Cyc_fprintf(_T16,_T17,_T18);}{struct Cyc_String_pa_PrintArg_struct _T25;_T25.tag= 0;
_T25.f1= Cyc_spec_name_prefix;_T19= _T25;}{struct Cyc_String_pa_PrintArg_struct _T25=_T19;void*_T26[1];_T26[0]= & _T25;_T1A= _check_null(Cyc_ftable);_T1B= _tag_fat("#define yychar %schar\n",sizeof(char),23U);_T1C= _tag_fat(_T26,sizeof(void*),1);Cyc_fprintf(_T1A,_T1B,_T1C);}{struct Cyc_String_pa_PrintArg_struct _T25;_T25.tag= 0;
_T25.f1= Cyc_spec_name_prefix;_T1D= _T25;}{struct Cyc_String_pa_PrintArg_struct _T25=_T1D;void*_T26[1];_T26[0]= & _T25;_T1E= _check_null(Cyc_ftable);_T1F= _tag_fat("#define yydebug %sdebug\n",sizeof(char),25U);_T20= _tag_fat(_T26,sizeof(void*),1);Cyc_fprintf(_T1E,_T1F,_T20);}{struct Cyc_String_pa_PrintArg_struct _T25;_T25.tag= 0;
_T25.f1= Cyc_spec_name_prefix;_T21= _T25;}{struct Cyc_String_pa_PrintArg_struct _T25=_T21;void*_T26[1];_T26[0]= & _T25;_T22= _check_null(Cyc_ftable);_T23= _tag_fat("#define yynerrs %snerrs\n",sizeof(char),25U);_T24= _tag_fat(_T26,sizeof(void*),1);Cyc_fprintf(_T22,_T23,_T24);}goto _TL5;_TL4: _TL5:;}
# 238
void Cyc_output_trailers (void){int _T0;struct Cyc___cycFILE*_T1;struct _fat_ptr _T2;struct _fat_ptr _T3;struct Cyc___cycFILE*_T4;struct _fat_ptr _T5;struct _fat_ptr _T6;int _T7;int _T8;struct Cyc___cycFILE*_T9;struct _fat_ptr _TA;struct _fat_ptr _TB;struct Cyc___cycFILE*_TC;struct _fat_ptr _TD;struct _fat_ptr _TE;_T0= Cyc_semantic_parser;
# 241
if(!_T0)goto _TL6;_T1= 
_check_null(Cyc_fguard);_T2= _tag_fat("\n    }\n}\n",sizeof(char),10U);_T3= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T1,_T2,_T3);goto _TL7;_TL6: _TL7: _T4= 
# 244
_check_null(Cyc_faction);_T5= _tag_fat("\n",sizeof(char),2U);_T6= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T4,_T5,_T6);_T7= Cyc_noparserflag;
# 246
if(!_T7)goto _TL8;
return;_TL8: _T8= Cyc_semantic_parser;
# 249
if(!_T8)goto _TLA;_T9= 
_check_null(Cyc_faction);_TA= _tag_fat("    }\n",sizeof(char),7U);_TB= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T9,_TA,_TB);goto _TLB;_TLA: _TLB: _TC= 
_check_null(Cyc_faction);_TD= _tag_fat("\n",sizeof(char),2U);_TE= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_TC,_TD,_TE);}
# 255
void Cyc_output (void){int _T0;struct Cyc___cycFILE*_T1;struct Cyc___cycFILE*_T2;int _T3;int _T4;int _T5;struct Cyc___cycFILE*_T6;struct Cyc___cycFILE*_T7;struct Cyc___cycFILE*_T8;int _T9;int _TA;int _TB;struct Cyc___cycFILE*_TC;int _TD;struct Cyc_Int_pa_PrintArg_struct _TE;int _TF;int _T10;struct Cyc___cycFILE*_T11;struct _fat_ptr _T12;struct _fat_ptr _T13;int _T14;struct Cyc_String_pa_PrintArg_struct _T15;struct Cyc___cycFILE*_T16;struct _fat_ptr _T17;struct _fat_ptr _T18;int _T19;int _T1A;
# 258
int c;_T0= Cyc_semantic_parser;
# 261
if(_T0)goto _TLC;else{goto _TLE;}
# 263
_TLE: _T1= _check_null(Cyc_fattrs0);Cyc_rewind(_T1);
_TLF: _T2= _check_null(Cyc_fattrs0);c= Cyc_getc(_T2);_T3= c;_T4= - 1;if(_T3!=_T4)goto _TL10;else{goto _TL11;}
_TL10: _T5= c;_T6= _check_null(Cyc_ftable);Cyc_putc(_T5,_T6);goto _TLF;_TL11: _T7= 
_check_null(Cyc_fattrs);Cyc_rewind(_T7);
_TL12: _T8= _check_null(Cyc_fattrs);c= Cyc_getc(_T8);_T9= c;_TA= - 1;if(_T9!=_TA)goto _TL13;else{goto _TL14;}
_TL13: _TB= c;_TC= _check_null(Cyc_ftable);Cyc_putc(_TB,_TC);goto _TL12;_TL14: goto _TLD;_TLC: _TLD:
# 270
 Cyc_reader_output_yylsp(Cyc_ftable);_TD= Cyc_debugflag;
if(!_TD)goto _TL15;{struct Cyc_Int_pa_PrintArg_struct _T1B;_T1B.tag= 1;_TF= !Cyc_debugflag;_T10= !_TF;
# 273
_T1B.f1= (unsigned long)_T10;_TE= _T1B;}{struct Cyc_Int_pa_PrintArg_struct _T1B=_TE;void*_T1C[1];_T1C[0]= & _T1B;_T11= 
# 272
_check_null(Cyc_ftable);_T12= _tag_fat("\n#ifndef YYDEBUG\n#define YYDEBUG %d\n#endif\n\n",sizeof(char),45U);_T13= _tag_fat(_T1C,sizeof(void*),1);Cyc_fprintf(_T11,_T12,_T13);}goto _TL16;_TL15: _TL16: _T14= Cyc_semantic_parser;
# 275
if(!_T14)goto _TL17;{struct Cyc_String_pa_PrintArg_struct _T1B;_T1B.tag= 0;
_T1B.f1= Cyc_attrsfile;_T15= _T1B;}{struct Cyc_String_pa_PrintArg_struct _T1B=_T15;void*_T1C[1];_T1C[0]= & _T1B;_T16= _check_null(Cyc_ftable);_T17= _tag_fat("#include \"%s\"\n",sizeof(char),15U);_T18= _tag_fat(_T1C,sizeof(void*),1);Cyc_fprintf(_T16,_T17,_T18);}goto _TL18;_TL17: _TL18:
# 278
 Cyc_free_itemsets();
Cyc_output_defines();
Cyc_output_token_translations();
# 283
Cyc_output_gram();
Cyc_ritem= _tag_fat(0,0,0);_T19= Cyc_semantic_parser;
if(!_T19)goto _TL19;
Cyc_output_stos();goto _TL1A;_TL19: _TL1A:
 Cyc_output_rule_data();
Cyc_output_actions();_T1A= Cyc_noparserflag;
if(_T1A)goto _TL1B;else{goto _TL1D;}
_TL1D: Cyc_output_parser();goto _TL1C;_TL1B: _TL1C:
 Cyc_output_program();}
# 295
void Cyc_output_token_translations (void){int _T0;struct Cyc_Int_pa_PrintArg_struct _T1;int _T2;struct Cyc_Int_pa_PrintArg_struct _T3;int _T4;struct Cyc___cycFILE*_T5;struct _fat_ptr _T6;struct _fat_ptr _T7;struct Cyc___cycFILE*_T8;struct _fat_ptr _T9;struct _fat_ptr _TA;struct Cyc___cycFILE*_TB;struct _fat_ptr _TC;struct _fat_ptr _TD;struct Cyc___cycFILE*_TE;struct Cyc___cycFILE*_TF;struct Cyc_Int_pa_PrintArg_struct _T10;struct _fat_ptr _T11;int _T12;unsigned char*_T13;short*_T14;short _T15;int _T16;struct Cyc___cycFILE*_T17;struct _fat_ptr _T18;struct _fat_ptr _T19;struct Cyc___cycFILE*_T1A;struct _fat_ptr _T1B;struct _fat_ptr _T1C;struct Cyc___cycFILE*_T1D;struct _fat_ptr _T1E;struct _fat_ptr _T1F;
# 298
register int i;register int j;_T0= Cyc_translations;
# 301
if(!_T0)goto _TL1E;{struct Cyc_Int_pa_PrintArg_struct _T20;_T20.tag= 1;_T2= Cyc_max_user_token_number;
# 305
_T20.f1= (unsigned long)_T2;_T1= _T20;}{struct Cyc_Int_pa_PrintArg_struct _T20=_T1;{struct Cyc_Int_pa_PrintArg_struct _T21;_T21.tag= 1;_T4= Cyc_nsyms;_T21.f1= (unsigned long)_T4;_T3= _T21;}{struct Cyc_Int_pa_PrintArg_struct _T21=_T3;void*_T22[2];_T22[0]= & _T20;_T22[1]= & _T21;_T5= 
# 303
_check_null(Cyc_ftable);_T6= 
_tag_fat("\n#define YYTRANSLATE(x) (((x)>0) && ((x) <= %d) ? yytranslate[x] : %d)\n",sizeof(char),72U);_T7= _tag_fat(_T22,sizeof(void*),2);Cyc_fprintf(_T5,_T6,_T7);}}
# 307
if(Cyc_ntokens >= 127)goto _TL20;_T8= 
_check_null(Cyc_ftable);_T9= _tag_fat("\nstatic short yytranslate[] = {     0",sizeof(char),38U);_TA= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T8,_T9,_TA);goto _TL21;
# 310
_TL20: _TB= _check_null(Cyc_ftable);_TC= _tag_fat("\nstatic short yytranslate[] = {     0",sizeof(char),38U);_TD= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_TB,_TC,_TD);_TL21:
# 312
 j= 10;
i= 1;_TL25: if(i <= Cyc_max_user_token_number)goto _TL23;else{goto _TL24;}
# 315
_TL23: _TE= _check_null(Cyc_ftable);Cyc_putc(44,_TE);
# 317
if(j < 10)goto _TL26;_TF= 
# 319
_check_null(Cyc_ftable);Cyc_putc(10,_TF);
j= 1;goto _TL27;
# 324
_TL26: j= j + 1;_TL27:{struct Cyc_Int_pa_PrintArg_struct _T20;_T20.tag= 1;_T11= Cyc_token_translations;_T12= i;_T13= _check_fat_subscript(_T11,sizeof(short),_T12);_T14= (short*)_T13;_T15= *_T14;_T16= (int)_T15;
# 327
_T20.f1= (unsigned long)_T16;_T10= _T20;}{struct Cyc_Int_pa_PrintArg_struct _T20=_T10;void*_T21[1];_T21[0]= & _T20;_T17= _check_null(Cyc_ftable);_T18= _tag_fat("%6d",sizeof(char),4U);_T19= _tag_fat(_T21,sizeof(void*),1);Cyc_fprintf(_T17,_T18,_T19);}
# 313
i= i + 1;goto _TL25;_TL24: _T1A= 
# 330
_check_null(Cyc_ftable);_T1B= _tag_fat("\n};\n",sizeof(char),5U);_T1C= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T1A,_T1B,_T1C);goto _TL1F;
# 334
_TL1E: _T1D= _check_null(Cyc_ftable);_T1E= _tag_fat("\n#define YYTRANSLATE(x) (x)\n",sizeof(char),29U);_T1F= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T1D,_T1E,_T1F);_TL1F:;}
# 339
void Cyc_output_gram (void){int _T0;int _T1;struct Cyc___cycFILE*_T2;struct _fat_ptr _T3;struct _fat_ptr _T4;struct Cyc___cycFILE*_T5;struct _fat_ptr _T6;struct _fat_ptr _T7;struct Cyc___cycFILE*_T8;struct Cyc___cycFILE*_T9;struct Cyc_Int_pa_PrintArg_struct _TA;struct _fat_ptr _TB;int _TC;unsigned char*_TD;short*_TE;short _TF;int _T10;struct Cyc___cycFILE*_T11;struct _fat_ptr _T12;struct _fat_ptr _T13;struct Cyc___cycFILE*_T14;struct _fat_ptr _T15;struct _fat_ptr _T16;struct Cyc_Int_pa_PrintArg_struct _T17;struct _fat_ptr _T18;unsigned char*_T19;short*_T1A;short _T1B;int _T1C;struct Cyc___cycFILE*_T1D;struct _fat_ptr _T1E;struct _fat_ptr _T1F;struct _fat_ptr _T20;struct _fat_ptr _T21;unsigned char*_T22;short*_T23;short _T24;int _T25;struct Cyc___cycFILE*_T26;struct Cyc___cycFILE*_T27;struct _fat_ptr _T28;unsigned char*_T29;short*_T2A;short _T2B;int _T2C;struct Cyc_Int_pa_PrintArg_struct _T2D;struct _fat_ptr _T2E;unsigned char*_T2F;short*_T30;short _T31;int _T32;struct Cyc___cycFILE*_T33;struct _fat_ptr _T34;struct _fat_ptr _T35;struct Cyc___cycFILE*_T36;struct _fat_ptr _T37;struct _fat_ptr _T38;struct _fat_ptr*_T39;struct Cyc___cycFILE*_T3A;struct _fat_ptr _T3B;struct _fat_ptr _T3C;int _T3D;int _T3E;struct Cyc___cycFILE*_T3F;struct _fat_ptr _T40;struct _fat_ptr _T41;
# 342
register int i;
register int j;
struct _fat_ptr sp;_T0= Cyc_semantic_parser;
# 349
if(_T0)goto _TL28;else{goto _TL2A;}_TL2A: _T1= Cyc_noparserflag;if(_T1)goto _TL28;else{goto _TL2B;}
_TL2B: _T2= _check_null(Cyc_ftable);_T3= _tag_fat("\n#if YYDEBUG != 0",sizeof(char),18U);_T4= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T2,_T3,_T4);goto _TL29;_TL28: _TL29: _T5= 
# 352
_check_null(Cyc_ftable);_T6= _tag_fat("\nstatic short yyprhs[] = {     0",sizeof(char),33U);_T7= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T5,_T6,_T7);
# 354
j= 10;
i= 1;_TL2F: if(i <= Cyc_nrules)goto _TL2D;else{goto _TL2E;}
# 357
_TL2D: _T8= _check_null(Cyc_ftable);Cyc_putc(44,_T8);
# 359
if(j < 10)goto _TL30;_T9= 
# 361
_check_null(Cyc_ftable);Cyc_putc(10,_T9);
j= 1;goto _TL31;
# 366
_TL30: j= j + 1;_TL31:{struct Cyc_Int_pa_PrintArg_struct _T42;_T42.tag= 1;_TB= Cyc_rrhs;_TC= i;_TD= _check_fat_subscript(_TB,sizeof(short),_TC);_TE= (short*)_TD;_TF= *_TE;_T10= (int)_TF;
# 369
_T42.f1= (unsigned long)_T10;_TA= _T42;}{struct Cyc_Int_pa_PrintArg_struct _T42=_TA;void*_T43[1];_T43[0]= & _T42;_T11= _check_null(Cyc_ftable);_T12= _tag_fat("%6d",sizeof(char),4U);_T13= _tag_fat(_T43,sizeof(void*),1);Cyc_fprintf(_T11,_T12,_T13);}
# 355
i= i + 1;goto _TL2F;_TL2E: _T14= 
# 372
_check_null(Cyc_ftable);_T15= _tag_fat("\n};\n",sizeof(char),5U);_T16= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T14,_T15,_T16);{struct Cyc_Int_pa_PrintArg_struct _T42;_T42.tag= 1;_T18= Cyc_ritem;_T19= _check_fat_subscript(_T18,sizeof(short),0);_T1A= (short*)_T19;_T1B= *_T1A;_T1C= (int)_T1B;
# 374
_T42.f1= (unsigned long)_T1C;_T17= _T42;}{struct Cyc_Int_pa_PrintArg_struct _T42=_T17;void*_T43[1];_T43[0]= & _T42;_T1D= _check_null(Cyc_ftable);_T1E= _tag_fat("\nstatic short yyrhs[] = {%6d",sizeof(char),29U);_T1F= _tag_fat(_T43,sizeof(void*),1);Cyc_fprintf(_T1D,_T1E,_T1F);}
# 376
j= 10;_T20= Cyc_ritem;
sp= _fat_ptr_plus(_T20,sizeof(short),1);_TL35: _T21= sp;_T22= _check_fat_subscript(_T21,sizeof(short),0U);_T23= (short*)_T22;_T24= *_T23;_T25= (int)_T24;if(_T25)goto _TL33;else{goto _TL34;}
# 379
_TL33: _T26= _check_null(Cyc_ftable);Cyc_putc(44,_T26);
# 381
if(j < 10)goto _TL36;_T27= 
# 383
_check_null(Cyc_ftable);Cyc_putc(10,_T27);
j= 1;goto _TL37;
# 388
_TL36: j= j + 1;_TL37: _T28= sp;_T29= _T28.curr;_T2A= (short*)_T29;_T2B= *_T2A;_T2C= (int)_T2B;
# 391
if(_T2C <= 0)goto _TL38;{struct Cyc_Int_pa_PrintArg_struct _T42;_T42.tag= 1;_T2E= sp;_T2F= _T2E.curr;_T30= (short*)_T2F;_T31= *_T30;_T32= (int)_T31;
_T42.f1= (unsigned long)_T32;_T2D= _T42;}{struct Cyc_Int_pa_PrintArg_struct _T42=_T2D;void*_T43[1];_T43[0]= & _T42;_T33= _check_null(Cyc_ftable);_T34= _tag_fat("%6d",sizeof(char),4U);_T35= _tag_fat(_T43,sizeof(void*),1);Cyc_fprintf(_T33,_T34,_T35);}goto _TL39;
# 394
_TL38: _T36= _check_null(Cyc_ftable);_T37= _tag_fat("     0",sizeof(char),7U);_T38= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T36,_T37,_T38);_TL39: _T39= & sp;
# 377
_fat_ptr_inplace_plus(_T39,sizeof(short),1);goto _TL35;_TL34: _T3A= 
# 397
_check_null(Cyc_ftable);_T3B= _tag_fat("\n};\n",sizeof(char),5U);_T3C= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T3A,_T3B,_T3C);_T3D= Cyc_semantic_parser;
# 399
if(_T3D)goto _TL3A;else{goto _TL3C;}_TL3C: _T3E= Cyc_noparserflag;if(_T3E)goto _TL3A;else{goto _TL3D;}
_TL3D: _T3F= _check_null(Cyc_ftable);_T40= _tag_fat("\n#endif\n",sizeof(char),9U);_T41= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T3F,_T40,_T41);goto _TL3B;_TL3A: _TL3B:;}
# 404
void Cyc_output_stos (void){struct Cyc___cycFILE*_T0;struct _fat_ptr _T1;struct _fat_ptr _T2;struct Cyc___cycFILE*_T3;struct Cyc___cycFILE*_T4;struct Cyc_Int_pa_PrintArg_struct _T5;struct _fat_ptr _T6;int _T7;unsigned char*_T8;short*_T9;short _TA;int _TB;struct Cyc___cycFILE*_TC;struct _fat_ptr _TD;struct _fat_ptr _TE;struct Cyc___cycFILE*_TF;struct _fat_ptr _T10;struct _fat_ptr _T11;
# 407
register int i;
register int j;_T0= 
# 410
_check_null(Cyc_ftable);_T1= _tag_fat("\nstatic const short yystos[] = {     0",sizeof(char),39U);_T2= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T0,_T1,_T2);
# 412
j= 10;
i= 1;_TL41: if(i < Cyc_nstates)goto _TL3F;else{goto _TL40;}
# 415
_TL3F: _T3= _check_null(Cyc_ftable);Cyc_putc(44,_T3);
# 417
if(j < 10)goto _TL42;_T4= 
# 419
_check_null(Cyc_ftable);Cyc_putc(10,_T4);
j= 1;goto _TL43;
# 424
_TL42: j= j + 1;_TL43:{struct Cyc_Int_pa_PrintArg_struct _T12;_T12.tag= 1;_T6= Cyc_accessing_symbol;_T7= i;_T8= _check_fat_subscript(_T6,sizeof(short),_T7);_T9= (short*)_T8;_TA= *_T9;_TB= (int)_TA;
# 427
_T12.f1= (unsigned long)_TB;_T5= _T12;}{struct Cyc_Int_pa_PrintArg_struct _T12=_T5;void*_T13[1];_T13[0]= & _T12;_TC= _check_null(Cyc_ftable);_TD= _tag_fat("%6d",sizeof(char),4U);_TE= _tag_fat(_T13,sizeof(void*),1);Cyc_fprintf(_TC,_TD,_TE);}
# 413
i= i + 1;goto _TL41;_TL40: _TF= 
# 430
_check_null(Cyc_ftable);_T10= _tag_fat("\n};\n",sizeof(char),5U);_T11= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_TF,_T10,_T11);}
# 434
void Cyc_output_rule_data (void){struct Cyc___cycFILE*_T0;struct _fat_ptr _T1;struct _fat_ptr _T2;struct Cyc___cycFILE*_T3;struct _fat_ptr _T4;struct _fat_ptr _T5;struct Cyc___cycFILE*_T6;struct Cyc___cycFILE*_T7;struct Cyc_Int_pa_PrintArg_struct _T8;struct _fat_ptr _T9;int _TA;unsigned char*_TB;short*_TC;short _TD;int _TE;struct Cyc___cycFILE*_TF;struct _fat_ptr _T10;struct _fat_ptr _T11;struct Cyc___cycFILE*_T12;struct _fat_ptr _T13;struct _fat_ptr _T14;int _T15;int _T16;struct Cyc_Int_pa_PrintArg_struct _T17;int _T18;struct Cyc___cycFILE*_T19;struct _fat_ptr _T1A;struct _fat_ptr _T1B;struct Cyc_Int_pa_PrintArg_struct _T1C;int _T1D;struct Cyc___cycFILE*_T1E;struct _fat_ptr _T1F;struct _fat_ptr _T20;struct Cyc_Int_pa_PrintArg_struct _T21;int _T22;struct Cyc___cycFILE*_T23;struct _fat_ptr _T24;struct _fat_ptr _T25;struct Cyc_Int_pa_PrintArg_struct _T26;int _T27;struct Cyc___cycFILE*_T28;struct _fat_ptr _T29;struct _fat_ptr _T2A;struct Cyc_Int_pa_PrintArg_struct _T2B;int _T2C;struct Cyc___cycFILE*_T2D;struct _fat_ptr _T2E;struct _fat_ptr _T2F;int _T30;int _T31;struct Cyc___cycFILE*_T32;struct _fat_ptr _T33;struct _fat_ptr _T34;struct Cyc_String_pa_PrintArg_struct _T35;struct _fat_ptr _T36;unsigned char*_T37;struct _fat_ptr*_T38;struct _fat_ptr _T39;struct Cyc___cycFILE*_T3A;struct _fat_ptr _T3B;struct _fat_ptr _T3C;struct _fat_ptr _T3D;unsigned char*_T3E;struct _fat_ptr*_T3F;struct _fat_ptr _T40;struct _fat_ptr _T41;unsigned long _T42;unsigned long _T43;struct Cyc___cycFILE*_T44;struct Cyc___cycFILE*_T45;struct Cyc___cycFILE*_T46;struct _fat_ptr _T47;int _T48;unsigned char*_T49;struct _fat_ptr*_T4A;struct _fat_ptr _T4B;unsigned char*_T4C;unsigned _T4D;struct _fat_ptr _T4E;unsigned char*_T4F;char*_T50;char _T51;int _T52;struct _fat_ptr _T53;unsigned char*_T54;char*_T55;char _T56;int _T57;struct _fat_ptr _T58;unsigned char*_T59;char*_T5A;char _T5B;int _T5C;struct Cyc_Int_pa_PrintArg_struct _T5D;struct _fat_ptr _T5E;unsigned char*_T5F;char*_T60;char _T61;int _T62;struct Cyc___cycFILE*_T63;struct _fat_ptr _T64;struct _fat_ptr _T65;struct _fat_ptr _T66;unsigned char*_T67;char*_T68;char _T69;int _T6A;struct Cyc___cycFILE*_T6B;struct _fat_ptr _T6C;struct _fat_ptr _T6D;struct _fat_ptr _T6E;unsigned char*_T6F;char*_T70;char _T71;int _T72;struct Cyc___cycFILE*_T73;struct _fat_ptr _T74;struct _fat_ptr _T75;struct _fat_ptr _T76;unsigned char*_T77;char*_T78;char _T79;int _T7A;struct Cyc___cycFILE*_T7B;struct _fat_ptr _T7C;struct _fat_ptr _T7D;struct _fat_ptr _T7E;unsigned char*_T7F;char*_T80;char _T81;int _T82;struct _fat_ptr _T83;unsigned char*_T84;char*_T85;char _T86;int _T87;struct Cyc_Int_pa_PrintArg_struct _T88;struct _fat_ptr _T89;unsigned char*_T8A;char*_T8B;char _T8C;struct Cyc___cycFILE*_T8D;struct _fat_ptr _T8E;struct _fat_ptr _T8F;struct _fat_ptr _T90;unsigned char*_T91;char*_T92;char _T93;int _T94;struct Cyc___cycFILE*_T95;struct _fat_ptr*_T96;struct Cyc___cycFILE*_T97;struct Cyc___cycFILE*_T98;struct _fat_ptr _T99;struct _fat_ptr _T9A;int _T9B;int _T9C;struct Cyc___cycFILE*_T9D;struct _fat_ptr _T9E;struct _fat_ptr _T9F;int _TA0;struct Cyc___cycFILE*_TA1;struct _fat_ptr _TA2;struct _fat_ptr _TA3;struct Cyc___cycFILE*_TA4;struct Cyc___cycFILE*_TA5;struct Cyc_Int_pa_PrintArg_struct _TA6;struct _fat_ptr _TA7;int _TA8;unsigned char*_TA9;int*_TAA;int _TAB;struct Cyc___cycFILE*_TAC;struct _fat_ptr _TAD;struct _fat_ptr _TAE;struct Cyc___cycFILE*_TAF;struct _fat_ptr _TB0;struct _fat_ptr _TB1;struct Cyc___cycFILE*_TB2;struct _fat_ptr _TB3;struct _fat_ptr _TB4;struct Cyc___cycFILE*_TB5;struct Cyc___cycFILE*_TB6;struct Cyc_Int_pa_PrintArg_struct _TB7;struct _fat_ptr _TB8;int _TB9;unsigned char*_TBA;short*_TBB;short _TBC;int _TBD;struct Cyc___cycFILE*_TBE;struct _fat_ptr _TBF;struct _fat_ptr _TC0;struct _fat_ptr _TC1;struct Cyc___cycFILE*_TC2;struct _fat_ptr _TC3;struct _fat_ptr _TC4;struct Cyc___cycFILE*_TC5;struct Cyc___cycFILE*_TC6;struct Cyc_Int_pa_PrintArg_struct _TC7;struct _fat_ptr _TC8;int _TC9;unsigned char*_TCA;short*_TCB;short _TCC;int _TCD;struct _fat_ptr _TCE;unsigned char*_TCF;short*_TD0;int _TD1;short _TD2;int _TD3;int _TD4;int _TD5;struct Cyc___cycFILE*_TD6;struct _fat_ptr _TD7;struct _fat_ptr _TD8;struct Cyc___cycFILE*_TD9;struct Cyc___cycFILE*_TDA;struct Cyc_Int_pa_PrintArg_struct _TDB;int _TDC;struct _fat_ptr _TDD;int _TDE;unsigned char*_TDF;short*_TE0;short _TE1;int _TE2;int _TE3;int _TE4;struct Cyc___cycFILE*_TE5;struct _fat_ptr _TE6;struct _fat_ptr _TE7;struct _fat_ptr _TE8;
# 437
register int i;
register int j;_T0= 
# 440
_check_null(Cyc_ftable);_T1= _tag_fat("\n#if YYDEBUG != 0\n",sizeof(char),19U);_T2= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T0,_T1,_T2);_T3= 
_check_null(Cyc_ftable);_T4= _tag_fat("static short yyrline[] = { 0",sizeof(char),29U);_T5= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T3,_T4,_T5);
# 443
j= 10;
i= 1;_TL47: if(i <= Cyc_nrules)goto _TL45;else{goto _TL46;}
# 446
_TL45: _T6= _check_null(Cyc_ftable);Cyc_putc(44,_T6);
# 448
if(j < 10)goto _TL48;_T7= 
# 450
_check_null(Cyc_ftable);Cyc_putc(10,_T7);
j= 1;goto _TL49;
# 455
_TL48: j= j + 1;_TL49:{struct Cyc_Int_pa_PrintArg_struct _TE9;_TE9.tag= 1;_T9= Cyc_rline;_TA= i;_TB= _check_fat_subscript(_T9,sizeof(short),_TA);_TC= (short*)_TB;_TD= *_TC;_TE= (int)_TD;
# 458
_TE9.f1= (unsigned long)_TE;_T8= _TE9;}{struct Cyc_Int_pa_PrintArg_struct _TE9=_T8;void*_TEA[1];_TEA[0]= & _TE9;_TF= _check_null(Cyc_ftable);_T10= _tag_fat("%6d",sizeof(char),4U);_T11= _tag_fat(_TEA,sizeof(void*),1);Cyc_fprintf(_TF,_T10,_T11);}
# 444
i= i + 1;goto _TL47;_TL46: _T12= 
# 460
_check_null(Cyc_ftable);_T13= _tag_fat("\n};\n#endif\n\n",sizeof(char),13U);_T14= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T12,_T13,_T14);_T15= Cyc_toknumflag;
# 462
if(_T15)goto _TL4C;else{goto _TL4D;}_TL4D: _T16= Cyc_noparserflag;if(_T16)goto _TL4C;else{goto _TL4A;}
# 464
_TL4C:{struct Cyc_Int_pa_PrintArg_struct _TE9;_TE9.tag= 1;_T18= Cyc_ntokens;_TE9.f1= (unsigned long)_T18;_T17= _TE9;}{struct Cyc_Int_pa_PrintArg_struct _TE9=_T17;void*_TEA[1];_TEA[0]= & _TE9;_T19= _check_null(Cyc_ftable);_T1A= _tag_fat("#define YYNTOKENS %d\n",sizeof(char),22U);_T1B= _tag_fat(_TEA,sizeof(void*),1);Cyc_fprintf(_T19,_T1A,_T1B);}{struct Cyc_Int_pa_PrintArg_struct _TE9;_TE9.tag= 1;_T1D= Cyc_nvars;
_TE9.f1= (unsigned long)_T1D;_T1C= _TE9;}{struct Cyc_Int_pa_PrintArg_struct _TE9=_T1C;void*_TEA[1];_TEA[0]= & _TE9;_T1E= _check_null(Cyc_ftable);_T1F= _tag_fat("#define YYNNTS %d\n",sizeof(char),19U);_T20= _tag_fat(_TEA,sizeof(void*),1);Cyc_fprintf(_T1E,_T1F,_T20);}{struct Cyc_Int_pa_PrintArg_struct _TE9;_TE9.tag= 1;_T22= Cyc_nrules;
_TE9.f1= (unsigned long)_T22;_T21= _TE9;}{struct Cyc_Int_pa_PrintArg_struct _TE9=_T21;void*_TEA[1];_TEA[0]= & _TE9;_T23= _check_null(Cyc_ftable);_T24= _tag_fat("#define YYNRULES %d\n",sizeof(char),21U);_T25= _tag_fat(_TEA,sizeof(void*),1);Cyc_fprintf(_T23,_T24,_T25);}{struct Cyc_Int_pa_PrintArg_struct _TE9;_TE9.tag= 1;_T27= Cyc_nstates;
_TE9.f1= (unsigned long)_T27;_T26= _TE9;}{struct Cyc_Int_pa_PrintArg_struct _TE9=_T26;void*_TEA[1];_TEA[0]= & _TE9;_T28= _check_null(Cyc_ftable);_T29= _tag_fat("#define YYNSTATES %d\n",sizeof(char),22U);_T2A= _tag_fat(_TEA,sizeof(void*),1);Cyc_fprintf(_T28,_T29,_T2A);}{struct Cyc_Int_pa_PrintArg_struct _TE9;_TE9.tag= 1;_T2C= Cyc_max_user_token_number;
_TE9.f1= (unsigned long)_T2C;_T2B= _TE9;}{struct Cyc_Int_pa_PrintArg_struct _TE9=_T2B;void*_TEA[1];_TEA[0]= & _TE9;_T2D= _check_null(Cyc_ftable);_T2E= _tag_fat("#define YYMAXUTOK %d\n\n",sizeof(char),23U);_T2F= _tag_fat(_TEA,sizeof(void*),1);Cyc_fprintf(_T2D,_T2E,_T2F);}goto _TL4B;_TL4A: _TL4B: _T30= Cyc_toknumflag;
# 471
if(_T30)goto _TL4E;else{goto _TL50;}_TL50: _T31= Cyc_noparserflag;if(_T31)goto _TL4E;else{goto _TL51;}
_TL51: _T32= _check_null(Cyc_ftable);_T33= _tag_fat("\n#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)\n\n",sizeof(char),49U);_T34= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T32,_T33,_T34);goto _TL4F;_TL4E: _TL4F:{struct Cyc_String_pa_PrintArg_struct _TE9;_TE9.tag= 0;_T36= Cyc_tags;_T37= _check_fat_subscript(_T36,sizeof(struct _fat_ptr),0);_T38= (struct _fat_ptr*)_T37;_T39= *_T38;
# 478
_TE9.f1= _T39;_T35= _TE9;}{struct Cyc_String_pa_PrintArg_struct _TE9=_T35;void*_TEA[1];_TEA[0]= & _TE9;_T3A= 
# 476
_check_null(Cyc_ftable);_T3B= 
_tag_fat("static string_t yytname[] = {   \"%s\"",sizeof(char),37U);_T3C= _tag_fat(_TEA,sizeof(void*),1);Cyc_fprintf(_T3A,_T3B,_T3C);}_T3D= Cyc_tags;_T3E= _check_fat_subscript(_T3D,sizeof(struct _fat_ptr),0);_T3F= (struct _fat_ptr*)_T3E;_T40= *_T3F;_T41= _T40;_T42= 
# 480
Cyc_strlen(_T41);_T43= _T42 + 44U;j= (int)_T43;
i= 1;_TL55: if(i < Cyc_nsyms)goto _TL53;else{goto _TL54;}
# 485
_TL53:{struct _fat_ptr p;_T44= 
_check_null(Cyc_ftable);Cyc_putc(44,_T44);
j= j + 1;
# 489
if(j <= 75)goto _TL56;_T45= 
# 491
_check_null(Cyc_ftable);Cyc_putc(10,_T45);
j= 0;goto _TL57;_TL56: _TL57: _T46= 
# 495
_check_null(Cyc_ftable);Cyc_putc(34,_T46);
j= j + 1;_T47= Cyc_tags;_T48= i;_T49= _check_fat_subscript(_T47,sizeof(struct _fat_ptr),_T48);_T4A= (struct _fat_ptr*)_T49;
# 498
p= *_T4A;_TL5B: _T4B= p;_T4C= _T4B.curr;_T4D= (unsigned)_T4C;if(_T4D)goto _TL5C;else{goto _TL5A;}_TL5C: _T4E= p;_T4F= _check_fat_subscript(_T4E,sizeof(char),0U);_T50= (char*)_T4F;_T51= *_T50;_T52= (int)_T51;if(_T52)goto _TL59;else{goto _TL5A;}
# 500
_TL59: _T53= p;_T54= _T53.curr;_T55= (char*)_T54;_T56= *_T55;_T57= (int)_T56;if(_T57==34)goto _TL5F;else{goto _TL60;}_TL60: _T58= p;_T59= _T58.curr;_T5A= (char*)_T59;_T5B= *_T5A;_T5C= (int)_T5B;if(_T5C==92)goto _TL5F;else{goto _TL5D;}
# 502
_TL5F:{struct Cyc_Int_pa_PrintArg_struct _TE9;_TE9.tag= 1;_T5E= p;_T5F= _T5E.curr;_T60= (char*)_T5F;_T61= *_T60;_T62= (int)_T61;_TE9.f1= (unsigned long)_T62;_T5D= _TE9;}{struct Cyc_Int_pa_PrintArg_struct _TE9=_T5D;void*_TEA[1];_TEA[0]= & _TE9;_T63= _check_null(Cyc_ftable);_T64= _tag_fat("\\%c",sizeof(char),4U);_T65= _tag_fat(_TEA,sizeof(void*),1);Cyc_fprintf(_T63,_T64,_T65);}
j= j + 2;goto _TL5E;
# 505
_TL5D: _T66= p;_T67= _T66.curr;_T68= (char*)_T67;_T69= *_T68;_T6A= (int)_T69;if(_T6A!=10)goto _TL61;_T6B= 
# 507
_check_null(Cyc_ftable);_T6C= _tag_fat("\\n",sizeof(char),3U);_T6D= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T6B,_T6C,_T6D);
j= j + 2;goto _TL62;
# 510
_TL61: _T6E= p;_T6F= _T6E.curr;_T70= (char*)_T6F;_T71= *_T70;_T72= (int)_T71;if(_T72!=9)goto _TL63;_T73= 
# 512
_check_null(Cyc_ftable);_T74= _tag_fat("\\t",sizeof(char),3U);_T75= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T73,_T74,_T75);
j= j + 2;goto _TL64;
# 515
_TL63: _T76= p;_T77= _T76.curr;_T78= (char*)_T77;_T79= *_T78;_T7A= (int)_T79;if(_T7A!=8)goto _TL65;_T7B= 
# 517
_check_null(Cyc_ftable);_T7C= _tag_fat("\\b",sizeof(char),3U);_T7D= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T7B,_T7C,_T7D);
j= j + 2;goto _TL66;
# 520
_TL65: _T7E= p;_T7F= _T7E.curr;_T80= (char*)_T7F;_T81= *_T80;_T82= (int)_T81;if(_T82 < 32)goto _TL69;else{goto _TL6A;}_TL6A: _T83= p;_T84= _T83.curr;_T85= (char*)_T84;_T86= *_T85;_T87= (int)_T86;if(_T87 >= 127)goto _TL69;else{goto _TL67;}
# 522
_TL69:{struct Cyc_Int_pa_PrintArg_struct _TE9;_TE9.tag= 1;_T89= p;_T8A= _T89.curr;_T8B= (char*)_T8A;_T8C= *_T8B;_TE9.f1= (unsigned)_T8C;_T88= _TE9;}{struct Cyc_Int_pa_PrintArg_struct _TE9=_T88;void*_TEA[1];_TEA[0]= & _TE9;_T8D= _check_null(Cyc_ftable);_T8E= _tag_fat("\\%03o",sizeof(char),6U);_T8F= _tag_fat(_TEA,sizeof(void*),1);Cyc_fprintf(_T8D,_T8E,_T8F);}
j= j + 4;goto _TL68;
# 527
_TL67: _T90= p;_T91= _T90.curr;_T92= (char*)_T91;_T93= *_T92;_T94= (int)_T93;_T95= _check_null(Cyc_ftable);Cyc_putc(_T94,_T95);
j= j + 1;_TL68: _TL66: _TL64: _TL62: _TL5E: _T96= & p;
# 498
_fat_ptr_inplace_plus(_T96,sizeof(char),1);goto _TL5B;_TL5A: _T97= 
# 532
_check_null(Cyc_ftable);Cyc_putc(34,_T97);
j= j + 1;}
# 481
i= i + 1;goto _TL55;_TL54: _T98= 
# 535
_check_null(Cyc_ftable);_T99= _tag_fat("\n};\n",sizeof(char),5U);_T9A= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T98,_T99,_T9A);_T9B= Cyc_toknumflag;
# 537
if(_T9B)goto _TL6B;else{goto _TL6D;}_TL6D: _T9C= Cyc_noparserflag;if(_T9C)goto _TL6B;else{goto _TL6E;}
_TL6E: _T9D= _check_null(Cyc_ftable);_T9E= _tag_fat("#endif\n\n",sizeof(char),9U);_T9F= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T9D,_T9E,_T9F);goto _TL6C;_TL6B: _TL6C: _TA0= Cyc_toknumflag;
# 540
if(!_TA0)goto _TL6F;_TA1= 
# 542
_check_null(Cyc_ftable);_TA2= _tag_fat("static const short yytoknum[] = { 0",sizeof(char),36U);_TA3= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_TA1,_TA2,_TA3);
j= 10;
i= 1;_TL74: if(i <= Cyc_ntokens)goto _TL72;else{goto _TL73;}
_TL72: _TA4= _check_null(Cyc_ftable);Cyc_putc(44,_TA4);
if(j < 10)goto _TL75;_TA5= 
# 548
_check_null(Cyc_ftable);Cyc_putc(10,_TA5);
j= 1;goto _TL76;
# 552
_TL75: j= j + 1;_TL76:{struct Cyc_Int_pa_PrintArg_struct _TE9;_TE9.tag= 1;_TA7= Cyc_user_toknums;_TA8= i;_TA9= _check_fat_subscript(_TA7,sizeof(int),_TA8);_TAA= (int*)_TA9;_TAB= *_TAA;
_TE9.f1= (unsigned long)_TAB;_TA6= _TE9;}{struct Cyc_Int_pa_PrintArg_struct _TE9=_TA6;void*_TEA[1];_TEA[0]= & _TE9;_TAC= _check_null(Cyc_ftable);_TAD= _tag_fat("%6d",sizeof(char),4U);_TAE= _tag_fat(_TEA,sizeof(void*),1);Cyc_fprintf(_TAC,_TAD,_TAE);}
# 544
i= i + 1;goto _TL74;_TL73: _TAF= 
# 555
_check_null(Cyc_ftable);_TB0= _tag_fat("\n};\n\n",sizeof(char),6U);_TB1= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_TAF,_TB0,_TB1);goto _TL70;_TL6F: _TL70: _TB2= 
# 558
_check_null(Cyc_ftable);_TB3= _tag_fat("static short yyr1[] = {     0",sizeof(char),30U);_TB4= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_TB2,_TB3,_TB4);
# 560
j= 10;
i= 1;_TL7A: if(i <= Cyc_nrules)goto _TL78;else{goto _TL79;}
# 563
_TL78: _TB5= _check_null(Cyc_ftable);Cyc_putc(44,_TB5);
# 565
if(j < 10)goto _TL7B;_TB6= 
# 567
_check_null(Cyc_ftable);Cyc_putc(10,_TB6);
j= 1;goto _TL7C;
# 572
_TL7B: j= j + 1;_TL7C:{struct Cyc_Int_pa_PrintArg_struct _TE9;_TE9.tag= 1;_TB8= Cyc_rlhs;_TB9= i;_TBA= _check_fat_subscript(_TB8,sizeof(short),_TB9);_TBB= (short*)_TBA;_TBC= *_TBB;_TBD= (int)_TBC;
# 575
_TE9.f1= (unsigned long)_TBD;_TB7= _TE9;}{struct Cyc_Int_pa_PrintArg_struct _TE9=_TB7;void*_TEA[1];_TEA[0]= & _TE9;_TBE= _check_null(Cyc_ftable);_TBF= _tag_fat("%6d",sizeof(char),4U);_TC0= _tag_fat(_TEA,sizeof(void*),1);Cyc_fprintf(_TBE,_TBF,_TC0);}
# 561
i= i + 1;goto _TL7A;_TL79: _TC1= Cyc_rlhs;
# 579
Cyc_rlhs= _fat_ptr_plus(_TC1,sizeof(short),1);
Cyc_rlhs= _tag_fat(0,0,0);_TC2= 
# 582
_check_null(Cyc_ftable);_TC3= _tag_fat("\n};\n\nstatic short yyr2[] = {     0",sizeof(char),35U);_TC4= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_TC2,_TC3,_TC4);
# 584
j= 10;
i= 1;_TL80: if(i < Cyc_nrules)goto _TL7E;else{goto _TL7F;}
# 587
_TL7E: _TC5= _check_null(Cyc_ftable);Cyc_putc(44,_TC5);
# 589
if(j < 10)goto _TL81;_TC6= 
# 591
_check_null(Cyc_ftable);Cyc_putc(10,_TC6);
j= 1;goto _TL82;
# 596
_TL81: j= j + 1;_TL82:{struct Cyc_Int_pa_PrintArg_struct _TE9;_TE9.tag= 1;_TC8= Cyc_rrhs;_TC9= i + 1;_TCA= _check_fat_subscript(_TC8,sizeof(short),_TC9);_TCB= (short*)_TCA;_TCC= *_TCB;_TCD= (int)_TCC;_TCE= Cyc_rrhs;_TCF= _TCE.curr;_TD0= (short*)_TCF;_TD1= i;_TD2= _TD0[_TD1];_TD3= (int)_TD2;_TD4= _TCD - _TD3;_TD5= _TD4 - 1;
# 599
_TE9.f1= (unsigned long)_TD5;_TC7= _TE9;}{struct Cyc_Int_pa_PrintArg_struct _TE9=_TC7;void*_TEA[1];_TEA[0]= & _TE9;_TD6= _check_null(Cyc_ftable);_TD7= _tag_fat("%6d",sizeof(char),4U);_TD8= _tag_fat(_TEA,sizeof(void*),1);Cyc_fprintf(_TD6,_TD7,_TD8);}
# 585
i= i + 1;goto _TL80;_TL7F: _TD9= 
# 602
_check_null(Cyc_ftable);Cyc_putc(44,_TD9);
if(j < 10)goto _TL83;_TDA= 
_check_null(Cyc_ftable);Cyc_putc(10,_TDA);goto _TL84;_TL83: _TL84:{struct Cyc_Int_pa_PrintArg_struct _TE9;_TE9.tag= 1;_TDC= Cyc_nitems;_TDD= Cyc_rrhs;_TDE= Cyc_nrules;_TDF= _check_fat_subscript(_TDD,sizeof(short),_TDE);_TE0= (short*)_TDF;_TE1= *_TE0;_TE2= (int)_TE1;_TE3= _TDC - _TE2;_TE4= _TE3 - 1;
# 606
_TE9.f1= (unsigned long)_TE4;_TDB= _TE9;}{struct Cyc_Int_pa_PrintArg_struct _TE9=_TDB;void*_TEA[1];_TEA[0]= & _TE9;_TE5= _check_null(Cyc_ftable);_TE6= _tag_fat("%6d\n};\n",sizeof(char),8U);_TE7= _tag_fat(_TEA,sizeof(void*),1);Cyc_fprintf(_TE5,_TE6,_TE7);}_TE8= Cyc_rrhs;
# 608
Cyc_rrhs= _fat_ptr_plus(_TE8,sizeof(short),1);
Cyc_rrhs= _tag_fat(0,0,0);}
# 613
void Cyc_output_defines (void){struct Cyc_Int_pa_PrintArg_struct _T0;int _T1;struct Cyc___cycFILE*_T2;struct _fat_ptr _T3;struct _fat_ptr _T4;struct Cyc_Int_pa_PrintArg_struct _T5;struct Cyc___cycFILE*_T6;struct _fat_ptr _T7;struct _fat_ptr _T8;struct Cyc_Int_pa_PrintArg_struct _T9;int _TA;struct Cyc___cycFILE*_TB;struct _fat_ptr _TC;struct _fat_ptr _TD;{struct Cyc_Int_pa_PrintArg_struct _TE;_TE.tag= 1;_T1= Cyc_final_state;
# 616
_TE.f1= (unsigned long)_T1;_T0= _TE;}{struct Cyc_Int_pa_PrintArg_struct _TE=_T0;void*_TF[1];_TF[0]= & _TE;_T2= _check_null(Cyc_ftable);_T3= _tag_fat("\n\n#define\tYYFINAL\t\t%d\n",sizeof(char),23U);_T4= _tag_fat(_TF,sizeof(void*),1);Cyc_fprintf(_T2,_T3,_T4);}{struct Cyc_Int_pa_PrintArg_struct _TE;_TE.tag= 1;
_TE.f1= 4294934528U;_T5= _TE;}{struct Cyc_Int_pa_PrintArg_struct _TE=_T5;void*_TF[1];_TF[0]= & _TE;_T6= _check_null(Cyc_ftable);_T7= _tag_fat("#define\tYYFLAG\t\t%d\n",sizeof(char),20U);_T8= _tag_fat(_TF,sizeof(void*),1);Cyc_fprintf(_T6,_T7,_T8);}{struct Cyc_Int_pa_PrintArg_struct _TE;_TE.tag= 1;_TA= Cyc_ntokens;
_TE.f1= (unsigned long)_TA;_T9= _TE;}{struct Cyc_Int_pa_PrintArg_struct _TE=_T9;void*_TF[1];_TF[0]= & _TE;_TB= _check_null(Cyc_ftable);_TC= _tag_fat("#define\tYYNTBASE\t%d\n",sizeof(char),21U);_TD= _tag_fat(_TF,sizeof(void*),1);Cyc_fprintf(_TB,_TC,_TD);}}
# 625
void Cyc_output_actions (void){struct _fat_ptr _T0;int _T1;struct _fat_ptr*_T2;unsigned _T3;unsigned _T4;struct _fat_ptr _T5;struct _fat_ptr _T6;int _T7;struct _fat_ptr*_T8;unsigned _T9;unsigned _TA;struct _fat_ptr _TB;struct _fat_ptr _TC;int _TD;short*_TE;unsigned _TF;unsigned _T10;struct _fat_ptr _T11;int _T12;short*_T13;unsigned _T14;unsigned _T15;struct _fat_ptr _T16;int _T17;
# 628
Cyc_nvectors= Cyc_nstates + Cyc_nvars;_T1= Cyc_nvectors;{unsigned _T18=(unsigned)_T1;_T3= _check_times(_T18,sizeof(struct _fat_ptr));{struct _fat_ptr*_T19=_cycalloc(_T3);{unsigned _T1A=_T18;unsigned _new2p_cyclone;_new2p_cyclone= 0;_TL88: if(_new2p_cyclone < _T1A)goto _TL86;else{goto _TL87;}_TL86: _T4= _new2p_cyclone;_T5= 
# 630
_tag_fat(0,0,0);_T19[_T4]= _T5;_new2p_cyclone= _new2p_cyclone + 1;goto _TL88;_TL87:;}_T2= (struct _fat_ptr*)_T19;}_T0= _tag_fat(_T2,sizeof(struct _fat_ptr),_T18);}Cyc_froms= _T0;_T7= Cyc_nvectors;{unsigned _T18=(unsigned)_T7;_T9= _check_times(_T18,sizeof(struct _fat_ptr));{struct _fat_ptr*_T19=_cycalloc(_T9);{unsigned _T1A=_T18;unsigned _new2p_cyclone;_new2p_cyclone= 0;_TL8C: if(_new2p_cyclone < _T1A)goto _TL8A;else{goto _TL8B;}_TL8A: _TA= _new2p_cyclone;_TB= 
_tag_fat(0,0,0);_T19[_TA]= _TB;_new2p_cyclone= _new2p_cyclone + 1;goto _TL8C;_TL8B:;}_T8= (struct _fat_ptr*)_T19;}_T6= _tag_fat(_T8,sizeof(struct _fat_ptr),_T18);}Cyc_tos= _T6;_TD= Cyc_nvectors;{unsigned _T18=(unsigned)_TD;_TF= _check_times(_T18,sizeof(short));{short*_T19=_cycalloc_atomic(_TF);{unsigned _T1A=_T18;unsigned _new2_cyclone;_new2_cyclone= 0;_TL90: if(_new2_cyclone < _T1A)goto _TL8E;else{goto _TL8F;}_TL8E: _T10= _new2_cyclone;
_T19[_T10]= 0;_new2_cyclone= _new2_cyclone + 1;goto _TL90;_TL8F:;}_TE= (short*)_T19;}_TC= _tag_fat(_TE,sizeof(short),_T18);}Cyc_tally= _TC;_T12= Cyc_nvectors;{unsigned _T18=(unsigned)_T12;_T14= _check_times(_T18,sizeof(short));{short*_T19=_cycalloc_atomic(_T14);{unsigned _T1A=_T18;unsigned _new2_cyclone;_new2_cyclone= 0;_TL94: if(_new2_cyclone < _T1A)goto _TL92;else{goto _TL93;}_TL92: _T15= _new2_cyclone;
_T19[_T15]= 0;_new2_cyclone= _new2_cyclone + 1;goto _TL94;_TL93:;}_T13= (short*)_T19;}_T11= _tag_fat(_T13,sizeof(short),_T18);}Cyc_width= _T11;
# 635
Cyc_token_actions();
Cyc_free_shifts();
Cyc_free_reductions();
Cyc_lookaheads= _tag_fat(0,0,0);
Cyc_LA= _tag_fat(0,0,0);
Cyc_LAruleno= _tag_fat(0,0,0);
Cyc_accessing_symbol= _tag_fat(0,0,0);
# 643
Cyc_goto_actions();_T16= Cyc_goto_map;_T17= Cyc_ntokens;
# 645
Cyc_goto_map= _fat_ptr_plus(_T16,sizeof(short),_T17);
Cyc_goto_map= _tag_fat(0,0,0);
Cyc_from_state= _tag_fat(0,0,0);
Cyc_to_state= _tag_fat(0,0,0);
# 650
Cyc_sort_actions();
Cyc_pack_table();
Cyc_output_base();
Cyc_output_table();
Cyc_output_check();}
# 664
void Cyc_token_actions (void){struct _fat_ptr _T0;int _T1;short*_T2;unsigned _T3;unsigned _T4;struct Cyc_Int_pa_PrintArg_struct _T5;int _T6;struct Cyc___cycFILE*_T7;struct _fat_ptr _T8;struct _fat_ptr _T9;struct Cyc___cycFILE*_TA;struct Cyc___cycFILE*_TB;struct Cyc_Int_pa_PrintArg_struct _TC;int _TD;struct Cyc___cycFILE*_TE;struct _fat_ptr _TF;struct _fat_ptr _T10;struct Cyc___cycFILE*_T11;struct _fat_ptr _T12;struct _fat_ptr _T13;
# 667
register int i;
register int j;
register int k;_T1= Cyc_ntokens;{unsigned _T14=(unsigned)_T1;_T3= _check_times(_T14,sizeof(short));{short*_T15=_cycalloc_atomic(_T3);{unsigned _T16=_T14;unsigned _new2_cyclone;_new2_cyclone= 0;_TL98: if(_new2_cyclone < _T16)goto _TL96;else{goto _TL97;}_TL96: _T4= _new2_cyclone;
# 671
_T15[_T4]= 0;_new2_cyclone= _new2_cyclone + 1;goto _TL98;_TL97:;}_T2= (short*)_T15;}_T0= _tag_fat(_T2,sizeof(short),_T14);}Cyc_actrow= _T0;
# 673
k= Cyc_action_row(0);{struct Cyc_Int_pa_PrintArg_struct _T14;_T14.tag= 1;_T6= k;
_T14.f1= (unsigned long)_T6;_T5= _T14;}{struct Cyc_Int_pa_PrintArg_struct _T14=_T5;void*_T15[1];_T15[0]= & _T14;_T7= _check_null(Cyc_ftable);_T8= _tag_fat("\nstatic short yydefact[] = {%6d",sizeof(char),32U);_T9= _tag_fat(_T15,sizeof(void*),1);Cyc_fprintf(_T7,_T8,_T9);}
Cyc_save_row(0);
# 677
j= 10;
i= 1;_TL9C: if(i < Cyc_nstates)goto _TL9A;else{goto _TL9B;}
# 680
_TL9A: _TA= _check_null(Cyc_ftable);Cyc_putc(44,_TA);
# 682
if(j < 10)goto _TL9D;_TB= 
# 684
_check_null(Cyc_ftable);Cyc_putc(10,_TB);
j= 1;goto _TL9E;
# 689
_TL9D: j= j + 1;_TL9E:
# 692
 k= Cyc_action_row(i);{struct Cyc_Int_pa_PrintArg_struct _T14;_T14.tag= 1;_TD= k;
_T14.f1= (unsigned long)_TD;_TC= _T14;}{struct Cyc_Int_pa_PrintArg_struct _T14=_TC;void*_T15[1];_T15[0]= & _T14;_TE= _check_null(Cyc_ftable);_TF= _tag_fat("%6d",sizeof(char),4U);_T10= _tag_fat(_T15,sizeof(void*),1);Cyc_fprintf(_TE,_TF,_T10);}
Cyc_save_row(i);
# 678
i= i + 1;goto _TL9C;_TL9B: _T11= 
# 697
_check_null(Cyc_ftable);_T12= _tag_fat("\n};\n",sizeof(char),5U);_T13= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T11,_T12,_T13);
Cyc_actrow= _tag_fat(0,0,0);}
# 714
int Cyc_action_row(int state){struct _fat_ptr _T0;int _T1;unsigned char*_T2;short*_T3;struct _fat_ptr _T4;int _T5;unsigned char*_T6;struct Cyc_reductions_tag**_T7;struct Cyc_reductions_tag*_T8;unsigned _T9;struct Cyc_reductions_tag*_TA;short _TB;struct _fat_ptr _TC;int _TD;unsigned char*_TE;short*_TF;short _T10;struct _fat_ptr _T11;int _T12;unsigned char*_T13;short*_T14;short _T15;struct _fat_ptr _T16;int _T17;unsigned char*_T18;short*_T19;short _T1A;short _T1B;struct _fat_ptr _T1C;int _T1D;unsigned _T1E;struct _fat_ptr _T1F;unsigned char*_T20;unsigned*_T21;unsigned _T22;unsigned _T23;int _T24;struct _fat_ptr _T25;int _T26;unsigned char*_T27;short*_T28;int _T29;struct _fat_ptr*_T2A;struct _fat_ptr _T2B;int _T2C;unsigned char*_T2D;struct Cyc_shifts_tag**_T2E;struct Cyc_shifts_tag*_T2F;unsigned _T30;struct Cyc_shifts_tag*_T31;short _T32;struct Cyc_shifts_tag*_T33;struct _fat_ptr _T34;int _T35;unsigned char*_T36;short*_T37;short _T38;int _T39;struct _fat_ptr _T3A;int _T3B;unsigned char*_T3C;short*_T3D;short _T3E;struct _fat_ptr _T3F;int _T40;unsigned char*_T41;short*_T42;int _T43;struct _fat_ptr _T44;int _T45;unsigned char*_T46;struct Cyc_errs_tag**_T47;struct Cyc_errs_tag*_T48;unsigned _T49;struct Cyc_errs_tag*_T4A;short _T4B;struct Cyc_errs_tag*_T4C;struct _fat_ptr _T4D;int _T4E;unsigned char*_T4F;short*_T50;short _T51;struct _fat_ptr _T52;int _T53;unsigned char*_T54;short*_T55;int _T56;struct _fat_ptr _T57;int _T58;unsigned char*_T59;char*_T5A;char _T5B;int _T5C;struct Cyc_reductions_tag*_T5D;struct _fat_ptr _T5E;unsigned char*_T5F;short*_T60;short _T61;struct _fat_ptr _T62;int _T63;unsigned char*_T64;short*_T65;short _T66;short _T67;struct _fat_ptr _T68;int _T69;unsigned char*_T6A;short*_T6B;short _T6C;int _T6D;int _T6E;struct _fat_ptr _T6F;int _T70;unsigned char*_T71;short*_T72;short _T73;int _T74;int _T75;struct _fat_ptr _T76;unsigned char*_T77;short*_T78;int _T79;struct _fat_ptr _T7A;int _T7B;unsigned char*_T7C;short*_T7D;short _T7E;int _T7F;int _T80;struct _fat_ptr _T81;unsigned char*_T82;short*_T83;int _T84;int _T85;
# 716
register int i=0;
register int j;
register int k;
register int m=0;
register int n=0;
register int count;
register int default_rule;
register int nreds;
register int max;
register int rule;
register int shift_state;
register int symbol;
register unsigned mask;
struct _fat_ptr wordp;
register struct Cyc_reductions_tag*redp;
register struct Cyc_shifts_tag*shiftp;
register struct Cyc_errs_tag*errp;
int nodefault=0;
# 735
i= 0;_TLA2: if(i < Cyc_ntokens)goto _TLA0;else{goto _TLA1;}
_TLA0: _T0= Cyc_actrow;_T1= i;_T2= _check_fat_subscript(_T0,sizeof(short),_T1);_T3= (short*)_T2;*_T3= 0;
# 735
i= i + 1;goto _TLA2;_TLA1:
# 738
 default_rule= 0;
nreds= 0;_T4= Cyc_reduction_table;_T5= state;_T6= _check_fat_subscript(_T4,sizeof(struct Cyc_reductions_tag*),_T5);_T7= (struct Cyc_reductions_tag**)_T6;
redp= *_T7;_T8= redp;_T9= (unsigned)_T8;
# 742
if(!_T9)goto _TLA3;_TA= redp;_TB= _TA->nreds;
# 744
nreds= (int)_TB;
# 746
if(nreds < 1)goto _TLA5;_TC= Cyc_lookaheads;_TD= state;_TE= _check_fat_subscript(_TC,sizeof(short),_TD);_TF= (short*)_TE;_T10= *_TF;
# 749
m= (int)_T10;_T11= Cyc_lookaheads;_T12= state + 1;_T13= _check_fat_subscript(_T11,sizeof(short),_T12);_T14= (short*)_T13;_T15= *_T14;
n= (int)_T15;
# 752
i= n - 1;_TLAA: if(i >= m)goto _TLA8;else{goto _TLA9;}
# 754
_TLA8: _T16= Cyc_LAruleno;_T17= i;_T18= _check_fat_subscript(_T16,sizeof(short),_T17);_T19= (short*)_T18;_T1A= *_T19;_T1B= - _T1A;rule= (int)_T1B;_T1C= Cyc_LA;_T1D= i * Cyc_tokensetsize;
wordp= _fat_ptr_plus(_T1C,sizeof(unsigned),_T1D);
mask= 1U;
# 759
j= 0;_TLAE: if(j < Cyc_ntokens)goto _TLAC;else{goto _TLAD;}
# 762
_TLAC: _T1E= mask;_T1F= wordp;_T20= _check_fat_subscript(_T1F,sizeof(unsigned),0U);_T21= (unsigned*)_T20;_T22= *_T21;_T23= _T1E & _T22;_T24= (int)_T23;if(!_T24)goto _TLAF;_T25= Cyc_actrow;_T26= j;_T27= _check_fat_subscript(_T25,sizeof(short),_T26);_T28= (short*)_T27;_T29= rule;
*_T28= (short)_T29;goto _TLB0;_TLAF: _TLB0:
# 765
 mask= mask << 1U;
if(mask!=0U)goto _TLB1;
# 768
mask= 1U;_T2A= & wordp;
_fat_ptr_inplace_plus(_T2A,sizeof(unsigned),1);goto _TLB2;_TLB1: _TLB2:
# 759
 j= j + 1;goto _TLAE;_TLAD:
# 752
 i= i + -1;goto _TLAA;_TLA9: goto _TLA6;_TLA5: _TLA6: goto _TLA4;_TLA3: _TLA4: _T2B= Cyc_shift_table;_T2C= state;_T2D= _check_fat_subscript(_T2B,sizeof(struct Cyc_shifts_tag*),_T2C);_T2E= (struct Cyc_shifts_tag**)_T2D;
# 776
shiftp= *_T2E;_T2F= shiftp;_T30= (unsigned)_T2F;
# 781
if(!_T30)goto _TLB3;_T31= shiftp;_T32= _T31->nshifts;
# 783
k= (int)_T32;
# 785
i= 0;_TLB8: if(i < k)goto _TLB6;else{goto _TLB7;}
# 787
_TLB6: _T33= shiftp;_T34= _T33->shifts;_T35= i;_T36= _check_fat_subscript(_T34,sizeof(short),_T35);_T37= (short*)_T36;_T38= *_T37;shift_state= (int)_T38;_T39= shift_state;
if(_T39)goto _TLB9;else{goto _TLBB;}_TLBB: goto _TLB5;_TLB9: _T3A= Cyc_accessing_symbol;_T3B= shift_state;_T3C= _check_fat_subscript(_T3A,sizeof(short),_T3B);_T3D= (short*)_T3C;_T3E= *_T3D;
# 790
symbol= (int)_T3E;
# 792
if(symbol < Cyc_ntokens)goto _TLBC;goto _TLB7;_TLBC: _T3F= Cyc_actrow;_T40= symbol;_T41= _check_fat_subscript(_T3F,sizeof(short),_T40);_T42= (short*)_T41;_T43= shift_state;
# 795
*_T42= (short)_T43;
# 799
if(symbol!=Cyc_error_token_number)goto _TLBE;nodefault= 1;goto _TLBF;_TLBE: _TLBF: _TLB5:
# 785
 i= i + 1;goto _TLB8;_TLB7: goto _TLB4;_TLB3: _TLB4: _T44= Cyc_err_table;_T45= state;_T46= _check_fat_subscript(_T44,sizeof(struct Cyc_errs_tag*),_T45);_T47= (struct Cyc_errs_tag**)_T46;
# 803
errp= *_T47;_T48= errp;_T49= (unsigned)_T48;
# 808
if(!_T49)goto _TLC0;_T4A= errp;_T4B= _T4A->nerrs;
# 810
k= (int)_T4B;
# 812
i= 0;_TLC5: if(i < k)goto _TLC3;else{goto _TLC4;}
# 814
_TLC3: _T4C= errp;_T4D= _T4C->errs;_T4E= i;_T4F= _check_fat_subscript(_T4D,sizeof(short),_T4E);_T50= (short*)_T4F;_T51= *_T50;symbol= (int)_T51;_T52= Cyc_actrow;_T53= symbol;_T54= _check_fat_subscript(_T52,sizeof(short),_T53);_T55= (short*)_T54;
*_T55= - -32768;
# 812
i= i + 1;goto _TLC5;_TLC4: goto _TLC1;_TLC0: _TLC1:
# 821
 if(nreds < 1)goto _TLC6;_T56= nodefault;if(_T56)goto _TLC6;else{goto _TLC8;}
# 823
_TLC8: _T57= Cyc_consistent;_T58= state;_T59= _check_fat_subscript(_T57,sizeof(char),_T58);_T5A= (char*)_T59;_T5B= *_T5A;_T5C= (int)_T5B;if(!_T5C)goto _TLC9;_T5D= 
_check_null(redp);_T5E= _T5D->rules;_T5F= _check_fat_subscript(_T5E,sizeof(short),0);_T60= (short*)_T5F;_T61= *_T60;default_rule= (int)_T61;goto _TLCA;
# 827
_TLC9: max= 0;
i= m;_TLCE: if(i < n)goto _TLCC;else{goto _TLCD;}
# 830
_TLCC: count= 0;_T62= Cyc_LAruleno;_T63= i;_T64= _check_fat_subscript(_T62,sizeof(short),_T63);_T65= (short*)_T64;_T66= *_T65;_T67= - _T66;
rule= (int)_T67;
# 833
j= 0;_TLD2: if(j < Cyc_ntokens)goto _TLD0;else{goto _TLD1;}
# 835
_TLD0: _T68= Cyc_actrow;_T69= j;_T6A= _check_fat_subscript(_T68,sizeof(short),_T69);_T6B= (short*)_T6A;_T6C= *_T6B;_T6D= (int)_T6C;_T6E= rule;if(_T6D!=_T6E)goto _TLD3;
count= count + 1;goto _TLD4;_TLD3: _TLD4:
# 833
 j= j + 1;goto _TLD2;_TLD1:
# 839
 if(count <= max)goto _TLD5;
# 841
max= count;
default_rule= rule;goto _TLD6;_TLD5: _TLD6:
# 828
 i= i + 1;goto _TLCE;_TLCD:
# 849
 if(max <= 0)goto _TLD7;
# 851
j= 0;_TLDC: if(j < Cyc_ntokens)goto _TLDA;else{goto _TLDB;}
# 853
_TLDA: _T6F= Cyc_actrow;_T70= j;_T71= _check_fat_subscript(_T6F,sizeof(short),_T70);_T72= (short*)_T71;_T73= *_T72;_T74= (int)_T73;_T75= default_rule;if(_T74!=_T75)goto _TLDD;_T76= Cyc_actrow;_T77= _T76.curr;_T78= (short*)_T77;_T79= j;
_T78[_T79]= 0;goto _TLDE;_TLDD: _TLDE:
# 851
 j= j + 1;goto _TLDC;_TLDB:
# 857
 default_rule= - default_rule;goto _TLD8;_TLD7: _TLD8: _TLCA: goto _TLC7;_TLC6: _TLC7:
# 865
 if(default_rule!=0)goto _TLDF;
j= 0;_TLE4: if(j < Cyc_ntokens)goto _TLE2;else{goto _TLE3;}
# 868
_TLE2: _T7A= Cyc_actrow;_T7B= j;_T7C= _check_fat_subscript(_T7A,sizeof(short),_T7B);_T7D= (short*)_T7C;_T7E= *_T7D;_T7F= (int)_T7E;_T80= - 32768;if(_T7F!=_T80)goto _TLE5;_T81= Cyc_actrow;_T82= _T81.curr;_T83= (short*)_T82;_T84= j;
_T83[_T84]= 0;goto _TLE6;_TLE5: _TLE6:
# 866
 j= j + 1;goto _TLE4;_TLE3: goto _TLE0;_TLDF: _TLE0: _T85= default_rule;
# 872
return _T85;}
# 876
void Cyc_save_row(int state){struct _fat_ptr _T0;int _T1;unsigned char*_T2;short*_T3;short _T4;int _T5;struct _fat_ptr _T6;int _T7;short*_T8;unsigned _T9;unsigned _TA;struct _fat_ptr _TB;int _TC;unsigned char*_TD;struct _fat_ptr*_TE;struct _fat_ptr _TF;int _T10;short*_T11;unsigned _T12;unsigned _T13;struct _fat_ptr _T14;int _T15;unsigned char*_T16;struct _fat_ptr*_T17;struct _fat_ptr _T18;int _T19;unsigned char*_T1A;short*_T1B;short _T1C;int _T1D;struct _fat_ptr*_T1E;struct _fat_ptr _T1F;unsigned char*_T20;short*_T21;int _T22;struct _fat_ptr*_T23;struct _fat_ptr _T24;unsigned char*_T25;short*_T26;struct _fat_ptr _T27;unsigned char*_T28;short*_T29;int _T2A;struct _fat_ptr _T2B;int _T2C;unsigned char*_T2D;short*_T2E;int _T2F;struct _fat_ptr _T30;unsigned char*_T31;short*_T32;int _T33;struct _fat_ptr _T34;unsigned char*_T35;short*_T36;short _T37;int _T38;struct _fat_ptr _T39;unsigned char*_T3A;short*_T3B;short _T3C;int _T3D;int _T3E;int _T3F;
# 879
register int i;
register int count;
struct _fat_ptr sp;
struct _fat_ptr sp1;
struct _fat_ptr sp2;
# 885
count= 0;
i= 0;_TLEA: if(i < Cyc_ntokens)goto _TLE8;else{goto _TLE9;}
# 888
_TLE8: _T0= Cyc_actrow;_T1= i;_T2= _check_fat_subscript(_T0,sizeof(short),_T1);_T3= (short*)_T2;_T4= *_T3;_T5= (int)_T4;if(_T5==0)goto _TLEB;
count= count + 1;goto _TLEC;_TLEB: _TLEC:
# 886
 i= i + 1;goto _TLEA;_TLE9:
# 892
 if(count!=0)goto _TLED;
return;_TLED: _T7= count;{unsigned _T40=(unsigned)_T7;_T9= _check_times(_T40,sizeof(short));{short*_T41=_cycalloc_atomic(_T9);{unsigned _T42=_T40;unsigned _new2_cyclone;_new2_cyclone= 0;_TLF2: if(_new2_cyclone < _T42)goto _TLF0;else{goto _TLF1;}_TLF0: _TA= _new2_cyclone;
_T41[_TA]= 0;_new2_cyclone= _new2_cyclone + 1;goto _TLF2;_TLF1:;}_T8= (short*)_T41;}_T6= _tag_fat(_T8,sizeof(short),_T40);}sp= _T6;
sp1= sp;_TB= Cyc_froms;_TC= state;_TD= _check_fat_subscript(_TB,sizeof(struct _fat_ptr),_TC);_TE= (struct _fat_ptr*)_TD;
*_TE= sp1;_T10= count;{unsigned _T40=(unsigned)_T10;_T12= _check_times(_T40,sizeof(short));{short*_T41=_cycalloc_atomic(_T12);{unsigned _T42=_T40;unsigned _new2_cyclone;_new2_cyclone= 0;_TLF6: if(_new2_cyclone < _T42)goto _TLF4;else{goto _TLF5;}_TLF4: _T13= _new2_cyclone;
_T41[_T13]= 0;_new2_cyclone= _new2_cyclone + 1;goto _TLF6;_TLF5:;}_T11= (short*)_T41;}_TF= _tag_fat(_T11,sizeof(short),_T40);}sp2= _TF;_T14= Cyc_tos;_T15= state;_T16= _check_fat_subscript(_T14,sizeof(struct _fat_ptr),_T15);_T17= (struct _fat_ptr*)_T16;
*_T17= sp2;
# 900
i= 0;_TLFA: if(i < Cyc_ntokens)goto _TLF8;else{goto _TLF9;}
# 902
_TLF8: _T18= Cyc_actrow;_T19= i;_T1A= _check_fat_subscript(_T18,sizeof(short),_T19);_T1B= (short*)_T1A;_T1C= *_T1B;_T1D= (int)_T1C;if(_T1D==0)goto _TLFB;_T1E= & sp1;_T1F= 
# 904
_fat_ptr_inplace_plus_post(_T1E,sizeof(short),1);_T20= _check_fat_subscript(_T1F,sizeof(short),0U);_T21= (short*)_T20;_T22= i;*_T21= (short)_T22;_T23= & sp2;_T24= 
_fat_ptr_inplace_plus_post(_T23,sizeof(short),1);_T25= _check_fat_subscript(_T24,sizeof(short),0U);_T26= (short*)_T25;_T27= Cyc_actrow;_T28= _T27.curr;_T29= (short*)_T28;_T2A= i;*_T26= _T29[_T2A];goto _TLFC;_TLFB: _TLFC:
# 900
 i= i + 1;goto _TLFA;_TLF9: _T2B= Cyc_tally;_T2C= state;_T2D= _check_fat_subscript(_T2B,sizeof(short),_T2C);_T2E= (short*)_T2D;_T2F= count;
# 909
*_T2E= (short)_T2F;_T30= Cyc_width;_T31= _T30.curr;_T32= (short*)_T31;_T33= state;_T34= sp1;_T35= _check_fat_subscript(_T34,sizeof(short),-1);_T36= (short*)_T35;_T37= *_T36;_T38= (int)_T37;_T39= sp;_T3A= _T39.curr;_T3B= (short*)_T3A;_T3C= _T3B[0];_T3D= (int)_T3C;_T3E= _T38 - _T3D;_T3F= _T3E + 1;
_T32[_T33]= (short)_T3F;}
# 922
void Cyc_goto_actions (void){struct _fat_ptr _T0;int _T1;short*_T2;unsigned _T3;unsigned _T4;struct Cyc_Int_pa_PrintArg_struct _T5;int _T6;struct Cyc___cycFILE*_T7;struct _fat_ptr _T8;struct _fat_ptr _T9;struct Cyc___cycFILE*_TA;struct Cyc___cycFILE*_TB;struct Cyc_Int_pa_PrintArg_struct _TC;int _TD;struct Cyc___cycFILE*_TE;struct _fat_ptr _TF;struct _fat_ptr _T10;struct Cyc___cycFILE*_T11;struct _fat_ptr _T12;struct _fat_ptr _T13;
# 925
register int i;
register int j;
register int k;_T1= Cyc_nstates;{unsigned _T14=(unsigned)_T1;_T3= _check_times(_T14,sizeof(short));{short*_T15=_cycalloc_atomic(_T3);{unsigned _T16=_T14;unsigned _new2_cyclone;_new2_cyclone= 0;_TL100: if(_new2_cyclone < _T16)goto _TLFE;else{goto _TLFF;}_TLFE: _T4= _new2_cyclone;
# 929
_T15[_T4]= 0;_new2_cyclone= _new2_cyclone + 1;goto _TL100;_TLFF:;}_T2= (short*)_T15;}_T0= _tag_fat(_T2,sizeof(short),_T14);}Cyc_state_count= _T0;
# 931
k= Cyc_default_goto(Cyc_ntokens);{struct Cyc_Int_pa_PrintArg_struct _T14;_T14.tag= 1;_T6= k;
_T14.f1= (unsigned long)_T6;_T5= _T14;}{struct Cyc_Int_pa_PrintArg_struct _T14=_T5;void*_T15[1];_T15[0]= & _T14;_T7= _check_null(Cyc_ftable);_T8= _tag_fat("\nstatic short yydefgoto[] = {%6d",sizeof(char),33U);_T9= _tag_fat(_T15,sizeof(void*),1);Cyc_fprintf(_T7,_T8,_T9);}
Cyc_save_column(Cyc_ntokens,k);
# 935
j= 10;
i= Cyc_ntokens + 1;_TL104: if(i < Cyc_nsyms)goto _TL102;else{goto _TL103;}
# 938
_TL102: _TA= _check_null(Cyc_ftable);Cyc_putc(44,_TA);
# 940
if(j < 10)goto _TL105;_TB= 
# 942
_check_null(Cyc_ftable);Cyc_putc(10,_TB);
j= 1;goto _TL106;
# 947
_TL105: j= j + 1;_TL106:
# 950
 k= Cyc_default_goto(i);{struct Cyc_Int_pa_PrintArg_struct _T14;_T14.tag= 1;_TD= k;
_T14.f1= (unsigned long)_TD;_TC= _T14;}{struct Cyc_Int_pa_PrintArg_struct _T14=_TC;void*_T15[1];_T15[0]= & _T14;_TE= _check_null(Cyc_ftable);_TF= _tag_fat("%6d",sizeof(char),4U);_T10= _tag_fat(_T15,sizeof(void*),1);Cyc_fprintf(_TE,_TF,_T10);}
Cyc_save_column(i,k);
# 936
i= i + 1;goto _TL104;_TL103: _T11= 
# 955
_check_null(Cyc_ftable);_T12= _tag_fat("\n};\n",sizeof(char),5U);_T13= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T11,_T12,_T13);
Cyc_state_count= _tag_fat(0,0,0);}
# 961
int Cyc_default_goto(int symbol){struct _fat_ptr _T0;int _T1;unsigned char*_T2;short*_T3;short _T4;struct _fat_ptr _T5;int _T6;unsigned char*_T7;short*_T8;short _T9;int _TA;struct _fat_ptr _TB;int _TC;unsigned char*_TD;short*_TE;struct _fat_ptr _TF;struct _fat_ptr _T10;int _T11;unsigned char*_T12;short*_T13;short _T14;int _T15;unsigned char*_T16;short*_T17;struct _fat_ptr _T18;int _T19;unsigned char*_T1A;short*_T1B;short _T1C;int _T1D;int _T1E;struct _fat_ptr _T1F;unsigned char*_T20;short*_T21;int _T22;short _T23;int _T24;
# 963
register int i;
register int m;
register int n;
register int default_state;
register int max;_T0= Cyc_goto_map;_T1= symbol;_T2= _check_fat_subscript(_T0,sizeof(short),_T1);_T3= (short*)_T2;_T4= *_T3;
# 969
m= (int)_T4;_T5= Cyc_goto_map;_T6= symbol + 1;_T7= _check_fat_subscript(_T5,sizeof(short),_T6);_T8= (short*)_T7;_T9= *_T8;
n= (int)_T9;
# 972
if(m!=n)goto _TL107;_TA= - 1;
return _TA;_TL107:
# 975
 i= 0;_TL10C: if(i < Cyc_nstates)goto _TL10A;else{goto _TL10B;}
_TL10A: _TB= Cyc_state_count;_TC= i;_TD= _check_fat_subscript(_TB,sizeof(short),_TC);_TE= (short*)_TD;*_TE= 0;
# 975
i= i + 1;goto _TL10C;_TL10B:
# 978
 i= m;_TL110: if(i < n)goto _TL10E;else{goto _TL10F;}
_TL10E: _TF= Cyc_state_count;_T10= Cyc_to_state;_T11= i;_T12= _check_fat_subscript(_T10,sizeof(short),_T11);_T13= (short*)_T12;_T14= *_T13;_T15= (int)_T14;_T16= _check_fat_subscript(_TF,sizeof(short),_T15);_T17= (short*)_T16;*_T17= *_T17 + 1;
# 978
i= i + 1;goto _TL110;_TL10F:
# 981
 max= 0;
default_state= - 1;
# 984
i= 0;_TL114: if(i < Cyc_nstates)goto _TL112;else{goto _TL113;}
# 986
_TL112: _T18= Cyc_state_count;_T19= i;_T1A= _check_fat_subscript(_T18,sizeof(short),_T19);_T1B= (short*)_T1A;_T1C= *_T1B;_T1D= (int)_T1C;_T1E= max;if(_T1D <= _T1E)goto _TL115;_T1F= Cyc_state_count;_T20= _T1F.curr;_T21= (short*)_T20;_T22= i;_T23= _T21[_T22];
# 988
max= (int)_T23;
default_state= i;goto _TL116;_TL115: _TL116:
# 984
 i= i + 1;goto _TL114;_TL113: _T24= default_state;
# 993
return _T24;}
# 997
void Cyc_save_column(int symbol,int default_state){struct _fat_ptr _T0;int _T1;unsigned char*_T2;short*_T3;short _T4;struct _fat_ptr _T5;int _T6;unsigned char*_T7;short*_T8;short _T9;struct _fat_ptr _TA;int _TB;unsigned char*_TC;short*_TD;short _TE;int _TF;int _T10;int _T11;int _T12;struct _fat_ptr _T13;int _T14;short*_T15;unsigned _T16;unsigned _T17;struct _fat_ptr _T18;int _T19;unsigned char*_T1A;struct _fat_ptr*_T1B;struct _fat_ptr _T1C;int _T1D;short*_T1E;unsigned _T1F;unsigned _T20;struct _fat_ptr _T21;int _T22;unsigned char*_T23;struct _fat_ptr*_T24;struct _fat_ptr _T25;int _T26;unsigned char*_T27;short*_T28;short _T29;int _T2A;int _T2B;struct _fat_ptr*_T2C;struct _fat_ptr _T2D;unsigned char*_T2E;short*_T2F;struct _fat_ptr _T30;int _T31;unsigned char*_T32;short*_T33;struct _fat_ptr*_T34;struct _fat_ptr _T35;unsigned char*_T36;short*_T37;struct _fat_ptr _T38;unsigned char*_T39;short*_T3A;int _T3B;struct _fat_ptr _T3C;int _T3D;unsigned char*_T3E;short*_T3F;int _T40;struct _fat_ptr _T41;unsigned char*_T42;short*_T43;int _T44;struct _fat_ptr _T45;unsigned char*_T46;short*_T47;short _T48;int _T49;struct _fat_ptr _T4A;unsigned char*_T4B;short*_T4C;short _T4D;int _T4E;int _T4F;int _T50;
# 1000
register int i;
register int m;
register int n;
struct _fat_ptr sp;
struct _fat_ptr sp1;
struct _fat_ptr sp2;
register int count;
register int symno;_T0= Cyc_goto_map;_T1= symbol;_T2= _check_fat_subscript(_T0,sizeof(short),_T1);_T3= (short*)_T2;_T4= *_T3;
# 1009
m= (int)_T4;_T5= Cyc_goto_map;_T6= symbol + 1;_T7= _check_fat_subscript(_T5,sizeof(short),_T6);_T8= (short*)_T7;_T9= *_T8;
n= (int)_T9;
# 1012
count= 0;
i= m;_TL11A: if(i < n)goto _TL118;else{goto _TL119;}
# 1015
_TL118: _TA= Cyc_to_state;_TB= i;_TC= _check_fat_subscript(_TA,sizeof(short),_TB);_TD= (short*)_TC;_TE= *_TD;_TF= (int)_TE;_T10= default_state;if(_TF==_T10)goto _TL11B;
count= count + 1;goto _TL11C;_TL11B: _TL11C:
# 1013
 i= i + 1;goto _TL11A;_TL119:
# 1019
 if(count!=0)goto _TL11D;
return;_TL11D: _T11= symbol - Cyc_ntokens;_T12= Cyc_nstates;
# 1022
symno= _T11 + _T12;_T14= count;{unsigned _T51=(unsigned)_T14;_T16= _check_times(_T51,sizeof(short));{short*_T52=_cycalloc_atomic(_T16);{unsigned _T53=_T51;unsigned _new2_cyclone;_new2_cyclone= 0;_TL122: if(_new2_cyclone < _T53)goto _TL120;else{goto _TL121;}_TL120: _T17= _new2_cyclone;
# 1024
_T52[_T17]= 0;_new2_cyclone= _new2_cyclone + 1;goto _TL122;_TL121:;}_T15= (short*)_T52;}_T13= _tag_fat(_T15,sizeof(short),_T51);}sp= _T13;sp1= sp;_T18= Cyc_froms;_T19= symno;_T1A= _check_fat_subscript(_T18,sizeof(struct _fat_ptr),_T19);_T1B= (struct _fat_ptr*)_T1A;
*_T1B= sp1;_T1D= count;{unsigned _T51=(unsigned)_T1D;_T1F= _check_times(_T51,sizeof(short));{short*_T52=_cycalloc_atomic(_T1F);{unsigned _T53=_T51;unsigned _new2_cyclone;_new2_cyclone= 0;_TL126: if(_new2_cyclone < _T53)goto _TL124;else{goto _TL125;}_TL124: _T20= _new2_cyclone;
_T52[_T20]= 0;_new2_cyclone= _new2_cyclone + 1;goto _TL126;_TL125:;}_T1E= (short*)_T52;}_T1C= _tag_fat(_T1E,sizeof(short),_T51);}sp2= _T1C;_T21= Cyc_tos;_T22= symno;_T23= _check_fat_subscript(_T21,sizeof(struct _fat_ptr),_T22);_T24= (struct _fat_ptr*)_T23;
*_T24= sp2;
# 1029
i= m;_TL12A: if(i < n)goto _TL128;else{goto _TL129;}
# 1031
_TL128: _T25= Cyc_to_state;_T26= i;_T27= _check_fat_subscript(_T25,sizeof(short),_T26);_T28= (short*)_T27;_T29= *_T28;_T2A= (int)_T29;_T2B= default_state;if(_T2A==_T2B)goto _TL12B;_T2C= & sp1;_T2D= 
# 1033
_fat_ptr_inplace_plus_post(_T2C,sizeof(short),1);_T2E= _check_fat_subscript(_T2D,sizeof(short),0U);_T2F= (short*)_T2E;_T30= Cyc_from_state;_T31= i;_T32= _check_fat_subscript(_T30,sizeof(short),_T31);_T33= (short*)_T32;*_T2F= *_T33;_T34= & sp2;_T35= 
_fat_ptr_inplace_plus_post(_T34,sizeof(short),1);_T36= _check_fat_subscript(_T35,sizeof(short),0U);_T37= (short*)_T36;_T38= Cyc_to_state;_T39= _T38.curr;_T3A= (short*)_T39;_T3B= i;*_T37= _T3A[_T3B];goto _TL12C;_TL12B: _TL12C:
# 1029
 i= i + 1;goto _TL12A;_TL129: _T3C= Cyc_tally;_T3D= symno;_T3E= _check_fat_subscript(_T3C,sizeof(short),_T3D);_T3F= (short*)_T3E;_T40= count;
# 1038
*_T3F= (short)_T40;_T41= Cyc_width;_T42= _T41.curr;_T43= (short*)_T42;_T44= symno;_T45= sp1;_T46= _check_fat_subscript(_T45,sizeof(short),-1);_T47= (short*)_T46;_T48= *_T47;_T49= (int)_T48;_T4A= sp;_T4B= _T4A.curr;_T4C= (short*)_T4B;_T4D= _T4C[0];_T4E= (int)_T4D;_T4F= _T49 - _T4E;_T50= _T4F + 1;
_T43[_T44]= (short)_T50;}
# 1047
void Cyc_sort_actions (void){struct _fat_ptr _T0;int _T1;short*_T2;unsigned _T3;unsigned _T4;struct _fat_ptr _T5;int _T6;unsigned char*_T7;short*_T8;short _T9;int _TA;struct _fat_ptr _TB;unsigned char*_TC;short*_TD;int _TE;short _TF;struct _fat_ptr _T10;int _T11;unsigned char*_T12;short*_T13;short _T14;struct _fat_ptr _T15;struct _fat_ptr _T16;int _T17;unsigned char*_T18;short*_T19;short _T1A;int _T1B;unsigned char*_T1C;short*_T1D;short _T1E;int _T1F;int _T20;struct _fat_ptr _T21;struct _fat_ptr _T22;int _T23;unsigned char*_T24;short*_T25;short _T26;int _T27;unsigned char*_T28;short*_T29;short _T2A;int _T2B;int _T2C;struct _fat_ptr _T2D;struct _fat_ptr _T2E;unsigned char*_T2F;short*_T30;int _T31;short _T32;int _T33;unsigned char*_T34;short*_T35;short _T36;int _T37;int _T38;struct _fat_ptr _T39;int _T3A;unsigned char*_T3B;short*_T3C;struct _fat_ptr _T3D;int _T3E;unsigned char*_T3F;short*_T40;struct _fat_ptr _T41;int _T42;unsigned char*_T43;short*_T44;int _T45;
# 1050
register int i;
register int j;
register int k;
register int t;
register int w;_T1= Cyc_nvectors;{unsigned _T46=(unsigned)_T1;_T3= _check_times(_T46,sizeof(short));{short*_T47=_cycalloc_atomic(_T3);{unsigned _T48=_T46;unsigned _new2_cyclone;_new2_cyclone= 0;_TL130: if(_new2_cyclone < _T48)goto _TL12E;else{goto _TL12F;}_TL12E: _T4= _new2_cyclone;
# 1056
_T47[_T4]= 0;_new2_cyclone= _new2_cyclone + 1;goto _TL130;_TL12F:;}_T2= (short*)_T47;}_T0= _tag_fat(_T2,sizeof(short),_T46);}Cyc_order= _T0;
Cyc_nentries= 0;
# 1059
i= 0;_TL134: if(i < Cyc_nvectors)goto _TL132;else{goto _TL133;}
# 1061
_TL132: _T5= Cyc_tally;_T6= i;_T7= _check_fat_subscript(_T5,sizeof(short),_T6);_T8= (short*)_T7;_T9= *_T8;_TA= (int)_T9;if(_TA <= 0)goto _TL135;_TB= Cyc_tally;_TC= _TB.curr;_TD= (short*)_TC;_TE= i;_TF= _TD[_TE];
# 1063
t= (int)_TF;_T10= Cyc_width;_T11= i;_T12= _check_fat_subscript(_T10,sizeof(short),_T11);_T13= (short*)_T12;_T14= *_T13;
w= (int)_T14;
j= Cyc_nentries - 1;
# 1067
_TL137: if(j >= 0)goto _TL13A;else{goto _TL139;}_TL13A: _T15= Cyc_width;_T16= Cyc_order;_T17= j;_T18= _check_fat_subscript(_T16,sizeof(short),_T17);_T19= (short*)_T18;_T1A= *_T19;_T1B= (int)_T1A;_T1C= _check_fat_subscript(_T15,sizeof(short),_T1B);_T1D= (short*)_T1C;_T1E= *_T1D;_T1F= (int)_T1E;_T20= w;if(_T1F < _T20)goto _TL138;else{goto _TL139;}
_TL138: j= j + -1;goto _TL137;_TL139:
# 1070
 _TL13B: if(j >= 0)goto _TL13F;else{goto _TL13D;}_TL13F: _T21= Cyc_width;_T22= Cyc_order;_T23= j;_T24= _check_fat_subscript(_T22,sizeof(short),_T23);_T25= (short*)_T24;_T26= *_T25;_T27= (int)_T26;_T28= _check_fat_subscript(_T21,sizeof(short),_T27);_T29= (short*)_T28;_T2A= *_T29;_T2B= (int)_T2A;_T2C= w;if(_T2B==_T2C)goto _TL13E;else{goto _TL13D;}_TL13E: _T2D= Cyc_tally;_T2E= Cyc_order;_T2F= _T2E.curr;_T30= (short*)_T2F;_T31= j;_T32= _T30[_T31];_T33= (int)_T32;_T34= _check_fat_subscript(_T2D,sizeof(short),_T33);_T35= (short*)_T34;_T36= *_T35;_T37= (int)_T36;_T38= t;if(_T37 < _T38)goto _TL13C;else{goto _TL13D;}
_TL13C: j= j + -1;goto _TL13B;_TL13D:
# 1073
 k= Cyc_nentries - 1;_TL143: if(k > j)goto _TL141;else{goto _TL142;}
_TL141: _T39= Cyc_order;_T3A= k + 1;_T3B= _check_fat_subscript(_T39,sizeof(short),_T3A);_T3C= (short*)_T3B;_T3D= Cyc_order;_T3E= k;_T3F= _check_fat_subscript(_T3D,sizeof(short),_T3E);_T40= (short*)_T3F;*_T3C= *_T40;
# 1073
k= k + -1;goto _TL143;_TL142: _T41= Cyc_order;_T42= j + 1;_T43= _check_fat_subscript(_T41,sizeof(short),_T42);_T44= (short*)_T43;_T45= i;
# 1076
*_T44= (short)_T45;
Cyc_nentries= Cyc_nentries + 1;goto _TL136;_TL135: _TL136:
# 1059
 i= i + 1;goto _TL134;_TL133:;}
# 1083
void Cyc_pack_table (void){struct _fat_ptr _T0;int _T1;short*_T2;unsigned _T3;unsigned _T4;struct _fat_ptr _T5;int _T6;short*_T7;unsigned _T8;unsigned _T9;short*_TA;short*_TB;unsigned _TC;unsigned _TD;short*_TE;short*_TF;unsigned _T10;unsigned _T11;struct _fat_ptr _T12;int _T13;unsigned char*_T14;short*_T15;struct _fat_ptr _T16;int _T17;unsigned char*_T18;short*_T19;struct _fat_ptr _T1A;int _T1B;unsigned char*_T1C;short*_T1D;short _T1E;struct _fat_ptr _T1F;int _T20;unsigned char*_T21;short*_T22;int _T23;struct _fat_ptr _T24;struct _fat_ptr _T25;int _T26;unsigned char*_T27;short*_T28;short _T29;int _T2A;unsigned char*_T2B;short*_T2C;int _T2D;struct _fat_ptr _T2E;int _T2F;unsigned char*_T30;struct _fat_ptr*_T31;struct _fat_ptr _T32;unsigned char*_T33;unsigned _T34;struct _fat_ptr _T35;unsigned char*_T36;struct _fat_ptr*_T37;int _T38;struct _fat_ptr _T39;int _T3A;unsigned char*_T3B;struct _fat_ptr*_T3C;struct _fat_ptr _T3D;unsigned char*_T3E;unsigned _T3F;struct _fat_ptr _T40;unsigned char*_T41;struct _fat_ptr*_T42;int _T43;
# 1086
register int i;
register int place;
register int state;_T1= Cyc_nvectors;{unsigned _T44=(unsigned)_T1;_T3= _check_times(_T44,sizeof(short));{short*_T45=_cycalloc_atomic(_T3);{unsigned _T46=_T44;unsigned _new2_cyclone;_new2_cyclone= 0;_TL147: if(_new2_cyclone < _T46)goto _TL145;else{goto _TL146;}_TL145: _T4= _new2_cyclone;
# 1090
_T45[_T4]= 0;_new2_cyclone= _new2_cyclone + 1;goto _TL147;_TL146:;}_T2= (short*)_T45;}_T0= _tag_fat(_T2,sizeof(short),_T44);}Cyc_base= _T0;_T6= Cyc_nentries;{unsigned _T44=(unsigned)_T6;_T8= _check_times(_T44,sizeof(short));{short*_T45=_cycalloc_atomic(_T8);{unsigned _T46=_T44;unsigned _new2_cyclone;_new2_cyclone= 0;_TL14B: if(_new2_cyclone < _T46)goto _TL149;else{goto _TL14A;}_TL149: _T9= _new2_cyclone;
_T45[_T9]= 0;_new2_cyclone= _new2_cyclone + 1;goto _TL14B;_TL14A:;}_T7= (short*)_T45;}_T5= _tag_fat(_T7,sizeof(short),_T44);}Cyc_pos= _T5;{unsigned _T44=32767U;_TC= _check_times(_T44,sizeof(short));{short*_T45=_cycalloc_atomic(_TC);{unsigned _T46=_T44;unsigned _new2_cyclone;_new2_cyclone= 0;_TL14F: if(_new2_cyclone < _T46)goto _TL14D;else{goto _TL14E;}_TL14D: _TD= _new2_cyclone;
_T45[_TD]= 0;_new2_cyclone= _new2_cyclone + 1;goto _TL14F;_TL14E:;}_TB= (short*)_T45;}_TA= _TB;}Cyc_table= _tag_fat(_TA,sizeof(short),32767U);{unsigned _T44=32767U;_T10= _check_times(_T44,sizeof(short));{short*_T45=_cycalloc_atomic(_T10);{unsigned _T46=_T44;unsigned _new2_cyclone;_new2_cyclone= 0;_TL153: if(_new2_cyclone < _T46)goto _TL151;else{goto _TL152;}_TL151: _T11= _new2_cyclone;
_T45[_T11]= 0;_new2_cyclone= _new2_cyclone + 1;goto _TL153;_TL152:;}_TF= (short*)_T45;}_TE= _TF;}Cyc_check= _tag_fat(_TE,sizeof(short),32767U);
# 1095
Cyc_lowzero= 0;
Cyc_high= 0;
# 1098
i= 0;_TL157: if(i < Cyc_nvectors)goto _TL155;else{goto _TL156;}
_TL155: _T12= Cyc_base;_T13= i;_T14= _check_fat_subscript(_T12,sizeof(short),_T13);_T15= (short*)_T14;*_T15= - -32768;
# 1098
i= i + 1;goto _TL157;_TL156:
# 1101
 i= 0;_TL15B: if(i < 32767)goto _TL159;else{goto _TL15A;}
_TL159: _T16= Cyc_check;_T17= i;_T18= _check_fat_subscript(_T16,sizeof(short),_T17);_T19= (short*)_T18;*_T19= - 1;
# 1101
i= i + 1;goto _TL15B;_TL15A:
# 1104
 i= 0;_TL15F: if(i < Cyc_nentries)goto _TL15D;else{goto _TL15E;}
# 1106
_TL15D: state= Cyc_matching_state(i);
# 1108
if(state >= 0)goto _TL160;
place= Cyc_pack_vector(i);goto _TL161;
# 1111
_TL160: _T1A= Cyc_base;_T1B= state;_T1C= _check_fat_subscript(_T1A,sizeof(short),_T1B);_T1D= (short*)_T1C;_T1E= *_T1D;place= (int)_T1E;_TL161: _T1F= Cyc_pos;_T20= i;_T21= _check_fat_subscript(_T1F,sizeof(short),_T20);_T22= (short*)_T21;_T23= place;
# 1113
*_T22= (short)_T23;_T24= Cyc_base;_T25= Cyc_order;_T26= i;_T27= _check_fat_subscript(_T25,sizeof(short),_T26);_T28= (short*)_T27;_T29= *_T28;_T2A= (int)_T29;_T2B= _check_fat_subscript(_T24,sizeof(short),_T2A);_T2C= (short*)_T2B;_T2D= place;
*_T2C= (short)_T2D;
# 1104
i= i + 1;goto _TL15F;_TL15E:
# 1117
 i= 0;_TL165: if(i < Cyc_nvectors)goto _TL163;else{goto _TL164;}
# 1119
_TL163: _T2E= Cyc_froms;_T2F= i;_T30= _check_fat_subscript(_T2E,sizeof(struct _fat_ptr),_T2F);_T31= (struct _fat_ptr*)_T30;_T32= *_T31;_T33= _T32.curr;_T34= (unsigned)_T33;if(!_T34)goto _TL166;_T35= Cyc_froms;_T36= _T35.curr;_T37= (struct _fat_ptr*)_T36;_T38= i;
({__typeof__(_tag_fat(0,0,0))_T44=_tag_fat(0,0,0);_T37[_T38]= _T44;});goto _TL167;_TL166: _TL167: _T39= Cyc_tos;_T3A= i;_T3B= _check_fat_subscript(_T39,sizeof(struct _fat_ptr),_T3A);_T3C= (struct _fat_ptr*)_T3B;_T3D= *_T3C;_T3E= _T3D.curr;_T3F= (unsigned)_T3E;
if(!_T3F)goto _TL168;_T40= Cyc_tos;_T41= _T40.curr;_T42= (struct _fat_ptr*)_T41;_T43= i;
({__typeof__(_tag_fat(0,0,0))_T44=_tag_fat(0,0,0);_T42[_T43]= _T44;});goto _TL169;_TL168: _TL169:
# 1117
 i= i + 1;goto _TL165;_TL164:
# 1125
 Cyc_froms= _tag_fat(0,0,0);
Cyc_tos= _tag_fat(0,0,0);
Cyc_pos= _tag_fat(0,0,0);}
# 1132
int Cyc_matching_state(int vector){struct _fat_ptr _T0;int _T1;unsigned char*_T2;short*_T3;short _T4;int _T5;struct _fat_ptr _T6;int _T7;unsigned char*_T8;short*_T9;short _TA;struct _fat_ptr _TB;int _TC;unsigned char*_TD;short*_TE;short _TF;struct _fat_ptr _T10;int _T11;unsigned char*_T12;short*_T13;short _T14;struct _fat_ptr _T15;int _T16;unsigned char*_T17;short*_T18;short _T19;int _T1A;int _T1B;struct _fat_ptr _T1C;int _T1D;unsigned char*_T1E;short*_T1F;short _T20;int _T21;int _T22;int _T23;int _T24;struct _fat_ptr _T25;int _T26;unsigned char*_T27;struct _fat_ptr*_T28;struct _fat_ptr _T29;int _T2A;unsigned char*_T2B;short*_T2C;short _T2D;int _T2E;struct _fat_ptr _T2F;int _T30;unsigned char*_T31;struct _fat_ptr*_T32;struct _fat_ptr _T33;int _T34;unsigned char*_T35;short*_T36;short _T37;int _T38;struct _fat_ptr _T39;int _T3A;unsigned char*_T3B;struct _fat_ptr*_T3C;struct _fat_ptr _T3D;int _T3E;unsigned char*_T3F;short*_T40;short _T41;int _T42;struct _fat_ptr _T43;int _T44;unsigned char*_T45;struct _fat_ptr*_T46;struct _fat_ptr _T47;int _T48;unsigned char*_T49;short*_T4A;short _T4B;int _T4C;int _T4D;int _T4E;int _T4F;
# 1134
register int i;
register int j;
register int k;
register int t;
register int w;
register int match;
register int prev;_T0= Cyc_order;_T1= vector;_T2= _check_fat_subscript(_T0,sizeof(short),_T1);_T3= (short*)_T2;_T4= *_T3;
# 1142
i= (int)_T4;
if(i < Cyc_nstates)goto _TL16A;_T5= - 1;
return _T5;_TL16A: _T6= Cyc_tally;_T7= i;_T8= _check_fat_subscript(_T6,sizeof(short),_T7);_T9= (short*)_T8;_TA= *_T9;
# 1146
t= (int)_TA;_TB= Cyc_width;_TC= i;_TD= _check_fat_subscript(_TB,sizeof(short),_TC);_TE= (short*)_TD;_TF= *_TE;
w= (int)_TF;
# 1149
prev= vector - 1;_TL16F: if(prev >= 0)goto _TL16D;else{goto _TL16E;}
# 1151
_TL16D: _T10= Cyc_order;_T11= prev;_T12= _check_fat_subscript(_T10,sizeof(short),_T11);_T13= (short*)_T12;_T14= *_T13;j= (int)_T14;_T15= Cyc_width;_T16= j;_T17= _check_fat_subscript(_T15,sizeof(short),_T16);_T18= (short*)_T17;_T19= *_T18;_T1A= (int)_T19;_T1B= w;
if(_T1A!=_T1B)goto _TL172;else{goto _TL173;}_TL173: _T1C= Cyc_tally;_T1D= j;_T1E= _check_fat_subscript(_T1C,sizeof(short),_T1D);_T1F= (short*)_T1E;_T20= *_T1F;_T21= (int)_T20;_T22= t;if(_T21!=_T22)goto _TL172;else{goto _TL170;}
_TL172: _T23= - 1;return _T23;_TL170:
# 1155
 match= 1;
k= 0;_TL177: _T24= match;if(_T24)goto _TL178;else{goto _TL176;}_TL178: if(k < t)goto _TL175;else{goto _TL176;}
# 1158
_TL175: _T25= Cyc_tos;_T26= j;_T27= _check_fat_subscript(_T25,sizeof(struct _fat_ptr),_T26);_T28= (struct _fat_ptr*)_T27;_T29= *_T28;_T2A= k;_T2B= _check_fat_subscript(_T29,sizeof(short),_T2A);_T2C= (short*)_T2B;_T2D= *_T2C;_T2E= (int)_T2D;_T2F= Cyc_tos;_T30= i;_T31= _check_fat_subscript(_T2F,sizeof(struct _fat_ptr),_T30);_T32= (struct _fat_ptr*)_T31;_T33= *_T32;_T34= k;_T35= _check_fat_subscript(_T33,sizeof(short),_T34);_T36= (short*)_T35;_T37= *_T36;_T38= (int)_T37;if(_T2E!=_T38)goto _TL17B;else{goto _TL17C;}_TL17C: _T39= Cyc_froms;_T3A= j;_T3B= _check_fat_subscript(_T39,sizeof(struct _fat_ptr),_T3A);_T3C= (struct _fat_ptr*)_T3B;_T3D= *_T3C;_T3E= k;_T3F= _check_fat_subscript(_T3D,sizeof(short),_T3E);_T40= (short*)_T3F;_T41= *_T40;_T42= (int)_T41;_T43= Cyc_froms;_T44= i;_T45= _check_fat_subscript(_T43,sizeof(struct _fat_ptr),_T44);_T46= (struct _fat_ptr*)_T45;_T47= *_T46;_T48= k;_T49= _check_fat_subscript(_T47,sizeof(short),_T48);_T4A= (short*)_T49;_T4B= *_T4A;_T4C= (int)_T4B;if(_T42!=_T4C)goto _TL17B;else{goto _TL179;}
_TL17B: match= 0;goto _TL17A;_TL179: _TL17A:
# 1156
 k= k + 1;goto _TL177;_TL176: _T4D= match;
# 1162
if(!_T4D)goto _TL17D;_T4E= j;
return _T4E;_TL17D:
# 1149
 prev= prev + -1;goto _TL16F;_TL16E: _T4F= - 1;
# 1166
return _T4F;}
# 1171
int Cyc_pack_vector(int vector){struct _fat_ptr _T0;int _T1;unsigned char*_T2;short*_T3;short _T4;struct _fat_ptr _T5;int _T6;unsigned char*_T7;short*_T8;short _T9;struct _fat_ptr _TA;struct _fat_ptr _TB;int _TC;unsigned char*_TD;struct _fat_ptr*_TE;struct _fat_ptr _TF;int _T10;unsigned char*_T11;struct _fat_ptr*_T12;int _T13;struct _fat_ptr _T14;unsigned char*_T15;short*_T16;short _T17;int _T18;int _T19;int _T1A;struct _fat_ptr _T1B;int _T1C;unsigned char*_T1D;short*_T1E;short _T1F;int _T20;struct _fat_ptr _T21;struct _fat_ptr _T22;struct _fat_ptr _T23;int _T24;unsigned char*_T25;short*_T26;short _T27;int _T28;int _T29;struct _fat_ptr _T2A;int _T2B;unsigned char*_T2C;short*_T2D;short _T2E;int _T2F;int _T30;int _T31;int _T32;struct _fat_ptr _T33;int _T34;unsigned char*_T35;short*_T36;short _T37;int _T38;struct _fat_ptr _T39;int _T3A;unsigned char*_T3B;short*_T3C;struct _fat_ptr _T3D;int _T3E;unsigned char*_T3F;short*_T40;struct _fat_ptr _T41;int _T42;unsigned char*_T43;short*_T44;struct _fat_ptr _T45;unsigned char*_T46;short*_T47;int _T48;struct _fat_ptr _T49;int _T4A;unsigned char*_T4B;short*_T4C;short _T4D;int _T4E;int _T4F;struct _fat_ptr _T50;
# 1173
register int i;
register int j;
register int k;
register int t;
register int loc=0;
register int ok;
struct _fat_ptr from;
struct _fat_ptr to;_T0= Cyc_order;_T1= vector;_T2= _check_fat_subscript(_T0,sizeof(short),_T1);_T3= (short*)_T2;_T4= *_T3;
# 1182
i= (int)_T4;_T5= Cyc_tally;_T6= i;_T7= _check_fat_subscript(_T5,sizeof(short),_T6);_T8= (short*)_T7;_T9= *_T8;
t= (int)_T9;
# 1185
if(t!=0)goto _TL17F;_TA= 
_tag_fat("pack_vector",sizeof(char),12U);Cyc_berror(_TA);goto _TL180;_TL17F: _TL180: _TB= Cyc_froms;_TC= i;_TD= _check_fat_subscript(_TB,sizeof(struct _fat_ptr),_TC);_TE= (struct _fat_ptr*)_TD;
# 1188
from= *_TE;_TF= Cyc_tos;_T10= i;_T11= _check_fat_subscript(_TF,sizeof(struct _fat_ptr),_T10);_T12= (struct _fat_ptr*)_T11;
to= *_T12;_T13= Cyc_lowzero;_T14= from;_T15= _check_fat_subscript(_T14,sizeof(short),0);_T16= (short*)_T15;_T17= *_T16;_T18= (int)_T17;
# 1191
j= _T13 - _T18;_TL184: if(j < 32767)goto _TL182;else{goto _TL183;}
# 1193
_TL182: ok= 1;
# 1195
k= 0;_TL188: _T19= ok;if(_T19)goto _TL189;else{goto _TL187;}_TL189: if(k < t)goto _TL186;else{goto _TL187;}
# 1197
_TL186: _T1A= j;_T1B= from;_T1C= k;_T1D= _check_fat_subscript(_T1B,sizeof(short),_T1C);_T1E= (short*)_T1D;_T1F= *_T1E;_T20= (int)_T1F;loc= _T1A + _T20;
if(loc <= 32767)goto _TL18A;_T21= 
_tag_fat("maximum table size (%s) exceeded",sizeof(char),33U);_T22= Cyc_int_to_string(32767);Cyc_fatals(_T21,_T22);goto _TL18B;_TL18A: _TL18B: _T23= Cyc_table;_T24= loc;_T25= _check_fat_subscript(_T23,sizeof(short),_T24);_T26= (short*)_T25;_T27= *_T26;_T28= (int)_T27;
# 1201
if(_T28==0)goto _TL18C;
ok= 0;goto _TL18D;_TL18C: _TL18D:
# 1195
 k= k + 1;goto _TL188;_TL187:
# 1205
 k= 0;_TL191: _T29= ok;if(_T29)goto _TL192;else{goto _TL190;}_TL192: if(k < vector)goto _TL18F;else{goto _TL190;}
# 1207
_TL18F: _T2A= Cyc_pos;_T2B= k;_T2C= _check_fat_subscript(_T2A,sizeof(short),_T2B);_T2D= (short*)_T2C;_T2E= *_T2D;_T2F= (int)_T2E;_T30= j;if(_T2F!=_T30)goto _TL193;
ok= 0;goto _TL194;_TL193: _TL194:
# 1205
 k= k + 1;goto _TL191;_TL190: _T31= ok;
# 1211
if(!_T31)goto _TL195;
# 1213
k= 0;_TL19A: if(k < t)goto _TL198;else{goto _TL199;}
# 1215
_TL198: _T32= j;_T33= from;_T34= k;_T35= _check_fat_subscript(_T33,sizeof(short),_T34);_T36= (short*)_T35;_T37= *_T36;_T38= (int)_T37;loc= _T32 + _T38;_T39= Cyc_table;_T3A= loc;_T3B= _check_fat_subscript(_T39,sizeof(short),_T3A);_T3C= (short*)_T3B;_T3D= to;_T3E= k;_T3F= _check_fat_subscript(_T3D,sizeof(short),_T3E);_T40= (short*)_T3F;
*_T3C= *_T40;_T41= Cyc_check;_T42= loc;_T43= _check_fat_subscript(_T41,sizeof(short),_T42);_T44= (short*)_T43;_T45= from;_T46= _T45.curr;_T47= (short*)_T46;_T48= k;
*_T44= _T47[_T48];
# 1213
k= k + 1;goto _TL19A;_TL199:
# 1220
 _TL19B: _T49= Cyc_table;_T4A= Cyc_lowzero;_T4B= _check_fat_subscript(_T49,sizeof(short),_T4A);_T4C= (short*)_T4B;_T4D= *_T4C;_T4E= (int)_T4D;if(_T4E!=0)goto _TL19C;else{goto _TL19D;}
_TL19C: Cyc_lowzero= Cyc_lowzero + 1;goto _TL19B;_TL19D:
# 1223
 if(loc <= Cyc_high)goto _TL19E;
Cyc_high= loc;goto _TL19F;_TL19E: _TL19F: _T4F= j;
# 1226
return _T4F;_TL195:
# 1191
 j= j + 1;goto _TL184;_TL183: _T50= 
# 1230
_tag_fat("pack_vector",sizeof(char),12U);Cyc_berror(_T50);
return 0;}
# 1239
void Cyc_output_base (void){struct Cyc_Int_pa_PrintArg_struct _T0;struct _fat_ptr _T1;unsigned char*_T2;short*_T3;short _T4;int _T5;struct Cyc___cycFILE*_T6;struct _fat_ptr _T7;struct _fat_ptr _T8;struct Cyc___cycFILE*_T9;struct Cyc___cycFILE*_TA;struct Cyc_Int_pa_PrintArg_struct _TB;struct _fat_ptr _TC;int _TD;unsigned char*_TE;short*_TF;short _T10;int _T11;struct Cyc___cycFILE*_T12;struct _fat_ptr _T13;struct _fat_ptr _T14;struct Cyc_Int_pa_PrintArg_struct _T15;struct _fat_ptr _T16;int _T17;unsigned char*_T18;short*_T19;short _T1A;int _T1B;struct Cyc___cycFILE*_T1C;struct _fat_ptr _T1D;struct _fat_ptr _T1E;struct Cyc___cycFILE*_T1F;struct Cyc___cycFILE*_T20;struct Cyc_Int_pa_PrintArg_struct _T21;struct _fat_ptr _T22;int _T23;unsigned char*_T24;short*_T25;short _T26;int _T27;struct Cyc___cycFILE*_T28;struct _fat_ptr _T29;struct _fat_ptr _T2A;struct Cyc___cycFILE*_T2B;struct _fat_ptr _T2C;struct _fat_ptr _T2D;
# 1242
register int i;
register int j;{struct Cyc_Int_pa_PrintArg_struct _T2E;_T2E.tag= 1;_T1= Cyc_base;_T2= _check_fat_subscript(_T1,sizeof(short),0);_T3= (short*)_T2;_T4= *_T3;_T5= (int)_T4;
# 1245
_T2E.f1= (unsigned long)_T5;_T0= _T2E;}{struct Cyc_Int_pa_PrintArg_struct _T2E=_T0;void*_T2F[1];_T2F[0]= & _T2E;_T6= _check_null(Cyc_ftable);_T7= _tag_fat("\nstatic short yypact[] = {%6d",sizeof(char),30U);_T8= _tag_fat(_T2F,sizeof(void*),1);Cyc_fprintf(_T6,_T7,_T8);}
# 1247
j= 10;
i= 1;_TL1A3: if(i < Cyc_nstates)goto _TL1A1;else{goto _TL1A2;}
# 1250
_TL1A1: _T9= _check_null(Cyc_ftable);Cyc_putc(44,_T9);
# 1252
if(j < 10)goto _TL1A4;_TA= 
# 1254
_check_null(Cyc_ftable);Cyc_putc(10,_TA);
j= 1;goto _TL1A5;
# 1259
_TL1A4: j= j + 1;_TL1A5:{struct Cyc_Int_pa_PrintArg_struct _T2E;_T2E.tag= 1;_TC= Cyc_base;_TD= i;_TE= _check_fat_subscript(_TC,sizeof(short),_TD);_TF= (short*)_TE;_T10= *_TF;_T11= (int)_T10;
# 1262
_T2E.f1= (unsigned long)_T11;_TB= _T2E;}{struct Cyc_Int_pa_PrintArg_struct _T2E=_TB;void*_T2F[1];_T2F[0]= & _T2E;_T12= _check_null(Cyc_ftable);_T13= _tag_fat("%6d",sizeof(char),4U);_T14= _tag_fat(_T2F,sizeof(void*),1);Cyc_fprintf(_T12,_T13,_T14);}
# 1248
i= i + 1;goto _TL1A3;_TL1A2:{struct Cyc_Int_pa_PrintArg_struct _T2E;_T2E.tag= 1;_T16= Cyc_base;_T17= Cyc_nstates;_T18= _check_fat_subscript(_T16,sizeof(short),_T17);_T19= (short*)_T18;_T1A= *_T19;_T1B= (int)_T1A;
# 1265
_T2E.f1= (unsigned long)_T1B;_T15= _T2E;}{struct Cyc_Int_pa_PrintArg_struct _T2E=_T15;void*_T2F[1];_T2F[0]= & _T2E;_T1C= _check_null(Cyc_ftable);_T1D= _tag_fat("\n};\n\nstatic short yypgoto[] = {%6d",sizeof(char),35U);_T1E= _tag_fat(_T2F,sizeof(void*),1);Cyc_fprintf(_T1C,_T1D,_T1E);}
# 1267
j= 10;
i= Cyc_nstates + 1;_TL1A9: if(i < Cyc_nvectors)goto _TL1A7;else{goto _TL1A8;}
# 1270
_TL1A7: _T1F= _check_null(Cyc_ftable);Cyc_putc(44,_T1F);
# 1272
if(j < 10)goto _TL1AA;_T20= 
# 1274
_check_null(Cyc_ftable);Cyc_putc(10,_T20);
j= 1;goto _TL1AB;
# 1279
_TL1AA: j= j + 1;_TL1AB:{struct Cyc_Int_pa_PrintArg_struct _T2E;_T2E.tag= 1;_T22= Cyc_base;_T23= i;_T24= _check_fat_subscript(_T22,sizeof(short),_T23);_T25= (short*)_T24;_T26= *_T25;_T27= (int)_T26;
# 1282
_T2E.f1= (unsigned long)_T27;_T21= _T2E;}{struct Cyc_Int_pa_PrintArg_struct _T2E=_T21;void*_T2F[1];_T2F[0]= & _T2E;_T28= _check_null(Cyc_ftable);_T29= _tag_fat("%6d",sizeof(char),4U);_T2A= _tag_fat(_T2F,sizeof(void*),1);Cyc_fprintf(_T28,_T29,_T2A);}
# 1268
i= i + 1;goto _TL1A9;_TL1A8: _T2B= 
# 1285
_check_null(Cyc_ftable);_T2C= _tag_fat("\n};\n",sizeof(char),5U);_T2D= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T2B,_T2C,_T2D);
Cyc_base= _tag_fat(0,0,0);}
# 1290
void Cyc_output_table (void){struct Cyc_Int_pa_PrintArg_struct _T0;int _T1;struct Cyc___cycFILE*_T2;struct _fat_ptr _T3;struct _fat_ptr _T4;struct Cyc_Int_pa_PrintArg_struct _T5;struct _fat_ptr _T6;unsigned char*_T7;short*_T8;short _T9;int _TA;struct Cyc___cycFILE*_TB;struct _fat_ptr _TC;struct _fat_ptr _TD;struct Cyc___cycFILE*_TE;struct Cyc___cycFILE*_TF;struct Cyc_Int_pa_PrintArg_struct _T10;struct _fat_ptr _T11;int _T12;unsigned char*_T13;short*_T14;short _T15;int _T16;struct Cyc___cycFILE*_T17;struct _fat_ptr _T18;struct _fat_ptr _T19;struct Cyc___cycFILE*_T1A;struct _fat_ptr _T1B;struct _fat_ptr _T1C;
# 1293
register int i;
register int j;{struct Cyc_Int_pa_PrintArg_struct _T1D;_T1D.tag= 1;_T1= Cyc_high;
# 1296
_T1D.f1= (unsigned long)_T1;_T0= _T1D;}{struct Cyc_Int_pa_PrintArg_struct _T1D=_T0;void*_T1E[1];_T1E[0]= & _T1D;_T2= _check_null(Cyc_ftable);_T3= _tag_fat("\n\n#define\tYYLAST\t\t%d\n\n",sizeof(char),23U);_T4= _tag_fat(_T1E,sizeof(void*),1);Cyc_fprintf(_T2,_T3,_T4);}{struct Cyc_Int_pa_PrintArg_struct _T1D;_T1D.tag= 1;_T6= Cyc_table;_T7= _check_fat_subscript(_T6,sizeof(short),0);_T8= (short*)_T7;_T9= *_T8;_TA= (int)_T9;
_T1D.f1= (unsigned long)_TA;_T5= _T1D;}{struct Cyc_Int_pa_PrintArg_struct _T1D=_T5;void*_T1E[1];_T1E[0]= & _T1D;_TB= _check_null(Cyc_ftable);_TC= _tag_fat("\nstatic short yytable[] = {%6d",sizeof(char),31U);_TD= _tag_fat(_T1E,sizeof(void*),1);Cyc_fprintf(_TB,_TC,_TD);}
# 1299
j= 10;
i= 1;_TL1AF: if(i <= Cyc_high)goto _TL1AD;else{goto _TL1AE;}
# 1302
_TL1AD: _TE= _check_null(Cyc_ftable);Cyc_putc(44,_TE);
# 1304
if(j < 10)goto _TL1B0;_TF= 
# 1306
_check_null(Cyc_ftable);Cyc_putc(10,_TF);
j= 1;goto _TL1B1;
# 1311
_TL1B0: j= j + 1;_TL1B1:{struct Cyc_Int_pa_PrintArg_struct _T1D;_T1D.tag= 1;_T11= Cyc_table;_T12= i;_T13= _check_fat_subscript(_T11,sizeof(short),_T12);_T14= (short*)_T13;_T15= *_T14;_T16= (int)_T15;
# 1314
_T1D.f1= (unsigned long)_T16;_T10= _T1D;}{struct Cyc_Int_pa_PrintArg_struct _T1D=_T10;void*_T1E[1];_T1E[0]= & _T1D;_T17= _check_null(Cyc_ftable);_T18= _tag_fat("%6d",sizeof(char),4U);_T19= _tag_fat(_T1E,sizeof(void*),1);Cyc_fprintf(_T17,_T18,_T19);}
# 1300
i= i + 1;goto _TL1AF;_TL1AE: _T1A= 
# 1317
_check_null(Cyc_ftable);_T1B= _tag_fat("\n};\n",sizeof(char),5U);_T1C= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T1A,_T1B,_T1C);
Cyc_table= _tag_fat(0,0,0);}
# 1322
void Cyc_output_check (void){struct Cyc_Int_pa_PrintArg_struct _T0;struct _fat_ptr _T1;unsigned char*_T2;short*_T3;short _T4;int _T5;struct Cyc___cycFILE*_T6;struct _fat_ptr _T7;struct _fat_ptr _T8;struct Cyc___cycFILE*_T9;struct Cyc___cycFILE*_TA;struct Cyc_Int_pa_PrintArg_struct _TB;struct _fat_ptr _TC;int _TD;unsigned char*_TE;short*_TF;short _T10;int _T11;struct Cyc___cycFILE*_T12;struct _fat_ptr _T13;struct _fat_ptr _T14;struct Cyc___cycFILE*_T15;struct _fat_ptr _T16;struct _fat_ptr _T17;
# 1325
register int i;
register int j;{struct Cyc_Int_pa_PrintArg_struct _T18;_T18.tag= 1;_T1= Cyc_check;_T2= _check_fat_subscript(_T1,sizeof(short),0);_T3= (short*)_T2;_T4= *_T3;_T5= (int)_T4;
# 1328
_T18.f1= (unsigned long)_T5;_T0= _T18;}{struct Cyc_Int_pa_PrintArg_struct _T18=_T0;void*_T19[1];_T19[0]= & _T18;_T6= _check_null(Cyc_ftable);_T7= _tag_fat("\nstatic short yycheck[] = {%6d",sizeof(char),31U);_T8= _tag_fat(_T19,sizeof(void*),1);Cyc_fprintf(_T6,_T7,_T8);}
# 1330
j= 10;
i= 1;_TL1B5: if(i <= Cyc_high)goto _TL1B3;else{goto _TL1B4;}
# 1333
_TL1B3: _T9= _check_null(Cyc_ftable);Cyc_putc(44,_T9);
# 1335
if(j < 10)goto _TL1B6;_TA= 
# 1337
_check_null(Cyc_ftable);Cyc_putc(10,_TA);
j= 1;goto _TL1B7;
# 1342
_TL1B6: j= j + 1;_TL1B7:{struct Cyc_Int_pa_PrintArg_struct _T18;_T18.tag= 1;_TC= Cyc_check;_TD= i;_TE= _check_fat_subscript(_TC,sizeof(short),_TD);_TF= (short*)_TE;_T10= *_TF;_T11= (int)_T10;
# 1345
_T18.f1= (unsigned long)_T11;_TB= _T18;}{struct Cyc_Int_pa_PrintArg_struct _T18=_TB;void*_T19[1];_T19[0]= & _T18;_T12= _check_null(Cyc_ftable);_T13= _tag_fat("%6d",sizeof(char),4U);_T14= _tag_fat(_T19,sizeof(void*),1);Cyc_fprintf(_T12,_T13,_T14);}
# 1331
i= i + 1;goto _TL1B5;_TL1B4: _T15= 
# 1348
_check_null(Cyc_ftable);_T16= _tag_fat("\n};\n",sizeof(char),5U);_T17= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T15,_T16,_T17);
Cyc_check= _tag_fat(0,0,0);}
# 1356
extern struct _fat_ptr Cyc_cycbison_simple;
# 1358
void Cyc_output_parser (void){struct _fat_ptr _T0;int _T1;struct Cyc___cycFILE*_T2;struct _fat_ptr _T3;struct _fat_ptr _T4;int _T5;unsigned _T6;struct _fat_ptr _T7;unsigned _T8;int _T9;unsigned char*_TA;const char*_TB;char _TC;int _TD;struct _fat_ptr _TE;unsigned _TF;int _T10;unsigned char*_T11;const char*_T12;char _T13;int _T14;struct _fat_ptr _T15;unsigned _T16;int _T17;unsigned char*_T18;const char*_T19;char _T1A;int _T1B;struct _fat_ptr _T1C;unsigned _T1D;int _T1E;unsigned char*_T1F;const char*_T20;char _T21;int _T22;struct _fat_ptr _T23;unsigned _T24;int _T25;unsigned char*_T26;const char*_T27;char _T28;int _T29;struct _fat_ptr _T2A;unsigned _T2B;int _T2C;unsigned char*_T2D;const char*_T2E;char _T2F;int _T30;struct Cyc___cycFILE*_T31;int _T32;struct Cyc___cycFILE*_T33;struct Cyc___cycFILE*_T34;int _T35;int _T36;int _T37;struct Cyc___cycFILE*_T38;struct Cyc___cycFILE*_T39;int _T3A;struct Cyc___cycFILE*_T3B;
# 1361
register int c;
# 1363
unsigned i=0U;_T0= Cyc_cycbison_simple;{
unsigned len=_get_fat_size(_T0,sizeof(char));_T1= Cyc_pure_parser;
# 1366
if(!_T1)goto _TL1B8;_T2= 
_check_null(Cyc_ftable);_T3= _tag_fat("#define YYPURE 1\n\n",sizeof(char),19U);_T4= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T2,_T3,_T4);goto _TL1B9;_TL1B8: _TL1B9:
# 1371
 _TL1BA: if(i < len)goto _TL1BB;else{goto _TL1BC;}
# 1373
_TL1BB:{int write_line=1;_T5= Cyc_nolinesflag;
# 1377
if(!_T5)goto _TL1BD;_T6= len - i;if(_T6 < 5U)goto _TL1BD;_T7= Cyc_cycbison_simple;_T8= i + 0U;_T9= (int)_T8;_TA= _check_fat_subscript(_T7,sizeof(char),_T9);_TB= (const char*)_TA;_TC= *_TB;_TD= (int)_TC;
if(_TD!=35)goto _TL1BF;_TE= Cyc_cycbison_simple;_TF= i + 1U;_T10= (int)_TF;_T11= _check_fat_subscript(_TE,sizeof(char),_T10);_T12= (const char*)_T11;_T13= *_T12;_T14= (int)_T13;if(_T14!=108)goto _TL1BF;_T15= Cyc_cycbison_simple;_T16= i + 2U;_T17= (int)_T16;_T18= _check_fat_subscript(_T15,sizeof(char),_T17);_T19= (const char*)_T18;_T1A= *_T19;_T1B= (int)_T1A;if(_T1B!=105)goto _TL1BF;_T1C= Cyc_cycbison_simple;_T1D= i + 3U;_T1E= (int)_T1D;_T1F= _check_fat_subscript(_T1C,sizeof(char),_T1E);_T20= (const char*)_T1F;_T21= *_T20;_T22= (int)_T21;if(_T22!=110)goto _TL1BF;_T23= Cyc_cycbison_simple;_T24= i + 4U;_T25= (int)_T24;_T26= _check_fat_subscript(_T23,sizeof(char),_T25);_T27= (const char*)_T26;_T28= *_T27;_T29= (int)_T28;if(_T29!=101)goto _TL1BF;
# 1383
write_line= 0;goto _TL1C0;_TL1BF: _TL1C0: goto _TL1BE;_TL1BD: _TL1BE:
# 1387
 _TL1C4: if(i < len)goto _TL1C2;else{goto _TL1C3;}
_TL1C2: _T2A= Cyc_cycbison_simple;_T2B= i;_T2C= (int)_T2B;_T2D= _check_fat_subscript(_T2A,sizeof(char),_T2C);_T2E= (const char*)_T2D;_T2F= *_T2E;c= (int)_T2F;
if(c!=0)goto _TL1C5;goto _TL1C3;_TL1C5:
 if(c!=10)goto _TL1C7;_T30= c;_T31= 
_check_null(Cyc_ftable);Cyc_putc(_T30,_T31);
i= i + 1;goto _TL1C3;_TL1C7: _T32= write_line;
# 1395
if(!_T32)goto _TL1C9;
if(c!=36)goto _TL1CB;_T33= 
# 1400
_check_null(Cyc_faction);Cyc_rewind(_T33);_T34= 
_check_null(Cyc_faction);c= Cyc_getc(_T34);_TL1D0: _T35= c;_T36= - 1;if(_T35!=_T36)goto _TL1CE;else{goto _TL1CF;}
_TL1CE: _T37= c;_T38= _check_null(Cyc_ftable);Cyc_putc(_T37,_T38);_T39= 
# 1401
_check_null(Cyc_faction);c= Cyc_getc(_T39);goto _TL1D0;_TL1CF: goto _TL1CC;
# 1405
_TL1CB: _T3A= c;_T3B= _check_null(Cyc_ftable);Cyc_putc(_T3A,_T3B);_TL1CC: goto _TL1CA;_TL1C9: _TL1CA:
# 1387
 i= i + 1;goto _TL1C4;_TL1C3:
# 1407
 if(c!=0)goto _TL1D1;goto _TL1BC;_TL1D1:;}goto _TL1BA;_TL1BC:;}}
# 1411
void Cyc_output_program (void){int _T0;struct Cyc_Int_pa_PrintArg_struct _T1;int _T2;struct Cyc_String_pa_PrintArg_struct _T3;struct Cyc___cycFILE*_T4;struct _fat_ptr _T5;struct _fat_ptr _T6;struct Cyc___cycFILE*_T7;int _T8;int _T9;int _TA;struct Cyc___cycFILE*_TB;struct Cyc___cycFILE*_TC;
# 1414
register int c;_T0= Cyc_nolinesflag;
# 1417
if(_T0)goto _TL1D3;else{goto _TL1D5;}
_TL1D5:{struct Cyc_Int_pa_PrintArg_struct _TD;_TD.tag= 1;_T2= Cyc_lineno;_TD.f1= (unsigned long)_T2;_T1= _TD;}{struct Cyc_Int_pa_PrintArg_struct _TD=_T1;{struct Cyc_String_pa_PrintArg_struct _TE;_TE.tag= 0;_TE.f1= Cyc_infile;_T3= _TE;}{struct Cyc_String_pa_PrintArg_struct _TE=_T3;void*_TF[2];_TF[0]= & _TD;_TF[1]= & _TE;_T4= _check_null(Cyc_ftable);_T5= _tag_fat("#line %d \"%s\"\n",sizeof(char),15U);_T6= _tag_fat(_TF,sizeof(void*),2);Cyc_fprintf(_T4,_T5,_T6);}}goto _TL1D4;_TL1D3: _TL1D4: _T7= 
# 1420
_check_null(Cyc_finput);c= Cyc_getc(_T7);
_TL1D6: _T8= c;_T9= - 1;if(_T8!=_T9)goto _TL1D7;else{goto _TL1D8;}
# 1423
_TL1D7: _TA= c;_TB= _check_null(Cyc_ftable);Cyc_putc(_TA,_TB);_TC= 
_check_null(Cyc_finput);c= Cyc_getc(_TC);goto _TL1D6;_TL1D8:;}
# 1429
void Cyc_free_itemsets (void){struct Cyc_core_tag*_T0;unsigned _T1;struct Cyc_core_tag*_T2;
# 1432
register struct Cyc_core_tag*cp;register struct Cyc_core_tag*cptmp;
# 1434
Cyc_state_table= _tag_fat(0,0,0);
# 1436
cp= Cyc_first_state;_TL1DC: _T0= cp;_T1= (unsigned)_T0;if(_T1)goto _TL1DA;else{goto _TL1DB;}
_TL1DA: _T2= cp;cptmp= _T2->next;
cp= 0;
# 1436
cp= cptmp;goto _TL1DC;_TL1DB:;}
# 1443
void Cyc_free_shifts (void){struct Cyc_shifts_tag*_T0;unsigned _T1;struct Cyc_shifts_tag*_T2;
# 1446
register struct Cyc_shifts_tag*sp;register struct Cyc_shifts_tag*sptmp;
# 1448
Cyc_shift_table= _tag_fat(0,0,0);
# 1450
sp= Cyc_first_shift;_TL1E0: _T0= sp;_T1= (unsigned)_T0;if(_T1)goto _TL1DE;else{goto _TL1DF;}
_TL1DE: _T2= sp;sptmp= _T2->next;
sp= 0;
# 1450
sp= sptmp;goto _TL1E0;_TL1DF:;}
# 1457
void Cyc_free_reductions (void){struct Cyc_reductions_tag*_T0;unsigned _T1;struct Cyc_reductions_tag*_T2;
# 1460
register struct Cyc_reductions_tag*rp;register struct Cyc_reductions_tag*rptmp;
# 1462
Cyc_reduction_table= _tag_fat(0,0,0);
# 1464
rp= Cyc_first_reduction;_TL1E4: _T0= rp;_T1= (unsigned)_T0;if(_T1)goto _TL1E2;else{goto _TL1E3;}
_TL1E2: _T2= rp;rptmp= _T2->next;
rp= 0;
# 1464
rp= rptmp;goto _TL1E4;_TL1E3:;}
