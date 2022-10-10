#include<stdio.h>
int fact(int n)
{
	if(n==1)
	{
		return 0;
	}
	else
	{
		return n*fact(n-1);
	}
}
int main()
{
	int n,f;
	printf("enter the number whose factorial you want to calculater");
	scanf("%d",&n);
	f=fact(n);
	printf("factorial=%d",f);
	return 0;
}