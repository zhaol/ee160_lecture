#include <stdio.h>

void array_function(int received_array[]); // needed square brackets
// void array_function(int received_array[var]); // wrong syntax
  
int main () {
  int my_array[5];
  my_array[3] = 1;
  int var = 3;
  
  array_function(&my_array[0]); // didn't need square brackets
  // array_function(my_array); // works the same
  printf("%d\n", my_array[3]);
  
  return 0;
}

void array_function(int received_array[]) {  // needed square brackets
  received_array[3] = 11;
}