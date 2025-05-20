#include <stdio.h>

int main() {
  int arr[] = {10, 5, 20, 8, 15};
  int n = sizeof(arr) / sizeof(arr[0]);
  int max = arr[0];

  for (int i = 1; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  printf("Maximum element in the array is: %d\n", max);
  return 0;
}