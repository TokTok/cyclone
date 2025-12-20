#include <cyc_include.h>
 struct Cyc___cycFILE;
# 53 "cyclone/library/std/cycboot.h"
extern struct Cyc___cycFILE*Cyc_stderr;struct Cyc_Int_pa_PrintArg_struct{int tag;unsigned long f1;};struct Cyc_Double_pa_PrintArg_struct{int tag;double f1;};
# 100
extern int Cyc_fprintf(struct Cyc___cycFILE*,struct _fat_ptr,struct _fat_ptr);
# 157
extern int Cyc_printf(struct _fat_ptr,struct _fat_ptr);struct Cyc_Core_Not_found_exn_struct{char*tag;};
# 147 "cyclone/library/std/core.h"
extern struct Cyc_Core_Not_found_exn_struct Cyc_Core_Not_found_val;
# 166
extern struct _RegionHandle*Cyc_Core_heap_region;struct Cyc_Hashtable_Table;
# 74 "cyclone/library/std/hashtable.h"
void Cyc_Hashtable_resize(struct Cyc_Hashtable_Table*);struct Cyc_Hashtable_Cell{void*key;void*value;struct Cyc_Hashtable_Cell*next;};struct Cyc_Hashtable_Bucket{unsigned length;struct Cyc_Hashtable_Cell*cells;};struct Cyc_Hashtable_Table{struct _RegionHandle*r;int(*cmp)(void*,void*);int(*hash)(void*);int max_len;struct _fat_ptr tab;};
# 51 "cyclone/library/std/hashtable.cyc"
struct Cyc_Hashtable_Table*Cyc_Hashtable_rcreate(struct _RegionHandle*r,int sz,int(*cmp)(void*,void*),int(*hash)(void*)){struct Cyc_Hashtable_Table*_T0;struct _RegionHandle*_T1;struct _fat_ptr _T2;struct _RegionHandle*_T3;void*_T4;_T1= r;{struct Cyc_Hashtable_Table*_T5=_region_malloc(_T1,0U,sizeof(struct Cyc_Hashtable_Table));
_T5->r= r;_T5->cmp= cmp;_T5->hash= hash;_T5->max_len= 3;{unsigned _T6=sz;_T3= r;_T4= _region_calloc(_T3,0U,sizeof(struct Cyc_Hashtable_Bucket),_T6);_T2= _tag_fat(_T4,sizeof(struct Cyc_Hashtable_Bucket),_T6);}_T5->tab= _T2;_T0= (struct Cyc_Hashtable_Table*)_T5;}return _T0;}
# 55
struct Cyc_Hashtable_Table*Cyc_Hashtable_create(int sz,int(*cmp)(void*,void*),int(*hash)(void*)){struct _RegionHandle*_T0;int _T1;int(*_T2)(void*,void*);int(*_T3)(void*);struct Cyc_Hashtable_Table*_T4;_T0= Cyc_Core_heap_region;_T1= sz;_T2= cmp;_T3= hash;_T4= 
Cyc_Hashtable_rcreate(_T0,_T1,_T2,_T3);return _T4;}
# 59
void Cyc_Hashtable_insert(struct Cyc_Hashtable_Table*t,void*key,void*val){struct Cyc_Hashtable_Table*_T0;struct Cyc_Hashtable_Table*_T1;int(*_T2)(void*);int _T3;unsigned _T4;struct _fat_ptr _T5;unsigned _T6;struct _fat_ptr _T7;unsigned _T8;int _T9;struct _fat_ptr _TA;unsigned char*_TB;unsigned char*_TC;struct Cyc_Hashtable_Bucket*_TD;struct Cyc_Hashtable_Cell*_TE;struct Cyc_Hashtable_Table*_TF;struct _RegionHandle*_T10;struct Cyc_Hashtable_Bucket*_T11;struct Cyc_Hashtable_Bucket*_T12;unsigned _T13;struct Cyc_Hashtable_Bucket*_T14;unsigned _T15;struct Cyc_Hashtable_Table*_T16;int _T17;unsigned _T18;_T0= t;{
struct _fat_ptr tab=_T0->tab;_T1= t;_T2= _T1->hash;_T3= 
_T2(key);_T4= (unsigned)_T3;_T5= tab;_T6= _get_fat_size(_T5,sizeof(struct Cyc_Hashtable_Bucket));{unsigned bucket=_T4 % _T6;_T7= tab;_T8= bucket;_T9= (int)_T8;_TA= 
_fat_ptr_plus(_T7,sizeof(struct Cyc_Hashtable_Bucket),_T9);_TB= _untag_fat_ptr_check_bound(_TA,sizeof(struct Cyc_Hashtable_Bucket),1U);_TC= _check_null(_TB);{struct Cyc_Hashtable_Bucket*b=(struct Cyc_Hashtable_Bucket*)_TC;_TD= b;_TF= t;_T10= _TF->r;{struct Cyc_Hashtable_Cell*_T19=_region_malloc(_T10,0U,sizeof(struct Cyc_Hashtable_Cell));
_T19->key= key;_T19->value= val;_T11= b;_T19->next= _T11->cells;_TE= (struct Cyc_Hashtable_Cell*)_T19;}_TD->cells= _TE;_T12= b;_T13= _T12->length;{
unsigned i=_T13 + 1U;_T14= b;
_T14->length= i;_T15= i;_T16= t;_T17= _T16->max_len;_T18= (unsigned)_T17;
if(_T15 <= _T18)goto _TL0;
# 68
Cyc_Hashtable_resize(t);goto _TL1;_TL0: _TL1:;}}}}}
# 72
void*Cyc_Hashtable_lookup(struct Cyc_Hashtable_Table*t,void*key){struct Cyc_Hashtable_Table*_T0;struct Cyc_Hashtable_Table*_T1;struct _fat_ptr _T2;unsigned char*_T3;struct Cyc_Hashtable_Bucket*_T4;struct Cyc_Hashtable_Bucket*_T5;struct Cyc_Hashtable_Table*_T6;int(*_T7)(void*);int _T8;unsigned _T9;struct _fat_ptr _TA;unsigned _TB;unsigned _TC;int _TD;struct Cyc_Hashtable_Bucket _TE;struct Cyc_Hashtable_Cell*_TF;void*_T10;void*_T11;int _T12;struct Cyc_Hashtable_Cell*_T13;void*_T14;struct Cyc_Hashtable_Cell*_T15;struct Cyc_Core_Not_found_exn_struct*_T16;struct Cyc_Core_Not_found_exn_struct*_T17;_T0= t;{
struct _fat_ptr tab=_T0->tab;_T1= t;{
int(*cmp)(void*,void*)=_T1->cmp;_T2= tab;_T3= _T2.curr;_T4= (struct Cyc_Hashtable_Bucket*)_T3;_T5= 
_check_null(_T4);_T6= t;_T7= _T6->hash;_T8= _T7(key);_T9= (unsigned)_T8;_TA= tab;_TB= _get_fat_size(_TA,sizeof(struct Cyc_Hashtable_Bucket));_TC= _T9 % _TB;_TD= (int)_TC;_TE= _T5[_TD];{struct Cyc_Hashtable_Cell*p=_TE.cells;
_TL5: if(p!=0)goto _TL3;else{goto _TL4;}
_TL3: _TF= p;_T10= _TF->key;_T11= key;_T12= cmp(_T10,_T11);if(_T12!=0)goto _TL6;_T13= p;_T14= _T13->value;
return _T14;_TL6: _T15= p;
# 76
p= _T15->next;goto _TL5;_TL4: _T16= & Cyc_Core_Not_found_val;_T17= (struct Cyc_Core_Not_found_exn_struct*)_T16;_throw(_T17);}}}}
# 83
void**Cyc_Hashtable_lookup_opt(struct Cyc_Hashtable_Table*t,void*key){struct Cyc_Hashtable_Table*_T0;struct Cyc_Hashtable_Table*_T1;struct _fat_ptr _T2;unsigned char*_T3;struct Cyc_Hashtable_Bucket*_T4;struct Cyc_Hashtable_Bucket*_T5;struct Cyc_Hashtable_Table*_T6;int(*_T7)(void*);int _T8;unsigned _T9;struct _fat_ptr _TA;unsigned _TB;unsigned _TC;int _TD;struct Cyc_Hashtable_Bucket _TE;struct Cyc_Hashtable_Cell*_TF;void*_T10;void*_T11;int _T12;struct Cyc_Hashtable_Cell*_T13;void**_T14;struct Cyc_Hashtable_Cell*_T15;_T0= t;{
struct _fat_ptr tab=_T0->tab;_T1= t;{
int(*cmp)(void*,void*)=_T1->cmp;_T2= tab;_T3= _T2.curr;_T4= (struct Cyc_Hashtable_Bucket*)_T3;_T5= 
_check_null(_T4);_T6= t;_T7= _T6->hash;_T8= _T7(key);_T9= (unsigned)_T8;_TA= tab;_TB= _get_fat_size(_TA,sizeof(struct Cyc_Hashtable_Bucket));_TC= _T9 % _TB;_TD= (int)_TC;_TE= _T5[_TD];{struct Cyc_Hashtable_Cell*p=_TE.cells;
_TLB: if(p!=0)goto _TL9;else{goto _TLA;}
_TL9: _TF= p;_T10= _TF->key;_T11= key;_T12= cmp(_T10,_T11);if(_T12!=0)goto _TLC;_T13= p;_T14= & _T13->value;
return _T14;_TLC: _T15= p;
# 87
p= _T15->next;goto _TLB;_TLA:
# 91
 return 0;}}}}
