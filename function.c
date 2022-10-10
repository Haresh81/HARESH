
#include<stdio.h>
void newfunction ()
{
	printf("\n newfunction called...");
	printf("\n oldfunction called...");
	printf("\n firstfunction called...\n");
	
}
int main()
{
	printf("\n beforefunction called...");
	newfunction();

	newfunction();
	printf("\n after function called...");
	
}