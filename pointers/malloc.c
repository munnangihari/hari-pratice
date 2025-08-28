#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr = (int*)malloc(sizeof(int));
	for (int i =0; i < 5; i++)
	{
		ptr[i] = i + 1;
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", ptr[i]);
	}
	printf("\n");
	return 0;
}
