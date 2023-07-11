#include<lpc214x.h>

int ldr;
int main(){
	PINSEL0=0x00000000;
	IODIR0=0x00000010;
	while(1){
		//ldr=IOPIN0;
		if(IOPIN0==0x00000100)
			IOSET0|=0x00000010;
		else
			IOCLR0|=0x00000010;
	}
}	
		