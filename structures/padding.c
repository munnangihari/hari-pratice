#include <stdio.h>
struct Example 
{
	float a;  
	int b; 	
	char c;
	double d;	
};
int main()
{	
	printf("Size of struct: %zu\n", sizeof(struct Example));
        return 0;
}

