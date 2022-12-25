#include<stdio.h>
#include<conio.h>
//WSP10
main()
{
  int i,k,j;
  clrscr();

  for(i=1;i<=5;i++)
  {
     for(k=1;k<i;k++)
     {
       printf(" ");
     }
     for(j=5;j>=i;j--)
     {
       printf("%d",j);
     }
     printf("\n");
  }
  getch();
  }
