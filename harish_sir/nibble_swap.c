#include <stdio.h>

int main(){
	int num = 0x5109;
	num = (num & 0x0FF0) | ((num & 0xF000) >> 12) | ((num & 0x000F) << 12);
	printf("0x%x\n", num);
	return 0;
}
