#include <stdio.h>
int mystrlen(char str[])
{
	int len = 0;
	while(str[len] != '\0')
	{
		len++;
	}
	return len;
}
int main()
{
	char s[100];
	printf("enter string:\n");
	scanf("%[^\n]", s);
	printf("LENGTH = %d\n",mystrlen(s));
	return 0;
}
