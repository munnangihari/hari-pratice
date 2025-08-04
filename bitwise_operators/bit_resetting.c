#include<stdio.h>
int main()
{
	int num, i, result;
	printf("enter the num:\n");
	scanf("%d",&num);
        printf("enter the position:\n");
	scanf("%d",&i);
	result = num & (~(1 << i));
	printf("Result after resetting %d-th bit: %d\n", i, result);
	return 0;
}

