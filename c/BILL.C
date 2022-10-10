#include<stdio.h>
#include<conio.h>
 void main ()
 {
	float a,b,c;
	clrscr();
	printf("  enter value for unit=");
	scanf("%f",&b);
	if(b<101)
	{
	a=b*0.60+50;
	printf(" bill=%f",a);
	}
	else if(b>100&&b<301)
	{
	a=(b-100)*0.80+50+60;
	printf(" bill=%f",a);

	}
	else if(b>300)
	{
	 a=(b-300)*0.90+50+220;
	 printf("\n bill=%f",a);
	}
	if(a>300)
	{
	c=a*0.15;
	printf("\n surcherge=%f",c);
	printf("\n total bill=%f",a+c);
	}
	getch();
 }








