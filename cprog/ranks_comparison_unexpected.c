#include <stdio.h>

void printBinary(unsigned int n) {
    for (int i = sizeof(n) * 8 - 1; i >= 0; i--)
        printf("%d", (n >> i) & 1);
    printf("\n");
}

int main() {

    unsigned int a = 1000;
    int b = -1;

    if (a > b) printf("a is big\n");
    else printf("a is small\n");

    printBinary(a);
    printBinary(b);

}