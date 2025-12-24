#include <stdio.h>

int main(){
	int n;
	printf("enter the number\n");
	scanf("%d", &n);
	int m = 1;
	while (n & m)
	{
		n = n ^ m;
		m <<= 1;
	}
	n = n ^ m;
	printf("Result after adding 1: %d\n", n);
	return 0;
}
