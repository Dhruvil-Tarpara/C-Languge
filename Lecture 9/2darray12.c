#include<stdio.h>
//avg
main()
{
	 int a[5][5],i,j,count=0,sum=0;
	 float avg;
	 
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
	  		if(i==0||j==0 || j==4|| i==4)
	  		{
	  			printf("%d",a[i][j]);
	  			count++;
	  			sum=sum+a[i][j];
		    }
		    else
		    {
		    	printf(" ");
			}
		}
		 printf("\n");
	  }	  
	  printf("\nLength is %d",count);
	  printf("\n\nsum is %d",sum);
	  avg=sum/count;
	  printf("\n\navg of array %0.2f",avg);
	  
	  
	  
	  
}
