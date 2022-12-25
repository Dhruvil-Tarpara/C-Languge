#include<stdio.h>
#include<conio.h>
// n to 1(odd)
main()
{
  int a,N;
  clrscr();
  a=1;
  printf(" enter valua of N:\n");
  scanf("%d",&N);
  while(a<=N%2==1)
  {
  printf("This is a odd numbar %d",N);
  a++;
  }
  getch();
}