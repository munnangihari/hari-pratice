#include <stdio.h>
int main() {
	int n, count = 0;
	printf("enter number of element");
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++)
	{
		printf("enter the %d elements", i + 1);
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++)
	{
		if(a[i] < 0)
		{
			printf("%d", a[i]);
			count++;
		}
	}

	printf("\nTotal negative elements = %d\n", count);
	return 0;
}
