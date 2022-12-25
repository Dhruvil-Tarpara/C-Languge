#include<stdio.h>
#include<conio.h>
//R

main()
{
   int i,j;
   clrscr();
   for(i=1;i<=6;i++)
       {
       for(j=1;j<=1;j++)
       {
	if(i==1||i==3)
       {
       printf("******");
       }
       else
       {
       printf("*     *");
       }
       printf("\n");
       }
   }
   getch();
   }