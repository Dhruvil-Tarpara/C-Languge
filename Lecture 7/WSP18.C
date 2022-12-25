#include<stdio.h>
#include<conio.h>
//WSP18
main()
{
  char i,k,j;
  clrscr();

  for(i='E';i>='A';i--)
  {
     for(k='E';k>i;k--)
     {
       printf(" ");
     }
     for(j='A';j<=i;j++)
     {
       printf("%c",j);
     }
     printf("\n");
  }
  getch();
}