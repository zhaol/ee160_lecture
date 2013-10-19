#include <stdio.h>

int main () {
  int counter = 0;
  float array[3];
  char chars[3];
  float start_float = 1.1;
  char start_char = 'a';
  
  while (counter < 3) {
    array[counter] = start_float + (1.1 * counter);
    chars[counter] = start_char + counter;
    counter++;
  }
  
  counter = 0;
  while (counter < 3) {
    printf("array[%d]: %f\n", counter, array[counter]);
    printf("chars[%d]: %c\n", counter, chars[counter]);
    counter++;
  }
  return 0;
}