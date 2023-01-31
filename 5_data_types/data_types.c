#include <stdio.h>
#include <stdbool.h>

int main(){
    char a = "C";                       // single character     %c
    char b[] = "Anh";                   // array of characters  %s

    float c = 3.141592;                 // 4 bytes (32 bits on precision) 6-7 digits    %f
    double d = 3.141592653589793;       // 8 bytes (64 bits of precision) 15-16 digits  %lf

    bool e = true;                      // 1 byte (true or false)   %d

    // If Overflow occurs, it will automatically reset the value to 0
    char f = 100;                       // 1 bytes (-128 to +127)   %d or %c (%c uses ASCII code to convert to character)
    unsigned char g = 255;              // 1 byte (0 to +225)       %d or %c (%c uses ASCII code to convert to character)  

    short int h = 12345;                // 2 bytes (-32,768 to +32,767)     %d      (can also called as short)
    unsigned short int i = 12345;       // 2 bytes (0 t0 +65,535)           %d      (can also called as unsigned short)

    int j = 123456789;                  // 4 bytes (-2,147,483,648 to +2,147,483,647)   %d
    unsigned int k = 123456789;        // 4 bytes (0 to +4,294,967,295)                %u

    long long int l = 12345678901234;               // 8 bytes (-9 quintillion to 9 quintillion)    %lld
    unsigned long long int m = 123456789012345U;    // 8 bytes (0 to +18 quintillions)              %llu

    return 0;
}    