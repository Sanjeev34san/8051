#include<reg51.h>
sbit rs=P3^0;
sbit rw=P3^1;
sbit en=P3^2;
char a[]={"HELLO"};
char b[]={"WORLD"};
int i,j;
void delay();
void cmd(int x);
void dat(char y);
void main()
{
	cmd(0x0e);
	cmd(0x80);
	cmd(0x38);
	for(i=0;i<5;i++)
	{
		dat(a[i]);
	}
	cmd(0x14);
	for(j=0;j<5;j++)
	{
		dat(b[j]);
	}
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
	int j;
	for(j=0;j<30000;j++);
}