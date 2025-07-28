#include<stdio.h>
int main()
{
	float sub1, sub2, sub3, sub4, sub5;
	float total, average, percentage;
	printf("enter the marks of 5 subjects:\n");
	scanf("%f %f %f %f %f",&sub1, &sub2, &sub3, &sub4, &sub5);
	total = sub1 + sub2 + sub3 + sub4 + sub5;
	average = total / 5;
	percentage = (total / 500) * 100;
	printf("total is: %.2f\n", total);
	printf("average is: %.2f\n", average);
	printf("percentage is: %.2f\n", percentage);
	return 0;
}

