#include <stdio.h>
// Define a function square that takes an int and returns its square

int square(int); // function prototype

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("%d",square(num));
    return 0;
}

// function definition
int square(int a){
    return a*a;
}
