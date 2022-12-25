#include<stdio.h>
//row wise
main()
{
	int a[3][3],i,j,sum=0;
	printf("Enter Array Elements:");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
		
		
		
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			sum=sum+a[i][j];
		}
	  printf("row wise sum=%d\n",sum);
	  sum=0;		
		
	}
	
	
	
	
	
	
}
