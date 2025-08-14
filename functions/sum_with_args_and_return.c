#include<stdio.h>
void sum(int a, int b);
void sum(int x, int y)
{
	int sum = x + y;
	printf("%d\n", sum);
}
int main()
{
	sum(5,70);
	sum(10,99);
	return 0;
}
