/*   File:  switch_incomplete.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>

// This program shows how to use the goto statement to implement a switch
int main () {
  int number;
  
  printf("Enter 1, 2, or 3\n");
  scanf("%d", &number);
  
  if (number == 1) {
    goto doowop;
    
  } else if (number == 2) {
    goto honk;
    
  } else {
    goto tangerine;
  }
  
  doowop: printf("You've entered 1\n");
  //break;
  return;
  honk: printf("You've entered 2\n");
  //break;
  return;
  tangerine: printf("You've entered 3\n");
  //break;
  return;

  
  return 0;
}  