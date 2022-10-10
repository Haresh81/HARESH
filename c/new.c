#include<stdio.h>
int main ()
{
	int a[5],i,b[5],j;
	for(i=0;i<5;i++)
	{
		printf("enter a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(j=0;j<5;j++)
	{
		printf("enter b[%d]=",j);
		scanf("%d",&b[j]);
	}
	printf("\ta\tb\tc");
	for(i=0;i<5;i++)
	{
		printf("\n\t%d\t%d\t%d",a[i],b[i],a[i]+b[i]);
	}
	return 0;
}