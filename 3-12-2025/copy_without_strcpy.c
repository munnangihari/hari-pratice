#include <stdio.h>
int i = 0;
int mystrcpy(char dest[i], char src[i])
{
        
        while(src[i] != '\0')
        {
                dest[i] = src[i];
                i++;
        }
        dest[i] = '\0';
}

int main()
{
	char str[10];
	char name[50];
	printf("enter the string:\n");
	scanf("%[^\n]", str);
	getchar();
	printf("enter the name:\n");
	scanf("%[^\n]", name);
	mystrcpy(str, name);
	printf("%s\n",str);
	return 0;
}

