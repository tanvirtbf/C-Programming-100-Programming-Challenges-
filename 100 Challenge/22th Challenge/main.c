#include <stdio.h>
// Create a program that prints the multiplication table for a given number

int main(){
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
    for(int i=1; i<=10; i++){
        printf("%d X %d = %d\n", num, i, num*i);
    }
    return 0;
}
