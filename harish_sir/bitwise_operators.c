#include <stdio.h>
int main(){
	int num, pos, result;
	printf("enter the number\n");
	scanf("%d", &num);
	printf("enter the position\n");
	scanf("%d", &pos);

	printf("set: %x\n", result = num | (1 << pos));
	printf("reset: %X\n", result = num & ~(1 << pos));
	printf("toggle: %X\n", result = num ^ (1 << pos));

	return 0;
}

