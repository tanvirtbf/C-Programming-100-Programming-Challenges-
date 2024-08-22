#include <stdio.h>
// Create a program to print the Fibonacci series up to a certain number

int main(){
    int x, result=0, prev;
    printf("Enter a Number : ");
    scanf("%d",&x);
    printf("%d\n",result);
    prev = result; // 0
    result = 1;
    while(result<x){
        printf("%d\n",result); // 0 1 1 2 3 5 8
        int now = result; // 5
        result = result + prev; // 8
        prev = now; // 5
    }
    return 0;
}
