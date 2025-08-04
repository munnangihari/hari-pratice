#include<stdio.h>
int main()
{
	int num, i;
	printf("enter the number:\n");
	scanf("%d",&num);
	printf("enter the position:\n");
	scanf("%d",&i);
	int mask = 1 << (i - 1);
	if(num & mask)
	{
		printf("set");
	}
	else
	{
		printf("not set");
	}
	return 0;
}

