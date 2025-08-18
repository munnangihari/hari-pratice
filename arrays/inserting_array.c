#include<stdio.h>

int main()
{
	int a[10] = {1,2,8,9,10};
	int b[10] = {3,4,5,6,7};
	int m = 5, n = 5, pos, i;
	printf("enter the position:\n");
	scanf("%d", &pos);
	for(i = m - 1; i >= pos; i--)
	{
		a[i + n] = a[i];
	}
	for(i = 0; i < n; i++)
	{
		a[pos + i] = b[i];
	}
	m = m + n;
	for(i = 0; i < m; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}

