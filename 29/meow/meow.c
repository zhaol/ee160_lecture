/*   File:  switch_incomplete.c
//   By:    The Awesome Students of EE160
//   Date:      Today :)
*/

#include <stdio.h>

// This program shows how to use the goto statement to implement a switch
int main () {
  int number;
  
  printf("Enter 1, 2, or 3\n");
  scanf("%d", &number);
  
  // print these statements out appropriately
  if(number==1){
    goto one;
  }
    if(number==2){
    goto two;
  }
    if(number==3){
    goto three;
  }
  one:
  printf("You've entered 1\n");
  goto end;
  two:
  printf("You've entered 2\n");
  goto end;
  three:
  printf("You've entered 3\n");//
  end:
  return 0;
}  