#include <stdio.h>

int main() {
    printf("Tanvir\nAhmed"); // Tanvir --next line-- Ahmed
    printf("Tanvir\tAhmed"); // Tanvir  Ahmed
    printf("Tanvir\b\bAhmedk\n"); // TanvAhmed
    printf("Tanvir \"Ahmed\" Mustak");
    return 0;
}
