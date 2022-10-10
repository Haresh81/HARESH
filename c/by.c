#include<stdio.h>
int main ()
{
	int i,j,a=-2;
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=i;j--)
		{
			a=a+1;
			printf("%d",a);
		}
			printf("\n");
	}
	return 0;
}