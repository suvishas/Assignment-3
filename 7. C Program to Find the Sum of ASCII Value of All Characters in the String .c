#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    int sum = 0, i, len;

    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);

    len = strlen(str);

    // calculate sum of ASCII values of all characters
    for (i = 0; i < len; i++) {
        sum += str[i];
    }

    printf("Sum of ASCII values of all characters in the string is %d.\n", sum);

    return 0;
}

