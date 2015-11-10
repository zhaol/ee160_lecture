#include <stdio.h>

int main () {
  int number;
  int number2;
  
  printf("---\n");
  
  for (number2=0; number2<=3; number2++) {
    for (number=0; number <= 5; number++) {
      if (number == 3) {
        return 99;
      }
      printf("number: %d\n", number);
    }
    printf("number2: %d\n", number2);
  }  
  out_of_both_loops: printf ("You are out of both loops\n");
  return 0;
}  