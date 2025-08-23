#include<stdio.h>
#include<string.h>

int main()
{
	char h[] = "HARI VARDHAN-5109";
	char name[20];
	strncpy(name, h, 12);
	name[12] = '\0';
	printf("%s\n", name);
	return 0; 
}

