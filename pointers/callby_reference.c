#include<stdio.h>

void swap(int*, int*);
void main()
{
	int x = 10, y = 20;
	printf("before swapping: %d\t %d\n",x, y);
	swap(&x, &y);
}
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("after swapping: %d\t %d\n", *a, *b);
}
