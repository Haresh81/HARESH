#include<stdio.h>
int main()
{
	char str[10];
    int i;
	printf("enter strin=");
	scanf("%s",str);
	printf("\n string :%s",str);
    for(i=0;str[i]!='\0';i++);
    printf("\n Length : %d",i);
	return 0;
}
