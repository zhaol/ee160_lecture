#include <stdio.h>

int main () {
  int number = 1;
  
  if (number == 0) {
    printf("The number is 0 (using nested ifs)\n");  
  } else {
    if (number == 1) {
      printf("The number is 1 (using nested ifs)\n");
    } else {
      if (number == 2) {
        printf("The number is 2 (using nested ifs)\n");
      } else {
        printf("The number is not 0, 1, or 2 (using nested ifs)\n");
      }
    }
  }
  
  switch (number) {
    case 0:
      printf("The number is 0 (using switch)\n");  
      break;
    case 1:
      printf("The number is 1 (using switch)\n");
      break;
    case 2:
      printf("The number is 2 (using switch)\n");
      break;
    default:
      printf("The number is not 0, 1, or 2 (using switch)\n");
      break;
  }
  
  return 0;  
}