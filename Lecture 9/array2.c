#include<stdio.h>
// lemgth
main()
{
	int N[]={10,20,30,40};
	int size=sizeof(N);
	int nsize=sizeof(N[0]);
	int lemgth = size/nsize;
	
	printf("Lemght of array=%d\n",lemgth);
}
	
