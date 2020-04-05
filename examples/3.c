// Operators
#include <stdio.h> // printf

int main() {
    int a = 3;
    int b = 4;
    int c = a*a + b*b;
    printf("a*a + b*b = %d\n", c);

    int x = 3;
    int y = 4;
    int w = x/y;
    float z = x/y;
    printf("(int) 3/4 = %d\n", w);
    printf("(float) 3/4 = %f\n", z);

    // dividend = divisor*quotient + remainder
    int dividend = 123;
    int divisor = 5;
    int quotient = dividend / divisor;
    int remainder = dividend % divisor;
    printf("%d = %d*%d + %d\n", dividend, divisor, quotient, remainder);
}
