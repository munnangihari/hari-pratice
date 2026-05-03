#include <stdio.h>
int main(){
	int num, start, end;
	printf("enter the number\n");
	scanf("%d", &num);
	printf("enter the start bit\n");
	scanf("%d", &start);
	printf("enter the end bit\n");
	scanf("%d", &end);

	int mask = ((1 << (end - start + 1)) - 1) << start;
	num = num | mask;
	printf("%d", num);
	printf("\n");
	return 0;
}
