#include <stdio.h>

int main() {
    float tamil, english, maths, social, science, total, average;
    int pass = 1; // Assume pass unless a mark is below 35

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

    if (tamil < 35 || english < 35 || maths < 35 || social < 35 || science < 35) {
        pass = 0;
    }

     total = tamil + english + maths + social + science;
    average = total / 5;

     printf("\nTotal Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);

     if (pass == 1) {
        printf("Result: PASS\n");
    } else {
        printf("Result: FAIL\n");
    }

    return 0;
}
