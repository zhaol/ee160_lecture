#include <stdio.h>

main() {
  int number; //inner loop
  int number2; //outer loop
  printf("----\n");
  
  for(number2=0; number2<=3; number2++) {
    for(number=0; number <=5; number++) {
      if(number==3) {
        break;
      }
      printf("(inner----) number: %d\n", number);
    }
    printf("(outer) number2: %d\n", number2);
  }
  
  printf("You are out of both the loop\n");
}