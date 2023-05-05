#include<stdio.h>
main()
{
	int num,temp,r,sum=0;
	printf("Enter number :");
	scanf("%d",&num);
	
	for(temp=num;num!=0;num=num/10)
		r=num % 10;
		sum=sum+(r*r*r);
		
	if(sum==temp)
	printf("%d is an armsrotng number\n",temp);
	else
	printf("%d is not an armstrong number",temp);
	   

}
