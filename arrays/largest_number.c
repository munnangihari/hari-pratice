#include <stdio.h>

int main()
{
	int arr[7] = {62,45,9,90,51,2,46};
	int large = arr[0];
	for( int i = 1; i < 7; i++)
	{
		if(large < arr[i])
		{
			large = arr[i];
		}
	}
		printf("%d\n",large);
		return 0;
}

