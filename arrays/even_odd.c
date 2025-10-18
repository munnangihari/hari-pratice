#include <stdio.h>
int main()
{
	int n;
	printf("enter the number of elements\n");
	scanf("%d", &n);
	int a[n], evencount = 0, oddcount = 0;
	for(int i = 0; i < n; i++)
	{
		printf("enter elements");
		scanf("%d", &a[i]);
	}
	printf("\neven numbers:\n");
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0)
		{
			printf("%d\n", a[i]);
			evencount++;
		}
	}
	printf("\nodd numbers:\n");
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 != 0)
		{
			printf("%d\n", a[i]);
			oddcount++;
		}
	}
	return 0;
}
