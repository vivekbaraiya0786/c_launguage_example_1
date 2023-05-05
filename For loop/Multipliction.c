#include<stdio.h>
main()
{
	int n,i=1;
	printf("Enter number :");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("%d\t%d\t%d\t\n",n,i,n*i);
	}
}
