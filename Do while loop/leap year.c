#include<stdio.h>
main()
{
	int year=2000;

	printf("Leap year 2000 to 3000 : ");	
	do
	{
		printf("%d ",year);
		year+=4;
	}while(year<3000);
}
