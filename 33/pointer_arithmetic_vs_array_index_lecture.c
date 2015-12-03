#include <stdio.h>

int main() {
  int array[] = {10,1,2,3,4,20};
  int counter = 0;
  int *array_pointer = &array[0];
  
  printf("array[0]: %d\n", array[counter]);
  printf("array_pointer: %d\n", *array_pointer);
  
  printf("array[5]: %d\n", array[counter+5]);
  printf("*array_pointer: %d\n", *(array_pointer+5));
}