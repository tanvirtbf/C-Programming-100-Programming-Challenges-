#include <stdio.h>
// Create a program that calculates grades based on marks

int main(){
    int marks ;
    printf("Enter a Marks : ");
    scanf("%d",&marks);
    if(marks>90){
        printf("A");
    }else if(marks>75){
        printf("B");
    }else if(marks>60){
        printf("C");
    }else if(marks>=30){
        printf("D");
    }else if(marks<30){
        printf("F");
    }

    return 0;
}
