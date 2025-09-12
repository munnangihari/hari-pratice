#include <stdio.h>
int main() 
{
	char str[100];
	char *p;
	printf("Enter a string: ");
	scanf("%[^\n]", str); 
	p = str; 
	printf("Vowels in the string: ");
	while (*p != '\0') 
	{
		char ch = *p;
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
				ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
		{
			printf("%c ", ch);
		}
		p++; 
	}
	printf("\n");
	return 0;
}

