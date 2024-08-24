#include <stdio.h>
// Create a function that result is Sum of Natural Numbers Using Recursion

int add(int); // function prototype

int main(){
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
    int result = add(num);
    printf("%d",result);
    return 0;
}

// function definition
int add(int num){
    if(num!=0){
        return num + add(num-1);
    }else{
        return num;
    }
}


