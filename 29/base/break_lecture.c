#include <stdio.h>

main() {
  int number;
  
  for(number=0; number <=5; number++) {
    if(number==3) {
      break;
    }
    printf("number: %d\n", number);
  }
  
  printf("You are out of the loop\n");
}