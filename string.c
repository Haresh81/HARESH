#include<stdio.h>
void main()
{
	char str[10],str1[10];
	int i,a,j,b=0;
	printf("enter string=");
	gets();
	printf("\n string :%s",str);
	for(i=0;str[i]!='\0';i++);
	{
	printf("\n length :%d",i);
	}
	for(j=i-1;j>=0;j--)
	{
		printf("\n reverse string :%s",str);
	}
	return 0;
}






