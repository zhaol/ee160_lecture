#include <stdio.h>

int main () {
  FILE *file_pointer;  
  char text[] = "words";
  int integer = 31;
  float decimal = 3.41;
  
  file_pointer = fopen("data/mytest.txt", "w");
  
  if (file_pointer == NULL) {
    printf("Error opening file\n");
  } else {
    printf("Successfully opened file\n");
    fprintf(file_pointer, "%s %d %.2f\n", text, integer, decimal);
    fclose(file_pointer);
  }
  
  return 0;
}