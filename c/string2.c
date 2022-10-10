#include<stdio.h>
int main()
{
	char str[20];
	int i,j,k;
	printf("enter string=");
	gets(str);
	printf("string :%s",str);
	for(i=0;str[i]!=0;i++);
	printf("\n length=%d",i);
	k=i;
	printf("\n");
	for(j=0;j<=i;j++)
	{
		printf("\t %c",str[k--]);
	}
	return 0;
}