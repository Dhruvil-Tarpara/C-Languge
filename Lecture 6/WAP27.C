#include<stdio.h>
#include<conio.h>
// SUM
main()
{
  int a,N,SUM;
  clrscr();
  printf("enter valua of N:\n");
  scanf("%d",&N);
  for(a=1,SUM=0;a<=N;a++)
  {
  (SUM=SUM+a);
  }
   printf("sum = %d",SUM);
  getch();
}