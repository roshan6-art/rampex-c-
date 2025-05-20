// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[]={1,2,3,4,5};
    int search=7;
    int found=0;
    for(int i=0;i<4;i++)
    {
        if(arr[i]==search)
        {
            found=1;
        break;
        }
    }
    if(found==1)
    printf("search value =%d",search);
    else
    printf("no search");
    return 0;
}