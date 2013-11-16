#include <stdio.h>
#define NUMBER_OF_LOOPS 3

// This program compares using a for loop with a while loop
int main () {
  int index; // both loops need to index to be declared prior
  int index2;
  
  for (index=1, index2=10; index<=index2; index++, index2--) {
    printf("index: %d, index2: %d\n", index, index2);
  }
  
  return 0;  
}