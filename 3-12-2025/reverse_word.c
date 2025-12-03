#include <stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("enter the string:\n");
	scanf("%[^\n]", str);
	getchar();
	int i=0, j, len;
	len = strlen(str);
	while (str[i] != '\0')
	{
		if(str[i] == ' ' || i == len - 1)
		{
			if(i == len - 1)
			{
				j = i;
			}
			else
			{
				j = i - 1;
			}
			while(str[j] != ' ' && j != -1)
			{

				printf("%c", str[j]);
				j--;
			}
			printf(" ");
		}
		i++;

	}
	printf("\n");
	return 0;
}


