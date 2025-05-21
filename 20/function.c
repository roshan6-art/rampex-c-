#include <stdio.h>
int add(int x,int y)
{
    return x+y;
}

int main() {
    int sum=add(3,4);
    printf("sum=%d",sum);
    return 0;
}