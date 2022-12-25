#include<stdio.h>
#include<conio.h>
//J

main()
{
   int i,j;
   clrscr();
   for(i=1;i<=6;i++)
       {
       for(j=1;j<=1;j++)
       {
	if(i==1)
       {
       printf("*******");
       }
       else
       {
	 if(i==5)
	 {
	   printf("*  *   ");
	  }
	  else
	  {
	   if(i==6)
	   {
	   printf("*  *   \n  *     ");
	   }
	   else{

	    printf("   *   ");
	    }
	    }
       }

       printf("\n");
       }
   }
   getch();
   }