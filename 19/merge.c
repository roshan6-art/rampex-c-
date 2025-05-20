// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr1[]={1,2,3,4,5};
    int arr2[]={6,7,8,9,0};
    int arr3[10];
    int i,j=0;
    for(int i=0;i<5;i++)
    {
     arr3[j++]=arr1[i];
    }
     for(int i=0;i<5;i++)
    {
     arr3[j++]=arr2[i];
    }
     for(int i=0;i<10;i++)
    {
    printf("%d",arr3[i]);
    }
}