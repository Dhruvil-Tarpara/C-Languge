#include<stdio.h>

main()
{
	int n,i,j,n1,n2;
	
	printf("enter valua of n:");
	scanf("%d",&n);
	
	printf("enter valua of n1:");
	scanf("%d",&n1);
	
	printf("enter valua of n2:");
	scanf("%d",&n2);
	
	printf("enter a's elements:\n");
	
	int a[n1],b[n2],c[n1+n2];
	
	for(i=0;i<n1;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
		
    }
    	printf("enter b's elements:\n");
    for(i=0;i<n2;i++)
	{
		printf("b[%d]:",i);
		scanf("%d",&b[i]);
	
    }
    
    printf("are array elements:\n");
    for(i=0;i<n1;i++)
    {
    	printf("a[%d]:%d\n",i,a[i]);
	}
	
	printf("are array elements:\n");
    for(i=0;i<n2;i++)
    {
    	printf("b[%d]:%d\n",i,b[i]);
	}
	
		printf("enter array elements:\n");
	for(i=0;i<n1;i++)
	{
		c[i]=a[i];
	}
	for(i=0,j=n1;i<n2,j<n1+n2;i++,j++)
	{
		c[j]=b[i];
		printf("%d",c[j]);
	}

}
