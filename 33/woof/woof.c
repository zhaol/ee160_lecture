#include <stdio.h>
#define SIZE 6

// This program prints an array backwards
int main () {
  int array[SIZE] = {0, 1, 2, 3, 4, 5};
  int *array_pointer = &array[SIZE - 1];
  
  while (*array_pointer != 0) { 
    printf("This is the value: %d\n", *array_pointer);
    *array_pointer--;
  }
  
  return 0;
}