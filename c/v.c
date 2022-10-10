#include<stdio.h>
int main()
{
	char str[20],a[20];
	int i,j,k;
	printf("enter string=");
	gets(str);
	printf("srting :%s",str);
	for(i=0;str[i]!=0;i++);
	{
		printf("\n length=%d",i);
	}
	for(j=i-1;j>=0;j--)
	{
		//printf("\n:%c",str[j]);
		a[j]=str[k];
		k++;	
	}
		a[j]='\0';
		printf("\n reverse :%s",a);
	return 0;
}