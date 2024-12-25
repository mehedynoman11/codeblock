#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, y;
    cin>>x>>y;
    int mymin = min(x,y);
    int mymax = max(x,y);

    cout<<mymax<<" "<<mymin<<endl;

    return 0;
}