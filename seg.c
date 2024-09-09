#include<reg51.h>
sbit sw1=P1^0;
sbit sw2=P1^1;
void delay();
void main()
{
	P2=0x00;
	if(sw1==1)
	{
	P2=0x6f;
	delay();
	
	P2=0x7f;
	delay();
	
	P2=0x07;
	delay();
	
	P2=0x7d;
	delay();
	
	P2=0x6d;
	delay();
	
	P2=0x66;
	delay();
	
	P2=0x4f;
	delay();
	
	P2=0x5b;
	delay();
	
	P2=0x06;
	delay();
	
	P2=0x3f;
	delay();
}
	else if(sw2==1)
	{
	P2=0x3f;
	delay();
	
	P2=0x06;
	delay();
	
	P2=0x5b;
	delay();
	
	P2=0x4f;
	delay();
	
	P2=0x66;
	delay();
	
	P2=0x6d;
	delay();
	
	P2=0x7d;
	delay();
	
	P2=0x07;
	delay();
	
	P2=0x7f;
	delay();
	
	P2=0x6f;
	delay();
	}
	else 
	{
		P2=0x00;
	}
}
void delay()
{
	unsigned int i;
	for(i=0;i<30000;i++);
}