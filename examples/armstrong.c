#include<stdio.h>

int main()
{
	int n, r, sum = 0, armstrong;
	printf("enter n\n");
	scanf("%d",&n);
	armstrong = n;
	while(n != 0)
	{
		r = n % 10;
		sum = sum + r * r * r;
		n = n / 10;
	}
	if(armstrong == sum)
	{
		printf("ARMSTRONG NUMBER");
	}
	else
	{
		printf("NOT ARMSTRONG NUMBER");
	}
	return 0;
}

