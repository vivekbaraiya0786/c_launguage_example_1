#include<stdio.h>

main()
{
	int n,sum=0,f,l;
	
	printf("Enter a number :");
	scanf("%d",&n);
	
	l=n%10;
	
	do
	{
		n=n/10;
		f=n;
		sum=f+l;
	} while(n>=10);
	printf("Sum of first and last digit : %d",sum);
}

