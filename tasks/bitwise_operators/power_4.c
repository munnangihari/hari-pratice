#include <stdio.h>
int main(){
        int n = 64;
        int temp = n, count = 0;
        if(n > 0 && ((n&(n - 1)) == 0) && (n % 3) == 1){
                printf("power of 4\n");
        }
        else {
                printf("not power\n");
        }

}
