#include <stdio.h>
int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("Binary representation of %d is: ", num);
    for (int i = 31; i >= 0; i--) {
        if (num & (1 << i))
            printf("1");
        else
            printf("0");
    }
    printf("\n");
    return 0;
}

