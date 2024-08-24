#include <stdio.h>
// definition of pointer : Pointers store only memory address , not value
// for address : use & operator
// for value : use * operator


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
    
    */
    
    // pointer to a pointer
    // definition: A pointer to a pointer is a type of pointer that stores the address of another pointer, allowing indirect access to the value of thek variable the first pointer points to.
    
    int var = 10;
    int *ptr1 = &var;
    int **ptr2 = &ptr1;
    printf("Value of var is : %d", **ptr2);
    
    
    return 0;
}
