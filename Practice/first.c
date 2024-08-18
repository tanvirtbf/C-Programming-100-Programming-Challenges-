#include <stdio.h>

int main() {
    int myAge = 25;
    int age;
    int x = 0;
    again_age:
    x++;
    x==1 ? printf("Please Enter Your Age : ") : x==2 ? printf("Your Answer is Wrong! Second time Please Enter Your Age : ") : x == 3 ? printf("Your Answer is wrong! Third time Please Enter Your Age : ") : printf("Your Answer is Wrong! Fourth and Last time Please Enter Your Age : ");
    scanf("%d",&age);
    if(age != myAge && x<4){
        goto again_age;
    }
    return 0;
}
