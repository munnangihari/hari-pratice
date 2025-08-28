#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char str[100];
	int fq[10] = {0};
	fgets(str, sizeof(str), stdin);
	for(int i = 0; i < strlen(str); i++)
	{
		if(isdigit (str[i]))
		{
			fq[str[i] - '0']++;
		}
	}
	for (int i = 0; i < 10; i++)
        {
		printf("%d ", fq[i]);
        }
	printf("\n");
	return 0;
}
