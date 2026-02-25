#include <stdio.h>
int main(){
        for(int i = 5; i >= 1; i--){
                for(char ch = 'E'; ch > 'E' - i; ch--)
                {
                        printf("%c", ch);
                }
                printf("\n");
        }
        return 0;
}

