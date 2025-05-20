#include <stdio.h>

int main() {
    int marks[3][3]; 
    int total[3] = {0}; 
    int i, j;

    for(i = 0; i < 3; i++) {
        printf("Enter marks for Student %d:\n", i + 1);
        for(j = 0; j < 3; j++) {
            printf("  Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
            total[i] += marks[i][j];
        }
    }

    printf("\nMarksheet:\n");
    printf("Student\tSubject1\tSubject2\tSubject3\tTotal\n");

    for(i = 0; i < 3; i++) {
        printf("%d\t", i + 1);
        for(j = 0; j < 3; j++) {
            printf("%d\t\t", marks[i][j]);
        }
        printf("%d\n", total[i]);
    }

    return 0;
}
