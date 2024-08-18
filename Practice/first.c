#include <stdio.h>
// Decision Control Structure
int main() {

    int age;
    printf("Please Enter age : ");
    scanf("%d",&age);
    switch(age){
    case 18 :
        printf("Matured\n");
        break;
    case 25 :
        printf("Biyer boyosh hoise\n");
        break;
    case 32 :
        printf("fully matured\n");
        break;
    case 40 :
        printf("intermediate age\n");
        break;
    case 60 :
        printf("Bura hoise\n");
        break;
    default :
        printf("Nothing");
        break;
    }
    return 0;

}
