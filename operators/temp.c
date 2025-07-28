#include<stdio.h>

int main()
{
	float celsius, fahranheit;
	printf("enter the value of celsius");
	scanf("%f",&celsius);
	fahranheit = (celsius * 9/5) + 32;
	printf("fahranheit value is %2f", fahranheit);
	return 0;
}

