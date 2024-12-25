#include <iostream>
#include <limits.h>
using namespace std;
int main() {

    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++) {
        cin>>A[i];
    }

    int maxNum;

    for(int i=0;i<N;i++) {
        if(A[i] > maxNum){
            max(A[i], maxNum);
        }
    }
    cout<<A[i]<<endl;



    

    return 0;
}