#include<stdio.h>
int main()
{
	int n, result;
	printf("enter n:\n");
	scanf("%d",&n);
	result = n | (n + 1);
	printf("%d", result);
	return 0;
}
