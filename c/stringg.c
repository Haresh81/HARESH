/*#include<stdio.h>
int main()
{
	char str[2];
	printf("enter strin=");
	scanf("%s",str);
	printf("\n string :%s",str);
	return 0;++
}*/

/*#include<stdio.h>
int main()
{
	char str[2];
	printf("enter strin=");
	scanf("%[^\n]",str);
	printf("\n string :%s",str);
	return 0;
}*/

#include<stdio.h>
int main()
{
	char str[2];
	printf("enter strin=");
	//scanf("%s",str);
	//printf("\n string :%s",str);
	gets(str);
	puts(str);
	return 0;
}