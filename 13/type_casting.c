#include <stdio.h>

main() {
    int i_am_an_integer;
    float i_am_a_decimal;

    i_am_an_integer = 11;
    i_am_a_decimal= 3.99;

    printf("This is type cast to a float: %f \n", (float) i_am_an_integer);
    printf("The variable is still an integer: %i \n", i_am_an_integer);
    printf("This is type cast to an integer: %i (notice that the decimal points were truncated)\n", (int) i_am_a_decimal);
    printf("The variable is still a float: %f \n", i_am_a_decimal);
}

// i_am_an_integer_as_float
// i_am_a_decimal_as_int