#include <stdio.h>

int main() {
    int n = 1;

    switch(n) {

        printf("Hey!"); // won't get executed



        case 0:
            printf("0 ");
        
        // fall through until break    
        
        case 1: 
            printf("1 ");
        
        case 2:
            printf("2 ");

        case 3:
            printf("3 ");
            break;
        
        default:
            printf("def ");
        
    }
}