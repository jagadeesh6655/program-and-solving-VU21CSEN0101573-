#include <stdio.h>
int main()
{
	int n,u; 
	int a;
	unsigned factorial=1;
	printf("enter the number");
	scanf("%d",&n);
	for (a=1;a <= n;a++)
	{
		factorial = factorial*a;
	}
	printf("\n\n %d!=%1u",n,factorial);
	return 0;
}
	
