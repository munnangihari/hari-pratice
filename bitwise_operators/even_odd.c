#include<stdio.h>
int main()
{
	int num;
	printf("enter the num:\n");
	scanf("%d",&num);
	if(num & 1)
		printf("%d is odd\n",num);
	else
		printf("%d is even\n",num);
	return 0;
}

