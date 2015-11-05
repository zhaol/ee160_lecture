#include <stdio.h>

main() {
    char input;
    
    //input = 'a'; // while loop requires this
    //while (input != 'n') {
    //    printf("Do you want to continue? (using while)\n");
    //    scanf(" %c", &input);
    //}
    
    // input = 'a' is not needed
    do {
        printf("Do you want to continue? (using do while)\n");
        scanf(" %c", &input);
    } while (input != 'n');
}