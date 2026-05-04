#include <stdio.h>
#include <string.h>

int main() {
	char str[1000], word[50];
	int count = 0;

	printf("Enter a sentence:\n");
	fgets(str, sizeof(str), stdin);

	printf("Enter the word to search:\n");
	scanf("%s", word);

	char *token = strtok(str, " \n\t");

	while (token != NULL) {
		if (strcmp(token, word) == 0) {
			count++;
		}
		token = strtok(NULL, " \n\t");
	}

	printf("The word '%s' occurred %d times.\n", word, count);

	return 0;
}
