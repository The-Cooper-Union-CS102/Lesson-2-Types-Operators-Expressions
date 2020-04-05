#include <stdio.h> // p

#define I_AM_A_MACRO_FOR_010 010
#define p printf // This is generally not recommended

enum boolean { NO, YES };

int main() {
    p("010 = %d\n", 010);
    p("010 = %d\n", I_AM_A_MACRO_FOR_010);
    p("0x10 = %d\n", 0x10);

    p("\\x7 = %c\n", '\x7');
    p("\\007 = %c\n", '\007');
    p("\\007 = %c\n", '\007');
    p("Hello, \\0 world = %s\n", "Hello, \0 world");

    p("blank = %s\n", "");
    p("string = %s\n", "I am a string");
    p("multiline = %s\n", "I am a multieline "
                               "string");
    p("NO = %d\n", NO);
    p("YES = %d\n", YES);
    return 0;
}
