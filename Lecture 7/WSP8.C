#include<stdio.h>
#include<conio.h>
//WSP8
main()
{
 int i,k,j;
 clrscr();
    for(i=1;i<=5;i++)
    {
      for(k=i;k>1;k--)
      {
      printf("_");
      }
      for(j=i;j<=5;j++)
      {
      printf("%d",j);
      }
      printf("\n");
    }
    getch();
}