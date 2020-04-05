#include <stdio.h>

int main() {
    printf("9415 is odd: %d\n", 9416 & 1);
    printf("9416 is odd: %d\n", 9415 & 1);
    printf("3 * 2^6 = %d\n", 3 << 6);
    printf("6004 / 2^6 = %d\n", 6004 >> 6);

    int x = 538;
    int y = 105;
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("x = %d\n", x);
    printf("y = %d\n", y);
}
