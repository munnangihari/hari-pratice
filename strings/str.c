#include <stdio.h>
#include <string.h>

int main() 
{
	char s[] = "Hello, Geeks!";
	char *pos = strstr(s, "Geeks");
	if (pos != NULL)
		printf("Found\n"); 
	else
	        printf("Not Found\n");
	return 0;
}
