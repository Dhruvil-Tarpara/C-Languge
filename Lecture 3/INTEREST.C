#include<stdio.h>
#include<conio.h>

 //simple interest
main()
{
   float p,r,n;
   clrscr();
   printf("enter value of p,r,n:");
   scanf("%f%f%f",&p,&r,&n);

   printf("simple interest is %.2f",p*r*n/100);

   getch();

}