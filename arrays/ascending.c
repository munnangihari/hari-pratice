#include<stdio.h>

int main()
{
	int a[5] = {4,8,2,9,6};
	int size = sizeof(a) / sizeof(a[0]);
	for(int i = 0; i <= 4; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if(a[i] > a[j])
			{
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n size is:%d", size);
	printf("\n");
	return 0;
}
				
