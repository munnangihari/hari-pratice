#include <stdio.h>
int main(){
	int num = 14, i = 0, j = 3;

	if (((num >> i) & 1) != ((num >> j) & 1))
		num ^= (1 << i) | (1 << j);

	printf("%d\n", num);
	return 0;
}
