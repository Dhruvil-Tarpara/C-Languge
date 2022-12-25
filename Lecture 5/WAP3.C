#include<stdio.h>
#include<conio.h>
//1 to n
main()
{
  int a,N;
  clrscr();
  a=1;
  printf(" enter value of N:");
  scanf("%d",&N);
  while(a<=N)
  {
  printf("%d\n",a,N);
  a++;
  }
  getch();
  }