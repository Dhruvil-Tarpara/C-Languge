#include<stdio.h>
#include<conio.h>
//age
main()
{
   int age;
   clrscr();
   printf("enter age");
   scanf("%d",&age);
   if(age>18)
   {
   printf("you can vote");
   }
   else if(age<18)
   {
   printf("you cannot vote");
   }
   else if(age==18)
   {
   printf("you can also vote");
   }
   getch();

}