#include <stdio.h>

int main() {
    int a = 0;
    float b = 123.123;
    double c = 123.123123123;
    char d[100] = "Hello World!";

    printf("%lu \n",sizeof(int));
    printf("%lu \n",sizeof(float));
    printf("%lu \n",sizeof(double));
    printf("%lu \n",sizeof(char));
    printf("%lu \n",sizeof(a));
    printf("%lu \n",sizeof(b));
    printf("%lu \n",sizeof(c));
    printf("%lu \n",sizeof(d));

    return 0;
}
