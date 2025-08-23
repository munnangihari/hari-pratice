#include <stdio.h>
#include <string.h>

int main() 
{
	char s[] = "Hello, World!";
	char *res = strrchr(s, 'o');   
	if (res != NULL)
		printf("Character found at: %ld index\n", res - s);
	else
		printf("Character not found\n");
	return 0;
}
