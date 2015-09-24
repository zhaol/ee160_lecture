#include <stdio.h>

main () {
    
    float x = 1.8;
    printf("float: %f\n", x);
    int y = x;
    printf("int: %d\n", y);
    float z = y;
    printf("float: %f\n", z);
}