#include<stdio.h>
void max(int a, int b);

void max(int a, int b)
{
	if(a > b)
	{
		printf("maximum number is %d\n",a);
	}
	else
	{
		printf("maximum number is %d\n",b);
	}
}
void main()
{
	int num1, num2;
	printf("enter two numbers:\n");
	scanf("%d%d",&num1,&num2);
	max(num1, num2);	
}
