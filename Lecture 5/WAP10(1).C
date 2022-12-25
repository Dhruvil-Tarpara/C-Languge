#include<stdio.h>
#include<conio.h>
// MULTIPLICATION
main()
{
  int a,N;
  clrscr();
  a=1;
  printf(" enter valua of N:\n");
  scanf("%d",&N);
  while(N>=a)
  {
  printf("%d*%d=%d\n",N,a,N*a);
  a++;
  }
  getch();
}