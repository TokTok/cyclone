#include <cyc_include.h>
 struct Cyc___cycFILE;struct Cyc_String_pa_PrintArg_struct{int tag;struct _fat_ptr f1;};struct Cyc_Int_pa_PrintArg_struct{int tag;unsigned long f1;};
# 127 "bazel-out/k8-fastbuild/bin/cyclone/library/std/libc/stdio.h"
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
# 161
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 167
extern int Cyc_fputs(const char*,struct Cyc___cycFILE*);
# 239
extern int Cyc_putc(int,struct Cyc___cycFILE*);struct Cyc___cycFILE;
# 75 "./cyclone/library/std/cycboot.h"
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
# 100
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 106
extern int Cyc_fputs(const char*,struct Cyc___cycFILE*);
# 161
extern int Cyc_putc(int,struct Cyc___cycFILE*);
# 40 "./cyclone/library/std/string.h"
extern unsigned long Cyc_strlen(struct _fat_ptr);
# 64
extern struct _fat_ptr Cyc_strconcat(struct _fat_ptr,struct _fat_ptr);
# 107
extern struct _fat_ptr Cyc_strdup(struct _fat_ptr);
# 28 "cyclone/tools/bison/files.h"
extern struct Cyc___cycFILE*Cyc_foutput;
# 77 "cyclone/tools/bison/gram.h"
extern int Cyc_nrules;
extern int Cyc_nsyms;
extern int Cyc_ntokens;
# 82
extern struct _fat_ptr Cyc_ritem;
extern struct _fat_ptr Cyc_rlhs;
extern struct _fat_ptr Cyc_rrhs;
# 109
extern struct _fat_ptr Cyc_token_translations;
extern int Cyc_translations;
extern int Cyc_max_user_token_number;struct Cyc_core_tag{struct Cyc_core_tag*next;struct Cyc_core_tag*link;short number;short accessing_symbol;short nitems;struct _fat_ptr items;};struct Cyc_shifts_tag{struct Cyc_shifts_tag*next;short number;short nshifts;struct _fat_ptr shifts;};struct Cyc_errs_tag{short nerrs;struct _fat_ptr errs;};struct Cyc_reductions_tag{struct Cyc_reductions_tag*next;short number;short nreds;struct _fat_ptr rules;};
# 135 "cyclone/tools/bison/state.h"
extern int Cyc_nstates;
# 31 "cyclone/tools/bison/print.cyc"
extern struct _fat_ptr Cyc_tags;
extern int Cyc_nstates;
extern struct _fat_ptr Cyc_accessing_symbol;
extern struct _fat_ptr Cyc_state_table;
extern struct _fat_ptr Cyc_shift_table;
extern struct _fat_ptr Cyc_err_table;
extern struct _fat_ptr Cyc_reduction_table;
extern struct _fat_ptr Cyc_consistent;
extern char Cyc_any_conflicts;
# 41
extern int Cyc_final_state;
# 43
extern void Cyc_conflict_log (void);
extern void Cyc_verbose_conflict_log (void);
extern void Cyc_print_reductions(int);
# 48
void Cyc_print_state(int);
void Cyc_print_core(int);
void Cyc_print_actions(int);
void Cyc_print_grammar (void);
# 53
void Cyc_terse (void){char _T0;int _T1;_T0= Cyc_any_conflicts;_T1= (int)_T0;
# 55
if(!_T1)goto _TL0;
# 57
Cyc_conflict_log();goto _TL1;_TL0: _TL1:;}
# 62
void Cyc_verbose (void){char _T0;int _T1;
# 65
register int i;_T0= Cyc_any_conflicts;_T1= (int)_T0;
# 67
if(!_T1)goto _TL2;
Cyc_verbose_conflict_log();goto _TL3;_TL2: _TL3:
# 70
 Cyc_print_grammar();
# 72
i= 0;_TL7: if(i < Cyc_nstates)goto _TL5;else{goto _TL6;}
# 74
_TL5: Cyc_print_state(i);
# 72
i= i + 1;goto _TL7;_TL6:;}
# 79
void Cyc_print_token(int extnum,int token){struct Cyc_Int_pa_PrintArg_struct _T0;int _T1;struct Cyc_String_pa_PrintArg_struct _T2;struct _fat_ptr _T3;int _T4;unsigned char*_T5;struct _fat_ptr*_T6;struct _fat_ptr _T7;struct Cyc___cycFILE*_T8;struct _fat_ptr _T9;struct _fat_ptr _TA;{struct Cyc_Int_pa_PrintArg_struct _TB;_TB.tag= 1;_T1= extnum;
# 83
_TB.f1= (unsigned long)_T1;_T0= _TB;}{struct Cyc_Int_pa_PrintArg_struct _TB=_T0;{struct Cyc_String_pa_PrintArg_struct _TC;_TC.tag= 0;_T3= Cyc_tags;_T4= token;_T5= _check_fat_subscript(_T3,sizeof(struct _fat_ptr),_T4);_T6= (struct _fat_ptr*)_T5;_T7= *_T6;_TC.f1= _T7;_T2= _TC;}{struct Cyc_String_pa_PrintArg_struct _TC=_T2;void*_TD[2];_TD[0]= & _TB;_TD[1]= & _TC;_T8= _check_null(Cyc_foutput);_T9= _tag_fat(" type %d is %s\n",sizeof(char),16U);_TA= _tag_fat(_TD,sizeof(void*),2);Cyc_fprintf(_T8,_T9,_TA);}}}
# 87
void Cyc_print_state(int state){struct Cyc_Int_pa_PrintArg_struct _T0;int _T1;struct Cyc___cycFILE*_T2;struct _fat_ptr _T3;struct _fat_ptr _T4;{struct Cyc_Int_pa_PrintArg_struct _T5;_T5.tag= 1;_T1= state;
# 91
_T5.f1= (unsigned long)_T1;_T0= _T5;}{struct Cyc_Int_pa_PrintArg_struct _T5=_T0;void*_T6[1];_T6[0]= & _T5;_T2= _check_null(Cyc_foutput);_T3= _tag_fat("\n\nstate %d\n\n",sizeof(char),13U);_T4= _tag_fat(_T6,sizeof(void*),1);Cyc_fprintf(_T2,_T3,_T4);}
Cyc_print_core(state);
Cyc_print_actions(state);}
# 97
void Cyc_print_core(int state){struct _fat_ptr _T0;int _T1;unsigned char*_T2;struct Cyc_core_tag**_T3;struct Cyc_core_tag*_T4;struct Cyc_core_tag*_T5;short _T6;struct _fat_ptr _T7;struct Cyc_core_tag*_T8;struct _fat_ptr _T9;int _TA;unsigned char*_TB;short*_TC;short _TD;int _TE;struct _fat_ptr _TF;unsigned char*_T10;short*_T11;short _T12;int _T13;struct _fat_ptr*_T14;struct _fat_ptr _T15;unsigned char*_T16;short*_T17;short _T18;short _T19;struct Cyc_String_pa_PrintArg_struct _T1A;struct _fat_ptr _T1B;struct _fat_ptr _T1C;int _T1D;unsigned char*_T1E;short*_T1F;short _T20;int _T21;unsigned char*_T22;struct _fat_ptr*_T23;struct _fat_ptr _T24;struct Cyc___cycFILE*_T25;struct _fat_ptr _T26;struct _fat_ptr _T27;struct _fat_ptr _T28;struct _fat_ptr _T29;int _T2A;unsigned char*_T2B;short*_T2C;short _T2D;int _T2E;struct _fat_ptr _T2F;unsigned char*_T30;short*_T31;struct _fat_ptr _T32;unsigned char*_T33;short*_T34;struct Cyc_String_pa_PrintArg_struct _T35;struct _fat_ptr _T36;struct _fat_ptr _T37;unsigned char*_T38;short*_T39;short _T3A;int _T3B;unsigned char*_T3C;struct _fat_ptr*_T3D;struct _fat_ptr _T3E;struct Cyc___cycFILE*_T3F;struct _fat_ptr _T40;struct _fat_ptr _T41;struct _fat_ptr*_T42;struct Cyc___cycFILE*_T43;struct _fat_ptr _T44;unsigned char*_T45;short*_T46;short _T47;int _T48;struct Cyc_String_pa_PrintArg_struct _T49;struct _fat_ptr _T4A;struct _fat_ptr _T4B;unsigned char*_T4C;short*_T4D;short _T4E;int _T4F;unsigned char*_T50;struct _fat_ptr*_T51;struct _fat_ptr _T52;struct Cyc___cycFILE*_T53;struct _fat_ptr _T54;struct _fat_ptr _T55;struct _fat_ptr*_T56;struct Cyc_Int_pa_PrintArg_struct _T57;int _T58;struct Cyc___cycFILE*_T59;struct _fat_ptr _T5A;struct _fat_ptr _T5B;struct Cyc___cycFILE*_T5C;struct Cyc___cycFILE*_T5D;
# 101
register int i;
register int k;
register int rule;
register struct Cyc_core_tag*statep;
struct _fat_ptr sp;
struct _fat_ptr sp1;_T0= Cyc_state_table;_T1= state;_T2= _check_fat_subscript(_T0,sizeof(struct Cyc_core_tag*),_T1);_T3= (struct Cyc_core_tag**)_T2;_T4= *_T3;
# 108
statep= _check_null(_T4);_T5= statep;_T6= _T5->nitems;
k= (int)_T6;
# 111
if(k!=0)goto _TL8;return;_TL8:
# 113
 i= 0;_TLD: if(i < k)goto _TLB;else{goto _TLC;}
# 115
_TLB: _T7= Cyc_ritem;_T8= statep;_T9= _T8->items;_TA= i;_TB= _check_fat_subscript(_T9,sizeof(short),_TA);_TC= (short*)_TB;_TD= *_TC;_TE= (int)_TD;sp= _fat_ptr_plus(_T7,sizeof(short),_TE);sp1= sp;
# 117
_TLE: _TF= sp;_T10= _check_fat_subscript(_TF,sizeof(short),0U);_T11= (short*)_T10;_T12= *_T11;_T13= (int)_T12;if(_T13 > 0)goto _TLF;else{goto _TL10;}
_TLF: _T14= & sp;_fat_ptr_inplace_plus(_T14,sizeof(short),1);goto _TLE;_TL10: _T15= sp;_T16= _T15.curr;_T17= (short*)_T16;_T18= *_T17;_T19= - _T18;
# 120
rule= (int)_T19;{struct Cyc_String_pa_PrintArg_struct _T5E;_T5E.tag= 0;_T1B= Cyc_tags;_T1C= Cyc_rlhs;_T1D= rule;_T1E= _check_fat_subscript(_T1C,sizeof(short),_T1D);_T1F= (short*)_T1E;_T20= *_T1F;_T21= (int)_T20;_T22= _check_fat_subscript(_T1B,sizeof(struct _fat_ptr),_T21);_T23= (struct _fat_ptr*)_T22;_T24= *_T23;
_T5E.f1= _T24;_T1A= _T5E;}{struct Cyc_String_pa_PrintArg_struct _T5E=_T1A;void*_T5F[1];_T5F[0]= & _T5E;_T25= _check_null(Cyc_foutput);_T26= _tag_fat("    %s  ->  ",sizeof(char),13U);_T27= _tag_fat(_T5F,sizeof(void*),1);Cyc_fprintf(_T25,_T26,_T27);}_T28= Cyc_ritem;_T29= Cyc_rrhs;_T2A= rule;_T2B= _check_fat_subscript(_T29,sizeof(short),_T2A);_T2C= (short*)_T2B;_T2D= *_T2C;_T2E= (int)_T2D;
# 123
sp= _fat_ptr_plus(_T28,sizeof(short),_T2E);_TL14: _T2F= sp;_T30= _T2F.curr;_T31= (short*)_T30;_T32= sp1;_T33= _T32.curr;_T34= (short*)_T33;if(_T31 < _T34)goto _TL12;else{goto _TL13;}
# 125
_TL12:{struct Cyc_String_pa_PrintArg_struct _T5E;_T5E.tag= 0;_T36= Cyc_tags;_T37= sp;_T38= _check_fat_subscript(_T37,sizeof(short),0U);_T39= (short*)_T38;_T3A= *_T39;_T3B= (int)_T3A;_T3C= _check_fat_subscript(_T36,sizeof(struct _fat_ptr),_T3B);_T3D= (struct _fat_ptr*)_T3C;_T3E= *_T3D;_T5E.f1= _T3E;_T35= _T5E;}{struct Cyc_String_pa_PrintArg_struct _T5E=_T35;void*_T5F[1];_T5F[0]= & _T5E;_T3F= _check_null(Cyc_foutput);_T40= _tag_fat("%s ",sizeof(char),4U);_T41= _tag_fat(_T5F,sizeof(void*),1);Cyc_fprintf(_T3F,_T40,_T41);}_T42= & sp;
# 123
_fat_ptr_inplace_plus(_T42,sizeof(short),1);goto _TL14;_TL13: _T43= 
# 128
_check_null(Cyc_foutput);Cyc_putc(46,_T43);
# 130
_TL15: _T44= sp;_T45= _check_fat_subscript(_T44,sizeof(short),0U);_T46= (short*)_T45;_T47= *_T46;_T48= (int)_T47;if(_T48 > 0)goto _TL16;else{goto _TL17;}
# 132
_TL16:{struct Cyc_String_pa_PrintArg_struct _T5E;_T5E.tag= 0;_T4A= Cyc_tags;_T4B= sp;_T4C= _T4B.curr;_T4D= (short*)_T4C;_T4E= *_T4D;_T4F= (int)_T4E;_T50= _check_fat_subscript(_T4A,sizeof(struct _fat_ptr),_T4F);_T51= (struct _fat_ptr*)_T50;_T52= *_T51;_T5E.f1= _T52;_T49= _T5E;}{struct Cyc_String_pa_PrintArg_struct _T5E=_T49;void*_T5F[1];_T5F[0]= & _T5E;_T53= _check_null(Cyc_foutput);_T54= _tag_fat(" %s",sizeof(char),4U);_T55= _tag_fat(_T5F,sizeof(void*),1);Cyc_fprintf(_T53,_T54,_T55);}_T56= & sp;
_fat_ptr_inplace_plus(_T56,sizeof(short),1);goto _TL15;_TL17:{struct Cyc_Int_pa_PrintArg_struct _T5E;_T5E.tag= 1;_T58= rule;
# 136
_T5E.f1= (unsigned long)_T58;_T57= _T5E;}{struct Cyc_Int_pa_PrintArg_struct _T5E=_T57;void*_T5F[1];_T5F[0]= & _T5E;_T59= _check_null(Cyc_foutput);_T5A= _tag_fat("   (rule %d)",sizeof(char),13U);_T5B= _tag_fat(_T5F,sizeof(void*),1);Cyc_fprintf(_T59,_T5A,_T5B);}_T5C= 
_check_null(Cyc_foutput);Cyc_putc(10,_T5C);
# 113
i= i + 1;goto _TLD;_TLC: _T5D= 
# 140
_check_null(Cyc_foutput);Cyc_putc(10,_T5D);}
# 144
void Cyc_print_actions(int state){struct _fat_ptr _T0;int _T1;unsigned char*_T2;struct Cyc_shifts_tag**_T3;struct _fat_ptr _T4;int _T5;unsigned char*_T6;struct Cyc_reductions_tag**_T7;struct _fat_ptr _T8;int _T9;unsigned char*_TA;struct Cyc_errs_tag**_TB;struct Cyc_shifts_tag*_TC;unsigned _TD;struct Cyc_reductions_tag*_TE;unsigned _TF;struct Cyc___cycFILE*_T10;struct _fat_ptr _T11;struct _fat_ptr _T12;struct Cyc___cycFILE*_T13;struct _fat_ptr _T14;struct _fat_ptr _T15;struct Cyc_shifts_tag*_T16;unsigned _T17;struct Cyc_shifts_tag*_T18;short _T19;struct Cyc_shifts_tag*_T1A;struct _fat_ptr _T1B;int _T1C;unsigned char*_T1D;short*_T1E;short _T1F;int _T20;struct Cyc_shifts_tag*_T21;struct _fat_ptr _T22;unsigned char*_T23;short*_T24;int _T25;short _T26;struct _fat_ptr _T27;int _T28;unsigned char*_T29;short*_T2A;short _T2B;struct Cyc_Int_pa_PrintArg_struct _T2C;int _T2D;struct Cyc___cycFILE*_T2E;struct _fat_ptr _T2F;struct _fat_ptr _T30;struct Cyc_String_pa_PrintArg_struct _T31;struct _fat_ptr _T32;int _T33;unsigned char*_T34;struct _fat_ptr*_T35;struct _fat_ptr _T36;struct Cyc_Int_pa_PrintArg_struct _T37;int _T38;struct Cyc___cycFILE*_T39;struct _fat_ptr _T3A;struct _fat_ptr _T3B;struct Cyc___cycFILE*_T3C;struct Cyc_errs_tag*_T3D;unsigned _T3E;struct Cyc_errs_tag*_T3F;short _T40;struct Cyc_errs_tag*_T41;struct _fat_ptr _T42;int _T43;unsigned char*_T44;short*_T45;short _T46;int _T47;struct Cyc_errs_tag*_T48;struct _fat_ptr _T49;unsigned char*_T4A;short*_T4B;int _T4C;short _T4D;struct Cyc_String_pa_PrintArg_struct _T4E;struct _fat_ptr _T4F;int _T50;unsigned char*_T51;struct _fat_ptr*_T52;struct _fat_ptr _T53;struct Cyc___cycFILE*_T54;struct _fat_ptr _T55;struct _fat_ptr _T56;struct Cyc___cycFILE*_T57;struct _fat_ptr _T58;int _T59;unsigned char*_T5A;char*_T5B;char _T5C;int _T5D;struct Cyc_reductions_tag*_T5E;struct _fat_ptr _T5F;unsigned char*_T60;short*_T61;short _T62;struct _fat_ptr _T63;int _T64;unsigned char*_T65;short*_T66;short _T67;struct Cyc_Int_pa_PrintArg_struct _T68;int _T69;struct Cyc_String_pa_PrintArg_struct _T6A;struct _fat_ptr _T6B;int _T6C;unsigned char*_T6D;struct _fat_ptr*_T6E;struct _fat_ptr _T6F;struct Cyc___cycFILE*_T70;struct _fat_ptr _T71;struct _fat_ptr _T72;struct Cyc_reductions_tag*_T73;unsigned _T74;struct Cyc_shifts_tag*_T75;struct _fat_ptr _T76;int _T77;unsigned char*_T78;short*_T79;short _T7A;int _T7B;struct Cyc_shifts_tag*_T7C;struct _fat_ptr _T7D;unsigned char*_T7E;short*_T7F;int _T80;short _T81;struct _fat_ptr _T82;int _T83;unsigned char*_T84;short*_T85;short _T86;struct Cyc_String_pa_PrintArg_struct _T87;struct _fat_ptr _T88;int _T89;unsigned char*_T8A;struct _fat_ptr*_T8B;struct _fat_ptr _T8C;struct Cyc_Int_pa_PrintArg_struct _T8D;int _T8E;struct Cyc___cycFILE*_T8F;struct _fat_ptr _T90;struct _fat_ptr _T91;struct Cyc___cycFILE*_T92;
# 148
register int i;
register int k;
register int state1;
register int symbol;
register struct Cyc_shifts_tag*shiftp;
register struct Cyc_errs_tag*errp;
register struct Cyc_reductions_tag*redp;
register int rule;_T0= Cyc_shift_table;_T1= state;_T2= _check_fat_subscript(_T0,sizeof(struct Cyc_shifts_tag*),_T1);_T3= (struct Cyc_shifts_tag**)_T2;
# 157
shiftp= *_T3;_T4= Cyc_reduction_table;_T5= state;_T6= _check_fat_subscript(_T4,sizeof(struct Cyc_reductions_tag*),_T5);_T7= (struct Cyc_reductions_tag**)_T6;
redp= *_T7;_T8= Cyc_err_table;_T9= state;_TA= _check_fat_subscript(_T8,sizeof(struct Cyc_errs_tag*),_T9);_TB= (struct Cyc_errs_tag**)_TA;
errp= *_TB;_TC= shiftp;_TD= (unsigned)_TC;
# 161
if(_TD)goto _TL18;else{goto _TL1A;}_TL1A: _TE= redp;_TF= (unsigned)_TE;if(_TF)goto _TL18;else{goto _TL1B;}
# 163
_TL1B: if(Cyc_final_state!=state)goto _TL1C;_T10= 
_check_null(Cyc_foutput);_T11= _tag_fat("    $default\taccept\n",sizeof(char),21U);_T12= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T10,_T11,_T12);goto _TL1D;
# 166
_TL1C: _T13= _check_null(Cyc_foutput);_T14= _tag_fat("    NO ACTIONS\n",sizeof(char),16U);_T15= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T13,_T14,_T15);_TL1D:
 return;_TL18: _T16= shiftp;_T17= (unsigned)_T16;
