#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int max = arr[0];
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Maximum value in the array is: %d\n", max);
    return 0;
}
