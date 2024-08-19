#include <stdio.h>
// Create a program to calculate the absolute value of a given integer using ternary operator
int main(){
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
    int absNum = -(num);
    num<0 ? printf("%d absolute number is : %d", num, absNum) : printf("%d is already a absolute number",num);
    return 0;
}
