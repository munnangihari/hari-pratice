#include<stdio.h>
int main()
{
	int n, sum = 0;
	printf("enter n:\n");
	scanf("%d", &n);
	for(int i = 1; i <= n/2; i++)
	{
		if(n % i == 0)
		{
		sum = sum + i;
		}
	}
	if (sum == n)
	{
		printf("%d perfect number\n",n);
	}
	else
	{
		printf("%d not perfect number\n",n);
	}
	return 0;
}
