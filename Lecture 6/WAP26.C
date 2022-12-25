#include<stdio.h>
#include<conio.h>
// N TO 1 (EVEN)
main()
{
  int a,N;
  clrscr();
  printf(" enter valua of N:");
  scanf("%d",&N);
  for(a=1;N%2==0>=a;N--)
  {
    printf("%d\n",N);
  }
  getch();
}