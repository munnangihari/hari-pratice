#include <stdio.h>
int main(){
	int num, rev = 0, r;
	printf("enter the number\n");
	scanf("%d", &num);

	while(num != 0){
		r = num % 10;
		rev = rev * 10 + r;
		num = num / 10;
	}
	printf("%d", rev);
	printf("\n");
	return 0;
}
