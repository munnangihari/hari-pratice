#include <stdio.h>

int main()
{
	int a[10], n, i, pos;
	printf("enter size of array:\n");
	scanf("%d",&n);
	printf("enter %d elements:\n");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("enter position:\n");
	scanf("%d",&pos);
	if((pos < 0) || (pos >= n))
	{
		printf("invalid position\n");
	}
	for(i = pos; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
