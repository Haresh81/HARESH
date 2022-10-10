#include<stdio.h>
int main ()
{
	char i,j;
	for(i=1;i<=5;i+4)
	{
		for(j=1;j<=i;j++)
	{
		printf("\n %c\t%c",i+65,i+98);
	}
		printf("\n");
	}
	return 0;
}