#include <stdio.h>

main() {
  char variable;
  printf("enter something\n");
  scanf("%c", &variable);
  printf("%c\n", variable);
  
  printf("enter something\n");
  scanf("\n%c", &variable);
  printf("%c\n", variable);
}