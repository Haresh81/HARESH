#include<stdio.h>
int main ()
{
	int a[10][10],i,j,x=0,y=0,z=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
		if(i==j)
		x=x+a[i][j];
		else if(i>j)
		y=y+a[i][j];
		else
		z=z+a[i][j];
		printf("\t %d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n diagonal element %d",x);
	printf("\n upper   triangle %d",y);
	printf("\n lower   triangle %d",z);
	return 0;
}