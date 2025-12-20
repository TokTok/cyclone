#include <cyc_include.h>
 struct Cyc___cycFILE;struct Cyc_String_pa_PrintArg_struct{int tag;struct _fat_ptr f1;};struct Cyc_Int_pa_PrintArg_struct{int tag;unsigned long f1;};
# 127 "bazel-out/k8-fastbuild/bin/cyclone/library/std/libc/stdio.h"
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
# 161
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 220
extern int Cyc_getc(struct Cyc___cycFILE*);
# 239
extern int Cyc_putc(int,struct Cyc___cycFILE*);
# 258
extern struct _fat_ptr Cyc_rprintf(struct _RegionHandle*,struct _fat_ptr,struct _fat_ptr);
# 277
extern int Cyc_sprintf(struct _fat_ptr,struct _fat_ptr,struct _fat_ptr);
# 306
extern int Cyc_ungetc(int,struct Cyc___cycFILE*);
# 5 "bazel-out/k8-fastbuild/bin/cyclone/library/std/libc/ctype.h"
extern int isalnum(int);
# 13
extern int isdigit(int);struct Cyc___cycFILE;
# 75 "./cyclone/library/std/cycboot.h"
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
# 100
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 142
extern int Cyc_getc(struct Cyc___cycFILE*);
# 161
extern int Cyc_putc(int,struct Cyc___cycFILE*);
# 174
extern struct _fat_ptr Cyc_rprintf(struct _RegionHandle*,struct _fat_ptr,struct _fat_ptr);
# 221
extern int Cyc_ungetc(int,struct Cyc___cycFILE*);
# 280
extern int isalnum(int);
# 288
extern int isdigit(int);
# 40 "./cyclone/library/std/string.h"
extern unsigned long Cyc_strlen(struct _fat_ptr);
# 51
extern int Cyc_strcmp(struct _fat_ptr,struct _fat_ptr);
# 73
extern struct _fat_ptr Cyc_strcpy(struct _fat_ptr,struct _fat_ptr);
# 107
extern struct _fat_ptr Cyc_strdup(struct _fat_ptr);
# 142 "bazel-out/k8-fastbuild/bin/cyclone/library/std/libc/stdlib.h"
extern int atoi(const char*);
# 27 "cyclone/tools/bison/files.h"
extern struct Cyc___cycFILE*Cyc_finput;
# 29
extern struct Cyc___cycFILE*Cyc_fdefines;
extern struct Cyc___cycFILE*Cyc_ftable;
extern struct Cyc___cycFILE*Cyc_fattrs;
# 33
extern struct Cyc___cycFILE*Cyc_fattrs0;
extern struct Cyc___cycFILE*Cyc_fguard;
extern struct Cyc___cycFILE*Cyc_faction;
# 40
extern struct _fat_ptr Cyc_spec_name_prefix;
# 45
extern struct _fat_ptr Cyc_infile;struct Cyc_bucket{struct Cyc_bucket*link;struct Cyc_bucket*next;struct _fat_ptr tag;struct _fat_ptr type_name;short value;short prec;short assoc;short user_token_number;struct Cyc_bucket*_alias;char class;};
# 55 "cyclone/tools/bison/symtab.h"
extern struct Cyc_bucket*Cyc_firstsymbol;
# 57
extern struct Cyc_bucket*Cyc_getsym(struct _fat_ptr);
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
extern struct _fat_ptr Cyc_rprec;
extern struct _fat_ptr Cyc_rprecsym;
extern struct _fat_ptr Cyc_sprec;
extern struct _fat_ptr Cyc_rassoc;
extern struct _fat_ptr Cyc_sassoc;
extern struct _fat_ptr Cyc_rline;
# 92
extern int Cyc_start_symbol;
# 109
extern struct _fat_ptr Cyc_token_translations;
extern int Cyc_translations;
extern int Cyc_max_user_token_number;
# 117
extern int Cyc_semantic_parser;
# 121
extern int Cyc_pure_parser;
# 125
extern int Cyc_error_token_number;
# 81 "cyclone/tools/bison/reader.cyc"
int Cyc_rline_allocated;
# 84
extern int Cyc_definesflag;
extern int Cyc_nolinesflag;
extern int Cyc_noparserflag;
extern int Cyc_rawtoknumflag;
extern struct Cyc_bucket*Cyc_symval;
extern int Cyc_numval;
extern int Cyc_expected_conflicts;
extern int Cyc_expected_rr_conflicts;
extern struct _fat_ptr Cyc_token_buffer;
extern int Cyc_maxtoken;
extern struct _fat_ptr Cyc_grow_token_buffer(struct _fat_ptr);
# 96
extern struct _fat_ptr Cyc_printable_version(char);
extern void Cyc_init_lex (void);
extern void Cyc_tabinit (void);
extern void Cyc_output_headers (void);
extern void Cyc_output_trailers (void);
extern void Cyc_free_symtab (void);
extern void Cyc_open_extra_files (void);
extern struct _fat_ptr Cyc_int_to_string(int);
extern void Cyc_fatal(struct _fat_ptr);
extern void Cyc_fatals(struct _fat_ptr,struct _fat_ptr);
extern void Cyc_warn(struct _fat_ptr);
extern void Cyc_warni(struct _fat_ptr,int);
extern void Cyc_warns(struct _fat_ptr,struct _fat_ptr);
extern void Cyc_warnss(struct _fat_ptr,struct _fat_ptr,struct _fat_ptr);
extern void Cyc_warnsss(struct _fat_ptr,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr);
extern void Cyc_unlex(int);
# 114
extern int Cyc_skip_white_space (void);
extern int Cyc_parse_percent_token (void);
extern int Cyc_lex (void);struct Cyc_symbol_list{struct Cyc_symbol_list*next;struct Cyc_bucket*sym;struct Cyc_bucket*ruleprec;};
# 129
void Cyc_read_declarations (void);
void Cyc_copy_definition (void);
void Cyc_parse_token_decl(int,int);
void Cyc_parse_start_decl (void);
void Cyc_parse_type_decl (void);
void Cyc_parse_assoc_decl(int);
void Cyc_parse_union_decl (void);
void Cyc_print_union_decl (void);
void Cyc_parse_expect_decl (void);
void Cyc_parse_expect_rr_decl (void);
void Cyc_parse_thong_decl (void);
void Cyc_copy_action(struct Cyc_symbol_list*,int);
void Cyc_readgram (void);
void Cyc_record_rule_line (void);
void Cyc_packsymbols (void);
void Cyc_output_token_defines(struct Cyc___cycFILE*);
void Cyc_packgram (void);
int Cyc_read_signed_integer(struct Cyc___cycFILE*);
# 151
int Cyc_lineno;
struct Cyc_symbol_list*Cyc_grammar;
int Cyc_start_flag;
struct Cyc_bucket*Cyc_startval;
struct _fat_ptr Cyc_tags;
struct _fat_ptr Cyc_user_toknums;
# 160
static int Cyc_value_components_used;
# 162
static int Cyc_typed;
# 164
static int Cyc_lastprec;
# 166
static int Cyc_gensym_count;
# 168
static struct Cyc_bucket*Cyc_errtoken;
# 171
static int Cyc_yylsp_needed;
# 173
extern struct _fat_ptr Cyc_version_string;
# 176
static void Cyc_skip_to_char(int target){struct _fat_ptr _T0;struct _fat_ptr _T1;int _T2;int _T3;int _T4;int _T5;int _T6;int _T7;struct Cyc___cycFILE*_T8;
# 179
int c;
if(target!=10)goto _TL0;_T0= 
_tag_fat("   Skipping to next \\n",sizeof(char),23U);Cyc_warn(_T0);goto _TL1;
# 183
_TL0: _T1= _tag_fat("   Skipping to next %c",sizeof(char),23U);_T2= target;Cyc_warni(_T1,_T2);_TL1:
# 186
 _TL2: c= Cyc_skip_white_space();
# 185
if(c!=target)goto _TL4;else{goto _TL3;}_TL4: _T3= c;_T4= - 1;if(_T3!=_T4)goto _TL2;else{goto _TL3;}_TL3: _T5= c;_T6= - 1;
# 188
if(_T5==_T6)goto _TL5;_T7= c;_T8= 
_check_null(Cyc_finput);Cyc_ungetc(_T7,_T8);goto _TL6;_TL5: _TL6:;}
# 193
void Cyc_reader (void){struct _fat_ptr _T0;int _T1;short*_T2;unsigned _T3;unsigned _T4;struct _fat_ptr _T5;struct Cyc_bucket*_T6;struct Cyc_bucket*_T7;struct _fat_ptr _T8;struct Cyc_bucket*_T9;struct Cyc_bucket*_TA;int _TB;struct Cyc_String_pa_PrintArg_struct _TC;struct Cyc___cycFILE*_TD;struct _fat_ptr _TE;struct _fat_ptr _TF;struct Cyc_String_pa_PrintArg_struct _T10;struct Cyc___cycFILE*_T11;struct _fat_ptr _T12;struct _fat_ptr _T13;struct Cyc_String_pa_PrintArg_struct _T14;struct Cyc___cycFILE*_T15;struct _fat_ptr _T16;struct _fat_ptr _T17;struct Cyc___cycFILE*_T18;struct _fat_ptr _T19;struct _fat_ptr _T1A;struct Cyc___cycFILE*_T1B;unsigned _T1C;int _T1D;struct Cyc___cycFILE*_T1E;struct _fat_ptr _T1F;struct _fat_ptr _T20;int _T21;struct Cyc___cycFILE*_T22;struct _fat_ptr _T23;struct _fat_ptr _T24;
# 196
Cyc_start_flag= 0;
Cyc_startval= 0;
# 205
Cyc_translations= 1;
# 207
Cyc_nsyms= 1;
Cyc_nvars= 0;
Cyc_nrules= 0;
Cyc_nitems= 0;
Cyc_rline_allocated= 10;_T1= Cyc_rline_allocated;{unsigned _T25=(unsigned)_T1;_T3= _check_times(_T25,sizeof(short));{short*_T26=_cycalloc_atomic(_T3);{unsigned _T27=_T25;unsigned _new2_cyclone;_new2_cyclone= 0;_TLA: if(_new2_cyclone < _T27)goto _TL8;else{goto _TL9;}_TL8: _T4= _new2_cyclone;
_T26[_T4]= 0;_new2_cyclone= _new2_cyclone + 1;goto _TLA;_TL9:;}_T2= (short*)_T26;}_T0= _tag_fat(_T2,sizeof(short),_T25);}Cyc_rline= _T0;
# 214
Cyc_typed= 0;
Cyc_lastprec= 0;
# 217
Cyc_gensym_count= 0;
# 219
Cyc_semantic_parser= 0;
Cyc_pure_parser= 0;
Cyc_yylsp_needed= 0;
# 223
Cyc_grammar= 0;
# 225
Cyc_init_lex();
Cyc_lineno= 1;
# 229
Cyc_tabinit();_T5= 
# 231
_tag_fat("error",sizeof(char),6U);Cyc_errtoken= Cyc_getsym(_T5);_T6= 
_check_null(Cyc_errtoken);_T6->class= '\001';_T7= 
_check_null(Cyc_errtoken);_T7->user_token_number= 256;_T8= 
# 236
_tag_fat("$undefined.",sizeof(char),12U);_T9= Cyc_getsym(_T8);_TA= _check_null(_T9);_TA->class= '\001';_TB= Cyc_noparserflag;
# 239
if(!_TB)goto _TLB;{struct Cyc_String_pa_PrintArg_struct _T25;_T25.tag= 0;
# 241
_T25.f1= Cyc_infile;_TC= _T25;}{struct Cyc_String_pa_PrintArg_struct _T25=_TC;void*_T26[1];_T26[0]= & _T25;_TD= 
# 240
_check_null(Cyc_ftable);_TE= _tag_fat("\n/*  Bison-generated parse tables, made from %s\n",sizeof(char),49U);_TF= _tag_fat(_T26,sizeof(void*),1);Cyc_fprintf(_TD,_TE,_TF);}goto _TLC;
# 243
_TLB:{struct Cyc_String_pa_PrintArg_struct _T25;_T25.tag= 0;_T25.f1= Cyc_infile;_T10= _T25;}{struct Cyc_String_pa_PrintArg_struct _T25=_T10;void*_T26[1];_T26[0]= & _T25;_T11= _check_null(Cyc_ftable);_T12= _tag_fat("\n/*  A Bison parser, made from %s\n",sizeof(char),35U);_T13= _tag_fat(_T26,sizeof(void*),1);Cyc_fprintf(_T11,_T12,_T13);}_TLC:{struct Cyc_String_pa_PrintArg_struct _T25;_T25.tag= 0;
_T25.f1= Cyc_version_string;_T14= _T25;}{struct Cyc_String_pa_PrintArg_struct _T25=_T14;void*_T26[1];_T26[0]= & _T25;_T15= _check_null(Cyc_ftable);_T16= _tag_fat(" by  %s  */\n\n",sizeof(char),14U);_T17= _tag_fat(_T26,sizeof(void*),1);Cyc_fprintf(_T15,_T16,_T17);}_T18= 
_check_null(Cyc_ftable);_T19= _tag_fat("#define YYBISON 1  /* Identify Bison output.  */\n\n",sizeof(char),51U);_T1A= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T18,_T19,_T1A);
Cyc_read_declarations();
# 248
Cyc_output_headers();
# 250
Cyc_readgram();_T1B= Cyc_fdefines;_T1C= (unsigned)_T1B;
# 253
if(!_T1C)goto _TLD;_T1D= Cyc_yylsp_needed;
# 255
if(!_T1D)goto _TLF;_T1E= Cyc_fdefines;_T1F= 
_tag_fat("\n#ifndef YYLTYPE\nextern struct Yyltype {\n      int timestamp;\n      unsigned first_line;\n      unsigned first_column;\n      unsigned last_line;\n      unsigned last_column;\n};\ntypedef struct Yyltype yyltype;\n\n\n#define YYLTYPE yyltype\nextern YYLTYPE yynewloc();\nextern yyltype yylloc;\n#endif\n\n",sizeof(char),292U);_T20= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T1E,_T1F,_T20);goto _TL10;_TLF: _TL10: goto _TLE;_TLD: _TLE:
# 258
 Cyc_output_trailers();_T21= Cyc_yylsp_needed;
if(!_T21)goto _TL11;_T22= 
_check_null(Cyc_ftable);_T23= _tag_fat("#define YYLSP_NEEDED\n\n",sizeof(char),23U);_T24= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T22,_T23,_T24);goto _TL12;_TL11: _TL12:
# 263
 Cyc_packsymbols();
# 265
Cyc_packgram();
# 268
Cyc_free_symtab();}
# 271
void Cyc_reader_output_yylsp(struct Cyc___cycFILE*f){int _T0;struct Cyc___cycFILE*_T1;struct _fat_ptr _T2;struct _fat_ptr _T3;_T0= Cyc_yylsp_needed;
# 274
if(!_T0)goto _TL13;_T1= f;_T2= 
_tag_fat("\n#ifndef YYLTYPE\nstruct Yyltype\n    {\n      int timestamp;\n      unsigned first_line;\n      unsigned first_column;\n      unsigned last_line;\n      unsigned last_column;\n   };\ntypedef struct Yyltype yyltype;\n\n\n#define YYLTYPE yyltype\nYYLTYPE yynewloc() { \n  return Yyltype{0,0,0,0,0}; \n}\nyyltype yylloc=Yyltype{0,0,0,0,0};\n#endif\n\n",sizeof(char),331U);_T3= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T1,_T2,_T3);goto _TL14;_TL13: _TL14:;}
# 282
void Cyc_read_declarations (void){int _T0;int _T1;struct _fat_ptr _T2;struct _fat_ptr _T3;int _T4;int _T5;struct _fat_ptr _T6;struct _fat_ptr _T7;int _T8;char _T9;struct _fat_ptr _TA;
# 285
int c;
int tok;_TL18:
# 288
 if(1)goto _TL16;else{goto _TL17;}
# 290
_TL16: c= Cyc_skip_white_space();
# 292
if(c!=37)goto _TL19;
# 294
tok= Cyc_parse_percent_token();_T0= tok;_T1= (int)_T0;switch(_T1){case 7:
# 300
 Cyc_print_union_decl();
return;case 8:
# 304
 Cyc_copy_definition();goto _LL0;case 9:
# 308
 Cyc_parse_token_decl(1,2);goto _LL0;case 10:
# 312
 Cyc_parse_token_decl(2,1);goto _LL0;case 12:
# 316
 Cyc_parse_type_decl();goto _LL0;case 14:
# 320
 Cyc_parse_start_decl();goto _LL0;case 13:
# 324
 Cyc_parse_union_decl();goto _LL0;case 23:
# 329
 Cyc_parse_expect_decl();goto _LL0;case 24:
# 332
 Cyc_parse_expect_rr_decl();goto _LL0;case 25:
# 335
 Cyc_parse_thong_decl();goto _LL0;case 15:
# 338
 Cyc_parse_assoc_decl(2);goto _LL0;case 16:
# 342
 Cyc_parse_assoc_decl(1);goto _LL0;case 17:
# 346
 Cyc_parse_assoc_decl(3);goto _LL0;case 19:
# 350
 if(Cyc_semantic_parser!=0)goto _TL1C;
# 352
Cyc_semantic_parser= 1;
Cyc_open_extra_files();goto _TL1D;_TL1C: _TL1D: goto _LL0;case 20:
# 358
 Cyc_pure_parser= 1;goto _LL0;case 26: goto _LL0;default: _T2= 
# 365
_tag_fat("unrecognized: %s",sizeof(char),17U);_T3= Cyc_token_buffer;Cyc_warns(_T2,_T3);
Cyc_skip_to_char(37);goto _LL0;}_LL0: goto _TL1A;
# 370
_TL19: _T4= c;_T5= - 1;if(_T4!=_T5)goto _TL1E;_T6= 
_tag_fat("no input grammar",sizeof(char),17U);Cyc_fatal(_T6);goto _TL1F;
# 374
_TL1E: _T7= _tag_fat("unknown character: %s",sizeof(char),22U);_T8= c;_T9= (char)_T8;_TA= Cyc_printable_version(_T9);Cyc_warns(_T7,_TA);
Cyc_skip_to_char(37);_TL1F: _TL1A: goto _TL18;_TL17:;}
# 384
void Cyc_copy_definition (void){int _T0;struct Cyc_Int_pa_PrintArg_struct _T1;int _T2;struct Cyc_String_pa_PrintArg_struct _T3;struct Cyc___cycFILE*_T4;struct _fat_ptr _T5;struct _fat_ptr _T6;struct Cyc___cycFILE*_T7;int _T8;int _T9;int _TA;struct Cyc___cycFILE*_TB;int _TC;struct Cyc___cycFILE*_TD;struct Cyc___cycFILE*_TE;int _TF;int _T10;struct _fat_ptr _T11;struct _fat_ptr _T12;int _T13;struct Cyc___cycFILE*_T14;int _T15;struct Cyc___cycFILE*_T16;struct Cyc___cycFILE*_T17;int _T18;int _T19;struct _fat_ptr _T1A;int _T1B;struct Cyc___cycFILE*_T1C;struct Cyc___cycFILE*_T1D;int _T1E;struct Cyc___cycFILE*_T1F;int _T20;struct Cyc___cycFILE*_T21;struct Cyc___cycFILE*_T22;int _T23;struct Cyc___cycFILE*_T24;struct Cyc___cycFILE*_T25;int _T26;int _T27;int _T28;struct Cyc___cycFILE*_T29;struct Cyc___cycFILE*_T2A;int _T2B;struct Cyc___cycFILE*_T2C;int _T2D;struct Cyc___cycFILE*_T2E;int _T2F;struct Cyc___cycFILE*_T30;int _T31;int _T32;struct _fat_ptr _T33;int _T34;struct Cyc___cycFILE*_T35;struct Cyc___cycFILE*_T36;struct _fat_ptr _T37;int _T38;struct Cyc___cycFILE*_T39;struct Cyc___cycFILE*_T3A;int _T3B;struct Cyc___cycFILE*_T3C;
# 387
int c;
int match;
int ended;
int after_percent;
int cplus_comment;_T0= Cyc_nolinesflag;
# 393
if(_T0)goto _TL20;else{goto _TL22;}
_TL22:{struct Cyc_Int_pa_PrintArg_struct _T3D;_T3D.tag= 1;_T2= Cyc_lineno;_T3D.f1= (unsigned long)_T2;_T1= _T3D;}{struct Cyc_Int_pa_PrintArg_struct _T3D=_T1;{struct Cyc_String_pa_PrintArg_struct _T3E;_T3E.tag= 0;_T3E.f1= Cyc_infile;_T3= _T3E;}{struct Cyc_String_pa_PrintArg_struct _T3E=_T3;void*_T3F[2];_T3F[0]= & _T3D;_T3F[1]= & _T3E;_T4= _check_null(Cyc_fattrs0);_T5= _tag_fat("#line %d \"%s\"\n",sizeof(char),15U);_T6= _tag_fat(_T3F,sizeof(void*),2);Cyc_fprintf(_T4,_T5,_T6);}}goto _TL21;_TL20: _TL21:
# 396
 after_percent= 0;_T7= 
# 398
_check_null(Cyc_finput);c= Cyc_getc(_T7);_TL26:
# 400
 if(1)goto _TL24;else{goto _TL25;}
# 402
_TL24: _T8= c;_T9= (int)_T8;switch(_T9){case 10: _TA= c;_TB= 
# 405
_check_null(Cyc_fattrs0);Cyc_putc(_TA,_TB);
Cyc_lineno= Cyc_lineno + 1;goto _LL0;case 37:
# 410
 after_percent= - 1;goto _LL0;case 39: goto _LL8;case 34: _LL8:
# 415
 match= c;_TC= c;_TD= 
_check_null(Cyc_fattrs0);Cyc_putc(_TC,_TD);_TE= 
_check_null(Cyc_finput);c= Cyc_getc(_TE);
# 419
_TL28: if(c!=match)goto _TL29;else{goto _TL2A;}
# 421
_TL29: _TF= c;_T10= - 1;if(_TF!=_T10)goto _TL2B;_T11= 
_tag_fat("unterminated string at end of file",sizeof(char),35U);Cyc_fatal(_T11);goto _TL2C;_TL2B: _TL2C:
 if(c!=10)goto _TL2D;_T12= 
# 425
_tag_fat("unterminated string",sizeof(char),20U);Cyc_warn(_T12);_T13= c;_T14= 
_check_null(Cyc_finput);Cyc_ungetc(_T13,_T14);
c= match;goto _TL28;_TL2D: _T15= c;_T16= 
# 431
_check_null(Cyc_fattrs0);Cyc_putc(_T15,_T16);
# 433
if(c!=92)goto _TL2F;_T17= 
# 435
_check_null(Cyc_finput);c= Cyc_getc(_T17);_T18= c;_T19= - 1;
if(_T18!=_T19)goto _TL31;_T1A= 
_tag_fat("unterminated string at end of file",sizeof(char),35U);Cyc_fatal(_T1A);goto _TL32;_TL31: _TL32: _T1B= c;_T1C= 
_check_null(Cyc_fattrs0);Cyc_putc(_T1B,_T1C);
if(c!=10)goto _TL33;
Cyc_lineno= Cyc_lineno + 1;goto _TL34;_TL33: _TL34: goto _TL30;_TL2F: _TL30: _T1D= 
# 443
_check_null(Cyc_finput);c= Cyc_getc(_T1D);goto _TL28;_TL2A: _T1E= c;_T1F= 
# 446
_check_null(Cyc_fattrs0);Cyc_putc(_T1E,_T1F);goto _LL0;case 47: _T20= c;_T21= 
# 450
_check_null(Cyc_fattrs0);Cyc_putc(_T20,_T21);_T22= 
_check_null(Cyc_finput);c= Cyc_getc(_T22);
if(c==42)goto _TL35;if(c==47)goto _TL35;goto _TL23;_TL35:
# 455
 cplus_comment= c==47;_T23= c;_T24= 
_check_null(Cyc_fattrs0);Cyc_putc(_T23,_T24);_T25= 
_check_null(Cyc_finput);c= Cyc_getc(_T25);
# 459
ended= 0;
_TL37: _T26= ended;if(_T26)goto _TL39;else{goto _TL38;}
# 462
_TL38: _T27= cplus_comment;if(_T27)goto _TL3A;else{goto _TL3C;}_TL3C: if(c!=42)goto _TL3A;
# 464
_TL3D: if(c==42)goto _TL3E;else{goto _TL3F;}
# 466
_TL3E: _T28= c;_T29= _check_null(Cyc_fattrs0);Cyc_putc(_T28,_T29);_T2A= 
_check_null(Cyc_finput);c= Cyc_getc(_T2A);goto _TL3D;_TL3F:
# 470
 if(c!=47)goto _TL40;_T2B= c;_T2C= 
# 472
_check_null(Cyc_fattrs0);Cyc_putc(_T2B,_T2C);
ended= 1;goto _TL41;_TL40: _TL41: goto _TL3B;
# 476
_TL3A: if(c!=10)goto _TL42;
# 478
Cyc_lineno= Cyc_lineno + 1;_T2D= c;_T2E= 
_check_null(Cyc_fattrs0);Cyc_putc(_T2D,_T2E);_T2F= cplus_comment;
if(!_T2F)goto _TL44;
ended= 1;goto _TL45;
# 483
_TL44: _T30= _check_null(Cyc_finput);c= Cyc_getc(_T30);_TL45: goto _TL43;
# 485
_TL42: _T31= c;_T32= - 1;if(_T31!=_T32)goto _TL46;_T33= 
_tag_fat("unterminated comment in `%{' definition",sizeof(char),40U);Cyc_fatal(_T33);goto _TL47;
# 489
_TL46: _T34= c;_T35= _check_null(Cyc_fattrs0);Cyc_putc(_T34,_T35);_T36= 
_check_null(Cyc_finput);c= Cyc_getc(_T36);_TL47: _TL43: _TL3B: goto _TL37;_TL39: goto _LL0;case -1: _T37= 
# 497
_tag_fat("unterminated `%{' definition",sizeof(char),29U);Cyc_fatal(_T37);goto _LL0;default: _T38= c;_T39= 
# 501
_check_null(Cyc_fattrs0);Cyc_putc(_T38,_T39);goto _LL0;}_LL0: _T3A= 
# 505
_check_null(Cyc_finput);c= Cyc_getc(_T3A);_T3B= after_percent;
# 507
if(!_T3B)goto _TL48;
# 509
if(c!=125)goto _TL4A;
return;_TL4A: _T3C= 
_check_null(Cyc_fattrs0);Cyc_putc(37,_T3C);goto _TL49;_TL48: _TL49:
# 513
 after_percent= 0;_TL23: goto _TL26;_TL25:;}
