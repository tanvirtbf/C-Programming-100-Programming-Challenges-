#include <stdio.h>
// Create a program that takes two numbers and shows result of all arithmetic operators(+,-,*,/,%)

int main(){
    int a,b;
    printf("Enter Two number : ");
    scanf("%d%d",&a,&b);
    printf("%d + %d = %d\n", a, b, (a+b));
    printf("%d - %d = %d\n", a, b, (a-b));
    printf("%d * %d = %d\n", a, b, (a*b));
    printf("%d / %d = %d\n", a, b, (a/b));
    printf("%d mod %d = %d\n", a, b, (a%b));

    return 0;
}
