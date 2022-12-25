#include<stdio.h>

main()
{
	int n,i;
	
	printf("enter valua of n:");
	scanf("%d",&n);
	
	printf("enter a's elements:\n");
	
	int a[n],b[n],c[i];
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
		
    }
    	printf("enter b's elements:\n");
    for(i=0;i<n;i++)
	{
		printf("b[%d]:",i);
		scanf("%d",&b[i]);
	
    }
    
    printf("are array elements:\n");
    for(i=0;i<n;i++)
    {
    	printf("a[%d]:%d\n",i,a[i]);
	}
	
	printf("are array elements:\n");
    for(i=0;i<n;i++)
    {
    	printf("b[%d]:%d\n",i,b[i]);
	}
	
		printf("enter array elements:\n");
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
		printf("c[%d]:%d\n",i,c[i]);
	}

}
