#include <stdio.h>

int main() {

    for (int i = 1; i <= 4; i++) {

        for (int j = i; j <= 4; j++) {
            printf("%d%d",i,j);
        }
        printf("\n");
    }
    return 0;
}