#include<stdio.h>
int main ()
{
	int i,j,a=15;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			j=i+15;
			printf("%d",j);
		}
			printf("\n");
	}
	return 0;
} 