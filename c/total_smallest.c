#include<stdio.h>
#define n 5
int total(int a[])
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
		if(i!=0)
		printf("\t %d",a[i]+a[i-1]);	
	}
}       
int main()
{
	int i,a[n];
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	total(a);
}                     