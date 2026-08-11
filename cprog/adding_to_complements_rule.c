#include <stdio.h>

void printBinary(unsigned int n) {
    for (int i = sizeof(n) * 8 - 1; i >= 0; i--)
        printf("%d", (n >> i) & 1);
    printf("\n");
}

int main() {
    
    // Adding with 1's Complement gives all bits as 1.

    int a = 9;
    int b = ~a;

    printBinary(a + b);



    // Adding with 2's Complement gives all bits as 0.

    int c = ~a + 1;

    printBinary(a + c);

    if (a == -c) printf("yes\n");
}