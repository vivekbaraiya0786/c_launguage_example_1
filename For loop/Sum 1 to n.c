#include<stdio.h>
main()
{
	int n,i=1,sum=0;
	printf("Enter number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum = sum+i;
	}
	printf("Sum of %d : %d",n,sum);
}
