#include <stdio.h>

main () {
  int number = 5;
    
  /*
  if (number >= 0) {
    printf("debug: program made it to point A\n");
  }
  
  // if/else statements can be nested
  if (number >= 0) {
    printf("outer true 1\n");
    if (number <= 0) {
      printf("debug: program made it to point B\n");
    } else {
      printf("do you see me????\n");
    }
    printf("outer true 2\n");
  } else {
    printf("hi\n");
  }
  */
  
  if (0) {
    printf("0 is true\n");
  } else {
    printf("0 is false\n");
  }
  
  if (1) {
    printf("1 is true\n");
  } else {
    printf("1 is false\n");
  }
  
  if (-1) {
    printf("-1 is true\n");
  } else {
    printf("-1 is false\n");
  }
  
  if (10) {
    printf("10 is true\n");
  } else {
    printf("10 is shit\n");
  }
  
  printf("outside of if block\n");
}