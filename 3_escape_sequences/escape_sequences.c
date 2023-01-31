#include <stdio.h>

int main(){
    /*
    escape sequence =   character combination consisting of a backlash \
                        followed by a letter or combination of digits.
                        They specify actions within a line or string of text
                        \a = Alert (beep, bell)
                        \b = backspace
                        \e = escape character
                        \f = formfeed page break
                        \n = newline
                        \r = carriage return
                        \t = horizontal tab
                        \v = vertical tab
                        \\ = backslash
                        \' = apostrophe
                        \" = double quotation mark
                        \? = question mark
                        \nnn = the byte whose numerical value is given by nnn interpreted as an octal number
                        \xhh = the byte whose numerical vue is given by hh... interpreted as a hexadecimal number
                        \uhhhh = unicode code point below 10000 hexadecimal
                        \Uhhhhhhhh = unicode code point where h is a hexadecimal digit
    */

    printf("I like pizza\n");
    printf("\'I also like pizza\'");

    return 0;
}