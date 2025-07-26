#include<stdio.h>

int main()
{
	float length, breadth, perimeter;
	printf("enter the length of rectangle\n");
	scanf("%f",&length);
	printf("enter the breadth of rectangle\n");
	scanf("%f",&breadth);
	perimeter = 2*(length + breadth);
	printf("perimeter of rectangle is %2f\n",perimeter);
	return 0;
}

