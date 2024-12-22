#include <stdio.h>

int main() {
    // Write Your Code Here
    int N;
    scanf("%d", &N);

    // int X1, X2;
    int X1=0, X2=0;
    for(int i=0;i<N;i++) {
        int A, B;
        scanf("%d %d", &A, &B);

        if (A > B) {
            X1++;
        } else if (B > A) {
            X2++;
        }

    }

    if (X1 > X2) {
        printf("Tiger\n");
    } else if (X2 > X1) {
        printf("Pathan\n");
    } else
    {
        printf("Draw\n");
    }


    return 0;
}