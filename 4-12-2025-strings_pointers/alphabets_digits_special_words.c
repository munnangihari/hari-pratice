#include <stdio.h>

int main() {
	char str[200];
	char *p = str;
	int alphabets = 0, digits = 0, special = 0, words = 1;

	printf("Enter a string: ");
	scanf("%[^\n]", str);
	getchar();
	while (*p != '\0')
	{
		if ( (*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z'))
		{
			alphabets++;
		}
		else if(*p >= '0' && *p <= '9')
		{
			digits++;
		}
		else	       
		{
			special++;
		}
		p++;

		if(*p !=' ' && (*(p + 1) == ' ' || (*p + 1) == '\0'))
		{
			words++;
		}

	}
	printf("alphabets = %d\n", alphabets);
        printf("digits= %d\n", digits); 
        printf("Special characters = %d\n", special); 
        printf("words = %d\n", words); 

	return 0;
}