# 170
if(!_T17)goto _TL1E;_T18= shiftp;_T19= _T18->nshifts;
# 172
k= (int)_T19;
# 174
i= 0;_TL23: if(i < k)goto _TL21;else{goto _TL22;}
# 176
_TL21: _T1A= shiftp;_T1B= _T1A->shifts;_T1C= i;_T1D= _check_fat_subscript(_T1B,sizeof(short),_T1C);_T1E= (short*)_T1D;_T1F= *_T1E;_T20= (int)_T1F;if(_T20)goto _TL24;else{goto _TL26;}_TL26: goto _TL20;_TL24: _T21= shiftp;_T22= _T21->shifts;_T23= _T22.curr;_T24= (short*)_T23;_T25= i;_T26= _T24[_T25];
state1= (int)_T26;_T27= Cyc_accessing_symbol;_T28= state1;_T29= _check_fat_subscript(_T27,sizeof(short),_T28);_T2A= (short*)_T29;_T2B= *_T2A;
symbol= (int)_T2B;
# 180
if(symbol < Cyc_ntokens)goto _TL27;goto _TL22;_TL27:
 if(symbol!=0)goto _TL29;{struct Cyc_Int_pa_PrintArg_struct _T93;_T93.tag= 1;_T2D= state1;
_T93.f1= (unsigned long)_T2D;_T2C= _T93;}{struct Cyc_Int_pa_PrintArg_struct _T93=_T2C;void*_T94[1];_T94[0]= & _T93;_T2E= _check_null(Cyc_foutput);_T2F= _tag_fat("    $   \tgo to state %d\n",sizeof(char),25U);_T30= _tag_fat(_T94,sizeof(void*),1);Cyc_fprintf(_T2E,_T2F,_T30);}goto _TL2A;
# 185
_TL29:{struct Cyc_String_pa_PrintArg_struct _T93;_T93.tag= 0;_T32= Cyc_tags;_T33= symbol;_T34= _check_fat_subscript(_T32,sizeof(struct _fat_ptr),_T33);_T35= (struct _fat_ptr*)_T34;_T36= *_T35;
_T93.f1= _T36;_T31= _T93;}{struct Cyc_String_pa_PrintArg_struct _T93=_T31;{struct Cyc_Int_pa_PrintArg_struct _T94;_T94.tag= 1;_T38= state1;_T94.f1= (unsigned long)_T38;_T37= _T94;}{struct Cyc_Int_pa_PrintArg_struct _T94=_T37;void*_T95[2];_T95[0]= & _T93;_T95[1]= & _T94;_T39= 
# 185
_check_null(Cyc_foutput);_T3A= _tag_fat("    %s\tshift, and go to state %d\n",sizeof(char),34U);_T3B= _tag_fat(_T95,sizeof(void*),2);Cyc_fprintf(_T39,_T3A,_T3B);}}_TL2A: _TL20:
# 174
 i= i + 1;goto _TL23;_TL22:
