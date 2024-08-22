#include <stdio.h>
// Create a program to check if a number is an Armstrong number
int main(){
    int num, add=0, result = 0, temp;
    printf("Enter a Number : ");
    scanf("%d",&num);
    temp = num;
    while(temp>0){
       add = temp%10;
       result += add*add*add;
       temp = temp / 10;
    }
    if(result==num){
        printf("%d is an Armstrong Number \n", num);
    }else{
        printf("%d is not an Armstrong Number \n", num);
    }
    printf("%d",result);
    return 0;
}
