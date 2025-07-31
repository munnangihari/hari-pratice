#include<stdio.h>
int main()
{
	int num, count = 0;
	printf("enter num\n");
	scanf("%d",&num);
	while(num != 0)
	{
		num = num & (num - 1);
		count++;
	}
		printf("number of sets are %d\n", count);
		return 0;
}
