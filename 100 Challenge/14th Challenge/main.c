#include <stdio.h>
// Create a program that determines the greatest of the three numbers

int main(){
    int a,b,c;
    printf("Please Enter Three Numbers : \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && b>c){
        printf("%d is Big Number\n",a);
    }else if(a<b && a>c){
        printf("%d is Big Number\n",b);
    }else if(a>b && a<c){
        printf("%d is Big Number\n",c);
    }

    return 0;
}
