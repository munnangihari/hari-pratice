#include <stdio.h>

int main() {
    int n = 5;
    int c = 1;
    int d = 'A';
    for (int i = 0; i < n; i++) {

        for (int j = 0; j <= i; j++) {
            printf("%d %c ", c++, d++);
	   
        }
        printf("\n");
    }
    return 0;
}
