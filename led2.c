#include <LPC214x.h>


#include "pll.h"
#include "timer.h"


int main(){
	initpll();
	IO0DIR|=(1<<5);
	while(1){
		IOSET0|=(1<<5);
		delayms(1000);
		IO0CLR|=(1<<5);
		delayms(3000);
	}
}

