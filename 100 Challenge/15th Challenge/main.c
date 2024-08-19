#include <stdio.h>
// Create a program that determines if a given year is a leap year

int main(){
    int year;
    printf("Please Enter a Year for Check : ");
    scanf("%d",&year);
    if(year%400 == 0){
        printf("This is Leap Year");
    }else if(year%4==0 && year%100!=0){
        printf("This is Leap Year");
    }else{
        printf("This is Not a Leap Year");
    }

    return 0;
}
