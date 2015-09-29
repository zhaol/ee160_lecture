#include <stdio.h>

int simple_function(int input_argument);

main() {
    int value_returned_from_function = 22;
    printf ("Hi from main\n");
    value_returned_from_function = simple_function(1);
    printf ("Bye from main\n");
    simple_function(value_returned_from_function);
} 


/* for comparison
#include <stdio.h>

main() {
    int value_returned_from_function;
    
    printf ("Hi from main\n");
    printf ("-Hi from simple_function\n");
    printf ("-You passed in an argument with the value of %i\n", 1); +10
    value_returned_from_function = 2;
    printf ("Bye from main\n");
    printf ("-Hi from simple_function\n");
    printf ("-You passed in an argument with the value of %i\n", value_returned_from_function); +10
}
*/

int simple_function(int input_argument) {
    printf ("-Hi from simple_function\n");
    printf ("-You passed in an argument with the value of %i\n", input_argument+10);
    //input_argument = input_argument + 1;
    //return input_argument;
    return ++input_argument;
    //return input_argument++;
    //return input_argument;
    //input_argument = input_argument + 1;
}
 