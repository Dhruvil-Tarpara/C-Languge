#include<stdio.h>
//2D array3
main()
{
	int r,c,i,j;
	int count=0 ,sum=0;
	float agu;
	
	printf("how many rows:");
	scanf("%d",&r);
	
	printf("how many col:");
	scanf("%d",&c);
	
	int a[r][c];
	
	printf("enter array elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
	        printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			count ++;
		}
	}
	
	printf("array elemets are:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
			sum=sum+a[i][j];
		}
		printf("\n");
		
	}
	printf("\n\nlength of array= %d",count);
	
	printf("\n\n
	sum is %d",sum);
	agu=sum/count;
	printf("\n\naverage is %f",agu);
}
