#include <stdio.h>

int countDigits(int num) {
    int count = 0;

    // Handle 0 explicitly
    if (num == 0)
        return 1;

    // Handle negative numbers
    if (num < 0)
        num = -num;

    while (num != 0) {
        num /= 10;
        count++;
    }

    return count;
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Number of digits: %d\n", countDigits(number));

return 0;
}