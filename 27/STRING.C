#include <stdio.h>

int main() {
 char name[40]; 
 printf("Enter Your Full Name:");
 fgets(name,40,stdin);
 printf("%s",name);
 return 0;
}
