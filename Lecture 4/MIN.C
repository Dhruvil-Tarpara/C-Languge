#include<stdio.h>
#include<conio.h>
// minimum
main()
{
  int a,b,c,d;
  clrscr();
  printf("enter valua of a,b,c and d:");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  if(a<b)
  {
     if(a<c)
     {
	if(a<d)
	{
	printf("a is minimum");
	}
	else
	{
	printf("d is  minimum");
	}
     }
     else
     {
	 if(c<d)
	 {
	 printf(" c is minimum");
	 }
	 else
	 {
	 printf(" d is minimumn");
	 }
      }
   }
  else
  {
      if(b<c)
      {
	 if(b<d)
	 {
	 printf("b is  minimum");
	 }
	 else
	 {
	 printf("d is minimum");
	 }
      }
      else
      {
	 if(c<d)
	 {
	 printf("c is minimum");
	 }
	 else
	 {
	 printf("d is minimum");
	 }
      }
   }
   getch();
}
