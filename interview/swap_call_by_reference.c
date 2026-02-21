#include <stdio.h>

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main(){
	int a = 10, b = 20;
	printf("before swap");
        printf("\n%d %d\n", a, b);	
	swap(&a,&b);
	printf("after swap\n");
	printf("%d %d\n", a, b);
}
