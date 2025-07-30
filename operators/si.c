#include<stdio.h>
int main()
{
	float P, T, R, SI;
	printf("enter the principal (P)\n");
	scanf("%f",&P);
	printf("enter the time in years of (T)\n");
	scanf("%f",&T);    
	printf("enter the rate of interest of (R)\n");
	scanf("%f",&R);
	SI = ( P * T * R ) / 100;
	printf("SI = %.2f",SI);
	return 0;
}
