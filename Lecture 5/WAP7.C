#include<stdio.h>
#include<conio.h>
// SUM
main()
{
  int a,N,SUM;
  clrscr();
  a=1;
  SUM=0;
  printf(" enter valua of N:\n");
  scanf("%d",&N);
  while(a<=N)
  {
  (SUM=SUM+a);
  a++;
  }
   printf("sum = %d",SUM);
  getch();
}