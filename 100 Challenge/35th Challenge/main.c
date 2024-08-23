#include <stdio.h>
// Create a program using for loop multiplication table for a number


int main(){
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
    for(int i = 1; i<=10; i++){
        printf("%d X %d = %d\n", num, i , (num*i));
    }
    return 0;
}
