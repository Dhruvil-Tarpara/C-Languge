#include<stdio.h>

main()
{
	int n,i,c,sum;
	float avg;
	
	printf("enter valua of n:");
	scanf("%d",&n);
	
	printf("enter array elements:\n");
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
		c++;
    }
    
    printf("enter array elements:\n");
    
    for(i=0;i<n;i++)
    {
    	printf("a[%d]:%d\n",i,a[i]);
    	sum=sum+a[i];
	}
	printf(" sum is %d\n",sum);
	avg=sum/c;
	printf("average is %f",avg);

}
