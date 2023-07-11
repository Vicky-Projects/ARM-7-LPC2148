#include <LPC214x.h>



#include "UART.h"
#include "TIMER.h"
char serdata[50];
int i=0,j=0;
int main(){
	initpll();
	initUART();
	IODIR0|=(1<<10);
	
	
	while(1){
		printUART("hello shri");
		NL();
		delayms(1000);
    		
	
	while((U0LSR & 0x01)==0)
		serdata[50]=receiveUART();	
	  delayms(1000);
	if(serdata=="hello LPC")
	{
	  IOSET0|=(1<<10);
	}else{
		IOSET0|=(1<<10);
}
	}
}

