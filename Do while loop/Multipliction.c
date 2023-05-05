#include<stdio.h>
main()
{
	int n,i=1;
	printf("Enter number of multipliction :");
	scanf("%d",&n);
	
	do
	{
		printf("%d\t%d\t%d\t\n",n,i,n*i);
		i++;
	}while(i<=10);
}
