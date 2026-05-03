#include <stdio.h>
#define largest(x,y,z) ((x>y && x>z) ? x: (y>z ? y : z))

int main(){
	int a, b, c;
	printf("enter three numbers:\n");
	scanf("%d %d %d", &a, &b, &c);
	printf("largest number is: %d\n", largest(a,b,c));
	return 0;
}
