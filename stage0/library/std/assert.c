#include <cyc_include.h>
 struct Cyc___cycFILE;
# 53 "cyclone/library/std/cycboot.h"
extern struct Cyc___cycFILE*Cyc_stderr;struct Cyc_String_pa_PrintArg_struct{int tag;struct _fat_ptr f1;};struct Cyc_Int_pa_PrintArg_struct{int tag;unsigned long f1;};
# 88
extern int Cyc_fflush(struct Cyc___cycFILE*);
# 100
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 317
extern void exit(int);
# 26 "cyclone/library/std/assert.cyc"
void*Cyc___assert_fail(struct _fat_ptr assertion,struct _fat_ptr file,unsigned line){struct Cyc_String_pa_PrintArg_struct _T0;struct Cyc_Int_pa_PrintArg_struct _T1;struct Cyc_String_pa_PrintArg_struct _T2;struct Cyc___cycFILE*_T3;struct _fat_ptr _T4;struct _fat_ptr _T5;int _T6;{struct Cyc_String_pa_PrintArg_struct _T7;_T7.tag= 0;
_T7.f1= file;_T0= _T7;}{struct Cyc_String_pa_PrintArg_struct _T7=_T0;{struct Cyc_Int_pa_PrintArg_struct _T8;_T8.tag= 1;_T8.f1= line;_T1= _T8;}{struct Cyc_Int_pa_PrintArg_struct _T8=_T1;{struct Cyc_String_pa_PrintArg_struct _T9;_T9.tag= 0;_T9.f1= assertion;_T2= _T9;}{struct Cyc_String_pa_PrintArg_struct _T9=_T2;void*_TA[3];_TA[0]= & _T7;_TA[1]= & _T8;_TA[2]= & _T9;_T3= Cyc_stderr;_T4= _tag_fat("%s:%u: Assertion `%s' failed.\n",sizeof(char),31U);_T5= _tag_fat(_TA,sizeof(void*),3);Cyc_fprintf(_T3,_T4,_T5);}}}
Cyc_fflush(Cyc_stderr);_T6= - 1;
exit(_T6);}
