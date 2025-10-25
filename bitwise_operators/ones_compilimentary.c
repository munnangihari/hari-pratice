#include <stdio.h>
int main()
{
	char binary[32];
	printf("enter the binary:\n");
	scanf("%s", binary);
	for(int i = 0; binary[i] != '\0'; i++)
	{
		if(binary[i] == '0')
		{
			binary[i] = '1';
		}
		else if(binary[i] == '1')
		{
			binary[i] = '0';
		}
		else 
		{
			printf("Invalid binary input!\n");
			return 0;
		}
	}
	printf("%s", binary);
	return 0;
}
