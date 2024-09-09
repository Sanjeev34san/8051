#include<reg51.h>
void delay();
sbit D1=P1^0;
sbit D2=P1^1;
void main(){
int i;
int a[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f},                
P2=0x00;
for(i=0;i<99;i++)
{
	j=i%10;
	D1=1;
	D2=0;
	P2=a[j];
	delay();
	j=i/10;
	D1=0;
	D2=1;
	P2=a[j];
	delay();
} 
}
void delay(){
	int i;
	for(i=0;i<30000;i++);
}