#include<stdio.h>

int main()
{
	int year;
	printf("enter the year:");
	scanf("%d",& year);
	if(year % 4 == 0)
	{
		if(year % 100 != 0 || year % 400 ==0)
			printf("%d is leaf year", year);
	}
	else
		printf("%d is not a leap year", year);
	return 0;
}


