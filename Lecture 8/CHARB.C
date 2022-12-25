#include<stdio.h>
#include<conio.h>
//b
main()
{
   int i,j;
   clrscr();
   for(i=1;i<=5;i++)
       {
       for(j=1;j<=1;j++)
       {
	if(i==1||i==3||i==5)
       {
       printf("*****");
       }
       else
       {
       printf("*   *");
       }
       printf("\n");
       }
   }
   getch();
   }