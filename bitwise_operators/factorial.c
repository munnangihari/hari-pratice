#include <stdio.h>
int main() 
{
	int n, i, fact = 1;
	printf("Enter a number: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) 
	{
		int a = fact, b = i, res = 0;
		while (b) 
		{
			if (b & 1) res += a;
			a <<= 1;b >>= 1;
		}
		fact = res;
	}
	printf("Factorial of %d is %d\n", n, fact);
	return 0;
}
