#include<stdio.h>
int main()
{
	int n;
	printf("enter number:\n");
	scanf("%x",&n);
	n = ((n & 0xf00f) | ((n & 0x0f00) >> 4) | ((n & 0x00f0) << 4));
	printf("0x%x\n",n);
	return 0;
}
