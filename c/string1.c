#include<stdio.h>
int main()
{
	char str[10];
	int i;
	printf("enter string=");
	scanf("%s",str);
	printf("\n string :%s",str);
	for(i=0;str[i]!='\0';i++);
	printf("\n length :%d",i);
	return 0;
	
}