#include <stdio.h>

void reverse (int *arr, int n)
{
	int *start = arr;
	int *end = arr + n - 1;
	
	while (start < end)
	{
		int temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
int main()
{
	int a[5] = {1, 2, 3, 4, 5};
	reverse (a, 5);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
