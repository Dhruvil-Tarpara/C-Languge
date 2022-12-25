#include<stdio.h>
#include<conio.h>
//P
main()
{
 int i,j;
 clrscr();

 for(i=1;i<=7;i++)
 {
   for(j=1;j<=1;j++)
   {
     if(i==1||i==3)
     {
	 printf("******\n");
     }
     else
     {
	if(i==2)
	{
	 printf("*    *\n");
	 }
	 else
	 {
	  printf("*\n");
	 }
     }
    }
 }
 getch();
 }