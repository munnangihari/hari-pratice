#include<stdio.h>
float celsiusTofahrenheit(float celsius);
float celsiusTofahrenheit(float celsius)
{
	return (celsius * 9.0 / 5.0) + 32;
}
int main()
{
	float c, f;
	printf("enter temperature:\n");
	scanf("%f",&c);
	f = celsiusTofahrenheit(c);
	printf("%.2f°C = %.2f°F\n", c, f);
	return 0;
}
