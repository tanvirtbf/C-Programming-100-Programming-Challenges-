#include <stdio.h>
// Create a program using continue to sum all positive numbers entered by the user; skip any negative numbers and out for enter 0.

int main(){
    int num, sum = 0;
    do{
        printf("Enter a Number : ");
        scanf("%d",&num);
        if(num<0) continue;
        sum += num;
    }
    while(num!=0);
    printf("%d",sum);
    return 0;
}
