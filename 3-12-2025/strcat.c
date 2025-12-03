#include <stdio.h>
#include <string.h>

int main()
{
	char str[10] = "hari";
	char str1[50] = "vardhan";

	strcat(str, str1);
	printf("%s", str);
	printf("\n");
	return 0;
}

