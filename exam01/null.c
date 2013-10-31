#include <stdio.h>

int main () {
  char word1[] = "text";
  char word2[4];
  
  /*
  word1[1] = '\0';
  
  printf("word1: %s\n", word1);
  printf("word2: %s\n", word2);
  
  printf("word1[0]: %c\n", word1[0]);
  printf("word1[1]: %c\n", word1[1]);
  printf("word1[2]: %c\n", word1[2]);
  printf("word1[3]: %c\n", word1[3]);
  */
  
  scanf("%s", word2);
  printf("word2: %s\n", word2);
  printf("word2[0]: %c\n", word2[0]);
  printf("word2[1]: %c\n", word2[1]);
  printf("word2[2]: %c\n", word2[2]);
  printf("word2[3]: %c\n", word2[3]);
  return 0;
}