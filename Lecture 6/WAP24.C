#include<stdio.h>
#include<conio.h>
// N TO 1
main()
{
  int a,N;
  clrscr();
  printf(" enter valua of N:");
  scanf("%d",&N);
  for(a=1;N>=a;N--)
  {
    printf("%d\n",N);
  }
  getch();
}