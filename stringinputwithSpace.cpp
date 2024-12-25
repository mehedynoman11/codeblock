#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char s[100];
    cin.getline(s,100);
    int count = strlen(s);
    cout<<s<<endl;
    cout<<count;
    return 0;
}