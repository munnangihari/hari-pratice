#include<stdio.h>
#include<math.h>
int main()
{
	float area, side;
	printf("enter the length of the side\n");
	scanf("%f", &side);
	area = (sqrt(3)/4) * side * side;
	printf("area of equilateral triangle is %.2f\n", area);
	return 0;
}

