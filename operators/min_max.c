#include <stdio.h>
#include<stdlib.h>
int main() 
{
	int a, b;
	printf("Enter two numbers:\n");
	scanf("%d %d", &a, &b);
	int max = (a + b + abs(a - b)) / 2;
        int min = (a + b - abs(a - b)) / 2;
        printf("Maximum: %d\n", max);
        printf("Minimum: %d\n", min);
        return 0;
}
