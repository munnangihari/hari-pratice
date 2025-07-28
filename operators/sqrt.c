#include<stdio.h>
#include<math.h>

int main()

{
	double num, result;
	printf("enter the num:");
	scanf("%lf",&num);
	result = sqrt(num);
	printf("%lf\n %lf\n",num, result);
	if(num<0)
	{
		printf("sqrt is not possible for negitive numbers");
	}
	return 0;
}

