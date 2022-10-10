#include<stdio.h>
int main ()
{
	int a[5][5],i,j,x=0,y=0,z=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	
		{
			if(i==j)
			x=x+a[i][j];
			else if(j>i)
			y=y+a[i][j];
			else if(j<i)
			z=z+a[i][j];
			printf("\t total %d",a[i][j]);
		}
		printf("\n");
		
	}
		printf("\n diagonal\t=%d",x);
		printf("\n upper triangle=%d",y);
		printf("\n lower triangle=%d",z);
	return 0;
}