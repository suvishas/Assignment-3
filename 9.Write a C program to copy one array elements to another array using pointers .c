#include <stdio.h>

void copyArray(int *src, int *dest, int n) {
    int i;
	for (i = 0; i < n; i++) {
        *(dest + i) = *(src + i);
    }
}

int main() {
    int srcArray[100], destArray[100], n;
	int i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &srcArray[i]);
    }

    copyArray(srcArray, destArray, n);

    printf("Copied array elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", destArray[i]);
    }

    return 0;
}

