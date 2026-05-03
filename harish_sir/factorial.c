#include <stdio.h>

int fact(int num)
{
	if(num == 0){
		return 1;
	}
	else{
		return num * fact(num - 1);
	}
}

int main(){
	int n;
	printf("enter number\n");
	scanf("%d", &n);

	if(n < 0){
		printf("invalid number\n");
	}
	else{
		printf("factorial of given number is:%d\n", fact(n));
	}
	return 0;
}
/*
	int fact = 1;
	for(int i = 1; i <= n; i++)
	{
		fact = fact * i;
	}
	printf("%d", fact);
	printf("\n");
	return 0;
}

*/
