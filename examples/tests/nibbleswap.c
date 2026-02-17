#include <stdio.h>
int main()
{
unsigned int n = 0xabcdef12;
        unsigned int rev = 0;
        while(n!=0){
                /*int res = n % 256;
                rev = rev * 256 + res;
                n = n/256;*/

		int res = n % 16;
                rev = rev * 16 + res;
                n = n/16;

	}
        printf("%x ",rev);
	printf("\n");
	return 0;
}
