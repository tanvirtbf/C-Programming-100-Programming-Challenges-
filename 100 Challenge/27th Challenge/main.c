#include <stdio.h>
// Create a program to find the Greatest Common Divisor(GCD) of two integers.
// GCD holo input theke pauya 2 ta number keii divide korte pare and seta sobcheye boro number taii answer hobe


int main(){
    int x,y;
    printf("Enter two Number ");
    scanf("%d%d",&x,&y);
    int min = x<y?x:y;
    for(int i = min; i<x; i++){
        if(x%i==0){
            printf("%d is not a prime number\n",x);
            return 0;
        }
    }
    printf("%d is a Prime Number \n",x);
    return 0;
}
