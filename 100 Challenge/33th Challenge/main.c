#include <stdio.h>
// Create a program to verify if a user put a positive number

int main(){
    int x = 0;
    do{
        int num ;
        x==0? printf("Enter a Number : \n"): printf("Please Enter a Positive Number : \n");
        scanf("%d",&num);
        if(num<0){
            x = 1;
        }else{
            printf("Thanks for putting a Positive Number \n");
            return 0;
        }
    }while(x==1);

    return 0;
}
