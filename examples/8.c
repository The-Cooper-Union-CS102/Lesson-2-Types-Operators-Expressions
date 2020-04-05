#include <stdio.h>


int main() {
    int x = 5;
    int y = -2;
    // Compute the max
    int max = x > y ? x : y;
    printf("max = %d\n", max);
    int min = x < y ? x : y;
    printf("min = %d\n", min);
}
