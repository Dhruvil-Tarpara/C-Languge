#include<stdio.h>
#include<conio.h>
// MULTIPLICATION
main()
{
  int a,N;
  clrscr();
  printf("enter valua of N:");
  scanf("%d",&N);
  for(a=1;a<=10;a++)
  {
     printf("%d * %d = %d\n",N,a,N*a);
  }
  getch();
}