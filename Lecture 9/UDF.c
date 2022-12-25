#include<stdio.h> 
// UDF

  int addition(int a,int b) 
  {
	printf("sum is =%d\n",a+b);
  }

  int substraction(int a,int b) 
  {
	printf("sum is=%d\n",a-b);
  }

  int multiplication(int a,int b) 
  {
	printf("sum is=%d\n",a*b);
  }

  int division(int a,int b) 
  {
	printf("sum is=%d\n",a/b);
  }
  int modulus(int a,int b) 
  {
	printf("sum is=%d\n",a%b);
  }



main()
{
  int choice,a,b;
  
	printf("value of a=");
	scanf("%d",&a);
	
	printf("value of b=");
	scanf("%d",&b);
	
	do
	{
	printf("press 1 for addition\n");
	printf("press 2 for substraction\n");
	printf("press 3 for multiplication\n");
	printf("press 4 for division\n");
	printf("press 5 for modulus\n");
	printf("press 0 for exit\n\n");
	
	printf("enter any number :- ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			addition(a,b);
			break ;
			    
		case 2:
			substraction(a,b);
			break ;
		case 3:
			multiplication(a,b);
			break ;
		case 4:
			division(a,b);
			break ;
		case 5: 
	       	modulus(a,b);
		case 0: break ;
		
		default:printf("\n\nenter valid number..\n");
					
	} 
	
  }
   while(choice!=0);
    
}
