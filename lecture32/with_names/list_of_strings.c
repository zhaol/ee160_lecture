//https://docs.google.com/document/d/1iVqtwGHfO7nm9nqjHimTG42FtvscySHwlJV9B_XqODI/pub
//https://docs.google.com/document/d/12MDbv1spqROrStIZyzIpBTJGBq_llbcVXmyOTaMdj-g/pub

#include <stdio.h>
#define MAX_NAMES 5
#define MAX_NAME_LENGTH 10

int main () {
  char list_of_strings[MAX_NAMES][MAX_NAME_LENGTH];
  
  //list_of_strings[0] = "first";
  scanf("%s", list_of_strings[0]);
  printf("string[0]: %s\n", list_of_strings[0]);
  
  return 0;
}