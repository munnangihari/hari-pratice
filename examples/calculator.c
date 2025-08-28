#include<stdio.h>

void sum (int a, int b)
{
	int result = a + b;
	printf("sum = %d\n", result);
}
void diff(int a, int b)
{
	int result = a - b;
	printf("diff = %d\n", result);
}
void multi(int a, int b)
{
	int result = a * b;
	printf("multiplication = %d\n", result);
}
void div(int a, int b)
{
	if(b != 0){
	printf("division = %d\n", a / b);
	}
	else{
		printf("division is zero\n");
	}
}
int main()
{
	sum(10,20);
	diff(10,20);
	multi(10,20);
	div(10,20);
	return 0;
}
