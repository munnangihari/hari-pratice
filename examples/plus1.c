#include <stdio.h>
int main()
{
	int n;
	int m = 1;
	printf("enter number:\n");
	scanf("%d", &n);
	while(m != 0)
	{
		int temp = n;
		n = n ^ m;
		m = m & temp;
		m = m << 1;
	}
	printf("after adding 1 :%d\n",n);
	return 0;
}
