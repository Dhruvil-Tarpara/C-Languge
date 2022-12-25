#include<stdio.h>
//sum of diagonal elements
main()
{
	int r,c,i,j,sum=0;
	
	printf("enter same value of rows and column\n");
	
	printf("how many rows : ");
	scanf("%d",&r);
	
	printf("how many columns : ");
	scanf("%d",&c);
	
	int a[r][c];
	
	printf("\nenter A's array elements :\n");
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
	        printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nA's array elements are :\n");
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
	        printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\ndiagonal-wise addition of array element : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
    }
    printf("\nsum of diagonal elements is %d",sum);
}
