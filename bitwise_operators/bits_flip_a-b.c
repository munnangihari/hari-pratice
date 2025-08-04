#include<stdio.h>
int main()
{
	int a, b, count = 0, x;
	printf("enter the values of a and b:\n");
	scanf("%d %d",&a,&b);
	x = a ^ b;
	while(x)
	{
		x = x & (x - 1);
		count++;
	}
	printf("%d", count);
	return 0;
}

