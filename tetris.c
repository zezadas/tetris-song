//José Moreira jmrm@ua.pt
//Francisco Faria

#include <detpic32.h>

#define A 	2273				//(1/426)*1000000
#define B	2028			   //(1/480)*1000000
#define C 	1911			  //(1/256)*1000000
#define D 	1703			 //(1/288)*1000000
#define E	1517		    //(1/320)*1000000
#define F 	1432		   //(1/342)*1000000
#define G 	1276		  //(1/384)*1000000
#define A2 	1136
#define DIV 1				// multiplo de 20 sff

void delay (unsigned int tempo){
resetCoreTimer();
while(readCoreTimer()<tempo*20/DIV);

}

void NOTA2 (unsigned int a){
int note = A2;
int i;
for(i=0;i<a/note;i++){
LATEbits.LATE3= !LATEbits.LATE3;
delay(note);
}
}

void NOTC (unsigned int a){
int note = C;
int i;
for(i=0;i<a/note;i++){
LATEbits.LATE3= !LATEbits.LATE3;
delay(note);
}
}

void NOTD (unsigned int a){
int note = D;
int i;
for(i=0;i<a/note;i++){
LATEbits.LATE3= !LATEbits.LATE3;
delay(note);
}
}

void NOTE (unsigned int a){
int note = E;
int i;
for(i=0;i<a/note;i++){
LATEbits.LATE3= !LATEbits.LATE3;
delay(note);
}
}

void NOTF (unsigned int a){
int note = F;
int i;
for(i=0;i<a/note;i++){
LATEbits.LATE3= !LATEbits.LATE3;
delay(note);
}
}

void NOTG (unsigned int a){
int note = G;
int i;
for(i=0;i<a/note;i++){
LATEbits.LATE3= !LATEbits.LATE3;
delay(note);
}
}

void NOTA (unsigned int a){
int note = A;
int i;
for(i=0;i<a/note;i++){
LATEbits.LATE3= !LATEbits.LATE3;
delay(note);
}
}

void NOTB (unsigned int a){
int note = B;
int i;
for(i=0;i<a/note;i++){
LATEbits.LATE3= !LATEbits.LATE3;
delay(note);
}
}



int main(void) {
TRISEbits.TRISE3 = 0;

while(1){

NOTE(500000);
delay(10000);

NOTB(250000);
delay(10000);
NOTC(250000);
delay(10000);
NOTD(500000);
delay(10000);

NOTC(250000);
delay(10000);
NOTB(250000);
delay(10000);
NOTA(500000);
delay(10000);

NOTA(250000);
delay(10000);
NOTC(250000);
delay(10000);
NOTE(500000);
delay(10000);

NOTD(250000);
delay(10000);
NOTC(250000);
delay(10000);
NOTB(500000);
delay(10000);

NOTB(250000);
delay(10000);
NOTC(250000);
delay(10000);
NOTD(500000);
delay(10000);

NOTE(500000);
delay(10000);

NOTC(500000);
delay(10000);
NOTA(500000);
delay(10000);
NOTA(500000);
delay(50000);

//2a parte

NOTD(500000);
delay(10000);

NOTF(250000);
delay(10000);
NOTA2(500000);
delay(10000);

NOTG(250000);
delay(10000);
NOTF(250000);
delay(10000);
NOTE(500000);
delay(10000);

NOTC(250000);
delay(10000);
NOTE(500000);
delay(10000);

NOTD(250000);
delay(10000);
NOTC(250000);
delay(10000);
NOTB(500000);
delay(10000);

NOTB(250000);
delay(10000);
NOTC(250000);
delay(10000);
NOTD(500000);
delay(10000);

NOTE(500000);
delay(10000);

NOTC(500000);
delay(10000);
NOTA(500000);
delay(10000);
NOTA(500000);
delay(50000);
}
return 0;
}

