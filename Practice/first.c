#include <stdio.h>
// Decision Control Structure
int main() {
    char gender;
    printf("Please Enter Your Gender ? (M/F) : ");
    scanf(" %c",&gender);
    gender == 'M' ? printf("Male") : gender == 'm' ? printf("male") : gender == 'f' ? printf("female") : gender == 'F' ? printf("Female") :printf("Wrong Input");
    return 0;
}
