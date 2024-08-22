#include <stdio.h>
// Create a program to reverse the digits of a number

int main(){
    int num, x = 0, result = 0;
    printf("Enter a number : ");
    scanf("%d",&num);
    while(num>0){
        x = num %10;
        result = (result * 10) + x;
        num /= 10;
    }
    printf("%d",result);
}
