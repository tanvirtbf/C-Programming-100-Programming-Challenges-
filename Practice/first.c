#include <stdio.h>

int main() {

    char firstName[100],lastName[100];
    int age;
    printf("Enter Your First Name : ");
    scanf("%s",&firstName);
    printf("Enter Your Last Name : ");
    scanf("%s", &lastName);
    printf("Enter Your Age : ");
    scanf("%d",&age);

    printf("\n\nYour Name is %s %s . And your age is %d", firstName,lastName,age);

    return 0;
}
