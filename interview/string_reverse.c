#include <stdio.h>

int main()
{
	int arr[5] = {1, 2, 3, 4, 5};
	reverse(arr, 5);
	for(int i = 0; i < 5; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	return 0;
}

void reverse(int *arr, int n)
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

	
