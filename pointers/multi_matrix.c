#include <stdio.h> 

int main()
{
	int m, n, p, q;
	printf("enter number of rows and columns in matrix 1:\n");
	scanf("%d %d", &m, &n);
	printf("enter number of rows and columns in matrix 2:\n");
	scanf("%d %d", &p, &q);
	if (n != p)
	{
		printf("matrix multiplication is not possible\n");
		return 0;
	}
	int A[m][n], B[p][q], C[m][q];
	int i, j, k;
	printf("Enter elements of Matrix 1:\n");
	for (i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
	printf("Enter elements of Matrix 2:\n");
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < q;j++)
		{
			scanf("%d", &B[i][j]);
		}
	}
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < q; j++)
		{
			C[i][j] = 0;
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < q; j++)
		{
			for (k = 0; k < n; k++)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	printf("resultant matrix (%d x %d):\n",m, q);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < q; j++)
		{
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}
	return 0;
}

