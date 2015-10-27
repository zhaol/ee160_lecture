#include <stdio.h>

main() {
    FILE *file_pointer;
    
    file_pointer = fopen("test.txt", "r");
    
    if (file_pointer == NULL) {
        printf("Error opening file\n");
    } else {
        printf("Successfully opened file\n");
        fclose(file_pointer);
    }
    
}