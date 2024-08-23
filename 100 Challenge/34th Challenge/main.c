#include <stdio.h>
// Create a program to verify if a user put a positive number

int main(){
    int num,sum = 0;
    do{
       printf("Enter a Number : ");
       scanf("%d",&num);
       sum += num;
    }
    while(num!=0);
    printf("%d",sum);
    return 0;
}
