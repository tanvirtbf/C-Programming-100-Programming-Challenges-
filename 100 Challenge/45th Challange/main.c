#include <stdio.h>
// C Program to Find G.C.D Using Recursion

int findGcd(int,int); // function prototype

int main(){
    int x,y;
    printf("Enter two float number :\n");
    scanf("%d%d",&x,&y);
    int result = findGcd(x,y);
    printf("%d", result);
    return 0;
}

// function definition
int findGcd(int a, int b){
    int min = a<b? a: b;
    int x = min;
    if(x!=0){
        return 1l;
    }
    
    
    /*for(int i = min; i>=1; i--){
        if(a%i==0 && b%i==0){
            return i;
        }
    }*/
}
