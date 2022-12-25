#include<stdio.h>
#include<conio.h>
// factorial
main()
{
  int a,N,F;
  clrscr();
  printf("enter valua of N:\n");
  scanf("%d",&N);
  for(a=N,F=1;a>=1;a--)
  {
  (F=F*a);
  }
   printf("%d factorial = %d",N,F);
  getch();
}