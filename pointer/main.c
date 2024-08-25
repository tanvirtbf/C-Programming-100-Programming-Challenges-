#include <stdio.h>
// definition of pointer : Pointers store only memory address , not value
// for address : use & operator
// for value : use * operator

void swap(int*,int*);

int main(){
    /*
    
    int i = 3;
    // & operator
    printf("Value of i = %d\n", i);
    printf("Address of i = %p\n", &i); // print i address
    
    // start (*) operator
    printf("Value of i = %d", *(&i)); // print i value
    
    
    // pointer declaration
    int num = 25;
    int *ptr = &num;
    // *ptr diye variable declare korar ortho hocche ptr amon ekta variable jeta onno kono variable er address store korbe. only address
    // kintu ptr o ekta variable . etao memory te kono space e thakbe jar alada kono memory address thakbe 
    // upore ptr er moddhe num er memory address store kora hoise
    
   
    int i = 3;
    int *j;
    j = &i;
    printf("Address of i %p\n", j);
    printf("Address of i %p\n", &i);
    printf("Value of i %d\n", *j);
    printf("Address of j %p\n", &j);
    
    
    
    // pointer to a pointer
    // definition: A pointer to a pointer is a type of pointer that stores the address of another pointer, allowing indirect access to the value of thek variable the first pointer points to.
    
    int var = 10;
    int *ptr1 = &var;
    int **ptr2 = &ptr1;
    printf("Value of var is : %d", **ptr2); // 10
    
    
    
    // Revision all thing..
    int i = 3;
    int *j;
    j = &i;
    int **k;
    k = &j;
    
    // Address of i
    printf("Address of i = %p\n",&i); // 000000000061FE14
    printf("Address of i = %p\n",j);  // 000000000061FE14
    printf("Address of i = %p\n",*k);  // 000000000061FE14
    printf("Address of i = %p\n",*(&j)); // 000000000061FE14
    printf("Address of i = %p\n\n\n",**(&k)); // 000000000061FE14

    // Address of j
    printf("Address of j = %p\n",&j);
    printf("Address of j = %p\n",k);
    printf("Address of j = %p\n\n\n",*(&k));
    
    // Address of k
    printf("Address of k = %p\n\n\n",&k);

    // Value of i
    printf("Value of i = %d\n",i); // 3
    printf("Value of i = %d\n",*j); // 3
    printf("Value of i = %d\n",**(&j)); // 3
    printf("Value of i = %d\n",***(&k)); // 3
    printf("Value of i = %d\n",**k); // 3

    

    // call by reference

    // swap two number : using pointer and function 
    
    int x = 4;
    int y = 87;
    printf("Value of x = %d , value of Y = %d\n", x, y);
    swap(&x,&y);
    printf("Value of x = %d , value of Y = %d\n", x, y);
    
    
    return 0;
    
    
    */
}

void swap(int* ptr1,int* ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
