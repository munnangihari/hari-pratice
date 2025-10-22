#include <stdio.h>
int main()
{
	int a, b;
	int *p = &a, *q = &b;
	printf("Enter two numbers: ");
 	scanf("%d %d", &a, &b);
        int temp = *p;
        *p = *q;
        *q = temp;
        printf("After swapping: a = %d, b = %d\n", a, b);
        return 0;
}
