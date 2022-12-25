#include<stdio.h>
#include<conio.h>
main()
{
   int choice,type;

    clrscr();

   printf("press 1 english\n");
   printf("press 2 hindi\n");
   printf("press 3 gujrati\n");


  printf("enter your choice=");
  scanf("%d",&choice);

  switch(choice)
  {
    case 1:
	 printf("\npress 1 special recharge\n");
	 printf("press 2 recharge plan\n");
	 printf("press 3 free callertunes\n");

	 printf("\npress your choice type=");
	 scanf("%d",&type);


	 switch(type)

	 {
	    case 1 :
		  printf("\nyour choose special recharge");
		  break;
	    case 2 :
		  printf("your recharge plan");
		  break;
	    case 3 :
		  printf("your free callertune");
		  break;
	    default:
		  printf("you vaild choose\n");

	 }
	break;

   case 2:
	 printf("\nspecial recharge ke liye 1 press kariye\n");
	 printf("recharge plan janne ke liye 2 press kariye\n");
	 printf("free callertunes sune ke liye 3 press kariye\n");

	 printf("press your choice type=");
	 scanf("%d",&type);

	 switch(type)

	 {
	    case 1 :
		  printf("\naapne special recharge ko pasand kiya hai\n");
		  break;
	    case 2 :
		  printf("aapne recharge paln pasand kiya hai\n");
		  break;
	    case 3 :
		  printf("free callertunes ko pasad kiya hai\n");
		  break;
	    default:
		  printf("aapki pasad amany hai\n");

	 }
      break;
   case 3 :
	 printf("\nspecial recharge mate 1 dabavo \n");
	 printf("recharge plan janva mate 2 dabavo\n");
	 printf("free callertunes samabhlva mate 3 dabavo\n");

	 printf("press your choice type=");
	 scanf("%d",&type);

	 switch(type)

	 {
	    case 1 :
		  printf("\ntme special recharge ne pasad kriyu che\n");
		  break;
	    case 2 :
		  printf("tme recharge plan ne pasad kriyo che\n");
		  break;
	    case 3 :
		  printf("tme free calltunes ne pasand kriyu che\n");
		  break;
	    default:
		  printf("tmari pasad amany che\n");
		  break;
	 }
        break;  
	default:
	   printf("\nyou vaild choice");
	   break;
      }


       getch();
}
