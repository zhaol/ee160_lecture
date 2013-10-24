#include <stdio.h>

main () {
  char word[4];
  word[0] = 'c';
  word[1] = '\0';
  word[2] = 'r';
  word[3] = '\0';
  
  printf("display the letters:\n");
  printf("word[0]: %c\n", word[0]);
  printf("word[1]: %c\n", word[1]);
  printf("word[2]: %c\n", word[2]);
  printf("word[3]: %c\n", word[3]);
  
  printf("\ndisplay the word using a string\n");
  printf("%s\n", word);
}