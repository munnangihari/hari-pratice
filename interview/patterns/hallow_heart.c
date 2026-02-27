#include <stdio.h>
int main()
{
	int i, j, n;
	printf("Enter n\n");
	scanf("%d", &n);

	for(i = n/2; i <= n; i += 2)
	{
		for(j = 1; j < n-i; j += 2)
			printf(" ");

		for(j = 1; j <= i; j++)
		{
			if(j == 1 || j == i)
				printf("*");
			else
				printf(" ");
		}

		for(j = 1; j <= n-i; j++)
			printf(" ");

		for(j = 1; j <= i; j++)
		{
			if(j == 1 || j == i)
				printf("*");
			else
				printf(" ");
		}

		printf("\n");
	}

	for(i = 1; i < n; i++)
	{
		for(j = 1; j <= i; j++)
			printf(" ");

		for(j = 1; j < 2*(n-i); j++)
		{
			if(j == 1 || j == 2*(n-i)-1)
				printf("*");
			else
				printf(" ");
		}

		printf("\n");
	}

	return 0;
}
