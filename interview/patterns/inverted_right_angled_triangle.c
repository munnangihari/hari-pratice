#include <stdio.h>
int main()
{
	int i, j, n;
	printf("enter number\n");
	scanf("%d", &n);
	for(i = n - 1; i >= 1; i--)
	{
		for(j = 1; j <= i; j++)
			{
				printf("*");
			}
			printf("\n");
	}
	return 0;
}
