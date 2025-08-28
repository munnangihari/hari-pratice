#include<stdio.h>
int main()
{
	int a[] = {3,4,1,2};
	int b = 5;
	int *ptr = a;
	printf("%p -> %p %p %p\n", &a[0], &a[1], &a[2], &a[3]);
	printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);
	printf("%d %d %d %d\n", *(a+0), *(a+1), *(a+2), *(a+3));
	printf("%d %d %d %d\n", *(ptr+0), *(ptr+1), *(ptr+2), *(ptr+3));
	printf("%d %d %d %d\n", ptr[0], ptr[1], ptr[2], ptr[3]);
	return 0;
}
