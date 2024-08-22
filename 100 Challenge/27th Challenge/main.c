#include <stdio.h>
// Create a program to find the Greatest Common Divisor(GCD) of two integers.
// GCD holo input theke pauya 2 ta number keii divide korte pare and seta sobcheye boro number taii answer hobe


int main(){
    int x,y;
    printf("Enter two number : \n");
    scanf("%d%d",&x,&y);
    int min = x<y? x : y;
    for(int i = min; i>=1; i--){
        if(x%i==0 && y%i==0){
            printf("%d is GCD Number",i);
            break;
        }
    }
    return 0;
}
