#include <stdio.h>

float f(float x);

main () {
  int i;
  float dec;
  char c;
  
  printf("please enter int, decimal, char\n");
  scanf ("%i %f %c", &i, &dec, &c);
  
  printf("%f", f(dec));
  
}

float f(float x) {
  return x;
}

float f(float x, int i, char c) {
  
  return x;  
}