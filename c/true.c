#include<stdio.h>
int main()
{
	int a=400,b=300,c=500;
	a>b?printf("a(%d) is largest",a)
	      : printf("b(%d) is largest",b)
	      : printf("c(%d) is largest",c);
	return 0;
}