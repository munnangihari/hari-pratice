#include<stdio.h>

int main()
{
	int a[5] = {4,6,8,2,5};
	int sum = 0, i;
	float avg;
	for (i = 0; i < 5; i++)
	{
		sum = sum + a[i];
		avg = sum / 5.0;
	}
	printf("sum is %d \n", sum);
	printf("avg is %.2f", avg);
	printf("\n");
	return 0;
}

