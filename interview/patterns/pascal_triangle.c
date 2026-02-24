#include <stdio.h>
int main()
{
	int i, j, n = 5;
	for(i = 0; i <= n; i++)
	{
		for(j = 0; j <= n - i; j++)
		{
			printf("  ");
		}
		long long var = 1;
		for(j = 0; j <= i; j++)
		{
			printf("%4lld", var);
			var = var * (i - j) / (j + 1);
		}
		printf("\n");
	}
	return 0;
}


