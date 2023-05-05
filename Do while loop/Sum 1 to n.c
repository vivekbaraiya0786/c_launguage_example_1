#include<stdio.h>
main()
{
	int n,i=1,sum=0;
	printf("Enter number :");
	scanf("%d",&n);
	
	do
	{
		sum = sum+i;
		i++;
	}while(i<=n);
	
	printf("Sum of %d : %d",n,sum);

}
