#include<stdio.h>
int main()
{
	float length, breadth,area;
	printf("enter the length\n");
	scanf("%f",&length);
	printf("enter the breadth\n");
	scanf("%f",&breadth);
	area=length*breadth;
	printf("area of rectangle is %2f",area);
	return 0;
}

