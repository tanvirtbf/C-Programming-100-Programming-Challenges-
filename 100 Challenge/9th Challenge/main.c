#include <stdio.h>
// Create a program that takes two numbers and shows result of all arithmetic operators(+,-,*,/,%)

int main(){
    int a,b;
    printf("Enter Two number : ");
    scanf("%d%d",&a,&b);
    printf("Addition Value is : %d\n", a+b);
    printf("Subtraction Value is : %d\n", a-b);
    printf("Multiplication Value is : %d\n", a*b);
    printf("Division Value is : %d\n",a/b);
    printf("Modulas Value is : %d\n", a%b);

    return 0;
}
