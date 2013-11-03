#include <stdio.h>
main () {
    int integer, *pointer, value;
    
    pointer = &integer; // pointer was not set to a valid address
    
    printf("Enter a number\n");
    scanf(" %d", &integer);
    printf("Enter a number\n");
    scanf(" %d", pointer);
    printf("Here it is: %d %d\n", integer, *pointer);
    
    value = integer + *pointer;
    printf("%d\n", value);
   
    
}