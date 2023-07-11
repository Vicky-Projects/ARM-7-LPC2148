#include <LPC214x.h>


#include "pll.h"
#include "delay.h"








int main(){
	initpll();
	IODIR0|=(0X01<<5);
	while(1){
		IOSET0|=(0X01<<5);
		delayms(1000);
		IOCLR0|=(0X01<<5);
		delayms(3000);
	
}
	}
