#include<stdio.h>
int main()
{
	int a, b;
	printf("enter the values of a and b:\n");
	scanf("%d %d",&a, &b);
	int AND_result = a & b;
	int OR_result = a| b;
	int XOR_result = a ^ b;
	printf("bitwise of %d & %d = %d\n",a, b, AND_result);
	printf("bitwise of %d | %d = %d\n",a, b, OR_result);
	printf("bitwise of %d ^ %d = %d\n",a, b, XOR_result);
	return 0;
}

