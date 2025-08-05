#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("enter the number:\n");
	scanf("%d", &n);
	if (n == 0)
	{
		printf("There is no set bit (number is zero).\n");
		return 0;
	}
	int rightmost_set_bit = n & -n;
	int position = log2(rightmost_set_bit) + 1;
	printf("The position of the rightmost set bit is:%d\n",position);
	return 0;
}
