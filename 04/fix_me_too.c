#include "stdio.h"

main() {
    int first_number;
    int second_number;
    float result;
    
    first_number = 3;
    second_number = 5;
    
    result = (first_number-second_number)/(float)(first_number+second_number);
    
    printf ("The result is: %f \n", result);

}