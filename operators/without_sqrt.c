#include<stdio.h>

int main()
{
	float i,n;
	printf("enter the value of n:");
	scanf("%f",&n);
	for(i = 0.01; i * i <= n; i=i+0.01);
		printf("%.2f\n",i);
		return 0;
}


