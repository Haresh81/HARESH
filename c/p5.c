#include<stdio.h>
int main ()
{
	int i,j,a=64;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			a=a+1;
			printf("%c",a);
			
		}
			printf("\n");
	}
	return 0;
}