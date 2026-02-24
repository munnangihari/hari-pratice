#include <stdio.h>
int main(){
	int i, j;
	int n= 4;
	int result = n * (n + 1)/2;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j <= i; j++)
		{
			printf("%2d ", result--);
		}
		printf("\n");
	}
	return 0;
}

