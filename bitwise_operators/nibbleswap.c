#include<stdio.h>
int main()
{
	int n = 0x1234; //0x1324
	n = (n & 0xF00F) | ((n & 0x0F00) >> 4) | ((n & 0x00F0) << 4);
	printf("0x%x\n",n);
	return 0;
}

