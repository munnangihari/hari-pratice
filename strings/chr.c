#include <stdio.h>
#include <string.h>

int main()
{
	char a[] = "Hello world";
	char *res = strchr(a,'a');
	if (res != 0)
		printf("indix of a is :%ld\n",res - a);
	else
		printf(" 'a' not found");
		printf("\n");
	return 0;
}

