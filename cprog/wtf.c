#include <stdio.h>

void printBinary(unsigned int n) {
    for (int i = sizeof(n) * 8 - 1; i >= 0; i--)
        printf("%d", (n >> i) & 1);
    printf("\n");
}

int main() {
    signed char a = 30, b = 40;
    signed char d = a * b;

    printBinary(a);
    printBinary(b);
    printBinary(d);
    printf("%d\n", d); // -80!!!!
    printf("%d\n\n\n", a * b); // 1200!

    unsigned char f = -65;

    printBinary(f);
    printf("%d\n", f); // 191!!
    printf("%u\n", f); // 191!!
}