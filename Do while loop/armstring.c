#include<stdio.h>
main()
{
	int n,num,i,a=0;
	printf("enter a number :");
	scanf("%d",&num);
	n=num;
	
	do
	{
		i=n%10;
		a=a+i*i*i;
		n=n/10; 	
	}while(i>0);
	
	if(a==num)
	printf("%d is an armsrotng number",num);
	else
	printf("%d is not an armstrong number",num);
	   
	getch();
}
