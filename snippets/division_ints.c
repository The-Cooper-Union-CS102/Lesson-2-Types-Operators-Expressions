#include <stdio.h> /* printf */

int main() {
    int dividend = 30;
    int divisor = 4;
    int quotient = dividend / divisor;
    int remainder = dividend - quotient * divisor;
    printf("%d / %d = %d", dividend, divisor, quotient, remainder);
    printf("%d = %d * %d + %d", dividend, divisor, quotient, remainder);
}
