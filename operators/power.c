#include<stdio.h>
#include<math.h>
int main()
{
	int a, b;
	double result;
	printf("enter the value of a:");
	scanf("%d", &a);
	printf("enter the value of b:");
	scanf("%d", &b);
	result = pow(a, b);
	printf("%d %d %lf\n", a, b, result);
	return 0;
}


