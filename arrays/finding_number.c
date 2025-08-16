#include<stdio.h>

int main()
{
	int arr[5] = {40, 55, 48, 22, 50};
	for(int i = 0; i < 5; i++)
	{
		if (arr[i] == 22)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}

