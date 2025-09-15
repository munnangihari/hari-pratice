#include <stdio.h>
#include <string.h>
void reverse(char str[], int start, int end) {
	if(start > end) return;
	int temp = str[start];
	str[start] = str[end];
	str[end] = temp;
	reverse(str, start + 1, end - 1);
}
void main()
{
	char str[100];
	printf("enetr string:\n");
	scanf("%[^\n]", str);
	reverse(str, 0, strlen(str) - 1);
	printf("reversed string:%s\n", str);
}
