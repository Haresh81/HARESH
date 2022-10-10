#include<stdio.h>
int a[5],b[5],c[5],d[5],bi[5],n[5],gst[5],i;
void dosum()
{
	for(i=0;i<5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("b[%d]=",i);
		scanf("%d",&b[i]);
	}
}
void dosum1()
{
	for(i=0;i<5;i++)
	{
		c[i]=a[i]*b[i];
		
		d[i]=c[i]*0.05;
	
		bi[i]=c[i]-d[i];
		gst[i]=bi[i]*0.18;
		
		n[i]=bi[i]+gst[i];

		
	}
}
void dosum2()
{
	printf("\n a\tb\tc\td\tbi\tn\tgst");
	for(i=0;i<5;i++)
	{
		printf("\n %d\t%d\t%d\t%d\t%d\t%d\t%d",a[i],b[i],c[i],d[i],bi[i],gst[i],n[i]);
	}
}
int main()
{
	dosum();
	dosum1();
	dosum2();
	return 0;
}