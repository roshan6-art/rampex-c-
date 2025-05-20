#include <stdio.h>

int main() {

  printf("Even numbers from 1 to 50 (for loop):\n");
  for (int i = 2; i <= 50; i += 2) {
    printf("%d ", i);
  }
  printf("\n");

  printf("Even numbers from 1 to 50 (while loop):\n");
  int j = 2;
  while (j <= 50) {
    printf("%d ", j);
    j += 2;
  }
  printf("\n");
return 0;
}