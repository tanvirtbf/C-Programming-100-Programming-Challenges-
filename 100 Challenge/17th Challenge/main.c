#include <stdio.h>
// Create a program that categorize a person into different age groups

int main(){
    int age;
    printf("Enter Your Age : ");
    scanf("%d",&age);
    if(age<13){
        printf("You are Child");
    }else if(age<20){
        printf("You are Teen");
    }else if(age<60){
        printf("You are Adult");
    }else if(age>60){
        printf("You are Senior");
    }
    return 0;
}
