#include <stdio.h>

int main() {

    int a = 3;

    int var1 = - -a;

    int var2 = --a;

    int var3 = - - - a;

    // int var4 = ---a;         --- won't compile

    printf("%d -- %d -- %d\n", var1, var2, var3);

}