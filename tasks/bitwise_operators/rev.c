#include<stdio.h>
int main()
{
	unsigned int n, rev = 0;
	printf("enter number:\n");
	scanf("%d",&n);
	for(int i = 0; i < 4; i++)
	{
		rev = (rev << 1) | (n & 1);
		n = n >> 1;
	}
	printf("%u\n",rev);
	return 0;
}
