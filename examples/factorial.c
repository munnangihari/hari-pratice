#include<stdio.h>

int main()
{
	int n, i, fact = 1;
	printf("enter the value of n:\n");
	scanf("%d",&n);
	for (i = 1; i <= n; i++)
		fact = fact * i;
	printf("%d",fact);
	return 0;
}

