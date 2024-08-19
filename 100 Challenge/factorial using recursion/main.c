#include <stdio.h>
// Factorial project recursion

// function prototype
int factorial(int);

int main(){
    int x;
    scanf("%d",&x);
    int res = factorial(x);
    printf("%d",res);
    return 0;
}

int factorial(int x){
    int result=x;
    for(int i = x-1; i>=1; i--){
        result = result * i;
    }
    return result;
}
