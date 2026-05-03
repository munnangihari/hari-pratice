#include <stdio.h>
int main(){
	int n, i, j;
	printf("enter the range of the numbers:\n");
	scanf("%d", &n);
	printf("prime numbers are:\n");
	for(i = 2; i <= n; i++){
		int count = 0;
		for(j = 1; j <= i; j++){
			if(i % j == 0)
			{
				count++;
			}
		}
		if(count == 2){
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}
