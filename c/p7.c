#include<stdio.h>
int main ()
{
	int i,j,a=-2;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			a=a+2;			
			printf("%d",a);
				
		}
			printf("\n");
	}
	return 0;
}