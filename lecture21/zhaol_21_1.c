#include <stdio.h>

#define MAX 11
#define ARRAY_OFFSET -1

int main () {
  char word[MAX];
  printf("Please enter in your word:\n");
  scanf ("%s", word);
  printf("%s\n", word);
  
  int index_to_compare = 1;
  while (index_to_compare <= MAX) {
    int index_compared_against = index_to_compare + 1;  
    printf("letter being compared: %c\n", word[index_to_compare + ARRAY_OFFSET]);
    while (index_compared_against <= MAX ) {
      if (word[index_compared_against+ARRAY_OFFSET] >= 97) {
        if (word[index_compared_against+ARRAY_OFFSET] <= 122) {
          if (word[index_to_compare+ARRAY_OFFSET] >= word[index_compared_against+ARRAY_OFFSET]) {
            // SWAP
            char temp = word[index_to_compare+ARRAY_OFFSET];
            word[index_to_compare+ARRAY_OFFSET] = word[index_compared_against+ARRAY_OFFSET];
            word[index_compared_against+ARRAY_OFFSET] = temp;
            //
          }
        }
      }
      printf("DEBUG: %s\n", word);
      index_compared_against++;
    }
    
    index_to_compare++;
  }
  
  printf("result: %s\n", word);
  return 0;
}