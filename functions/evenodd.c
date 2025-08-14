#include <stdio.h>
void checkEvenOdd(int num);
void checkEvenOdd(int num)
{
	if (num % 2 == 0)
	{

		printf("%d is Even\n", num);
	}
	else
	{
		printf("%d is Odd\n", num);
	}
}
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	checkEvenOdd(n); 
	return 0;
}
