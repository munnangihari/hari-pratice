#include <stdio.h>

int main() {
   	char input[100];
    	int num = 0;
    	int i = 0;
	int sign = 1;
	printf("enter the string\n");
	scanf("%s", input);
	if(input[i] == '-'){
		sign = -1;
		i++;
	}

	else if(input[i] == '+'){
		sign = 1;
		i++;
	}

	while (input[i] >= '0' && input[i] <= '9') 
	{
        	num = num * 10 + (input[i] - '0');
        	i++;
    	}

    	printf("%d\n", num);
    	return 0;
}

