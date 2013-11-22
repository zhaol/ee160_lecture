/*   File:  return.c
//   By:    The Awesome Class of EE160
//   Date:	Today :)
*/

#include <stdio.h>

// This program shows how to use the return statement
int main () {
  int number;
  int number2;
  
  for (number2=0; number2<=3; number2++) {
    for (number=0; number <= 5; number++) {
      if (number == 3) {
        return 0; //ends the program
      }
      printf("number: %d\n", number);
    }
    printf("number2: %d\n", number2);
  }  
  printf ("You are out of both loops\n");
  return 0;
}  

/*
int main () {
  int number;
  
  for (number=0; number <= 5; number++) {
    if (number == 3) {
      break; //ends the for loop
    }
    printf("number: %d\n", number);
  }
  printf("You are out of the loop\n");
  
  return 0;
}
*/