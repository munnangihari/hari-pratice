#include <stdio.h>
#include <string.h>

int main()
{
	char name[20] = "HARI ";
	char s[] = "VARDHAN";
	strcat(name,s);
	printf("%s\n", name);
	return 0; 
}
