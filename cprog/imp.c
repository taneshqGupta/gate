#include <stdio.h>

int main() {
    
    short int x = -9;
    unsigned int ix = x;

    printf("%d\n", x); // -9
    printf("%u\n", x); // HUGE
    printf("%d\n", ix); // -9
    printf("%u\n", ix); // HUGE
    
    
    unsigned short int y = -9;
    int iy = y;
    printf("%d\n", y); // Huge
    printf("%u\n", y); // Huge
    printf("%d\n", iy); // Huge
    printf("%u\n", iy); // Huge
    


}