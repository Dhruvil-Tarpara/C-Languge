#include<stdio.h>
#include<conio.h>
//age
main()
{
   int n;
   clrscr();
   printf("enter numbar");
   scanf("%d",&n);
   if(n>0)
   {
   printf("this numbar is possitive numbar");
   }
   else if(n<0)
   {
   printf("this numbar is nagativ numbar");
   }
   else if(n==0)
   {
   printf("this numbar is neutral numbar");
   }
   getch();

}