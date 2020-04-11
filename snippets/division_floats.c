#include <stdio.h> /* printf */

int main() {
    float dividend = 30.0;
    float divisor = 4.0;
    float quotient = dividend / divisor;
    printf("%.16f / %.16f = %.16f", dividend, divisor, quotient);
    printf("%.16f = %.16f * %.16f", dividend, divisor, quotient);
}
