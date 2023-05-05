#include<stdio.h>
main()
{
	int n,i,rev=0;
	printf("Enter number :");
	scanf("%d",&n);
	
	for(i=n;n!=0;n=n/10)
	{
		i = n%10;
		rev=rev*10+i;
	}
	printf("Reverse number =%d",rev);
}
