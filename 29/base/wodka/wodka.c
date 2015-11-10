/*   File:  switch_incomplete.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>
#include "functions.c"
// This program shows how to use the goto statement to implement a switch
int main () {
  int number;
  
  printf("Enter 1, 2, or 3\n");
  scanf("%d", &number);
  if (number==1)
  {
    goto print1;
  }
  if (number==2)
  {
    goto print2;
  }
  if (number==3)
  {
    goto print3;
  }
  
   print1: printf("You've entered 1\n");
   return 0;
   print2: printf("You've entered 2\n");
   return 0;
   print3: printf("You've entered 3\n");
   return 0;
  /* print these statements out appropriately
  printf("You've entered 1\n");
  printf("You've entered 2\n");
  printf("You've entered 3\n");
  */
  
  return 0;
}  