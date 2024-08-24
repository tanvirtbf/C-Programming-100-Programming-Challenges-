#include <stdio.h>
// C Program to Find Factorial of a Number Using Recursion

int fact(int); // function prototype

int main(){
    int num;
    scanf("%d",&num);
    int result = fact(num);
    printf("%d",result);
    return 0;
}

// function definition
int fact(int n){
    if(n!=1){
        return n*fact(n-1);
    }else {
        return n;
    }
}
