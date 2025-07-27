#include<stdio.h>
int main()
{
	float cm, m, km;
	printf("enter the length of cm\n");
	scanf("%f",&cm);
	m = cm / 100.0;
	km = cm / 100000.0;
	printf("length of m is %2f\n",m);
	printf("length of km is %5f\n",km);
	return 0;
}


