#include <stdio.h>

int main() {

    int n = 5;

    int x;

    x = n++;

    printf("%d\n", x);
    printf("%d\n\n", n);
    
    int y;
    int m = 5;
    
    y = ++m;
    
    printf("%d\n", y);
    printf("%d\n", m);

    
    // also::   
    // illegal operations:
    // ++2 (cannot increment constant)
    // ++(a + b * 2)  [cannot increment expression]
}