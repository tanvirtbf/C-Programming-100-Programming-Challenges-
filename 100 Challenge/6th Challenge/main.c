#include <stdio.h>

int main(){
    char firstName[20],lastName[20];
    int age;
    printf("Enter Your First Name : \n");
    scanf("%s",&firstName);
    printf("Enter Your Last Name : \n");
    scanf("%s",&lastName);
    printf("Enter Your Age : \n");
    scanf("%d",&age);
    printf("Your First Name : %s \nYour Last Name : %s \nYour Age is : %d \n",firstName,lastName,age);
    return 0;
}
