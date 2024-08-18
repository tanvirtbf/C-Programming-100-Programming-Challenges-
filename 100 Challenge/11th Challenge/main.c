#include <stdio.h>
// Create a program that shows two float numbers multiplication result

int main(){
    float float1,float2;
    printf("Enter two float number : \n");
    scanf("%f%f",&float1,&float2);
    printf("%f * %f = %f", float1, float2, (float1*float2));

    return 0;
}
