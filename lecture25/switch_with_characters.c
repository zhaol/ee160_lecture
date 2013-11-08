#include <stdio.h>

int main () {
  char letter;
  
  printf("please enter in an lowercase alphabet:\n");
  scanf("%c", &letter);
  
  switch (letter) {
    case 'a': 
      printf("alpha\n");
      break;
    case 'b': 
      printf("bravo\n");
      break;
    case 'c':
      printf("charlie\n");
      break;
    default : 
      printf("invalid character\n");
      break; // this is optional, but is good practice
  }  
  return 0;
}