#include <stdio.h>

void reverse(int *arr, int n){
	int *start = arr;
	int *end = arr + n - 1;

	while(start < end){
		int temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
int main(){
	int a[5] = {5, 4, 3, 2, 1};
	reverse(a, 5);
	for(int i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
