#include<stdio.h>
#include<conio.h>
//char=y
main()
{
   int i,j;
   clrscr();

   for(i=1 ; i<=1 ; i++)
   {
       for(j=i ; j<=7 ; j++)
       {
	  if(j==1)
	  printf("*           *");

	  else if(j==2)
	  printf("  *       *");

	  else if(j==3)
	  printf("    *   *");

	  else
	  printf("      *");

	  printf("\n");
       }
   }
   getch();
}