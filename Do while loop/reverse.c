#include<stdio.h>
main()
{
	int n,i,rev=0;
	printf("Enter number :");
	scanf("%d",&n);
	
	do
	{
		i = n%10;
		rev=rev*10+i;
		n=n/10;
	}while(n!=0);
	{
			printf("reverse number = %d",rev);
	}
}
