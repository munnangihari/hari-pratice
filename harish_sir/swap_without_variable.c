#include <stdio.h>
int main(){
	int x = 10, y = 20;
	
	x = x ^ y;
	y = x ^ y;
	x = x ^ y;
	
	/*
	x = x + y;
	y = x - y;
	x = x - y;
	*/
	printf("after swapping: x =%d, y = %d", x, y);
	printf("\n");
	return 0;
}
