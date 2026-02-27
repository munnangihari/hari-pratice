#include <stdio.h>

int main()
{
        int i, j, N;
        int count;
        printf("Enter N: ");
        scanf("%d", &N);
        count = N * 2 - 1;
        for(i=1; i<=count; i++)
        {
                for(j=1; j<=count; j++)
                {
                        if(i== (count / 2) + 1 || (j==(count / 2) + 1))
                        {
                                printf("* ");
                        }
                        else
                        {
                                printf("  ");
                        }
                }
                printf("\n");
        }
        return 0;

}


