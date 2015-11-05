#include <stdio.h>
#define NUMBER_OF_LOOPS 3

main() {
    int index; // both loops need to index to be declared prior
    
    // while loop
    index = 1;
    while (index <= NUMBER_OF_LOOPS) {
        printf("This is loop #%d (using while)\n", index);
        index++;
    }
    ////
    
    // for loop
    // index = 1
    for (index=1; index<=NUMBER_OF_LOOPS; index++) {
        printf("This is loop #%d (using for)\n", index);
        // index++;
    }
    ////
}