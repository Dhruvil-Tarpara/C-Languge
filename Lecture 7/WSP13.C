#include<stdio.h>
#include<conio.h>
//WSP13
main()
{
  int i,k,j;
  clrscr();

  for(i=5;i>=1;i--)
  {
     for(k=i;k<5;k++)
     {
       printf(" ");
     }
     for(j=1;j<=i;j++)
     {
       if(j==1||j==3||j==5)
       {
	  printf("1");
       }
       else
       {
	  printf("0");
       }
     }
     printf("\n");
  }
  getch();
  }