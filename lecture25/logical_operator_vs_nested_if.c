#include <stdio.h>

int main() {
  int number = 50;
  
  if (number >= 0) {
    if (number <= 100) {
      printf("This number is between 0 and 100 (using nested ifs)\n", number);
    } else {
      printf("This number is greater than 100\n");
    }
  } else {
    printf("This number is less than 0\n");
  }
  
  // (0 < number < 100)
  if ((0 <= number) && (number <= 100)) {
    printf("This number is between 0 and 100 (using logical operators)\n", number);
  } else {
    printf("This number could be less than 0 or greater than 100\n");
  }

  return 0;  
}