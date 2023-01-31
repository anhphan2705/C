#include <stdio.h>

int main(){
    /*
    variable =  Allocated space in memory to store a valye.
                We refer to a variable's anem to access the stored value.
                That variable new behaves as if it was the value it contains.
                BUT we need to declare what type of data we are storing
    */
    int x;           // declaration
    x = 123;         // initialization
    int y = 321;     // declaration + initialization

    int age = 19;            // integer
    float gpa = 4.0;         // floating point number
    char grade = 'C';         // single character
    char name[] = "Anh P";   // array of characters
    
    // add a place holder in order to print the variable
    printf("Hello %s\n", name);                 // %s = string
    printf("You are %d years old", age);        // %d = decimal
    printf("Your average grade is %c", grade);  // %c = char
    printf("Your GPA is %f", gpa);              // %f = float

    return 0;
}