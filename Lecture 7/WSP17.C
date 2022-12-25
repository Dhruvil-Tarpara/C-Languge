#include<stdio.h>
#include<conio.h>
//WSP17
main()
{
 int i,j,k,n=1;
 clrscr();

 for(i=5 ; i>=1 ; i--)
 {

  for(k=i ; k<5; k++)
  {

   printf(" ");
  }
  for(j=1 ; j<=i ; j++)
  {
   printf("%d",n++);

  }
   printf("\n");
 }

  getch();
}
