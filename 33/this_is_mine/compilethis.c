
/*   File:  backward_array.c
 //   By:    Me.
 //   Date:      Today :)
 */

#include <stdio.h>
#define SIZE 6

// This program prints an array backwards
int main () {
    int array[SIZE] = {0, 1, 2, 3, 4, 5};
    int *array_pointer = &array[SIZE - 1];
    int i;

    
    while (i < SIZE) {
        
        printf("Array element %d: %d\n", (SIZE - i), (*array_pointer - i));
        i++;
    }
    
    return 0;
}