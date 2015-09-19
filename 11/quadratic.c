#include <stdio.h>

main () {
  float a;
  float b;
  float c;
  float z;
  printf("please enter a b and c\n");
  scanf(" %f %f %f", &a, &b, &c);
  
  z = ((-b) + (b * b) - (4 * a * c)) / (2 * a);
  //printf("a: %f, b: %f, c: %f\n", a, b, c);
  printf("answer is: %f\n", z);
}