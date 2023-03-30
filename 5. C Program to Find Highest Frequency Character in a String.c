#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    int freq[256] = {0};
    int maxFreq = 0, i, len;

    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);

    len = strlen(str);

    // count frequency of each character
    for (i = 0; i < len; i++) {
        freq[str[i]]++;
    }

    // find character with highest frequency
    for (i = 0; i < 256; i++) {
        if (freq[i] > freq[maxFreq]) {
            maxFreq = i;
        }
    }

    printf("Highest frequency character is '%c' with frequency %d.\n", maxFreq, freq[maxFreq]);

    return 0;
}

