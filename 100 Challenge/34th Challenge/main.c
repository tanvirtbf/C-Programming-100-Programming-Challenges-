#include <stdio.h>
// Create a program that calculates the sum of all numbers entered by user untill the user enters 0; The total sum should then be displayed.

int main(){
    int num,sum = 0;
    do{
       printf("Enter a Number : ");
       scanf("%d",&num);
       sum += num;
    }
    while(num!=0);
    printf("%d",sum);
    return 0;
}
