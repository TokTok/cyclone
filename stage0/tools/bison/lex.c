#include <cyc_include.h>
 struct Cyc___cycFILE;
# 220 "bazel-out/k8-fastbuild/bin/cyclone/library/std/libc/stdio.h"
extern int Cyc_getc(struct Cyc___cycFILE*);
# 306
extern int Cyc_ungetc(int,struct Cyc___cycFILE*);
# 5 "bazel-out/k8-fastbuild/bin/cyclone/library/std/libc/ctype.h"
extern int isalnum(int);
# 7
extern int isalpha(int);
# 13
extern int isdigit(int);struct Cyc___cycFILE;
# 142 "./cyclone/library/std/cycboot.h"
extern int Cyc_getc(struct Cyc___cycFILE*);
# 221
extern int Cyc_ungetc(int,struct Cyc___cycFILE*);
# 280
extern int isalnum(int);
# 282
extern int isalpha(int);
# 288
extern int isdigit(int);
# 51 "./cyclone/library/std/string.h"
extern int Cyc_strcmp(struct _fat_ptr,struct _fat_ptr);
# 73
extern struct _fat_ptr Cyc_strcpy(struct _fat_ptr,struct _fat_ptr);
# 27 "cyclone/tools/bison/files.h"
extern struct Cyc___cycFILE*Cyc_finput;struct Cyc_bucket{struct Cyc_bucket*link;struct Cyc_bucket*next;struct _fat_ptr tag;struct _fat_ptr type_name;short value;short prec;short assoc;short user_token_number;struct Cyc_bucket*_alias;char class;};
# 57 "cyclone/tools/bison/symtab.h"
extern struct Cyc_bucket*Cyc_getsym(struct _fat_ptr);
# 40 "cyclone/tools/bison/lex.cyc"
extern int Cyc_toknumflag;
# 43
extern int Cyc_nolinesflag;
extern int Cyc_rawtoknumflag;
# 51
extern int Cyc_lineno;
extern int Cyc_translations;
# 54
int Cyc_parse_percent_token (void);
# 57
extern struct _fat_ptr Cyc_printable_version(char);
extern void Cyc_fatal(struct _fat_ptr);
extern void Cyc_warni(struct _fat_ptr,int);
extern void Cyc_warns(struct _fat_ptr,struct _fat_ptr);
extern void Cyc_warn(struct _fat_ptr);
# 64
struct _fat_ptr Cyc_token_buffer;
# 67
int Cyc_maxtoken;
# 69
struct Cyc_bucket*Cyc_symval;
int Cyc_numval;
# 72
static int Cyc_unlexed;
static struct Cyc_bucket*Cyc_unlexed_symval;
# 75
void Cyc_init_lex (void){struct _fat_ptr _T0;int _T1;unsigned _T2;char*_T3;unsigned _T4;unsigned _T5;
# 78
Cyc_maxtoken= 100;_T1= Cyc_maxtoken + 1;_T2= (unsigned)_T1;{unsigned _T6=_T2 + 1U;_T4= _check_times(_T6,sizeof(char));{char*_T7=_cycalloc_atomic(_T4);{unsigned _T8=_T6;unsigned _new2_cyclone;_new2_cyclone= 0;_TL3: if(_new2_cyclone < _T8)goto _TL1;else{goto _TL2;}_TL1: _T5= _new2_cyclone;
_T7[_T5]= '\000';_new2_cyclone= _new2_cyclone + 1;goto _TL3;_TL2: _T7[_T8]= 0;}_T3= (char*)_T7;}_T0= _tag_fat(_T3,sizeof(char),_T6);}Cyc_token_buffer= _T0;
Cyc_unlexed= - 1;}
# 84
struct _fat_ptr Cyc_grow_token_buffer(struct _fat_ptr p){struct _fat_ptr _T0;unsigned char*_T1;struct _fat_ptr _T2;unsigned char*_T3;int _T4;struct _fat_ptr _T5;int _T6;unsigned _T7;char*_T8;unsigned _T9;unsigned _TA;unsigned _TB;struct _fat_ptr _TC;unsigned _TD;struct _fat_ptr _TE;unsigned _TF;int _T10;unsigned char*_T11;char*_T12;struct _fat_ptr _T13;unsigned char*_T14;char*_T15;char*_T16;unsigned _T17;int _T18;unsigned _T19;unsigned char*_T1A;char*_T1B;struct _fat_ptr _T1C;int _T1D;struct _fat_ptr _T1E;_T0= p;_T1= _T0.curr;_T2= Cyc_token_buffer;_T3= _T2.curr;_T4= _T1 - _T3;{
# 86
int offset=_T4 / sizeof(char);
Cyc_maxtoken= Cyc_maxtoken * 2;_T6= Cyc_maxtoken + 1;_T7= (unsigned)_T6;{unsigned _T1F=_T7 + 1U;_T9= _check_times(_T1F,sizeof(char));{char*_T20=_cycalloc_atomic(_T9);{unsigned _T21=_T1F;unsigned _temp_;_temp_= 0;_TL7: if(_temp_ < _T21)goto _TL5;else{goto _TL6;}_TL5: _TA= _temp_;
# 89
_T20[_TA]= '\000';_temp_= _temp_ + 1;goto _TL7;_TL6: _T20[_T21]= 0;}_T8= (char*)_T20;}_T5= _tag_fat(_T8,sizeof(char),_T1F);}{struct _fat_ptr new_token_buffer=_T5;{
unsigned i=0U;_TLB: _TB= i;_TC= Cyc_token_buffer;_TD= _get_fat_size(_TC,sizeof(char));if(_TB < _TD)goto _TL9;else{goto _TLA;}
_TL9: _TE= new_token_buffer;_TF= i;_T10= (int)_TF;{struct _fat_ptr _T1F=_fat_ptr_plus(_TE,sizeof(char),_T10);_T11= _check_fat_subscript(_T1F,sizeof(char),0U);_T12= (char*)_T11;{char _T20=*_T12;_T13= Cyc_token_buffer;_T14= _T13.curr;_T15= (char*)_T14;_T16= _check_null(_T15);_T17= i;_T18= (int)_T17;{char _T21=_T16[_T18];_T19= _get_fat_size(_T1F,sizeof(char));if(_T19!=1U)goto _TLC;if(_T20!=0)goto _TLC;if(_T21==0)goto _TLC;_throw_arraybounds();goto _TLD;_TLC: _TLD: _T1A= _T1F.curr;_T1B= (char*)_T1A;*_T1B= _T21;}}}
# 90
i= i + 1;goto _TLB;_TLA:;}
# 92
Cyc_token_buffer= new_token_buffer;_T1C= Cyc_token_buffer;_T1D= offset;_T1E= 
_fat_ptr_plus(_T1C,sizeof(char),_T1D);return _T1E;}}}
# 97
int Cyc_skip_white_space (void){struct Cyc___cycFILE*_T0;int _T1;int _T2;struct Cyc___cycFILE*_T3;struct _fat_ptr _T4;struct Cyc___cycFILE*_T5;int _T6;int _T7;struct Cyc___cycFILE*_T8;struct Cyc___cycFILE*_T9;int _TA;struct Cyc___cycFILE*_TB;int _TC;int _TD;struct _fat_ptr _TE;struct Cyc___cycFILE*_TF;struct Cyc___cycFILE*_T10;int _T11;
# 100
register int c;
register int inside;_T0= 
# 103
_check_null(Cyc_finput);c= Cyc_getc(_T0);_TL11:
# 105
 if(1)goto _TLF;else{goto _TL10;}
# 107
_TLF:{int cplus_comment;_T1= c;_T2= (int)_T1;switch(_T2){case 47: _T3= 
# 112
_check_null(Cyc_finput);c= Cyc_getc(_T3);
if(c==42)goto _TL13;if(c==47)goto _TL13;_T4= 
# 115
_tag_fat("unexpected `/' found and ignored",sizeof(char),33U);Cyc_warn(_T4);goto _LL0;_TL13:
# 118
 cplus_comment= c==47;_T5= 
# 120
_check_null(Cyc_finput);c= Cyc_getc(_T5);
# 122
inside= 1;
_TL15: _T6= inside;if(_T6)goto _TL16;else{goto _TL17;}
# 125
_TL16: _T7= cplus_comment;if(_T7)goto _TL18;else{goto _TL1A;}_TL1A: if(c!=42)goto _TL18;
# 127
_TL1B: if(c==42)goto _TL1C;else{goto _TL1D;}
_TL1C: _T8= _check_null(Cyc_finput);c= Cyc_getc(_T8);goto _TL1B;_TL1D:
# 130
 if(c!=47)goto _TL1E;
# 132
inside= 0;_T9= 
_check_null(Cyc_finput);c= Cyc_getc(_T9);goto _TL1F;_TL1E: _TL1F: goto _TL19;
# 136
_TL18: if(c!=10)goto _TL20;
# 138
Cyc_lineno= Cyc_lineno + 1;_TA= cplus_comment;
if(!_TA)goto _TL22;
inside= 0;goto _TL23;_TL22: _TL23: _TB= 
_check_null(Cyc_finput);c= Cyc_getc(_TB);goto _TL21;
# 143
_TL20: _TC= c;_TD= - 1;if(_TC!=_TD)goto _TL24;_TE= 
_tag_fat("unterminated comment",sizeof(char),21U);Cyc_fatal(_TE);goto _TL25;
# 146
_TL24: _TF= _check_null(Cyc_finput);c= Cyc_getc(_TF);_TL25: _TL21: _TL19: goto _TL15;_TL17: goto _LL0;case 10:
# 152
 Cyc_lineno= Cyc_lineno + 1;goto _LL6;case 32: _LL6: goto _LL8;case 9: _LL8: goto _LLA;case 12: _LLA: goto _LLC;case 13: _LLC: _T10= 
# 159
_check_null(Cyc_finput);c= Cyc_getc(_T10);goto _LL0;default: _T11= c;
# 163
return _T11;}_LL0:;}goto _TL11;_TL10:;}
# 169
int Cyc_safegetc(struct Cyc___cycFILE*f){struct Cyc___cycFILE*_T0;int _T1;int _T2;struct _fat_ptr _T3;int _T4;_T0= 
# 171
_check_null(f);{register int c=Cyc_getc(_T0);_T1= c;_T2= - 1;
if(_T1!=_T2)goto _TL26;_T3= 
_tag_fat("Unexpected end of file",sizeof(char),23U);Cyc_fatal(_T3);goto _TL27;_TL26: _TL27: _T4= c;
return _T4;}}
# 183
int Cyc_literalchar(struct _fat_ptr*pp,int*pcode,char term){struct _fat_ptr _T0;int _T1;struct Cyc___cycFILE*_T2;int _T3;char _T4;int _T5;int _T6;int _T7;struct _fat_ptr _T8;int _T9;int _TA;struct Cyc___cycFILE*_TB;int _TC;int _TD;int _TE;int _TF;int _T10;struct _fat_ptr _T11;int _T12;int _T13;struct Cyc___cycFILE*_T14;struct _fat_ptr _T15;int _T16;char _T17;struct _fat_ptr _T18;struct _fat_ptr*_T19;struct _fat_ptr*_T1A;unsigned char*_T1B;char*_T1C;int _T1D;unsigned _T1E;unsigned char*_T1F;char*_T20;struct _fat_ptr*_T21;unsigned char*_T22;char*_T23;unsigned _T24;unsigned char*_T25;char*_T26;struct _fat_ptr*_T27;unsigned char*_T28;char*_T29;unsigned _T2A;unsigned char*_T2B;char*_T2C;struct _fat_ptr*_T2D;unsigned char*_T2E;char*_T2F;unsigned _T30;unsigned char*_T31;char*_T32;struct _fat_ptr*_T33;unsigned char*_T34;char*_T35;unsigned _T36;unsigned char*_T37;char*_T38;struct _fat_ptr*_T39;unsigned char*_T3A;char*_T3B;unsigned _T3C;unsigned char*_T3D;char*_T3E;struct _fat_ptr*_T3F;unsigned char*_T40;char*_T41;unsigned _T42;unsigned char*_T43;char*_T44;struct _fat_ptr*_T45;unsigned char*_T46;char*_T47;unsigned _T48;unsigned char*_T49;char*_T4A;struct _fat_ptr*_T4B;unsigned char*_T4C;char*_T4D;unsigned _T4E;unsigned char*_T4F;char*_T50;struct _fat_ptr*_T51;unsigned char*_T52;char*_T53;unsigned _T54;unsigned char*_T55;char*_T56;struct _fat_ptr*_T57;unsigned char*_T58;char*_T59;unsigned _T5A;unsigned char*_T5B;char*_T5C;struct _fat_ptr*_T5D;unsigned char*_T5E;char*_T5F;unsigned _T60;unsigned char*_T61;char*_T62;struct _fat_ptr*_T63;unsigned char*_T64;char*_T65;unsigned _T66;unsigned char*_T67;char*_T68;struct _fat_ptr*_T69;unsigned char*_T6A;char*_T6B;unsigned _T6C;unsigned char*_T6D;char*_T6E;struct _fat_ptr*_T6F;unsigned char*_T70;char*_T71;unsigned _T72;unsigned char*_T73;char*_T74;struct _fat_ptr*_T75;unsigned char*_T76;char*_T77;unsigned _T78;unsigned char*_T79;char*_T7A;struct _fat_ptr*_T7B;unsigned char*_T7C;char*_T7D;unsigned _T7E;unsigned char*_T7F;char*_T80;struct _fat_ptr*_T81;unsigned char*_T82;char*_T83;unsigned _T84;unsigned char*_T85;char*_T86;struct _fat_ptr*_T87;unsigned char*_T88;char*_T89;unsigned _T8A;unsigned char*_T8B;char*_T8C;struct _fat_ptr*_T8D;unsigned char*_T8E;char*_T8F;unsigned _T90;unsigned char*_T91;char*_T92;struct _fat_ptr*_T93;unsigned char*_T94;char*_T95;int _T96;int _T97;unsigned _T98;unsigned char*_T99;char*_T9A;struct _fat_ptr*_T9B;unsigned char*_T9C;char*_T9D;int _T9E;int _T9F;int _TA0;unsigned _TA1;unsigned char*_TA2;char*_TA3;struct _fat_ptr*_TA4;unsigned char*_TA5;char*_TA6;int _TA7;int _TA8;unsigned _TA9;unsigned char*_TAA;char*_TAB;struct _fat_ptr*_TAC;int*_TAD;int _TAE;
# 185
register int c;
struct _fat_ptr p;
register int code;
int wasquote=0;
# 190
c= Cyc_safegetc(Cyc_finput);
if(c!=10)goto _TL28;_T0= 
# 193
_tag_fat("unescaped newline in constant",sizeof(char),30U);Cyc_warn(_T0);_T1= c;_T2= 
_check_null(Cyc_finput);Cyc_ungetc(_T1,_T2);
code= 63;
wasquote= 1;goto _TL29;
# 198
_TL28: if(c==92)goto _TL2A;
# 200
code= c;_T3= c;_T4= term;_T5= (int)_T4;
if(_T3!=_T5)goto _TL2C;
wasquote= 1;goto _TL2D;_TL2C: _TL2D: goto _TL2B;
# 206
_TL2A: c= Cyc_safegetc(Cyc_finput);
if(c!=116)goto _TL2E;code= 9;goto _TL2F;
_TL2E: if(c!=110)goto _TL30;code= 10;goto _TL31;
_TL30: if(c!=97)goto _TL32;code= 7;goto _TL33;
_TL32: if(c!=114)goto _TL34;code= 13;goto _TL35;
_TL34: if(c!=102)goto _TL36;code= 12;goto _TL37;
_TL36: if(c!=98)goto _TL38;code= 8;goto _TL39;
_TL38: if(c!=118)goto _TL3A;code= 11;goto _TL3B;
_TL3A: if(c!=92)goto _TL3C;code= 92;goto _TL3D;
_TL3C: if(c!=39)goto _TL3E;code= 39;goto _TL3F;
_TL3E: if(c!=34)goto _TL40;code= 34;goto _TL41;
_TL40: if(c > 55)goto _TL42;if(c < 48)goto _TL42;
# 219
code= 0;
_TL44: if(c <= 55)goto _TL47;else{goto _TL46;}_TL47: if(c >= 48)goto _TL45;else{goto _TL46;}
# 222
_TL45: _T6= code * 8;_T7= c - 48;code= _T6 + _T7;
if(code >= 256)goto _TL4A;else{goto _TL4B;}_TL4B: if(code < 0)goto _TL4A;else{goto _TL48;}
# 225
_TL4A: _T8= _tag_fat("octal value outside range 0...255: `\\%o'",sizeof(char),41U);_T9= code;Cyc_warni(_T8,_T9);
code= code & 255;goto _TL46;_TL48:
# 229
 c= Cyc_safegetc(Cyc_finput);goto _TL44;_TL46: _TA= c;_TB= 
# 231
_check_null(Cyc_finput);Cyc_ungetc(_TA,_TB);goto _TL43;
# 233
_TL42: if(c!=120)goto _TL4C;
# 235
c= Cyc_safegetc(Cyc_finput);
code= 0;
_TL4E: if(1)goto _TL4F;else{goto _TL50;}
# 239
_TL4F: if(c < 48)goto _TL51;if(c > 57)goto _TL51;
code= code * 16;_TC= c - 48;code= code + _TC;goto _TL52;
_TL51: if(c < 97)goto _TL53;if(c > 102)goto _TL53;
code= code * 16;_TD= c - 97;_TE= _TD + 10;code= code + _TE;goto _TL54;
_TL53: if(c < 65)goto _TL55;if(c > 70)goto _TL55;
code= code * 16;_TF= c - 65;_T10= _TF + 10;code= code + _T10;goto _TL56;
# 246
_TL55: goto _TL50;_TL56: _TL54: _TL52:
 if(code >= 256)goto _TL59;else{goto _TL5A;}_TL5A: if(code < 0)goto _TL59;else{goto _TL57;}
# 249
_TL59: _T11= _tag_fat("hexadecimal value above 255: `\\x%x'",sizeof(char),36U);_T12= code;Cyc_warni(_T11,_T12);
code= code & 255;goto _TL50;_TL57:
# 253
 c= Cyc_safegetc(Cyc_finput);goto _TL4E;_TL50: _T13= c;_T14= 
# 255
_check_null(Cyc_finput);Cyc_ungetc(_T13,_T14);goto _TL4D;
# 259
_TL4C: _T15= _tag_fat("unknown escape sequence: `\\' followed by `%s'",sizeof(char),46U);_T16= c;_T17= (char)_T16;_T18= 
Cyc_printable_version(_T17);
# 259
Cyc_warns(_T15,_T18);
# 261
code= 63;_TL4D: _TL43: _TL41: _TL3F: _TL3D: _TL3B: _TL39: _TL37: _TL35: _TL33: _TL31: _TL2F: _TL2B: _TL29: _T19= 
# 269
_check_null(pp);p= *_T19;
if(code < 32)goto _TL5B;if(code >= 127)goto _TL5B;_T1A= & p;{struct _fat_ptr _TAF=
_fat_ptr_inplace_plus_post(_T1A,sizeof(char),1);_T1B= _check_fat_subscript(_TAF,sizeof(char),0U);_T1C= (char*)_T1B;{char _TB0=*_T1C;_T1D= code;{char _TB1=(char)_T1D;_T1E= _get_fat_size(_TAF,sizeof(char));if(_T1E!=1U)goto _TL5D;if(_TB0!=0)goto _TL5D;if(_TB1==0)goto _TL5D;_throw_arraybounds();goto _TL5E;_TL5D: _TL5E: _T1F= _TAF.curr;_T20= (char*)_T1F;*_T20= _TB1;}}}goto _TL5C;
_TL5B: if(code!=92)goto _TL5F;_T21= & p;{struct _fat_ptr _TAF=_fat_ptr_inplace_plus_post(_T21,sizeof(char),1);_T22= _TAF.curr;_T23= (char*)_T22;{char _TB0=*_T23;char _TB1='\\';_T24= _get_fat_size(_TAF,sizeof(char));if(_T24!=1U)goto _TL61;if(_TB0!=0)goto _TL61;if(_TB1==0)goto _TL61;_throw_arraybounds();goto _TL62;_TL61: _TL62: _T25= _TAF.curr;_T26= (char*)_T25;*_T26= _TB1;}}_T27= & p;{struct _fat_ptr _TAF=_fat_ptr_inplace_plus_post(_T27,sizeof(char),1);_T28= _TAF.curr;_T29= (char*)_T28;{char _TB0=*_T29;char _TB1='\\';_T2A= _get_fat_size(_TAF,sizeof(char));if(_T2A!=1U)goto _TL63;if(_TB0!=0)goto _TL63;if(_TB1==0)goto _TL63;_throw_arraybounds();goto _TL64;_TL63: _TL64: _T2B= _TAF.curr;_T2C= (char*)_T2B;*_T2C= _TB1;}}goto _TL60;
_TL5F: if(code!=39)goto _TL65;_T2D= & p;{struct _fat_ptr _TAF=_fat_ptr_inplace_plus_post(_T2D,sizeof(char),1);_T2E= _TAF.curr;_T2F= (char*)_T2E;{char _TB0=*_T2F;char _TB1='\\';_T30= _get_fat_size(_TAF,sizeof(char));if(_T30!=1U)goto _TL67;if(_TB0!=0)goto _TL67;if(_TB1==0)goto _TL67;_throw_arraybounds();goto _TL68;_TL67: _TL68: _T31= _TAF.curr;_T32= (char*)_T31;*_T32= _TB1;}}_T33= & p;{struct _fat_ptr _TAF=_fat_ptr_inplace_plus_post(_T33,sizeof(char),1);_T34= _TAF.curr;_T35= (char*)_T34;{char _TB0=*_T35;char _TB1='\'';_T36= _get_fat_size(_TAF,sizeof(char));if(_T36!=1U)goto _TL69;if(_TB0!=0)goto _TL69;if(_TB1==0)goto _TL69;_throw_arraybounds();goto _TL6A;_TL69: _TL6A: _T37= _TAF.curr;_T38= (char*)_T37;*_T38= _TB1;}}goto _TL66;
_TL65: if(code!=34)goto _TL6B;_T39= & p;{struct _fat_ptr _TAF=_fat_ptr_inplace_plus_post(_T39,sizeof(char),1);_T3A= _TAF.curr;_T3B= (char*)_T3A;{char _TB0=*_T3B;char _TB1='\\';_T3C= _get_fat_size(_TAF,sizeof(char));if(_T3C!=1U)goto _TL6D;if(_TB0!=0)goto _TL6D;if(_TB1==0)goto _TL6D;_throw_arraybounds();goto _TL6E;_TL6D: _TL6E: _T3D= _TAF.curr;_T3E= (char*)_T3D;*_T3E= _TB1;}}_T3F= & p;{struct _fat_ptr _TAF=_fat_ptr_inplace_plus_post(_T3F,sizeof(char),1);_T40= _TAF.curr;_T41= (char*)_T40;{char _TB0=*_T41;char _TB1='"';_T42= _get_fat_size(_TAF,sizeof(char));if(_T42!=1U)goto _TL6F;if(_TB0!=0)goto _TL6F;if(_TB1==0)goto _TL6F;_throw_arraybounds();goto _TL70;_TL6F: _TL70: _T43= _TAF.curr;_T44= (char*)_T43;*_T44= _TB1;}}goto _TL6C;
_TL6B: if(code!=9)goto _TL71;_T45= & p;{struct _fat_ptr _TAF=_fat_ptr_inplace_plus_post(_T45,sizeof(char),1);_T46= _check_fat_subscript(_TAF,sizeof(char),0U);_T47= (char*)_T46;{char _TB0=*_T47;char _TB1='\\';_T48= _get_fat_size(_TAF,sizeof(char));if(_T48!=1U)goto _TL73;if(_TB0!=0)goto _TL73;if(_TB1==0)goto _TL73;_throw_arraybounds();goto _TL74;_TL73: _TL74: _T49= _TAF.curr;_T4A= (char*)_T49;*_T4A= _TB1;}}_T4B= & p;{struct _fat_ptr _TAF=_fat_ptr_inplace_plus_post(_T4B,sizeof(char),1);_T4C= _check_fat_subscript(_TAF,sizeof(char),0U);_T4D= (char*)_T4C;{char _TB0=*_T4D;char _TB1='t';_T4E= _get_fat_size(_TAF,sizeof(char));if(_T4E!=1U)goto _TL75;if(_TB0!=0)goto _TL75;if(_TB1==0)goto _TL75;_throw_arraybounds();goto _TL76;_TL75: _TL76: _T4F= _TAF.curr;_T50= (char*)_T4F;*_T50= _TB1;}}goto _TL72;
_TL71: if(code!=10)goto _TL77;_T51= & p;{struct _fat_ptr _TAF=_fat_ptr_inplace_plus_post(_T51,sizeof(char),1);_T52= _check_fat_subscript(_TAF,sizeof(char),0U);_T53= (char*)_T52;{char _TB0=*_T53;char _TB1='\\';_T54= _get_fat_size(_TAF,sizeof(char));if(_T54!=1U)goto _TL79;if(_TB0!=0)goto _TL79;if(_TB1==0)goto _TL79;_throw_arraybounds();goto _TL7A;_TL79: _TL7A: _T55= _TAF.curr;_T56= (char*)_T55;*_T56= _TB1;}}_T57= & p;{struct _fat_ptr _TAF=_fat_ptr_inplace_plus_post(_T57,sizeof(char),1);_T58= _check_fat_subscript(_TAF,sizeof(char),0U);_T59= (char*)_T58;{char _TB0=*_T59;char _TB1='n';_T5A= _get_fat_size(_TAF,sizeof(char));if(_T5A!=1U)goto _TL7B;if(_TB0!=0)goto _TL7B;if(_TB1==0)goto _TL7B;_throw_arraybounds();goto _TL7C;_TL7B: _TL7C: _T5B= _TAF.curr;_T5C= (char*)_T5B;*_T5C= _TB1;}}goto _TL78;
_TL77: if(code!=13)goto _TL7D;_T5D= & p;{struct _fat_ptr _TAF=_fat_ptr_inplace_plus_post(_T5D,sizeof(char),1);_T5E= _check_fat_subscript(_TAF,sizeof(char),0U);_T5F= (char*)_T5E;{char _TB0=*_T5F;char _TB1='\\';_T60= _get_fat_size(_TAF,sizeof(char));if(_T60!=1U)goto _TL7F;if(_TB0!=0)goto _TL7F;if(_TB1==0)goto _TL7F;_throw_arraybounds();goto _TL80;_TL7F: _TL80: _T61= _TAF.curr;_T62= (char*)_T61;*_T62= _TB1;}}_T63= & p;{struct _fat_ptr _TAF=_fat_ptr_inplace_plus_post(_T63,sizeof(char),1);_T64= _check_fat_subscript(_TAF,sizeof(char),0U);_T65= (char*)_T64;{char _TB0=*_T65;char _TB1='r';_T66= _get_fat_size(_TAF,sizeof(char));if(_T66!=1U)goto _TL81;if(_TB0!=0)goto _TL81;if(_TB1==0)goto _TL81;_throw_arraybounds();goto _TL82;_TL81: _TL82: _T67= _TAF.curr;_T68= (char*)_T67;*_T68= _TB1;}}goto _TL7E;
_TL7D: if(code!=11)goto _TL83;_T69= & p;{struct _fat_ptr _TAF=_fat_ptr_inplace_plus_post(_T69,sizeof(char),1);_T6A= _check_fat_subscript(_TAF,sizeof(char),0U);_T6B= (char*)_T6A;{char _TB0=*_T6B;char _TB1='\\';_T6C= _get_fat_size(_TAF,sizeof(char));if(_T6C!=1U)goto _TL85;if(_TB0!=0)goto _TL85;if(_TB1==0)goto _TL85;_throw_arraybounds();goto _TL86;_TL85: _TL86: _T6D= _TAF.curr;_T6E= (char*)_T6D;*_T6E= _TB1;}}_T6F= & p;{struct _fat_ptr _TAF=_fat_ptr_inplace_plus_post(_T6F,sizeof(char),1);_T70= _check_fat_subscript(_TAF,sizeof(char),0U);_T71= (char*)_T70;{char _TB0=*_T71;char _TB1='v';_T72= _get_fat_size(_TAF,sizeof(char));if(_T72!=1U)goto _TL87;if(_TB0!=0)goto _TL87;if(_TB1==0)goto _TL87;_throw_arraybounds();goto _TL88;_TL87: _TL88: _T73= _TAF.curr;_T74= (char*)_T73;*_T74= _TB1;}}goto _TL84;
_TL83: if(code!=8)goto _TL89;_T75= & p;{struct _fat_ptr _TAF=_fat_ptr_inplace_plus_post(_T75,sizeof(char),1);_T76= _check_fat_subscript(_TAF,sizeof(char),0U);_T77= (char*)_T76;{char _TB0=*_T77;char _TB1='\\';_T78= _get_fat_size(_TAF,sizeof(char));if(_T78!=1U)goto _TL8B;if(_TB0!=0)goto _TL8B;if(_TB1==0)goto _TL8B;_throw_arraybounds();goto _TL8C;_TL8B: _TL8C: _T79= _TAF.curr;_T7A= (char*)_T79;*_T7A= _TB1;}}_T7B= & p;{struct _fat_ptr _TAF=_fat_ptr_inplace_plus_post(_T7B,sizeof(char),1);_T7C= _check_fat_subscript(_TAF,sizeof(char),0U);_T7D= (char*)_T7C;{char _TB0=*_T7D;char _TB1='b';_T7E= _get_fat_size(_TAF,sizeof(char));if(_T7E!=1U)goto _TL8D;if(_TB0!=0)goto _TL8D;if(_TB1==0)goto _TL8D;_throw_arraybounds();goto _TL8E;_TL8D: _TL8E: _T7F= _TAF.curr;_T80= (char*)_T7F;*_T80= _TB1;}}goto _TL8A;
_TL89: if(code!=12)goto _TL8F;_T81= & p;{struct _fat_ptr _TAF=_fat_ptr_inplace_plus_post(_T81,sizeof(char),1);_T82= _check_fat_subscript(_TAF,sizeof(char),0U);_T83= (char*)_T82;{char _TB0=*_T83;char _TB1='\\';_T84= _get_fat_size(_TAF,sizeof(char));if(_T84!=1U)goto _TL91;if(_TB0!=0)goto _TL91;if(_TB1==0)goto _TL91;_throw_arraybounds();goto _TL92;_TL91: _TL92: _T85= _TAF.curr;_T86= (char*)_T85;*_T86= _TB1;}}_T87= & p;{struct _fat_ptr _TAF=_fat_ptr_inplace_plus_post(_T87,sizeof(char),1);_T88= _check_fat_subscript(_TAF,sizeof(char),0U);_T89= (char*)_T88;{char _TB0=*_T89;char _TB1='f';_T8A= _get_fat_size(_TAF,sizeof(char));if(_T8A!=1U)goto _TL93;if(_TB0!=0)goto _TL93;if(_TB1==0)goto _TL93;_throw_arraybounds();goto _TL94;_TL93: _TL94: _T8B= _TAF.curr;_T8C= (char*)_T8B;*_T8C= _TB1;}}goto _TL90;
# 283
_TL8F: _T8D= & p;{struct _fat_ptr _TAF=_fat_ptr_inplace_plus_post(_T8D,sizeof(char),1);_T8E= _check_fat_subscript(_TAF,sizeof(char),0U);_T8F= (char*)_T8E;{char _TB0=*_T8F;char _TB1='\\';_T90= _get_fat_size(_TAF,sizeof(char));if(_T90!=1U)goto _TL95;if(_TB0!=0)goto _TL95;if(_TB1==0)goto _TL95;_throw_arraybounds();goto _TL96;_TL95: _TL96: _T91= _TAF.curr;_T92= (char*)_T91;*_T92= _TB1;}}_T93= & p;{struct _fat_ptr _TAF=
_fat_ptr_inplace_plus_post(_T93,sizeof(char),1);_T94= _check_fat_subscript(_TAF,sizeof(char),0U);_T95= (char*)_T94;{char _TB0=*_T95;_T96= code / 64;_T97= _T96 + 48;{char _TB1=(char)_T97;_T98= _get_fat_size(_TAF,sizeof(char));if(_T98!=1U)goto _TL97;if(_TB0!=0)goto _TL97;if(_TB1==0)goto _TL97;_throw_arraybounds();goto _TL98;_TL97: _TL98: _T99= _TAF.curr;_T9A= (char*)_T99;*_T9A= _TB1;}}}_T9B= & p;{struct _fat_ptr _TAF=
_fat_ptr_inplace_plus_post(_T9B,sizeof(char),1);_T9C= _check_fat_subscript(_TAF,sizeof(char),0U);_T9D= (char*)_T9C;{char _TB0=*_T9D;_T9E= code / 8;_T9F= _T9E & 7;_TA0= _T9F + 48;{char _TB1=(char)_TA0;_TA1= _get_fat_size(_TAF,sizeof(char));if(_TA1!=1U)goto _TL99;if(_TB0!=0)goto _TL99;if(_TB1==0)goto _TL99;_throw_arraybounds();goto _TL9A;_TL99: _TL9A: _TA2= _TAF.curr;_TA3= (char*)_TA2;*_TA3= _TB1;}}}_TA4= & p;{struct _fat_ptr _TAF=
_fat_ptr_inplace_plus_post(_TA4,sizeof(char),1);_TA5= _check_fat_subscript(_TAF,sizeof(char),0U);_TA6= (char*)_TA5;{char _TB0=*_TA6;_TA7= code & 7;_TA8= _TA7 + 48;{char _TB1=(char)_TA8;_TA9= _get_fat_size(_TAF,sizeof(char));if(_TA9!=1U)goto _TL9B;if(_TB0!=0)goto _TL9B;if(_TB1==0)goto _TL9B;_throw_arraybounds();goto _TL9C;_TL9B: _TL9C: _TAA= _TAF.curr;_TAB= (char*)_TAA;*_TAB= _TB1;}}}_TL90: _TL8A: _TL84: _TL7E: _TL78: _TL72: _TL6C: _TL66: _TL60: _TL5C: _TAC= pp;
# 288
*_TAC= p;_TAD= 
_check_null(pcode);*_TAD= code;_TAE= !wasquote;
return _TAE;}
# 294
void Cyc_unlex(int token){
# 298
Cyc_unlexed= token;
Cyc_unlexed_symval= Cyc_symval;}
# 303
int Cyc_lex (void){int _T0;unsigned char*_T1;char*_T2;int _T3;unsigned _T4;unsigned char*_T5;char*_T6;struct _fat_ptr _T7;unsigned char*_T8;char*_T9;unsigned _TA;unsigned char*_TB;char*_TC;int _TD;int _TE;struct _fat_ptr _TF;struct _fat_ptr _T10;int _T11;struct _fat_ptr _T12;unsigned char*_T13;char*_T14;struct _fat_ptr _T15;int _T16;struct _fat_ptr _T17;unsigned char*_T18;char*_T19;struct _fat_ptr*_T1A;unsigned char*_T1B;char*_T1C;int _T1D;unsigned _T1E;unsigned char*_T1F;char*_T20;struct Cyc___cycFILE*_T21;unsigned char*_T22;char*_T23;unsigned _T24;unsigned char*_T25;char*_T26;int _T27;struct Cyc___cycFILE*_T28;int _T29;struct _fat_ptr _T2A;unsigned char*_T2B;char*_T2C;struct _fat_ptr _T2D;int _T2E;struct _fat_ptr _T2F;unsigned char*_T30;char*_T31;struct _fat_ptr*_T32;unsigned char*_T33;char*_T34;int _T35;unsigned _T36;unsigned char*_T37;char*_T38;int _T39;int _T3A;int _T3B;struct Cyc___cycFILE*_T3C;unsigned char*_T3D;char*_T3E;unsigned _T3F;unsigned char*_T40;char*_T41;int _T42;struct Cyc___cycFILE*_T43;struct _fat_ptr*_T44;unsigned char*_T45;char*_T46;unsigned _T47;unsigned char*_T48;char*_T49;struct _fat_ptr*_T4A;struct _fat_ptr*_T4B;int*_T4C;char*_T4D;char*_T4E;unsigned _T4F;unsigned _T50;struct _fat_ptr _T51;struct _fat_ptr*_T52;struct _fat_ptr*_T53;int*_T54;int _T55;struct _fat_ptr*_T56;unsigned char*_T57;char*_T58;unsigned _T59;unsigned char*_T5A;char*_T5B;unsigned char*_T5C;char*_T5D;unsigned _T5E;unsigned char*_T5F;char*_T60;struct Cyc_bucket*_T61;struct Cyc_bucket*_T62;short _T63;int _T64;struct Cyc_bucket*_T65;int _T66;struct _fat_ptr*_T67;unsigned char*_T68;char*_T69;unsigned _T6A;unsigned char*_T6B;char*_T6C;struct _fat_ptr*_T6D;struct _fat_ptr*_T6E;int*_T6F;int _T70;struct _fat_ptr _T71;unsigned char*_T72;char*_T73;struct _fat_ptr _T74;int _T75;struct _fat_ptr _T76;unsigned char*_T77;char*_T78;unsigned char*_T79;char*_T7A;unsigned _T7B;unsigned char*_T7C;char*_T7D;struct Cyc_bucket*_T7E;struct Cyc___cycFILE*_T7F;struct _fat_ptr _T80;struct _fat_ptr _T81;int _T82;struct Cyc___cycFILE*_T83;struct Cyc___cycFILE*_T84;int _T85;int _T86;struct _fat_ptr _T87;struct _fat_ptr _T88;int _T89;struct Cyc___cycFILE*_T8A;struct _fat_ptr _T8B;struct _fat_ptr _T8C;unsigned char*_T8D;char*_T8E;struct _fat_ptr _T8F;int _T90;struct _fat_ptr _T91;unsigned char*_T92;char*_T93;struct _fat_ptr*_T94;unsigned char*_T95;char*_T96;int _T97;unsigned _T98;unsigned char*_T99;char*_T9A;struct Cyc___cycFILE*_T9B;unsigned char*_T9C;char*_T9D;unsigned _T9E;unsigned char*_T9F;char*_TA0;int _TA1;
# 306
register int c;
struct _fat_ptr p;
# 309
if(Cyc_unlexed < 0)goto _TL9D;
# 311
Cyc_symval= Cyc_unlexed_symval;
c= Cyc_unlexed;
Cyc_unlexed= - 1;_T0= c;
return _T0;_TL9D:
# 317
 c= Cyc_skip_white_space();{struct _fat_ptr _TA2=Cyc_token_buffer;_T1= _check_fat_subscript(_TA2,sizeof(char),0U);_T2= (char*)_T1;{char _TA3=*_T2;_T3= c;{char _TA4=(char)_T3;_T4= _get_fat_size(_TA2,sizeof(char));if(_T4!=1U)goto _TL9F;if(_TA3!=0)goto _TL9F;if(_TA4==0)goto _TL9F;_throw_arraybounds();goto _TLA0;_TL9F: _TLA0: _T5= _TA2.curr;_T6= (char*)_T5;*_T6= _TA4;}}}_T7= Cyc_token_buffer;{struct _fat_ptr _TA2=_fat_ptr_plus(_T7,sizeof(char),1);_T8= _check_fat_subscript(_TA2,sizeof(char),0U);_T9= (char*)_T8;{char _TA3=*_T9;char _TA4='\000';_TA= _get_fat_size(_TA2,sizeof(char));if(_TA!=1U)goto _TLA1;if(_TA3!=0)goto _TLA1;if(_TA4==0)goto _TLA1;_throw_arraybounds();goto _TLA2;_TLA1: _TLA2: _TB= _TA2.curr;_TC= (char*)_TB;*_TC= _TA4;}}_TD= c;_TE= (int)_TD;switch(_TE){case -1: _TF= Cyc_token_buffer;_T10= 
# 324
_tag_fat("EOF",sizeof(char),4U);Cyc_strcpy(_TF,_T10);
return 0;case 65: goto _LL6;case 66: _LL6: goto _LL8;case 67: _LL8: goto _LLA;case 68: _LLA: goto _LLC;case 69: _LLC: goto _LLE;case 70: _LLE: goto _LL10;case 71: _LL10: goto _LL12;case 72: _LL12: goto _LL14;case 73: _LL14: goto _LL16;case 74: _LL16: goto _LL18;case 75: _LL18: goto _LL1A;case 76: _LL1A: goto _LL1C;case 77: _LL1C: goto _LL1E;case 78: _LL1E: goto _LL20;case 79: _LL20: goto _LL22;case 80: _LL22: goto _LL24;case 81: _LL24: goto _LL26;case 82: _LL26: goto _LL28;case 83: _LL28: goto _LL2A;case 84: _LL2A: goto _LL2C;case 85: _LL2C: goto _LL2E;case 86: _LL2E: goto _LL30;case 87: _LL30: goto _LL32;case 88: _LL32: goto _LL34;case 89: _LL34: goto _LL36;case 90: _LL36: goto _LL38;case 97: _LL38: goto _LL3A;case 98: _LL3A: goto _LL3C;case 99: _LL3C: goto _LL3E;case 100: _LL3E: goto _LL40;case 101: _LL40: goto _LL42;case 102: _LL42: goto _LL44;case 103: _LL44: goto _LL46;case 104: _LL46: goto _LL48;case 105: _LL48: goto _LL4A;case 106: _LL4A: goto _LL4C;case 107: _LL4C: goto _LL4E;case 108: _LL4E: goto _LL50;case 109: _LL50: goto _LL52;case 110: _LL52: goto _LL54;case 111: _LL54: goto _LL56;case 112: _LL56: goto _LL58;case 113: _LL58: goto _LL5A;case 114: _LL5A: goto _LL5C;case 115: _LL5C: goto _LL5E;case 116: _LL5E: goto _LL60;case 117: _LL60: goto _LL62;case 118: _LL62: goto _LL64;case 119: _LL64: goto _LL66;case 120: _LL66: goto _LL68;case 121: _LL68: goto _LL6A;case 122: _LL6A: goto _LL6C;case 46: _LL6C: goto _LL6E;case 95: _LL6E:
# 340
 p= Cyc_token_buffer;
_TLA4: _T11= isalnum(c);if(_T11)goto _TLA5;else{goto _TLA8;}_TLA8: if(c==95)goto _TLA5;else{goto _TLA7;}_TLA7: if(c==46)goto _TLA5;else{goto _TLA6;}
# 343
_TLA5: _T12= p;_T13= _T12.curr;_T14= (char*)_T13;_T15= Cyc_token_buffer;_T16= Cyc_maxtoken;_T17= _fat_ptr_plus(_T15,sizeof(char),_T16);_T18= _T17.curr;_T19= (char*)_T18;if(_T14!=_T19)goto _TLA9;
p= Cyc_grow_token_buffer(p);goto _TLAA;_TLA9: _TLAA: _T1A= & p;{struct _fat_ptr _TA2=
# 346
_fat_ptr_inplace_plus_post(_T1A,sizeof(char),1);_T1B= _check_fat_subscript(_TA2,sizeof(char),0U);_T1C= (char*)_T1B;{char _TA3=*_T1C;_T1D= c;{char _TA4=(char)_T1D;_T1E= _get_fat_size(_TA2,sizeof(char));if(_T1E!=1U)goto _TLAB;if(_TA3!=0)goto _TLAB;if(_TA4==0)goto _TLAB;_throw_arraybounds();goto _TLAC;_TLAB: _TLAC: _T1F= _TA2.curr;_T20= (char*)_T1F;*_T20= _TA4;}}}_T21= 
_check_null(Cyc_finput);c= Cyc_getc(_T21);goto _TLA4;_TLA6:{struct _fat_ptr _TA2=p;_T22= _check_fat_subscript(_TA2,sizeof(char),0U);_T23= (char*)_T22;{char _TA3=*_T23;char _TA4='\000';_T24= _get_fat_size(_TA2,sizeof(char));if(_T24!=1U)goto _TLAD;if(_TA3!=0)goto _TLAD;if(_TA4==0)goto _TLAD;_throw_arraybounds();goto _TLAE;_TLAD: _TLAE: _T25= _TA2.curr;_T26= (char*)_T25;*_T26= _TA4;}}_T27= c;_T28= 
# 351
_check_null(Cyc_finput);Cyc_ungetc(_T27,_T28);
Cyc_symval= Cyc_getsym(Cyc_token_buffer);
return 1;case 48: goto _LL72;case 49: _LL72: goto _LL74;case 50: _LL74: goto _LL76;case 51: _LL76: goto _LL78;case 52: _LL78: goto _LL7A;case 53: _LL7A: goto _LL7C;case 54: _LL7C: goto _LL7E;case 55: _LL7E: goto _LL80;case 56: _LL80: goto _LL82;case 57: _LL82:
# 358
 Cyc_numval= 0;
# 360
p= Cyc_token_buffer;
_TLAF: _T29= isdigit(c);if(_T29)goto _TLB0;else{goto _TLB1;}
# 363
_TLB0: _T2A= p;_T2B= _T2A.curr;_T2C= (char*)_T2B;_T2D= Cyc_token_buffer;_T2E= Cyc_maxtoken;_T2F= _fat_ptr_plus(_T2D,sizeof(char),_T2E);_T30= _T2F.curr;_T31= (char*)_T30;if(_T2C!=_T31)goto _TLB2;
p= Cyc_grow_token_buffer(p);goto _TLB3;_TLB2: _TLB3: _T32= & p;{struct _fat_ptr _TA2=
# 366
_fat_ptr_inplace_plus_post(_T32,sizeof(char),1);_T33= _check_fat_subscript(_TA2,sizeof(char),0U);_T34= (char*)_T33;{char _TA3=*_T34;_T35= c;{char _TA4=(char)_T35;_T36= _get_fat_size(_TA2,sizeof(char));if(_T36!=1U)goto _TLB4;if(_TA3!=0)goto _TLB4;if(_TA4==0)goto _TLB4;_throw_arraybounds();goto _TLB5;_TLB4: _TLB5: _T37= _TA2.curr;_T38= (char*)_T37;*_T38= _TA4;}}}_T39= Cyc_numval * 10;_T3A= c;_T3B= _T39 + _T3A;
Cyc_numval= _T3B - 48;_T3C= 
_check_null(Cyc_finput);c= Cyc_getc(_T3C);goto _TLAF;_TLB1:{struct _fat_ptr _TA2=p;_T3D= _check_fat_subscript(_TA2,sizeof(char),0U);_T3E= (char*)_T3D;{char _TA3=*_T3E;char _TA4='\000';_T3F= _get_fat_size(_TA2,sizeof(char));if(_T3F!=1U)goto _TLB6;if(_TA3!=0)goto _TLB6;if(_TA4==0)goto _TLB6;_throw_arraybounds();goto _TLB7;_TLB6: _TLB7: _T40= _TA2.curr;_T41= (char*)_T40;*_T41= _TA4;}}_T42= c;_T43= 
# 371
_check_null(Cyc_finput);Cyc_ungetc(_T42,_T43);
return 22;case 39:
# 379
 Cyc_translations= - 1;{
# 381
int code=0;int discode=0;
struct _fat_ptr discard;struct _fat_ptr dp;
p= Cyc_token_buffer;_T44= & p;{struct _fat_ptr _TA2=
_fat_ptr_inplace_plus_post(_T44,sizeof(char),1);_T45= _check_fat_subscript(_TA2,sizeof(char),0U);_T46= (char*)_T45;{char _TA3=*_T46;char _TA4='\'';_T47= _get_fat_size(_TA2,sizeof(char));if(_T47!=1U)goto _TLB8;if(_TA3!=0)goto _TLB8;if(_TA4==0)goto _TLB8;_throw_arraybounds();goto _TLB9;_TLB8: _TLB9: _T48= _TA2.curr;_T49= (char*)_T48;*_T49= _TA4;}}_T4A= & p;_T4B= (struct _fat_ptr*)_T4A;_T4C= & code;
Cyc_literalchar(_T4B,_T4C,'\'');{unsigned _TA2=10U + 1U;_T4F= _check_times(_TA2,sizeof(char));{char*_TA3=_cycalloc_atomic(_T4F);{unsigned _TA4=_TA2;unsigned _new2_cyclone;_new2_cyclone= 0;_TLBD: if(_new2_cyclone < _TA4)goto _TLBB;else{goto _TLBC;}_TLBB: _T50= _new2_cyclone;
_TA3[_T50]= '\000';_new2_cyclone= _new2_cyclone + 1;goto _TLBD;_TLBC: _TA3[_TA4]= 0;}_T4E= (char*)_TA3;}_T4D= _T4E;}discard= _tag_fat(_T4D,sizeof(char),11U);
c= Cyc_getc(Cyc_finput);
if(c==39)goto _TLBE;_T51= 
# 390
_tag_fat("use \"...\" for multi-character literal tokens",sizeof(char),45U);Cyc_warn(_T51);
dp= discard;
_TLC0: _T52= & dp;_T53= (struct _fat_ptr*)_T52;_T54= & discode;_T55= Cyc_literalchar(_T53,_T54,'\'');if(_T55)goto _TLC1;else{goto _TLC2;}_TLC1: goto _TLC0;_TLC2: goto _TLBF;_TLBE: _TLBF: _T56= & p;{struct _fat_ptr _TA2=
# 394
_fat_ptr_inplace_plus_post(_T56,sizeof(char),1);_T57= _TA2.curr;_T58= (char*)_T57;{char _TA3=*_T58;char _TA4='\'';_T59= _get_fat_size(_TA2,sizeof(char));if(_T59!=1U)goto _TLC3;if(_TA3!=0)goto _TLC3;if(_TA4==0)goto _TLC3;_throw_arraybounds();goto _TLC4;_TLC3: _TLC4: _T5A= _TA2.curr;_T5B= (char*)_T5A;*_T5B= _TA4;}}{struct _fat_ptr _TA2=p;_T5C= _TA2.curr;_T5D= (char*)_T5C;{char _TA3=*_T5D;char _TA4='\000';_T5E= _get_fat_size(_TA2,sizeof(char));if(_T5E!=1U)goto _TLC5;if(_TA3!=0)goto _TLC5;if(_TA4==0)goto _TLC5;_throw_arraybounds();goto _TLC6;_TLC5: _TLC6: _T5F= _TA2.curr;_T60= (char*)_T5F;*_T60= _TA4;}}
# 396
Cyc_symval= Cyc_getsym(Cyc_token_buffer);_T61= Cyc_symval;
_T61->class= '\001';_T62= Cyc_symval;_T63= _T62->user_token_number;_T64= (int)_T63;
if(_T64)goto _TLC7;else{goto _TLC9;}
_TLC9: _T65= Cyc_symval;_T66= code;_T65->user_token_number= (short)_T66;goto _TLC8;_TLC7: _TLC8:
 return 1;}case 34:
# 407
 Cyc_translations= - 1;{
# 409
int code=0;
p= Cyc_token_buffer;_T67= & p;{struct _fat_ptr _TA2=
_fat_ptr_inplace_plus_post(_T67,sizeof(char),1);_T68= _check_fat_subscript(_TA2,sizeof(char),0U);_T69= (char*)_T68;{char _TA3=*_T69;char _TA4='"';_T6A= _get_fat_size(_TA2,sizeof(char));if(_T6A!=1U)goto _TLCA;if(_TA3!=0)goto _TLCA;if(_TA4==0)goto _TLCA;_throw_arraybounds();goto _TLCB;_TLCA: _TLCB: _T6B= _TA2.curr;_T6C= (char*)_T6B;*_T6C= _TA4;}}
_TLCC: _T6D= & p;_T6E= (struct _fat_ptr*)_T6D;_T6F= & code;_T70= Cyc_literalchar(_T6E,_T6F,'"');if(_T70)goto _TLCD;else{goto _TLCE;}
# 414
_TLCD: _T71= p;_T72= _T71.curr;_T73= (char*)_T72;_T74= Cyc_token_buffer;_T75= Cyc_maxtoken - 4;_T76= _fat_ptr_plus(_T74,sizeof(char),_T75);_T77= _T76.curr;_T78= (char*)_T77;if(_T73 < _T78)goto _TLCF;
p= Cyc_grow_token_buffer(p);goto _TLD0;_TLCF: _TLD0: goto _TLCC;_TLCE:{struct _fat_ptr _TA2=p;_T79= _check_fat_subscript(_TA2,sizeof(char),0U);_T7A= (char*)_T79;{char _TA3=*_T7A;char _TA4='\000';_T7B= _get_fat_size(_TA2,sizeof(char));if(_T7B!=1U)goto _TLD1;if(_TA3!=0)goto _TLD1;if(_TA4==0)goto _TLD1;_throw_arraybounds();goto _TLD2;_TLD1: _TLD2: _T7C= _TA2.curr;_T7D= (char*)_T7C;*_T7D= _TA4;}}
# 419
Cyc_symval= Cyc_getsym(Cyc_token_buffer);_T7E= 
_check_null(Cyc_symval);_T7E->class= '\001';
# 422
return 1;}case 44:
# 426
 return 2;case 58:
# 429
 return 3;case 59:
# 432
 return 4;case 124:
# 435
 return 5;case 123:
# 438
 return 6;case 61:
# 443
 _TLD3: _T7F= _check_null(Cyc_finput);c= Cyc_getc(_T7F);
if(c!=10)goto _TLD5;Cyc_lineno= Cyc_lineno + 1;goto _TLD6;_TLD5: _TLD6:
# 441
 if(c==32)goto _TLD3;else{goto _TLD8;}_TLD8: if(c==10)goto _TLD3;else{goto _TLD7;}_TLD7: if(c==9)goto _TLD3;else{goto _TLD4;}_TLD4:
# 448
 if(c!=123)goto _TLD9;_T80= Cyc_token_buffer;_T81= 
# 450
_tag_fat("={",sizeof(char),3U);Cyc_strcpy(_T80,_T81);
return 6;
# 455
_TLD9: _T82= c;_T83= _check_null(Cyc_finput);Cyc_ungetc(_T82,_T83);
return 28;case 60:  {
# 460
int level=0;
p= Cyc_token_buffer;_T84= 
_check_null(Cyc_finput);c= Cyc_getc(_T84);
_TLDB: if(c!=62)goto _TLDC;else{goto _TLDE;}_TLDE: if(level > 0)goto _TLDC;else{goto _TLDD;}
# 465
_TLDC: _T85= c;_T86= - 1;if(_T85!=_T86)goto _TLDF;_T87= 
_tag_fat("unterminated type name at end of file",sizeof(char),38U);Cyc_fatal(_T87);goto _TLE0;_TLDF: _TLE0:
 if(c!=10)goto _TLE1;_T88= 
# 469
_tag_fat("unterminated type name",sizeof(char),23U);Cyc_warn(_T88);_T89= c;_T8A= 
_check_null(Cyc_finput);Cyc_ungetc(_T89,_T8A);goto _TLDD;_TLE1:
# 473
 if(c!=60)goto _TLE3;
# 475
level= level + 1;goto _TLE4;_TLE3: _TLE4:
# 477
 if(c!=62)goto _TLE5;
# 479
level= level + -1;
if(level >= 0)goto _TLE7;_T8B= 
_tag_fat("unmatched <> inside type definition",sizeof(char),36U);Cyc_warn(_T8B);
Cyc_ungetc(c,Cyc_finput);goto _TLDD;_TLE7: goto _TLE6;_TLE5: _TLE6: _T8C= p;_T8D= _T8C.curr;_T8E= (char*)_T8D;_T8F= Cyc_token_buffer;_T90= Cyc_maxtoken;_T91= 
# 487
_fat_ptr_plus(_T8F,sizeof(char),_T90);_T92= _T91.curr;_T93= (char*)_T92;if(_T8E!=_T93)goto _TLE9;
p= Cyc_grow_token_buffer(p);goto _TLEA;_TLE9: _TLEA: _T94= & p;{struct _fat_ptr _TA2=
# 490
_fat_ptr_inplace_plus_post(_T94,sizeof(char),1);_T95= _check_fat_subscript(_TA2,sizeof(char),0U);_T96= (char*)_T95;{char _TA3=*_T96;_T97= c;{char _TA4=(char)_T97;_T98= _get_fat_size(_TA2,sizeof(char));if(_T98!=1U)goto _TLEB;if(_TA3!=0)goto _TLEB;if(_TA4==0)goto _TLEB;_throw_arraybounds();goto _TLEC;_TLEB: _TLEC: _T99= _TA2.curr;_T9A= (char*)_T99;*_T9A= _TA4;}}}_T9B= 
_check_null(Cyc_finput);c= Cyc_getc(_T9B);goto _TLDB;_TLDD:{struct _fat_ptr _TA2=p;_T9C= _check_fat_subscript(_TA2,sizeof(char),0U);_T9D= (char*)_T9C;{char _TA3=*_T9D;char _TA4='\000';_T9E= _get_fat_size(_TA2,sizeof(char));if(_T9E!=1U)goto _TLED;if(_TA3!=0)goto _TLED;if(_TA4==0)goto _TLED;_throw_arraybounds();goto _TLEE;_TLED: _TLEE: _T9F= _TA2.curr;_TA0= (char*)_T9F;*_TA0= _TA4;}}
# 494
return 21;}case 37: _TA1= 
# 498
Cyc_parse_percent_token();return _TA1;default:
# 501
 return 28;};}struct Cyc_percent_table_struct{struct _fat_ptr name;void*setflag;int retval;};static char _TmpG0[6U]="token";static char _TmpG1[5U]="term";static char _TmpG2[6U]="nterm";static char _TmpG3[5U]="type";static char _TmpG4[6U]="guard";static char _TmpG5[6U]="union";static char _TmpG6[7U]="expect";static char _TmpG7[10U]="expect_rr";static char _TmpG8[6U]="thong";static char _TmpG9[6U]="start";static char _TmpGA[5U]="left";static char _TmpGB[6U]="right";static char _TmpGC[9U]="nonassoc";static char _TmpGD[7U]="binary";static char _TmpGE[16U]="semantic_parser";static char _TmpGF[12U]="pure_parser";static char _TmpG10[5U]="prec";static char _TmpG11[9U]="no_lines";static char _TmpG12[4U]="raw";static char _TmpG13[12U]="token_table";
