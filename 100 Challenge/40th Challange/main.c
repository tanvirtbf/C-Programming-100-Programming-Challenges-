#include <stdio.h>
// write a function named greet that prints "Hello, World!" when called

void greet(); // function prototype

int main(){
    greet(); // function call
    return 0;
}

// function definition
void greet(){
    printf("Hello, World!");
}
