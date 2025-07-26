#include<stdio.h>

int main()
{
	float radius,diameter,circum,area;
	printf("enter the radius\n");
	scanf("%f",&radius);
	diameter = 2 * radius;
	circum = 2 * 3.14 *radius;
	area = 3.14 * radius * radius;
	printf("diameter of circle is %2f\n", diameter);
	printf("circum of circle is %2f\n", circum);
	printf("area of circle is %2f\n", area);
	return 0;
}

