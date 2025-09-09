#include <stdio.h>
int mystrcpy(char dest[], char src[])
{
	int i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
int main()
{
	char s1[100], s2[100];
	printf("enter string:\n");
	scanf("%[^\n]", s1);
	mystrcpy(s2, s1);
	printf("copy string = %s\n", s2);
	return 0;
}

