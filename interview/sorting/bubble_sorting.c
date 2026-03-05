#include <stdio.h>

int main(){

	int a[] = {7, 4, 6, 1, 5};
	int n = 5;
	for(int i = 0;i < n; i++){
		for(int j = 0; j < n - i - 1;  j++){
			if(a[j + 1] < a[j])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for(int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
}
