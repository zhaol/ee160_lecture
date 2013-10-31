#include <stdio.h>

int main() {
  FILE *input_file_pointer;
  FILE *output_file_pointer;
  char text1[10];
  char text2[10];
  
  input_file_pointer = fopen("data/input.txt", "r");
  output_file_pointer = fopen("data/output.txt", "w");
  
  if (input_file_pointer == NULL) {
    printf("input failed\n");  
  } else {
    printf("input succeeded\n");
  }
  if (output_file_pointer == NULL) {
    printf("output failed\n");  
  } else {
    printf("output succeeded\n");
  }
  
  while(fscanf(input_file_pointer, "%s %s", text1, text2) != EOF) {
    fprintf(output_file_pointer, "%s %s\n", text1, text2);
  }
  
  fclose(input_file_pointer);
  fclose(output_file_pointer);
  
  return 0;
}