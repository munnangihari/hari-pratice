#include <stdio.h>
int main()
{
	int arr[5] = {10,12,9,1,5};
	int largest = arr[0], large = arr[0];
	for (int i = 0; i <= 4; i++)
	{
		if(arr[i] > largest)
		{
			largest = arr[i];
		}
	}
	printf("largest = %d\n", largest);
	for(int i = 0; i <= 4; i++)
	{
		if(arr[i] > largest && arr[i] < large)
		{
			large = arr[i];
		}
	}
	printf("large = %d\n", large);
	return 0;
}
