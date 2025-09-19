#include <stdio.h>
int main()
{
	int n, m =0;
	printf("enter the size:\n");
	scanf("%d", &n);
	int a[n], d[n];
	printf("enter array:\n");
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++)
	{
		int count = 0;
		for(int j = i + 1; j < n; j++)
		{
			if(a[i] == a[j])
			{
				for(int k = 0; k < n; k++)
				{
					if(a[i] == d[k])
					{
						count++;
					}
				}
				if(count == 0)
				{
					d[m] = a[i];
					m++;
				}
			}
		}
	}
	for(int i = 0; i < m; i++)
	{
		printf("%d ", d[i]);
	}
	return 0;
}
