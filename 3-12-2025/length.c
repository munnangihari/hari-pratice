#include <stdio.h>
#include <string.h>

int main(){
	//char str[] = "hari vardhan";

	int i = 0;
	char str[100];
	printf("enter string\n");
	scanf("%[^\n]",str);
	while(str[i] != '\0')
	{
		i++;
	}
	printf("%d", i);
}

