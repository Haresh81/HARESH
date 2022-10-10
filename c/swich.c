#include<stdio.h>
int main()
{
	int a=10,b=5,ch;
	printf(" a=%d \t b=%d",a,b);
	printf("\n1.adition");
	printf("\n2.subtraction");
	printf("\n3.multiplication");
	printf("\n4.division");
	printf("\n1.enter your choice :");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\n\n a+b=%d",a+b);
			break;
		case 2:
			printf("\n\n a-b=%d",a-b);
			break;
		case 3:
			printf("\n\n a*b=%d",a*b);
			break;
		case 4: 
			printf("\n\n a/b=%d",a/b);
			break;
		default:
			printf("\n wrong choice......");
			break;
	}
}