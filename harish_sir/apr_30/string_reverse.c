#include <stdio.h>
#include <string.h>

int main(){
	char str[50];
	printf("enter the string\n");
	scanf("%[^\n]", str);
	int i = 0;
	int j = strlen(str) - 1;

	while(i < j){
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		
		i++;
		j--;
	}
	printf("%s", str);
	printf("\n");
	return 0;
}
