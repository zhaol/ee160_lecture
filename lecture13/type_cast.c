#include <stdio.h>

main() {
    int i_am_an_integer;
    float i_am_a_float;

    i_am_an_integer = 11;
    i_am_a_float = 3.99;

printf("This is type cast to a float: %f \n",
 (float) (i_am_an_integer * i_am_a_float));
}