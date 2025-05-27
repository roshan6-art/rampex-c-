#include <stdio.h>

int main() {
    int a=5;
    int *p=&a;
    printf("(%d)  value of a by calling *p\n\n",*p);
    printf("(%p)  add 1 value in a by calling p \n\n",*p+1);
    printf("(%p)  addres of a\n\n",&a);
    printf("(%d)  addres of p \n\n",&p);
    return 0;
}
