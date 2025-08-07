#include<stdio.h>

struct std

{
	int std_no;
	char std_name[50];
	int std_fee;
};
int main()
{
struct std s1={52,"hari",30000};
printf("%d %s %d\n",s1.std_no,s1.std_name,s1.std_fee);
}

