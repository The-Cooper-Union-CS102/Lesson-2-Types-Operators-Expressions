#include <stdio.h>
#include <stdlib.h>

void itoa(int value, char *buf, int base){
    int i = 30;
    buf = "";
    for (; value && i ; --i, value /= base) {
        buf = "0123456789abcdef"[value % base] + buf;
    }
}

int main() {
    char buffer[33];
    itoa(123, buffer, 10);
    printf("%s\n", buffer);
}
