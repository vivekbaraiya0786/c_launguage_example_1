#include<stdio.h>
main()
{
	int i,N;
	
	printf("1 To N odd number :");
	scanf("%d",&N);
	
	i=1;
	do
	{
		printf(" %d",i);
		i+=2;
	}while(i<=N);
	
}
