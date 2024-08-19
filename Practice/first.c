#include <stdio.h>
// function and recursion
// need of function prototype :jodi function define korar ageii function ke call korar dorkar hoy tahole main function er upor file er top e function er ekta picture declare kora hoy jeno compiler bujhe erokom ekta function ei file e exist kortese . tai function define korar agei call kora jabe

void countTo100(); // function prototype
int sum(int,int); // function prototype

int main() {
    countTo100(); // function call or invoked
    int sumResult = sum(10,20); // function call or invoke
    printf("%d",sumResult);
    return 0;
}

// function definition
void countTo100(){
    for(int i = 1; i<=100; i++){
        printf(" %d",i);
    }
}
int sum(int x, int y){
    return x+y;
}
