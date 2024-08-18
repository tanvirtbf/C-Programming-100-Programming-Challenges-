#include <stdio.h>
// Create a program that take a number and convert it float number

int main(){
    int num ;
    printf("Enter a Number : ");
    scanf("%d",&num);
    float floating = num;
    printf("%d is convert into float number : %f", num, floating);
    // second technic
    printf("%d is convert into float number : %f", num, (float)floating);

    return 0;
}
