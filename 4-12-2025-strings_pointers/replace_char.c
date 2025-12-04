#include <stdio.h>

int main(){

	char str[100];
	char old, new;
	char *ptr = str;

	printf("enter the string:\n");
	scanf("%[^\n]", str);
	getchar();

	printf("enter old character:\n");
	scanf("%c", &old);
	getchar();

	printf("enter replace character:\n");
	scanf("%c", &new);

	while(*ptr != '\0')
	{
		if(*ptr == old)
		{
			*ptr = new;
		}
		ptr++;
	}
	printf("after replaceing the character:%s\n", str);
	return 0;
}

