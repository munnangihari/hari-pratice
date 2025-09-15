#include <stdio.h>
void main()
{
	int a[2][3] = {{1,2,3},{4,5,6}};
	int b[3][2] = {{4,6},{1,3},{8,5}};
	int c[2][2] = {0};
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
	
			for(int k = 0; k < 3; k++)
			{

				c[i][j] += a[i][k] * b[k][ij];
			}
		}
	}
	for(int i = 0; i < 2; i++)
        {       
                for(int j = 0; j < 2; j++)
                {
		       printf("%2d ", c[i][j]);
		}
		printf("\n");
	}
}	
