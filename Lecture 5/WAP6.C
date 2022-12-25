#include<stdio.h>
#include<conio.h>
// n to 1(even)
main()
{
  int a,N;
  clrscr();
  a=1;
  printf(" enter valua of N:\n");
  scanf("%d",&N);
  while(N%2==0>=a)
  {
  printf("This is a even numbar %d",N);
  N--;
  }
  getch();
}