#include <stdio.h>
int main()
{
	char str[200];
	char *p, *q, *r;
	printf("Enter a string: ");
	scanf("%[^\n]", str);
	p = str;
	while (*p != '\0')
	{
		q = p + 1;
		while (*q != '\0')
		{
			if (*q == *p)
			{
				r = q;
				while (*r != '\0')
				{
					*r = *(r + 1);
					r++;
				}
			} 
			else 
			{
				q++;
			}
		}
		p++;
	}
	printf("String after removing duplicates: %s\n", str);
	return 0;
}