# 525
void Cyc_parse_token_decl(int what_is,int what_is_not){int _T0;struct Cyc___cycFILE*_T1;int _T2;unsigned long _T3;struct _fat_ptr _T4;int _T5;unsigned _T6;char*_T7;unsigned _T8;unsigned _T9;struct Cyc_bucket*_TA;struct _fat_ptr _TB;unsigned char*_TC;char*_TD;char _TE;int _TF;struct Cyc_bucket*_T10;struct Cyc_bucket*_T11;struct Cyc_bucket*_T12;struct Cyc_bucket*_T13;struct Cyc_bucket*_T14;struct Cyc_bucket*_T15;struct Cyc_bucket*_T16;struct Cyc_bucket*_T17;char _T18;struct Cyc_bucket*_T19;char _T1A;int _T1B;int _T1C;struct _fat_ptr _T1D;struct Cyc_bucket*_T1E;struct _fat_ptr _T1F;struct Cyc_bucket*_T20;int _T21;struct Cyc_bucket*_T22;int _T23;int _T24;struct _fat_ptr _T25;unsigned char*_T26;unsigned _T27;struct Cyc_bucket*_T28;struct _fat_ptr _T29;unsigned char*_T2A;char*_T2B;struct Cyc_bucket*_T2C;struct _fat_ptr _T2D;struct Cyc_bucket*_T2E;struct _fat_ptr _T2F;int _T30;struct _fat_ptr _T31;struct Cyc_bucket*_T32;struct _fat_ptr _T33;struct Cyc_bucket*_T34;unsigned _T35;struct Cyc_bucket*_T36;int _T37;struct _fat_ptr _T38;struct _fat_ptr _T39;struct _fat_ptr _T3A;
# 528
int token=0;
struct _fat_ptr typename=_tag_fat(0,0,0);
struct Cyc_bucket*symbol=0;
int k;_TL4F:
# 533
 if(1)goto _TL4D;else{goto _TL4E;}
# 535
_TL4D: _T0= Cyc_skip_white_space();_T1= _check_null(Cyc_finput);_T2= Cyc_ungetc(_T0,_T1);if(_T2!=37)goto _TL50;
return;_TL50:
 token= Cyc_lex();
if(token!=2)goto _TL52;
# 540
symbol= 0;goto _TL4C;_TL52:
# 543
 if(token!=21)goto _TL54;_T3= 
# 545
Cyc_strlen(Cyc_token_buffer);k= (int)_T3;_T5= k + 1;_T6= (unsigned)_T5;{unsigned _T3B=_T6 + 1U;_T8= _check_times(_T3B,sizeof(char));{char*_T3C=_cycalloc_atomic(_T8);{unsigned _T3D=_T3B;unsigned _new2_cyclone;_new2_cyclone= 0;_TL59: if(_new2_cyclone < _T3D)goto _TL57;else{goto _TL58;}_TL57: _T9= _new2_cyclone;
_T3C[_T9]= '\000';_new2_cyclone= _new2_cyclone + 1;goto _TL59;_TL58: _T3C[_T3D]= 0;}_T7= (char*)_T3C;}_T4= _tag_fat(_T7,sizeof(char),_T3B);}typename= _T4;
Cyc_strcpy(typename,Cyc_token_buffer);
Cyc_value_components_used= 1;
symbol= 0;goto _TL55;
# 551
_TL54: if(token!=1)goto _TL5A;_TA= _check_null(Cyc_symval);_TB= _TA->tag;_TC= _check_fat_subscript(_TB,sizeof(char),0U);_TD= (char*)_TC;_TE= *_TD;_TF= (int)_TE;if(_TF!=34)goto _TL5A;if(symbol==0)goto _TL5A;
# 554
Cyc_translations= 1;_T10= Cyc_symval;
_T10->class= '\001';_T11= 
_check_null(Cyc_symval);_T11->type_name= typename;_T12= 
_check_null(Cyc_symval);_T13= symbol;_T12->user_token_number= _T13->user_token_number;_T14= symbol;
_T14->user_token_number= - 9991;_T15= 
# 560
_check_null(Cyc_symval);_T15->_alias= symbol;_T16= symbol;
_T16->_alias= Cyc_symval;
symbol= 0;
# 564
Cyc_nsyms= Cyc_nsyms + -1;goto _TL5B;
# 566
_TL5A: if(token!=1)goto _TL5C;_T17= Cyc_symval;_T18= _T17->class;{
# 568
int oldclass=(int)_T18;
symbol= Cyc_symval;_T19= symbol;_T1A= _T19->class;_T1B= (int)_T1A;_T1C= what_is_not;
# 571
if(_T1B!=_T1C)goto _TL5E;_T1D= 
_tag_fat("symbol %s redefined",sizeof(char),20U);_T1E= symbol;_T1F= _T1E->tag;Cyc_warns(_T1D,_T1F);goto _TL5F;_TL5E: _TL5F: _T20= symbol;_T21= what_is;
_T20->class= (char)_T21;
if(what_is!=2)goto _TL60;if(oldclass==2)goto _TL60;_T22= symbol;_T23= Cyc_nvars;
Cyc_nvars= _T23 + 1;_T24= _T23;_T22->value= (short)_T24;goto _TL61;_TL60: _TL61: _T25= typename;_T26= _T25.curr;_T27= (unsigned)_T26;
# 577
if(!_T27)goto _TL62;_T28= symbol;_T29= _T28->type_name;_T2A= _T29.curr;_T2B= (char*)_T2A;
# 579
if(_T2B!=0)goto _TL64;_T2C= symbol;
_T2C->type_name= typename;goto _TL65;
_TL64: _T2D= typename;_T2E= symbol;_T2F= _T2E->type_name;_T30= Cyc_strcmp(_T2D,_T2F);if(_T30==0)goto _TL66;_T31= 
_tag_fat("type redeclaration for %s",sizeof(char),26U);_T32= symbol;_T33= _T32->tag;Cyc_warns(_T31,_T33);goto _TL67;_TL66: _TL67: _TL65: goto _TL63;_TL62: _TL63:;}goto _TL5D;
# 585
_TL5C: _T34= symbol;_T35= (unsigned)_T34;if(!_T35)goto _TL68;if(token!=22)goto _TL68;_T36= symbol;_T37= Cyc_numval;
# 587
_T36->user_token_number= (short)_T37;
Cyc_translations= 1;goto _TL69;
# 592
_TL68: _T38= _tag_fat("`%s' is invalid in %s",sizeof(char),22U);_T39= Cyc_token_buffer;
# 594
if(what_is!=1)goto _TL6A;_T3A= _tag_fat("%token",sizeof(char),7U);goto _TL6B;_TL6A: _T3A= _tag_fat("%nterm",sizeof(char),7U);_TL6B:
# 592
 Cyc_warnss(_T38,_T39,_T3A);
# 595
Cyc_skip_to_char(37);_TL69: _TL5D: _TL5B: _TL55: _TL4C: goto _TL4F;_TL4E:;}
# 618
void Cyc_parse_thong_decl (void){unsigned long _T0;struct _fat_ptr _T1;int _T2;unsigned _T3;char*_T4;unsigned _T5;unsigned _T6;struct _fat_ptr _T7;struct _fat_ptr _T8;struct Cyc_bucket*_T9;struct Cyc_bucket*_TA;struct Cyc_bucket*_TB;struct Cyc_bucket*_TC;struct _fat_ptr _TD;unsigned char*_TE;char*_TF;char _T10;int _T11;struct _fat_ptr _T12;struct _fat_ptr _T13;struct Cyc_bucket*_T14;struct Cyc_bucket*_T15;struct Cyc_bucket*_T16;int _T17;struct Cyc_bucket*_T18;struct Cyc_bucket*_T19;
# 621
int token;
struct Cyc_bucket*symbol;
struct _fat_ptr typename=_tag_fat(0,0,0);
int k;int usrtoknum;
# 626
Cyc_translations= 1;
token= Cyc_lex();
if(token!=21)goto _TL6C;_T0= 
Cyc_strlen(Cyc_token_buffer);k= (int)_T0;_T2= k + 1;_T3= (unsigned)_T2;{unsigned _T1A=_T3 + 1U;_T5= _check_times(_T1A,sizeof(char));{char*_T1B=_cycalloc_atomic(_T5);{unsigned _T1C=_T1A;unsigned _new2_cyclone;_new2_cyclone= 0;_TL71: if(_new2_cyclone < _T1C)goto _TL6F;else{goto _TL70;}_TL6F: _T6= _new2_cyclone;
_T1B[_T6]= '\000';_new2_cyclone= _new2_cyclone + 1;goto _TL71;_TL70: _T1B[_T1C]= 0;}_T4= (char*)_T1B;}_T1= _tag_fat(_T4,sizeof(char),_T1A);}typename= _T1;
Cyc_strcpy(typename,Cyc_token_buffer);
Cyc_value_components_used= 1;
token= Cyc_lex();goto _TL6D;_TL6C: _TL6D:
# 638
 if(token==1)goto _TL72;_T7= 
# 640
_tag_fat("unrecognized item %s, expected an identifier",sizeof(char),45U);_T8= Cyc_token_buffer;Cyc_warns(_T7,_T8);
# 642
Cyc_skip_to_char(37);
return;_TL72: _T9= 
# 645
_check_null(Cyc_symval);_T9->class= '\001';_TA= 
_check_null(Cyc_symval);_TA->type_name= typename;_TB= 
_check_null(Cyc_symval);_TB->user_token_number= - 9991;
symbol= Cyc_symval;
# 650
token= Cyc_lex();
# 652
if(token!=22)goto _TL74;
usrtoknum= Cyc_numval;
token= Cyc_lex();goto _TL75;
# 656
_TL74: usrtoknum= 0;_TL75:
# 660
 if(token!=1)goto _TL78;else{goto _TL79;}_TL79: _TC= _check_null(Cyc_symval);_TD= _TC->tag;_TE= _check_fat_subscript(_TD,sizeof(char),0U);_TF= (char*)_TE;_T10= *_TF;_T11= (int)_T10;if(_T11!=34)goto _TL78;else{goto _TL76;}
# 662
_TL78: _T12= _tag_fat("expected string constant instead of %s",sizeof(char),39U);_T13= Cyc_token_buffer;Cyc_warns(_T12,_T13);
# 664
Cyc_skip_to_char(37);
return;_TL76: _T14= Cyc_symval;
# 667
_T14->class= '\001';_T15= 
_check_null(Cyc_symval);_T15->type_name= typename;_T16= 
_check_null(Cyc_symval);_T17= usrtoknum;_T16->user_token_number= (short)_T17;_T18= 
# 671
_check_null(Cyc_symval);_T18->_alias= symbol;_T19= 
_check_null(symbol);_T19->_alias= Cyc_symval;
# 674
Cyc_nsyms= Cyc_nsyms + -1;}
# 680
void Cyc_parse_start_decl (void){int _T0;struct _fat_ptr _T1;int _T2;struct _fat_ptr _T3;_T0= Cyc_start_flag;
# 683
if(!_T0)goto _TL7A;_T1= 
_tag_fat("multiple %start declarations",sizeof(char),29U);Cyc_warn(_T1);goto _TL7B;_TL7A: _TL7B: _T2= 
Cyc_lex();if(_T2==1)goto _TL7C;_T3= 
_tag_fat("invalid %start declaration",sizeof(char),27U);Cyc_warn(_T3);goto _TL7D;
# 689
_TL7C: Cyc_start_flag= 1;
Cyc_startval= Cyc_symval;_TL7D:;}
# 705
static int Cyc_type_count=0;struct Cyc_strlist{struct _fat_ptr str;struct _fat_ptr nth;long seen;struct Cyc_strlist*tl;};
# 707
struct Cyc_strlist*Cyc_seen_destructors=0;
static struct _fat_ptr Cyc_has_been_seen(struct _fat_ptr str){struct Cyc_strlist*_T0;struct _fat_ptr _T1;struct _fat_ptr _T2;int _T3;struct Cyc_strlist*_T4;long _T5;struct _fat_ptr _T6;struct Cyc_strlist*_T7;struct Cyc_strlist*_T8;struct _fat_ptr _T9;struct Cyc_strlist*_TA;void*_TB;struct Cyc_strlist*_TC;struct Cyc_strlist*_TD;struct _fat_ptr _TE;struct Cyc_Int_pa_PrintArg_struct _TF;int _T10;struct _fat_ptr _T11;struct _fat_ptr _T12;struct Cyc_strlist*_T13;struct Cyc_strlist*_T14;struct Cyc_strlist*_T15;struct _fat_ptr _T16;
struct Cyc_strlist*l1=Cyc_seen_destructors;
struct Cyc_strlist*l2;
_TL81: if(l1!=0)goto _TL7F;else{goto _TL80;}
_TL7F: _T0= l1;_T1= _T0->str;_T2= str;_T3= Cyc_strcmp(_T1,_T2);if(_T3!=0)goto _TL82;_T4= l1;_T5= _T4->seen;
if(!_T5)goto _TL84;_T6= 
_tag_fat(0,0,0);return _T6;
# 716
_TL84: _T7= l1;_T7->seen= 1;_T8= l1;_T9= _T8->nth;
return _T9;_TL82: _TA= l1;
# 711
l1= _TA->tl;goto _TL81;_TL80:
# 721
 Cyc_type_count= Cyc_type_count + 1;_TB= _cycalloc(sizeof(struct Cyc_strlist));
l2= (struct Cyc_strlist*)_TB;_TC= l2;
_TC->str= str;_TD= l2;{struct Cyc_Int_pa_PrintArg_struct _T17;_T17.tag= 1;_T10= Cyc_type_count;
_T17.f1= (unsigned long)_T10;_TF= _T17;}{struct Cyc_Int_pa_PrintArg_struct _T17=_TF;void*_T18[1];_T18[0]= & _T17;_T11= _tag_fat("YY%d",sizeof(char),5U);_T12= _tag_fat(_T18,sizeof(void*),1);_TE= Cyc_aprintf(_T11,_T12);}_TD->nth= _TE;_T13= l2;
_T13->seen= 1;_T14= l2;
_T14->tl= Cyc_seen_destructors;
Cyc_seen_destructors= l2;_T15= l2;_T16= _T15->nth;
return _T16;}
# 731
static void Cyc_add_to_list(struct _fat_ptr str,struct _fat_ptr constructor){struct Cyc_strlist*_T0;struct _fat_ptr _T1;struct _fat_ptr _T2;int _T3;struct _fat_ptr _T4;struct _fat_ptr _T5;struct Cyc_strlist*_T6;struct Cyc_strlist*_T7;struct Cyc_strlist*_T8;void*_T9;struct Cyc_strlist*_TA;struct Cyc_strlist*_TB;struct Cyc_strlist*_TC;struct Cyc_strlist*_TD;
struct Cyc_strlist*l1=Cyc_seen_destructors;
struct Cyc_strlist*l2;
_TL89: if(l1!=0)goto _TL87;else{goto _TL88;}
_TL87: _T0= l1;_T1= _T0->str;_T2= str;_T3= Cyc_strcmp(_T1,_T2);if(_T3!=0)goto _TL8A;_T4= 
_tag_fat("you refered to the type %s before you defined it\n",sizeof(char),50U);_T5= str;Cyc_warns(_T4,_T5);_T6= l1;
_T6->nth= constructor;_T7= l1;
_T7->seen= 0;
return;_TL8A: _T8= l1;
# 734
l1= _T8->tl;goto _TL89;_TL88: _T9= _cycalloc(sizeof(struct Cyc_strlist));
# 742
l2= (struct Cyc_strlist*)_T9;_TA= l2;
_TA->str= str;_TB= l2;
_TB->nth= constructor;_TC= l2;
_TC->seen= 0;_TD= l2;
_TD->tl= Cyc_seen_destructors;
Cyc_seen_destructors= l2;
return;}
# 752
static struct _fat_ptr Cyc_type2nth(struct _fat_ptr type_name){struct Cyc_strlist*_T0;struct _fat_ptr _T1;struct _fat_ptr _T2;int _T3;struct Cyc_strlist*_T4;struct _fat_ptr _T5;struct Cyc_strlist*_T6;struct _fat_ptr _T7;struct _fat_ptr _T8;
struct Cyc_strlist*l1=Cyc_seen_destructors;
_TL8F: if(l1!=0)goto _TL8D;else{goto _TL8E;}
_TL8D: _T0= l1;_T1= _T0->str;_T2= type_name;_T3= Cyc_strcmp(_T1,_T2);if(_T3!=0)goto _TL90;_T4= l1;_T5= _T4->nth;
return _T5;_TL90: _T6= l1;
# 754
l1= _T6->tl;goto _TL8F;_TL8E: _T7= 
# 757
_tag_fat("no such type defined\n",sizeof(char),22U);Cyc_fatal(_T7);_T8= 
_tag_fat(0,0,0);return _T8;}
# 762
static struct _fat_ptr Cyc_union_typename={(void*)0,(void*)0,(void*)(0 + 0)};
# 764
void Cyc_parse_type_decl (void){int _T0;struct _fat_ptr _T1;unsigned long _T2;struct _fat_ptr _T3;int _T4;unsigned _T5;char*_T6;unsigned _T7;unsigned _T8;struct _fat_ptr _T9;unsigned char*_TA;unsigned _TB;struct Cyc_Int_pa_PrintArg_struct _TC;int _TD;struct Cyc_String_pa_PrintArg_struct _TE;struct Cyc___cycFILE*_TF;struct _fat_ptr _T10;struct _fat_ptr _T11;struct _fat_ptr _T12;unsigned char*_T13;char*_T14;struct _fat_ptr _T15;struct Cyc_String_pa_PrintArg_struct _T16;struct _RegionHandle*_T17;struct _fat_ptr _T18;struct _fat_ptr _T19;struct Cyc_String_pa_PrintArg_struct _T1A;struct Cyc_String_pa_PrintArg_struct _T1B;struct Cyc_String_pa_PrintArg_struct _T1C;struct Cyc_String_pa_PrintArg_struct _T1D;struct Cyc_String_pa_PrintArg_struct _T1E;struct Cyc___cycFILE*_T1F;struct _fat_ptr _T20;struct _fat_ptr _T21;struct Cyc_String_pa_PrintArg_struct _T22;struct Cyc_String_pa_PrintArg_struct _T23;struct Cyc_String_pa_PrintArg_struct _T24;struct Cyc_String_pa_PrintArg_struct _T25;struct Cyc___cycFILE*_T26;struct _fat_ptr _T27;struct _fat_ptr _T28;int _T29;struct Cyc___cycFILE*_T2A;int _T2B;int _T2C;int _T2D;struct Cyc_bucket*_T2E;struct _fat_ptr _T2F;unsigned char*_T30;char*_T31;struct Cyc_bucket*_T32;struct _fat_ptr _T33;struct Cyc_bucket*_T34;struct _fat_ptr _T35;int _T36;struct _fat_ptr _T37;struct Cyc_bucket*_T38;struct _fat_ptr _T39;struct _fat_ptr _T3A;struct _fat_ptr _T3B;
# 767
int k;
struct _fat_ptr name;_T0= 
# 770
Cyc_lex();if(_T0==21)goto _TL92;_T1= 
# 772
_tag_fat("%type declaration has no <typename>",sizeof(char),36U);Cyc_warn(_T1);
Cyc_skip_to_char(37);
return;_TL92: _T2= 
# 777
Cyc_strlen(Cyc_token_buffer);k= (int)_T2;_T4= k + 1;_T5= (unsigned)_T4;{unsigned _T3C=_T5 + 1U;_T7= _check_times(_T3C,sizeof(char));{char*_T3D=_cycalloc_atomic(_T7);{unsigned _T3E=_T3C;unsigned _new2_cyclone;_new2_cyclone= 0;_TL97: if(_new2_cyclone < _T3E)goto _TL95;else{goto _TL96;}_TL95: _T8= _new2_cyclone;
_T3D[_T8]= '\000';_new2_cyclone= _new2_cyclone + 1;goto _TL97;_TL96: _T3D[_T3E]= 0;}_T6= (char*)_T3D;}_T3= _tag_fat(_T6,sizeof(char),_T3C);}name= _T3;
Cyc_strcpy(name,Cyc_token_buffer);{
# 782
struct _fat_ptr deconstructor=Cyc_has_been_seen(name);_T9= deconstructor;_TA= _T9.curr;_TB= (unsigned)_TA;
if(!_TB)goto _TL98;{struct Cyc_Int_pa_PrintArg_struct _T3C;_T3C.tag= 1;_TD= Cyc_lineno;
_T3C.f1= (unsigned long)_TD;_TC= _T3C;}{struct Cyc_Int_pa_PrintArg_struct _T3C=_TC;{struct Cyc_String_pa_PrintArg_struct _T3D;_T3D.tag= 0;_T3D.f1= Cyc_infile;_TE= _T3D;}{struct Cyc_String_pa_PrintArg_struct _T3D=_TE;void*_T3E[2];_T3E[0]= & _T3C;_T3E[1]= & _T3D;_TF= _check_null(Cyc_fattrs);_T10= _tag_fat("\n#line %d \"%s\"",sizeof(char),15U);_T11= _tag_fat(_T3E,sizeof(void*),2);Cyc_fprintf(_TF,_T10,_T11);}}{struct _RegionHandle _T3C=_new_region(0U,"pr");struct _RegionHandle*pr=& _T3C;_push_region(pr);{
# 786
struct _fat_ptr vars=_tag_fat(0,0,0);_T12= Cyc_union_typename;_T13= _T12.curr;_T14= (char*)_T13;
if(_T14==0)goto _TL9A;{struct Cyc_String_pa_PrintArg_struct _T3D;_T3D.tag= 0;
_T3D.f1= Cyc_union_typename;_T16= _T3D;}{struct Cyc_String_pa_PrintArg_struct _T3D=_T16;void*_T3E[1];_T3E[0]= & _T3D;_T17= pr;_T18= _tag_fat("<%s>",sizeof(char),5U);_T19= _tag_fat(_T3E,sizeof(void*),1);_T15= Cyc_rprintf(_T17,_T18,_T19);}vars= _T15;goto _TL9B;_TL9A: _TL9B:{struct Cyc_String_pa_PrintArg_struct _T3D;_T3D.tag= 0;
# 797
_T3D.f1= name;_T1A= _T3D;}{struct Cyc_String_pa_PrintArg_struct _T3D=_T1A;{struct Cyc_String_pa_PrintArg_struct _T3E;_T3E.tag= 0;_T3E.f1= deconstructor;_T1B= _T3E;}{struct Cyc_String_pa_PrintArg_struct _T3E=_T1B;{struct Cyc_String_pa_PrintArg_struct _T3F;_T3F.tag= 0;_T3F.f1= vars;_T1C= _T3F;}{struct Cyc_String_pa_PrintArg_struct _T3F=_T1C;{struct Cyc_String_pa_PrintArg_struct _T40;_T40.tag= 0;_T40.f1= name;_T1D= _T40;}{struct Cyc_String_pa_PrintArg_struct _T40=_T1D;{struct Cyc_String_pa_PrintArg_struct _T41;_T41.tag= 0;_T41.f1= deconstructor;_T1E= _T41;}{struct Cyc_String_pa_PrintArg_struct _T41=_T1E;void*_T42[5];_T42[0]= & _T3D;_T42[1]= & _T3E;_T42[2]= & _T3F;_T42[3]= & _T40;_T42[4]= & _T41;_T1F= 
# 789
_check_null(Cyc_fattrs);_T20= 
# 796
_tag_fat("\nstatic %s yyget_%s(union YYSTYPE %s@yy1 ) {\n  static string_t s = \"%s\";\n  switch(yy1) {\n  case &{.%s = yy}: return yy;\n  default: yythrowfail(s);\n  } \n}",sizeof(char),154U);_T21= _tag_fat(_T42,sizeof(void*),5);Cyc_fprintf(_T1F,_T20,_T21);}}}}}{struct Cyc_String_pa_PrintArg_struct _T3D;_T3D.tag= 0;
# 798
_T3D.f1= vars;_T22= _T3D;}{struct Cyc_String_pa_PrintArg_struct _T3D=_T22;{struct Cyc_String_pa_PrintArg_struct _T3E;_T3E.tag= 0;_T3E.f1= deconstructor;_T23= _T3E;}{struct Cyc_String_pa_PrintArg_struct _T3E=_T23;{struct Cyc_String_pa_PrintArg_struct _T3F;_T3F.tag= 0;_T3F.f1= name;_T24= _T3F;}{struct Cyc_String_pa_PrintArg_struct _T3F=_T24;{struct Cyc_String_pa_PrintArg_struct _T40;_T40.tag= 0;_T40.f1= deconstructor;_T25= _T40;}{struct Cyc_String_pa_PrintArg_struct _T40=_T25;void*_T41[4];_T41[0]= & _T3D;_T41[1]= & _T3E;_T41[2]= & _T3F;_T41[3]= & _T40;_T26= _check_null(Cyc_fattrs);_T27= _tag_fat("\nstatic union YYSTYPE %s %s(%s yy1) { return YYSTYPE{.%s = yy1}; }",sizeof(char),67U);_T28= _tag_fat(_T41,sizeof(void*),4);Cyc_fprintf(_T26,_T27,_T28);}}}}}_pop_region();}goto _TL99;_TL98: _TL99: _TL9F:
# 801
 if(1)goto _TL9D;else{goto _TL9E;}
# 803
_TL9D:{int t;_T29= 
# 805
Cyc_skip_white_space();_T2A= _check_null(Cyc_finput);_T2B= Cyc_ungetc(_T29,_T2A);if(_T2B!=37)goto _TLA0;
return;_TLA0:
# 808
 t= Cyc_lex();_T2C= t;_T2D= (int)_T2C;switch(_T2D){case 2: goto _LL0;case 4: goto _LL0;case 1: _T2E= 
# 819
_check_null(Cyc_symval);_T2F= _T2E->type_name;_T30= _T2F.curr;_T31= (char*)_T30;if(_T31!=0)goto _TLA3;_T32= Cyc_symval;
_T32->type_name= name;goto _TLA4;
_TLA3: _T33= name;_T34= Cyc_symval;_T35= _T34->type_name;_T36= Cyc_strcmp(_T33,_T35);if(_T36==0)goto _TLA5;_T37= 
_tag_fat("type redeclaration for %s",sizeof(char),26U);_T38= _check_null(Cyc_symval);_T39= _T38->tag;Cyc_warns(_T37,_T39);goto _TLA6;_TLA5: _TLA6: _TLA4: goto _LL0;default: _T3A= 
# 827
_tag_fat("invalid %%type declaration due to item: `%s'",sizeof(char),45U);_T3B= Cyc_token_buffer;Cyc_warns(_T3A,_T3B);
Cyc_skip_to_char(37);goto _LL0;}_LL0:;}goto _TL9F;_TL9E:;}}
# 839
void Cyc_parse_assoc_decl(int assoc){int _T0;struct Cyc___cycFILE*_T1;int _T2;int _T3;int _T4;unsigned long _T5;struct _fat_ptr _T6;int _T7;unsigned _T8;char*_T9;unsigned _TA;unsigned _TB;struct Cyc_bucket*_TC;short _TD;int _TE;struct _fat_ptr _TF;struct Cyc_bucket*_T10;struct _fat_ptr _T11;struct Cyc_bucket*_T12;int _T13;struct Cyc_bucket*_T14;int _T15;struct Cyc_bucket*_T16;char _T17;int _T18;struct _fat_ptr _T19;struct Cyc_bucket*_T1A;struct _fat_ptr _T1B;struct Cyc_bucket*_T1C;struct _fat_ptr _T1D;unsigned char*_T1E;unsigned _T1F;struct Cyc_bucket*_T20;struct _fat_ptr _T21;unsigned char*_T22;char*_T23;struct Cyc_bucket*_T24;struct _fat_ptr _T25;struct Cyc_bucket*_T26;struct _fat_ptr _T27;int _T28;struct _fat_ptr _T29;struct Cyc_bucket*_T2A;struct _fat_ptr _T2B;struct Cyc_bucket*_T2C;int _T2D;struct _fat_ptr _T2E;struct _fat_ptr _T2F;struct _fat_ptr _T30;struct _fat_ptr _T31;
# 842
int k;
struct _fat_ptr name=_tag_fat(0,0,0);
int prev=0;
# 846
Cyc_lastprec= Cyc_lastprec + 1;_TLAA:
# 848
 if(1)goto _TLA8;else{goto _TLA9;}
# 850
_TLA8:{int t;_T0= 
# 852
Cyc_skip_white_space();_T1= _check_null(Cyc_finput);_T2= Cyc_ungetc(_T0,_T1);if(_T2!=37)goto _TLAB;
return;_TLAB:
# 855
 t= Cyc_lex();_T3= t;_T4= (int)_T3;switch(_T4){case 21: _T5= 
# 861
Cyc_strlen(Cyc_token_buffer);k= (int)_T5;_T7= k + 1;_T8= (unsigned)_T7;{unsigned _T32=_T8 + 1U;_TA= _check_times(_T32,sizeof(char));{char*_T33=_cycalloc_atomic(_TA);{unsigned _T34=_T32;unsigned _new2_cyclone;_new2_cyclone= 0;_TLB1: if(_new2_cyclone < _T34)goto _TLAF;else{goto _TLB0;}_TLAF: _TB= _new2_cyclone;
_T33[_TB]= '\000';_new2_cyclone= _new2_cyclone + 1;goto _TLB1;_TLB0: _T33[_T34]= 0;}_T9= (char*)_T33;}_T6= _tag_fat(_T9,sizeof(char),_T32);}name= _T6;
Cyc_strcpy(name,Cyc_token_buffer);goto _LL0;case 2: goto _LL0;case 1: _TC= 
# 870
_check_null(Cyc_symval);_TD= _TC->prec;_TE= (int)_TD;if(_TE==0)goto _TLB2;_TF= 
_tag_fat("redefining precedence of %s",sizeof(char),28U);_T10= Cyc_symval;_T11= _T10->tag;Cyc_warns(_TF,_T11);goto _TLB3;_TLB2: _TLB3: _T12= 
_check_null(Cyc_symval);_T13= Cyc_lastprec;_T12->prec= (short)_T13;_T14= 
_check_null(Cyc_symval);_T15= assoc;_T14->assoc= (short)_T15;_T16= 
_check_null(Cyc_symval);_T17= _T16->class;_T18= (int)_T17;if(_T18!=2)goto _TLB4;_T19= 
_tag_fat("symbol %s redefined",sizeof(char),20U);_T1A= Cyc_symval;_T1B= _T1A->tag;Cyc_warns(_T19,_T1B);goto _TLB5;_TLB4: _TLB5: _T1C= 
_check_null(Cyc_symval);_T1C->class= '\001';_T1D= name;_T1E= _T1D.curr;_T1F= (unsigned)_T1E;
if(!_T1F)goto _TLB6;_T20= 
# 879
_check_null(Cyc_symval);_T21= _T20->type_name;_T22= _T21.curr;_T23= (char*)_T22;if(_T23!=0)goto _TLB8;_T24= Cyc_symval;
_T24->type_name= name;goto _TLB9;
_TLB8: _T25= name;_T26= Cyc_symval;_T27= _T26->type_name;_T28= Cyc_strcmp(_T25,_T27);if(_T28==0)goto _TLBA;_T29= 
_tag_fat("type redeclaration for %s",sizeof(char),26U);_T2A= _check_null(Cyc_symval);_T2B= _T2A->tag;Cyc_warns(_T29,_T2B);goto _TLBB;_TLBA: _TLBB: _TLB9: goto _TLB7;_TLB6: _TLB7: goto _LL0;case 22:
# 887
 if(prev!=1)goto _TLBC;_T2C= 
# 889
_check_null(Cyc_symval);_T2D= Cyc_numval;_T2C->user_token_number= (short)_T2D;
Cyc_translations= 1;goto _TLBD;
# 894
_TLBC: _T2E= _tag_fat("invalid text (%s) - number should be after identifier",sizeof(char),54U);_T2F= Cyc_token_buffer;Cyc_warns(_T2E,_T2F);
# 896
Cyc_skip_to_char(37);_TLBD: goto _LL0;case 4:
# 901
 return;default: _T30= 
# 904
_tag_fat("unexpected item: %s",sizeof(char),20U);_T31= Cyc_token_buffer;Cyc_warns(_T30,_T31);
Cyc_skip_to_char(37);goto _LL0;}_LL0:
# 910
 prev= t;}goto _TLAA;_TLA9:;}
