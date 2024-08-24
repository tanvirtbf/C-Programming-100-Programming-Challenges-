#include <stdio.h>
// Create a program to verify if a number is palindrom

int main(){
    int num, x=0;
    printf("Enter a Number : ");
    scanf("%d",&num);
    int temp = num;
    int lastDigit = num%10;
    int firstDigit;
    while(temp >0){
        x = temp % 10;
        temp = temp / 10;
        if(temp==0){
            firstDigit = x;
        }
    }
    if(firstDigit==lastDigit){
        printf("%d is a Palindrom Number \n", num);
    }else{
        printf("%d is not a palindrom number \n", num);
    }
    return 0;
}
