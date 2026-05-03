#include <stdio.h>
int main(){
	int num, count = 0;
	printf("enter the number\n");
	scanf("%d", &num);
	while(num){
		count = count + (num & 1);
		num = num >> 1;
	}
	printf("number of set bits are: %d\n", count);
	return 0;
}
