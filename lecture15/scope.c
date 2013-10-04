/*   File:  scope.c
//   By:    The Awesome Class of EE160
//   Date:  Today :)
*/

#include <stdio.h>

int function (int passed_in_variable);

/*  This program prints out variables at different points in the program to see which variables are in scope  */
main() {
  // local variables to main
  int variable = 20;
  
  printf ("[Start of Main] variable: %i \n", variable);
  function (variable);
  printf ("[End of Main] variable: %i \n", variable);
}

int function (int variable) {
  // local variables to function1
  
  printf ("[Start of function1] variable: %i \n", variable);
  variable = variable + 5;
  printf ("[End of function1] variable: %i \n", variable);
}