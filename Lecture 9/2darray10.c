#include<stdio.h>
//boundary
main()
{
	 int a[5][5],i,j;
	 printf("enter matrix:");
	 for(i=0;i<5;i++)
	 {
	 	for(j=0;j<5;j++)
	 	{
	 		scanf("%d",&a[i][j]);
		 }
	 	
	  } 
	  printf("Input: \n");
	  for(i=0;i<5;i++)
	  {
	  	for(j=0;j<5;j++)
	  	{
	  		printf("%d  ",a[i][j]);
		  }
		  printf("\n");
	  }
	  printf("\narray's boundary elements : \n");
	  for(i=0;i<5;i++)
	  {
	  	for(j=0;j<5;j++)
	  	{
	  		if((i==0) || (j==0) || (j==4) || (i==4))
	  		{
	  			printf("%d",a[i][j]);
		    }
		    else
		    {
		    	printf(" ");
			}
		}
		 printf("\n");
	  }	  
}
