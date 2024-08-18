#include <stdio.h>
// Decision Control Structure
int main() {

    int age;
    input_number:
    printf("Please Enter age : ");
    scanf("%d",&age);
    if(age != 25){
        goto input_number;
    }
    return 0;
}
