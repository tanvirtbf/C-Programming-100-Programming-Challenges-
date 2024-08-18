#include <stdio.h>
// Create a program that determines if a number is positive, negative or Zero

int main(){
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
    if(num==0){
        printf("%d is zero\n",num);
    }else if(num>0){
        printf("%d is positive\n",num);
    }else if(num<0){
        printf("%d is negative\n",num);
    }

    return 0;
}
