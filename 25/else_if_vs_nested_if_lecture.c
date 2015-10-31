#include <stdio.h>

main() {
    int number = 5;

    if (number == 0) {
        printf("The number is 0 (using nested ifs)\n");  
    } else {
        if (number == 1) {
            printf("The number is 1 (using nested ifs)\n");
        } else {
            if (number == 2) {
                printf("The number is 2 (using nested ifs)\n");
            } else {
                printf("The number is not 0, 1, or 2 (using nested ifs)\n");
            }
        }
    }
    
    printf("\n\n");
    
    if (number == 0) {
        printf("The number is 0 (using else if)\n");  
    } else if (number == 1) {
        printf("The number is 1 (using else if)\n");
    } else if (number == 2) {
        printf("The number is 2 (using else if)\n");
    } else {
        printf("The number is not 0, 1, or 2 (using else if)\n");
    }
}