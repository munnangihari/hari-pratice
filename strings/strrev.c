#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	printf("enter string:\n");
	scanf("%s", str);
	int len = strlen(str);
	for(int i = 0; i < len/2; i++)
	{
		char temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
		printf("%s\n", str);
	}
	return 0;
}
