#include <stdio.h>

#define ARRAY_OFFSET -1

int main() {
  int array[] = { 1, 2, 3};
  int counter = 1;
  
  while (counter<=3) {
    printf("array[%d]: %d\n", counter, array[counter + ARRAY_OFFSET]);
    counter++;
  }
  
  return 0;
}