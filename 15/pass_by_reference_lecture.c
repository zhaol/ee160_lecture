#include <stdio.h>

main() {
    int main_variable = 2;
    value(main_variable); //value(2)
    printf("main: %d\n", main_variable); 
    reference(&main_variable); // reference(0x5)
    printf("main: %d\n", main_variable); 
    
}

reference(int *function_variable) {
    //this function changes main_variable
    *function_variable = *function_variable + 1; //main_variable is now 3
    printf("ref function: %d\n", *function_variable);
}

value(int function_variable){
    //this function does not change main_variable
    function_variable = function_variable + 1; // 3
    printf("val function: %d\n", function_variable);
}