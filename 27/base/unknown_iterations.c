/*   File:  unknown_iterations.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>

// This program shows a while loop with an unknown number of iterations
int main () {
    char input = 'a';
    
    while (input != 'n') {
        printf("Do you want to continue?\n");
        scanf(" %c", &input);
    }
    
    return 0;  
}