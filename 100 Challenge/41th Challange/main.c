#include <stdio.h>
#include <time.h>

// write a function that print current date when its called

void currTime(); // function prototype

int main(){
    currTime(); // function call
    return 0;
}

// function definition
void currTime(){

    // Get the current time
    time_t current_time; // declare a variable and its data type is time_t
    time(&current_time); // time() is a predefined function thats use for find date time

    // convert the time to a string using the desired format
    char date_string[20];
    strftime(date_string, 20, "%Y-%m-%d", localtime(&current_time));

    // print the date string
    printf("The Current date is : %s\n", date_string);
}
