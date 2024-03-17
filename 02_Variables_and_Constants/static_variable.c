//
// Created by bruce on 24-3-17.
//

#include <stdio.h>

void function() {
    int x = 10;
    static int y = 10;
    x += 10;
    y += 10;
    printf("\tLocal: %d\n\tStatic: %d\n", x, y);
}

int main() {
    printf("First Call\n");
    function();
    printf("Second Call\n");
    function();
    printf("Second Call\n");
    function();
    return 0;
}