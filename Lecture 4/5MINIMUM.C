#include<stdio.h>
#include<conio.h>
//minimum
main()
{
   int a,b,c,d,e;
   clrscr();
   printf("enter value of a,b,c,d and e:");
   scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

   (a==b && b==c && c==d && d==e)
   ?printf("All are same...")
   :
     ?(a<b)
	   ?(a<c)
		?(a<d)
		     ?(a<e)printf("a is minimum")
		     :printf("e is minimum")
		:
		     ?(d<e)printf("d is minimum")
		     :printf("e is minimum")
	   :
		?(c<d)
		     ?(c<e)printf("c is minimum")
		     :printf("d is minimum")
		:
		     ?(d<e)printf("d is minimum")
		     :printf("e is mimnimum")
      :
	   ?(b<c)
		?(b<d)
		     ?(b<e)printf("b is minimum")
		     :printf("e is minimum")
		:
		     ?(d<e)printf("d is minimum")
		     :printf("e is minimum")
	   :
	      ?(c<d)
		     ?(c<e)printf("c is minimum")
		     :printf("e is minimum")
		:
		     ?(d<e)printf("d is minimum")
		     :printf("e is minimum");


   getch();
}