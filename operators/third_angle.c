#include<stdio.h>
 int main()
{
	float a1, a2, a3;
	printf("enter the a1\n");
	scanf("%f", &a1);
	printf("enter the a2\n");
	scanf("%f", &a2);
	if(a1 <= 0 || a2 <= 0 || (a1 + a2) >= 180)
	{
		printf("angles are not posible to build the triangle");
		return 1;
	}
	a3 = 180 - (a1 + a2);
	printf("value of a3 is %.f",a3);
	return 0;
}

