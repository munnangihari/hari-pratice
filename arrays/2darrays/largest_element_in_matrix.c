#include <stdio.h>
int main()
{
	int rows,cols;
	printf("enter no of rows and cols \n");
	scanf("%d %d", &rows, &cols);
	int a[rows][cols];
	int max;
	printf("enter elements\n");
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	max = a[0][0];
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			if(a[i][j] > max)
			{
				max = a[i][j];
			}
		}
	}
	printf("%d\n", max);
	return 0;		
}
					
