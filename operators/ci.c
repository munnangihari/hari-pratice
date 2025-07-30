#include<stdio.h>
#include<math.h>
int main()
{
	float P, T, R, CI;
	printf("enter the principal (P)\n");
	scanf("%f",&P);
	printf("enter the time in years of (T)\n");
	scanf("%f",&T);    
	printf("enter the rate of interest of (R)\n");
	scanf("%f",&R);
	CI = P* pow((1 + R / 100), T) - P;
	printf("CI = %.2f",CI);
	return 0;
}