# 95
void**Cyc_Hashtable_lookup_ptr_opt(struct Cyc_Hashtable_Table*t,void*key){struct Cyc_Hashtable_Table*_T0;struct _fat_ptr _T1;unsigned char*_T2;struct Cyc_Hashtable_Bucket*_T3;struct Cyc_Hashtable_Bucket*_T4;struct Cyc_Hashtable_Table*_T5;int(*_T6)(void*);int _T7;unsigned _T8;struct _fat_ptr _T9;unsigned _TA;unsigned _TB;int _TC;struct Cyc_Hashtable_Bucket _TD;struct Cyc_Hashtable_Cell*_TE;void*_TF;int _T10;void*_T11;int _T12;struct Cyc_Hashtable_Cell*_T13;void**_T14;struct Cyc_Hashtable_Cell*_T15;_T0= t;{
struct _fat_ptr tab=_T0->tab;_T1= tab;_T2= _T1.curr;_T3= (struct Cyc_Hashtable_Bucket*)_T2;_T4= 
_check_null(_T3);_T5= t;_T6= _T5->hash;_T7= _T6(key);_T8= (unsigned)_T7;_T9= tab;_TA= _get_fat_size(_T9,sizeof(struct Cyc_Hashtable_Bucket));_TB= _T8 % _TA;_TC= (int)_TB;_TD= _T4[_TC];{struct Cyc_Hashtable_Cell*p=_TD.cells;
_TL11: if(p!=0)goto _TLF;else{goto _TL10;}
_TLF: _TE= p;_TF= _TE->key;_T10= (int)_TF;_T11= key;_T12= (int)_T11;if(_T10!=_T12)goto _TL12;_T13= p;_T14= & _T13->value;
return _T14;_TL12: _T15= p;
# 98
p= _T15->next;goto _TL11;_TL10:
# 102
 return 0;}}}
