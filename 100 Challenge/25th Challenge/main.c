#include <stdio.h>
// Create a program that computes the sum of digits of an integer

int main(){
    int x;
    printf("Enter a Number : ");
    scanf("%d",&x);
    int a = x;
    int result = 0;
    while(a>0){
        result += a%10;
        a = a/10;
    }
    printf("%d",result);
    return 0;
}
