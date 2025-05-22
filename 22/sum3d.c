#include <stdio.h>
int sum3DArray(int array[][2][2], int x, int y, int z) {
    int sum = 0;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                sum += array[i][j][k];
            }
        }
    }
    return sum;
}
int main() {
    int arr[2][2][2] = {
        {
            {1, 2},
            {3, 4}
        },
        {
            {5, 6},
            {7, 8}
        }
    };
    int result = sum3DArray(arr, 2, 2, 2);
    printf("Sum of 3D array: %d\n", result);
    return 0;
}
