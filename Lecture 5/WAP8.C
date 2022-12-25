#include<stdio.h>
#include<conio.h>
// FACTORIALE
main()
{
  int a,N,f;
  clrscr();
  a=1;
  f=1;
  printf(" enter valua of N:\n");
  scanf("%d",&N);
  while(a<=N)
  {
  (f=f*a);
  a++;
  }
    printf("factoriale = %d",f);
  getch();
}