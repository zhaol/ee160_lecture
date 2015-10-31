#include <stdio.h>

main() {
    int number = 500;
    
    if (number >= 0) {
        printf("This number is greater than or equal to 0\n");
        if (number <= 100) {
            printf("This number is between 0 and 100 (using nested ifs)\n");
        } else {
            printf("This number is greater than 100\n");
        }
    } else {
        printf("This number is less than 0\n");
    }
    
    printf("\n\n");
    
    if ((0 <= number) && (number <= 100)) {
        printf("This number is between 0 and 100 (using logical operators)\n");
    } else {
        printf("This number could be less than 0 or greater than 100\n");
    }
}