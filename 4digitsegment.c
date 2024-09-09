#include<reg51.h>
int a[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
int i,j,k,l,m;
sbit d1=P1^0;
sbit d2=P1^1;
sbit d3=P1^2;
sbit d4=P1^3;
void delay();
void main()
{

	for(i=0;i<9999;i++)
	{
		j=i/1000;
		d1=1;
		d2=0;
		d3=0;
		d4=0;
		P2=a[j];
		delay();
		
		k=i/100;
		j=k%10;
		d1=0;
		d2=1;
		d3=0;
		d4=0;
		P2=a[j];
		delay();
		
		l=i/10;
		j=l%10;
		d1=0;
		d2=0;
		d3=1;
		d4=0;
		P2=a[j];
		delay();
		
		j=i%10;
		d1=0;
		d2=0;
		d3=0;
		d4=1;
		P2=a[j];
		delay();
	}
}
void delay()
{
	unsigned int i;
	for(i=0;i<40000;i++);
}