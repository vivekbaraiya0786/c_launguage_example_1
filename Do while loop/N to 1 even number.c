#include<stdio.h>
main()
{
	int i,N;
	printf("N to 1 Even Numbers :");
	scanf("%d",&N);

	i=N;
	do
	{
		printf(" %d",i);
		i-=2;
	}while(i>=1);
	
}
