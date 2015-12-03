/*   File:  backward_array.c
//   By:    The Awesome Students of EE160
//   Date:      Today :)
*/

#include <stdio.h>
#define SIZE 6

// This program prints an array backwards
int main () {
  int array[SIZE] = {0, 1, 2, 3, 4, 5};
  int *array_pointer = &array[SIZE - 1];
  int i = 0;
  
  while (i < SIZE) {
    printf("%d\n",*(array_pointer-i));
    i++;
  }
  
  return 0;
}

