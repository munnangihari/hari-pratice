#include <stdio.h>
#include <string.h>

int main(){
	int i;
	char str[50];
	printf("enter the string:\n");
	scanf("%[^\n]", str);
	int len = strlen(str);
	if(str[len - 1] == '\n')
	{
		str[len - 1] = '\0';
	}
	for(i = 0; str[i] != '\0'; i++){
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		else if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	printf("%s\n", str);
	return 0;
}
