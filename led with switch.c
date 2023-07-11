#include<lpc21xx.h>

unsigned char swstatus;

void delay(unsigned int x){
	while(x--);
}
int main(){
	PINSEL0=0x00000000;
	//IODIR0=0X11111110; 
	IODIR0=0x00000002;
	while(1)
	{
		//swstatus=(IOPIN0&0x01);
		if(IOPIN0==0x01)
			IOSET0|=0x00000002;
		else
			IOCLR0|=0x00000002;
	}
	
}

