#include <cyc_include.h>

# 123 "cyclone/library/std/getopt.h"
 extern int Cyc__getopt_internal(int,struct _fat_ptr,struct _fat_ptr,struct _fat_ptr,int*,int);
# 24 "cyclone/library/std/getopt1.cyc"
int Cyc_getopt_long(int argc,struct _fat_ptr argv,struct _fat_ptr options,struct _fat_ptr long_options,int*opt_index){int _T0;_T0= 
# 28
Cyc__getopt_internal(argc,argv,options,long_options,opt_index,0);return _T0;}
# 35
int Cyc_getopt_long_only(int argc,struct _fat_ptr argv,struct _fat_ptr options,struct _fat_ptr long_options,int*opt_index){int _T0;_T0= 
# 39
Cyc__getopt_internal(argc,argv,options,long_options,opt_index,1);return _T0;}
