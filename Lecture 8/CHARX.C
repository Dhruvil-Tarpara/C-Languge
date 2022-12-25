#include<stdio.h>
#include<conio.h>
//char=x
main()
{
   int i,j;
   clrscr();

   for(i=1 ; i<=1 ; i++)
   {
       for(j=i ; j<=7 ; j++)
       {
	  if(j==1 || j==7)
	  printf("*           *");

	  else if(j==2 || j==6)
	  printf("  *       *");

	  else if(j==3 || j==5)
	  printf("    *   *");

	  else
	  printf("      *");

	  printf("\n");
       }
   }
   getch();
}