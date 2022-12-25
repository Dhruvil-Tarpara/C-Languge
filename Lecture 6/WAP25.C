#include<stdio.h>
#include<conio.h>
// 1 TO N (ODD)
main()
{
  int a,N;
  clrscr();
  printf(" enter valua of N:");
  scanf("%d",&N);
  for(a=1;a<=N%2==1;a++)
  {
    printf("%d\n",N);
  }
  getch();
}