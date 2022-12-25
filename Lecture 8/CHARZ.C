#include<stdio.h>
#include<conio.h>
//char=z
main()
{
   int i,j;
   clrscr();

   for(i=1 ; i<=1 ; i++)
   {
       for(j=i ; j<=6 ; j++)
       {
	  if(j==1 || j==6)
	  printf("* * * * * *");

	  else if(j==2)
	  printf("        *");

	  else if(j==3)
	  printf("      *");

	  else if(j==4)
	  printf("    *");

	  else
	  printf("  *");

	  printf("\n");
       }
   }
   getch();
}