#include <stdio.h>
// Create a program to print the Fibonacci series up to a certain number

int main(){
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
    printf("%d",0);
    if(num>0){
        printf("%d",1);
    }
    int prev = 0;
    int next = 1;
    while(prev+next <= num){
        int temp = prev+next;
        printf("%d",temp);
        prev = next;
        next = temp;
    }
    return 0;
}

/*

int main(){
    int x, result=0, prev;
    printf("Enter a Number : ");
    scanf("%d",&x);
    printf("%d\n",result);
    prev = result; // 0
    result = 1;
    while(result<x){
        printf("%d\n",result); // 0 1 1 2 3 5 8
        int now = result; // 5
        result = result + prev; // 8
        prev = now; // 5
    }
    return 0;
}

*/
