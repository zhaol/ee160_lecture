#include <stdio.h>

#define MAX 10

int main () {
  char word[10];  
  
  scanf("%s", word);
  
  int counter = 0;
  while (word[counter] != '\0') {
    printf("%c\n", word[counter]);
    counter++;
  }
  
  return 0;
}