# 919
void Cyc_parse_union_decl (void){int _T0;struct _fat_ptr _T1;int _T2;struct Cyc_Int_pa_PrintArg_struct _T3;int _T4;struct Cyc_String_pa_PrintArg_struct _T5;struct Cyc___cycFILE*_T6;struct _fat_ptr _T7;struct _fat_ptr _T8;struct Cyc___cycFILE*_T9;struct _fat_ptr _TA;struct _fat_ptr _TB;unsigned long _TC;struct _fat_ptr _TD;int _TE;unsigned _TF;char*_T10;unsigned _T11;unsigned _T12;struct Cyc___cycFILE*_T13;struct _fat_ptr _T14;int _T15;int _T16;struct Cyc___cycFILE*_T17;unsigned _T18;char _T19;int _T1A;int _T1B;int _T1C;struct Cyc___cycFILE*_T1D;int _T1E;struct Cyc___cycFILE*_T1F;struct Cyc___cycFILE*_T20;int _T21;int _T22;int _T23;int _T24;struct _fat_ptr _T25;int _T26;struct Cyc___cycFILE*_T27;struct Cyc___cycFILE*_T28;struct _fat_ptr _T29;int _T2A;struct Cyc___cycFILE*_T2B;char _T2C;int _T2D;struct _fat_ptr _T2E;struct _fat_ptr*_T2F;unsigned char*_T30;char*_T31;int _T32;unsigned _T33;unsigned char*_T34;char*_T35;struct Cyc___cycFILE*_T36;int _T37;struct _fat_ptr _T38;unsigned char*_T39;char*_T3A;struct _fat_ptr _T3B;int _T3C;struct _fat_ptr _T3D;unsigned char*_T3E;char*_T3F;struct _fat_ptr*_T40;unsigned char*_T41;char*_T42;int _T43;unsigned _T44;unsigned char*_T45;char*_T46;struct Cyc___cycFILE*_T47;unsigned char*_T48;char*_T49;unsigned _T4A;unsigned char*_T4B;char*_T4C;int _T4D;struct Cyc___cycFILE*_T4E;char _T4F;int _T50;struct _fat_ptr _T51;struct Cyc___cycFILE*_T52;int _T53;int _T54;struct _fat_ptr _T55;struct _fat_ptr _T56;struct _fat_ptr _T57;struct _fat_ptr _T58;unsigned char*_T59;char*_T5A;struct _fat_ptr _T5B;int _T5C;struct _fat_ptr _T5D;unsigned char*_T5E;char*_T5F;struct _fat_ptr*_T60;unsigned char*_T61;char*_T62;int _T63;unsigned _T64;unsigned char*_T65;char*_T66;struct Cyc___cycFILE*_T67;unsigned char*_T68;char*_T69;unsigned _T6A;unsigned char*_T6B;char*_T6C;struct Cyc___cycFILE*_T6D;
# 922
int c;
int count;
int in_comment;
int cplus_comment;
char new_field;
char state;
# 932
struct _fat_ptr p;
# 934
struct _fat_ptr constructor=_tag_fat(0,0,0);
struct _fat_ptr type_name=_tag_fat(0,0,0);_T0= Cyc_typed;
# 937
if(!_T0)goto _TLBE;_T1= 
_tag_fat("multiple %union declarations",sizeof(char),29U);Cyc_warn(_T1);goto _TLBF;_TLBE: _TLBF:
# 940
 Cyc_typed= 1;_T2= Cyc_nolinesflag;
# 942
if(_T2)goto _TLC0;else{goto _TLC2;}
_TLC2:{struct Cyc_Int_pa_PrintArg_struct _T6E;_T6E.tag= 1;_T4= Cyc_lineno;_T6E.f1= (unsigned long)_T4;_T3= _T6E;}{struct Cyc_Int_pa_PrintArg_struct _T6E=_T3;{struct Cyc_String_pa_PrintArg_struct _T6F;_T6F.tag= 0;_T6F.f1= Cyc_infile;_T5= _T6F;}{struct Cyc_String_pa_PrintArg_struct _T6F=_T5;void*_T70[2];_T70[0]= & _T6E;_T70[1]= & _T6F;_T6= _check_null(Cyc_fattrs);_T7= _tag_fat("\n#line %d \"%s\"\n",sizeof(char),16U);_T8= _tag_fat(_T70,sizeof(void*),2);Cyc_fprintf(_T6,_T7,_T8);}}goto _TLC1;
# 945
_TLC0: _T9= _check_null(Cyc_fattrs);_TA= _tag_fat("\n",sizeof(char),2U);_TB= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T9,_TA,_TB);_TLC1:
# 955
 count= 0;
in_comment= 0;
new_field= '\001';
state= '\000';
# 961
c= Cyc_lex();
if(c!=21)goto _TLC3;_TC= 
# 964
Cyc_strlen(Cyc_token_buffer);{int k=(int)_TC;_TE= k + 1;_TF= (unsigned)_TE;{unsigned _T6E=_TF + 1U;_T11= _check_times(_T6E,sizeof(char));{char*_T6F=_cycalloc_atomic(_T11);{unsigned _T70=_T6E;unsigned _new2_cyclone;_new2_cyclone= 0;_TLC8: if(_new2_cyclone < _T70)goto _TLC6;else{goto _TLC7;}_TLC6: _T12= _new2_cyclone;
_T6F[_T12]= '\000';_new2_cyclone= _new2_cyclone + 1;goto _TLC8;_TLC7: _T6F[_T70]= 0;}_T10= (char*)_T6F;}_TD= _tag_fat(_T10,sizeof(char),_T6E);}Cyc_union_typename= _TD;
Cyc_strcpy(Cyc_union_typename,Cyc_token_buffer);_T13= 
# 968
_check_null(Cyc_finput);c= Cyc_getc(_T13);}goto _TLC4;
# 970
_TLC3: if(c!=6)goto _TLC9;
# 972
c= 123;goto _TLCA;
# 975
_TLC9: _T14= _tag_fat("syntax error after %union",sizeof(char),26U);Cyc_fatal(_T14);_TLCA: _TLC4:
# 977
 _TLCB: _T15= c;_T16= - 1;if(_T15!=_T16)goto _TLCC;else{goto _TLCD;}
