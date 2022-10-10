#include<stdio.h>
int main ()
{
	int a[5][5],i,j;
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
		printf("enter a[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	return 0;
}



