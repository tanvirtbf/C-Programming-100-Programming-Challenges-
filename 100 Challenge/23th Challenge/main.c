#include <stdio.h>
// Create a program to sum all odd numbers from 1 to a specified number N.

int main(){
    int num , sum=0;
    printf("Enter a Number : ");
    scanf("%d",&num);
    for(int i=1; i<=num; i++){
        if(i%2!=0){
            sum += i;
        }
    }
    printf("Result is : %d", sum);
    return 0;
}
