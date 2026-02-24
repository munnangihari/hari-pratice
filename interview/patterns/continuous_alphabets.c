#include <stdio.h>

int main() {
	int i, j, n = 5;
	char d = 'A';

	for(i = 1; i <= n; i++) {
		for(j = 1; j <= i; j++) {
			printf("%c", d++);
		}
		printf("\n");
	}
	return 0;
}
