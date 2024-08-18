#include <stdio.h>
// Create a program to swap two numbers
int main(){

    int firstNumber, secondNumber, temp;

    printf("Enter the first number : ");
    scanf("%d",&firstNumber);
    printf("Enter the second number : ");
    scanf("%d",&secondNumber);

    temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;

    printf("First Number is %d and Second Number is %d",firstNumber,secondNumber);

    return 0;
}
