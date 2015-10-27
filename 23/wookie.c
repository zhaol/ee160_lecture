#include <stdio.h>

#define MAX_STRING_SIZE 10

int main () {
  FILE *read_file_pointer;  
  FILE *write_file_pointer;  
  
  char text1[MAX_STRING_SIZE];
  
  read_file_pointer = fopen("input.txt", "r");
  write_file_pointer = fopen("output.txt", "w");
  
  if (read_file_pointer == NULL) {
    printf("Error opening file\n");
  } else {
    printf("Successfully opened file\n");
    while (fscanf(read_file_pointer, "%s", text1) != EOF) {
      fprintf(write_file_pointer, "%s\n", text1);
    }
    fclose(read_file_pointer);
    fclose(write_file_pointer);
  }
  
  return 0;
}