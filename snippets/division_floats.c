#include <stdio.h> /* printf */

int main() {
    float dividend = 31.7;
    float divisor = 5.3;
    float quotient = dividend / divisor;
    printf("%.16f / %.16f = %.16f\n", dividend, divisor, quotient);
    printf("%.16f = %.16f * %.16f\n", dividend, divisor, quotient);
}
