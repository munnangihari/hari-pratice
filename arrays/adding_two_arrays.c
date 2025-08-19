#include <stdio.h>

int main()
{
	int a[5] = {1,3,5,7,9};
	int b[5] = {10,8,6,4,2};
	int c[5];
	for (int i = 0; i < 5; i++)
	{
		c[i] = a[i] + b[i];
		printf("%d ",c[i]);
	}
	printf("\n");
}
