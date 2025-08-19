#include<stdio.h>

int main()
{
	int a[5] = {4,2,10,1,6};
        int i, j, temp;
	for (i = 1; i < 5; i++)
	{
		temp = a[i];
		j = i - 1;
		while((j >= 0) && (a[j] > temp))
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = temp;
	}
	for( i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
