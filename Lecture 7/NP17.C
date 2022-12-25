#include<stdio.h>
#include<conio.h>
//NP17
main()
{
 int i,j,n=1;
 clrscr();
 for(i=5;i>=1;i--)
 {
    for(j=1;j<=i;j++)
    {
      printf("%d",n++);
    }
    printf("\n");
 }
  getch();
}