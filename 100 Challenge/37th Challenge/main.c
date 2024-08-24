#include <stdio.h>
// Create a program using continue to print only even numbers using continue for odd numbers


int main(){
    int num, sum = 0;
    do{
        printf("Enter a Number : ");
        scanf("%d",&num);
        if(num%2!=0) continue;
        sum = sum + num;
    }while(num!=0);
    printf("%d", sum);
    return 0;
}
