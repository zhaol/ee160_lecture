#include <stdio.h>
#define NUMBER_OF_LOOPS 3

int main () {
    int index;
    
    // while loop
    index = 1;
    while (index <= NUMBER_OF_LOOPS) {
        printf("This is loop #%d (using while)\n", index);
        index++;
    }
    ///
    
    // do while loop
    index = 1;
    do {
        printf("This is loop #%d (using do while)\n", index);
        index++;
    } while (index <= NUMBER_OF_LOOPS);
    ////
    
    return 0;  
}