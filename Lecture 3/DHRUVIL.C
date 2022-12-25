#include<stdio.h>
#include<conio.h>
 //swapping without using third variable
main()
{
   int a,b;
   clrscr();
   printf("enter value of a and b");
   scanf("%d%d",&a,&b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("a=%d,b=%d",a,b);
   getch();

}