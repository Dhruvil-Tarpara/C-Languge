#include<stdio.h>
#include<conio.h>
//N TO 1
main()
{
  int a,N;
  clrscr();
  a=1;
  printf(" enter value of N:");
  scanf("%d",&N);
  while(N>=a)
  {
    printf("%d\n",N,a);
    N--;
  }
  getch();
  }