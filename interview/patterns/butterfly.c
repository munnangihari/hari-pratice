#include <stdio.h>
int main()
{
	int n, i, j;	
	printf("enter n:\n");
	scanf("%d", &n);
	for(i = n; i >= 1; i--)
	{
		for(j = n; j >= i; j--)
		{
			printf("%c ", 'A' + j);
		//	printf("* ");
		//	printf("%d ", j);
		}
		for(j = 1; j <= i - 1; j++)
		{
			printf("  ");
		}
		for(j = 1; j < i -1; j++)
		{
			printf("  ");
		}
		for(j = i; j <= n; j++)
		{
			if(j == 1)
			{
				continue;
			}
			printf("%c ", 'A' + j);
		//	printf("* ");
		//	printf("%d ", j);
		}

		printf("\n");
	}
	for(i = 2 ; i <= n; i++)
	{
		for(j = n; j >= i; j--)
		{
                        printf("%c ", 'A' + j);
		//	printf("* ");
		//	printf("%d ", j);
		}
		for(j = 1; j <= i - 1; j++)
		{
			printf("  ");
		}
		for(j = 1; j < i -1; j++)
		{
			printf("  ");
		}
		for(j = i; j <= n; j++)
		{
		        printf("%c ", 'A' + j);
		//	printf("* ");
		//	printf("%d ", j);
		}
		printf("\n");
	}
	return 0;
}


