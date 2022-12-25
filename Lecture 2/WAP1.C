#include<stdio.h>
#include<conio.h>

main()
{

    int a,b,c,d,e,f,g;
    // addition,substrcan,multiplication,devsion,modulis
    clrscr();
    a=20;
    b=10;
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    g=a%b;

    printf("addition of %d & %d is %d\n",a,b,c);
    printf("substrcan of %d & %d is %d\n",a,b,d);
    printf("multiplication of %d & %d is %d\n",a,b,e);
    printf("devsion of %d & %d is %d\n",a,b,f);
    printf("modulus of %d & %d is %d\n",a,b,g);

    getch();
    }