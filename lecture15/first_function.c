#include <stdio.h>

float f(float x);
float intended_f(float x, int i, char c);

main () {
  int i;
  float dec;
  char c;
  
  printf("please enter int, decimal, char\n");
  scanf ("%i %f %c", &i, &dec, &c);
  
  printf("%f\n", f(dec));
  printf("%f\n", intended_f(dec, i, c));
  
}

float f(float x) {
  return x;
}

float intended_f(float x, int i, char c) {
  printf ("decimal: %f\n", x);
  printf ("integer: %d\n", i);
  printf ("character: %c\n", c);
  return x;  
}