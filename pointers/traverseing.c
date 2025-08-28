#include<stdio.h>

int main()
{
	int a[5] = {10, 20, 30, 40, 50};
	int *p = a;
	printf("traversing array elements are:\n");
	for(int i = 0; i < 5; i++)
	{
		printf("element %d = %d\n", i, *(p+i));
	}
	return 0;
}
