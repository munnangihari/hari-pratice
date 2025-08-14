#include<stdio.h>
void sum(int a, int b);

void sum(int x, int y)
{
	int sum = 0;
	sum = x + y;
	printf("%d\n", sum);
}
void main()
{
	sum(55,109);
	sum(74,26);
}