# 980
_TLCC: _T17= Cyc_fdefines;_T18= (unsigned)_T17;if(!_T18)goto _TLCE;_T19= new_field;_T1A= (int)_T19;
if(!_T1A)goto _TLD0;if(c >= 97)goto _TLD4;else{goto _TLD3;}_TLD4: if(c <= 122)goto _TLD2;else{goto _TLD3;}_TLD3: if(c >= 65)goto _TLD5;else{goto _TLD0;}_TLD5: if(c <= 90)goto _TLD2;else{goto _TLD0;}
# 983
_TLD2: new_field= '\000';goto _TLD1;_TLD0: _TLD1: goto _TLCF;_TLCE: _TLCF: _T1B= c;_T1C= (int)_T1B;switch(_T1C){case 59:
# 991
 new_field= '\001';
state= '\000';goto _LL0;case 10:
# 996
 Cyc_lineno= Cyc_lineno + 1;goto _LL0;case 47: _T1D= 
# 1000
_check_null(Cyc_finput);c= Cyc_getc(_T1D);
if(c==42)goto _TLD7;if(c==47)goto _TLD7;_T1E= c;_T1F= 
_check_null(Cyc_finput);Cyc_ungetc(_T1E,_T1F);goto _TLD8;
# 1008
_TLD7: cplus_comment= c==47;
in_comment= 1;_T20= 
_check_null(Cyc_finput);c= Cyc_getc(_T20);
_TLD9: _T21= in_comment;if(_T21)goto _TLDA;else{goto _TLDB;}
# 1017
_TLDA: if(c!=10)goto _TLDC;
# 1019
Cyc_lineno= Cyc_lineno + 1;_T22= cplus_comment;
if(!_T22)goto _TLDE;
# 1022
in_comment= 0;goto _TLDB;_TLDE: goto _TLDD;_TLDC: _TLDD: _T23= c;_T24= - 1;
# 1026
if(_T23!=_T24)goto _TLE0;_T25= 
_tag_fat("unterminated comment at end of file",sizeof(char),36U);Cyc_fatal(_T25);goto _TLE1;_TLE0: _TLE1: _T26= cplus_comment;
# 1029
if(_T26)goto _TLE2;else{goto _TLE4;}_TLE4: if(c!=42)goto _TLE2;_T27= 
# 1031
_check_null(Cyc_finput);c= Cyc_getc(_T27);
if(c!=47)goto _TLE5;
# 1037
in_comment= 0;goto _TLE6;_TLE5: _TLE6: goto _TLE3;
# 1041
_TLE2: _T28= _check_null(Cyc_finput);c= Cyc_getc(_T28);_TLE3: goto _TLD9;_TLDB: _TLD8: goto _LL0;case 123:
# 1048
 count= count + 1;goto _LL0;case 125:
# 1052
 if(count!=0)goto _TLE7;_T29= 
_tag_fat("unmatched close-brace (`}')",sizeof(char),28U);Cyc_warn(_T29);goto _TLE8;_TLE7: _TLE8:
 count= count + -1;
if(count > 0)goto _TLE9;
# 1061
c= Cyc_skip_white_space();
if(c==59)goto _TLEB;_T2A= c;_T2B= _check_null(Cyc_finput);Cyc_ungetc(_T2A,_T2B);goto _TLEC;_TLEB: _TLEC:
 return;_TLE9: goto _LL0;case 65: goto _LLE;case 66: _LLE: goto _LL10;case 67: _LL10: goto _LL12;case 68: _LL12: goto _LL14;case 69: _LL14: goto _LL16;case 70: _LL16: goto _LL18;case 71: _LL18: goto _LL1A;case 72: _LL1A: goto _LL1C;case 73: _LL1C: goto _LL1E;case 74: _LL1E: goto _LL20;case 75: _LL20: goto _LL22;case 76: _LL22: goto _LL24;case 77: _LL24: goto _LL26;case 78: _LL26: goto _LL28;case 79: _LL28: goto _LL2A;case 80: _LL2A: goto _LL2C;case 81: _LL2C: goto _LL2E;case 82: _LL2E: goto _LL30;case 83: _LL30: goto _LL32;case 84: _LL32: goto _LL34;case 85: _LL34: goto _LL36;case 86: _LL36: goto _LL38;case 87: _LL38: goto _LL3A;case 88: _LL3A: goto _LL3C;case 89: _LL3C: goto _LL3E;case 90: _LL3E: goto _LL40;case 97: _LL40: goto _LL42;case 98: _LL42: goto _LL44;case 99: _LL44: goto _LL46;case 100: _LL46: goto _LL48;case 101: _LL48: goto _LL4A;case 102: _LL4A: goto _LL4C;case 103: _LL4C: goto _LL4E;case 104: _LL4E: goto _LL50;case 105: _LL50: goto _LL52;case 106: _LL52: goto _LL54;case 107: _LL54: goto _LL56;case 108: _LL56: goto _LL58;case 109: _LL58: goto _LL5A;case 110: _LL5A: goto _LL5C;case 111: _LL5C: goto _LL5E;case 112: _LL5E: goto _LL60;case 113: _LL60: goto _LL62;case 114: _LL62: goto _LL64;case 115: _LL64: goto _LL66;case 116: _LL66: goto _LL68;case 117: _LL68: goto _LL6A;case 118: _LL6A: goto _LL6C;case 119: _LL6C: goto _LL6E;case 120: _LL6E: goto _LL70;case 121: _LL70: goto _LL72;case 122: _LL72: goto _LL74;case 46: _LL74: goto _LL76;case 95: _LL76: _T2C= state;_T2D= (int)_T2C;
# 1080
if(_T2D==0)goto _TLED;_T2E= 
_tag_fat("we are not expecting this identifier\n",sizeof(char),38U);Cyc_warn(_T2E);goto _TLEE;_TLED: _TLEE:
 p= Cyc_token_buffer;_T2F= & p;{struct _fat_ptr _T6E=
_fat_ptr_inplace_plus_post(_T2F,sizeof(char),1);_T30= _check_fat_subscript(_T6E,sizeof(char),0U);_T31= (char*)_T30;{char _T6F=*_T31;_T32= c;{char _T70=(char)_T32;_T33= _get_fat_size(_T6E,sizeof(char));if(_T33!=1U)goto _TLEF;if(_T6F!=0)goto _TLEF;if(_T70==0)goto _TLEF;_throw_arraybounds();goto _TLF0;_TLEF: _TLF0: _T34= _T6E.curr;_T35= (char*)_T34;*_T35= _T70;}}}_T36= 
_check_null(Cyc_finput);c= Cyc_getc(_T36);
_TLF1: _T37= isalnum(c);if(_T37)goto _TLF2;else{goto _TLF5;}_TLF5: if(c==95)goto _TLF2;else{goto _TLF4;}_TLF4: if(c==46)goto _TLF2;else{goto _TLF3;}
# 1091
_TLF2: _T38= p;_T39= _T38.curr;_T3A= (char*)_T39;_T3B= Cyc_token_buffer;_T3C= Cyc_maxtoken;_T3D= _fat_ptr_plus(_T3B,sizeof(char),_T3C);_T3E= _T3D.curr;_T3F= (char*)_T3E;if(_T3A!=_T3F)goto _TLF6;
p= Cyc_grow_token_buffer(p);goto _TLF7;_TLF6: _TLF7: _T40= & p;{struct _fat_ptr _T6E=
# 1094
_fat_ptr_inplace_plus_post(_T40,sizeof(char),1);_T41= _check_fat_subscript(_T6E,sizeof(char),0U);_T42= (char*)_T41;{char _T6F=*_T42;_T43= c;{char _T70=(char)_T43;_T44= _get_fat_size(_T6E,sizeof(char));if(_T44!=1U)goto _TLF8;if(_T6F!=0)goto _TLF8;if(_T70==0)goto _TLF8;_throw_arraybounds();goto _TLF9;_TLF8: _TLF9: _T45= _T6E.curr;_T46= (char*)_T45;*_T46= _T70;}}}_T47= 
_check_null(Cyc_finput);c= Cyc_getc(_T47);goto _TLF1;_TLF3:{struct _fat_ptr _T6E=p;_T48= _check_fat_subscript(_T6E,sizeof(char),0U);_T49= (char*)_T48;{char _T6F=*_T49;char _T70='\000';_T4A= _get_fat_size(_T6E,sizeof(char));if(_T4A!=1U)goto _TLFA;if(_T6F!=0)goto _TLFA;if(_T70==0)goto _TLFA;_throw_arraybounds();goto _TLFB;_TLFA: _TLFB: _T4B= _T6E.curr;_T4C= (char*)_T4B;*_T4C= _T70;}}_T4D= c;_T4E= 
# 1099
_check_null(Cyc_finput);Cyc_ungetc(_T4D,_T4E);
constructor= Cyc_strdup(Cyc_token_buffer);
state= '\001';goto _LL0;case 40:  {
# 1105
int level=0;_T4F= state;_T50= (int)_T4F;
# 1107
if(_T50==1)goto _TLFC;_T51= 
_tag_fat("not expecting a type here\n",sizeof(char),27U);Cyc_warn(_T51);goto _TLFD;_TLFC: _TLFD:
# 1110
 p= Cyc_token_buffer;_T52= 
_check_null(Cyc_finput);c= Cyc_getc(_T52);
# 1113
_TLFE: if(c!=41)goto _TLFF;else{goto _TL101;}_TL101: if(level > 0)goto _TLFF;else{goto _TL100;}
# 1119
_TLFF: _T53= c;_T54= - 1;if(_T53!=_T54)goto _TL102;_T55= 
_tag_fat("unterminated type name at end of file",sizeof(char),38U);Cyc_fatal(_T55);goto _TL103;_TL102: _TL103:
 if(c!=10)goto _TL104;_T56= 
# 1123
_tag_fat("unterminated type name",sizeof(char),23U);Cyc_warn(_T56);
Cyc_lineno= Cyc_lineno + 1;goto _TL105;_TL104: _TL105:
# 1126
 if(c!=40)goto _TL106;
# 1128
level= level + 1;goto _TL107;_TL106: _TL107:
# 1130
 if(c!=41)goto _TL108;
# 1132
level= level + -1;
if(level >= 0)goto _TL10A;_T57= 
_tag_fat("unmatched () inside union definition",sizeof(char),37U);Cyc_warn(_T57);
Cyc_ungetc(c,Cyc_finput);goto _TL100;_TL10A: goto _TL109;_TL108: _TL109: _T58= p;_T59= _T58.curr;_T5A= (char*)_T59;_T5B= Cyc_token_buffer;_T5C= Cyc_maxtoken;_T5D= 
# 1140
_fat_ptr_plus(_T5B,sizeof(char),_T5C);_T5E= _T5D.curr;_T5F= (char*)_T5E;if(_T5A!=_T5F)goto _TL10C;
p= Cyc_grow_token_buffer(p);goto _TL10D;_TL10C: _TL10D: _T60= & p;{struct _fat_ptr _T6E=
# 1143
_fat_ptr_inplace_plus_post(_T60,sizeof(char),1);_T61= _check_fat_subscript(_T6E,sizeof(char),0U);_T62= (char*)_T61;{char _T6F=*_T62;_T63= c;{char _T70=(char)_T63;_T64= _get_fat_size(_T6E,sizeof(char));if(_T64!=1U)goto _TL10E;if(_T6F!=0)goto _TL10E;if(_T70==0)goto _TL10E;_throw_arraybounds();goto _TL10F;_TL10E: _TL10F: _T65= _T6E.curr;_T66= (char*)_T65;*_T66= _T70;}}}_T67= 
_check_null(Cyc_finput);c= Cyc_getc(_T67);goto _TLFE;_TL100:{struct _fat_ptr _T6E=p;_T68= _check_fat_subscript(_T6E,sizeof(char),0U);_T69= (char*)_T68;{char _T6F=*_T69;char _T70='\000';_T6A= _get_fat_size(_T6E,sizeof(char));if(_T6A!=1U)goto _TL110;if(_T6F!=0)goto _TL110;if(_T70==0)goto _TL110;_throw_arraybounds();goto _TL111;_TL110: _TL111: _T6B= _T6E.curr;_T6C= (char*)_T6B;*_T6C= _T70;}}
# 1152
type_name= Cyc_strdup(Cyc_token_buffer);
state= '\002';
Cyc_add_to_list(type_name,constructor);goto _LL0;}default: goto _LL0;}_LL0: _T6D= 
# 1162
_check_null(Cyc_finput);c= Cyc_getc(_T6D);goto _TLCB;_TLCD:;}
# 1168
struct Cyc_strlist*Cyc_reverse(struct Cyc_strlist*x){struct Cyc_strlist*_T0;struct Cyc_strlist*_T1;struct Cyc_strlist*_T2;struct Cyc_strlist*_T3;struct Cyc_strlist*_T4;
if(x!=0)goto _TL112;return 0;
# 1171
_TL112: {struct Cyc_strlist*first=x;_T0= x;{
struct Cyc_strlist*second=_T0->tl;_T1= x;
_T1->tl= 0;
_TL114: if(second!=0)goto _TL115;else{goto _TL116;}
_TL115: _T2= second;{struct Cyc_strlist*temp=_T2->tl;_T3= second;
_T3->tl= first;
first= second;
second= temp;}goto _TL114;_TL116: _T4= first;
# 1180
return _T4;}}}
# 1187
void Cyc_print_union_decl (void){struct _fat_ptr _T0;unsigned char*_T1;char*_T2;struct _fat_ptr _T3;struct Cyc_String_pa_PrintArg_struct _T4;struct _RegionHandle*_T5;struct _fat_ptr _T6;struct _fat_ptr _T7;struct Cyc_String_pa_PrintArg_struct _T8;struct Cyc___cycFILE*_T9;struct _fat_ptr _TA;struct _fat_ptr _TB;struct Cyc_String_pa_PrintArg_struct _TC;struct Cyc_strlist*_TD;struct Cyc_String_pa_PrintArg_struct _TE;struct Cyc_strlist*_TF;struct Cyc___cycFILE*_T10;struct _fat_ptr _T11;struct _fat_ptr _T12;struct Cyc_strlist*_T13;struct Cyc___cycFILE*_T14;struct _fat_ptr _T15;struct _fat_ptr _T16;struct _fat_ptr _T17;unsigned char*_T18;char*_T19;struct Cyc_String_pa_PrintArg_struct _T1A;struct Cyc___cycFILE*_T1B;struct _fat_ptr _T1C;struct _fat_ptr _T1D;struct Cyc___cycFILE*_T1E;struct _fat_ptr _T1F;struct _fat_ptr _T20;struct Cyc___cycFILE*_T21;unsigned _T22;struct Cyc_String_pa_PrintArg_struct _T23;struct Cyc___cycFILE*_T24;struct _fat_ptr _T25;struct _fat_ptr _T26;struct Cyc___cycFILE*_T27;struct _fat_ptr _T28;struct _fat_ptr _T29;struct Cyc___cycFILE*_T2A;struct _fat_ptr _T2B;struct _fat_ptr _T2C;struct Cyc_String_pa_PrintArg_struct _T2D;struct Cyc_strlist*_T2E;struct Cyc_String_pa_PrintArg_struct _T2F;struct Cyc_strlist*_T30;struct Cyc___cycFILE*_T31;struct _fat_ptr _T32;struct _fat_ptr _T33;struct Cyc_strlist*_T34;struct Cyc___cycFILE*_T35;struct _fat_ptr _T36;struct _fat_ptr _T37;struct _RegionHandle _T38=_new_region(0U,"pr");struct _RegionHandle*pr=& _T38;_push_region(pr);
# 1191
Cyc_seen_destructors= Cyc_reverse(Cyc_seen_destructors);{
struct Cyc_strlist*l1=Cyc_seen_destructors;
struct _fat_ptr vars=_tag_fat(0,0,0);_T0= Cyc_union_typename;_T1= _T0.curr;_T2= (char*)_T1;
if(_T2==0)goto _TL117;{struct Cyc_String_pa_PrintArg_struct _T39;_T39.tag= 0;
_T39.f1= Cyc_union_typename;_T4= _T39;}{struct Cyc_String_pa_PrintArg_struct _T39=_T4;void*_T3A[1];_T3A[0]= & _T39;_T5= pr;_T6= _tag_fat("<%s>",sizeof(char),5U);_T7= _tag_fat(_T3A,sizeof(void*),1);_T3= Cyc_rprintf(_T5,_T6,_T7);}vars= _T3;goto _TL118;_TL117: _TL118:{struct Cyc_String_pa_PrintArg_struct _T39;_T39.tag= 0;
# 1198
_T39.f1= vars;_T8= _T39;}{struct Cyc_String_pa_PrintArg_struct _T39=_T8;void*_T3A[1];_T3A[0]= & _T39;_T9= 
# 1196
_check_null(Cyc_fattrs0);_TA= 
_tag_fat("@tagged union YYSTYPE %s\n{\n  int YYINITIALSVAL;",sizeof(char),48U);_TB= _tag_fat(_T3A,sizeof(void*),1);Cyc_fprintf(_T9,_TA,_TB);}
# 1199
_TL11C: if(l1!=0)goto _TL11A;else{goto _TL11B;}
_TL11A:{struct Cyc_String_pa_PrintArg_struct _T39;_T39.tag= 0;_TD= l1;
_T39.f1= _TD->str;_TC= _T39;}{struct Cyc_String_pa_PrintArg_struct _T39=_TC;{struct Cyc_String_pa_PrintArg_struct _T3A;_T3A.tag= 0;_TF= l1;_T3A.f1= _TF->nth;_TE= _T3A;}{struct Cyc_String_pa_PrintArg_struct _T3A=_TE;void*_T3B[2];_T3B[0]= & _T39;_T3B[1]= & _T3A;_T10= 
# 1200
_check_null(Cyc_fattrs0);_T11= _tag_fat("\n  %s %s;",sizeof(char),10U);_T12= _tag_fat(_T3B,sizeof(void*),2);Cyc_fprintf(_T10,_T11,_T12);}}_T13= l1;
# 1199
l1= _T13->tl;goto _TL11C;_TL11B: _T14= 
# 1203
_check_null(Cyc_fattrs0);_T15= _tag_fat("\n};\n",sizeof(char),5U);_T16= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T14,_T15,_T16);_T17= Cyc_union_typename;_T18= _T17.curr;_T19= (char*)_T18;
if(_T19==0)goto _TL11D;{struct Cyc_String_pa_PrintArg_struct _T39;_T39.tag= 0;
_T39.f1= vars;_T1A= _T39;}{struct Cyc_String_pa_PrintArg_struct _T39=_T1A;void*_T3A[1];_T3A[0]= & _T39;_T1B= _check_null(Cyc_fattrs0);_T1C= _tag_fat("\n#define YYSTYPEVARS %s\n",sizeof(char),25U);_T1D= _tag_fat(_T3A,sizeof(void*),1);Cyc_fprintf(_T1B,_T1C,_T1D);}goto _TL11E;_TL11D: _TL11E: _T1E= 
_check_null(Cyc_fattrs0);_T1F= 
# 1208
_tag_fat("\nstatic void yythrowfail(string_t<`H> s) __attribute__((noreturn)) {\n throw new Core::Failure(s);\n } ",sizeof(char),102U);_T20= _tag_fat(0U,sizeof(void*),0);
# 1206
Cyc_fprintf(_T1E,_T1F,_T20);_T21= Cyc_fdefines;_T22= (unsigned)_T21;
# 1209
if(!_T22)goto _TL11F;{struct Cyc_String_pa_PrintArg_struct _T39;_T39.tag= 0;
# 1213
_T39.f1= vars;_T23= _T39;}{struct Cyc_String_pa_PrintArg_struct _T39=_T23;void*_T3A[1];_T3A[0]= & _T39;_T24= Cyc_fdefines;_T25= 
# 1212
_tag_fat("\nextern @tagged union YYSTYPE %s",sizeof(char),33U);_T26= _tag_fat(_T3A,sizeof(void*),1);Cyc_fprintf(_T24,_T25,_T26);}_T27= 
# 1214
_check_null(Cyc_fdefines);_T28= _tag_fat("\n{",sizeof(char),3U);_T29= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T27,_T28,_T29);_T2A= 
_check_null(Cyc_fdefines);_T2B= _tag_fat("\n  int  YYINITIALSVAL;",sizeof(char),23U);_T2C= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T2A,_T2B,_T2C);
l1= Cyc_seen_destructors;
_TL124: if(l1!=0)goto _TL122;else{goto _TL123;}
_TL122:{struct Cyc_String_pa_PrintArg_struct _T39;_T39.tag= 0;_T2E= l1;
_T39.f1= _T2E->str;_T2D= _T39;}{struct Cyc_String_pa_PrintArg_struct _T39=_T2D;{struct Cyc_String_pa_PrintArg_struct _T3A;_T3A.tag= 0;_T30= l1;_T3A.f1= _T30->nth;_T2F= _T3A;}{struct Cyc_String_pa_PrintArg_struct _T3A=_T2F;void*_T3B[2];_T3B[0]= & _T39;_T3B[1]= & _T3A;_T31= 
# 1218
_check_null(Cyc_fdefines);_T32= _tag_fat("\n  %s %s;",sizeof(char),10U);_T33= _tag_fat(_T3B,sizeof(void*),2);Cyc_fprintf(_T31,_T32,_T33);}}_T34= l1;
# 1217
l1= _T34->tl;goto _TL124;_TL123: _T35= 
# 1221
_check_null(Cyc_fdefines);_T36= _tag_fat("\n};\n",sizeof(char),5U);_T37= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T35,_T36,_T37);goto _TL120;_TL11F: _TL120:;}_pop_region();}
# 1231
void Cyc_parse_expect_decl (void){char*_T0;unsigned _T1;char*_T2;char*_T3;struct _fat_ptr _T4;int _T5;int _T6;unsigned char*_T7;char*_T8;int _T9;unsigned _TA;unsigned char*_TB;char*_TC;struct _fat_ptr _TD;int _TE;unsigned char*_TF;char*_T10;unsigned _T11;unsigned char*_T12;char*_T13;struct _fat_ptr _T14;char*_T15;const char*_T16;
# 1234
int c;
int count;
char buffer[21U];{unsigned _T17=20U;unsigned i;i= 0;_TL128: if(i < _T17)goto _TL126;else{goto _TL127;}_TL126: _T0= buffer;_T1= i;_T0[_T1]= '\000';i= i + 1;goto _TL128;_TL127: _T2= buffer;_T2[_T17]= 0;}_T3= buffer;{
struct _fat_ptr bufp=_tag_fat(_T3,sizeof(char),21U);
# 1239
c= Cyc_getc(Cyc_finput);
_TL129: if(c==32)goto _TL12A;else{goto _TL12C;}_TL12C: if(c==9)goto _TL12A;else{goto _TL12B;}
_TL12A: c= Cyc_getc(Cyc_finput);goto _TL129;_TL12B:
# 1243
 count= 0;
_TL12D: if(c >= 48)goto _TL130;else{goto _TL12F;}_TL130: if(c <= 57)goto _TL12E;else{goto _TL12F;}
# 1246
_TL12E: if(count >= 20)goto _TL131;_T4= bufp;_T5= count;
count= _T5 + 1;_T6= _T5;{struct _fat_ptr _T17=_fat_ptr_plus(_T4,sizeof(char),_T6);_T7= _T17.curr;_T8= (char*)_T7;{char _T18=*_T8;_T9= c;{char _T19=(char)_T9;_TA= _get_fat_size(_T17,sizeof(char));if(_TA!=1U)goto _TL133;if(_T18!=0)goto _TL133;if(_T19==0)goto _TL133;_throw_arraybounds();goto _TL134;_TL133: _TL134: _TB= _T17.curr;_TC= (char*)_TB;*_TC= _T19;}}}goto _TL132;_TL131: _TL132:
 c= Cyc_getc(Cyc_finput);goto _TL12D;_TL12F: _TD= bufp;_TE= count;{struct _fat_ptr _T17=_fat_ptr_plus(_TD,sizeof(char),_TE);_TF= _T17.curr;_T10= (char*)_TF;{char _T18=*_T10;char _T19='\000';_T11= _get_fat_size(_T17,sizeof(char));if(_T11!=1U)goto _TL135;if(_T18!=0)goto _TL135;if(_T19==0)goto _TL135;_throw_arraybounds();goto _TL136;_TL135: _TL136: _T12= _T17.curr;_T13= (char*)_T12;*_T13= _T19;}}
# 1252
Cyc_ungetc(c,Cyc_finput);
# 1254
if(count <= 0)goto _TL139;else{goto _TL13A;}_TL13A: if(count > 10)goto _TL139;else{goto _TL137;}
_TL139: _T14= _tag_fat("argument of %expect is not an integer",sizeof(char),38U);Cyc_warn(_T14);goto _TL138;_TL137: _TL138: _T15= buffer;_T16= (const char*)_T15;
Cyc_expected_conflicts= atoi(_T16);}}
# 1259
void Cyc_parse_expect_rr_decl (void){char*_T0;unsigned _T1;char*_T2;char*_T3;struct _fat_ptr _T4;int _T5;int _T6;unsigned char*_T7;char*_T8;int _T9;unsigned _TA;unsigned char*_TB;char*_TC;struct _fat_ptr _TD;int _TE;unsigned char*_TF;char*_T10;unsigned _T11;unsigned char*_T12;char*_T13;struct _fat_ptr _T14;char*_T15;const char*_T16;
# 1262
int c;
int count;
char buffer[21U];{unsigned _T17=20U;unsigned i;i= 0;_TL13E: if(i < _T17)goto _TL13C;else{goto _TL13D;}_TL13C: _T0= buffer;_T1= i;_T0[_T1]= '\000';i= i + 1;goto _TL13E;_TL13D: _T2= buffer;_T2[_T17]= 0;}_T3= buffer;{
struct _fat_ptr bufp=_tag_fat(_T3,sizeof(char),21U);
# 1267
c= Cyc_getc(Cyc_finput);
_TL13F: if(c==32)goto _TL140;else{goto _TL142;}_TL142: if(c==9)goto _TL140;else{goto _TL141;}
_TL140: c= Cyc_getc(Cyc_finput);goto _TL13F;_TL141:
# 1271
 count= 0;
_TL143: if(c >= 48)goto _TL146;else{goto _TL145;}_TL146: if(c <= 57)goto _TL144;else{goto _TL145;}
# 1274
_TL144: if(count >= 20)goto _TL147;_T4= bufp;_T5= count;
count= _T5 + 1;_T6= _T5;{struct _fat_ptr _T17=_fat_ptr_plus(_T4,sizeof(char),_T6);_T7= _T17.curr;_T8= (char*)_T7;{char _T18=*_T8;_T9= c;{char _T19=(char)_T9;_TA= _get_fat_size(_T17,sizeof(char));if(_TA!=1U)goto _TL149;if(_T18!=0)goto _TL149;if(_T19==0)goto _TL149;_throw_arraybounds();goto _TL14A;_TL149: _TL14A: _TB= _T17.curr;_TC= (char*)_TB;*_TC= _T19;}}}goto _TL148;_TL147: _TL148:
 c= Cyc_getc(Cyc_finput);goto _TL143;_TL145: _TD= bufp;_TE= count;{struct _fat_ptr _T17=_fat_ptr_plus(_TD,sizeof(char),_TE);_TF= _T17.curr;_T10= (char*)_TF;{char _T18=*_T10;char _T19='\000';_T11= _get_fat_size(_T17,sizeof(char));if(_T11!=1U)goto _TL14B;if(_T18!=0)goto _TL14B;if(_T19==0)goto _TL14B;_throw_arraybounds();goto _TL14C;_TL14B: _TL14C: _T12= _T17.curr;_T13= (char*)_T12;*_T13= _T19;}}
# 1280
Cyc_ungetc(c,Cyc_finput);
# 1282
if(count <= 0)goto _TL14F;else{goto _TL150;}_TL150: if(count > 10)goto _TL14F;else{goto _TL14D;}
_TL14F: _T14= _tag_fat("argument of %expect_rr is not an integer",sizeof(char),41U);Cyc_warn(_T14);goto _TL14E;_TL14D: _TL14E: _T15= buffer;_T16= (const char*)_T15;
Cyc_expected_rr_conflicts= atoi(_T16);}}
# 1291
struct _fat_ptr Cyc_get_type_name(int n,struct Cyc_symbol_list*rule){struct _fat_ptr _T0;struct Cyc_symbol_list*_T1;struct Cyc_symbol_list*_T2;struct Cyc_bucket*_T3;struct _fat_ptr _T4;struct Cyc_symbol_list*_T5;struct Cyc_bucket*_T6;struct Cyc_bucket*_T7;struct _fat_ptr _T8;
# 1294
struct _fat_ptr msg=_tag_fat("invalid $ value",sizeof(char),16U);
# 1296
int i;
struct Cyc_symbol_list*rp;
# 1299
if(n >= 0)goto _TL151;
# 1301
Cyc_warn(msg);_T0= 
_tag_fat(0,0,0);return _T0;_TL151:
# 1305
 rp= rule;
i= 0;
# 1308
_TL153: if(i < n)goto _TL154;else{goto _TL155;}
# 1310
_TL154: _T1= _check_null(rp);rp= _T1->next;
if(rp==0)goto _TL158;else{goto _TL159;}_TL159: _T2= rp;_T3= _T2->sym;if(_T3==0)goto _TL158;else{goto _TL156;}
# 1313
_TL158: Cyc_warn(msg);_T4= 
_tag_fat(0,0,0);return _T4;_TL156:
# 1316
 i= i + 1;goto _TL153;_TL155: _T5= 
# 1319
_check_null(rp);_T6= _T5->sym;_T7= _check_null(_T6);_T8= _T7->type_name;return _T8;}
# 1329
void Cyc_copy_guard(struct Cyc_symbol_list*rule,int stack_offset){int _T0;struct Cyc_Int_pa_PrintArg_struct _T1;int _T2;struct Cyc___cycFILE*_T3;struct _fat_ptr _T4;struct _fat_ptr _T5;int _T6;struct Cyc_Int_pa_PrintArg_struct _T7;int _T8;struct Cyc_String_pa_PrintArg_struct _T9;struct Cyc___cycFILE*_TA;struct _fat_ptr _TB;struct _fat_ptr _TC;struct Cyc___cycFILE*_TD;struct Cyc___cycFILE*_TE;int _TF;int _T10;int _T11;int _T12;int _T13;struct Cyc___cycFILE*_T14;int _T15;struct Cyc___cycFILE*_T16;int _T17;struct Cyc___cycFILE*_T18;struct _fat_ptr _T19;struct Cyc___cycFILE*_T1A;int _T1B;struct Cyc___cycFILE*_T1C;struct Cyc___cycFILE*_T1D;int _T1E;int _T1F;struct _fat_ptr _T20;struct _fat_ptr _T21;int _T22;struct Cyc___cycFILE*_T23;int _T24;struct Cyc___cycFILE*_T25;struct Cyc___cycFILE*_T26;int _T27;int _T28;struct _fat_ptr _T29;int _T2A;struct Cyc___cycFILE*_T2B;struct Cyc___cycFILE*_T2C;int _T2D;struct Cyc___cycFILE*_T2E;int _T2F;struct Cyc___cycFILE*_T30;struct Cyc___cycFILE*_T31;int _T32;struct Cyc___cycFILE*_T33;struct Cyc___cycFILE*_T34;int _T35;int _T36;int _T37;struct Cyc___cycFILE*_T38;struct Cyc___cycFILE*_T39;int _T3A;struct Cyc___cycFILE*_T3B;int _T3C;struct Cyc___cycFILE*_T3D;int _T3E;struct Cyc___cycFILE*_T3F;int _T40;int _T41;struct _fat_ptr _T42;int _T43;struct Cyc___cycFILE*_T44;struct Cyc___cycFILE*_T45;struct Cyc___cycFILE*_T46;struct Cyc___cycFILE*_T47;int _T48;struct _fat_ptr*_T49;unsigned char*_T4A;char*_T4B;int _T4C;unsigned _T4D;unsigned char*_T4E;char*_T4F;unsigned char*_T50;char*_T51;unsigned _T52;unsigned char*_T53;char*_T54;struct Cyc___cycFILE*_T55;struct Cyc___cycFILE*_T56;struct _fat_ptr _T57;struct _fat_ptr _T58;struct _fat_ptr _T59;unsigned char*_T5A;unsigned _T5B;struct Cyc_symbol_list*_T5C;struct Cyc_bucket*_T5D;struct Cyc_bucket*_T5E;struct _fat_ptr _T5F;unsigned char*_T60;unsigned _T61;struct Cyc_String_pa_PrintArg_struct _T62;struct Cyc___cycFILE*_T63;struct _fat_ptr _T64;struct _fat_ptr _T65;struct _fat_ptr _T66;unsigned char*_T67;unsigned _T68;int _T69;struct _fat_ptr _T6A;struct Cyc_symbol_list*_T6B;struct Cyc_bucket*_T6C;struct _fat_ptr _T6D;int _T6E;int _T6F;struct Cyc___cycFILE*_T70;struct Cyc___cycFILE*_T71;struct Cyc___cycFILE*_T72;struct _fat_ptr _T73;unsigned char*_T74;unsigned _T75;struct _fat_ptr _T76;unsigned char*_T77;unsigned _T78;struct _fat_ptr _T79;struct _fat_ptr _T7A;struct Cyc_symbol_list*_T7B;struct Cyc_bucket*_T7C;struct Cyc_bucket*_T7D;struct _fat_ptr _T7E;struct _fat_ptr _T7F;struct Cyc_String_pa_PrintArg_struct _T80;struct Cyc_Int_pa_PrintArg_struct _T81;int _T82;struct Cyc___cycFILE*_T83;struct _fat_ptr _T84;struct _fat_ptr _T85;struct Cyc___cycFILE*_T86;struct _fat_ptr _T87;int _T88;char _T89;struct _fat_ptr _T8A;struct Cyc___cycFILE*_T8B;int _T8C;int _T8D;struct Cyc___cycFILE*_T8E;struct Cyc___cycFILE*_T8F;struct Cyc___cycFILE*_T90;struct Cyc___cycFILE*_T91;struct Cyc_Int_pa_PrintArg_struct _T92;int _T93;struct Cyc___cycFILE*_T94;struct _fat_ptr _T95;struct _fat_ptr _T96;struct _fat_ptr _T97;int _T98;struct Cyc___cycFILE*_T99;struct Cyc___cycFILE*_T9A;struct Cyc___cycFILE*_T9B;struct _fat_ptr _T9C;struct _fat_ptr _T9D;struct Cyc___cycFILE*_T9E;int _T9F;struct Cyc___cycFILE*_TA0;
# 1332
int c;
int n;
int count;
int match;
int ended;
struct _fat_ptr type_name;
int brace_flag=0;
int cplus_comment;_T0= Cyc_semantic_parser;
# 1342
if(!_T0)goto _TL15A;stack_offset= 0;goto _TL15B;_TL15A: _TL15B:{struct Cyc_Int_pa_PrintArg_struct _TA1;_TA1.tag= 1;_T2= Cyc_nrules;
# 1344
_TA1.f1= (unsigned long)_T2;_T1= _TA1;}{struct Cyc_Int_pa_PrintArg_struct _TA1=_T1;void*_TA2[1];_TA2[0]= & _TA1;_T3= _check_null(Cyc_fguard);_T4= _tag_fat("\ncase %d:\n",sizeof(char),11U);_T5= _tag_fat(_TA2,sizeof(void*),1);Cyc_fprintf(_T3,_T4,_T5);}_T6= Cyc_nolinesflag;
if(_T6)goto _TL15C;else{goto _TL15E;}
_TL15E:{struct Cyc_Int_pa_PrintArg_struct _TA1;_TA1.tag= 1;_T8= Cyc_lineno;_TA1.f1= (unsigned long)_T8;_T7= _TA1;}{struct Cyc_Int_pa_PrintArg_struct _TA1=_T7;{struct Cyc_String_pa_PrintArg_struct _TA2;_TA2.tag= 0;_TA2.f1= Cyc_infile;_T9= _TA2;}{struct Cyc_String_pa_PrintArg_struct _TA2=_T9;void*_TA3[2];_TA3[0]= & _TA1;_TA3[1]= & _TA2;_TA= _check_null(Cyc_fguard);_TB= _tag_fat("#line %d \"%s\"\n",sizeof(char),15U);_TC= _tag_fat(_TA3,sizeof(void*),2);Cyc_fprintf(_TA,_TB,_TC);}}goto _TL15D;_TL15C: _TL15D: _TD= 
_check_null(Cyc_fguard);Cyc_putc(123,_TD);
# 1349
count= 0;_TE= 
_check_null(Cyc_finput);c= Cyc_getc(_TE);
# 1352
_TL15F: _T10= brace_flag;if(!_T10)goto _TL162;_TF= count > 0;goto _TL163;_TL162: _TF= c!=59;_TL163: if(_TF)goto _TL160;else{goto _TL161;}
# 1354
_TL160: _T11= c;_T12= (int)_T11;switch(_T12){case 10: _T13= c;_T14= 
# 1357
_check_null(Cyc_fguard);Cyc_putc(_T13,_T14);
Cyc_lineno= Cyc_lineno + 1;goto _LL0;case 123: _T15= c;_T16= 
# 1362
_check_null(Cyc_fguard);Cyc_putc(_T15,_T16);
brace_flag= 1;
count= count + 1;goto _LL0;case 125: _T17= c;_T18= 
# 1368
_check_null(Cyc_fguard);Cyc_putc(_T17,_T18);
if(count <= 0)goto _TL165;
count= count + -1;goto _TL166;
# 1373
_TL165: _T19= _tag_fat("unmatched right brace (`}')",sizeof(char),28U);Cyc_warn(_T19);_T1A= 
_check_null(Cyc_finput);c= Cyc_getc(_T1A);_TL166: goto _LL0;case 39: goto _LLA;case 34: _LLA:
# 1380
 match= c;_T1B= c;_T1C= 
_check_null(Cyc_fguard);Cyc_putc(_T1B,_T1C);_T1D= 
_check_null(Cyc_finput);c= Cyc_getc(_T1D);
# 1384
_TL167: if(c!=match)goto _TL168;else{goto _TL169;}
# 1386
_TL168: _T1E= c;_T1F= - 1;if(_T1E!=_T1F)goto _TL16A;_T20= 
_tag_fat("unterminated string at end of file",sizeof(char),35U);Cyc_fatal(_T20);goto _TL16B;_TL16A: _TL16B:
 if(c!=10)goto _TL16C;_T21= 
# 1390
_tag_fat("unterminated string",sizeof(char),20U);Cyc_warn(_T21);_T22= c;_T23= 
_check_null(Cyc_finput);Cyc_ungetc(_T22,_T23);
c= match;goto _TL167;_TL16C: _T24= c;_T25= 
# 1396
_check_null(Cyc_fguard);Cyc_putc(_T24,_T25);
# 1398
if(c!=92)goto _TL16E;_T26= 
# 1400
_check_null(Cyc_finput);c= Cyc_getc(_T26);_T27= c;_T28= - 1;
if(_T27!=_T28)goto _TL170;_T29= 
_tag_fat("unterminated string",sizeof(char),20U);Cyc_fatal(_T29);goto _TL171;_TL170: _TL171: _T2A= c;_T2B= 
_check_null(Cyc_fguard);Cyc_putc(_T2A,_T2B);
if(c!=10)goto _TL172;
Cyc_lineno= Cyc_lineno + 1;goto _TL173;_TL172: _TL173: goto _TL16F;_TL16E: _TL16F: _T2C= 
# 1408
_check_null(Cyc_finput);c= Cyc_getc(_T2C);goto _TL167;_TL169: _T2D= c;_T2E= 
# 1411
_check_null(Cyc_fguard);Cyc_putc(_T2D,_T2E);goto _LL0;case 47: _T2F= c;_T30= 
# 1415
_check_null(Cyc_fguard);Cyc_putc(_T2F,_T30);_T31= 
_check_null(Cyc_finput);c= Cyc_getc(_T31);
if(c==42)goto _TL174;if(c==47)goto _TL174;goto _TL15F;_TL174:
# 1420
 cplus_comment= c==47;_T32= c;_T33= 
_check_null(Cyc_fguard);Cyc_putc(_T32,_T33);_T34= 
_check_null(Cyc_finput);c= Cyc_getc(_T34);
# 1424
ended= 0;
_TL176: _T35= ended;if(_T35)goto _TL178;else{goto _TL177;}
# 1427
_TL177: _T36= cplus_comment;if(_T36)goto _TL179;else{goto _TL17B;}_TL17B: if(c!=42)goto _TL179;
# 1429
_TL17C: if(c==42)goto _TL17D;else{goto _TL17E;}
# 1431
_TL17D: _T37= c;_T38= _check_null(Cyc_fguard);Cyc_putc(_T37,_T38);_T39= 
_check_null(Cyc_finput);c= Cyc_getc(_T39);goto _TL17C;_TL17E:
# 1435
 if(c!=47)goto _TL17F;_T3A= c;_T3B= 
# 1437
_check_null(Cyc_fguard);Cyc_putc(_T3A,_T3B);
ended= 1;goto _TL180;_TL17F: _TL180: goto _TL17A;
# 1441
_TL179: if(c!=10)goto _TL181;
# 1443
Cyc_lineno= Cyc_lineno + 1;_T3C= c;_T3D= 
_check_null(Cyc_fguard);Cyc_putc(_T3C,_T3D);_T3E= cplus_comment;
if(!_T3E)goto _TL183;
ended= 1;goto _TL184;
# 1448
_TL183: _T3F= _check_null(Cyc_finput);c= Cyc_getc(_T3F);_TL184: goto _TL182;
# 1450
_TL181: _T40= c;_T41= - 1;if(_T40!=_T41)goto _TL185;_T42= 
_tag_fat("unterminated comment",sizeof(char),21U);Cyc_fatal(_T42);goto _TL186;
# 1454
_TL185: _T43= c;_T44= _check_null(Cyc_fguard);Cyc_putc(_T43,_T44);_T45= 
_check_null(Cyc_finput);c= Cyc_getc(_T45);_TL186: _TL182: _TL17A: goto _TL176;_TL178: goto _LL0;case 36: _T46= 
# 1462
_check_null(Cyc_finput);c= Cyc_getc(_T46);
type_name= _tag_fat(0,0,0);
# 1465
if(c!=60)goto _TL187;{
# 1467
struct _fat_ptr cp=Cyc_token_buffer;
# 1469
_TL189: _T47= _check_null(Cyc_finput);c= Cyc_getc(_T47);_T48= c;if(_T48!=62)goto _TL18C;else{goto _TL18B;}_TL18C: if(c > 0)goto _TL18A;else{goto _TL18B;}
_TL18A: _T49= & cp;{struct _fat_ptr _TA1=_fat_ptr_inplace_plus_post(_T49,sizeof(char),1);_T4A= _check_fat_subscript(_TA1,sizeof(char),0U);_T4B= (char*)_T4A;{char _TA2=*_T4B;_T4C= c;{char _TA3=(char)_T4C;_T4D= _get_fat_size(_TA1,sizeof(char));if(_T4D!=1U)goto _TL18D;if(_TA2!=0)goto _TL18D;if(_TA3==0)goto _TL18D;_throw_arraybounds();goto _TL18E;_TL18D: _TL18E: _T4E= _TA1.curr;_T4F= (char*)_T4E;*_T4F= _TA3;}}}goto _TL189;_TL18B:{struct _fat_ptr _TA1=cp;_T50= _check_fat_subscript(_TA1,sizeof(char),0U);_T51= (char*)_T50;{char _TA2=*_T51;char _TA3='\000';_T52= _get_fat_size(_TA1,sizeof(char));if(_T52!=1U)goto _TL18F;if(_TA2!=0)goto _TL18F;if(_TA3==0)goto _TL18F;_throw_arraybounds();goto _TL190;_TL18F: _TL190: _T53= _TA1.curr;_T54= (char*)_T53;*_T54= _TA3;}}
# 1472
type_name= Cyc_token_buffer;_T55= 
# 1474
_check_null(Cyc_finput);c= Cyc_getc(_T55);}goto _TL188;_TL187: _TL188:
# 1477
 if(c!=36)goto _TL191;_T56= 
# 1479
_check_null(Cyc_fguard);_T57= _tag_fat("yyval",sizeof(char),6U);_T58= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T56,_T57,_T58);_T59= type_name;_T5A= _T59.curr;_T5B= (unsigned)_T5A;
if(_T5B)goto _TL193;else{goto _TL195;}_TL195: _T5C= _check_null(rule);_T5D= _T5C->sym;_T5E= _check_null(_T5D);type_name= _T5E->type_name;goto _TL194;_TL193: _TL194: _T5F= type_name;_T60= _T5F.curr;_T61= (unsigned)_T60;
if(!_T61)goto _TL196;{struct Cyc_String_pa_PrintArg_struct _TA1;_TA1.tag= 0;
_TA1.f1= type_name;_T62= _TA1;}{struct Cyc_String_pa_PrintArg_struct _TA1=_T62;void*_TA2[1];_TA2[0]= & _TA1;_T63= _check_null(Cyc_fguard);_T64= _tag_fat(".%s",sizeof(char),4U);_T65= _tag_fat(_TA2,sizeof(void*),1);Cyc_fprintf(_T63,_T64,_T65);}goto _TL197;_TL196: _TL197: _T66= type_name;_T67= _T66.curr;_T68= (unsigned)_T67;
if(_T68)goto _TL198;else{goto _TL19A;}_TL19A: _T69= Cyc_typed;if(!_T69)goto _TL198;_T6A= 
_tag_fat("$$ of `%s' has no declared type",sizeof(char),32U);_T6B= rule;_T6C= _T6B->sym;_T6D= _T6C->tag;Cyc_warns(_T6A,_T6D);goto _TL199;_TL198: _TL199: goto _TL192;
# 1487
_TL191: _T6E= isdigit(c);if(_T6E)goto _TL19D;else{goto _TL19E;}_TL19E: if(c==45)goto _TL19D;else{goto _TL19B;}
# 1489
_TL19D: _T6F= c;_T70= _check_null(Cyc_finput);Cyc_ungetc(_T6F,_T70);_T71= 
_check_null(Cyc_finput);n= Cyc_read_signed_integer(_T71);_T72= 
_check_null(Cyc_finput);c= Cyc_getc(_T72);_T73= type_name;_T74= _T73.curr;_T75= (unsigned)_T74;
# 1493
if(_T75)goto _TL19F;else{goto _TL1A1;}_TL1A1: if(n <= 0)goto _TL19F;
type_name= Cyc_get_type_name(n,rule);goto _TL1A0;_TL19F: _TL1A0: _T76= type_name;_T77= _T76.curr;_T78= (unsigned)_T77;
# 1497
if(_T78)goto _TL1A2;else{goto _TL1A4;}
_TL1A4: _T79= _tag_fat("$%s of %s has no declared type",sizeof(char),31U);_T7A= Cyc_int_to_string(n);_T7B= 
_check_null(rule);_T7C= _T7B->sym;_T7D= _check_null(_T7C);_T7E= _T7D->tag;
# 1498
Cyc_warnss(_T79,_T7A,_T7E);_T7F= 
# 1500
_tag_fat("BOGUS",sizeof(char),6U);type_name= Cyc_strdup(_T7F);goto _TL1A3;_TL1A2: _TL1A3:{struct Cyc_String_pa_PrintArg_struct _TA1;_TA1.tag= 0;
# 1503
({__typeof__(Cyc_type2nth(type_name))_TA2=Cyc_type2nth(type_name);_TA1.f1= _TA2;});_T80= _TA1;}{struct Cyc_String_pa_PrintArg_struct _TA1=_T80;{struct Cyc_Int_pa_PrintArg_struct _TA2;_TA2.tag= 1;_T82= n - stack_offset;_TA2.f1= (unsigned long)_T82;_T81= _TA2;}{struct Cyc_Int_pa_PrintArg_struct _TA2=_T81;void*_TA3[2];_TA3[0]= & _TA1;_TA3[1]= & _TA2;_T83= _check_null(Cyc_fguard);_T84= _tag_fat("yyget_%s(&yyvsp[%d].v)",sizeof(char),23U);_T85= _tag_fat(_TA3,sizeof(void*),2);Cyc_fprintf(_T83,_T84,_T85);}}goto _TL15F;
# 1506
_TL19B: if(c!=40)goto _TL1A5;_T86= 
# 1510
_check_null(Cyc_fguard);Cyc_putc(36,_T86);goto _TL15F;
# 1513
_TL1A5: _T87= _tag_fat("$%s is invalid",sizeof(char),15U);_T88= c;_T89= (char)_T88;_T8A= Cyc_printable_version(_T89);Cyc_warns(_T87,_T8A);_TL192: goto _LL0;case 64: _T8B= 
# 1518
_check_null(Cyc_finput);c= Cyc_getc(_T8B);_T8C= 
isdigit(c);if(_T8C)goto _TL1A9;else{goto _TL1AA;}_TL1AA: if(c==45)goto _TL1A9;else{goto _TL1A7;}
# 1521
_TL1A9: _T8D= c;_T8E= _check_null(Cyc_finput);Cyc_ungetc(_T8D,_T8E);_T8F= 
_check_null(Cyc_finput);n= Cyc_read_signed_integer(_T8F);_T90= 
_check_null(Cyc_finput);c= Cyc_getc(_T90);goto _TL1A8;
# 1528
_TL1A7: _T91= _check_null(Cyc_finput);Cyc_putc(64,_T91);goto _TL15F;_TL1A8:{struct Cyc_Int_pa_PrintArg_struct _TA1;_TA1.tag= 1;_T93= n - stack_offset;
# 1535
_TA1.f1= (unsigned long)_T93;_T92= _TA1;}{struct Cyc_Int_pa_PrintArg_struct _TA1=_T92;void*_TA2[1];_TA2[0]= & _TA1;_T94= _check_null(Cyc_fguard);_T95= _tag_fat("yyvsp[%d].l",sizeof(char),12U);_T96= _tag_fat(_TA2,sizeof(void*),1);Cyc_fprintf(_T94,_T95,_T96);}
Cyc_yylsp_needed= 1;goto _TL15F;case -1: _T97= 
# 1541
_tag_fat("unterminated %%guard clause",sizeof(char),28U);Cyc_fatal(_T97);goto _LL0;default: _T98= c;_T99= 
# 1545
_check_null(Cyc_fguard);Cyc_putc(_T98,_T99);goto _LL0;}_LL0:
# 1549
 if(c!=125)goto _TL1AD;else{goto _TL1AE;}_TL1AE: if(count!=0)goto _TL1AD;else{goto _TL1AB;}
