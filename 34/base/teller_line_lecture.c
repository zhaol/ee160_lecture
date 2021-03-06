#include <stdio.h>

#define SERVE_FIRST_CUSTOMER_IN_LINE 0
#define QUIT -1
#define MAX_NUMBER_OF_CUSTOMERS 10
#define FIRST_ARRAY_ELEMENT 0
#define FIRST_POSITION_IN_LINE_WHEN_NOBODY_IS_IN_LINE 0
#define LAST_POSITION_IN_LINE_WHEN_NOBODY_IS_IN_LINE 0
#define NOBODY_IN_LINE_POSITION -1

int main() {
  int input;
  int line[MAX_NUMBER_OF_CUSTOMERS];
  int *first_position_in_line;
  int *last_position_in_line;
  
  first_position_in_line = &line[FIRST_POSITION_IN_LINE_WHEN_NOBODY_IS_IN_LINE];
  last_position_in_line = &line[LAST_POSITION_IN_LINE_WHEN_NOBODY_IS_IN_LINE];
 
  do {
    printf("Please enter the next customer id to add a new customer\n");
    printf("Please enter %d id to serve the next customer\n", SERVE_FIRST_CUSTOMER_IN_LINE);
    printf("Please enter %d to end the program\n", QUIT);
    scanf("%d", &input);
    
    if (input == SERVE_FIRST_CUSTOMER_IN_LINE) {
      // serve the first customer in line
      if (first_position_in_line != last_position_in_line) {
        *first_position_in_line = NOBODY_IN_LINE_POSITION;
        first_position_in_line++;
      }
    } else {
      // add customer to the end of the line
      *last_position_in_line = input;
      last_position_in_line++;
    }
    
    /*
    // print entire line
    printf("\n");
    int display_counter = FIRST_ARRAY_ELEMENT;
    while (display_counter < MAX_NUMBER_OF_CUSTOMERS) {
      printf("%d, %d\n", display_counter, line[display_counter]);
      display_counter++;
    }
    printf("\n");
    */
    
    // print just line
    printf("\n");
    int *display_pointer;
    display_pointer = first_position_in_line;
    while (display_pointer < last_position_in_line) {
      printf("%d\n", *display_pointer);
      display_pointer++;
    }
    printf("\n");
    
  } while (input != QUIT);
  
  return 0;
}