#include <stdio.h>

int function(int passed_in_variable);

main () {
  // local variables to main
  int variable = 20;
  
  printf ("[Start of Main] variable: %i \n", variable);
  function (variable); // function(20);
  printf ("[End of Main] variable: %i \n", variable);
}

int function(int passed_in_variable) { //int passed_in_variable=20;
  int variable = 30;
  printf ("[Start of function1] variable: %i \n", variable);
  printf ("[Start of function1] passed_in_variable: %i \n", passed_in_variable);
  variable = variable + 5;
  passed_in_variable = passed_in_variable + 5;
  printf ("[End of function1] variable: %i \n", variable);
  printf ("[End of function1] passed_in_variable: %i \n", passed_in_variable);
}
