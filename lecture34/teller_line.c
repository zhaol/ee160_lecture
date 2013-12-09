#include <stdio.h>

#define MAX_NUMBER_OF_CUSTOMERS 10
#define SERVE_FIRST_CUSTOMER_IN_LINE 0
#define QUIT -1
#define ARRAY_OFFSET -1
#define NOBODY_IN_LINE_POSITION -1

int main () {
  int line[MAX_NUMBER_OF_CUSTOMERS] = {0};
  int *first_position_in_line;
  int *last_position_in_line;
  int input;
  int counter = 1;
  
  first_position_in_line = &line[0];
  last_position_in_line = &line[0];
  
  do {
    if (counter == 1) {
      printf("Please enter the next customer id to add a new customer\n");
      printf("Please enter %d id to serve the next customer\n", SERVE_FIRST_CUSTOMER_IN_LINE);
      printf("Please enter %d to end the program\n", QUIT);
    }
    scanf("%d", &input);
    
    printf("you've entered: %d\n", input);
    
    if (input == 0) {
      if (first_position_in_line != last_position_in_line) {  
        *first_position_in_line = NOBODY_IN_LINE_POSITION;
        first_position_in_line++;
      }
    } else {
      *last_position_in_line = input;
      last_position_in_line++;
    }
    
    //print out customers in line  
    int line_position = 1;
    while (line_position <= MAX_NUMBER_OF_CUSTOMERS) {
      printf("line[%d]: %d\n", line_position, line[line_position+ARRAY_OFFSET]);
      line_position++;
    }
    
    counter++;
  } while (input != QUIT);
  
  return 0;  
}