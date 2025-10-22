#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i = 0, j;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    j = strlen(str) - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            printf("Not a Palindrome\n");
            return 0;
        }
        i++;
        j--;
    }
    printf("Palindrome String\n");
    return 0;
}
