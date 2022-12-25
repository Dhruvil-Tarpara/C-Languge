#include<stdio.h>
#include<conio.h>
// maximum
main()
{
  int a,b,c,d,e;
  clrscr();
  printf("enter valua of a,b,c,d and e:");
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  if(a>b)
  {
     if(a>c)
     {
	if(a>d)
	{
	   if(a>e)
	   {
	   printf("a is maximum");
	   }
	   else
	   {
	   printf("e is maximum");
	   }
	}
	else
	{
	   if(d>e)
	   {
	   printf("d is maximum");
	   }
	   else
	   {
	   printf("e is maximum");
	   }
	}
      if(c>d)
      {
	   if(c>e)
	   {
	   printf("c is maximum");
	   }
	   else
	   {
	   printf("e is maximum");
	   }
      }
	else
	{
	   if(d>e)
	   {
	   printf("d is maximum");
	   }
	   else
	   {
	   printf("e is maximum");
	   }
	}
     }
     else
     {
     if(b>c)
     {
	if(b>d)
	{
	   if(b>e)
	   {
	   printf("b is maximum");
	   }
	   else
	   {
	   printf("e is maximum");
	   }
	}
	   else
	   {
	   if(d>e)
	   {
	   printf("d is maximum");
	   }
	   else
	   {
	   printf("e is maximum");
	   }
	   }
	if(c>d)
	{
	   if(c>e)
	   {
	   printf("c is maximum");
	   }
	   else
	   {
	   printf("e is maximum");
	   }
	}

	   else
	   {
	    if(d>e)
	    {
	    printf("d is maximum");
	    }
	    else
	    {
	    printf("e is maximum");
	    }
	    }
	 }
	}
  }
   getch();
}