#include<stdio.h>
int main()
{
	int a=10,b=20,*p,*c;
	p=&a;
	c=&b;
	*p=*p+*c;
	*c=*p-*c;
	*p=*p-*c;
	printf("\n *p=%d",*p);
	printf("\n *c=%d",*c);
	return 0;
	
}