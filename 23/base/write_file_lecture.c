#include <stdio.h>

#define MAX_STRING_SIZE 10

main() {
    FILE *file_pointer;
    char text[] = "word";
    int integer = 233;
    float decimal = 3.4;
    
    file_pointer = fopen("output.txt", "a");
    
    if (file_pointer == NULL) {
        printf("Error opening file\n");
    } else {
        printf("Successfully opened file\n");
        fprintf(file_pointer, "%s %d %.2f\n", text, integer, decimal);
        fclose(file_pointer);
    }
    
}a