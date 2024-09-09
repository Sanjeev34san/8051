#include<reg51.h>
sbit rs=P3^0;
sbit rw=P3^1;
sbit en=P3^2;

void delay();
void dat(char y);
void cmd(int x);

void main()
{
	
	cmd(0x0e);
	cmd(0x38);
	dat('A');
	dat('B');
	cmd(0xc0);
	dat('C');
	cmd(0x01);
}

void cmd(int x)
{
	P2=x;
	rs=0;
	rw=0;
	en=1;
	delay();
	en=0;
	delay();
	
}

void dat(char y)
{
	P2=y;
	rs=1;
	rw=0;
	en=1;
	delay();
	en=0;
	delay();	
}

void delay()
{
	int i;
	for(i=0;i<30000;i++);
}