#include <stdio.h>

int main()
{
	int a[10] = {2,1,4,3,6,5,8,7,10,9};
	for (int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10 - i - 1; j++)
		{
			if ((a[j]) > (a[j + 1]))
			{
				int t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
		
	}
	printf("\n");
	return 0;
}