# 109
void**Cyc_Hashtable_lookup_other_opt(struct Cyc_Hashtable_Table*t,void*key,int(*cmp)(void*,void*),int(*hash)(void*)){struct Cyc_Hashtable_Table*_T0;struct _fat_ptr _T1;unsigned char*_T2;struct Cyc_Hashtable_Bucket*_T3;struct Cyc_Hashtable_Bucket*_T4;int _T5;unsigned _T6;struct _fat_ptr _T7;unsigned _T8;unsigned _T9;int _TA;struct Cyc_Hashtable_Bucket _TB;void*_TC;struct Cyc_Hashtable_Cell*_TD;void*_TE;int _TF;struct Cyc_Hashtable_Cell*_T10;void**_T11;struct Cyc_Hashtable_Cell*_T12;_T0= t;{
struct _fat_ptr tab=_T0->tab;_T1= tab;_T2= _T1.curr;_T3= (struct Cyc_Hashtable_Bucket*)_T2;_T4= 
_check_null(_T3);_T5= hash(key);_T6= (unsigned)_T5;_T7= tab;_T8= _get_fat_size(_T7,sizeof(struct Cyc_Hashtable_Bucket));_T9= _T6 % _T8;_TA= (int)_T9;_TB= _T4[_TA];{struct Cyc_Hashtable_Cell*p=_TB.cells;
_TL17: if(p!=0)goto _TL15;else{goto _TL16;}
_TL15: _TC= key;_TD= p;_TE= _TD->key;_TF= cmp(_TC,_TE);if(_TF!=0)goto _TL18;_T10= p;_T11= & _T10->value;
return _T11;_TL18: _T12= p;
# 112
p= _T12->next;goto _TL17;_TL16:
# 116
 return 0;}}}
# 119
long Cyc_Hashtable_try_lookup(struct Cyc_Hashtable_Table*t,void*key,void**data){struct Cyc_Hashtable_Table*_T0;struct Cyc_Hashtable_Table*_T1;struct _fat_ptr _T2;unsigned char*_T3;struct Cyc_Hashtable_Bucket*_T4;struct Cyc_Hashtable_Bucket*_T5;struct Cyc_Hashtable_Table*_T6;int(*_T7)(void*);int _T8;unsigned _T9;struct _fat_ptr _TA;unsigned _TB;unsigned _TC;int _TD;struct Cyc_Hashtable_Bucket _TE;struct Cyc_Hashtable_Cell*_TF;void*_T10;void*_T11;int _T12;void**_T13;struct Cyc_Hashtable_Cell*_T14;struct Cyc_Hashtable_Cell*_T15;_T0= t;{
struct _fat_ptr tab=_T0->tab;_T1= t;{
int(*cmp)(void*,void*)=_T1->cmp;_T2= tab;_T3= _T2.curr;_T4= (struct Cyc_Hashtable_Bucket*)_T3;_T5= 
_check_null(_T4);_T6= t;_T7= _T6->hash;_T8= _T7(key);_T9= (unsigned)_T8;_TA= tab;_TB= _get_fat_size(_TA,sizeof(struct Cyc_Hashtable_Bucket));_TC= _T9 % _TB;_TD= (int)_TC;_TE= _T5[_TD];{struct Cyc_Hashtable_Cell*p=_TE.cells;
_TL1D: if(p!=0)goto _TL1B;else{goto _TL1C;}
_TL1B: _TF= p;_T10= _TF->key;_T11= key;_T12= cmp(_T10,_T11);if(_T12!=0)goto _TL1E;_T13= data;_T14= p;
*_T13= _T14->value;
return 1;_TL1E: _T15= p;
# 123
p= _T15->next;goto _TL1D;_TL1C:
# 129
 return 0;}}}}
