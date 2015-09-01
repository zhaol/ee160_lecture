#include "stdio.h"

main() {
    int first_number;
    int second_number;
    float result;
    
    first_number = 3;
    second_number = 5;
    
    int numerator;
    int denominator;
    
    numerator = (first_number - second_number);
    denominator = (first_number + second_number);
    
    printf("numerator: %d\n", numerator);
    printf("denominator: %d\n", denominator);
    
    result = numerator/(float)denominator;
    
    printf ("The result is: %f\n", result);
    //The result is: -0.250000

}