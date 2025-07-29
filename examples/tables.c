#include<stdio.h>

int main()
{
	int n, i;
	printf("enter n:\n");
	scanf("%d",&n);
	for(i = 1; i <= 10; i++)
		printf("\n%d X %2d = %2d", n, i, n*i);
	return 0;
}

