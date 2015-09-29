#include <stdio.h>
void function();
void function2();

// global variable
int variable = 20;

main() {
  // local variables to main
  int variable = 200;
  printf ("[In main] variable: %i \n", variable);
  function();
}

void function() {
  printf ("[In function] variable: %i \n", variable);
}

void function2(){
    variable = 10;
}