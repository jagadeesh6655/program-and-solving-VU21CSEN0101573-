#include <stdio.h>
int main ()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	if(n%5==0&&n%11==0)
	printf("the number is divisible");
	else
	printf("the number is not divisible");
	return 0;
}
