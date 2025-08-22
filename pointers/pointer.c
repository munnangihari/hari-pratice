#include <stdio.h>

int main()
{
	int i = 5109;
	int* ptr;
	ptr = &i;
	printf("%d ", i);
	printf("%p ", ptr);
	printf("%p ", &i);
	printf("%d ", *ptr);
	printf("%p ", &ptr);
	printf("\n");
	return 0;
}
