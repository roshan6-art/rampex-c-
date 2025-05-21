#include <stdio.h>
float fahrenheitToCelsius(float f) {
    return (f - 32) * 5.0 / 9.0;
}

int main() {
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = fahrenheitToCelsius(fahrenheit);

    printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, celsius);

    return 0;
}