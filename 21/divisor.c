#include <stdio.h>
int count_divisors(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    int total_divisors = count_divisors(n);
    printf("Number of positive divisors of %d is: %d\n", n, total_divisors);
    return 0;
}
