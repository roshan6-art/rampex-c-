#include<stdio.h>
int main(){
    int a=5;
    int *b=&a;
    printf("%p",&a);
    printf("%p",b);
    return 0;
}