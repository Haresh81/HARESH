#include<stdio.h>
int main ()
{
	int a[5],b[5],c[5],i;
	for(i=0;i<5;i++)
	{
		printf("enter a[%d]=",i);
		scanf("%d",&a[i]);
		
		printf("enter b[%d]=",i);
		scanf("%d",&b[i]);

		printf("enter c[%d]=",i);
		scanf("%d",&c[i]);
		}
		printf("maths \t physics \t chemistry");
	for(i=0;i<5;i++)
		{
		
		printf("\n a[%d]:%d\tb[%d]:%d\tc[%d]:%d",i,a[i],i,b[i],i,c[i]);
	}
	return 0;
}