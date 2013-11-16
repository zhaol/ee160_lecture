/*   File:  do_while_vs_while.c
//   By:    The Awesome Class of EE160
//   Date:	Today :)
*/

#include <stdio.h>
#define NUMBER_OF_LOOPS 3

// This program compares using a do while loop with a while loop
int main () {
  int index; // both loops need to index to be declared prior
  
  /*
  // while loop
  index = 1;
  while (index <= NUMBER_OF_LOOPS) {
    printf("This is loop #%d (using while)\n", index);
    index++;
  }
  ////
  
  // do while loop
  index = 1;
  do {
    printf("This is loop #%d (using do while)\n", index);
    index++;
  } while (index <= NUMBER_OF_LOOPS);
  ////
  */
  
  /*
  char input;
  do {
      printf("Do you want to continue?\n");
      scanf(" %c", &input);
  } while(input == 'y');
  
  char input = 'y';
  while(input == 'y') {
    printf("Do you want to continue?\n");
    scanf(" %c", &input);
  }
  */
  
  return 0;  
}