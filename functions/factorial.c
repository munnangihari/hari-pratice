#include<stdio.h>
long long factorial(int a);
long long factorial(int n)
{
	long long fact = 1;
	for (int i = 1; i <= n; i++)
	{
		fact = fact * i;
	}
	return fact;
}
int main()
{
	int num;
	printf("enter a number:\n");
	scanf("%d",&num);
	if (num < 0)
	{
		printf("factorial is not defned for negitive values.\n");
	}
	else
	{
	printf("factorial of %d = %lld\n",num,factorial(num));
	}
	return 0;
}

