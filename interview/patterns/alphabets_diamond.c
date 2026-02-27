#include <stdio.h>
int main() {
        int i, j, k;
        int n;
        printf("enter the number\n");
        scanf("%d", &n);

        for(i = 1; i <= n; i++) {

                for(j = i; j < n; j++) {
                        printf("  ");
                }

                for(k = 0; k < i; k++) {
                        printf("%c ", 'A' + k);
                }

                for(k = i - 2; k >= 0; k--) {
                        printf("%c ", 'A' + k);
                }

                printf("\n");
        }

        for(i = n - 1; i >= 1; i--) {

                for(j = i; j < n; j++) {
                        printf("  ");
                }

                for(k = 0; k < i; k++) {
                        printf("%c ", 'A' + k);
                }

                for(k = i - 2; k >= 0; k--) {
                        printf("%c ", 'A' + k);
                }

                printf("\n");
        }

	return 0;
}

