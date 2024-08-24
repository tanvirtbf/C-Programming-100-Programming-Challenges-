#include <stdio.h>
// create a function max that takes two float arguments and returns the larger value

float maxVal(float,float); // function prototype

int main(){
    float x,y;
    printf("Enter two float number :\n");
    hello:
    scanf("%f%f",&x,&y);
    float result = maxVal(x,y); // function call
    if(result==10.000000){
        printf("Please do not input equal value\nEnter again: \n");
        goto hello;
    }
    printf("%f is max value", result);
    return 0;
}

// function definition
float maxVal(float a, float b){
    if(a>b){
        return a;
    }else if(a<b){
        return b;
    }else{
        return 10;
    }
}
