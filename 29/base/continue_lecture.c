#include <stdio.h>

int main () {
  int number;
  
  for (number=0; number <= 5; number++) {
    if (number == 3) {
      continue;
    }
    printf("number: %d\n", number);
  }
  printf("You are out of the loop\n");
  
}  

// clearer alternative
//#include <stdio.h>
//
//int main () {
//  int number;
//  
//  for (number=0; number <= 5; number++) {
//    if (number == 3) {
//      // do nothing
//    } else {
//      printf("number: %d\n", number);
//    }
//  }
//  printf("You are out of the loop\n");
//  
//}  
