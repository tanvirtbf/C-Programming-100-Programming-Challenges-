#include <stdio.h>

int factorial(int); // function prototype

int main(){
    printf("%d\n",factorial(4));
}

int factorial(int num){
    int result = 1;
    for(int i = 2; i<=num; i++){
        result = result * i;
    }
    return result;
}
