#include <stdio.h>

int main() {
    // Write Your Code Here
    int N;
    scanf("%d", &N);

    int A[N];
    for(int i=0;i<N;i++) {
        scanf("%d", &A[i]);
    }

    for(int i=0;i<N-1;i++) {
        for(int j=0;j<N-i-1;j++) {
            if(A[j] > A[j+1]) {
                int tmp = A[j];
                A[j] = A[j+1];
                A[j+1] = tmp;
            }

        }
    }

    if (N % 2 == 1) {
        printf("%d\n", A[N / 2]);
    } else {
        printf("%d %d", A[N/2-1], A[N/2]);
    }
    
    return 0;
}