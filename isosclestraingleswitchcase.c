#include <stdio.h>
 int main ()
 {
 	int a,b,c;
 	printf("enter the value of a,b,c");
 	scanf("%d %d %d" ,&a,&b,&c);
 	switch(a==b & b==c && c==a)
 	{
 		case 1:
 		printf("the triangle is equilateral");
 		break;
 		case 0:
 			switch(a==b ||  b==c || c==a)
 			{
 				case 1:
				 printf("the triangle is isoscles");
				 break;
				 case 0:
				printf("the triangle is scalene");
				break;
			}
}

}
