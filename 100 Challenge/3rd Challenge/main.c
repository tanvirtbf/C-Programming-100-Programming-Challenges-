#include <stdio.h>
// Problem : Create a program to input name of the person and respond with "Welcome NAME to KG Coding"

int main(){
    char name[20];
    printf("Enter your name : ");
    scanf("%19s", name); // 19 holo highest character and string er sathe & dite hoy na
    printf("Welcome %s to KG Coding");
    return 0;
}


// second approach
/*int main(){
    char name[50];
    printf("Enter your name : ");
    scanf("%s",&name);
    printf("Welcome %s to KG Coding",name);
    return 0;
}*/
