#include<stdio.h>
int main()
{
	int n, result;
	printf("enter n");
	scanf("%d",&n);
	result = n & ( n -1);
	printf("%d\n", result);
	return 0;
}

