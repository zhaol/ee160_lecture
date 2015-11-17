#include <stdio.h>
#define MAX_ROWS 3
#define MAX_COLS 2

main() {
  //int list_of_values[MAX_ROWS];
  int table_of_values[MAX_ROWS][MAX_COLS] = {
    {1, 2},
    {3, 4},
    {5, 6}
  };
  
  printf("[0][0]: %d, [0][1]: %d\n", table_of_values[0][0], table_of_values[0][1]);
  printf("[1][0]: %d, [1][1]: %d\n", table_of_values[1][0], table_of_values[1][1]);
  printf("[2][0]: %d, [2][1]: %d\n", table_of_values[2][0], table_of_values[2][1]);
  
  /*
  [0][0]
  [0][1]
  [1][0]
  [1][1]
  [2][0]
  [2][1]
  
  [0][0][0]
  [0][0][1]
  [0][1][0]
  [0][1][1]
  [1][0][0]
  [1][0][1]
  [1][1][0]
  [1][1][1]
  */
  
  // why doesn't this code compile? it should compile now
  
  //int index;
  //for(index=0;index<=5;index++) {
  //  printf("[%d]: %d\n", index, *(table_of_values+index));
  //}
  
}