#include<stdio.h>
#include<conio.h>
//G

main()
{
   int i,j;
   clrscr();
   for(i=1;i<=8;i++)
       {
       for(j=1;j<=1;j++)
       {
	if(i==1||i==4||i==8)
       {
       printf("******");
       }
       else
       {
	  if(i==2||i==3)
	  {
	   printf("*    *");
	   }
	   else
	   {
	   printf("     *");
	   }
       }

       printf("\n");
       }
   }
   getch();
   }