#include <stdio.h>
#include <ctype.h>

int main()
{
	char str[] = "hari vardhan";
	char *p = str;
	int count = 0;

	while (*p)
	{
		char ch = tolower(*p);
		if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		{
			count++;
		}
		p++;
	}
	printf("vowels = %d \n", count);
	return 0;
}	

