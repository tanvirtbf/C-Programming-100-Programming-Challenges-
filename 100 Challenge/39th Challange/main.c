#include <stdio.h>
// write a function that adds that takes 4 int parameters and returns the sum.

int addInt(int a, int b, int c, int d); // function prototype

int main(){
    int first, second, third, fourth;
    printf("Enter 4 Number for add : \n");
    scanf("%d%d%d%d",&first,&second,&third,&fourth);
    int result = addInt(first,second,third,fourth);
    printf("%d",result);
    return 0;
}

// function definition
int addInt(int a, int b, int c, int d){
    return a+b+c+d;
}
