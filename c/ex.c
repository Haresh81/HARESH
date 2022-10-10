#include<stdio.h>
int main ()
{
	int i,j,a=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{	
			printf("%d",a);
			a++;
		}
			printf("\n");
			a=a-4;
	}
	return 0;
}