_TL1AD: _T9A= _check_null(Cyc_finput);c= Cyc_getc(_T9A);goto _TL1AC;_TL1AB: _TL1AC: goto _TL15F;_TL161:
# 1553
 c= Cyc_skip_white_space();_T9B= 
# 1555
_check_null(Cyc_fguard);_T9C= _tag_fat(";\n    break;}",sizeof(char),14U);_T9D= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T9B,_T9C,_T9D);
if(c!=123)goto _TL1AF;
Cyc_copy_action(rule,stack_offset);goto _TL1B0;
_TL1AF: if(c!=61)goto _TL1B1;_T9E= 
# 1560
_check_null(Cyc_finput);c= Cyc_getc(_T9E);
if(c!=123)goto _TL1B3;
Cyc_copy_action(rule,stack_offset);goto _TL1B4;_TL1B3: _TL1B4: goto _TL1B2;
# 1565
_TL1B1: _T9F= c;_TA0= _check_null(Cyc_finput);Cyc_ungetc(_T9F,_TA0);_TL1B2: _TL1B0:;}
# 1575
void Cyc_copy_action(struct Cyc_symbol_list*rule,int stack_offset){int _T0;struct Cyc_Int_pa_PrintArg_struct _T1;int _T2;struct Cyc___cycFILE*_T3;struct _fat_ptr _T4;struct _fat_ptr _T5;int _T6;struct Cyc_Int_pa_PrintArg_struct _T7;int _T8;struct Cyc_String_pa_PrintArg_struct _T9;struct Cyc___cycFILE*_TA;struct _fat_ptr _TB;struct _fat_ptr _TC;struct Cyc___cycFILE*_TD;int _TE;int _TF;int _T10;struct Cyc___cycFILE*_T11;int _T12;struct Cyc___cycFILE*_T13;int _T14;struct Cyc___cycFILE*_T15;struct Cyc___cycFILE*_T16;struct _fat_ptr _T17;int _T18;struct Cyc___cycFILE*_T19;int _T1A;int _T1B;struct _fat_ptr _T1C;int _T1D;struct Cyc___cycFILE*_T1E;struct Cyc___cycFILE*_T1F;int _T20;int _T21;struct _fat_ptr _T22;int _T23;struct Cyc___cycFILE*_T24;struct Cyc___cycFILE*_T25;int _T26;struct Cyc___cycFILE*_T27;int _T28;struct Cyc___cycFILE*_T29;struct Cyc___cycFILE*_T2A;int _T2B;struct Cyc___cycFILE*_T2C;struct Cyc___cycFILE*_T2D;int _T2E;int _T2F;int _T30;struct Cyc___cycFILE*_T31;struct Cyc___cycFILE*_T32;int _T33;struct Cyc___cycFILE*_T34;int _T35;struct Cyc___cycFILE*_T36;int _T37;struct Cyc___cycFILE*_T38;int _T39;int _T3A;struct _fat_ptr _T3B;int _T3C;struct Cyc___cycFILE*_T3D;struct Cyc___cycFILE*_T3E;struct Cyc___cycFILE*_T3F;struct Cyc___cycFILE*_T40;struct _fat_ptr _T41;unsigned char*_T42;unsigned _T43;struct Cyc_String_pa_PrintArg_struct _T44;struct Cyc___cycFILE*_T45;struct _fat_ptr _T46;struct _fat_ptr _T47;struct _fat_ptr _T48;struct Cyc___cycFILE*_T49;struct Cyc___cycFILE*_T4A;struct Cyc___cycFILE*_T4B;int _T4C;struct _fat_ptr*_T4D;unsigned char*_T4E;char*_T4F;int _T50;unsigned _T51;unsigned char*_T52;char*_T53;unsigned char*_T54;char*_T55;unsigned _T56;unsigned char*_T57;char*_T58;struct Cyc___cycFILE*_T59;struct Cyc___cycFILE*_T5A;struct _fat_ptr _T5B;struct _fat_ptr _T5C;int _T5D;struct Cyc___cycFILE*_T5E;int _T5F;struct _fat_ptr _T60;int _T61;char _T62;struct _fat_ptr _T63;int _T64;struct Cyc___cycFILE*_T65;struct Cyc___cycFILE*_T66;struct Cyc___cycFILE*_T67;struct _fat_ptr _T68;unsigned char*_T69;unsigned _T6A;int _T6B;struct _fat_ptr _T6C;unsigned char*_T6D;unsigned _T6E;struct _fat_ptr _T6F;unsigned char*_T70;unsigned _T71;struct _fat_ptr _T72;struct _fat_ptr _T73;struct Cyc_symbol_list*_T74;struct Cyc_bucket*_T75;struct Cyc_bucket*_T76;struct _fat_ptr _T77;struct Cyc_Int_pa_PrintArg_struct _T78;int _T79;struct Cyc___cycFILE*_T7A;struct _fat_ptr _T7B;struct _fat_ptr _T7C;struct Cyc_Int_pa_PrintArg_struct _T7D;int _T7E;struct Cyc___cycFILE*_T7F;struct _fat_ptr _T80;struct _fat_ptr _T81;struct Cyc_Int_pa_PrintArg_struct _T82;int _T83;struct Cyc___cycFILE*_T84;struct _fat_ptr _T85;struct _fat_ptr _T86;struct Cyc_String_pa_PrintArg_struct _T87;struct Cyc___cycFILE*_T88;struct _fat_ptr _T89;struct _fat_ptr _T8A;struct Cyc_Int_pa_PrintArg_struct _T8B;int _T8C;struct Cyc___cycFILE*_T8D;struct _fat_ptr _T8E;struct _fat_ptr _T8F;struct Cyc_Int_pa_PrintArg_struct _T90;int _T91;struct Cyc___cycFILE*_T92;struct _fat_ptr _T93;struct _fat_ptr _T94;struct Cyc_Int_pa_PrintArg_struct _T95;int _T96;struct Cyc___cycFILE*_T97;struct _fat_ptr _T98;struct _fat_ptr _T99;struct Cyc___cycFILE*_T9A;struct _fat_ptr _T9B;int _T9C;char _T9D;struct _fat_ptr _T9E;struct Cyc___cycFILE*_T9F;int _TA0;int _TA1;struct Cyc___cycFILE*_TA2;struct Cyc___cycFILE*_TA3;struct Cyc___cycFILE*_TA4;struct Cyc___cycFILE*_TA5;struct Cyc_Int_pa_PrintArg_struct _TA6;int _TA7;struct Cyc___cycFILE*_TA8;struct _fat_ptr _TA9;struct _fat_ptr _TAA;struct Cyc_Int_pa_PrintArg_struct _TAB;int _TAC;struct Cyc___cycFILE*_TAD;struct _fat_ptr _TAE;struct _fat_ptr _TAF;struct Cyc_Int_pa_PrintArg_struct _TB0;int _TB1;struct Cyc___cycFILE*_TB2;struct _fat_ptr _TB3;struct _fat_ptr _TB4;struct _fat_ptr _TB5;int _TB6;struct Cyc___cycFILE*_TB7;struct Cyc___cycFILE*_TB8;int _TB9;int _TBA;struct Cyc___cycFILE*_TBB;struct Cyc___cycFILE*_TBC;struct Cyc___cycFILE*_TBD;struct _fat_ptr _TBE;struct _fat_ptr _TBF;
# 1578
int c;
int n;
int count;
int match;
int ended;
struct _fat_ptr type_name;
int do_dereference;
int cplus_comment;_T0= Cyc_semantic_parser;
# 1588
if(!_T0)goto _TL1B5;stack_offset= 0;goto _TL1B6;_TL1B5: _TL1B6:{struct Cyc_Int_pa_PrintArg_struct _TC0;_TC0.tag= 1;_T2= Cyc_nrules;
# 1590
_TC0.f1= (unsigned long)_T2;_T1= _TC0;}{struct Cyc_Int_pa_PrintArg_struct _TC0=_T1;void*_TC1[1];_TC1[0]= & _TC0;_T3= _check_null(Cyc_faction);_T4= _tag_fat("\ncase %d:\n",sizeof(char),11U);_T5= _tag_fat(_TC1,sizeof(void*),1);Cyc_fprintf(_T3,_T4,_T5);}_T6= Cyc_nolinesflag;
# 1592
if(_T6)goto _TL1B7;else{goto _TL1B9;}
_TL1B9:{struct Cyc_Int_pa_PrintArg_struct _TC0;_TC0.tag= 1;_T8= Cyc_lineno;_TC0.f1= (unsigned long)_T8;_T7= _TC0;}{struct Cyc_Int_pa_PrintArg_struct _TC0=_T7;{struct Cyc_String_pa_PrintArg_struct _TC1;_TC1.tag= 0;_TC1.f1= Cyc_infile;_T9= _TC1;}{struct Cyc_String_pa_PrintArg_struct _TC1=_T9;void*_TC2[2];_TC2[0]= & _TC0;_TC2[1]= & _TC1;_TA= _check_null(Cyc_faction);_TB= _tag_fat("#line %d \"%s\"\n",sizeof(char),15U);_TC= _tag_fat(_TC2,sizeof(void*),2);Cyc_fprintf(_TA,_TB,_TC);}}goto _TL1B8;_TL1B7: _TL1B8:
# 1595
 count= 1;_TD= 
_check_null(Cyc_finput);c= Cyc_getc(_TD);
# 1598
_TL1BA: if(count > 0)goto _TL1BB;else{goto _TL1BC;}
# 1600
_TL1BB: _TL1BD: if(c!=125)goto _TL1BE;else{goto _TL1BF;}
# 1602
_TL1BE: _TE= c;_TF= (int)_TE;switch(_TF){case 10: _T10= c;_T11= 
# 1605
_check_null(Cyc_faction);Cyc_putc(_T10,_T11);
Cyc_lineno= Cyc_lineno + 1;goto _LL0;case 123: _T12= c;_T13= 
# 1610
_check_null(Cyc_faction);Cyc_putc(_T12,_T13);
count= count + 1;goto _LL0;case 39: goto _LL8;case 34: _LL8:
# 1616
 match= c;_T14= c;_T15= 
_check_null(Cyc_faction);Cyc_putc(_T14,_T15);_T16= 
_check_null(Cyc_finput);c= Cyc_getc(_T16);
# 1620
_TL1C1: if(c!=match)goto _TL1C2;else{goto _TL1C3;}
# 1622
_TL1C2: if(c!=10)goto _TL1C4;_T17= 
# 1624
_tag_fat("unterminated string",sizeof(char),20U);Cyc_warn(_T17);_T18= c;_T19= 
_check_null(Cyc_finput);Cyc_ungetc(_T18,_T19);
c= match;goto _TL1C1;
# 1629
_TL1C4: _T1A= c;_T1B= - 1;if(_T1A!=_T1B)goto _TL1C6;_T1C= 
_tag_fat("unterminated string at end of file",sizeof(char),35U);Cyc_fatal(_T1C);goto _TL1C7;_TL1C6: _TL1C7: _T1D= c;_T1E= 
# 1632
_check_null(Cyc_faction);Cyc_putc(_T1D,_T1E);
# 1634
if(c!=92)goto _TL1C8;_T1F= 
# 1636
_check_null(Cyc_finput);c= Cyc_getc(_T1F);_T20= c;_T21= - 1;
if(_T20!=_T21)goto _TL1CA;_T22= 
_tag_fat("unterminated string",sizeof(char),20U);Cyc_fatal(_T22);goto _TL1CB;_TL1CA: _TL1CB: _T23= c;_T24= 
_check_null(Cyc_faction);Cyc_putc(_T23,_T24);
if(c!=10)goto _TL1CC;
Cyc_lineno= Cyc_lineno + 1;goto _TL1CD;_TL1CC: _TL1CD: goto _TL1C9;_TL1C8: _TL1C9: _T25= 
# 1644
_check_null(Cyc_finput);c= Cyc_getc(_T25);goto _TL1C1;_TL1C3: _T26= c;_T27= 
# 1647
_check_null(Cyc_faction);Cyc_putc(_T26,_T27);goto _LL0;case 47: _T28= c;_T29= 
# 1651
_check_null(Cyc_faction);Cyc_putc(_T28,_T29);_T2A= 
_check_null(Cyc_finput);c= Cyc_getc(_T2A);
if(c==42)goto _TL1CE;if(c==47)goto _TL1CE;goto _TL1BD;_TL1CE:
# 1656
 cplus_comment= c==47;_T2B= c;_T2C= 
_check_null(Cyc_faction);Cyc_putc(_T2B,_T2C);_T2D= 
_check_null(Cyc_finput);c= Cyc_getc(_T2D);
# 1660
ended= 0;
_TL1D0: _T2E= ended;if(_T2E)goto _TL1D2;else{goto _TL1D1;}
# 1663
_TL1D1: _T2F= cplus_comment;if(_T2F)goto _TL1D3;else{goto _TL1D5;}_TL1D5: if(c!=42)goto _TL1D3;
# 1665
_TL1D6: if(c==42)goto _TL1D7;else{goto _TL1D8;}
# 1667
_TL1D7: _T30= c;_T31= _check_null(Cyc_faction);Cyc_putc(_T30,_T31);_T32= 
_check_null(Cyc_finput);c= Cyc_getc(_T32);goto _TL1D6;_TL1D8:
# 1671
 if(c!=47)goto _TL1D9;_T33= c;_T34= 
# 1673
_check_null(Cyc_faction);Cyc_putc(_T33,_T34);
ended= 1;goto _TL1DA;_TL1D9: _TL1DA: goto _TL1D4;
# 1677
_TL1D3: if(c!=10)goto _TL1DB;
# 1679
Cyc_lineno= Cyc_lineno + 1;_T35= c;_T36= 
_check_null(Cyc_faction);Cyc_putc(_T35,_T36);_T37= cplus_comment;
if(!_T37)goto _TL1DD;
ended= 1;goto _TL1DE;
# 1684
_TL1DD: _T38= _check_null(Cyc_finput);c= Cyc_getc(_T38);_TL1DE: goto _TL1DC;
# 1686
_TL1DB: _T39= c;_T3A= - 1;if(_T39!=_T3A)goto _TL1DF;_T3B= 
_tag_fat("unterminated comment",sizeof(char),21U);Cyc_fatal(_T3B);goto _TL1E0;
# 1690
_TL1DF: _T3C= c;_T3D= _check_null(Cyc_faction);Cyc_putc(_T3C,_T3D);_T3E= 
_check_null(Cyc_finput);c= Cyc_getc(_T3E);_TL1E0: _TL1DC: _TL1D4: goto _TL1D0;_TL1D2: goto _LL0;case 94: _T3F= 
# 1701
_check_null(Cyc_finput);c= Cyc_getc(_T3F);
if(c!=36)goto _TL1E1;_T40= 
_check_null(Cyc_finput);c= Cyc_getc(_T40);
type_name= Cyc_get_type_name(0,rule);_T41= type_name;_T42= _T41.curr;_T43= (unsigned)_T42;
if(!_T43)goto _TL1E3;{struct Cyc_String_pa_PrintArg_struct _TC0;_TC0.tag= 0;
({__typeof__(Cyc_type2nth(type_name))_TC1=Cyc_type2nth(type_name);_TC0.f1= _TC1;});_T44= _TC0;}{struct Cyc_String_pa_PrintArg_struct _TC0=_T44;void*_TC1[1];_TC1[0]= & _TC0;_T45= _check_null(Cyc_faction);_T46= _tag_fat("%s",sizeof(char),3U);_T47= _tag_fat(_TC1,sizeof(void*),1);Cyc_fprintf(_T45,_T46,_T47);}goto _TL1E4;
# 1708
_TL1E3: _T48= _tag_fat("rule has no type for ^$",sizeof(char),24U);Cyc_fatal(_T48);_TL1E4: goto _TL1BD;
# 1711
_TL1E1: _T49= _check_null(Cyc_faction);Cyc_putc(94,_T49);goto _TL1BD;case 36: _T4A= 
# 1716
_check_null(Cyc_finput);c= Cyc_getc(_T4A);
type_name= _tag_fat(0,0,0);
do_dereference= 1;
# 1720
if(c!=60)goto _TL1E5;{
# 1722
struct _fat_ptr cp=Cyc_token_buffer;
# 1724
_TL1E7: _T4B= _check_null(Cyc_finput);c= Cyc_getc(_T4B);_T4C= c;if(_T4C!=62)goto _TL1EA;else{goto _TL1E9;}_TL1EA: if(c > 0)goto _TL1E8;else{goto _TL1E9;}
_TL1E8: _T4D= & cp;{struct _fat_ptr _TC0=_fat_ptr_inplace_plus_post(_T4D,sizeof(char),1);_T4E= _check_fat_subscript(_TC0,sizeof(char),0U);_T4F= (char*)_T4E;{char _TC1=*_T4F;_T50= c;{char _TC2=(char)_T50;_T51= _get_fat_size(_TC0,sizeof(char));if(_T51!=1U)goto _TL1EB;if(_TC1!=0)goto _TL1EB;if(_TC2==0)goto _TL1EB;_throw_arraybounds();goto _TL1EC;_TL1EB: _TL1EC: _T52= _TC0.curr;_T53= (char*)_T52;*_T53= _TC2;}}}goto _TL1E7;_TL1E9:{struct _fat_ptr _TC0=cp;_T54= _check_fat_subscript(_TC0,sizeof(char),0U);_T55= (char*)_T54;{char _TC1=*_T55;char _TC2='\000';_T56= _get_fat_size(_TC0,sizeof(char));if(_T56!=1U)goto _TL1ED;if(_TC1!=0)goto _TL1ED;if(_TC2==0)goto _TL1ED;_throw_arraybounds();goto _TL1EE;_TL1ED: _TL1EE: _T57= _TC0.curr;_T58= (char*)_T57;*_T58= _TC2;}}
# 1727
type_name= Cyc_token_buffer;
Cyc_value_components_used= 1;_T59= 
# 1730
_check_null(Cyc_finput);c= Cyc_getc(_T59);}goto _TL1E6;_TL1E5: _TL1E6:
# 1732
 if(c!=36)goto _TL1EF;_T5A= 
# 1740
_check_null(Cyc_faction);_T5B= _tag_fat("yyval",sizeof(char),6U);_T5C= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T5A,_T5B,_T5C);goto _TL1F0;
# 1742
_TL1EF: _T5D= isdigit(c);if(_T5D)goto _TL1F3;else{goto _TL1F5;}_TL1F5: if(c==33)goto _TL1F3;else{goto _TL1F4;}_TL1F4: if(c==45)goto _TL1F3;else{goto _TL1F1;}
# 1744
_TL1F3:{int m;
if(c!=33)goto _TL1F6;
# 1752
do_dereference= 0;_T5E= 
_check_null(Cyc_finput);c= Cyc_getc(_T5E);_T5F= 
isdigit(c);if(_T5F)goto _TL1F8;else{goto _TL1FA;}
_TL1FA: _T60= _tag_fat("$!%s is invalid",sizeof(char),16U);_T61= c;_T62= (char)_T61;_T63= Cyc_printable_version(_T62);Cyc_warns(_T60,_T63);goto _LL0;_TL1F8: goto _TL1F7;_TL1F6: _TL1F7: _T64= c;_T65= 
# 1759
_check_null(Cyc_finput);Cyc_ungetc(_T64,_T65);_T66= 
_check_null(Cyc_finput);n= Cyc_read_signed_integer(_T66);
m= n - stack_offset;_T67= 
_check_null(Cyc_finput);c= Cyc_getc(_T67);_T68= type_name;_T69= _T68.curr;_T6A= (unsigned)_T69;
# 1764
if(_T6A)goto _TL1FB;else{goto _TL1FD;}_TL1FD: if(n <= 0)goto _TL1FB;
type_name= Cyc_get_type_name(n,rule);goto _TL1FC;_TL1FB: _TL1FC: _T6B= do_dereference;
# 1767
if(_T6B)goto _TL201;else{goto _TL200;}_TL201: _T6C= type_name;_T6D= _T6C.curr;_T6E= (unsigned)_T6D;if(_T6E)goto _TL1FE;else{goto _TL200;}
# 1771
_TL200: _T6F= type_name;_T70= _T6F.curr;_T71= (unsigned)_T70;if(_T71)goto _TL202;else{goto _TL204;}
_TL204: _T72= _tag_fat("$%s of '%s' has no declared type",sizeof(char),33U);_T73= 
Cyc_int_to_string(n);_T74= _check_null(rule);_T75= _T74->sym;_T76= _check_null(_T75);_T77= _T76->tag;
# 1772
Cyc_warnss(_T72,_T73,_T77);goto _TL203;_TL202: _TL203:
# 1780
 if(m!=0)goto _TL205;{struct Cyc_Int_pa_PrintArg_struct _TC0;_TC0.tag= 1;_T79= n - 1;
_TC0.f1= (unsigned long)_T79;_T78= _TC0;}{struct Cyc_Int_pa_PrintArg_struct _TC0=_T78;void*_TC1[1];_TC1[0]= & _TC0;_T7A= _check_null(Cyc_faction);_T7B= _tag_fat("(yyyvsp[%d].v)",sizeof(char),15U);_T7C= _tag_fat(_TC1,sizeof(void*),1);Cyc_fprintf(_T7A,_T7B,_T7C);}goto _TL206;
_TL205: if(m <= 0)goto _TL207;{struct Cyc_Int_pa_PrintArg_struct _TC0;_TC0.tag= 1;_T7E= m;
# 1787
_TC0.f1= (unsigned long)_T7E;_T7D= _TC0;}{struct Cyc_Int_pa_PrintArg_struct _TC0=_T7D;void*_TC1[1];_TC1[0]= & _TC0;_T7F= _check_null(Cyc_faction);_T80= _tag_fat("(yyvs[yyvsp_offset+%d].v)",sizeof(char),26U);_T81= _tag_fat(_TC1,sizeof(void*),1);Cyc_fprintf(_T7F,_T80,_T81);}goto _TL208;
# 1789
_TL207:{struct Cyc_Int_pa_PrintArg_struct _TC0;_TC0.tag= 1;_T83= n - 1;_TC0.f1= (unsigned long)_T83;_T82= _TC0;}{struct Cyc_Int_pa_PrintArg_struct _TC0=_T82;void*_TC1[1];_TC1[0]= & _TC0;_T84= _check_null(Cyc_faction);_T85= _tag_fat("(yyyvsp[%d].v)",sizeof(char),15U);_T86= _tag_fat(_TC1,sizeof(void*),1);Cyc_fprintf(_T84,_T85,_T86);}_TL208: _TL206: goto _TL1FF;
# 1792
_TL1FE:{struct Cyc_String_pa_PrintArg_struct _TC0;_TC0.tag= 0;({__typeof__(Cyc_type2nth(type_name))_TC1=Cyc_type2nth(type_name);_TC0.f1= _TC1;});_T87= _TC0;}{struct Cyc_String_pa_PrintArg_struct _TC0=_T87;void*_TC1[1];_TC1[0]= & _TC0;_T88= _check_null(Cyc_faction);_T89= _tag_fat(" yyget_%s",sizeof(char),10U);_T8A= _tag_fat(_TC1,sizeof(void*),1);Cyc_fprintf(_T88,_T89,_T8A);}
if(m!=0)goto _TL209;{struct Cyc_Int_pa_PrintArg_struct _TC0;_TC0.tag= 1;_T8C= n - 1;
_TC0.f1= (unsigned long)_T8C;_T8B= _TC0;}{struct Cyc_Int_pa_PrintArg_struct _TC0=_T8B;void*_TC1[1];_TC1[0]= & _TC0;_T8D= _check_null(Cyc_faction);_T8E= _tag_fat("(&yyyvsp[%d].v)",sizeof(char),16U);_T8F= _tag_fat(_TC1,sizeof(void*),1);Cyc_fprintf(_T8D,_T8E,_T8F);}goto _TL20A;
_TL209: if(m <= 0)goto _TL20B;{struct Cyc_Int_pa_PrintArg_struct _TC0;_TC0.tag= 1;_T91= m;
# 1800
_TC0.f1= (unsigned long)_T91;_T90= _TC0;}{struct Cyc_Int_pa_PrintArg_struct _TC0=_T90;void*_TC1[1];_TC1[0]= & _TC0;_T92= _check_null(Cyc_faction);_T93= _tag_fat("(&yyvs[yyvsp_offset+%d].v)",sizeof(char),27U);_T94= _tag_fat(_TC1,sizeof(void*),1);Cyc_fprintf(_T92,_T93,_T94);}goto _TL20C;
# 1802
_TL20B:{struct Cyc_Int_pa_PrintArg_struct _TC0;_TC0.tag= 1;_T96= n - 1;_TC0.f1= (unsigned long)_T96;_T95= _TC0;}{struct Cyc_Int_pa_PrintArg_struct _TC0=_T95;void*_TC1[1];_TC1[0]= & _TC0;_T97= _check_null(Cyc_faction);_T98= _tag_fat("(&yyyvsp[%d].v)",sizeof(char),16U);_T99= _tag_fat(_TC1,sizeof(void*),1);Cyc_fprintf(_T97,_T98,_T99);}_TL20C: _TL20A: _TL1FF: goto _TL1BD;}
# 1810
_TL1F1: if(c!=40)goto _TL20D;_T9A= 
# 1815
_check_null(Cyc_faction);Cyc_putc(36,_T9A);goto _TL1BD;
# 1818
_TL20D: _T9B= _tag_fat("$%s is invalid",sizeof(char),15U);_T9C= c;_T9D= (char)_T9C;_T9E= Cyc_printable_version(_T9D);Cyc_warns(_T9B,_T9E);_TL1F0: goto _LL0;case 64:  {
# 1823
int m;_T9F= 
_check_null(Cyc_finput);c= Cyc_getc(_T9F);_TA0= 
isdigit(c);if(_TA0)goto _TL211;else{goto _TL212;}_TL212: if(c==45)goto _TL211;else{goto _TL20F;}
# 1827
_TL211: _TA1= c;_TA2= _check_null(Cyc_finput);Cyc_ungetc(_TA1,_TA2);_TA3= 
_check_null(Cyc_finput);n= Cyc_read_signed_integer(_TA3);
m= n - stack_offset;_TA4= 
_check_null(Cyc_finput);c= Cyc_getc(_TA4);goto _TL210;
# 1835
_TL20F: _TA5= _check_null(Cyc_faction);Cyc_putc(64,_TA5);goto _TL1BD;_TL210:
# 1842
 if(m!=0)goto _TL213;{struct Cyc_Int_pa_PrintArg_struct _TC0;_TC0.tag= 1;_TA7= n - 1;
_TC0.f1= (unsigned long)_TA7;_TA6= _TC0;}{struct Cyc_Int_pa_PrintArg_struct _TC0=_TA6;void*_TC1[1];_TC1[0]= & _TC0;_TA8= _check_null(Cyc_faction);_TA9= _tag_fat("yyyvsp[%d].l",sizeof(char),13U);_TAA= _tag_fat(_TC1,sizeof(void*),1);Cyc_fprintf(_TA8,_TA9,_TAA);}goto _TL214;
_TL213: if(m <= 0)goto _TL215;{struct Cyc_Int_pa_PrintArg_struct _TC0;_TC0.tag= 1;_TAC= m;
# 1849
_TC0.f1= (unsigned long)_TAC;_TAB= _TC0;}{struct Cyc_Int_pa_PrintArg_struct _TC0=_TAB;void*_TC1[1];_TC1[0]= & _TC0;_TAD= _check_null(Cyc_faction);_TAE= _tag_fat("yyvs[yyvsp_offset+%d].l",sizeof(char),24U);_TAF= _tag_fat(_TC1,sizeof(void*),1);Cyc_fprintf(_TAD,_TAE,_TAF);}goto _TL216;
# 1851
_TL215:{struct Cyc_Int_pa_PrintArg_struct _TC0;_TC0.tag= 1;_TB1= n - 1;_TC0.f1= (unsigned long)_TB1;_TB0= _TC0;}{struct Cyc_Int_pa_PrintArg_struct _TC0=_TB0;void*_TC1[1];_TC1[0]= & _TC0;_TB2= _check_null(Cyc_faction);_TB3= _tag_fat("yyyvsp[%d].l",sizeof(char),13U);_TB4= _tag_fat(_TC1,sizeof(void*),1);Cyc_fprintf(_TB2,_TB3,_TB4);}_TL216: _TL214:
# 1853
 Cyc_yylsp_needed= 1;goto _TL1BD;}case -1: _TB5= 
# 1858
_tag_fat("unmatched `{'",sizeof(char),14U);Cyc_fatal(_TB5);goto _LL0;default: _TB6= c;_TB7= 
# 1862
_check_null(Cyc_faction);Cyc_putc(_TB6,_TB7);goto _LL0;}_LL0: _TB8= 
# 1866
_check_null(Cyc_finput);c= Cyc_getc(_TB8);goto _TL1BD;_TL1BF:
# 1871
 count= count + -1;_TB9= count;if(!_TB9)goto _TL217;_TBA= c;_TBB= 
