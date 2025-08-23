#include <stdio.h>
#include <string.h>

int main()
{
	char a[10] = "apple";
	char b[10] = "apple";
	int result = strcmp(a, b);
	if(result < 0)
		printf("%s is comes before %s \n ", a,b);
	else if(result > 0)
		printf("%s is comes after %s \n ", a, b);
	else
		printf("%s and %s both are equal", a, b);
}

