#include <iostream>
using namespace std;
int my_min(int a, int b) {
    if(a<b) return a;
    else return b;
}
int my_max(int a, int b){
    if(a>b) return a;
    else return b;
}

int main() {
    int a,b;
    cin>>a>>b;
    int mymin = my_min(a,b);
    int mymax = my_max(a,b);
    cout<<mymin<<" "<<mymax<<endl;

    return 0;
}