#include<stdio.h>
#include<conio.h>
//CP=5
main()
{
   int i,j,k;
   clrscr();

   for(i=1 ; i<=5 ; i++)
   {
       for(k=i;k<5;k++)
       {
	  printf(" ");
       }
       for(j=1;j<=i;j++)
       {
	  printf("%2d",i);
       }
       printf("\n");
   }

   getch();
}