#include <stdio.h>
int main()
{
	int arr[5] = {1,2,3,4,5};
	int min = arr[0], max = arr[0];
	for(int i = 0; i <= 4; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("max = %d\n", max);
	for(int i = 0; i <= 4; i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
		}
	}
	printf("min = %d\n", min);
	return 0;
}
