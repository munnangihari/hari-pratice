#include <stdio.h>
#include <ctype.h>

int main() {
	int c;
	int characters = 0, words = 0, lines = 0;
	int in_word = 0;

	while ((c = getchar()) != EOF) {
		characters++;

		if (c == '\n')
			lines++;

		if (isspace(c)) {
			in_word = 0;
		} else if (in_word == 0) {
			in_word = 1;
			words++;
		}
	}

	printf("lines = %d\n", lines);
	printf("words = %d\n", words);
	printf("characters = %d\n", characters);

	return 0;
}
