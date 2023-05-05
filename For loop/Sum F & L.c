#include<stdio.h>

main()
{
	int n,sum=0,f,l;
	
	for(n;n>=10;n)
	{
		l=n%10;
		f=n;
		sum=f+l;
		n=n/10;
	}
	printf("Sum of first and last digit : %d",sum);
}
