#include <stdio.h>

int main() {

    // all the following operations
    // are undefined by C-Standard
    // and are thus: Compiler-Dependent

    // But still, just memorise the gcc answers
    // no need to memorise as,
    // these seem fairly intuitive

    int a = 1, b = 2, c = 3, i = 1;

    int x, y, z;

    x = a++ + a++;
    printf("%d\n", a);
    printf("%d\n", x);
    
    y = b++ - b++;
    printf("%d\n", b);
    printf("%d\n", y);
    
    z = c++ * --c;
    printf("%d\n", c);
    printf("%d\n", z);
    
    i = i++;
    printf("%d\n", i);

}