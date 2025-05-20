#include <stdio.h>

int main() {
    int month;

    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1: // January
        case 3: // March
        case 5: // May
        case 7: // July
        case 8: // August
        case 10: // October
        case 12: // December
            printf("31 days in the month\n");
            break;

        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            printf("30 days in the month\n");
            break;

        case 2: // February
            printf("28 or 29 days in the month (leap year dependent)\n");
            break;

        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
    }

    return 0;
}
