#include<stdio.h>
#include<conio.h>
 //swapping of using third variable
main()
{
   int a,b,c;

   clrscr();
   a=3;
   b=5;
   printf("a=%d,b=%d\n",a,b);
   c=a;
   a=b;
   b=c;

   printf("a=%d,b=%d",a,b);

   getch();

}