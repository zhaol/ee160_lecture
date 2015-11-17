/*   File:  2d_arrays.c
//   By:    The Awesome Students of EE160
//   Date:  Today :)
*/

#include <stdio.h>
#define MAX_PAGES 2
#define MAX_ROWS 3
#define MAX_COLS 2

/*  This program stores declares, initializes, and uses a 2D array */
int main() {
  int book_of_values[MAX_PAGES][MAX_ROWS][MAX_COLS] = { {
    {1, 2},
    {3, 4},
    {5, 6}
  } }, 
  { {6, 5},
    {4, 3},
    {2, 1}
  } };
  
  printf("[0][0][0]: %d, [0][0][1]: %d\n", book_of_values[0][0][0], book_of_values[0][0][1]);
  printf("[0][1][0]: %d, [0][1][1]: %d\n", book_of_values[0][1][0], book_of_values[0][1][1]);
  printf("[0][2][0]: %d, [0][2][1]: %d\n", book_of_values[0][2][0], book_of_values[0][2][1]);
  printf("[1][0][0]: %d, [1][0][1]: %d\n", book_of_values[1][0][0], book_of_values[1][0][1]);
  printf("[1][1][0]: %d, [1][1][1]: %d\n", book_of_values[1][1][0], book_of_values[1][1][1]);
  printf("[1][2][0]: %d, [1][2][1]: %d\n", book_of_values[1][2][0], book_of_values[1][2][1]);
  return 0;
}