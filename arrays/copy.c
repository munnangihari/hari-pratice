#include <stdio.h>
int main()
{
	int n;
	printf("enter number of elements:\n");
	scanf("%d", &n);
	int a[n], b[n];
	for(int i = 0; i < n; i++)
	{
		printf("enter elements:\n");
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < 5; i++)
	{
		b[i] = a[i];
	}
	printf("copied array = :\n");
	for(int i = 0; i < 5; i++)
	{
		printf("%d", b[i]);
	}
	return 0; 
}
