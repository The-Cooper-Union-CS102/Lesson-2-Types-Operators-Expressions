#include <stdio.h> // printf

#define MAXLINE 80
#define COMMENT //

enum boolean { NO, YES };

int main() {
    printf("010 = %d\n", 010);
    printf("0x10 = %d\n", 0x10);

    printf("\\x7 = %c\n", '\x7');
    printf("\\007 = %c\n", '\007');
    printf("\\007 = %c\n", '\007');
    printf("Hello, \\0 world = %s\n", "Hello, \0 world");

    char blank[1] = "";
    char string[14] = "I am a string";
    char multiline[MAXLINE+1] = "I am a multiline "
                                "string";
    printf("blank = %s\n", blank);
    printf("string = %s\n", string);
    printf("multiline = %s\n", multiline);

    printf("NO = %d\n", NO);
    printf("YES = %d\n", YES);
    return 0;
}
