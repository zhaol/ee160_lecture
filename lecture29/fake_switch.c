/*   File:  switch_incomplete.c
//   By:    The Awesome Class of EE160
//   Date:	Today :)
*/

#include <stdio.h>

// This program shows how to use the goto statement to implement a switch
int main () {
  int number;
  
  printf("Enter 1, 2, or 3\n");
  scanf("%d", &number);
  
  if (number == 1) {
    goto one;
  } else if (number == 2) {
    goto two;
  } else if (number == 3) {
    goto three;
  }

one:
  printf("You've entered 1\n");
  return 0;
two:
  printf("You've entered 2\n");
  return 0;
three:
  printf("You've entered 3\n");  
  return 0;
  
  /*
  switch (number) {
    case 1:
      printf("You've entered 1\n");
      break;
    case 2:
      printf("You've entered 2\n");
      break;
    case 3:
      printf("You've entered 3\n");
      break;
    default:
      // do nothing
      break;
  }
  */
}  