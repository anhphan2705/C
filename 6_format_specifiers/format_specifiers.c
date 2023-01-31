#include <stdio.h>

int main(){
    /*

    Format specifier % = defines and formats a type of data to be displayed

    %c  = character
    %s  = string (arracy of characters)
    %f  = float
    %lf = double
    %d  = integer
    
    %.1 = decimal precision
    %1  = minimun field width
    %-  = left align

    */

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%f\n", item1);         // Normal condition
    printf("Item 1: $%.2f\n", item1);       // 2 float digits precision
    printf("Item 1: $%8f\n", item1);        // 8 digits field width to the right
    printf("Item 1: $%8.2f\n", item1);      // 8 digits field width to the right + 2 float digits precision
    printf("Item 1: $%-8.2f\n", item1);     // 8 digits field width to the left + 2 float digits precision
    
    return 0;
}