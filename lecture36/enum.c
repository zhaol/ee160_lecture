#include <stdio.h>

// This program demonstrates using enum (enumeration)
int main () {
  enum colors { black, blue, green, red };
  
  enum colors foreground = blue;
  enum colors background = red;
  
  printf("%d\n", foreground);
  printf("%d\n", background);
  
  return 0;
}