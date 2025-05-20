#include <stdio.h>

int main() {
    int a;
    printf("enter the number to check divisible of 5 and 11:");
    scanf("%d",&a);
    
    if(a%5==0 && a%11==0)
    {
        printf("yes it is div by 5 and 11");
    }
    else
    {
        printf("it is not a divisible of 5 and 11");
    }
}