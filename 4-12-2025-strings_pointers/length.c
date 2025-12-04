#include <stdio.h>

int main(){
	char str[100];
	char *p = str;
	int length = 0;
	printf("enter the string:\n");
	scanf("%[^\n]", str);
	getchar();
	while (*p != '\0'){
		length++;
		p++;
	}
	int count = 0;
	for(int i = length-1;i>=0;i--)
	{
		if(count == 0)
		{
			int j = i;
			while(str[j] == ' ')
			{
				str[j] = '\0';
				j--;
			}
			
		}
		count++;
	}

	length = 0;
	int i = 0;
	while(str[i] != '\0')
	{
		length++;
		i++;
	}

	printf("%d", length);
	return 0;
}
