  #include <stdio.h.>
  int main ()
  {
  	int a,b,c,d,e,ch;
  	float f,g;
  	printf("enter your choice");
  	scanf("%d",&ch);
  	
  	a=30;
  	b=20;
  	c=a+b;
  	d=a-b;
  	e=a*b;
  	f=a/b;
  	
  	switch (ch)
  	{
    case 1 :
  	printf("the addition of two numbers :%d",c);
  	break;
   
    case 2 :
    printf("the subtraction of two numbers :%d",d);
    break;
    
    case 3 :
    printf("the multiplication of two numbers :%d",e);
    break;
    
    case 4 :
    printf("the division of two numbers :%d",f);
    break;
    default :
    printf("enter correct choice");
    	
}

	return 0;
}
  	