# 1873
_check_null(Cyc_faction);Cyc_putc(_TBA,_TBB);_TBC= 
_check_null(Cyc_finput);c= Cyc_getc(_TBC);goto _TL218;_TL217: _TL218: goto _TL1BA;_TL1BC: _TBD= 
# 1878
_check_null(Cyc_faction);_TBE= _tag_fat("\nbreak;",sizeof(char),8U);_TBF= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_TBD,_TBE,_TBF);}
# 1886
struct Cyc_bucket*Cyc_gensym (void){struct Cyc_Int_pa_PrintArg_struct _T0;int _T1;struct _fat_ptr _T2;struct _fat_ptr _T3;struct _fat_ptr _T4;struct _fat_ptr _T5;struct Cyc_bucket*_T6;struct Cyc_bucket*_T7;int _T8;int _T9;struct Cyc_bucket*_TA;
# 1889
struct Cyc_bucket*sym;{struct Cyc_Int_pa_PrintArg_struct _TB;_TB.tag= 1;
# 1891
Cyc_gensym_count= Cyc_gensym_count + 1;_T1= Cyc_gensym_count;_TB.f1= (unsigned long)_T1;_T0= _TB;}{struct Cyc_Int_pa_PrintArg_struct _TB=_T0;void*_TC[1];_TC[0]= & _TB;_T2= Cyc_token_buffer;_T3= _fat_ptr_decrease_size(_T2,sizeof(char),1U);_T4= _tag_fat("@%d",sizeof(char),4U);_T5= _tag_fat(_TC,sizeof(void*),1);Cyc_sprintf(_T3,_T4,_T5);}
sym= Cyc_getsym(Cyc_token_buffer);_T6= 
_check_null(sym);_T6->class= '\002';_T7= sym;_T8= Cyc_nvars;
Cyc_nvars= _T8 + 1;_T9= _T8;_T7->value= (short)_T9;_TA= sym;
return _TA;}
# 1907
void Cyc_readgram (void){int _T0;struct _fat_ptr _T1;struct _fat_ptr _T2;void*_T3;struct Cyc_symbol_list*_T4;struct Cyc_symbol_list*_T5;struct Cyc_symbol_list*_T6;struct Cyc_symbol_list*_T7;unsigned _T8;struct Cyc_symbol_list*_T9;struct Cyc_bucket*_TA;char _TB;int _TC;struct Cyc_bucket*_TD;struct Cyc_bucket*_TE;int _TF;struct Cyc_bucket*_T10;char _T11;int _T12;struct _fat_ptr _T13;struct Cyc_bucket*_T14;struct _fat_ptr _T15;struct Cyc_symbol_list*_T16;struct Cyc_bucket*_T17;unsigned _T18;int _T19;void*_T1A;struct Cyc_symbol_list*_T1B;struct Cyc_symbol_list*_T1C;struct Cyc_symbol_list*_T1D;struct Cyc_symbol_list*_T1E;unsigned _T1F;struct Cyc_symbol_list*_T20;struct Cyc_symbol_list*_T21;void*_T22;struct Cyc_symbol_list*_T23;struct Cyc_symbol_list*_T24;struct Cyc_symbol_list*_T25;struct Cyc_symbol_list*_T26;struct Cyc_symbol_list*_T27;void*_T28;struct Cyc_symbol_list*_T29;struct Cyc_symbol_list*_T2A;struct Cyc_symbol_list*_T2B;struct Cyc_symbol_list*_T2C;void*_T2D;struct Cyc_symbol_list*_T2E;struct Cyc_symbol_list*_T2F;struct Cyc_symbol_list*_T30;struct Cyc_symbol_list*_T31;void*_T32;struct Cyc_symbol_list*_T33;struct Cyc_symbol_list*_T34;struct Cyc_symbol_list*_T35;struct Cyc_symbol_list*_T36;struct _fat_ptr _T37;struct Cyc_symbol_list*_T38;int _T39;struct _fat_ptr _T3A;int _T3B;struct _fat_ptr _T3C;int _T3D;struct Cyc_bucket*_T3E;struct _fat_ptr _T3F;unsigned char*_T40;char*_T41;struct Cyc_bucket*_T42;struct _fat_ptr _T43;unsigned char*_T44;char*_T45;struct Cyc_bucket*_T46;struct _fat_ptr _T47;unsigned char*_T48;char*_T49;struct Cyc_bucket*_T4A;struct _fat_ptr _T4B;unsigned char*_T4C;char*_T4D;struct Cyc_bucket*_T4E;struct _fat_ptr _T4F;struct Cyc_bucket*_T50;struct _fat_ptr _T51;int _T52;struct _fat_ptr _T53;struct _fat_ptr _T54;struct Cyc_bucket*_T55;struct _fat_ptr _T56;unsigned char*_T57;unsigned _T58;struct Cyc_bucket*_T59;struct _fat_ptr _T5A;struct _fat_ptr _T5B;struct Cyc_bucket*_T5C;struct _fat_ptr _T5D;unsigned char*_T5E;unsigned _T5F;struct Cyc_bucket*_T60;struct _fat_ptr _T61;int _T62;struct Cyc_bucket*_T63;unsigned _T64;struct Cyc_bucket*_T65;struct _fat_ptr _T66;unsigned char*_T67;char*_T68;struct _fat_ptr _T69;struct _fat_ptr _T6A;struct _fat_ptr _T6B;struct Cyc_Int_pa_PrintArg_struct _T6C;int _T6D;struct Cyc___cycFILE*_T6E;struct _fat_ptr _T6F;struct _fat_ptr _T70;struct _fat_ptr _T71;struct _fat_ptr _T72;struct _fat_ptr _T73;struct Cyc_bucket*_T74;unsigned _T75;struct Cyc_bucket*_T76;char _T77;int _T78;struct _fat_ptr _T79;struct Cyc_bucket*_T7A;struct _fat_ptr _T7B;struct Cyc_bucket*_T7C;struct Cyc_bucket*_T7D;int _T7E;int _T7F;struct Cyc_bucket*_T80;
# 1910
int t;
struct Cyc_bucket*lhs=0;
struct Cyc_symbol_list*p;
struct Cyc_symbol_list*p1;
struct Cyc_bucket*bp;
# 1916
struct Cyc_symbol_list*crule;
# 1918
struct Cyc_symbol_list*crule1;
int maxrulelength=0;
# 1921
p1= 0;
# 1923
t= Cyc_lex();
# 1925
_TL219: if(t!=7)goto _TL21C;else{goto _TL21B;}_TL21C: if(t!=0)goto _TL21A;else{goto _TL21B;}
# 1927
_TL21A: if(t==1)goto _TL21F;else{goto _TL220;}_TL220: if(t==5)goto _TL21F;else{goto _TL21D;}
# 1929
_TL21F:{int actionflag=0;
int rulelength=0;
int xactions=0;
struct Cyc_bucket*first_rhs=0;
# 1934
if(t!=1)goto _TL221;
# 1936
lhs= Cyc_symval;_T0= Cyc_start_flag;
# 1938
if(_T0)goto _TL223;else{goto _TL225;}
# 1940
_TL225: Cyc_startval= lhs;
Cyc_start_flag= 1;goto _TL224;_TL223: _TL224:
# 1944
 t= Cyc_lex();
if(t==3)goto _TL226;_T1= 
# 1947
_tag_fat("ill-formed rule: initial symbol not followed by colon",sizeof(char),54U);Cyc_warn(_T1);
Cyc_unlex(t);goto _TL227;_TL226: _TL227: goto _TL222;_TL221: _TL222:
# 1952
 if(Cyc_nrules!=0)goto _TL228;if(t!=5)goto _TL228;_T2= 
# 1954
_tag_fat("grammar starts with vertical bar",sizeof(char),33U);Cyc_warn(_T2);
lhs= Cyc_symval;goto _TL229;_TL228: _TL229:
# 1959
 Cyc_nrules= Cyc_nrules + 1;
Cyc_nitems= Cyc_nitems + 1;
# 1962
Cyc_record_rule_line();_T3= _cycalloc(sizeof(struct Cyc_symbol_list));
# 1964
p= (struct Cyc_symbol_list*)_T3;_T4= p;
_T4->sym= lhs;_T5= p;
_T5->ruleprec= 0;_T6= p;
_T6->next= 0;
# 1969
crule1= p1;_T7= p1;_T8= (unsigned)_T7;
if(!_T8)goto _TL22A;_T9= p1;
_T9->next= p;goto _TL22B;
# 1973
_TL22A: Cyc_grammar= p;_TL22B:
 p1= p;
crule= p;_TA= 
# 1979
_check_null(lhs);_TB= _TA->class;_TC= (int)_TB;if(_TC!=0)goto _TL22C;_TD= lhs;
# 1981
_TD->class= '\002';_TE= lhs;_TF= Cyc_nvars;
_TE->value= (short)_TF;
Cyc_nvars= Cyc_nvars + 1;goto _TL22D;
# 1985
_TL22C: _T10= lhs;_T11= _T10->class;_T12= (int)_T11;if(_T12!=1)goto _TL22E;_T13= 
_tag_fat("rule given for %s, which is a token",sizeof(char),36U);_T14= lhs;_T15= _T14->tag;Cyc_warns(_T13,_T15);goto _TL22F;_TL22E: _TL22F: _TL22D: _TL233:
# 1990
 if(1)goto _TL231;else{goto _TL232;}
# 1992
_TL231: t= Cyc_lex();
if(t!=18)goto _TL234;
# 1995
t= Cyc_lex();_T16= crule;
_T16->ruleprec= Cyc_symval;
t= Cyc_lex();goto _TL235;_TL234: _TL235:
# 2000
 if(t==1)goto _TL236;else{goto _TL239;}_TL239: if(t==6)goto _TL236;else{goto _TL238;}_TL238: goto _TL232;_TL236:
# 2004
 if(t!=1)goto _TL23A;{
# 2006
struct Cyc_bucket*ssave;
int t1;
# 2009
ssave= Cyc_symval;
t1= Cyc_lex();
Cyc_unlex(t1);
Cyc_symval= ssave;
if(t1!=3)goto _TL23C;goto _TL232;_TL23C: _T17= first_rhs;_T18= (unsigned)_T17;
# 2015
if(_T18)goto _TL23E;else{goto _TL240;}
_TL240: first_rhs= Cyc_symval;goto _TL23F;_TL23E: _TL23F:;}goto _TL23B;_TL23A: _TL23B: _T19= actionflag;
# 2024
if(!_T19)goto _TL241;{
# 2026
struct Cyc_bucket*sdummy;
# 2033
sdummy= Cyc_gensym();
# 2038
Cyc_nrules= Cyc_nrules + 1;
Cyc_nitems= Cyc_nitems + 1;
Cyc_record_rule_line();_T1A= _cycalloc(sizeof(struct Cyc_symbol_list));
p= (struct Cyc_symbol_list*)_T1A;_T1B= p;
_T1B->ruleprec= 0;_T1C= p;
_T1C->next= 0;_T1D= p;
_T1D->sym= 0;_T1E= crule1;_T1F= (unsigned)_T1E;
if(!_T1F)goto _TL243;_T20= crule1;
_T20->next= p;goto _TL244;
_TL243: Cyc_grammar= p;_TL244: _T21= p;
_T21->sym= sdummy;_T22= _cycalloc(sizeof(struct Cyc_symbol_list));
crule1= (struct Cyc_symbol_list*)_T22;_T23= crule1;
_T23->ruleprec= 0;_T24= crule1;
_T24->next= 0;_T25= crule1;
_T25->sym= 0;_T26= p;
_T26->next= crule1;_T27= crule1;
_T27->next= crule;
# 2057
Cyc_nitems= Cyc_nitems + 1;_T28= _cycalloc(sizeof(struct Cyc_symbol_list));
p= (struct Cyc_symbol_list*)_T28;_T29= p;
_T29->sym= sdummy;_T2A= p;
_T2A->next= 0;_T2B= p;
_T2B->ruleprec= 0;_T2C= 
_check_null(p1);_T2C->next= p;
p1= p;
# 2065
actionflag= 0;}goto _TL242;_TL241: _TL242:
# 2068
 if(t!=1)goto _TL245;
# 2070
Cyc_nitems= Cyc_nitems + 1;_T2D= _cycalloc(sizeof(struct Cyc_symbol_list));
p= (struct Cyc_symbol_list*)_T2D;_T2E= p;
_T2E->sym= Cyc_symval;_T2F= p;
_T2F->next= 0;_T30= p;
_T30->ruleprec= 0;_T31= 
_check_null(p1);_T31->next= p;
p1= p;goto _TL246;
# 2080
_TL245: Cyc_copy_action(crule,rulelength);
actionflag= 1;
xactions= xactions + 1;_TL246:
# 2084
 rulelength= rulelength + 1;
if(rulelength <= maxrulelength)goto _TL247;
maxrulelength= rulelength;goto _TL248;_TL247: _TL248: goto _TL233;_TL232: _T32= _cycalloc(sizeof(struct Cyc_symbol_list));
# 2090
p= (struct Cyc_symbol_list*)_T32;_T33= p;
_T33->next= 0;_T34= p;
_T34->sym= 0;_T35= p;
_T35->ruleprec= 0;_T36= 
_check_null(p1);_T36->next= p;
p1= p;
# 2097
if(t!=18)goto _TL249;_T37= 
# 2099
_tag_fat("two @prec's in a row",sizeof(char),21U);Cyc_warn(_T37);
t= Cyc_lex();_T38= crule;
_T38->ruleprec= Cyc_symval;
t= Cyc_lex();goto _TL24A;_TL249: _TL24A:
# 2104
 if(t!=11)goto _TL24B;_T39= Cyc_semantic_parser;
# 2106
if(_T39)goto _TL24D;else{goto _TL24F;}
_TL24F: _T3A= _tag_fat("%%guard present but %%semantic_parser not specified",sizeof(char),52U);Cyc_warn(_T3A);goto _TL24E;_TL24D: _TL24E:
# 2109
 Cyc_copy_guard(crule,rulelength);
t= Cyc_lex();goto _TL24C;
# 2112
_TL24B: if(t!=6)goto _TL250;_T3B= actionflag;
# 2115
if(!_T3B)goto _TL252;_T3C= _tag_fat("two actions at end of one rule",sizeof(char),31U);Cyc_warn(_T3C);goto _TL253;_TL252: _TL253:
 Cyc_copy_action(crule,rulelength);
actionflag= 1;
xactions= xactions + 1;
t= Cyc_lex();goto _TL251;
# 2123
_TL250: _T3D= xactions;if(_T3D)goto _TL254;else{goto _TL256;}_TL256: if(first_rhs==0)goto _TL254;_T3E= lhs;_T3F= _T3E->type_name;_T40= _T3F.curr;_T41= (char*)_T40;_T42= first_rhs;_T43= _T42->type_name;_T44= _T43.curr;_T45= (char*)_T44;if(_T41==_T45)goto _TL254;_T46= lhs;_T47= _T46->type_name;_T48= _T47.curr;_T49= (char*)_T48;
# 2125
if(_T49==0)goto _TL259;else{goto _TL25B;}_TL25B: _T4A= first_rhs;_T4B= _T4A->type_name;_T4C= _T4B.curr;_T4D= (char*)_T4C;if(_T4D==0)goto _TL259;else{goto _TL25A;}_TL25A: _T4E= lhs;_T4F= _T4E->type_name;_T50= first_rhs;_T51= _T50->type_name;_T52= 
Cyc_strcmp(_T4F,_T51);
# 2125
if(_T52)goto _TL259;else{goto _TL257;}
# 2127
_TL259: _T53= _tag_fat("type clash (`%s' `%s') on default action",sizeof(char),41U);_T55= lhs;_T56= _T55->type_name;_T57= _T56.curr;_T58= (unsigned)_T57;
if(!_T58)goto _TL25C;_T59= lhs;_T5A= _T59->type_name;_T54= _T5A;goto _TL25D;_TL25C: _T54= _tag_fat("",sizeof(char),1U);_TL25D: _T5C= first_rhs;_T5D= _T5C->type_name;_T5E= _T5D.curr;_T5F= (unsigned)_T5E;
if(!_T5F)goto _TL25E;_T60= first_rhs;_T61= _T60->type_name;_T5B= _T61;goto _TL25F;_TL25E: _T5B= _tag_fat("",sizeof(char),1U);_TL25F:
# 2127
 Cyc_warnss(_T53,_T54,_T5B);goto _TL258;_TL257: _TL258: goto _TL255;
# 2132
_TL254: _T62= xactions;if(_T62)goto _TL260;else{goto _TL262;}_TL262: _T63= first_rhs;_T64= (unsigned)_T63;if(_T64)goto _TL260;else{goto _TL263;}_TL263: _T65= lhs;_T66= _T65->type_name;_T67= _T66.curr;_T68= (char*)_T67;if(_T68==0)goto _TL260;_T69= 
_tag_fat("empty rule for typed nonterminal, and no action",sizeof(char),48U);Cyc_warn(_T69);goto _TL261;_TL260: _TL261: _TL255: _TL251: _TL24C:
 if(t!=4)goto _TL264;
t= Cyc_lex();goto _TL265;_TL264: _TL265:;}goto _TL21E;
# 2177 "cyclone/tools/bison/reader.cyc"
_TL21D: _T6A= _tag_fat("invalid input: %s",sizeof(char),18U);_T6B= Cyc_token_buffer;Cyc_warns(_T6A,_T6B);
t= Cyc_lex();_TL21E: goto _TL219;_TL21B:{struct Cyc_Int_pa_PrintArg_struct _T81;_T81.tag= 1;_T6D= maxrulelength;
# 2182
_T81.f1= (unsigned long)_T6D;_T6C= _T81;}{struct Cyc_Int_pa_PrintArg_struct _T81=_T6C;void*_T82[1];_T82[0]= & _T81;_T6E= _check_null(Cyc_fattrs);_T6F= _tag_fat("\n#define YYMAXRULELENGTH %d\n",sizeof(char),29U);_T70= _tag_fat(_T82,sizeof(void*),1);Cyc_fprintf(_T6E,_T6F,_T70);}
# 2186
if(Cyc_nsyms <= 32767)goto _TL266;_T71= 
_tag_fat("too many symbols (tokens plus nonterminals); maximum %s",sizeof(char),56U);_T72= 
Cyc_int_to_string(32767);
# 2187
Cyc_fatals(_T71,_T72);goto _TL267;_TL266: _TL267:
# 2189
 if(Cyc_nrules!=0)goto _TL268;_T73= 
_tag_fat("no rules in the input grammar",sizeof(char),30U);Cyc_fatal(_T73);goto _TL269;_TL268: _TL269:
# 2206 "cyclone/tools/bison/reader.cyc"
 bp= Cyc_firstsymbol;_TL26D: _T74= bp;_T75= (unsigned)_T74;if(_T75)goto _TL26B;else{goto _TL26C;}
_TL26B: _T76= bp;_T77= _T76->class;_T78= (int)_T77;if(_T78!=0)goto _TL26E;_T79= 
# 2209
_tag_fat("symbol %s is used, but is not defined as a token and has no rules",sizeof(char),66U);_T7A= bp;_T7B= _T7A->tag;Cyc_warns(_T79,_T7B);_T7C= bp;
# 2211
_T7C->class= '\002';_T7D= bp;_T7E= Cyc_nvars;
Cyc_nvars= _T7E + 1;_T7F= _T7E;_T7D->value= (short)_T7F;goto _TL26F;_TL26E: _TL26F: _T80= bp;
# 2206
bp= _T80->next;goto _TL26D;_TL26C:
# 2215
 Cyc_ntokens= Cyc_nsyms - Cyc_nvars;}
