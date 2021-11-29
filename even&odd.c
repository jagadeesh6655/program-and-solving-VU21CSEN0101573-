#include <stdio.h>
int main ()
{
	int i,j,k;
	printf("enter the 1.start 2.end :-");
	scanf("%d %d",&k,&j);
	for (i=k;i<=j;i+=2)
	printf("%d ",i);
	
