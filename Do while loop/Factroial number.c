#include<stdio.h>
main()
{
	int n,i=1,fact=1;
	printf("Enter number :");
	scanf("%d",&n);
	
	do
	{
		fact = fact*i;
		i++;
	}while(i<=n);
	{
			printf("Factroial number %d : %d",n,fact);
	}
}
