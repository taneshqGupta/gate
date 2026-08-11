#include <stdio.h>

int main() {

    // we assume it won't compile, but it WILL!
    // for loop will execute normally!!
    
    int i;
    for (i = 0; i <= 3; ++i);
    printf("%d", i);
    printf("%d", i);
    printf("%d", i);
    printf("%d", i);
    
    
    
    
    
    // all statements after for loop now are part of it!!!
    
    
    
    
    
    printf("%d", i);
    return 0;

}