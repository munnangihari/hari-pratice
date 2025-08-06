#include <stdio.h>
int main() 
{
	int n;
	printf("Enter number:\n");
	scanf("%d", &n);
	(n > 0) ? printf("positive") : (n < 0) ? printf("negitive") : printf("zero");
	return 0;
}

