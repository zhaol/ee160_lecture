#include <stdio.h>

float our_function(int *integer, float decimal, char *character);

int main() {
    int main_integer = 1;
    float main_decimal = 1.1;
    char main_character = 'c';
    
    our_function(&main_integer, main_decimal, &main_character);
    
    return 0;
}

float our_function(int *integer, float decimal, char *character) {
    *integer = *integer + 1;
    *character = 'a';
    printf("integer is: %d\n", *integer);
    printf("decimal is: %f\n", decimal);
    printf("character is: %c\n", *character);
    
    return decimal;
}

/*
    takes in an integer address, a decimal, and an address to a character as arguments
    modify the value at the integer address to be one more than its current value
    modify the value at the character address to be 'a'
    print out their values
    return the decimal number as the output of the function
*/