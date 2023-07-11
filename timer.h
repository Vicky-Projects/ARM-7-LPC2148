#include <lpc21xx.h>
void delayms(unsigned int milli);
void delayms(unsigned int milli)
{
	T0TCR=0x00;
	T0PR=60000-1;
	T0TC=0;
	while(T0TC<milli);
	T0TCR=0x00;
}