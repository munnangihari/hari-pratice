#include<stdio.h>
void sum()
{
	int a, b, sum = 0;
	printf("enter two numbers:\n");
	scanf("%d%d",&a,&b);
	sum = a + b;
	printf("sum of two numbers is: %d\n",sum);
}
void main()
{
	sum();
	sum();
}

