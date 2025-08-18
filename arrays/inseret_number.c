#include<stdio.h>

int main()
{
	int a[10] = {10,12,16,18,20};
	int pos, num, i;
	printf("enter inserting number:\n");
	scanf("%d", &num);
	printf("enter position:\n");
	scanf("%d", &pos);
	for( i = 8; i >= pos; i--)
	{
		a[i + 1] = a[i];
	}
	a[pos] = num;
	for(i = 0; i < 10; i++)
	
	{
		if(a[i] != 0)
		{
			printf("%d ", a[i]);
		}
	}
	printf("\n");
	return 0;
}
