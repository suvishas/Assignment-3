#include <stdio.h>

int isPrime(int num);

int main() {
    int lower, upper, i;

    printf("Enter lower and upper limits to display prime numbers: ");
    scanf("%d %d", &lower, &upper);

    printf("Prime numbers between %d and %d are: ", lower, upper);

    for (i = lower; i <= upper; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}

int isPrime(int num) {
    int i;

    if (num <= 1) {
        return 0;
    }

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

