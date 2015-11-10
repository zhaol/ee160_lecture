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
  //goto number;
  
  // switch (number){
  //   case 1:
  //   printf("You've entered 1\n");
  //   break;
  //   case 2:
    
  //   printf("You've entered 2\n");
  //   break;
    
  //   case 3:
  //   printf("You've entered 3\n");
  //   break;
  // }
  
  if(number == 1){
    goto case1;
  }
  else if(number == 2){
    goto base2;
  }
  else if (number ==3){
    goto vase3;
  }
  if(number =4){
  case1: printf("You've entered 1\n");
  return 0;
  base2: printf("You've entered 2\n");
  return 0;
  vase3: printf("You've entered 3\n");
  return 0;
    
  }
  
  
  /* print these statements out appropriately
  printf("You've entered 1\n");
  printf("You've entered 2\n");
  printf("You've entered 3\n");
  */
  
  return 0;
}  