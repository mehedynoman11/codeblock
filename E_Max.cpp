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

    int maxNum = INT_MIN;

    for(int i=0;i<N;i++) {
        if(A[i] > maxNum){
            maxNum = A[i];
        }
    }
    cout<<maxNum<<endl;



    

    return 0;
}