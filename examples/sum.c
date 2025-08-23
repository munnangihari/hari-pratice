#include <stdio.h>

int main()
{
	int arr[5] = {2,8,4,6,5};
	int *p = arr;
	int sum = 0, i;
	for (i = 0; i < 5; i++)
	{
		sum = sum + *(p + i);
	}
	printf("%d \n", sum);
	return 0;
}
