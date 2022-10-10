#include<stdio.h>
int main ()
{
	int i=1,n;
	printf("entrer n");
	scanf("%d",&n);
	i=n;
	do
	{
	
		printf(" %d",i--);
		
	}
	while(i>=1);
	return 0;
}