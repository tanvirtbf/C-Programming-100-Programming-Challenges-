#include <stdio.h>
// sum of two numbers
int main() {
    int num1, num2, num3;
    printf("Please Enter your 3 numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    const int sum = num1 + num2 + num3;
    printf("Sum : %d", sum);
    return 0;
}
