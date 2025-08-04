#include <stdio.h>

int main() {
	int num, i;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("Enter bit position to toggle (0-based): ");
	scanf("%d", &i);
	int result = num ^ (1 << i);
	printf("Result after toggling %d-th bit: %d\n", i, result);
	return 0;
}

