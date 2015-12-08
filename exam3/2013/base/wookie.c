#include <stdio.h>
#define WIDTH 13
#define HEIGHT 7


int main() {
  char input[HEIGHT][WIDTH];
  int counter=0;
  int row = 0;
  int col = 0;
  
  FILE *read_file_pointer;
  FILE *write_file_pointer;
  
  
  read_file_pointer = fopen("input.data", "r");
  write_file_pointer = fopen("output.data", "w");

  if (read_file_pointer == NULL)
      {
      printf("Error opening file\n");
      }
    
  else
    {
      printf("Succesfully opened file\n");
      
      while( fscanf(read_file_pointer, "%c %c", O, X )!= EOF)
        {
          
        }
    }
    
}