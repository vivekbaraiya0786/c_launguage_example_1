#include<stdio.h>
main()
{
	int i,N;
	printf("Odd Number N to 1 :");
	scanf("%d",&N);

	i=N;
	do
	{
		printf(" %d",i);
		i-=2;
	}while(i>=1);
	
}
