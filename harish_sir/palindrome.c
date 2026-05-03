#include <stdio.h>
int main(){
	int rev =0, num, r;
	printf("enter the number\n");
	scanf("%d", &num);
	int temp = num;

	while(num != 0){
		r = num % 10;
		rev = rev *10 + r;
		num = num / 10;
	}

	if(temp == rev){
		printf("palindrome\n");
	}
	else{
		printf("not palindrome\n");
	}
	return 0;
}

