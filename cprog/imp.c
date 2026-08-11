#include <stdio.h>

void printBinary(unsigned int n) {
    for (int i = sizeof(n) * 8 - 1; i >= 0; i--)
        printf("%d", (n >> i) & 1);
    printf("\n");
}

int main() {
    
    // istemal karein fir vishwas karein

    // Promotion in C always happens according to the source variable's type.

    short int x = -9;
    unsigned int ix = x;

    printBinary(x);
    printBinary(ix);
    printf("%d\n", x); // -9
    printf("%u\n", x); // HUGE
    printf("%d\n", ix); // -9
    printf("%u\n\n\n", ix); // HUGE
    
    
    unsigned short int y = -9;
    int iy = y;
    printBinary(y);
    printBinary(iy);
    printf("%d\n", y); // Huge
    printf("%u\n", y); // Huge
    printf("%d\n", iy); // Huge
    printf("%u\n\n\n", iy); // Huge
    
    
    int z = -1;
    unsigned int uz = z;
    printBinary(z);
    printBinary(uz);
    printf("%d\n", z); // -1
    printf("%u\n", z); // Huge
    printf("%d\n", uz); // -1
    printf("%u\n\n\n", uz); // Huge


    // same holds for char too
    // Note: smaller data types (char - 1 byte, or short - 2 bytes) are 
    // always implicitly converted to int.

    // What to see below?
    // A: Promotion to INT (4 bytes) is IMPLICIT (default)
    // B: Promotion always happens according to the source variable's type.

    signed char m = 130; 
    printBinary(m); // 11111111111111111111111110000010
    printf("%d\n", m); // -126
    printf("%u\n\n\n", m); // 4294967170
    
    
    unsigned char um = 130;
    printBinary(um); // 00000000000000000000000010000010
    printf("%d\n", um); // 130
    printf("%u\n\n\n", um); // 130

}