# 132
void Cyc_Hashtable_remove(struct Cyc_Hashtable_Table*t,void*key){struct Cyc_Hashtable_Table*_T0;struct Cyc_Hashtable_Table*_T1;struct Cyc_Hashtable_Table*_T2;int(*_T3)(void*);int _T4;unsigned _T5;struct _fat_ptr _T6;unsigned _T7;struct _fat_ptr _T8;unsigned _T9;int _TA;struct _fat_ptr _TB;unsigned char*_TC;unsigned char*_TD;struct Cyc_Hashtable_Bucket*_TE;void*_TF;struct Cyc_Hashtable_Cell*_T10;void*_T11;int _T12;struct Cyc_Hashtable_Bucket*_T13;struct Cyc_Hashtable_Cell*_T14;struct Cyc_Hashtable_Bucket*_T15;struct Cyc_Hashtable_Cell*_T16;struct Cyc_Hashtable_Cell*_T17;struct Cyc_Hashtable_Cell*_T18;void*_T19;struct Cyc_Hashtable_Cell*_T1A;void*_T1B;int _T1C;struct Cyc_Hashtable_Cell*_T1D;struct Cyc_Hashtable_Cell*_T1E;struct Cyc_Hashtable_Bucket*_T1F;struct Cyc_Hashtable_Cell*_T20;struct Cyc_Hashtable_Cell*_T21;_T0= t;{
# 135
struct _fat_ptr tab=_T0->tab;_T1= t;{
int(*cmp)(void*,void*)=_T1->cmp;_T2= t;_T3= _T2->hash;_T4= 
_T3(key);_T5= (unsigned)_T4;_T6= tab;_T7= _get_fat_size(_T6,sizeof(struct Cyc_Hashtable_Bucket));{unsigned bucket=_T5 % _T7;_T8= tab;_T9= bucket;_TA= (int)_T9;_TB= 
_fat_ptr_plus(_T8,sizeof(struct Cyc_Hashtable_Bucket),_TA);_TC= _untag_fat_ptr_check_bound(_TB,sizeof(struct Cyc_Hashtable_Bucket),1U);_TD= _check_null(_TC);{struct Cyc_Hashtable_Bucket*b=(struct Cyc_Hashtable_Bucket*)_TD;_TE= b;{
struct Cyc_Hashtable_Cell*l=_TE->cells;
if(l!=0)goto _TL20;
return;_TL20: _TF= key;_T10= l;_T11= _T10->key;_T12= 
cmp(_TF,_T11);if(_T12!=0)goto _TL22;_T13= b;_T14= l;
_T13->cells= _T14->next;_T15= b;
_T15->length= _T15->length + -1;
return;_TL22: _T16= l;{
# 147
struct Cyc_Hashtable_Cell*next=_T16->next;_TL27: _T17= _check_null(l);_T18= _T17->next;if(_T18!=0)goto _TL25;else{goto _TL26;}
# 149
_TL25: _T19= key;_T1A= _check_null(next);_T1B= _T1A->key;_T1C= cmp(_T19,_T1B);if(_T1C!=0)goto _TL28;_T1D= l;_T1E= next;
_T1D->next= _T1E->next;_T1F= b;
_T1F->length= _T1F->length + -1;
return;_TL28: _T20= l;
# 147
l= _T20->next;_T21= next;next= _T21->next;goto _TL27;_TL26:;}}}}}}}
# 156
int Cyc_Hashtable_hash_string(struct _fat_ptr s){struct _fat_ptr _T0;unsigned _T1;unsigned _T2;int _T3;unsigned _T4;int _T5;struct _fat_ptr _T6;unsigned char*_T7;const char*_T8;const char*_T9;unsigned _TA;int _TB;char _TC;int _TD;char _TE;int _TF;int _T10;
# 158
int ans=0;_T0= s;_T1= 
_get_fat_size(_T0,sizeof(char));{int sz=(int)_T1;
int shift=0;{
unsigned i=0U;_TL2D: _T2= i;_T3= sz;_T4= (unsigned)_T3;if(_T2 < _T4)goto _TL2B;else{goto _TL2C;}
_TL2B: _T5= ans;_T6= s;_T7= _T6.curr;_T8= (const char*)_T7;_T9= _check_null(_T8);_TA= i;_TB= (int)_TA;_TC= _T9[_TB];_TD= shift;_TE= _TC << _TD;_TF= (int)_TE;ans= _T5 ^ _TF;
shift= shift + 8;
if(shift!=32)goto _TL2E;
shift= 0;goto _TL2F;_TL2E: _TL2F:
# 161
 i= i + 1;goto _TL2D;_TL2C:;}_T10= ans;
# 167
return _T10;}}
# 170
int Cyc_Hashtable_hash_stringptr(struct _fat_ptr*s){struct _fat_ptr*_T0;struct _fat_ptr _T1;int _T2;_T0= s;_T1= *_T0;_T2= Cyc_Hashtable_hash_string(_T1);return _T2;}
# 173
static struct Cyc_Hashtable_Cell*Cyc_Hashtable_rev_cells(struct Cyc_Hashtable_Cell*cells){struct Cyc_Hashtable_Cell*_T0;struct Cyc_Hashtable_Cell*_T1;struct Cyc_Hashtable_Cell*_T2;struct Cyc_Hashtable_Cell*_T3;struct Cyc_Hashtable_Cell*_T4;
if(cells!=0)goto _TL30;
return 0;_TL30: {
struct Cyc_Hashtable_Cell*first=cells;_T0= cells;{
struct Cyc_Hashtable_Cell*second=_T0->next;_T1= cells;
_T1->next= 0;
_TL32: if(second!=0)goto _TL33;else{goto _TL34;}
_TL33: _T2= second;{struct Cyc_Hashtable_Cell*temp=_T2->next;_T3= second;
_T3->next= first;
first= second;
second= temp;}goto _TL32;_TL34: _T4= first;
# 185
return _T4;}}}
# 190
static void Cyc_Hashtable_insert_bucket(struct _RegionHandle*r,struct _fat_ptr tab,int(*hash)(void*),struct Cyc_Hashtable_Cell*elems){struct Cyc_Hashtable_Cell*_T0;struct Cyc_Hashtable_Cell*_T1;int _T2;unsigned _T3;struct _fat_ptr _T4;unsigned _T5;struct _fat_ptr _T6;unsigned char*_T7;struct Cyc_Hashtable_Bucket*_T8;unsigned _T9;int _TA;struct Cyc_Hashtable_Cell*_TB;struct _RegionHandle*_TC;struct _fat_ptr _TD;unsigned char*_TE;struct Cyc_Hashtable_Bucket*_TF;struct Cyc_Hashtable_Bucket*_T10;unsigned _T11;int _T12;struct Cyc_Hashtable_Bucket _T13;struct _fat_ptr _T14;unsigned char*_T15;struct Cyc_Hashtable_Bucket*_T16;unsigned _T17;int _T18;struct Cyc_Hashtable_Cell*_T19;
# 193
_TL38: if(elems!=0)goto _TL36;else{goto _TL37;}
_TL36: _T0= elems;{void*key=_T0->key;_T1= elems;{
void*val=_T1->value;_T2= 
hash(key);_T3= (unsigned)_T2;_T4= tab;_T5= _get_fat_size(_T4,sizeof(struct Cyc_Hashtable_Bucket));{unsigned nidx=_T3 % _T5;_T6= tab;_T7= _T6.curr;_T8= (struct Cyc_Hashtable_Bucket*)_T7;_T9= nidx;_TA= (int)_T9;_TC= r;{struct Cyc_Hashtable_Cell*_T1A=_region_malloc(_TC,0U,sizeof(struct Cyc_Hashtable_Cell));
_T1A->key= key;_T1A->value= val;_TD= tab;_TE= _TD.curr;_TF= (struct Cyc_Hashtable_Bucket*)_TE;_T10= _check_null(_TF);_T11= nidx;_T12= (int)_T11;_T13= _T10[_T12];_T1A->next= _T13.cells;_TB= (struct Cyc_Hashtable_Cell*)_T1A;}_T8[_TA].cells= _TB;_T14= tab;_T15= _T14.curr;_T16= (struct Cyc_Hashtable_Bucket*)_T15;_T17= nidx;_T18= (int)_T17;
_T16[_T18].length= _T16[_T18].length + 1;}}}_T19= elems;
# 193
elems= _T19->next;goto _TL38;_TL37:;}
# 202
void Cyc_Hashtable_resize(struct Cyc_Hashtable_Table*t){struct Cyc_Hashtable_Table*_T0;struct _fat_ptr _T1;unsigned _T2;struct _fat_ptr _T3;struct Cyc_Hashtable_Table*_T4;struct _RegionHandle*_T5;void*_T6;struct Cyc_Hashtable_Table*_T7;struct _RegionHandle*_T8;struct _fat_ptr _T9;struct Cyc_Hashtable_Table*_TA;int(*_TB)(void*);struct _fat_ptr _TC;unsigned char*_TD;struct Cyc_Hashtable_Bucket*_TE;struct Cyc_Hashtable_Bucket*_TF;unsigned _T10;int _T11;struct Cyc_Hashtable_Bucket _T12;struct Cyc_Hashtable_Cell*_T13;struct Cyc_Hashtable_Cell*_T14;struct Cyc_Hashtable_Table*_T15;struct _fat_ptr _T16;unsigned char*_T17;struct Cyc_Hashtable_Bucket*_T18;unsigned _T19;int _T1A;struct Cyc_Hashtable_Bucket _T1B;struct Cyc_Hashtable_Table*_T1C;unsigned _T1D;unsigned _T1E;_T0= t;{
struct _fat_ptr odata=_T0->tab;_T1= odata;{
unsigned osize=_get_fat_size(_T1,sizeof(struct Cyc_Hashtable_Bucket));_T2= 2U * osize;{
unsigned nsize=_T2 + 7U;{unsigned _T1F=nsize;_T4= t;_T5= _T4->r;_T6= _region_calloc(_T5,0U,sizeof(struct Cyc_Hashtable_Bucket),_T1F);_T3= _tag_fat(_T6,sizeof(struct Cyc_Hashtable_Bucket),_T1F);}{
struct _fat_ptr ndata=_T3;{
unsigned i=0U;_TL3C: if(i < osize)goto _TL3A;else{goto _TL3B;}
_TL3A: _T7= t;_T8= _T7->r;_T9= ndata;_TA= t;_TB= _TA->hash;_TC= odata;_TD= _TC.curr;_TE= (struct Cyc_Hashtable_Bucket*)_TD;_TF= _check_null(_TE);_T10= i;_T11= (int)_T10;_T12= _TF[_T11];_T13= _T12.cells;_T14= Cyc_Hashtable_rev_cells(_T13);Cyc_Hashtable_insert_bucket(_T8,_T9,_TB,_T14);
# 207
i= i + 1;goto _TL3C;_TL3B:;}_T15= t;
# 209
_T15->tab= ndata;{
# 211
unsigned cur_max_len=0U;{
unsigned j=0U;_TL40: if(j < nsize)goto _TL3E;else{goto _TL3F;}
_TL3E: _T16= ndata;_T17= _T16.curr;_T18= (struct Cyc_Hashtable_Bucket*)_T17;_T19= j;_T1A= (int)_T19;_T1B= _T18[_T1A];{unsigned k=_T1B.length;
if(k <= cur_max_len)goto _TL41;
cur_max_len= k;goto _TL42;_TL41: _TL42:;}
# 212
j= j + 1;goto _TL40;_TL3F:;}_T1C= t;_T1D= 3U * cur_max_len;_T1E= _T1D / 2U;
# 217
_T1C->max_len= (int)_T1E;}}}}}}
# 221
void Cyc_Hashtable_iter(void(*f)(void*,void*),struct Cyc_Hashtable_Table*t){struct Cyc_Hashtable_Table*_T0;struct _fat_ptr _T1;struct _fat_ptr _T2;unsigned char*_T3;struct Cyc_Hashtable_Bucket*_T4;struct Cyc_Hashtable_Bucket*_T5;unsigned _T6;int _T7;struct Cyc_Hashtable_Bucket _T8;struct Cyc_Hashtable_Cell*_T9;void*_TA;struct Cyc_Hashtable_Cell*_TB;void*_TC;struct Cyc_Hashtable_Cell*_TD;_T0= t;{
struct _fat_ptr odata=_T0->tab;_T1= odata;{
unsigned osize=_get_fat_size(_T1,sizeof(struct Cyc_Hashtable_Bucket));
unsigned i=0U;_TL46: if(i < osize)goto _TL44;else{goto _TL45;}
_TL44: _T2= odata;_T3= _T2.curr;_T4= (struct Cyc_Hashtable_Bucket*)_T3;_T5= _check_null(_T4);_T6= i;_T7= (int)_T6;_T8= _T5[_T7];{struct Cyc_Hashtable_Cell*iter=_T8.cells;_TL4A: if(iter!=0)goto _TL48;else{goto _TL49;}
_TL48: _T9= iter;_TA= _T9->key;_TB= iter;_TC= _TB->value;f(_TA,_TC);_TD= iter;
# 225
iter= _TD->next;goto _TL4A;_TL49:;}
# 224
i= i + 1;goto _TL46;_TL45:;}}}
# 229
void Cyc_Hashtable_iter_c(void(*f)(void*,void*,void*),struct Cyc_Hashtable_Table*t,void*env){struct Cyc_Hashtable_Table*_T0;struct _fat_ptr _T1;struct _fat_ptr _T2;unsigned char*_T3;struct Cyc_Hashtable_Bucket*_T4;struct Cyc_Hashtable_Bucket*_T5;unsigned _T6;int _T7;struct Cyc_Hashtable_Bucket _T8;struct Cyc_Hashtable_Cell*_T9;void*_TA;struct Cyc_Hashtable_Cell*_TB;void*_TC;void*_TD;struct Cyc_Hashtable_Cell*_TE;_T0= t;{
struct _fat_ptr odata=_T0->tab;_T1= odata;{
unsigned osize=_get_fat_size(_T1,sizeof(struct Cyc_Hashtable_Bucket));
unsigned i=0U;_TL4E: if(i < osize)goto _TL4C;else{goto _TL4D;}
_TL4C: _T2= odata;_T3= _T2.curr;_T4= (struct Cyc_Hashtable_Bucket*)_T3;_T5= _check_null(_T4);_T6= i;_T7= (int)_T6;_T8= _T5[_T7];{struct Cyc_Hashtable_Cell*iter=_T8.cells;_TL52: if(iter!=0)goto _TL50;else{goto _TL51;}
_TL50: _T9= iter;_TA= _T9->key;_TB= iter;_TC= _TB->value;_TD= env;f(_TA,_TC,_TD);_TE= iter;
# 233
iter= _TE->next;goto _TL52;_TL51:;}
# 232
i= i + 1;goto _TL4E;_TL4D:;}}}
# 237
unsigned Cyc_Hashtable_num_buckets(struct Cyc_Hashtable_Table*t){struct Cyc_Hashtable_Table*_T0;struct _fat_ptr _T1;unsigned _T2;_T0= t;_T1= _T0->tab;_T2= _get_fat_size(_T1,sizeof(struct Cyc_Hashtable_Bucket));return _T2;}
# 240
void Cyc_Hashtable_print_table_map(struct Cyc_Hashtable_Table*t,void(*prn_key)(void*),void(*prn_val)(void*)){struct Cyc_Hashtable_Table*_T0;struct _fat_ptr _T1;struct Cyc_Int_pa_PrintArg_struct _T2;unsigned _T3;int _T4;struct _fat_ptr _T5;struct _fat_ptr _T6;struct _fat_ptr _T7;unsigned char*_T8;struct Cyc_Hashtable_Bucket*_T9;struct Cyc_Hashtable_Bucket*_TA;unsigned _TB;int _TC;struct Cyc_Hashtable_Bucket _TD;struct _fat_ptr _TE;struct _fat_ptr _TF;struct Cyc_Hashtable_Cell*_T10;void*_T11;struct _fat_ptr _T12;struct _fat_ptr _T13;struct Cyc_Hashtable_Cell*_T14;void*_T15;struct _fat_ptr _T16;struct _fat_ptr _T17;struct Cyc_Hashtable_Cell*_T18;struct _fat_ptr _T19;struct _fat_ptr _T1A;_T0= t;{
struct _fat_ptr odata=_T0->tab;_T1= odata;{
unsigned osize=_get_fat_size(_T1,sizeof(struct Cyc_Hashtable_Bucket));
unsigned i=0U;_TL56: if(i < osize)goto _TL54;else{goto _TL55;}
_TL54:{struct Cyc_Int_pa_PrintArg_struct _T1B;_T1B.tag= 1;_T3= i;_T4= (int)_T3;_T1B.f1= (unsigned long)_T4;_T2= _T1B;}{struct Cyc_Int_pa_PrintArg_struct _T1B=_T2;void*_T1C[1];_T1C[0]= & _T1B;_T5= _tag_fat("%d: ",sizeof(char),5U);_T6= _tag_fat(_T1C,sizeof(void*),1);Cyc_printf(_T5,_T6);}_T7= odata;_T8= _T7.curr;_T9= (struct Cyc_Hashtable_Bucket*)_T8;_TA= 
_check_null(_T9);_TB= i;_TC= (int)_TB;_TD= _TA[_TC];{struct Cyc_Hashtable_Cell*iter=_TD.cells;_TL5A: if(iter!=0)goto _TL58;else{goto _TL59;}
_TL58: _TE= _tag_fat("(",sizeof(char),2U);_TF= _tag_fat(0U,sizeof(void*),0);Cyc_printf(_TE,_TF);_T10= iter;_T11= _T10->key;
prn_key(_T11);_T12= 
_tag_fat(",",sizeof(char),2U);_T13= _tag_fat(0U,sizeof(void*),0);Cyc_printf(_T12,_T13);_T14= iter;_T15= _T14->value;
prn_val(_T15);_T16= 
_tag_fat(") ",sizeof(char),3U);_T17= _tag_fat(0U,sizeof(void*),0);Cyc_printf(_T16,_T17);_T18= iter;
# 245
iter= _T18->next;goto _TL5A;_TL59:;}_T19= 
# 252
_tag_fat("\n",sizeof(char),2U);_T1A= _tag_fat(0U,sizeof(void*),0);Cyc_printf(_T19,_T1A);
# 243
i= i + 1;goto _TL56;_TL55:;}}}
# 256
void Cyc_Hashtable_print_hist(struct Cyc_Hashtable_Table*t){struct Cyc_Hashtable_Table*_T0;struct _fat_ptr _T1;struct _fat_ptr _T2;unsigned*_T3;unsigned _T4;unsigned _T5;struct _fat_ptr _T6;unsigned char*_T7;struct Cyc_Hashtable_Bucket*_T8;struct Cyc_Hashtable_Bucket*_T9;unsigned _TA;int _TB;struct Cyc_Hashtable_Bucket _TC;struct _fat_ptr _TD;unsigned char*_TE;unsigned*_TF;unsigned _T10;int _T11;unsigned _T12;struct Cyc_Int_pa_PrintArg_struct _T13;unsigned _T14;int _T15;struct Cyc_Int_pa_PrintArg_struct _T16;struct _fat_ptr _T17;unsigned char*_T18;unsigned*_T19;unsigned _T1A;int _T1B;unsigned _T1C;int _T1D;struct Cyc_Double_pa_PrintArg_struct _T1E;struct _fat_ptr _T1F;unsigned char*_T20;unsigned*_T21;unsigned _T22;int _T23;unsigned _T24;unsigned _T25;unsigned _T26;unsigned _T27;struct Cyc___cycFILE*_T28;struct _fat_ptr _T29;struct _fat_ptr _T2A;_T0= t;{
struct _fat_ptr odata=_T0->tab;_T1= odata;{
unsigned osize=_get_fat_size(_T1,sizeof(struct Cyc_Hashtable_Bucket));{unsigned _T2B=osize;_T4= _check_times(_T2B,sizeof(unsigned));{unsigned*_T2C=_cycalloc_atomic(_T4);{unsigned _T2D=_T2B;unsigned i;i= 0;_TL5E: if(i < _T2D)goto _TL5C;else{goto _TL5D;}_TL5C: _T5= i;_T6= odata;_T7= _T6.curr;_T8= (struct Cyc_Hashtable_Bucket*)_T7;_T9= 
_check_null(_T8);_TA= i;_TB= (int)_TA;_TC= _T9[_TB];_T2C[_T5]= _TC.length;i= i + 1;goto _TL5E;_TL5D:;}_T3= (unsigned*)_T2C;}_T2= _tag_fat(_T3,sizeof(unsigned),_T2B);}{struct _fat_ptr counts=_T2;
unsigned sum=0U;{
unsigned i=0U;_TL62: if(i < osize)goto _TL60;else{goto _TL61;}
_TL60: _TD= counts;_TE= _TD.curr;_TF= (unsigned*)_TE;_T10= i;_T11= (int)_T10;_T12= _TF[_T11];sum= sum + _T12;
# 261
i= i + 1;goto _TL62;_TL61:;}
# 263
if(sum!=0U)goto _TL63;
sum= 1U;goto _TL64;_TL63: _TL64: {
unsigned i=0U;_TL68: if(i < osize)goto _TL66;else{goto _TL67;}
_TL66:{struct Cyc_Int_pa_PrintArg_struct _T2B;_T2B.tag= 1;_T14= i;_T15= (int)_T14;_T2B.f1= (unsigned long)_T15;_T13= _T2B;}{struct Cyc_Int_pa_PrintArg_struct _T2B=_T13;{struct Cyc_Int_pa_PrintArg_struct _T2C;_T2C.tag= 1;_T17= counts;_T18= _T17.curr;_T19= (unsigned*)_T18;_T1A= i;_T1B= (int)_T1A;_T1C= _T19[_T1B];_T1D= (int)_T1C;_T2C.f1= (unsigned long)_T1D;_T16= _T2C;}{struct Cyc_Int_pa_PrintArg_struct _T2C=_T16;{struct Cyc_Double_pa_PrintArg_struct _T2D;_T2D.tag= 3;_T1F= counts;_T20= _T1F.curr;_T21= (unsigned*)_T20;_T22= i;_T23= (int)_T22;_T24= _T21[_T23];_T25= sum;_T26= _T24 / _T25;_T27= _T26 * 100U;_T2D.f1= (double)_T27;_T1E= _T2D;}{struct Cyc_Double_pa_PrintArg_struct _T2D=_T1E;void*_T2E[3];_T2E[0]= & _T2B;_T2E[1]= & _T2C;_T2E[2]= & _T2D;_T28= Cyc_stderr;_T29= _tag_fat("%d: %d (%g pct)\n",sizeof(char),17U);_T2A= _tag_fat(_T2E,sizeof(void*),3);Cyc_fprintf(_T28,_T29,_T2A);}}}
# 265
i= i + 1;goto _TL68;_TL67:;}}}}}
