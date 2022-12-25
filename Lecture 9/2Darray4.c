#include<stdio.h>
//2D array4
main()
{
	int n1,n2,b1,b2,i,j;
	
	printf("a how many rows:");
	scanf("%d",&n1);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
	
	printf("a how many col:");
	scanf("%d",&n2);
	
	printf("b how many rows:");
	scanf("%d",&b1);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
	
	printf("b how many col:");
	scanf("%d",&b2);
	
	
if(n1==b1||n2==b2)
{
	
	
	int a[n1][n2],b[b1][b2],c[n1+b1][n2+b2];
	
	printf("enter a's elements:\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
	        printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("a's array elemets are:\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
		
	}
	printf("enter b's elements:\n");
	for(i=0;i<b1;i++)
	{
		for(j=0;j<b2;j++)
		{
	        printf("b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("b's array elemets are:\n");
	for(i=0;i<b1;i++)
	{
		for(j=0;j<b2;j++)
		{
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	printf("c's array elemets are:\n");
	
	for(i=0;i<n1&&b1;i++)
	{
		for(j=0;j<n1&&b2;j++)
		{
		c[i][j]=a[i][j]+b[i][j];
		printf("%d",c[i][j]);
	    }
			printf("\n");
	}
	
}
else
{
	printf("errer");
}
}
