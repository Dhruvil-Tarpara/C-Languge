#include<stdio.h>
#include<conio.h>
//K

main()
{
   int i,j;
   clrscr();
   for(i=1;i<=6;i++)
       {
       for(j=1;j<=1;j++)
       {
	 if(i==2||i==5)
	 {
	  printf("*   *");
	 }
	 else
	 {
	    if(i==3||i==4)
	    {
	     printf("* *  ");
	     }
	     else{
		  if(i==1||i==6)
		  {
		   printf("*    *");
		   }
	      }

	   }

       printf("\n");
       }
   }
   getch();
   }