#include <stdio.h>
// Create a program that declares one variable of each of the fundamental data types (int,float,double,char) and prints their size usign sizeof() operator
int main(){
    int integer;
    float decimal;
    double doub;
    char character;
    printf("This size of int is %lu bytes", sizeof(integer));
    printf("This size of float is %lu bytes", sizeof(decimal));
    printf("This size of double is %lu bytes", sizeof(doub));
    printf("This size of char is %lu bytes", sizeof(character));
    return 0;
}
