#include<stdio.h>
main()
{
	int i,N;
	
	printf("2 To N Even Number : ");
	scanf("%d",&N);
	
	i=2;
	do
	{
		printf(" %d",i);
		i+=2;
	}while(i<=N);
	
}
