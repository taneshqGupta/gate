#include <stdio.h>


void printBinary(unsigned int n) {
    for (int i = sizeof(n) * 8 - 1; i >= 0; i--)
        printf("%d", (n >> i) & 1);
    printf("\n");
}

int main() {
    
    short x = -9;
    printBinary(x);
    printf("%d -- %u\n\n", x, x);

    signed ix = x;

    printBinary(ix);
    printf("%d -- %u\n\n", ix, ix);
    
    
    unsigned short y = -9;
    printBinary(ix);
    printf("%d -- %u\n\n", y, y);
    
    signed iy = y;
    
    printBinary(iy);
    printf("%d -- %u\n\n", iy, iy);
}