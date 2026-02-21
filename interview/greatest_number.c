#include <stdio.h>
int main(){
	int a, b;
	printf("enter two numbers\n");
	scanf("%d %d", &a,&b);
	if(a > b){
		printf("a is greater", a);
	}
	else{
		printf("b is greater");
	}
}
