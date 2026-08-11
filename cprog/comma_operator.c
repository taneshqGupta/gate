#include <stdio.h>

int main() {

    // comma operator

    int x, y;

    int value = (x = 10, y = 5, x + y);

    printf("%d\n", value); // 15

}