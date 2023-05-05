#include<stdio.h>
main()
{
	int i,n,rev=0,rem;
	
	printf("Enter even number :");
	scanf("%d",&n);
	
	i=n;
	do
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}while(n!=0);
	
	if(i==rev)
	   printf("%d is a palidrom",i);
	   else
	   printf("%d is not a palidrom",i);
	
}
