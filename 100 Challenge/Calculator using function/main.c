#include <stdio.h>
// function and recursion

void swap(int,int);
int x,y;

int main(){
    scanf("%d%d",&x,&y);
    swap(x,y);
    printf("%d%d",x,y);

    return 0;
}
void swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}
