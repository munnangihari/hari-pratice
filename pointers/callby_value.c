#include <stdio.h>

void fun(int, int);
void main()
{
	int a = 10, b= 20;
	printf("%d\t %d\n", a, b);
	fun(a, b);
}
void fun(int m, int n)
{
	m = 40;
	n = 20;
	int diff = m - n;
	printf("%d\n",diff);
}
