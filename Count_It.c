#include <stdio.h>
#include <string.h>

int main() {
    // Write Your Code Here
    char s[1001];
    fgets(s, sizeof(s), stdin);

    int capital = 0;
    int small = 0;
    int space = 0;
    int len = strlen(s);

    for(int i=0;s[i]!='\0';i++) {
        if (s[i] >= 'a' && s[i] <= 'z' )
        {
            small++;
        }else if (s[i] >= 'A' && s[i] <= 'Z' )
        {
            capital++;
        }else if (s[i] == ' ') {
            space++;
        }
    }
    printf("Capital - %d\n", capital);
    printf("Small - %d\n", small);
    printf("Spaces - %d\n", space);


    return 0;
}