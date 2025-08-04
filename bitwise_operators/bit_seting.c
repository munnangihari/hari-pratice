#include<stdio.h>
int main()
{
	int n, i, result;
	printf("enter the number:\n");
	scanf("%d",&n);
	printf("enter the position:\n");
	scanf("%d",&i);
	result = n | (1 << i);
	printf("Result after setting %d-th bit: %d\n", i, result);
	return 0;
}

