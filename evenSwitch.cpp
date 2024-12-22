#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;

    switch(N % 2) {
        case 0: cout<<"Even"<<endl;break;
        default: cout<<"Odd"<<endl;
    }

    return 0;
}