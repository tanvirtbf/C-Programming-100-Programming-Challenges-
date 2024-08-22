#include <stdio.h>
// Create a program that calculates the factorial of a given number.

int main(){
    int x , fact=1;
    printf("Enter a Number : ");
    scanf("%d",&x);
    for(int i=1;i<=x; i++){
        fact = fact * i;
    }
    printf("%d",fact);
    return 0;
}
