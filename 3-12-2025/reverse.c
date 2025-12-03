#include <stdio.h>
#include <string.h>

int main(){
	char str[30] = "hello friend";
	int i = 0;
	int j = strlen(str) - 1;
	char temp;
	
	while (i < j) {
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		
		i++;
		j--;
	}
	printf("%s\n", str);
	return 0;
}

