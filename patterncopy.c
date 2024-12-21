#include <stdio.h>

int main() {
    // Write Your Code Here
    int N, K, S;
    scanf("%d", &N);
    K=2*N-1;
    S=0;

    for(int i=N;i>=1;i--) {
        for(int j=1;j<=S;j++) {
            printf(" ");
        }
        for(int j=1;j<=K;j++){
            printf("%d", j);
        }
        K-=2;
        S++;
        printf("\n");
    }
    // K=2*N-3;
    // S=1;

    // for(int i=1;i<=N;i++) {
    //     for(int j=1;j<=S;j++) {
    //         printf(" ");
    //     }
    //     for(int j=1;j<=K;j++){
    //         printf("%d", j);
    //     }
    //     K-=2;
    //     S++;
    //     printf("\n");
    // }



    return 0;
}