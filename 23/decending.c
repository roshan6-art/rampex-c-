#include <stdio.h>

void print_descending(int n) {
    if (n==0)
        return;
    printf("%d\n", n);
    print_descending(n - 1);
}

int main() {
    int n = 51; 
    print_descending(n);
    return 0;
}