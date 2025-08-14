#include <stdio.h>
int sum(void);
int sum(void)
{
	int x, y, total;
	printf("Enter two numbers:\n");
	scanf("%d %d", &x, &y);
	total = x + y;
	return total; 
}
int main()
{
	int result;
	result = sum(); 
	printf("Sum = %d\n", result);
	result = sum();
	printf("Sum = %d\n", result);
	result = sum();
	printf("Sum = %d\n", result);
	return 0;
}
