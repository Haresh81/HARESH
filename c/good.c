#include<stdio.h>
int main ()
{	
	int i,j,x=0;
	for(i=1;i<=5;i++)
	{
	for(j=1;j<=5;j++)
	{	
	x=x+1;
	printf("\t %d",x);
	}
	printf("\n ");
	}	
	return 0;
}