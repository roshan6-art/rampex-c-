#include <stdio.h>
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90}, n = sizeof(arr)/sizeof(*arr), t;
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                t = arr[j], arr[j] = arr[j + 1], arr[j + 1] = t;
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}