# 514
struct Cyc_percent_table_struct Cyc_percent_table[21U]={{{(unsigned char*)_TmpG0,(unsigned char*)_TmpG0,(unsigned char*)_TmpG0 + 6U},0,9},{{(unsigned char*)_TmpG1,(unsigned char*)_TmpG1,(unsigned char*)_TmpG1 + 5U},0,9},{{(unsigned char*)_TmpG2,(unsigned char*)_TmpG2,(unsigned char*)_TmpG2 + 6U},0,10},{{(unsigned char*)_TmpG3,(unsigned char*)_TmpG3,(unsigned char*)_TmpG3 + 5U},0,12},{{(unsigned char*)_TmpG4,(unsigned char*)_TmpG4,(unsigned char*)_TmpG4 + 6U},0,11},{{(unsigned char*)_TmpG5,(unsigned char*)_TmpG5,(unsigned char*)_TmpG5 + 6U},0,13},{{(unsigned char*)_TmpG6,(unsigned char*)_TmpG6,(unsigned char*)_TmpG6 + 7U},0,23},{{(unsigned char*)_TmpG7,(unsigned char*)_TmpG7,(unsigned char*)_TmpG7 + 10U},0,24},{{(unsigned char*)_TmpG8,(unsigned char*)_TmpG8,(unsigned char*)_TmpG8 + 6U},0,25},{{(unsigned char*)_TmpG9,(unsigned char*)_TmpG9,(unsigned char*)_TmpG9 + 6U},0,14},{{(unsigned char*)_TmpGA,(unsigned char*)_TmpGA,(unsigned char*)_TmpGA + 5U},0,15},{{(unsigned char*)_TmpGB,(unsigned char*)_TmpGB,(unsigned char*)_TmpGB + 6U},0,16},{{(unsigned char*)_TmpGC,(unsigned char*)_TmpGC,(unsigned char*)_TmpGC + 9U},0,17},{{(unsigned char*)_TmpGD,(unsigned char*)_TmpGD,(unsigned char*)_TmpGD + 7U},0,17},{{(unsigned char*)_TmpGE,(unsigned char*)_TmpGE,(unsigned char*)_TmpGE + 16U},0,19},{{(unsigned char*)_TmpGF,(unsigned char*)_TmpGF,(unsigned char*)_TmpGF + 12U},0,20},{{(unsigned char*)_TmpG10,(unsigned char*)_TmpG10,(unsigned char*)_TmpG10 + 5U},0,18},{{(unsigned char*)_TmpG11,(unsigned char*)_TmpG11,(unsigned char*)_TmpG11 + 9U},(void*)& Cyc_nolinesflag,26},{{(unsigned char*)_TmpG12,(unsigned char*)_TmpG12,(unsigned char*)_TmpG12 + 4U},(void*)& Cyc_rawtoknumflag,26},{{(unsigned char*)_TmpG13,(unsigned char*)_TmpG13,(unsigned char*)_TmpG13 + 12U},(void*)& Cyc_toknumflag,26},{{(void*)0,(void*)0,(void*)(0 + 0)},0,28}};
# 565 "cyclone/tools/bison/lex.cyc"
int Cyc_parse_percent_token (void){struct Cyc___cycFILE*_T0;struct _fat_ptr*_T1;unsigned char*_T2;char*_T3;unsigned _T4;unsigned char*_T5;char*_T6;struct _fat_ptr*_T7;unsigned char*_T8;char*_T9;int _TA;unsigned _TB;unsigned char*_TC;char*_TD;unsigned char*_TE;char*_TF;unsigned _T10;unsigned char*_T11;char*_T12;int _T13;int _T14;int _T15;struct _fat_ptr*_T16;unsigned char*_T17;char*_T18;unsigned _T19;unsigned char*_T1A;char*_T1B;int _T1C;struct _fat_ptr _T1D;unsigned char*_T1E;char*_T1F;struct _fat_ptr _T20;int _T21;struct _fat_ptr _T22;unsigned char*_T23;char*_T24;struct _fat_ptr*_T25;unsigned char*_T26;char*_T27;int _T28;unsigned _T29;unsigned char*_T2A;char*_T2B;struct Cyc___cycFILE*_T2C;int _T2D;struct Cyc___cycFILE*_T2E;unsigned char*_T2F;char*_T30;unsigned _T31;unsigned char*_T32;char*_T33;struct Cyc_percent_table_struct*_T34;struct _fat_ptr _T35;unsigned char*_T36;struct Cyc_percent_table_struct*_T37;struct _fat_ptr _T38;unsigned char*_T39;unsigned _T3A;struct _fat_ptr _T3B;struct _fat_ptr _T3C;struct _fat_ptr _T3D;unsigned char*_T3E;struct Cyc_percent_table_struct*_T3F;struct _fat_ptr _T40;int _T41;struct _fat_ptr*_T42;struct _fat_ptr _T43;unsigned char*_T44;struct Cyc_percent_table_struct*_T45;int _T46;
# 568
register int c;
struct _fat_ptr p;
struct _fat_ptr tx;
# 572
p= Cyc_token_buffer;_T0= 
_check_null(Cyc_finput);c= Cyc_getc(_T0);_T1= & p;{struct _fat_ptr _T47=
_fat_ptr_inplace_plus_post(_T1,sizeof(char),1);_T2= _check_fat_subscript(_T47,sizeof(char),0U);_T3= (char*)_T2;{char _T48=*_T3;char _T49='%';_T4= _get_fat_size(_T47,sizeof(char));if(_T4!=1U)goto _TLEF;if(_T48!=0)goto _TLEF;if(_T49==0)goto _TLEF;_throw_arraybounds();goto _TLF0;_TLEF: _TLF0: _T5= _T47.curr;_T6= (char*)_T5;*_T6= _T49;}}_T7= & p;{struct _fat_ptr _T47=
_fat_ptr_inplace_plus_post(_T7,sizeof(char),1);_T8= _check_fat_subscript(_T47,sizeof(char),0U);_T9= (char*)_T8;{char _T48=*_T9;_TA= c;{char _T49=(char)_TA;_TB= _get_fat_size(_T47,sizeof(char));if(_TB!=1U)goto _TLF1;if(_T48!=0)goto _TLF1;if(_T49==0)goto _TLF1;_throw_arraybounds();goto _TLF2;_TLF1: _TLF2: _TC= _T47.curr;_TD= (char*)_TC;*_TD= _T49;}}}{struct _fat_ptr _T47=p;_TE= _check_fat_subscript(_T47,sizeof(char),0U);_TF= (char*)_TE;{char _T48=*_TF;char _T49='\000';_T10= _get_fat_size(_T47,sizeof(char));if(_T10!=1U)goto _TLF3;if(_T48!=0)goto _TLF3;if(_T49==0)goto _TLF3;_throw_arraybounds();goto _TLF4;_TLF3: _TLF4: _T11= _T47.curr;_T12= (char*)_T11;*_T12= _T49;}}_T13= c;_T14= (int)_T13;switch(_T14){case 37:
# 581
 return 7;case 123:
# 584
 return 8;case 60:
# 587
 return 15;case 62:
# 590
 return 16;case 50:
# 593
 return 17;case 48:
# 596
 return 9;case 61:
# 599
 return 18;default: goto _LL0;}_LL0: _T15= 
# 604
isalpha(c);if(_T15)goto _TLF6;else{goto _TLF8;}
_TLF8: return 28;_TLF6:
# 607
 p= Cyc_token_buffer;_T16= & p;{struct _fat_ptr _T47=
_fat_ptr_inplace_plus_post(_T16,sizeof(char),1);_T17= _check_fat_subscript(_T47,sizeof(char),0U);_T18= (char*)_T17;{char _T48=*_T18;char _T49='%';_T19= _get_fat_size(_T47,sizeof(char));if(_T19!=1U)goto _TLF9;if(_T48!=0)goto _TLF9;if(_T49==0)goto _TLF9;_throw_arraybounds();goto _TLFA;_TLF9: _TLFA: _T1A= _T47.curr;_T1B= (char*)_T1A;*_T1B= _T49;}}
_TLFB: _T1C= isalpha(c);if(_T1C)goto _TLFC;else{goto _TLFF;}_TLFF: if(c==95)goto _TLFC;else{goto _TLFE;}_TLFE: if(c==45)goto _TLFC;else{goto _TLFD;}
# 611
_TLFC: _T1D= p;_T1E= _T1D.curr;_T1F= (char*)_T1E;_T20= Cyc_token_buffer;_T21= Cyc_maxtoken;_T22= _fat_ptr_plus(_T20,sizeof(char),_T21);_T23= _T22.curr;_T24= (char*)_T23;if(_T1F!=_T24)goto _TL100;
p= Cyc_grow_token_buffer(p);goto _TL101;_TL100: _TL101:
# 614
 if(c!=45)goto _TL102;c= 95;goto _TL103;_TL102: _TL103: _T25= & p;{struct _fat_ptr _T47=
_fat_ptr_inplace_plus_post(_T25,sizeof(char),1);_T26= _check_fat_subscript(_T47,sizeof(char),0U);_T27= (char*)_T26;{char _T48=*_T27;_T28= c;{char _T49=(char)_T28;_T29= _get_fat_size(_T47,sizeof(char));if(_T29!=1U)goto _TL104;if(_T48!=0)goto _TL104;if(_T49==0)goto _TL104;_throw_arraybounds();goto _TL105;_TL104: _TL105: _T2A= _T47.curr;_T2B= (char*)_T2A;*_T2B= _T49;}}}_T2C= 
_check_null(Cyc_finput);c= Cyc_getc(_T2C);goto _TLFB;_TLFD: _T2D= c;_T2E= 
# 619
_check_null(Cyc_finput);Cyc_ungetc(_T2D,_T2E);{struct _fat_ptr _T47=p;_T2F= _check_fat_subscript(_T47,sizeof(char),0U);_T30= (char*)_T2F;{char _T48=*_T30;char _T49='\000';_T31= _get_fat_size(_T47,sizeof(char));if(_T31!=1U)goto _TL106;if(_T48!=0)goto _TL106;if(_T49==0)goto _TL106;_throw_arraybounds();goto _TL107;_TL106: _TL107: _T32= _T47.curr;_T33= (char*)_T32;*_T33= _T49;}}_T34= Cyc_percent_table;
# 624
tx= _tag_fat(_T34,sizeof(struct Cyc_percent_table_struct),21U);_TL10B: _T35= tx;_T36= _check_fat_subscript(_T35,sizeof(struct Cyc_percent_table_struct),0U);_T37= (struct Cyc_percent_table_struct*)_T36;_T38= _T37->name;_T39= _T38.curr;_T3A= (unsigned)_T39;if(_T3A)goto _TL109;else{goto _TL10A;}
_TL109: _T3B= Cyc_token_buffer;_T3C= _fat_ptr_plus(_T3B,sizeof(char),1);_T3D= tx;_T3E= _T3D.curr;_T3F= (struct Cyc_percent_table_struct*)_T3E;_T40= _T3F->name;_T41= Cyc_strcmp(_T3C,_T40);if(_T41!=0)goto _TL10C;goto _TL10A;_TL10C: _T42= & tx;
# 624
_fat_ptr_inplace_plus(_T42,sizeof(struct Cyc_percent_table_struct),1);goto _TL10B;_TL10A: _T43= tx;_T44= _T43.curr;_T45= (struct Cyc_percent_table_struct*)_T44;_T46= _T45->retval;
# 640
return _T46;}
