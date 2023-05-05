#include<stdio.h>
main()
{
	int n,rem=0,rev,i;
	printf("Enter a number :");
	scanf("%d",&n);
	
	i=n;
	do		
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}while(n>0);

	if(i==rev)
		{
			printf("Given number is a palidron number");
		}
	else
		{
			printf("Given number is not palidrom number");
		}
}
