#include <stdio.h>

void reverseString(char *str) {
    char *end, *start;
    char temp;

    start = str;
    end = str;
    while (*end != '\0') {
        end++;
    }
    end--;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);
    reverseString(str);
    printf("Reversed string: %s", str);
    return 0;
}