# 189
 if(i <= 0)goto _TL2B;_T3C= 
_check_null(Cyc_foutput);Cyc_putc(10,_T3C);goto _TL2C;_TL2B: _TL2C: goto _TL1F;
# 194
_TL1E: i= 0;
k= 0;_TL1F: _T3D= errp;_T3E= (unsigned)_T3D;
# 198
if(!_T3E)goto _TL2D;{
# 200
int j;int nerrs;_T3F= errp;_T40= _T3F->nerrs;
# 202
nerrs= (int)_T40;
# 204
j= 0;_TL32: if(j < nerrs)goto _TL30;else{goto _TL31;}
# 206
_TL30: _T41= errp;_T42= _T41->errs;_T43= j;_T44= _check_fat_subscript(_T42,sizeof(short),_T43);_T45= (short*)_T44;_T46= *_T45;_T47= (int)_T46;if(_T47)goto _TL33;else{goto _TL35;}_TL35: goto _TL2F;_TL33: _T48= errp;_T49= _T48->errs;_T4A= _T49.curr;_T4B= (short*)_T4A;_T4C= j;_T4D= _T4B[_T4C];
symbol= (int)_T4D;{struct Cyc_String_pa_PrintArg_struct _T93;_T93.tag= 0;_T4F= Cyc_tags;_T50= symbol;_T51= _check_fat_subscript(_T4F,sizeof(struct _fat_ptr),_T50);_T52= (struct _fat_ptr*)_T51;_T53= *_T52;
# 210
_T93.f1= _T53;_T4E= _T93;}{struct Cyc_String_pa_PrintArg_struct _T93=_T4E;void*_T94[1];_T94[0]= & _T93;_T54= 
# 209
_check_null(Cyc_foutput);_T55= _tag_fat("    %s\terror (nonassociative)\n",sizeof(char),31U);_T56= _tag_fat(_T94,sizeof(void*),1);Cyc_fprintf(_T54,_T55,_T56);}_TL2F:
# 204
 j= j + 1;goto _TL32;_TL31:
# 213
 if(j <= 0)goto _TL36;_T57= 
_check_null(Cyc_foutput);Cyc_putc(10,_T57);goto _TL37;_TL36: _TL37:;}goto _TL2E;_TL2D: _TL2E: _T58= Cyc_consistent;_T59= state;_T5A= _check_fat_subscript(_T58,sizeof(char),_T59);_T5B= (char*)_T5A;_T5C= *_T5B;_T5D= (int)_T5C;
# 217
if(!_T5D)goto _TL38;if(redp==0)goto _TL38;_T5E= redp;_T5F= _T5E->rules;_T60= _check_fat_subscript(_T5F,sizeof(short),0);_T61= (short*)_T60;_T62= *_T61;
# 219
rule= (int)_T62;_T63= Cyc_rlhs;_T64= rule;_T65= _check_fat_subscript(_T63,sizeof(short),_T64);_T66= (short*)_T65;_T67= *_T66;
symbol= (int)_T67;{struct Cyc_Int_pa_PrintArg_struct _T93;_T93.tag= 1;_T69= rule;
# 222
_T93.f1= (unsigned long)_T69;_T68= _T93;}{struct Cyc_Int_pa_PrintArg_struct _T93=_T68;{struct Cyc_String_pa_PrintArg_struct _T94;_T94.tag= 0;_T6B= Cyc_tags;_T6C= symbol;_T6D= _check_fat_subscript(_T6B,sizeof(struct _fat_ptr),_T6C);_T6E= (struct _fat_ptr*)_T6D;_T6F= *_T6E;_T94.f1= _T6F;_T6A= _T94;}{struct Cyc_String_pa_PrintArg_struct _T94=_T6A;void*_T95[2];_T95[0]= & _T93;_T95[1]= & _T94;_T70= 
# 221
_check_null(Cyc_foutput);_T71= _tag_fat("    $default\treduce using rule %d (%s)\n\n",sizeof(char),41U);_T72= _tag_fat(_T95,sizeof(void*),2);Cyc_fprintf(_T70,_T71,_T72);}}goto _TL39;
# 224
_TL38: _T73= redp;_T74= (unsigned)_T73;if(!_T74)goto _TL3A;
# 226
Cyc_print_reductions(state);goto _TL3B;_TL3A: _TL3B: _TL39:
# 229
 if(i >= k)goto _TL3C;
