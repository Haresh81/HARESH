/*#include<stdio.h>
int main() 
{
	int a=10,*p;
	p=&a;
	printf("\n value a:%d",a);
	printf("\n address a:%u",&a);
	printf("\n address a using p:%u",p);
	printf("\n address p:%u",&p);
	printf("\n value a using :%d",*p);
}*/



#include<stdio.h>
int main()
{
	int arr[5]={23,43,54,56,44};
	int *p=NULL;
	int i;
	p=&arr;
	printf("array elements..\n");
	printf("value\t address\n");
	printf("_________\n");
	for(i=0;i<5;i++)
	{
		printf("\n%d\t%u",*(p+i),(p+i));
	}
	return 0;
}
