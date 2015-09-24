#include <stdio.h>

int main() {
  int x;
  int y;
  
  printf("x = ?\n");
  scanf(" %d", &x);
  printf("y = ?\n");
  scanf(" %d", &y);

  printf("(-x+(x^2-4y))/2y= %d\n", ((-x)+(x*x)-(4*y))/(2*y));
  return 0;
}

// type casting, conversion specifiers, or variable declarations