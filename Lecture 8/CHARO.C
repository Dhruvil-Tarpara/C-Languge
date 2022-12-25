#include<stdio.h>
#include<conio.h>
//O
main()
{
 int i,j;
 clrscr();

 for(i=1;i<=7;i++)
 {
   for(j=1;j<=1;j++)
   {
     if(i==1||i==7)
     {
	 printf("*********\n");
     }
     else
     {
	 printf("*       *\n");
     }
    }
 }
 getch();
 }