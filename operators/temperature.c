#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("enter the value of fahrenheit");
	scanf("%f",&fahrenheit);
	celsius = (fahrenheit -32) * 5 / 9;
	printf("celsius value is %2f", celsius);
	return 0;
}


