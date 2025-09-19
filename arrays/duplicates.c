#include <stdio.h>
int main()
{
	int n;
	printf("enter the size:\n");
	scanf("%d", &n);
	int a[n];
	printf("enter array:\n");
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int count = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i] == a[j])
			{
				printf("%d", a[i]);
				count++;
				break;
			}
		}
	}
	if(count == 0)
	{
		printf("NONE\n");
	}
	return 0;
}

