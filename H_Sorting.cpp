#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++) {
        cin>>A[i];
    }  

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (A[i] > A[j]) {
                // swap(A[j], A[j]);
                int tmp = A[i];
                A[i] = A[j];
                A[j] = tmp;
            }
        }
    }

    for(int i=0;i<N;i++){
        cout<<A[i]<<" ";
    }



    return 0;
}