#include<stdio.h>
int main()
{
	int a[5][5],b[5][5],c[5][5],i,j;
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
			printf("enter b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);		
	
		}
	}
		printf("\t\ta\t\t\tb\t\t\ttotal\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %d",a[i][j]);
		}
		for(j=0;j<3;j++)
		{
			printf("\t %d",b[i][j]);
		}
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("\t %d",c[i][j]);
		}
		printf("\n");
	}	
	return 0;
	
}