#include<stdio.h>

int main()
{
	float base, height, area;
	printf("enter the base of triangle\n");
	scanf("%f", &base);
	printf("enter the height of triangle\n");
	scanf("%f", &height);
	area = 0.5 * base * height;
	printf("area of triangle is %.2f",area);
	return 0;
}

