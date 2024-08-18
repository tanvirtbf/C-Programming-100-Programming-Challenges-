#include <stdio.h>
// Create a program to print the area of a square by inputting its side length
int main(){
    int side;
    printf("Please Enter the side of square in cms : ");
    scanf("%d",&side);
    printf("The area of your square is %d cm*cm", side*side);
    return 0;
}
