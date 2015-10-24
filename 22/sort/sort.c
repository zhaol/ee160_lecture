#include <stdio.h>

#define MAX 5
#define ARRAY_OFFSET -1

main () {
    int array[MAX] = {15,13,11,14,12};
    
    int index = 1;
    while (index <= MAX) { // compare_accounts_pointer
            int index2 = index+1;
            while (index2 <= MAX) {
                //printf("%d %d\n",
                //    array[index+ARRAY_OFFSET],
                //    array[index2+ARRAY_OFFSET]);
                if (array[index+ARRAY_OFFSET] > array[index2+ARRAY_OFFSET]) {
                    int temp = array[index+ARRAY_OFFSET]; // save one of the elements into temporary box
                    array[index+ARRAY_OFFSET] = array[index2+ARRAY_OFFSET]; // write the other element into the position that was saved off
                    array[index2+ARRAY_OFFSET] = temp; // write the saved off value into the last un-updated element
                }
                index2++;
            }
        index++;
    }
    
    
    
    
    index = 1;
    while (index <= MAX) {
        printf("array[%d]: %d\n", index, array[index+ARRAY_OFFSET]);
        index++;
    }
    
}