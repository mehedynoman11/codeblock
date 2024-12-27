#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    scanf("%s", s); // Read the input string

    int freq[256] = {0}; // Array to store the frequency of all characters (ASCII range 0-255)

    for (int i = 0; s[i] != '\0'; i++) {
        freq[(unsigned char)s[i]]++; // Increment the frequency of the character
    }

    // Print the frequencies of all characters in the string
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) { // Only print characters that appear in the string
            printf("'%c': %d\n", i, freq[i]);
        }
    }

    return 0;
}
