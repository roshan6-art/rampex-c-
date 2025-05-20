#include <stdio.h>

int main() {
    float temperature;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temperature);

    if (temperature < 10) {
        printf("Outfit suggestion: Jacket\n");
    } else if (temperature >= 10 && temperature <= 20) {
        printf("Outfit suggestion: Sweater\n");
    } else {
        printf("Outfit suggestion: T-shirt\n");
    }
return 0;
}