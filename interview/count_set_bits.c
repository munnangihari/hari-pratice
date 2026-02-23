#include <stdio.h>
int main(){
	int n, count = 0;
	printf("enter the number\n");
	scanf("%d", &n);
	while (n){
		n = n & (n - 1);
		count++;
	}
	printf("%d", count);
	return count;
}

