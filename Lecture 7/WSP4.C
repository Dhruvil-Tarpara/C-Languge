#include<stdio.h>
#include<conio.h>
//WSP4
main()
{
 int i,k,j;
 clrscr();
    for(i=5;i>=1;i--)
    {
      for(k=i;k>1;k--)
      {
      printf("_");
      }
      for(j=5;j>=i;j--)
      {
      printf("%d",j);
      }
      printf("\n");
    }
    getch();
}