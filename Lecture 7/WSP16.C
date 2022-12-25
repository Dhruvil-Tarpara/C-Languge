#include<stdio.h>
#include<conio.h>
//WSP16
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
       printf("0");
       }
       else
       {
       printf("1");
       }
     }
     printf("\n");
  }
  getch();
}