#include <stdio.h> // printf
#include <math.h> // sqrt


int main() {
    int a = 5;
    char b = 5 + '0';
    printf("(char) b = %c\n", b);
    printf("(int) b = %d\n", b);

    double s = sqrt((double) a);
    printf("s = %g\n", s);

    printf("%d\n", htoi("0x1A"));
}
