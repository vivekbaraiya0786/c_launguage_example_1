#include<stdio.h>
main()
{
	int i,N;
	
	printf("1 to N Numbers : ");
	scanf("%d",&N);
	
	i=1;
	do
	{
		printf("%d ",i);
		i++;
	}while(i<=N);
	
}
