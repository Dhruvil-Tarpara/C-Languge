#include<stdio.h>
#include<conio.h>
//char=u
main()
{
   int i,j;
   clrscr();

   for(i=1 ; i<=1 ; i++)
   {
       for(j=i ; j<=6 ; j++)
       {
	  if(j==6)
	  printf("  * * *");

	  else
	  printf("*       *");

	  printf("\n");
       }
   }
   getch();
}