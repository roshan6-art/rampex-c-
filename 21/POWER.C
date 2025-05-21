#include <stdio.h>
int main() {
    int base, power;
    long long result = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter power (non-negative): ");
    scanf("%d", &power);

    for (int i = 1; i <= power; ++i) {
        result *= base;
    }

    printf("%d^%d = %lld\n", base, power, result);

    return 0;
}