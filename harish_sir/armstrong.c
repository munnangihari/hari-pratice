#include <stdio.h>
#include <math.h>

int main(){
	int n, r, sum = 0, digits = 0;
	printf("enter the number\n");
	scanf("%d", &n);

	int temp = n;

	while(temp != 0) {
		temp = temp / 10;
		digits++;
	}
	
	temp = n;

	while(n != 0){
		r = n % 10;
		sum = sum + pow(r, digits);
		n = n / 10;
	}
	if(temp == sum){
		printf("ARMSTRONG NUMBER\n");
	}
	else {
		printf("NOT ARMSTRONG NUMBER\n");
	}
	return 0;
}
