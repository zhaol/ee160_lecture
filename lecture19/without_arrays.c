/*   File:  without_array.c
//   By:    The Awesome Class of EE160
//   Date:  Today :)
*/

#include <stdio.h>

/*  This program does not use an array to store data; instead, uses regular variables */
main() {
    int index;
    int first_value;
    int second_value;
    int third_value;
    int fourth_value;

    printf("Add a value:\n");
    scanf ("%d", &first_value);
    printf("Add a value:\n");
    scanf ("%d", &second_value);
    printf("Add a value:\n");
    scanf ("%d", &third_value);
    printf("Add a value:\n");
    scanf ("%d", &fourth_value);
    
    printf("The list of values are: %d \n", first_value);
    printf("The list of values are: %d \n", second_value);
    printf("The list of values are: %d \n", third_value);
    printf("The list of values are: %d \n", fourth_value);
}