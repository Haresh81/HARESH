#include<stdio.h>
void dopattern(int a,int b)
{
	
		printf("\n pattern %d",a);
		
}
int main() 
{
	int i,j;
	printf("before called..");
	for(i=1;i<=5;i++)
	{
	for(j=1;j<=i;j++)
		{
			dopattern(i,j);
		}
			printf("\n");
	}
		
	printf("after called..");
	return 0;
	
}