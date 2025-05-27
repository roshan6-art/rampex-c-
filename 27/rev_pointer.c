#include <stdio.h>

int main() {
    int arr[] = {2, 3, 4, 5, 6};
    int *start = arr;
    int *end = arr + 4;
    int temp;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
