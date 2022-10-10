#include<stdio.h>
#define n 5
#define pr printf
int total_array(int a[])
{
	int i;
	for(i=0;i<n;i++)
	{
		pr("%d\t",a[i]);
	}
}
int main()
{
	int i,a[n];
	for(i=0;i<n;i++)
	{
		pr("enter a[%d] :",i);
		scanf("%d",&a[i]);
	}
	total_array(a);
}
