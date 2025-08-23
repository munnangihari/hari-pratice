#include <stdio.h>

int main()
{
	char str[] = "hello world";
	char *p = str;
	int len = 0;
	while(*p != 0)
	{
		len++;
		p++;
	}
	printf("%d\n", len);
	return 0;
}
