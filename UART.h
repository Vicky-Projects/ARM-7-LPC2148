#include <LPC214x.h>
#include "PLL.h"
void initUART(void);
void sendUART(unsigned char mydata);
unsigned char receiveUART(void);
void printUART(unsigned char mydata[]);
void NL(void);


void initUART(void)
{
	initpll();
	PINSEL0=0x05;
	U0LCR=0X83;  // DLAB=1, 11 8BIT uart
	U0DLL=0X87;  // 0X0187 FOR (9600) 391
	U0DLM=0X01;
	U0LCR=0X03;
	
}

void sendUART(unsigned char mydata)
{
	U0THR = mydata;
	while((U0LSR & (0x01<<5))==0); //THREmpty
	
	
	
	
}

unsigned char receiveUART(void)
{
	unsigned char mydata;
	while((U0LSR & 0x01)==0);
	mydata=U0RBR;
	return mydata;
}
	
void printUART(unsigned char mydata[])
{
	int i = 0;
	while(mydata[i]!='\0')
	{
		sendUART(mydata[i]);
		i++;
	}
	
	
	
}
void NL(void)
	{
	sendUART(13);
	sendUART(10);
}