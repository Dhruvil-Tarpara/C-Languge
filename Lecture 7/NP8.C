#include<stdio.h>
#include<conio.h>
//NP8
main()
{
 int i,j;
 clrscr();
    for(i=5;i>=1;i--)
    {
      for(j=i;j>=1;j--)
      {
      printf("%d",j);
      }
      printf("\n");
    }
    getch();
}