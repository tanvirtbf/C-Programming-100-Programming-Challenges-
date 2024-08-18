#include <stdio.h>

int main() {
    int a, b;
    printf("Please Enter your 2 Number for Sum : \n");
    scanf("%d %d", &a,&b);
    int result = a + b;
    printf("Your first Number is : %d \n",a);
    printf("Your second Number is : %d \n",b);
    printf("a + b is  : %d \n",result);
    return 0;
}
