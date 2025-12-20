#include <cyc_include.h>

# 312 "./cyclone/library/std/core.h"
 void Cyc_Core_rethrow(void*);
# 316
const char*Cyc_Core_get_exn_name(void*);
# 318
const char*Cyc_Core_get_exn_filename (void);
# 325
int Cyc_Core_get_exn_lineno (void);struct Cyc___cycFILE;
# 53 "./cyclone/library/std/cycboot.h"
extern struct Cyc___cycFILE*Cyc_stderr;struct Cyc_String_pa_PrintArg_struct{int tag;struct _fat_ptr f1;};struct Cyc_Int_pa_PrintArg_struct{int tag;unsigned long f1;};
# 88
extern int Cyc_fflush(struct Cyc___cycFILE*);
# 100
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 157
extern int Cyc_printf(struct _fat_ptr,struct _fat_ptr);
# 269
extern struct Cyc___cycFILE*Cyc_file_open(struct _fat_ptr,struct _fat_ptr);
extern void Cyc_file_close(struct Cyc___cycFILE*);
# 317
extern void exit(int);struct Cyc_timeval{long tv_sec;long tv_usec;};
# 325
extern int gettimeofday(struct Cyc_timeval*,void*);struct Cyc_List_List{void*hd;struct Cyc_List_List*tl;};
# 173 "./cyclone/library/std/list.h"
extern struct Cyc_List_List*Cyc_List_rev(struct Cyc_List_List*);
# 40 "./cyclone/library/std/string.h"
extern unsigned long Cyc_strlen(struct _fat_ptr);
# 51
extern int Cyc_strcmp(struct _fat_ptr,struct _fat_ptr);
# 48 "./cyclone/library/std/position.h"
extern long Cyc_Position_use_gcc_style_location;struct Cyc_Absynpp_Params{long expand_typedefs;long qvar_to_Cids;long add_cyc_prefix;long decls_first;long rewrite_temp_tvars;long print_all_tvars;long print_all_kinds;long print_all_effects;long print_using_stmts;long print_externC_stmts;long print_full_evars;long print_zeroterm;long generate_line_directives;long use_curr_namespace;struct Cyc_List_List*curr_namespace;long gen_clean_cyclone;};
# 54 "./cyclone/library/compiler/absynpp.h"
void Cyc_Absynpp_set_params(struct Cyc_Absynpp_Params*);
# 56
extern struct Cyc_Absynpp_Params Cyc_Absynpp_cyc_params_r;extern struct Cyc_Absynpp_Params Cyc_Absynpp_c_params_r;
# 58
void Cyc_Absynpp_decllist2file(struct Cyc_List_List*,struct Cyc___cycFILE*);
# 26 "./cyclone/library/compiler/absyndump.h"
void Cyc_Absyndump_set_params(struct Cyc_Absynpp_Params*);
void Cyc_Absyndump_dumpdecllist2file(struct Cyc_List_List*,struct Cyc___cycFILE*);struct Cyc___cycFILE;
# 98 "bazel-out/k8-fastbuild/bin/cyclone/library/std/libc/stdio.h"
extern struct Cyc___cycFILE*Cyc_stderr;
# 145
extern int Cyc_fflush(struct Cyc___cycFILE*);
# 161
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 235
extern int Cyc_printf(struct _fat_ptr,struct _fat_ptr);
# 359
extern struct Cyc___cycFILE*Cyc_file_open(struct _fat_ptr,struct _fat_ptr);
extern void Cyc_file_close(struct Cyc___cycFILE*);
# 14 "./cyclone/library/compiler/bansheeif.h"
long Cyc_BansheeIf_banshee_init (void);struct Cyc_Dict_T;struct Cyc_Dict_Dict{int(*rel)(void*,void*);struct _RegionHandle*r;const struct Cyc_Dict_T*t;};
# 31 "./cyclone/library/compiler/binding.h"
void Cyc_Binding_resolve_all(struct Cyc_List_List*);struct Cyc_Tcenv_Genv{struct Cyc_Dict_Dict aggrdecls;struct Cyc_Dict_Dict datatypedecls;struct Cyc_Dict_Dict enumdecls;struct Cyc_Dict_Dict typedefs;struct Cyc_Dict_Dict ordinaries;};struct Cyc_Tcenv_Fenv;struct Cyc_Tcenv_Tenv{struct Cyc_List_List*ns;struct Cyc_Tcenv_Genv*ae;struct Cyc_Tcenv_Fenv*le;long allow_valueof: 1;long in_extern_c_include: 1;long in_tempest: 1;long tempest_generalize: 1;long in_extern_c_inc_repeat: 1;};
# 68 "./cyclone/library/compiler/tcenv.h"
struct Cyc_Tcenv_Tenv*Cyc_Tcenv_tc_init (void);
# 37 "./cyclone/library/compiler/cifc.h"
void Cyc_Cifc_set_inst_tvar (void);
# 38 "./cyclone/library/compiler/currgn.h"
void Cyc_CurRgn_adjust_all(struct Cyc_List_List*);
# 28 "./cyclone/library/compiler/flags.h"
extern long Cyc_Flags_verbose;
# 32
extern long Cyc_Flags_porting_c_code;
# 36
extern long Cyc_Flags_no_regions;
# 38
extern long Cyc_Flags_no_reaps;
# 41
extern long Cyc_Flags_interproc;
# 46
extern long Cyc_Flags_no_register;
# 49
extern long Cyc_Flags_warn_override;
# 59
extern long Cyc_Flags_warn_alias_coerce;
# 63
extern long Cyc_Flags_warn_region_coerce;
# 66
extern long Cyc_Flags_warn_lose_unique;
# 70
extern long Cyc_Flags_warn_bounds_checks;
# 74
extern long Cyc_Flags_warn_all_null_deref;
# 77
extern long Cyc_Flags_warn_assert;
# 81
extern long Cyc_Flags_noexpand_r;
# 86
extern long Cyc_Flags_allpaths;
# 92
extern long Cyc_Flags_print_unprovable;
# 94
enum Cyc_Flags_C_Compilers{Cyc_Flags_Gcc_c =0U,Cyc_Flags_Vc_c =1U};
# 98
extern enum Cyc_Flags_C_Compilers Cyc_Flags_c_compiler;
# 108
enum Cyc_Flags_Cyclone_Passes{Cyc_Flags_Cpp =0U,Cyc_Flags_Parsing =1U,Cyc_Flags_Binding =2U,Cyc_Flags_CurrentRegion =3U,Cyc_Flags_TypeChecking =4U,Cyc_Flags_Jumps =5U,Cyc_Flags_FlowAnalysis =6U,Cyc_Flags_VCGen =7U,Cyc_Flags_CheckInsertion =8U,Cyc_Flags_Toc =9U,Cyc_Flags_AggregateRemoval =10U,Cyc_Flags_LabelRemoval =11U,Cyc_Flags_TempRename =12U,Cyc_Flags_CastRemoval =13U,Cyc_Flags_EvalOrder =14U,Cyc_Flags_AllPasses =15U};
# 126
extern enum Cyc_Flags_Cyclone_Passes Cyc_Flags_stop_after_pass;
# 128
void Cyc_Flags_set_parseonly (void);
void Cyc_Flags_set_crgnonly (void);
void Cyc_Flags_set_tconly (void);
void Cyc_Flags_set_cfonly (void);
# 136
extern long Cyc_Flags_print_parser_state_and_token;
# 140
extern unsigned Cyc_Flags_max_vc_summary;
# 144
extern unsigned Cyc_Flags_max_vc_paths;
# 148
extern unsigned Cyc_Flags_max_vc_term_size;
# 151
void Cyc_Flags_set_all_warnings (void);
# 155
extern long Cyc_Flags_better_widen;struct Cyc_Hashtable_Table;struct Cyc_JumpAnalysis_Jump_Anal_Result{struct Cyc_Hashtable_Table*pop_tables;struct Cyc_Hashtable_Table*succ_tables;struct Cyc_Hashtable_Table*pat_pop_tables;};
# 47 "./cyclone/library/compiler/jump_analysis.h"
struct Cyc_JumpAnalysis_Jump_Anal_Result*Cyc_JumpAnalysis_jump_analysis(struct Cyc_List_List*);
# 40 "./cyclone/library/compiler/insert_checks.h"
void Cyc_InsertChecks_insert_checks(struct Cyc_List_List*,struct Cyc_JumpAnalysis_Jump_Anal_Result*,long);
# 23 "./cyclone/library/compiler/lex.h"
void Cyc_Lex_pos_init (void);
void Cyc_Lex_lex_init(long);
# 29 "./cyclone/library/compiler/low_treeshake.h"
struct Cyc_List_List*Cyc_LowTreeShake_shake(struct Cyc_List_List*);
# 32 "./cyclone/library/compiler/lower.h"
extern struct Cyc_List_List*Cyc_Lower_lower(struct Cyc_List_List*);
# 32 "./cyclone/library/compiler/new_control_flow.h"
void Cyc_NewControlFlow_cf_check(struct Cyc_JumpAnalysis_Jump_Anal_Result*,struct Cyc_List_List*);
# 25 "./cyclone/library/compiler/parse.h"
struct Cyc_List_List*Cyc_Parse_parse_file(struct Cyc___cycFILE*);extern char Cyc_Parse_Exit[5U];struct Cyc_Parse_Exit_exn_struct{char*tag;};
# 26 "./cyclone/library/compiler/remove_aggregates.h"
struct Cyc_List_List*Cyc_RemoveAggrs_remove_aggrs(struct Cyc_List_List*);
# 29 "./cyclone/library/compiler/remove_casts.h"
struct Cyc_List_List*Cyc_RemoveCasts_remove_casts(struct Cyc_List_List*);
# 25 "./cyclone/library/compiler/remove_labels.h"
struct Cyc_List_List*Cyc_RemoveLabels_remove_unused_labels(struct Cyc_List_List*);
# 29 "./cyclone/library/compiler/rename_temps.h"
struct Cyc_List_List*Cyc_RenameTemps_rename(struct Cyc_List_List*);
# 31 "./cyclone/library/compiler/tc.h"
void Cyc_Tc_tc(struct Cyc_Tcenv_Tenv*,long,struct Cyc_List_List*);
# 35
struct Cyc_List_List*Cyc_Tc_treeshake(struct Cyc_Tcenv_Tenv*,struct Cyc_List_List*);
# 33 "./cyclone/library/compiler/toc.h"
struct Cyc_List_List*Cyc_Toc_toc(struct Cyc_Hashtable_Table*,struct Cyc_List_List*);
# 45
void Cyc_Toc_finish (void);
# 27 "./cyclone/library/compiler/toseqc.h"
extern struct Cyc_List_List*Cyc_Toseqc_toseqc(struct Cyc_List_List*);
# 29 "./cyclone/library/compiler/warn.h"
extern void Cyc_Warn_reset(struct _fat_ptr);
# 33
extern int Cyc_Warn_max_errors;
# 37
extern long Cyc_Warn_error_p (void);
# 41
void Cyc_Warn_warn(unsigned,struct _fat_ptr,struct _fat_ptr);
void Cyc_Warn_flush_warnings (void);struct Cyc_Arg_Unit_spec_Arg_Spec_struct{int tag;void(*f1)(void);};struct Cyc_Arg_Set_spec_Arg_Spec_struct{int tag;long*f1;};struct Cyc_Arg_Clear_spec_Arg_Spec_struct{int tag;long*f1;};struct Cyc_Arg_String_spec_Arg_Spec_struct{int tag;void(*f1)(struct _fat_ptr);};struct Cyc_Arg_Int_spec_Arg_Spec_struct{int tag;void(*f1)(int);};
# 66 "./cyclone/library/std/arg.h"
extern void Cyc_Arg_usage(struct Cyc_List_List*,struct _fat_ptr);
# 69
extern int Cyc_Arg_current;
# 71
extern void Cyc_Arg_parse(struct Cyc_List_List*,void(*)(struct _fat_ptr),long(*)(struct _fat_ptr),struct _fat_ptr,struct _fat_ptr);
# 49 "cyclone/tools/cyclone/cyclone.cyc"
void Cyc_Port_port(struct Cyc_List_List*);
# 58
static long Cyc_pp_r=0;
static long Cyc_noshake_r=0;
static long Cyc_noprint_r=0;
static long Cyc_elim_se_r=0;
static long Cyc_add_cyc_namespace_r=1;
static long Cyc_generate_line_directives_r=1;
static long Cyc_print_full_evars_r=0;
static long Cyc_print_all_tvars_r=0;
static long Cyc_print_all_kinds_r=0;
static long Cyc_print_all_effects_r=0;
static long Cyc_toseqc_r=1;
static long Cyc_vcgen_r=1;
static long Cyc_nolower_r=0;
# 75
void Cyc_set_c_compiler(struct _fat_ptr s){struct _fat_ptr _T0;struct _fat_ptr _T1;int _T2;struct _fat_ptr _T3;struct _fat_ptr _T4;int _T5;_T0= s;_T1= 
_tag_fat("vc",sizeof(char),3U);_T2= Cyc_strcmp(_T0,_T1);if(_T2!=0)goto _TL0;
Cyc_Flags_c_compiler= 1U;goto _TL1;
_TL0: _T3= s;_T4= _tag_fat("gcc",sizeof(char),4U);_T5= Cyc_strcmp(_T3,_T4);if(_T5!=0)goto _TL2;
Cyc_Flags_c_compiler= 0U;goto _TL3;_TL2: _TL3: _TL1:;}
# 84
void Cyc_set_port_c_code (void){
Cyc_Flags_porting_c_code= 1;
Cyc_Warn_max_errors= 65535;
Cyc_Flags_set_parseonly();}
# 90
static struct _fat_ptr Cyc_output_file={(void*)0,(void*)0,(void*)(0 + 0)};
static void Cyc_set_output_file(struct _fat_ptr s){Cyc_output_file= s;}
# 97
extern char*Carch;
extern char*Cversion;
# 101
static void Cyc_set_many_errors (void){Cyc_Warn_max_errors= 65535;}
# 104
static void Cyc_print_version (void){struct Cyc_String_pa_PrintArg_struct _T0;struct _fat_ptr _T1;void*_T2;void*_T3;unsigned _T4;struct _fat_ptr _T5;struct _fat_ptr _T6;struct Cyc_String_pa_PrintArg_struct _T7;struct _fat_ptr _T8;void*_T9;void*_TA;unsigned _TB;struct _fat_ptr _TC;struct _fat_ptr _TD;{struct Cyc_String_pa_PrintArg_struct _TE;_TE.tag= 0;{char*_TF=Cversion;_T2= (void*)_TF;_T3= (void*)_TF;_T4= _get_zero_arr_size_char(_T3,1U);_T1= _tag_fat(_T2,sizeof(char),_T4);}
_TE.f1= _T1;_T0= _TE;}{struct Cyc_String_pa_PrintArg_struct _TE=_T0;void*_TF[1];_TF[0]= & _TE;_T5= _tag_fat("The Cyclone compiler, version %s\n",sizeof(char),34U);_T6= _tag_fat(_TF,sizeof(void*),1);Cyc_printf(_T5,_T6);}{struct Cyc_String_pa_PrintArg_struct _TE;_TE.tag= 0;{char*_TF=Carch;_T9= (void*)_TF;_TA= (void*)_TF;_TB= _get_zero_arr_size_char(_TA,1U);_T8= _tag_fat(_T9,sizeof(char),_TB);}
_TE.f1= _T8;_T7= _TE;}{struct Cyc_String_pa_PrintArg_struct _TE=_T7;void*_TF[1];_TF[0]= & _TE;_TC= _tag_fat("Compiled for architecture: %s\n",sizeof(char),31U);_TD= _tag_fat(_TF,sizeof(void*),1);Cyc_printf(_TC,_TD);}
exit(0);}
# 110
static long Cyc_is_cyclone_sourcefile(struct _fat_ptr s){struct _fat_ptr _T0;unsigned long _T1;int _T2;struct _fat_ptr _T3;struct _fat_ptr _T4;int _T5;int _T6;
unsigned long len=Cyc_strlen(s);
# 113
if(len > 4U)goto _TL4;
return 0;_TL4: _T0= s;_T1= len - 4U;_T2= (int)_T1;_T3= 
_fat_ptr_plus(_T0,sizeof(char),_T2);_T4= _tag_fat(".cyc",sizeof(char),5U);_T5= Cyc_strcmp(_T3,_T4);_T6= _T5==0;return _T6;}
# 118
static void Cyc_clear_lineno (void){Cyc_generate_line_directives_r= 0;}
# 120
static void Cyc_set_elim_se (void){
# 122
Cyc_elim_se_r= 1;}
# 125
static void Cyc_set_notoseqc (void){Cyc_toseqc_r= 0;}
static void Cyc_set_nocyc (void){Cyc_add_cyc_namespace_r= 0;}
# 128
static void Cyc_set_noreaps (void){
# 131
Cyc_Flags_no_reaps= 1;}
# 134
static void Cyc_warn_noinf(struct _fat_ptr option){struct Cyc_String_pa_PrintArg_struct _T0;struct _fat_ptr _T1;struct _fat_ptr _T2;{struct Cyc_String_pa_PrintArg_struct _T3;_T3.tag= 0;
# 138
_T3.f1= option;_T0= _T3;}{struct Cyc_String_pa_PrintArg_struct _T3=_T0;void*_T4[1];_T4[0]= & _T3;_T1= 
# 137
_tag_fat("Interprocedural inference is not supported by this build of Cyclone; ignoring %s option",sizeof(char),88U);_T2= _tag_fat(_T4,sizeof(void*),1);Cyc_Warn_warn(0U,_T1,_T2);}}
# 141
static long Cyc_binit_done=0;
# 143
static void Cyc_set_interproc (void){long _T0;long _T1;struct _fat_ptr _T2;_T0= Cyc_binit_done;
if(_T0)goto _TL6;else{goto _TL8;}
_TL8: Cyc_binit_done= 1;_T1= 
Cyc_BansheeIf_banshee_init();if(!_T1)goto _TL9;
Cyc_Flags_interproc= 1;goto _TLA;
# 149
_TL9: _T2= _tag_fat("--inf",sizeof(char),6U);Cyc_warn_noinf(_T2);_TLA: goto _TL7;_TL6: _TL7:;}
# 154
static struct Cyc_List_List*Cyc_cyclone_files=0;
# 156
static void Cyc_add_other(struct _fat_ptr s){struct Cyc_List_List*_T0;struct _fat_ptr*_T1;{struct Cyc_List_List*_T2=_cycalloc(sizeof(struct Cyc_List_List));{struct _fat_ptr*_T3=_cycalloc(sizeof(struct _fat_ptr));
# 158
*_T3= s;_T1= (struct _fat_ptr*)_T3;}_T2->hd= _T1;_T2->tl= Cyc_cyclone_files;_T0= (struct Cyc_List_List*)_T2;}Cyc_cyclone_files= _T0;}
# 161
static long Cyc_add_other_flag(struct _fat_ptr s){return 0;}
# 165
long Cyc_compile_failure=0;
# 167
static struct Cyc___cycFILE*Cyc_try_file_open(struct _fat_ptr filename,struct _fat_ptr mode,struct _fat_ptr msg_part){struct _handler_cons*_T0;int _T1;void*_T2;struct Cyc_String_pa_PrintArg_struct _T3;struct Cyc_String_pa_PrintArg_struct _T4;struct Cyc___cycFILE*_T5;struct _fat_ptr _T6;struct _fat_ptr _T7;struct _handler_cons _T8;_T0= & _T8;_push_handler(_T0);{int _T9=0;_T1= setjmp(_T8.handler);if(!_T1)goto _TLB;_T9= 1;goto _TLC;_TLB: _TLC: if(_T9)goto _TLD;else{goto _TLF;}_TLF:{struct Cyc___cycFILE*_TA=
# 169
Cyc_file_open(filename,mode);_npop_handler(0);return _TA;}_pop_handler();goto _TLE;_TLD: _T2= Cyc_Core_get_exn_thrown();{void*_TA=(void*)_T2;
# 172
Cyc_compile_failure= 1;{struct Cyc_String_pa_PrintArg_struct _TB;_TB.tag= 0;
_TB.f1= msg_part;_T3= _TB;}{struct Cyc_String_pa_PrintArg_struct _TB=_T3;{struct Cyc_String_pa_PrintArg_struct _TC;_TC.tag= 0;_TC.f1= filename;_T4= _TC;}{struct Cyc_String_pa_PrintArg_struct _TC=_T4;void*_TD[2];_TD[0]= & _TB;_TD[1]= & _TC;_T5= Cyc_stderr;_T6= _tag_fat("\nError: couldn't open %s %s\n",sizeof(char),29U);_T7= _tag_fat(_TD,sizeof(void*),2);Cyc_fprintf(_T5,_T6,_T7);}}
Cyc_fflush(Cyc_stderr);
return 0;;}_TLE:;}}struct _tuple13{void*f0;const char*f1;int f2;};
# 179
static struct _tuple13*Cyc_uncaught_exn=0;
# 181
extern void CYCALLOCPROFILE_mark(const char*);
# 183
static void*Cyc_do_stage(struct _fat_ptr stage_name,struct Cyc_List_List*tds,void*(*f)(void*,struct Cyc_List_List*),void*env,void*onfail){struct _fat_ptr _T0;unsigned char*_T1;const char*_T2;long _T3;struct Cyc_timeval*_T4;struct Cyc_timeval*_T5;struct _handler_cons*_T6;int _T7;void*_T8;long _T9;struct Cyc_String_pa_PrintArg_struct _TA;struct Cyc___cycFILE*_TB;struct _fat_ptr _TC;struct _fat_ptr _TD;struct _tuple13*_TE;long _TF;long _T10;struct Cyc___cycFILE*_T11;struct _fat_ptr _T12;struct _fat_ptr _T13;long _T14;struct Cyc_String_pa_PrintArg_struct _T15;struct Cyc___cycFILE*_T16;struct _fat_ptr _T17;struct _fat_ptr _T18;struct Cyc_timeval*_T19;struct Cyc_timeval*_T1A;struct Cyc_timeval _T1B;long _T1C;struct Cyc_timeval _T1D;long _T1E;struct Cyc_timeval _T1F;long _T20;struct Cyc_Int_pa_PrintArg_struct _T21;struct Cyc_timeval _T22;long _T23;struct Cyc_Int_pa_PrintArg_struct _T24;struct Cyc_timeval _T25;long _T26;struct Cyc___cycFILE*_T27;struct _fat_ptr _T28;struct _fat_ptr _T29;void*_T2A;_T0= stage_name;_T1= _untag_fat_ptr_check_bound(_T0,sizeof(char),1U);_T2= (const char*)_T1;
# 185
CYCALLOCPROFILE_mark(_T2);{
struct Cyc_timeval start;struct Cyc_timeval end;_T3= Cyc_Flags_verbose;
if(!_T3)goto _TL10;_T4= & start;_T5= (struct Cyc_timeval*)_T4;
gettimeofday(_T5,0);goto _TL11;_TL10: _TL11: {
# 190
void*ans;{struct _handler_cons _T2B;_T6= & _T2B;_push_handler(_T6);{int _T2C=0;_T7= setjmp(_T2B.handler);if(!_T7)goto _TL12;_T2C= 1;goto _TL13;_TL12: _TL13: if(_T2C)goto _TL14;else{goto _TL16;}_TL16:
 ans= f(env,tds);_pop_handler();goto _TL15;_TL14: _T8= Cyc_Core_get_exn_thrown();{void*_T2D=(void*)_T8;void*_T2E;_T2E= _T2D;{void*x=_T2E;
# 194
ans= onfail;_T9= 
Cyc_Warn_error_p();if(!_T9)goto _TL17;goto _LL0;_TL17:
# 197
 Cyc_compile_failure= 1;{struct Cyc_String_pa_PrintArg_struct _T2F;_T2F.tag= 0;
_T2F.f1= stage_name;_TA= _T2F;}{struct Cyc_String_pa_PrintArg_struct _T2F=_TA;void*_T30[1];_T30[0]= & _T2F;_TB= Cyc_stderr;_TC= _tag_fat("COMPILER STAGE %s (unexpected exception)\n",sizeof(char),42U);_TD= _tag_fat(_T30,sizeof(void*),1);Cyc_fprintf(_TB,_TC,_TD);}{struct _tuple13*_T2F=_cycalloc(sizeof(struct _tuple13));
_T2F->f0= x;({__typeof__(Cyc_Core_get_exn_filename())_T30=Cyc_Core_get_exn_filename();_T2F->f1= _T30;});({__typeof__(Cyc_Core_get_exn_lineno())_T30=Cyc_Core_get_exn_lineno();_T2F->f2= _T30;});_TE= (struct _tuple13*)_T2F;}Cyc_uncaught_exn= _TE;goto _LL0;}_LL0:;}_TL15:;}}_TF= 
# 202
Cyc_Warn_error_p();if(!_TF)goto _TL19;
Cyc_compile_failure= 1;goto _TL1A;_TL19: _TL1A: _T10= Cyc_compile_failure;
if(!_T10)goto _TL1B;_T11= Cyc_stderr;_T12= 
_tag_fat("\nCOMPILATION FAILED!\n",sizeof(char),22U);_T13= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T11,_T12,_T13);
Cyc_fflush(Cyc_stderr);goto _TL1C;
_TL1B: _T14= Cyc_Flags_verbose;if(!_T14)goto _TL1D;{struct Cyc_String_pa_PrintArg_struct _T2B;_T2B.tag= 0;
_T2B.f1= stage_name;_T15= _T2B;}{struct Cyc_String_pa_PrintArg_struct _T2B=_T15;void*_T2C[1];_T2C[0]= & _T2B;_T16= Cyc_stderr;_T17= _tag_fat("%s completed ",sizeof(char),14U);_T18= _tag_fat(_T2C,sizeof(void*),1);Cyc_fprintf(_T16,_T17,_T18);}_T19= & end;_T1A= (struct Cyc_timeval*)_T19;
gettimeofday(_T1A,0);_T1B= start;_T1C= _T1B.tv_sec;
end.tv_sec= end.tv_sec - _T1C;_T1D= start;_T1E= _T1D.tv_usec;
end.tv_usec= end.tv_usec - _T1E;_T1F= end;_T20= _T1F.tv_usec;
if(_T20 >= 0)goto _TL1F;
end.tv_usec= end.tv_usec + 1000000;
end.tv_sec= end.tv_sec + -1;goto _TL20;_TL1F: _TL20:{struct Cyc_Int_pa_PrintArg_struct _T2B;_T2B.tag= 1;_T22= end;_T23= _T22.tv_sec;
# 216
_T2B.f1= (unsigned long)_T23;_T21= _T2B;}{struct Cyc_Int_pa_PrintArg_struct _T2B=_T21;{struct Cyc_Int_pa_PrintArg_struct _T2C;_T2C.tag= 1;_T25= end;_T26= _T25.tv_usec;_T2C.f1= (unsigned long)_T26;_T24= _T2C;}{struct Cyc_Int_pa_PrintArg_struct _T2C=_T24;void*_T2D[2];_T2D[0]= & _T2B;_T2D[1]= & _T2C;_T27= Cyc_stderr;_T28= _tag_fat("(%d.%06d secs)\n",sizeof(char),16U);_T29= _tag_fat(_T2D,sizeof(void*),2);Cyc_fprintf(_T27,_T28,_T29);}}
Cyc_fflush(Cyc_stderr);goto _TL1E;_TL1D: _TL1E: _TL1C: _T2A= ans;
# 219
return _T2A;}}}
# 222
static struct Cyc_List_List*Cyc_do_parse(struct Cyc___cycFILE*f,struct Cyc_List_List*ignore){struct _handler_cons*_T0;int _T1;void*_T2;struct Cyc_Parse_Exit_exn_struct*_T3;char*_T4;char*_T5;struct Cyc_List_List*_T6;
Cyc_Lex_lex_init(1);
Cyc_Lex_pos_init();{
struct Cyc_List_List*ans=0;{struct _handler_cons _T7;_T0= & _T7;_push_handler(_T0);{int _T8=0;_T1= setjmp(_T7.handler);if(!_T1)goto _TL21;_T8= 1;goto _TL22;_TL21: _TL22: if(_T8)goto _TL23;else{goto _TL25;}_TL25:
# 227
 ans= Cyc_Parse_parse_file(f);
Cyc_file_close(f);_pop_handler();goto _TL24;_TL23: _T2= Cyc_Core_get_exn_thrown();{void*_T9=(void*)_T2;void*_TA;_T3= (struct Cyc_Parse_Exit_exn_struct*)_T9;_T4= _T3->tag;_T5= Cyc_Parse_Exit;if(_T4!=_T5)goto _TL26;
# 231
Cyc_file_close(f);
Cyc_compile_failure= 1;goto _LL0;_TL26: _TA= _T9;{void*e=_TA;
# 235
Cyc_file_close(f);
Cyc_Core_rethrow(e);}_LL0:;}_TL24:;}}
# 238
Cyc_Lex_lex_init(1);_T6= ans;
return _T6;}}
# 242
static long Cyc_do_binding(long ignore,struct Cyc_List_List*tds){
Cyc_Binding_resolve_all(tds);
return 1;}
# 247
static long Cyc_do_adjust(long ignore,struct Cyc_List_List*tds){
Cyc_CurRgn_adjust_all(tds);
return 1;}
# 252
static struct Cyc_List_List*Cyc_do_typecheck(struct Cyc_Tcenv_Tenv*te,struct Cyc_List_List*tds){long _T0;struct Cyc_List_List*_T1;
Cyc_Tc_tc(te,1,tds);_T0= Cyc_noshake_r;
if(_T0)goto _TL28;else{goto _TL2A;}
_TL2A: tds= Cyc_Tc_treeshake(te,tds);goto _TL29;_TL28: _TL29: _T1= tds;
return _T1;}
# 259
static struct Cyc_JumpAnalysis_Jump_Anal_Result*Cyc_do_jumpanalysis(long ignore,struct Cyc_List_List*tds){struct Cyc_JumpAnalysis_Jump_Anal_Result*_T0;_T0= 
Cyc_JumpAnalysis_jump_analysis(tds);return _T0;}
# 263
static struct Cyc_List_List*Cyc_do_cfcheck(struct Cyc_JumpAnalysis_Jump_Anal_Result*tables,struct Cyc_List_List*tds){struct Cyc_List_List*_T0;
# 265
Cyc_NewControlFlow_cf_check(tables,tds);_T0= tds;
return _T0;}
# 269
static long Cyc_do_insert_checks(struct Cyc_JumpAnalysis_Jump_Anal_Result*tables,struct Cyc_List_List*tds){
Cyc_InsertChecks_insert_checks(tds,tables,Cyc_vcgen_r);
return 1;}
# 274
static struct Cyc_List_List*Cyc_do_translate(struct Cyc_Hashtable_Table*pops,struct Cyc_List_List*tds){struct Cyc_List_List*_T0;_T0= 
# 276
Cyc_Toc_toc(pops,tds);return _T0;}
# 279
static struct Cyc_List_List*Cyc_do_removeaggrs(long ignore,struct Cyc_List_List*tds){struct Cyc_List_List*_T0;_T0= 
Cyc_RemoveAggrs_remove_aggrs(tds);return _T0;}
# 283
static struct Cyc_List_List*Cyc_do_removelabs(long ignore,struct Cyc_List_List*tds){struct Cyc_List_List*_T0;_T0= 
Cyc_RemoveLabels_remove_unused_labels(tds);return _T0;}
# 287
static struct Cyc_List_List*Cyc_do_temprename(long ignore,struct Cyc_List_List*tds){struct Cyc_List_List*_T0;_T0= 
Cyc_RenameTemps_rename(tds);return _T0;}
# 291
static struct Cyc_List_List*Cyc_do_castremove(long ignore,struct Cyc_List_List*tds){struct Cyc_List_List*_T0;_T0= 
Cyc_RemoveCasts_remove_casts(tds);return _T0;}
# 295
static struct Cyc_List_List*Cyc_do_lower(long ignore,struct Cyc_List_List*tds){struct Cyc_List_List*_T0;_T0= 
Cyc_Lower_lower(tds);return _T0;}
# 299
static struct Cyc_List_List*Cyc_do_toseqc(long ignore,struct Cyc_List_List*tds){struct Cyc_List_List*_T0;_T0= 
Cyc_Toseqc_toseqc(tds);return _T0;}
# 303
static struct Cyc_List_List*Cyc_do_lowtreeshake(long ignore,struct Cyc_List_List*tds){long _T0;struct Cyc_List_List*_T1;struct Cyc_List_List*_T2;_T0= Cyc_noshake_r;
if(_T0)goto _TL2B;else{goto _TL2D;}
_TL2D: _T1= Cyc_LowTreeShake_shake(tds);return _T1;_TL2B: _T2= tds;
return _T2;}
# 309
static struct Cyc_List_List*Cyc_do_print(struct Cyc___cycFILE*out_file,struct Cyc_List_List*tds){struct Cyc_Absynpp_Params _T0;enum Cyc_Flags_Cyclone_Passes _T1;int _T2;enum Cyc_Flags_Cyclone_Passes _T3;int _T4;struct Cyc___cycFILE*_T5;struct _fat_ptr _T6;struct _fat_ptr _T7;long _T8;struct Cyc_Absynpp_Params*_T9;struct Cyc_Absynpp_Params*_TA;struct Cyc_Absynpp_Params*_TB;struct Cyc_Absynpp_Params*_TC;struct Cyc_List_List*_TD;_T1= Cyc_Flags_stop_after_pass;_T2= (int)_T1;
if(_T2 >= 9)goto _TL2E;_T0= Cyc_Absynpp_cyc_params_r;goto _TL2F;_TL2E: _T0= Cyc_Absynpp_c_params_r;_TL2F: {struct Cyc_Absynpp_Params params_r=_T0;
params_r.expand_typedefs= !Cyc_Flags_noexpand_r;
params_r.add_cyc_prefix= Cyc_add_cyc_namespace_r;
params_r.generate_line_directives= Cyc_generate_line_directives_r;
params_r.print_full_evars= Cyc_print_full_evars_r;
params_r.print_all_tvars= Cyc_print_all_tvars_r;
params_r.print_all_kinds= Cyc_print_all_kinds_r;
params_r.print_all_effects= Cyc_print_all_effects_r;_T3= Cyc_Flags_stop_after_pass;_T4= (int)_T3;
# 319
if(_T4 <= 6)goto _TL30;_T5= out_file;_T6= 
_tag_fat("#include <cyc_include.h>\n",sizeof(char),26U);_T7= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T5,_T6,_T7);goto _TL31;_TL30: _TL31: _T8= Cyc_pp_r;
# 322
if(!_T8)goto _TL32;_T9= & params_r;_TA= (struct Cyc_Absynpp_Params*)_T9;
Cyc_Absynpp_set_params(_TA);
Cyc_Absynpp_decllist2file(tds,out_file);goto _TL33;
# 326
_TL32: _TB= & params_r;_TC= (struct Cyc_Absynpp_Params*)_TB;Cyc_Absyndump_set_params(_TC);
Cyc_Absyndump_dumpdecllist2file(tds,out_file);_TL33:
# 329
 Cyc_fflush(out_file);_TD= tds;
# 331
return _TD;}}
# 335
struct Cyc_List_List*Cyc_Cyclone_parse_file(struct _fat_ptr filename){enum Cyc_Flags_Cyclone_Passes _T0;int _T1;struct _fat_ptr _T2;struct _fat_ptr _T3;struct _fat_ptr _T4;long _T5;enum Cyc_Flags_Cyclone_Passes _T6;int _T7;struct Cyc_List_List*(*_T8)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct Cyc___cycFILE*,struct Cyc_List_List*),struct Cyc___cycFILE*,struct Cyc_List_List*);struct _fat_ptr _T9;struct Cyc_List_List*_TA;struct Cyc___cycFILE*_TB;struct Cyc_List_List*_TC;struct Cyc_List_List*_TD;_T0= Cyc_Flags_stop_after_pass;_T1= (int)_T0;
if(_T1 > 0)goto _TL34;
return 0;_TL34:
# 340
 Cyc_Warn_reset(filename);_T2= filename;_T3= 
