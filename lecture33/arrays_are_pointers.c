#include <stdio.h>

// This program demostrates that arrays are pointers
int main () {
  int array[] = {0, 1, 2, 3, 4, 5};
  
  printf("array: %p\n", array+1);
  printf("&array[0]: %p\n", &array[1]);
  
  return 0;
}