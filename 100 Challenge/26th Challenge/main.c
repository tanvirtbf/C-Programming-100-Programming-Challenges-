#include <stdio.h>
// Create a program to find the Least Common Multiple(LCM) of two numbers

int main(){
    int x,y;
    printf("Enter two Numbers : \n");
    scanf("%d%d",&x,&y);
    int minimumInt = x<y ? x : y;
    for(int i = minimumInt; i<=x*y; i++){
        if(i%x==0 && i%y==0){
            printf("%d is LCM",i);
            return 0;
        }
    }

}