_tag_fat("r",sizeof(char),2U);_T4= _tag_fat("file",sizeof(char),5U);{struct Cyc___cycFILE*in_file=Cyc_try_file_open(_T2,_T3,_T4);
# 343
struct Cyc_List_List*tds=0;_T5= Cyc_compile_failure;
# 346
if(_T5)goto _TL36;else{goto _TL38;}_TL38: _T6= Cyc_Flags_stop_after_pass;_T7= (int)_T6;if(_T7 < 1)goto _TL36;{
struct Cyc_List_List*(*_TE)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct Cyc___cycFILE*,struct Cyc_List_List*),struct Cyc___cycFILE*,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct Cyc___cycFILE*,struct Cyc_List_List*),struct Cyc___cycFILE*,struct Cyc_List_List*))Cyc_do_stage;_T8= _TE;}_T9= _tag_fat("parsing",sizeof(char),8U);_TA= tds;_TB= _check_null(in_file);_TC= tds;tds= _T8(_T9,_TA,Cyc_do_parse,_TB,_TC);goto _TL37;_TL36: _TL37: _TD= tds;
return _TD;}}
# 352
static void Cyc_process_file(struct _fat_ptr filename){long _T0;long _T1;long _T2;enum Cyc_Flags_Cyclone_Passes _T3;int _T4;long(*_T5)(struct _fat_ptr,struct Cyc_List_List*,long(*)(long,struct Cyc_List_List*),long,long);struct _fat_ptr _T6;struct Cyc_List_List*_T7;long _T8;enum Cyc_Flags_Cyclone_Passes _T9;int _TA;long(*_TB)(struct _fat_ptr,struct Cyc_List_List*,long(*)(long,struct Cyc_List_List*),long,long);struct _fat_ptr _TC;struct Cyc_List_List*_TD;long _TE;enum Cyc_Flags_Cyclone_Passes _TF;int _T10;struct Cyc_List_List*(*_T11)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct Cyc_Tcenv_Tenv*,struct Cyc_List_List*),struct Cyc_Tcenv_Tenv*,struct Cyc_List_List*);struct _fat_ptr _T12;struct Cyc_List_List*_T13;struct Cyc_Tcenv_Tenv*_T14;struct Cyc_List_List*_T15;long _T16;enum Cyc_Flags_Cyclone_Passes _T17;int _T18;struct Cyc_JumpAnalysis_Jump_Anal_Result*(*_T19)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_JumpAnalysis_Jump_Anal_Result*(*)(long,struct Cyc_List_List*),long,struct Cyc_JumpAnalysis_Jump_Anal_Result*);struct _fat_ptr _T1A;struct Cyc_List_List*_T1B;long _T1C;enum Cyc_Flags_Cyclone_Passes _T1D;int _T1E;struct Cyc_List_List*(*_T1F)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct Cyc_JumpAnalysis_Jump_Anal_Result*,struct Cyc_List_List*),struct Cyc_JumpAnalysis_Jump_Anal_Result*,struct Cyc_List_List*);struct _fat_ptr _T20;struct Cyc_List_List*_T21;struct Cyc_JumpAnalysis_Jump_Anal_Result*_T22;struct Cyc_List_List*_T23;long _T24;enum Cyc_Flags_Cyclone_Passes _T25;int _T26;long(*_T27)(struct _fat_ptr,struct Cyc_List_List*,long(*)(struct Cyc_JumpAnalysis_Jump_Anal_Result*,struct Cyc_List_List*),struct Cyc_JumpAnalysis_Jump_Anal_Result*,long);struct _fat_ptr _T28;struct Cyc_List_List*_T29;struct Cyc_JumpAnalysis_Jump_Anal_Result*_T2A;long _T2B;enum Cyc_Flags_Cyclone_Passes _T2C;int _T2D;struct Cyc_List_List*(*_T2E)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct Cyc_Hashtable_Table*,struct Cyc_List_List*),struct Cyc_Hashtable_Table*,struct Cyc_List_List*);struct _fat_ptr _T2F;struct Cyc_List_List*_T30;struct Cyc_JumpAnalysis_Jump_Anal_Result*_T31;struct Cyc_Hashtable_Table*_T32;struct Cyc_List_List*_T33;long _T34;enum Cyc_Flags_Cyclone_Passes _T35;int _T36;struct Cyc_List_List*(*_T37)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(long,struct Cyc_List_List*),long,struct Cyc_List_List*);struct _fat_ptr _T38;struct Cyc_List_List*_T39;struct Cyc_List_List*_T3A;long _T3B;long _T3C;enum Cyc_Flags_Cyclone_Passes _T3D;int _T3E;struct Cyc_List_List*(*_T3F)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(long,struct Cyc_List_List*),long,struct Cyc_List_List*);struct _fat_ptr _T40;struct Cyc_List_List*_T41;struct Cyc_List_List*_T42;long _T43;enum Cyc_Flags_Cyclone_Passes _T44;int _T45;struct Cyc_List_List*(*_T46)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(long,struct Cyc_List_List*),long,struct Cyc_List_List*);struct _fat_ptr _T47;struct Cyc_List_List*_T48;struct Cyc_List_List*_T49;long _T4A;long _T4B;enum Cyc_Flags_Cyclone_Passes _T4C;int _T4D;struct Cyc_List_List*(*_T4E)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(long,struct Cyc_List_List*),long,struct Cyc_List_List*);struct _fat_ptr _T4F;struct Cyc_List_List*_T50;struct Cyc_List_List*_T51;long _T52;enum Cyc_Flags_Cyclone_Passes _T53;int _T54;long _T55;enum Cyc_Flags_Cyclone_Passes _T56;int _T57;struct Cyc_List_List*(*_T58)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(long,struct Cyc_List_List*),long,struct Cyc_List_List*);struct _fat_ptr _T59;struct Cyc_List_List*_T5A;struct Cyc_List_List*_T5B;long _T5C;enum Cyc_Flags_Cyclone_Passes _T5D;int _T5E;struct Cyc_List_List*(*_T5F)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(long,struct Cyc_List_List*),long,struct Cyc_List_List*);struct _fat_ptr _T60;struct Cyc_List_List*_T61;struct Cyc_List_List*_T62;long _T63;enum Cyc_Flags_Cyclone_Passes _T64;int _T65;struct Cyc_List_List*(*_T66)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(long,struct Cyc_List_List*),long,struct Cyc_List_List*);struct _fat_ptr _T67;struct Cyc_List_List*_T68;struct Cyc_List_List*_T69;long _T6A;struct Cyc_String_pa_PrintArg_struct _T6B;struct _fat_ptr _T6C;void*_T6D;void*_T6E;unsigned _T6F;struct Cyc_String_pa_PrintArg_struct _T70;struct _fat_ptr _T71;void*_T72;void*_T73;unsigned _T74;struct Cyc_Int_pa_PrintArg_struct _T75;int _T76;struct Cyc___cycFILE*_T77;struct _fat_ptr _T78;struct _fat_ptr _T79;enum Cyc_Flags_Cyclone_Passes _T7A;int _T7B;enum Cyc_Flags_Cyclone_Passes _T7C;int _T7D;struct _fat_ptr _T7E;struct _fat_ptr _T7F;struct _fat_ptr _T80;struct _fat_ptr _T81;struct _fat_ptr _T82;struct _fat_ptr _T83;long _T84;struct Cyc___cycFILE*_T85;unsigned _T86;long _T87;struct Cyc_List_List*(*_T88)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct Cyc___cycFILE*,struct Cyc_List_List*),struct Cyc___cycFILE*,struct Cyc_List_List*);struct _fat_ptr _T89;struct Cyc_List_List*_T8A;struct Cyc___cycFILE*_T8B;struct Cyc_List_List*_T8C;
struct Cyc_List_List*tds=Cyc_Cyclone_parse_file(filename);_T0= Cyc_compile_failure;
# 356
if(_T0)goto _TL39;else{goto _TL3B;}_TL3B: _T1= Cyc_Flags_porting_c_code;if(!_T1)goto _TL39;
Cyc_Port_port(tds);
return;_TL39: _T2= Cyc_compile_failure;
# 362
if(_T2)goto _TL3C;else{goto _TL3E;}_TL3E: _T3= Cyc_Flags_stop_after_pass;_T4= (int)_T3;if(_T4 < 2)goto _TL3C;{
long(*_T8D)(struct _fat_ptr,struct Cyc_List_List*,long(*)(long,struct Cyc_List_List*),long,long)=(long(*)(struct _fat_ptr,struct Cyc_List_List*,long(*)(long,struct Cyc_List_List*),long,long))Cyc_do_stage;_T5= _T8D;}_T6= _tag_fat("binding",sizeof(char),8U);_T7= tds;_T5(_T6,_T7,Cyc_do_binding,1,1);goto _TL3D;_TL3C: _TL3D: _T8= Cyc_compile_failure;
# 367
if(_T8)goto _TL3F;else{goto _TL41;}_TL41: _T9= Cyc_Flags_stop_after_pass;_TA= (int)_T9;if(_TA < 3)goto _TL3F;{
long(*_T8D)(struct _fat_ptr,struct Cyc_List_List*,long(*)(long,struct Cyc_List_List*),long,long)=(long(*)(struct _fat_ptr,struct Cyc_List_List*,long(*)(long,struct Cyc_List_List*),long,long))Cyc_do_stage;_TB= _T8D;}_TC= _tag_fat("current region resolution",sizeof(char),26U);_TD= tds;_TB(_TC,_TD,Cyc_do_adjust,1,1);goto _TL40;_TL3F: _TL40: {
# 371
struct Cyc_Tcenv_Tenv*te=Cyc_Tcenv_tc_init();_TE= Cyc_compile_failure;
if(_TE)goto _TL42;else{goto _TL44;}_TL44: _TF= Cyc_Flags_stop_after_pass;_T10= (int)_TF;if(_T10 < 4)goto _TL42;{
struct Cyc_List_List*(*_T8D)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct Cyc_Tcenv_Tenv*,struct Cyc_List_List*),struct Cyc_Tcenv_Tenv*,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct Cyc_Tcenv_Tenv*,struct Cyc_List_List*),struct Cyc_Tcenv_Tenv*,struct Cyc_List_List*))Cyc_do_stage;_T11= _T8D;}_T12= _tag_fat("type checking",sizeof(char),14U);_T13= tds;_T14= te;_T15= tds;tds= _T11(_T12,_T13,Cyc_do_typecheck,_T14,_T15);goto _TL43;_TL42: _TL43: {
# 376
struct Cyc_JumpAnalysis_Jump_Anal_Result*jump_tables=0;_T16= Cyc_compile_failure;
if(_T16)goto _TL45;else{goto _TL47;}_TL47: _T17= Cyc_Flags_stop_after_pass;_T18= (int)_T17;if(_T18 < 5)goto _TL45;{
struct Cyc_JumpAnalysis_Jump_Anal_Result*(*_T8D)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_JumpAnalysis_Jump_Anal_Result*(*)(long,struct Cyc_List_List*),long,struct Cyc_JumpAnalysis_Jump_Anal_Result*)=(struct Cyc_JumpAnalysis_Jump_Anal_Result*(*)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_JumpAnalysis_Jump_Anal_Result*(*)(long,struct Cyc_List_List*),long,struct Cyc_JumpAnalysis_Jump_Anal_Result*))Cyc_do_stage;_T19= _T8D;}_T1A= _tag_fat("jump checking",sizeof(char),14U);_T1B= tds;jump_tables= _T19(_T1A,_T1B,Cyc_do_jumpanalysis,1,0);goto _TL46;_TL45: _TL46: _T1C= Cyc_compile_failure;
# 381
if(_T1C)goto _TL48;else{goto _TL4A;}_TL4A: _T1D= Cyc_Flags_stop_after_pass;_T1E= (int)_T1D;if(_T1E < 6)goto _TL48;{
struct Cyc_List_List*(*_T8D)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct Cyc_JumpAnalysis_Jump_Anal_Result*,struct Cyc_List_List*),struct Cyc_JumpAnalysis_Jump_Anal_Result*,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct Cyc_JumpAnalysis_Jump_Anal_Result*,struct Cyc_List_List*),struct Cyc_JumpAnalysis_Jump_Anal_Result*,struct Cyc_List_List*))Cyc_do_stage;_T1F= _T8D;}_T20= _tag_fat("control-flow checking",sizeof(char),22U);_T21= tds;_T22= _check_null(jump_tables);_T23= tds;tds= _T1F(_T20,_T21,Cyc_do_cfcheck,_T22,_T23);goto _TL49;_TL48: _TL49: _T24= Cyc_compile_failure;
# 385
if(_T24)goto _TL4B;else{goto _TL4D;}_TL4D: _T25= Cyc_Flags_stop_after_pass;_T26= (int)_T25;if(_T26 < 8)goto _TL4B;{
long(*_T8D)(struct _fat_ptr,struct Cyc_List_List*,long(*)(struct Cyc_JumpAnalysis_Jump_Anal_Result*,struct Cyc_List_List*),struct Cyc_JumpAnalysis_Jump_Anal_Result*,long)=(long(*)(struct _fat_ptr,struct Cyc_List_List*,long(*)(struct Cyc_JumpAnalysis_Jump_Anal_Result*,struct Cyc_List_List*),struct Cyc_JumpAnalysis_Jump_Anal_Result*,long))Cyc_do_stage;_T27= _T8D;}_T28= _tag_fat("check insertion",sizeof(char),16U);_T29= tds;_T2A= _check_null(jump_tables);_T27(_T28,_T29,Cyc_do_insert_checks,_T2A,1);goto _TL4C;_TL4B: _TL4C: _T2B= Cyc_compile_failure;
# 389
if(_T2B)goto _TL4E;else{goto _TL50;}_TL50: _T2C= Cyc_Flags_stop_after_pass;_T2D= (int)_T2C;if(_T2D < 9)goto _TL4E;{
struct Cyc_List_List*(*_T8D)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct Cyc_Hashtable_Table*,struct Cyc_List_List*),struct Cyc_Hashtable_Table*,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct Cyc_Hashtable_Table*,struct Cyc_List_List*),struct Cyc_Hashtable_Table*,struct Cyc_List_List*))Cyc_do_stage;_T2E= _T8D;}_T2F= _tag_fat("translation to C",sizeof(char),17U);_T30= tds;_T31= _check_null(jump_tables);_T32= _T31->pop_tables;_T33= tds;tds= _T2E(_T2F,_T30,Cyc_do_translate,_T32,_T33);goto _TL4F;_TL4E: _TL4F: _T34= Cyc_compile_failure;
# 392
if(_T34)goto _TL51;else{goto _TL53;}_TL53: _T35= Cyc_Flags_stop_after_pass;_T36= (int)_T35;if(_T36 < 10)goto _TL51;{
struct Cyc_List_List*(*_T8D)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(long,struct Cyc_List_List*),long,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(long,struct Cyc_List_List*),long,struct Cyc_List_List*))Cyc_do_stage;_T37= _T8D;}_T38= _tag_fat("aggregate removal",sizeof(char),18U);_T39= tds;_T3A= tds;tds= _T37(_T38,_T39,Cyc_do_removeaggrs,1,_T3A);goto _TL52;_TL51: _TL52: _T3B= Cyc_compile_failure;
# 396
if(_T3B)goto _TL54;else{goto _TL56;}_TL56: _T3C= Cyc_nolower_r;if(_T3C)goto _TL54;else{goto _TL57;}_TL57: _T3D= Cyc_Flags_stop_after_pass;_T3E= (int)_T3D;if(_T3E < 10)goto _TL54;{
struct Cyc_List_List*(*_T8D)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(long,struct Cyc_List_List*),long,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(long,struct Cyc_List_List*),long,struct Cyc_List_List*))Cyc_do_stage;_T3F= _T8D;}_T40= _tag_fat("lowering C code",sizeof(char),16U);_T41= tds;_T42= tds;tds= _T3F(_T40,_T41,Cyc_do_lower,1,_T42);goto _TL55;_TL54: _TL55: _T43= Cyc_compile_failure;
# 400
if(_T43)goto _TL58;else{goto _TL5A;}_TL5A: _T44= Cyc_Flags_stop_after_pass;_T45= (int)_T44;if(_T45 < 11)goto _TL58;{
struct Cyc_List_List*(*_T8D)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(long,struct Cyc_List_List*),long,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(long,struct Cyc_List_List*),long,struct Cyc_List_List*))Cyc_do_stage;_T46= _T8D;}_T47= _tag_fat("unused label removal",sizeof(char),21U);_T48= tds;_T49= tds;tds= _T46(_T47,_T48,Cyc_do_removelabs,1,_T49);goto _TL59;_TL58: _TL59: _T4A= Cyc_compile_failure;
# 403
if(_T4A)goto _TL5B;else{goto _TL5D;}_TL5D: _T4B= Cyc_toseqc_r;if(!_T4B)goto _TL5B;_T4C= Cyc_Flags_stop_after_pass;_T4D= (int)_T4C;if(_T4D < 14)goto _TL5B;{
struct Cyc_List_List*(*_T8D)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(long,struct Cyc_List_List*),long,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(long,struct Cyc_List_List*),long,struct Cyc_List_List*))Cyc_do_stage;_T4E= _T8D;}_T4F= _tag_fat("L-to-R evaluation order",sizeof(char),24U);_T50= tds;_T51= tds;tds= _T4E(_T4F,_T50,Cyc_do_toseqc,1,_T51);goto _TL5C;_TL5B: _TL5C: _T52= Cyc_compile_failure;
# 406
if(_T52)goto _TL5E;else{goto _TL60;}_TL60: _T53= Cyc_Flags_stop_after_pass;_T54= (int)_T53;if(_T54 < 9)goto _TL5E;
Cyc_Toc_finish();goto _TL5F;_TL5E: _TL5F: _T55= Cyc_compile_failure;
# 409
if(_T55)goto _TL61;else{goto _TL63;}_TL63: _T56= Cyc_Flags_stop_after_pass;_T57= (int)_T56;if(_T57 < 14)goto _TL61;{
struct Cyc_List_List*(*_T8D)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(long,struct Cyc_List_List*),long,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(long,struct Cyc_List_List*),long,struct Cyc_List_List*))Cyc_do_stage;_T58= _T8D;}_T59= _tag_fat("low treeshaking",sizeof(char),16U);_T5A= tds;_T5B= tds;tds= _T58(_T59,_T5A,Cyc_do_lowtreeshake,1,_T5B);goto _TL62;_TL61: _TL62: _T5C= Cyc_compile_failure;
# 412
if(_T5C)goto _TL64;else{goto _TL66;}_TL66: _T5D= Cyc_Flags_stop_after_pass;_T5E= (int)_T5D;if(_T5E < 12)goto _TL64;{
struct Cyc_List_List*(*_T8D)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(long,struct Cyc_List_List*),long,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(long,struct Cyc_List_List*),long,struct Cyc_List_List*))Cyc_do_stage;_T5F= _T8D;}_T60= _tag_fat("renaming temporaries",sizeof(char),21U);_T61= tds;_T62= tds;tds= _T5F(_T60,_T61,Cyc_do_temprename,1,_T62);goto _TL65;_TL64: _TL65: _T63= Cyc_compile_failure;
# 415
if(_T63)goto _TL67;else{goto _TL69;}_TL69: _T64= Cyc_Flags_stop_after_pass;_T65= (int)_T64;if(_T65 < 13)goto _TL67;{
struct Cyc_List_List*(*_T8D)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(long,struct Cyc_List_List*),long,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(long,struct Cyc_List_List*),long,struct Cyc_List_List*))Cyc_do_stage;_T66= _T8D;}_T67= _tag_fat("removing casts",sizeof(char),15U);_T68= tds;_T69= tds;tds= _T66(_T67,_T68,Cyc_do_castremove,1,_T69);goto _TL68;_TL67: _TL68: _T6A= Cyc_compile_failure;
# 418
if(_T6A)goto _TL6A;else{goto _TL6C;}
_TL6C: Cyc_Warn_flush_warnings();goto _TL6B;_TL6A: _TL6B:
 if(Cyc_uncaught_exn==0)goto _TL6D;{
# 422
struct _tuple13*_T8D=Cyc_uncaught_exn;int _T8E;const char*_T8F;void*_T90;{struct _tuple13 _T91=*_T8D;_T90= _T91.f0;_T8F= _T91.f1;_T8E= _T91.f2;}{void*e=_T90;const char*fn=_T8F;int line=_T8E;{struct Cyc_String_pa_PrintArg_struct _T91;_T91.tag= 0;{const char*_T92=
Cyc_Core_get_exn_name(e);_T6D= (void*)_T92;_T6E= (void*)_T92;_T6F= _get_zero_arr_size_char(_T6E,1U);_T6C= _tag_fat(_T6D,sizeof(char),_T6F);}_T91.f1= _T6C;_T6B= _T91;}{struct Cyc_String_pa_PrintArg_struct _T91=_T6B;{struct Cyc_String_pa_PrintArg_struct _T92;_T92.tag= 0;{const char*_T93=fn;_T72= (void*)_T93;_T73= (void*)_T93;_T74= _get_zero_arr_size_char(_T73,1U);_T71= _tag_fat(_T72,sizeof(char),_T74);}_T92.f1= _T71;_T70= _T92;}{struct Cyc_String_pa_PrintArg_struct _T92=_T70;{struct Cyc_Int_pa_PrintArg_struct _T93;_T93.tag= 1;_T76= line;_T93.f1= (unsigned long)_T76;_T75= _T93;}{struct Cyc_Int_pa_PrintArg_struct _T93=_T75;void*_T94[3];_T94[0]= & _T91;_T94[1]= & _T92;_T94[2]= & _T93;_T77= Cyc_stderr;_T78= _tag_fat("uncaught exception: %s from %s, line %d\n",sizeof(char),41U);_T79= _tag_fat(_T94,sizeof(void*),3);Cyc_fprintf(_T77,_T78,_T79);}}}
Cyc_fflush(Cyc_stderr);
return;}}_TL6D: {
# 429
struct Cyc___cycFILE*out_file;_T7A= Cyc_Flags_stop_after_pass;_T7B= (int)_T7A;
if(_T7B > 0)goto _TL6F;
return;_TL6F: _T7C= Cyc_Flags_stop_after_pass;_T7D= (int)_T7C;
if(_T7D > 6)goto _TL71;_T7E= Cyc_output_file;_T7F= 
_tag_fat("w",sizeof(char),2U);_T80= _tag_fat("output file",sizeof(char),12U);out_file= Cyc_try_file_open(_T7E,_T7F,_T80);goto _TL72;
# 435
_TL71: _T81= Cyc_output_file;_T82= _tag_fat("w",sizeof(char),2U);_T83= _tag_fat("output file",sizeof(char),12U);out_file= Cyc_try_file_open(_T81,_T82,_T83);_TL72: _T84= Cyc_compile_failure;
# 437
if(_T84)goto _TL75;else{goto _TL76;}_TL76: _T85= out_file;_T86= (unsigned)_T85;if(_T86)goto _TL73;else{goto _TL75;}
_TL75: return;_TL73: _T87= Cyc_noprint_r;
# 440
if(_T87)goto _TL77;else{goto _TL79;}
_TL79:{struct Cyc___cycFILE*env=out_file;{
struct Cyc_List_List*(*_T8D)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct Cyc___cycFILE*,struct Cyc_List_List*),struct Cyc___cycFILE*,struct Cyc_List_List*)=(struct Cyc_List_List*(*)(struct _fat_ptr,struct Cyc_List_List*,struct Cyc_List_List*(*)(struct Cyc___cycFILE*,struct Cyc_List_List*),struct Cyc___cycFILE*,struct Cyc_List_List*))Cyc_do_stage;_T88= _T8D;}_T89= _tag_fat("printing",sizeof(char),9U);_T8A= tds;_T8B= env;_T8C= tds;tds= _T88(_T89,_T8A,Cyc_do_print,_T8B,_T8C);
Cyc_file_close(out_file);}goto _TL78;_TL77: _TL78:;}}}}static char _TmpG0[8U]="<final>";
# 447
static struct _fat_ptr Cyc_final_str={(unsigned char*)_TmpG0,(unsigned char*)_TmpG0,(unsigned char*)_TmpG0 + 8U};
static struct _fat_ptr*Cyc_final_strptr=(struct _fat_ptr*)& Cyc_final_str;
# 450
static long Cyc_is_cfile(struct _fat_ptr*n){struct _fat_ptr*_T0;unsigned long _T1;struct _fat_ptr _T2;unsigned _T3;struct _fat_ptr _T4;unsigned char*_T5;const char*_T6;const char*_T7;unsigned long _T8;int _T9;char _TA;int _TB;struct _fat_ptr _TC;unsigned char*_TD;const char*_TE;unsigned long _TF;int _T10;char _T11;int _T12;int _T13;struct Cyc___cycFILE*_T14;struct _fat_ptr _T15;struct _fat_ptr _T16;_T0= n;{
struct _fat_ptr s=*_T0;{
# 453
unsigned long i=0U;_TL7D: _T1= i;_T2= s;_T3= _get_fat_size(_T2,sizeof(char));if(_T1 < _T3)goto _TL7B;else{goto _TL7C;}
_TL7B: _T4= s;_T5= _T4.curr;_T6= (const char*)_T5;_T7= _check_null(_T6);_T8= i;_T9= (int)_T8;_TA= _T7[_T9];_TB= (int)_TA;if(_TB==32)goto _TL7E;_TC= s;_TD= _TC.curr;_TE= (const char*)_TD;_TF= i;_T10= (int)_TF;_T11= _TE[_T10];_T12= (int)_T11;_T13= _T12!=45;
return _T13;_TL7E:
# 453
 i= i + 1;goto _TL7D;_TL7C:;}_T14= Cyc_stderr;_T15= 
# 456
_tag_fat("Error: filename consists solely of spaces\n",sizeof(char),43U);_T16= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_T14,_T15,_T16);
return 1;}}
# 460
static void Cyc_set_max_vc_summary(int n){int _T0;_T0= n;Cyc_Flags_max_vc_summary= (unsigned)_T0;}
static void Cyc_set_max_vc_paths(int n){int _T0;_T0= n;Cyc_Flags_max_vc_paths= (unsigned)_T0;}
static void Cyc_set_max_vc_term_size(int n){int _T0;_T0= n;Cyc_Flags_max_vc_term_size= (unsigned)_T0;}struct _tuple14{struct _fat_ptr f0;long f1;struct _fat_ptr f2;void*f3;struct _fat_ptr f4;};
# 471
void Cyc_print_options (void);
# 481
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt1_spec={3,& Cyc_Flags_verbose};static char _TmpG1[3U]="-v";static char _TmpG2[1U]="";static char _TmpG3[35U]="print compilation stages verbosely";struct _tuple14 Cyc_opt1_tuple={.f0={(unsigned char*)_TmpG1,(unsigned char*)_TmpG1,(unsigned char*)_TmpG1 + 3U},.f1=0,.f2={(unsigned char*)_TmpG2,(unsigned char*)_TmpG2,(unsigned char*)_TmpG2 + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt1_spec),.f4={(unsigned char*)_TmpG3,(unsigned char*)_TmpG3,(unsigned char*)_TmpG3 + 35U}};struct Cyc_List_List Cyc_opt1={(void*)& Cyc_opt1_tuple,0};
# 483
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt2_spec={0,Cyc_print_version};static char _TmpG4[10U]="--version";static char _TmpG5[1U]="";static char _TmpG6[35U]="print version information and exit";struct _tuple14 Cyc_opt2_tuple={.f0={(unsigned char*)_TmpG4,(unsigned char*)_TmpG4,(unsigned char*)_TmpG4 + 10U},.f1=0,.f2={(unsigned char*)_TmpG5,(unsigned char*)_TmpG5,(unsigned char*)_TmpG5 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt2_spec),.f4={(unsigned char*)_TmpG6,(unsigned char*)_TmpG6,(unsigned char*)_TmpG6 + 35U}};struct Cyc_List_List Cyc_opt2={(void*)& Cyc_opt2_tuple,0};
# 485
struct Cyc_Arg_String_spec_Arg_Spec_struct Cyc_opt3_spec={5,Cyc_set_output_file};static char _TmpG7[3U]="-o";static char _TmpG8[8U]=" <file>";static char _TmpG9[35U]="set the output file name to <file>";struct _tuple14 Cyc_opt3_tuple={.f0={(unsigned char*)_TmpG7,(unsigned char*)_TmpG7,(unsigned char*)_TmpG7 + 3U},.f1=0,.f2={(unsigned char*)_TmpG8,(unsigned char*)_TmpG8,(unsigned char*)_TmpG8 + 8U},.f3=(void*)((struct Cyc_Arg_String_spec_Arg_Spec_struct*)& Cyc_opt3_spec),.f4={(unsigned char*)_TmpG9,(unsigned char*)_TmpG9,(unsigned char*)_TmpG9 + 35U}};struct Cyc_List_List Cyc_opt3={(void*)& Cyc_opt3_tuple,0};
# 487
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt4_spec={3,& Cyc_Flags_warn_lose_unique};static char _TmpGA[14U]="-Wlose-unique";static char _TmpGB[1U]="";static char _TmpGC[49U]="try to warn when a unique pointer might get lost";struct _tuple14 Cyc_opt4_tuple={.f0={(unsigned char*)_TmpGA,(unsigned char*)_TmpGA,(unsigned char*)_TmpGA + 14U},.f1=0,.f2={(unsigned char*)_TmpGB,(unsigned char*)_TmpGB,(unsigned char*)_TmpGB + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt4_spec),.f4={(unsigned char*)_TmpGC,(unsigned char*)_TmpGC,(unsigned char*)_TmpGC + 49U}};struct Cyc_List_List Cyc_opt4={(void*)& Cyc_opt4_tuple,0};
# 489
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt5_spec={3,& Cyc_Flags_warn_override};static char _TmpGD[11U]="-Woverride";static char _TmpGE[1U]="";static char _TmpGF[58U]="warn when a local variable overrides an existing variable";struct _tuple14 Cyc_opt5_tuple={.f0={(unsigned char*)_TmpGD,(unsigned char*)_TmpGD,(unsigned char*)_TmpGD + 11U},.f1=0,.f2={(unsigned char*)_TmpGE,(unsigned char*)_TmpGE,(unsigned char*)_TmpGE + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt5_spec),.f4={(unsigned char*)_TmpGF,(unsigned char*)_TmpGF,(unsigned char*)_TmpGF + 58U}};struct Cyc_List_List Cyc_opt5={(void*)& Cyc_opt5_tuple,0};
# 491
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt6_spec={0,Cyc_Flags_set_all_warnings};static char _TmpG10[6U]="-Wall";static char _TmpG11[1U]="";static char _TmpG12[21U]="turn on all warnings";struct _tuple14 Cyc_opt6_tuple={.f0={(unsigned char*)_TmpG10,(unsigned char*)_TmpG10,(unsigned char*)_TmpG10 + 6U},.f1=0,.f2={(unsigned char*)_TmpG11,(unsigned char*)_TmpG11,(unsigned char*)_TmpG11 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt6_spec),.f4={(unsigned char*)_TmpG12,(unsigned char*)_TmpG12,(unsigned char*)_TmpG12 + 21U}};struct Cyc_List_List Cyc_opt6={(void*)& Cyc_opt6_tuple,0};
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt7_spec={0,Cyc_Flags_set_parseonly};static char _TmpG13[17U]="-stopafter-parse";static char _TmpG14[1U]="";static char _TmpG15[19U]="stop after parsing";struct _tuple14 Cyc_opt7_tuple={.f0={(unsigned char*)_TmpG13,(unsigned char*)_TmpG13,(unsigned char*)_TmpG13 + 17U},.f1=0,.f2={(unsigned char*)_TmpG14,(unsigned char*)_TmpG14,(unsigned char*)_TmpG14 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt7_spec),.f4={(unsigned char*)_TmpG15,(unsigned char*)_TmpG15,(unsigned char*)_TmpG15 + 19U}};struct Cyc_List_List Cyc_opt7={(void*)& Cyc_opt7_tuple,0};
# 494
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt8_spec={0,Cyc_Flags_set_tconly};static char _TmpG16[14U]="-stopafter-tc";static char _TmpG17[1U]="";static char _TmpG18[25U]="stop after type checking";struct _tuple14 Cyc_opt8_tuple={.f0={(unsigned char*)_TmpG16,(unsigned char*)_TmpG16,(unsigned char*)_TmpG16 + 14U},.f1=0,.f2={(unsigned char*)_TmpG17,(unsigned char*)_TmpG17,(unsigned char*)_TmpG17 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt8_spec),.f4={(unsigned char*)_TmpG18,(unsigned char*)_TmpG18,(unsigned char*)_TmpG18 + 25U}};struct Cyc_List_List Cyc_opt8={(void*)& Cyc_opt8_tuple,0};
# 496
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt9_spec={3,& Cyc_noprint_r};static char _TmpG19[9U]="-noprint";static char _TmpG1A[1U]="";static char _TmpG1B[42U]="do not print output (when stopping early)";struct _tuple14 Cyc_opt9_tuple={.f0={(unsigned char*)_TmpG19,(unsigned char*)_TmpG19,(unsigned char*)_TmpG19 + 9U},.f1=0,.f2={(unsigned char*)_TmpG1A,(unsigned char*)_TmpG1A,(unsigned char*)_TmpG1A + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt9_spec),.f4={(unsigned char*)_TmpG1B,(unsigned char*)_TmpG1B,(unsigned char*)_TmpG1B + 42U}};struct Cyc_List_List Cyc_opt9={(void*)& Cyc_opt9_tuple,0};
# 498
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt10_spec={0,Cyc_Flags_set_cfonly};static char _TmpG1C[14U]="-stopafter-cf";static char _TmpG1D[1U]="";static char _TmpG1E[33U]="stop after control-flow checking";struct _tuple14 Cyc_opt10_tuple={.f0={(unsigned char*)_TmpG1C,(unsigned char*)_TmpG1C,(unsigned char*)_TmpG1C + 14U},.f1=0,.f2={(unsigned char*)_TmpG1D,(unsigned char*)_TmpG1D,(unsigned char*)_TmpG1D + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt10_spec),.f4={(unsigned char*)_TmpG1E,(unsigned char*)_TmpG1E,(unsigned char*)_TmpG1E + 33U}};struct Cyc_List_List Cyc_opt10={(void*)& Cyc_opt10_tuple,0};
# 500
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt11_spec={3,& Cyc_pp_r};static char _TmpG1F[4U]="-pp";static char _TmpG20[1U]="";static char _TmpG21[47U]="pretty print the C code that Cyclone generates";struct _tuple14 Cyc_opt11_tuple={.f0={(unsigned char*)_TmpG1F,(unsigned char*)_TmpG1F,(unsigned char*)_TmpG1F + 4U},.f1=0,.f2={(unsigned char*)_TmpG20,(unsigned char*)_TmpG20,(unsigned char*)_TmpG20 + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt11_spec),.f4={(unsigned char*)_TmpG21,(unsigned char*)_TmpG21,(unsigned char*)_TmpG21 + 47U}};struct Cyc_List_List Cyc_opt11={(void*)& Cyc_opt11_tuple,0};
# 502
struct Cyc_Arg_Clear_spec_Arg_Spec_struct Cyc_opt12_spec={4,& Cyc_pp_r};static char _TmpG22[4U]="-up";static char _TmpG23[1U]="";static char _TmpG24[55U]="ugly print the C code that Cyclone generates (default)";struct _tuple14 Cyc_opt12_tuple={.f0={(unsigned char*)_TmpG22,(unsigned char*)_TmpG22,(unsigned char*)_TmpG22 + 4U},.f1=0,.f2={(unsigned char*)_TmpG23,(unsigned char*)_TmpG23,(unsigned char*)_TmpG23 + 1U},.f3=(void*)((struct Cyc_Arg_Clear_spec_Arg_Spec_struct*)& Cyc_opt12_spec),.f4={(unsigned char*)_TmpG24,(unsigned char*)_TmpG24,(unsigned char*)_TmpG24 + 55U}};struct Cyc_List_List Cyc_opt12={(void*)& Cyc_opt12_tuple,0};
# 504
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt13_spec={3,& Cyc_elim_se_r};static char _TmpG25[28U]="-elim-statement-expressions";static char _TmpG26[1U]="";static char _TmpG27[66U]="avoid statement expressions in C output (implies --inline-checks)";struct _tuple14 Cyc_opt13_tuple={.f0={(unsigned char*)_TmpG25,(unsigned char*)_TmpG25,(unsigned char*)_TmpG25 + 28U},.f1=0,.f2={(unsigned char*)_TmpG26,(unsigned char*)_TmpG26,(unsigned char*)_TmpG26 + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt13_spec),.f4={(unsigned char*)_TmpG27,(unsigned char*)_TmpG27,(unsigned char*)_TmpG27 + 66U}};struct Cyc_List_List Cyc_opt13={(void*)& Cyc_opt13_tuple,0};
# 507
struct Cyc_Arg_Clear_spec_Arg_Spec_struct Cyc_opt14_spec={4,& Cyc_elim_se_r};static char _TmpG28[31U]="-no-elim-statement-expressions";static char _TmpG29[1U]="";static char _TmpG2A[47U]="do not avoid statement expressions in C output";struct _tuple14 Cyc_opt14_tuple={.f0={(unsigned char*)_TmpG28,(unsigned char*)_TmpG28,(unsigned char*)_TmpG28 + 31U},.f1=0,.f2={(unsigned char*)_TmpG29,(unsigned char*)_TmpG29,(unsigned char*)_TmpG29 + 1U},.f3=(void*)((struct Cyc_Arg_Clear_spec_Arg_Spec_struct*)& Cyc_opt14_spec),.f4={(unsigned char*)_TmpG2A,(unsigned char*)_TmpG2A,(unsigned char*)_TmpG2A + 47U}};struct Cyc_List_List Cyc_opt14={(void*)& Cyc_opt14_tuple,0};
# 509
struct Cyc_Arg_String_spec_Arg_Spec_struct Cyc_opt15_spec={5,Cyc_set_c_compiler};static char _TmpG2B[8U]="-c-comp";static char _TmpG2C[12U]=" <compiler>";static char _TmpG2D[40U]="produce C output for the given compiler";struct _tuple14 Cyc_opt15_tuple={.f0={(unsigned char*)_TmpG2B,(unsigned char*)_TmpG2B,(unsigned char*)_TmpG2B + 8U},.f1=0,.f2={(unsigned char*)_TmpG2C,(unsigned char*)_TmpG2C,(unsigned char*)_TmpG2C + 12U},.f3=(void*)((struct Cyc_Arg_String_spec_Arg_Spec_struct*)& Cyc_opt15_spec),.f4={(unsigned char*)_TmpG2D,(unsigned char*)_TmpG2D,(unsigned char*)_TmpG2D + 40U}};struct Cyc_List_List Cyc_opt15={(void*)& Cyc_opt15_tuple,0};
# 511
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt16_spec={0,Cyc_clear_lineno};static char _TmpG2E[11U]="--nolineno";static char _TmpG2F[1U]="";static char _TmpG30[63U]="don't generate line numbers for debugging (automatic with -pp)";struct _tuple14 Cyc_opt16_tuple={.f0={(unsigned char*)_TmpG2E,(unsigned char*)_TmpG2E,(unsigned char*)_TmpG2E + 11U},.f1=0,.f2={(unsigned char*)_TmpG2F,(unsigned char*)_TmpG2F,(unsigned char*)_TmpG2F + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt16_spec),.f4={(unsigned char*)_TmpG30,(unsigned char*)_TmpG30,(unsigned char*)_TmpG30 + 63U}};struct Cyc_List_List Cyc_opt16={(void*)& Cyc_opt16_tuple,0};
# 513
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt17_spec={0,Cyc_set_nocyc};static char _TmpG31[7U]="-nocyc";static char _TmpG32[1U]="";static char _TmpG33[33U]="don't add implicit namespace Cyc";struct _tuple14 Cyc_opt17_tuple={.f0={(unsigned char*)_TmpG31,(unsigned char*)_TmpG31,(unsigned char*)_TmpG31 + 7U},.f1=0,.f2={(unsigned char*)_TmpG32,(unsigned char*)_TmpG32,(unsigned char*)_TmpG32 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt17_spec),.f4={(unsigned char*)_TmpG33,(unsigned char*)_TmpG33,(unsigned char*)_TmpG33 + 33U}};struct Cyc_List_List Cyc_opt17={(void*)& Cyc_opt17_tuple,0};
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt18_spec={3,& Cyc_noshake_r};static char _TmpG34[16U]="-noremoveunused";static char _TmpG35[1U]="";static char _TmpG36[49U]="don't remove externed variables that aren't used";struct _tuple14 Cyc_opt18_tuple={.f0={(unsigned char*)_TmpG34,(unsigned char*)_TmpG34,(unsigned char*)_TmpG34 + 16U},.f1=0,.f2={(unsigned char*)_TmpG35,(unsigned char*)_TmpG35,(unsigned char*)_TmpG35 + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt18_spec),.f4={(unsigned char*)_TmpG36,(unsigned char*)_TmpG36,(unsigned char*)_TmpG36 + 49U}};struct Cyc_List_List Cyc_opt18={(void*)& Cyc_opt18_tuple,0};
# 516
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt19_spec={3,& Cyc_Flags_noexpand_r};static char _TmpG37[18U]="-noexpandtypedefs";static char _TmpG38[1U]="";static char _TmpG39[41U]="don't expand typedefs in pretty printing";struct _tuple14 Cyc_opt19_tuple={.f0={(unsigned char*)_TmpG37,(unsigned char*)_TmpG37,(unsigned char*)_TmpG37 + 18U},.f1=0,.f2={(unsigned char*)_TmpG38,(unsigned char*)_TmpG38,(unsigned char*)_TmpG38 + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt19_spec),.f4={(unsigned char*)_TmpG39,(unsigned char*)_TmpG39,(unsigned char*)_TmpG39 + 41U}};struct Cyc_List_List Cyc_opt19={(void*)& Cyc_opt19_tuple,0};
# 518
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt20_spec={3,& Cyc_print_all_tvars_r};static char _TmpG3A[15U]="-printalltvars";static char _TmpG3B[1U]="";static char _TmpG3C[57U]="print all type variables (even implicit default effects)";struct _tuple14 Cyc_opt20_tuple={.f0={(unsigned char*)_TmpG3A,(unsigned char*)_TmpG3A,(unsigned char*)_TmpG3A + 15U},.f1=0,.f2={(unsigned char*)_TmpG3B,(unsigned char*)_TmpG3B,(unsigned char*)_TmpG3B + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt20_spec),.f4={(unsigned char*)_TmpG3C,(unsigned char*)_TmpG3C,(unsigned char*)_TmpG3C + 57U}};struct Cyc_List_List Cyc_opt20={(void*)& Cyc_opt20_tuple,0};
# 520
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt21_spec={3,& Cyc_print_all_kinds_r};static char _TmpG3D[15U]="-printallkinds";static char _TmpG3E[1U]="";static char _TmpG3F[37U]="always print kinds of type variables";struct _tuple14 Cyc_opt21_tuple={.f0={(unsigned char*)_TmpG3D,(unsigned char*)_TmpG3D,(unsigned char*)_TmpG3D + 15U},.f1=0,.f2={(unsigned char*)_TmpG3E,(unsigned char*)_TmpG3E,(unsigned char*)_TmpG3E + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt21_spec),.f4={(unsigned char*)_TmpG3F,(unsigned char*)_TmpG3F,(unsigned char*)_TmpG3F + 37U}};struct Cyc_List_List Cyc_opt21={(void*)& Cyc_opt21_tuple,0};
# 522
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt22_spec={3,& Cyc_print_full_evars_r};static char _TmpG40[16U]="-printfullevars";static char _TmpG41[1U]="";static char _TmpG42[50U]="print full information for evars (type debugging)";struct _tuple14 Cyc_opt22_tuple={.f0={(unsigned char*)_TmpG40,(unsigned char*)_TmpG40,(unsigned char*)_TmpG40 + 16U},.f1=0,.f2={(unsigned char*)_TmpG41,(unsigned char*)_TmpG41,(unsigned char*)_TmpG41 + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt22_spec),.f4={(unsigned char*)_TmpG42,(unsigned char*)_TmpG42,(unsigned char*)_TmpG42 + 50U}};struct Cyc_List_List Cyc_opt22={(void*)& Cyc_opt22_tuple,0};
# 524
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt23_spec={3,& Cyc_print_all_effects_r};static char _TmpG43[17U]="-printalleffects";static char _TmpG44[1U]="";static char _TmpG45[45U]="print effects for functions (type debugging)";struct _tuple14 Cyc_opt23_tuple={.f0={(unsigned char*)_TmpG43,(unsigned char*)_TmpG43,(unsigned char*)_TmpG43 + 17U},.f1=0,.f2={(unsigned char*)_TmpG44,(unsigned char*)_TmpG44,(unsigned char*)_TmpG44 + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt23_spec),.f4={(unsigned char*)_TmpG45,(unsigned char*)_TmpG45,(unsigned char*)_TmpG45 + 45U}};struct Cyc_List_List Cyc_opt23={(void*)& Cyc_opt23_tuple,0};
# 526
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt24_spec={3,& Cyc_Flags_warn_bounds_checks};static char _TmpG46[18U]="-warnboundschecks";static char _TmpG47[1U]="";static char _TmpG48[44U]="warn when bounds checks can't be eliminated";struct _tuple14 Cyc_opt24_tuple={.f0={(unsigned char*)_TmpG46,(unsigned char*)_TmpG46,(unsigned char*)_TmpG46 + 18U},.f1=0,.f2={(unsigned char*)_TmpG47,(unsigned char*)_TmpG47,(unsigned char*)_TmpG47 + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt24_spec),.f4={(unsigned char*)_TmpG48,(unsigned char*)_TmpG48,(unsigned char*)_TmpG48 + 44U}};struct Cyc_List_List Cyc_opt24={(void*)& Cyc_opt24_tuple,0};
# 528
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt25_spec={3,& Cyc_Flags_warn_all_null_deref};static char _TmpG49[16U]="-warnnullchecks";static char _TmpG4A[1U]="";static char _TmpG4B[45U]="warn when any null check can't be eliminated";struct _tuple14 Cyc_opt25_tuple={.f0={(unsigned char*)_TmpG49,(unsigned char*)_TmpG49,(unsigned char*)_TmpG49 + 16U},.f1=0,.f2={(unsigned char*)_TmpG4A,(unsigned char*)_TmpG4A,(unsigned char*)_TmpG4A + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt25_spec),.f4={(unsigned char*)_TmpG4B,(unsigned char*)_TmpG4B,(unsigned char*)_TmpG4B + 45U}};struct Cyc_List_List Cyc_opt25={(void*)& Cyc_opt25_tuple,0};
# 530
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt26_spec={3,& Cyc_Flags_warn_alias_coerce};static char _TmpG4C[19U]="-warnaliascoercion";static char _TmpG4D[1U]="";static char _TmpG4E[41U]="warn when any alias coercion is inserted";struct _tuple14 Cyc_opt26_tuple={.f0={(unsigned char*)_TmpG4C,(unsigned char*)_TmpG4C,(unsigned char*)_TmpG4C + 19U},.f1=0,.f2={(unsigned char*)_TmpG4D,(unsigned char*)_TmpG4D,(unsigned char*)_TmpG4D + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt26_spec),.f4={(unsigned char*)_TmpG4E,(unsigned char*)_TmpG4E,(unsigned char*)_TmpG4E + 41U}};struct Cyc_List_List Cyc_opt26={(void*)& Cyc_opt26_tuple,0};
# 532
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt27_spec={3,& Cyc_Flags_warn_region_coerce};static char _TmpG4F[18U]="-warnregioncoerce";static char _TmpG50[1U]="";static char _TmpG51[42U]="warn when any region coercion is inserted";struct _tuple14 Cyc_opt27_tuple={.f0={(unsigned char*)_TmpG4F,(unsigned char*)_TmpG4F,(unsigned char*)_TmpG4F + 18U},.f1=0,.f2={(unsigned char*)_TmpG50,(unsigned char*)_TmpG50,(unsigned char*)_TmpG50 + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt27_spec),.f4={(unsigned char*)_TmpG51,(unsigned char*)_TmpG51,(unsigned char*)_TmpG51 + 42U}};struct Cyc_List_List Cyc_opt27={(void*)& Cyc_opt27_tuple,0};
# 534
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt28_spec={3,& Cyc_Flags_no_register};static char _TmpG52[12U]="-noregister";static char _TmpG53[1U]="";static char _TmpG54[39U]="treat register storage class as public";struct _tuple14 Cyc_opt28_tuple={.f0={(unsigned char*)_TmpG52,(unsigned char*)_TmpG52,(unsigned char*)_TmpG52 + 12U},.f1=0,.f2={(unsigned char*)_TmpG53,(unsigned char*)_TmpG53,(unsigned char*)_TmpG53 + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt28_spec),.f4={(unsigned char*)_TmpG54,(unsigned char*)_TmpG54,(unsigned char*)_TmpG54 + 39U}};struct Cyc_List_List Cyc_opt28={(void*)& Cyc_opt28_tuple,0};
# 536
struct Cyc_Arg_Clear_spec_Arg_Spec_struct Cyc_opt29_spec={4,& Cyc_Position_use_gcc_style_location};static char _TmpG55[18U]="-detailedlocation";static char _TmpG56[1U]="";static char _TmpG57[58U]="try to give more detailed location information for errors";struct _tuple14 Cyc_opt29_tuple={.f0={(unsigned char*)_TmpG55,(unsigned char*)_TmpG55,(unsigned char*)_TmpG55 + 18U},.f1=0,.f2={(unsigned char*)_TmpG56,(unsigned char*)_TmpG56,(unsigned char*)_TmpG56 + 1U},.f3=(void*)((struct Cyc_Arg_Clear_spec_Arg_Spec_struct*)& Cyc_opt29_spec),.f4={(unsigned char*)_TmpG57,(unsigned char*)_TmpG57,(unsigned char*)_TmpG57 + 58U}};struct Cyc_List_List Cyc_opt29={(void*)& Cyc_opt29_tuple,0};
# 538
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt30_spec={0,Cyc_set_port_c_code};static char _TmpG58[6U]="-port";static char _TmpG59[1U]="";static char _TmpG5A[38U]="suggest how to port C code to Cyclone";struct _tuple14 Cyc_opt30_tuple={.f0={(unsigned char*)_TmpG58,(unsigned char*)_TmpG58,(unsigned char*)_TmpG58 + 6U},.f1=0,.f2={(unsigned char*)_TmpG59,(unsigned char*)_TmpG59,(unsigned char*)_TmpG59 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt30_spec),.f4={(unsigned char*)_TmpG5A,(unsigned char*)_TmpG5A,(unsigned char*)_TmpG5A + 38U}};struct Cyc_List_List Cyc_opt30={(void*)& Cyc_opt30_tuple,0};
# 540
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt31_spec={3,& Cyc_Flags_no_regions};static char _TmpG5B[11U]="-noregions";static char _TmpG5C[1U]="";static char _TmpG5D[39U]="generate code that doesn't use regions";struct _tuple14 Cyc_opt31_tuple={.f0={(unsigned char*)_TmpG5B,(unsigned char*)_TmpG5B,(unsigned char*)_TmpG5B + 11U},.f1=0,.f2={(unsigned char*)_TmpG5C,(unsigned char*)_TmpG5C,(unsigned char*)_TmpG5C + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt31_spec),.f4={(unsigned char*)_TmpG5D,(unsigned char*)_TmpG5D,(unsigned char*)_TmpG5D + 39U}};struct Cyc_List_List Cyc_opt31={(void*)& Cyc_opt31_tuple,0};
# 542
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt32_spec={0,Cyc_set_many_errors};static char _TmpG5E[13U]="--manyerrors";static char _TmpG5F[1U]="";static char _TmpG60[36U]="don't stop after only a few errors.";struct _tuple14 Cyc_opt32_tuple={.f0={(unsigned char*)_TmpG5E,(unsigned char*)_TmpG5E,(unsigned char*)_TmpG5E + 13U},.f1=0,.f2={(unsigned char*)_TmpG5F,(unsigned char*)_TmpG5F,(unsigned char*)_TmpG5F + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt32_spec),.f4={(unsigned char*)_TmpG60,(unsigned char*)_TmpG60,(unsigned char*)_TmpG60 + 36U}};struct Cyc_List_List Cyc_opt32={(void*)& Cyc_opt32_tuple,0};
# 544
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt33_spec={3,& Cyc_Flags_print_parser_state_and_token};static char _TmpG61[13U]="--parsestate";static char _TmpG62[1U]="";static char _TmpG63[50U]="print the parse state and token on a syntax error";struct _tuple14 Cyc_opt33_tuple={.f0={(unsigned char*)_TmpG61,(unsigned char*)_TmpG61,(unsigned char*)_TmpG61 + 13U},.f1=0,.f2={(unsigned char*)_TmpG62,(unsigned char*)_TmpG62,(unsigned char*)_TmpG62 + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt33_spec),.f4={(unsigned char*)_TmpG63,(unsigned char*)_TmpG63,(unsigned char*)_TmpG63 + 50U}};struct Cyc_List_List Cyc_opt33={(void*)& Cyc_opt33_tuple,0};
# 546
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt34_spec={0,Cyc_print_options};static char _TmpG64[6U]="-help";static char _TmpG65[1U]="";static char _TmpG66[32U]="print out the available options";struct _tuple14 Cyc_opt34_tuple={.f0={(unsigned char*)_TmpG64,(unsigned char*)_TmpG64,(unsigned char*)_TmpG64 + 6U},.f1=0,.f2={(unsigned char*)_TmpG65,(unsigned char*)_TmpG65,(unsigned char*)_TmpG65 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt34_spec),.f4={(unsigned char*)_TmpG66,(unsigned char*)_TmpG66,(unsigned char*)_TmpG66 + 32U}};struct Cyc_List_List Cyc_opt34={(void*)& Cyc_opt34_tuple,0};
# 548
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt35_spec={0,Cyc_print_options};static char _TmpG67[7U]="-usage";static char _TmpG68[1U]="";static char _TmpG69[32U]="print out the available options";struct _tuple14 Cyc_opt35_tuple={.f0={(unsigned char*)_TmpG67,(unsigned char*)_TmpG67,(unsigned char*)_TmpG67 + 7U},.f1=0,.f2={(unsigned char*)_TmpG68,(unsigned char*)_TmpG68,(unsigned char*)_TmpG68 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt35_spec),.f4={(unsigned char*)_TmpG69,(unsigned char*)_TmpG69,(unsigned char*)_TmpG69 + 32U}};struct Cyc_List_List Cyc_opt35={(void*)& Cyc_opt35_tuple,0};
# 550
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt36_spec={0,Cyc_set_notoseqc};static char _TmpG6A[10U]="-no-seq-c";static char _TmpG6B[1U]="";static char _TmpG6C[71U]="do not force left-to-right evaluation order of generated code (unsafe)";struct _tuple14 Cyc_opt36_tuple={.f0={(unsigned char*)_TmpG6A,(unsigned char*)_TmpG6A,(unsigned char*)_TmpG6A + 10U},.f1=0,.f2={(unsigned char*)_TmpG6B,(unsigned char*)_TmpG6B,(unsigned char*)_TmpG6B + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt36_spec),.f4={(unsigned char*)_TmpG6C,(unsigned char*)_TmpG6C,(unsigned char*)_TmpG6C + 71U}};struct Cyc_List_List Cyc_opt36={(void*)& Cyc_opt36_tuple,0};
# 552
struct Cyc_Arg_Clear_spec_Arg_Spec_struct Cyc_opt37_spec={4,& Cyc_vcgen_r};static char _TmpG6D[10U]="--novcgen";static char _TmpG6E[1U]="";static char _TmpG6F[39U]="do not compute verification-conditions";struct _tuple14 Cyc_opt37_tuple={.f0={(unsigned char*)_TmpG6D,(unsigned char*)_TmpG6D,(unsigned char*)_TmpG6D + 10U},.f1=0,.f2={(unsigned char*)_TmpG6E,(unsigned char*)_TmpG6E,(unsigned char*)_TmpG6E + 1U},.f3=(void*)((struct Cyc_Arg_Clear_spec_Arg_Spec_struct*)& Cyc_opt37_spec),.f4={(unsigned char*)_TmpG6F,(unsigned char*)_TmpG6F,(unsigned char*)_TmpG6F + 39U}};struct Cyc_List_List Cyc_opt37={(void*)& Cyc_opt37_tuple,0};
# 554
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt38_spec={0,Cyc_Cifc_set_inst_tvar};static char _TmpG70[17U]="--cifc-inst-tvar";static char _TmpG71[1U]="";static char _TmpG72[59U]="instantiate type variables instead of introducing new ones";struct _tuple14 Cyc_opt38_tuple={.f0={(unsigned char*)_TmpG70,(unsigned char*)_TmpG70,(unsigned char*)_TmpG70 + 17U},.f1=0,.f2={(unsigned char*)_TmpG71,(unsigned char*)_TmpG71,(unsigned char*)_TmpG71 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt38_spec),.f4={(unsigned char*)_TmpG72,(unsigned char*)_TmpG72,(unsigned char*)_TmpG72 + 59U}};struct Cyc_List_List Cyc_opt38={(void*)& Cyc_opt38_tuple,0};
# 556
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt39_spec={0,Cyc_Flags_set_crgnonly};static char _TmpG73[16U]="-stopafter-crgn";static char _TmpG74[1U]="";static char _TmpG75[19U]="stop after currrgn";struct _tuple14 Cyc_opt39_tuple={.f0={(unsigned char*)_TmpG73,(unsigned char*)_TmpG73,(unsigned char*)_TmpG73 + 16U},.f1=0,.f2={(unsigned char*)_TmpG74,(unsigned char*)_TmpG74,(unsigned char*)_TmpG74 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt39_spec),.f4={(unsigned char*)_TmpG75,(unsigned char*)_TmpG75,(unsigned char*)_TmpG75 + 19U}};struct Cyc_List_List Cyc_opt39={(void*)& Cyc_opt39_tuple,0};
# 558
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt40_spec={3,& Cyc_Flags_allpaths};static char _TmpG76[11U]="--allpaths";static char _TmpG77[1U]="";static char _TmpG78[62U]="analyze all forward paths in verification-condition generator";struct _tuple14 Cyc_opt40_tuple={.f0={(unsigned char*)_TmpG76,(unsigned char*)_TmpG76,(unsigned char*)_TmpG76 + 11U},.f1=0,.f2={(unsigned char*)_TmpG77,(unsigned char*)_TmpG77,(unsigned char*)_TmpG77 + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt40_spec),.f4={(unsigned char*)_TmpG78,(unsigned char*)_TmpG78,(unsigned char*)_TmpG78 + 62U}};struct Cyc_List_List Cyc_opt40={(void*)& Cyc_opt40_tuple,0};
# 560
struct Cyc_Arg_Clear_spec_Arg_Spec_struct Cyc_opt41_spec={4,& Cyc_Flags_allpaths};static char _TmpG79[13U]="--mergepaths";static char _TmpG7A[1U]="";static char _TmpG7B[71U]="merge paths at join-points within the verification-condition generator";struct _tuple14 Cyc_opt41_tuple={.f0={(unsigned char*)_TmpG79,(unsigned char*)_TmpG79,(unsigned char*)_TmpG79 + 13U},.f1=0,.f2={(unsigned char*)_TmpG7A,(unsigned char*)_TmpG7A,(unsigned char*)_TmpG7A + 1U},.f3=(void*)((struct Cyc_Arg_Clear_spec_Arg_Spec_struct*)& Cyc_opt41_spec),.f4={(unsigned char*)_TmpG7B,(unsigned char*)_TmpG7B,(unsigned char*)_TmpG7B + 71U}};struct Cyc_List_List Cyc_opt41={(void*)& Cyc_opt41_tuple,0};
# 562
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt42_spec={0,Cyc_set_noreaps};static char _TmpG7C[9U]="-noreaps";static char _TmpG7D[1U]="";static char _TmpG7E[37U]="generate code that doesn't use reaps";struct _tuple14 Cyc_opt42_tuple={.f0={(unsigned char*)_TmpG7C,(unsigned char*)_TmpG7C,(unsigned char*)_TmpG7C + 9U},.f1=0,.f2={(unsigned char*)_TmpG7D,(unsigned char*)_TmpG7D,(unsigned char*)_TmpG7D + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt42_spec),.f4={(unsigned char*)_TmpG7E,(unsigned char*)_TmpG7E,(unsigned char*)_TmpG7E + 37U}};struct Cyc_List_List Cyc_opt42={(void*)& Cyc_opt42_tuple,0};
# 564
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt43_spec={3,& Cyc_Flags_print_unprovable};static char _TmpG7F[13U]="--unprovable";static char _TmpG80[1U]="";static char _TmpG81[38U]="print assertions that were unprovable";struct _tuple14 Cyc_opt43_tuple={.f0={(unsigned char*)_TmpG7F,(unsigned char*)_TmpG7F,(unsigned char*)_TmpG7F + 13U},.f1=0,.f2={(unsigned char*)_TmpG80,(unsigned char*)_TmpG80,(unsigned char*)_TmpG80 + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt43_spec),.f4={(unsigned char*)_TmpG81,(unsigned char*)_TmpG81,(unsigned char*)_TmpG81 + 38U}};struct Cyc_List_List Cyc_opt43={(void*)& Cyc_opt43_tuple,0};
# 566
struct Cyc_Arg_Int_spec_Arg_Spec_struct Cyc_opt44_spec={6,Cyc_set_max_vc_summary};static char _TmpG82[17U]="--max_vc_summary";static char _TmpG83[1U]="";static char _TmpG84[62U]="controls the maximum size of post-conditions inlined by vcgen";struct _tuple14 Cyc_opt44_tuple={.f0={(unsigned char*)_TmpG82,(unsigned char*)_TmpG82,(unsigned char*)_TmpG82 + 17U},.f1=0,.f2={(unsigned char*)_TmpG83,(unsigned char*)_TmpG83,(unsigned char*)_TmpG83 + 1U},.f3=(void*)((struct Cyc_Arg_Int_spec_Arg_Spec_struct*)& Cyc_opt44_spec),.f4={(unsigned char*)_TmpG84,(unsigned char*)_TmpG84,(unsigned char*)_TmpG84 + 62U}};struct Cyc_List_List Cyc_opt44={(void*)& Cyc_opt44_tuple,0};
# 568
struct Cyc_Arg_Int_spec_Arg_Spec_struct Cyc_opt45_spec={6,Cyc_set_max_vc_paths};static char _TmpG85[15U]="--max_vc_paths";static char _TmpG86[1U]="";static char _TmpG87[67U]="controls the maximum number of paths explored by constraint solver";struct _tuple14 Cyc_opt45_tuple={.f0={(unsigned char*)_TmpG85,(unsigned char*)_TmpG85,(unsigned char*)_TmpG85 + 15U},.f1=0,.f2={(unsigned char*)_TmpG86,(unsigned char*)_TmpG86,(unsigned char*)_TmpG86 + 1U},.f3=(void*)((struct Cyc_Arg_Int_spec_Arg_Spec_struct*)& Cyc_opt45_spec),.f4={(unsigned char*)_TmpG87,(unsigned char*)_TmpG87,(unsigned char*)_TmpG87 + 67U}};struct Cyc_List_List Cyc_opt45={(void*)& Cyc_opt45_tuple,0};
# 570
struct Cyc_Arg_Int_spec_Arg_Spec_struct Cyc_opt46_spec={6,Cyc_set_max_vc_term_size};static char _TmpG88[19U]="--max_vc_term_size";static char _TmpG89[1U]="";static char _TmpG8A[71U]="controls the maximum size of terms considered by the constraint solver";struct _tuple14 Cyc_opt46_tuple={.f0={(unsigned char*)_TmpG88,(unsigned char*)_TmpG88,(unsigned char*)_TmpG88 + 19U},.f1=0,.f2={(unsigned char*)_TmpG89,(unsigned char*)_TmpG89,(unsigned char*)_TmpG89 + 1U},.f3=(void*)((struct Cyc_Arg_Int_spec_Arg_Spec_struct*)& Cyc_opt46_spec),.f4={(unsigned char*)_TmpG8A,(unsigned char*)_TmpG8A,(unsigned char*)_TmpG8A + 71U}};struct Cyc_List_List Cyc_opt46={(void*)& Cyc_opt46_tuple,0};
# 572
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt47_spec={3,& Cyc_Flags_warn_assert};static char _TmpG8B[13U]="--warnassert";static char _TmpG8C[1U]="";static char _TmpG8D[43U]="warn when an assert might fail at run-time";struct _tuple14 Cyc_opt47_tuple={.f0={(unsigned char*)_TmpG8B,(unsigned char*)_TmpG8B,(unsigned char*)_TmpG8B + 13U},.f1=0,.f2={(unsigned char*)_TmpG8C,(unsigned char*)_TmpG8C,(unsigned char*)_TmpG8C + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt47_spec),.f4={(unsigned char*)_TmpG8D,(unsigned char*)_TmpG8D,(unsigned char*)_TmpG8D + 43U}};struct Cyc_List_List Cyc_opt47={(void*)& Cyc_opt47_tuple,0};
# 574
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt48_spec={3,& Cyc_nolower_r};static char _TmpG8E[11U]="--no-lower";static char _TmpG8F[1U]="";static char _TmpG90[24U]="do not lower the C code";struct _tuple14 Cyc_opt48_tuple={.f0={(unsigned char*)_TmpG8E,(unsigned char*)_TmpG8E,(unsigned char*)_TmpG8E + 11U},.f1=0,.f2={(unsigned char*)_TmpG8F,(unsigned char*)_TmpG8F,(unsigned char*)_TmpG8F + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt48_spec),.f4={(unsigned char*)_TmpG90,(unsigned char*)_TmpG90,(unsigned char*)_TmpG90 + 24U}};struct Cyc_List_List Cyc_opt48={(void*)& Cyc_opt48_tuple,0};
struct Cyc_Arg_Set_spec_Arg_Spec_struct Cyc_opt49_spec={3,& Cyc_Flags_better_widen};static char _TmpG91[15U]="--better-widen";static char _TmpG92[1U]="";static char _TmpG93[55U]="construct better loop invariants within vcgen analysis";struct _tuple14 Cyc_opt49_tuple={.f0={(unsigned char*)_TmpG91,(unsigned char*)_TmpG91,(unsigned char*)_TmpG91 + 15U},.f1=0,.f2={(unsigned char*)_TmpG92,(unsigned char*)_TmpG92,(unsigned char*)_TmpG92 + 1U},.f3=(void*)((struct Cyc_Arg_Set_spec_Arg_Spec_struct*)& Cyc_opt49_spec),.f4={(unsigned char*)_TmpG93,(unsigned char*)_TmpG93,(unsigned char*)_TmpG93 + 55U}};struct Cyc_List_List Cyc_opt49={(void*)& Cyc_opt49_tuple,0};
# 577
struct Cyc_Arg_Unit_spec_Arg_Spec_struct Cyc_opt50_spec={0,Cyc_set_interproc};static char _TmpG94[6U]="--inf";static char _TmpG95[1U]="";static char _TmpG96[35U]="Use interprocedural type inference";struct _tuple14 Cyc_opt50_tuple={.f0={(unsigned char*)_TmpG94,(unsigned char*)_TmpG94,(unsigned char*)_TmpG94 + 6U},.f1=0,.f2={(unsigned char*)_TmpG95,(unsigned char*)_TmpG95,(unsigned char*)_TmpG95 + 1U},.f3=(void*)((struct Cyc_Arg_Unit_spec_Arg_Spec_struct*)& Cyc_opt50_spec),.f4={(unsigned char*)_TmpG96,(unsigned char*)_TmpG96,(unsigned char*)_TmpG96 + 35U}};struct Cyc_List_List Cyc_opt50={(void*)& Cyc_opt50_tuple,0};
# 580
struct Cyc_List_List*Cyc_global_options[50U]={(struct Cyc_List_List*)& Cyc_opt1,(struct Cyc_List_List*)& Cyc_opt2,(struct Cyc_List_List*)& Cyc_opt3,(struct Cyc_List_List*)& Cyc_opt4,(struct Cyc_List_List*)& Cyc_opt5,(struct Cyc_List_List*)& Cyc_opt6,(struct Cyc_List_List*)& Cyc_opt7,(struct Cyc_List_List*)& Cyc_opt8,(struct Cyc_List_List*)& Cyc_opt9,(struct Cyc_List_List*)& Cyc_opt10,(struct Cyc_List_List*)& Cyc_opt11,(struct Cyc_List_List*)& Cyc_opt12,(struct Cyc_List_List*)& Cyc_opt13,(struct Cyc_List_List*)& Cyc_opt14,(struct Cyc_List_List*)& Cyc_opt15,(struct Cyc_List_List*)& Cyc_opt16,(struct Cyc_List_List*)& Cyc_opt17,(struct Cyc_List_List*)& Cyc_opt18,(struct Cyc_List_List*)& Cyc_opt19,(struct Cyc_List_List*)& Cyc_opt20,(struct Cyc_List_List*)& Cyc_opt21,(struct Cyc_List_List*)& Cyc_opt22,(struct Cyc_List_List*)& Cyc_opt23,(struct Cyc_List_List*)& Cyc_opt24,(struct Cyc_List_List*)& Cyc_opt25,(struct Cyc_List_List*)& Cyc_opt26,(struct Cyc_List_List*)& Cyc_opt27,(struct Cyc_List_List*)& Cyc_opt28,(struct Cyc_List_List*)& Cyc_opt29,(struct Cyc_List_List*)& Cyc_opt30,(struct Cyc_List_List*)& Cyc_opt31,(struct Cyc_List_List*)& Cyc_opt32,(struct Cyc_List_List*)& Cyc_opt33,(struct Cyc_List_List*)& Cyc_opt34,(struct Cyc_List_List*)& Cyc_opt35,(struct Cyc_List_List*)& Cyc_opt36,(struct Cyc_List_List*)& Cyc_opt37,(struct Cyc_List_List*)& Cyc_opt38,(struct Cyc_List_List*)& Cyc_opt39,(struct Cyc_List_List*)& Cyc_opt40,(struct Cyc_List_List*)& Cyc_opt41,(struct Cyc_List_List*)& Cyc_opt42,(struct Cyc_List_List*)& Cyc_opt43,(struct Cyc_List_List*)& Cyc_opt44,(struct Cyc_List_List*)& Cyc_opt45,(struct Cyc_List_List*)& Cyc_opt46,(struct Cyc_List_List*)& Cyc_opt47,(struct Cyc_List_List*)& Cyc_opt48,(struct Cyc_List_List*)& Cyc_opt49,(struct Cyc_List_List*)& Cyc_opt50};
# 588
void Cyc_print_options (void){struct Cyc_List_List**_T0;struct Cyc_List_List*_T1;struct _fat_ptr _T2;_T0= Cyc_global_options;_T1= _T0[0];_T2= _tag_fat("<program.cyc>",sizeof(char),14U);Cyc_Arg_usage(_T1,_T2);}
# 591
int Cyc_main(int argc,struct _fat_ptr argv){int _T0;unsigned _T1;struct Cyc_List_List**_T2;int _T3;struct Cyc_List_List*_T4;struct Cyc_List_List**_T5;int _T6;struct Cyc_List_List**_T7;struct Cyc_List_List*_T8;struct _fat_ptr _T9;struct _fat_ptr _TA;struct Cyc___cycFILE*_TB;struct _fat_ptr _TC;struct _fat_ptr _TD;struct _handler_cons*_TE;int _TF;struct Cyc_List_List*_T10;void*_T11;struct _fat_ptr*_T12;struct _fat_ptr _T13;long _T14;struct Cyc_List_List*_T15;void*_T16;long _T17;int _T18;long _T19;
# 594
struct _fat_ptr optstring=_tag_fat("Options:",sizeof(char),9U);{
# 596
int i=1;_TL83: _T0= i;_T1= (unsigned)_T0;if(_T1 < 50U)goto _TL81;else{goto _TL82;}
_TL81: _T2= Cyc_global_options;_T3= i - 1;_T4= _T2[_T3];_T5= Cyc_global_options;_T6= i;_T4->tl= _T5[_T6];
# 596
i= i + 1;goto _TL83;_TL82:;}_T7= Cyc_global_options;{
# 598
struct Cyc_List_List*options=_T7[0];
# 601
Cyc_Arg_current= 0;_T8= options;_T9= optstring;_TA= argv;
Cyc_Arg_parse(_T8,Cyc_add_other,Cyc_add_other_flag,_T9,_TA);
if(Cyc_cyclone_files!=0)goto _TL84;_TB= Cyc_stderr;_TC= 
_tag_fat("missing file\n",sizeof(char),14U);_TD= _tag_fat(0U,sizeof(void*),0);Cyc_fprintf(_TB,_TC,_TD);
exit(1);goto _TL85;_TL84: _TL85:{struct _handler_cons _T1A;_TE= & _T1A;_push_handler(_TE);{int _T1B=0;_TF= setjmp(_T1A.handler);if(!_TF)goto _TL86;_T1B= 1;goto _TL87;_TL86: _TL87: if(_T1B)goto _TL88;else{goto _TL8A;}_TL8A:{
# 610
struct Cyc_List_List*l=Cyc_List_rev(Cyc_cyclone_files);_TL8E: if(l!=0)goto _TL8C;else{goto _TL8D;}
_TL8C: _T10= l;_T11= _T10->hd;_T12= (struct _fat_ptr*)_T11;_T13= *_T12;Cyc_process_file(_T13);_T14= Cyc_compile_failure;
if(!_T14)goto _TL8F;{int _T1C=1;_npop_handler(0);return _T1C;}_TL8F: _T15= l;
# 610
l= _T15->tl;goto _TL8E;_TL8D:;}_pop_handler();goto _TL89;_TL88: _T16= Cyc_Core_get_exn_thrown();{void*_T1C=(void*)_T16;void*_T1D;_T1D= _T1C;{void*x=_T1D;_T17= Cyc_compile_failure;
# 617
if(!_T17)goto _TL91;
return 1;_TL91:
 Cyc_Core_rethrow(x);};}_TL89:;}}_T19= Cyc_compile_failure;
# 622
if(!_T19)goto _TL93;_T18= 1;goto _TL94;_TL93: _T18= 0;_TL94: return _T18;}}
