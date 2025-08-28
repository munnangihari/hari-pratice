#include <stdio.h>

int main()
{
	int a[5] = {10, 20, 30, 40, 50};
	int *p = a;
	int i;
	printf("original array:\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", *(p+i)); 
	}
	for (i = 0; i < 5; i++)
	{
		*(p+i) = *(p+i) + 5;
	}
	printf("\nafter modify:\n");
	for ( i = 0; i < 5; i++)
	{
		printf("%d ", *(p+i));
	}	
	return 0;
}
