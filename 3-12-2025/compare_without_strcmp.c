#include <stdio.h>

int i = 0;
void mystrcmp(char dest[i], char src[i]){
	
	while(dest[i] != '\0' && src[i] != '\0'){
	if (dest[i] != src[i]){
		printf("NOT EQUAL\n");
		return;
	}
	i++;
	}
	printf("EQUAL\n");
}

int main(){
	char str[50];
	char str1[50];
	printf("enter the string:\n");
	scanf("%[^\n]", str);
	getchar();
	printf("enter the string:\n");
        scanf("%[^\n]", str1);
	mystrcmp(str, str1);
	return 0;
}
