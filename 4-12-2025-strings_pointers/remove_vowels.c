#include <stdio.h>

int main() {
	char str[200];
	char *p = str;
	char *q;

	printf("Enter a string: ");
	scanf("%[^\n]", str);
	getchar();

	while (*p != '\0')
	{
		if (*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U') 
		{
			q = p;
			while (*q != '\0')
			{
				*q = *(q + 1);
				q++;
			}
		} 
		else
		{
			p++;
		}
	}

	printf("String after removing vowels: %s\n", str);
	return 0;
}