# 2219
void Cyc_record_rule_line (void){struct _fat_ptr _T0;int _T1;unsigned _T2;short*_T3;unsigned _T4;unsigned _T5;struct _fat_ptr _T6;unsigned _T7;unsigned _T8;struct _fat_ptr _T9;unsigned char*_TA;short*_TB;short*_TC;unsigned _TD;int _TE;unsigned _TF;struct _fat_ptr _T10;int _T11;unsigned char*_T12;short*_T13;int _T14;
# 2224
if(Cyc_nrules < Cyc_rline_allocated)goto _TL270;
# 2226
Cyc_rline_allocated= Cyc_nrules * 2;_T1= Cyc_rline_allocated;_T2= (unsigned)_T1;{unsigned _T15=_T2 * sizeof(short);_T4= _check_times(_T15,sizeof(short));{short*_T16=_cycalloc_atomic(_T4);{unsigned _T17=_T15;unsigned _temp_;_temp_= 0;_TL275: if(_temp_ < _T17)goto _TL273;else{goto _TL274;}_TL273: _T5= _temp_;_T6= Cyc_rline;_T7= 
# 2232
_get_fat_size(_T6,sizeof(short));if(_T5 >= _T7)goto _TL276;_T8= _temp_;_T9= Cyc_rline;_TA= _T9.curr;_TB= (short*)_TA;_TC= _check_null(_TB);_TD= _temp_;_TE= (int)_TD;_T16[_T8]= _TC[_TE];goto _TL277;_TL276: _TF= _temp_;_T16[_TF]= 0;_TL277: _temp_= _temp_ + 1;goto _TL275;_TL274:;}_T3= (short*)_T16;}_T0= 
# 2231
_tag_fat(_T3,sizeof(short),_T15);}Cyc_rline= _T0;goto _TL271;_TL270: _TL271: _T10= Cyc_rline;_T11= Cyc_nrules;_T12= _check_fat_subscript(_T10,sizeof(short),_T11);_T13= (short*)_T12;_T14= Cyc_lineno;
# 2234
*_T13= (short)_T14;}
# 2240
static int Cyc_get_type (void){struct _fat_ptr _T0;int _T1;unsigned long _T2;struct _fat_ptr _T3;int _T4;unsigned _T5;char*_T6;unsigned _T7;unsigned _T8;int _T9;int _TA;int _TB;struct Cyc_bucket*_TC;struct _fat_ptr _TD;unsigned char*_TE;char*_TF;struct Cyc_bucket*_T10;struct _fat_ptr _T11;struct Cyc_bucket*_T12;struct _fat_ptr _T13;int _T14;struct _fat_ptr _T15;struct Cyc_bucket*_T16;struct _fat_ptr _T17;int _T18;
# 2243
int k;
int t;
struct _fat_ptr name;
# 2247
t= Cyc_lex();
# 2249
if(t==21)goto _TL278;_T0= 
# 2251
_tag_fat("ill-formed %type declaration",sizeof(char),29U);Cyc_warn(_T0);_T1= t;
return _T1;_TL278: _T2= 
# 2255
Cyc_strlen(Cyc_token_buffer);k= (int)_T2;_T4= k + 1;_T5= (unsigned)_T4;{unsigned _T19=_T5 + 1U;_T7= _check_times(_T19,sizeof(char));{char*_T1A=_cycalloc_atomic(_T7);{unsigned _T1B=_T19;unsigned _new2_cyclone;_new2_cyclone= 0;_TL27D: if(_new2_cyclone < _T1B)goto _TL27B;else{goto _TL27C;}_TL27B: _T8= _new2_cyclone;
_T1A[_T8]= '\000';_new2_cyclone= _new2_cyclone + 1;goto _TL27D;_TL27C: _T1A[_T1B]= 0;}_T6= (char*)_T1A;}_T3= _tag_fat(_T6,sizeof(char),_T19);}name= _T3;
Cyc_strcpy(name,Cyc_token_buffer);_TL281:
# 2259
 if(1)goto _TL27F;else{goto _TL280;}
# 2261
_TL27F: t= Cyc_lex();_T9= t;_TA= (int)_T9;switch(_TA){case 4: _TB= 
# 2266
Cyc_lex();return _TB;case 2: goto _LL0;case 1: _TC= 
# 2272
_check_null(Cyc_symval);_TD= _TC->type_name;_TE= _TD.curr;_TF= (char*)_TE;if(_TF!=0)goto _TL283;_T10= Cyc_symval;
_T10->type_name= name;goto _TL284;
_TL283: _T11= name;_T12= Cyc_symval;_T13= _T12->type_name;_T14= Cyc_strcmp(_T11,_T13);if(_T14==0)goto _TL285;_T15= 
_tag_fat("type redeclaration for %s",sizeof(char),26U);_T16= _check_null(Cyc_symval);_T17= _T16->tag;Cyc_warns(_T15,_T17);goto _TL286;_TL285: _TL286: _TL284: goto _LL0;default: _T18= t;
# 2280
return _T18;}_LL0: goto _TL281;_TL280:;}
# 2290
void Cyc_packsymbols (void){struct _fat_ptr _T0;int _T1;struct _fat_ptr*_T2;unsigned _T3;unsigned _T4;struct _fat_ptr _T5;struct _fat_ptr _T6;unsigned char*_T7;struct _fat_ptr*_T8;struct _fat_ptr _T9;struct _fat_ptr _TA;int _TB;int*_TC;unsigned _TD;unsigned _TE;struct _fat_ptr _TF;unsigned char*_T10;int*_T11;struct _fat_ptr _T12;int _T13;short*_T14;unsigned _T15;unsigned _T16;struct _fat_ptr _T17;int _T18;short*_T19;unsigned _T1A;unsigned _T1B;struct Cyc_bucket*_T1C;unsigned _T1D;struct Cyc_bucket*_T1E;char _T1F;int _T20;struct Cyc_bucket*_T21;int _T22;struct Cyc_bucket*_T23;struct Cyc_bucket*_T24;unsigned _T25;struct Cyc_bucket*_T26;short _T27;int _T28;struct Cyc_bucket*_T29;struct Cyc_bucket*_T2A;struct Cyc_bucket*_T2B;int _T2C;int _T2D;struct Cyc_bucket*_T2E;short _T2F;int _T30;struct Cyc_bucket*_T31;struct Cyc_bucket*_T32;struct Cyc_bucket*_T33;short _T34;int _T35;struct Cyc_bucket*_T36;short _T37;int _T38;struct Cyc_bucket*_T39;struct Cyc_bucket*_T3A;short _T3B;int _T3C;struct Cyc_bucket*_T3D;short _T3E;int _T3F;int _T40;struct _fat_ptr _T41;struct Cyc_bucket*_T42;struct _fat_ptr _T43;struct Cyc_bucket*_T44;struct Cyc_bucket*_T45;struct _fat_ptr _T46;struct Cyc_bucket*_T47;short _T48;int _T49;struct Cyc_bucket*_T4A;struct Cyc_bucket*_T4B;struct Cyc_bucket*_T4C;struct Cyc_bucket*_T4D;struct Cyc_bucket*_T4E;struct Cyc_bucket*_T4F;struct Cyc_bucket*_T50;struct Cyc_bucket*_T51;struct Cyc_bucket*_T52;short _T53;int _T54;struct Cyc_bucket*_T55;struct Cyc_bucket*_T56;struct Cyc_bucket*_T57;short _T58;int _T59;struct Cyc_bucket*_T5A;short _T5B;int _T5C;struct Cyc_bucket*_T5D;struct Cyc_bucket*_T5E;short _T5F;int _T60;struct Cyc_bucket*_T61;short _T62;int _T63;int _T64;struct _fat_ptr _T65;struct Cyc_bucket*_T66;struct _fat_ptr _T67;struct Cyc_bucket*_T68;struct Cyc_bucket*_T69;struct _fat_ptr _T6A;struct Cyc_bucket*_T6B;short _T6C;int _T6D;struct Cyc_bucket*_T6E;struct Cyc_bucket*_T6F;struct Cyc_bucket*_T70;struct Cyc_bucket*_T71;struct Cyc_bucket*_T72;struct Cyc_bucket*_T73;struct Cyc_bucket*_T74;struct Cyc_bucket*_T75;struct Cyc_bucket*_T76;short _T77;int _T78;int _T79;struct Cyc_bucket*_T7A;int _T7B;int _T7C;struct Cyc_bucket*_T7D;char _T7E;int _T7F;int _T80;struct Cyc_bucket*_T81;short _T82;int _T83;struct Cyc_bucket*_T84;int _T85;struct Cyc_bucket*_T86;short _T87;int _T88;int _T89;struct Cyc_bucket*_T8A;short _T8B;struct _fat_ptr _T8C;struct Cyc_bucket*_T8D;short _T8E;int _T8F;unsigned char*_T90;struct _fat_ptr*_T91;struct Cyc_bucket*_T92;struct _fat_ptr _T93;struct Cyc_bucket*_T94;short _T95;int _T96;unsigned char*_T97;int*_T98;struct Cyc_bucket*_T99;short _T9A;struct _fat_ptr _T9B;struct Cyc_bucket*_T9C;short _T9D;int _T9E;unsigned char*_T9F;short*_TA0;struct Cyc_bucket*_TA1;struct _fat_ptr _TA2;struct Cyc_bucket*_TA3;short _TA4;int _TA5;unsigned char*_TA6;short*_TA7;struct Cyc_bucket*_TA8;struct Cyc_bucket*_TA9;int _TAA;struct _fat_ptr _TAB;int _TAC;short*_TAD;unsigned _TAE;unsigned _TAF;struct _fat_ptr _TB0;int _TB1;unsigned char*_TB2;short*_TB3;struct Cyc_bucket*_TB4;unsigned _TB5;struct Cyc_bucket*_TB6;short _TB7;int _TB8;int _TB9;struct Cyc_bucket*_TBA;short _TBB;int _TBC;int _TBD;struct _fat_ptr _TBE;struct Cyc_bucket*_TBF;short _TC0;int _TC1;unsigned char*_TC2;short*_TC3;short _TC4;int _TC5;struct _fat_ptr _TC6;struct _fat_ptr _TC7;struct _fat_ptr _TC8;unsigned char*_TC9;short*_TCA;struct Cyc_bucket*_TCB;short _TCC;int _TCD;short _TCE;int _TCF;unsigned char*_TD0;struct _fat_ptr*_TD1;struct _fat_ptr _TD2;struct _fat_ptr _TD3;struct Cyc_bucket*_TD4;struct _fat_ptr _TD5;struct Cyc_bucket*_TD6;short _TD7;int _TD8;struct _fat_ptr _TD9;struct _fat_ptr _TDA;struct Cyc_bucket*_TDB;short _TDC;int _TDD;unsigned char*_TDE;short*_TDF;struct Cyc_bucket*_TE0;struct Cyc_bucket*_TE1;struct Cyc_bucket*_TE2;short _TE3;int _TE4;struct Cyc___cycFILE*_TE5;struct Cyc_bucket*_TE6;char _TE7;int _TE8;struct _fat_ptr _TE9;struct Cyc_bucket*_TEA;struct _fat_ptr _TEB;struct Cyc_bucket*_TEC;char _TED;int _TEE;struct _fat_ptr _TEF;struct Cyc_bucket*_TF0;struct _fat_ptr _TF1;struct Cyc_bucket*_TF2;short _TF3;int _TF4;struct Cyc___cycFILE*_TF5;int _TF6;struct _fat_ptr _TF7;unsigned char*_TF8;unsigned _TF9;struct Cyc_String_pa_PrintArg_struct _TFA;struct Cyc___cycFILE*_TFB;struct _fat_ptr _TFC;struct _fat_ptr _TFD;struct Cyc___cycFILE*_TFE;struct _fat_ptr _TFF;struct _fat_ptr _T100;int _T101;struct _fat_ptr _T102;int _T103;unsigned char*_T104;struct _fat_ptr*_T105;struct _fat_ptr _T106;unsigned char*_T107;char*_T108;char _T109;int _T10A;struct Cyc_String_pa_PrintArg_struct _T10B;struct _fat_ptr _T10C;unsigned char*_T10D;struct _fat_ptr*_T10E;int _T10F;struct _fat_ptr _T110;struct Cyc_Int_pa_PrintArg_struct _T111;int _T112;struct Cyc___cycFILE*_T113;struct _fat_ptr _T114;struct _fat_ptr _T115;
# 2293
struct Cyc_bucket*bp;
int tokno=1;
int i;
int last_user_token_number;_T1= Cyc_nsyms + 1;{unsigned _T116=(unsigned)_T1;_T3= _check_times(_T116,sizeof(struct _fat_ptr));{struct _fat_ptr*_T117=_cycalloc(_T3);{unsigned _T118=_T116;unsigned _new2p_cyclone;_new2p_cyclone= 0;_TL28A: if(_new2p_cyclone < _T118)goto _TL288;else{goto _TL289;}_TL288: _T4= _new2p_cyclone;_T5= 
# 2300
_tag_fat(0,0,0);_T117[_T4]= _T5;_new2p_cyclone= _new2p_cyclone + 1;goto _TL28A;_TL289:;}_T2= (struct _fat_ptr*)_T117;}_T0= _tag_fat(_T2,sizeof(struct _fat_ptr),_T116);}Cyc_tags= _T0;_T6= Cyc_tags;_T7= _check_fat_subscript(_T6,sizeof(struct _fat_ptr),0);_T8= (struct _fat_ptr*)_T7;_T9= 
_tag_fat("$",sizeof(char),2U);({__typeof__(Cyc_strdup(_T9))_T116=Cyc_strdup(_T9);*_T8= _T116;});_TB= Cyc_nsyms + 1;{unsigned _T116=(unsigned)_TB;_TD= _check_times(_T116,sizeof(int));{int*_T117=_cycalloc_atomic(_TD);{unsigned _T118=_T116;unsigned _new2_cyclone;_new2_cyclone= 0;_TL28E: if(_new2_cyclone < _T118)goto _TL28C;else{goto _TL28D;}_TL28C: _TE= _new2_cyclone;
_T117[_TE]= 0;_new2_cyclone= _new2_cyclone + 1;goto _TL28E;_TL28D:;}_TC= (int*)_T117;}_TA= _tag_fat(_TC,sizeof(int),_T116);}Cyc_user_toknums= _TA;_TF= Cyc_user_toknums;_T10= _check_fat_subscript(_TF,sizeof(int),0);_T11= (int*)_T10;
*_T11= 0;_T13= Cyc_nsyms;{unsigned _T116=(unsigned)_T13;_T15= _check_times(_T116,sizeof(short));{short*_T117=_cycalloc_atomic(_T15);{unsigned _T118=_T116;unsigned _new2_cyclone;_new2_cyclone= 0;_TL292: if(_new2_cyclone < _T118)goto _TL290;else{goto _TL291;}_TL290: _T16= _new2_cyclone;
# 2305
_T117[_T16]= 0;_new2_cyclone= _new2_cyclone + 1;goto _TL292;_TL291:;}_T14= (short*)_T117;}_T12= _tag_fat(_T14,sizeof(short),_T116);}Cyc_sprec= _T12;_T18= Cyc_nsyms;{unsigned _T116=(unsigned)_T18;_T1A= _check_times(_T116,sizeof(short));{short*_T117=_cycalloc_atomic(_T1A);{unsigned _T118=_T116;unsigned _new2_cyclone;_new2_cyclone= 0;_TL296: if(_new2_cyclone < _T118)goto _TL294;else{goto _TL295;}_TL294: _T1B= _new2_cyclone;
_T117[_T1B]= 0;_new2_cyclone= _new2_cyclone + 1;goto _TL296;_TL295:;}_T19= (short*)_T117;}_T17= _tag_fat(_T19,sizeof(short),_T116);}Cyc_sassoc= _T17;
# 2308
Cyc_max_user_token_number= 256;
last_user_token_number= 256;
# 2311
bp= Cyc_firstsymbol;_TL29A: _T1C= bp;_T1D= (unsigned)_T1C;if(_T1D)goto _TL298;else{goto _TL299;}
# 2313
_TL298: _T1E= bp;_T1F= _T1E->class;_T20= (int)_T1F;if(_T20!=2)goto _TL29B;_T21= bp;_T22= Cyc_ntokens;
# 2315
_T21->value= _T21->value + _T22;goto _TL29C;
# 2317
_TL29B: _T23= bp;_T24= _T23->_alias;_T25= (unsigned)_T24;if(!_T25)goto _TL29D;_T26= bp;_T27= _T26->value;_T28= (int)_T27;
# 2324
if(_T28!=0)goto _TL29F;_T29= bp;_T2A= bp;_T2B= _T2A->_alias;_T2C= tokno;
tokno= _T2C + 1;_T2D= _T2C;_T2B->value= (short)_T2D;_T29->value= _T2B->value;goto _TL2A0;_TL29F: _TL2A0: _T2E= bp;_T2F= _T2E->prec;_T30= (int)_T2F;_T31= bp;_T32= _T31->_alias;_T33= 
# 2327
_check_null(_T32);_T34= _T33->prec;_T35= (int)_T34;if(_T30==_T35)goto _TL2A1;_T36= bp;_T37= _T36->prec;_T38= (int)_T37;
if(_T38==0)goto _TL2A3;_T39= bp;_T3A= _T39->_alias;_T3B= _T3A->prec;_T3C= (int)_T3B;if(_T3C==0)goto _TL2A3;_T3D= bp;_T3E= _T3D->user_token_number;_T3F= (int)_T3E;_T40= - 9991;if(_T3F!=_T40)goto _TL2A3;_T41= 
# 2330
_tag_fat("conflicting precedences for %s and %s",sizeof(char),38U);_T42= bp;_T43= _T42->tag;_T44= bp;_T45= _T44->_alias;_T46= _T45->tag;Cyc_warnss(_T41,_T43,_T46);goto _TL2A4;_TL2A3: _TL2A4: _T47= bp;_T48= _T47->prec;_T49= (int)_T48;
# 2332
if(_T49==0)goto _TL2A5;_T4A= bp;_T4B= _T4A->_alias;_T4C= _check_null(_T4B);_T4D= bp;_T4C->prec= _T4D->prec;goto _TL2A6;
_TL2A5: _T4E= bp;_T4F= bp;_T50= _T4F->_alias;_T51= _check_null(_T50);_T4E->prec= _T51->prec;_TL2A6: goto _TL2A2;_TL2A1: _TL2A2: _T52= bp;_T53= _T52->assoc;_T54= (int)_T53;_T55= bp;_T56= _T55->_alias;_T57= 
# 2336
_check_null(_T56);_T58= _T57->assoc;_T59= (int)_T58;if(_T54==_T59)goto _TL2A7;_T5A= bp;_T5B= _T5A->assoc;_T5C= (int)_T5B;
if(_T5C==0)goto _TL2A9;_T5D= bp;_T5E= _T5D->_alias;_T5F= _T5E->assoc;_T60= (int)_T5F;if(_T60==0)goto _TL2A9;_T61= bp;_T62= _T61->user_token_number;_T63= (int)_T62;_T64= - 9991;if(_T63!=_T64)goto _TL2A9;_T65= 
# 2339
_tag_fat("conflicting assoc values for %s and %s",sizeof(char),39U);_T66= bp;_T67= _T66->tag;_T68= bp;_T69= _T68->_alias;_T6A= _T69->tag;Cyc_warnss(_T65,_T67,_T6A);goto _TL2AA;_TL2A9: _TL2AA: _T6B= bp;_T6C= _T6B->assoc;_T6D= (int)_T6C;
# 2341
if(_T6D==0)goto _TL2AB;_T6E= bp;_T6F= _T6E->_alias;_T70= _check_null(_T6F);_T71= bp;_T70->assoc= _T71->assoc;goto _TL2AC;
_TL2AB: _T72= bp;_T73= bp;_T74= _T73->_alias;_T75= _check_null(_T74);_T72->assoc= _T75->assoc;_TL2AC: goto _TL2A8;_TL2A7: _TL2A8: _T76= bp;_T77= _T76->user_token_number;_T78= (int)_T77;_T79= - 9991;
# 2345
if(_T78!=_T79)goto _TL2AD;goto _TL297;_TL2AD: goto _TL29E;
# 2351
_TL29D: _T7A= bp;_T7B= tokno;tokno= _T7B + 1;_T7C= _T7B;_T7A->value= (short)_T7C;_TL29E: _TL29C: _T7D= bp;_T7E= _T7D->class;_T7F= (int)_T7E;
# 2354
if(_T7F!=1)goto _TL2AF;_T80= Cyc_translations;
# 2356
if(!_T80)goto _TL2B1;_T81= bp;_T82= _T81->user_token_number;_T83= (int)_T82;if(_T83)goto _TL2B1;else{goto _TL2B3;}
_TL2B3: _T84= bp;last_user_token_number= last_user_token_number + 1;_T85= last_user_token_number;_T84->user_token_number= (short)_T85;goto _TL2B2;_TL2B1: _TL2B2: _T86= bp;_T87= _T86->user_token_number;_T88= (int)_T87;_T89= Cyc_max_user_token_number;
if(_T88 <= _T89)goto _TL2B4;_T8A= bp;_T8B= _T8A->user_token_number;
Cyc_max_user_token_number= (int)_T8B;goto _TL2B5;_TL2B4: _TL2B5: goto _TL2B0;_TL2AF: _TL2B0: _T8C= Cyc_tags;_T8D= bp;_T8E= _T8D->value;_T8F= (int)_T8E;_T90= _check_fat_subscript(_T8C,sizeof(struct _fat_ptr),_T8F);_T91= (struct _fat_ptr*)_T90;_T92= bp;
# 2362
*_T91= _T92->tag;_T93= Cyc_user_toknums;_T94= bp;_T95= _T94->value;_T96= (int)_T95;_T97= _check_fat_subscript(_T93,sizeof(int),_T96);_T98= (int*)_T97;_T99= bp;_T9A= _T99->user_token_number;
*_T98= (int)_T9A;_T9B= Cyc_sprec;_T9C= bp;_T9D= _T9C->value;_T9E= (int)_T9D;_T9F= _check_fat_subscript(_T9B,sizeof(short),_T9E);_TA0= (short*)_T9F;_TA1= bp;
*_TA0= _TA1->prec;_TA2= Cyc_sassoc;_TA3= bp;_TA4= _TA3->value;_TA5= (int)_TA4;_TA6= _check_fat_subscript(_TA2,sizeof(short),_TA5);_TA7= (short*)_TA6;_TA8= bp;
*_TA7= _TA8->assoc;_TL297: _TA9= bp;
# 2311
bp= _TA9->next;goto _TL29A;_TL299: _TAA= Cyc_translations;
# 2369
if(!_TAA)goto _TL2B6;{
# 2371
int i;_TAC= Cyc_max_user_token_number + 1;{unsigned _T116=(unsigned)_TAC;_TAE= _check_times(_T116,sizeof(short));{short*_T117=_cycalloc_atomic(_TAE);{unsigned _T118=_T116;unsigned _new2_cyclone;_new2_cyclone= 0;_TL2BB: if(_new2_cyclone < _T118)goto _TL2B9;else{goto _TL2BA;}_TL2B9: _TAF= _new2_cyclone;
# 2373
_T117[_TAF]= 0;_new2_cyclone= _new2_cyclone + 1;goto _TL2BB;_TL2BA:;}_TAD= (short*)_T117;}_TAB= _tag_fat(_TAD,sizeof(short),_T116);}Cyc_token_translations= _TAB;
# 2378
i= 0;_TL2BF: if(i <= Cyc_max_user_token_number)goto _TL2BD;else{goto _TL2BE;}
_TL2BD: _TB0= Cyc_token_translations;_TB1= i;_TB2= _check_fat_subscript(_TB0,sizeof(short),_TB1);_TB3= (short*)_TB2;*_TB3= 2;
# 2378
i= i + 1;goto _TL2BF;_TL2BE:
# 2381
 bp= Cyc_firstsymbol;_TL2C3: _TB4= bp;_TB5= (unsigned)_TB4;if(_TB5)goto _TL2C1;else{goto _TL2C2;}
# 2383
_TL2C1: _TB6= bp;_TB7= _TB6->value;_TB8= (int)_TB7;_TB9= Cyc_ntokens;if(_TB8 < _TB9)goto _TL2C4;goto _TL2C0;_TL2C4: _TBA= bp;_TBB= _TBA->user_token_number;_TBC= (int)_TBB;_TBD= - 9991;
if(_TBC!=_TBD)goto _TL2C6;goto _TL2C0;_TL2C6: _TBE= Cyc_token_translations;_TBF= bp;_TC0= _TBF->user_token_number;_TC1= (int)_TC0;_TC2= _check_fat_subscript(_TBE,sizeof(short),_TC1);_TC3= (short*)_TC2;_TC4= *_TC3;_TC5= (int)_TC4;
if(_TC5==2)goto _TL2C8;_TC6= 
_tag_fat("tokens %s and %s both assigned number %s",sizeof(char),41U);_TC7= Cyc_tags;_TC8= Cyc_token_translations;_TC9= _TC8.curr;_TCA= (short*)_TC9;_TCB= bp;_TCC= _TCB->user_token_number;_TCD= (int)_TCC;_TCE= _TCA[_TCD];_TCF= (int)_TCE;_TD0= _check_fat_subscript(_TC7,sizeof(struct _fat_ptr),_TCF);_TD1= (struct _fat_ptr*)_TD0;_TD2= *_TD1;_TD3= _TD2;_TD4= bp;_TD5= _TD4->tag;_TD6= bp;_TD7= _TD6->user_token_number;_TD8= (int)_TD7;_TD9= 
# 2389
Cyc_int_to_string(_TD8);
# 2386
Cyc_warnsss(_TC6,_TD3,_TD5,_TD9);goto _TL2C9;_TL2C8: _TL2C9: _TDA= Cyc_token_translations;_TDB= bp;_TDC= _TDB->user_token_number;_TDD= (int)_TDC;_TDE= _check_fat_subscript(_TDA,sizeof(short),_TDD);_TDF= (short*)_TDE;_TE0= bp;
# 2390
*_TDF= _TE0->value;_TL2C0: _TE1= bp;
# 2381
bp= _TE1->next;goto _TL2C3;_TL2C2:;}goto _TL2B7;_TL2B6: _TL2B7: _TE2= 
# 2394
_check_null(Cyc_errtoken);_TE3= _TE2->value;Cyc_error_token_number= (int)_TE3;_TE4= Cyc_noparserflag;
# 2396
if(_TE4)goto _TL2CA;else{goto _TL2CC;}
_TL2CC: _TE5= _check_null(Cyc_ftable);Cyc_output_token_defines(_TE5);goto _TL2CB;_TL2CA: _TL2CB: _TE6= 
# 2399
_check_null(Cyc_startval);_TE7= _TE6->class;_TE8= (int)_TE7;if(_TE8!=0)goto _TL2CD;_TE9= 
_tag_fat("the start symbol %s is undefined",sizeof(char),33U);_TEA= Cyc_startval;_TEB= _TEA->tag;Cyc_fatals(_TE9,_TEB);goto _TL2CE;
_TL2CD: _TEC= Cyc_startval;_TED= _TEC->class;_TEE= (int)_TED;if(_TEE!=1)goto _TL2CF;_TEF= 
_tag_fat("the start symbol %s is a token",sizeof(char),31U);_TF0= Cyc_startval;_TF1= _TF0->tag;Cyc_fatals(_TEF,_TF1);goto _TL2D0;_TL2CF: _TL2D0: _TL2CE: _TF2= 
# 2404
_check_null(Cyc_startval);_TF3= _TF2->value;Cyc_start_symbol= (int)_TF3;_TF4= Cyc_definesflag;
# 2406
if(!_TF4)goto _TL2D1;_TF5= 
# 2408
_check_null(Cyc_fdefines);Cyc_output_token_defines(_TF5);_TF6= Cyc_pure_parser;
# 2410
if(_TF6)goto _TL2D3;else{goto _TL2D5;}
# 2412
_TL2D5: _TF7= Cyc_spec_name_prefix;_TF8= _TF7.curr;_TF9= (unsigned)_TF8;if(!_TF9)goto _TL2D6;{struct Cyc_String_pa_PrintArg_struct _T116;_T116.tag= 0;
_T116.f1= Cyc_spec_name_prefix;_TFA= _T116;}{struct Cyc_String_pa_PrintArg_struct _T116=_TFA;void*_T117[1];_T117[0]= & _T116;_TFB= _check_null(Cyc_fdefines);_TFC= _tag_fat("\nextern YYSTYPE %slval;\n",sizeof(char),25U);_TFD= _tag_fat(_T117,sizeof(void*),1);Cyc_fprintf(_TFB,_TFC,_TFD);}goto _TL2D7;
# 2415
_TL2D6: _TFE= _check_null(Cyc_fdefines);_TFF= _tag_fat("\nextern union YYSTYPE yylval;\n",sizeof(char),31U);_T100= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_TFE,_TFF,_T100);_TL2D7: goto _TL2D4;_TL2D3: _TL2D4: _T101= Cyc_semantic_parser;
# 2418
if(!_T101)goto _TL2D8;
i= Cyc_ntokens;_TL2DD: if(i < Cyc_nsyms)goto _TL2DB;else{goto _TL2DC;}
# 2422
_TL2DB: _T102= Cyc_tags;_T103= i;_T104= _check_fat_subscript(_T102,sizeof(struct _fat_ptr),_T103);_T105= (struct _fat_ptr*)_T104;_T106= *_T105;_T107= _check_fat_subscript(_T106,sizeof(char),0U);_T108= (char*)_T107;_T109= *_T108;_T10A= (int)_T109;if(_T10A==64)goto _TL2DE;{struct Cyc_String_pa_PrintArg_struct _T116;_T116.tag= 0;_T10C= Cyc_tags;_T10D= _T10C.curr;_T10E= (struct _fat_ptr*)_T10D;_T10F= i;_T110= _T10E[_T10F];
# 2424
_T116.f1= _T110;_T10B= _T116;}{struct Cyc_String_pa_PrintArg_struct _T116=_T10B;{struct Cyc_Int_pa_PrintArg_struct _T117;_T117.tag= 1;_T112= i;_T117.f1= (unsigned long)_T112;_T111= _T117;}{struct Cyc_Int_pa_PrintArg_struct _T117=_T111;void*_T118[2];_T118[0]= & _T116;_T118[1]= & _T117;_T113= 
# 2423
_check_null(Cyc_fdefines);_T114= _tag_fat("#define\tNT%s\t%d\n",sizeof(char),17U);_T115= _tag_fat(_T118,sizeof(void*),2);Cyc_fprintf(_T113,_T114,_T115);}}goto _TL2DF;_TL2DE: _TL2DF:
# 2419
 i= i + 1;goto _TL2DD;_TL2DC: goto _TL2D9;_TL2D8: _TL2D9: goto _TL2D2;_TL2D1: _TL2D2:;}
