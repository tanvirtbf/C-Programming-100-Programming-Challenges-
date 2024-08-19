#include <stdio.h>
// function and recursion
// need of function prototype :jodi function define korar ageii function ke call korar dorkar hoy tahole main function er upor file er top e function er ekta picture declare kora hoy jeno compiler bujhe erokom ekta function ei file e exist kortese . tai function define korar agei call kora jabe

// function prototype
int addition(int,int);
int subtraction(int,int);
int multiplication(int,int);
int division(int,int);
int modulus(int,int);

int add;
int sub;
int mul;
int div;
int mod;

int main() {
    int first, second;
    int z = 1;
    char action;
    again_goto:
    z==1 ? printf("Please Enter a Action : ") : printf("You Entered Wrong Action, Please do Correct : ");
    scanf("%c",&action);
    if(action=='+' || action=='-' || action=='*' || action=='/' || action=='%'){
        printf("Please Enter Two Values : ");
        scanf("%d%d",&first,&second);
    }else{
        z++;
        goto again_goto;
    }

    if(action=='+'){
        add = addition(first,second);
        printf("%d %c %d = %d", first, action, second, add);
    }else if(action=='-'){
        sub = subtraction(first,second);
        printf("%d %c %d = %d", first, action, second, sub);
    }else if(action=='*'){
        mul = multiplication(first,second);
        printf("%d %c %d = %d", first, action, second, mul);
    }else if(action=='/'){
        div = division(first,second);
        printf("%d %c %d = %d", first, action, second, div);
    }else if(action=='*'){
        mod = modulus(first,second);
        printf("%d %c %d = %d", first, action, second, mod);
    }

    return 0;
}

// function declaration

int addition(int firstValue, int secondValue){
    return firstValue + secondValue;
}
int subtraction(int firstValue, int secondValue){
    return firstValue - secondValue;
}
int multiplication(int firstValue, int secondValue){
    return firstValue * secondValue;
}
int division(int firstValue, int secondValue){
    return firstValue / secondValue;
}
int modulus(int firstValue, int secondValue){
    return firstValue % secondValue;
}
