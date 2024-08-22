#include <stdio.h>
// Create a program that computes the sum of digits of an integer

int main(){
    int x;
    printf("Enter a Number : ");
    scanf("%d",&x);
    int result = 0;
    while(x>0){
        result += x%10;
        x /= 10;
    }
    printf("%d",result);
    return 0;
}
