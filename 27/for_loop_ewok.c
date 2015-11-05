/*   File:  for_vs_while.c
//   By:    The Awesome Students of EE160
//   Date:      Today :)
*/

#include <stdio.h>
#define NUMBER_OF_LOOPS 3
#define NUMBER_OF_EWOKS 5

// This program compares using a for loop with a while loop
int main () {
    int index; // both loops need to index to be declared prior
    int index2;
    // while loop
    index = 1;
        while (index <= NUMBER_OF_LOOPS) {
        printf("This is loop #%d (using while)\n", index);
        index++;
    }
    ////
    
    // for loop
    for (index=10, index2=1; index<=NUMBER_OF_LOOPS, index2<=NUMBER_OF_EWOKS; index++, index2++) {
        printf("This is loop #%d (using for)\n", index);
        printf("this loop2 #%d \n", index2);
    }
    ////
    
    return 0;  
}
