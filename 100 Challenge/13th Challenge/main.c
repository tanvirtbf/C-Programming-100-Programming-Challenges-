#include <stdio.h>
// Create a program that determines if a number is odd or even

int main(){
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
    if(num%2==0){
        printf("%d is even number\n",num);
    }else if(num%2 != 0){
        printf("%d is odd number\n",num);
    }

    return 0;
}
