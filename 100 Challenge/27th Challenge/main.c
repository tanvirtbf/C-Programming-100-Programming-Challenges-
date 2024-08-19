#include <stdio.h>
// Create a program to check whether a given number is prime using while.

int main(){
    int x;
    printf("Enter a Number for check if Prime or not : ");
    scanf("%d",&x);
    for(int i = 2; i<x; i++){
        if(x%i==0){
            printf("%d is not a prime number\n",x);
            return 0;
        }
    }
    printf("%d is a Prime Number \n",x);
    return 0;
}
