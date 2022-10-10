#include<stdio.h>
int  main ()
{
	int i,j,a='A';
	for(i='A';i<='E';i++)
	{
		
		for(j='A';j<=i;j++)
		{
		if(j%2==0)
		
			printf("%c",a+32);
			else
			printf("%c",a);
			a++;
		
		}
		printf("\n");
	}

	return 0;
}