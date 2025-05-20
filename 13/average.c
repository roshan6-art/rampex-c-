#include <stdio.h>

int main() {
    float tamil, english, maths, social, science, total, average;
    printf("Enter Tamil mark: ");
    scanf("%f", &tamil);
    
    printf("Enter English mark: ");
    scanf("%f", &english);
    
    printf("Enter Maths mark: ");
    scanf("%f", &maths);
    
    printf("Enter Social mark: ");
    scanf("%f", &social);
    
    printf("Enter Science mark: ");
    scanf("%f", &science);
    total = tamil + english + maths + social + science;
    average = total / 5;
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);

    return 0;
}
