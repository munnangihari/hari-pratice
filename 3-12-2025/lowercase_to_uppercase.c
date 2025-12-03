#include <stdio.h>

int main()
{
	char str[50];
	printf("enter string:\n");
	scanf("%[^\n]", str);
	for(int i = 0; str[i] != '\0'; i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] = str[i] - 32;
		}
	}
	printf("%s", str);
	printf("\n");
	return 0;
}