# 231
_TL41: if(i < k)goto _TL3F;else{goto _TL40;}
# 233
_TL3F: _T75= _check_null(shiftp);_T76= _T75->shifts;_T77= i;_T78= _check_fat_subscript(_T76,sizeof(short),_T77);_T79= (short*)_T78;_T7A= *_T79;_T7B= (int)_T7A;if(_T7B)goto _TL42;else{goto _TL44;}_TL44: goto _TL3E;_TL42: _T7C= shiftp;_T7D= _T7C->shifts;_T7E= _T7D.curr;_T7F= (short*)_T7E;_T80= i;_T81= _T7F[_T80];
state1= (int)_T81;_T82= Cyc_accessing_symbol;_T83= state1;_T84= _check_fat_subscript(_T82,sizeof(short),_T83);_T85= (short*)_T84;_T86= *_T85;
symbol= (int)_T86;{struct Cyc_String_pa_PrintArg_struct _T93;_T93.tag= 0;_T88= Cyc_tags;_T89= symbol;_T8A= _check_fat_subscript(_T88,sizeof(struct _fat_ptr),_T89);_T8B= (struct _fat_ptr*)_T8A;_T8C= *_T8B;
# 237
_T93.f1= _T8C;_T87= _T93;}{struct Cyc_String_pa_PrintArg_struct _T93=_T87;{struct Cyc_Int_pa_PrintArg_struct _T94;_T94.tag= 1;_T8E= state1;_T94.f1= (unsigned long)_T8E;_T8D= _T94;}{struct Cyc_Int_pa_PrintArg_struct _T94=_T8D;void*_T95[2];_T95[0]= & _T93;_T95[1]= & _T94;_T8F= _check_null(Cyc_foutput);_T90= _tag_fat("    %s\tgo to state %d\n",sizeof(char),23U);_T91= _tag_fat(_T95,sizeof(void*),2);Cyc_fprintf(_T8F,_T90,_T91);}}_TL3E:
# 231
 i= i + 1;goto _TL41;_TL40: _T92= 
