#include <stdio.h>
#include <string.h>

int main(){
	char str[10];
	printf("enter the string:\n");
	scanf("%[^\n]", str);
	getchar();
	int i = 0;
        int j = strlen(str) - 1;

        while(i < j)
        {
                if(str[i] != str[j])
                {
                        printf("not a palindrome\n");
                        return 0;
                }
                i++;
                j--;
        }
        printf("palindrome\n");
        return 0;
}
