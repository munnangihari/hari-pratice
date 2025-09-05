#include<stdio.h> 
void neon(int n) 
{
	int sq = n * n, sum = 0;
	while (sq > 0) 
	{
		sum += sq % 10;
		sq /= 10;
	}
	if (sum  == n)
	printf("%d is neon number\n",sum);
	else 
	printf("%d is not a neon number\n",sum);
}
int main()
{
	int n, sq, sum = 0;
	printf("enter n:\n");
	scanf("%d",&n);
	neon(n);
	return 0;
}
