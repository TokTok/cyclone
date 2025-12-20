#include <cyc_include.h>

# 330 "bazel-out/k8-fastbuild/bin/cyclone/library/std/libc/signal.h"
 extern int kill(int,int);struct Cyc_String_pa_PrintArg_struct{int tag;struct _fat_ptr f1;};struct Cyc_Int_pa_PrintArg_struct{int tag;unsigned long f1;};
# 127 "bazel-out/k8-fastbuild/bin/cyclone/library/std/libc/stdio.h"
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
# 231
extern void perror(const char*);
# 235
extern int Cyc_printf(struct _fat_ptr,struct _fat_ptr);
# 241
extern int putchar(int);
# 277
extern int Cyc_sprintf(struct _fat_ptr,struct _fat_ptr,struct _fat_ptr);
# 155 "bazel-out/k8-fastbuild/bin/cyclone/library/std/libc/stdlib.h"
extern void exit(int);
# 110 "bazel-out/k8-fastbuild/bin/cyclone/library/std/libc/sys/wait.h"
extern int waitpid(int,int*,int);extern char Cyc_Core_Failure[8U];struct Cyc_Core_Failure_exn_struct{char*tag;struct _fat_ptr f1;};
# 648 "bazel-out/k8-fastbuild/bin/cyclone/library/std/libc/unistd.h"
extern int close(int);
# 657
extern int dup2(int,int);
# 675
extern int execvp(const char*,const char**);
# 685
extern int fork (void);
# 724
extern int getpid (void);
# 753
extern int pipe(int*);
# 761
extern long Cyc_read(int,struct _fat_ptr,unsigned long);
# 814
extern long Cyc_write(int,struct _fat_ptr,unsigned long);
# 33 "cyclone/library/std/execinfo.cyc"
extern int backtrace(int*,int);
# 39
int Cyc_Execinfo_backtrace(struct _fat_ptr array,int size){int _T0;unsigned _T1;struct _fat_ptr _T2;unsigned _T3;struct Cyc_Core_Failure_exn_struct*_T4;void*_T5;struct _fat_ptr _T6;unsigned char*_T7;int*_T8;int _T9;int _TA;_T0= size;_T1= (unsigned)_T0;_T2= array;_T3= 
# 41
_get_fat_size(_T2,sizeof(int));if(_T1 <= _T3)goto _TL0;{struct Cyc_Core_Failure_exn_struct*_TB=_cycalloc(sizeof(struct Cyc_Core_Failure_exn_struct));_TB->tag= Cyc_Core_Failure;
({__typeof__(_tag_fat("backtrace: size > numelts(array)",sizeof(char),33U))_TC=_tag_fat("backtrace: size > numelts(array)",sizeof(char),33U);_TB->f1= _TC;});_T4= (struct Cyc_Core_Failure_exn_struct*)_TB;}_T5= (void*)_T4;_throw(_T5);goto _TL1;_TL0: _TL1: _T6= array;_T7= _untag_fat_ptr_check_bound(_T6,sizeof(int),1U);_T8= (int*)_T7;_T9= size;_TA= 
backtrace(_T8,_T9);return _TA;
# 47
return 0;}
# 53
int Cyc_Execinfo_bt (void){int*_T0;unsigned _T1;int*_T2;int*_T3;int*_T4;int*_T5;int _T6;int _T7;int _T8;int*_T9;int _TA;int _TB;int*_TC;int _TD;int*_TE;int _TF;int _T10;int*_T11;int _T12;const char**_T13;const char**_T14;const char**_T15;const char**_T16;const char**_T17;const char**_T18;struct _fat_ptr _T19;struct Cyc_Int_pa_PrintArg_struct _T1A;int _T1B;struct _fat_ptr _T1C;struct _fat_ptr _T1D;unsigned char*_T1E;const char**_T1F;int _T20;int _T21;int*_T22;int _T23;int*_T24;int _T25;int*_T26;int _T27;int*_T28;int _T29;int*_T2A;int _T2B;int*_T2C;int _T2D;int*_T2E;int*_T2F;int*_T30;struct _fat_ptr _T31;int _T32;int _T33;struct Cyc_Int_pa_PrintArg_struct _T34;int*_T35;int _T36;char*_T37;int*_T38;int _T39;char*_T3A;struct _fat_ptr _T3B;struct _fat_ptr _T3C;struct _fat_ptr _T3D;int _T3E;char*_T3F;struct _fat_ptr _T40;int _T41;unsigned long _T42;struct _fat_ptr _T43;struct _fat_ptr _T44;struct _fat_ptr _T45;struct _fat_ptr _T46;int _T47;char*_T48;struct _fat_ptr _T49;char _T4A;int _T4B;char _T4C;int _T4D;char _T4E;int _T4F;long _T50;int _T51;struct Cyc_Int_pa_PrintArg_struct _T52;int*_T53;int _T54;char*_T55;int*_T56;int _T57;char*_T58;struct _fat_ptr _T59;struct _fat_ptr _T5A;struct _fat_ptr _T5B;struct Cyc_String_pa_PrintArg_struct _T5C;char*_T5D;struct _fat_ptr _T5E;struct _fat_ptr _T5F;int _T60;int _T61;int _T62;struct _fat_ptr _T63;struct _fat_ptr _T64;int _T65;char*_T66;struct _fat_ptr _T67;char _T68;int _T69;char _T6A;int _T6B;
int bt[20U];{unsigned _T6C=20U;unsigned i;i= 0;_TL5: if(i < _T6C)goto _TL3;else{goto _TL4;}_TL3: _T0= bt;_T1= i;_T0[_T1]= 0;i= i + 1;goto _TL5;_TL4:;}{
int pid;int self_pid;
# 57
int tochild[2U];_T2= tochild;_T2[0]= 0;_T3= tochild;_T3[1]= 0;{
int fromchild[2U];_T4= fromchild;_T4[0]= 0;_T5= fromchild;_T5[1]= 0;_T6= 
# 60
pipe(tochild);if(_T6)goto _TL8;else{goto _TL9;}_TL9: _T7= pipe(fromchild);if(_T7)goto _TL8;else{goto _TL6;}
_TL8: return 1;_TL6:
# 63
 self_pid= getpid();
# 65
pid= fork();_T8= pid;if(_T8!=0)goto _TLA;_T9= tochild;_TA= _T9[0];_TB= 
# 67
dup2(_TA,0);if(_TB >= 0)goto _TLC;
perror("dup failed in backtrace");
exit(1);goto _TLD;_TLC: _TLD: _TC= tochild;_TD= _TC[1];
# 71
close(_TD);_TE= fromchild;_TF= _TE[1];_T10= 
dup2(_TF,1);if(_T10 >= 0)goto _TLE;
perror("dup failed in backtrace");
exit(1);goto _TLF;_TLE: _TLF: _T11= fromchild;_T12= _T11[0];
# 76
close(_T12);{
# 78
const char*args[7U];_T13= args;
_T13[0]= "addr2line";_T14= args;
_T14[1]= "--demangle";_T15= args;
_T15[2]= "--basenames";_T16= args;
_T16[3]= "--functions";_T17= args;
_T17[4]= "--exe";_T18= args;{struct Cyc_Int_pa_PrintArg_struct _T6C;_T6C.tag= 1;_T1B= self_pid;
_T6C.f1= (unsigned long)_T1B;_T1A= _T6C;}{struct Cyc_Int_pa_PrintArg_struct _T6C=_T1A;void*_T6D[1];_T6D[0]= & _T6C;_T1C= _tag_fat("/proc/%d/exe",sizeof(char),13U);_T1D= _tag_fat(_T6D,sizeof(void*),1);_T19= Cyc_aprintf(_T1C,_T1D);}_T1E= _untag_fat_ptr_check_bound(_T19,sizeof(char),1U);_T18[5]= (const char*)_T1E;_T1F= args;
_T1F[6]= 0;_T20= 
# 87
execvp("addr2line",args);_T21= - 1;if(_T20!=_T21)goto _TL10;
perror("execlp failed during backtrace");goto _TL11;_TL10: _TL11:
 exit(1);}goto _TLB;
_TLA: if(pid >= 0)goto _TL12;_T22= tochild;_T23= _T22[0];
# 92
close(_T23);_T24= tochild;_T25= _T24[1];
close(_T25);_T26= fromchild;_T27= _T26[0];
close(_T27);_T28= fromchild;_T29= _T28[1];
close(_T29);
return 1;_TL12: _TLB: _T2A= tochild;_T2B= _T2A[0];
# 100
close(_T2B);_T2C= fromchild;_T2D= _T2C[1];
close(_T2D);_T2E= fromchild;{
int infd=_T2E[0];_T2F= tochild;{
int outfd=_T2F[1];_T30= bt;_T31= 
# 106
_tag_fat(_T30,sizeof(int),20U);_T32= (int)20U;{int n=Cyc_Execinfo_backtrace(_T31,_T32);{
# 108
int c=0;_TL17: if(c < n)goto _TL15;else{goto _TL16;}
_TL15:{char buf[100U];{struct Cyc_Int_pa_PrintArg_struct _T6C;_T6C.tag= 1;_T35= bt;_T36= c;_T37= _check_known_subscript_notnull(_T35,20U,sizeof(int),_T36);_T38= (int*)_T37;_T39= *_T38;
_T6C.f1= (unsigned)_T39;_T34= _T6C;}{struct Cyc_Int_pa_PrintArg_struct _T6C=_T34;void*_T6D[1];_T6D[0]= & _T6C;_T3A= buf;_T3B= _tag_fat(_T3A,sizeof(char),100U);_T3C= _tag_fat("%#x\n",sizeof(char),5U);_T3D= _tag_fat(_T6D,sizeof(void*),1);_T33= Cyc_sprintf(_T3B,_T3C,_T3D);}{int len=_T33;_T3E= outfd;_T3F= buf;_T40= 
_tag_fat(_T3F,sizeof(char),100U);_T41= len;_T42= (unsigned long)_T41;Cyc_write(_T3E,_T40,_T42);}}
# 108
c= c + 1;goto _TL17;_TL16:;}_T43= 
# 118
_tag_fat("Backtrace:\n  Function          Location\n  ----------------  --------------------------------\n",sizeof(char),94U);_T44= _tag_fat(0U,sizeof(void*),0);
# 115
Cyc_printf(_T43,_T44);{
# 119
int c=0;_TL1B: if(c < n)goto _TL19;else{goto _TL1A;}
_TL19:{long unknown=1;
char d;
int ret;int pos=0;_T45= 
# 124
_tag_fat("  ",sizeof(char),3U);_T46= _tag_fat(0U,sizeof(void*),0);Cyc_printf(_T45,_T46);
# 126
_TL1C: _T47= infd;_T48= & d;_T49= _tag_fat(_T48,sizeof(char),1U);ret= Cyc_read(_T47,_T49,1U);_T4A= d;_T4B= (int)_T4A;
if(_T4B!=10)goto _TL1E;goto _TL1D;_TL1E: _T4C= d;_T4D= (int)_T4C;
# 129
if(_T4D==63)goto _TL20;
unknown= 0;goto _TL21;_TL20: _TL21:
 pos= pos + 1;_T4E= d;_T4F= (int)_T4E;
putchar(_T4F);
# 125
if(1)goto _TL1C;else{goto _TL1D;}_TL1D: _T50= unknown;
# 135
if(!_T50)goto _TL22;{
char buf[100U];{struct Cyc_Int_pa_PrintArg_struct _T6C;_T6C.tag= 1;_T53= bt;_T54= c;_T55= _check_known_subscript_notnull(_T53,20U,sizeof(int),_T54);_T56= (int*)_T55;_T57= *_T56;
_T6C.f1= (unsigned)_T57;_T52= _T6C;}{struct Cyc_Int_pa_PrintArg_struct _T6C=_T52;void*_T6D[1];_T6D[0]= & _T6C;_T58= buf;_T59= _tag_fat(_T58,sizeof(char),100U);_T5A= _tag_fat("(%#x)",sizeof(char),6U);_T5B= _tag_fat(_T6D,sizeof(void*),1);_T51= Cyc_sprintf(_T59,_T5A,_T5B);}{int len=_T51;{struct Cyc_String_pa_PrintArg_struct _T6C;_T6C.tag= 0;_T5D= buf;
({__typeof__(_tag_fat(_T5D,sizeof(char),100U))_T6D=_tag_fat(_T5D,sizeof(char),100U);_T6C.f1= _T6D;});_T5C= _T6C;}{struct Cyc_String_pa_PrintArg_struct _T6C=_T5C;void*_T6D[1];_T6D[0]= & _T6C;_T5E= _tag_fat("%s",sizeof(char),3U);_T5F= _tag_fat(_T6D,sizeof(void*),1);Cyc_printf(_T5E,_T5F);}_T60= len;
pos= pos + _T60;}}goto _TL23;_TL22: _TL23:
# 142
 _TL24: _T61= pos;pos= _T61 + 1;_T62= _T61;if(_T62 < 16)goto _TL25;else{goto _TL26;}
_TL25: putchar(32);goto _TL24;_TL26: _T63= 
_tag_fat("  ",sizeof(char),3U);_T64= _tag_fat(0U,sizeof(void*),0);Cyc_printf(_T63,_T64);
# 147
_TL27: _T65= infd;_T66= & d;_T67= _tag_fat(_T66,sizeof(char),1U);ret= Cyc_read(_T65,_T67,1U);_T68= d;_T69= (int)_T68;
if(_T69!=10)goto _TL29;goto _TL28;_TL29: _T6A= d;_T6B= (int)_T6A;
# 150
putchar(_T6B);
# 146
if(1)goto _TL27;else{goto _TL28;}_TL28:
# 152
 putchar(10);}
# 119
c= c + 1;goto _TL1B;_TL1A:;}
# 155
close(infd);
if(infd==outfd)goto _TL2B;
close(outfd);goto _TL2C;_TL2B: _TL2C:
# 159
 kill(pid,15);
waitpid(pid,0,0);
return 0;}}}}}}
