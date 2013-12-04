#include <stdio.h>
#define SIZE 6

// This program prints an array backwards
int main () {
  int array[SIZE] = {0, 1, 2, 3, 4, 5};
  int *array_pointer = &array[SIZE - 1]; // pointer is set to last element of the array
  
  int counter = 0;
  while (counter < SIZE) {
    printf("counter: %d; array: %d\n", counter, *(array_pointer-counter));
    counter++;
  }
  
  return 0;
}