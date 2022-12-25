#include<stdio.h>
#include<conio.h>
//CP=2
main()
{
   int i,j,k;
   clrscr();

   for(i=1;i<=4;i++)
   {
      for(j=4;j>=i;j--)
      {
	printf("%d",j);
      }
      printf("\n");
   }
   for(i=3;i>=1;i--)
   {
      for(j=4;j>=i;j--)
      {
	printf("%d",j);
      }
      printf("\n");
   }

  getch();
}