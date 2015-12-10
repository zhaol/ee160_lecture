#include <stdio.h>

int main() {
  // all these require ampersands
  int integer;
  float decimal;
  char character;
  
  scanf(" %d", &integer);
  printf("%d\n", integer);
  scanf(" %f", &decimal);
  printf("%f\n", decimal);
  scanf(" %c", &character);
  printf("%c\n", character);
  
  int integers[2];
  float decimals[2];
  char characters[2];
  
  scanf(" %d", &integers[0]);
  printf("%d\n", integers[0]);
  scanf(" %f", &decimals[0]);
  printf("%f\n", decimals[0]);
  //
  
  
  
  // strings can have ampersand or not
  // but be carefule to use %c or %s
  scanf(" %s", characters);
  printf("%s\n", characters);
  //
  
  
  
}