#include <stdio.h> /* printf */

int main() {
    float dividend = 51.7;
    float divisor = 5.3;
    float quotient = dividend / divisor;
    float product = quotient * divisor;
    printf("%.6f / %.6f = %.6f\n", dividend, divisor, quotient);
    printf("%.6f = %.6f * %.6f\n", product, quotient, divisor);
}
