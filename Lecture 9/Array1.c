#include<stdio.h>
//n elements
main()
{
	int N,i,a[N];
	printf("enter valua of N:");
	scanf("%d",&N);
	printf("enter array elements:\n");
	
	for(i=0;i<=N;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=N;i++)
	{
		printf("a[%d]:%d\n",i,a[i]);
	}
}
