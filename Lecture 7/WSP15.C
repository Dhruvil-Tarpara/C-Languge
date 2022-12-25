#include<stdio.h>
#include<conio.h>
//WSP15
main()
{
  int i,k,j;
  clrscr();

  for(i=5;i>=1;i--)
  {
     for(k=1;k<i;k++)
     {
       printf(" ");
     }
     for(j=i;j<=5;j++)
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