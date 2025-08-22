#include <stdio.h>

struct emp
{
	int eno;
	char ename[20];
	float esal;
};
void main()
{
	int* enop;
	char* enp;
	float* esp;
	struct emp* sep;
	printf("sizeof int* is %zu \n ", sizeof(enop));
	printf("sizeof char* is %zu \n ", sizeof(enp));  
	printf("sizeof float* is %zu \n ", sizeof(esp));  
	printf("sizeof struct emp* is %zu \n ", sizeof(sep));
}	
