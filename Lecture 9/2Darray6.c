#include<stdio.h>
//column wise
main()
{
	int r,c,i,j,sum=0;
	
	printf("how many rows: ");
	scanf("%d",&r);
	
	printf("how many columns: ");
	scanf("%d",&c);
	
	int a[r][c];
	
	printf("\nenter A's array elements:\n");
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
	        printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nA's array elements are:\n");
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
	        printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\ncolumn-wise addition of array elements: \n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			sum=sum + a[j][i];	
		}
		printf("column-wise sum = %d",sum);
		sum=0;
		printf("\n");
    }
}

