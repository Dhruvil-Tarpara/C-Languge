#include<stdio.h>

main()
{
	int r,c,i,j;
	
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
			scanf("%d",&
			a[i][j]);
		}
	}
	
	printf("array elemets are:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}

