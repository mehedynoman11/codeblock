#include <stdio.h>

int main()
{
    // Write Your Code Here
    int N;
    scanf("%d", &N);

    for(int i=1;i<=N;i++) {
        for(int j=1;j<=N-i;j++) {
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++) {
            if (i % 2 == 1)
            {
                printf("^");
            } else {
                printf("*");
            }
            
        }
        printf("\n");
    }

    return 0;
}