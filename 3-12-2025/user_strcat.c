#include <stdio.h>
#include <string.h>
int i = 0;
void mystrcat(char dest[i], char src[i], int len){
	while (dest[i] != '\0'){
		dest[len + i] = src[i];
		i++;
	}
}

int main(){
	char str[50];
	char str1[50];
	printf("enter the string\n");
	scanf("%[^\n]", str);
	getchar();
	printf("enter another string\n");
	scanf("%[^\n]", str1);
	mystrcat(str, str1, strlen(str));
	printf("%s", str);
	printf("\n");
	return 0;
}


