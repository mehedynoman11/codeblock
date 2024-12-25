#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int mymin = min(a,b);
    int mymax = max(a,b);
    cout<<mymin<<" "<<mymax<<endl;

    return 0;
}