# 240
_check_null(Cyc_foutput);Cyc_putc(10,_T92);goto _TL3D;_TL3C: _TL3D:;}
# 249
void Cyc_print_grammar (void){struct Cyc___cycFILE*_T0;struct _fat_ptr _T1;int _T2;unsigned char*_T3;short*_T4;short _T5;int _T6;struct Cyc_Int_pa_PrintArg_struct _T7;int _T8;struct Cyc_String_pa_PrintArg_struct _T9;struct _fat_ptr _TA;struct _fat_ptr _TB;unsigned char*_TC;short*_TD;int _TE;short _TF;int _T10;unsigned char*_T11;struct _fat_ptr*_T12;struct _fat_ptr _T13;struct Cyc___cycFILE*_T14;struct _fat_ptr _T15;struct _fat_ptr _T16;struct _fat_ptr _T17;struct _fat_ptr _T18;int _T19;unsigned char*_T1A;short*_T1B;short _T1C;int _T1D;struct _fat_ptr _T1E;unsigned char*_T1F;short*_T20;short _T21;int _T22;struct _fat_ptr _T23;unsigned char*_T24;short*_T25;short _T26;int _T27;struct Cyc_String_pa_PrintArg_struct _T28;struct _fat_ptr _T29;struct _fat_ptr*_T2A;struct _fat_ptr _T2B;unsigned char*_T2C;short*_T2D;short _T2E;int _T2F;unsigned char*_T30;struct _fat_ptr*_T31;struct _fat_ptr _T32;struct Cyc___cycFILE*_T33;struct _fat_ptr _T34;struct _fat_ptr _T35;struct Cyc___cycFILE*_T36;struct Cyc___cycFILE*_T37;struct Cyc___cycFILE*_T38;struct Cyc_String_pa_PrintArg_struct _T39;struct _fat_ptr _T3A;unsigned char*_T3B;struct _fat_ptr*_T3C;struct _fat_ptr _T3D;struct Cyc___cycFILE*_T3E;struct _fat_ptr _T3F;struct _fat_ptr _T40;int _T41;struct _fat_ptr _T42;int _T43;unsigned char*_T44;short*_T45;short _T46;int _T47;struct _fat_ptr _T48;struct _fat_ptr _T49;struct _fat_ptr _T4A;int _T4B;unsigned char*_T4C;short*_T4D;short _T4E;int _T4F;unsigned char*_T50;struct _fat_ptr*_T51;struct _fat_ptr _T52;struct _fat_ptr _T53;unsigned long _T54;struct Cyc_String_pa_PrintArg_struct _T55;struct _fat_ptr _T56;struct _fat_ptr _T57;int _T58;unsigned char*_T59;short*_T5A;short _T5B;int _T5C;unsigned char*_T5D;struct _fat_ptr*_T5E;struct _fat_ptr _T5F;struct Cyc___cycFILE*_T60;struct _fat_ptr _T61;struct _fat_ptr _T62;int _T63;unsigned long _T64;unsigned long _T65;unsigned long _T66;struct Cyc_String_pa_PrintArg_struct _T67;struct Cyc___cycFILE*_T68;struct _fat_ptr _T69;struct _fat_ptr _T6A;struct _fat_ptr _T6B;unsigned char*_T6C;char*_T6D;unsigned _T6E;unsigned char*_T6F;char*_T70;struct _fat_ptr _T71;struct Cyc_Int_pa_PrintArg_struct _T72;int _T73;struct _fat_ptr _T74;struct _fat_ptr _T75;struct _fat_ptr _T76;struct _fat_ptr _T77;int _T78;unsigned char*_T79;short*_T7A;short _T7B;int _T7C;struct _fat_ptr _T7D;unsigned char*_T7E;short*_T7F;short _T80;int _T81;struct _fat_ptr _T82;unsigned char*_T83;short*_T84;short _T85;int _T86;struct _fat_ptr _T87;int _T88;unsigned char*_T89;short*_T8A;short _T8B;int _T8C;int _T8D;unsigned long _T8E;unsigned long _T8F;unsigned long _T90;struct Cyc_String_pa_PrintArg_struct _T91;struct Cyc___cycFILE*_T92;struct _fat_ptr _T93;struct _fat_ptr _T94;struct _fat_ptr _T95;unsigned char*_T96;char*_T97;unsigned _T98;unsigned char*_T99;char*_T9A;struct _fat_ptr _T9B;struct _fat_ptr _T9C;struct Cyc_Int_pa_PrintArg_struct _T9D;int _T9E;struct _fat_ptr _T9F;struct _fat_ptr _TA0;struct _fat_ptr*_TA1;struct Cyc_String_pa_PrintArg_struct _TA2;struct Cyc___cycFILE*_TA3;struct _fat_ptr _TA4;struct _fat_ptr _TA5;struct _fat_ptr _TA6;struct _fat_ptr _TA7;int _TA8;unsigned char*_TA9;struct _fat_ptr*_TAA;struct _fat_ptr _TAB;struct _fat_ptr _TAC;unsigned long _TAD;struct Cyc_String_pa_PrintArg_struct _TAE;struct _fat_ptr _TAF;int _TB0;unsigned char*_TB1;struct _fat_ptr*_TB2;struct _fat_ptr _TB3;struct Cyc___cycFILE*_TB4;struct _fat_ptr _TB5;struct _fat_ptr _TB6;int _TB7;unsigned long _TB8;unsigned long _TB9;unsigned long _TBA;struct Cyc_String_pa_PrintArg_struct _TBB;struct Cyc___cycFILE*_TBC;struct _fat_ptr _TBD;struct _fat_ptr _TBE;struct _fat_ptr _TBF;unsigned char*_TC0;char*_TC1;unsigned _TC2;unsigned char*_TC3;char*_TC4;struct _fat_ptr _TC5;struct Cyc_Int_pa_PrintArg_struct _TC6;int _TC7;struct _fat_ptr _TC8;struct _fat_ptr _TC9;struct _fat_ptr _TCA;struct _fat_ptr _TCB;int _TCC;unsigned char*_TCD;short*_TCE;short _TCF;int _TD0;struct _fat_ptr _TD1;unsigned char*_TD2;short*_TD3;short _TD4;int _TD5;struct _fat_ptr _TD6;unsigned char*_TD7;short*_TD8;short _TD9;int _TDA;int _TDB;int _TDC;unsigned long _TDD;unsigned long _TDE;unsigned long _TDF;struct Cyc_String_pa_PrintArg_struct _TE0;struct Cyc___cycFILE*_TE1;struct _fat_ptr _TE2;struct _fat_ptr _TE3;struct _fat_ptr _TE4;unsigned char*_TE5;char*_TE6;unsigned _TE7;unsigned char*_TE8;char*_TE9;struct _fat_ptr _TEA;struct _fat_ptr _TEB;struct Cyc_Int_pa_PrintArg_struct _TEC;int _TED;struct _fat_ptr _TEE;struct _fat_ptr _TEF;struct _fat_ptr*_TF0;struct Cyc_String_pa_PrintArg_struct _TF1;struct Cyc___cycFILE*_TF2;struct _fat_ptr _TF3;struct _fat_ptr _TF4;struct Cyc___cycFILE*_TF5;int _TF6;int _TF7;struct _fat_ptr _TF8;int _TF9;unsigned char*_TFA;short*_TFB;short _TFC;int _TFD;int _TFE;struct _fat_ptr _TFF;struct _fat_ptr _T100;int _T101;unsigned char*_T102;short*_T103;short _T104;int _T105;struct _fat_ptr _T106;unsigned char*_T107;short*_T108;short _T109;int _T10A;struct _fat_ptr _T10B;unsigned char*_T10C;short*_T10D;short _T10E;int _T10F;int _T110;struct _fat_ptr*_T111;struct _fat_ptr _T112;struct Cyc_String_pa_PrintArg_struct _T113;struct _fat_ptr _T114;int _T115;unsigned char*_T116;struct _fat_ptr*_T117;struct _fat_ptr _T118;struct Cyc___cycFILE*_T119;struct _fat_ptr _T11A;struct _fat_ptr _T11B;struct _fat_ptr _T11C;int _T11D;unsigned char*_T11E;struct _fat_ptr*_T11F;struct _fat_ptr _T120;struct _fat_ptr _T121;unsigned long _T122;struct _fat_ptr _T123;struct Cyc_Int_pa_PrintArg_struct _T124;int _T125;struct _fat_ptr _T126;struct _fat_ptr _T127;int _T128;unsigned long _T129;unsigned long _T12A;unsigned long _T12B;struct Cyc_String_pa_PrintArg_struct _T12C;struct Cyc___cycFILE*_T12D;struct _fat_ptr _T12E;struct _fat_ptr _T12F;struct _fat_ptr _T130;unsigned char*_T131;char*_T132;unsigned _T133;unsigned char*_T134;char*_T135;int _T136;unsigned long _T137;unsigned long _T138;unsigned long _T139;struct Cyc_String_pa_PrintArg_struct _T13A;struct Cyc___cycFILE*_T13B;struct _fat_ptr _T13C;struct _fat_ptr _T13D;struct _fat_ptr _T13E;unsigned char*_T13F;char*_T140;unsigned _T141;unsigned char*_T142;char*_T143;struct _fat_ptr _T144;struct _fat_ptr _T145;int _T146;unsigned long _T147;unsigned long _T148;unsigned long _T149;struct Cyc_String_pa_PrintArg_struct _T14A;struct Cyc___cycFILE*_T14B;struct _fat_ptr _T14C;struct _fat_ptr _T14D;struct _fat_ptr _T14E;unsigned char*_T14F;char*_T150;unsigned _T151;unsigned char*_T152;char*_T153;struct _fat_ptr _T154;int _T155;unsigned char*_T156;short*_T157;short _T158;int _T159;int _T15A;struct _fat_ptr _T15B;struct _fat_ptr _T15C;struct Cyc_Int_pa_PrintArg_struct _T15D;int _T15E;struct _fat_ptr _T15F;struct _fat_ptr _T160;struct _fat_ptr _T161;struct _fat_ptr _T162;int _T163;unsigned long _T164;unsigned long _T165;unsigned long _T166;struct Cyc_String_pa_PrintArg_struct _T167;struct Cyc___cycFILE*_T168;struct _fat_ptr _T169;struct _fat_ptr _T16A;struct _fat_ptr _T16B;unsigned char*_T16C;char*_T16D;unsigned _T16E;unsigned char*_T16F;char*_T170;struct _fat_ptr _T171;struct _fat_ptr _T172;struct _fat_ptr _T173;struct _fat_ptr _T174;unsigned char*_T175;short*_T176;int _T177;short _T178;int _T179;struct _fat_ptr _T17A;unsigned char*_T17B;short*_T17C;short _T17D;int _T17E;struct _fat_ptr _T17F;unsigned char*_T180;short*_T181;short _T182;int _T183;int _T184;int _T185;unsigned long _T186;unsigned long _T187;unsigned long _T188;struct Cyc_String_pa_PrintArg_struct _T189;struct Cyc___cycFILE*_T18A;struct _fat_ptr _T18B;struct _fat_ptr _T18C;struct _fat_ptr _T18D;unsigned char*_T18E;char*_T18F;unsigned _T190;unsigned char*_T191;char*_T192;struct _fat_ptr _T193;struct _fat_ptr _T194;struct Cyc_Int_pa_PrintArg_struct _T195;int _T196;struct _fat_ptr _T197;struct _fat_ptr _T198;struct _fat_ptr*_T199;struct Cyc_String_pa_PrintArg_struct _T19A;struct Cyc___cycFILE*_T19B;struct _fat_ptr _T19C;struct _fat_ptr _T19D;
# 252
int i;int j;
struct _fat_ptr rule;
struct _fat_ptr buffer;
int column=0;_T0= 
# 258
_check_null(Cyc_foutput);Cyc_fputs("\nGrammar\n",_T0);
i= 1;_TL48: if(i <= Cyc_nrules)goto _TL46;else{goto _TL47;}
# 261
_TL46: _T1= Cyc_rlhs;_T2= i;_T3= _check_fat_subscript(_T1,sizeof(short),_T2);_T4= (short*)_T3;_T5= *_T4;_T6= (int)_T5;if(_T6 < 0)goto _TL49;{struct Cyc_Int_pa_PrintArg_struct _T19E;_T19E.tag= 1;_T8= i;
# 263
_T19E.f1= (unsigned long)_T8;_T7= _T19E;}{struct Cyc_Int_pa_PrintArg_struct _T19E=_T7;{struct Cyc_String_pa_PrintArg_struct _T19F;_T19F.tag= 0;_TA= Cyc_tags;_TB= Cyc_rlhs;_TC= _TB.curr;_TD= (short*)_TC;_TE= i;_TF= _TD[_TE];_T10= (int)_TF;_T11= _check_fat_subscript(_TA,sizeof(struct _fat_ptr),_T10);_T12= (struct _fat_ptr*)_T11;_T13= *_T12;_T19F.f1= _T13;_T9= _T19F;}{struct Cyc_String_pa_PrintArg_struct _T19F=_T9;void*_T1A0[2];_T1A0[0]= & _T19E;_T1A0[1]= & _T19F;_T14= _check_null(Cyc_foutput);_T15= _tag_fat("rule %-4d %s ->",sizeof(char),16U);_T16= _tag_fat(_T1A0,sizeof(void*),2);Cyc_fprintf(_T14,_T15,_T16);}}_T17= Cyc_ritem;_T18= Cyc_rrhs;_T19= i;_T1A= _check_fat_subscript(_T18,sizeof(short),_T19);_T1B= (short*)_T1A;_T1C= *_T1B;_T1D= (int)_T1C;
# 266
rule= _fat_ptr_plus(_T17,sizeof(short),_T1D);_T1E= rule;_T1F= _check_fat_subscript(_T1E,sizeof(short),0U);_T20= (short*)_T1F;_T21= *_T20;_T22= (int)_T21;
if(_T22 <= 0)goto _TL4B;
_TL4D: _T23= rule;_T24= _check_fat_subscript(_T23,sizeof(short),0U);_T25= (short*)_T24;_T26= *_T25;_T27= (int)_T26;if(_T27 > 0)goto _TL4E;else{goto _TL4F;}
_TL4E:{struct Cyc_String_pa_PrintArg_struct _T19E;_T19E.tag= 0;_T29= Cyc_tags;_T2A= & rule;_T2B= _fat_ptr_inplace_plus_post(_T2A,sizeof(short),1);_T2C= _T2B.curr;_T2D= (short*)_T2C;_T2E= *_T2D;_T2F= (int)_T2E;_T30= _check_fat_subscript(_T29,sizeof(struct _fat_ptr),_T2F);_T31= (struct _fat_ptr*)_T30;_T32= *_T31;_T19E.f1= _T32;_T28= _T19E;}{struct Cyc_String_pa_PrintArg_struct _T19E=_T28;void*_T19F[1];_T19F[0]= & _T19E;_T33= _check_null(Cyc_foutput);_T34= _tag_fat(" %s",sizeof(char),4U);_T35= _tag_fat(_T19F,sizeof(void*),1);Cyc_fprintf(_T33,_T34,_T35);}goto _TL4D;_TL4F: goto _TL4C;
# 271
_TL4B: _T36= _check_null(Cyc_foutput);Cyc_fputs("\t\t/* empty */",_T36);_TL4C: _T37= 
_check_null(Cyc_foutput);Cyc_putc(10,_T37);goto _TL4A;_TL49: _TL4A:
# 259
 i= i + 1;goto _TL48;_TL47: _T38= 
# 276
_check_null(Cyc_foutput);Cyc_fputs("\nTerminals, with rules where they appear\n\n",_T38);{struct Cyc_String_pa_PrintArg_struct _T19E;_T19E.tag= 0;_T3A= Cyc_tags;_T3B= _check_fat_subscript(_T3A,sizeof(struct _fat_ptr),0);_T3C= (struct _fat_ptr*)_T3B;_T3D= *_T3C;
_T19E.f1= _T3D;_T39= _T19E;}{struct Cyc_String_pa_PrintArg_struct _T19E=_T39;void*_T19F[1];_T19F[0]= & _T19E;_T3E= _check_null(Cyc_foutput);_T3F= _tag_fat("%s (-1)\n",sizeof(char),9U);_T40= _tag_fat(_T19F,sizeof(void*),1);Cyc_fprintf(_T3E,_T3F,_T40);}_T41= Cyc_translations;
if(!_T41)goto _TL50;
# 280
i= 0;_TL55: if(i <= Cyc_max_user_token_number)goto _TL53;else{goto _TL54;}
_TL53: _T42= Cyc_token_translations;_T43= i;_T44= _check_fat_subscript(_T42,sizeof(short),_T43);_T45= (short*)_T44;_T46= *_T45;_T47= (int)_T46;if(_T47==2)goto _TL56;_T48= 
# 284
_tag_fat("",sizeof(char),1U);buffer= Cyc_strdup(_T48);_T49= Cyc_tags;_T4A= Cyc_token_translations;_T4B= i;_T4C= _check_fat_subscript(_T4A,sizeof(short),_T4B);_T4D= (short*)_T4C;_T4E= *_T4D;_T4F= (int)_T4E;_T50= _check_fat_subscript(_T49,sizeof(struct _fat_ptr),_T4F);_T51= (struct _fat_ptr*)_T50;_T52= *_T51;_T53= _T52;_T54= 
Cyc_strlen(_T53);column= (int)_T54;{struct Cyc_String_pa_PrintArg_struct _T19E;_T19E.tag= 0;_T56= Cyc_tags;_T57= Cyc_token_translations;_T58= i;_T59= _check_fat_subscript(_T57,sizeof(short),_T58);_T5A= (short*)_T59;_T5B= *_T5A;_T5C= (int)_T5B;_T5D= _check_fat_subscript(_T56,sizeof(struct _fat_ptr),_T5C);_T5E= (struct _fat_ptr*)_T5D;_T5F= *_T5E;
_T19E.f1= _T5F;_T55= _T19E;}{struct Cyc_String_pa_PrintArg_struct _T19E=_T55;void*_T19F[1];_T19F[0]= & _T19E;_T60= _check_null(Cyc_foutput);_T61= _tag_fat("%s",sizeof(char),3U);_T62= _tag_fat(_T19F,sizeof(void*),1);Cyc_fprintf(_T60,_T61,_T62);}_T63= column;_T64= (unsigned long)_T63;_T65= 
Cyc_strlen(buffer);_T66= _T64 + _T65;if(_T66 <= 50U)goto _TL58;{struct Cyc_String_pa_PrintArg_struct _T19E;_T19E.tag= 0;_T19E.f1= buffer;_T67= _T19E;}{struct Cyc_String_pa_PrintArg_struct _T19E=_T67;void*_T19F[1];_T19F[0]= & _T19E;_T68= _check_null(Cyc_foutput);_T69= _tag_fat("%s\n   ",sizeof(char),7U);_T6A= _tag_fat(_T19F,sizeof(void*),1);Cyc_fprintf(_T68,_T69,_T6A);}column= 3;_T6B= buffer;{struct _fat_ptr _T19E=_fat_ptr_plus(_T6B,sizeof(char),0);_T6C= _check_fat_subscript(_T19E,sizeof(char),0U);_T6D= (char*)_T6C;{char _T19F=*_T6D;char _T1A0='\000';_T6E= _get_fat_size(_T19E,sizeof(char));if(_T6E!=1U)goto _TL5A;if(_T19F!=0)goto _TL5A;if(_T1A0==0)goto _TL5A;_throw_arraybounds();goto _TL5B;_TL5A: _TL5B: _T6F= _T19E.curr;_T70= (char*)_T6F;*_T70= _T1A0;}}goto _TL59;_TL58: _TL59:{struct Cyc_Int_pa_PrintArg_struct _T19E;_T19E.tag= 1;_T73= i;
# 289
_T19E.f1= (unsigned long)_T73;_T72= _T19E;}{struct Cyc_Int_pa_PrintArg_struct _T19E=_T72;void*_T19F[1];_T19F[0]= & _T19E;_T74= _tag_fat(" (%d)",sizeof(char),6U);_T75= _tag_fat(_T19F,sizeof(void*),1);_T71= Cyc_aprintf(_T74,_T75);}buffer= _T71;
# 291
j= 1;_TL5F: if(j <= Cyc_nrules)goto _TL5D;else{goto _TL5E;}
# 295
_TL5D: _T76= Cyc_ritem;_T77= Cyc_rrhs;_T78= j;_T79= _check_fat_subscript(_T77,sizeof(short),_T78);_T7A= (short*)_T79;_T7B= *_T7A;_T7C= (int)_T7B;rule= _fat_ptr_plus(_T76,sizeof(short),_T7C);_TL63: _T7D= rule;_T7E= _check_fat_subscript(_T7D,sizeof(short),0U);_T7F= (short*)_T7E;_T80= *_T7F;_T81= (int)_T80;if(_T81 > 0)goto _TL61;else{goto _TL62;}
_TL61: _T82= rule;_T83= _T82.curr;_T84= (short*)_T83;_T85= *_T84;_T86= (int)_T85;_T87= Cyc_token_translations;_T88= i;_T89= _check_fat_subscript(_T87,sizeof(short),_T88);_T8A= (short*)_T89;_T8B= *_T8A;_T8C= (int)_T8B;if(_T86!=_T8C)goto _TL64;_T8D= column;_T8E= (unsigned long)_T8D;_T8F= 
# 298
Cyc_strlen(buffer);_T90= _T8E + _T8F;if(_T90 <= 65U)goto _TL66;{struct Cyc_String_pa_PrintArg_struct _T19E;_T19E.tag= 0;_T19E.f1= buffer;_T91= _T19E;}{struct Cyc_String_pa_PrintArg_struct _T19E=_T91;void*_T19F[1];_T19F[0]= & _T19E;_T92= _check_null(Cyc_foutput);_T93= _tag_fat("%s\n   ",sizeof(char),7U);_T94= _tag_fat(_T19F,sizeof(void*),1);Cyc_fprintf(_T92,_T93,_T94);}column= 3;_T95= buffer;{struct _fat_ptr _T19E=_fat_ptr_plus(_T95,sizeof(char),0);_T96= _check_fat_subscript(_T19E,sizeof(char),0U);_T97= (char*)_T96;{char _T19F=*_T97;char _T1A0='\000';_T98= _get_fat_size(_T19E,sizeof(char));if(_T98!=1U)goto _TL68;if(_T19F!=0)goto _TL68;if(_T1A0==0)goto _TL68;_throw_arraybounds();goto _TL69;_TL68: _TL69: _T99= _T19E.curr;_T9A= (char*)_T99;*_T9A= _T1A0;}}goto _TL67;_TL66: _TL67: _T9B= buffer;{struct Cyc_Int_pa_PrintArg_struct _T19E;_T19E.tag= 1;_T9E= j;
# 300
_T19E.f1= (unsigned long)_T9E;_T9D= _T19E;}{struct Cyc_Int_pa_PrintArg_struct _T19E=_T9D;void*_T19F[1];_T19F[0]= & _T19E;_T9F= _tag_fat(" %d",sizeof(char),4U);_TA0= _tag_fat(_T19F,sizeof(void*),1);_T9C= Cyc_aprintf(_T9F,_TA0);}buffer= Cyc_strconcat(_T9B,_T9C);goto _TL62;_TL64: _TA1= & rule;
# 295
_fat_ptr_inplace_plus(_TA1,sizeof(short),1);goto _TL63;_TL62:
# 291
 j= j + 1;goto _TL5F;_TL5E:{struct Cyc_String_pa_PrintArg_struct _T19E;_T19E.tag= 0;
# 304
_T19E.f1= buffer;_TA2= _T19E;}{struct Cyc_String_pa_PrintArg_struct _T19E=_TA2;void*_T19F[1];_T19F[0]= & _T19E;_TA3= _check_null(Cyc_foutput);_TA4= _tag_fat("%s\n",sizeof(char),4U);_TA5= _tag_fat(_T19F,sizeof(void*),1);Cyc_fprintf(_TA3,_TA4,_TA5);}goto _TL57;_TL56: _TL57:
# 280
 i= i + 1;goto _TL55;_TL54: goto _TL51;
# 308
_TL50: i= 1;_TL6D: if(i < Cyc_ntokens)goto _TL6B;else{goto _TL6C;}
# 311
_TL6B: _TA6= _tag_fat("",sizeof(char),1U);buffer= Cyc_strdup(_TA6);_TA7= Cyc_tags;_TA8= i;_TA9= _check_fat_subscript(_TA7,sizeof(struct _fat_ptr),_TA8);_TAA= (struct _fat_ptr*)_TA9;_TAB= *_TAA;_TAC= _TAB;_TAD= 
Cyc_strlen(_TAC);column= (int)_TAD;{struct Cyc_String_pa_PrintArg_struct _T19E;_T19E.tag= 0;_TAF= Cyc_tags;_TB0= i;_TB1= _check_fat_subscript(_TAF,sizeof(struct _fat_ptr),_TB0);_TB2= (struct _fat_ptr*)_TB1;_TB3= *_TB2;
_T19E.f1= _TB3;_TAE= _T19E;}{struct Cyc_String_pa_PrintArg_struct _T19E=_TAE;void*_T19F[1];_T19F[0]= & _T19E;_TB4= _check_null(Cyc_foutput);_TB5= _tag_fat("%s",sizeof(char),3U);_TB6= _tag_fat(_T19F,sizeof(void*),1);Cyc_fprintf(_TB4,_TB5,_TB6);}_TB7= column;_TB8= (unsigned long)_TB7;_TB9= 
Cyc_strlen(buffer);_TBA= _TB8 + _TB9;if(_TBA <= 50U)goto _TL6E;{struct Cyc_String_pa_PrintArg_struct _T19E;_T19E.tag= 0;_T19E.f1= buffer;_TBB= _T19E;}{struct Cyc_String_pa_PrintArg_struct _T19E=_TBB;void*_T19F[1];_T19F[0]= & _T19E;_TBC= _check_null(Cyc_foutput);_TBD= _tag_fat("%s\n   ",sizeof(char),7U);_TBE= _tag_fat(_T19F,sizeof(void*),1);Cyc_fprintf(_TBC,_TBD,_TBE);}column= 3;_TBF= buffer;{struct _fat_ptr _T19E=_fat_ptr_plus(_TBF,sizeof(char),0);_TC0= _check_fat_subscript(_T19E,sizeof(char),0U);_TC1= (char*)_TC0;{char _T19F=*_TC1;char _T1A0='\000';_TC2= _get_fat_size(_T19E,sizeof(char));if(_TC2!=1U)goto _TL70;if(_T19F!=0)goto _TL70;if(_T1A0==0)goto _TL70;_throw_arraybounds();goto _TL71;_TL70: _TL71: _TC3= _T19E.curr;_TC4= (char*)_TC3;*_TC4= _T1A0;}}goto _TL6F;_TL6E: _TL6F:{struct Cyc_Int_pa_PrintArg_struct _T19E;_T19E.tag= 1;_TC7= i;
# 316
_T19E.f1= (unsigned long)_TC7;_TC6= _T19E;}{struct Cyc_Int_pa_PrintArg_struct _T19E=_TC6;void*_T19F[1];_T19F[0]= & _T19E;_TC8= _tag_fat(" (%d)",sizeof(char),6U);_TC9= _tag_fat(_T19F,sizeof(void*),1);_TC5= Cyc_aprintf(_TC8,_TC9);}buffer= _TC5;
# 318
j= 1;_TL75: if(j <= Cyc_nrules)goto _TL73;else{goto _TL74;}
# 321
_TL73: _TCA= Cyc_ritem;_TCB= Cyc_rrhs;_TCC= j;_TCD= _check_fat_subscript(_TCB,sizeof(short),_TCC);_TCE= (short*)_TCD;_TCF= *_TCE;_TD0= (int)_TCF;rule= _fat_ptr_plus(_TCA,sizeof(short),_TD0);_TL79: _TD1= rule;_TD2= _check_fat_subscript(_TD1,sizeof(short),0U);_TD3= (short*)_TD2;_TD4= *_TD3;_TD5= (int)_TD4;if(_TD5 > 0)goto _TL77;else{goto _TL78;}
_TL77: _TD6= rule;_TD7= _TD6.curr;_TD8= (short*)_TD7;_TD9= *_TD8;_TDA= (int)_TD9;_TDB= i;if(_TDA!=_TDB)goto _TL7A;_TDC= column;_TDD= (unsigned long)_TDC;_TDE= 
# 324
Cyc_strlen(buffer);_TDF= _TDD + _TDE;if(_TDF <= 65U)goto _TL7C;{struct Cyc_String_pa_PrintArg_struct _T19E;_T19E.tag= 0;_T19E.f1= buffer;_TE0= _T19E;}{struct Cyc_String_pa_PrintArg_struct _T19E=_TE0;void*_T19F[1];_T19F[0]= & _T19E;_TE1= _check_null(Cyc_foutput);_TE2= _tag_fat("%s\n   ",sizeof(char),7U);_TE3= _tag_fat(_T19F,sizeof(void*),1);Cyc_fprintf(_TE1,_TE2,_TE3);}column= 3;_TE4= buffer;{struct _fat_ptr _T19E=_fat_ptr_plus(_TE4,sizeof(char),0);_TE5= _check_fat_subscript(_T19E,sizeof(char),0U);_TE6= (char*)_TE5;{char _T19F=*_TE6;char _T1A0='\000';_TE7= _get_fat_size(_T19E,sizeof(char));if(_TE7!=1U)goto _TL7E;if(_T19F!=0)goto _TL7E;if(_T1A0==0)goto _TL7E;_throw_arraybounds();goto _TL7F;_TL7E: _TL7F: _TE8= _T19E.curr;_TE9= (char*)_TE8;*_TE9= _T1A0;}}goto _TL7D;_TL7C: _TL7D: _TEA= buffer;{struct Cyc_Int_pa_PrintArg_struct _T19E;_T19E.tag= 1;_TED= j;
# 326
_T19E.f1= (unsigned long)_TED;_TEC= _T19E;}{struct Cyc_Int_pa_PrintArg_struct _T19E=_TEC;void*_T19F[1];_T19F[0]= & _T19E;_TEE= _tag_fat(" %d",sizeof(char),4U);_TEF= _tag_fat(_T19F,sizeof(void*),1);_TEB= Cyc_aprintf(_TEE,_TEF);}buffer= Cyc_strconcat(_TEA,_TEB);goto _TL78;_TL7A: _TF0= & rule;
# 321
_fat_ptr_inplace_plus(_TF0,sizeof(short),1);goto _TL79;_TL78:
# 318
 j= j + 1;goto _TL75;_TL74:{struct Cyc_String_pa_PrintArg_struct _T19E;_T19E.tag= 0;
# 330
_T19E.f1= buffer;_TF1= _T19E;}{struct Cyc_String_pa_PrintArg_struct _T19E=_TF1;void*_T19F[1];_T19F[0]= & _T19E;_TF2= _check_null(Cyc_foutput);_TF3= _tag_fat("%s\n",sizeof(char),4U);_TF4= _tag_fat(_T19F,sizeof(void*),1);Cyc_fprintf(_TF2,_TF3,_TF4);}
# 308
i= i + 1;goto _TL6D;_TL6C: _TL51: _TF5= 
# 333
_check_null(Cyc_foutput);Cyc_fputs("\nNonterminals, with rules where they appear\n\n",_TF5);
i= Cyc_ntokens;_TL83: _TF6= i;_TF7= Cyc_nsyms - 1;if(_TF6 <= _TF7)goto _TL81;else{goto _TL82;}
# 336
_TL81:{int left_count=0;int right_count=0;
# 338
j= 1;_TL87: if(j <= Cyc_nrules)goto _TL85;else{goto _TL86;}
# 340
_TL85: _TF8= Cyc_rlhs;_TF9= j;_TFA= _check_fat_subscript(_TF8,sizeof(short),_TF9);_TFB= (short*)_TFA;_TFC= *_TFB;_TFD= (int)_TFC;_TFE= i;if(_TFD!=_TFE)goto _TL88;
left_count= left_count + 1;goto _TL89;_TL88: _TL89: _TFF= Cyc_ritem;_T100= Cyc_rrhs;_T101= j;_T102= _check_fat_subscript(_T100,sizeof(short),_T101);_T103= (short*)_T102;_T104= *_T103;_T105= (int)_T104;
# 343
rule= _fat_ptr_plus(_TFF,sizeof(short),_T105);_TL8D: _T106= rule;_T107= _check_fat_subscript(_T106,sizeof(short),0U);_T108= (short*)_T107;_T109= *_T108;_T10A= (int)_T109;if(_T10A > 0)goto _TL8B;else{goto _TL8C;}
_TL8B: _T10B= rule;_T10C= _T10B.curr;_T10D= (short*)_T10C;_T10E= *_T10D;_T10F= (int)_T10E;_T110= i;if(_T10F!=_T110)goto _TL8E;
# 346
right_count= right_count + 1;goto _TL8C;_TL8E: _T111= & rule;
# 343
_fat_ptr_inplace_plus(_T111,sizeof(short),1);goto _TL8D;_TL8C:
# 338
 j= j + 1;goto _TL87;_TL86: _T112= 
# 352
_tag_fat("",sizeof(char),1U);buffer= Cyc_strdup(_T112);{struct Cyc_String_pa_PrintArg_struct _T19E;_T19E.tag= 0;_T114= Cyc_tags;_T115= i;_T116= _check_fat_subscript(_T114,sizeof(struct _fat_ptr),_T115);_T117= (struct _fat_ptr*)_T116;_T118= *_T117;
_T19E.f1= _T118;_T113= _T19E;}{struct Cyc_String_pa_PrintArg_struct _T19E=_T113;void*_T19F[1];_T19F[0]= & _T19E;_T119= _check_null(Cyc_foutput);_T11A= _tag_fat("%s",sizeof(char),3U);_T11B= _tag_fat(_T19F,sizeof(void*),1);Cyc_fprintf(_T119,_T11A,_T11B);}_T11C= Cyc_tags;_T11D= i;_T11E= _check_fat_subscript(_T11C,sizeof(struct _fat_ptr),_T11D);_T11F= (struct _fat_ptr*)_T11E;_T120= *_T11F;_T121= _T120;_T122= 
Cyc_strlen(_T121);column= (int)_T122;{struct Cyc_Int_pa_PrintArg_struct _T19E;_T19E.tag= 1;_T125= i;
# 356
_T19E.f1= (unsigned long)_T125;_T124= _T19E;}{struct Cyc_Int_pa_PrintArg_struct _T19E=_T124;void*_T19F[1];_T19F[0]= & _T19E;_T126= _tag_fat(" (%d)",sizeof(char),6U);_T127= _tag_fat(_T19F,sizeof(void*),1);_T123= Cyc_aprintf(_T126,_T127);}buffer= _T123;_T128= column;_T129= (unsigned long)_T128;_T12A= 
Cyc_strlen(buffer);_T12B= _T129 + _T12A;if(_T12B <= 0U)goto _TL90;{struct Cyc_String_pa_PrintArg_struct _T19E;_T19E.tag= 0;_T19E.f1= buffer;_T12C= _T19E;}{struct Cyc_String_pa_PrintArg_struct _T19E=_T12C;void*_T19F[1];_T19F[0]= & _T19E;_T12D= _check_null(Cyc_foutput);_T12E= _tag_fat("%s\n   ",sizeof(char),7U);_T12F= _tag_fat(_T19F,sizeof(void*),1);Cyc_fprintf(_T12D,_T12E,_T12F);}column= 3;_T130= buffer;{struct _fat_ptr _T19E=_fat_ptr_plus(_T130,sizeof(char),0);_T131= _check_fat_subscript(_T19E,sizeof(char),0U);_T132= (char*)_T131;{char _T19F=*_T132;char _T1A0='\000';_T133= _get_fat_size(_T19E,sizeof(char));if(_T133!=1U)goto _TL92;if(_T19F!=0)goto _TL92;if(_T1A0==0)goto _TL92;_throw_arraybounds();goto _TL93;_TL92: _TL93: _T134= _T19E.curr;_T135= (char*)_T134;*_T135= _T1A0;}}goto _TL91;_TL90: _TL91:
# 359
 if(left_count <= 0)goto _TL94;_T136= column;_T137= (unsigned long)_T136;_T138= 
# 361
Cyc_strlen(buffer);_T139= _T137 + _T138;if(_T139 <= 50U)goto _TL96;{struct Cyc_String_pa_PrintArg_struct _T19E;_T19E.tag= 0;_T19E.f1= buffer;_T13A= _T19E;}{struct Cyc_String_pa_PrintArg_struct _T19E=_T13A;void*_T19F[1];_T19F[0]= & _T19E;_T13B= _check_null(Cyc_foutput);_T13C= _tag_fat("%s\n   ",sizeof(char),7U);_T13D= _tag_fat(_T19F,sizeof(void*),1);Cyc_fprintf(_T13B,_T13C,_T13D);}column= 3;_T13E= buffer;{struct _fat_ptr _T19E=_fat_ptr_plus(_T13E,sizeof(char),0);_T13F= _check_fat_subscript(_T19E,sizeof(char),0U);_T140= (char*)_T13F;{char _T19F=*_T140;char _T1A0='\000';_T141= _get_fat_size(_T19E,sizeof(char));if(_T141!=1U)goto _TL98;if(_T19F!=0)goto _TL98;if(_T1A0==0)goto _TL98;_throw_arraybounds();goto _TL99;_TL98: _TL99: _T142= _T19E.curr;_T143= (char*)_T142;*_T143= _T1A0;}}goto _TL97;_TL96: _TL97: _T144= buffer;_T145= 
# 363
_tag_fat(" on left:",sizeof(char),10U);buffer= Cyc_strconcat(_T144,_T145);
# 365
j= 1;_TL9D: if(j <= Cyc_nrules)goto _TL9B;else{goto _TL9C;}
# 367
_TL9B: _T146= column;_T147= (unsigned long)_T146;_T148= Cyc_strlen(buffer);_T149= _T147 + _T148;if(_T149 <= 65U)goto _TL9E;{struct Cyc_String_pa_PrintArg_struct _T19E;_T19E.tag= 0;_T19E.f1= buffer;_T14A= _T19E;}{struct Cyc_String_pa_PrintArg_struct _T19E=_T14A;void*_T19F[1];_T19F[0]= & _T19E;_T14B= _check_null(Cyc_foutput);_T14C= _tag_fat("%s\n   ",sizeof(char),7U);_T14D= _tag_fat(_T19F,sizeof(void*),1);Cyc_fprintf(_T14B,_T14C,_T14D);}column= 3;_T14E= buffer;{struct _fat_ptr _T19E=_fat_ptr_plus(_T14E,sizeof(char),0);_T14F= _check_fat_subscript(_T19E,sizeof(char),0U);_T150= (char*)_T14F;{char _T19F=*_T150;char _T1A0='\000';_T151= _get_fat_size(_T19E,sizeof(char));if(_T151!=1U)goto _TLA0;if(_T19F!=0)goto _TLA0;if(_T1A0==0)goto _TLA0;_throw_arraybounds();goto _TLA1;_TLA0: _TLA1: _T152= _T19E.curr;_T153= (char*)_T152;*_T153= _T1A0;}}goto _TL9F;_TL9E: _TL9F: _T154= Cyc_rlhs;_T155= j;_T156= _check_fat_subscript(_T154,sizeof(short),_T155);_T157= (short*)_T156;_T158= *_T157;_T159= (int)_T158;_T15A= i;
if(_T159!=_T15A)goto _TLA2;_T15B= buffer;{struct Cyc_Int_pa_PrintArg_struct _T19E;_T19E.tag= 1;_T15E= j;
# 370
_T19E.f1= (unsigned long)_T15E;_T15D= _T19E;}{struct Cyc_Int_pa_PrintArg_struct _T19E=_T15D;void*_T19F[1];_T19F[0]= & _T19E;_T15F= _tag_fat(" %d",sizeof(char),4U);_T160= _tag_fat(_T19F,sizeof(void*),1);_T15C= Cyc_aprintf(_T15F,_T160);}buffer= Cyc_strconcat(_T15B,_T15C);goto _TLA3;_TLA2: _TLA3:
# 365
 j= j + 1;goto _TL9D;_TL9C: goto _TL95;_TL94: _TL95:
# 374
 if(right_count <= 0)goto _TLA4;
# 376
if(left_count <= 0)goto _TLA6;_T161= buffer;_T162= 
# 378
_tag_fat(",",sizeof(char),2U);buffer= Cyc_strconcat(_T161,_T162);goto _TLA7;_TLA6: _TLA7: _T163= column;_T164= (unsigned long)_T163;_T165= 
Cyc_strlen(buffer);_T166= _T164 + _T165;if(_T166 <= 50U)goto _TLA8;{struct Cyc_String_pa_PrintArg_struct _T19E;_T19E.tag= 0;_T19E.f1= buffer;_T167= _T19E;}{struct Cyc_String_pa_PrintArg_struct _T19E=_T167;void*_T19F[1];_T19F[0]= & _T19E;_T168= Cyc_foutput;_T169= _tag_fat("%s\n   ",sizeof(char),7U);_T16A= _tag_fat(_T19F,sizeof(void*),1);Cyc_fprintf(_T168,_T169,_T16A);}column= 3;_T16B= buffer;{struct _fat_ptr _T19E=_fat_ptr_plus(_T16B,sizeof(char),0);_T16C= _T19E.curr;_T16D= (char*)_T16C;{char _T19F=*_T16D;char _T1A0='\000';_T16E= _get_fat_size(_T19E,sizeof(char));if(_T16E!=1U)goto _TLAA;if(_T19F!=0)goto _TLAA;if(_T1A0==0)goto _TLAA;_throw_arraybounds();goto _TLAB;_TLAA: _TLAB: _T16F= _T19E.curr;_T170= (char*)_T16F;*_T170= _T1A0;}}goto _TLA9;_TLA8: _TLA9: _T171= buffer;_T172= 
# 381
_tag_fat(" on right:",sizeof(char),11U);buffer= Cyc_strconcat(_T171,_T172);
j= 1;_TLAF: if(j <= Cyc_nrules)goto _TLAD;else{goto _TLAE;}
# 385
_TLAD: _T173= Cyc_ritem;_T174= Cyc_rrhs;_T175= _T174.curr;_T176= (short*)_T175;_T177= j;_T178= _T176[_T177];_T179= (int)_T178;rule= _fat_ptr_plus(_T173,sizeof(short),_T179);_TLB3: _T17A= rule;_T17B= _T17A.curr;_T17C= (short*)_T17B;_T17D= *_T17C;_T17E= (int)_T17D;if(_T17E > 0)goto _TLB1;else{goto _TLB2;}
_TLB1: _T17F= rule;_T180= _T17F.curr;_T181= (short*)_T180;_T182= *_T181;_T183= (int)_T182;_T184= i;if(_T183!=_T184)goto _TLB4;_T185= column;_T186= (unsigned long)_T185;_T187= 
# 388
Cyc_strlen(buffer);_T188= _T186 + _T187;if(_T188 <= 65U)goto _TLB6;{struct Cyc_String_pa_PrintArg_struct _T19E;_T19E.tag= 0;_T19E.f1= buffer;_T189= _T19E;}{struct Cyc_String_pa_PrintArg_struct _T19E=_T189;void*_T19F[1];_T19F[0]= & _T19E;_T18A= Cyc_foutput;_T18B= _tag_fat("%s\n   ",sizeof(char),7U);_T18C= _tag_fat(_T19F,sizeof(void*),1);Cyc_fprintf(_T18A,_T18B,_T18C);}column= 3;_T18D= buffer;{struct _fat_ptr _T19E=_fat_ptr_plus(_T18D,sizeof(char),0);_T18E= _T19E.curr;_T18F= (char*)_T18E;{char _T19F=*_T18F;char _T1A0='\000';_T190= _get_fat_size(_T19E,sizeof(char));if(_T190!=1U)goto _TLB8;if(_T19F!=0)goto _TLB8;if(_T1A0==0)goto _TLB8;_throw_arraybounds();goto _TLB9;_TLB8: _TLB9: _T191= _T19E.curr;_T192= (char*)_T191;*_T192= _T1A0;}}goto _TLB7;_TLB6: _TLB7: _T193= buffer;{struct Cyc_Int_pa_PrintArg_struct _T19E;_T19E.tag= 1;_T196= j;
# 390
_T19E.f1= (unsigned long)_T196;_T195= _T19E;}{struct Cyc_Int_pa_PrintArg_struct _T19E=_T195;void*_T19F[1];_T19F[0]= & _T19E;_T197= _tag_fat(" %d",sizeof(char),4U);_T198= _tag_fat(_T19F,sizeof(void*),1);_T194= Cyc_aprintf(_T197,_T198);}buffer= Cyc_strconcat(_T193,_T194);goto _TLB2;_TLB4: _T199= & rule;
# 385
_fat_ptr_inplace_plus(_T199,sizeof(short),1);goto _TLB3;_TLB2:
# 382
 j= j + 1;goto _TLAF;_TLAE: goto _TLA5;_TLA4: _TLA5:{struct Cyc_String_pa_PrintArg_struct _T19E;_T19E.tag= 0;
# 395
_T19E.f1= buffer;_T19A= _T19E;}{struct Cyc_String_pa_PrintArg_struct _T19E=_T19A;void*_T19F[1];_T19F[0]= & _T19E;_T19B= _check_null(Cyc_foutput);_T19C= _tag_fat("%s\n",sizeof(char),4U);_T19D= _tag_fat(_T19F,sizeof(void*),1);Cyc_fprintf(_T19B,_T19C,_T19D);}}
# 334
i= i + 1;goto _TL83;_TL82:;}
