#include <stdio.h>
// Create a program using continue to sum all positive numbers entered by the user; skip any negative numbers and out for enter 0.

int main(){
    int num , sum=0;
    again:
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num>0){
        sum += num;
        goto again;
    }else if(num<0){
        goto again;
    }else if(num==0){
        printf("%d",sum);
        return 0;
    }
    return 0;
}
