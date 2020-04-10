#include <stdio.h> /* printf */

enum boolean { NO, YES };

int main() {
    printf("163 = %d\n", 163);
    printf("010 = %d\n", 010);
    printf("0x10 = %d\n", 0x10);
    printf("2e-2 = %f\n", 2e-2);

    printf("\\x7 = %c\n", '\x7');
    printf("\\007 = %c\n", '\007');
    printf("\\007 = %c\n", '\007');
    printf("Hello, \\0 world = %s\n", "Hello, \0 world");

    printf("blank = %s\n", "");
    printf("string = %s\n", "I am a string");
    printf("multiline = %s\n", "I am a multieline "
                          "string");
    printf("NO = %d\n", NO);
    printf("YES = %d\n", YES);
    return 0;
}
