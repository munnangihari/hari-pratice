#include <stdio.h>
int main(){
	int n, i;
	printf("enter the number\n");
	scanf("%d", &n);
	printf("enter the posion\n");
	scanf("%d", &i);
	int result = n &~(1 << i);
	printf("%d", result);
	return 0;

}

