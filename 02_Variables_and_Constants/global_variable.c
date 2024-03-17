//
// Created by bruce on 24-3-17.
//

#include <stdio.h>

int x = 20;

int main() {
    int x = 10;
    {
        extern int x;
        printf("Value of global x is %d\n", x);
    }
    printf("Value of local x is %d\n", x);
    return 0;
}