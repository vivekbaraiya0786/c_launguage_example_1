#include<stdio.h>
main()
{
	int i,n,rev=0,rem;
	
	printf("Enter even number :");
	scanf("%d",&n);
	
	
	
	for(i=n;n!=0;n/=10)
	{
		rem=n%10;
		rev=rev*10+rem;
		
	}
	
	if(i==rev)
	   printf("%d is a palidrom",i);
	   else
	   printf("%d is not a palidrom",i);
	
}
