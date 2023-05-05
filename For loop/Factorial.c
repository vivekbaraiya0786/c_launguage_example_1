#include<stdio.h>
main()
{
	int n,i=1,fact=1;
	printf("Enter number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact = fact*i;
	}
	printf("Factroial number %d : %d",n,fact);
}
