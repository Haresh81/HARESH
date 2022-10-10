/*
10 
20	30
30	50
40	70
50	90

*/

#include<stdio.h>
#define n 5
int min(int a[])
{
	int i,min;
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	printf("Minimum value of array %d",min);
}

int max(int b[])
{
	int i,max;
	max=b[0];
	for(i=0;i<n;i++)
	{
		if(b[i]>max)
		max=b[i];
	}
	printf("\n Maximum value of array %d",max);
}
int main()
{
	int i,a[n],b[n];
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
	
	}
	for(i=0;i<n;i++)
	{
		printf("enter b[%d]",i);
		scanf("%d",&b[i]);
	}
	min(a);
	max(b);
}

