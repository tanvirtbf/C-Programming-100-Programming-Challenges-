#include <stdio.h>
// Create a program to find the minimum of two numbers using ternary operator

int main(){
    int a,b;
    printf("Enter Two Number : \n");
    scanf("%d%d",&a,&b);
    a>b ? printf("%d is small number", b) : printf("%d is small number",a);
    return 0;
}
