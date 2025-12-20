#include <cyc_include.h>
 struct Cyc_shorts_tag{struct Cyc_shorts_tag*next;short value;};
# 76 "cyclone/tools/bison/gram.h"
extern int Cyc_nitems;
extern int Cyc_nrules;
# 79
extern int Cyc_ntokens;
extern int Cyc_nvars;
# 82
extern struct _fat_ptr Cyc_ritem;
extern struct _fat_ptr Cyc_rlhs;
# 30 "cyclone/tools/bison/nullable.cyc"
struct _fat_ptr Cyc_nullable;
# 33
void Cyc_set_nullable (void){struct _fat_ptr _T0;int _T1;unsigned _T2;char*_T3;unsigned _T4;unsigned _T5;struct _fat_ptr _T6;int _T7;struct _fat_ptr _T8;int _T9;short*_TA;unsigned _TB;unsigned _TC;struct _fat_ptr _TD;int _TE;short*_TF;unsigned _T10;unsigned _T11;struct _fat_ptr _T12;int _T13;struct Cyc_shorts_tag**_T14;unsigned _T15;unsigned _T16;struct _fat_ptr _T17;int _T18;struct _fat_ptr _T19;int _T1A;int _T1B;struct Cyc_shorts_tag*_T1C;unsigned _T1D;unsigned _T1E;unsigned _T1F;struct _fat_ptr _T20;unsigned char*_T21;short*_T22;short _T23;int _T24;struct _fat_ptr _T25;unsigned char*_T26;short*_T27;short _T28;int _T29;struct _fat_ptr _T2A;struct _fat_ptr*_T2B;struct _fat_ptr _T2C;unsigned char*_T2D;short*_T2E;short _T2F;short _T30;int _T31;unsigned char*_T32;short*_T33;short _T34;struct _fat_ptr _T35;int _T36;unsigned char*_T37;char*_T38;char _T39;int _T3A;struct _fat_ptr _T3B;int _T3C;unsigned char*_T3D;char*_T3E;unsigned _T3F;unsigned char*_T40;char*_T41;struct _fat_ptr*_T42;struct _fat_ptr _T43;unsigned char*_T44;short*_T45;int _T46;struct _fat_ptr*_T47;struct _fat_ptr _T48;unsigned char*_T49;short*_T4A;short _T4B;struct _fat_ptr*_T4C;struct _fat_ptr _T4D;unsigned char*_T4E;short*_T4F;short _T50;char _T51;int _T52;struct _fat_ptr*_T53;struct _fat_ptr _T54;unsigned char*_T55;short*_T56;short _T57;struct _fat_ptr _T58;int _T59;unsigned char*_T5A;short*_T5B;struct _fat_ptr _T5C;unsigned char*_T5D;struct Cyc_shorts_tag*_T5E;struct _fat_ptr _T5F;int _T60;unsigned char*_T61;struct Cyc_shorts_tag**_T62;struct _fat_ptr _T63;unsigned char*_T64;struct Cyc_shorts_tag*_T65;int _T66;struct _fat_ptr _T67;unsigned char*_T68;struct Cyc_shorts_tag**_T69;int _T6A;struct _fat_ptr _T6B;unsigned char*_T6C;struct _fat_ptr*_T6D;struct _fat_ptr*_T6E;struct _fat_ptr _T6F;unsigned char*_T70;short*_T71;short _T72;struct _fat_ptr _T73;unsigned char*_T74;short*_T75;struct _fat_ptr _T76;unsigned char*_T77;short*_T78;struct _fat_ptr _T79;struct _fat_ptr*_T7A;struct _fat_ptr _T7B;unsigned char*_T7C;short*_T7D;short _T7E;int _T7F;unsigned char*_T80;struct Cyc_shorts_tag**_T81;struct Cyc_shorts_tag*_T82;struct _fat_ptr _T83;unsigned char*_T84;unsigned _T85;struct _fat_ptr _T86;unsigned char*_T87;struct Cyc_shorts_tag*_T88;short _T89;struct _fat_ptr _T8A;unsigned char*_T8B;struct Cyc_shorts_tag*_T8C;struct Cyc_shorts_tag*_T8D;struct _fat_ptr _T8E;int _T8F;unsigned char*_T90;short*_T91;short _T92;int _T93;struct _fat_ptr _T94;int _T95;unsigned char*_T96;short*_T97;short _T98;struct _fat_ptr _T99;int _T9A;unsigned char*_T9B;char*_T9C;char _T9D;int _T9E;struct _fat_ptr _T9F;int _TA0;unsigned char*_TA1;char*_TA2;unsigned _TA3;unsigned char*_TA4;char*_TA5;struct _fat_ptr*_TA6;struct _fat_ptr _TA7;unsigned char*_TA8;short*_TA9;int _TAA;struct _fat_ptr _TAB;int _TAC;
# 36
struct _fat_ptr r;
struct _fat_ptr s1;
struct _fat_ptr s2;
register int ruleno;
register int symbol;
struct _fat_ptr p;
# 43
struct _fat_ptr squeue;
struct _fat_ptr rcount;
struct _fat_ptr rsets;
struct _fat_ptr relts;
char any_tokens;
struct _fat_ptr r1;_T1= Cyc_nvars;_T2= (unsigned)_T1;{unsigned _TAD=_T2 + 1U;_T4= _check_times(_TAD,sizeof(char));{char*_TAE=_cycalloc_atomic(_T4);{unsigned _TAF=_TAD;unsigned i;i= 0;_TL3: if(i < _TAF)goto _TL1;else{goto _TL2;}_TL1: _T5= i;
# 54
_TAE[_T5]= '\000';i= i + 1;goto _TL3;_TL2: _TAE[_TAF]= 0;}_T3= (char*)_TAE;}_T0= _tag_fat(_T3,sizeof(char),_TAD);}{struct _fat_ptr temp_string=_T0;_T6= temp_string;_T7= - Cyc_ntokens;
Cyc_nullable= _fat_ptr_plus(_T6,sizeof(char),_T7);_T9= Cyc_nvars;{unsigned _TAD=(unsigned)_T9;_TB= _check_times(_TAD,sizeof(short));{short*_TAE=_cycalloc_atomic(_TB);{unsigned _TAF=_TAD;unsigned _new2_cyclone;_new2_cyclone= 0;_TL7: if(_new2_cyclone < _TAF)goto _TL5;else{goto _TL6;}_TL5: _TC= _new2_cyclone;
# 57
_TAE[_TC]= 0;_new2_cyclone= _new2_cyclone + 1;goto _TL7;_TL6:;}_TA= (short*)_TAE;}_T8= _tag_fat(_TA,sizeof(short),_TAD);}squeue= _T8;
s2= squeue;s1= s2;_TE= Cyc_nrules + 1;{unsigned _TAD=(unsigned)_TE;_T10= _check_times(_TAD,sizeof(short));{short*_TAE=_cycalloc_atomic(_T10);{unsigned _TAF=_TAD;unsigned _new2_cyclone;_new2_cyclone= 0;_TLB: if(_new2_cyclone < _TAF)goto _TL9;else{goto _TLA;}_TL9: _T11= _new2_cyclone;
_TAE[_T11]= 0;_new2_cyclone= _new2_cyclone + 1;goto _TLB;_TLA:;}_TF= (short*)_TAE;}_TD= _tag_fat(_TF,sizeof(short),_TAD);}rcount= _TD;_T13= Cyc_nvars;{unsigned _TAD=(unsigned)_T13;_T15= _check_times(_TAD,sizeof(struct Cyc_shorts_tag*));{struct Cyc_shorts_tag**_TAE=_cycalloc(_T15);{unsigned _TAF=_TAD;unsigned _new2p_cyclone;_new2p_cyclone= 0;_TLF: if(_new2p_cyclone < _TAF)goto _TLD;else{goto _TLE;}_TLD: _T16= _new2p_cyclone;
_TAE[_T16]= 0;_new2p_cyclone= _new2p_cyclone + 1;goto _TLF;_TLE:;}_T14= (struct Cyc_shorts_tag**)_TAE;}_T12= _tag_fat(_T14,sizeof(struct Cyc_shorts_tag*),_TAD);}_T17= _T12;_T18= - Cyc_ntokens;rsets= _fat_ptr_plus(_T17,sizeof(struct Cyc_shorts_tag*),_T18);_T1A= Cyc_nitems + Cyc_nvars;_T1B= _T1A + 1;{unsigned _TAD=(unsigned)_T1B;_T1D= _check_times(_TAD,sizeof(struct Cyc_shorts_tag));{struct Cyc_shorts_tag*_TAE=_cycalloc(_T1D);{unsigned _TAF=_TAD;unsigned _temp_;_temp_= 0;_TL13: if(_temp_ < _TAF)goto _TL11;else{goto _TL12;}_TL11: _T1E= _temp_;
# 65
_TAE[_T1E].next= 0;_T1F= _temp_;_TAE[_T1F].value= 0;_temp_= _temp_ + 1;goto _TL13;_TL12:;}_T1C= (struct Cyc_shorts_tag*)_TAE;}_T19= _tag_fat(_T1C,sizeof(struct Cyc_shorts_tag),_TAD);}relts= _T19;
p= relts;
# 68
r= Cyc_ritem;
_TL14: _T20= r;_T21= _check_fat_subscript(_T20,sizeof(short),0U);_T22= (short*)_T21;_T23= *_T22;_T24= (int)_T23;if(_T24)goto _TL15;else{goto _TL16;}
# 71
_TL15: _T25= r;_T26= _T25.curr;_T27= (short*)_T26;_T28= *_T27;_T29= (int)_T28;if(_T29 >= 0)goto _TL17;_T2A= Cyc_rlhs;_T2B= & r;_T2C= 
# 73
_fat_ptr_inplace_plus_post(_T2B,sizeof(short),1);_T2D= _T2C.curr;_T2E= (short*)_T2D;_T2F= *_T2E;_T30= - _T2F;_T31= (int)_T30;_T32= _check_fat_subscript(_T2A,sizeof(short),_T31);_T33= (short*)_T32;_T34= *_T33;symbol= (int)_T34;
if(symbol < 0)goto _TL19;_T35= Cyc_nullable;_T36= symbol;_T37= _check_fat_subscript(_T35,sizeof(char),_T36);_T38= (char*)_T37;_T39= *_T38;_T3A= (int)_T39;if(_T3A)goto _TL19;else{goto _TL1B;}
# 76
_TL1B: _T3B= Cyc_nullable;_T3C= symbol;{struct _fat_ptr _TAD=_fat_ptr_plus(_T3B,sizeof(char),_T3C);_T3D= _TAD.curr;_T3E= (char*)_T3D;{char _TAE=*_T3E;char _TAF='\001';_T3F= _get_fat_size(_TAD,sizeof(char));if(_T3F!=1U)goto _TL1C;if(_TAE!=0)goto _TL1C;if(_TAF==0)goto _TL1C;_throw_arraybounds();goto _TL1D;_TL1C: _TL1D: _T40= _TAD.curr;_T41= (char*)_T40;*_T41= _TAF;}}_T42= & s2;_T43= 
_fat_ptr_inplace_plus_post(_T42,sizeof(short),1);_T44= _check_fat_subscript(_T43,sizeof(short),0U);_T45= (short*)_T44;_T46= symbol;*_T45= (short)_T46;goto _TL1A;_TL19: _TL1A: goto _TL18;
# 82
_TL17: r1= r;
any_tokens= '\000';_T47= & r;_T48= 
_fat_ptr_inplace_plus_post(_T47,sizeof(short),1);_T49= _T48.curr;_T4A= (short*)_T49;_T4B= *_T4A;symbol= (int)_T4B;_TL21: if(symbol > 0)goto _TL1F;else{goto _TL20;}
# 86
_TL1F: if(symbol >= Cyc_ntokens)goto _TL22;
any_tokens= '\001';goto _TL23;_TL22: _TL23: _T4C= & r;_T4D= 
# 84
_fat_ptr_inplace_plus_post(_T4C,sizeof(short),1);_T4E= _check_fat_subscript(_T4D,sizeof(short),0U);_T4F= (short*)_T4E;_T50= *_T4F;symbol= (int)_T50;goto _TL21;_TL20: _T51= any_tokens;_T52= (int)_T51;
# 90
if(_T52)goto _TL24;else{goto _TL26;}
# 92
_TL26: ruleno= - symbol;
r= r1;_T53= & r;_T54= 
_fat_ptr_inplace_plus_post(_T53,sizeof(short),1);_T55= _T54.curr;_T56= (short*)_T55;_T57= *_T56;symbol= (int)_T57;_TL2A: if(symbol > 0)goto _TL28;else{goto _TL29;}
# 96
_TL28: _T58= rcount;_T59= ruleno;_T5A= _check_fat_subscript(_T58,sizeof(short),_T59);_T5B= (short*)_T5A;*_T5B= *_T5B + 1;_T5C= p;_T5D= _check_fat_subscript(_T5C,sizeof(struct Cyc_shorts_tag),0U);_T5E= (struct Cyc_shorts_tag*)_T5D;_T5F= rsets;_T60= symbol;_T61= _check_fat_subscript(_T5F,sizeof(struct Cyc_shorts_tag*),_T60);_T62= (struct Cyc_shorts_tag**)_T61;
_T5E->next= *_T62;_T63= p;_T64= _T63.curr;_T65= (struct Cyc_shorts_tag*)_T64;_T66= ruleno;
_T65->value= (short)_T66;_T67= rsets;_T68= _T67.curr;_T69= (struct Cyc_shorts_tag**)_T68;_T6A= symbol;_T6B= p;_T6C= _untag_fat_ptr(_T6B,sizeof(struct Cyc_shorts_tag),1U);
_T69[_T6A]= (struct Cyc_shorts_tag*)_T6C;_T6D= & p;
_fat_ptr_inplace_plus(_T6D,sizeof(struct Cyc_shorts_tag),1);_T6E= & r;_T6F= 
# 94
_fat_ptr_inplace_plus_post(_T6E,sizeof(short),1);_T70= _check_fat_subscript(_T6F,sizeof(short),0U);_T71= (short*)_T70;_T72= *_T71;symbol= (int)_T72;goto _TL2A;_TL29: goto _TL25;_TL24: _TL25: _TL18: goto _TL14;_TL16:
# 106
 _TL2B: _T73= s1;_T74= _T73.curr;_T75= (short*)_T74;_T76= s2;_T77= _T76.curr;_T78= (short*)_T77;if(_T75 < _T78)goto _TL2C;else{goto _TL2D;}
# 108
_TL2C: _T79= rsets;_T7A= & s1;_T7B= _fat_ptr_inplace_plus_post(_T7A,sizeof(short),1);_T7C= _check_fat_subscript(_T7B,sizeof(short),0U);_T7D= (short*)_T7C;_T7E= *_T7D;_T7F= (int)_T7E;_T80= _check_fat_subscript(_T79,sizeof(struct Cyc_shorts_tag*),_T7F);_T81= (struct Cyc_shorts_tag**)_T80;_T82= *_T81;p= _tag_fat(_T82,sizeof(struct Cyc_shorts_tag),1U);
_TL2E: _T83= p;_T84= _T83.curr;_T85= (unsigned)_T84;if(_T85)goto _TL2F;else{goto _TL30;}
# 111
_TL2F: _T86= p;_T87= _check_fat_subscript(_T86,sizeof(struct Cyc_shorts_tag),0U);_T88= (struct Cyc_shorts_tag*)_T87;_T89= _T88->value;ruleno= (int)_T89;_T8A= p;_T8B= _T8A.curr;_T8C= (struct Cyc_shorts_tag*)_T8B;_T8D= _T8C->next;
p= _tag_fat(_T8D,sizeof(struct Cyc_shorts_tag),1U);_T8E= rcount;_T8F= ruleno;_T90= _check_fat_subscript(_T8E,sizeof(short),_T8F);_T91= (short*)_T90;
*_T91= *_T91 + -1;_T92= *_T91;_T93= (int)_T92;if(_T93!=0)goto _TL31;_T94= Cyc_rlhs;_T95= ruleno;_T96= _check_fat_subscript(_T94,sizeof(short),_T95);_T97= (short*)_T96;_T98= *_T97;
# 115
symbol= (int)_T98;
if(symbol < 0)goto _TL33;_T99= Cyc_nullable;_T9A= symbol;_T9B= _check_fat_subscript(_T99,sizeof(char),_T9A);_T9C= (char*)_T9B;_T9D= *_T9C;_T9E= (int)_T9D;if(_T9E)goto _TL33;else{goto _TL35;}
# 118
_TL35: _T9F= Cyc_nullable;_TA0= symbol;{struct _fat_ptr _TAD=_fat_ptr_plus(_T9F,sizeof(char),_TA0);_TA1= _TAD.curr;_TA2= (char*)_TA1;{char _TAE=*_TA2;char _TAF='\001';_TA3= _get_fat_size(_TAD,sizeof(char));if(_TA3!=1U)goto _TL36;if(_TAE!=0)goto _TL36;if(_TAF==0)goto _TL36;_throw_arraybounds();goto _TL37;_TL36: _TL37: _TA4= _TAD.curr;_TA5= (char*)_TA4;*_TA5= _TAF;}}_TA6= & s2;_TA7= 
_fat_ptr_inplace_plus_post(_TA6,sizeof(short),1);_TA8= _check_fat_subscript(_TA7,sizeof(short),0U);_TA9= (short*)_TA8;_TAA= symbol;*_TA9= (short)_TAA;goto _TL34;_TL33: _TL34: goto _TL32;_TL31: _TL32: goto _TL2E;_TL30: goto _TL2B;_TL2D:
# 126
 squeue= _tag_fat(0,0,0);
rcount= _tag_fat(0,0,0);_TAB= rsets;_TAC= Cyc_ntokens;
rsets= _fat_ptr_plus(_TAB,sizeof(struct Cyc_shorts_tag*),_TAC);
rsets= _tag_fat(0,0,0);
# 131
relts= _tag_fat(0,0,0);}}
# 135
void Cyc_free_nullable (void){struct _fat_ptr _T0;int _T1;_T0= Cyc_nullable;_T1= Cyc_ntokens;
# 138
Cyc_nullable= _fat_ptr_plus(_T0,sizeof(char),_T1);
Cyc_nullable= _tag_fat(0,0,0);}
