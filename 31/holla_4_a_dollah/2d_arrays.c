/*   File:  2d_arrays.c
//   By:    The Awesome Students of EE160
//   Date:  Today :)
*/

#include <stdio.h>
#define MAX_ROWS 3
#define MAX_COLS 2

/*  This program stores declares, initializes, and uses a 2D array */
int main() {
  int table_of_values[MAX_ROWS][MAX_COLS] = {
    {1, 2},
    {3, 4},
    {5, 6}
  };
  
  printf("[0][0]: %d, [0][1]: %d\n", table_of_values[0][0], table_of_values[0][1]);
  printf("[1][0]: %d, [1][1]: %d\n", table_of_values[1][0], table_of_values[1][1]);
  printf("[2][0]: %d, [2][1]: %d\n", table_of_values[2][0], table_of_values[2][1]);
  
  return 0;
}