# 2438
void Cyc_output_token_defines(struct Cyc___cycFILE*file){struct Cyc___cycFILE*_T0;struct _fat_ptr _T1;struct _fat_ptr _T2;struct Cyc_bucket*_T3;unsigned _T4;struct Cyc_bucket*_T5;struct Cyc_bucket*_T6;short _T7;int _T8;int _T9;struct Cyc_bucket*_TA;short _TB;int _TC;int _TD;struct _fat_ptr _TE;unsigned char*_TF;char*_T10;char _T11;int _T12;struct _fat_ptr _T13;unsigned char*_T14;char*_T15;char _T16;int _T17;struct Cyc_bucket*_T18;struct Cyc_bucket*_T19;unsigned _T1A;struct Cyc_bucket*_T1B;struct Cyc_bucket*_T1C;struct _fat_ptr*_T1D;struct _fat_ptr _T1E;unsigned char*_T1F;char*_T20;char _T21;int _T22;char _T23;int _T24;char _T25;int _T26;struct Cyc_String_pa_PrintArg_struct _T27;struct Cyc_Int_pa_PrintArg_struct _T28;short _T29;int _T2A;int _T2B;struct Cyc_bucket*_T2C;struct Cyc_bucket*_T2D;int _T2E;struct Cyc___cycFILE*_T2F;struct _fat_ptr _T30;struct _fat_ptr _T31;struct Cyc_String_pa_PrintArg_struct _T32;struct Cyc_Int_pa_PrintArg_struct _T33;short _T34;int _T35;int _T36;struct Cyc_bucket*_T37;struct Cyc_bucket*_T38;int _T39;struct Cyc___cycFILE*_T3A;struct _fat_ptr _T3B;struct _fat_ptr _T3C;int _T3D;struct Cyc_String_pa_PrintArg_struct _T3E;struct Cyc_Int_pa_PrintArg_struct _T3F;struct Cyc_bucket*_T40;short _T41;int _T42;struct Cyc___cycFILE*_T43;struct _fat_ptr _T44;struct _fat_ptr _T45;struct Cyc_bucket*_T46;struct Cyc___cycFILE*_T47;struct _fat_ptr _T48;struct _fat_ptr _T49;
# 2441
struct Cyc_bucket*bp;
struct _fat_ptr cp;struct _fat_ptr symbol;
char c;_T0= file;_T1= 
# 2445
_tag_fat("enum yyttype {\n",sizeof(char),16U);_T2= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T0,_T1,_T2);
# 2447
bp= Cyc_firstsymbol;_TL2E3: _T3= bp;_T4= (unsigned)_T3;if(_T4)goto _TL2E1;else{goto _TL2E2;}
# 2449
_TL2E1: _T5= bp;symbol= _T5->tag;_T6= bp;_T7= _T6->value;_T8= (int)_T7;_T9= Cyc_ntokens;
if(_T8 < _T9)goto _TL2E4;goto _TL2E0;_TL2E4: _TA= bp;_TB= _TA->user_token_number;_TC= (int)_TB;_TD= - 9991;
if(_TC!=_TD)goto _TL2E6;goto _TL2E0;_TL2E6: _TE= symbol;_TF= _check_fat_subscript(_TE,sizeof(char),0U);_T10= (char*)_TF;_T11= *_T10;_T12= (int)_T11;
if(39!=_T12)goto _TL2E8;goto _TL2E0;_TL2E8:
 if(bp!=Cyc_errtoken)goto _TL2EA;goto _TL2E0;_TL2EA: _T13= symbol;_T14= _T13.curr;_T15= (char*)_T14;_T16= *_T15;_T17= (int)_T16;
if(34!=_T17)goto _TL2EC;_T18= bp;_T19= _T18->_alias;_T1A= (unsigned)_T19;
# 2457
if(!_T1A)goto _TL2EE;_T1B= bp;_T1C= _T1B->_alias;
symbol= _T1C->tag;goto _TL2EF;
# 2460
_TL2EE: goto _TL2E0;_TL2EF: goto _TL2ED;_TL2EC: _TL2ED:
# 2464
 cp= symbol;
_TL2F0: _T1D= & cp;_T1E= _fat_ptr_inplace_plus_post(_T1D,sizeof(char),1);_T1F= _check_fat_subscript(_T1E,sizeof(char),0U);_T20= (char*)_T1F;c= *_T20;_T21= c;_T22= (int)_T21;if(_T22!=0)goto _TL2F3;else{goto _TL2F2;}_TL2F3: _T23= c;_T24= (int)_T23;if(_T24!=46)goto _TL2F1;else{goto _TL2F2;}_TL2F1: goto _TL2F0;_TL2F2: _T25= c;_T26= (int)_T25;
if(_T26==0)goto _TL2F4;goto _TL2E0;_TL2F4:{struct Cyc_String_pa_PrintArg_struct _T4A;_T4A.tag= 0;
# 2468
_T4A.f1= symbol;_T27= _T4A;}{struct Cyc_String_pa_PrintArg_struct _T4A=_T27;{struct Cyc_Int_pa_PrintArg_struct _T4B;_T4B.tag= 1;_T2A= Cyc_translations;
if(!_T2A)goto _TL2F6;_T2B= Cyc_rawtoknumflag;if(_T2B)goto _TL2F6;else{goto _TL2F8;}_TL2F8: _T2C= bp;_T29= _T2C->user_token_number;goto _TL2F7;_TL2F6: _T2D= bp;_T29= _T2D->value;_TL2F7: _T2E= (int)_T29;_T4B.f1= (unsigned long)_T2E;_T28= _T4B;}{struct Cyc_Int_pa_PrintArg_struct _T4B=_T28;void*_T4C[2];_T4C[0]= & _T4A;_T4C[1]= & _T4B;_T2F= file;_T30= 
# 2468
_tag_fat("\t%s\t= %d,\n",sizeof(char),11U);_T31= _tag_fat(_T4C,sizeof(void*),2);Cyc_fprintf(_T2F,_T30,_T31);}}{struct Cyc_String_pa_PrintArg_struct _T4A;_T4A.tag= 0;
# 2472
_T4A.f1= symbol;_T32= _T4A;}{struct Cyc_String_pa_PrintArg_struct _T4A=_T32;{struct Cyc_Int_pa_PrintArg_struct _T4B;_T4B.tag= 1;_T35= Cyc_translations;
if(!_T35)goto _TL2F9;_T36= Cyc_rawtoknumflag;if(_T36)goto _TL2F9;else{goto _TL2FB;}_TL2FB: _T37= bp;_T34= _T37->user_token_number;goto _TL2FA;_TL2F9: _T38= bp;_T34= _T38->value;_TL2FA: _T39= (int)_T34;_T4B.f1= (unsigned long)_T39;_T33= _T4B;}{struct Cyc_Int_pa_PrintArg_struct _T4B=_T33;void*_T4C[2];_T4C[0]= & _T4A;_T4C[1]= & _T4B;_T3A= file;_T3B= 
# 2472
_tag_fat("#define %s\t  %d\n",sizeof(char),17U);_T3C= _tag_fat(_T4C,sizeof(void*),2);Cyc_fprintf(_T3A,_T3B,_T3C);}}_T3D= Cyc_semantic_parser;
# 2476
if(!_T3D)goto _TL2FC;{struct Cyc_String_pa_PrintArg_struct _T4A;_T4A.tag= 0;
_T4A.f1= symbol;_T3E= _T4A;}{struct Cyc_String_pa_PrintArg_struct _T4A=_T3E;{struct Cyc_Int_pa_PrintArg_struct _T4B;_T4B.tag= 1;_T40= bp;_T41= _T40->value;_T42= (int)_T41;_T4B.f1= (unsigned long)_T42;_T3F= _T4B;}{struct Cyc_Int_pa_PrintArg_struct _T4B=_T3F;void*_T4C[2];_T4C[0]= & _T4A;_T4C[1]= & _T4B;_T43= file;_T44= _tag_fat("#define\tT%s\t%d\n",sizeof(char),16U);_T45= _tag_fat(_T4C,sizeof(void*),2);Cyc_fprintf(_T43,_T44,_T45);}}goto _TL2FD;_TL2FC: _TL2FD: _TL2E0: _T46= bp;
# 2447
bp= _T46->next;goto _TL2E3;_TL2E2: _T47= file;_T48= 
# 2480
_tag_fat("};\n\n",sizeof(char),5U);_T49= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T47,_T48,_T49);}
# 2487
void Cyc_packgram (void){struct _fat_ptr _T0;int _T1;short*_T2;unsigned _T3;unsigned _T4;struct _fat_ptr _T5;int _T6;short*_T7;unsigned _T8;unsigned _T9;struct _fat_ptr _TA;int _TB;struct _fat_ptr _TC;int _TD;short*_TE;unsigned _TF;unsigned _T10;struct _fat_ptr _T11;int _T12;struct _fat_ptr _T13;int _T14;short*_T15;unsigned _T16;unsigned _T17;struct _fat_ptr _T18;int _T19;struct _fat_ptr _T1A;int _T1B;short*_T1C;unsigned _T1D;unsigned _T1E;struct _fat_ptr _T1F;int _T20;struct _fat_ptr _T21;int _T22;short*_T23;unsigned _T24;unsigned _T25;struct _fat_ptr _T26;int _T27;struct Cyc_symbol_list*_T28;unsigned _T29;struct _fat_ptr _T2A;int _T2B;unsigned char*_T2C;short*_T2D;struct Cyc_symbol_list*_T2E;struct Cyc_bucket*_T2F;struct Cyc_bucket*_T30;struct _fat_ptr _T31;int _T32;unsigned char*_T33;short*_T34;int _T35;struct Cyc_symbol_list*_T36;struct Cyc_symbol_list*_T37;struct Cyc_symbol_list*_T38;unsigned _T39;struct Cyc_symbol_list*_T3A;struct Cyc_bucket*_T3B;struct _fat_ptr _T3C;int _T3D;int _T3E;unsigned char*_T3F;short*_T40;struct Cyc_symbol_list*_T41;struct Cyc_bucket*_T42;struct Cyc_symbol_list*_T43;struct Cyc_bucket*_T44;char _T45;int _T46;struct _fat_ptr _T47;int _T48;unsigned char*_T49;short*_T4A;struct Cyc_symbol_list*_T4B;struct Cyc_bucket*_T4C;struct _fat_ptr _T4D;int _T4E;unsigned char*_T4F;short*_T50;struct Cyc_symbol_list*_T51;struct Cyc_bucket*_T52;struct Cyc_symbol_list*_T53;unsigned _T54;struct Cyc_symbol_list*_T55;struct Cyc_bucket*_T56;unsigned _T57;struct _fat_ptr _T58;int _T59;unsigned char*_T5A;short*_T5B;struct Cyc_bucket*_T5C;struct _fat_ptr _T5D;int _T5E;unsigned char*_T5F;short*_T60;struct Cyc_bucket*_T61;struct _fat_ptr _T62;int _T63;unsigned char*_T64;short*_T65;struct Cyc_bucket*_T66;struct _fat_ptr _T67;int _T68;int _T69;unsigned char*_T6A;short*_T6B;int _T6C;struct Cyc_symbol_list*_T6D;unsigned _T6E;struct Cyc_symbol_list*_T6F;struct _fat_ptr _T70;int _T71;unsigned char*_T72;short*_T73;
# 2490
int itemno;
int ruleno;
struct Cyc_symbol_list*p;
# 2495
struct Cyc_bucket*ruleprec;_T1= Cyc_nitems + 1;{unsigned _T74=(unsigned)_T1;_T3= _check_times(_T74,sizeof(short));{short*_T75=_cycalloc_atomic(_T3);{unsigned _T76=_T74;unsigned _new2_cyclone;_new2_cyclone= 0;_TL301: if(_new2_cyclone < _T76)goto _TL2FF;else{goto _TL300;}_TL2FF: _T4= _new2_cyclone;
# 2497
_T75[_T4]= 0;_new2_cyclone= _new2_cyclone + 1;goto _TL301;_TL300:;}_T2= (short*)_T75;}_T0= _tag_fat(_T2,sizeof(short),_T74);}Cyc_ritem= _T0;_T6= Cyc_nrules;{unsigned _T74=(unsigned)_T6;_T8= _check_times(_T74,sizeof(short));{short*_T75=_cycalloc_atomic(_T8);{unsigned _T76=_T74;unsigned _new2_cyclone;_new2_cyclone= 0;_TL305: if(_new2_cyclone < _T76)goto _TL303;else{goto _TL304;}_TL303: _T9= _new2_cyclone;
_T75[_T9]= 0;_new2_cyclone= _new2_cyclone + 1;goto _TL305;_TL304:;}_T7= (short*)_T75;}_T5= _tag_fat(_T7,sizeof(short),_T74);}_TA= _T5;_TB= - 1;Cyc_rlhs= _fat_ptr_plus(_TA,sizeof(short),_TB);_TD= Cyc_nrules;{unsigned _T74=(unsigned)_TD;_TF= _check_times(_T74,sizeof(short));{short*_T75=_cycalloc_atomic(_TF);{unsigned _T76=_T74;unsigned _new2_cyclone;_new2_cyclone= 0;_TL309: if(_new2_cyclone < _T76)goto _TL307;else{goto _TL308;}_TL307: _T10= _new2_cyclone;
_T75[_T10]= 0;_new2_cyclone= _new2_cyclone + 1;goto _TL309;_TL308:;}_TE= (short*)_T75;}_TC= _tag_fat(_TE,sizeof(short),_T74);}_T11= _TC;_T12= - 1;Cyc_rrhs= _fat_ptr_plus(_T11,sizeof(short),_T12);_T14= Cyc_nrules;{unsigned _T74=(unsigned)_T14;_T16= _check_times(_T74,sizeof(short));{short*_T75=_cycalloc_atomic(_T16);{unsigned _T76=_T74;unsigned _new2_cyclone;_new2_cyclone= 0;_TL30D: if(_new2_cyclone < _T76)goto _TL30B;else{goto _TL30C;}_TL30B: _T17= _new2_cyclone;
_T75[_T17]= 0;_new2_cyclone= _new2_cyclone + 1;goto _TL30D;_TL30C:;}_T15= (short*)_T75;}_T13= _tag_fat(_T15,sizeof(short),_T74);}_T18= _T13;_T19= - 1;Cyc_rprec= _fat_ptr_plus(_T18,sizeof(short),_T19);_T1B= Cyc_nrules;{unsigned _T74=(unsigned)_T1B;_T1D= _check_times(_T74,sizeof(short));{short*_T75=_cycalloc_atomic(_T1D);{unsigned _T76=_T74;unsigned _new2_cyclone;_new2_cyclone= 0;_TL311: if(_new2_cyclone < _T76)goto _TL30F;else{goto _TL310;}_TL30F: _T1E= _new2_cyclone;
_T75[_T1E]= 0;_new2_cyclone= _new2_cyclone + 1;goto _TL311;_TL310:;}_T1C= (short*)_T75;}_T1A= _tag_fat(_T1C,sizeof(short),_T74);}_T1F= _T1A;_T20= - 1;Cyc_rprecsym= _fat_ptr_plus(_T1F,sizeof(short),_T20);_T22= Cyc_nrules;{unsigned _T74=(unsigned)_T22;_T24= _check_times(_T74,sizeof(short));{short*_T75=_cycalloc_atomic(_T24);{unsigned _T76=_T74;unsigned _new2_cyclone;_new2_cyclone= 0;_TL315: if(_new2_cyclone < _T76)goto _TL313;else{goto _TL314;}_TL313: _T25= _new2_cyclone;
_T75[_T25]= 0;_new2_cyclone= _new2_cyclone + 1;goto _TL315;_TL314:;}_T23= (short*)_T75;}_T21= _tag_fat(_T23,sizeof(short),_T74);}_T26= _T21;_T27= - 1;Cyc_rassoc= _fat_ptr_plus(_T26,sizeof(short),_T27);
# 2504
itemno= 0;
ruleno= 1;
# 2507
p= Cyc_grammar;
_TL316: _T28= p;_T29= (unsigned)_T28;if(_T29)goto _TL317;else{goto _TL318;}
# 2510
_TL317: _T2A= Cyc_rlhs;_T2B= ruleno;_T2C= _check_fat_subscript(_T2A,sizeof(short),_T2B);_T2D= (short*)_T2C;_T2E= p;_T2F= _T2E->sym;_T30= _check_null(_T2F);*_T2D= _T30->value;_T31= Cyc_rrhs;_T32= ruleno;_T33= _check_fat_subscript(_T31,sizeof(short),_T32);_T34= (short*)_T33;_T35= itemno;
*_T34= (short)_T35;_T36= p;
ruleprec= _T36->ruleprec;_T37= p;
# 2514
p= _T37->next;
_TL319: _T38= p;_T39= (unsigned)_T38;if(_T39)goto _TL31C;else{goto _TL31B;}_TL31C: _T3A= p;_T3B= _T3A->sym;if(_T3B!=0)goto _TL31A;else{goto _TL31B;}
# 2517
_TL31A: _T3C= Cyc_ritem;_T3D= itemno;itemno= _T3D + 1;_T3E= _T3D;_T3F= _check_fat_subscript(_T3C,sizeof(short),_T3E);_T40= (short*)_T3F;_T41= p;_T42= _T41->sym;*_T40= _T42->value;_T43= p;_T44= _T43->sym;_T45= _T44->class;_T46= (int)_T45;
# 2520
if(_T46!=1)goto _TL31D;_T47= Cyc_rprec;_T48= ruleno;_T49= _check_fat_subscript(_T47,sizeof(short),_T48);_T4A= (short*)_T49;_T4B= p;_T4C= _T4B->sym;
# 2522
*_T4A= _T4C->prec;_T4D= Cyc_rassoc;_T4E= ruleno;_T4F= _check_fat_subscript(_T4D,sizeof(short),_T4E);_T50= (short*)_T4F;_T51= p;_T52= _T51->sym;
*_T50= _T52->assoc;goto _TL31E;_TL31D: _TL31E: _T53= p;_T54= (unsigned)_T53;
# 2525
if(!_T54)goto _TL31F;_T55= p;p= _T55->next;goto _TL320;_TL31F: _TL320: goto _TL319;_TL31B: _T56= ruleprec;_T57= (unsigned)_T56;
# 2530
if(!_T57)goto _TL321;_T58= Cyc_rprec;_T59= ruleno;_T5A= _check_fat_subscript(_T58,sizeof(short),_T59);_T5B= (short*)_T5A;_T5C= ruleprec;
# 2532
*_T5B= _T5C->prec;_T5D= Cyc_rassoc;_T5E= ruleno;_T5F= _check_fat_subscript(_T5D,sizeof(short),_T5E);_T60= (short*)_T5F;_T61= ruleprec;
*_T60= _T61->assoc;_T62= Cyc_rprecsym;_T63= ruleno;_T64= _check_fat_subscript(_T62,sizeof(short),_T63);_T65= (short*)_T64;_T66= ruleprec;
*_T65= _T66->value;goto _TL322;_TL321: _TL322: _T67= Cyc_ritem;_T68= itemno;
# 2537
itemno= _T68 + 1;_T69= _T68;_T6A= _check_fat_subscript(_T67,sizeof(short),_T69);_T6B= (short*)_T6A;_T6C= - ruleno;*_T6B= (short)_T6C;
ruleno= ruleno + 1;_T6D= p;_T6E= (unsigned)_T6D;
# 2540
if(!_T6E)goto _TL323;_T6F= p;p= _T6F->next;goto _TL324;_TL323: _TL324: goto _TL316;_TL318: _T70= Cyc_ritem;_T71= itemno;_T72= _check_fat_subscript(_T70,sizeof(short),_T71);_T73= (short*)_T72;
# 2543
*_T73= 0;}
# 2548
int Cyc_read_signed_integer(struct Cyc___cycFILE*stream){int _T0;int _T1;int _T2;int _T3;
# 2551
int c=Cyc_getc(stream);
int sign=1;
int n;
# 2555
if(c!=45)goto _TL325;
# 2557
c= Cyc_getc(stream);
sign= - 1;goto _TL326;_TL325: _TL326:
# 2560
 n= 0;
_TL327: _T0= isdigit(c);if(_T0)goto _TL328;else{goto _TL329;}
# 2563
_TL328: _T1= 10 * n;_T2= c - 48;n= _T1 + _T2;
c= Cyc_getc(stream);goto _TL327;_TL329:
# 2567
 Cyc_ungetc(c,stream);_T3= n * sign;
# 2569
return _T3;}
