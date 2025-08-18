#include<stdio.h>

int main()
{
	int a[10],n,i,rev[10];
	printf("enter size of array:\n");
	scanf("%d", &n);
	printf("enter %d elements:\n");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n; i++)
	{
		rev[i] = a[n - 1 - i];
	}
	for(i = 0; i < 5; i++)
	{
		printf("%d \n", rev[i]);
	}
	return 0;
}
